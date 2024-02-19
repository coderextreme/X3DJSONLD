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
    X3D model = new blenderSkeleton().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/blenderSkeleton.new.java.x3d");
    model.toFileJSON("../data/blenderSkeleton.new.json");
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
            .addSkeleton(((HAnimJoint)new HAnimJoint("hanim_humanoid").setName("Armature").setDEF("hanim_Armature").setUlimit(new MFFloat2().getArray()).setLlimit(new MFFloat3().getArray()).setContainerFieldOverride("skeleton"))
              .addChild(new HAnimSegment("hanim_Armature").setName("SEGMENT_FOR_Armature").setDEF("hanim_SEGMENT_FOR_Armature")
                .addChild(new TouchSensor().setDescription("joint Armature segment SEGMENT_FOR_Armature"))
                .addChild(new Transform()
                  .addChild(new Shape().setUSE("JointShape")))
                .addChild(new HAnimSite("hanim_SEGMENT_FOR_Armature").setName("SEGMENT_FOR_Armature_tip").setDEF("hanim_SEGMENT_FOR_Armature_tip")
                  .addChild(new Transform()
                    .addChild(new Shape().setUSE("SiteShape")))))
              .addChild(new HAnimJoint("hanim_Armature").setName("sacrum").setDEF("hanim_sacrum").setCenter(new double[] {-0.0002,-0.1178,0.8174}).setUlimit(new MFFloat4().getArray()).setLlimit(new MFFloat5().getArray())
                .addChild(new HAnimSegment("hanim_sacrum").setName("SEGMENT_FOR_sacrum").setDEF("hanim_SEGMENT_FOR_sacrum")
                  .addChild(new TouchSensor().setDescription("joint sacrum segment SEGMENT_FOR_sacrum"))
                  .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1178,0.8174})
                    .addChild(new Shape().setUSE("JointShape")))
                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_sacrum").setName("SEGMENT_FOR_sacrum_tip").setDEF("hanim_SEGMENT_FOR_sacrum_tip")
                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1178,0.8174})
                      .addChild(new Shape().setUSE("SiteShape")))))
                .addChild(new HAnimJoint("hanim_sacrum").setName("pelvis").setDEF("hanim_pelvis").setCenter(new double[] {-0.0002,-0.1178,0.6986}).setUlimit(new MFFloat6().getArray()).setLlimit(new MFFloat7().getArray())
                  .addChild(new HAnimSegment("hanim_pelvis").setName("SEGMENT_FOR_pelvis").setDEF("hanim_SEGMENT_FOR_pelvis")
                    .addChild(new TouchSensor().setDescription("joint pelvis segment SEGMENT_FOR_pelvis"))
                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1178,0.6986})
                      .addChild(new Shape().setUSE("JointShape")))
                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_pelvis").setName("SEGMENT_FOR_pelvis_tip").setDEF("hanim_SEGMENT_FOR_pelvis_tip")
                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1178,0.6986})
                        .addChild(new Shape().setUSE("SiteShape")))))
                  .addChild(new HAnimJoint("hanim_pelvis").setName("l_thigh").setDEF("hanim_l_thigh").setCenter(new double[] {0.0945,-0.1202,0.8181}).setUlimit(new MFFloat8().getArray()).setLlimit(new MFFloat9().getArray())
                    .addChild(new HAnimSegment("hanim_l_thigh").setName("SEGMENT_FOR_l_thigh").setDEF("hanim_SEGMENT_FOR_l_thigh")
                      .addChild(new TouchSensor().setDescription("joint l_thigh segment SEGMENT_FOR_l_thigh"))
                      .addChild(new Transform().setTranslation(new double[] {0.0945,-0.1202,0.8181})
                        .addChild(new Shape().setUSE("JointShape")))
                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_thigh").setName("SEGMENT_FOR_l_thigh_tip").setDEF("hanim_SEGMENT_FOR_l_thigh_tip")
                        .addChild(new Transform().setTranslation(new double[] {0.0945,-0.1202,0.8181})
                          .addChild(new Shape().setUSE("SiteShape")))))
                    .addChild(new HAnimJoint("hanim_l_thigh").setName("l_calf").setDEF("hanim_l_calf").setCenter(new double[] {0.0924,-0.1213,0.4003}).setUlimit(new MFFloat10().getArray()).setLlimit(new MFFloat11().getArray())
                      .addChild(new HAnimSegment("hanim_l_calf").setName("SEGMENT_FOR_l_calf").setDEF("hanim_SEGMENT_FOR_l_calf")
                        .addChild(new TouchSensor().setDescription("joint l_calf segment SEGMENT_FOR_l_calf"))
                        .addChild(new Transform().setTranslation(new double[] {0.0924,-0.1213,0.4003})
                          .addChild(new Shape().setUSE("JointShape")))
                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_calf").setName("SEGMENT_FOR_l_calf_tip").setDEF("hanim_SEGMENT_FOR_l_calf_tip")
                          .addChild(new Transform().setTranslation(new double[] {0.0924,-0.1213,0.4003})
                            .addChild(new Shape().setUSE("SiteShape")))))
                      .addChild(new HAnimJoint("hanim_l_calf").setName("l_talus").setDEF("hanim_l_talus").setCenter(new double[] {0.0886,-0.1123,0.0869}).setUlimit(new MFFloat12().getArray()).setLlimit(new MFFloat13().getArray())
                        .addChild(new HAnimSegment("hanim_l_talus").setName("SEGMENT_FOR_l_talus").setDEF("hanim_SEGMENT_FOR_l_talus")
                          .addChild(new TouchSensor().setDescription("joint l_talus segment SEGMENT_FOR_l_talus"))
                          .addChild(new Transform().setTranslation(new double[] {0.0886,-0.1123,0.0869})
                            .addChild(new Shape().setUSE("JointShape")))
                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_talus").setName("SEGMENT_FOR_l_talus_tip").setDEF("hanim_SEGMENT_FOR_l_talus_tip")
                            .addChild(new Transform().setTranslation(new double[] {0.0886,-0.1123,0.0869})
                              .addChild(new Shape().setUSE("SiteShape")))))
                        .addChild(new HAnimJoint("hanim_l_talus").setName("l_navicular").setDEF("hanim_l_navicular").setCenter(new double[] {0.0781,-0.097,0.0283}).setUlimit(new MFFloat14().getArray()).setLlimit(new MFFloat15().getArray())
                          .addChild(new HAnimSegment("hanim_l_navicular").setName("SEGMENT_FOR_l_navicular").setDEF("hanim_SEGMENT_FOR_l_navicular")
                            .addChild(new TouchSensor().setDescription("joint l_navicular segment SEGMENT_FOR_l_navicular"))
                            .addChild(new Transform().setTranslation(new double[] {0.0781,-0.097,0.0283})
                              .addChild(new Shape().setUSE("JointShape")))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_navicular").setName("SEGMENT_FOR_l_navicular_tip").setDEF("hanim_SEGMENT_FOR_l_navicular_tip")
                              .addChild(new Transform().setTranslation(new double[] {0.0781,-0.097,0.0283})
                                .addChild(new Shape().setUSE("SiteShape")))))
                          .addChild(new HAnimJoint("hanim_l_navicular").setName("l_cuneiform_1").setDEF("hanim_l_cuneiform_1").setCenter(new double[] {0.0672,-0.0835,0.0235}).setUlimit(new MFFloat16().getArray()).setLlimit(new MFFloat17().getArray())
                            .addChild(new HAnimSegment("hanim_l_cuneiform_1").setName("SEGMENT_FOR_l_cuneiform_1").setDEF("hanim_SEGMENT_FOR_l_cuneiform_1")
                              .addChild(new TouchSensor().setDescription("joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1"))
                              .addChild(new Transform().setTranslation(new double[] {0.0672,-0.0835,0.0235})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuneiform_1").setName("SEGMENT_FOR_l_cuneiform_1_tip").setDEF("hanim_SEGMENT_FOR_l_cuneiform_1_tip")
                                .addChild(new Transform().setTranslation(new double[] {0.0672,-0.0835,0.0235})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_l_cuneiform_1").setName("l_metatarsal_1").setDEF("hanim_l_metatarsal_1").setCenter(new double[] {0.0644,-0.0577,0.0147}).setUlimit(new MFFloat18().getArray()).setLlimit(new MFFloat19().getArray())
                              .addChild(new HAnimSegment("hanim_l_metatarsal_1").setName("SEGMENT_FOR_l_metatarsal_1").setDEF("hanim_SEGMENT_FOR_l_metatarsal_1")
                                .addChild(new TouchSensor().setDescription("joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1"))
                                .addChild(new Transform().setTranslation(new double[] {0.0644,-0.0577,0.0147})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_1").setName("SEGMENT_FOR_l_metatarsal_1_tip").setDEF("hanim_SEGMENT_FOR_l_metatarsal_1_tip")
                                  .addChild(new Transform().setTranslation(new double[] {0.0644,-0.0577,0.0147})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_1").setName("l_tarsal_proximal_phalanx_1").setDEF("hanim_l_tarsal_proximal_phalanx_1").setCenter(new double[] {0.0619,-0.0083,0.0059}).setUlimit(new MFFloat20().getArray()).setLlimit(new MFFloat21().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_1").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_1").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1")
                                  .addChild(new TouchSensor().setDescription("joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1"))
                                  .addChild(new Transform().setTranslation(new double[] {0.0619,-0.0083,0.0059})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip")
                                    .addChild(new Transform().setTranslation(new double[] {0.0619,-0.0083,0.0059})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_1").setName("l_tarsal_distal_phalanx_1").setDEF("hanim_l_tarsal_distal_phalanx_1").setUlimit(new MFFloat22().getArray()).setLlimit(new MFFloat23().getArray())
                                  .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_1").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_1").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1")
                                    .addChild(new TouchSensor().setDescription("joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1"))
                                    .addChild(new Transform()
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip")
                                      .addChild(new Transform()
                                        .addChild(new Shape().setUSE("SiteShape")))))))))
                          .addChild(new HAnimJoint("hanim_l_navicular").setName("l_cuneiform_2").setDEF("hanim_l_cuneiform_2").setCenter(new double[] {0.0812,-0.0805,0.025}).setUlimit(new MFFloat24().getArray()).setLlimit(new MFFloat25().getArray())
                            .addChild(new HAnimSegment("hanim_l_cuneiform_2").setName("SEGMENT_FOR_l_cuneiform_2").setDEF("hanim_SEGMENT_FOR_l_cuneiform_2")
                              .addChild(new TouchSensor().setDescription("joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2"))
                              .addChild(new Transform().setTranslation(new double[] {0.0812,-0.0805,0.025})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuneiform_2").setName("SEGMENT_FOR_l_cuneiform_2_tip").setDEF("hanim_SEGMENT_FOR_l_cuneiform_2_tip")
                                .addChild(new Transform().setTranslation(new double[] {0.0812,-0.0805,0.025})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_l_cuneiform_2").setName("l_metatarsal_2").setDEF("hanim_l_metatarsal_2").setCenter(new double[] {0.08,-0.0608,0.0175}).setUlimit(new MFFloat26().getArray()).setLlimit(new MFFloat27().getArray())
                              .addChild(new HAnimSegment("hanim_l_metatarsal_2").setName("SEGMENT_FOR_l_metatarsal_2").setDEF("hanim_SEGMENT_FOR_l_metatarsal_2")
                                .addChild(new TouchSensor().setDescription("joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2"))
                                .addChild(new Transform().setTranslation(new double[] {0.08,-0.0608,0.0175})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_2").setName("SEGMENT_FOR_l_metatarsal_2_tip").setDEF("hanim_SEGMENT_FOR_l_metatarsal_2_tip")
                                  .addChild(new Transform().setTranslation(new double[] {0.08,-0.0608,0.0175})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_2").setName("l_tarsal_proximal_phalanx_2").setDEF("hanim_l_tarsal_proximal_phalanx_2").setCenter(new double[] {0.0824,-0.004,0.0064}).setUlimit(new MFFloat28().getArray()).setLlimit(new MFFloat29().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_2").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_2").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2")
                                  .addChild(new TouchSensor().setDescription("joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2"))
                                  .addChild(new Transform().setTranslation(new double[] {0.0824,-0.004,0.0064})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip")
                                    .addChild(new Transform().setTranslation(new double[] {0.0824,-0.004,0.0064})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_2").setName("l_tarsal_middle_phalanx_2").setDEF("hanim_l_tarsal_middle_phalanx_2").setCenter(new double[] {0.0841,0.0121,0.0041}).setUlimit(new MFFloat30().getArray()).setLlimit(new MFFloat31().getArray())
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_2").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_2").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2")
                                    .addChild(new TouchSensor().setDescription("joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2"))
                                    .addChild(new Transform().setTranslation(new double[] {0.0841,0.0121,0.0041})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip")
                                      .addChild(new Transform().setTranslation(new double[] {0.0841,0.0121,0.0041})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_2").setName("l_tarsal_distal_phalanx_2").setDEF("hanim_l_tarsal_distal_phalanx_2").setCenter(new double[] {0.0841,0.0216,0.0013}).setUlimit(new MFFloat32().getArray()).setLlimit(new MFFloat33().getArray())
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_2").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_2").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2")
                                      .addChild(new TouchSensor().setDescription("joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2"))
                                      .addChild(new Transform().setTranslation(new double[] {0.0841,0.0216,0.0013})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip")
                                        .addChild(new Transform().setTranslation(new double[] {0.0841,0.0216,0.0013})
                                          .addChild(new Shape().setUSE("SiteShape"))))))))))
                          .addChild(new HAnimJoint("hanim_l_navicular").setName("l_cuneiform_3").setDEF("hanim_l_cuneiform_3").setCenter(new double[] {0.0928,-0.0821,0.0248}).setUlimit(new MFFloat34().getArray()).setLlimit(new MFFloat35().getArray())
                            .addChild(new HAnimSegment("hanim_l_cuneiform_3").setName("SEGMENT_FOR_l_cuneiform_3").setDEF("hanim_SEGMENT_FOR_l_cuneiform_3")
                              .addChild(new TouchSensor().setDescription("joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3"))
                              .addChild(new Transform().setTranslation(new double[] {0.0928,-0.0821,0.0248})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuneiform_3").setName("SEGMENT_FOR_l_cuneiform_3_tip").setDEF("hanim_SEGMENT_FOR_l_cuneiform_3_tip")
                                .addChild(new Transform().setTranslation(new double[] {0.0928,-0.0821,0.0248})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_l_cuneiform_3").setName("l_metatarsal_3").setDEF("hanim_l_metatarsal_3").setCenter(new double[] {0.0944,-0.0625,0.0175}).setUlimit(new MFFloat36().getArray()).setLlimit(new MFFloat37().getArray())
                              .addChild(new HAnimSegment("hanim_l_metatarsal_3").setName("SEGMENT_FOR_l_metatarsal_3").setDEF("hanim_SEGMENT_FOR_l_metatarsal_3")
                                .addChild(new TouchSensor().setDescription("joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3"))
                                .addChild(new Transform().setTranslation(new double[] {0.0944,-0.0625,0.0175})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_3").setName("SEGMENT_FOR_l_metatarsal_3_tip").setDEF("hanim_SEGMENT_FOR_l_metatarsal_3_tip")
                                  .addChild(new Transform().setTranslation(new double[] {0.0944,-0.0625,0.0175})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_3").setName("l_tarsal_proximal_phalanx_3").setDEF("hanim_l_tarsal_proximal_phalanx_3").setCenter(new double[] {0.0963,-0.0065,0.0065}).setUlimit(new MFFloat38().getArray()).setLlimit(new MFFloat39().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_3").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_3").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3")
                                  .addChild(new TouchSensor().setDescription("joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3"))
                                  .addChild(new Transform().setTranslation(new double[] {0.0963,-0.0065,0.0065})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip")
                                    .addChild(new Transform().setTranslation(new double[] {0.0963,-0.0065,0.0065})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_3").setName("l_tarsal_middle_phalanx_3").setDEF("hanim_l_tarsal_middle_phalanx_3").setCenter(new double[] {0.0987,0.0086,0.0034}).setUlimit(new MFFloat40().getArray()).setLlimit(new MFFloat41().getArray())
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_3").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_3").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3")
                                    .addChild(new TouchSensor().setDescription("joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3"))
                                    .addChild(new Transform().setTranslation(new double[] {0.0987,0.0086,0.0034})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip")
                                      .addChild(new Transform().setTranslation(new double[] {0.0987,0.0086,0.0034})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_3").setName("l_tarsal_distal_phalanx_3").setDEF("hanim_l_tarsal_distal_phalanx_3").setCenter(new double[] {0.1002,0.0178,0.0013}).setUlimit(new MFFloat42().getArray()).setLlimit(new MFFloat43().getArray())
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_3").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_3").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3")
                                      .addChild(new TouchSensor().setDescription("joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3"))
                                      .addChild(new Transform().setTranslation(new double[] {0.1002,0.0178,0.0013})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip")
                                        .addChild(new Transform().setTranslation(new double[] {0.1002,0.0178,0.0013})
                                          .addChild(new Shape().setUSE("SiteShape")))))))))))
                        .addChild(new HAnimJoint("hanim_l_talus").setName("l_calcaneus").setDEF("hanim_l_calcaneus").setCenter(new double[] {0.0889,-0.1278,0.0494}).setUlimit(new MFFloat44().getArray()).setLlimit(new MFFloat45().getArray())
                          .addChild(new HAnimSegment("hanim_l_calcaneus").setName("SEGMENT_FOR_l_calcaneus").setDEF("hanim_SEGMENT_FOR_l_calcaneus")
                            .addChild(new TouchSensor().setDescription("joint l_calcaneus segment SEGMENT_FOR_l_calcaneus"))
                            .addChild(new Transform().setTranslation(new double[] {0.0889,-0.1278,0.0494})
                              .addChild(new Shape().setUSE("JointShape")))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_calcaneus").setName("SEGMENT_FOR_l_calcaneus_tip").setDEF("hanim_SEGMENT_FOR_l_calcaneus_tip")
                              .addChild(new Transform().setTranslation(new double[] {0.0889,-0.1278,0.0494})
                                .addChild(new Shape().setUSE("SiteShape")))))
                          .addChild(new HAnimJoint("hanim_l_calcaneus").setName("l_cuboid").setDEF("hanim_l_cuboid").setCenter(new double[] {0.1105,-0.0998,0.0267}).setUlimit(new MFFloat46().getArray()).setLlimit(new MFFloat47().getArray())
                            .addChild(new HAnimSegment("hanim_l_cuboid").setName("SEGMENT_FOR_l_cuboid").setDEF("hanim_SEGMENT_FOR_l_cuboid")
                              .addChild(new TouchSensor().setDescription("joint l_cuboid segment SEGMENT_FOR_l_cuboid"))
                              .addChild(new Transform().setTranslation(new double[] {0.1105,-0.0998,0.0267})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuboid").setName("SEGMENT_FOR_l_cuboid_tip").setDEF("hanim_SEGMENT_FOR_l_cuboid_tip")
                                .addChild(new Transform().setTranslation(new double[] {0.1105,-0.0998,0.0267})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_l_cuboid").setName("l_metatarsal_4").setDEF("hanim_l_metatarsal_4").setCenter(new double[] {0.1063,-0.0634,0.016}).setUlimit(new MFFloat48().getArray()).setLlimit(new MFFloat49().getArray())
                              .addChild(new HAnimSegment("hanim_l_metatarsal_4").setName("SEGMENT_FOR_l_metatarsal_4").setDEF("hanim_SEGMENT_FOR_l_metatarsal_4")
                                .addChild(new TouchSensor().setDescription("joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4"))
                                .addChild(new Transform().setTranslation(new double[] {0.1063,-0.0634,0.016})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_4").setName("SEGMENT_FOR_l_metatarsal_4_tip").setDEF("hanim_SEGMENT_FOR_l_metatarsal_4_tip")
                                  .addChild(new Transform().setTranslation(new double[] {0.1063,-0.0634,0.016})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_4").setName("l_tarsal_proximal_phalanx_4").setDEF("hanim_l_tarsal_proximal_phalanx_4").setCenter(new double[] {0.1097,-0.0107,0.0058}).setUlimit(new MFFloat50().getArray()).setLlimit(new MFFloat51().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_4").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_4").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4")
                                  .addChild(new TouchSensor().setDescription("joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4"))
                                  .addChild(new Transform().setTranslation(new double[] {0.1097,-0.0107,0.0058})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip")
                                    .addChild(new Transform().setTranslation(new double[] {0.1097,-0.0107,0.0058})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_4").setName("l_tarsal_middle_phalanx_4").setDEF("hanim_l_tarsal_middle_phalanx_4").setCenter(new double[] {0.114,0.0044,0.0037}).setUlimit(new MFFloat52().getArray()).setLlimit(new MFFloat53().getArray())
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_4").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_4").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4")
                                    .addChild(new TouchSensor().setDescription("joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4"))
                                    .addChild(new Transform().setTranslation(new double[] {0.114,0.0044,0.0037})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip")
                                      .addChild(new Transform().setTranslation(new double[] {0.114,0.0044,0.0037})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_4").setName("l_tarsal_distal_phalanx_4").setDEF("hanim_l_tarsal_distal_phalanx_4").setCenter(new double[] {0.1155,0.0118,0.0008}).setUlimit(new MFFloat54().getArray()).setLlimit(new MFFloat55().getArray())
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_4").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_4").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4")
                                      .addChild(new TouchSensor().setDescription("joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4"))
                                      .addChild(new Transform().setTranslation(new double[] {0.1155,0.0118,0.0008})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip")
                                        .addChild(new Transform().setTranslation(new double[] {0.1155,0.0118,0.0008})
                                          .addChild(new Shape().setUSE("SiteShape")))))))))
                            .addChild(new HAnimJoint("hanim_l_cuboid").setName("l_metatarsal_5").setDEF("hanim_l_metatarsal_5").setCenter(new double[] {0.1206,-0.0671,0.0124}).setUlimit(new MFFloat56().getArray()).setLlimit(new MFFloat57().getArray())
                              .addChild(new HAnimSegment("hanim_l_metatarsal_5").setName("SEGMENT_FOR_l_metatarsal_5").setDEF("hanim_SEGMENT_FOR_l_metatarsal_5")
                                .addChild(new TouchSensor().setDescription("joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5"))
                                .addChild(new Transform().setTranslation(new double[] {0.1206,-0.0671,0.0124})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_5").setName("SEGMENT_FOR_l_metatarsal_5_tip").setDEF("hanim_SEGMENT_FOR_l_metatarsal_5_tip")
                                  .addChild(new Transform().setTranslation(new double[] {0.1206,-0.0671,0.0124})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_5").setName("l_tarsal_proximal_phalanx_5").setDEF("hanim_l_tarsal_proximal_phalanx_5").setCenter(new double[] {0.1239,-0.0153,0.0051}).setUlimit(new MFFloat58().getArray()).setLlimit(new MFFloat59().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_5").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_5").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5")
                                  .addChild(new TouchSensor().setDescription("joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5"))
                                  .addChild(new Transform().setTranslation(new double[] {0.1239,-0.0153,0.0051})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip")
                                    .addChild(new Transform().setTranslation(new double[] {0.1239,-0.0153,0.0051})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_5").setName("l_tarsal_middle_phalanx_5").setDEF("hanim_l_tarsal_middle_phalanx_5").setCenter(new double[] {0.1262,-0.0077,0.0023}).setUlimit(new MFFloat60().getArray()).setLlimit(new MFFloat61().getArray())
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_5").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_5").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5")
                                    .addChild(new TouchSensor().setDescription("joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5"))
                                    .addChild(new Transform().setTranslation(new double[] {0.1262,-0.0077,0.0023})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip")
                                      .addChild(new Transform().setTranslation(new double[] {0.1262,-0.0077,0.0023})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_5").setName("l_tarsal_distal_phalanx_5").setDEF("hanim_l_tarsal_distal_phalanx_5").setCenter(new double[] {0.1271,0,0}).setUlimit(new MFFloat62().getArray()).setLlimit(new MFFloat63().getArray())
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_5").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_5").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5")
                                      .addChild(new TouchSensor().setDescription("joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5"))
                                      .addChild(new Transform().setTranslation(new double[] {0.1271,0,0})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip")
                                        .addChild(new Transform().setTranslation(new double[] {0.1271,0,0})
                                          .addChild(new Shape().setUSE("SiteShape"))))))))))))))
                  .addChild(new HAnimJoint("hanim_pelvis").setName("r_thigh").setDEF("hanim_r_thigh").setCenter(new double[] {-0.0948,-0.1202,0.8181}).setUlimit(new MFFloat64().getArray()).setLlimit(new MFFloat65().getArray())
                    .addChild(new HAnimSegment("hanim_r_thigh").setName("SEGMENT_FOR_r_thigh").setDEF("hanim_SEGMENT_FOR_r_thigh")
                      .addChild(new TouchSensor().setDescription("joint r_thigh segment SEGMENT_FOR_r_thigh"))
                      .addChild(new Transform().setTranslation(new double[] {-0.0948,-0.1202,0.8181})
                        .addChild(new Shape().setUSE("JointShape")))
                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_thigh").setName("SEGMENT_FOR_r_thigh_tip").setDEF("hanim_SEGMENT_FOR_r_thigh_tip")
                        .addChild(new Transform().setTranslation(new double[] {-0.0948,-0.1202,0.8181})
                          .addChild(new Shape().setUSE("SiteShape")))))
                    .addChild(new HAnimJoint("hanim_r_thigh").setName("r_calf").setDEF("hanim_r_calf").setCenter(new double[] {-0.0928,-0.1213,0.4003}).setUlimit(new MFFloat66().getArray()).setLlimit(new MFFloat67().getArray())
                      .addChild(new HAnimSegment("hanim_r_calf").setName("SEGMENT_FOR_r_calf").setDEF("hanim_SEGMENT_FOR_r_calf")
                        .addChild(new TouchSensor().setDescription("joint r_calf segment SEGMENT_FOR_r_calf"))
                        .addChild(new Transform().setTranslation(new double[] {-0.0928,-0.1213,0.4003})
                          .addChild(new Shape().setUSE("JointShape")))
                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_calf").setName("SEGMENT_FOR_r_calf_tip").setDEF("hanim_SEGMENT_FOR_r_calf_tip")
                          .addChild(new Transform().setTranslation(new double[] {-0.0928,-0.1213,0.4003})
                            .addChild(new Shape().setUSE("SiteShape")))))
                      .addChild(new HAnimJoint("hanim_r_calf").setName("r_talus").setDEF("hanim_r_talus").setCenter(new double[] {-0.0886,-0.1123,0.0869}).setUlimit(new MFFloat68().getArray()).setLlimit(new MFFloat69().getArray())
                        .addChild(new HAnimSegment("hanim_r_talus").setName("SEGMENT_FOR_r_talus").setDEF("hanim_SEGMENT_FOR_r_talus")
                          .addChild(new TouchSensor().setDescription("joint r_talus segment SEGMENT_FOR_r_talus"))
                          .addChild(new Transform().setTranslation(new double[] {-0.0886,-0.1123,0.0869})
                            .addChild(new Shape().setUSE("JointShape")))
                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_talus").setName("SEGMENT_FOR_r_talus_tip").setDEF("hanim_SEGMENT_FOR_r_talus_tip")
                            .addChild(new Transform().setTranslation(new double[] {-0.0886,-0.1123,0.0869})
                              .addChild(new Shape().setUSE("SiteShape")))))
                        .addChild(new HAnimJoint("hanim_r_talus").setName("r_navicular").setDEF("hanim_r_navicular").setCenter(new double[] {-0.0781,-0.097,0.0283}).setUlimit(new MFFloat70().getArray()).setLlimit(new MFFloat71().getArray())
                          .addChild(new HAnimSegment("hanim_r_navicular").setName("SEGMENT_FOR_r_navicular").setDEF("hanim_SEGMENT_FOR_r_navicular")
                            .addChild(new TouchSensor().setDescription("joint r_navicular segment SEGMENT_FOR_r_navicular"))
                            .addChild(new Transform().setTranslation(new double[] {-0.0781,-0.097,0.0283})
                              .addChild(new Shape().setUSE("JointShape")))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_navicular").setName("SEGMENT_FOR_r_navicular_tip").setDEF("hanim_SEGMENT_FOR_r_navicular_tip")
                              .addChild(new Transform().setTranslation(new double[] {-0.0781,-0.097,0.0283})
                                .addChild(new Shape().setUSE("SiteShape")))))
                          .addChild(new HAnimJoint("hanim_r_navicular").setName("r_cuneiform_1").setDEF("hanim_r_cuneiform_1").setCenter(new double[] {-0.0672,-0.0835,0.0235}).setUlimit(new MFFloat72().getArray()).setLlimit(new MFFloat73().getArray())
                            .addChild(new HAnimSegment("hanim_r_cuneiform_1").setName("SEGMENT_FOR_r_cuneiform_1").setDEF("hanim_SEGMENT_FOR_r_cuneiform_1")
                              .addChild(new TouchSensor().setDescription("joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1"))
                              .addChild(new Transform().setTranslation(new double[] {-0.0672,-0.0835,0.0235})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuneiform_1").setName("SEGMENT_FOR_r_cuneiform_1_tip").setDEF("hanim_SEGMENT_FOR_r_cuneiform_1_tip")
                                .addChild(new Transform().setTranslation(new double[] {-0.0672,-0.0835,0.0235})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_r_cuneiform_1").setName("r_metatarsal_1").setDEF("hanim_r_metatarsal_1").setCenter(new double[] {-0.0644,-0.0577,0.0147}).setUlimit(new MFFloat74().getArray()).setLlimit(new MFFloat75().getArray())
                              .addChild(new HAnimSegment("hanim_r_metatarsal_1").setName("SEGMENT_FOR_r_metatarsal_1").setDEF("hanim_SEGMENT_FOR_r_metatarsal_1")
                                .addChild(new TouchSensor().setDescription("joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1"))
                                .addChild(new Transform().setTranslation(new double[] {-0.0644,-0.0577,0.0147})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_1").setName("SEGMENT_FOR_r_metatarsal_1_tip").setDEF("hanim_SEGMENT_FOR_r_metatarsal_1_tip")
                                  .addChild(new Transform().setTranslation(new double[] {-0.0644,-0.0577,0.0147})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_1").setName("r_tarsal_proximal_phalanx_1").setDEF("hanim_r_tarsal_proximal_phalanx_1").setCenter(new double[] {-0.0619,-0.0083,0.0059}).setUlimit(new MFFloat76().getArray()).setLlimit(new MFFloat77().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_1").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_1").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1")
                                  .addChild(new TouchSensor().setDescription("joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1"))
                                  .addChild(new Transform().setTranslation(new double[] {-0.0619,-0.0083,0.0059})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip")
                                    .addChild(new Transform().setTranslation(new double[] {-0.0619,-0.0083,0.0059})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_1").setName("r_tarsal_distal_phalanx_1").setDEF("hanim_r_tarsal_distal_phalanx_1").setUlimit(new MFFloat78().getArray()).setLlimit(new MFFloat79().getArray())
                                  .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_1").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_1").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1")
                                    .addChild(new TouchSensor().setDescription("joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1"))
                                    .addChild(new Transform()
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip")
                                      .addChild(new Transform()
                                        .addChild(new Shape().setUSE("SiteShape")))))))))
                          .addChild(new HAnimJoint("hanim_r_navicular").setName("r_cuneiform_2").setDEF("hanim_r_cuneiform_2").setCenter(new double[] {-0.0812,-0.0805,0.025}).setUlimit(new MFFloat80().getArray()).setLlimit(new MFFloat81().getArray())
                            .addChild(new HAnimSegment("hanim_r_cuneiform_2").setName("SEGMENT_FOR_r_cuneiform_2").setDEF("hanim_SEGMENT_FOR_r_cuneiform_2")
                              .addChild(new TouchSensor().setDescription("joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2"))
                              .addChild(new Transform().setTranslation(new double[] {-0.0812,-0.0805,0.025})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuneiform_2").setName("SEGMENT_FOR_r_cuneiform_2_tip").setDEF("hanim_SEGMENT_FOR_r_cuneiform_2_tip")
                                .addChild(new Transform().setTranslation(new double[] {-0.0812,-0.0805,0.025})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_r_cuneiform_2").setName("r_metatarsal_2").setDEF("hanim_r_metatarsal_2").setCenter(new double[] {-0.08,-0.0608,0.0175}).setUlimit(new MFFloat82().getArray()).setLlimit(new MFFloat83().getArray())
                              .addChild(new HAnimSegment("hanim_r_metatarsal_2").setName("SEGMENT_FOR_r_metatarsal_2").setDEF("hanim_SEGMENT_FOR_r_metatarsal_2")
                                .addChild(new TouchSensor().setDescription("joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2"))
                                .addChild(new Transform().setTranslation(new double[] {-0.08,-0.0608,0.0175})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_2").setName("SEGMENT_FOR_r_metatarsal_2_tip").setDEF("hanim_SEGMENT_FOR_r_metatarsal_2_tip")
                                  .addChild(new Transform().setTranslation(new double[] {-0.08,-0.0608,0.0175})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_2").setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2").setCenter(new double[] {-0.0823,-0.004,0.0064}).setUlimit(new MFFloat84().getArray()).setLlimit(new MFFloat85().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_2").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_2").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2")
                                  .addChild(new TouchSensor().setDescription("joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2"))
                                  .addChild(new Transform().setTranslation(new double[] {-0.0823,-0.004,0.0064})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip")
                                    .addChild(new Transform().setTranslation(new double[] {-0.0823,-0.004,0.0064})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_2").setName("r_tarsal_middle_phalanx_2").setDEF("hanim_r_tarsal_middle_phalanx_2").setCenter(new double[] {-0.0841,0.0121,0.0041}).setUlimit(new MFFloat86().getArray()).setLlimit(new MFFloat87().getArray())
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_2").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_2").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2")
                                    .addChild(new TouchSensor().setDescription("joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2"))
                                    .addChild(new Transform().setTranslation(new double[] {-0.0841,0.0121,0.0041})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip")
                                      .addChild(new Transform().setTranslation(new double[] {-0.0841,0.0121,0.0041})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_2").setName("r_tarsal_distal_phalanx_2").setDEF("hanim_r_tarsal_distal_phalanx_2").setCenter(new double[] {-0.0841,0.0216,0.0013}).setUlimit(new MFFloat88().getArray()).setLlimit(new MFFloat89().getArray())
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_2").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_2").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2")
                                      .addChild(new TouchSensor().setDescription("joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2"))
                                      .addChild(new Transform().setTranslation(new double[] {-0.0841,0.0216,0.0013})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip")
                                        .addChild(new Transform().setTranslation(new double[] {-0.0841,0.0216,0.0013})
                                          .addChild(new Shape().setUSE("SiteShape"))))))))))
                          .addChild(new HAnimJoint("hanim_r_navicular").setName("r_cuneiform_3").setDEF("hanim_r_cuneiform_3").setCenter(new double[] {-0.0928,-0.0821,0.0248}).setUlimit(new MFFloat90().getArray()).setLlimit(new MFFloat91().getArray())
                            .addChild(new HAnimSegment("hanim_r_cuneiform_3").setName("SEGMENT_FOR_r_cuneiform_3").setDEF("hanim_SEGMENT_FOR_r_cuneiform_3")
                              .addChild(new TouchSensor().setDescription("joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3"))
                              .addChild(new Transform().setTranslation(new double[] {-0.0928,-0.0821,0.0248})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuneiform_3").setName("SEGMENT_FOR_r_cuneiform_3_tip").setDEF("hanim_SEGMENT_FOR_r_cuneiform_3_tip")
                                .addChild(new Transform().setTranslation(new double[] {-0.0928,-0.0821,0.0248})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_r_cuneiform_3").setName("r_metatarsal_3").setDEF("hanim_r_metatarsal_3").setCenter(new double[] {-0.0944,-0.0625,0.0175}).setUlimit(new MFFloat92().getArray()).setLlimit(new MFFloat93().getArray())
                              .addChild(new HAnimSegment("hanim_r_metatarsal_3").setName("SEGMENT_FOR_r_metatarsal_3").setDEF("hanim_SEGMENT_FOR_r_metatarsal_3")
                                .addChild(new TouchSensor().setDescription("joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3"))
                                .addChild(new Transform().setTranslation(new double[] {-0.0944,-0.0625,0.0175})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_3").setName("SEGMENT_FOR_r_metatarsal_3_tip").setDEF("hanim_SEGMENT_FOR_r_metatarsal_3_tip")
                                  .addChild(new Transform().setTranslation(new double[] {-0.0944,-0.0625,0.0175})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_3").setName("r_tarsal_proximal_phalanx_3").setDEF("hanim_r_tarsal_proximal_phalanx_3").setCenter(new double[] {-0.0963,-0.0065,0.0065}).setUlimit(new MFFloat94().getArray()).setLlimit(new MFFloat95().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_3").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_3").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3")
                                  .addChild(new TouchSensor().setDescription("joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3"))
                                  .addChild(new Transform().setTranslation(new double[] {-0.0963,-0.0065,0.0065})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip")
                                    .addChild(new Transform().setTranslation(new double[] {-0.0963,-0.0065,0.0065})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_3").setName("r_tarsal_middle_phalanx_3").setDEF("hanim_r_tarsal_middle_phalanx_3").setCenter(new double[] {-0.0987,0.0086,0.0034}).setUlimit(new MFFloat96().getArray()).setLlimit(new MFFloat97().getArray())
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_3").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_3").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3")
                                    .addChild(new TouchSensor().setDescription("joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3"))
                                    .addChild(new Transform().setTranslation(new double[] {-0.0987,0.0086,0.0034})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip")
                                      .addChild(new Transform().setTranslation(new double[] {-0.0987,0.0086,0.0034})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_3").setName("r_tarsal_distal_phalanx_3").setDEF("hanim_r_tarsal_distal_phalanx_3").setCenter(new double[] {-0.1002,0.0178,0.0013}).setUlimit(new MFFloat98().getArray()).setLlimit(new MFFloat99().getArray())
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_3").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_3").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3")
                                      .addChild(new TouchSensor().setDescription("joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3"))
                                      .addChild(new Transform().setTranslation(new double[] {-0.1002,0.0178,0.0013})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip")
                                        .addChild(new Transform().setTranslation(new double[] {-0.1002,0.0178,0.0013})
                                          .addChild(new Shape().setUSE("SiteShape")))))))))))
                        .addChild(new HAnimJoint("hanim_r_talus").setName("r_calcaneus").setDEF("hanim_r_calcaneus").setCenter(new double[] {-0.0889,-0.1278,0.0494}).setUlimit(new MFFloat100().getArray()).setLlimit(new MFFloat101().getArray())
                          .addChild(new HAnimSegment("hanim_r_calcaneus").setName("SEGMENT_FOR_r_calcaneus").setDEF("hanim_SEGMENT_FOR_r_calcaneus")
                            .addChild(new TouchSensor().setDescription("joint r_calcaneus segment SEGMENT_FOR_r_calcaneus"))
                            .addChild(new Transform().setTranslation(new double[] {-0.0889,-0.1278,0.0494})
                              .addChild(new Shape().setUSE("JointShape")))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_calcaneus").setName("SEGMENT_FOR_r_calcaneus_tip").setDEF("hanim_SEGMENT_FOR_r_calcaneus_tip")
                              .addChild(new Transform().setTranslation(new double[] {-0.0889,-0.1278,0.0494})
                                .addChild(new Shape().setUSE("SiteShape")))))
                          .addChild(new HAnimJoint("hanim_r_calcaneus").setName("r_cuboid").setDEF("hanim_r_cuboid").setCenter(new double[] {-0.1105,-0.0998,0.0267}).setUlimit(new MFFloat102().getArray()).setLlimit(new MFFloat103().getArray())
                            .addChild(new HAnimSegment("hanim_r_cuboid").setName("SEGMENT_FOR_r_cuboid").setDEF("hanim_SEGMENT_FOR_r_cuboid")
                              .addChild(new TouchSensor().setDescription("joint r_cuboid segment SEGMENT_FOR_r_cuboid"))
                              .addChild(new Transform().setTranslation(new double[] {-0.1105,-0.0998,0.0267})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuboid").setName("SEGMENT_FOR_r_cuboid_tip").setDEF("hanim_SEGMENT_FOR_r_cuboid_tip")
                                .addChild(new Transform().setTranslation(new double[] {-0.1105,-0.0998,0.0267})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_r_cuboid").setName("r_metatarsal_4").setDEF("hanim_r_metatarsal_4").setCenter(new double[] {-0.1063,-0.0634,0.016}).setUlimit(new MFFloat104().getArray()).setLlimit(new MFFloat105().getArray())
                              .addChild(new HAnimSegment("hanim_r_metatarsal_4").setName("SEGMENT_FOR_r_metatarsal_4").setDEF("hanim_SEGMENT_FOR_r_metatarsal_4")
                                .addChild(new TouchSensor().setDescription("joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4"))
                                .addChild(new Transform().setTranslation(new double[] {-0.1063,-0.0634,0.016})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_4").setName("SEGMENT_FOR_r_metatarsal_4_tip").setDEF("hanim_SEGMENT_FOR_r_metatarsal_4_tip")
                                  .addChild(new Transform().setTranslation(new double[] {-0.1063,-0.0634,0.016})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_4").setName("r_tarsal_proximal_phalanx_4").setDEF("hanim_r_tarsal_proximal_phalanx_4").setCenter(new double[] {-0.1097,-0.0107,0.0058}).setUlimit(new MFFloat106().getArray()).setLlimit(new MFFloat107().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_4").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_4").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4")
                                  .addChild(new TouchSensor().setDescription("joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4"))
                                  .addChild(new Transform().setTranslation(new double[] {-0.1097,-0.0107,0.0058})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip")
                                    .addChild(new Transform().setTranslation(new double[] {-0.1097,-0.0107,0.0058})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_4").setName("r_tarsal_middle_phalanx_4").setDEF("hanim_r_tarsal_middle_phalanx_4").setCenter(new double[] {-0.114,0.0044,0.0037}).setUlimit(new MFFloat108().getArray()).setLlimit(new MFFloat109().getArray())
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_4").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_4").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4")
                                    .addChild(new TouchSensor().setDescription("joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4"))
                                    .addChild(new Transform().setTranslation(new double[] {-0.114,0.0044,0.0037})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip")
                                      .addChild(new Transform().setTranslation(new double[] {-0.114,0.0044,0.0037})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_4").setName("r_tarsal_distal_phalanx_4").setDEF("hanim_r_tarsal_distal_phalanx_4").setCenter(new double[] {-0.1155,0.0118,0.0008}).setUlimit(new MFFloat110().getArray()).setLlimit(new MFFloat111().getArray())
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_4").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_4").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4")
                                      .addChild(new TouchSensor().setDescription("joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4"))
                                      .addChild(new Transform().setTranslation(new double[] {-0.1155,0.0118,0.0008})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip")
                                        .addChild(new Transform().setTranslation(new double[] {-0.1155,0.0118,0.0008})
                                          .addChild(new Shape().setUSE("SiteShape")))))))))
                            .addChild(new HAnimJoint("hanim_r_cuboid").setName("r_metatarsal_5").setDEF("hanim_r_metatarsal_5").setCenter(new double[] {-0.1206,-0.0671,0.0124}).setUlimit(new MFFloat112().getArray()).setLlimit(new MFFloat113().getArray())
                              .addChild(new HAnimSegment("hanim_r_metatarsal_5").setName("SEGMENT_FOR_r_metatarsal_5").setDEF("hanim_SEGMENT_FOR_r_metatarsal_5")
                                .addChild(new TouchSensor().setDescription("joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5"))
                                .addChild(new Transform().setTranslation(new double[] {-0.1206,-0.0671,0.0124})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_5").setName("SEGMENT_FOR_r_metatarsal_5_tip").setDEF("hanim_SEGMENT_FOR_r_metatarsal_5_tip")
                                  .addChild(new Transform().setTranslation(new double[] {-0.1206,-0.0671,0.0124})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_5").setName("r_tarsal_proximal_phalanx_5").setDEF("hanim_r_tarsal_proximal_phalanx_5").setCenter(new double[] {-0.1239,-0.0153,0.0051}).setUlimit(new MFFloat114().getArray()).setLlimit(new MFFloat115().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_5").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_5").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5")
                                  .addChild(new TouchSensor().setDescription("joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5"))
                                  .addChild(new Transform().setTranslation(new double[] {-0.1239,-0.0153,0.0051})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip")
                                    .addChild(new Transform().setTranslation(new double[] {-0.1239,-0.0153,0.0051})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_5").setName("r_tarsal_middle_phalanx_5").setDEF("hanim_r_tarsal_middle_phalanx_5").setCenter(new double[] {-0.1262,-0.0077,0.0023}).setUlimit(new MFFloat116().getArray()).setLlimit(new MFFloat117().getArray())
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_5").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_5").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5")
                                    .addChild(new TouchSensor().setDescription("joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5"))
                                    .addChild(new Transform().setTranslation(new double[] {-0.1262,-0.0077,0.0023})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip")
                                      .addChild(new Transform().setTranslation(new double[] {-0.1262,-0.0077,0.0023})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_5").setName("r_tarsal_distal_phalanx_5").setDEF("hanim_r_tarsal_distal_phalanx_5").setCenter(new double[] {-0.1271,0,0}).setUlimit(new MFFloat118().getArray()).setLlimit(new MFFloat119().getArray())
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_5").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_5").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5")
                                      .addChild(new TouchSensor().setDescription("joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5"))
                                      .addChild(new Transform().setTranslation(new double[] {-0.1271,0,0})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip")
                                        .addChild(new Transform().setTranslation(new double[] {-0.1271,0,0})
                                          .addChild(new Shape().setUSE("SiteShape")))))))))))))))
                .addChild(new HAnimJoint("hanim_sacrum").setName("l5").setDEF("hanim_l5").setCenter(new double[] {-0.0002,-0.1156,0.9169}).setUlimit(new MFFloat120().getArray()).setLlimit(new MFFloat121().getArray())
                  .addChild(new HAnimSegment("hanim_l5").setName("SEGMENT_FOR_l5").setDEF("hanim_SEGMENT_FOR_l5")
                    .addChild(new TouchSensor().setDescription("joint l5 segment SEGMENT_FOR_l5"))
                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9169})
                      .addChild(new Shape().setUSE("JointShape")))
                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l5").setName("SEGMENT_FOR_l5_tip").setDEF("hanim_SEGMENT_FOR_l5_tip")
                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9169})
                        .addChild(new Shape().setUSE("SiteShape")))))
                  .addChild(new HAnimJoint("hanim_l5").setName("l4").setDEF("hanim_l4").setCenter(new double[] {-0.0002,-0.1156,0.9412}).setUlimit(new MFFloat122().getArray()).setLlimit(new MFFloat123().getArray())
                    .addChild(new HAnimSegment("hanim_l4").setName("SEGMENT_FOR_l4").setDEF("hanim_SEGMENT_FOR_l4")
                      .addChild(new TouchSensor().setDescription("joint l4 segment SEGMENT_FOR_l4"))
                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9412})
                        .addChild(new Shape().setUSE("JointShape")))
                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l4").setName("SEGMENT_FOR_l4_tip").setDEF("hanim_SEGMENT_FOR_l4_tip")
                        .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9412})
                          .addChild(new Shape().setUSE("SiteShape")))))
                    .addChild(new HAnimJoint("hanim_l4").setName("l3").setDEF("hanim_l3").setCenter(new double[] {-0.0002,-0.1156,0.9574}).setUlimit(new MFFloat124().getArray()).setLlimit(new MFFloat125().getArray())
                      .addChild(new HAnimSegment("hanim_l3").setName("SEGMENT_FOR_l3").setDEF("hanim_SEGMENT_FOR_l3")
                        .addChild(new TouchSensor().setDescription("joint l3 segment SEGMENT_FOR_l3"))
                        .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9574})
                          .addChild(new Shape().setUSE("JointShape")))
                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l3").setName("SEGMENT_FOR_l3_tip").setDEF("hanim_SEGMENT_FOR_l3_tip")
                          .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9574})
                            .addChild(new Shape().setUSE("SiteShape")))))
                      .addChild(new HAnimJoint("hanim_l3").setName("l2").setDEF("hanim_l2").setCenter(new double[] {-0.0002,-0.1156,0.9738}).setUlimit(new MFFloat126().getArray()).setLlimit(new MFFloat127().getArray())
                        .addChild(new HAnimSegment("hanim_l2").setName("SEGMENT_FOR_l2").setDEF("hanim_SEGMENT_FOR_l2")
                          .addChild(new TouchSensor().setDescription("joint l2 segment SEGMENT_FOR_l2"))
                          .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9738})
                            .addChild(new Shape().setUSE("JointShape")))
                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_l2").setName("SEGMENT_FOR_l2_tip").setDEF("hanim_SEGMENT_FOR_l2_tip")
                            .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9738})
                              .addChild(new Shape().setUSE("SiteShape")))))
                        .addChild(new HAnimJoint("hanim_l2").setName("l1").setDEF("hanim_l1").setCenter(new double[] {-0.0002,-0.1156,0.9911}).setUlimit(new MFFloat128().getArray()).setLlimit(new MFFloat129().getArray())
                          .addChild(new HAnimSegment("hanim_l1").setName("SEGMENT_FOR_l1").setDEF("hanim_SEGMENT_FOR_l1")
                            .addChild(new TouchSensor().setDescription("joint l1 segment SEGMENT_FOR_l1"))
                            .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9911})
                              .addChild(new Shape().setUSE("JointShape")))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l1").setName("SEGMENT_FOR_l1_tip").setDEF("hanim_SEGMENT_FOR_l1_tip")
                              .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9911})
                                .addChild(new Shape().setUSE("SiteShape")))))
                          .addChild(new HAnimJoint("hanim_l1").setName("t12").setDEF("hanim_t12").setCenter(new double[] {-0.0002,-0.1156,1.0145}).setUlimit(new MFFloat130().getArray()).setLlimit(new MFFloat131().getArray())
                            .addChild(new HAnimSegment("hanim_t12").setName("SEGMENT_FOR_t12").setDEF("hanim_SEGMENT_FOR_t12")
                              .addChild(new TouchSensor().setDescription("joint t12 segment SEGMENT_FOR_t12"))
                              .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0145})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_t12").setName("SEGMENT_FOR_t12_tip").setDEF("hanim_SEGMENT_FOR_t12_tip")
                                .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0145})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_t12").setName("t11").setDEF("hanim_t11").setCenter(new double[] {-0.0002,-0.1156,1.0381}).setUlimit(new MFFloat132().getArray()).setLlimit(new MFFloat133().getArray())
                              .addChild(new HAnimSegment("hanim_t11").setName("SEGMENT_FOR_t11").setDEF("hanim_SEGMENT_FOR_t11")
                                .addChild(new TouchSensor().setDescription("joint t11 segment SEGMENT_FOR_t11"))
                                .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0381})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_t11").setName("SEGMENT_FOR_t11_tip").setDEF("hanim_SEGMENT_FOR_t11_tip")
                                  .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0381})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_t11").setName("t10").setDEF("hanim_t10").setCenter(new double[] {-0.0002,-0.1157,1.0552}).setUlimit(new MFFloat134().getArray()).setLlimit(new MFFloat135().getArray())
                                .addChild(new HAnimSegment("hanim_t10").setName("SEGMENT_FOR_t10").setDEF("hanim_SEGMENT_FOR_t10")
                                  .addChild(new TouchSensor().setDescription("joint t10 segment SEGMENT_FOR_t10"))
                                  .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1157,1.0552})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_t10").setName("SEGMENT_FOR_t10_tip").setDEF("hanim_SEGMENT_FOR_t10_tip")
                                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1157,1.0552})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_t10").setName("t9").setDEF("hanim_t9").setCenter(new double[] {-0.0002,-0.1156,1.0699}).setUlimit(new MFFloat136().getArray()).setLlimit(new MFFloat137().getArray())
                                  .addChild(new HAnimSegment("hanim_t9").setName("SEGMENT_FOR_t9").setDEF("hanim_SEGMENT_FOR_t9")
                                    .addChild(new TouchSensor().setDescription("joint t9 segment SEGMENT_FOR_t9"))
                                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0699})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_t9").setName("SEGMENT_FOR_t9_tip").setDEF("hanim_SEGMENT_FOR_t9_tip")
                                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0699})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_t9").setName("t8").setDEF("hanim_t8").setCenter(new double[] {-0.0002,-0.1156,1.0845}).setUlimit(new MFFloat138().getArray()).setLlimit(new MFFloat139().getArray())
                                    .addChild(new HAnimSegment("hanim_t8").setName("SEGMENT_FOR_t8").setDEF("hanim_SEGMENT_FOR_t8")
                                      .addChild(new TouchSensor().setDescription("joint t8 segment SEGMENT_FOR_t8"))
                                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0845})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_t8").setName("SEGMENT_FOR_t8_tip").setDEF("hanim_SEGMENT_FOR_t8_tip")
                                        .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0845})
                                          .addChild(new Shape().setUSE("SiteShape")))))
                                    .addChild(new HAnimJoint("hanim_t8").setName("t7").setDEF("hanim_t7").setCenter(new double[] {-0.0002,-0.1156,1.1002}).setUlimit(new MFFloat140().getArray()).setLlimit(new MFFloat141().getArray())
                                      .addChild(new HAnimSegment("hanim_t7").setName("SEGMENT_FOR_t7").setDEF("hanim_SEGMENT_FOR_t7")
                                        .addChild(new TouchSensor().setDescription("joint t7 segment SEGMENT_FOR_t7"))
                                        .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1002})
                                          .addChild(new Shape().setUSE("JointShape")))
                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_t7").setName("SEGMENT_FOR_t7_tip").setDEF("hanim_SEGMENT_FOR_t7_tip")
                                          .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1002})
                                            .addChild(new Shape().setUSE("SiteShape")))))
                                      .addChild(new HAnimJoint("hanim_t7").setName("t6").setDEF("hanim_t6").setCenter(new double[] {-0.0002,-0.1156,1.1131}).setUlimit(new MFFloat142().getArray()).setLlimit(new MFFloat143().getArray())
                                        .addChild(new HAnimSegment("hanim_t6").setName("SEGMENT_FOR_t6").setDEF("hanim_SEGMENT_FOR_t6")
                                          .addChild(new TouchSensor().setDescription("joint t6 segment SEGMENT_FOR_t6"))
                                          .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1131})
                                            .addChild(new Shape().setUSE("JointShape")))
                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_t6").setName("SEGMENT_FOR_t6_tip").setDEF("hanim_SEGMENT_FOR_t6_tip")
                                            .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1131})
                                              .addChild(new Shape().setUSE("SiteShape")))))
                                        .addChild(new HAnimJoint("hanim_t6").setName("t5").setDEF("hanim_t5").setCenter(new double[] {-0.0002,-0.1156,1.1286}).setUlimit(new MFFloat144().getArray()).setLlimit(new MFFloat145().getArray())
                                          .addChild(new HAnimSegment("hanim_t5").setName("SEGMENT_FOR_t5").setDEF("hanim_SEGMENT_FOR_t5")
                                            .addChild(new TouchSensor().setDescription("joint t5 segment SEGMENT_FOR_t5"))
                                            .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1286})
                                              .addChild(new Shape().setUSE("JointShape")))
                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_t5").setName("SEGMENT_FOR_t5_tip").setDEF("hanim_SEGMENT_FOR_t5_tip")
                                              .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1286})
                                                .addChild(new Shape().setUSE("SiteShape")))))
                                          .addChild(new HAnimJoint("hanim_t5").setName("t4").setDEF("hanim_t4").setCenter(new double[] {-0.0002,-0.1156,1.1439}).setUlimit(new MFFloat146().getArray()).setLlimit(new MFFloat147().getArray())
                                            .addChild(new HAnimSegment("hanim_t4").setName("SEGMENT_FOR_t4").setDEF("hanim_SEGMENT_FOR_t4")
                                              .addChild(new TouchSensor().setDescription("joint t4 segment SEGMENT_FOR_t4"))
                                              .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1439})
                                                .addChild(new Shape().setUSE("JointShape")))
                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_t4").setName("SEGMENT_FOR_t4_tip").setDEF("hanim_SEGMENT_FOR_t4_tip")
                                                .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1439})
                                                  .addChild(new Shape().setUSE("SiteShape")))))
                                            .addChild(new HAnimJoint("hanim_t4").setName("t3").setDEF("hanim_t3").setCenter(new double[] {-0.0002,-0.1156,1.1623}).setUlimit(new MFFloat148().getArray()).setLlimit(new MFFloat149().getArray())
                                              .addChild(new HAnimSegment("hanim_t3").setName("SEGMENT_FOR_t3").setDEF("hanim_SEGMENT_FOR_t3")
                                                .addChild(new TouchSensor().setDescription("joint t3 segment SEGMENT_FOR_t3"))
                                                .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1623})
                                                  .addChild(new Shape().setUSE("JointShape")))
                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_t3").setName("SEGMENT_FOR_t3_tip").setDEF("hanim_SEGMENT_FOR_t3_tip")
                                                  .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1623})
                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                              .addChild(new HAnimJoint("hanim_t3").setName("t2").setDEF("hanim_t2").setCenter(new double[] {-0.0002,-0.1157,1.1871}).setUlimit(new MFFloat150().getArray()).setLlimit(new MFFloat151().getArray())
                                                .addChild(new HAnimSegment("hanim_t2").setName("SEGMENT_FOR_t2").setDEF("hanim_SEGMENT_FOR_t2")
                                                  .addChild(new TouchSensor().setDescription("joint t2 segment SEGMENT_FOR_t2"))
                                                  .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1157,1.1871})
                                                    .addChild(new Shape().setUSE("JointShape")))
                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_t2").setName("SEGMENT_FOR_t2_tip").setDEF("hanim_SEGMENT_FOR_t2_tip")
                                                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1157,1.1871})
                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                .addChild(new HAnimJoint("hanim_t2").setName("t1").setDEF("hanim_t1").setCenter(new double[] {-0.0002,-0.1156,1.2109}).setUlimit(new MFFloat152().getArray()).setLlimit(new MFFloat153().getArray())
                                                  .addChild(new HAnimSegment("hanim_t1").setName("SEGMENT_FOR_t1").setDEF("hanim_SEGMENT_FOR_t1")
                                                    .addChild(new TouchSensor().setDescription("joint t1 segment SEGMENT_FOR_t1"))
                                                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.2109})
                                                      .addChild(new Shape().setUSE("JointShape")))
                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_t1").setName("SEGMENT_FOR_t1_tip").setDEF("hanim_SEGMENT_FOR_t1_tip")
                                                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.2109})
                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                  .addChild(new HAnimJoint("hanim_t1").setName("c7").setDEF("hanim_c7").setCenter(new double[] {-0.0002,-0.1169,1.2368}).setUlimit(new MFFloat154().getArray()).setLlimit(new MFFloat155().getArray())
                                                    .addChild(new HAnimSegment("hanim_c7").setName("SEGMENT_FOR_c7").setDEF("hanim_SEGMENT_FOR_c7")
                                                      .addChild(new TouchSensor().setDescription("joint c7 segment SEGMENT_FOR_c7"))
                                                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2368})
                                                        .addChild(new Shape().setUSE("JointShape")))
                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_c7").setName("SEGMENT_FOR_c7_tip").setDEF("hanim_SEGMENT_FOR_c7_tip")
                                                        .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2368})
                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                    .addChild(new HAnimJoint("hanim_c7").setName("c6").setDEF("hanim_c6").setCenter(new double[] {-0.0002,-0.1169,1.249}).setUlimit(new MFFloat156().getArray()).setLlimit(new MFFloat157().getArray())
                                                      .addChild(new HAnimSegment("hanim_c6").setName("SEGMENT_FOR_c6").setDEF("hanim_SEGMENT_FOR_c6")
                                                        .addChild(new TouchSensor().setDescription("joint c6 segment SEGMENT_FOR_c6"))
                                                        .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.249})
                                                          .addChild(new Shape().setUSE("JointShape")))
                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_c6").setName("SEGMENT_FOR_c6_tip").setDEF("hanim_SEGMENT_FOR_c6_tip")
                                                          .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.249})
                                                            .addChild(new Shape().setUSE("SiteShape")))))
                                                      .addChild(new HAnimJoint("hanim_c6").setName("c5").setDEF("hanim_c5").setCenter(new double[] {-0.0002,-0.1169,1.2613}).setUlimit(new MFFloat158().getArray()).setLlimit(new MFFloat159().getArray())
                                                        .addChild(new HAnimSegment("hanim_c5").setName("SEGMENT_FOR_c5").setDEF("hanim_SEGMENT_FOR_c5")
                                                          .addChild(new TouchSensor().setDescription("joint c5 segment SEGMENT_FOR_c5"))
                                                          .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2613})
                                                            .addChild(new Shape().setUSE("JointShape")))
                                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_c5").setName("SEGMENT_FOR_c5_tip").setDEF("hanim_SEGMENT_FOR_c5_tip")
                                                            .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2613})
                                                              .addChild(new Shape().setUSE("SiteShape")))))
                                                        .addChild(new HAnimJoint("hanim_c5").setName("c4").setDEF("hanim_c4").setCenter(new double[] {-0.0002,-0.1169,1.2737}).setUlimit(new MFFloat160().getArray()).setLlimit(new MFFloat161().getArray())
                                                          .addChild(new HAnimSegment("hanim_c4").setName("SEGMENT_FOR_c4").setDEF("hanim_SEGMENT_FOR_c4")
                                                            .addChild(new TouchSensor().setDescription("joint c4 segment SEGMENT_FOR_c4"))
                                                            .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2737})
                                                              .addChild(new Shape().setUSE("JointShape")))
                                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_c4").setName("SEGMENT_FOR_c4_tip").setDEF("hanim_SEGMENT_FOR_c4_tip")
                                                              .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2737})
                                                                .addChild(new Shape().setUSE("SiteShape")))))
                                                          .addChild(new HAnimJoint("hanim_c4").setName("c3").setDEF("hanim_c3").setCenter(new double[] {-0.0002,-0.1169,1.2865}).setUlimit(new MFFloat162().getArray()).setLlimit(new MFFloat163().getArray())
                                                            .addChild(new HAnimSegment("hanim_c3").setName("SEGMENT_FOR_c3").setDEF("hanim_SEGMENT_FOR_c3")
                                                              .addChild(new TouchSensor().setDescription("joint c3 segment SEGMENT_FOR_c3"))
                                                              .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2865})
                                                                .addChild(new Shape().setUSE("JointShape")))
                                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_c3").setName("SEGMENT_FOR_c3_tip").setDEF("hanim_SEGMENT_FOR_c3_tip")
                                                                .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2865})
                                                                  .addChild(new Shape().setUSE("SiteShape")))))
                                                            .addChild(new HAnimJoint("hanim_c3").setName("c2").setDEF("hanim_c2").setCenter(new double[] {-0.0002,-0.1169,1.2982}).setUlimit(new MFFloat164().getArray()).setLlimit(new MFFloat165().getArray())
                                                              .addChild(new HAnimSegment("hanim_c2").setName("SEGMENT_FOR_c2").setDEF("hanim_SEGMENT_FOR_c2")
                                                                .addChild(new TouchSensor().setDescription("joint c2 segment SEGMENT_FOR_c2"))
                                                                .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2982})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_c2").setName("SEGMENT_FOR_c2_tip").setDEF("hanim_SEGMENT_FOR_c2_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2982})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_c2").setName("c1").setDEF("hanim_c1").setCenter(new double[] {-0.0002,-0.1169,1.3099}).setUlimit(new MFFloat166().getArray()).setLlimit(new MFFloat167().getArray())
                                                                .addChild(new HAnimSegment("hanim_c1").setName("SEGMENT_FOR_c1").setDEF("hanim_SEGMENT_FOR_c1")
                                                                  .addChild(new TouchSensor().setDescription("joint c1 segment SEGMENT_FOR_c1"))
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.3099})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_c1").setName("SEGMENT_FOR_c1_tip").setDEF("hanim_SEGMENT_FOR_c1_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.3099})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_c1").setName("skull").setDEF("hanim_skull").setCenter(new double[] {-0.0002,-0.1173,1.3041}).setUlimit(new MFFloat168().getArray()).setLlimit(new MFFloat169().getArray())
                                                                  .addChild(new HAnimSegment("hanim_skull").setName("SEGMENT_FOR_skull").setDEF("hanim_SEGMENT_FOR_skull")
                                                                    .addChild(new TouchSensor().setDescription("joint skull segment SEGMENT_FOR_skull"))
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1173,1.3041})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_skull").setName("SEGMENT_FOR_skull_tip").setDEF("hanim_SEGMENT_FOR_skull_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1173,1.3041})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName("l_eyelid").setDEF("hanim_l_eyelid").setCenter(new double[] {0.0503,-0.0689,1.4157}).setUlimit(new MFFloat170().getArray()).setLlimit(new MFFloat171().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_eyelid").setName("SEGMENT_FOR_l_eyelid").setDEF("hanim_SEGMENT_FOR_l_eyelid")
                                                                      .addChild(new TouchSensor().setDescription("joint l_eyelid segment SEGMENT_FOR_l_eyelid"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.0503,-0.0689,1.4157})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_eyelid").setName("SEGMENT_FOR_l_eyelid_tip").setDEF("hanim_SEGMENT_FOR_l_eyelid_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.0503,-0.0689,1.4157})
                                                                          .addChild(new Shape().setUSE("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName("r_eyelid").setDEF("hanim_r_eyelid").setCenter(new double[] {-0.0507,-0.0689,1.4157}).setUlimit(new MFFloat172().getArray()).setLlimit(new MFFloat173().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_eyelid").setName("SEGMENT_FOR_r_eyelid").setDEF("hanim_SEGMENT_FOR_r_eyelid")
                                                                      .addChild(new TouchSensor().setDescription("joint r_eyelid segment SEGMENT_FOR_r_eyelid"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.0507,-0.0689,1.4157})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_eyelid").setName("SEGMENT_FOR_r_eyelid_tip").setDEF("hanim_SEGMENT_FOR_r_eyelid_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.0507,-0.0689,1.4157})
                                                                          .addChild(new Shape().setUSE("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName("l_eyeball").setDEF("hanim_l_eyeball").setCenter(new double[] {0.0479,-0.0188,1.3963}).setUlimit(new MFFloat174().getArray()).setLlimit(new MFFloat175().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_eyeball").setName("SEGMENT_FOR_l_eyeball").setDEF("hanim_SEGMENT_FOR_l_eyeball")
                                                                      .addChild(new TouchSensor().setDescription("joint l_eyeball segment SEGMENT_FOR_l_eyeball"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.0479,-0.0188,1.3963})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_eyeball").setName("SEGMENT_FOR_l_eyeball_tip").setDEF("hanim_SEGMENT_FOR_l_eyeball_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.0479,-0.0188,1.3963})
                                                                          .addChild(new Shape().setUSE("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName("r_eyeball").setDEF("hanim_r_eyeball").setCenter(new double[] {-0.0483,-0.0188,1.3963}).setUlimit(new MFFloat176().getArray()).setLlimit(new MFFloat177().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_eyeball").setName("SEGMENT_FOR_r_eyeball").setDEF("hanim_SEGMENT_FOR_r_eyeball")
                                                                      .addChild(new TouchSensor().setDescription("joint r_eyeball segment SEGMENT_FOR_r_eyeball"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.0483,-0.0188,1.3963})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_eyeball").setName("SEGMENT_FOR_r_eyeball_tip").setDEF("hanim_SEGMENT_FOR_r_eyeball_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.0483,-0.0188,1.3963})
                                                                          .addChild(new Shape().setUSE("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName("l_eyebrow").setDEF("hanim_l_eyebrow").setCenter(new double[] {0.0216,0.0051,1.4053}).setUlimit(new MFFloat178().getArray()).setLlimit(new MFFloat179().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_eyebrow").setName("SEGMENT_FOR_l_eyebrow").setDEF("hanim_SEGMENT_FOR_l_eyebrow")
                                                                      .addChild(new TouchSensor().setDescription("joint l_eyebrow segment SEGMENT_FOR_l_eyebrow"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.0216,0.0051,1.4053})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_eyebrow").setName("SEGMENT_FOR_l_eyebrow_tip").setDEF("hanim_SEGMENT_FOR_l_eyebrow_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.0216,0.0051,1.4053})
                                                                          .addChild(new Shape().setUSE("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName("r_eyebrow").setDEF("hanim_r_eyebrow").setCenter(new double[] {-0.0219,0.0051,1.4053}).setUlimit(new MFFloat180().getArray()).setLlimit(new MFFloat181().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_eyebrow").setName("SEGMENT_FOR_r_eyebrow").setDEF("hanim_SEGMENT_FOR_r_eyebrow")
                                                                      .addChild(new TouchSensor().setDescription("joint r_eyebrow segment SEGMENT_FOR_r_eyebrow"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.0219,0.0051,1.4053})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_eyebrow").setName("SEGMENT_FOR_r_eyebrow_tip").setDEF("hanim_SEGMENT_FOR_r_eyebrow_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.0219,0.0051,1.4053})
                                                                          .addChild(new Shape().setUSE("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName("jaw").setDEF("hanim_jaw").setCenter(new double[] {-0.0002,-0.0865,1.3043}).setUlimit(new MFFloat182().getArray()).setLlimit(new MFFloat183().getArray())
                                                                    .addChild(new HAnimSegment("hanim_jaw").setName("SEGMENT_FOR_jaw").setDEF("hanim_SEGMENT_FOR_jaw")
                                                                      .addChild(new TouchSensor().setDescription("joint jaw segment SEGMENT_FOR_jaw"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.0865,1.3043})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_jaw").setName("SEGMENT_FOR_jaw_tip").setDEF("hanim_SEGMENT_FOR_jaw_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.0865,1.3043})
                                                                          .addChild(new Shape().setUSE("SiteShape"))))))))))))))
                                                  .addChild(new HAnimJoint("hanim_t1").setName("l_clavicle").setDEF("hanim_l_clavicle").setCenter(new double[] {0.1228,-0.1148,1.1833}).setUlimit(new MFFloat184().getArray()).setLlimit(new MFFloat185().getArray())
                                                    .addChild(new HAnimSegment("hanim_l_clavicle").setName("SEGMENT_FOR_l_clavicle").setDEF("hanim_SEGMENT_FOR_l_clavicle")
                                                      .addChild(new TouchSensor().setDescription("joint l_clavicle segment SEGMENT_FOR_l_clavicle"))
                                                      .addChild(new Transform().setTranslation(new double[] {0.1228,-0.1148,1.1833})
                                                        .addChild(new Shape().setUSE("JointShape")))
                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_clavicle").setName("SEGMENT_FOR_l_clavicle_tip").setDEF("hanim_SEGMENT_FOR_l_clavicle_tip")
                                                        .addChild(new Transform().setTranslation(new double[] {0.1228,-0.1148,1.1833})
                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                    .addChild(new HAnimJoint("hanim_l_clavicle").setName("l_scapula").setDEF("hanim_l_scapula").setCenter(new double[] {0.0383,-0.1157,1.2001}).setUlimit(new MFFloat186().getArray()).setLlimit(new MFFloat187().getArray())
                                                      .addChild(new HAnimSegment("hanim_l_scapula").setName("SEGMENT_FOR_l_scapula").setDEF("hanim_SEGMENT_FOR_l_scapula")
                                                        .addChild(new TouchSensor().setDescription("joint l_scapula segment SEGMENT_FOR_l_scapula"))
                                                        .addChild(new Transform().setTranslation(new double[] {0.0383,-0.1157,1.2001})
                                                          .addChild(new Shape().setUSE("JointShape")))
                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_scapula").setName("SEGMENT_FOR_l_scapula_tip").setDEF("hanim_SEGMENT_FOR_l_scapula_tip")
                                                          .addChild(new Transform().setTranslation(new double[] {0.0383,-0.1157,1.2001})
                                                            .addChild(new Shape().setUSE("SiteShape")))))
                                                      .addChild(new HAnimJoint("hanim_l_scapula").setName("l_upperarm").setDEF("hanim_l_upperarm").setCenter(new double[] {0.1649,-0.1051,1.17}).setUlimit(new MFFloat188().getArray()).setLlimit(new MFFloat189().getArray())
                                                        .addChild(new HAnimSegment("hanim_l_upperarm").setName("SEGMENT_FOR_l_upperarm").setDEF("hanim_SEGMENT_FOR_l_upperarm")
                                                          .addChild(new TouchSensor().setDescription("joint l_upperarm segment SEGMENT_FOR_l_upperarm"))
                                                          .addChild(new Transform().setTranslation(new double[] {0.1649,-0.1051,1.17})
                                                            .addChild(new Shape().setUSE("JointShape")))
                                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_upperarm").setName("SEGMENT_FOR_l_upperarm_tip").setDEF("hanim_SEGMENT_FOR_l_upperarm_tip")
                                                            .addChild(new Transform().setTranslation(new double[] {0.1649,-0.1051,1.17})
                                                              .addChild(new Shape().setUSE("SiteShape")))))
                                                        .addChild(new HAnimJoint("hanim_l_upperarm").setName("l_forearm").setDEF("hanim_l_forearm").setCenter(new double[] {0.1819,-0.1075,0.9202}).setUlimit(new MFFloat190().getArray()).setLlimit(new MFFloat191().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_forearm").setName("SEGMENT_FOR_l_forearm").setDEF("hanim_SEGMENT_FOR_l_forearm")
                                                            .addChild(new TouchSensor().setDescription("joint l_forearm segment SEGMENT_FOR_l_forearm"))
                                                            .addChild(new Transform().setTranslation(new double[] {0.1819,-0.1075,0.9202})
                                                              .addChild(new Shape().setUSE("JointShape")))
                                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_forearm").setName("SEGMENT_FOR_l_forearm_tip").setDEF("hanim_SEGMENT_FOR_l_forearm_tip")
                                                              .addChild(new Transform().setTranslation(new double[] {0.1819,-0.1075,0.9202})
                                                                .addChild(new Shape().setUSE("SiteShape")))))
                                                          .addChild(new HAnimJoint("hanim_l_forearm").setName("l_carpal").setDEF("hanim_l_carpal").setCenter(new double[] {0.1818,-0.1069,0.7157}).setUlimit(new MFFloat192().getArray()).setLlimit(new MFFloat193().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpal").setName("SEGMENT_FOR_l_carpal").setDEF("hanim_SEGMENT_FOR_l_carpal")
                                                              .addChild(new TouchSensor().setDescription("joint l_carpal segment SEGMENT_FOR_l_carpal"))
                                                              .addChild(new Transform().setTranslation(new double[] {0.1818,-0.1069,0.7157})
                                                                .addChild(new Shape().setUSE("JointShape")))
                                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal").setName("SEGMENT_FOR_l_carpal_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_tip")
                                                                .addChild(new Transform().setTranslation(new double[] {0.1818,-0.1069,0.7157})
                                                                  .addChild(new Shape().setUSE("SiteShape")))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName("l_trapezium").setDEF("hanim_l_trapezium").setCenter(new double[] {0.1811,-0.0826,0.6975}).setUlimit(new MFFloat194().getArray()).setLlimit(new MFFloat195().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_trapezium").setName("SEGMENT_FOR_l_trapezium").setDEF("hanim_SEGMENT_FOR_l_trapezium")
                                                                .addChild(new TouchSensor().setDescription("joint l_trapezium segment SEGMENT_FOR_l_trapezium"))
                                                                .addChild(new Transform().setTranslation(new double[] {0.1811,-0.0826,0.6975})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_trapezium").setName("SEGMENT_FOR_l_trapezium_tip").setDEF("hanim_SEGMENT_FOR_l_trapezium_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1811,-0.0826,0.6975})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_l_trapezium").setName("l_metacarpal_1").setDEF("hanim_l_metacarpal_1").setCenter(new double[] {0.1803,-0.0759,0.684}).setUlimit(new MFFloat196().getArray()).setLlimit(new MFFloat197().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_1").setName("SEGMENT_FOR_l_metacarpal_1").setDEF("hanim_SEGMENT_FOR_l_metacarpal_1")
                                                                  .addChild(new TouchSensor().setDescription("joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1"))
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1803,-0.0759,0.684})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_1").setName("SEGMENT_FOR_l_metacarpal_1_tip").setDEF("hanim_SEGMENT_FOR_l_metacarpal_1_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1803,-0.0759,0.684})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_1").setName("l_carpal_proximal_phalanx_1").setDEF("hanim_l_carpal_proximal_phalanx_1").setCenter(new double[] {0.1809,-0.0661,0.6642}).setUlimit(new MFFloat198().getArray()).setLlimit(new MFFloat199().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_1").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_1").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1")
                                                                    .addChild(new TouchSensor().setDescription("joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1"))
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1809,-0.0661,0.6642})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1809,-0.0661,0.6642})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_1").setName("l_carpal_distal_phalanx_1").setDEF("hanim_l_carpal_distal_phalanx_1").setCenter(new double[] {0.1825,-0.0522,0.6455}).setUlimit(new MFFloat200().getArray()).setLlimit(new MFFloat201().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_1").setName("SEGMENT_FOR_l_carpal_distal_phalanx_1").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1")
                                                                      .addChild(new TouchSensor().setDescription("joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1825,-0.0522,0.6455})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1").setName("SEGMENT_FOR_l_carpal_distal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1825,-0.0522,0.6455})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName("l_trapezoid").setDEF("hanim_l_trapezoid").setCenter(new double[] {0.1811,-0.0935,0.6984}).setUlimit(new MFFloat202().getArray()).setLlimit(new MFFloat203().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_trapezoid").setName("SEGMENT_FOR_l_trapezoid").setDEF("hanim_SEGMENT_FOR_l_trapezoid")
                                                                .addChild(new TouchSensor().setDescription("joint l_trapezoid segment SEGMENT_FOR_l_trapezoid"))
                                                                .addChild(new Transform().setTranslation(new double[] {0.1811,-0.0935,0.6984})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_trapezoid").setName("SEGMENT_FOR_l_trapezoid_tip").setDEF("hanim_SEGMENT_FOR_l_trapezoid_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1811,-0.0935,0.6984})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_l_trapezoid").setName("l_metacarpal_2").setDEF("hanim_l_metacarpal_2").setCenter(new double[] {0.1811,-0.0922,0.679}).setUlimit(new MFFloat204().getArray()).setLlimit(new MFFloat205().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_2").setName("SEGMENT_FOR_l_metacarpal_2").setDEF("hanim_SEGMENT_FOR_l_metacarpal_2")
                                                                  .addChild(new TouchSensor().setDescription("joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2"))
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1811,-0.0922,0.679})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_2").setName("SEGMENT_FOR_l_metacarpal_2_tip").setDEF("hanim_SEGMENT_FOR_l_metacarpal_2_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1811,-0.0922,0.679})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_2").setName("l_carpal_proximal_phalanx_2").setDEF("hanim_l_carpal_proximal_phalanx_2").setCenter(new double[] {0.1836,-0.0868,0.6286}).setUlimit(new MFFloat206().getArray()).setLlimit(new MFFloat207().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_2").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_2").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2")
                                                                    .addChild(new TouchSensor().setDescription("joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2"))
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1836,-0.0868,0.6286})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1836,-0.0868,0.6286})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_2").setName("l_carpal_middle_phalanx_2").setDEF("hanim_l_carpal_middle_phalanx_2").setCenter(new double[] {0.1815,-0.0877,0.5983}).setUlimit(new MFFloat208().getArray()).setLlimit(new MFFloat209().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_2").setName("SEGMENT_FOR_l_carpal_middle_phalanx_2").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2")
                                                                      .addChild(new TouchSensor().setDescription("joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1815,-0.0877,0.5983})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2").setName("SEGMENT_FOR_l_carpal_middle_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1815,-0.0877,0.5983})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_2").setName("l_carpal_distal_phalanx_2").setDEF("hanim_l_carpal_distal_phalanx_2").setCenter(new double[] {0.1805,-0.0885,0.5731}).setUlimit(new MFFloat210().getArray()).setLlimit(new MFFloat211().getArray())
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_2").setName("SEGMENT_FOR_l_carpal_distal_phalanx_2").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2")
                                                                        .addChild(new TouchSensor().setDescription("joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2"))
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1805,-0.0885,0.5731})
                                                                          .addChild(new Shape().setUSE("JointShape")))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2").setName("SEGMENT_FOR_l_carpal_distal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip")
                                                                          .addChild(new Transform().setTranslation(new double[] {0.1805,-0.0885,0.5731})
                                                                            .addChild(new Shape().setUSE("SiteShape"))))))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName("l_capitate").setDEF("hanim_l_capitate").setCenter(new double[] {0.1809,-0.1067,0.7}).setUlimit(new MFFloat212().getArray()).setLlimit(new MFFloat213().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_capitate").setName("SEGMENT_FOR_l_capitate").setDEF("hanim_SEGMENT_FOR_l_capitate")
                                                                .addChild(new TouchSensor().setDescription("joint l_capitate segment SEGMENT_FOR_l_capitate"))
                                                                .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1067,0.7})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_capitate").setName("SEGMENT_FOR_l_capitate_tip").setDEF("hanim_SEGMENT_FOR_l_capitate_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1067,0.7})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_l_capitate").setName("l_metacarpal_3").setDEF("hanim_l_metacarpal_3").setCenter(new double[] {0.1809,-0.1081,0.6772}).setUlimit(new MFFloat214().getArray()).setLlimit(new MFFloat215().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_3").setName("SEGMENT_FOR_l_metacarpal_3").setDEF("hanim_SEGMENT_FOR_l_metacarpal_3")
                                                                  .addChild(new TouchSensor().setDescription("joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3"))
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1081,0.6772})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_3").setName("SEGMENT_FOR_l_metacarpal_3_tip").setDEF("hanim_SEGMENT_FOR_l_metacarpal_3_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1081,0.6772})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_3").setName("l_carpal_proximal_phalanx_3").setDEF("hanim_l_carpal_proximal_phalanx_3").setCenter(new double[] {0.1835,-0.1058,0.6264}).setUlimit(new MFFloat216().getArray()).setLlimit(new MFFloat217().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_3").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_3").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3")
                                                                    .addChild(new TouchSensor().setDescription("joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3"))
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1835,-0.1058,0.6264})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1835,-0.1058,0.6264})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_3").setName("l_carpal_middle_phalanx_3").setDEF("hanim_l_carpal_middle_phalanx_3").setCenter(new double[] {0.1815,-0.1054,0.5947}).setUlimit(new MFFloat218().getArray()).setLlimit(new MFFloat219().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_3").setName("SEGMENT_FOR_l_carpal_middle_phalanx_3").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3")
                                                                      .addChild(new TouchSensor().setDescription("joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1815,-0.1054,0.5947})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3").setName("SEGMENT_FOR_l_carpal_middle_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1815,-0.1054,0.5947})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_3").setName("l_carpal_distal_phalanx_3").setDEF("hanim_l_carpal_distal_phalanx_3").setCenter(new double[] {0.1805,-0.1056,0.5668}).setUlimit(new MFFloat220().getArray()).setLlimit(new MFFloat221().getArray())
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_3").setName("SEGMENT_FOR_l_carpal_distal_phalanx_3").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3")
                                                                        .addChild(new TouchSensor().setDescription("joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3"))
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1805,-0.1056,0.5668})
                                                                          .addChild(new Shape().setUSE("JointShape")))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3").setName("SEGMENT_FOR_l_carpal_distal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip")
                                                                          .addChild(new Transform().setTranslation(new double[] {0.1805,-0.1056,0.5668})
                                                                            .addChild(new Shape().setUSE("SiteShape"))))))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName("l_hamate").setDEF("hanim_l_hamate").setCenter(new double[] {0.1809,-0.1276,0.6973}).setUlimit(new MFFloat222().getArray()).setLlimit(new MFFloat223().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_hamate").setName("SEGMENT_FOR_l_hamate").setDEF("hanim_SEGMENT_FOR_l_hamate")
                                                                .addChild(new TouchSensor().setDescription("joint l_hamate segment SEGMENT_FOR_l_hamate"))
                                                                .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1276,0.6973})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_hamate").setName("SEGMENT_FOR_l_hamate_tip").setDEF("hanim_SEGMENT_FOR_l_hamate_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1276,0.6973})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_l_hamate").setName("l_metacarpal_4").setDEF("hanim_l_metacarpal_4").setCenter(new double[] {0.1809,-0.1218,0.6777}).setUlimit(new MFFloat224().getArray()).setLlimit(new MFFloat225().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_4").setName("SEGMENT_FOR_l_metacarpal_4").setDEF("hanim_SEGMENT_FOR_l_metacarpal_4")
                                                                  .addChild(new TouchSensor().setDescription("joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4"))
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1218,0.6777})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_4").setName("SEGMENT_FOR_l_metacarpal_4_tip").setDEF("hanim_SEGMENT_FOR_l_metacarpal_4_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1218,0.6777})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_4").setName("l_carpal_proximal_phalanx_4").setDEF("hanim_l_carpal_proximal_phalanx_4").setCenter(new double[] {0.1835,-0.1233,0.6255}).setUlimit(new MFFloat226().getArray()).setLlimit(new MFFloat227().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_4").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_4").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4")
                                                                    .addChild(new TouchSensor().setDescription("joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4"))
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1835,-0.1233,0.6255})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1835,-0.1233,0.6255})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_4").setName("l_carpal_middle_phalanx_4").setDEF("hanim_l_carpal_middle_phalanx_4").setCenter(new double[] {0.1815,-0.1225,0.598}).setUlimit(new MFFloat228().getArray()).setLlimit(new MFFloat229().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_4").setName("SEGMENT_FOR_l_carpal_middle_phalanx_4").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4")
                                                                      .addChild(new TouchSensor().setDescription("joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1815,-0.1225,0.598})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4").setName("SEGMENT_FOR_l_carpal_middle_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1815,-0.1225,0.598})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_4").setName("l_carpal_distal_phalanx_4").setDEF("hanim_l_carpal_distal_phalanx_4").setCenter(new double[] {0.1805,-0.1217,0.5722}).setUlimit(new MFFloat230().getArray()).setLlimit(new MFFloat231().getArray())
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_4").setName("SEGMENT_FOR_l_carpal_distal_phalanx_4").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4")
                                                                        .addChild(new TouchSensor().setDescription("joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4"))
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1805,-0.1217,0.5722})
                                                                          .addChild(new Shape().setUSE("JointShape")))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4").setName("SEGMENT_FOR_l_carpal_distal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip")
                                                                          .addChild(new Transform().setTranslation(new double[] {0.1805,-0.1217,0.5722})
                                                                            .addChild(new Shape().setUSE("SiteShape")))))))))
                                                              .addChild(new HAnimJoint("hanim_l_hamate").setName("l_metacarpal_5").setDEF("hanim_l_metacarpal_5").setCenter(new double[] {0.1815,-0.1347,0.6797}).setUlimit(new MFFloat232().getArray()).setLlimit(new MFFloat233().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_5").setName("SEGMENT_FOR_l_metacarpal_5").setDEF("hanim_SEGMENT_FOR_l_metacarpal_5")
                                                                  .addChild(new TouchSensor().setDescription("joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5"))
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1815,-0.1347,0.6797})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_5").setName("SEGMENT_FOR_l_metacarpal_5_tip").setDEF("hanim_SEGMENT_FOR_l_metacarpal_5_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1815,-0.1347,0.6797})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_5").setName("l_carpal_proximal_phalanx_5").setDEF("hanim_l_carpal_proximal_phalanx_5").setCenter(new double[] {0.1832,-0.1389,0.6295}).setUlimit(new MFFloat234().getArray()).setLlimit(new MFFloat235().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_5").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_5").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5")
                                                                    .addChild(new TouchSensor().setDescription("joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5"))
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1832,-0.1389,0.6295})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1832,-0.1389,0.6295})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_5").setName("l_carpal_middle_phalanx_5").setDEF("hanim_l_carpal_middle_phalanx_5").setCenter(new double[] {0.1815,-0.139,0.6124}).setUlimit(new MFFloat236().getArray()).setLlimit(new MFFloat237().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_5").setName("SEGMENT_FOR_l_carpal_middle_phalanx_5").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5")
                                                                      .addChild(new TouchSensor().setDescription("joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1815,-0.139,0.6124})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5").setName("SEGMENT_FOR_l_carpal_middle_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1815,-0.139,0.6124})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_5").setName("l_carpal_distal_phalanx_5").setDEF("hanim_l_carpal_distal_phalanx_5").setCenter(new double[] {0.1806,-0.1388,0.5938}).setUlimit(new MFFloat238().getArray()).setLlimit(new MFFloat239().getArray())
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_5").setName("SEGMENT_FOR_l_carpal_distal_phalanx_5").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5")
                                                                        .addChild(new TouchSensor().setDescription("joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5"))
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1806,-0.1388,0.5938})
                                                                          .addChild(new Shape().setUSE("JointShape")))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5").setName("SEGMENT_FOR_l_carpal_distal_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip")
                                                                          .addChild(new Transform().setTranslation(new double[] {0.1806,-0.1388,0.5938})
                                                                            .addChild(new Shape().setUSE("SiteShape")))))))))))))))
                                                  .addChild(new HAnimJoint("hanim_t1").setName("r_clavicle").setDEF("hanim_r_clavicle").setCenter(new double[] {-0.1231,-0.1148,1.1833}).setUlimit(new MFFloat240().getArray()).setLlimit(new MFFloat241().getArray())
                                                    .addChild(new HAnimSegment("hanim_r_clavicle").setName("SEGMENT_FOR_r_clavicle").setDEF("hanim_SEGMENT_FOR_r_clavicle")
                                                      .addChild(new TouchSensor().setDescription("joint r_clavicle segment SEGMENT_FOR_r_clavicle"))
                                                      .addChild(new Transform().setTranslation(new double[] {-0.1231,-0.1148,1.1833})
                                                        .addChild(new Shape().setUSE("JointShape")))
                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_clavicle").setName("SEGMENT_FOR_r_clavicle_tip").setDEF("hanim_SEGMENT_FOR_r_clavicle_tip")
                                                        .addChild(new Transform().setTranslation(new double[] {-0.1231,-0.1148,1.1833})
                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                    .addChild(new HAnimJoint("hanim_r_clavicle").setName("r_scapula").setDEF("hanim_r_scapula").setCenter(new double[] {-0.0387,-0.1157,1.2001}).setUlimit(new MFFloat242().getArray()).setLlimit(new MFFloat243().getArray())
                                                      .addChild(new HAnimSegment("hanim_r_scapula").setName("SEGMENT_FOR_r_scapula").setDEF("hanim_SEGMENT_FOR_r_scapula")
                                                        .addChild(new TouchSensor().setDescription("joint r_scapula segment SEGMENT_FOR_r_scapula"))
                                                        .addChild(new Transform().setTranslation(new double[] {-0.0387,-0.1157,1.2001})
                                                          .addChild(new Shape().setUSE("JointShape")))
                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_scapula").setName("SEGMENT_FOR_r_scapula_tip").setDEF("hanim_SEGMENT_FOR_r_scapula_tip")
                                                          .addChild(new Transform().setTranslation(new double[] {-0.0387,-0.1157,1.2001})
                                                            .addChild(new Shape().setUSE("SiteShape")))))
                                                      .addChild(new HAnimJoint("hanim_r_scapula").setName("r_upperarm").setDEF("hanim_r_upperarm").setCenter(new double[] {-0.1649,-0.1051,1.17}).setUlimit(new MFFloat244().getArray()).setLlimit(new MFFloat245().getArray())
                                                        .addChild(new HAnimSegment("hanim_r_upperarm").setName("SEGMENT_FOR_r_upperarm").setDEF("hanim_SEGMENT_FOR_r_upperarm")
                                                          .addChild(new TouchSensor().setDescription("joint r_upperarm segment SEGMENT_FOR_r_upperarm"))
                                                          .addChild(new Transform().setTranslation(new double[] {-0.1649,-0.1051,1.17})
                                                            .addChild(new Shape().setUSE("JointShape")))
                                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_upperarm").setName("SEGMENT_FOR_r_upperarm_tip").setDEF("hanim_SEGMENT_FOR_r_upperarm_tip")
                                                            .addChild(new Transform().setTranslation(new double[] {-0.1649,-0.1051,1.17})
                                                              .addChild(new Shape().setUSE("SiteShape")))))
                                                        .addChild(new HAnimJoint("hanim_r_upperarm").setName("r_forearm").setDEF("hanim_r_forearm").setCenter(new double[] {-0.1819,-0.1075,0.9202}).setUlimit(new MFFloat246().getArray()).setLlimit(new MFFloat247().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_forearm").setName("SEGMENT_FOR_r_forearm").setDEF("hanim_SEGMENT_FOR_r_forearm")
                                                            .addChild(new TouchSensor().setDescription("joint r_forearm segment SEGMENT_FOR_r_forearm"))
                                                            .addChild(new Transform().setTranslation(new double[] {-0.1819,-0.1075,0.9202})
                                                              .addChild(new Shape().setUSE("JointShape")))
                                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_forearm").setName("SEGMENT_FOR_r_forearm_tip").setDEF("hanim_SEGMENT_FOR_r_forearm_tip")
                                                              .addChild(new Transform().setTranslation(new double[] {-0.1819,-0.1075,0.9202})
                                                                .addChild(new Shape().setUSE("SiteShape")))))
                                                          .addChild(new HAnimJoint("hanim_r_forearm").setName("r_carpal").setDEF("hanim_r_carpal").setCenter(new double[] {-0.1818,-0.1069,0.7157}).setUlimit(new MFFloat248().getArray()).setLlimit(new MFFloat249().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpal").setName("SEGMENT_FOR_r_carpal").setDEF("hanim_SEGMENT_FOR_r_carpal")
                                                              .addChild(new TouchSensor().setDescription("joint r_carpal segment SEGMENT_FOR_r_carpal"))
                                                              .addChild(new Transform().setTranslation(new double[] {-0.1818,-0.1069,0.7157})
                                                                .addChild(new Shape().setUSE("JointShape")))
                                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal").setName("SEGMENT_FOR_r_carpal_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_tip")
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1818,-0.1069,0.7157})
                                                                  .addChild(new Shape().setUSE("SiteShape")))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName("r_trapezium").setDEF("hanim_r_trapezium").setCenter(new double[] {-0.1811,-0.0826,0.6975}).setUlimit(new MFFloat250().getArray()).setLlimit(new MFFloat251().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_trapezium").setName("SEGMENT_FOR_r_trapezium").setDEF("hanim_SEGMENT_FOR_r_trapezium")
                                                                .addChild(new TouchSensor().setDescription("joint r_trapezium segment SEGMENT_FOR_r_trapezium"))
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1811,-0.0826,0.6975})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_trapezium").setName("SEGMENT_FOR_r_trapezium_tip").setDEF("hanim_SEGMENT_FOR_r_trapezium_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1811,-0.0826,0.6975})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_r_trapezium").setName("r_metacarpal_1").setDEF("hanim_r_metacarpal_1").setCenter(new double[] {-0.1803,-0.0759,0.684}).setUlimit(new MFFloat252().getArray()).setLlimit(new MFFloat253().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_1").setName("SEGMENT_FOR_r_metacarpal_1").setDEF("hanim_SEGMENT_FOR_r_metacarpal_1")
                                                                  .addChild(new TouchSensor().setDescription("joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1"))
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1803,-0.0759,0.684})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_1").setName("SEGMENT_FOR_r_metacarpal_1_tip").setDEF("hanim_SEGMENT_FOR_r_metacarpal_1_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1803,-0.0759,0.684})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_1").setName("r_carpal_proximal_phalanx_1").setDEF("hanim_r_carpal_proximal_phalanx_1").setCenter(new double[] {-0.1808,-0.0661,0.6642}).setUlimit(new MFFloat254().getArray()).setLlimit(new MFFloat255().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_1").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_1").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1")
                                                                    .addChild(new TouchSensor().setDescription("joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1"))
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1808,-0.0661,0.6642})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1808,-0.0661,0.6642})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_1").setName("r_carpal_distal_phalanx_1").setDEF("hanim_r_carpal_distal_phalanx_1").setCenter(new double[] {-0.1825,-0.0522,0.6455}).setUlimit(new MFFloat256().getArray()).setLlimit(new MFFloat257().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_1").setName("SEGMENT_FOR_r_carpal_distal_phalanx_1").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1")
                                                                      .addChild(new TouchSensor().setDescription("joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1825,-0.0522,0.6455})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1").setName("SEGMENT_FOR_r_carpal_distal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1825,-0.0522,0.6455})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName("r_trapezoid").setDEF("hanim_r_trapezoid").setCenter(new double[] {-0.1811,-0.0935,0.6984}).setUlimit(new MFFloat258().getArray()).setLlimit(new MFFloat259().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_trapezoid").setName("SEGMENT_FOR_r_trapezoid").setDEF("hanim_SEGMENT_FOR_r_trapezoid")
                                                                .addChild(new TouchSensor().setDescription("joint r_trapezoid segment SEGMENT_FOR_r_trapezoid"))
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1811,-0.0935,0.6984})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_trapezoid").setName("SEGMENT_FOR_r_trapezoid_tip").setDEF("hanim_SEGMENT_FOR_r_trapezoid_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1811,-0.0935,0.6984})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_r_trapezoid").setName("r_metacarpal_2").setDEF("hanim_r_metacarpal_2").setCenter(new double[] {-0.1811,-0.0922,0.679}).setUlimit(new MFFloat260().getArray()).setLlimit(new MFFloat261().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_2").setName("SEGMENT_FOR_r_metacarpal_2").setDEF("hanim_SEGMENT_FOR_r_metacarpal_2")
                                                                  .addChild(new TouchSensor().setDescription("joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2"))
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1811,-0.0922,0.679})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_2").setName("SEGMENT_FOR_r_metacarpal_2_tip").setDEF("hanim_SEGMENT_FOR_r_metacarpal_2_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1811,-0.0922,0.679})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_2").setName("r_carpal_proximal_phalanx_2").setDEF("hanim_r_carpal_proximal_phalanx_2").setCenter(new double[] {-0.1835,-0.0868,0.6286}).setUlimit(new MFFloat262().getArray()).setLlimit(new MFFloat263().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_2").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_2").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2")
                                                                    .addChild(new TouchSensor().setDescription("joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2"))
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1835,-0.0868,0.6286})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1835,-0.0868,0.6286})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_2").setName("r_carpal_middle_phalanx_2").setDEF("hanim_r_carpal_middle_phalanx_2").setCenter(new double[] {-0.1815,-0.0877,0.5983}).setUlimit(new MFFloat264().getArray()).setLlimit(new MFFloat265().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_2").setName("SEGMENT_FOR_r_carpal_middle_phalanx_2").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2")
                                                                      .addChild(new TouchSensor().setDescription("joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.0877,0.5983})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2").setName("SEGMENT_FOR_r_carpal_middle_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.0877,0.5983})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_2").setName("r_carpal_distal_phalanx_2").setDEF("hanim_r_carpal_distal_phalanx_2").setCenter(new double[] {-0.1805,-0.0885,0.5731}).setUlimit(new MFFloat266().getArray()).setLlimit(new MFFloat267().getArray())
                                                                      .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_2").setName("SEGMENT_FOR_r_carpal_distal_phalanx_2").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2")
                                                                        .addChild(new TouchSensor().setDescription("joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2"))
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1805,-0.0885,0.5731})
                                                                          .addChild(new Shape().setUSE("JointShape")))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2").setName("SEGMENT_FOR_r_carpal_distal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip")
                                                                          .addChild(new Transform().setTranslation(new double[] {-0.1805,-0.0885,0.5731})
                                                                            .addChild(new Shape().setUSE("SiteShape"))))))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName("r_capitate").setDEF("hanim_r_capitate").setCenter(new double[] {-0.1809,-0.1067,0.7}).setUlimit(new MFFloat268().getArray()).setLlimit(new MFFloat269().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_capitate").setName("SEGMENT_FOR_r_capitate").setDEF("hanim_SEGMENT_FOR_r_capitate")
                                                                .addChild(new TouchSensor().setDescription("joint r_capitate segment SEGMENT_FOR_r_capitate"))
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1067,0.7})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_capitate").setName("SEGMENT_FOR_r_capitate_tip").setDEF("hanim_SEGMENT_FOR_r_capitate_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1067,0.7})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_r_capitate").setName("r_metacarpal_3").setDEF("hanim_r_metacarpal_3").setCenter(new double[] {-0.1809,-0.1081,0.6772}).setUlimit(new MFFloat270().getArray()).setLlimit(new MFFloat271().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_3").setName("SEGMENT_FOR_r_metacarpal_3").setDEF("hanim_SEGMENT_FOR_r_metacarpal_3")
                                                                  .addChild(new TouchSensor().setDescription("joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3"))
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1081,0.6772})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_3").setName("SEGMENT_FOR_r_metacarpal_3_tip").setDEF("hanim_SEGMENT_FOR_r_metacarpal_3_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1081,0.6772})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_3").setName("r_carpal_proximal_phalanx_3").setDEF("hanim_r_carpal_proximal_phalanx_3").setCenter(new double[] {-0.1835,-0.1058,0.6264}).setUlimit(new MFFloat272().getArray()).setLlimit(new MFFloat273().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_3").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_3").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3")
                                                                    .addChild(new TouchSensor().setDescription("joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3"))
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1835,-0.1058,0.6264})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1835,-0.1058,0.6264})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_3").setName("r_carpal_middle_phalanx_3").setDEF("hanim_r_carpal_middle_phalanx_3").setCenter(new double[] {-0.1815,-0.1054,0.5947}).setUlimit(new MFFloat274().getArray()).setLlimit(new MFFloat275().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_3").setName("SEGMENT_FOR_r_carpal_middle_phalanx_3").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3")
                                                                      .addChild(new TouchSensor().setDescription("joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.1054,0.5947})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3").setName("SEGMENT_FOR_r_carpal_middle_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.1054,0.5947})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_3").setName("r_carpal_distal_phalanx_3").setDEF("hanim_r_carpal_distal_phalanx_3").setCenter(new double[] {-0.1805,-0.1056,0.5668}).setUlimit(new MFFloat276().getArray()).setLlimit(new MFFloat277().getArray())
                                                                      .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_3").setName("SEGMENT_FOR_r_carpal_distal_phalanx_3").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3")
                                                                        .addChild(new TouchSensor().setDescription("joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3"))
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1805,-0.1056,0.5668})
                                                                          .addChild(new Shape().setUSE("JointShape")))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3").setName("SEGMENT_FOR_r_carpal_distal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip")
                                                                          .addChild(new Transform().setTranslation(new double[] {-0.1805,-0.1056,0.5668})
                                                                            .addChild(new Shape().setUSE("SiteShape"))))))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName("r_hamate").setDEF("hanim_r_hamate").setCenter(new double[] {-0.1809,-0.1276,0.6973}).setUlimit(new MFFloat278().getArray()).setLlimit(new MFFloat279().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_hamate").setName("SEGMENT_FOR_r_hamate").setDEF("hanim_SEGMENT_FOR_r_hamate")
                                                                .addChild(new TouchSensor().setDescription("joint r_hamate segment SEGMENT_FOR_r_hamate"))
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1276,0.6973})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_hamate").setName("SEGMENT_FOR_r_hamate_tip").setDEF("hanim_SEGMENT_FOR_r_hamate_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1276,0.6973})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_r_hamate").setName("r_metacarpal_4").setDEF("hanim_r_metacarpal_4").setCenter(new double[] {-0.1809,-0.1218,0.6777}).setUlimit(new MFFloat280().getArray()).setLlimit(new MFFloat281().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_4").setName("SEGMENT_FOR_r_metacarpal_4").setDEF("hanim_SEGMENT_FOR_r_metacarpal_4")
                                                                  .addChild(new TouchSensor().setDescription("joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4"))
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1218,0.6777})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_4").setName("SEGMENT_FOR_r_metacarpal_4_tip").setDEF("hanim_SEGMENT_FOR_r_metacarpal_4_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1218,0.6777})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_4").setName("r_carpal_proximal_phalanx_4").setDEF("hanim_r_carpal_proximal_phalanx_4").setCenter(new double[] {-0.1835,-0.1233,0.6255}).setUlimit(new MFFloat282().getArray()).setLlimit(new MFFloat283().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_4").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_4").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4")
                                                                    .addChild(new TouchSensor().setDescription("joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4"))
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1835,-0.1233,0.6255})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1835,-0.1233,0.6255})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_4").setName("r_carpal_middle_phalanx_4").setDEF("hanim_r_carpal_middle_phalanx_4").setCenter(new double[] {-0.1815,-0.1225,0.598}).setUlimit(new MFFloat284().getArray()).setLlimit(new MFFloat285().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_4").setName("SEGMENT_FOR_r_carpal_middle_phalanx_4").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4")
                                                                      .addChild(new TouchSensor().setDescription("joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.1225,0.598})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4").setName("SEGMENT_FOR_r_carpal_middle_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.1225,0.598})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_4").setName("r_carpal_distal_phalanx_4").setDEF("hanim_r_carpal_distal_phalanx_4").setCenter(new double[] {-0.1805,-0.1217,0.5722}).setUlimit(new MFFloat286().getArray()).setLlimit(new MFFloat287().getArray())
                                                                      .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_4").setName("SEGMENT_FOR_r_carpal_distal_phalanx_4").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4")
                                                                        .addChild(new TouchSensor().setDescription("joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4"))
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1805,-0.1217,0.5722})
                                                                          .addChild(new Shape().setUSE("JointShape")))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4").setName("SEGMENT_FOR_r_carpal_distal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip")
                                                                          .addChild(new Transform().setTranslation(new double[] {-0.1805,-0.1217,0.5722})
                                                                            .addChild(new Shape().setUSE("SiteShape")))))))))
                                                              .addChild(new HAnimJoint("hanim_r_hamate").setName("r_metacarpal_5").setDEF("hanim_r_metacarpal_5").setCenter(new double[] {-0.1814,-0.1347,0.6797}).setUlimit(new MFFloat288().getArray()).setLlimit(new MFFloat289().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_5").setName("SEGMENT_FOR_r_metacarpal_5").setDEF("hanim_SEGMENT_FOR_r_metacarpal_5")
                                                                  .addChild(new TouchSensor().setDescription("joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5"))
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1814,-0.1347,0.6797})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_5").setName("SEGMENT_FOR_r_metacarpal_5_tip").setDEF("hanim_SEGMENT_FOR_r_metacarpal_5_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1814,-0.1347,0.6797})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_5").setName("r_carpal_proximal_phalanx_5").setDEF("hanim_r_carpal_proximal_phalanx_5").setCenter(new double[] {-0.1832,-0.1389,0.6295}).setUlimit(new MFFloat290().getArray()).setLlimit(new MFFloat291().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_5").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_5").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5")
                                                                    .addChild(new TouchSensor().setDescription("joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5"))
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1832,-0.1389,0.6295})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1832,-0.1389,0.6295})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_5").setName("r_carpal_middle_phalanx_5").setDEF("hanim_r_carpal_middle_phalanx_5").setCenter(new double[] {-0.1815,-0.139,0.6124}).setUlimit(new MFFloat292().getArray()).setLlimit(new MFFloat293().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_5").setName("SEGMENT_FOR_r_carpal_middle_phalanx_5").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5")
                                                                      .addChild(new TouchSensor().setDescription("joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.139,0.6124})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5").setName("SEGMENT_FOR_r_carpal_middle_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.139,0.6124})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_5").setName("r_carpal_distal_phalanx_5").setDEF("hanim_r_carpal_distal_phalanx_5").setCenter(new double[] {-0.1806,-0.1388,0.5938}).setUlimit(new MFFloat294().getArray()).setLlimit(new MFFloat295().getArray())
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
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_sacrum").setKey(new MFFloat296().getArray()).setKeyValue(new MFRotation297().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_pelvis").setKey(new MFFloat298().getArray()).setKeyValue(new MFRotation299().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_thigh").setKey(new MFFloat300().getArray()).setKeyValue(new MFRotation301().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_calf").setKey(new MFFloat302().getArray()).setKeyValue(new MFRotation303().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_talus").setKey(new MFFloat304().getArray()).setKeyValue(new MFRotation305().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_navicular").setKey(new MFFloat306().getArray()).setKeyValue(new MFRotation307().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_cuneiform_1").setKey(new MFFloat308().getArray()).setKeyValue(new MFRotation309().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metatarsal_1").setKey(new MFFloat310().getArray()).setKeyValue(new MFRotation311().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_proximal_phalanx_1").setKey(new MFFloat312().getArray()).setKeyValue(new MFRotation313().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_distal_phalanx_1").setKey(new MFFloat314().getArray()).setKeyValue(new MFRotation315().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_cuneiform_2").setKey(new MFFloat316().getArray()).setKeyValue(new MFRotation317().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metatarsal_2").setKey(new MFFloat318().getArray()).setKeyValue(new MFRotation319().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_proximal_phalanx_2").setKey(new MFFloat320().getArray()).setKeyValue(new MFRotation321().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_middle_phalanx_2").setKey(new MFFloat322().getArray()).setKeyValue(new MFRotation323().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_distal_phalanx_2").setKey(new MFFloat324().getArray()).setKeyValue(new MFRotation325().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_cuneiform_3").setKey(new MFFloat326().getArray()).setKeyValue(new MFRotation327().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metatarsal_3").setKey(new MFFloat328().getArray()).setKeyValue(new MFRotation329().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_proximal_phalanx_3").setKey(new MFFloat330().getArray()).setKeyValue(new MFRotation331().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_middle_phalanx_3").setKey(new MFFloat332().getArray()).setKeyValue(new MFRotation333().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_distal_phalanx_3").setKey(new MFFloat334().getArray()).setKeyValue(new MFRotation335().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_calcaneus").setKey(new MFFloat336().getArray()).setKeyValue(new MFRotation337().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_cuboid").setKey(new MFFloat338().getArray()).setKeyValue(new MFRotation339().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metatarsal_4").setKey(new MFFloat340().getArray()).setKeyValue(new MFRotation341().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_proximal_phalanx_4").setKey(new MFFloat342().getArray()).setKeyValue(new MFRotation343().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_middle_phalanx_4").setKey(new MFFloat344().getArray()).setKeyValue(new MFRotation345().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_distal_phalanx_4").setKey(new MFFloat346().getArray()).setKeyValue(new MFRotation347().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metatarsal_5").setKey(new MFFloat348().getArray()).setKeyValue(new MFRotation349().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_proximal_phalanx_5").setKey(new MFFloat350().getArray()).setKeyValue(new MFRotation351().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_middle_phalanx_5").setKey(new MFFloat352().getArray()).setKeyValue(new MFRotation353().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_distal_phalanx_5").setKey(new MFFloat354().getArray()).setKeyValue(new MFRotation355().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_thigh").setKey(new MFFloat356().getArray()).setKeyValue(new MFRotation357().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_calf").setKey(new MFFloat358().getArray()).setKeyValue(new MFRotation359().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_talus").setKey(new MFFloat360().getArray()).setKeyValue(new MFRotation361().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_navicular").setKey(new MFFloat362().getArray()).setKeyValue(new MFRotation363().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_cuneiform_1").setKey(new MFFloat364().getArray()).setKeyValue(new MFRotation365().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metatarsal_1").setKey(new MFFloat366().getArray()).setKeyValue(new MFRotation367().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_proximal_phalanx_1").setKey(new MFFloat368().getArray()).setKeyValue(new MFRotation369().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_distal_phalanx_1").setKey(new MFFloat370().getArray()).setKeyValue(new MFRotation371().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_cuneiform_2").setKey(new MFFloat372().getArray()).setKeyValue(new MFRotation373().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metatarsal_2").setKey(new MFFloat374().getArray()).setKeyValue(new MFRotation375().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_proximal_phalanx_2").setKey(new MFFloat376().getArray()).setKeyValue(new MFRotation377().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_middle_phalanx_2").setKey(new MFFloat378().getArray()).setKeyValue(new MFRotation379().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_distal_phalanx_2").setKey(new MFFloat380().getArray()).setKeyValue(new MFRotation381().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_cuneiform_3").setKey(new MFFloat382().getArray()).setKeyValue(new MFRotation383().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metatarsal_3").setKey(new MFFloat384().getArray()).setKeyValue(new MFRotation385().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_proximal_phalanx_3").setKey(new MFFloat386().getArray()).setKeyValue(new MFRotation387().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_middle_phalanx_3").setKey(new MFFloat388().getArray()).setKeyValue(new MFRotation389().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_distal_phalanx_3").setKey(new MFFloat390().getArray()).setKeyValue(new MFRotation391().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_calcaneus").setKey(new MFFloat392().getArray()).setKeyValue(new MFRotation393().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_cuboid").setKey(new MFFloat394().getArray()).setKeyValue(new MFRotation395().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metatarsal_4").setKey(new MFFloat396().getArray()).setKeyValue(new MFRotation397().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_proximal_phalanx_4").setKey(new MFFloat398().getArray()).setKeyValue(new MFRotation399().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_middle_phalanx_4").setKey(new MFFloat400().getArray()).setKeyValue(new MFRotation401().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_distal_phalanx_4").setKey(new MFFloat402().getArray()).setKeyValue(new MFRotation403().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metatarsal_5").setKey(new MFFloat404().getArray()).setKeyValue(new MFRotation405().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_proximal_phalanx_5").setKey(new MFFloat406().getArray()).setKeyValue(new MFRotation407().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_middle_phalanx_5").setKey(new MFFloat408().getArray()).setKeyValue(new MFRotation409().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_distal_phalanx_5").setKey(new MFFloat410().getArray()).setKeyValue(new MFRotation411().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l5").setKey(new MFFloat412().getArray()).setKeyValue(new MFRotation413().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l4").setKey(new MFFloat414().getArray()).setKeyValue(new MFRotation415().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l3").setKey(new MFFloat416().getArray()).setKeyValue(new MFRotation417().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l2").setKey(new MFFloat418().getArray()).setKeyValue(new MFRotation419().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l1").setKey(new MFFloat420().getArray()).setKeyValue(new MFRotation421().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t12").setKey(new MFFloat422().getArray()).setKeyValue(new MFRotation423().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t11").setKey(new MFFloat424().getArray()).setKeyValue(new MFRotation425().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t10").setKey(new MFFloat426().getArray()).setKeyValue(new MFRotation427().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t9").setKey(new MFFloat428().getArray()).setKeyValue(new MFRotation429().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t8").setKey(new MFFloat430().getArray()).setKeyValue(new MFRotation431().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t7").setKey(new MFFloat432().getArray()).setKeyValue(new MFRotation433().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t6").setKey(new MFFloat434().getArray()).setKeyValue(new MFRotation435().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t5").setKey(new MFFloat436().getArray()).setKeyValue(new MFRotation437().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t4").setKey(new MFFloat438().getArray()).setKeyValue(new MFRotation439().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t3").setKey(new MFFloat440().getArray()).setKeyValue(new MFRotation441().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t2").setKey(new MFFloat442().getArray()).setKeyValue(new MFRotation443().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t1").setKey(new MFFloat444().getArray()).setKeyValue(new MFRotation445().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_c7").setKey(new MFFloat446().getArray()).setKeyValue(new MFRotation447().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_c6").setKey(new MFFloat448().getArray()).setKeyValue(new MFRotation449().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_c5").setKey(new MFFloat450().getArray()).setKeyValue(new MFRotation451().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_c4").setKey(new MFFloat452().getArray()).setKeyValue(new MFRotation453().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_c3").setKey(new MFFloat454().getArray()).setKeyValue(new MFRotation455().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_c2").setKey(new MFFloat456().getArray()).setKeyValue(new MFRotation457().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_c1").setKey(new MFFloat458().getArray()).setKeyValue(new MFRotation459().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_skull").setKey(new MFFloat460().getArray()).setKeyValue(new MFRotation461().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_eyelid").setKey(new MFFloat462().getArray()).setKeyValue(new MFRotation463().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_eyelid").setKey(new MFFloat464().getArray()).setKeyValue(new MFRotation465().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_eyeball").setKey(new MFFloat466().getArray()).setKeyValue(new MFRotation467().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_eyeball").setKey(new MFFloat468().getArray()).setKeyValue(new MFRotation469().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_eyebrow").setKey(new MFFloat470().getArray()).setKeyValue(new MFRotation471().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_eyebrow").setKey(new MFFloat472().getArray()).setKeyValue(new MFRotation473().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_jaw").setKey(new MFFloat474().getArray()).setKeyValue(new MFRotation475().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_clavicle").setKey(new MFFloat476().getArray()).setKeyValue(new MFRotation477().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_scapula").setKey(new MFFloat478().getArray()).setKeyValue(new MFRotation479().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_upperarm").setKey(new MFFloat480().getArray()).setKeyValue(new MFRotation481().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_forearm").setKey(new MFFloat482().getArray()).setKeyValue(new MFRotation483().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal").setKey(new MFFloat484().getArray()).setKeyValue(new MFRotation485().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_trapezium").setKey(new MFFloat486().getArray()).setKeyValue(new MFRotation487().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metacarpal_1").setKey(new MFFloat488().getArray()).setKeyValue(new MFRotation489().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_proximal_phalanx_1").setKey(new MFFloat490().getArray()).setKeyValue(new MFRotation491().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_distal_phalanx_1").setKey(new MFFloat492().getArray()).setKeyValue(new MFRotation493().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_trapezoid").setKey(new MFFloat494().getArray()).setKeyValue(new MFRotation495().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metacarpal_2").setKey(new MFFloat496().getArray()).setKeyValue(new MFRotation497().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_proximal_phalanx_2").setKey(new MFFloat498().getArray()).setKeyValue(new MFRotation499().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_middle_phalanx_2").setKey(new MFFloat500().getArray()).setKeyValue(new MFRotation501().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_distal_phalanx_2").setKey(new MFFloat502().getArray()).setKeyValue(new MFRotation503().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_capitate").setKey(new MFFloat504().getArray()).setKeyValue(new MFRotation505().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metacarpal_3").setKey(new MFFloat506().getArray()).setKeyValue(new MFRotation507().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_proximal_phalanx_3").setKey(new MFFloat508().getArray()).setKeyValue(new MFRotation509().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_middle_phalanx_3").setKey(new MFFloat510().getArray()).setKeyValue(new MFRotation511().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_distal_phalanx_3").setKey(new MFFloat512().getArray()).setKeyValue(new MFRotation513().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_hamate").setKey(new MFFloat514().getArray()).setKeyValue(new MFRotation515().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metacarpal_4").setKey(new MFFloat516().getArray()).setKeyValue(new MFRotation517().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_proximal_phalanx_4").setKey(new MFFloat518().getArray()).setKeyValue(new MFRotation519().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_middle_phalanx_4").setKey(new MFFloat520().getArray()).setKeyValue(new MFRotation521().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_distal_phalanx_4").setKey(new MFFloat522().getArray()).setKeyValue(new MFRotation523().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metacarpal_5").setKey(new MFFloat524().getArray()).setKeyValue(new MFRotation525().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_proximal_phalanx_5").setKey(new MFFloat526().getArray()).setKeyValue(new MFRotation527().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_middle_phalanx_5").setKey(new MFFloat528().getArray()).setKeyValue(new MFRotation529().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_distal_phalanx_5").setKey(new MFFloat530().getArray()).setKeyValue(new MFRotation531().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_clavicle").setKey(new MFFloat532().getArray()).setKeyValue(new MFRotation533().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_scapula").setKey(new MFFloat534().getArray()).setKeyValue(new MFRotation535().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_upperarm").setKey(new MFFloat536().getArray()).setKeyValue(new MFRotation537().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_forearm").setKey(new MFFloat538().getArray()).setKeyValue(new MFRotation539().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal").setKey(new MFFloat540().getArray()).setKeyValue(new MFRotation541().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_trapezium").setKey(new MFFloat542().getArray()).setKeyValue(new MFRotation543().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metacarpal_1").setKey(new MFFloat544().getArray()).setKeyValue(new MFRotation545().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_proximal_phalanx_1").setKey(new MFFloat546().getArray()).setKeyValue(new MFRotation547().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_distal_phalanx_1").setKey(new MFFloat548().getArray()).setKeyValue(new MFRotation549().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_trapezoid").setKey(new MFFloat550().getArray()).setKeyValue(new MFRotation551().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metacarpal_2").setKey(new MFFloat552().getArray()).setKeyValue(new MFRotation553().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_proximal_phalanx_2").setKey(new MFFloat554().getArray()).setKeyValue(new MFRotation555().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_middle_phalanx_2").setKey(new MFFloat556().getArray()).setKeyValue(new MFRotation557().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_distal_phalanx_2").setKey(new MFFloat558().getArray()).setKeyValue(new MFRotation559().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_capitate").setKey(new MFFloat560().getArray()).setKeyValue(new MFRotation561().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metacarpal_3").setKey(new MFFloat562().getArray()).setKeyValue(new MFRotation563().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_proximal_phalanx_3").setKey(new MFFloat564().getArray()).setKeyValue(new MFRotation565().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_middle_phalanx_3").setKey(new MFFloat566().getArray()).setKeyValue(new MFRotation567().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_distal_phalanx_3").setKey(new MFFloat568().getArray()).setKeyValue(new MFRotation569().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_hamate").setKey(new MFFloat570().getArray()).setKeyValue(new MFRotation571().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metacarpal_4").setKey(new MFFloat572().getArray()).setKeyValue(new MFRotation573().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_proximal_phalanx_4").setKey(new MFFloat574().getArray()).setKeyValue(new MFRotation575().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_middle_phalanx_4").setKey(new MFFloat576().getArray()).setKeyValue(new MFRotation577().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_distal_phalanx_4").setKey(new MFFloat578().getArray()).setKeyValue(new MFRotation579().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metacarpal_5").setKey(new MFFloat580().getArray()).setKeyValue(new MFRotation581().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_proximal_phalanx_5").setKey(new MFFloat582().getArray()).setKeyValue(new MFRotation583().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_middle_phalanx_5").setKey(new MFFloat584().getArray()).setKeyValue(new MFRotation585().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_distal_phalanx_5").setKey(new MFFloat586().getArray()).setKeyValue(new MFRotation587().getArray()))
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
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat3 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat5 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat7 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat8 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat9 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat10 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat11 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat13 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat15 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat17 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat18 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat19 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat21 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat23 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat24 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat25 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat27 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat29 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat30 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat31 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat32 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat33 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat34 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat35 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat36 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat37 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat38 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat39 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat40 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat41 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat42 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat43 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat44 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat45 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat46 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat47 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat48 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat49 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat50 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat51 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat52 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat53 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat54 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat55 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat56 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat57 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat58 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat59 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat60 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat61 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat62 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat63 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat64 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat65 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat66 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat67 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat68 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat69 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat70 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat71 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat72 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat73 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat74 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat75 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat76 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat77 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat78 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat79 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat80 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat81 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat82 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat83 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat84 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat85 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat86 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat87 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat88 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat89 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat90 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat91 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat92 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat93 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat94 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat95 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat96 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat97 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat98 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat99 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat100 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat101 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat102 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat103 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat104 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat105 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat106 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat107 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat108 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat109 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat110 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat111 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat112 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat113 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat114 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat115 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat116 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat117 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat118 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat119 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat120 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat121 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat122 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat123 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat124 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat125 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat126 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat127 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat128 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat129 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat130 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat131 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat132 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat133 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat134 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat135 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat136 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat137 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat138 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat139 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat140 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat141 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat142 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat143 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat144 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat145 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat146 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat147 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat148 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat149 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat150 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat151 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat152 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat153 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat154 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat155 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat156 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat157 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat158 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat159 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat160 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat161 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat162 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat163 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat164 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat165 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat166 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat167 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat168 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat169 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat170 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat171 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat172 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat173 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat174 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat175 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat176 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat177 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat178 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat179 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat180 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat181 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat182 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat183 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat184 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat185 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat186 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat187 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat188 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat189 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat190 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat191 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat192 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat193 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat194 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat195 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat196 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat197 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat198 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat199 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat200 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat201 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat202 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat203 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat204 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat205 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat206 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat207 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat208 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat209 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat210 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat211 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat212 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat213 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat214 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat215 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat216 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat217 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat218 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat219 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat220 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat221 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat222 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat223 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat224 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat225 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat226 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat227 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat228 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat229 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat230 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat231 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat232 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat233 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat234 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat235 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat236 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat237 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat238 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat239 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat240 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat241 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat242 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat243 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat244 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat245 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat246 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat247 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat248 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat249 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat250 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat251 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat252 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat253 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat254 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat255 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat256 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat257 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat258 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat259 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat260 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat261 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat262 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat263 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat264 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat265 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat266 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat267 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat268 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat269 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat270 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat271 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat272 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat273 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat274 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat275 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat276 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat277 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat278 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat279 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat280 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat281 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat282 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat283 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat284 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat285 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat286 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat287 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat288 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat289 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat290 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat291 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat292 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat293 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat294 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat295 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat296 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation297 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat298 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation299 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat300 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation301 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat302 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation303 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat304 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation305 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat306 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation307 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat308 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation309 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat310 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation311 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat312 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation313 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat314 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation315 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat316 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation317 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat318 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation319 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat320 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation321 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat322 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation323 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat324 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation325 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat326 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation327 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat328 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation329 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat330 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation331 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat332 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation333 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat334 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation335 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat336 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation337 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat338 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation339 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat340 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation341 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat342 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation343 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat344 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation345 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat346 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation347 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat348 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation349 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat350 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation351 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat352 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation353 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat354 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation355 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat356 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation357 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat358 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation359 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat360 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation361 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat362 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation363 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat364 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation365 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat366 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation367 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat368 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation369 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat370 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation371 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat372 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation373 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat374 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation375 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat376 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation377 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat378 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation379 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat380 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation381 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat382 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation383 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat384 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation385 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat386 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation387 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat388 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation389 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat390 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation391 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat392 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation393 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat394 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation395 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat396 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation397 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat398 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation399 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat400 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation401 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat402 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation403 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat404 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation405 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat406 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation407 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat408 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation409 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat410 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation411 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat412 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation413 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat414 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation415 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat416 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation417 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat418 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation419 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat420 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation421 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat422 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation423 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat424 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation425 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat426 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation427 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat428 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation429 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat430 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation431 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat432 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation433 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat434 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation435 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat436 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation437 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat438 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation439 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat440 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation441 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat442 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation443 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat444 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation445 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat446 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation447 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat448 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation449 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat450 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation451 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat452 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation453 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat454 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation455 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat456 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation457 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat458 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation459 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat460 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation461 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat462 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation463 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat464 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation465 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat466 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation467 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat468 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation469 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat470 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation471 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat472 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation473 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat474 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation475 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat476 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation477 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat478 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation479 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat480 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation481 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat482 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation483 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat484 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation485 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat486 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation487 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat488 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation489 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat490 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation491 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat492 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation493 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat494 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation495 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat496 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation497 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat498 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation499 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat500 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation501 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat502 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation503 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat504 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation505 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat506 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation507 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat508 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation509 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat510 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation511 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat512 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation513 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat514 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation515 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat516 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation517 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat518 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation519 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat520 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation521 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat522 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation523 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat524 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation525 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat526 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation527 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat528 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation529 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat530 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation531 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat532 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation533 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat534 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation535 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat536 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation537 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat538 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation539 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat540 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation541 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat542 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation543 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat544 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation545 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat546 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation547 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat548 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation549 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat550 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation551 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat552 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation553 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat554 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation555 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat556 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation557 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat558 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation559 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat560 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation561 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat562 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation563 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat564 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation565 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat566 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation567 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat568 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation569 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat570 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation571 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat572 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation573 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat574 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation575 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat576 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation577 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat578 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation579 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat580 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation581 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat582 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation583 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat584 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation585 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat586 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation587 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
}
