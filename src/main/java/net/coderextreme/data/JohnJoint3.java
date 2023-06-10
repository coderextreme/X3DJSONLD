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
        .addMeta(new meta().setName("title").setContent("JohnBoy.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d"))
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
                .setGeometry(new Sphere().setRadius(0.0200f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("HAnimJointMaterial").setDiffuseColor(new float[] {0f,0f,0.8f}).setTransparency(0.3000f)))))
            .addChild(new Transform().setTranslation(new float[] {0f,2.05f,0f})
              .addChild(new Shape().setDEF("HAnimSegmentLine")
                .setGeometry(new LineSet().setVertexCount(new MFInt324().getArray())
                  .setColor(new ColorRGBA().setDEF("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA5().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray())))))
            .addComments("<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>")))
        .addChild(new NavigationInfo().setSpeed(1.5000f))
        .addChild(new Viewpoint().setDescription("default"))
        .addChild(new HAnimHumanoid().setName("HAnim").setDEF("hanim_HAnim").setInfo(new MFString7().getArray()).setVersion("2.0")
          .addSkeleton(new HAnimJoint().setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new float[] {0f,0.824f,0.0277f}).setUlimit(new MFFloat8().getArray()).setLlimit(new MFFloat9().getArray())
            .setShape(new Shape()
              .setGeometry(new LineSet().setVertexCount(new MFInt3210().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray()))
                .addComments("from humanoid_root to sacroiliac")
                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
            .addHAnimSite(new HAnimSite().setName("buttocks_standing_wall_contact_point_pt").setDEF("hanim_buttocks_standing_wall_contact_point_pt").setTranslation(new float[] {0f,1f,0f})
              .addChild(new TouchSensor().setDescription("HAnimSite buttocks_standing_wall_contact_point_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addHAnimSite(new HAnimSite().setName("crotch_pt").setDEF("hanim_crotch_pt").setTranslation(new float[] {0.0034f,0.8266f,0.0257f})
              .addChild(new TouchSensor().setDescription("HAnimSite crotch_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addHAnimSite(new HAnimSite().setName("l_asis_pt").setDEF("hanim_l_asis_pt").setTranslation(new float[] {0.0925f,0.9983f,0.1052f})
              .addChild(new TouchSensor().setDescription("HAnimSite l_asis_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addHAnimSite(new HAnimSite().setName("l_iliocristale_pt").setDEF("hanim_l_iliocristale_pt").setTranslation(new float[] {0.1612f,1.0537f,0.0008f})
              .addChild(new TouchSensor().setDescription("HAnimSite l_iliocristale_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addHAnimSite(new HAnimSite().setName("l_psis_pt").setDEF("hanim_l_psis_pt").setTranslation(new float[] {0.0774f,1.019f,-0.1151f})
              .addChild(new TouchSensor().setDescription("HAnimSite l_psis_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addHAnimSite(new HAnimSite().setName("l_trochanterion_pt").setDEF("hanim_l_trochanterion_pt").setTranslation(new float[] {0.1677f,0.8336f,0.0303f})
              .addChild(new TouchSensor().setDescription("HAnimSite l_trochanterion_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addHAnimSite(new HAnimSite().setName("r_asis_pt").setDEF("hanim_r_asis_pt").setTranslation(new float[] {-0.0887f,1.0021f,0.1112f})
              .addChild(new TouchSensor().setDescription("HAnimSite r_asis_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addHAnimSite(new HAnimSite().setName("r_iliocristale_pt").setDEF("hanim_r_iliocristale_pt").setTranslation(new float[] {-0.1525f,1.0628f,0.0035f})
              .addChild(new TouchSensor().setDescription("HAnimSite r_iliocristale_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addHAnimSite(new HAnimSite().setName("r_psis_pt").setDEF("hanim_r_psis_pt").setTranslation(new float[] {-0.0716f,1.019f,-0.1138f})
              .addChild(new TouchSensor().setDescription("HAnimSite r_psis_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addHAnimSite(new HAnimSite().setName("r_trochanterion_pt").setDEF("hanim_r_trochanterion_pt").setTranslation(new float[] {-0.1689f,0.8419f,0.0352f})
              .addChild(new TouchSensor().setDescription("HAnimSite r_trochanterion_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addShape(new Shape()
              .setGeometry(new LineSet().setVertexCount(new MFInt3212().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f13().getArray()))
                .addComments("from humanoid_root to vl5")
                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
            .addHAnimSite(new HAnimSite().setName("navel_pt").setDEF("hanim_navel_pt").setTranslation(new float[] {0.0069f,1.0966f,0.1017f})
              .addChild(new TouchSensor().setDescription("HAnimSite navel_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addHAnimSite(new HAnimSite().setName("waist_preferred_anterior_pt").setDEF("hanim_waist_preferred_anterior_pt").setTranslation(new float[] {0f,1f,0f})
              .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_anterior_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addHAnimSite(new HAnimSite().setName("waist_preferred_posterior_pt").setDEF("hanim_waist_preferred_posterior_pt").setTranslation(new float[] {0.29f,1.0915f,-0.1091f})
              .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_posterior_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimJoint().setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0f,0.9149f,0.0016f}).setUlimit(new MFFloat14().getArray()).setLlimit(new MFFloat15().getArray())
              .setShape(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3216().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray()))
                  .addComments("from sacroiliac to l_hip")
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
              .addHAnimSite(new HAnimSite().setName("l_femoral_lateral_epicondyles_pt").setDEF("hanim_l_femoral_lateral_epicondyles_pt").setTranslation(new float[] {0.1598f,0.4967f,0.0297f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_lateral_epicondyles_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addHAnimSite(new HAnimSite().setName("l_femoral_medial_epicondyles_pt").setDEF("hanim_l_femoral_medial_epicondyles_pt").setTranslation(new float[] {0.0398f,0.4946f,0.0303f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_medial_epicondyles_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addHAnimSite(new HAnimSite().setName("l_knee_crease_pt").setDEF("hanim_l_knee_crease_pt").setTranslation(new float[] {0.0993f,0.4881f,-0.0309f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_knee_crease_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addHAnimSite(new HAnimSite().setName("l_suprapatella_pt").setDEF("hanim_l_suprapatella_pt").setTranslation(new float[] {0f,1f,0f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_suprapatella_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addShape(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3218().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f19().getArray()))
                  .addComments("from sacroiliac to r_hip")
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
              .addHAnimSite(new HAnimSite().setName("r_femoral_lateral_epicondyles_pt").setDEF("hanim_r_femoral_lateral_epicondyles_pt").setTranslation(new float[] {-0.1421f,0.4992f,0.031f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_lateral_epicondyles_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addHAnimSite(new HAnimSite().setName("r_femoral_medial_epicondyles_pt").setDEF("hanim_r_femoral_medial_epicondyles_pt").setTranslation(new float[] {-0.0221f,0.5014f,0.0289f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_medial_epicondyles_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addHAnimSite(new HAnimSite().setName("r_knee_crease_pt").setDEF("hanim_r_knee_crease_pt").setTranslation(new float[] {-0.0825f,0.4932f,-0.0326f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_knee_crease_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addHAnimSite(new HAnimSite().setName("r_suprapatella_pt").setDEF("hanim_r_suprapatella_pt").setTranslation(new float[] {0f,1f,0f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_suprapatella_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimJoint().setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {0.0961f,0.9124f,-0.0001f}).setUlimit(new MFFloat20().getArray()).setLlimit(new MFFloat21().getArray())
                .setShape(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3222().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f23().getArray()))
                    .addComments("from l_hip to l_knee")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addHAnimSite(new HAnimSite().setName("l_lateral_malleolus_pt").setDEF("hanim_l_lateral_malleolus_pt").setTranslation(new float[] {0.1308f,0.0597f,-0.1032f})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_lateral_malleolus_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addHAnimSite(new HAnimSite().setName("l_medial_malleolus_pt").setDEF("hanim_l_medial_malleolus_pt").setTranslation(new float[] {0.089f,0.0716f,-0.0881f})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_medial_malleolus_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addHAnimSite(new HAnimSite().setName("l_tibiale_pt").setDEF("hanim_l_tibiale_pt").setTranslation(new float[] {0f,1f,0f})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_tibiale_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimJoint().setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {0.104f,0.4867f,0.0308f}).setUlimit(new MFFloat24().getArray()).setLlimit(new MFFloat25().getArray())
                  .setShape(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3226().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f27().getArray()))
                      .addComments("from l_knee to l_talocrural")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addHAnimSite(new HAnimSite().setName("l_calcaneus_posterior_pt").setDEF("hanim_l_calcaneus_posterior_pt").setTranslation(new float[] {0.0974f,0.0259f,-0.1171f})
                    .addChild(new TouchSensor().setDescription("HAnimSite l_calcaneus_posterior_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addHAnimSite(new HAnimSite().setName("l_sphyrion_pt").setDEF("hanim_l_sphyrion_pt").setTranslation(new float[] {0.089f,0.0575f,-0.0943f})
                    .addChild(new TouchSensor().setDescription("HAnimSite l_sphyrion_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimJoint().setName("l_talocrural").setDEF("hanim_l_talocrural").setCenter(new float[] {0.1101f,0.0656f,-0.0736f}).setUlimit(new MFFloat28().getArray()).setLlimit(new MFFloat29().getArray())
                    .setShape(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3230().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f31().getArray()))
                        .addComments("from l_talocrural to l_talocalcaneonavicular")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addShape(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3232().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f33().getArray()))
                        .addComments("from l_talocrural to l_calcaneocuboid")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimJoint().setName("l_talocalcaneonavicular").setDEF("hanim_l_talocalcaneonavicular").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat34().getArray()).setLlimit(new MFFloat35().getArray())
                      .setShape(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3236().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f37().getArray()))
                          .addComments("from l_talocalcaneonavicular to l_cuneonavicular_1")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addShape(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3238().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f39().getArray()))
                          .addComments("from l_talocalcaneonavicular to l_cuneonavicular_2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addShape(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3240().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray()))
                          .addComments("from l_talocalcaneonavicular to l_cuneonavicular_3")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new HAnimJoint().setName("l_cuneonavicular_1").setDEF("hanim_l_cuneonavicular_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat42().getArray()).setLlimit(new MFFloat43().getArray())
                        .setShape(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3244().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f45().getArray()))
                            .addComments("from l_cuneonavicular_1 to l_tarsometatarsal_1")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_1").setDEF("hanim_l_tarsometatarsal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat46().getArray()).setLlimit(new MFFloat47().getArray())
                          .setShape(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3248().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f49().getArray()))
                              .addComments("from l_tarsometatarsal_1 to l_metatarsophalangeal_1")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addHAnimSite(new HAnimSite().setName("l_metatarsal_phalanx_1_pt").setDEF("hanim_l_metatarsal_phalanx_1_pt").setTranslation(new float[] {0f,1f,0f})
                            .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_phalanx_1_pt"))
                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_1").setDEF("hanim_l_metatarsophalangeal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat50().getArray()).setLlimit(new MFFloat51().getArray())
                            .setShape(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3252().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray()))
                                .addComments("from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addHAnimSite(new HAnimSite().setName("l_tarsal_distal_phalanx_1_tip").setDEF("hanim_l_tarsal_distal_phalanx_1_tip").setTranslation(new float[] {0f,1f,0f})
                              .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimJoint().setName("l_tarsal_interphalangeal_1").setDEF("hanim_l_tarsal_interphalangeal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat54().getArray()).setLlimit(new MFFloat55().getArray())))))
                      .addChild(new HAnimJoint().setName("l_cuneonavicular_2").setDEF("hanim_l_cuneonavicular_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat56().getArray()).setLlimit(new MFFloat57().getArray())
                        .setShape(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3258().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray()))
                            .addComments("from l_cuneonavicular_2 to l_tarsometatarsal_2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_2").setDEF("hanim_l_tarsometatarsal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat60().getArray()).setLlimit(new MFFloat61().getArray())
                          .setShape(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3262().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f63().getArray()))
                              .addComments("from l_tarsometatarsal_2 to l_metatarsophalangeal_2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_2").setDEF("hanim_l_metatarsophalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat64().getArray()).setLlimit(new MFFloat65().getArray())
                            .setShape(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3266().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f67().getArray()))
                                .addComments("from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_2").setDEF("hanim_l_tarsal_proximal_interphalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat68().getArray()).setLlimit(new MFFloat69().getArray())
                              .setShape(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3270().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray()))
                                  .addComments("from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addHAnimSite(new HAnimSite().setName("l_tarsal_distal_phalanx_2_tip").setDEF("hanim_l_tarsal_distal_phalanx_2_tip").setTranslation(new float[] {0.1195f,0.0079f,0.1433f})
                                .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat72().getArray()).setLlimit(new MFFloat73().getArray()))))))
                      .addChild(new HAnimJoint().setName("l_cuneonavicular_3").setDEF("hanim_l_cuneonavicular_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat74().getArray()).setLlimit(new MFFloat75().getArray())
                        .setShape(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3276().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray()))
                            .addComments("from l_cuneonavicular_3 to l_tarsometatarsal_3")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_3").setDEF("hanim_l_tarsometatarsal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat78().getArray()).setLlimit(new MFFloat79().getArray())
                          .setShape(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3280().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f81().getArray()))
                              .addComments("from l_tarsometatarsal_3 to l_metatarsophalangeal_3")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_3").setDEF("hanim_l_metatarsophalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat82().getArray()).setLlimit(new MFFloat83().getArray())
                            .setShape(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3284().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f85().getArray()))
                                .addComments("from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_3").setDEF("hanim_l_tarsal_proximal_interphalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat86().getArray()).setLlimit(new MFFloat87().getArray())
                              .setShape(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3288().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f89().getArray()))
                                  .addComments("from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addHAnimSite(new HAnimSite().setName("l_tarsal_distal_phalanx_3_tip").setDEF("hanim_l_tarsal_distal_phalanx_3_tip").setTranslation(new float[] {0f,1f,0f})
                                .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_3").setDEF("hanim_l_tarsal_distal_interphalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat90().getArray()).setLlimit(new MFFloat91().getArray())))))))
                    .addChild(new HAnimJoint().setName("l_calcaneocuboid").setDEF("hanim_l_calcaneocuboid").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat92().getArray()).setLlimit(new MFFloat93().getArray())
                      .setShape(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3294().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f95().getArray()))
                          .addComments("from l_calcaneocuboid to l_transversetarsal")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new HAnimJoint().setName("l_transversetarsal").setDEF("hanim_l_transversetarsal").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat96().getArray()).setLlimit(new MFFloat97().getArray())
                        .setShape(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3298().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f99().getArray()))
                            .addComments("from l_transversetarsal to l_tarsometatarsal_4")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addShape(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32100().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f101().getArray()))
                            .addComments("from l_transversetarsal to l_tarsometatarsal_5")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_4").setDEF("hanim_l_tarsometatarsal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat102().getArray()).setLlimit(new MFFloat103().getArray())
                          .setShape(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32104().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f105().getArray()))
                              .addComments("from l_tarsometatarsal_4 to l_metatarsophalangeal_4")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_4").setDEF("hanim_l_metatarsophalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat106().getArray()).setLlimit(new MFFloat107().getArray())
                            .setShape(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32108().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f109().getArray()))
                                .addComments("from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_4").setDEF("hanim_l_tarsal_proximal_interphalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat110().getArray()).setLlimit(new MFFloat111().getArray())
                              .setShape(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32112().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f113().getArray()))
                                  .addComments("from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addHAnimSite(new HAnimSite().setName("l_tarsal_distal_phalanx_4_tip").setDEF("hanim_l_tarsal_distal_phalanx_4_tip").setTranslation(new float[] {0f,1f,0f})
                                .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_4").setDEF("hanim_l_tarsal_distal_interphalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat114().getArray()).setLlimit(new MFFloat115().getArray())))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_5").setDEF("hanim_l_tarsometatarsal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat116().getArray()).setLlimit(new MFFloat117().getArray())
                          .setShape(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32118().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f119().getArray()))
                              .addComments("from l_tarsometatarsal_5 to l_metatarsophalangeal_5")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addHAnimSite(new HAnimSite().setName("l_metatarsal_phalanx_5_pt").setDEF("hanim_l_metatarsal_phalanx_5_pt").setTranslation(new float[] {0f,1f,0f})
                            .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_phalanx_5_pt"))
                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_5").setDEF("hanim_l_metatarsophalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat120().getArray()).setLlimit(new MFFloat121().getArray())
                            .setShape(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32122().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f123().getArray()))
                                .addComments("from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_5").setDEF("hanim_l_tarsal_proximal_interphalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat124().getArray()).setLlimit(new MFFloat125().getArray())
                              .setShape(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32126().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f127().getArray()))
                                  .addComments("from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addHAnimSite(new HAnimSite().setName("l_tarsal_distal_phalanx_5_tip").setDEF("hanim_l_tarsal_distal_phalanx_5_tip").setTranslation(new float[] {0f,1f,0f})
                                .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_5").setDEF("hanim_l_tarsal_distal_interphalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat128().getArray()).setLlimit(new MFFloat129().getArray()))))))))))
              .addChild(new HAnimJoint().setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-0.095f,0.9171f,0.0029f}).setUlimit(new MFFloat130().getArray()).setLlimit(new MFFloat131().getArray())
                .setShape(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32132().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f133().getArray()))
                    .addComments("from r_hip to r_knee")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addHAnimSite(new HAnimSite().setName("r_lateral_malleolus_pt").setDEF("hanim_r_lateral_malleolus_pt").setTranslation(new float[] {-0.1006f,0.0658f,-0.1075f})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_lateral_malleolus_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addHAnimSite(new HAnimSite().setName("r_medial_malleolus_pt").setDEF("hanim_r_medial_malleolus_pt").setTranslation(new float[] {-0.0591f,0.076f,-0.0928f})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_medial_malleolus_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addHAnimSite(new HAnimSite().setName("r_tibiale_pt").setDEF("hanim_r_tibiale_pt").setTranslation(new float[] {0f,1f,0f})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_tibiale_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimJoint().setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-0.0867f,0.4913f,0.0318f}).setUlimit(new MFFloat134().getArray()).setLlimit(new MFFloat135().getArray())
                  .setShape(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32136().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f137().getArray()))
                      .addComments("from r_knee to r_talocrural")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addHAnimSite(new HAnimSite().setName("r_calcaneus_posterior_pt").setDEF("hanim_r_calcaneus_posterior_pt").setTranslation(new float[] {-0.0692f,0.0297f,-0.1221f})
                    .addChild(new TouchSensor().setDescription("HAnimSite r_calcaneus_posterior_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addHAnimSite(new HAnimSite().setName("r_sphyrion_pt").setDEF("hanim_r_sphyrion_pt").setTranslation(new float[] {-0.0603f,0.061f,-0.1002f})
                    .addChild(new TouchSensor().setDescription("HAnimSite r_sphyrion_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimJoint().setName("r_talocrural").setDEF("hanim_r_talocrural").setCenter(new float[] {-0.0801f,0.0712f,-0.0766f}).setUlimit(new MFFloat138().getArray()).setLlimit(new MFFloat139().getArray())
                    .setShape(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32140().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f141().getArray()))
                        .addComments("from r_talocrural to r_talocalcaneonavicular")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addShape(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32142().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f143().getArray()))
                        .addComments("from r_talocrural to r_calcaneocuboid")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimJoint().setName("r_talocalcaneonavicular").setDEF("hanim_r_talocalcaneonavicular").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat144().getArray()).setLlimit(new MFFloat145().getArray())
                      .setShape(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32146().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f147().getArray()))
                          .addComments("from r_talocalcaneonavicular to r_cuneonavicular_1")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addShape(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32148().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f149().getArray()))
                          .addComments("from r_talocalcaneonavicular to r_cuneonavicular_2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addShape(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32150().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f151().getArray()))
                          .addComments("from r_talocalcaneonavicular to r_cuneonavicular_3")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new HAnimJoint().setName("r_cuneonavicular_1").setDEF("hanim_r_cuneonavicular_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat152().getArray()).setLlimit(new MFFloat153().getArray())
                        .setShape(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32154().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f155().getArray()))
                            .addComments("from r_cuneonavicular_1 to r_tarsometatarsal_1")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_1").setDEF("hanim_r_tarsometatarsal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat156().getArray()).setLlimit(new MFFloat157().getArray())
                          .setShape(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32158().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f159().getArray()))
                              .addComments("from r_tarsometatarsal_1 to r_metatarsophalangeal_1")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addHAnimSite(new HAnimSite().setName("r_metatarsal_phalanx_1_pt").setDEF("hanim_r_metatarsal_phalanx_1_pt").setTranslation(new float[] {0f,1f,0f})
                            .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_phalanx_1_pt"))
                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_1").setDEF("hanim_r_metatarsophalangeal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat160().getArray()).setLlimit(new MFFloat161().getArray())
                            .setShape(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32162().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f163().getArray()))
                                .addComments("from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addHAnimSite(new HAnimSite().setName("r_tarsal_distal_phalanx_1_tip").setDEF("hanim_r_tarsal_distal_phalanx_1_tip").setTranslation(new float[] {0f,1f,0f})
                              .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimJoint().setName("r_tarsal_interphalangeal_1").setDEF("hanim_r_tarsal_interphalangeal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat164().getArray()).setLlimit(new MFFloat165().getArray())))))
                      .addChild(new HAnimJoint().setName("r_cuneonavicular_2").setDEF("hanim_r_cuneonavicular_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat166().getArray()).setLlimit(new MFFloat167().getArray())
                        .setShape(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32168().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f169().getArray()))
                            .addComments("from r_cuneonavicular_2 to r_tarsometatarsal_2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_2").setDEF("hanim_r_tarsometatarsal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat170().getArray()).setLlimit(new MFFloat171().getArray())
                          .setShape(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32172().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f173().getArray()))
                              .addComments("from r_tarsometatarsal_2 to r_metatarsophalangeal_2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat174().getArray()).setLlimit(new MFFloat175().getArray())
                            .setShape(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32176().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f177().getArray()))
                                .addComments("from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_2").setDEF("hanim_r_tarsal_proximal_interphalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat178().getArray()).setLlimit(new MFFloat179().getArray())
                              .setShape(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32180().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f181().getArray()))
                                  .addComments("from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addHAnimSite(new HAnimSite().setName("r_tarsal_distal_phalanx_2_tip").setDEF("hanim_r_tarsal_distal_phalanx_2_tip").setTranslation(new float[] {-0.0883f,0.0134f,0.1383f})
                                .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat182().getArray()).setLlimit(new MFFloat183().getArray()))))))
                      .addChild(new HAnimJoint().setName("r_cuneonavicular_3").setDEF("hanim_r_cuneonavicular_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat184().getArray()).setLlimit(new MFFloat185().getArray())
                        .setShape(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32186().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f187().getArray()))
                            .addComments("from r_cuneonavicular_3 to r_tarsometatarsal_3")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_3").setDEF("hanim_r_tarsometatarsal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat188().getArray()).setLlimit(new MFFloat189().getArray())
                          .setShape(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32190().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f191().getArray()))
                              .addComments("from r_tarsometatarsal_3 to r_metatarsophalangeal_3")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_3").setDEF("hanim_r_metatarsophalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat192().getArray()).setLlimit(new MFFloat193().getArray())
                            .setShape(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32194().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f195().getArray()))
                                .addComments("from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_3").setDEF("hanim_r_tarsal_proximal_interphalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat196().getArray()).setLlimit(new MFFloat197().getArray())
                              .setShape(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32198().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f199().getArray()))
                                  .addComments("from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addHAnimSite(new HAnimSite().setName("r_tarsal_distal_phalanx_3_tip").setDEF("hanim_r_tarsal_distal_phalanx_3_tip").setTranslation(new float[] {0f,1f,0f})
                                .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_3").setDEF("hanim_r_tarsal_distal_interphalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat200().getArray()).setLlimit(new MFFloat201().getArray())))))))
                    .addChild(new HAnimJoint().setName("r_calcaneocuboid").setDEF("hanim_r_calcaneocuboid").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat202().getArray()).setLlimit(new MFFloat203().getArray())
                      .setShape(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32204().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f205().getArray()))
                          .addComments("from r_calcaneocuboid to r_transversetarsal")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new HAnimJoint().setName("r_transversetarsal").setDEF("hanim_r_transversetarsal").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat206().getArray()).setLlimit(new MFFloat207().getArray())
                        .setShape(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32208().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f209().getArray()))
                            .addComments("from r_transversetarsal to r_tarsometatarsal_4")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addShape(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32210().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f211().getArray()))
                            .addComments("from r_transversetarsal to r_tarsometatarsal_5")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_4").setDEF("hanim_r_tarsometatarsal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat212().getArray()).setLlimit(new MFFloat213().getArray())
                          .setShape(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32214().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f215().getArray()))
                              .addComments("from r_tarsometatarsal_4 to r_metatarsophalangeal_4")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_4").setDEF("hanim_r_metatarsophalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat216().getArray()).setLlimit(new MFFloat217().getArray())
                            .setShape(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32218().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f219().getArray()))
                                .addComments("from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_4").setDEF("hanim_r_tarsal_proximal_interphalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat220().getArray()).setLlimit(new MFFloat221().getArray())
                              .setShape(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32222().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f223().getArray()))
                                  .addComments("from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addHAnimSite(new HAnimSite().setName("r_tarsal_distal_phalanx_4_tip").setDEF("hanim_r_tarsal_distal_phalanx_4_tip").setTranslation(new float[] {0f,1f,0f})
                                .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_4").setDEF("hanim_r_tarsal_distal_interphalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat224().getArray()).setLlimit(new MFFloat225().getArray())))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_5").setDEF("hanim_r_tarsometatarsal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat226().getArray()).setLlimit(new MFFloat227().getArray())
                          .setShape(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32228().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f229().getArray()))
                              .addComments("from r_tarsometatarsal_5 to r_metatarsophalangeal_5")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addHAnimSite(new HAnimSite().setName("r_metatarsal_phalanx_5_pt").setDEF("hanim_r_metatarsal_phalanx_5_pt").setTranslation(new float[] {0f,1f,0f})
                            .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_phalanx_5_pt"))
                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_5").setDEF("hanim_r_metatarsophalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat230().getArray()).setLlimit(new MFFloat231().getArray())
                            .setShape(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32232().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f233().getArray()))
                                .addComments("from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_5").setDEF("hanim_r_tarsal_proximal_interphalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat234().getArray()).setLlimit(new MFFloat235().getArray())
                              .setShape(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32236().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f237().getArray()))
                                  .addComments("from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addHAnimSite(new HAnimSite().setName("r_tarsal_distal_phalanx_5_tip").setDEF("hanim_r_tarsal_distal_phalanx_5_tip").setTranslation(new float[] {0f,1f,0f})
                                .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_5").setDEF("hanim_r_tarsal_distal_interphalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat238().getArray()).setLlimit(new MFFloat239().getArray())))))))))))
            .addChild(new HAnimJoint().setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0.0028f,1.0568f,-0.0776f}).setUlimit(new MFFloat240().getArray()).setLlimit(new MFFloat241().getArray())
              .setShape(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt32242().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f243().getArray()))
                  .addComments("from vl5 to vl4")
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
              .addChild(new HAnimJoint().setName("vl4").setDEF("hanim_vl4").setCenter(new float[] {0.0035f,1.0925f,-0.0787f}).setUlimit(new MFFloat244().getArray()).setLlimit(new MFFloat245().getArray())
                .setShape(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32246().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f247().getArray()))
                    .addComments("from vl4 to vl3")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addChild(new HAnimJoint().setName("vl3").setDEF("hanim_vl3").setCenter(new float[] {0.0041f,1.1276f,-0.0796f}).setUlimit(new MFFloat248().getArray()).setLlimit(new MFFloat249().getArray())
                  .setShape(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32250().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f251().getArray()))
                      .addComments("from vl3 to vl2")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addHAnimSite(new HAnimSite().setName("l_rib10_pt").setDEF("hanim_l_rib10_pt").setTranslation(new float[] {0.0871f,1.1925f,0.0992f})
                    .addChild(new TouchSensor().setDescription("HAnimSite l_rib10_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addHAnimSite(new HAnimSite().setName("r_rib10_pt").setDEF("hanim_r_rib10_pt").setTranslation(new float[] {-0.0711f,1.1941f,0.1016f})
                    .addChild(new TouchSensor().setDescription("HAnimSite r_rib10_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addHAnimSite(new HAnimSite().setName("spine_2_middle_back_pt").setDEF("hanim_spine_2_middle_back_pt").setTranslation(new float[] {0f,1f,0f})
                    .addChild(new TouchSensor().setDescription("HAnimSite spine_2_middle_back_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimJoint().setName("vl2").setDEF("hanim_vl2").setCenter(new float[] {0.0045f,1.1546f,-0.08f}).setUlimit(new MFFloat252().getArray()).setLlimit(new MFFloat253().getArray())
                    .setShape(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32254().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f255().getArray()))
                        .addComments("from vl2 to vl1")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimJoint().setName("vl1").setDEF("hanim_vl1").setCenter(new float[] {0.0048f,1.1912f,-0.0805f}).setUlimit(new MFFloat256().getArray()).setLlimit(new MFFloat257().getArray())
                      .setShape(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32258().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f259().getArray()))
                          .addComments("from vl1 to vt12")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new HAnimJoint().setName("vt12").setDEF("hanim_vt12").setCenter(new float[] {0.0051f,1.2278f,-0.0808f}).setUlimit(new MFFloat260().getArray()).setLlimit(new MFFloat261().getArray())
                        .setShape(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32262().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f263().getArray()))
                            .addComments("from vt12 to vt11")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new HAnimJoint().setName("vt11").setDEF("hanim_vt11").setCenter(new float[] {0.0053f,1.2679f,-0.081f}).setUlimit(new MFFloat264().getArray()).setLlimit(new MFFloat265().getArray())
                          .setShape(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32266().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f267().getArray()))
                              .addComments("from vt11 to vt10")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addHAnimSite(new HAnimSite().setName("substernale_pt").setDEF("hanim_substernale_pt").setTranslation(new float[] {0.0085f,1.2995f,0.1147f})
                            .addChild(new TouchSensor().setDescription("HAnimSite substernale_pt"))
                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                          .addChild(new HAnimJoint().setName("vt10").setDEF("hanim_vt10").setCenter(new float[] {0.0056f,1.2848f,-0.0822f}).setUlimit(new MFFloat268().getArray()).setLlimit(new MFFloat269().getArray())
                            .setShape(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32270().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f271().getArray()))
                                .addComments("from vt10 to vt9")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addHAnimSite(new HAnimSite().setName("l_thelion_pt").setDEF("hanim_l_thelion_pt").setTranslation(new float[] {0.0918f,1.3382f,0.1192f})
                              .addChild(new TouchSensor().setDescription("HAnimSite l_thelion_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addHAnimSite(new HAnimSite().setName("r_thelion_pt").setDEF("hanim_r_thelion_pt").setTranslation(new float[] {-0.0736f,1.3385f,0.1217f})
                              .addChild(new TouchSensor().setDescription("HAnimSite r_thelion_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimJoint().setName("vt9").setDEF("hanim_vt9").setCenter(new float[] {0.0057f,1.3126f,-0.0838f}).setUlimit(new MFFloat272().getArray()).setLlimit(new MFFloat273().getArray())
                              .setShape(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32274().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f275().getArray()))
                                  .addComments("from vt9 to vt8")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimJoint().setName("vt8").setDEF("hanim_vt8").setCenter(new float[] {0.0057f,1.3382f,-0.0845f}).setUlimit(new MFFloat276().getArray()).setLlimit(new MFFloat277().getArray())
                                .setShape(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32278().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f279().getArray()))
                                    .addComments("from vt8 to vt7")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimJoint().setName("vt7").setDEF("hanim_vt7").setCenter(new float[] {0.0058f,1.3625f,-0.0833f}).setUlimit(new MFFloat280().getArray()).setLlimit(new MFFloat281().getArray())
                                  .setShape(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32282().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f283().getArray()))
                                      .addComments("from vt7 to vt6")
                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                  .addHAnimSite(new HAnimSite().setName("l_chest_midsagittal_plane_pt").setDEF("hanim_l_chest_midsagittal_plane_pt").setTranslation(new float[] {0f,1f,0f})
                                    .addChild(new TouchSensor().setDescription("HAnimSite l_chest_midsagittal_plane_pt"))
                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                  .addHAnimSite(new HAnimSite().setName("mesosternale_pt").setDEF("hanim_mesosternale_pt").setTranslation(new float[] {0f,1f,0f})
                                    .addChild(new TouchSensor().setDescription("HAnimSite mesosternale_pt"))
                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                  .addHAnimSite(new HAnimSite().setName("r_chest_midsagittal_plane_pt").setDEF("hanim_r_chest_midsagittal_plane_pt").setTranslation(new float[] {0f,1f,0f})
                                    .addChild(new TouchSensor().setDescription("HAnimSite r_chest_midsagittal_plane_pt"))
                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                  .addHAnimSite(new HAnimSite().setName("rear_center_midsagittal_plane_pt").setDEF("hanim_rear_center_midsagittal_plane_pt").setTranslation(new float[] {0f,1f,0f})
                                    .addChild(new TouchSensor().setDescription("HAnimSite rear_center_midsagittal_plane_pt"))
                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                  .addChild(new HAnimJoint().setName("vt6").setDEF("hanim_vt6").setCenter(new float[] {0.0059f,1.3866f,-0.08f}).setUlimit(new MFFloat284().getArray()).setLlimit(new MFFloat285().getArray())
                                    .setShape(new Shape()
                                      .setGeometry(new LineSet().setVertexCount(new MFInt32286().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f287().getArray()))
                                        .addComments("from vt6 to vt5")
                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                    .addHAnimSite(new HAnimSite().setName("spine_1_middle_back_pt").setDEF("hanim_spine_1_middle_back_pt").setTranslation(new float[] {0f,1f,0f})
                                      .addChild(new TouchSensor().setDescription("HAnimSite spine_1_middle_back_pt"))
                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                    .addChild(new HAnimJoint().setName("vt5").setDEF("hanim_vt5").setCenter(new float[] {0.006f,1.4102f,-0.0745f}).setUlimit(new MFFloat288().getArray()).setLlimit(new MFFloat289().getArray())
                                      .setShape(new Shape()
                                        .setGeometry(new LineSet().setVertexCount(new MFInt32290().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f291().getArray()))
                                          .addComments("from vt5 to vt4")
                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                      .addChild(new HAnimJoint().setName("vt4").setDEF("hanim_vt4").setCenter(new float[] {0.0061f,1.432f,-0.0675f}).setUlimit(new MFFloat292().getArray()).setLlimit(new MFFloat293().getArray())
                                        .setShape(new Shape()
                                          .setGeometry(new LineSet().setVertexCount(new MFInt32294().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f295().getArray()))
                                            .addComments("from vt4 to vt3")
                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                        .addChild(new HAnimJoint().setName("vt3").setDEF("hanim_vt3").setCenter(new float[] {0.0062f,1.4583f,-0.057f}).setUlimit(new MFFloat296().getArray()).setLlimit(new MFFloat297().getArray())
                                          .setShape(new Shape()
                                            .setGeometry(new LineSet().setVertexCount(new MFInt32298().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f299().getArray()))
                                              .addComments("from vt3 to vt2")
                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                          .addChild(new HAnimJoint().setName("vt2").setDEF("hanim_vt2").setCenter(new float[] {0.0063f,1.4761f,-0.0484f}).setUlimit(new MFFloat300().getArray()).setLlimit(new MFFloat301().getArray())
                                            .setShape(new Shape()
                                              .setGeometry(new LineSet().setVertexCount(new MFInt32302().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f303().getArray()))
                                                .addComments("from vt2 to vt1")
                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                            .addHAnimSite(new HAnimSite().setName("cervicale_pt").setDEF("hanim_cervicale_pt").setTranslation(new float[] {0.0064f,1.52f,-0.0815f})
                                              .addChild(new TouchSensor().setDescription("HAnimSite cervicale_pt"))
                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                            .addHAnimSite(new HAnimSite().setName("suprasternale_pt").setDEF("hanim_suprasternale_pt").setTranslation(new float[] {0.0084f,1.4714f,0.0551f})
                                              .addChild(new TouchSensor().setDescription("HAnimSite suprasternale_pt"))
                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                            .addChild(new HAnimJoint().setName("vt1").setDEF("hanim_vt1").setCenter(new float[] {0.0065f,1.4951f,-0.0387f}).setUlimit(new MFFloat304().getArray()).setLlimit(new MFFloat305().getArray())
                                              .setShape(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32306().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f307().getArray()))
                                                  .addComments("from vt1 to vc7")
                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                              .addHAnimSite(new HAnimSite().setName("l_neck_base_pt").setDEF("hanim_l_neck_base_pt").setTranslation(new float[] {0.0646f,1.5141f,-0.038f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite l_neck_base_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addHAnimSite(new HAnimSite().setName("r_neck_base_pt").setDEF("hanim_r_neck_base_pt").setTranslation(new float[] {-0.0419f,1.5149f,-0.022f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite r_neck_base_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addShape(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32308().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f309().getArray()))
                                                  .addComments("from vt1 to l_sternoclavicular")
                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                              .addHAnimSite(new HAnimSite().setName("l_acromion_pt").setDEF("hanim_l_acromion_pt").setTranslation(new float[] {0.2032f,1.476f,-0.049f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite l_acromion_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addHAnimSite(new HAnimSite().setName("l_axilla_distal_pt").setDEF("hanim_l_axilla_distal_pt").setTranslation(new float[] {0.1706f,1.4072f,-0.0875f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_distal_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addHAnimSite(new HAnimSite().setName("l_axilla_posterior_folds_pt").setDEF("hanim_l_axilla_posterior_folds_pt").setTranslation(new float[] {0f,1f,0f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_posterior_folds_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addHAnimSite(new HAnimSite().setName("l_axilla_proximal_pt").setDEF("hanim_l_axilla_proximal_pt").setTranslation(new float[] {0.1777f,1.4065f,-0.0075f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_proximal_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addHAnimSite(new HAnimSite().setName("l_clavicale_pt").setDEF("hanim_l_clavicale_pt").setTranslation(new float[] {0.0271f,1.4943f,0.0394f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite l_clavicale_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addShape(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32310().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f311().getArray()))
                                                  .addComments("from vt1 to r_sternoclavicular")
                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                              .addHAnimSite(new HAnimSite().setName("r_acromion_pt").setDEF("hanim_r_acromion_pt").setTranslation(new float[] {-0.1905f,1.4791f,-0.0431f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite r_acromion_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addHAnimSite(new HAnimSite().setName("r_axilla_distal_pt").setDEF("hanim_r_axilla_distal_pt").setTranslation(new float[] {-0.1603f,1.4098f,-0.0826f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_distal_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addHAnimSite(new HAnimSite().setName("r_axilla_posterior_folds_pt").setDEF("hanim_r_axilla_posterior_folds_pt").setTranslation(new float[] {0f,1f,0f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_posterior_folds_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addHAnimSite(new HAnimSite().setName("r_axilla_proximal_pt").setDEF("hanim_r_axilla_proximal_pt").setTranslation(new float[] {-0.1626f,1.4072f,-0.0031f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_proximal_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addHAnimSite(new HAnimSite().setName("r_clavicale_pt").setDEF("hanim_r_clavicale_pt").setTranslation(new float[] {-0.0115f,1.4943f,0.04f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite r_clavicale_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new HAnimJoint().setName("vc7").setDEF("hanim_vc7").setCenter(new float[] {0.0066f,1.5132f,-0.0301f}).setUlimit(new MFFloat312().getArray()).setLlimit(new MFFloat313().getArray())
                                                .setShape(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32314().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f315().getArray()))
                                                    .addComments("from vc7 to vc6")
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addChild(new HAnimJoint().setName("vc6").setDEF("hanim_vc6").setCenter(new float[] {0.0066f,1.5357f,-0.0143f}).setUlimit(new MFFloat316().getArray()).setLlimit(new MFFloat317().getArray())
                                                  .setShape(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32318().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f319().getArray()))
                                                      .addComments("from vc6 to vc5")
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addChild(new HAnimJoint().setName("vc5").setDEF("hanim_vc5").setCenter(new float[] {0.0066f,1.552f,-0.0082f}).setUlimit(new MFFloat320().getArray()).setLlimit(new MFFloat321().getArray())
                                                    .setShape(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32322().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f323().getArray()))
                                                        .addComments("from vc5 to vc4")
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                    .addChild(new HAnimJoint().setName("vc4").setDEF("hanim_vc4").setCenter(new float[] {0.0066f,1.5662f,-0.0084f}).setUlimit(new MFFloat324().getArray()).setLlimit(new MFFloat325().getArray())
                                                      .setShape(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32326().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f327().getArray()))
                                                          .addComments("from vc4 to vc3")
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addChild(new HAnimJoint().setName("vc3").setDEF("hanim_vc3").setCenter(new float[] {0.0066f,1.58f,-0.0103f}).setUlimit(new MFFloat328().getArray()).setLlimit(new MFFloat329().getArray())
                                                        .setShape(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32330().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f331().getArray()))
                                                            .addComments("from vc3 to vc2")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addHAnimSite(new HAnimSite().setName("adams_apple_pt").setDEF("hanim_adams_apple_pt").setTranslation(new float[] {0f,1f,0f})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite adams_apple_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimJoint().setName("vc2").setDEF("hanim_vc2").setCenter(new float[] {0.0066f,1.5928f,-0.0103f}).setUlimit(new MFFloat332().getArray()).setLlimit(new MFFloat333().getArray())
                                                          .setShape(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32334().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f335().getArray()))
                                                              .addComments("from vc2 to vc1")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimJoint().setName("vc1").setDEF("hanim_vc1").setCenter(new float[] {0.0066f,1.6144f,-0.0034f}).setUlimit(new MFFloat336().getArray()).setLlimit(new MFFloat337().getArray())
                                                            .setShape(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32338().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f339().getArray()))
                                                                .addComments("from vc1 to skullbase")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addHAnimSite(new HAnimSite().setName("glabella_pt").setDEF("hanim_glabella_pt").setTranslation(new float[] {0f,1f,0f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite glabella_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addHAnimSite(new HAnimSite().setName("l_ectocanthus_pt").setDEF("hanim_l_ectocanthus_pt").setTranslation(new float[] {0f,1f,0f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite l_ectocanthus_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addHAnimSite(new HAnimSite().setName("l_infraorbitale_pt").setDEF("hanim_l_infraorbitale_pt").setTranslation(new float[] {0.0341f,1.6171f,0.0752f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite l_infraorbitale_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addHAnimSite(new HAnimSite().setName("l_tragion_pt").setDEF("hanim_l_tragion_pt").setTranslation(new float[] {0.0739f,1.6348f,0.0282f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite l_tragion_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addHAnimSite(new HAnimSite().setName("nuchale_pt").setDEF("hanim_nuchale_pt").setTranslation(new float[] {0.0039f,1.5972f,-0.0796f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite nuchale_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addHAnimSite(new HAnimSite().setName("opisthocranion_pt").setDEF("hanim_opisthocranion_pt").setTranslation(new float[] {0f,1f,0f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite opisthocranion_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addHAnimSite(new HAnimSite().setName("r_ectocanthus_pt").setDEF("hanim_r_ectocanthus_pt").setTranslation(new float[] {0f,1f,0f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite r_ectocanthus_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addHAnimSite(new HAnimSite().setName("r_infraorbitale_pt").setDEF("hanim_r_infraorbitale_pt").setTranslation(new float[] {-0.0237f,1.6171f,0.0752f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite r_infraorbitale_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addHAnimSite(new HAnimSite().setName("r_tragion_pt").setDEF("hanim_r_tragion_pt").setTranslation(new float[] {-0.0646f,1.6347f,0.0302f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite r_tragion_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addHAnimSite(new HAnimSite().setName("sellion_pt").setDEF("hanim_sellion_pt").setTranslation(new float[] {0.0058f,1.6316f,0.0852f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite sellion_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addHAnimSite(new HAnimSite().setName("skull_vertex_pt").setDEF("hanim_skull_vertex_pt").setTranslation(new float[] {0.005f,1.7504f,0.0055f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite skull_vertex_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                            .addChild(new HAnimJoint().setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0.0044f,1.6209f,0.0236f}).setUlimit(new MFFloat340().getArray()).setLlimit(new MFFloat341().getArray())
                                                              .setShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32342().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f343().getArray()))
                                                                  .addComments("from skullbase to l_eyelid_joint")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32344().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f345().getArray()))
                                                                  .addComments("from skullbase to r_eyelid_joint")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32346().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f347().getArray()))
                                                                  .addComments("from skullbase to l_eyeball_joint")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32348().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f349().getArray()))
                                                                  .addComments("from skullbase to r_eyeball_joint")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32350().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f351().getArray()))
                                                                  .addComments("from skullbase to l_eyebrow_joint")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32352().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f353().getArray()))
                                                                  .addComments("from skullbase to r_eyebrow_joint")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32354().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f355().getArray()))
                                                                  .addComments("from skullbase to temporomandibular")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addHAnimSite(new HAnimSite().setName("l_gonion_pt").setDEF("hanim_l_gonion_pt").setTranslation(new float[] {0.0631f,1.553f,0.033f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite l_gonion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addHAnimSite(new HAnimSite().setName("menton_pt").setDEF("hanim_menton_pt").setTranslation(new float[] {0f,1f,0f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite menton_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addHAnimSite(new HAnimSite().setName("r_gonion_pt").setDEF("hanim_r_gonion_pt").setTranslation(new float[] {-0.052f,1.5529f,0.0347f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite r_gonion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addHAnimSite(new HAnimSite().setName("supramenton_pt").setDEF("hanim_supramenton_pt").setTranslation(new float[] {0.0061f,1.541f,0.0805f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite supramenton_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimJoint().setName("l_eyelid_joint").setDEF("hanim_l_eyelid_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat356().getArray()).setLlimit(new MFFloat357().getArray()))
                                                              .addChild(new HAnimJoint().setName("r_eyelid_joint").setDEF("hanim_r_eyelid_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat358().getArray()).setLlimit(new MFFloat359().getArray()))
                                                              .addChild(new HAnimJoint().setName("l_eyeball_joint").setDEF("hanim_l_eyeball_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat360().getArray()).setLlimit(new MFFloat361().getArray()))
                                                              .addChild(new HAnimJoint().setName("r_eyeball_joint").setDEF("hanim_r_eyeball_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat362().getArray()).setLlimit(new MFFloat363().getArray()))
                                                              .addChild(new HAnimJoint().setName("l_eyebrow_joint").setDEF("hanim_l_eyebrow_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat364().getArray()).setLlimit(new MFFloat365().getArray()))
                                                              .addChild(new HAnimJoint().setName("r_eyebrow_joint").setDEF("hanim_r_eyebrow_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat366().getArray()).setLlimit(new MFFloat367().getArray()))
                                                              .addChild(new HAnimJoint().setName("temporomandibular").setDEF("hanim_temporomandibular").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat368().getArray()).setLlimit(new MFFloat369().getArray()))))))))))
                                              .addChild(new HAnimJoint().setName("l_sternoclavicular").setDEF("hanim_l_sternoclavicular").setCenter(new float[] {0.082f,1.4488f,-0.0353f}).setUlimit(new MFFloat370().getArray()).setLlimit(new MFFloat371().getArray())
                                                .setShape(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32372().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f373().getArray()))
                                                    .addComments("from l_sternoclavicular to l_acromioclavicular")
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addChild(new HAnimJoint().setName("l_acromioclavicular").setDEF("hanim_l_acromioclavicular").setCenter(new float[] {0.0962f,1.4269f,-0.0424f}).setUlimit(new MFFloat374().getArray()).setLlimit(new MFFloat375().getArray())
                                                  .setShape(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32376().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f377().getArray()))
                                                      .addComments("from l_acromioclavicular to l_shoulder")
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addHAnimSite(new HAnimSite().setName("l_bideltoid_pt").setDEF("hanim_l_bideltoid_pt").setTranslation(new float[] {0f,1f,0f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_bideltoid_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addHAnimSite(new HAnimSite().setName("l_humeral_lateral_epicondyles_pt").setDEF("hanim_l_humeral_lateral_epicondyles_pt").setTranslation(new float[] {0.228f,1.1482f,-0.11f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_lateral_epicondyles_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimJoint().setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {0.2029f,1.4376f,-0.0387f}).setUlimit(new MFFloat378().getArray()).setLlimit(new MFFloat379().getArray())
                                                    .setShape(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32380().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f381().getArray()))
                                                        .addComments("from l_shoulder to l_elbow")
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                    .addHAnimSite(new HAnimSite().setName("l_humeral_medial_epicondyles_pt").setDEF("hanim_l_humeral_medial_epicondyles_pt").setTranslation(new float[] {0.1735f,1.1272f,-0.1113f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_medial_epicondyles_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addHAnimSite(new HAnimSite().setName("l_olecranon_pt").setDEF("hanim_l_olecranon_pt").setTranslation(new float[] {-0.1962f,1.1375f,-0.1123f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite l_olecranon_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addHAnimSite(new HAnimSite().setName("l_radial_styloid_pt").setDEF("hanim_l_radial_styloid_pt").setTranslation(new float[] {0.1901f,0.8645f,-0.0415f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite l_radial_styloid_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addHAnimSite(new HAnimSite().setName("l_radiale_pt").setDEF("hanim_l_radiale_pt").setTranslation(new float[] {0.2182f,1.1212f,-0.1167f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite l_radiale_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimJoint().setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {0.2014f,1.1357f,-0.0682f}).setUlimit(new MFFloat382().getArray()).setLlimit(new MFFloat383().getArray())
                                                      .setShape(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32384().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f385().getArray()))
                                                          .addComments("from l_elbow to l_radiocarpal")
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addHAnimSite(new HAnimSite().setName("l_ulnar_styloid_pt").setDEF("hanim_l_ulnar_styloid_pt").setTranslation(new float[] {-0.2142f,0.8529f,-0.0648f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_ulnar_styloid_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimJoint().setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setCenter(new float[] {0.1984f,0.8663f,-0.0583f}).setUlimit(new MFFloat386().getArray()).setLlimit(new MFFloat387().getArray())
                                                        .setShape(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32388().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f389().getArray()))
                                                            .addComments("from l_radiocarpal to l_midcarpal_1")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addShape(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32390().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f391().getArray()))
                                                            .addComments("from l_radiocarpal to l_midcarpal_2")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addShape(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32392().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f393().getArray()))
                                                            .addComments("from l_radiocarpal to l_midcarpal_3")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addShape(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32394().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f395().getArray()))
                                                            .addComments("from l_radiocarpal to l_midcarpal_4_5")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new HAnimJoint().setName("l_midcarpal_1").setDEF("hanim_l_midcarpal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat396().getArray()).setLlimit(new MFFloat397().getArray())
                                                          .setShape(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32398().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f399().getArray()))
                                                              .addComments("from l_midcarpal_1 to l_carpometacarpal_1")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_1").setDEF("hanim_l_carpometacarpal_1").setCenter(new float[] {0.1924f,0.8472f,-0.0534f}).setUlimit(new MFFloat400().getArray()).setLlimit(new MFFloat401().getArray())
                                                            .setShape(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32402().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f403().getArray()))
                                                                .addComments("from l_carpometacarpal_1 to l_metacarpophalangeal_1")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_1").setDEF("hanim_l_metacarpophalangeal_1").setCenter(new float[] {0.1951f,0.8226f,0.0246f}).setUlimit(new MFFloat404().getArray()).setLlimit(new MFFloat405().getArray())
                                                              .setShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32406().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f407().getArray()))
                                                                  .addComments("from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addHAnimSite(new HAnimSite().setName("l_carpal_distal_phalanx_1_tip").setDEF("hanim_l_carpal_distal_phalanx_1_tip").setTranslation(new float[] {0f,1f,0f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_1_tip"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimJoint().setName("l_carpal_interphalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setCenter(new float[] {0.1955f,0.8159f,0.0464f}).setUlimit(new MFFloat408().getArray()).setLlimit(new MFFloat409().getArray())))))
                                                        .addChild(new HAnimJoint().setName("l_midcarpal_2").setDEF("hanim_l_midcarpal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat410().getArray()).setLlimit(new MFFloat411().getArray())
                                                          .setShape(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32412().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f413().getArray()))
                                                              .addComments("from l_midcarpal_2 to l_carpometacarpal_2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addHAnimSite(new HAnimSite().setName("l_metacarpal_phalanx_2_pt").setDEF("hanim_l_metacarpal_phalanx_2_pt").setTranslation(new float[] {0.2009f,0.8139f,-0.0237f})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_phalanx_2_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_2").setDEF("hanim_l_carpometacarpal_2").setCenter(new float[] {0.1983f,0.8024f,-0.028f}).setUlimit(new MFFloat414().getArray()).setLlimit(new MFFloat415().getArray())
                                                            .setShape(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32416().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f417().getArray()))
                                                                .addComments("from l_carpometacarpal_2 to l_metacarpophalangeal_2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_2").setDEF("hanim_l_metacarpophalangeal_2").setCenter(new float[] {0.1983f,0.7815f,-0.028f}).setUlimit(new MFFloat418().getArray()).setLlimit(new MFFloat419().getArray())
                                                              .setShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32420().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f421().getArray()))
                                                                  .addComments("from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setCenter(new float[] {0.2017f,0.7363f,-0.0248f}).setUlimit(new MFFloat422().getArray()).setLlimit(new MFFloat423().getArray())
                                                                .setShape(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32424().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f425().getArray()))
                                                                    .addComments("from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addHAnimSite(new HAnimSite().setName("l_carpal_distal_phalanx_2_tip").setDEF("hanim_l_carpal_distal_phalanx_2_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_2_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addHAnimSite(new HAnimSite().setName("l_dactylion_pt").setDEF("hanim_l_dactylion_pt").setTranslation(new float[] {0.2056f,0.6743f,-0.0482f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_dactylion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setCenter(new float[] {0.2028f,0.7139f,-0.0236f}).setUlimit(new MFFloat426().getArray()).setLlimit(new MFFloat427().getArray()))))))
                                                        .addChild(new HAnimJoint().setName("l_midcarpal_3").setDEF("hanim_l_midcarpal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat428().getArray()).setLlimit(new MFFloat429().getArray())
                                                          .setShape(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32430().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f431().getArray()))
                                                              .addComments("from l_midcarpal_3 to l_carpometacarpal_3")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addHAnimSite(new HAnimSite().setName("l_metacarpal_phalanx_3_pt").setDEF("hanim_l_metacarpal_phalanx_3_pt").setTranslation(new float[] {0f,1f,0f})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_phalanx_3_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_3").setDEF("hanim_l_carpometacarpal_3").setCenter(new float[] {0.1987f,0.8029f,-0.053f}).setUlimit(new MFFloat432().getArray()).setLlimit(new MFFloat433().getArray())
                                                            .setShape(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32434().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f435().getArray()))
                                                                .addComments("from l_carpometacarpal_3 to l_metacarpophalangeal_3")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_3").setDEF("hanim_l_metacarpophalangeal_3").setCenter(new float[] {0.1987f,0.7818f,-0.053f}).setUlimit(new MFFloat436().getArray()).setLlimit(new MFFloat437().getArray())
                                                              .setShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32438().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f439().getArray()))
                                                                  .addComments("from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setCenter(new float[] {0.2013f,0.7273f,-0.0503f}).setUlimit(new MFFloat440().getArray()).setLlimit(new MFFloat441().getArray())
                                                                .setShape(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32442().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f443().getArray()))
                                                                    .addComments("from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addHAnimSite(new HAnimSite().setName("l_carpal_distal_phalanx_3_tip").setDEF("hanim_l_carpal_distal_phalanx_3_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_3_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setCenter(new float[] {0.2026f,0.7011f,-0.0494f}).setUlimit(new MFFloat444().getArray()).setLlimit(new MFFloat445().getArray()))))))
                                                        .addChild(new HAnimJoint().setName("l_midcarpal_4_5").setDEF("hanim_l_midcarpal_4_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat446().getArray()).setLlimit(new MFFloat447().getArray())
                                                          .setShape(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32448().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f449().getArray()))
                                                              .addComments("from l_midcarpal_4_5 to l_carpometacarpal_4")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addShape(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32450().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f451().getArray()))
                                                              .addComments("from l_midcarpal_4_5 to l_carpometacarpal_5")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addHAnimSite(new HAnimSite().setName("l_metacarpal_phalanx_5_pt").setDEF("hanim_l_metacarpal_phalanx_5_pt").setTranslation(new float[] {0.1929f,0.786f,-0.1122f})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_phalanx_5_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_4").setDEF("hanim_l_carpometacarpal_4").setCenter(new float[] {0.1956f,0.8019f,-0.0794f}).setUlimit(new MFFloat452().getArray()).setLlimit(new MFFloat453().getArray())
                                                            .setShape(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32454().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f455().getArray()))
                                                                .addComments("from l_carpometacarpal_4 to l_metacarpophalangeal_4")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_4").setDEF("hanim_l_metacarpophalangeal_4").setCenter(new float[] {0.1956f,0.7815f,-0.0794f}).setUlimit(new MFFloat456().getArray()).setLlimit(new MFFloat457().getArray())
                                                              .setShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32458().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f459().getArray()))
                                                                  .addComments("from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setCenter(new float[] {0.1973f,0.7287f,-0.0777f}).setUlimit(new MFFloat460().getArray()).setLlimit(new MFFloat461().getArray())
                                                                .setShape(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32462().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f463().getArray()))
                                                                    .addComments("from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addHAnimSite(new HAnimSite().setName("l_carpal_distal_phalanx_4_tip").setDEF("hanim_l_carpal_distal_phalanx_4_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_4_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setCenter(new float[] {0.1983f,0.7045f,-0.0767f}).setUlimit(new MFFloat464().getArray()).setLlimit(new MFFloat465().getArray())))))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_5").setDEF("hanim_l_carpometacarpal_5").setCenter(new float[] {0.1925f,0.8066f,-0.1036f}).setUlimit(new MFFloat466().getArray()).setLlimit(new MFFloat467().getArray())
                                                            .setShape(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32468().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f469().getArray()))
                                                                .addComments("from l_carpometacarpal_5 to l_metacarpophalangeal_5")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_5").setDEF("hanim_l_metacarpophalangeal_5").setCenter(new float[] {0.1925f,0.7866f,-0.1036f}).setUlimit(new MFFloat470().getArray()).setLlimit(new MFFloat471().getArray())
                                                              .setShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32472().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f473().getArray()))
                                                                  .addComments("from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_5").setCenter(new float[] {0.1938f,0.7452f,-0.1024f}).setUlimit(new MFFloat474().getArray()).setLlimit(new MFFloat475().getArray())
                                                                .setShape(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32476().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f477().getArray()))
                                                                    .addComments("from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addHAnimSite(new HAnimSite().setName("l_carpal_distal_phalanx_5_tip").setDEF("hanim_l_carpal_distal_phalanx_5_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_5_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_5").setDEF("hanim_l_carpal_distal_interphalangeal_5").setCenter(new float[] {0.1948f,0.7277f,-0.1017f}).setUlimit(new MFFloat478().getArray()).setLlimit(new MFFloat479().getArray())))))))))))
                                              .addChild(new HAnimJoint().setName("r_sternoclavicular").setDEF("hanim_r_sternoclavicular").setCenter(new float[] {-0.0694f,1.46f,-0.033f}).setUlimit(new MFFloat480().getArray()).setLlimit(new MFFloat481().getArray())
                                                .setShape(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32482().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f483().getArray()))
                                                    .addComments("from r_sternoclavicular to r_acromioclavicular")
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addChild(new HAnimJoint().setName("r_acromioclavicular").setDEF("hanim_r_acromioclavicular").setCenter(new float[] {-0.0836f,1.4281f,-0.0401f}).setUlimit(new MFFloat484().getArray()).setLlimit(new MFFloat485().getArray())
                                                  .setShape(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32486().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f487().getArray()))
                                                      .addComments("from r_acromioclavicular to r_shoulder")
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addHAnimSite(new HAnimSite().setName("r_bideltoid_pt").setDEF("hanim_r_bideltoid_pt").setTranslation(new float[] {0f,1f,0f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_bideltoid_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addHAnimSite(new HAnimSite().setName("r_humeral_lateral_epicondyles_pt").setDEF("hanim_r_humeral_lateral_epicondyles_pt").setTranslation(new float[] {-0.2224f,1.1517f,-0.1033f})
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_lateral_epicondyles_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimJoint().setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-0.1907f,1.4407f,-0.0325f}).setUlimit(new MFFloat488().getArray()).setLlimit(new MFFloat489().getArray())
                                                    .setShape(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32490().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f491().getArray()))
                                                        .addComments("from r_shoulder to r_elbow")
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                    .addHAnimSite(new HAnimSite().setName("r_humeral_medial_epicondyles_pt").setDEF("hanim_r_humeral_medial_epicondyles_pt").setTranslation(new float[] {-0.168f,1.1298f,-0.1062f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_medial_epicondyles_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addHAnimSite(new HAnimSite().setName("r_olecranon_pt").setDEF("hanim_r_olecranon_pt").setTranslation(new float[] {-0.1907f,1.1405f,-0.1065f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite r_olecranon_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addHAnimSite(new HAnimSite().setName("r_radial_styloid_pt").setDEF("hanim_r_radial_styloid_pt").setTranslation(new float[] {-0.1884f,0.8676f,-0.036f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite r_radial_styloid_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addHAnimSite(new HAnimSite().setName("r_radiale_pt").setDEF("hanim_r_radiale_pt").setTranslation(new float[] {-0.213f,1.1305f,-0.1091f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite r_radiale_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimJoint().setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-0.1949f,1.1388f,-0.062f}).setUlimit(new MFFloat492().getArray()).setLlimit(new MFFloat493().getArray())
                                                      .setShape(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32494().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f495().getArray()))
                                                          .addComments("from r_elbow to r_radiocarpal")
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addHAnimSite(new HAnimSite().setName("r_ulnar_styloid_pt").setDEF("hanim_r_ulnar_styloid_pt").setTranslation(new float[] {-0.2117f,0.8562f,-0.0584f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_ulnar_styloid_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimJoint().setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setCenter(new float[] {-0.1959f,0.8694f,-0.0521f}).setUlimit(new MFFloat496().getArray()).setLlimit(new MFFloat497().getArray())
                                                        .setShape(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32498().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f499().getArray()))
                                                            .addComments("from r_radiocarpal to r_midcarpal_1")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addShape(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32500().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f501().getArray()))
                                                            .addComments("from r_radiocarpal to r_midcarpal_2")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addShape(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32502().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f503().getArray()))
                                                            .addComments("from r_radiocarpal to r_midcarpal_3")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addShape(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32504().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f505().getArray()))
                                                            .addComments("from r_radiocarpal to r_midcarpal_4_5")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new HAnimJoint().setName("r_midcarpal_1").setDEF("hanim_r_midcarpal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat506().getArray()).setLlimit(new MFFloat507().getArray())
                                                          .setShape(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32508().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f509().getArray()))
                                                              .addComments("from r_midcarpal_1 to r_carpometacarpal_1")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_1").setDEF("hanim_r_carpometacarpal_1").setCenter(new float[] {-0.1899f,0.8502f,-0.0473f}).setUlimit(new MFFloat510().getArray()).setLlimit(new MFFloat511().getArray())
                                                            .setShape(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32512().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f513().getArray()))
                                                                .addComments("from r_carpometacarpal_1 to r_metacarpophalangeal_1")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_1").setDEF("hanim_r_metacarpophalangeal_1").setCenter(new float[] {-0.1874f,0.8256f,0.0306f}).setUlimit(new MFFloat514().getArray()).setLlimit(new MFFloat515().getArray())
                                                              .setShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32516().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f517().getArray()))
                                                                  .addComments("from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addHAnimSite(new HAnimSite().setName("r_carpal_distal_phalanx_1_tip").setDEF("hanim_r_carpal_distal_phalanx_1_tip").setTranslation(new float[] {0f,1f,0f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_1_tip"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimJoint().setName("r_carpal_interphalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setCenter(new float[] {-0.1864f,0.819f,0.0506f}).setUlimit(new MFFloat518().getArray()).setLlimit(new MFFloat519().getArray())))))
                                                        .addChild(new HAnimJoint().setName("r_midcarpal_2").setDEF("hanim_r_midcarpal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat520().getArray()).setLlimit(new MFFloat521().getArray())
                                                          .setShape(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32522().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f523().getArray()))
                                                              .addComments("from r_midcarpal_2 to r_carpometacarpal_2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addHAnimSite(new HAnimSite().setName("r_metacarpal_phalanx_2_pt").setDEF("hanim_r_metacarpal_phalanx_2_pt").setTranslation(new float[] {-0.1977f,0.8169f,-0.0177f})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_phalanx_2_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_2").setDEF("hanim_r_carpometacarpal_2").setCenter(new float[] {-0.1961f,0.8055f,-0.0218f}).setUlimit(new MFFloat524().getArray()).setLlimit(new MFFloat525().getArray())
                                                            .setShape(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32526().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f527().getArray()))
                                                                .addComments("from r_carpometacarpal_2 to r_metacarpophalangeal_2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_2").setDEF("hanim_r_metacarpophalangeal_2").setCenter(new float[] {-0.1961f,0.7846f,-0.0218f}).setUlimit(new MFFloat528().getArray()).setLlimit(new MFFloat529().getArray())
                                                              .setShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32530().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f531().getArray()))
                                                                  .addComments("from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-0.1954f,0.7393f,-0.0185f}).setUlimit(new MFFloat532().getArray()).setLlimit(new MFFloat533().getArray())
                                                                .setShape(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32534().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f535().getArray()))
                                                                    .addComments("from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addHAnimSite(new HAnimSite().setName("r_carpal_distal_phalanx_2_tip").setDEF("hanim_r_carpal_distal_phalanx_2_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_2_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addHAnimSite(new HAnimSite().setName("r_dactylion_pt").setDEF("hanim_r_dactylion_pt").setTranslation(new float[] {-0.1941f,0.6772f,-0.0423f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_dactylion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setCenter(new float[] {-0.1945f,0.7169f,-0.0173f}).setUlimit(new MFFloat536().getArray()).setLlimit(new MFFloat537().getArray()))))))
                                                        .addChild(new HAnimJoint().setName("r_midcarpal_3").setDEF("hanim_r_midcarpal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat538().getArray()).setLlimit(new MFFloat539().getArray())
                                                          .setShape(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32540().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f541().getArray()))
                                                              .addComments("from r_midcarpal_3 to r_carpometacarpal_3")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addHAnimSite(new HAnimSite().setName("r_metacarpal_phalanx_3_pt").setDEF("hanim_r_metacarpal_phalanx_3_pt").setTranslation(new float[] {0f,1f,0f})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_phalanx_3_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_3").setDEF("hanim_r_carpometacarpal_3").setCenter(new float[] {-0.1972f,0.806f,-0.0468f}).setUlimit(new MFFloat542().getArray()).setLlimit(new MFFloat543().getArray())
                                                            .setShape(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32544().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f545().getArray()))
                                                                .addComments("from r_carpometacarpal_3 to r_metacarpophalangeal_3")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_3").setDEF("hanim_r_metacarpophalangeal_3").setCenter(new float[] {-0.1972f,0.7849f,-0.0468f}).setUlimit(new MFFloat546().getArray()).setLlimit(new MFFloat547().getArray())
                                                              .setShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32548().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f549().getArray()))
                                                                  .addComments("from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-0.195f,0.7304f,-0.0441f}).setUlimit(new MFFloat550().getArray()).setLlimit(new MFFloat551().getArray())
                                                                .setShape(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32552().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f553().getArray()))
                                                                    .addComments("from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addHAnimSite(new HAnimSite().setName("r_carpal_distal_phalanx_3_tip").setDEF("hanim_r_carpal_distal_phalanx_3_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_3_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setCenter(new float[] {-0.1939f,0.7042f,-0.0432f}).setUlimit(new MFFloat554().getArray()).setLlimit(new MFFloat555().getArray()))))))
                                                        .addChild(new HAnimJoint().setName("r_midcarpal_4_5").setDEF("hanim_r_midcarpal_4_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat556().getArray()).setLlimit(new MFFloat557().getArray())
                                                          .setShape(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32558().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f559().getArray()))
                                                              .addComments("from r_midcarpal_4_5 to r_carpometacarpal_4")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addShape(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32560().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f561().getArray()))
                                                              .addComments("from r_midcarpal_4_5 to r_carpometacarpal_5")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addHAnimSite(new HAnimSite().setName("r_metacarpal_phalanx_5_pt").setDEF("hanim_r_metacarpal_phalanx_5_pt").setTranslation(new float[] {-0.1929f,0.789f,-0.1064f})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_phalanx_5_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_4").setDEF("hanim_r_carpometacarpal_4").setCenter(new float[] {-0.1951f,0.8049f,-0.0732f}).setUlimit(new MFFloat562().getArray()).setLlimit(new MFFloat563().getArray())
                                                            .setShape(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32564().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f565().getArray()))
                                                                .addComments("from r_carpometacarpal_4 to r_metacarpophalangeal_4")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_4").setDEF("hanim_r_metacarpophalangeal_4").setCenter(new float[] {-0.1951f,0.7845f,-0.0732f}).setUlimit(new MFFloat566().getArray()).setLlimit(new MFFloat567().getArray())
                                                              .setShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32568().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f569().getArray()))
                                                                  .addComments("from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setCenter(new float[] {-0.192f,0.7318f,-0.0716f}).setUlimit(new MFFloat570().getArray()).setLlimit(new MFFloat571().getArray())
                                                                .setShape(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32572().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f573().getArray()))
                                                                    .addComments("from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addHAnimSite(new HAnimSite().setName("r_carpal_distal_phalanx_4_tip").setDEF("hanim_r_carpal_distal_phalanx_4_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_4_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setCenter(new float[] {-0.1908f,0.7077f,-0.0706f}).setUlimit(new MFFloat574().getArray()).setLlimit(new MFFloat575().getArray())))))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_5").setDEF("hanim_r_carpometacarpal_5").setCenter(new float[] {-0.1926f,0.8096f,-0.0975f}).setUlimit(new MFFloat576().getArray()).setLlimit(new MFFloat577().getArray())
                                                            .setShape(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32578().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f579().getArray()))
                                                                .addComments("from r_carpometacarpal_5 to r_metacarpophalangeal_5")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_5").setDEF("hanim_r_metacarpophalangeal_5").setCenter(new float[] {-0.1926f,0.7896f,-0.0975f}).setUlimit(new MFFloat580().getArray()).setLlimit(new MFFloat581().getArray())
                                                              .setShape(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32582().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f583().getArray()))
                                                                  .addComments("from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_5").setCenter(new float[] {-0.1902f,0.7483f,-0.0963f}).setUlimit(new MFFloat584().getArray()).setLlimit(new MFFloat585().getArray())
                                                                .setShape(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32586().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f587().getArray()))
                                                                    .addComments("from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addHAnimSite(new HAnimSite().setName("r_carpal_distal_phalanx_5_tip").setDEF("hanim_r_carpal_distal_phalanx_5_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_5_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_5").setDEF("hanim_r_carpal_distal_interphalangeal_5").setCenter(new float[] {-0.1908f,0.754f,-0.096f}).setUlimit(new MFFloat588().getArray()).setLlimit(new MFFloat589().getArray())))))))))))))))))))))))))))))
          .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint().setUSE("hanim_sacroiliac"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_hip"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_talocrural"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_talocalcaneonavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_cuneonavicular_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_interphalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_cuneonavicular_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_cuneonavicular_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_calcaneocuboid"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_transversetarsal"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_hip"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_talocrural"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_talocalcaneonavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_interphalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_calcaneocuboid"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_transversetarsal"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl5"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl4"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl3"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl2"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl1"))
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
          .addJoints(new HAnimJoint().setUSE("hanim_vc4"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc3"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc2"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc1"))
          .addJoints(new HAnimJoint().setUSE("hanim_skullbase"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_eyelid_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_eyelid_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_eyeball_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_eyeball_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_eyebrow_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_eyebrow_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_temporomandibular"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_sternoclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_acromioclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_radiocarpal"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_4_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_sternoclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_acromioclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_radiocarpal"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_4_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_5"))
          .addSites(new HAnimSite().setUSE("hanim_buttocks_standing_wall_contact_point_pt"))
          .addSites(new HAnimSite().setUSE("hanim_crotch_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_asis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_iliocristale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_psis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_trochanterion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_asis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_iliocristale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_psis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_trochanterion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_navel_pt"))
          .addSites(new HAnimSite().setUSE("hanim_waist_preferred_anterior_pt"))
          .addSites(new HAnimSite().setUSE("hanim_waist_preferred_posterior_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_femoral_lateral_epicondyles_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_femoral_medial_epicondyles_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_knee_crease_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_suprapatella_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_femoral_lateral_epicondyles_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_femoral_medial_epicondyles_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_knee_crease_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_suprapatella_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_lateral_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_medial_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_tibiale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_calcaneus_posterior_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_sphyrion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metatarsal_phalanx_1_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_tarsal_distal_phalanx_1_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_tarsal_distal_phalanx_2_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_tarsal_distal_phalanx_3_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_tarsal_distal_phalanx_4_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_metatarsal_phalanx_5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_tarsal_distal_phalanx_5_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_lateral_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_medial_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_tibiale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_calcaneus_posterior_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_sphyrion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metatarsal_phalanx_1_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_tarsal_distal_phalanx_1_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_tarsal_distal_phalanx_2_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_tarsal_distal_phalanx_3_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_tarsal_distal_phalanx_4_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_metatarsal_phalanx_5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_tarsal_distal_phalanx_5_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_rib10_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_rib10_pt"))
          .addSites(new HAnimSite().setUSE("hanim_spine_2_middle_back_pt"))
          .addSites(new HAnimSite().setUSE("hanim_substernale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_thelion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_thelion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_chest_midsagittal_plane_pt"))
          .addSites(new HAnimSite().setUSE("hanim_mesosternale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_chest_midsagittal_plane_pt"))
          .addSites(new HAnimSite().setUSE("hanim_rear_center_midsagittal_plane_pt"))
          .addSites(new HAnimSite().setUSE("hanim_spine_1_middle_back_pt"))
          .addSites(new HAnimSite().setUSE("hanim_cervicale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_suprasternale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_neck_base_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_neck_base_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_acromion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_axilla_distal_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_axilla_posterior_folds_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_axilla_proximal_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_clavicale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_acromion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_axilla_distal_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_axilla_posterior_folds_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_axilla_proximal_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_clavicale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_adams_apple_pt"))
          .addSites(new HAnimSite().setUSE("hanim_glabella_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_ectocanthus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_infraorbitale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_tragion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_nuchale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_opisthocranion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_ectocanthus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_infraorbitale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_tragion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_sellion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_skull_vertex_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_gonion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_menton_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_gonion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_supramenton_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_bideltoid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_humeral_lateral_epicondyles_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_humeral_medial_epicondyles_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_olecranon_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_radial_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_radiale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_ulnar_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_carpal_distal_phalanx_1_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_metacarpal_phalanx_2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_carpal_distal_phalanx_2_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_dactylion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metacarpal_phalanx_3_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_carpal_distal_phalanx_3_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_metacarpal_phalanx_5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_carpal_distal_phalanx_4_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_carpal_distal_phalanx_5_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_bideltoid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_humeral_lateral_epicondyles_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_humeral_medial_epicondyles_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_olecranon_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_radial_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_radiale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_ulnar_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_carpal_distal_phalanx_1_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_metacarpal_phalanx_2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_carpal_distal_phalanx_2_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_dactylion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metacarpal_phalanx_3_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_carpal_distal_phalanx_3_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_metacarpal_phalanx_5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_carpal_distal_phalanx_4_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_carpal_distal_phalanx_5_tip"))))      ;
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.1000f,0.0000f,0.0000f,0.0000f,0.1000f,0.0000f,0.0000f,0.0000f,0.1000f});
  }
}
protected class MFColor3 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1.0000f,0.0000f,0.0000f,0.0000f,0.6000f,0.0000f,0.0000f,0.0000f,1.0000f});
  }
}
protected class MFInt324 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFColorRGBA5 {
  protected org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1.0000f,1.0000f,0.0000f,1.0000f,1.0000f,1.0000f,0.0000f,0.1000f});
  }
}
protected class MFVec3f6 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0500f,0.0000f,0.0000f,0.0500f,0.0000f,0.0000f});
  }
}
protected class MFString7 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"humanoidVersion=2.0"});
  }
}
protected class MFFloat8 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat9 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f11 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.8240f,0.0277f,0.0000f,0.9149f,0.0016f});
  }
}
protected class MFInt3212 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f13 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.8240f,0.0277f,0.0028f,1.0568f,-0.0776f});
  }
}
protected class MFFloat14 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat15 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3216 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f17 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.9149f,0.0016f,0.0961f,0.9124f,-0.0001f});
  }
}
protected class MFInt3218 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f19 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.9149f,0.0016f,-0.0950f,0.9171f,0.0029f});
  }
}
protected class MFFloat20 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat21 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f23 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.1040f,0.4867f,0.0308f});
  }
}
protected class MFFloat24 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat25 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3226 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f27 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1040f,0.4867f,0.0308f,0.1101f,0.0656f,-0.0736f});
  }
}
protected class MFFloat28 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat29 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3230 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f31 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt3232 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f33 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat34 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat35 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3236 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f37 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt3238 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f39 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt3240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f41 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat42 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat43 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3244 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f45 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat46 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat47 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3248 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f49 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat50 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat51 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3252 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f53 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat54 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
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
protected class MFFloat57 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3258 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f59 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat60 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat61 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3262 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f63 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat64 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat65 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3266 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f67 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat68 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat69 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3270 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f71 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat72 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat73 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat74 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat75 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3276 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f77 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f81 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat82 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat83 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3284 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f85 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat86 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat87 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3288 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f89 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat90 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat91 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f95 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat96 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat97 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3298 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f99 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32100 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f101 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat102 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat103 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32104 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f105 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat106 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat107 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32108 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f109 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f113 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat114 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat115 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f119 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat120 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat121 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32122 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f123 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat124 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat125 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32126 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f127 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
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
protected class MFFloat130 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat131 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32132 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f133 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0950f,0.9171f,0.0029f,-0.0867f,0.4913f,0.0318f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f137 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0867f,0.4913f,0.0318f,-0.0801f,0.0712f,-0.0766f});
  }
}
protected class MFFloat138 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat139 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32140 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f141 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f,0.0712f,-0.0766f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32142 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f143 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f,0.0712f,-0.0766f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat144 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat145 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32146 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f147 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32148 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f149 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32150 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f151 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat152 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat153 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32154 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f155 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat156 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat157 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32158 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f159 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat160 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat161 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32162 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f163 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat164 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
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
protected class MFFloat167 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32168 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f169 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat170 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat171 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32172 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f173 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat174 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat175 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32176 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f177 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f181 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat182 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat183 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat184 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat185 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32186 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f187 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat188 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat189 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32190 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f191 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat192 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat193 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32194 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f195 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f199 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat200 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat201 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat202 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat203 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32204 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f205 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat206 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat207 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32208 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f209 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f211 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat212 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat213 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32214 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f215 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f219 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat220 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat221 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f223 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat224 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
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
protected class MFFloat227 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f229 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat230 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat231 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32232 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f233 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat234 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat235 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32236 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f237 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat238 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat239 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat240 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat241 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32242 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f243 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f,1.0568f,-0.0776f,0.0035f,1.0925f,-0.0787f});
  }
}
protected class MFFloat244 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat245 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32246 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f247 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0035f,1.0925f,-0.0787f,0.0041f,1.1276f,-0.0796f});
  }
}
protected class MFFloat248 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat249 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32250 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f251 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0041f,1.1276f,-0.0796f,0.0045f,1.1546f,-0.0800f});
  }
}
protected class MFFloat252 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat253 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32254 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f255 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.0800f,0.0048f,1.1912f,-0.0805f});
  }
}
protected class MFFloat256 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat257 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32258 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f259 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0048f,1.1912f,-0.0805f,0.0051f,1.2278f,-0.0808f});
  }
}
protected class MFFloat260 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat261 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32262 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f263 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0051f,1.2278f,-0.0808f,0.0053f,1.2679f,-0.0810f});
  }
}
protected class MFFloat264 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat265 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32266 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f267 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0053f,1.2679f,-0.0810f,0.0056f,1.2848f,-0.0822f});
  }
}
protected class MFFloat268 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat269 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32270 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f271 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f,1.2848f,-0.0822f,0.0057f,1.3126f,-0.0838f});
  }
}
protected class MFFloat272 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat273 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32274 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f275 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3126f,-0.0838f,0.0057f,1.3382f,-0.0845f});
  }
}
protected class MFFloat276 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat277 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32278 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f279 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3382f,-0.0845f,0.0058f,1.3625f,-0.0833f});
  }
}
protected class MFFloat280 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat281 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32282 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f283 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0058f,1.3625f,-0.0833f,0.0059f,1.3866f,-0.0800f});
  }
}
protected class MFFloat284 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat285 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32286 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f287 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0059f,1.3866f,-0.0800f,0.0060f,1.4102f,-0.0745f});
  }
}
protected class MFFloat288 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat289 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32290 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f291 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0060f,1.4102f,-0.0745f,0.0061f,1.4320f,-0.0675f});
  }
}
protected class MFFloat292 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat293 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32294 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f295 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0061f,1.4320f,-0.0675f,0.0062f,1.4583f,-0.0570f});
  }
}
protected class MFFloat296 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat297 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32298 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f299 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0062f,1.4583f,-0.0570f,0.0063f,1.4761f,-0.0484f});
  }
}
protected class MFFloat300 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat301 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32302 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f303 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0063f,1.4761f,-0.0484f,0.0065f,1.4951f,-0.0387f});
  }
}
protected class MFFloat304 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat305 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32306 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f307 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0066f,1.5132f,-0.0301f});
  }
}
protected class MFInt32308 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f309 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0820f,1.4488f,-0.0353f});
  }
}
protected class MFInt32310 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f311 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,-0.0694f,1.4600f,-0.0330f});
  }
}
protected class MFFloat312 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat313 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32314 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f315 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5132f,-0.0301f,0.0066f,1.5357f,-0.0143f});
  }
}
protected class MFFloat316 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat317 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32318 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f319 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5357f,-0.0143f,0.0066f,1.5520f,-0.0082f});
  }
}
protected class MFFloat320 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat321 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32322 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f323 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5520f,-0.0082f,0.0066f,1.5662f,-0.0084f});
  }
}
protected class MFFloat324 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat325 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32326 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f327 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5662f,-0.0084f,0.0066f,1.5800f,-0.0103f});
  }
}
protected class MFFloat328 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat329 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32330 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f331 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5800f,-0.0103f,0.0066f,1.5928f,-0.0103f});
  }
}
protected class MFFloat332 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat333 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32334 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f335 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5928f,-0.0103f,0.0066f,1.6144f,-0.0034f});
  }
}
protected class MFFloat336 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat337 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32338 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f339 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.6144f,-0.0034f,0.0044f,1.6209f,0.0236f});
  }
}
protected class MFFloat340 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat341 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32342 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f343 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32344 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f345 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32346 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f347 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32348 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f349 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32350 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f351 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32352 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f353 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32354 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f355 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat356 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat357 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat358 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat359 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat360 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat361 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat362 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat363 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat364 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat365 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat366 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat367 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat368 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat369 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat370 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat371 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32372 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f373 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0820f,1.4488f,-0.0353f,0.0962f,1.4269f,-0.0424f});
  }
}
protected class MFFloat374 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat375 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32376 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f377 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0962f,1.4269f,-0.0424f,0.2029f,1.4376f,-0.0387f});
  }
}
protected class MFFloat378 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat379 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32380 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f381 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f,1.4376f,-0.0387f,0.2014f,1.1357f,-0.0682f});
  }
}
protected class MFFloat382 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat383 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32384 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f385 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1984f,0.8663f,-0.0583f});
  }
}
protected class MFFloat386 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat387 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32388 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f389 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32390 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f391 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32392 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f393 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32394 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f395 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat396 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat397 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32398 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f399 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1924f,0.8472f,-0.0534f});
  }
}
protected class MFFloat400 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat401 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32402 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f403 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1924f,0.8472f,-0.0534f,0.1951f,0.8226f,0.0246f});
  }
}
protected class MFFloat404 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat405 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32406 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f407 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1951f,0.8226f,0.0246f,0.1955f,0.8159f,0.0464f});
  }
}
protected class MFFloat408 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat409 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat410 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat411 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32412 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f413 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.8024f,-0.0280f});
  }
}
protected class MFFloat414 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat415 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32416 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f417 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.8024f,-0.0280f,0.1983f,0.7815f,-0.0280f});
  }
}
protected class MFFloat418 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat419 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32420 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f421 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.7815f,-0.0280f,0.2017f,0.7363f,-0.0248f});
  }
}
protected class MFFloat422 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat423 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32424 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f425 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2017f,0.7363f,-0.0248f,0.2028f,0.7139f,-0.0236f});
  }
}
protected class MFFloat426 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat427 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat428 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat429 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32430 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f431 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.8029f,-0.0530f});
  }
}
protected class MFFloat432 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat433 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32434 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f435 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.8029f,-0.0530f,0.1987f,0.7818f,-0.0530f});
  }
}
protected class MFFloat436 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat437 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32438 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f439 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.7818f,-0.0530f,0.2013f,0.7273f,-0.0503f});
  }
}
protected class MFFloat440 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat441 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32442 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f443 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2013f,0.7273f,-0.0503f,0.2026f,0.7011f,-0.0494f});
  }
}
protected class MFFloat444 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat445 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat446 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat447 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32448 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f449 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.8019f,-0.0794f});
  }
}
protected class MFInt32450 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f451 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.8066f,-0.1036f});
  }
}
protected class MFFloat452 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat453 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32454 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f455 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.8019f,-0.0794f,0.1956f,0.7815f,-0.0794f});
  }
}
protected class MFFloat456 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat457 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32458 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f459 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.7815f,-0.0794f,0.1973f,0.7287f,-0.0777f});
  }
}
protected class MFFloat460 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat461 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32462 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f463 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1973f,0.7287f,-0.0777f,0.1983f,0.7045f,-0.0767f});
  }
}
protected class MFFloat464 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat465 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat466 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat467 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32468 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f469 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.8066f,-0.1036f,0.1925f,0.7866f,-0.1036f});
  }
}
protected class MFFloat470 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat471 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32472 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f473 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.7866f,-0.1036f,0.1938f,0.7452f,-0.1024f});
  }
}
protected class MFFloat474 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat475 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32476 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f477 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1938f,0.7452f,-0.1024f,0.1948f,0.7277f,-0.1017f});
  }
}
protected class MFFloat478 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat479 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat480 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat481 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32482 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f483 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0694f,1.4600f,-0.0330f,-0.0836f,1.4281f,-0.0401f});
  }
}
protected class MFFloat484 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat485 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32486 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f487 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0836f,1.4281f,-0.0401f,-0.1907f,1.4407f,-0.0325f});
  }
}
protected class MFFloat488 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat489 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32490 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f491 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1907f,1.4407f,-0.0325f,-0.1949f,1.1388f,-0.0620f});
  }
}
protected class MFFloat492 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat493 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32494 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f495 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1949f,1.1388f,-0.0620f,-0.1959f,0.8694f,-0.0521f});
  }
}
protected class MFFloat496 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat497 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32498 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f499 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32500 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f501 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32502 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f503 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFInt32504 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f505 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat506 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat507 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32508 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f509 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1899f,0.8502f,-0.0473f});
  }
}
protected class MFFloat510 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat511 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32512 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f513 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1899f,0.8502f,-0.0473f,-0.1874f,0.8256f,0.0306f});
  }
}
protected class MFFloat514 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat515 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32516 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f517 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1874f,0.8256f,0.0306f,-0.1864f,0.8190f,0.0506f});
  }
}
protected class MFFloat518 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat519 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat520 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat521 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32522 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f523 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f,0.8055f,-0.0218f});
  }
}
protected class MFFloat524 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat525 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32526 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f527 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f,0.8055f,-0.0218f,-0.1961f,0.7846f,-0.0218f});
  }
}
protected class MFFloat528 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat529 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32530 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f531 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f,0.7846f,-0.0218f,-0.1954f,0.7393f,-0.0185f});
  }
}
protected class MFFloat532 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat533 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32534 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f535 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1954f,0.7393f,-0.0185f,-0.1945f,0.7169f,-0.0173f});
  }
}
protected class MFFloat536 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat537 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat538 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat539 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32540 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f541 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f,0.8060f,-0.0468f});
  }
}
protected class MFFloat542 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat543 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32544 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f545 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f,0.8060f,-0.0468f,-0.1972f,0.7849f,-0.0468f});
  }
}
protected class MFFloat546 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat547 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32548 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f549 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f,0.7849f,-0.0468f,-0.1950f,0.7304f,-0.0441f});
  }
}
protected class MFFloat550 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat551 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32552 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f553 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1950f,0.7304f,-0.0441f,-0.1939f,0.7042f,-0.0432f});
  }
}
protected class MFFloat554 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat555 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat556 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat557 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32558 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f559 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f,0.8049f,-0.0732f});
  }
}
protected class MFInt32560 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1});
  }
}
protected class MFVec3f561 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f,0.8096f,-0.0975f});
  }
}
protected class MFFloat562 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat563 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32564 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f565 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f,0.8049f,-0.0732f,-0.1951f,0.7845f,-0.0732f});
  }
}
protected class MFFloat566 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat567 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32568 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f569 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f,0.7845f,-0.0732f,-0.1920f,0.7318f,-0.0716f});
  }
}
protected class MFFloat570 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat571 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32572 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f573 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1920f,0.7318f,-0.0716f,-0.1908f,0.7077f,-0.0706f});
  }
}
protected class MFFloat574 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat575 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat576 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat577 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32578 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f579 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f,0.8096f,-0.0975f,-0.1926f,0.7896f,-0.0975f});
  }
}
protected class MFFloat580 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat581 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32582 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f583 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f,0.7896f,-0.0975f,-0.1902f,0.7483f,-0.0963f});
  }
}
protected class MFFloat584 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat585 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32586 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f587 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1902f,0.7483f,-0.0963f,-0.1908f,0.7540f,-0.0960f});
  }
}
protected class MFFloat588 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat589 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
}
