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
public class Humanoid4_1 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new Humanoid4_1().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/Humanoid4_1.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("Humanoid4_1.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d"))
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
            .addChild(new Transform().setTranslation(new float[] {0f,2f,0f})
              .addChild(new Shape().setDEF("HAnimRootShape")
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("HAnimRootMaterial").setDiffuseColor(new float[] {0.8f,0f,0f}).setTransparency(0.3f)))
                .setGeometry(new Sphere().setRadius(0.02f))))
            .addChild(new Transform().setTranslation(new float[] {0f,2.1f,0f})
              .addChild(new Shape().setDEF("HAnimJointShape")
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("HAnimJointMaterial").setDiffuseColor(new float[] {0f,0f,0.8f}).setTransparency(0.3f)))
                .setGeometry(new Sphere().setRadius(0.02f))))
            .addChild(new Transform().setTranslation(new float[] {0f,2.05f,0f})
              .addChild(new Shape().setDEF("HAnimSegmentLine")
                .setGeometry(new LineSet().setVertexCount(new MFInt324().getArray())
                  .setColor(new ColorRGBA().setDEF("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA5().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray())))))
            .addChild(new Transform().setTranslation(new float[] {0f,2.1f,0f})
              .addChild(new Shape().setDEF("HAnimSiteShape")
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0f}).setTransparency(0.3f)))
                .setGeometry(new IndexedFaceSet().setDEF("DiamondIFS").setSolid(false).setCreaseAngle(0.5f).setCoordIndex(new MFInt327().getArray())
                  .setColor(new ColorRGBA().setDEF("HAnimSiteColorRGBA").setColor(new MFColorRGBA8().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f9().getArray())))))))
        .addChild(new NavigationInfo().setSpeed(1.5f))
        .addChild(new Viewpoint().setDescription("default"))
        .addChild(new HAnimHumanoid().setDEF("hanim_HAnim").setVersion("2.0").setName("HAnim").setInfo(new MFString10().getArray())
          .addSkeleton(new HAnimJoint("hanim_HAnim").setDEF("hanim_humanoid_root").setName("humanoid_root").setCenter(new float[] {0f,0.824f,0.0277f})
            .addChild(new HAnimSegment("hanim_humanoid_root").setDEF("hanim_sacrum").setName("sacrum")
              .addChild(new Transform().setTranslation(new float[] {0f,0.824f,0.0277f})
                .addChild(new Transform()
                  .addChild(new Shape().setUSE("HAnimJointShape"))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3211().getArray())
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                  .setCoord(new Coordinate().setPoint(new MFVec3f12().getArray()))))
              .addChild(new HAnimSite("hanim_sacrum").setDEF("hanim_buttocks_standing_wall_contact_point_pt").setName("buttocks_standing_wall_contact_point_pt")
                .addChild(new TouchSensor().setDescription("HAnimSite buttocks_standing_wall_contact_point_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setDEF("hanim_crotch_pt").setName("crotch_pt").setTranslation(new float[] {0.0034f,0.8266f,0.0257f})
                .addChild(new TouchSensor().setDescription("HAnimSite crotch_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setDEF("hanim_l_asis_pt").setName("l_asis_pt").setTranslation(new float[] {0.0925f,0.9983f,0.1052f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_asis_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setDEF("hanim_l_iliocristale_pt").setName("l_iliocristale_pt").setTranslation(new float[] {0.1612f,1.0537f,0.0008f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_iliocristale_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setDEF("hanim_l_psis_pt").setName("l_psis_pt").setTranslation(new float[] {0.0774f,1.019f,-0.1151f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_psis_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setDEF("hanim_l_trochanterion_pt").setName("l_trochanterion_pt").setTranslation(new float[] {0.1677f,0.8336f,0.0303f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_trochanterion_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setDEF("hanim_r_asis_pt").setName("r_asis_pt").setTranslation(new float[] {-0.0887f,1.0021f,0.1112f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_asis_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setDEF("hanim_r_iliocristale_pt").setName("r_iliocristale_pt").setTranslation(new float[] {-0.1525f,1.0628f,0.0035f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_iliocristale_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setDEF("hanim_r_psis_pt").setName("r_psis_pt").setTranslation(new float[] {-0.0716f,1.019f,-0.1138f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_psis_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setDEF("hanim_r_trochanterion_pt").setName("r_trochanterion_pt").setTranslation(new float[] {-0.1689f,0.8419f,0.0352f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_trochanterion_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3213().getArray())
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                  .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))))
              .addChild(new HAnimSite("hanim_sacrum").setDEF("hanim_navel_pt").setName("navel_pt").setTranslation(new float[] {0.0069f,1.0966f,0.1017f})
                .addChild(new TouchSensor().setDescription("HAnimSite navel_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setDEF("hanim_waist_preferred_anterior_pt").setName("waist_preferred_anterior_pt")
                .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_anterior_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setDEF("hanim_waist_preferred_posterior_pt").setName("waist_preferred_posterior_pt").setTranslation(new float[] {0.29f,1.0915f,-0.1091f})
                .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_posterior_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape"))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setDEF("hanim_sacroiliac").setName("sacroiliac").setCenter(new float[] {0f,0.9149f,0.0016f})
              .addChild(new HAnimSegment("hanim_sacroiliac").setDEF("hanim_pelvis").setName("pelvis")
                .addChild(new Transform().setTranslation(new float[] {0f,0.9149f,0.0016f})
                  .addChild(new Transform()
                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3215().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f16().getArray()))))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_femoral_lateral_epicondyles_pt").setName("l_femoral_lateral_epicondyles_pt").setTranslation(new float[] {0.1598f,0.4967f,0.0297f})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_lateral_epicondyles_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_femoral_medial_epicondyles_pt").setName("l_femoral_medial_epicondyles_pt").setTranslation(new float[] {0.0398f,0.4946f,0.0303f})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_medial_epicondyles_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_knee_crease_pt").setName("l_knee_crease_pt").setTranslation(new float[] {0.0993f,0.4881f,-0.0309f})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_knee_crease_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_suprapatella_pt").setName("l_suprapatella_pt")
                  .addChild(new TouchSensor().setDescription("HAnimSite l_suprapatella_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3217().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f18().getArray()))))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_r_femoral_lateral_epicondyles_pt").setName("r_femoral_lateral_epicondyles_pt").setTranslation(new float[] {-0.1421f,0.4992f,0.031f})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_lateral_epicondyles_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_r_femoral_medial_epicondyles_pt").setName("r_femoral_medial_epicondyles_pt").setTranslation(new float[] {-0.0221f,0.5014f,0.0289f})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_medial_epicondyles_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_r_knee_crease_pt").setName("r_knee_crease_pt").setTranslation(new float[] {-0.0825f,0.4932f,-0.0326f})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_knee_crease_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_r_suprapatella_pt").setName("r_suprapatella_pt")
                  .addChild(new TouchSensor().setDescription("HAnimSite r_suprapatella_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_l_hip").setName("l_hip").setCenter(new float[] {0.0961f,0.9124f,-0.0001f})
                .addChild(new HAnimSegment("hanim_l_hip").setDEF("hanim_l_thigh").setName("l_thigh")
                  .addChild(new Transform().setTranslation(new float[] {0.0961f,0.9124f,-0.0001f})
                    .addChild(new Transform()
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3219().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f20().getArray()))))
                  .addChild(new HAnimSite("hanim_l_thigh").setDEF("hanim_l_lateral_malleolus_pt").setName("l_lateral_malleolus_pt").setTranslation(new float[] {0.1308f,0.0597f,-0.1032f})
                    .addChild(new TouchSensor().setDescription("HAnimSite l_lateral_malleolus_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_l_thigh").setDEF("hanim_l_medial_malleolus_pt").setName("l_medial_malleolus_pt").setTranslation(new float[] {0.089f,0.0716f,-0.0881f})
                    .addChild(new TouchSensor().setDescription("HAnimSite l_medial_malleolus_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_l_thigh").setDEF("hanim_l_tibiale_pt").setName("l_tibiale_pt")
                    .addChild(new TouchSensor().setDescription("HAnimSite l_tibiale_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint("hanim_l_hip").setDEF("hanim_l_knee").setName("l_knee").setCenter(new float[] {0.104f,0.4867f,0.0308f})
                  .addChild(new HAnimSegment("hanim_l_knee").setDEF("hanim_l_calf").setName("l_calf")
                    .addChild(new Transform().setTranslation(new float[] {0.104f,0.4867f,0.0308f})
                      .addChild(new Transform()
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3221().getArray())
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                        .setCoord(new Coordinate().setPoint(new MFVec3f22().getArray()))))
                    .addChild(new HAnimSite("hanim_l_calf").setDEF("hanim_l_calcaneus_posterior_pt").setName("l_calcaneus_posterior_pt").setTranslation(new float[] {0.0974f,0.0259f,-0.1171f})
                      .addChild(new TouchSensor().setDescription("HAnimSite l_calcaneus_posterior_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                    .addChild(new HAnimSite("hanim_l_calf").setDEF("hanim_l_sphyrion_pt").setName("l_sphyrion_pt").setTranslation(new float[] {0.089f,0.0575f,-0.0943f})
                      .addChild(new TouchSensor().setDescription("HAnimSite l_sphyrion_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                  .addChild(new HAnimJoint("hanim_l_knee").setDEF("hanim_l_talocrural").setName("l_talocrural").setCenter(new float[] {0.1101f,0.0656f,-0.0736f})
                    .addChild(new HAnimSegment("hanim_l_talocrural").setDEF("hanim_l_talus").setName("l_talus")
                      .addChild(new Transform().setTranslation(new float[] {0.08f,0.06f,-0.025f}).setRotation(new float[] {1f,0f,0f,-1.57f}).setScale(new float[] {0.15f,0.15f,0.15f})
                        .addChild(new Transform()
                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3223().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f24().getArray()))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3225().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray())))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setDEF("hanim_l_talocalcaneonavicular").setName("l_talocalcaneonavicular").setCenter(new float[] {3.4715f,0.0374f,0.6807f})
                      .addChild(new HAnimSegment("hanim_l_talocalcaneonavicular").setDEF("hanim_l_navicular").setName("l_navicular")
                        .addChild(new Transform().setTranslation(new float[] {3.4715f,0.0374f,0.6807f})
                          .addChild(new Transform()
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3227().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f28().getArray()))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3229().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3231().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f32().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setDEF("hanim_l_cuneonavicular_1").setName("l_cuneonavicular_1").setCenter(new float[] {2.9855f,0.0311f,1.2819f})
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_1").setDEF("hanim_l_cuneiform_1").setName("l_cuneiform_1")
                          .addChild(new Transform().setTranslation(new float[] {2.9855f,0.0311f,1.2819f})
                            .addChild(new Transform()
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3233().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_1").setDEF("hanim_l_tarsometatarsal_1").setName("l_tarsometatarsal_1").setCenter(new float[] {2.8635f,0.0194f,2.4285f})
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_1").setDEF("hanim_l_metatarsal_1").setName("l_metatarsal_1")
                            .addChild(new Transform().setTranslation(new float[] {2.8635f,0.0194f,2.4285f})
                              .addChild(new Transform()
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3235().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f36().getArray()))))
                            .addChild(new HAnimSite("hanim_l_metatarsal_1").setDEF("hanim_l_metatarsal_phalanx_1_pt").setName("l_metatarsal_phalanx_1_pt")
                              .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_phalanx_1_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_1").setDEF("hanim_l_metatarsophalangeal_1").setName("l_metatarsophalangeal_1").setCenter(new float[] {2.7525f,0.0077f,4.6255f})
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_1").setDEF("hanim_l_tarsal_proximal_phalanx_1").setName("l_tarsal_proximal_phalanx_1")
                              .addChild(new Transform().setTranslation(new float[] {2.7525f,0.0077f,4.6255f})
                                .addChild(new Transform()
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3237().getArray())
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray()))))
                              .addChild(new HAnimSite("hanim_l_tarsal_proximal_phalanx_1").setDEF("hanim_l_tarsal_distal_phalanx_1_tip").setName("l_tarsal_distal_phalanx_1_tip")
                                .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_1").setDEF("hanim_l_tarsal_interphalangeal_1").setName("l_tarsal_interphalangeal_1")))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setDEF("hanim_l_cuneonavicular_2").setName("l_cuneonavicular_2").setCenter(new float[] {3.6105f,0.033f,1.4168f})
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_2").setDEF("hanim_l_cuneiform_2").setName("l_cuneiform_2")
                          .addChild(new Transform().setTranslation(new float[] {3.6105f,0.033f,1.4168f})
                            .addChild(new Transform()
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3239().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f40().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_2").setDEF("hanim_l_tarsometatarsal_2").setName("l_tarsometatarsal_2").setCenter(new float[] {3.5555f,0.0232f,2.2895f})
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_2").setDEF("hanim_l_metatarsal_2").setName("l_metatarsal_2")
                            .addChild(new Transform().setTranslation(new float[] {3.5555f,0.0232f,2.2895f})
                              .addChild(new Transform()
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3241().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setDEF("hanim_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(new float[] {3.6595f,0.0085f,4.8125f})
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setDEF("hanim_l_tarsal_proximal_phalanx_2").setName("l_tarsal_proximal_phalanx_2")
                              .addChild(new Transform().setTranslation(new float[] {3.6595f,0.0085f,4.8125f})
                                .addChild(new Transform()
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3243().getArray())
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f44().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setDEF("hanim_l_tarsal_proximal_interphalangeal_1").setName("l_tarsal_proximal_interphalangeal_2").setCenter(new float[] {3.7385f,0.0054f,5.5315f})
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_1").setDEF("hanim_l_tarsal_middle_phalanx_1").setName("l_tarsal_middle_phalanx_2")
                                .addChild(new Transform().setTranslation(new float[] {3.7385f,0.0054f,5.5315f})
                                  .addChild(new Transform()
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3245().getArray())
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray()))))
                                .addChild(new HAnimSite("hanim_l_tarsal_middle_phalanx_1").setDEF("hanim_l_tarsal_distal_phalanx_2_tip").setName("l_tarsal_distal_phalanx_2_tip").setTranslation(new float[] {0.1195f,0.0079f,0.1433f})
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_1").setDEF("hanim_l_tarsal_distal_interphalangeal_1").setName("l_tarsal_distal_interphalangeal_2").setCenter(new float[] {3.7385f,0.0017f,5.9505f}))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setDEF("hanim_l_cuneonavicular_3").setName("l_cuneonavicular_3").setCenter(new float[] {4.1235f,0.0328f,1.3453f})
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_3").setDEF("hanim_l_cuneiform_3").setName("l_cuneiform_3")
                          .addChild(new Transform().setTranslation(new float[] {4.1235f,0.0328f,1.3453f})
                            .addChild(new Transform()
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3247().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f48().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_3").setDEF("hanim_l_tarsometatarsal_3 ").setName("l_tarsometatarsal_3 ")
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_3 ").setDEF("hanim_l_metatarsal_3").setName("l_metatarsal_3")
                            .addChild(new Transform().setTranslation(new float[] {4.1235f,0.0328f,1.3453f})
                              .addChild(new Transform()
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3249().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_3 ").setDEF("hanim_l_metatarsophalangeal_3").setName("l_metatarsophalangeal_3").setCenter(new float[] {4.2795f,0.0086f,4.7055f})
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_3").setDEF("hanim_l_tarsal_proximal_phalanx_3").setName("l_tarsal_proximal_phalanx_3")
                              .addChild(new Transform().setTranslation(new float[] {4.2795f,0.0086f,4.7055f})
                                .addChild(new Transform()
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3251().getArray())
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f52().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_3").setDEF("hanim_l_tarsal_proximal_interphalangeal_2").setName("l_tarsal_proximal_interphalangeal_3").setCenter(new float[] {4.3855f,0.0044f,5.3745f})
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_2").setDEF("hanim_l_tarsal_middle_phalanx_2").setName("l_tarsal_middle_phalanx_3")
                                .addChild(new Transform().setTranslation(new float[] {4.3855f,0.0044f,5.3745f})
                                  .addChild(new Transform()
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3253().getArray())
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray()))))
                                .addChild(new HAnimSite("hanim_l_tarsal_middle_phalanx_2").setDEF("hanim_l_tarsal_distal_phalanx_3_tip").setName("l_tarsal_distal_phalanx_3_tip")
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_3").setCenter(new float[] {4.4545f,0.0017f,5.7845f})))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setDEF("hanim_l_calcaneocuboid").setName("l_calcaneocuboid").setCenter(new float[] {3.9515f,0.0653f,-0.6895f})
                      .addChild(new HAnimSegment("hanim_l_calcaneocuboid").setDEF("hanim_l_calcaneus").setName("l_calcaneus")
                        .addChild(new Transform().setTranslation(new float[] {3.9515f,0.0653f,-0.6895f})
                          .addChild(new Transform()
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3255().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f56().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_calcaneocuboid").setDEF("hanim_l_transversetarsal").setName("l_transversetarsal").setCenter(new float[] {4.9085f,0.0353f,0.5574f})
                        .addChild(new HAnimSegment("hanim_l_transversetarsal").setDEF("hanim_l_cuboid").setName("l_cuboid")
                          .addChild(new Transform().setTranslation(new float[] {4.9085f,0.0353f,0.5574f})
                            .addChild(new Transform()
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3257().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f58().getArray()))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3259().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f60().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setDEF("hanim_l_tarsometatarsal_3").setName("l_tarsometatarsal_4").setCenter(new float[] {4.7245f,0.0211f,2.1725f})
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_3").setDEF("hanim_l_metatarsal_4").setName("l_metatarsal_4")
                            .addChild(new Transform().setTranslation(new float[] {4.7245f,0.0211f,2.1725f})
                              .addChild(new Transform()
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3261().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f62().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_3").setDEF("hanim_l_metatarsophalangeal_4").setName("l_metatarsophalangeal_4").setCenter(new float[] {4.8745f,0.0076f,4.5165f})
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_4").setDEF("hanim_l_tarsal_proximal_phalanx_4").setName("l_tarsal_proximal_phalanx_4")
                              .addChild(new Transform().setTranslation(new float[] {4.8745f,0.0076f,4.5165f})
                                .addChild(new Transform()
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3263().getArray())
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f64().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_4").setDEF("hanim_l_tarsal_proximal_interphalangeal_3").setName("l_tarsal_proximal_interphalangeal_4").setCenter(new float[] {5.0655f,0.0049f,5.1895f})
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_3").setDEF("hanim_l_tarsal_middle_phalanx_3").setName("l_tarsal_middle_phalanx_4")
                                .addChild(new Transform().setTranslation(new float[] {5.0655f,0.0049f,5.1895f})
                                  .addChild(new Transform()
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3265().getArray())
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f66().getArray()))))
                                .addChild(new HAnimSite("hanim_l_tarsal_middle_phalanx_3").setDEF("hanim_l_tarsal_distal_phalanx_4_tip").setName("l_tarsal_distal_phalanx_4_tip")
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_3").setDEF("hanim_l_tarsal_distal_interphalangeal_3").setName("l_tarsal_distal_interphalangeal_4").setCenter(new float[] {5.1325f,0.0011f,5.5175f})))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setDEF("hanim_l_tarsometatarsal_4").setName("l_tarsometatarsal_5").setCenter(new float[] {5.3615f,0.0164f,2.0085f})
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_4").setDEF("hanim_l_metatarsal_5").setName("l_metatarsal_5")
                            .addChild(new Transform().setTranslation(new float[] {5.3615f,0.0164f,2.0085f})
                              .addChild(new Transform()
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3267().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f68().getArray()))))
                            .addChild(new HAnimSite("hanim_l_metatarsal_5").setDEF("hanim_l_metatarsal_phalanx_5_pt").setName("l_metatarsal_phalanx_5_pt")
                              .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_phalanx_5_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_4").setDEF("hanim_l_metatarsophalangeal_5").setName("l_metatarsophalangeal_5").setCenter(new float[] {5.5055f,0.0067f,4.3115f})
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_5").setDEF("hanim_l_tarsal_proximal_phalanx_5").setName("l_tarsal_proximal_phalanx_5")
                              .addChild(new Transform().setTranslation(new float[] {5.5055f,0.0067f,4.3115f})
                                .addChild(new Transform()
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3269().getArray())
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f70().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_5").setDEF("hanim_l_tarsal_proximal_interphalangeal_4").setName("l_tarsal_proximal_interphalangeal_5").setCenter(new float[] {5.6085f,0.003f,4.6485f})
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_4").setDEF("hanim_l_tarsal_middle_phalanx_4").setName("l_tarsal_middle_phalanx_5")
                                .addChild(new Transform().setTranslation(new float[] {5.6085f,0.003f,4.6485f})
                                  .addChild(new Transform()
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3271().getArray())
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f72().getArray()))))
                                .addChild(new HAnimSite("hanim_l_tarsal_middle_phalanx_4").setDEF("hanim_l_tarsal_distal_phalanx_5_tip").setName("l_tarsal_distal_phalanx_5_tip")
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_4").setDEF("hanim_l_tarsal_distal_interphalangeal_4").setName("l_tarsal_distal_interphalangeal_5").setCenter(new float[] {5.6485f,0f,4.9925f}))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_r_hip").setName("r_hip").setCenter(new float[] {-0.095f,0.9171f,0.0029f})
                .addChild(new HAnimSegment("hanim_r_hip").setDEF("hanim_r_thigh").setName("r_thigh")
                  .addChild(new Transform().setTranslation(new float[] {-0.095f,0.9171f,0.0029f})
                    .addChild(new Transform()
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3273().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f74().getArray()))))
                  .addChild(new HAnimSite("hanim_r_thigh").setDEF("hanim_r_lateral_malleolus_pt").setName("r_lateral_malleolus_pt").setTranslation(new float[] {-0.1006f,0.0658f,-0.1075f})
                    .addChild(new TouchSensor().setDescription("HAnimSite r_lateral_malleolus_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_r_thigh").setDEF("hanim_r_medial_malleolus_pt").setName("r_medial_malleolus_pt").setTranslation(new float[] {-0.0591f,0.076f,-0.0928f})
                    .addChild(new TouchSensor().setDescription("HAnimSite r_medial_malleolus_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_r_thigh").setDEF("hanim_r_tibiale_pt").setName("r_tibiale_pt")
                    .addChild(new TouchSensor().setDescription("HAnimSite r_tibiale_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint("hanim_r_hip").setDEF("hanim_r_knee").setName("r_knee").setCenter(new float[] {-0.0867f,0.4913f,0.0318f})
                  .addChild(new HAnimSegment("hanim_r_knee").setDEF("hanim_r_calf").setName("r_calf")
                    .addChild(new Transform().setTranslation(new float[] {-0.0867f,0.4913f,0.0318f})
                      .addChild(new Transform()
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3275().getArray())
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                        .setCoord(new Coordinate().setPoint(new MFVec3f76().getArray()))))
                    .addChild(new HAnimSite("hanim_r_calf").setDEF("hanim_r_calcaneus_posterior_pt").setName("r_calcaneus_posterior_pt").setTranslation(new float[] {-0.0692f,0.0297f,-0.1221f})
                      .addChild(new TouchSensor().setDescription("HAnimSite r_calcaneus_posterior_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                    .addChild(new HAnimSite("hanim_r_calf").setDEF("hanim_r_sphyrion_pt").setName("r_sphyrion_pt").setTranslation(new float[] {-0.0603f,0.061f,-0.1002f})
                      .addChild(new TouchSensor().setDescription("HAnimSite r_sphyrion_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                  .addChild(new HAnimJoint("hanim_r_knee").setDEF("hanim_r_talocrural").setName("r_talocrural").setCenter(new float[] {-0.0801f,0.0712f,-0.0766f})
                    .addChild(new HAnimSegment("hanim_r_talocrural").setDEF("hanim_r_talus").setName("r_talus")
                      .addChild(new Transform().setTranslation(new float[] {-0.05f,0.06f,-0.025f}).setRotation(new float[] {1f,0f,0f,-1.57f}).setScale(new float[] {0.15f,0.15f,0.15f})
                        .addChild(new Transform()
                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3277().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f78().getArray()))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3279().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setDEF("hanim_r_talocalcaneonavicular").setName("r_talocalcaneonavicular").setCenter(new float[] {-3.4725f,0.0374f,0.6807f})
                      .addChild(new HAnimSegment("hanim_r_talocalcaneonavicular").setDEF("hanim_r_navicular").setName("r_navicular")
                        .addChild(new Transform().setTranslation(new float[] {-3.4725f,0.0374f,0.6807f})
                          .addChild(new Transform()
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3281().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f82().getArray()))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3283().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f84().getArray()))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3285().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setDEF("hanim_r_cuneonavicular_1").setName("r_cuneonavicular_1").setCenter(new float[] {-2.9855f,0.0311f,1.2819f})
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_1").setDEF("hanim_r_cuneiform_1").setName("r_cuneiform_1")
                          .addChild(new Transform().setTranslation(new float[] {-2.9855f,0.0311f,1.2819f})
                            .addChild(new Transform()
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3287().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f88().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setDEF("hanim_r_tarsometatarsal_1").setName("r_tarsometatarsal_1").setCenter(new float[] {-2.8645f,0.0194f,2.4285f})
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_1").setDEF("hanim_r_metatarsal_1").setName("r_metatarsal_1")
                            .addChild(new Transform().setTranslation(new float[] {-2.8645f,0.0194f,2.4285f})
                              .addChild(new Transform()
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3289().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f90().getArray()))))
                            .addChild(new HAnimSite("hanim_r_metatarsal_1").setDEF("hanim_r_metatarsal_phalanx_1_pt").setName("r_metatarsal_phalanx_1_pt")
                              .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_phalanx_1_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setDEF("hanim_r_metatarsophalangeal_1").setName("r_metatarsophalangeal_1").setCenter(new float[] {-2.7535f,0.0077f,4.6255f})
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_1").setDEF("hanim_r_tarsal_proximal_phalanx_1").setName("r_tarsal_proximal_phalanx_1")
                              .addChild(new Transform().setTranslation(new float[] {-2.7535f,0.0077f,4.6255f})
                                .addChild(new Transform()
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3291().getArray())
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f92().getArray()))))
                              .addChild(new HAnimSite("hanim_r_tarsal_proximal_phalanx_1").setDEF("hanim_r_tarsal_distal_phalanx_1_tip").setName("r_tarsal_distal_phalanx_1_tip")
                                .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setDEF("hanim_r_tarsal_interphalangeal_1").setName("r_tarsal_interphalangeal_1")))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setDEF("hanim_r_cuneonavicular_2").setName("r_cuneonavicular_2").setCenter(new float[] {-3.6105f,0.033f,1.4168f})
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_2").setDEF("hanim_r_cuneiform_2").setName("r_cuneiform_2")
                          .addChild(new Transform().setTranslation(new float[] {-3.6105f,0.033f,1.4168f})
                            .addChild(new Transform()
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3293().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f94().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setDEF("hanim_r_tarsometatarsal_2").setName("r_tarsometatarsal_2").setCenter(new float[] {-3.5565f,0.0232f,2.2895f})
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_2").setDEF("hanim_r_metatarsal_2").setName("r_metatarsal_2")
                            .addChild(new Transform().setTranslation(new float[] {-3.5565f,0.0232f,2.2895f})
                              .addChild(new Transform()
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3295().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f96().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setDEF("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(new float[] {-3.6595f,0.0085f,4.8125f})
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setDEF("hanim_r_tarsal_proximal_phalanx_2").setName("r_tarsal_proximal_phalanx_2")
                              .addChild(new Transform().setTranslation(new float[] {-3.6595f,0.0085f,4.8125f})
                                .addChild(new Transform()
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3297().getArray())
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setDEF("hanim_r_tarsal_proximal_interphalangeal_1").setName("r_tarsal_proximal_interphalangeal_2").setCenter(new float[] {-3.7385f,0.0054f,5.5315f})
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_1").setDEF("hanim_r_tarsal_middle_phalanx_1").setName("r_tarsal_middle_phalanx_2")
                                .addChild(new Transform().setTranslation(new float[] {-3.7385f,0.0054f,5.5315f})
                                  .addChild(new Transform()
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3299().getArray())
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f100().getArray()))))
                                .addChild(new HAnimSite("hanim_r_tarsal_middle_phalanx_1").setDEF("hanim_r_tarsal_distal_phalanx_2_tip").setName("r_tarsal_distal_phalanx_2_tip").setTranslation(new float[] {-0.0883f,0.0134f,0.1383f})
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_1").setDEF("hanim_r_tarsal_distal_interphalangeal_1").setName("r_tarsal_distal_interphalangeal_2").setCenter(new float[] {-3.7385f,0.0017f,5.9505f}))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setDEF("hanim_r_cuneonavicular_3").setName("r_cuneonavicular_3").setCenter(new float[] {-4.1245f,0.0328f,1.3453f})
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_3").setDEF("hanim_r_cuneiform_3").setName("r_cuneiform_3")
                          .addChild(new Transform().setTranslation(new float[] {-4.1245f,0.0328f,1.3453f})
                            .addChild(new Transform()
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32101().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f102().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setDEF("hanim_r_tarsometatarsal_3 ").setName("r_tarsometatarsal_3 ")
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_3 ").setDEF("hanim_r_metatarsal_3").setName("r_metatarsal_3")
                            .addChild(new Transform().setTranslation(new float[] {-4.1245f,0.0328f,1.3453f})
                              .addChild(new Transform()
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32103().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f104().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3 ").setDEF("hanim_r_metatarsophalangeal_3").setName("r_metatarsophalangeal_3").setCenter(new float[] {-4.2795f,0.0086f,4.7055f})
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_3").setDEF("hanim_r_tarsal_proximal_phalanx_3").setName("r_tarsal_proximal_phalanx_3")
                              .addChild(new Transform().setTranslation(new float[] {-4.2795f,0.0086f,4.7055f})
                                .addChild(new Transform()
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32105().getArray())
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f106().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setDEF("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_proximal_interphalangeal_3").setCenter(new float[] {-4.3865f,0.0044f,5.3745f})
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_2").setDEF("hanim_r_tarsal_middle_phalanx_2").setName("r_tarsal_middle_phalanx_3")
                                .addChild(new Transform().setTranslation(new float[] {-4.3865f,0.0044f,5.3745f})
                                  .addChild(new Transform()
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32107().getArray())
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f108().getArray()))))
                                .addChild(new HAnimSite("hanim_r_tarsal_middle_phalanx_2").setDEF("hanim_r_tarsal_distal_phalanx_3_tip").setName("r_tarsal_distal_phalanx_3_tip")
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_3").setCenter(new float[] {-4.4545f,0.0017f,5.7845f})))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setDEF("hanim_r_calcaneocuboid").setName("r_calcaneocuboid").setCenter(new float[] {-3.9515f,0.0653f,-0.6895f})
                      .addChild(new HAnimSegment("hanim_r_calcaneocuboid").setDEF("hanim_r_calcaneus").setName("r_calcaneus")
                        .addChild(new Transform().setTranslation(new float[] {-3.9515f,0.0653f,-0.6895f})
                          .addChild(new Transform()
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32109().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setDEF("hanim_r_transversetarsal").setName("r_transversetarsal").setCenter(new float[] {-4.9095f,0.0353f,0.5574f})
                        .addChild(new HAnimSegment("hanim_r_transversetarsal").setDEF("hanim_r_cuboid").setName("r_cuboid")
                          .addChild(new Transform().setTranslation(new float[] {-4.9095f,0.0353f,0.5574f})
                            .addChild(new Transform()
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32111().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f112().getArray()))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32113().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f114().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setDEF("hanim_r_tarsometatarsal_3").setName("r_tarsometatarsal_4").setCenter(new float[] {-4.7255f,0.0211f,2.1725f})
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_3").setDEF("hanim_r_metatarsal_4").setName("r_metatarsal_4")
                            .addChild(new Transform().setTranslation(new float[] {-4.7255f,0.0211f,2.1725f})
                              .addChild(new Transform()
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32115().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f116().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setDEF("hanim_r_metatarsophalangeal_4").setName("r_metatarsophalangeal_4").setCenter(new float[] {-4.8755f,0.0076f,4.5165f})
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_4").setDEF("hanim_r_tarsal_proximal_phalanx_4").setName("r_tarsal_proximal_phalanx_4")
                              .addChild(new Transform().setTranslation(new float[] {-4.8755f,0.0076f,4.5165f})
                                .addChild(new Transform()
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32117().getArray())
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f118().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setDEF("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_proximal_interphalangeal_4").setCenter(new float[] {-5.0655f,0.0049f,5.1895f})
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_3").setDEF("hanim_r_tarsal_middle_phalanx_3").setName("r_tarsal_middle_phalanx_4")
                                .addChild(new Transform().setTranslation(new float[] {-5.0655f,0.0049f,5.1895f})
                                  .addChild(new Transform()
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32119().getArray())
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f120().getArray()))))
                                .addChild(new HAnimSite("hanim_r_tarsal_middle_phalanx_3").setDEF("hanim_r_tarsal_distal_phalanx_4_tip").setName("r_tarsal_distal_phalanx_4_tip")
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setDEF("hanim_r_tarsal_distal_interphalangeal_3").setName("r_tarsal_distal_interphalangeal_4").setCenter(new float[] {-5.1335f,0.0011f,5.5175f})))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setDEF("hanim_r_tarsometatarsal_4").setName("r_tarsometatarsal_5").setCenter(new float[] {-5.3615f,0.0164f,2.0085f})
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_4").setDEF("hanim_r_metatarsal_5").setName("r_metatarsal_5")
                            .addChild(new Transform().setTranslation(new float[] {-5.3615f,0.0164f,2.0085f})
                              .addChild(new Transform()
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32121().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f122().getArray()))))
                            .addChild(new HAnimSite("hanim_r_metatarsal_5").setDEF("hanim_r_metatarsal_phalanx_5_pt").setName("r_metatarsal_phalanx_5_pt")
                              .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_phalanx_5_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setDEF("hanim_r_metatarsophalangeal_5").setName("r_metatarsophalangeal_5").setCenter(new float[] {-5.5055f,0.0067f,4.3115f})
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_5").setDEF("hanim_r_tarsal_proximal_phalanx_5").setName("r_tarsal_proximal_phalanx_5")
                              .addChild(new Transform().setTranslation(new float[] {-5.5055f,0.0067f,4.3115f})
                                .addChild(new Transform()
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32123().getArray())
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f124().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setDEF("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_proximal_interphalangeal_5").setCenter(new float[] {-5.6085f,0.003f,4.6485f})
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_4").setDEF("hanim_r_tarsal_middle_phalanx_4").setName("r_tarsal_middle_phalanx_5")
                                .addChild(new Transform().setTranslation(new float[] {-5.6085f,0.003f,4.6485f})
                                  .addChild(new Transform()
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32125().getArray())
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f126().getArray()))))
                                .addChild(new HAnimSite("hanim_r_tarsal_middle_phalanx_4").setDEF("hanim_r_tarsal_distal_phalanx_5_tip").setName("r_tarsal_distal_phalanx_5_tip")
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setDEF("hanim_r_tarsal_distal_interphalangeal_4").setName("r_tarsal_distal_interphalangeal_5").setCenter(new float[] {-5.6495f,0f,4.9925f})))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setDEF("hanim_vl5").setName("vl5").setCenter(new float[] {0.0028f,1.0568f,-0.0776f})
              .addChild(new HAnimSegment("hanim_vl5").setDEF("hanim_l5").setName("l5")
                .addChild(new Transform().setTranslation(new float[] {0.0028f,1.0568f,-0.0776f})
                  .addChild(new Transform()
                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32127().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f128().getArray())))))
              .addChild(new HAnimJoint("hanim_vl5").setDEF("hanim_vl4").setName("vl4").setCenter(new float[] {0.0035f,1.0925f,-0.0787f})
                .addChild(new HAnimSegment("hanim_vl4").setDEF("hanim_l4").setName("l4")
                  .addChild(new Transform().setTranslation(new float[] {0.0035f,1.0925f,-0.0787f})
                    .addChild(new Transform()
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32129().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f130().getArray())))))
                .addChild(new HAnimJoint("hanim_vl4").setDEF("hanim_vl3").setName("vl3").setCenter(new float[] {0.0041f,1.1276f,-0.0796f})
                  .addChild(new HAnimSegment("hanim_vl3").setDEF("hanim_l3").setName("l3")
                    .addChild(new Transform().setTranslation(new float[] {0.0041f,1.1276f,-0.0796f})
                      .addChild(new Transform()
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32131().getArray())
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                        .setCoord(new Coordinate().setPoint(new MFVec3f132().getArray()))))
                    .addChild(new HAnimSite("hanim_l3").setDEF("hanim_l_rib10_pt").setName("l_rib10_pt").setTranslation(new float[] {0.0871f,1.1925f,0.0992f})
                      .addChild(new TouchSensor().setDescription("HAnimSite l_rib10_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                    .addChild(new HAnimSite("hanim_l3").setDEF("hanim_r_rib10_pt").setName("r_rib10_pt").setTranslation(new float[] {-0.0711f,1.1941f,0.1016f})
                      .addChild(new TouchSensor().setDescription("HAnimSite r_rib10_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                    .addChild(new HAnimSite("hanim_l3").setDEF("hanim_spine_2_middle_back_pt").setName("spine_2_middle_back_pt")
                      .addChild(new TouchSensor().setDescription("HAnimSite spine_2_middle_back_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                  .addChild(new HAnimJoint("hanim_vl3").setDEF("hanim_vl2").setName("vl2").setCenter(new float[] {0.0045f,1.1546f,-0.08f})
                    .addChild(new HAnimSegment("hanim_vl2").setDEF("hanim_l2").setName("l2")
                      .addChild(new Transform().setTranslation(new float[] {0.0045f,1.1546f,-0.08f})
                        .addChild(new Transform()
                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32133().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f134().getArray())))))
                    .addChild(new HAnimJoint("hanim_vl2").setDEF("hanim_vl1").setName("vl1").setCenter(new float[] {0.0048f,1.1912f,-0.0805f})
                      .addChild(new HAnimSegment("hanim_vl1").setDEF("hanim_l1").setName("l1")
                        .addChild(new Transform().setTranslation(new float[] {0.0048f,1.1912f,-0.0805f})
                          .addChild(new Transform()
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32135().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f136().getArray())))))
                      .addChild(new HAnimJoint("hanim_vl1").setDEF("hanim_vt12").setName("vt12").setCenter(new float[] {0.0051f,1.2278f,-0.0808f})
                        .addChild(new HAnimSegment("hanim_vt12").setDEF("hanim_t12").setName("t12")
                          .addChild(new Transform().setTranslation(new float[] {0.0051f,1.2278f,-0.0808f})
                            .addChild(new Transform()
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32137().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f138().getArray())))))
                        .addChild(new HAnimJoint("hanim_vt12").setDEF("hanim_vt11").setName("vt11").setCenter(new float[] {0.0053f,1.2679f,-0.081f})
                          .addChild(new HAnimSegment("hanim_vt11").setDEF("hanim_t11").setName("t11")
                            .addChild(new Transform().setTranslation(new float[] {0.0053f,1.2679f,-0.081f})
                              .addChild(new Transform()
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32139().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f140().getArray()))))
                            .addChild(new HAnimSite("hanim_t11").setDEF("hanim_substernale_pt").setName("substernale_pt").setTranslation(new float[] {0.0085f,1.2995f,0.1147f})
                              .addChild(new TouchSensor().setDescription("HAnimSite substernale_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                          .addChild(new HAnimJoint("hanim_vt11").setDEF("hanim_vt10").setName("vt10").setCenter(new float[] {0.0056f,1.2848f,-0.0822f})
                            .addChild(new HAnimSegment("hanim_vt10").setDEF("hanim_t10").setName("t10")
                              .addChild(new Transform().setTranslation(new float[] {0.0056f,1.2848f,-0.0822f})
                                .addChild(new Transform()
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32141().getArray())
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f142().getArray()))))
                              .addChild(new HAnimSite("hanim_t10").setDEF("hanim_l_thelion_pt").setName("l_thelion_pt").setTranslation(new float[] {0.0918f,1.3382f,0.1192f})
                                .addChild(new TouchSensor().setDescription("HAnimSite l_thelion_pt"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimSite("hanim_t10").setDEF("hanim_r_thelion_pt").setName("r_thelion_pt").setTranslation(new float[] {-0.0736f,1.3385f,0.1217f})
                                .addChild(new TouchSensor().setDescription("HAnimSite r_thelion_pt"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                            .addChild(new HAnimJoint("hanim_vt10").setDEF("hanim_vt9").setName("vt9").setCenter(new float[] {0.0057f,1.3126f,-0.0838f})
                              .addChild(new HAnimSegment("hanim_vt9").setDEF("hanim_t9").setName("t9")
                                .addChild(new Transform().setTranslation(new float[] {0.0057f,1.3126f,-0.0838f})
                                  .addChild(new Transform()
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32143().getArray())
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f144().getArray())))))
                              .addChild(new HAnimJoint("hanim_vt9").setDEF("hanim_vt8").setName("vt8").setCenter(new float[] {0.0057f,1.3382f,-0.0845f})
                                .addChild(new HAnimSegment("hanim_vt8").setDEF("hanim_t8").setName("t8")
                                  .addChild(new Transform().setTranslation(new float[] {0.0057f,1.3382f,-0.0845f})
                                    .addChild(new Transform()
                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32145().getArray())
                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f146().getArray())))))
                                .addChild(new HAnimJoint("hanim_vt8").setDEF("hanim_vt7").setName("vt7").setCenter(new float[] {0.0058f,1.3625f,-0.0833f})
                                  .addChild(new HAnimSegment("hanim_vt7").setDEF("hanim_t7").setName("t7")
                                    .addChild(new Transform().setTranslation(new float[] {0.0058f,1.3625f,-0.0833f})
                                      .addChild(new Transform()
                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                    .addChild(new Shape()
                                      .setGeometry(new LineSet().setVertexCount(new MFInt32147().getArray())
                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f148().getArray()))))
                                    .addChild(new HAnimSite("hanim_t7").setDEF("hanim_l_chest_midsagittal_plane_pt").setName("l_chest_midsagittal_plane_pt")
                                      .addChild(new TouchSensor().setDescription("HAnimSite l_chest_midsagittal_plane_pt"))
                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                    .addChild(new HAnimSite("hanim_t7").setDEF("hanim_mesosternale_pt").setName("mesosternale_pt")
                                      .addChild(new TouchSensor().setDescription("HAnimSite mesosternale_pt"))
                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                    .addChild(new HAnimSite("hanim_t7").setDEF("hanim_r_chest_midsagittal_plane_pt").setName("r_chest_midsagittal_plane_pt")
                                      .addChild(new TouchSensor().setDescription("HAnimSite r_chest_midsagittal_plane_pt"))
                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                    .addChild(new HAnimSite("hanim_t7").setDEF("hanim_rear_center_midsagittal_plane_pt").setName("rear_center_midsagittal_plane_pt")
                                      .addChild(new TouchSensor().setDescription("HAnimSite rear_center_midsagittal_plane_pt"))
                                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                  .addChild(new HAnimJoint("hanim_vt7").setDEF("hanim_vt6").setName("vt6").setCenter(new float[] {0.0059f,1.3866f,-0.08f})
                                    .addChild(new HAnimSegment("hanim_vt6").setDEF("hanim_t6").setName("t6")
                                      .addChild(new Transform().setTranslation(new float[] {0.0059f,1.3866f,-0.08f})
                                        .addChild(new Transform()
                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                      .addChild(new Shape()
                                        .setGeometry(new LineSet().setVertexCount(new MFInt32149().getArray())
                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                          .setCoord(new Coordinate().setPoint(new MFVec3f150().getArray()))))
                                      .addChild(new HAnimSite("hanim_t6").setDEF("hanim_spine_1_middle_back_pt").setName("spine_1_middle_back_pt")
                                        .addChild(new TouchSensor().setDescription("HAnimSite spine_1_middle_back_pt"))
                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                    .addChild(new HAnimJoint("hanim_vt6").setDEF("hanim_vt5").setName("vt5").setCenter(new float[] {0.006f,1.4102f,-0.0745f})
                                      .addChild(new HAnimSegment("hanim_vt5").setDEF("hanim_t5").setName("t5")
                                        .addChild(new Transform().setTranslation(new float[] {0.006f,1.4102f,-0.0745f})
                                          .addChild(new Transform()
                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                        .addChild(new Shape()
                                          .setGeometry(new LineSet().setVertexCount(new MFInt32151().getArray())
                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                            .setCoord(new Coordinate().setPoint(new MFVec3f152().getArray())))))
                                      .addChild(new HAnimJoint("hanim_vt5").setDEF("hanim_vt4").setName("vt4").setCenter(new float[] {0.0061f,1.432f,-0.0675f})
                                        .addChild(new HAnimSegment("hanim_vt4").setDEF("hanim_t4").setName("t4")
                                          .addChild(new Transform().setTranslation(new float[] {0.0061f,1.432f,-0.0675f})
                                            .addChild(new Transform()
                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                          .addChild(new Shape()
                                            .setGeometry(new LineSet().setVertexCount(new MFInt32153().getArray())
                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                              .setCoord(new Coordinate().setPoint(new MFVec3f154().getArray())))))
                                        .addChild(new HAnimJoint("hanim_vt4").setDEF("hanim_vt3").setName("vt3").setCenter(new float[] {0.0062f,1.4583f,-0.057f})
                                          .addChild(new HAnimSegment("hanim_vt3").setDEF("hanim_t3").setName("t3")
                                            .addChild(new Transform().setTranslation(new float[] {0.0062f,1.4583f,-0.057f})
                                              .addChild(new Transform()
                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                            .addChild(new Shape()
                                              .setGeometry(new LineSet().setVertexCount(new MFInt32155().getArray())
                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                .setCoord(new Coordinate().setPoint(new MFVec3f156().getArray())))))
                                          .addChild(new HAnimJoint("hanim_vt3").setDEF("hanim_vt2").setName("vt2").setCenter(new float[] {0.0063f,1.4761f,-0.0484f})
                                            .addChild(new HAnimSegment("hanim_vt2").setDEF("hanim_t2").setName("t2")
                                              .addChild(new Transform().setTranslation(new float[] {0.0063f,1.4761f,-0.0484f})
                                                .addChild(new Transform()
                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                              .addChild(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32157().getArray())
                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f158().getArray()))))
                                              .addChild(new HAnimSite("hanim_t2").setDEF("hanim_cervicale_pt").setName("cervicale_pt").setTranslation(new float[] {0.0064f,1.52f,-0.0815f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite cervicale_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new HAnimSite("hanim_t2").setDEF("hanim_suprasternale_pt").setName("suprasternale_pt").setTranslation(new float[] {0.0084f,1.4714f,0.0551f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite suprasternale_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                            .addChild(new HAnimJoint("hanim_vt2").setDEF("hanim_vt1").setName("vt1").setCenter(new float[] {0.0065f,1.4951f,-0.0387f})
                                              .addChild(new HAnimSegment("hanim_vt1").setDEF("hanim_t1").setName("t1")
                                                .addChild(new Transform().setTranslation(new float[] {0.0065f,1.4951f,-0.0387f})
                                                  .addChild(new Transform()
                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32159().getArray())
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f160().getArray()))))
                                                .addChild(new HAnimSite("hanim_t1").setDEF("hanim_l_neck_base_pt").setName("l_neck_base_pt").setTranslation(new float[] {0.0646f,1.5141f,-0.038f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_neck_base_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setDEF("hanim_r_neck_base_pt").setName("r_neck_base_pt").setTranslation(new float[] {-0.0419f,1.5149f,-0.022f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_neck_base_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32161().getArray())
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f162().getArray()))))
                                                .addChild(new HAnimSite("hanim_t1").setDEF("hanim_l_acromion_pt").setName("l_acromion_pt").setTranslation(new float[] {0.2032f,1.476f,-0.049f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_acromion_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setDEF("hanim_l_axilla_distal_pt").setName("l_axilla_distal_pt").setTranslation(new float[] {0.1706f,1.4072f,-0.0875f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_distal_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setDEF("hanim_l_axilla_posterior_folds_pt").setName("l_axilla_posterior_folds_pt")
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_posterior_folds_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setDEF("hanim_l_axilla_proximal_pt").setName("l_axilla_proximal_pt").setTranslation(new float[] {0.1777f,1.4065f,-0.0075f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_proximal_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setDEF("hanim_l_clavicale_pt").setName("l_clavicale_pt").setTranslation(new float[] {0.0271f,1.4943f,0.0394f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_clavicale_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32163().getArray())
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f164().getArray()))))
                                                .addChild(new HAnimSite("hanim_t1").setDEF("hanim_r_acromion_pt").setName("r_acromion_pt").setTranslation(new float[] {-0.1905f,1.4791f,-0.0431f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_acromion_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setDEF("hanim_r_axilla_distal_pt").setName("r_axilla_distal_pt").setTranslation(new float[] {-0.1603f,1.4098f,-0.0826f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_distal_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setDEF("hanim_r_axilla_posterior_folds_pt").setName("r_axilla_posterior_folds_pt")
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_posterior_folds_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setDEF("hanim_r_axilla_proximal_pt").setName("r_axilla_proximal_pt").setTranslation(new float[] {-0.1626f,1.4072f,-0.0031f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_proximal_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setDEF("hanim_r_clavicale_pt").setName("r_clavicale_pt").setTranslation(new float[] {-0.0115f,1.4943f,0.04f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_clavicale_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_vc7").setName("vc7").setCenter(new float[] {0.0066f,1.5132f,-0.0301f})
                                                .addChild(new HAnimSegment("hanim_vc7").setDEF("hanim_c7").setName("c7")
                                                  .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5132f,-0.0301f})
                                                    .addChild(new Transform()
                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32165().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f166().getArray())))))
                                                .addChild(new HAnimJoint("hanim_vc7").setDEF("hanim_vc6").setName("vc6").setCenter(new float[] {0.0066f,1.5357f,-0.0143f})
                                                  .addChild(new HAnimSegment("hanim_vc6").setDEF("hanim_c6").setName("c6")
                                                    .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5357f,-0.0143f})
                                                      .addChild(new Transform()
                                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32167().getArray())
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f168().getArray())))))
                                                  .addChild(new HAnimJoint("hanim_vc6").setDEF("hanim_vc5").setName("vc5").setCenter(new float[] {0.0066f,1.552f,-0.0082f})
                                                    .addChild(new HAnimSegment("hanim_vc5").setDEF("hanim_c5").setName("c5")
                                                      .addChild(new Transform().setTranslation(new float[] {0.0066f,1.552f,-0.0082f})
                                                        .addChild(new Transform()
                                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32169().getArray())
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f170().getArray())))))
                                                    .addChild(new HAnimJoint("hanim_vc5").setDEF("hanim_vc4").setName("vc4").setCenter(new float[] {0.0066f,1.5662f,-0.0084f})
                                                      .addChild(new HAnimSegment("hanim_vc4").setDEF("hanim_c4").setName("c4")
                                                        .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5662f,-0.0084f})
                                                          .addChild(new Transform()
                                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32171().getArray())
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f172().getArray())))))
                                                      .addChild(new HAnimJoint("hanim_vc4").setDEF("hanim_vc3").setName("vc3").setCenter(new float[] {0.0066f,1.58f,-0.0103f})
                                                        .addChild(new HAnimSegment("hanim_vc3").setDEF("hanim_c3").setName("c3")
                                                          .addChild(new Transform().setTranslation(new float[] {0.0066f,1.58f,-0.0103f})
                                                            .addChild(new Transform()
                                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32173().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f174().getArray()))))
                                                          .addChild(new HAnimSite("hanim_c3").setDEF("hanim_adams_apple_pt").setName("adams_apple_pt")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite adams_apple_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                        .addChild(new HAnimJoint("hanim_vc3").setDEF("hanim_vc2").setName("vc2").setCenter(new float[] {0.0066f,1.5928f,-0.0103f})
                                                          .addChild(new HAnimSegment("hanim_vc2").setDEF("hanim_c2").setName("c2")
                                                            .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5928f,-0.0103f})
                                                              .addChild(new Transform()
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32175().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f176().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_vc2").setDEF("hanim_vc1").setName("vc1").setCenter(new float[] {0.0066f,1.6144f,-0.0034f})
                                                            .addChild(new HAnimSegment("hanim_vc1").setDEF("hanim_c1").setName("c1")
                                                              .addChild(new Transform().setTranslation(new float[] {0.0066f,1.6144f,-0.0034f})
                                                                .addChild(new Transform()
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32177().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f178().getArray()))))
                                                              .addChild(new HAnimSite("hanim_c1").setDEF("hanim_glabella_pt").setName("glabella_pt")
                                                                .addChild(new TouchSensor().setDescription("HAnimSite glabella_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setDEF("hanim_l_ectocanthus_pt").setName("l_ectocanthus_pt")
                                                                .addChild(new TouchSensor().setDescription("HAnimSite l_ectocanthus_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setDEF("hanim_l_infraorbitale_pt").setName("l_infraorbitale_pt").setTranslation(new float[] {0.0341f,1.6171f,0.0752f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite l_infraorbitale_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setDEF("hanim_l_tragion_pt").setName("l_tragion_pt").setTranslation(new float[] {0.0739f,1.6348f,0.0282f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite l_tragion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setDEF("hanim_nuchale_pt").setName("nuchale_pt").setTranslation(new float[] {0.0039f,1.5972f,-0.0796f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite nuchale_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setDEF("hanim_opisthocranion_pt").setName("opisthocranion_pt")
                                                                .addChild(new TouchSensor().setDescription("HAnimSite opisthocranion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setDEF("hanim_r_ectocanthus_pt").setName("r_ectocanthus_pt")
                                                                .addChild(new TouchSensor().setDescription("HAnimSite r_ectocanthus_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setDEF("hanim_r_infraorbitale_pt").setName("r_infraorbitale_pt").setTranslation(new float[] {-0.0237f,1.6171f,0.0752f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite r_infraorbitale_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setDEF("hanim_r_tragion_pt").setName("r_tragion_pt").setTranslation(new float[] {-0.0646f,1.6347f,0.0302f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite r_tragion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setDEF("hanim_sellion_pt").setName("sellion_pt").setTranslation(new float[] {0.0058f,1.6316f,0.0852f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite sellion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setDEF("hanim_skull_vertex_pt").setName("skull_vertex_pt").setTranslation(new float[] {0.005f,1.7504f,0.0055f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite skull_vertex_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                            .addChild(new HAnimJoint("hanim_vc1").setDEF("hanim_skullbase").setName("skullbase").setCenter(new float[] {0.0044f,1.6209f,0.0236f})
                                                              .addChild(new HAnimSegment("hanim_skullbase").setDEF("hanim_skull").setName("skull")
                                                                .addChild(new Transform().setTranslation(new float[] {0.0044f,1.6209f,0.0236f})
                                                                  .addChild(new Transform()
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32179().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f180().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32181().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f182().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32183().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f184().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32185().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f186().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32187().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f188().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32189().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f190().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32191().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f192().getArray()))))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_l_gonion_pt").setName("l_gonion_pt").setTranslation(new float[] {0.0631f,1.553f,0.033f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_gonion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_menton_pt").setName("menton_pt")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite menton_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_r_gonion_pt").setName("r_gonion_pt").setTranslation(new float[] {-0.052f,1.5529f,0.0347f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_gonion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_supramenton_pt").setName("supramenton_pt").setTranslation(new float[] {0.0061f,1.541f,0.0805f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite supramenton_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyelid_joint").setName("l_eyelid_joint").setCenter(new float[] {2.2365f,1.87f,1.9285f}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyelid_joint").setName("r_eyelid_joint").setCenter(new float[] {-2.2535f,1.87f,1.9285f}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyeball_joint").setName("l_eyeball_joint").setCenter(new float[] {2.1305f,1.8444f,4.1555f}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyeball_joint").setName("r_eyeball_joint").setCenter(new float[] {-2.1475f,1.8444f,4.1555f}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyebrow_joint").setName("l_eyebrow_joint").setCenter(new float[] {0.9581f,1.8563f,5.2175f}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyebrow_joint").setName("r_eyebrow_joint").setCenter(new float[] {-0.9751f,1.8563f,5.2175f}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_temporomandibular").setName("temporomandibular").setCenter(new float[] {-0.0085f,1.7229f,1.148f}))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_l_sternoclavicular").setName("l_sternoclavicular").setCenter(new float[] {0.082f,1.4488f,-0.0353f})
                                                .addChild(new HAnimSegment("hanim_l_sternoclavicular").setDEF("hanim_l_clavicle").setName("l_clavicle")
                                                  .addChild(new Transform().setTranslation(new float[] {0.082f,1.4488f,-0.0353f})
                                                    .addChild(new Transform()
                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32193().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f194().getArray())))))
                                                .addChild(new HAnimJoint("hanim_l_sternoclavicular").setDEF("hanim_l_acromioclavicular").setName("l_acromioclavicular").setCenter(new float[] {0.0962f,1.4269f,-0.0424f})
                                                  .addChild(new HAnimSegment("hanim_l_acromioclavicular").setDEF("hanim_l_scapula").setName("l_scapula")
                                                    .addChild(new Transform().setTranslation(new float[] {0.0962f,1.4269f,-0.0424f})
                                                      .addChild(new Transform()
                                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32195().getArray())
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f196().getArray()))))
                                                    .addChild(new HAnimSite("hanim_l_scapula").setDEF("hanim_l_bideltoid_pt").setName("l_bideltoid_pt")
                                                      .addChild(new TouchSensor().setDescription("HAnimSite l_bideltoid_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimSite("hanim_l_scapula").setDEF("hanim_l_humeral_lateral_epicondyles_pt").setName("l_humeral_lateral_epicondyles_pt").setTranslation(new float[] {0.228f,1.1482f,-0.11f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_lateral_epicondyles_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                  .addChild(new HAnimJoint("hanim_l_acromioclavicular").setDEF("hanim_l_shoulder").setName("l_shoulder").setCenter(new float[] {0.2029f,1.4376f,-0.0387f})
                                                    .addChild(new HAnimSegment("hanim_l_shoulder").setDEF("hanim_l_upperarm").setName("l_upperarm")
                                                      .addChild(new Transform().setTranslation(new float[] {0.2029f,1.4376f,-0.0387f})
                                                        .addChild(new Transform()
                                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32197().getArray())
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f198().getArray()))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setDEF("hanim_l_humeral_medial_epicondyles_pt").setName("l_humeral_medial_epicondyles_pt").setTranslation(new float[] {0.1735f,1.1272f,-0.1113f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_medial_epicondyles_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setDEF("hanim_l_olecranon_pt").setName("l_olecranon_pt").setTranslation(new float[] {-0.1962f,1.1375f,-0.1123f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_olecranon_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setDEF("hanim_l_radial_styloid_pt").setName("l_radial_styloid_pt").setTranslation(new float[] {0.1901f,0.8645f,-0.0415f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_radial_styloid_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setDEF("hanim_l_radiale_pt").setName("l_radiale_pt").setTranslation(new float[] {0.2182f,1.1212f,-0.1167f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_radiale_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint("hanim_l_shoulder").setDEF("hanim_l_elbow").setName("l_elbow").setCenter(new float[] {0.2014f,1.1357f,-0.0682f})
                                                      .addChild(new HAnimSegment("hanim_l_elbow").setDEF("hanim_l_forearm").setName("l_forearm")
                                                        .addChild(new Transform().setTranslation(new float[] {0.2014f,1.1357f,-0.0682f})
                                                          .addChild(new Transform()
                                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32199().getArray())
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f200().getArray()))))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_ulnar_styloid_pt").setName("l_ulnar_styloid_pt").setTranslation(new float[] {-0.2142f,0.8529f,-0.0648f})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_ulnar_styloid_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint("hanim_l_elbow").setDEF("hanim_l_radiocarpal").setName("l_radiocarpal").setCenter(new float[] {0.1984f,0.8663f,-0.0583f})
                                                        .addChild(new HAnimSegment("hanim_l_radiocarpal").setDEF("hanim_l_carpal").setName("l_carpal")
                                                          .addChild(new Transform().setTranslation(new float[] {0.2f,0.85f,-0.05f}).setRotation(new float[] {0f,0f,1f,-3.14f}).setScale(new float[] {0.2f,0.2f,0.2f})
                                                            .addChild(new Transform().setRotation(new float[] {0f,1f,0f,-1.57f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32201().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f202().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32203().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f204().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32205().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f206().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32207().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f208().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_midcarpal_1").setName("l_midcarpal_1").setCenter(new float[] {8.0485f,0.9213f,1.3235f})
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_1").setDEF("hanim_l_trapezium").setName("l_trapezium")
                                                            .addChild(new Transform().setTranslation(new float[] {8.0485f,0.9213f,1.3235f})
                                                              .addChild(new Transform()
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32209().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f210().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_1").setDEF("hanim_l_carpometacarpal_1").setName("l_carpometacarpal_1").setCenter(new float[] {0.1924f,0.8472f,-0.0534f})
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_1").setDEF("hanim_l_metacarpal_1").setName("l_metacarpal_1")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1924f,0.8472f,-0.0534f})
                                                                .addChild(new Transform()
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32211().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f212().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setDEF("hanim_l_metacarpophalangeal_1").setName("l_metacarpophalangeal_1").setCenter(new float[] {0.1951f,0.8226f,0.0246f})
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_1").setDEF("hanim_l_carpal_proximal_phalanx_1").setName("l_carpal_proximal_phalanx_1")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1951f,0.8226f,0.0246f})
                                                                  .addChild(new Transform()
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32213().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f214().getArray()))))
                                                                .addChild(new HAnimSite("hanim_l_carpal_proximal_phalanx_1").setDEF("hanim_l_carpal_distal_phalanx_1_tip").setName("l_carpal_distal_phalanx_1_tip")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_1_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setName("l_carpal_interphalangeal_1").setCenter(new float[] {0.1955f,0.8159f,0.0464f})))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_midcarpal_2").setName("l_midcarpal_2").setCenter(new float[] {8.0485f,0.9225f,0.8386f})
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_2").setDEF("hanim_l_trapezoid").setName("l_trapezoid")
                                                            .addChild(new Transform().setTranslation(new float[] {8.0485f,0.9225f,0.8386f})
                                                              .addChild(new Transform()
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32215().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f216().getArray()))))
                                                            .addChild(new HAnimSite("hanim_l_trapezoid").setDEF("hanim_l_metacarpal_phalanx_2_pt").setName("l_metacarpal_phalanx_2_pt").setTranslation(new float[] {0.2009f,0.8139f,-0.0237f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_phalanx_2_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_2").setDEF("hanim_l_carpometacarpal_2").setName("l_carpometacarpal_2").setCenter(new float[] {0.1983f,0.8024f,-0.028f})
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_2").setDEF("hanim_l_metacarpal_2").setName("l_metacarpal_2")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1983f,0.8024f,-0.028f})
                                                                .addChild(new Transform()
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32217().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f218().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setDEF("hanim_l_metacarpophalangeal_2").setName("l_metacarpophalangeal_2").setCenter(new float[] {0.1983f,0.7815f,-0.028f})
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_2").setDEF("hanim_l_carpal_proximal_phalanx_2 ").setName("l_carpal_proximal_phalanx_2 ")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1983f,0.7815f,-0.028f})
                                                                  .addChild(new Transform()
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32219().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f220().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_1").setName("l_carpal_proximal_interphalangeal_2").setCenter(new float[] {0.2017f,0.7363f,-0.0248f})
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_1").setDEF("hanim_l_carpal_middle_phalanx_1").setName("l_carpal_middle_phalanx_2")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2017f,0.7363f,-0.0248f})
                                                                    .addChild(new Transform()
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32221().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f222().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_middle_phalanx_1").setDEF("hanim_l_carpal_distal_phalanx_2_tip").setName("l_carpal_distal_phalanx_2_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_2_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_middle_phalanx_1").setDEF("hanim_l_dactylion_pt").setName("l_dactylion_pt").setTranslation(new float[] {0.2056f,0.6743f,-0.0482f})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_dactylion_pt"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_1").setDEF("hanim_l_carpal_distal_interphalangeal_1").setName("l_carpal_distal_interphalangeal_2").setCenter(new float[] {0.2028f,0.7139f,-0.0236f}))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_midcarpal_3").setName("l_midcarpal_3").setCenter(new float[] {8.0395f,0.9246f,0.2513f})
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_3").setDEF("hanim_l_capitate").setName("l_capitate")
                                                            .addChild(new Transform().setTranslation(new float[] {8.0395f,0.9246f,0.2513f})
                                                              .addChild(new Transform()
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32223().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f224().getArray()))))
                                                            .addChild(new HAnimSite("hanim_l_capitate").setDEF("hanim_l_metacarpal_phalanx_3_pt").setName("l_metacarpal_phalanx_3_pt")
                                                              .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_phalanx_3_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_3").setDEF("hanim_l_carpometacarpal_3").setName("l_carpometacarpal_3").setCenter(new float[] {0.1987f,0.8029f,-0.053f})
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_3").setDEF("hanim_l_metacarpal_3").setName("l_metacarpal_3")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1987f,0.8029f,-0.053f})
                                                                .addChild(new Transform()
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32225().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f226().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setDEF("hanim_l_metacarpophalangeal_3").setName("l_metacarpophalangeal_3").setCenter(new float[] {0.1987f,0.7818f,-0.053f})
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_3").setDEF("hanim_l_carpal_proximal_phalanx_2").setName("l_carpal_proximal_phalanx_3")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1987f,0.7818f,-0.053f})
                                                                  .addChild(new Transform()
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32227().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f228().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_proximal_interphalangeal_3").setCenter(new float[] {0.2013f,0.7273f,-0.0503f})
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_middle_phalanx_2").setName("l_carpal_middle_phalanx_3")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2013f,0.7273f,-0.0503f})
                                                                    .addChild(new Transform()
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32229().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f230().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_middle_phalanx_2").setDEF("hanim_l_carpal_distal_phalanx_3_tip").setName("l_carpal_distal_phalanx_3_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_3_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_3").setCenter(new float[] {0.2026f,0.7011f,-0.0494f}))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_midcarpal_4_1").setName("l_midcarpal_4_5").setCenter(new float[] {8.0395f,0.921f,-0.6795f})
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_4_1").setDEF("hanim_l_hamate").setName("l_hamate")
                                                            .addChild(new Transform().setTranslation(new float[] {8.0395f,0.921f,-0.6795f})
                                                              .addChild(new Transform()
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32231().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f232().getArray()))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32233().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f234().getArray()))))
                                                            .addChild(new HAnimSite("hanim_l_hamate").setDEF("hanim_l_metacarpal_phalanx_5_pt").setName("l_metacarpal_phalanx_5_pt").setTranslation(new float[] {0.1929f,0.786f,-0.1122f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_phalanx_5_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_1").setDEF("hanim_l_carpometacarpal_4").setName("l_carpometacarpal_4").setCenter(new float[] {0.1956f,0.8019f,-0.0794f})
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_4").setDEF("hanim_l_metacarpal_4").setName("l_metacarpal_4")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1956f,0.8019f,-0.0794f})
                                                                .addChild(new Transform()
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32235().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f236().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setDEF("hanim_l_metacarpophalangeal_4").setName("l_metacarpophalangeal_4").setCenter(new float[] {0.1956f,0.7815f,-0.0794f})
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_4").setDEF("hanim_l_carpal_proximal_phalanx_3").setName("l_carpal_proximal_phalanx_4")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1956f,0.7815f,-0.0794f})
                                                                  .addChild(new Transform()
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32237().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f238().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_proximal_interphalangeal_4").setCenter(new float[] {0.1973f,0.7287f,-0.0777f})
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_middle_phalanx_3").setName("l_carpal_middle_phalanx_4")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1973f,0.7287f,-0.0777f})
                                                                    .addChild(new Transform()
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32239().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f240().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_middle_phalanx_3").setDEF("hanim_l_carpal_distal_phalanx_4_tip").setName("l_carpal_distal_phalanx_4_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_4_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_4").setCenter(new float[] {0.1983f,0.7045f,-0.0767f})))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_1").setDEF("hanim_l_carpometacarpal_5").setName("l_carpometacarpal_5").setCenter(new float[] {0.1925f,0.8066f,-0.1036f})
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_5").setDEF("hanim_l_metacarpal_5").setName("l_metacarpal_5")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1925f,0.8066f,-0.1036f})
                                                                .addChild(new Transform()
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32241().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f242().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setDEF("hanim_l_metacarpophalangeal_5").setName("l_metacarpophalangeal_5").setCenter(new float[] {0.1925f,0.7866f,-0.1036f})
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_5").setDEF("hanim_l_carpal_proximal_phalanx_4").setName("l_carpal_proximal_phalanx_5")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1925f,0.7866f,-0.1036f})
                                                                  .addChild(new Transform()
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32243().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f244().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_proximal_interphalangeal_5").setCenter(new float[] {0.1938f,0.7452f,-0.1024f})
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_middle_phalanx_4").setName("l_carpal_middle_phalanx_5")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1938f,0.7452f,-0.1024f})
                                                                    .addChild(new Transform()
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32245().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f246().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_middle_phalanx_4").setDEF("hanim_l_carpal_distal_phalanx_5_tip").setName("l_carpal_distal_phalanx_5_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_5_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_5").setCenter(new float[] {0.1948f,0.7277f,-0.1017f})))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_r_sternoclavicular").setName("r_sternoclavicular").setCenter(new float[] {-0.0694f,1.46f,-0.033f})
                                                .addChild(new HAnimSegment("hanim_r_sternoclavicular").setDEF("hanim_r_clavicle").setName("r_clavicle")
                                                  .addChild(new Transform().setTranslation(new float[] {-0.0694f,1.46f,-0.033f})
                                                    .addChild(new Transform()
                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32247().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f248().getArray())))))
                                                .addChild(new HAnimJoint("hanim_r_sternoclavicular").setDEF("hanim_r_acromioclavicular").setName("r_acromioclavicular").setCenter(new float[] {-0.0836f,1.4281f,-0.0401f})
                                                  .addChild(new HAnimSegment("hanim_r_acromioclavicular").setDEF("hanim_r_scapula").setName("r_scapula")
                                                    .addChild(new Transform().setTranslation(new float[] {-0.0836f,1.4281f,-0.0401f})
                                                      .addChild(new Transform()
                                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32249().getArray())
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f250().getArray()))))
                                                    .addChild(new HAnimSite("hanim_r_scapula").setDEF("hanim_r_bideltoid_pt").setName("r_bideltoid_pt")
                                                      .addChild(new TouchSensor().setDescription("HAnimSite r_bideltoid_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimSite("hanim_r_scapula").setDEF("hanim_r_humeral_lateral_epicondyles_pt").setName("r_humeral_lateral_epicondyles_pt").setTranslation(new float[] {-0.2224f,1.1517f,-0.1033f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_lateral_epicondyles_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                  .addChild(new HAnimJoint("hanim_r_acromioclavicular").setDEF("hanim_r_shoulder").setName("r_shoulder").setCenter(new float[] {-0.1907f,1.4407f,-0.0325f})
                                                    .addChild(new HAnimSegment("hanim_r_shoulder").setDEF("hanim_r_upperarm").setName("r_upperarm")
                                                      .addChild(new Transform().setTranslation(new float[] {-0.1907f,1.4407f,-0.0325f})
                                                        .addChild(new Transform()
                                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32251().getArray())
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f252().getArray()))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setDEF("hanim_r_humeral_medial_epicondyles_pt").setName("r_humeral_medial_epicondyles_pt").setTranslation(new float[] {-0.168f,1.1298f,-0.1062f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_medial_epicondyles_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setDEF("hanim_r_olecranon_pt").setName("r_olecranon_pt").setTranslation(new float[] {-0.1907f,1.1405f,-0.1065f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_olecranon_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setDEF("hanim_r_radial_styloid_pt").setName("r_radial_styloid_pt").setTranslation(new float[] {-0.1884f,0.8676f,-0.036f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_radial_styloid_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setDEF("hanim_r_radiale_pt").setName("r_radiale_pt").setTranslation(new float[] {-0.213f,1.1305f,-0.1091f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_radiale_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint("hanim_r_shoulder").setDEF("hanim_r_elbow").setName("r_elbow").setCenter(new float[] {-0.1949f,1.1388f,-0.062f})
                                                      .addChild(new HAnimSegment("hanim_r_elbow").setDEF("hanim_r_forearm").setName("r_forearm")
                                                        .addChild(new Transform().setTranslation(new float[] {-0.1949f,1.1388f,-0.062f})
                                                          .addChild(new Transform()
                                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32253().getArray())
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f254().getArray()))))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_ulnar_styloid_pt").setName("r_ulnar_styloid_pt").setTranslation(new float[] {-0.2117f,0.8562f,-0.0584f})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_ulnar_styloid_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint("hanim_r_elbow").setDEF("hanim_r_radiocarpal").setName("r_radiocarpal").setCenter(new float[] {-0.1959f,0.8694f,-0.0521f})
                                                        .addChild(new HAnimSegment("hanim_r_radiocarpal").setDEF("hanim_r_carpal").setName("r_carpal")
                                                          .addChild(new Transform().setTranslation(new float[] {-0.2f,0.85f,-0.05f}).setRotation(new float[] {0f,0f,1f,-3.14f}).setScale(new float[] {0.2f,0.2f,0.2f})
                                                            .addChild(new Transform().setRotation(new float[] {0f,1f,0f,1.57f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32255().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f256().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32257().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f258().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32259().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f260().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32261().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f262().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_1").setName("r_midcarpal_1").setCenter(new float[] {-8.0515f,0.9213f,1.3235f})
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_1").setDEF("hanim_r_trapezium").setName("r_trapezium")
                                                            .addChild(new Transform().setTranslation(new float[] {-8.0515f,0.9213f,1.3235f})
                                                              .addChild(new Transform()
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32263().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f264().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_1").setDEF("hanim_r_carpometacarpal_1").setName("r_carpometacarpal_1").setCenter(new float[] {-0.1899f,0.8502f,-0.0473f})
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_1").setDEF("hanim_r_metacarpal_1").setName("r_metacarpal_1")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1899f,0.8502f,-0.0473f})
                                                                .addChild(new Transform()
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32265().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f266().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setDEF("hanim_r_metacarpophalangeal_1").setName("r_metacarpophalangeal_1").setCenter(new float[] {-0.1874f,0.8256f,0.0306f})
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_1").setDEF("hanim_r_carpal_proximal_phalanx_1").setName("r_carpal_proximal_phalanx_1")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1874f,0.8256f,0.0306f})
                                                                  .addChild(new Transform()
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32267().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f268().getArray()))))
                                                                .addChild(new HAnimSite("hanim_r_carpal_proximal_phalanx_1").setDEF("hanim_r_carpal_distal_phalanx_1_tip").setName("r_carpal_distal_phalanx_1_tip")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_1_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setName("r_carpal_interphalangeal_1").setCenter(new float[] {-0.1864f,0.819f,0.0506f})))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_2").setName("r_midcarpal_2").setCenter(new float[] {-8.0515f,0.9225f,0.8386f})
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_2").setDEF("hanim_r_trapezoid").setName("r_trapezoid")
                                                            .addChild(new Transform().setTranslation(new float[] {-8.0515f,0.9225f,0.8386f})
                                                              .addChild(new Transform()
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32269().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f270().getArray()))))
                                                            .addChild(new HAnimSite("hanim_r_trapezoid").setDEF("hanim_r_metacarpal_phalanx_2_pt").setName("r_metacarpal_phalanx_2_pt").setTranslation(new float[] {-0.1977f,0.8169f,-0.0177f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_phalanx_2_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_2").setDEF("hanim_r_carpometacarpal_2").setName("r_carpometacarpal_2").setCenter(new float[] {-0.1961f,0.8055f,-0.0218f})
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_2").setDEF("hanim_r_metacarpal_2").setName("r_metacarpal_2")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1961f,0.8055f,-0.0218f})
                                                                .addChild(new Transform()
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32271().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f272().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setDEF("hanim_r_metacarpophalangeal_2").setName("r_metacarpophalangeal_2").setCenter(new float[] {-0.1961f,0.7846f,-0.0218f})
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_2").setDEF("hanim_r_carpal_proximal_phalanx_2 ").setName("r_carpal_proximal_phalanx_2 ")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1961f,0.7846f,-0.0218f})
                                                                  .addChild(new Transform()
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32273().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f274().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_1").setName("r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-0.1954f,0.7393f,-0.0185f})
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_1").setDEF("hanim_r_carpal_middle_phalanx_1").setName("r_carpal_middle_phalanx_2")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1954f,0.7393f,-0.0185f})
                                                                    .addChild(new Transform()
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32275().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f276().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_middle_phalanx_1").setDEF("hanim_r_carpal_distal_phalanx_2_tip").setName("r_carpal_distal_phalanx_2_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_2_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_middle_phalanx_1").setDEF("hanim_r_dactylion_pt").setName("r_dactylion_pt").setTranslation(new float[] {-0.1941f,0.6772f,-0.0423f})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_dactylion_pt"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_1").setDEF("hanim_r_carpal_distal_interphalangeal_1").setName("r_carpal_distal_interphalangeal_2").setCenter(new float[] {-0.1945f,0.7169f,-0.0173f}))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_3").setName("r_midcarpal_3").setCenter(new float[] {-8.0405f,0.9246f,0.2513f})
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_3").setDEF("hanim_r_capitate").setName("r_capitate")
                                                            .addChild(new Transform().setTranslation(new float[] {-8.0405f,0.9246f,0.2513f})
                                                              .addChild(new Transform()
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32277().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f278().getArray()))))
                                                            .addChild(new HAnimSite("hanim_r_capitate").setDEF("hanim_r_metacarpal_phalanx_3_pt").setName("r_metacarpal_phalanx_3_pt")
                                                              .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_phalanx_3_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_3").setDEF("hanim_r_carpometacarpal_3").setName("r_carpometacarpal_3").setCenter(new float[] {-0.1972f,0.806f,-0.0468f})
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_3").setDEF("hanim_r_metacarpal_3").setName("r_metacarpal_3")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1972f,0.806f,-0.0468f})
                                                                .addChild(new Transform()
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32279().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f280().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setDEF("hanim_r_metacarpophalangeal_3").setName("r_metacarpophalangeal_3").setCenter(new float[] {-0.1972f,0.7849f,-0.0468f})
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_3").setDEF("hanim_r_carpal_proximal_phalanx_2").setName("r_carpal_proximal_phalanx_3")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1972f,0.7849f,-0.0468f})
                                                                  .addChild(new Transform()
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32281().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f282().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-0.195f,0.7304f,-0.0441f})
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_middle_phalanx_2").setName("r_carpal_middle_phalanx_3")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.195f,0.7304f,-0.0441f})
                                                                    .addChild(new Transform()
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32283().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f284().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_middle_phalanx_2").setDEF("hanim_r_carpal_distal_phalanx_3_tip").setName("r_carpal_distal_phalanx_3_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_3_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_3").setCenter(new float[] {-0.1939f,0.7042f,-0.0432f}))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_4_1").setName("r_midcarpal_4_5").setCenter(new float[] {-8.0405f,0.921f,-0.6795f})
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_4_1").setDEF("hanim_r_hamate").setName("r_hamate")
                                                            .addChild(new Transform().setTranslation(new float[] {-8.0405f,0.921f,-0.6795f})
                                                              .addChild(new Transform()
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32285().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f286().getArray()))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32287().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f288().getArray()))))
                                                            .addChild(new HAnimSite("hanim_r_hamate").setDEF("hanim_r_metacarpal_phalanx_5_pt").setName("r_metacarpal_phalanx_5_pt").setTranslation(new float[] {-0.1929f,0.789f,-0.1064f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_phalanx_5_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_1").setDEF("hanim_r_carpometacarpal_4").setName("r_carpometacarpal_4").setCenter(new float[] {-0.1951f,0.8049f,-0.0732f})
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_4").setDEF("hanim_r_metacarpal_4").setName("r_metacarpal_4")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1951f,0.8049f,-0.0732f})
                                                                .addChild(new Transform()
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32289().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f290().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setDEF("hanim_r_metacarpophalangeal_4").setName("r_metacarpophalangeal_4").setCenter(new float[] {-0.1951f,0.7845f,-0.0732f})
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_4").setDEF("hanim_r_carpal_proximal_phalanx_3").setName("r_carpal_proximal_phalanx_4")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1951f,0.7845f,-0.0732f})
                                                                  .addChild(new Transform()
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32291().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f292().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_proximal_interphalangeal_4").setCenter(new float[] {-0.192f,0.7318f,-0.0716f})
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_middle_phalanx_3").setName("r_carpal_middle_phalanx_4")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.192f,0.7318f,-0.0716f})
                                                                    .addChild(new Transform()
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32293().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f294().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_middle_phalanx_3").setDEF("hanim_r_carpal_distal_phalanx_4_tip").setName("r_carpal_distal_phalanx_4_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_4_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_4").setCenter(new float[] {-0.1908f,0.7077f,-0.0706f})))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_1").setDEF("hanim_r_carpometacarpal_5").setName("r_carpometacarpal_5").setCenter(new float[] {-0.1926f,0.8096f,-0.0975f})
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_5").setDEF("hanim_r_metacarpal_5").setName("r_metacarpal_5")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1926f,0.8096f,-0.0975f})
                                                                .addChild(new Transform()
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32295().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f296().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setDEF("hanim_r_metacarpophalangeal_5").setName("r_metacarpophalangeal_5").setCenter(new float[] {-0.1926f,0.7896f,-0.0975f})
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_5").setDEF("hanim_r_carpal_proximal_phalanx_4").setName("r_carpal_proximal_phalanx_5")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1926f,0.7896f,-0.0975f})
                                                                  .addChild(new Transform()
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32297().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f298().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_proximal_interphalangeal_5").setCenter(new float[] {-0.1902f,0.7483f,-0.0963f})
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_middle_phalanx_4").setName("r_carpal_middle_phalanx_5")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1902f,0.7483f,-0.0963f})
                                                                    .addChild(new Transform()
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32299().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f300().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_middle_phalanx_4").setDEF("hanim_r_carpal_distal_phalanx_5_tip").setName("r_carpal_distal_phalanx_5_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_5_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_5").setCenter(new float[] {-0.1908f,0.754f,-0.096f})))))))))))))))))))))))))))))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_buttocks_standing_wall_contact_point_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_crotch_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_asis_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_iliocristale_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_psis_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_trochanterion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_asis_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_iliocristale_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_psis_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_trochanterion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_navel_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_waist_preferred_anterior_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_waist_preferred_posterior_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_femoral_lateral_epicondyles_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_femoral_medial_epicondyles_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_knee_crease_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_suprapatella_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_femoral_lateral_epicondyles_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_femoral_medial_epicondyles_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_knee_crease_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_suprapatella_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_lateral_malleolus_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_medial_malleolus_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_tibiale_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_calcaneus_posterior_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_sphyrion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_metatarsal_phalanx_1_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_tarsal_distal_phalanx_1_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_tarsal_distal_phalanx_2_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_tarsal_distal_phalanx_3_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_tarsal_distal_phalanx_4_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_metatarsal_phalanx_5_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_tarsal_distal_phalanx_5_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_lateral_malleolus_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_medial_malleolus_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_tibiale_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_calcaneus_posterior_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_sphyrion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_metatarsal_phalanx_1_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_tarsal_distal_phalanx_1_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_tarsal_distal_phalanx_2_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_tarsal_distal_phalanx_3_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_tarsal_distal_phalanx_4_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_metatarsal_phalanx_5_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_tarsal_distal_phalanx_5_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_rib10_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_rib10_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_spine_2_middle_back_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_substernale_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_thelion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_thelion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_chest_midsagittal_plane_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_mesosternale_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_chest_midsagittal_plane_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_rear_center_midsagittal_plane_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_spine_1_middle_back_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_cervicale_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_suprasternale_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_neck_base_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_neck_base_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_acromion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_axilla_distal_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_axilla_posterior_folds_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_axilla_proximal_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_clavicale_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_acromion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_axilla_distal_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_axilla_posterior_folds_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_axilla_proximal_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_clavicale_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_adams_apple_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_glabella_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_ectocanthus_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_infraorbitale_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_tragion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_nuchale_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_opisthocranion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_ectocanthus_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_infraorbitale_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_tragion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_sellion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_skull_vertex_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_gonion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_menton_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_gonion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_supramenton_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_bideltoid_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_humeral_lateral_epicondyles_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_humeral_medial_epicondyles_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_olecranon_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_radial_styloid_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_radiale_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_ulnar_styloid_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_carpal_distal_phalanx_1_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_metacarpal_phalanx_2_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_carpal_distal_phalanx_2_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_dactylion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_metacarpal_phalanx_3_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_carpal_distal_phalanx_3_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_metacarpal_phalanx_5_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_carpal_distal_phalanx_4_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_l_carpal_distal_phalanx_5_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_bideltoid_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_humeral_lateral_epicondyles_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_humeral_medial_epicondyles_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_olecranon_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_radial_styloid_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_radiale_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_ulnar_styloid_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_carpal_distal_phalanx_1_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_metacarpal_phalanx_2_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_carpal_distal_phalanx_2_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_dactylion_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_metacarpal_phalanx_3_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_carpal_distal_phalanx_3_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_metacarpal_phalanx_5_pt"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_carpal_distal_phalanx_4_tip"))
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_carpal_distal_phalanx_5_tip"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_sacrum"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_talus"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_navicular"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_cuneiform_1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_metatarsal_1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_tarsal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_cuneiform_2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_metatarsal_2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_tarsal_middle_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_cuneiform_3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_metatarsal_3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_tarsal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_tarsal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_calcaneus"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_cuboid"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_metatarsal_4"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_tarsal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_tarsal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_metatarsal_5"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_tarsal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_tarsal_middle_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_talus"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_navicular"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_cuneiform_1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_metatarsal_1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_tarsal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_cuneiform_2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_metatarsal_2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_tarsal_middle_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_cuneiform_3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_metatarsal_3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_tarsal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_tarsal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_calcaneus"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_cuboid"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_metatarsal_4"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_tarsal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_tarsal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_metatarsal_5"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_tarsal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_tarsal_middle_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l5"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l4"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_t12"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_t11"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_t10"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_t9"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_t8"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_t7"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_t6"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_t5"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_t4"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_t3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_t2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_t1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_c7"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_c6"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_c5"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_c4"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_c3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_c2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_c1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_skull"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_clavicle"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_scapula"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_carpal"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_trapezium"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_metacarpal_1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_trapezoid"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_metacarpal_2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_carpal_proximal_phalanx_2 "))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_carpal_middle_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_capitate"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_metacarpal_3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_hamate"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_metacarpal_4"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_metacarpal_5"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_l_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_clavicle"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_scapula"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_upperarm"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_carpal"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_trapezium"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_metacarpal_1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_trapezoid"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_metacarpal_2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_carpal_proximal_phalanx_2 "))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_carpal_middle_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_capitate"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_metacarpal_3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_hamate"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_metacarpal_4"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_metacarpal_5"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_HAnim").setUSE("hanim_r_carpal_middle_phalanx_4"))
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
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsometatarsal_3 "))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_calcaneocuboid"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_transversetarsal"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsometatarsal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsometatarsal_4"))
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
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsometatarsal_3 "))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_calcaneocuboid"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_transversetarsal"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsometatarsal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsometatarsal_4"))
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
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_distal_interphalangeal_4"))
          .setSkinCoord(new Coordinate())))      ;
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
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA8 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f,1f,0f,1f,1f,1f,0f,0.1f,1f,1f,0f,1f,1f,1f,0f,0.1f,1f,1f,0f,1f,1f,1f,0f,0.1f});
  }
}
private class MFVec3f9 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.01f,0f,-0.01f,0f,0f,0f,0f,0.01f,0.01f,0f,0f,0f,0f,-0.01f,0f,-0.01f,0f});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"humanoidVersion=2.0"});
  }
}
private class MFInt3211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f12 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.824f,0.0277f,0f,0.9149f,0.0016f});
  }
}
private class MFInt3213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.824f,0.0277f,0.0028f,1.0568f,-0.0776f});
  }
}
private class MFInt3215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f16 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0961f,0.9124f,-0.0001f});
  }
}
private class MFInt3217 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f18 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.095f,0.9171f,0.0029f});
  }
}
private class MFInt3219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f20 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.104f,0.4867f,0.0308f});
  }
}
private class MFInt3221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f22 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.104f,0.4867f,0.0308f,0.1101f,0.0656f,-0.0736f});
  }
}
private class MFInt3223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f24 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,3.4715f,0.0374f,0.6807f});
  }
}
private class MFInt3225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,3.9515f,0.0653f,-0.6895f});
  }
}
private class MFInt3227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f28 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.4715f,0.0374f,0.6807f,2.9855f,0.0311f,1.2819f});
  }
}
private class MFInt3229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.4715f,0.0374f,0.6807f,3.6105f,0.033f,1.4168f});
  }
}
private class MFInt3231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f32 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.4715f,0.0374f,0.6807f,4.1235f,0.0328f,1.3453f});
  }
}
private class MFInt3233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f34 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.9855f,0.0311f,1.2819f,2.8635f,0.0194f,2.4285f});
  }
}
private class MFInt3235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f36 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.8635f,0.0194f,2.4285f,2.7525f,0.0077f,4.6255f});
  }
}
private class MFInt3237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f38 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.7525f,0.0077f,4.6255f,2.7525f,0.0077f,4.6255f});
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f40 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.6105f,0.033f,1.4168f,3.5555f,0.0232f,2.2895f});
  }
}
private class MFInt3241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f42 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.5555f,0.0232f,2.2895f,3.6595f,0.0085f,4.8125f});
  }
}
private class MFInt3243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f44 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.6595f,0.0085f,4.8125f,3.7385f,0.0054f,5.5315f});
  }
}
private class MFInt3245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f46 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.7385f,0.0054f,5.5315f,3.7385f,0.0017f,5.9505f});
  }
}
private class MFInt3247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f48 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.1235f,0.0328f,1.3453f,3.7385f,0.0017f,5.9505f});
  }
}
private class MFInt3249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f50 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.2795f,0.0086f,4.7055f});
  }
}
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f52 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.2795f,0.0086f,4.7055f,4.3855f,0.0044f,5.3745f});
  }
}
private class MFInt3253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f54 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.3855f,0.0044f,5.3745f,4.4545f,0.0017f,5.7845f});
  }
}
private class MFInt3255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f56 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.9515f,0.0653f,-0.6895f,4.9085f,0.0353f,0.5574f});
  }
}
private class MFInt3257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f58 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.9085f,0.0353f,0.5574f,4.7245f,0.0211f,2.1725f});
  }
}
private class MFInt3259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f60 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.9085f,0.0353f,0.5574f,5.3615f,0.0164f,2.0085f});
  }
}
private class MFInt3261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f62 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.7245f,0.0211f,2.1725f,4.8745f,0.0076f,4.5165f});
  }
}
private class MFInt3263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f64 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.8745f,0.0076f,4.5165f,5.0655f,0.0049f,5.1895f});
  }
}
private class MFInt3265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f66 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.0655f,0.0049f,5.1895f,5.1325f,0.0011f,5.5175f});
  }
}
private class MFInt3267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f68 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.3615f,0.0164f,2.0085f,5.5055f,0.0067f,4.3115f});
  }
}
private class MFInt3269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f70 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.5055f,0.0067f,4.3115f,5.6085f,0.003f,4.6485f});
  }
}
private class MFInt3271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f72 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.6085f,0.003f,4.6485f,5.6485f,0f,4.9925f});
  }
}
private class MFInt3273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f74 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.095f,0.9171f,0.0029f,-0.0867f,0.4913f,0.0318f});
  }
}
private class MFInt3275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f76 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0867f,0.4913f,0.0318f,-0.0801f,0.0712f,-0.0766f});
  }
}
private class MFInt3277 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f78 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f,0.0712f,-0.0766f,-3.4725f,0.0374f,0.6807f});
  }
}
private class MFInt3279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f80 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f,0.0712f,-0.0766f,-3.9515f,0.0653f,-0.6895f});
  }
}
private class MFInt3281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f82 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.4725f,0.0374f,0.6807f,-2.9855f,0.0311f,1.2819f});
  }
}
private class MFInt3283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f84 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.4725f,0.0374f,0.6807f,-3.6105f,0.033f,1.4168f});
  }
}
private class MFInt3285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f86 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.4725f,0.0374f,0.6807f,-4.1245f,0.0328f,1.3453f});
  }
}
private class MFInt3287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f88 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.9855f,0.0311f,1.2819f,-2.8645f,0.0194f,2.4285f});
  }
}
private class MFInt3289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f90 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.8645f,0.0194f,2.4285f,-2.7535f,0.0077f,4.6255f});
  }
}
private class MFInt3291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f92 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.7535f,0.0077f,4.6255f,-2.7535f,0.0077f,4.6255f});
  }
}
private class MFInt3293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f94 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.6105f,0.033f,1.4168f,-3.5565f,0.0232f,2.2895f});
  }
}
private class MFInt3295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f96 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.5565f,0.0232f,2.2895f,-3.6595f,0.0085f,4.8125f});
  }
}
private class MFInt3297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f98 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.6595f,0.0085f,4.8125f,-3.7385f,0.0054f,5.5315f});
  }
}
private class MFInt3299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f100 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.7385f,0.0054f,5.5315f,-3.7385f,0.0017f,5.9505f});
  }
}
private class MFInt32101 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f102 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.1245f,0.0328f,1.3453f,-3.7385f,0.0017f,5.9505f});
  }
}
private class MFInt32103 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f104 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.2795f,0.0086f,4.7055f});
  }
}
private class MFInt32105 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f106 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.2795f,0.0086f,4.7055f,-4.3865f,0.0044f,5.3745f});
  }
}
private class MFInt32107 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f108 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.3865f,0.0044f,5.3745f,-4.4545f,0.0017f,5.7845f});
  }
}
private class MFInt32109 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f110 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.9515f,0.0653f,-0.6895f,-4.9095f,0.0353f,0.5574f});
  }
}
private class MFInt32111 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f112 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.9095f,0.0353f,0.5574f,-4.7255f,0.0211f,2.1725f});
  }
}
private class MFInt32113 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f114 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.9095f,0.0353f,0.5574f,-5.3615f,0.0164f,2.0085f});
  }
}
private class MFInt32115 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f116 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.7255f,0.0211f,2.1725f,-4.8755f,0.0076f,4.5165f});
  }
}
private class MFInt32117 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f118 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.8755f,0.0076f,4.5165f,-5.0655f,0.0049f,5.1895f});
  }
}
private class MFInt32119 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f120 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-5.0655f,0.0049f,5.1895f,-5.1335f,0.0011f,5.5175f});
  }
}
private class MFInt32121 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f122 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-5.3615f,0.0164f,2.0085f,-5.5055f,0.0067f,4.3115f});
  }
}
private class MFInt32123 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f124 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-5.5055f,0.0067f,4.3115f,-5.6085f,0.003f,4.6485f});
  }
}
private class MFInt32125 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f126 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-5.6085f,0.003f,4.6485f,-5.6495f,0f,4.9925f});
  }
}
private class MFInt32127 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f128 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f,1.0568f,-0.0776f,0.0035f,1.0925f,-0.0787f});
  }
}
private class MFInt32129 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f130 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0035f,1.0925f,-0.0787f,0.0041f,1.1276f,-0.0796f});
  }
}
private class MFInt32131 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f132 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0041f,1.1276f,-0.0796f,0.0045f,1.1546f,-0.08f});
  }
}
private class MFInt32133 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f134 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,0.0048f,1.1912f,-0.0805f});
  }
}
private class MFInt32135 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f136 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0048f,1.1912f,-0.0805f,0.0051f,1.2278f,-0.0808f});
  }
}
private class MFInt32137 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f138 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0051f,1.2278f,-0.0808f,0.0053f,1.2679f,-0.081f});
  }
}
private class MFInt32139 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f140 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0053f,1.2679f,-0.081f,0.0056f,1.2848f,-0.0822f});
  }
}
private class MFInt32141 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f142 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f,1.2848f,-0.0822f,0.0057f,1.3126f,-0.0838f});
  }
}
private class MFInt32143 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f144 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3126f,-0.0838f,0.0057f,1.3382f,-0.0845f});
  }
}
private class MFInt32145 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f146 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3382f,-0.0845f,0.0058f,1.3625f,-0.0833f});
  }
}
private class MFInt32147 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f148 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0058f,1.3625f,-0.0833f,0.0059f,1.3866f,-0.08f});
  }
}
private class MFInt32149 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f150 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0059f,1.3866f,-0.08f,0.006f,1.4102f,-0.0745f});
  }
}
private class MFInt32151 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f152 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.006f,1.4102f,-0.0745f,0.0061f,1.432f,-0.0675f});
  }
}
private class MFInt32153 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f154 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0061f,1.432f,-0.0675f,0.0062f,1.4583f,-0.057f});
  }
}
private class MFInt32155 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f156 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0062f,1.4583f,-0.057f,0.0063f,1.4761f,-0.0484f});
  }
}
private class MFInt32157 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f158 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0063f,1.4761f,-0.0484f,0.0065f,1.4951f,-0.0387f});
  }
}
private class MFInt32159 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f160 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0066f,1.5132f,-0.0301f});
  }
}
private class MFInt32161 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f162 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.082f,1.4488f,-0.0353f});
  }
}
private class MFInt32163 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f164 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,-0.0694f,1.46f,-0.033f});
  }
}
private class MFInt32165 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f166 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5132f,-0.0301f,0.0066f,1.5357f,-0.0143f});
  }
}
private class MFInt32167 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f168 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5357f,-0.0143f,0.0066f,1.552f,-0.0082f});
  }
}
private class MFInt32169 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f170 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.552f,-0.0082f,0.0066f,1.5662f,-0.0084f});
  }
}
private class MFInt32171 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f172 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5662f,-0.0084f,0.0066f,1.58f,-0.0103f});
  }
}
private class MFInt32173 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f174 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.58f,-0.0103f,0.0066f,1.5928f,-0.0103f});
  }
}
private class MFInt32175 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f176 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5928f,-0.0103f,0.0066f,1.6144f,-0.0034f});
  }
}
private class MFInt32177 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f178 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.6144f,-0.0034f,0.0044f,1.6209f,0.0236f});
  }
}
private class MFInt32179 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f180 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,2.2365f,1.87f,1.9285f});
  }
}
private class MFInt32181 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f182 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-2.2535f,1.87f,1.9285f});
  }
}
private class MFInt32183 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f184 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,2.1305f,1.8444f,4.1555f});
  }
}
private class MFInt32185 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f186 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-2.1475f,1.8444f,4.1555f});
  }
}
private class MFInt32187 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f188 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.9581f,1.8563f,5.2175f});
  }
}
private class MFInt32189 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f190 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.9751f,1.8563f,5.2175f});
  }
}
private class MFInt32191 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f192 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0085f,1.7229f,1.148f});
  }
}
private class MFInt32193 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f194 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.0962f,1.4269f,-0.0424f});
  }
}
private class MFInt32195 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f196 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0962f,1.4269f,-0.0424f,0.2029f,1.4376f,-0.0387f});
  }
}
private class MFInt32197 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f198 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f,1.4376f,-0.0387f,0.2014f,1.1357f,-0.0682f});
  }
}
private class MFInt32199 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f200 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1984f,0.8663f,-0.0583f});
  }
}
private class MFInt32201 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f202 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,8.0485f,0.9213f,1.3235f});
  }
}
private class MFInt32203 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f204 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,8.0485f,0.9225f,0.8386f});
  }
}
private class MFInt32205 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f206 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,8.0395f,0.9246f,0.2513f});
  }
}
private class MFInt32207 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f208 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,8.0395f,0.921f,-0.6795f});
  }
}
private class MFInt32209 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f210 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.0485f,0.9213f,1.3235f,0.1924f,0.8472f,-0.0534f});
  }
}
private class MFInt32211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f212 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1924f,0.8472f,-0.0534f,0.1951f,0.8226f,0.0246f});
  }
}
private class MFInt32213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f214 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1951f,0.8226f,0.0246f,0.1955f,0.8159f,0.0464f});
  }
}
private class MFInt32215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f216 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.0485f,0.9225f,0.8386f,0.1983f,0.8024f,-0.028f});
  }
}
private class MFInt32217 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f218 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.8024f,-0.028f,0.1983f,0.7815f,-0.028f});
  }
}
private class MFInt32219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f220 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.7815f,-0.028f,0.2017f,0.7363f,-0.0248f});
  }
}
private class MFInt32221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f222 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2017f,0.7363f,-0.0248f,0.2028f,0.7139f,-0.0236f});
  }
}
private class MFInt32223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f224 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.0395f,0.9246f,0.2513f,0.1987f,0.8029f,-0.053f});
  }
}
private class MFInt32225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f226 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.8029f,-0.053f,0.1987f,0.7818f,-0.053f});
  }
}
private class MFInt32227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f228 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.7818f,-0.053f,0.2013f,0.7273f,-0.0503f});
  }
}
private class MFInt32229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f230 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2013f,0.7273f,-0.0503f,0.2026f,0.7011f,-0.0494f});
  }
}
private class MFInt32231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f232 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.0395f,0.921f,-0.6795f,0.1956f,0.8019f,-0.0794f});
  }
}
private class MFInt32233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f234 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.0395f,0.921f,-0.6795f,0.1925f,0.8066f,-0.1036f});
  }
}
private class MFInt32235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f236 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.8019f,-0.0794f,0.1956f,0.7815f,-0.0794f});
  }
}
private class MFInt32237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f238 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.7815f,-0.0794f,0.1973f,0.7287f,-0.0777f});
  }
}
private class MFInt32239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f240 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1973f,0.7287f,-0.0777f,0.1983f,0.7045f,-0.0767f});
  }
}
private class MFInt32241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f242 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.8066f,-0.1036f,0.1925f,0.7866f,-0.1036f});
  }
}
private class MFInt32243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f244 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.7866f,-0.1036f,0.1938f,0.7452f,-0.1024f});
  }
}
private class MFInt32245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f246 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1938f,0.7452f,-0.1024f,0.1948f,0.7277f,-0.1017f});
  }
}
private class MFInt32247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f248 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0694f,1.46f,-0.033f,-0.0836f,1.4281f,-0.0401f});
  }
}
private class MFInt32249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f250 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0836f,1.4281f,-0.0401f,-0.1907f,1.4407f,-0.0325f});
  }
}
private class MFInt32251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f252 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1907f,1.4407f,-0.0325f,-0.1949f,1.1388f,-0.062f});
  }
}
private class MFInt32253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f254 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1949f,1.1388f,-0.062f,-0.1959f,0.8694f,-0.0521f});
  }
}
private class MFInt32255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f256 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,-8.0515f,0.9213f,1.3235f});
  }
}
private class MFInt32257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f258 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,-8.0515f,0.9225f,0.8386f});
  }
}
private class MFInt32259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f260 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,-8.0405f,0.9246f,0.2513f});
  }
}
private class MFInt32261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f262 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,-8.0405f,0.921f,-0.6795f});
  }
}
private class MFInt32263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f264 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-8.0515f,0.9213f,1.3235f,-0.1899f,0.8502f,-0.0473f});
  }
}
private class MFInt32265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f266 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1899f,0.8502f,-0.0473f,-0.1874f,0.8256f,0.0306f});
  }
}
private class MFInt32267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f268 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1874f,0.8256f,0.0306f,-0.1864f,0.819f,0.0506f});
  }
}
private class MFInt32269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f270 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-8.0515f,0.9225f,0.8386f,-0.1961f,0.8055f,-0.0218f});
  }
}
private class MFInt32271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f272 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f,0.8055f,-0.0218f,-0.1961f,0.7846f,-0.0218f});
  }
}
private class MFInt32273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f274 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f,0.7846f,-0.0218f,-0.1954f,0.7393f,-0.0185f});
  }
}
private class MFInt32275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f276 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1954f,0.7393f,-0.0185f,-0.1945f,0.7169f,-0.0173f});
  }
}
private class MFInt32277 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f278 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-8.0405f,0.9246f,0.2513f,-0.1972f,0.806f,-0.0468f});
  }
}
private class MFInt32279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f280 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f,0.806f,-0.0468f,-0.1972f,0.7849f,-0.0468f});
  }
}
private class MFInt32281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f282 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f,0.7849f,-0.0468f,-0.195f,0.7304f,-0.0441f});
  }
}
private class MFInt32283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f284 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.195f,0.7304f,-0.0441f,-0.1939f,0.7042f,-0.0432f});
  }
}
private class MFInt32285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f286 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-8.0405f,0.921f,-0.6795f,-0.1951f,0.8049f,-0.0732f});
  }
}
private class MFInt32287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f288 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-8.0405f,0.921f,-0.6795f,-0.1926f,0.8096f,-0.0975f});
  }
}
private class MFInt32289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f290 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f,0.8049f,-0.0732f,-0.1951f,0.7845f,-0.0732f});
  }
}
private class MFInt32291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f292 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f,0.7845f,-0.0732f,-0.192f,0.7318f,-0.0716f});
  }
}
private class MFInt32293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f294 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.192f,0.7318f,-0.0716f,-0.1908f,0.7077f,-0.0706f});
  }
}
private class MFInt32295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f296 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f,0.8096f,-0.0975f,-0.1926f,0.7896f,-0.0975f});
  }
}
private class MFInt32297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f298 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f,0.7896f,-0.0975f,-0.1902f,0.7483f,-0.0963f});
  }
}
private class MFInt32299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f300 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1902f,0.7483f,-0.0963f,-0.1908f,0.754f,-0.096f});
  }
}
}
