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
public class JohnJoint3 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new JohnJoint3().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/JohnJoint3.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("JohnJoint3.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint3.x3d"))
        .addMeta(new meta().setName("description").setContent("An attempt at a standard LOA-4 skeleton"))
        .addMeta(new meta().setName("generator").setContent("h2.pl"))
        .addMeta(new meta().setName("modified").setContent("14 Jan 2023"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("9 November 2020"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Transform()
          .addComments("DEF for markerfor XYZ axes")
          .addChild(new Shape().setDEF("AxisLinesShape")
            .addComments("RGB lines showing XYZ axes")
            .setGeometry(new IndexedLineSet().setColorIndex(new MFInt320().getArray()).setColorPerVertex(false).setCoordIndex(new MFInt321().getArray())
              .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray()))
              .setColor(new Color().setColor(new MFColor3().getArray())))))
        .addChild(new Group()
          .addComments("DEFS for markers of skeleton joints, segments, and sites")
          .addChild(new Transform()
            .addComments("<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>")
            .addChild(new Transform().setTranslation(new float[] {0f,2.1f,0f})
              .addChild(new Shape().setDEF("HAnimJointShape")
                .setGeometry(new Sphere().setRadius(0.02f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("HAnimJointMaterial").setDiffuseColor(new float[] {0f,0f,0.8f}).setTransparency(0.3f)))))
            .addChild(new Transform().setTranslation(new float[] {0f,2.05f,0f})
              .addChild(new Shape().setDEF("HAnimSegmentLine")
                .setGeometry(new LineSet().setVertexCount(new MFInt324().getArray())
                  .setColor(new ColorRGBA().setDEF("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA5().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray())))))
            .addChild(new Transform().setTranslation(new float[] {0f,2.1f,0f})
              .addChild(new Shape().setDEF("HAnimSiteShape")
                .setGeometry(new IndexedFaceSet().setDEF("DiamondIFS").setCreaseAngle(0.5f).setSolid(false).setCoordIndex(new MFInt327().getArray())
                  .setColor(new ColorRGBA().setDEF("HAnimSiteColorRGBA").setColor(new MFColorRGBA8().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f9().getArray())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0f}).setTransparency(0.3f)))))))
        .addChild(new NavigationInfo().setSpeed(1.5f))
        .addChild(new Viewpoint().setDescription("default"))
        .addChild(new HAnimHumanoid().setName("HAnim").setDEF("hanim_HAnim").setInfo(new MFString10().getArray()).setVersion("2.0")
          .addSkeleton(new HAnimJoint("hanim_HAnim").setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new float[] {0f,0.824f,0.0277f}).setUlimit(new MFFloat11().getArray()).setLlimit(new MFFloat12().getArray())
            .addChild(new Shape()
              .setGeometry(new LineSet().setVertexCount(new MFInt3213().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))
                .addComments("from humanoid_root to sacroiliac")
                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
            .addChild(new HAnimSite("hanim_humanoid_root").setName("buttocks_standing_wall_contact_point_pt").setDEF("hanim_buttocks_standing_wall_contact_point_pt").setTranslation(new float[] {0f,1f,0f})
              .addChild(new TouchSensor().setDescription("HAnimSite buttocks_standing_wall_contact_point_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("hanim_humanoid_root").setName("crotch_pt").setDEF("hanim_crotch_pt").setTranslation(new float[] {0.0034f,0.8266f,0.0257f})
              .addChild(new TouchSensor().setDescription("HAnimSite crotch_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("hanim_humanoid_root").setName("l_asis_pt").setDEF("hanim_l_asis_pt").setTranslation(new float[] {0.0925f,0.9983f,0.1052f})
              .addChild(new TouchSensor().setDescription("HAnimSite l_asis_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("hanim_humanoid_root").setName("l_iliocristale_pt").setDEF("hanim_l_iliocristale_pt").setTranslation(new float[] {0.1612f,1.0537f,0.0008f})
              .addChild(new TouchSensor().setDescription("HAnimSite l_iliocristale_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("hanim_humanoid_root").setName("l_psis_pt").setDEF("hanim_l_psis_pt").setTranslation(new float[] {0.0774f,1.019f,-0.1151f})
              .addChild(new TouchSensor().setDescription("HAnimSite l_psis_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("hanim_humanoid_root").setName("l_trochanterion_pt").setDEF("hanim_l_trochanterion_pt").setTranslation(new float[] {0.1677f,0.8336f,0.0303f})
              .addChild(new TouchSensor().setDescription("HAnimSite l_trochanterion_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("hanim_humanoid_root").setName("r_asis_pt").setDEF("hanim_r_asis_pt").setTranslation(new float[] {-0.0887f,1.0021f,0.1112f})
              .addChild(new TouchSensor().setDescription("HAnimSite r_asis_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("hanim_humanoid_root").setName("r_iliocristale_pt").setDEF("hanim_r_iliocristale_pt").setTranslation(new float[] {-0.1525f,1.0628f,0.0035f})
              .addChild(new TouchSensor().setDescription("HAnimSite r_iliocristale_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("hanim_humanoid_root").setName("r_psis_pt").setDEF("hanim_r_psis_pt").setTranslation(new float[] {-0.0716f,1.019f,-0.1138f})
              .addChild(new TouchSensor().setDescription("HAnimSite r_psis_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("hanim_humanoid_root").setName("r_trochanterion_pt").setDEF("hanim_r_trochanterion_pt").setTranslation(new float[] {-0.1689f,0.8419f,0.0352f})
              .addChild(new TouchSensor().setDescription("HAnimSite r_trochanterion_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new Shape()
              .setGeometry(new LineSet().setVertexCount(new MFInt3215().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f16().getArray()))
                .addComments("from humanoid_root to vl5")
                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
            .addChild(new HAnimSite("hanim_humanoid_root").setName("navel_pt").setDEF("hanim_navel_pt").setTranslation(new float[] {0.0069f,1.0966f,0.1017f})
              .addChild(new TouchSensor().setDescription("HAnimSite navel_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("hanim_humanoid_root").setName("waist_preferred_anterior_pt").setDEF("hanim_waist_preferred_anterior_pt").setTranslation(new float[] {0f,1f,0f})
              .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_anterior_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("hanim_humanoid_root").setName("waist_preferred_posterior_pt").setDEF("hanim_waist_preferred_posterior_pt").setTranslation(new float[] {0.29f,1.0915f,-0.1091f})
              .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_posterior_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0f,0.9149f,0.0016f}).setUlimit(new MFFloat17().getArray()).setLlimit(new MFFloat18().getArray())
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3219().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f20().getArray()))
                  .addComments("from sacroiliac to l_hip")
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
              .addChild(new HAnimSite("hanim_sacroiliac").setName("l_femoral_lateral_epicondyles_pt").setDEF("hanim_l_femoral_lateral_epicondyles_pt").setTranslation(new float[] {0.1598f,0.4967f,0.0297f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_lateral_epicondyles_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacroiliac").setName("l_femoral_medial_epicondyles_pt").setDEF("hanim_l_femoral_medial_epicondyles_pt").setTranslation(new float[] {0.0398f,0.4946f,0.0303f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_medial_epicondyles_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacroiliac").setName("l_knee_crease_pt").setDEF("hanim_l_knee_crease_pt").setTranslation(new float[] {0.0993f,0.4881f,-0.0309f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_knee_crease_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacroiliac").setName("l_suprapatella_pt").setDEF("hanim_l_suprapatella_pt").setTranslation(new float[] {0f,1f,0f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_suprapatella_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3221().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f22().getArray()))
                  .addComments("from sacroiliac to r_hip")
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
              .addChild(new HAnimSite("hanim_sacroiliac").setName("r_femoral_lateral_epicondyles_pt").setDEF("hanim_r_femoral_lateral_epicondyles_pt").setTranslation(new float[] {-0.1421f,0.4992f,0.031f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_lateral_epicondyles_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacroiliac").setName("r_femoral_medial_epicondyles_pt").setDEF("hanim_r_femoral_medial_epicondyles_pt").setTranslation(new float[] {-0.0221f,0.5014f,0.0289f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_medial_epicondyles_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacroiliac").setName("r_knee_crease_pt").setDEF("hanim_r_knee_crease_pt").setTranslation(new float[] {-0.0825f,0.4932f,-0.0326f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_knee_crease_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacroiliac").setName("r_suprapatella_pt").setDEF("hanim_r_suprapatella_pt").setTranslation(new float[] {0f,1f,0f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_suprapatella_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {0.0961f,0.9124f,-0.0001f}).setUlimit(new MFFloat23().getArray()).setLlimit(new MFFloat24().getArray())
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3225().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))
                    .addComments("from l_hip to l_knee")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addChild(new HAnimSite("hanim_l_hip").setName("l_lateral_malleolus_pt").setDEF("hanim_l_lateral_malleolus_pt").setTranslation(new float[] {0.1308f,0.0597f,-0.1032f})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_lateral_malleolus_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_l_hip").setName("l_medial_malleolus_pt").setDEF("hanim_l_medial_malleolus_pt").setTranslation(new float[] {0.089f,0.0716f,-0.0881f})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_medial_malleolus_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_l_hip").setName("l_tibiale_pt").setDEF("hanim_l_tibiale_pt").setTranslation(new float[] {0f,1f,0f})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_tibiale_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimJoint("hanim_l_hip").setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {0.104f,0.4867f,0.0308f}).setUlimit(new MFFloat27().getArray()).setLlimit(new MFFloat28().getArray())
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3229().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))
                      .addComments("from l_knee to l_talocrural")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addChild(new HAnimSite("hanim_l_knee").setName("l_calcaneus_posterior_pt").setDEF("hanim_l_calcaneus_posterior_pt").setTranslation(new float[] {0.0974f,0.0259f,-0.1171f})
                    .addChild(new TouchSensor().setDescription("HAnimSite l_calcaneus_posterior_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_l_knee").setName("l_sphyrion_pt").setDEF("hanim_l_sphyrion_pt").setTranslation(new float[] {0.089f,0.0575f,-0.0943f})
                    .addChild(new TouchSensor().setDescription("HAnimSite l_sphyrion_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimJoint("hanim_l_knee").setName("l_talocrural").setDEF("hanim_l_talocrural").setCenter(new float[] {0.1101f,0.0656f,-0.0736f}).setUlimit(new MFFloat31().getArray()).setLlimit(new MFFloat32().getArray())
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3233().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray()))
                        .addComments("from l_talocrural to l_talocalcaneonavicular")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3235().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f36().getArray()))
                        .addComments("from l_talocrural to l_calcaneocuboid")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_talocalcaneonavicular").setDEF("hanim_l_talocalcaneonavicular").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat37().getArray()).setLlimit(new MFFloat38().getArray())
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3239().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f40().getArray()))
                          .addComments("from l_talocalcaneonavicular to l_cuneonavicular_1")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3241().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray()))
                          .addComments("from l_talocalcaneonavicular to l_cuneonavicular_2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3243().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f44().getArray()))
                          .addComments("from l_talocalcaneonavicular to l_cuneonavicular_3")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName("l_cuneonavicular_1").setDEF("hanim_l_cuneonavicular_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat45().getArray()).setLlimit(new MFFloat46().getArray())
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3247().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f48().getArray()))
                            .addComments("from l_cuneonavicular_1 to l_tarsometatarsal_1")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_1").setName("l_tarsometatarsal_1").setDEF("hanim_l_tarsometatarsal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat49().getArray()).setLlimit(new MFFloat50().getArray())
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3251().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f52().getArray()))
                              .addComments("from l_tarsometatarsal_1 to l_metatarsophalangeal_1")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimSite("hanim_l_tarsometatarsal_1").setName("l_metatarsal_phalanx_1_pt").setDEF("hanim_l_metatarsal_phalanx_1_pt").setTranslation(new float[] {0f,1f,0f})
                            .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_phalanx_1_pt"))
                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_1").setName("l_metatarsophalangeal_1").setDEF("hanim_l_metatarsophalangeal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat53().getArray()).setLlimit(new MFFloat54().getArray())
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3255().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f56().getArray()))
                                .addComments("from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimSite("hanim_l_metatarsophalangeal_1").setName("l_tarsal_distal_phalanx_1_tip").setDEF("hanim_l_tarsal_distal_phalanx_1_tip").setTranslation(new float[] {0f,1f,0f})
                              .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_1").setName("l_tarsal_interphalangeal_1").setDEF("hanim_l_tarsal_interphalangeal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat57().getArray()).setLlimit(new MFFloat58().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName("l_cuneonavicular_2").setDEF("hanim_l_cuneonavicular_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat59().getArray()).setLlimit(new MFFloat60().getArray())
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3261().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f62().getArray()))
                            .addComments("from l_cuneonavicular_2 to l_tarsometatarsal_2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_2").setName("l_tarsometatarsal_2").setDEF("hanim_l_tarsometatarsal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat63().getArray()).setLlimit(new MFFloat64().getArray())
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3265().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f66().getArray()))
                              .addComments("from l_tarsometatarsal_2 to l_metatarsophalangeal_2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setName("l_metatarsophalangeal_2").setDEF("hanim_l_metatarsophalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat67().getArray()).setLlimit(new MFFloat68().getArray())
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3269().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f70().getArray()))
                                .addComments("from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName("l_tarsal_proximal_interphalangeal_2").setDEF("hanim_l_tarsal_proximal_interphalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat71().getArray()).setLlimit(new MFFloat72().getArray())
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3273().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f74().getArray()))
                                  .addComments("from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_l_tarsal_proximal_interphalangeal_2").setName("l_tarsal_distal_phalanx_2_tip").setDEF("hanim_l_tarsal_distal_phalanx_2_tip").setTranslation(new float[] {0.1195f,0.0079f,0.1433f})
                                .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat75().getArray()).setLlimit(new MFFloat76().getArray()))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName("l_cuneonavicular_3").setDEF("hanim_l_cuneonavicular_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat77().getArray()).setLlimit(new MFFloat78().getArray())
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3279().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray()))
                            .addComments("from l_cuneonavicular_3 to l_tarsometatarsal_3")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_3").setName("l_tarsometatarsal_3").setDEF("hanim_l_tarsometatarsal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat81().getArray()).setLlimit(new MFFloat82().getArray())
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3283().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f84().getArray()))
                              .addComments("from l_tarsometatarsal_3 to l_metatarsophalangeal_3")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_3").setName("l_metatarsophalangeal_3").setDEF("hanim_l_metatarsophalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat85().getArray()).setLlimit(new MFFloat86().getArray())
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3287().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f88().getArray()))
                                .addComments("from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_3").setName("l_tarsal_proximal_interphalangeal_3").setDEF("hanim_l_tarsal_proximal_interphalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat89().getArray()).setLlimit(new MFFloat90().getArray())
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3291().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f92().getArray()))
                                  .addComments("from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_l_tarsal_proximal_interphalangeal_3").setName("l_tarsal_distal_phalanx_3_tip").setDEF("hanim_l_tarsal_distal_phalanx_3_tip").setTranslation(new float[] {0f,1f,0f})
                                .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_3").setName("l_tarsal_distal_interphalangeal_3").setDEF("hanim_l_tarsal_distal_interphalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat93().getArray()).setLlimit(new MFFloat94().getArray())))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_calcaneocuboid").setDEF("hanim_l_calcaneocuboid").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat95().getArray()).setLlimit(new MFFloat96().getArray())
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3297().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray()))
                          .addComments("from l_calcaneocuboid to l_transversetarsal")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new HAnimJoint("hanim_l_calcaneocuboid").setName("l_transversetarsal").setDEF("hanim_l_transversetarsal").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat99().getArray()).setLlimit(new MFFloat100().getArray())
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32101().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f102().getArray()))
                            .addComments("from l_transversetarsal to l_tarsometatarsal_4")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32103().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f104().getArray()))
                            .addComments("from l_transversetarsal to l_tarsometatarsal_5")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName("l_tarsometatarsal_4").setDEF("hanim_l_tarsometatarsal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat105().getArray()).setLlimit(new MFFloat106().getArray())
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32107().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f108().getArray()))
                              .addComments("from l_tarsometatarsal_4 to l_metatarsophalangeal_4")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_4").setName("l_metatarsophalangeal_4").setDEF("hanim_l_metatarsophalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat109().getArray()).setLlimit(new MFFloat110().getArray())
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32111().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f112().getArray()))
                                .addComments("from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_4").setName("l_tarsal_proximal_interphalangeal_4").setDEF("hanim_l_tarsal_proximal_interphalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat113().getArray()).setLlimit(new MFFloat114().getArray())
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32115().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f116().getArray()))
                                  .addComments("from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_l_tarsal_proximal_interphalangeal_4").setName("l_tarsal_distal_phalanx_4_tip").setDEF("hanim_l_tarsal_distal_phalanx_4_tip").setTranslation(new float[] {0f,1f,0f})
                                .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_4").setName("l_tarsal_distal_interphalangeal_4").setDEF("hanim_l_tarsal_distal_interphalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat117().getArray()).setLlimit(new MFFloat118().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName("l_tarsometatarsal_5").setDEF("hanim_l_tarsometatarsal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat119().getArray()).setLlimit(new MFFloat120().getArray())
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32121().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f122().getArray()))
                              .addComments("from l_tarsometatarsal_5 to l_metatarsophalangeal_5")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimSite("hanim_l_tarsometatarsal_5").setName("l_metatarsal_phalanx_5_pt").setDEF("hanim_l_metatarsal_phalanx_5_pt").setTranslation(new float[] {0f,1f,0f})
                            .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_phalanx_5_pt"))
                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_5").setName("l_metatarsophalangeal_5").setDEF("hanim_l_metatarsophalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat123().getArray()).setLlimit(new MFFloat124().getArray())
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32125().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f126().getArray()))
                                .addComments("from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_5").setName("l_tarsal_proximal_interphalangeal_5").setDEF("hanim_l_tarsal_proximal_interphalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat127().getArray()).setLlimit(new MFFloat128().getArray())
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32129().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f130().getArray()))
                                  .addComments("from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_l_tarsal_proximal_interphalangeal_5").setName("l_tarsal_distal_phalanx_5_tip").setDEF("hanim_l_tarsal_distal_phalanx_5_tip").setTranslation(new float[] {0f,1f,0f})
                                .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_5").setName("l_tarsal_distal_interphalangeal_5").setDEF("hanim_l_tarsal_distal_interphalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat131().getArray()).setLlimit(new MFFloat132().getArray()))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-0.095f,0.9171f,0.0029f}).setUlimit(new MFFloat133().getArray()).setLlimit(new MFFloat134().getArray())
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32135().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f136().getArray()))
                    .addComments("from r_hip to r_knee")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addChild(new HAnimSite("hanim_r_hip").setName("r_lateral_malleolus_pt").setDEF("hanim_r_lateral_malleolus_pt").setTranslation(new float[] {-0.1006f,0.0658f,-0.1075f})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_lateral_malleolus_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_r_hip").setName("r_medial_malleolus_pt").setDEF("hanim_r_medial_malleolus_pt").setTranslation(new float[] {-0.0591f,0.076f,-0.0928f})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_medial_malleolus_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_r_hip").setName("r_tibiale_pt").setDEF("hanim_r_tibiale_pt").setTranslation(new float[] {0f,1f,0f})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_tibiale_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimJoint("hanim_r_hip").setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-0.0867f,0.4913f,0.0318f}).setUlimit(new MFFloat137().getArray()).setLlimit(new MFFloat138().getArray())
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32139().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f140().getArray()))
                      .addComments("from r_knee to r_talocrural")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addChild(new HAnimSite("hanim_r_knee").setName("r_calcaneus_posterior_pt").setDEF("hanim_r_calcaneus_posterior_pt").setTranslation(new float[] {-0.0692f,0.0297f,-0.1221f})
                    .addChild(new TouchSensor().setDescription("HAnimSite r_calcaneus_posterior_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_r_knee").setName("r_sphyrion_pt").setDEF("hanim_r_sphyrion_pt").setTranslation(new float[] {-0.0603f,0.061f,-0.1002f})
                    .addChild(new TouchSensor().setDescription("HAnimSite r_sphyrion_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimJoint("hanim_r_knee").setName("r_talocrural").setDEF("hanim_r_talocrural").setCenter(new float[] {-0.0801f,0.0712f,-0.0766f}).setUlimit(new MFFloat141().getArray()).setLlimit(new MFFloat142().getArray())
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32143().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f144().getArray()))
                        .addComments("from r_talocrural to r_talocalcaneonavicular")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32145().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f146().getArray()))
                        .addComments("from r_talocrural to r_calcaneocuboid")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocalcaneonavicular").setDEF("hanim_r_talocalcaneonavicular").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat147().getArray()).setLlimit(new MFFloat148().getArray())
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32149().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f150().getArray()))
                          .addComments("from r_talocalcaneonavicular to r_cuneonavicular_1")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32151().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f152().getArray()))
                          .addComments("from r_talocalcaneonavicular to r_cuneonavicular_2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32153().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f154().getArray()))
                          .addComments("from r_talocalcaneonavicular to r_cuneonavicular_3")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_cuneonavicular_1").setDEF("hanim_r_cuneonavicular_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat155().getArray()).setLlimit(new MFFloat156().getArray())
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32157().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f158().getArray()))
                            .addComments("from r_cuneonavicular_1 to r_tarsometatarsal_1")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setName("r_tarsometatarsal_1").setDEF("hanim_r_tarsometatarsal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat159().getArray()).setLlimit(new MFFloat160().getArray())
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32161().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f162().getArray()))
                              .addComments("from r_tarsometatarsal_1 to r_metatarsophalangeal_1")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimSite("hanim_r_tarsometatarsal_1").setName("r_metatarsal_phalanx_1_pt").setDEF("hanim_r_metatarsal_phalanx_1_pt").setTranslation(new float[] {0f,1f,0f})
                            .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_phalanx_1_pt"))
                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setName("r_metatarsophalangeal_1").setDEF("hanim_r_metatarsophalangeal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat163().getArray()).setLlimit(new MFFloat164().getArray())
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32165().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f166().getArray()))
                                .addComments("from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimSite("hanim_r_metatarsophalangeal_1").setName("r_tarsal_distal_phalanx_1_tip").setDEF("hanim_r_tarsal_distal_phalanx_1_tip").setTranslation(new float[] {0f,1f,0f})
                              .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setName("r_tarsal_interphalangeal_1").setDEF("hanim_r_tarsal_interphalangeal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat167().getArray()).setLlimit(new MFFloat168().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_cuneonavicular_2").setDEF("hanim_r_cuneonavicular_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat169().getArray()).setLlimit(new MFFloat170().getArray())
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32171().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f172().getArray()))
                            .addComments("from r_cuneonavicular_2 to r_tarsometatarsal_2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setName("r_tarsometatarsal_2").setDEF("hanim_r_tarsometatarsal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat173().getArray()).setLlimit(new MFFloat174().getArray())
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32175().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f176().getArray()))
                              .addComments("from r_tarsometatarsal_2 to r_metatarsophalangeal_2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat177().getArray()).setLlimit(new MFFloat178().getArray())
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32179().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f180().getArray()))
                                .addComments("from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_tarsal_proximal_interphalangeal_2").setDEF("hanim_r_tarsal_proximal_interphalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat181().getArray()).setLlimit(new MFFloat182().getArray())
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32183().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f184().getArray()))
                                  .addComments("from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_distal_phalanx_2_tip").setDEF("hanim_r_tarsal_distal_phalanx_2_tip").setTranslation(new float[] {-0.0883f,0.0134f,0.1383f})
                                .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat185().getArray()).setLlimit(new MFFloat186().getArray()))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_cuneonavicular_3").setDEF("hanim_r_cuneonavicular_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat187().getArray()).setLlimit(new MFFloat188().getArray())
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32189().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f190().getArray()))
                            .addComments("from r_cuneonavicular_3 to r_tarsometatarsal_3")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setName("r_tarsometatarsal_3").setDEF("hanim_r_tarsometatarsal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat191().getArray()).setLlimit(new MFFloat192().getArray())
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32193().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f194().getArray()))
                              .addComments("from r_tarsometatarsal_3 to r_metatarsophalangeal_3")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setName("r_metatarsophalangeal_3").setDEF("hanim_r_metatarsophalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat195().getArray()).setLlimit(new MFFloat196().getArray())
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32197().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f198().getArray()))
                                .addComments("from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setName("r_tarsal_proximal_interphalangeal_3").setDEF("hanim_r_tarsal_proximal_interphalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat199().getArray()).setLlimit(new MFFloat200().getArray())
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32201().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f202().getArray()))
                                  .addComments("from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_distal_phalanx_3_tip").setDEF("hanim_r_tarsal_distal_phalanx_3_tip").setTranslation(new float[] {0f,1f,0f})
                                .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_distal_interphalangeal_3").setDEF("hanim_r_tarsal_distal_interphalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat203().getArray()).setLlimit(new MFFloat204().getArray())))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_calcaneocuboid").setDEF("hanim_r_calcaneocuboid").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat205().getArray()).setLlimit(new MFFloat206().getArray())
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32207().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f208().getArray()))
                          .addComments("from r_calcaneocuboid to r_transversetarsal")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setName("r_transversetarsal").setDEF("hanim_r_transversetarsal").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat209().getArray()).setLlimit(new MFFloat210().getArray())
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32211().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f212().getArray()))
                            .addComments("from r_transversetarsal to r_tarsometatarsal_4")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32213().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f214().getArray()))
                            .addComments("from r_transversetarsal to r_tarsometatarsal_5")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName("r_tarsometatarsal_4").setDEF("hanim_r_tarsometatarsal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat215().getArray()).setLlimit(new MFFloat216().getArray())
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32217().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f218().getArray()))
                              .addComments("from r_tarsometatarsal_4 to r_metatarsophalangeal_4")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setName("r_metatarsophalangeal_4").setDEF("hanim_r_metatarsophalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat219().getArray()).setLlimit(new MFFloat220().getArray())
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32221().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f222().getArray()))
                                .addComments("from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setName("r_tarsal_proximal_interphalangeal_4").setDEF("hanim_r_tarsal_proximal_interphalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat223().getArray()).setLlimit(new MFFloat224().getArray())
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32225().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f226().getArray()))
                                  .addComments("from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_distal_phalanx_4_tip").setDEF("hanim_r_tarsal_distal_phalanx_4_tip").setTranslation(new float[] {0f,1f,0f})
                                .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_distal_interphalangeal_4").setDEF("hanim_r_tarsal_distal_interphalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat227().getArray()).setLlimit(new MFFloat228().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName("r_tarsometatarsal_5").setDEF("hanim_r_tarsometatarsal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat229().getArray()).setLlimit(new MFFloat230().getArray())
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32231().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f232().getArray()))
                              .addComments("from r_tarsometatarsal_5 to r_metatarsophalangeal_5")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimSite("hanim_r_tarsometatarsal_5").setName("r_metatarsal_phalanx_5_pt").setDEF("hanim_r_metatarsal_phalanx_5_pt").setTranslation(new float[] {0f,1f,0f})
                            .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_phalanx_5_pt"))
                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setName("r_metatarsophalangeal_5").setDEF("hanim_r_metatarsophalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat233().getArray()).setLlimit(new MFFloat234().getArray())
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32235().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f236().getArray()))
                                .addComments("from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setName("r_tarsal_proximal_interphalangeal_5").setDEF("hanim_r_tarsal_proximal_interphalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat237().getArray()).setLlimit(new MFFloat238().getArray())
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32239().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f240().getArray()))
                                  .addComments("from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_r_tarsal_proximal_interphalangeal_5").setName("r_tarsal_distal_phalanx_5_tip").setDEF("hanim_r_tarsal_distal_phalanx_5_tip").setTranslation(new float[] {0f,1f,0f})
                                .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5").setName("r_tarsal_distal_interphalangeal_5").setDEF("hanim_r_tarsal_distal_interphalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat241().getArray()).setLlimit(new MFFloat242().getArray())))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0.0028f,1.0568f,-0.0776f}).setUlimit(new MFFloat243().getArray()).setLlimit(new MFFloat244().getArray())
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt32245().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f246().getArray()))
                  .addComments("from vl5 to vl4")
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
              .addChild(new HAnimJoint("hanim_vl5").setName("vl4").setDEF("hanim_vl4").setCenter(new float[] {0.0035f,1.0925f,-0.0787f}).setUlimit(new MFFloat247().getArray()).setLlimit(new MFFloat248().getArray())
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32249().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f250().getArray()))
                    .addComments("from vl4 to vl3")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addChild(new HAnimJoint("hanim_vl4").setName("vl3").setDEF("hanim_vl3").setCenter(new float[] {0.0041f,1.1276f,-0.0796f}).setUlimit(new MFFloat251().getArray()).setLlimit(new MFFloat252().getArray())
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32253().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f254().getArray()))
                      .addComments("from vl3 to vl2")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addChild(new HAnimSite("hanim_vl3").setName("l_rib10_pt").setDEF("hanim_l_rib10_pt").setTranslation(new float[] {0.0871f,1.1925f,0.0992f})
                    .addChild(new TouchSensor().setDescription("HAnimSite l_rib10_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_vl3").setName("r_rib10_pt").setDEF("hanim_r_rib10_pt").setTranslation(new float[] {-0.0711f,1.1941f,0.1016f})
                    .addChild(new TouchSensor().setDescription("HAnimSite r_rib10_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_vl3").setName("spine_2_middle_back_pt").setDEF("hanim_spine_2_middle_back_pt").setTranslation(new float[] {0f,1f,0f})
                    .addChild(new TouchSensor().setDescription("HAnimSite spine_2_middle_back_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimJoint("hanim_vl3").setName("vl2").setDEF("hanim_vl2").setCenter(new float[] {0.0045f,1.1546f,-0.08f}).setUlimit(new MFFloat255().getArray()).setLlimit(new MFFloat256().getArray())
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32257().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f258().getArray()))
                        .addComments("from vl2 to vl1")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimJoint("hanim_vl2").setName("vl1").setDEF("hanim_vl1").setCenter(new float[] {0.0048f,1.1912f,-0.0805f}).setUlimit(new MFFloat259().getArray()).setLlimit(new MFFloat260().getArray())
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32261().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f262().getArray()))
                          .addComments("from vl1 to vt12")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new HAnimJoint("hanim_vl1").setName("vt12").setDEF("hanim_vt12").setCenter(new float[] {0.0051f,1.2278f,-0.0808f}).setUlimit(new MFFloat263().getArray()).setLlimit(new MFFloat264().getArray())
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32265().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f266().getArray()))
                            .addComments("from vt12 to vt11")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint("hanim_vt12").setName("vt11").setDEF("hanim_vt11").setCenter(new float[] {0.0053f,1.2679f,-0.081f}).setUlimit(new MFFloat267().getArray()).setLlimit(new MFFloat268().getArray())
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32269().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f270().getArray()))
                              .addComments("from vt11 to vt10")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimSite("hanim_vt11").setName("substernale_pt").setDEF("hanim_substernale_pt").setTranslation(new float[] {0.0085f,1.2995f,0.1147f})
                            .addChild(new TouchSensor().setDescription("HAnimSite substernale_pt"))
                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                          .addChild(new HAnimJoint("hanim_vt11").setName("vt10").setDEF("hanim_vt10").setCenter(new float[] {0.0056f,1.2848f,-0.0822f}).setUlimit(new MFFloat271().getArray()).setLlimit(new MFFloat272().getArray())
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32273().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f274().getArray()))
                                .addComments("from vt10 to vt9")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimSite("hanim_vt10").setName("l_thelion_pt").setDEF("hanim_l_thelion_pt").setTranslation(new float[] {0.0918f,1.3382f,0.1192f})
                              .addChild(new TouchSensor().setDescription("HAnimSite l_thelion_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite("hanim_vt10").setName("r_thelion_pt").setDEF("hanim_r_thelion_pt").setTranslation(new float[] {-0.0736f,1.3385f,0.1217f})
                              .addChild(new TouchSensor().setDescription("HAnimSite r_thelion_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimJoint("hanim_vt10").setName("vt9").setDEF("hanim_vt9").setCenter(new float[] {0.0057f,1.3126f,-0.0838f}).setUlimit(new MFFloat275().getArray()).setLlimit(new MFFloat276().getArray())
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32277().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f278().getArray()))
                                  .addComments("from vt9 to vt8")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimJoint("hanim_vt9").setName("vt8").setDEF("hanim_vt8").setCenter(new float[] {0.0057f,1.3382f,-0.0845f}).setUlimit(new MFFloat279().getArray()).setLlimit(new MFFloat280().getArray())
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32281().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f282().getArray()))
                                    .addComments("from vt8 to vt7")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimJoint("hanim_vt8").setName("vt7").setDEF("hanim_vt7").setCenter(new float[] {0.0058f,1.3625f,-0.0833f}).setUlimit(new MFFloat283().getArray()).setLlimit(new MFFloat284().getArray())
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32285().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f286().getArray()))
                                      .addComments("from vt7 to vt6")
                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                  .addChild(new HAnimSite("hanim_vt7").setName("l_chest_midsagittal_plane_pt").setDEF("hanim_l_chest_midsagittal_plane_pt").setTranslation(new float[] {0f,1f,0f})
                                    .addChild(new TouchSensor().setDescription("HAnimSite l_chest_midsagittal_plane_pt"))
                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                  .addChild(new HAnimSite("hanim_vt7").setName("mesosternale_pt").setDEF("hanim_mesosternale_pt").setTranslation(new float[] {0f,1f,0f})
                                    .addChild(new TouchSensor().setDescription("HAnimSite mesosternale_pt"))
                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                  .addChild(new HAnimSite("hanim_vt7").setName("r_chest_midsagittal_plane_pt").setDEF("hanim_r_chest_midsagittal_plane_pt").setTranslation(new float[] {0f,1f,0f})
                                    .addChild(new TouchSensor().setDescription("HAnimSite r_chest_midsagittal_plane_pt"))
                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                  .addChild(new HAnimSite("hanim_vt7").setName("rear_center_midsagittal_plane_pt").setDEF("hanim_rear_center_midsagittal_plane_pt").setTranslation(new float[] {0f,1f,0f})
                                    .addChild(new TouchSensor().setDescription("HAnimSite rear_center_midsagittal_plane_pt"))
                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                  .addChild(new HAnimJoint("hanim_vt7").setName("vt6").setDEF("hanim_vt6").setCenter(new float[] {0.0059f,1.3866f,-0.08f}).setUlimit(new MFFloat287().getArray()).setLlimit(new MFFloat288().getArray())
                                    .addChild(new Shape()
                                      .setGeometry(new LineSet().setVertexCount(new MFInt32289().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f290().getArray()))
                                        .addComments("from vt6 to vt5")
                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                    .addChild(new HAnimSite("hanim_vt6").setName("spine_1_middle_back_pt").setDEF("hanim_spine_1_middle_back_pt").setTranslation(new float[] {0f,1f,0f})
                                      .addChild(new TouchSensor().setDescription("HAnimSite spine_1_middle_back_pt"))
                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                    .addChild(new HAnimJoint("hanim_vt6").setName("vt5").setDEF("hanim_vt5").setCenter(new float[] {0.006f,1.4102f,-0.0745f}).setUlimit(new MFFloat291().getArray()).setLlimit(new MFFloat292().getArray())
                                      .addChild(new Shape()
                                        .setGeometry(new LineSet().setVertexCount(new MFInt32293().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f294().getArray()))
                                          .addComments("from vt5 to vt4")
                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                      .addChild(new HAnimJoint("hanim_vt5").setName("vt4").setDEF("hanim_vt4").setCenter(new float[] {0.0061f,1.432f,-0.0675f}).setUlimit(new MFFloat295().getArray()).setLlimit(new MFFloat296().getArray())
                                        .addChild(new Shape()
                                          .setGeometry(new LineSet().setVertexCount(new MFInt32297().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f298().getArray()))
                                            .addComments("from vt4 to vt3")
                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                        .addChild(new HAnimJoint("hanim_vt4").setName("vt3").setDEF("hanim_vt3").setCenter(new float[] {0.0062f,1.4583f,-0.057f}).setUlimit(new MFFloat299().getArray()).setLlimit(new MFFloat300().getArray())
                                          .addChild(new Shape()
                                            .setGeometry(new LineSet().setVertexCount(new MFInt32301().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f302().getArray()))
                                              .addComments("from vt3 to vt2")
                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                          .addChild(new HAnimJoint("hanim_vt3").setName("vt2").setDEF("hanim_vt2").setCenter(new float[] {0.0063f,1.4761f,-0.0484f}).setUlimit(new MFFloat303().getArray()).setLlimit(new MFFloat304().getArray())
                                            .addChild(new Shape()
                                              .setGeometry(new LineSet().setVertexCount(new MFInt32305().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f306().getArray()))
                                                .addComments("from vt2 to vt1")
                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                            .addChild(new HAnimSite("hanim_vt2").setName("cervicale_pt").setDEF("hanim_cervicale_pt").setTranslation(new float[] {0.0064f,1.52f,-0.0815f})
                                              .addChild(new TouchSensor().setDescription("HAnimSite cervicale_pt"))
                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                            .addChild(new HAnimSite("hanim_vt2").setName("suprasternale_pt").setDEF("hanim_suprasternale_pt").setTranslation(new float[] {0.0084f,1.4714f,0.0551f})
                                              .addChild(new TouchSensor().setDescription("HAnimSite suprasternale_pt"))
                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                            .addChild(new HAnimJoint("hanim_vt2").setName("vt1").setDEF("hanim_vt1").setCenter(new float[] {0.0065f,1.4951f,-0.0387f}).setUlimit(new MFFloat307().getArray()).setLlimit(new MFFloat308().getArray())
                                              .addChild(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32309().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f310().getArray()))
                                                  .addComments("from vt1 to vc7")
                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                              .addChild(new HAnimSite("hanim_vt1").setName("l_neck_base_pt").setDEF("hanim_l_neck_base_pt").setTranslation(new float[] {0.0646f,1.5141f,-0.038f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite l_neck_base_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new HAnimSite("hanim_vt1").setName("r_neck_base_pt").setDEF("hanim_r_neck_base_pt").setTranslation(new float[] {-0.0419f,1.5149f,-0.022f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite r_neck_base_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32311().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f312().getArray()))
                                                  .addComments("from vt1 to l_sternoclavicular")
                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                              .addChild(new HAnimSite("hanim_vt1").setName("l_acromion_pt").setDEF("hanim_l_acromion_pt").setTranslation(new float[] {0.2032f,1.476f,-0.049f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite l_acromion_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new HAnimSite("hanim_vt1").setName("l_axilla_distal_pt").setDEF("hanim_l_axilla_distal_pt").setTranslation(new float[] {0.1706f,1.4072f,-0.0875f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_distal_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new HAnimSite("hanim_vt1").setName("l_axilla_posterior_folds_pt").setDEF("hanim_l_axilla_posterior_folds_pt").setTranslation(new float[] {0f,1f,0f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_posterior_folds_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new HAnimSite("hanim_vt1").setName("l_axilla_proximal_pt").setDEF("hanim_l_axilla_proximal_pt").setTranslation(new float[] {0.1777f,1.4065f,-0.0075f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_proximal_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new HAnimSite("hanim_vt1").setName("l_clavicale_pt").setDEF("hanim_l_clavicale_pt").setTranslation(new float[] {0.0271f,1.4943f,0.0394f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite l_clavicale_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32313().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f314().getArray()))
                                                  .addComments("from vt1 to r_sternoclavicular")
                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                              .addChild(new HAnimSite("hanim_vt1").setName("r_acromion_pt").setDEF("hanim_r_acromion_pt").setTranslation(new float[] {-0.1905f,1.4791f,-0.0431f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite r_acromion_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new HAnimSite("hanim_vt1").setName("r_axilla_distal_pt").setDEF("hanim_r_axilla_distal_pt").setTranslation(new float[] {-0.1603f,1.4098f,-0.0826f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_distal_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new HAnimSite("hanim_vt1").setName("r_axilla_posterior_folds_pt").setDEF("hanim_r_axilla_posterior_folds_pt").setTranslation(new float[] {0f,1f,0f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_posterior_folds_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new HAnimSite("hanim_vt1").setName("r_axilla_proximal_pt").setDEF("hanim_r_axilla_proximal_pt").setTranslation(new float[] {-0.1626f,1.4072f,-0.0031f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_proximal_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new HAnimSite("hanim_vt1").setName("r_clavicale_pt").setDEF("hanim_r_clavicale_pt").setTranslation(new float[] {-0.0115f,1.4943f,0.04f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite r_clavicale_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new HAnimJoint("hanim_vt1").setName("vc7").setDEF("hanim_vc7").setCenter(new float[] {0.0066f,1.5132f,-0.0301f}).setUlimit(new MFFloat315().getArray()).setLlimit(new MFFloat316().getArray())
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32317().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f318().getArray()))
                                                    .addComments("from vc7 to vc6")
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addChild(new HAnimJoint("hanim_vc7").setName("vc6").setDEF("hanim_vc6").setCenter(new float[] {0.0066f,1.5357f,-0.0143f}).setUlimit(new MFFloat319().getArray()).setLlimit(new MFFloat320().getArray())
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32321().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f322().getArray()))
                                                      .addComments("from vc6 to vc5")
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addChild(new HAnimJoint("hanim_vc6").setName("vc5").setDEF("hanim_vc5").setCenter(new float[] {0.0066f,1.552f,-0.0082f}).setUlimit(new MFFloat323().getArray()).setLlimit(new MFFloat324().getArray())
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32325().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f326().getArray()))
                                                        .addComments("from vc5 to vc4")
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                    .addChild(new HAnimJoint("hanim_vc5").setName("vc4").setDEF("hanim_vc4").setCenter(new float[] {0.0066f,1.5662f,-0.0084f}).setUlimit(new MFFloat327().getArray()).setLlimit(new MFFloat328().getArray())
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32329().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f330().getArray()))
                                                          .addComments("from vc4 to vc3")
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addChild(new HAnimJoint("hanim_vc4").setName("vc3").setDEF("hanim_vc3").setCenter(new float[] {0.0066f,1.58f,-0.0103f}).setUlimit(new MFFloat331().getArray()).setLlimit(new MFFloat332().getArray())
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32333().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f334().getArray()))
                                                            .addComments("from vc3 to vc2")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new HAnimSite("hanim_vc3").setName("adams_apple_pt").setDEF("hanim_adams_apple_pt").setTranslation(new float[] {0f,1f,0f})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite adams_apple_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimJoint("hanim_vc3").setName("vc2").setDEF("hanim_vc2").setCenter(new float[] {0.0066f,1.5928f,-0.0103f}).setUlimit(new MFFloat335().getArray()).setLlimit(new MFFloat336().getArray())
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32337().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f338().getArray()))
                                                              .addComments("from vc2 to vc1")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimJoint("hanim_vc2").setName("vc1").setDEF("hanim_vc1").setCenter(new float[] {0.0066f,1.6144f,-0.0034f}).setUlimit(new MFFloat339().getArray()).setLlimit(new MFFloat340().getArray())
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32341().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f342().getArray()))
                                                                .addComments("from vc1 to skullbase")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimSite("hanim_vc1").setName("glabella_pt").setDEF("hanim_glabella_pt").setTranslation(new float[] {0f,1f,0f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite glabella_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addChild(new HAnimSite("hanim_vc1").setName("l_ectocanthus_pt").setDEF("hanim_l_ectocanthus_pt").setTranslation(new float[] {0f,1f,0f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite l_ectocanthus_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addChild(new HAnimSite("hanim_vc1").setName("l_infraorbitale_pt").setDEF("hanim_l_infraorbitale_pt").setTranslation(new float[] {0.0341f,1.6171f,0.0752f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite l_infraorbitale_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addChild(new HAnimSite("hanim_vc1").setName("l_tragion_pt").setDEF("hanim_l_tragion_pt").setTranslation(new float[] {0.0739f,1.6348f,0.0282f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite l_tragion_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addChild(new HAnimSite("hanim_vc1").setName("nuchale_pt").setDEF("hanim_nuchale_pt").setTranslation(new float[] {0.0039f,1.5972f,-0.0796f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite nuchale_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addChild(new HAnimSite("hanim_vc1").setName("opisthocranion_pt").setDEF("hanim_opisthocranion_pt").setTranslation(new float[] {0f,1f,0f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite opisthocranion_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addChild(new HAnimSite("hanim_vc1").setName("r_ectocanthus_pt").setDEF("hanim_r_ectocanthus_pt").setTranslation(new float[] {0f,1f,0f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite r_ectocanthus_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addChild(new HAnimSite("hanim_vc1").setName("r_infraorbitale_pt").setDEF("hanim_r_infraorbitale_pt").setTranslation(new float[] {-0.0237f,1.6171f,0.0752f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite r_infraorbitale_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addChild(new HAnimSite("hanim_vc1").setName("r_tragion_pt").setDEF("hanim_r_tragion_pt").setTranslation(new float[] {-0.0646f,1.6347f,0.0302f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite r_tragion_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addChild(new HAnimSite("hanim_vc1").setName("sellion_pt").setDEF("hanim_sellion_pt").setTranslation(new float[] {0.0058f,1.6316f,0.0852f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite sellion_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addChild(new HAnimSite("hanim_vc1").setName("skull_vertex_pt").setDEF("hanim_skull_vertex_pt").setTranslation(new float[] {0.005f,1.7504f,0.0055f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite skull_vertex_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addChild(new HAnimJoint("hanim_vc1").setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0.0044f,1.6209f,0.0236f}).setUlimit(new MFFloat343().getArray()).setLlimit(new MFFloat344().getArray())
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32345().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f346().getArray()))
                                                                  .addComments("from skullbase to l_eyelid_joint")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32347().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f348().getArray()))
                                                                  .addComments("from skullbase to r_eyelid_joint")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32349().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f350().getArray()))
                                                                  .addComments("from skullbase to l_eyeball_joint")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32351().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f352().getArray()))
                                                                  .addComments("from skullbase to r_eyeball_joint")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32353().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f354().getArray()))
                                                                  .addComments("from skullbase to l_eyebrow_joint")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32355().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f356().getArray()))
                                                                  .addComments("from skullbase to r_eyebrow_joint")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32357().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f358().getArray()))
                                                                  .addComments("from skullbase to temporomandibular")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimSite("hanim_skullbase").setName("l_gonion_pt").setDEF("hanim_l_gonion_pt").setTranslation(new float[] {0.0631f,1.553f,0.033f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite l_gonion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_skullbase").setName("menton_pt").setDEF("hanim_menton_pt").setTranslation(new float[] {0f,1f,0f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite menton_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_skullbase").setName("r_gonion_pt").setDEF("hanim_r_gonion_pt").setTranslation(new float[] {-0.052f,1.5529f,0.0347f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite r_gonion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_skullbase").setName("supramenton_pt").setDEF("hanim_supramenton_pt").setTranslation(new float[] {0.0061f,1.541f,0.0805f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite supramenton_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("l_eyelid_joint").setDEF("hanim_l_eyelid_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat359().getArray()).setLlimit(new MFFloat360().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("r_eyelid_joint").setDEF("hanim_r_eyelid_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat361().getArray()).setLlimit(new MFFloat362().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("l_eyeball_joint").setDEF("hanim_l_eyeball_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat363().getArray()).setLlimit(new MFFloat364().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("r_eyeball_joint").setDEF("hanim_r_eyeball_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat365().getArray()).setLlimit(new MFFloat366().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("l_eyebrow_joint").setDEF("hanim_l_eyebrow_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat367().getArray()).setLlimit(new MFFloat368().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("r_eyebrow_joint").setDEF("hanim_r_eyebrow_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat369().getArray()).setLlimit(new MFFloat370().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("temporomandibular").setDEF("hanim_temporomandibular").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat371().getArray()).setLlimit(new MFFloat372().getArray()))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName("l_sternoclavicular").setDEF("hanim_l_sternoclavicular").setCenter(new float[] {0.082f,1.4488f,-0.0353f}).setUlimit(new MFFloat373().getArray()).setLlimit(new MFFloat374().getArray())
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32375().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f376().getArray()))
                                                    .addComments("from l_sternoclavicular to l_acromioclavicular")
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addChild(new HAnimJoint("hanim_l_sternoclavicular").setName("l_acromioclavicular").setDEF("hanim_l_acromioclavicular").setCenter(new float[] {0.0962f,1.4269f,-0.0424f}).setUlimit(new MFFloat377().getArray()).setLlimit(new MFFloat378().getArray())
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32379().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f380().getArray()))
                                                      .addComments("from l_acromioclavicular to l_shoulder")
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addChild(new HAnimSite("hanim_l_acromioclavicular").setName("l_bideltoid_pt").setDEF("hanim_l_bideltoid_pt").setTranslation(new float[] {0f,1f,0f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_bideltoid_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_l_acromioclavicular").setName("l_humeral_lateral_epicondyles_pt").setDEF("hanim_l_humeral_lateral_epicondyles_pt").setTranslation(new float[] {0.228f,1.1482f,-0.11f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_lateral_epicondyles_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimJoint("hanim_l_acromioclavicular").setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {0.2029f,1.4376f,-0.0387f}).setUlimit(new MFFloat381().getArray()).setLlimit(new MFFloat382().getArray())
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32383().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f384().getArray()))
                                                        .addComments("from l_shoulder to l_elbow")
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                    .addChild(new HAnimSite("hanim_l_shoulder").setName("l_humeral_medial_epicondyles_pt").setDEF("hanim_l_humeral_medial_epicondyles_pt").setTranslation(new float[] {0.1735f,1.1272f,-0.1113f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_medial_epicondyles_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimSite("hanim_l_shoulder").setName("l_olecranon_pt").setDEF("hanim_l_olecranon_pt").setTranslation(new float[] {-0.1962f,1.1375f,-0.1123f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite l_olecranon_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimSite("hanim_l_shoulder").setName("l_radial_styloid_pt").setDEF("hanim_l_radial_styloid_pt").setTranslation(new float[] {0.1901f,0.8645f,-0.0415f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite l_radial_styloid_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimSite("hanim_l_shoulder").setName("l_radiale_pt").setDEF("hanim_l_radiale_pt").setTranslation(new float[] {0.2182f,1.1212f,-0.1167f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite l_radiale_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {0.2014f,1.1357f,-0.0682f}).setUlimit(new MFFloat385().getArray()).setLlimit(new MFFloat386().getArray())
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32387().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f388().getArray()))
                                                          .addComments("from l_elbow to l_radiocarpal")
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addChild(new HAnimSite("hanim_l_elbow").setName("l_ulnar_styloid_pt").setDEF("hanim_l_ulnar_styloid_pt").setTranslation(new float[] {-0.2142f,0.8529f,-0.0648f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_ulnar_styloid_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimJoint("hanim_l_elbow").setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setCenter(new float[] {0.1984f,0.8663f,-0.0583f}).setUlimit(new MFFloat389().getArray()).setLlimit(new MFFloat390().getArray())
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32391().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f392().getArray()))
                                                            .addComments("from l_radiocarpal to l_midcarpal_1")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32393().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f394().getArray()))
                                                            .addComments("from l_radiocarpal to l_midcarpal_2")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32395().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f396().getArray()))
                                                            .addComments("from l_radiocarpal to l_midcarpal_3")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32397().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f398().getArray()))
                                                            .addComments("from l_radiocarpal to l_midcarpal_4_5")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_1").setDEF("hanim_l_midcarpal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat399().getArray()).setLlimit(new MFFloat400().getArray())
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32401().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f402().getArray()))
                                                              .addComments("from l_midcarpal_1 to l_carpometacarpal_1")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_1").setName("l_carpometacarpal_1").setDEF("hanim_l_carpometacarpal_1").setCenter(new float[] {0.1924f,0.8472f,-0.0534f}).setUlimit(new MFFloat403().getArray()).setLlimit(new MFFloat404().getArray())
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32405().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f406().getArray()))
                                                                .addComments("from l_carpometacarpal_1 to l_metacarpophalangeal_1")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setName("l_metacarpophalangeal_1").setDEF("hanim_l_metacarpophalangeal_1").setCenter(new float[] {0.1951f,0.8226f,0.0246f}).setUlimit(new MFFloat407().getArray()).setLlimit(new MFFloat408().getArray())
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32409().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f410().getArray()))
                                                                  .addComments("from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimSite("hanim_l_metacarpophalangeal_1").setName("l_carpal_distal_phalanx_1_tip").setDEF("hanim_l_carpal_distal_phalanx_1_tip").setTranslation(new float[] {0f,1f,0f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_1_tip"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setName("l_carpal_interphalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setCenter(new float[] {0.1955f,0.8159f,0.0464f}).setUlimit(new MFFloat411().getArray()).setLlimit(new MFFloat412().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_2").setDEF("hanim_l_midcarpal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat413().getArray()).setLlimit(new MFFloat414().getArray())
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32415().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f416().getArray()))
                                                              .addComments("from l_midcarpal_2 to l_carpometacarpal_2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimSite("hanim_l_midcarpal_2").setName("l_metacarpal_phalanx_2_pt").setDEF("hanim_l_metacarpal_phalanx_2_pt").setTranslation(new float[] {0.2009f,0.8139f,-0.0237f})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_phalanx_2_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_2").setName("l_carpometacarpal_2").setDEF("hanim_l_carpometacarpal_2").setCenter(new float[] {0.1983f,0.8024f,-0.028f}).setUlimit(new MFFloat417().getArray()).setLlimit(new MFFloat418().getArray())
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32419().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f420().getArray()))
                                                                .addComments("from l_carpometacarpal_2 to l_metacarpophalangeal_2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setName("l_metacarpophalangeal_2").setDEF("hanim_l_metacarpophalangeal_2").setCenter(new float[] {0.1983f,0.7815f,-0.028f}).setUlimit(new MFFloat421().getArray()).setLlimit(new MFFloat422().getArray())
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32423().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f424().getArray()))
                                                                  .addComments("from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setCenter(new float[] {0.2017f,0.7363f,-0.0248f}).setUlimit(new MFFloat425().getArray()).setLlimit(new MFFloat426().getArray())
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32427().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f428().getArray()))
                                                                    .addComments("from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new HAnimSite("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_distal_phalanx_2_tip").setDEF("hanim_l_carpal_distal_phalanx_2_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_2_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_l_carpal_proximal_interphalangeal_2").setName("l_dactylion_pt").setDEF("hanim_l_dactylion_pt").setTranslation(new float[] {0.2056f,0.6743f,-0.0482f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_dactylion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setCenter(new float[] {0.2028f,0.7139f,-0.0236f}).setUlimit(new MFFloat429().getArray()).setLlimit(new MFFloat430().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_3").setDEF("hanim_l_midcarpal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat431().getArray()).setLlimit(new MFFloat432().getArray())
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32433().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f434().getArray()))
                                                              .addComments("from l_midcarpal_3 to l_carpometacarpal_3")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimSite("hanim_l_midcarpal_3").setName("l_metacarpal_phalanx_3_pt").setDEF("hanim_l_metacarpal_phalanx_3_pt").setTranslation(new float[] {0f,1f,0f})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_phalanx_3_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_3").setName("l_carpometacarpal_3").setDEF("hanim_l_carpometacarpal_3").setCenter(new float[] {0.1987f,0.8029f,-0.053f}).setUlimit(new MFFloat435().getArray()).setLlimit(new MFFloat436().getArray())
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32437().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f438().getArray()))
                                                                .addComments("from l_carpometacarpal_3 to l_metacarpophalangeal_3")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setName("l_metacarpophalangeal_3").setDEF("hanim_l_metacarpophalangeal_3").setCenter(new float[] {0.1987f,0.7818f,-0.053f}).setUlimit(new MFFloat439().getArray()).setLlimit(new MFFloat440().getArray())
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32441().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f442().getArray()))
                                                                  .addComments("from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setCenter(new float[] {0.2013f,0.7273f,-0.0503f}).setUlimit(new MFFloat443().getArray()).setLlimit(new MFFloat444().getArray())
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32445().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f446().getArray()))
                                                                    .addComments("from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new HAnimSite("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_distal_phalanx_3_tip").setDEF("hanim_l_carpal_distal_phalanx_3_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_3_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setCenter(new float[] {0.2026f,0.7011f,-0.0494f}).setUlimit(new MFFloat447().getArray()).setLlimit(new MFFloat448().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_4_5").setDEF("hanim_l_midcarpal_4_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat449().getArray()).setLlimit(new MFFloat450().getArray())
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32451().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f452().getArray()))
                                                              .addComments("from l_midcarpal_4_5 to l_carpometacarpal_4")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32453().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f454().getArray()))
                                                              .addComments("from l_midcarpal_4_5 to l_carpometacarpal_5")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimSite("hanim_l_midcarpal_4_5").setName("l_metacarpal_phalanx_5_pt").setDEF("hanim_l_metacarpal_phalanx_5_pt").setTranslation(new float[] {0.1929f,0.786f,-0.1122f})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_phalanx_5_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName("l_carpometacarpal_4").setDEF("hanim_l_carpometacarpal_4").setCenter(new float[] {0.1956f,0.8019f,-0.0794f}).setUlimit(new MFFloat455().getArray()).setLlimit(new MFFloat456().getArray())
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32457().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f458().getArray()))
                                                                .addComments("from l_carpometacarpal_4 to l_metacarpophalangeal_4")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setName("l_metacarpophalangeal_4").setDEF("hanim_l_metacarpophalangeal_4").setCenter(new float[] {0.1956f,0.7815f,-0.0794f}).setUlimit(new MFFloat459().getArray()).setLlimit(new MFFloat460().getArray())
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32461().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f462().getArray()))
                                                                  .addComments("from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setCenter(new float[] {0.1973f,0.7287f,-0.0777f}).setUlimit(new MFFloat463().getArray()).setLlimit(new MFFloat464().getArray())
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32465().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f466().getArray()))
                                                                    .addComments("from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new HAnimSite("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_distal_phalanx_4_tip").setDEF("hanim_l_carpal_distal_phalanx_4_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_4_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setCenter(new float[] {0.1983f,0.7045f,-0.0767f}).setUlimit(new MFFloat467().getArray()).setLlimit(new MFFloat468().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName("l_carpometacarpal_5").setDEF("hanim_l_carpometacarpal_5").setCenter(new float[] {0.1925f,0.8066f,-0.1036f}).setUlimit(new MFFloat469().getArray()).setLlimit(new MFFloat470().getArray())
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32471().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f472().getArray()))
                                                                .addComments("from l_carpometacarpal_5 to l_metacarpophalangeal_5")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setName("l_metacarpophalangeal_5").setDEF("hanim_l_metacarpophalangeal_5").setCenter(new float[] {0.1925f,0.7866f,-0.1036f}).setUlimit(new MFFloat473().getArray()).setLlimit(new MFFloat474().getArray())
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32475().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f476().getArray()))
                                                                  .addComments("from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_5").setCenter(new float[] {0.1938f,0.7452f,-0.1024f}).setUlimit(new MFFloat477().getArray()).setLlimit(new MFFloat478().getArray())
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32479().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f480().getArray()))
                                                                    .addComments("from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new HAnimSite("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_distal_phalanx_5_tip").setDEF("hanim_l_carpal_distal_phalanx_5_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_5_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setDEF("hanim_l_carpal_distal_interphalangeal_5").setCenter(new float[] {0.1948f,0.7277f,-0.1017f}).setUlimit(new MFFloat481().getArray()).setLlimit(new MFFloat482().getArray())))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName("r_sternoclavicular").setDEF("hanim_r_sternoclavicular").setCenter(new float[] {-0.0694f,1.46f,-0.033f}).setUlimit(new MFFloat483().getArray()).setLlimit(new MFFloat484().getArray())
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32485().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f486().getArray()))
                                                    .addComments("from r_sternoclavicular to r_acromioclavicular")
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addChild(new HAnimJoint("hanim_r_sternoclavicular").setName("r_acromioclavicular").setDEF("hanim_r_acromioclavicular").setCenter(new float[] {-0.0836f,1.4281f,-0.0401f}).setUlimit(new MFFloat487().getArray()).setLlimit(new MFFloat488().getArray())
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32489().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f490().getArray()))
                                                      .addComments("from r_acromioclavicular to r_shoulder")
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addChild(new HAnimSite("hanim_r_acromioclavicular").setName("r_bideltoid_pt").setDEF("hanim_r_bideltoid_pt").setTranslation(new float[] {0f,1f,0f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_bideltoid_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_r_acromioclavicular").setName("r_humeral_lateral_epicondyles_pt").setDEF("hanim_r_humeral_lateral_epicondyles_pt").setTranslation(new float[] {-0.2224f,1.1517f,-0.1033f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_lateral_epicondyles_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimJoint("hanim_r_acromioclavicular").setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-0.1907f,1.4407f,-0.0325f}).setUlimit(new MFFloat491().getArray()).setLlimit(new MFFloat492().getArray())
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32493().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f494().getArray()))
                                                        .addComments("from r_shoulder to r_elbow")
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                    .addChild(new HAnimSite("hanim_r_shoulder").setName("r_humeral_medial_epicondyles_pt").setDEF("hanim_r_humeral_medial_epicondyles_pt").setTranslation(new float[] {-0.168f,1.1298f,-0.1062f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_medial_epicondyles_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimSite("hanim_r_shoulder").setName("r_olecranon_pt").setDEF("hanim_r_olecranon_pt").setTranslation(new float[] {-0.1907f,1.1405f,-0.1065f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite r_olecranon_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimSite("hanim_r_shoulder").setName("r_radial_styloid_pt").setDEF("hanim_r_radial_styloid_pt").setTranslation(new float[] {-0.1884f,0.8676f,-0.036f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite r_radial_styloid_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimSite("hanim_r_shoulder").setName("r_radiale_pt").setDEF("hanim_r_radiale_pt").setTranslation(new float[] {-0.213f,1.1305f,-0.1091f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite r_radiale_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-0.1949f,1.1388f,-0.062f}).setUlimit(new MFFloat495().getArray()).setLlimit(new MFFloat496().getArray())
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32497().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f498().getArray()))
                                                          .addComments("from r_elbow to r_radiocarpal")
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addChild(new HAnimSite("hanim_r_elbow").setName("r_ulnar_styloid_pt").setDEF("hanim_r_ulnar_styloid_pt").setTranslation(new float[] {-0.2117f,0.8562f,-0.0584f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_ulnar_styloid_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimJoint("hanim_r_elbow").setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setCenter(new float[] {-0.1959f,0.8694f,-0.0521f}).setUlimit(new MFFloat499().getArray()).setLlimit(new MFFloat500().getArray())
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32501().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f502().getArray()))
                                                            .addComments("from r_radiocarpal to r_midcarpal_1")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32503().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f504().getArray()))
                                                            .addComments("from r_radiocarpal to r_midcarpal_2")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32505().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f506().getArray()))
                                                            .addComments("from r_radiocarpal to r_midcarpal_3")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32507().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f508().getArray()))
                                                            .addComments("from r_radiocarpal to r_midcarpal_4_5")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_1").setDEF("hanim_r_midcarpal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat509().getArray()).setLlimit(new MFFloat510().getArray())
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32511().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f512().getArray()))
                                                              .addComments("from r_midcarpal_1 to r_carpometacarpal_1")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_1").setName("r_carpometacarpal_1").setDEF("hanim_r_carpometacarpal_1").setCenter(new float[] {-0.1899f,0.8502f,-0.0473f}).setUlimit(new MFFloat513().getArray()).setLlimit(new MFFloat514().getArray())
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32515().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f516().getArray()))
                                                                .addComments("from r_carpometacarpal_1 to r_metacarpophalangeal_1")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setName("r_metacarpophalangeal_1").setDEF("hanim_r_metacarpophalangeal_1").setCenter(new float[] {-0.1874f,0.8256f,0.0306f}).setUlimit(new MFFloat517().getArray()).setLlimit(new MFFloat518().getArray())
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32519().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f520().getArray()))
                                                                  .addComments("from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimSite("hanim_r_metacarpophalangeal_1").setName("r_carpal_distal_phalanx_1_tip").setDEF("hanim_r_carpal_distal_phalanx_1_tip").setTranslation(new float[] {0f,1f,0f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_1_tip"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setName("r_carpal_interphalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setCenter(new float[] {-0.1864f,0.819f,0.0506f}).setUlimit(new MFFloat521().getArray()).setLlimit(new MFFloat522().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_2").setDEF("hanim_r_midcarpal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat523().getArray()).setLlimit(new MFFloat524().getArray())
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32525().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f526().getArray()))
                                                              .addComments("from r_midcarpal_2 to r_carpometacarpal_2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimSite("hanim_r_midcarpal_2").setName("r_metacarpal_phalanx_2_pt").setDEF("hanim_r_metacarpal_phalanx_2_pt").setTranslation(new float[] {-0.1977f,0.8169f,-0.0177f})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_phalanx_2_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_2").setName("r_carpometacarpal_2").setDEF("hanim_r_carpometacarpal_2").setCenter(new float[] {-0.1961f,0.8055f,-0.0218f}).setUlimit(new MFFloat527().getArray()).setLlimit(new MFFloat528().getArray())
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32529().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f530().getArray()))
                                                                .addComments("from r_carpometacarpal_2 to r_metacarpophalangeal_2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setName("r_metacarpophalangeal_2").setDEF("hanim_r_metacarpophalangeal_2").setCenter(new float[] {-0.1961f,0.7846f,-0.0218f}).setUlimit(new MFFloat531().getArray()).setLlimit(new MFFloat532().getArray())
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32533().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f534().getArray()))
                                                                  .addComments("from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setName("r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-0.1954f,0.7393f,-0.0185f}).setUlimit(new MFFloat535().getArray()).setLlimit(new MFFloat536().getArray())
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32537().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f538().getArray()))
                                                                    .addComments("from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new HAnimSite("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_distal_phalanx_2_tip").setDEF("hanim_r_carpal_distal_phalanx_2_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_2_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_r_carpal_proximal_interphalangeal_2").setName("r_dactylion_pt").setDEF("hanim_r_dactylion_pt").setTranslation(new float[] {-0.1941f,0.6772f,-0.0423f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_dactylion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setCenter(new float[] {-0.1945f,0.7169f,-0.0173f}).setUlimit(new MFFloat539().getArray()).setLlimit(new MFFloat540().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_3").setDEF("hanim_r_midcarpal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat541().getArray()).setLlimit(new MFFloat542().getArray())
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32543().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f544().getArray()))
                                                              .addComments("from r_midcarpal_3 to r_carpometacarpal_3")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimSite("hanim_r_midcarpal_3").setName("r_metacarpal_phalanx_3_pt").setDEF("hanim_r_metacarpal_phalanx_3_pt").setTranslation(new float[] {0f,1f,0f})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_phalanx_3_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_3").setName("r_carpometacarpal_3").setDEF("hanim_r_carpometacarpal_3").setCenter(new float[] {-0.1972f,0.806f,-0.0468f}).setUlimit(new MFFloat545().getArray()).setLlimit(new MFFloat546().getArray())
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32547().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f548().getArray()))
                                                                .addComments("from r_carpometacarpal_3 to r_metacarpophalangeal_3")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setName("r_metacarpophalangeal_3").setDEF("hanim_r_metacarpophalangeal_3").setCenter(new float[] {-0.1972f,0.7849f,-0.0468f}).setUlimit(new MFFloat549().getArray()).setLlimit(new MFFloat550().getArray())
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32551().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f552().getArray()))
                                                                  .addComments("from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setName("r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-0.195f,0.7304f,-0.0441f}).setUlimit(new MFFloat553().getArray()).setLlimit(new MFFloat554().getArray())
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32555().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f556().getArray()))
                                                                    .addComments("from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new HAnimSite("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_distal_phalanx_3_tip").setDEF("hanim_r_carpal_distal_phalanx_3_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_3_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setCenter(new float[] {-0.1939f,0.7042f,-0.0432f}).setUlimit(new MFFloat557().getArray()).setLlimit(new MFFloat558().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_4_5").setDEF("hanim_r_midcarpal_4_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat559().getArray()).setLlimit(new MFFloat560().getArray())
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32561().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f562().getArray()))
                                                              .addComments("from r_midcarpal_4_5 to r_carpometacarpal_4")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32563().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f564().getArray()))
                                                              .addComments("from r_midcarpal_4_5 to r_carpometacarpal_5")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimSite("hanim_r_midcarpal_4_5").setName("r_metacarpal_phalanx_5_pt").setDEF("hanim_r_metacarpal_phalanx_5_pt").setTranslation(new float[] {-0.1929f,0.789f,-0.1064f})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_phalanx_5_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName("r_carpometacarpal_4").setDEF("hanim_r_carpometacarpal_4").setCenter(new float[] {-0.1951f,0.8049f,-0.0732f}).setUlimit(new MFFloat565().getArray()).setLlimit(new MFFloat566().getArray())
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32567().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f568().getArray()))
                                                                .addComments("from r_carpometacarpal_4 to r_metacarpophalangeal_4")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setName("r_metacarpophalangeal_4").setDEF("hanim_r_metacarpophalangeal_4").setCenter(new float[] {-0.1951f,0.7845f,-0.0732f}).setUlimit(new MFFloat569().getArray()).setLlimit(new MFFloat570().getArray())
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32571().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f572().getArray()))
                                                                  .addComments("from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setName("r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setCenter(new float[] {-0.192f,0.7318f,-0.0716f}).setUlimit(new MFFloat573().getArray()).setLlimit(new MFFloat574().getArray())
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32575().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f576().getArray()))
                                                                    .addComments("from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new HAnimSite("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_distal_phalanx_4_tip").setDEF("hanim_r_carpal_distal_phalanx_4_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_4_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setCenter(new float[] {-0.1908f,0.7077f,-0.0706f}).setUlimit(new MFFloat577().getArray()).setLlimit(new MFFloat578().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName("r_carpometacarpal_5").setDEF("hanim_r_carpometacarpal_5").setCenter(new float[] {-0.1926f,0.8096f,-0.0975f}).setUlimit(new MFFloat579().getArray()).setLlimit(new MFFloat580().getArray())
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32581().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f582().getArray()))
                                                                .addComments("from r_carpometacarpal_5 to r_metacarpophalangeal_5")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setName("r_metacarpophalangeal_5").setDEF("hanim_r_metacarpophalangeal_5").setCenter(new float[] {-0.1926f,0.7896f,-0.0975f}).setUlimit(new MFFloat583().getArray()).setLlimit(new MFFloat584().getArray())
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32585().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f586().getArray()))
                                                                  .addComments("from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setName("r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_5").setCenter(new float[] {-0.1902f,0.7483f,-0.0963f}).setUlimit(new MFFloat587().getArray()).setLlimit(new MFFloat588().getArray())
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32589().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f590().getArray()))
                                                                    .addComments("from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new HAnimSite("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_distal_phalanx_5_tip").setDEF("hanim_r_carpal_distal_phalanx_5_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_5_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5").setDEF("hanim_r_carpal_distal_interphalangeal_5").setCenter(new float[] {-0.1908f,0.754f,-0.096f}).setUlimit(new MFFloat591().getArray()).setLlimit(new MFFloat592().getArray())))))))))))))))))))))))))))))
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
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_cuneonavicular_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsometatarsal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_calcaneocuboid"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_transversetarsal"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsometatarsal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsometatarsal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metatarsophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_tarsal_distal_interphalangeal_5"))
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
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_cuneonavicular_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsometatarsal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_calcaneocuboid"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_transversetarsal"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsometatarsal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsometatarsal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metatarsophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_tarsal_distal_interphalangeal_5"))
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
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_midcarpal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpometacarpal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_midcarpal_4_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpometacarpal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpometacarpal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_l_carpal_distal_interphalangeal_5"))
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
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_midcarpal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpometacarpal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_midcarpal_4_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpometacarpal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpometacarpal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE("hanim_r_carpal_distal_interphalangeal_5"))
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
          .addSites(new HAnimSite("hanim_HAnim").setUSE("hanim_r_carpal_distal_phalanx_5_tip"))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2});
  }
}
protected class MFInt321 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f2 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.1f,0f,0f,0f,0.1f,0f,0f,0f,0.1f});
  }
}
protected class MFColor3 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f,0f,0f,0f,0.6f,0f,0f,0f,1f});
  }
}
protected class MFInt324 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFColorRGBA5 {
  protected org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f,1f,0f,1f,1f,1f,0f,0.1f});
  }
}
protected class MFVec3f6 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f,0f,0f,0.05f,0f,0f});
  }
}
protected class MFInt327 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFColorRGBA8 {
  protected org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f,1f,0f,1f,1f,1f,0f,0.1f});
  }
}
protected class MFVec3f9 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.01f,0f,-0.01f,0f,0f,0f,0f,0.01f,0.01f,0f,0f,0f,0f,-0.01f,0f,-0.01f,0f});
  }
}
protected class MFString10 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"humanoidVersion=2.0"});
  }
}
protected class MFFloat11 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat12 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3213 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f14 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.824f,0.0277f,0f,0.9149f,0.0016f});
  }
}
protected class MFInt3215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f16 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.824f,0.0277f,0.0028f,1.0568f,-0.0776f});
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
protected class MFInt3219 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f20 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0961f,0.9124f,-0.0001f});
  }
}
protected class MFInt3221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f22 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.095f,0.9171f,0.0029f});
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
protected class MFInt3225 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f26 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.104f,0.4867f,0.0308f});
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
protected class MFInt3229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f30 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.104f,0.4867f,0.0308f,0.1101f,0.0656f,-0.0736f});
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
protected class MFInt3233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f34 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0f,1f,0f});
  }
}
protected class MFInt3235 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f36 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0f,1f,0f});
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
protected class MFInt3239 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f40 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFInt3241 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f42 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFInt3243 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f44 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
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
protected class MFInt3247 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f48 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat49 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat50 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3251 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f52 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat53 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat54 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3255 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f56 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat57 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFFloat60 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3261 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f62 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat63 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat64 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3265 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f66 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat67 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat68 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3269 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f70 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat71 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat72 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3273 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f74 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat75 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat76 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat77 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat78 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3279 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f80 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat81 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat82 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3283 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f84 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat85 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat86 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3287 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f88 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat89 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat90 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3291 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f92 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat93 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFFloat96 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3297 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f98 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat99 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat100 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32101 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f102 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFInt32103 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f104 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat105 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat106 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32107 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f108 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat109 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat110 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32111 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f112 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat113 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat114 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32115 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f116 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat117 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat118 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat119 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat120 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32121 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f122 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat123 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat124 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32125 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f126 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat127 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat128 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32129 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f130 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat131 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFFloat134 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32135 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f136 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.095f,0.9171f,0.0029f,-0.0867f,0.4913f,0.0318f});
  }
}
protected class MFFloat137 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat138 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32139 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f140 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0867f,0.4913f,0.0318f,-0.0801f,0.0712f,-0.0766f});
  }
}
protected class MFFloat141 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat142 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32143 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f144 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f,0.0712f,-0.0766f,0f,1f,0f});
  }
}
protected class MFInt32145 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f146 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f,0.0712f,-0.0766f,0f,1f,0f});
  }
}
protected class MFFloat147 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat148 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32149 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f150 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFInt32151 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f152 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFInt32153 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f154 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat155 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat156 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32157 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f158 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat159 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat160 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32161 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f162 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat163 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat164 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32165 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f166 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat167 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFFloat170 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32171 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f172 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat173 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat174 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32175 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f176 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat177 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat178 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32179 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f180 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat181 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat182 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32183 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f184 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat185 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFFloat188 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32189 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f190 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat191 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat192 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32193 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f194 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat195 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat196 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32197 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f198 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat199 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat200 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32201 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f202 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat203 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat204 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat205 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat206 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32207 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f208 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat209 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat210 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32211 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f212 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFInt32213 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f214 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f218 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f222 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f226 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
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
protected class MFFloat229 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat230 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32231 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f232 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f236 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat237 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat238 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32239 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f240 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f});
  }
}
protected class MFFloat241 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat242 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f246 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f,1.0568f,-0.0776f,0.0035f,1.0925f,-0.0787f});
  }
}
protected class MFFloat247 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat248 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32249 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f250 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0035f,1.0925f,-0.0787f,0.0041f,1.1276f,-0.0796f});
  }
}
protected class MFFloat251 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat252 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32253 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f254 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0041f,1.1276f,-0.0796f,0.0045f,1.1546f,-0.08f});
  }
}
protected class MFFloat255 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat256 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32257 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f258 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,0.0048f,1.1912f,-0.0805f});
  }
}
protected class MFFloat259 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat260 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32261 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f262 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0048f,1.1912f,-0.0805f,0.0051f,1.2278f,-0.0808f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f266 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0051f,1.2278f,-0.0808f,0.0053f,1.2679f,-0.081f});
  }
}
protected class MFFloat267 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat268 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32269 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f270 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0053f,1.2679f,-0.081f,0.0056f,1.2848f,-0.0822f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f274 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f,1.2848f,-0.0822f,0.0057f,1.3126f,-0.0838f});
  }
}
protected class MFFloat275 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat276 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32277 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f278 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3126f,-0.0838f,0.0057f,1.3382f,-0.0845f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f282 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3382f,-0.0845f,0.0058f,1.3625f,-0.0833f});
  }
}
protected class MFFloat283 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat284 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32285 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f286 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0058f,1.3625f,-0.0833f,0.0059f,1.3866f,-0.08f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f290 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0059f,1.3866f,-0.08f,0.006f,1.4102f,-0.0745f});
  }
}
protected class MFFloat291 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat292 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32293 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f294 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.006f,1.4102f,-0.0745f,0.0061f,1.432f,-0.0675f});
  }
}
protected class MFFloat295 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat296 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32297 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f298 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0061f,1.432f,-0.0675f,0.0062f,1.4583f,-0.057f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f302 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0062f,1.4583f,-0.057f,0.0063f,1.4761f,-0.0484f});
  }
}
protected class MFFloat303 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat304 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32305 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f306 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0063f,1.4761f,-0.0484f,0.0065f,1.4951f,-0.0387f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f310 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0066f,1.5132f,-0.0301f});
  }
}
protected class MFInt32311 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f312 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.082f,1.4488f,-0.0353f});
  }
}
protected class MFInt32313 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f314 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,-0.0694f,1.46f,-0.033f});
  }
}
protected class MFFloat315 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat316 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32317 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f318 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5132f,-0.0301f,0.0066f,1.5357f,-0.0143f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f322 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5357f,-0.0143f,0.0066f,1.552f,-0.0082f});
  }
}
protected class MFFloat323 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat324 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32325 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f326 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.552f,-0.0082f,0.0066f,1.5662f,-0.0084f});
  }
}
protected class MFFloat327 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat328 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32329 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f330 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5662f,-0.0084f,0.0066f,1.58f,-0.0103f});
  }
}
protected class MFFloat331 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat332 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32333 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f334 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.58f,-0.0103f,0.0066f,1.5928f,-0.0103f});
  }
}
protected class MFFloat335 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat336 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32337 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f338 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5928f,-0.0103f,0.0066f,1.6144f,-0.0034f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f342 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.6144f,-0.0034f,0.0044f,1.6209f,0.0236f});
  }
}
protected class MFFloat343 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat344 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32345 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f346 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1f,0f});
  }
}
protected class MFInt32347 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f348 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1f,0f});
  }
}
protected class MFInt32349 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f350 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1f,0f});
  }
}
protected class MFInt32351 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f352 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1f,0f});
  }
}
protected class MFInt32353 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f354 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1f,0f});
  }
}
protected class MFInt32355 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f356 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1f,0f});
  }
}
protected class MFInt32357 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f358 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1f,0f});
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
protected class MFFloat361 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat362 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat363 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat364 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFFloat367 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat368 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat369 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat370 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFFloat373 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat374 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32375 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f376 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.0962f,1.4269f,-0.0424f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f380 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0962f,1.4269f,-0.0424f,0.2029f,1.4376f,-0.0387f});
  }
}
protected class MFFloat381 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat382 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32383 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f384 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f,1.4376f,-0.0387f,0.2014f,1.1357f,-0.0682f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f388 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1984f,0.8663f,-0.0583f});
  }
}
protected class MFFloat389 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat390 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32391 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f392 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0f,1f,0f});
  }
}
protected class MFInt32393 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f394 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0f,1f,0f});
  }
}
protected class MFInt32395 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f396 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0f,1f,0f});
  }
}
protected class MFInt32397 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f398 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0f,1f,0f});
  }
}
protected class MFFloat399 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat400 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32401 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f402 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1924f,0.8472f,-0.0534f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f406 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1924f,0.8472f,-0.0534f,0.1951f,0.8226f,0.0246f});
  }
}
protected class MFFloat407 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat408 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32409 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f410 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1951f,0.8226f,0.0246f,0.1955f,0.8159f,0.0464f});
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
protected class MFFloat413 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat414 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32415 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f416 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.8024f,-0.028f});
  }
}
protected class MFFloat417 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat418 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32419 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f420 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.8024f,-0.028f,0.1983f,0.7815f,-0.028f});
  }
}
protected class MFFloat421 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat422 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32423 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f424 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.7815f,-0.028f,0.2017f,0.7363f,-0.0248f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f428 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2017f,0.7363f,-0.0248f,0.2028f,0.7139f,-0.0236f});
  }
}
protected class MFFloat429 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat430 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat431 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat432 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32433 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f434 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.8029f,-0.053f});
  }
}
protected class MFFloat435 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat436 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32437 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f438 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.8029f,-0.053f,0.1987f,0.7818f,-0.053f});
  }
}
protected class MFFloat439 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat440 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32441 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f442 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.7818f,-0.053f,0.2013f,0.7273f,-0.0503f});
  }
}
protected class MFFloat443 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat444 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32445 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f446 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2013f,0.7273f,-0.0503f,0.2026f,0.7011f,-0.0494f});
  }
}
protected class MFFloat447 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat448 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f452 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.8019f,-0.0794f});
  }
}
protected class MFInt32453 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f454 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.8066f,-0.1036f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f458 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.8019f,-0.0794f,0.1956f,0.7815f,-0.0794f});
  }
}
protected class MFFloat459 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat460 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32461 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f462 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.7815f,-0.0794f,0.1973f,0.7287f,-0.0777f});
  }
}
protected class MFFloat463 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat464 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32465 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f466 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1973f,0.7287f,-0.0777f,0.1983f,0.7045f,-0.0767f});
  }
}
protected class MFFloat467 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat468 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f472 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.8066f,-0.1036f,0.1925f,0.7866f,-0.1036f});
  }
}
protected class MFFloat473 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat474 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32475 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f476 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.7866f,-0.1036f,0.1938f,0.7452f,-0.1024f});
  }
}
protected class MFFloat477 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat478 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32479 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f480 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1938f,0.7452f,-0.1024f,0.1948f,0.7277f,-0.1017f});
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
protected class MFFloat483 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat484 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32485 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f486 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0694f,1.46f,-0.033f,-0.0836f,1.4281f,-0.0401f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f490 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0836f,1.4281f,-0.0401f,-0.1907f,1.4407f,-0.0325f});
  }
}
protected class MFFloat491 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat492 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32493 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f494 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1907f,1.4407f,-0.0325f,-0.1949f,1.1388f,-0.062f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f498 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1949f,1.1388f,-0.062f,-0.1959f,0.8694f,-0.0521f});
  }
}
protected class MFFloat499 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat500 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32501 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f502 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,0f,1f,0f});
  }
}
protected class MFInt32503 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f504 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,0f,1f,0f});
  }
}
protected class MFInt32505 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f506 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,0f,1f,0f});
  }
}
protected class MFInt32507 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f508 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,0f,1f,0f});
  }
}
protected class MFFloat509 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat510 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32511 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f512 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1899f,0.8502f,-0.0473f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f516 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1899f,0.8502f,-0.0473f,-0.1874f,0.8256f,0.0306f});
  }
}
protected class MFFloat517 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat518 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32519 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f520 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1874f,0.8256f,0.0306f,-0.1864f,0.819f,0.0506f});
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
protected class MFFloat523 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat524 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32525 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f526 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f,0.8055f,-0.0218f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f530 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f,0.8055f,-0.0218f,-0.1961f,0.7846f,-0.0218f});
  }
}
protected class MFFloat531 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat532 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32533 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f534 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f,0.7846f,-0.0218f,-0.1954f,0.7393f,-0.0185f});
  }
}
protected class MFFloat535 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat536 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32537 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f538 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1954f,0.7393f,-0.0185f,-0.1945f,0.7169f,-0.0173f});
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
protected class MFFloat541 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat542 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32543 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f544 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f,0.806f,-0.0468f});
  }
}
protected class MFFloat545 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat546 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32547 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f548 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f,0.806f,-0.0468f,-0.1972f,0.7849f,-0.0468f});
  }
}
protected class MFFloat549 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat550 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32551 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f552 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f,0.7849f,-0.0468f,-0.195f,0.7304f,-0.0441f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f556 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.195f,0.7304f,-0.0441f,-0.1939f,0.7042f,-0.0432f});
  }
}
protected class MFFloat557 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat558 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f562 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f,0.8049f,-0.0732f});
  }
}
protected class MFInt32563 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f564 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f,0.8096f,-0.0975f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f568 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f,0.8049f,-0.0732f,-0.1951f,0.7845f,-0.0732f});
  }
}
protected class MFFloat569 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat570 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32571 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f572 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f,0.7845f,-0.0732f,-0.192f,0.7318f,-0.0716f});
  }
}
protected class MFFloat573 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat574 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32575 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f576 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.192f,0.7318f,-0.0716f,-0.1908f,0.7077f,-0.0706f});
  }
}
protected class MFFloat577 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat578 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat579 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat580 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32581 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f582 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f,0.8096f,-0.0975f,-0.1926f,0.7896f,-0.0975f});
  }
}
protected class MFFloat583 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat584 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32585 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f586 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f,0.7896f,-0.0975f,-0.1902f,0.7483f,-0.0963f});
  }
}
protected class MFFloat587 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat588 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32589 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f590 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1902f,0.7483f,-0.0963f,-0.1908f,0.754f,-0.096f});
  }
}
protected class MFFloat591 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat592 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
}
