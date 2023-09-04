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
public class JohnJoint2 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new JohnJoint2().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/JohnJoint2.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("JohnJoint2.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d"))
        .addMeta(new meta().setName("description").setContent("An attempt at a standard LOA-4 skeleton"))
        .addMeta(new meta().setName("generator").setContent("h2.pl"))
        .addMeta(new meta().setName("modified").setContent("14 Jan 2023"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("9 November 2020"))
        .addComponent(new component().setName("HAnim").setLevel(1)))
      .setScene(new Scene()
        .addChild(new Transform()
          .addChild(new Shape().setDEF("AxisLinesShape")
            .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new MFInt320().getArray()).setCoordIndex(new MFInt321().getArray())
              .setColor(new Color().setColor(new MFColor2().getArray()))
              .setCoord(new Coordinate().setPoint(new MFVec3f3().getArray())))))
        .addChild(new Group()
          .addChild(new Transform()
            .addChild(new Transform().setTranslation(new float[] {0f,2.1f,0f})
              .addChild(new Shape().setDEF("HAnimJointShape")
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("HAnimJointMaterial").setDiffuseColor(new float[] {0f,0f,0.8f}).setTransparency(0.3f)))
                .setGeometry(new Sphere().setRadius(0.02f))))
            .addChild(new Transform().setTranslation(new float[] {0f,2.05f,0f})
              .addChild(new Shape().setDEF("HAnimSegmentLine")
                .setGeometry(new LineSet().setVertexCount(new MFInt324().getArray())
                  .setColor(new ColorRGBA().setDEF("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA5().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray())))))))
        .addChild(new NavigationInfo().setSpeed(1.5f))
        .addChild(new Viewpoint().setDescription("default"))
        .addChild(new HAnimHumanoid().setDEF("hanim_HAnim").setVersion("2.0").setName("HAnim").setInfo(new MFString7().getArray())
          .addSkeleton(new HAnimJoint("hanim_HAnim").setDEF("hanim_humanoid_root").setName("humanoid_root").setCenter(new float[] {0f,0.824f,0.0277f})
            .addChild(new HAnimJoint("hanim_humanoid_root").setDEF("hanim_sacroiliac").setName("sacroiliac").setCenter(new float[] {0f,0.9149f,0.0016f})
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_l_hip").setName("l_hip").setCenter(new float[] {0.0961f,0.9124f,-0.0001f})
                .addChild(new HAnimJoint("hanim_l_hip").setDEF("hanim_l_knee").setName("l_knee").setCenter(new float[] {0.104f,0.4867f,0.0308f})
                  .addChild(new HAnimJoint("hanim_l_knee").setDEF("hanim_l_talocrural").setName("l_talocrural").setCenter(new float[] {0.1101f,0.0656f,-0.0736f})
                    .addChild(new HAnimJoint("hanim_l_talocrural").setDEF("hanim_l_talocalcaneonavicular").setName("l_talocalcaneonavicular").setCenter(new float[] {0f,1f,0f})
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setDEF("hanim_l_cuneonavicular_1").setName("l_cuneonavicular_1").setCenter(new float[] {0f,1f,0f})
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_1").setDEF("hanim_l_tarsometatarsal_1").setName("l_tarsometatarsal_1").setCenter(new float[] {0f,1f,0f})
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_1").setDEF("hanim_l_metatarsophalangeal_1").setName("l_metatarsophalangeal_1").setCenter(new float[] {0f,1f,0f})
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_1").setDEF("hanim_l_tarsal_interphalangeal_1").setName("l_tarsal_interphalangeal_1").setCenter(new float[] {0f,1f,0f})))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setDEF("hanim_l_cuneonavicular_2").setName("l_cuneonavicular_2").setCenter(new float[] {0f,1f,0f})
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_2").setDEF("hanim_l_tarsometatarsal_2").setName("l_tarsometatarsal_2").setCenter(new float[] {0f,1f,0f})
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setDEF("hanim_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(new float[] {0f,1f,0f})
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setDEF("hanim_l_tarsal_proximal_interphalangeal_1").setName("l_tarsal_proximal_interphalangeal_2").setCenter(new float[] {0f,1f,0f})
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_1").setDEF("hanim_l_tarsal_distal_interphalangeal_1").setName("l_tarsal_distal_interphalangeal_2").setCenter(new float[] {0f,1f,0f}))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setDEF("hanim_l_cuneonavicular_3").setName("l_cuneonavicular_3").setCenter(new float[] {0f,1f,0f})
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_3").setDEF("hanim_l_tarsometatarsal_3").setName("l_tarsometatarsal_3").setCenter(new float[] {0f,1f,0f})
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_3").setDEF("hanim_l_metatarsophalangeal_3").setName("l_metatarsophalangeal_3").setCenter(new float[] {0f,1f,0f})
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_3").setDEF("hanim_l_tarsal_proximal_interphalangeal_2").setName("l_tarsal_proximal_interphalangeal_3").setCenter(new float[] {0f,1f,0f})
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_3").setCenter(new float[] {0f,1f,0f})))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setDEF("hanim_l_calcaneocuboid").setName("l_calcaneocuboid").setCenter(new float[] {0f,1f,0f})
                      .addChild(new HAnimJoint("hanim_l_calcaneocuboid").setDEF("hanim_l_transversetarsal").setName("l_transversetarsal").setCenter(new float[] {0f,1f,0f})
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setDEF("hanim_l_tarsometatarsal_4").setName("l_tarsometatarsal_4").setCenter(new float[] {0f,1f,0f})
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_4").setDEF("hanim_l_metatarsophalangeal_4").setName("l_metatarsophalangeal_4").setCenter(new float[] {0f,1f,0f})
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_4").setDEF("hanim_l_tarsal_proximal_interphalangeal_3").setName("l_tarsal_proximal_interphalangeal_4").setCenter(new float[] {0f,1f,0f})
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_3").setDEF("hanim_l_tarsal_distal_interphalangeal_3").setName("l_tarsal_distal_interphalangeal_4").setCenter(new float[] {0f,1f,0f})))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setDEF("hanim_l_tarsometatarsal_5").setName("l_tarsometatarsal_5").setCenter(new float[] {0f,1f,0f})
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_5").setDEF("hanim_l_metatarsophalangeal_5").setName("l_metatarsophalangeal_5").setCenter(new float[] {0f,1f,0f})
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_5").setDEF("hanim_l_tarsal_proximal_interphalangeal_4").setName("l_tarsal_proximal_interphalangeal_5").setCenter(new float[] {0f,1f,0f})
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_4").setDEF("hanim_l_tarsal_distal_interphalangeal_4").setName("l_tarsal_distal_interphalangeal_5").setCenter(new float[] {0f,1f,0f}))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_r_hip").setName("r_hip").setCenter(new float[] {-0.095f,0.9171f,0.0029f})
                .addChild(new HAnimJoint("hanim_r_hip").setDEF("hanim_r_knee").setName("r_knee").setCenter(new float[] {-0.0867f,0.4913f,0.0318f})
                  .addChild(new HAnimJoint("hanim_r_knee").setDEF("hanim_r_talocrural").setName("r_talocrural").setCenter(new float[] {-0.0801f,0.0712f,-0.0766f})
                    .addChild(new HAnimJoint("hanim_r_talocrural").setDEF("hanim_r_talocalcaneonavicular").setName("r_talocalcaneonavicular").setCenter(new float[] {0f,1f,0f})
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setDEF("hanim_r_cuneonavicular_1").setName("r_cuneonavicular_1").setCenter(new float[] {0f,1f,0f})
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setDEF("hanim_r_tarsometatarsal_1").setName("r_tarsometatarsal_1").setCenter(new float[] {0f,1f,0f})
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setDEF("hanim_r_metatarsophalangeal_1").setName("r_metatarsophalangeal_1").setCenter(new float[] {0f,1f,0f})
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setDEF("hanim_r_tarsal_interphalangeal_1").setName("r_tarsal_interphalangeal_1").setCenter(new float[] {0f,1f,0f})))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setDEF("hanim_r_cuneonavicular_2").setName("r_cuneonavicular_2").setCenter(new float[] {0f,1f,0f})
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setDEF("hanim_r_tarsometatarsal_2").setName("r_tarsometatarsal_2").setCenter(new float[] {0f,1f,0f})
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setDEF("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(new float[] {0f,1f,0f})
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setDEF("hanim_r_tarsal_proximal_interphalangeal_1").setName("r_tarsal_proximal_interphalangeal_2").setCenter(new float[] {0f,1f,0f})
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_1").setDEF("hanim_r_tarsal_distal_interphalangeal_1").setName("r_tarsal_distal_interphalangeal_2").setCenter(new float[] {0f,1f,0f}))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setDEF("hanim_r_cuneonavicular_3").setName("r_cuneonavicular_3").setCenter(new float[] {0f,1f,0f})
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setDEF("hanim_r_tarsometatarsal_3").setName("r_tarsometatarsal_3").setCenter(new float[] {0f,1f,0f})
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setDEF("hanim_r_metatarsophalangeal_3").setName("r_metatarsophalangeal_3").setCenter(new float[] {0f,1f,0f})
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setDEF("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_proximal_interphalangeal_3").setCenter(new float[] {0f,1f,0f})
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_3").setCenter(new float[] {0f,1f,0f})))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setDEF("hanim_r_calcaneocuboid").setName("r_calcaneocuboid").setCenter(new float[] {0f,1f,0f})
                      .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setDEF("hanim_r_transversetarsal").setName("r_transversetarsal").setCenter(new float[] {0f,1f,0f})
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setDEF("hanim_r_tarsometatarsal_4").setName("r_tarsometatarsal_4").setCenter(new float[] {0f,1f,0f})
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setDEF("hanim_r_metatarsophalangeal_4").setName("r_metatarsophalangeal_4").setCenter(new float[] {0f,1f,0f})
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setDEF("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_proximal_interphalangeal_4").setCenter(new float[] {0f,1f,0f})
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setDEF("hanim_r_tarsal_distal_interphalangeal_3").setName("r_tarsal_distal_interphalangeal_4").setCenter(new float[] {0f,1f,0f})))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setDEF("hanim_r_tarsometatarsal_5").setName("r_tarsometatarsal_5").setCenter(new float[] {0f,1f,0f})
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setDEF("hanim_r_metatarsophalangeal_5").setName("r_metatarsophalangeal_5").setCenter(new float[] {0f,1f,0f})
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setDEF("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_proximal_interphalangeal_5").setCenter(new float[] {0f,1f,0f})
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setDEF("hanim_r_tarsal_distal_interphalangeal_4").setName("r_tarsal_distal_interphalangeal_5").setCenter(new float[] {0f,1f,0f})))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setDEF("hanim_vl5").setName("vl5").setCenter(new float[] {0.0028f,1.0568f,-0.0776f})
              .addChild(new HAnimJoint("hanim_vl5").setDEF("hanim_vl4").setName("vl4").setCenter(new float[] {0.0035f,1.0925f,-0.0787f})
                .addChild(new HAnimJoint("hanim_vl4").setDEF("hanim_vl3").setName("vl3").setCenter(new float[] {0.0041f,1.1276f,-0.0796f})
                  .addChild(new HAnimJoint("hanim_vl3").setDEF("hanim_vl2").setName("vl2").setCenter(new float[] {0.0045f,1.1546f,-0.08f})
                    .addChild(new HAnimJoint("hanim_vl2").setDEF("hanim_vl1").setName("vl1").setCenter(new float[] {0.0048f,1.1912f,-0.0805f})
                      .addChild(new HAnimJoint("hanim_vl1").setDEF("hanim_vt12").setName("vt12").setCenter(new float[] {0.0051f,1.2278f,-0.0808f})
                        .addChild(new HAnimJoint("hanim_vt12").setDEF("hanim_vt11").setName("vt11").setCenter(new float[] {0.0053f,1.2679f,-0.081f})
                          .addChild(new HAnimJoint("hanim_vt11").setDEF("hanim_vt10").setName("vt10").setCenter(new float[] {0.0056f,1.2848f,-0.0822f})
                            .addChild(new HAnimJoint("hanim_vt10").setDEF("hanim_vt9").setName("vt9").setCenter(new float[] {0.0057f,1.3126f,-0.0838f})
                              .addChild(new HAnimJoint("hanim_vt9").setDEF("hanim_vt8").setName("vt8").setCenter(new float[] {0.0057f,1.3382f,-0.0845f})
                                .addChild(new HAnimJoint("hanim_vt8").setDEF("hanim_vt7").setName("vt7").setCenter(new float[] {0.0058f,1.3625f,-0.0833f})
                                  .addChild(new HAnimJoint("hanim_vt7").setDEF("hanim_vt6").setName("vt6").setCenter(new float[] {0.0059f,1.3866f,-0.08f})
                                    .addChild(new HAnimJoint("hanim_vt6").setDEF("hanim_vt5").setName("vt5").setCenter(new float[] {0.006f,1.4102f,-0.0745f})
                                      .addChild(new HAnimJoint("hanim_vt5").setDEF("hanim_vt4").setName("vt4").setCenter(new float[] {0.0061f,1.432f,-0.0675f})
                                        .addChild(new HAnimJoint("hanim_vt4").setDEF("hanim_vt3").setName("vt3").setCenter(new float[] {0.0062f,1.4583f,-0.057f})
                                          .addChild(new HAnimJoint("hanim_vt3").setDEF("hanim_vt2").setName("vt2").setCenter(new float[] {0.0063f,1.4761f,-0.0484f})
                                            .addChild(new HAnimJoint("hanim_vt2").setDEF("hanim_vt1").setName("vt1").setCenter(new float[] {0.0065f,1.4951f,-0.0387f})
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_vc7").setName("vc7").setCenter(new float[] {0.0066f,1.5132f,-0.0301f})
                                                .addChild(new HAnimJoint("hanim_vc7").setDEF("hanim_vc6").setName("vc6").setCenter(new float[] {0.0066f,1.5357f,-0.0143f})
                                                  .addChild(new HAnimJoint("hanim_vc6").setDEF("hanim_vc5").setName("vc5").setCenter(new float[] {0.0066f,1.552f,-0.0082f})
                                                    .addChild(new HAnimJoint("hanim_vc5").setDEF("hanim_vc4").setName("vc4").setCenter(new float[] {0.0066f,1.5662f,-0.0084f})
                                                      .addChild(new HAnimJoint("hanim_vc4").setDEF("hanim_vc3").setName("vc3").setCenter(new float[] {0.0066f,1.58f,-0.0103f})
                                                        .addChild(new HAnimJoint("hanim_vc3").setDEF("hanim_vc2").setName("vc2").setCenter(new float[] {0.0066f,1.5928f,-0.0103f})
                                                          .addChild(new HAnimJoint("hanim_vc2").setDEF("hanim_vc1").setName("vc1").setCenter(new float[] {0.0066f,1.6144f,-0.0034f})
                                                            .addChild(new HAnimJoint("hanim_vc1").setDEF("hanim_skullbase").setName("skullbase").setCenter(new float[] {0.0044f,1.6209f,0.0236f})
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyelid_joint").setName("l_eyelid_joint").setCenter(new float[] {0f,1f,0f}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyelid_joint").setName("r_eyelid_joint").setCenter(new float[] {0f,1f,0f}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyeball_joint").setName("l_eyeball_joint").setCenter(new float[] {0f,1f,0f}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyeball_joint").setName("r_eyeball_joint").setCenter(new float[] {0f,1f,0f}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyebrow_joint").setName("l_eyebrow_joint").setCenter(new float[] {0f,1f,0f}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyebrow_joint").setName("r_eyebrow_joint").setCenter(new float[] {0f,1f,0f}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_temporomandibular").setName("temporomandibular").setCenter(new float[] {0f,1f,0f}))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_l_sternoclavicular").setName("l_sternoclavicular").setCenter(new float[] {0.082f,1.4488f,-0.0353f})
                                                .addChild(new HAnimJoint("hanim_l_sternoclavicular").setDEF("hanim_l_acromioclavicular").setName("l_acromioclavicular").setCenter(new float[] {0.0962f,1.4269f,-0.0424f})
                                                  .addChild(new HAnimJoint("hanim_l_acromioclavicular").setDEF("hanim_l_shoulder").setName("l_shoulder").setCenter(new float[] {0.2029f,1.4376f,-0.0387f})
                                                    .addChild(new HAnimJoint("hanim_l_shoulder").setDEF("hanim_l_elbow").setName("l_elbow").setCenter(new float[] {0.2014f,1.1357f,-0.0682f})
                                                      .addChild(new HAnimJoint("hanim_l_elbow").setDEF("hanim_l_radiocarpal").setName("l_radiocarpal").setCenter(new float[] {0.1984f,0.8663f,-0.0583f})
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_midcarpal_1").setName("l_midcarpal_1").setCenter(new float[] {0f,1f,0f})
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_1").setDEF("hanim_l_carpometacarpal_1").setName("l_carpometacarpal_1").setCenter(new float[] {0.1924f,0.8472f,-0.0534f})
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setDEF("hanim_l_metacarpophalangeal_1").setName("l_metacarpophalangeal_1").setCenter(new float[] {0.1951f,0.8226f,0.0246f})
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setName("l_carpal_interphalangeal_1").setCenter(new float[] {0.1955f,0.8159f,0.0464f})))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_midcarpal_2").setName("l_midcarpal_2").setCenter(new float[] {0f,1f,0f})
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_2").setDEF("hanim_l_carpometacarpal_2").setName("l_carpometacarpal_2").setCenter(new float[] {0.1983f,0.8024f,-0.028f})
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setDEF("hanim_l_metacarpophalangeal_2").setName("l_metacarpophalangeal_2").setCenter(new float[] {0.1983f,0.7815f,-0.028f})
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_1").setName("l_carpal_proximal_interphalangeal_2").setCenter(new float[] {0.2017f,0.7363f,-0.0248f})
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_1").setDEF("hanim_l_carpal_distal_interphalangeal_1").setName("l_carpal_distal_interphalangeal_2").setCenter(new float[] {0.2028f,0.7139f,-0.0236f}))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_midcarpal_3").setName("l_midcarpal_3").setCenter(new float[] {0f,1f,0f})
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_3").setDEF("hanim_l_carpometacarpal_3").setName("l_carpometacarpal_3").setCenter(new float[] {0.1987f,0.8029f,-0.053f})
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setDEF("hanim_l_metacarpophalangeal_3").setName("l_metacarpophalangeal_3").setCenter(new float[] {0.1987f,0.7818f,-0.053f})
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_proximal_interphalangeal_3").setCenter(new float[] {0.2013f,0.7273f,-0.0503f})
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_3").setCenter(new float[] {0.2026f,0.7011f,-0.0494f}))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_midcarpal_4_1").setName("l_midcarpal_4_5").setCenter(new float[] {0f,1f,0f})
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_1").setDEF("hanim_l_carpometacarpal_4").setName("l_carpometacarpal_4").setCenter(new float[] {0.1956f,0.8019f,-0.0794f})
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setDEF("hanim_l_metacarpophalangeal_4").setName("l_metacarpophalangeal_4").setCenter(new float[] {0.1956f,0.7815f,-0.0794f})
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_proximal_interphalangeal_4").setCenter(new float[] {0.1973f,0.7287f,-0.0777f})
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_4").setCenter(new float[] {0.1983f,0.7045f,-0.0767f})))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_1").setDEF("hanim_l_carpometacarpal_5").setName("l_carpometacarpal_5").setCenter(new float[] {0.1925f,0.8066f,-0.1036f})
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setDEF("hanim_l_metacarpophalangeal_5").setName("l_metacarpophalangeal_5").setCenter(new float[] {0.1925f,0.7866f,-0.1036f})
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_proximal_interphalangeal_5").setCenter(new float[] {0.1938f,0.7452f,-0.1024f})
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_5").setCenter(new float[] {0.1948f,0.7277f,-0.1017f})))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_r_sternoclavicular").setName("r_sternoclavicular").setCenter(new float[] {-0.0694f,1.46f,-0.033f})
                                                .addChild(new HAnimJoint("hanim_r_sternoclavicular").setDEF("hanim_r_acromioclavicular").setName("r_acromioclavicular").setCenter(new float[] {-0.0836f,1.4281f,-0.0401f})
                                                  .addChild(new HAnimJoint("hanim_r_acromioclavicular").setDEF("hanim_r_shoulder").setName("r_shoulder").setCenter(new float[] {-0.1907f,1.4407f,-0.0325f})
                                                    .addChild(new HAnimJoint("hanim_r_shoulder").setDEF("hanim_r_elbow").setName("r_elbow").setCenter(new float[] {-0.1949f,1.1388f,-0.062f})
                                                      .addChild(new HAnimJoint("hanim_r_elbow").setDEF("hanim_r_radiocarpal").setName("r_radiocarpal").setCenter(new float[] {-0.1959f,0.8694f,-0.0521f})
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_1").setName("r_midcarpal_1").setCenter(new float[] {0f,1f,0f})
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_1").setDEF("hanim_r_carpometacarpal_1").setName("r_carpometacarpal_1").setCenter(new float[] {-0.1899f,0.8502f,-0.0473f})
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setDEF("hanim_r_metacarpophalangeal_1").setName("r_metacarpophalangeal_1").setCenter(new float[] {-0.1874f,0.8256f,0.0306f})
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setName("r_carpal_interphalangeal_1").setCenter(new float[] {-0.1864f,0.819f,0.0506f})))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_2").setName("r_midcarpal_2").setCenter(new float[] {0f,1f,0f})
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_2").setDEF("hanim_r_carpometacarpal_2").setName("r_carpometacarpal_2").setCenter(new float[] {-0.1961f,0.8055f,-0.0218f})
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setDEF("hanim_r_metacarpophalangeal_2").setName("r_metacarpophalangeal_2").setCenter(new float[] {-0.1961f,0.7846f,-0.0218f})
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_1").setName("r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-0.1954f,0.7393f,-0.0185f})
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_1").setDEF("hanim_r_carpal_distal_interphalangeal_1").setName("r_carpal_distal_interphalangeal_2").setCenter(new float[] {-0.1945f,0.7169f,-0.0173f}))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_3").setName("r_midcarpal_3").setCenter(new float[] {0f,1f,0f})
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_3").setDEF("hanim_r_carpometacarpal_3").setName("r_carpometacarpal_3").setCenter(new float[] {-0.1972f,0.806f,-0.0468f})
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setDEF("hanim_r_metacarpophalangeal_3").setName("r_metacarpophalangeal_3").setCenter(new float[] {-0.1972f,0.7849f,-0.0468f})
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-0.195f,0.7304f,-0.0441f})
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_3").setCenter(new float[] {-0.1939f,0.7042f,-0.0432f}))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_4_1").setName("r_midcarpal_4_5").setCenter(new float[] {0f,1f,0f})
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_1").setDEF("hanim_r_carpometacarpal_4").setName("r_carpometacarpal_4").setCenter(new float[] {-0.1951f,0.8049f,-0.0732f})
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setDEF("hanim_r_metacarpophalangeal_4").setName("r_metacarpophalangeal_4").setCenter(new float[] {-0.1951f,0.7845f,-0.0732f})
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_proximal_interphalangeal_4").setCenter(new float[] {-0.192f,0.7318f,-0.0716f})
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_4").setCenter(new float[] {-0.1908f,0.7077f,-0.0706f})))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_1").setDEF("hanim_r_carpometacarpal_5").setName("r_carpometacarpal_5").setCenter(new float[] {-0.1926f,0.8096f,-0.0975f})
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setDEF("hanim_r_metacarpophalangeal_5").setName("r_metacarpophalangeal_5").setCenter(new float[] {-0.1926f,0.7896f,-0.0975f})
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_proximal_interphalangeal_5").setCenter(new float[] {-0.1902f,0.7483f,-0.0963f})
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_5").setCenter(new float[] {-0.1908f,0.754f,-0.096f})))))))))))))))))))))))))))))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_sacroiliac"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_hip"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_talocrural"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_talocalcaneonavicular"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_cuneonavicular_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsometatarsal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metatarsophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_cuneonavicular_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsometatarsal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_proximal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_distal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_cuneonavicular_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsometatarsal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_calcaneocuboid"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_transversetarsal"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsometatarsal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsometatarsal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metatarsophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_hip"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_talocrural"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_talocalcaneonavicular"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_cuneonavicular_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsometatarsal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metatarsophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_cuneonavicular_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsometatarsal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_proximal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_distal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_cuneonavicular_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsometatarsal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_calcaneocuboid"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_transversetarsal"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsometatarsal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsometatarsal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metatarsophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vl5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vl4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vl3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vl2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vl1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vt12"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vt11"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vt10"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vt9"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vt8"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vt7"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vt6"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vt5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vt4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vt3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vt2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vt1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vc7"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vc6"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vc5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vc4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vc3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vc2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_vc1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_skullbase"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_eyelid_joint"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_eyelid_joint"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_eyeball_joint"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_eyeball_joint"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_eyebrow_joint"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_eyebrow_joint"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_temporomandibular"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_sternoclavicular"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_acromioclavicular"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_radiocarpal"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_midcarpal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpometacarpal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_midcarpal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpometacarpal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_proximal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_distal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_midcarpal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpometacarpal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_midcarpal_4_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpometacarpal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpometacarpal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_sternoclavicular"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_acromioclavicular"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_radiocarpal"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_midcarpal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpometacarpal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_midcarpal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpometacarpal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_proximal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_distal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_midcarpal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpometacarpal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_midcarpal_4_1"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpometacarpal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpometacarpal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_distal_interphalangeal_4"))))      ;
    return X3D0;
    }
private class MFInt320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2});
  }
}
private class MFInt321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
private class MFColor2 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f,0f,0f,0f,0.6f,0f,0f,0f,1f});
  }
}
private class MFVec3f3 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.1f,0f,0f,0f,0.1f,0f,0f,0f,0.1f});
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA5 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f,1f,0f,1f,1f,1f,0f,0.1f});
  }
}
private class MFVec3f6 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f,0f,0f,0.05f,0f,0f});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"humanoidVersion=2.0"});
  }
}
}
