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
public class JohnJoint20 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new JohnJoint20().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/JohnJoint20.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("JohnBoy.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d"))
        .addMeta(new meta().setName("description").setContent("An attempt at a standard LOA-4 skeleton"))
        .addMeta(new meta().setName("generator").setContent("h2.pl"))
        .addMeta(new meta().setName("modified").setContent("20 Jan 2023"))
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
            .addChild(new Transform().setTranslation(new float[] {0f,2f,0f})
              .addChild(new Shape().setDEF("HAnimRootShape")
                .setGeometry(new Sphere().setRadius(0.02f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("HAnimRootMaterial").setDiffuseColor(new float[] {0.8f,0f,0f}).setTransparency(0.3f)))))
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
          .addComments("<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)")
          .addComments("</LOD>")
          .addSkin(new Shape().setDEF("SkinShape")
            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3211().getArray().append(new MFInt3212().getArray()).append(new MFInt3213().getArray()).append(new MFInt3214().getArray())).setCreaseAngle(3.1f)
              .setCoord(new Coordinate().setDEF("TheSkinCoord").setPoint(new MFVec3f15().getArray().append(new MFVec3f16().getArray())))
              .setColor(new Color().setColor(new MFColor17().getArray().append(new MFColor18().getArray()).append(new MFColor19().getArray()))))
            .setAppearance(new Appearance().setDEF("SkinAppearance")
              .setTexture(new ImageTexture().setDEF("zBlueSpiralBkg2").setUrl(new MFString20().getArray()))
              .setMaterial(new Material().setDEF("SkinMaterial").setAmbientIntensity(0.6f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(0.6f).setTransparency(0.2f))))
          .setSkinCoord(new Coordinate().setUSE("TheSkinCoord"))
          .addSkeleton(new HAnimJoint().setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new float[] {0f,0.824f,0.0277f}).setUlimit(new MFFloat21().getArray()).setLlimit(new MFFloat22().getArray())
            .addChild(new HAnimSegment().setName("sacrum").setDEF("hanim_sacrum")
              .addDisplacers(new HAnimDisplacer().setName("sacrum_feature").setCoordIndex(new MFInt3223().getArray()).setDisplacements(new MFVec3f24().getArray()))
              .addDisplacers(new HAnimDisplacer().setName("sacrum_config").setCoordIndex(new MFInt3225().getArray()).setDisplacements(new MFVec3f26().getArray()))
              .addChild(new Transform()
                .addComments("Empty Transform")
                .addChild(new Transform()
                  .addComments("Empty Transform")
                  .addChild(new Shape().setUSE("HAnimJointShape"))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3227().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f28().getArray()))
                  .addComments("from humanoid_root to sacroiliac vertices 2")
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
              .addChild(new HAnimSite().setName("buttocks_standing_wall_contact_point_pt").setDEF("hanim_buttocks_standing_wall_contact_point_pt").setTranslation(new float[] {0f,1f,0f})
                .addChild(new TouchSensor().setDescription("HAnimSite buttocks_standing_wall_contact_point_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite().setName("crotch_pt").setDEF("hanim_crotch_pt").setTranslation(new float[] {0.0034f,0.8266f,0.0257f})
                .addChild(new TouchSensor().setDescription("HAnimSite crotch_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite().setName("l_asis_pt").setDEF("hanim_l_asis_pt").setTranslation(new float[] {0.0925f,0.9983f,0.1052f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_asis_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite().setName("l_iliocristale_pt").setDEF("hanim_l_iliocristale_pt").setTranslation(new float[] {0.1612f,1.0537f,0.0008f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_iliocristale_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite().setName("l_psis_pt").setDEF("hanim_l_psis_pt").setTranslation(new float[] {0.0774f,1.019f,-0.1151f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_psis_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite().setName("l_trochanterion_pt").setDEF("hanim_l_trochanterion_pt").setTranslation(new float[] {0.1677f,0.8336f,0.0303f})
                .addChild(new TouchSensor().setDescription("HAnimSite l_trochanterion_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite().setName("r_asis_pt").setDEF("hanim_r_asis_pt").setTranslation(new float[] {-0.0887f,1.0021f,0.1112f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_asis_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite().setName("r_iliocristale_pt").setDEF("hanim_r_iliocristale_pt").setTranslation(new float[] {-0.1525f,1.0628f,0.0035f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_iliocristale_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite().setName("r_psis_pt").setDEF("hanim_r_psis_pt").setTranslation(new float[] {-0.0716f,1.019f,-0.1138f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_psis_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite().setName("r_trochanterion_pt").setDEF("hanim_r_trochanterion_pt").setTranslation(new float[] {-0.1689f,0.8419f,0.0352f})
                .addChild(new TouchSensor().setDescription("HAnimSite r_trochanterion_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3229().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))
                  .addComments("from humanoid_root to vl5 vertices 2")
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
              .addChild(new HAnimSite().setName("navel_pt").setDEF("hanim_navel_pt").setTranslation(new float[] {0.0069f,1.0966f,0.1017f})
                .addChild(new TouchSensor().setDescription("HAnimSite navel_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite().setName("waist_preferred_anterior_pt").setDEF("hanim_waist_preferred_anterior_pt").setTranslation(new float[] {0f,1f,0f})
                .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_anterior_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite().setName("waist_preferred_posterior_pt").setDEF("hanim_waist_preferred_posterior_pt").setTranslation(new float[] {0.29f,1.0915f,-0.1091f})
                .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_posterior_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape"))))
            .addChild(new HAnimJoint().setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0f,0.9149f,0.0016f}).setUlimit(new MFFloat31().getArray()).setLlimit(new MFFloat32().getArray())
              .addChild(new HAnimSegment().setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new Transform()
                  .addComments("Empty Transform")
                  .addChild(new Transform()
                    .addComments("Empty Transform")
                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3233().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray()))
                    .addComments("from sacroiliac to l_hip vertices 2")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addChild(new HAnimSite().setName("l_femoral_lateral_epicondyles_pt").setDEF("hanim_l_femoral_lateral_epicondyles_pt").setTranslation(new float[] {0.1598f,0.4967f,0.0297f})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_lateral_epicondyles_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("l_femoral_medial_epicondyles_pt").setDEF("hanim_l_femoral_medial_epicondyles_pt").setTranslation(new float[] {0.0398f,0.4946f,0.0303f})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_medial_epicondyles_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("l_knee_crease_pt").setDEF("hanim_l_knee_crease_pt").setTranslation(new float[] {0.0993f,0.4881f,-0.0309f})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_knee_crease_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("l_suprapatella_pt").setDEF("hanim_l_suprapatella_pt").setTranslation(new float[] {0f,1f,0f})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_suprapatella_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3235().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f36().getArray()))
                    .addComments("from sacroiliac to r_hip vertices 2")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addChild(new HAnimSite().setName("r_femoral_lateral_epicondyles_pt").setDEF("hanim_r_femoral_lateral_epicondyles_pt").setTranslation(new float[] {-0.1421f,0.4992f,0.031f})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_lateral_epicondyles_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("r_femoral_medial_epicondyles_pt").setDEF("hanim_r_femoral_medial_epicondyles_pt").setTranslation(new float[] {-0.0221f,0.5014f,0.0289f})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_medial_epicondyles_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("r_knee_crease_pt").setDEF("hanim_r_knee_crease_pt").setTranslation(new float[] {-0.0825f,0.4932f,-0.0326f})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_knee_crease_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("r_suprapatella_pt").setDEF("hanim_r_suprapatella_pt").setTranslation(new float[] {0f,1f,0f})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_suprapatella_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
              .addChild(new HAnimJoint().setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {0.0961f,0.9124f,-0.0001f}).setUlimit(new MFFloat37().getArray()).setLlimit(new MFFloat38().getArray())
                .addChild(new HAnimSegment().setName("l_thigh").setDEF("hanim_l_thigh")
                  .addChild(new Transform()
                    .addComments("Empty Transform")
                    .addChild(new Transform()
                      .addComments("Empty Transform")
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3239().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f40().getArray()))
                      .addComments("from l_hip to l_knee vertices 2")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addChild(new HAnimSite().setName("l_lateral_malleolus_pt").setDEF("hanim_l_lateral_malleolus_pt").setTranslation(new float[] {0.1308f,0.0597f,-0.1032f})
                    .addChild(new TouchSensor().setDescription("HAnimSite l_lateral_malleolus_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("l_medial_malleolus_pt").setDEF("hanim_l_medial_malleolus_pt").setTranslation(new float[] {0.089f,0.0716f,-0.0881f})
                    .addChild(new TouchSensor().setDescription("HAnimSite l_medial_malleolus_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("l_tibiale_pt").setDEF("hanim_l_tibiale_pt").setTranslation(new float[] {0f,1f,0f})
                    .addChild(new TouchSensor().setDescription("HAnimSite l_tibiale_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint().setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {0.104f,0.4867f,0.0308f}).setUlimit(new MFFloat41().getArray()).setLlimit(new MFFloat42().getArray())
                  .addChild(new HAnimSegment().setName("l_calf").setDEF("hanim_l_calf")
                    .addChild(new Transform()
                      .addComments("Empty Transform")
                      .addChild(new Transform()
                        .addComments("Empty Transform")
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3243().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f44().getArray()))
                        .addComments("from l_knee to l_talocrural vertices 2")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimSite().setName("l_calcaneus_posterior_pt").setDEF("hanim_l_calcaneus_posterior_pt").setTranslation(new float[] {0.0974f,0.0259f,-0.1171f})
                      .addChild(new TouchSensor().setDescription("HAnimSite l_calcaneus_posterior_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                    .addChild(new HAnimSite().setName("l_sphyrion_pt").setDEF("hanim_l_sphyrion_pt").setTranslation(new float[] {0.089f,0.0575f,-0.0943f})
                      .addChild(new TouchSensor().setDescription("HAnimSite l_sphyrion_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                  .addChild(new HAnimJoint().setName("l_talocrural").setDEF("hanim_l_talocrural").setCenter(new float[] {0.1101f,0.0656f,-0.0736f}).setUlimit(new MFFloat45().getArray()).setLlimit(new MFFloat46().getArray())
                    .addChild(new HAnimSegment().setName("l_talus").setDEF("hanim_l_talus")
                      .addChild(new Transform().setScale(new float[] {0.15f,0.15f,0.15f}).setTranslation(new float[] {0.08f,0.06f,-0.025f}).setRotation(new float[] {1f,0f,0f,-1.57f})
                        .addComments("Transform left foot")
                        .addChild(new Transform()
                          .addComments("Empty Transform left foot")
                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3247().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f48().getArray()))
                          .addComments("from l_talocrural to l_talocalcaneonavicular vertices 2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3249().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray()))
                          .addComments("from l_talocrural to l_calcaneocuboid vertices 2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                    .addChild(new HAnimJoint().setName("l_talocalcaneonavicular").setDEF("hanim_l_talocalcaneonavicular").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat51().getArray()).setLlimit(new MFFloat52().getArray())
                      .addChild(new HAnimSegment().setName("l_navicular").setDEF("hanim_l_navicular")
                        .addChild(new Transform()
                          .addComments("Empty Transform")
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3253().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray()))
                            .addComments("from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3255().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f56().getArray()))
                            .addComments("from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3257().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f58().getArray()))
                            .addComments("from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint().setName("l_cuneonavicular_1").setDEF("hanim_l_cuneonavicular_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat59().getArray()).setLlimit(new MFFloat60().getArray())
                        .addChild(new HAnimSegment().setName("l_cuneiform_1").setDEF("hanim_l_cuneiform_1")
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3261().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f62().getArray()))
                              .addComments("from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_1").setDEF("hanim_l_tarsometatarsal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat63().getArray()).setLlimit(new MFFloat64().getArray())
                          .addChild(new HAnimSegment().setName("l_metatarsal_1").setDEF("hanim_l_metatarsal_1")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3265().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f66().getArray()))
                                .addComments("from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimSite().setName("l_metatarsal_phalanx_1_pt").setDEF("hanim_l_metatarsal_phalanx_1_pt").setTranslation(new float[] {0f,1f,0f})
                              .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_phalanx_1_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_1").setDEF("hanim_l_metatarsophalangeal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat67().getArray()).setLlimit(new MFFloat68().getArray())
                            .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_1").setDEF("hanim_l_tarsal_proximal_phalanx_1")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3269().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f70().getArray()))
                                  .addComments("from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite().setName("l_tarsal_distal_phalanx_1_tip").setDEF("hanim_l_tarsal_distal_phalanx_1_tip").setTranslation(new float[] {0f,1f,0f})
                                .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                            .addChild(new HAnimJoint().setName("l_tarsal_interphalangeal_1").setDEF("hanim_l_tarsal_interphalangeal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat71().getArray()).setLlimit(new MFFloat72().getArray())))))
                      .addChild(new HAnimJoint().setName("l_cuneonavicular_2").setDEF("hanim_l_cuneonavicular_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat73().getArray()).setLlimit(new MFFloat74().getArray())
                        .addChild(new HAnimSegment().setName("l_cuneiform_2").setDEF("hanim_l_cuneiform_2")
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3275().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f76().getArray()))
                              .addComments("from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_2").setDEF("hanim_l_tarsometatarsal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat77().getArray()).setLlimit(new MFFloat78().getArray())
                          .addChild(new HAnimSegment().setName("l_metatarsal_2").setDEF("hanim_l_metatarsal_2")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3279().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray()))
                                .addComments("from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_2").setDEF("hanim_l_metatarsophalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat81().getArray()).setLlimit(new MFFloat82().getArray())
                            .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_2").setDEF("hanim_l_tarsal_proximal_phalanx_2")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3283().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f84().getArray()))
                                  .addComments("from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_2").setDEF("hanim_l_tarsal_proximal_interphalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat85().getArray()).setLlimit(new MFFloat86().getArray())
                              .addChild(new HAnimSegment().setName("l_tarsal_middle_phalanx_2").setDEF("hanim_l_tarsal_middle_phalanx_2")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3287().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f88().getArray()))
                                    .addComments("from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite().setName("l_tarsal_distal_phalanx_2_tip").setDEF("hanim_l_tarsal_distal_phalanx_2_tip").setTranslation(new float[] {0.1195f,0.0079f,0.1433f})
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat89().getArray()).setLlimit(new MFFloat90().getArray()))))))
                      .addChild(new HAnimJoint().setName("l_cuneonavicular_3").setDEF("hanim_l_cuneonavicular_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat91().getArray()).setLlimit(new MFFloat92().getArray())
                        .addChild(new HAnimSegment().setName("l_cuneiform_3").setDEF("hanim_l_cuneiform_3")
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3293().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f94().getArray()))
                              .addComments("from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_3").setDEF("hanim_l_tarsometatarsal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat95().getArray()).setLlimit(new MFFloat96().getArray())
                          .addChild(new HAnimSegment().setName("l_metatarsal_3").setDEF("hanim_l_metatarsal_3")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3297().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray()))
                                .addComments("from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_3").setDEF("hanim_l_metatarsophalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat99().getArray()).setLlimit(new MFFloat100().getArray())
                            .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_3").setDEF("hanim_l_tarsal_proximal_phalanx_3")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32101().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f102().getArray()))
                                  .addComments("from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_3").setDEF("hanim_l_tarsal_proximal_interphalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat103().getArray()).setLlimit(new MFFloat104().getArray())
                              .addChild(new HAnimSegment().setName("l_tarsal_middle_phalanx_3").setDEF("hanim_l_tarsal_middle_phalanx_3")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32105().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f106().getArray()))
                                    .addComments("from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite().setName("l_tarsal_distal_phalanx_3_tip").setDEF("hanim_l_tarsal_distal_phalanx_3_tip").setTranslation(new float[] {0f,1f,0f})
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_3").setDEF("hanim_l_tarsal_distal_interphalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat107().getArray()).setLlimit(new MFFloat108().getArray())))))))
                    .addChild(new HAnimJoint().setName("l_calcaneocuboid").setDEF("hanim_l_calcaneocuboid").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat109().getArray()).setLlimit(new MFFloat110().getArray())
                      .addChild(new HAnimSegment().setName("l_calcaneus").setDEF("hanim_l_calcaneus")
                        .addChild(new Transform()
                          .addComments("Empty Transform")
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32111().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f112().getArray()))
                            .addComments("from l_calcaneocuboid to l_transversetarsal vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint().setName("l_transversetarsal").setDEF("hanim_l_transversetarsal").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat113().getArray()).setLlimit(new MFFloat114().getArray())
                        .addChild(new HAnimSegment().setName("l_cuboid").setDEF("hanim_l_cuboid")
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32115().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f116().getArray()))
                              .addComments("from l_transversetarsal to l_tarsometatarsal_4 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32117().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f118().getArray()))
                              .addComments("from l_transversetarsal to l_tarsometatarsal_5 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_4").setDEF("hanim_l_tarsometatarsal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat119().getArray()).setLlimit(new MFFloat120().getArray())
                          .addChild(new HAnimSegment().setName("l_metatarsal_4").setDEF("hanim_l_metatarsal_4")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32121().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f122().getArray()))
                                .addComments("from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_4").setDEF("hanim_l_metatarsophalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat123().getArray()).setLlimit(new MFFloat124().getArray())
                            .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_4").setDEF("hanim_l_tarsal_proximal_phalanx_4")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32125().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f126().getArray()))
                                  .addComments("from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_4").setDEF("hanim_l_tarsal_proximal_interphalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat127().getArray()).setLlimit(new MFFloat128().getArray())
                              .addChild(new HAnimSegment().setName("l_tarsal_middle_phalanx_4").setDEF("hanim_l_tarsal_middle_phalanx_4")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32129().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f130().getArray()))
                                    .addComments("from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite().setName("l_tarsal_distal_phalanx_4_tip").setDEF("hanim_l_tarsal_distal_phalanx_4_tip").setTranslation(new float[] {0f,1f,0f})
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_4").setDEF("hanim_l_tarsal_distal_interphalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat131().getArray()).setLlimit(new MFFloat132().getArray())))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_5").setDEF("hanim_l_tarsometatarsal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat133().getArray()).setLlimit(new MFFloat134().getArray())
                          .addChild(new HAnimSegment().setName("l_metatarsal_5").setDEF("hanim_l_metatarsal_5")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32135().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f136().getArray()))
                                .addComments("from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimSite().setName("l_metatarsal_phalanx_5_pt").setDEF("hanim_l_metatarsal_phalanx_5_pt").setTranslation(new float[] {0f,1f,0f})
                              .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_phalanx_5_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_5").setDEF("hanim_l_metatarsophalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat137().getArray()).setLlimit(new MFFloat138().getArray())
                            .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_5").setDEF("hanim_l_tarsal_proximal_phalanx_5")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32139().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f140().getArray()))
                                  .addComments("from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_5").setDEF("hanim_l_tarsal_proximal_interphalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat141().getArray()).setLlimit(new MFFloat142().getArray())
                              .addChild(new HAnimSegment().setName("l_tarsal_middle_phalanx_5").setDEF("hanim_l_tarsal_middle_phalanx_5")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32143().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f144().getArray()))
                                    .addComments("from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite().setName("l_tarsal_distal_phalanx_5_tip").setDEF("hanim_l_tarsal_distal_phalanx_5_tip").setTranslation(new float[] {0f,1f,0f})
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_5").setDEF("hanim_l_tarsal_distal_interphalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat145().getArray()).setLlimit(new MFFloat146().getArray()))))))))))
              .addChild(new HAnimJoint().setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-0.095f,0.9171f,0.0029f}).setUlimit(new MFFloat147().getArray()).setLlimit(new MFFloat148().getArray())
                .addChild(new HAnimSegment().setName("r_thigh").setDEF("hanim_r_thigh")
                  .addChild(new Transform()
                    .addComments("Empty Transform")
                    .addChild(new Transform()
                      .addComments("Empty Transform")
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32149().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f150().getArray()))
                      .addComments("from r_hip to r_knee vertices 2")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addChild(new HAnimSite().setName("r_lateral_malleolus_pt").setDEF("hanim_r_lateral_malleolus_pt").setTranslation(new float[] {-0.1006f,0.0658f,-0.1075f})
                    .addChild(new TouchSensor().setDescription("HAnimSite r_lateral_malleolus_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("r_medial_malleolus_pt").setDEF("hanim_r_medial_malleolus_pt").setTranslation(new float[] {-0.0591f,0.076f,-0.0928f})
                    .addChild(new TouchSensor().setDescription("HAnimSite r_medial_malleolus_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("r_tibiale_pt").setDEF("hanim_r_tibiale_pt").setTranslation(new float[] {0f,1f,0f})
                    .addChild(new TouchSensor().setDescription("HAnimSite r_tibiale_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint().setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-0.0867f,0.4913f,0.0318f}).setUlimit(new MFFloat151().getArray()).setLlimit(new MFFloat152().getArray())
                  .addChild(new HAnimSegment().setName("r_calf").setDEF("hanim_r_calf")
                    .addChild(new Transform()
                      .addComments("Empty Transform")
                      .addChild(new Transform()
                        .addComments("Empty Transform")
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32153().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f154().getArray()))
                        .addComments("from r_knee to r_talocrural vertices 2")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimSite().setName("r_calcaneus_posterior_pt").setDEF("hanim_r_calcaneus_posterior_pt").setTranslation(new float[] {-0.0692f,0.0297f,-0.1221f})
                      .addChild(new TouchSensor().setDescription("HAnimSite r_calcaneus_posterior_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                    .addChild(new HAnimSite().setName("r_sphyrion_pt").setDEF("hanim_r_sphyrion_pt").setTranslation(new float[] {-0.0603f,0.061f,-0.1002f})
                      .addChild(new TouchSensor().setDescription("HAnimSite r_sphyrion_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                  .addChild(new HAnimJoint().setName("r_talocrural").setDEF("hanim_r_talocrural").setCenter(new float[] {-0.0801f,0.0712f,-0.0766f}).setUlimit(new MFFloat155().getArray()).setLlimit(new MFFloat156().getArray())
                    .addChild(new HAnimSegment().setName("r_talus").setDEF("hanim_r_talus")
                      .addChild(new Transform().setScale(new float[] {0.15f,0.15f,0.15f}).setTranslation(new float[] {-0.05f,0.06f,-0.025f}).setRotation(new float[] {1f,0f,0f,-1.57f})
                        .addComments("Transform right foot")
                        .addChild(new Transform()
                          .addComments("Empty Transform right foot")
                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32157().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f158().getArray()))
                          .addComments("from r_talocrural to r_talocalcaneonavicular vertices 2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32159().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f160().getArray()))
                          .addComments("from r_talocrural to r_calcaneocuboid vertices 2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                    .addChild(new HAnimJoint().setName("r_talocalcaneonavicular").setDEF("hanim_r_talocalcaneonavicular").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat161().getArray()).setLlimit(new MFFloat162().getArray())
                      .addChild(new HAnimSegment().setName("r_navicular").setDEF("hanim_r_navicular")
                        .addChild(new Transform()
                          .addComments("Empty Transform")
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32163().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f164().getArray()))
                            .addComments("from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32165().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f166().getArray()))
                            .addComments("from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32167().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f168().getArray()))
                            .addComments("from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint().setName("r_cuneonavicular_1").setDEF("hanim_r_cuneonavicular_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat169().getArray()).setLlimit(new MFFloat170().getArray())
                        .addChild(new HAnimSegment().setName("r_cuneiform_1").setDEF("hanim_r_cuneiform_1")
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32171().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f172().getArray()))
                              .addComments("from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_1").setDEF("hanim_r_tarsometatarsal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat173().getArray()).setLlimit(new MFFloat174().getArray())
                          .addChild(new HAnimSegment().setName("r_metatarsal_1").setDEF("hanim_r_metatarsal_1")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32175().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f176().getArray()))
                                .addComments("from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimSite().setName("r_metatarsal_phalanx_1_pt").setDEF("hanim_r_metatarsal_phalanx_1_pt").setTranslation(new float[] {0f,1f,0f})
                              .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_phalanx_1_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_1").setDEF("hanim_r_metatarsophalangeal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat177().getArray()).setLlimit(new MFFloat178().getArray())
                            .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_1").setDEF("hanim_r_tarsal_proximal_phalanx_1")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32179().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f180().getArray()))
                                  .addComments("from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite().setName("r_tarsal_distal_phalanx_1_tip").setDEF("hanim_r_tarsal_distal_phalanx_1_tip").setTranslation(new float[] {0.1f,-1.05f,0f})
                                .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                            .addChild(new HAnimJoint().setName("r_tarsal_interphalangeal_1").setDEF("hanim_r_tarsal_interphalangeal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat181().getArray()).setLlimit(new MFFloat182().getArray())))))
                      .addChild(new HAnimJoint().setName("r_cuneonavicular_2").setDEF("hanim_r_cuneonavicular_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat183().getArray()).setLlimit(new MFFloat184().getArray())
                        .addChild(new HAnimSegment().setName("r_cuneiform_2").setDEF("hanim_r_cuneiform_2")
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32185().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f186().getArray()))
                              .addComments("from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_2").setDEF("hanim_r_tarsometatarsal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat187().getArray()).setLlimit(new MFFloat188().getArray())
                          .addChild(new HAnimSegment().setName("r_metatarsal_2").setDEF("hanim_r_metatarsal_2")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32189().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f190().getArray()))
                                .addComments("from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat191().getArray()).setLlimit(new MFFloat192().getArray())
                            .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32193().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f194().getArray()))
                                  .addComments("from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_2").setDEF("hanim_r_tarsal_proximal_interphalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat195().getArray()).setLlimit(new MFFloat196().getArray())
                              .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_2").setDEF("hanim_r_tarsal_middle_phalanx_2")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32197().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f198().getArray()))
                                    .addComments("from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite().setName("r_tarsal_distal_phalanx_2_tip").setDEF("hanim_r_tarsal_distal_phalanx_2_tip").setTranslation(new float[] {-0.05f,-1.12f,0f})
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat199().getArray()).setLlimit(new MFFloat200().getArray()))))))
                      .addChild(new HAnimJoint().setName("r_cuneonavicular_3").setDEF("hanim_r_cuneonavicular_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat201().getArray()).setLlimit(new MFFloat202().getArray())
                        .addChild(new HAnimSegment().setName("r_cuneiform_3").setDEF("hanim_r_cuneiform_3")
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32203().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f204().getArray()))
                              .addComments("from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_3").setDEF("hanim_r_tarsometatarsal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat205().getArray()).setLlimit(new MFFloat206().getArray())
                          .addChild(new HAnimSegment().setName("r_metatarsal_3").setDEF("hanim_r_metatarsal_3")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32207().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f208().getArray()))
                                .addComments("from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_3").setDEF("hanim_r_metatarsophalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat209().getArray()).setLlimit(new MFFloat210().getArray())
                            .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_3").setDEF("hanim_r_tarsal_proximal_phalanx_3")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32211().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f212().getArray()))
                                  .addComments("from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_3").setDEF("hanim_r_tarsal_proximal_interphalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat213().getArray()).setLlimit(new MFFloat214().getArray())
                              .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_3").setDEF("hanim_r_tarsal_middle_phalanx_3")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32215().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f216().getArray()))
                                    .addComments("from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite().setName("r_tarsal_distal_phalanx_3_tip").setDEF("hanim_r_tarsal_distal_phalanx_3_tip").setTranslation(new float[] {-0.15f,-1.13f,0f})
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_3").setDEF("hanim_r_tarsal_distal_interphalangeal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat217().getArray()).setLlimit(new MFFloat218().getArray())))))))
                    .addChild(new HAnimJoint().setName("r_calcaneocuboid").setDEF("hanim_r_calcaneocuboid").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat219().getArray()).setLlimit(new MFFloat220().getArray())
                      .addChild(new HAnimSegment().setName("r_calcaneus").setDEF("hanim_r_calcaneus")
                        .addChild(new Transform()
                          .addComments("Empty Transform")
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32221().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f222().getArray()))
                            .addComments("from r_calcaneocuboid to r_transversetarsal vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint().setName("r_transversetarsal").setDEF("hanim_r_transversetarsal").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat223().getArray()).setLlimit(new MFFloat224().getArray())
                        .addChild(new HAnimSegment().setName("r_cuboid").setDEF("hanim_r_cuboid")
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32225().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f226().getArray()))
                              .addComments("from r_transversetarsal to r_tarsometatarsal_4 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32227().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f228().getArray()))
                              .addComments("from r_transversetarsal to r_tarsometatarsal_5 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_4").setDEF("hanim_r_tarsometatarsal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat229().getArray()).setLlimit(new MFFloat230().getArray())
                          .addChild(new HAnimSegment().setName("r_metatarsal_4").setDEF("hanim_r_metatarsal_4")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32231().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f232().getArray()))
                                .addComments("from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_4").setDEF("hanim_r_metatarsophalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat233().getArray()).setLlimit(new MFFloat234().getArray())
                            .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_4").setDEF("hanim_r_tarsal_proximal_phalanx_4")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32235().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f236().getArray()))
                                  .addComments("from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_4").setDEF("hanim_r_tarsal_proximal_interphalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat237().getArray()).setLlimit(new MFFloat238().getArray())
                              .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_4").setDEF("hanim_r_tarsal_middle_phalanx_4")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32239().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f240().getArray()))
                                    .addComments("from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite().setName("r_tarsal_distal_phalanx_4_tip").setDEF("hanim_r_tarsal_distal_phalanx_4_tip").setTranslation(new float[] {-0.25f,-1.1f,0f})
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_4").setDEF("hanim_r_tarsal_distal_interphalangeal_4").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat241().getArray()).setLlimit(new MFFloat242().getArray())))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_5").setDEF("hanim_r_tarsometatarsal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat243().getArray()).setLlimit(new MFFloat244().getArray())
                          .addChild(new HAnimSegment().setName("r_metatarsal_5").setDEF("hanim_r_metatarsal_5")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32245().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f246().getArray()))
                                .addComments("from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimSite().setName("r_metatarsal_phalanx_5_pt").setDEF("hanim_r_metatarsal_phalanx_5_pt").setTranslation(new float[] {0f,1f,0f})
                              .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_phalanx_5_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_5").setDEF("hanim_r_metatarsophalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat247().getArray()).setLlimit(new MFFloat248().getArray())
                            .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_5").setDEF("hanim_r_tarsal_proximal_phalanx_5")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32249().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f250().getArray()))
                                  .addComments("from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_5").setDEF("hanim_r_tarsal_proximal_interphalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat251().getArray()).setLlimit(new MFFloat252().getArray())
                              .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_5").setDEF("hanim_r_tarsal_middle_phalanx_5")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32253().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f254().getArray()))
                                    .addComments("from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite().setName("r_tarsal_distal_phalanx_5_tip").setDEF("hanim_r_tarsal_distal_phalanx_5_tip").setTranslation(new float[] {-0.34f,-1.05f,0f})
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_5").setDEF("hanim_r_tarsal_distal_interphalangeal_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat255().getArray()).setLlimit(new MFFloat256().getArray())))))))))))
            .addChild(new HAnimJoint().setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0.0028f,1.0568f,-0.0776f}).setUlimit(new MFFloat257().getArray()).setLlimit(new MFFloat258().getArray())
              .addChild(new HAnimSegment().setName("l5").setDEF("hanim_l5")
                .addChild(new Transform()
                  .addComments("Empty Transform")
                  .addChild(new Transform()
                    .addComments("Empty Transform")
                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32259().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f260().getArray()))
                    .addComments("from vl5 to vl4 vertices 2")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
              .addChild(new HAnimJoint().setName("vl4").setDEF("hanim_vl4").setCenter(new float[] {0.0035f,1.0925f,-0.0787f}).setUlimit(new MFFloat261().getArray()).setLlimit(new MFFloat262().getArray())
                .addChild(new HAnimSegment().setName("l4").setDEF("hanim_l4")
                  .addChild(new Transform()
                    .addComments("Empty Transform")
                    .addChild(new Transform()
                      .addComments("Empty Transform")
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32263().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f264().getArray()))
                      .addComments("from vl4 to vl3 vertices 2")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                .addChild(new HAnimJoint().setName("vl3").setDEF("hanim_vl3").setCenter(new float[] {0.0041f,1.1276f,-0.0796f}).setUlimit(new MFFloat265().getArray()).setLlimit(new MFFloat266().getArray())
                  .addChild(new HAnimSegment().setName("l3").setDEF("hanim_l3")
                    .addChild(new Transform()
                      .addComments("Empty Transform")
                      .addChild(new Transform()
                        .addComments("Empty Transform")
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32267().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f268().getArray()))
                        .addComments("from vl3 to vl2 vertices 2")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimSite().setName("l_rib10_pt").setDEF("hanim_l_rib10_pt").setTranslation(new float[] {0.0871f,1.1925f,0.0992f})
                      .addChild(new TouchSensor().setDescription("HAnimSite l_rib10_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                    .addChild(new HAnimSite().setName("r_rib10_pt").setDEF("hanim_r_rib10_pt").setTranslation(new float[] {-0.0711f,1.1941f,0.1016f})
                      .addChild(new TouchSensor().setDescription("HAnimSite r_rib10_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                    .addChild(new HAnimSite().setName("spine_2_middle_back_pt").setDEF("hanim_spine_2_middle_back_pt").setTranslation(new float[] {0f,1f,0f})
                      .addChild(new TouchSensor().setDescription("HAnimSite spine_2_middle_back_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                  .addChild(new HAnimJoint().setName("vl2").setDEF("hanim_vl2").setCenter(new float[] {0.0045f,1.1546f,-0.08f}).setUlimit(new MFFloat269().getArray()).setLlimit(new MFFloat270().getArray())
                    .addChild(new HAnimSegment().setName("l2").setDEF("hanim_l2")
                      .addChild(new Transform()
                        .addComments("Empty Transform")
                        .addChild(new Transform()
                          .addComments("Empty Transform")
                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32271().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f272().getArray()))
                          .addComments("from vl2 to vl1 vertices 2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                    .addChild(new HAnimJoint().setName("vl1").setDEF("hanim_vl1").setCenter(new float[] {0.0048f,1.1912f,-0.0805f}).setUlimit(new MFFloat273().getArray()).setLlimit(new MFFloat274().getArray())
                      .addChild(new HAnimSegment().setName("l1").setDEF("hanim_l1")
                        .addChild(new Transform()
                          .addComments("Empty Transform")
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32275().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f276().getArray()))
                            .addComments("from vl1 to vt12 vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint().setName("vt12").setDEF("hanim_vt12").setCenter(new float[] {0.0051f,1.2278f,-0.0808f}).setUlimit(new MFFloat277().getArray()).setLlimit(new MFFloat278().getArray())
                        .addChild(new HAnimSegment().setName("t12").setDEF("hanim_t12")
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32279().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f280().getArray()))
                              .addComments("from vt12 to vt11 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint().setName("vt11").setDEF("hanim_vt11").setCenter(new float[] {0.0053f,1.2679f,-0.081f}).setUlimit(new MFFloat281().getArray()).setLlimit(new MFFloat282().getArray())
                          .addChild(new HAnimSegment().setName("t11").setDEF("hanim_t11")
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32283().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f284().getArray()))
                                .addComments("from vt11 to vt10 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimSite().setName("substernale_pt").setDEF("hanim_substernale_pt").setTranslation(new float[] {0.0085f,1.2995f,0.1147f})
                              .addChild(new TouchSensor().setDescription("HAnimSite substernale_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                          .addChild(new HAnimJoint().setName("vt10").setDEF("hanim_vt10").setCenter(new float[] {0.0056f,1.2848f,-0.0822f}).setUlimit(new MFFloat285().getArray()).setLlimit(new MFFloat286().getArray())
                            .addChild(new HAnimSegment().setName("t10").setDEF("hanim_t10")
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32287().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f288().getArray()))
                                  .addComments("from vt10 to vt9 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite().setName("l_thelion_pt").setDEF("hanim_l_thelion_pt").setTranslation(new float[] {0.0918f,1.3382f,0.1192f})
                                .addChild(new TouchSensor().setDescription("HAnimSite l_thelion_pt"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimSite().setName("r_thelion_pt").setDEF("hanim_r_thelion_pt").setTranslation(new float[] {-0.0736f,1.3385f,0.1217f})
                                .addChild(new TouchSensor().setDescription("HAnimSite r_thelion_pt"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                            .addChild(new HAnimJoint().setName("vt9").setDEF("hanim_vt9").setCenter(new float[] {0.0057f,1.3126f,-0.0838f}).setUlimit(new MFFloat289().getArray()).setLlimit(new MFFloat290().getArray())
                              .addChild(new HAnimSegment().setName("t9").setDEF("hanim_t9")
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32291().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f292().getArray()))
                                    .addComments("from vt9 to vt8 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimJoint().setName("vt8").setDEF("hanim_vt8").setCenter(new float[] {0.0057f,1.3382f,-0.0845f}).setUlimit(new MFFloat293().getArray()).setLlimit(new MFFloat294().getArray())
                                .addChild(new HAnimSegment().setName("t8").setDEF("hanim_t8")
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Transform()
                                      .addComments("Empty Transform")
                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32295().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f296().getArray()))
                                      .addComments("from vt8 to vt7 vertices 2")
                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                .addChild(new HAnimJoint().setName("vt7").setDEF("hanim_vt7").setCenter(new float[] {0.0058f,1.3625f,-0.0833f}).setUlimit(new MFFloat297().getArray()).setLlimit(new MFFloat298().getArray())
                                  .addChild(new HAnimSegment().setName("t7").setDEF("hanim_t7")
                                    .addChild(new Transform()
                                      .addComments("Empty Transform")
                                      .addChild(new Transform()
                                        .addComments("Empty Transform")
                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                    .addChild(new Shape()
                                      .setGeometry(new LineSet().setVertexCount(new MFInt32299().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f300().getArray()))
                                        .addComments("from vt7 to vt6 vertices 2")
                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                    .addChild(new HAnimSite().setName("l_chest_midsagittal_plane_pt").setDEF("hanim_l_chest_midsagittal_plane_pt").setTranslation(new float[] {0f,1f,0f})
                                      .addChild(new TouchSensor().setDescription("HAnimSite l_chest_midsagittal_plane_pt"))
                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                    .addChild(new HAnimSite().setName("mesosternale_pt").setDEF("hanim_mesosternale_pt").setTranslation(new float[] {0f,1f,0f})
                                      .addChild(new TouchSensor().setDescription("HAnimSite mesosternale_pt"))
                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                    .addChild(new HAnimSite().setName("r_chest_midsagittal_plane_pt").setDEF("hanim_r_chest_midsagittal_plane_pt").setTranslation(new float[] {0f,1f,0f})
                                      .addChild(new TouchSensor().setDescription("HAnimSite r_chest_midsagittal_plane_pt"))
                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                    .addChild(new HAnimSite().setName("rear_center_midsagittal_plane_pt").setDEF("hanim_rear_center_midsagittal_plane_pt").setTranslation(new float[] {0f,1f,0f})
                                      .addChild(new TouchSensor().setDescription("HAnimSite rear_center_midsagittal_plane_pt"))
                                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                  .addChild(new HAnimJoint().setName("vt6").setDEF("hanim_vt6").setCenter(new float[] {0.0059f,1.3866f,-0.08f}).setUlimit(new MFFloat301().getArray()).setLlimit(new MFFloat302().getArray())
                                    .addChild(new HAnimSegment().setName("t6").setDEF("hanim_t6")
                                      .addChild(new Transform()
                                        .addComments("Empty Transform")
                                        .addChild(new Transform()
                                          .addComments("Empty Transform")
                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                      .addChild(new Shape()
                                        .setGeometry(new LineSet().setVertexCount(new MFInt32303().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f304().getArray()))
                                          .addComments("from vt6 to vt5 vertices 2")
                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                      .addChild(new HAnimSite().setName("spine_1_middle_back_pt").setDEF("hanim_spine_1_middle_back_pt").setTranslation(new float[] {0f,1f,0f})
                                        .addChild(new TouchSensor().setDescription("HAnimSite spine_1_middle_back_pt"))
                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                    .addChild(new HAnimJoint().setName("vt5").setDEF("hanim_vt5").setCenter(new float[] {0.006f,1.4102f,-0.0745f}).setUlimit(new MFFloat305().getArray()).setLlimit(new MFFloat306().getArray())
                                      .addChild(new HAnimSegment().setName("t5").setDEF("hanim_t5")
                                        .addChild(new Transform()
                                          .addComments("Empty Transform")
                                          .addChild(new Transform()
                                            .addComments("Empty Transform")
                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                        .addChild(new Shape()
                                          .setGeometry(new LineSet().setVertexCount(new MFInt32307().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f308().getArray()))
                                            .addComments("from vt5 to vt4 vertices 2")
                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                      .addChild(new HAnimJoint().setName("vt4").setDEF("hanim_vt4").setCenter(new float[] {0.0061f,1.432f,-0.0675f}).setUlimit(new MFFloat309().getArray()).setLlimit(new MFFloat310().getArray())
                                        .addChild(new HAnimSegment().setName("t4").setDEF("hanim_t4")
                                          .addChild(new Transform()
                                            .addComments("Empty Transform")
                                            .addChild(new Transform()
                                              .addComments("Empty Transform")
                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                          .addChild(new Shape()
                                            .setGeometry(new LineSet().setVertexCount(new MFInt32311().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f312().getArray()))
                                              .addComments("from vt4 to vt3 vertices 2")
                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                        .addChild(new HAnimJoint().setName("vt3").setDEF("hanim_vt3").setCenter(new float[] {0.0062f,1.4583f,-0.057f}).setUlimit(new MFFloat313().getArray()).setLlimit(new MFFloat314().getArray())
                                          .addChild(new HAnimSegment().setName("t3").setDEF("hanim_t3")
                                            .addChild(new Transform()
                                              .addComments("Empty Transform")
                                              .addChild(new Transform()
                                                .addComments("Empty Transform")
                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                            .addChild(new Shape()
                                              .setGeometry(new LineSet().setVertexCount(new MFInt32315().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f316().getArray()))
                                                .addComments("from vt3 to vt2 vertices 2")
                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                          .addChild(new HAnimJoint().setName("vt2").setDEF("hanim_vt2").setCenter(new float[] {0.0063f,1.4761f,-0.0484f}).setUlimit(new MFFloat317().getArray()).setLlimit(new MFFloat318().getArray())
                                            .addChild(new HAnimSegment().setName("t2").setDEF("hanim_t2")
                                              .addChild(new Transform()
                                                .addComments("Empty Transform")
                                                .addChild(new Transform()
                                                  .addComments("Empty Transform")
                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                              .addChild(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32319().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f320().getArray()))
                                                  .addComments("from vt2 to vt1 vertices 2")
                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                              .addChild(new HAnimSite().setName("cervicale_pt").setDEF("hanim_cervicale_pt").setTranslation(new float[] {0.0064f,1.52f,-0.0815f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite cervicale_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new HAnimSite().setName("suprasternale_pt").setDEF("hanim_suprasternale_pt").setTranslation(new float[] {0.0084f,1.4714f,0.0551f})
                                                .addChild(new TouchSensor().setDescription("HAnimSite suprasternale_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                            .addChild(new HAnimJoint().setName("vt1").setDEF("hanim_vt1").setCenter(new float[] {0.0065f,1.4951f,-0.0387f}).setUlimit(new MFFloat321().getArray()).setLlimit(new MFFloat322().getArray())
                                              .addChild(new HAnimSegment().setName("t1").setDEF("hanim_t1")
                                                .addChild(new Transform()
                                                  .addComments("Empty Transform")
                                                  .addChild(new Transform()
                                                    .addComments("Empty Transform")
                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32323().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f324().getArray()))
                                                    .addComments("from vt1 to vc7 vertices 2")
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addChild(new HAnimSite().setName("l_neck_base_pt").setDEF("hanim_l_neck_base_pt").setTranslation(new float[] {0.0646f,1.5141f,-0.038f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_neck_base_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite().setName("r_neck_base_pt").setDEF("hanim_r_neck_base_pt").setTranslation(new float[] {-0.0419f,1.5149f,-0.022f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_neck_base_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32325().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f326().getArray()))
                                                    .addComments("from vt1 to l_sternoclavicular vertices 2")
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addChild(new HAnimSite().setName("l_acromion_pt").setDEF("hanim_l_acromion_pt").setTranslation(new float[] {0.2032f,1.476f,-0.049f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_acromion_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite().setName("l_axilla_distal_pt").setDEF("hanim_l_axilla_distal_pt").setTranslation(new float[] {0.1706f,1.4072f,-0.0875f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_distal_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite().setName("l_axilla_posterior_folds_pt").setDEF("hanim_l_axilla_posterior_folds_pt").setTranslation(new float[] {0f,1f,0f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_posterior_folds_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite().setName("l_axilla_proximal_pt").setDEF("hanim_l_axilla_proximal_pt").setTranslation(new float[] {0.1777f,1.4065f,-0.0075f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_proximal_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite().setName("l_clavicale_pt").setDEF("hanim_l_clavicale_pt").setTranslation(new float[] {0.0271f,1.4943f,0.0394f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_clavicale_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32327().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f328().getArray()))
                                                    .addComments("from vt1 to r_sternoclavicular vertices 2")
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addChild(new HAnimSite().setName("r_acromion_pt").setDEF("hanim_r_acromion_pt").setTranslation(new float[] {-0.1905f,1.4791f,-0.0431f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_acromion_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite().setName("r_axilla_distal_pt").setDEF("hanim_r_axilla_distal_pt").setTranslation(new float[] {-0.1603f,1.4098f,-0.0826f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_distal_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite().setName("r_axilla_posterior_folds_pt").setDEF("hanim_r_axilla_posterior_folds_pt").setTranslation(new float[] {0f,1f,0f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_posterior_folds_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite().setName("r_axilla_proximal_pt").setDEF("hanim_r_axilla_proximal_pt").setTranslation(new float[] {-0.1626f,1.4072f,-0.0031f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_proximal_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite().setName("r_clavicale_pt").setDEF("hanim_r_clavicale_pt").setTranslation(new float[] {-0.0115f,1.4943f,0.04f})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_clavicale_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                              .addChild(new HAnimJoint().setName("vc7").setDEF("hanim_vc7").setCenter(new float[] {0.0066f,1.5132f,-0.0301f}).setUlimit(new MFFloat329().getArray()).setLlimit(new MFFloat330().getArray())
                                                .addChild(new HAnimSegment().setName("c7").setDEF("hanim_c7")
                                                  .addChild(new Transform()
                                                    .addComments("Empty Transform")
                                                    .addChild(new Transform()
                                                      .addComments("Empty Transform")
                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32331().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f332().getArray()))
                                                      .addComments("from vc7 to vc6 vertices 2")
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                .addChild(new HAnimJoint().setName("vc6").setDEF("hanim_vc6").setCenter(new float[] {0.0066f,1.5357f,-0.0143f}).setUlimit(new MFFloat333().getArray()).setLlimit(new MFFloat334().getArray())
                                                  .addChild(new HAnimSegment().setName("c6").setDEF("hanim_c6")
                                                    .addChild(new Transform()
                                                      .addComments("Empty Transform")
                                                      .addChild(new Transform()
                                                        .addComments("Empty Transform")
                                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32335().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f336().getArray()))
                                                        .addComments("from vc6 to vc5 vertices 2")
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimJoint().setName("vc5").setDEF("hanim_vc5").setCenter(new float[] {0.0066f,1.552f,-0.0082f}).setUlimit(new MFFloat337().getArray()).setLlimit(new MFFloat338().getArray())
                                                    .addChild(new HAnimSegment().setName("c5").setDEF("hanim_c5")
                                                      .addChild(new Transform()
                                                        .addComments("Empty Transform")
                                                        .addChild(new Transform()
                                                          .addComments("Empty Transform")
                                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32339().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f340().getArray()))
                                                          .addComments("from vc5 to vc4 vertices 2")
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                    .addChild(new HAnimJoint().setName("vc4").setDEF("hanim_vc4").setCenter(new float[] {0.0066f,1.5662f,-0.0084f}).setUlimit(new MFFloat341().getArray()).setLlimit(new MFFloat342().getArray())
                                                      .addChild(new HAnimSegment().setName("c4").setDEF("hanim_c4")
                                                        .addChild(new Transform()
                                                          .addComments("Empty Transform")
                                                          .addChild(new Transform()
                                                            .addComments("Empty Transform")
                                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32343().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f344().getArray()))
                                                            .addComments("from vc4 to vc3 vertices 2")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                      .addChild(new HAnimJoint().setName("vc3").setDEF("hanim_vc3").setCenter(new float[] {0.0066f,1.58f,-0.0103f}).setUlimit(new MFFloat345().getArray()).setLlimit(new MFFloat346().getArray())
                                                        .addChild(new HAnimSegment().setName("c3").setDEF("hanim_c3")
                                                          .addChild(new Transform()
                                                            .addComments("Empty Transform")
                                                            .addChild(new Transform()
                                                              .addComments("Empty Transform")
                                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32347().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f348().getArray()))
                                                              .addComments("from vc3 to vc2 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimSite().setName("adams_apple_pt").setDEF("hanim_adams_apple_pt").setTranslation(new float[] {0f,1f,0f})
                                                            .addChild(new TouchSensor().setDescription("HAnimSite adams_apple_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                        .addChild(new HAnimJoint().setName("vc2").setDEF("hanim_vc2").setCenter(new float[] {0.0066f,1.5928f,-0.0103f}).setUlimit(new MFFloat349().getArray()).setLlimit(new MFFloat350().getArray())
                                                          .addChild(new HAnimSegment().setName("c2").setDEF("hanim_c2")
                                                            .addChild(new Transform()
                                                              .addComments("Empty Transform")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32351().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f352().getArray()))
                                                                .addComments("from vc2 to vc1 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("vc1").setDEF("hanim_vc1").setCenter(new float[] {0.0066f,1.6144f,-0.0034f}).setUlimit(new MFFloat353().getArray()).setLlimit(new MFFloat354().getArray())
                                                            .addChild(new HAnimSegment().setName("c1").setDEF("hanim_c1")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32355().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f356().getArray()))
                                                                  .addComments("from vc1 to skullbase vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimSite().setName("glabella_pt").setDEF("hanim_glabella_pt").setTranslation(new float[] {0f,1f,0f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite glabella_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite().setName("l_ectocanthus_pt").setDEF("hanim_l_ectocanthus_pt").setTranslation(new float[] {0f,1f,0f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite l_ectocanthus_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite().setName("l_infraorbitale_pt").setDEF("hanim_l_infraorbitale_pt").setTranslation(new float[] {0.0341f,1.6171f,0.0752f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite l_infraorbitale_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite().setName("l_tragion_pt").setDEF("hanim_l_tragion_pt").setTranslation(new float[] {0.0739f,1.6348f,0.0282f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite l_tragion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite().setName("nuchale_pt").setDEF("hanim_nuchale_pt").setTranslation(new float[] {0.0039f,1.5972f,-0.0796f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite nuchale_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite().setName("opisthocranion_pt").setDEF("hanim_opisthocranion_pt").setTranslation(new float[] {0f,1f,0f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite opisthocranion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite().setName("r_ectocanthus_pt").setDEF("hanim_r_ectocanthus_pt").setTranslation(new float[] {0f,1f,0f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite r_ectocanthus_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite().setName("r_infraorbitale_pt").setDEF("hanim_r_infraorbitale_pt").setTranslation(new float[] {-0.0237f,1.6171f,0.0752f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite r_infraorbitale_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite().setName("r_tragion_pt").setDEF("hanim_r_tragion_pt").setTranslation(new float[] {-0.0646f,1.6347f,0.0302f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite r_tragion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite().setName("sellion_pt").setDEF("hanim_sellion_pt").setTranslation(new float[] {0.0058f,1.6316f,0.0852f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite sellion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite().setName("skull_vertex_pt").setDEF("hanim_skull_vertex_pt").setTranslation(new float[] {0.005f,1.7504f,0.0055f})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite skull_vertex_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                            .addChild(new HAnimJoint().setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0.0044f,1.6209f,0.0236f}).setUlimit(new MFFloat357().getArray()).setLlimit(new MFFloat358().getArray())
                                                              .addChild(new HAnimSegment().setName("skull").setDEF("hanim_skull")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32359().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f360().getArray()))
                                                                    .addComments("from skullbase to l_eyelid_joint vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32361().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f362().getArray()))
                                                                    .addComments("from skullbase to r_eyelid_joint vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32363().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f364().getArray()))
                                                                    .addComments("from skullbase to l_eyeball_joint vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32365().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f366().getArray()))
                                                                    .addComments("from skullbase to r_eyeball_joint vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32367().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f368().getArray()))
                                                                    .addComments("from skullbase to l_eyebrow_joint vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32369().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f370().getArray()))
                                                                    .addComments("from skullbase to r_eyebrow_joint vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32371().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f372().getArray()))
                                                                    .addComments("from skullbase to temporomandibular vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new HAnimSite().setName("l_gonion_pt").setDEF("hanim_l_gonion_pt").setTranslation(new float[] {0.0631f,1.553f,0.033f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_gonion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("menton_pt").setDEF("hanim_menton_pt").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite menton_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("r_gonion_pt").setDEF("hanim_r_gonion_pt").setTranslation(new float[] {-0.052f,1.5529f,0.0347f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_gonion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("supramenton_pt").setDEF("hanim_supramenton_pt").setTranslation(new float[] {0.0061f,1.541f,0.0805f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite supramenton_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                              .addChild(new HAnimJoint().setName("l_eyelid_joint").setDEF("hanim_l_eyelid_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat373().getArray()).setLlimit(new MFFloat374().getArray()))
                                                              .addChild(new HAnimJoint().setName("r_eyelid_joint").setDEF("hanim_r_eyelid_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat375().getArray()).setLlimit(new MFFloat376().getArray()))
                                                              .addChild(new HAnimJoint().setName("l_eyeball_joint").setDEF("hanim_l_eyeball_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat377().getArray()).setLlimit(new MFFloat378().getArray()))
                                                              .addChild(new HAnimJoint().setName("r_eyeball_joint").setDEF("hanim_r_eyeball_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat379().getArray()).setLlimit(new MFFloat380().getArray()))
                                                              .addChild(new HAnimJoint().setName("l_eyebrow_joint").setDEF("hanim_l_eyebrow_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat381().getArray()).setLlimit(new MFFloat382().getArray()))
                                                              .addChild(new HAnimJoint().setName("r_eyebrow_joint").setDEF("hanim_r_eyebrow_joint").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat383().getArray()).setLlimit(new MFFloat384().getArray()))
                                                              .addChild(new HAnimJoint().setName("temporomandibular").setDEF("hanim_temporomandibular").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat385().getArray()).setLlimit(new MFFloat386().getArray()))
                                                              .addDisplacers(new HAnimDisplacer().setName("skull_tip_raiser_action").setDEF("Joe_skull_tip_raiser_action").setCoordIndex(new MFInt32387().getArray()).setDisplacements(new MFVec3f388().getArray()))))))))))
                                              .addChild(new HAnimJoint().setName("l_sternoclavicular").setDEF("hanim_l_sternoclavicular").setCenter(new float[] {0.082f,1.4488f,-0.0353f}).setUlimit(new MFFloat389().getArray()).setLlimit(new MFFloat390().getArray())
                                                .addChild(new HAnimSegment().setName("l_clavicle").setDEF("hanim_l_clavicle")
                                                  .addChild(new Transform()
                                                    .addComments("Empty Transform")
                                                    .addChild(new Transform()
                                                      .addComments("Empty Transform")
                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32391().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f392().getArray()))
                                                      .addComments("from l_sternoclavicular to l_acromioclavicular vertices 2")
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                .addChild(new HAnimJoint().setName("l_acromioclavicular").setDEF("hanim_l_acromioclavicular").setCenter(new float[] {0.0962f,1.4269f,-0.0424f}).setUlimit(new MFFloat393().getArray()).setLlimit(new MFFloat394().getArray())
                                                  .addChild(new HAnimSegment().setName("l_scapula").setDEF("hanim_l_scapula")
                                                    .addChild(new Transform()
                                                      .addComments("Empty Transform")
                                                      .addChild(new Transform()
                                                        .addComments("Empty Transform")
                                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32395().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f396().getArray()))
                                                        .addComments("from l_acromioclavicular to l_shoulder vertices 2")
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                    .addChild(new HAnimSite().setName("l_bideltoid_pt").setDEF("hanim_l_bideltoid_pt").setTranslation(new float[] {0f,1f,0f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite l_bideltoid_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimSite().setName("l_humeral_lateral_epicondyles_pt").setDEF("hanim_l_humeral_lateral_epicondyles_pt").setTranslation(new float[] {0.228f,1.1482f,-0.11f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_lateral_epicondyles_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                  .addChild(new HAnimJoint().setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {0.2029f,1.4376f,-0.0387f}).setUlimit(new MFFloat397().getArray()).setLlimit(new MFFloat398().getArray())
                                                    .addChild(new HAnimSegment().setName("l_upperarm").setDEF("hanim_l_upperarm")
                                                      .addChild(new Transform()
                                                        .addComments("Empty Transform")
                                                        .addChild(new Transform()
                                                          .addComments("Empty Transform")
                                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32399().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f400().getArray()))
                                                          .addComments("from l_shoulder to l_elbow vertices 2")
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addChild(new HAnimSite().setName("l_humeral_medial_epicondyles_pt").setDEF("hanim_l_humeral_medial_epicondyles_pt").setTranslation(new float[] {0.1735f,1.1272f,-0.1113f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_medial_epicondyles_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite().setName("l_olecranon_pt").setDEF("hanim_l_olecranon_pt").setTranslation(new float[] {-0.1962f,1.1375f,-0.1123f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_olecranon_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite().setName("l_radial_styloid_pt").setDEF("hanim_l_radial_styloid_pt").setTranslation(new float[] {0.1901f,0.8645f,-0.0415f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_radial_styloid_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite().setName("l_radiale_pt").setDEF("hanim_l_radiale_pt").setTranslation(new float[] {0.2182f,1.1212f,-0.1167f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_radiale_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint().setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {0.2014f,1.1357f,-0.0682f}).setUlimit(new MFFloat401().getArray()).setLlimit(new MFFloat402().getArray())
                                                      .addChild(new HAnimSegment().setName("l_forearm").setDEF("hanim_l_forearm")
                                                        .addChild(new Transform()
                                                          .addComments("Empty Transform")
                                                          .addChild(new Transform()
                                                            .addComments("Empty Transform")
                                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32403().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f404().getArray()))
                                                            .addComments("from l_elbow to l_radiocarpal vertices 2")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new HAnimSite().setName("l_ulnar_styloid_pt").setDEF("hanim_l_ulnar_styloid_pt").setTranslation(new float[] {-0.2142f,0.8529f,-0.0648f})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_ulnar_styloid_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint().setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setCenter(new float[] {0.1984f,0.8663f,-0.0583f}).setUlimit(new MFFloat405().getArray()).setLlimit(new MFFloat406().getArray())
                                                        .addChild(new HAnimSegment().setName("l_carpal").setDEF("hanim_l_carpal")
                                                          .addChild(new Transform().setScale(new float[] {0.2f,0.2f,0.2f}).setTranslation(new float[] {0.2f,0.85f,-0.05f}).setRotation(new float[] {0f,0f,1f,-3.14f})
                                                            .addComments("Transform left hand")
                                                            .addChild(new Transform().setRotation(new float[] {0f,1f,0f,-1.57f})
                                                              .addComments("Transform left hand")
                                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32407().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f408().getArray()))
                                                              .addComments("from l_radiocarpal to l_midcarpal_1 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32409().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f410().getArray()))
                                                              .addComments("from l_radiocarpal to l_midcarpal_2 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32411().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f412().getArray()))
                                                              .addComments("from l_radiocarpal to l_midcarpal_3 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32413().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f414().getArray()))
                                                              .addComments("from l_radiocarpal to l_midcarpal_4_5 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                        .addChild(new HAnimJoint().setName("l_midcarpal_1").setDEF("hanim_l_midcarpal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat415().getArray()).setLlimit(new MFFloat416().getArray())
                                                          .addChild(new HAnimSegment().setName("l_trapezium").setDEF("hanim_l_trapezium")
                                                            .addChild(new Transform()
                                                              .addComments("Empty Transform")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32417().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f418().getArray()))
                                                                .addComments("from l_midcarpal_1 to l_carpometacarpal_1 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_1").setDEF("hanim_l_carpometacarpal_1").setCenter(new float[] {0.1924f,0.8472f,-0.0534f}).setUlimit(new MFFloat419().getArray()).setLlimit(new MFFloat420().getArray())
                                                            .addChild(new HAnimSegment().setName("l_metacarpal_1").setDEF("hanim_l_metacarpal_1")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32421().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f422().getArray()))
                                                                  .addComments("from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_1").setDEF("hanim_l_metacarpophalangeal_1").setCenter(new float[] {0.1951f,0.8226f,0.0246f}).setUlimit(new MFFloat423().getArray()).setLlimit(new MFFloat424().getArray())
                                                              .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_1").setDEF("hanim_l_carpal_proximal_phalanx_1")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32425().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f426().getArray()))
                                                                    .addComments("from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new HAnimSite().setName("l_carpal_distal_phalanx_1_tip").setDEF("hanim_l_carpal_distal_phalanx_1_tip").setTranslation(new float[] {0f,1f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_1_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                              .addChild(new HAnimJoint().setName("l_carpal_interphalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setCenter(new float[] {0.1955f,0.8159f,0.0464f}).setUlimit(new MFFloat427().getArray()).setLlimit(new MFFloat428().getArray())))))
                                                        .addChild(new HAnimJoint().setName("l_midcarpal_2").setDEF("hanim_l_midcarpal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat429().getArray()).setLlimit(new MFFloat430().getArray())
                                                          .addChild(new HAnimSegment().setName("l_trapezoid").setDEF("hanim_l_trapezoid")
                                                            .addChild(new Transform()
                                                              .addComments("Empty Transform")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32431().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f432().getArray()))
                                                                .addComments("from l_midcarpal_2 to l_carpometacarpal_2 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimSite().setName("l_metacarpal_phalanx_2_pt").setDEF("hanim_l_metacarpal_phalanx_2_pt").setTranslation(new float[] {0.2009f,0.8139f,-0.0237f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_phalanx_2_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_2").setDEF("hanim_l_carpometacarpal_2").setCenter(new float[] {0.1983f,0.8024f,-0.028f}).setUlimit(new MFFloat433().getArray()).setLlimit(new MFFloat434().getArray())
                                                            .addChild(new HAnimSegment().setName("l_metacarpal_2").setDEF("hanim_l_metacarpal_2")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32435().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f436().getArray()))
                                                                  .addComments("from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_2").setDEF("hanim_l_metacarpophalangeal_2").setCenter(new float[] {0.1983f,0.7815f,-0.028f}).setUlimit(new MFFloat437().getArray()).setLlimit(new MFFloat438().getArray())
                                                              .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_2").setDEF("hanim_l_carpal_proximal_phalanx_2")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32439().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f440().getArray()))
                                                                    .addComments("from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setCenter(new float[] {0.2017f,0.7363f,-0.0248f}).setUlimit(new MFFloat441().getArray()).setLlimit(new MFFloat442().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_2").setDEF("hanim_l_carpal_middle_phalanx_2")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32443().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f444().getArray()))
                                                                      .addComments("from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_carpal_distal_phalanx_2_tip").setDEF("hanim_l_carpal_distal_phalanx_2_tip").setTranslation(new float[] {0f,1f,0f})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_2_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite().setName("l_dactylion_pt").setDEF("hanim_l_dactylion_pt").setTranslation(new float[] {0.2056f,0.6743f,-0.0482f})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_dactylion_pt"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setCenter(new float[] {0.2028f,0.7139f,-0.0236f}).setUlimit(new MFFloat445().getArray()).setLlimit(new MFFloat446().getArray()))))))
                                                        .addChild(new HAnimJoint().setName("l_midcarpal_3").setDEF("hanim_l_midcarpal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat447().getArray()).setLlimit(new MFFloat448().getArray())
                                                          .addChild(new HAnimSegment().setName("l_capitate").setDEF("hanim_l_capitate")
                                                            .addChild(new Transform()
                                                              .addComments("Empty Transform")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32449().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f450().getArray()))
                                                                .addComments("from l_midcarpal_3 to l_carpometacarpal_3 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimSite().setName("l_metacarpal_phalanx_3_pt").setDEF("hanim_l_metacarpal_phalanx_3_pt").setTranslation(new float[] {0f,1f,0f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_phalanx_3_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_3").setDEF("hanim_l_carpometacarpal_3").setCenter(new float[] {0.1987f,0.8029f,-0.053f}).setUlimit(new MFFloat451().getArray()).setLlimit(new MFFloat452().getArray())
                                                            .addChild(new HAnimSegment().setName("l_metacarpal_3").setDEF("hanim_l_metacarpal_3")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32453().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f454().getArray()))
                                                                  .addComments("from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_3").setDEF("hanim_l_metacarpophalangeal_3").setCenter(new float[] {0.1987f,0.7818f,-0.053f}).setUlimit(new MFFloat455().getArray()).setLlimit(new MFFloat456().getArray())
                                                              .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_3").setDEF("hanim_l_carpal_proximal_phalanx_3")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32457().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f458().getArray()))
                                                                    .addComments("from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setCenter(new float[] {0.2013f,0.7273f,-0.0503f}).setUlimit(new MFFloat459().getArray()).setLlimit(new MFFloat460().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_3").setDEF("hanim_l_carpal_middle_phalanx_3")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32461().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f462().getArray()))
                                                                      .addComments("from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_carpal_distal_phalanx_3_tip").setDEF("hanim_l_carpal_distal_phalanx_3_tip").setTranslation(new float[] {0f,1f,0f})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_3_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setCenter(new float[] {0.2026f,0.7011f,-0.0494f}).setUlimit(new MFFloat463().getArray()).setLlimit(new MFFloat464().getArray()))))))
                                                        .addChild(new HAnimJoint().setName("l_midcarpal_4_5").setDEF("hanim_l_midcarpal_4_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat465().getArray()).setLlimit(new MFFloat466().getArray())
                                                          .addChild(new HAnimSegment().setName("l_hamate").setDEF("hanim_l_hamate")
                                                            .addChild(new Transform()
                                                              .addComments("Empty Transform")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32467().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f468().getArray()))
                                                                .addComments("from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32469().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f470().getArray()))
                                                                .addComments("from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimSite().setName("l_metacarpal_phalanx_5_pt").setDEF("hanim_l_metacarpal_phalanx_5_pt").setTranslation(new float[] {0.1929f,0.786f,-0.1122f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_phalanx_5_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_4").setDEF("hanim_l_carpometacarpal_4").setCenter(new float[] {0.1956f,0.8019f,-0.0794f}).setUlimit(new MFFloat471().getArray()).setLlimit(new MFFloat472().getArray())
                                                            .addChild(new HAnimSegment().setName("l_metacarpal_4").setDEF("hanim_l_metacarpal_4")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32473().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f474().getArray()))
                                                                  .addComments("from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_4").setDEF("hanim_l_metacarpophalangeal_4").setCenter(new float[] {0.1956f,0.7815f,-0.0794f}).setUlimit(new MFFloat475().getArray()).setLlimit(new MFFloat476().getArray())
                                                              .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_4").setDEF("hanim_l_carpal_proximal_phalanx_4")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32477().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f478().getArray()))
                                                                    .addComments("from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setCenter(new float[] {0.1973f,0.7287f,-0.0777f}).setUlimit(new MFFloat479().getArray()).setLlimit(new MFFloat480().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_4").setDEF("hanim_l_carpal_middle_phalanx_4")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32481().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f482().getArray()))
                                                                      .addComments("from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_carpal_distal_phalanx_4_tip").setDEF("hanim_l_carpal_distal_phalanx_4_tip").setTranslation(new float[] {0f,1f,0f})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_4_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setCenter(new float[] {0.1983f,0.7045f,-0.0767f}).setUlimit(new MFFloat483().getArray()).setLlimit(new MFFloat484().getArray())))))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_5").setDEF("hanim_l_carpometacarpal_5").setCenter(new float[] {0.1925f,0.8066f,-0.1036f}).setUlimit(new MFFloat485().getArray()).setLlimit(new MFFloat486().getArray())
                                                            .addChild(new HAnimSegment().setName("l_metacarpal_5").setDEF("hanim_l_metacarpal_5")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32487().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f488().getArray()))
                                                                  .addComments("from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_5").setDEF("hanim_l_metacarpophalangeal_5").setCenter(new float[] {0.1925f,0.7866f,-0.1036f}).setUlimit(new MFFloat489().getArray()).setLlimit(new MFFloat490().getArray())
                                                              .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_5").setDEF("hanim_l_carpal_proximal_phalanx_5")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32491().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f492().getArray()))
                                                                    .addComments("from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_5").setCenter(new float[] {0.1938f,0.7452f,-0.1024f}).setUlimit(new MFFloat493().getArray()).setLlimit(new MFFloat494().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_5").setDEF("hanim_l_carpal_middle_phalanx_5")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32495().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f496().getArray()))
                                                                      .addComments("from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_carpal_distal_phalanx_5_tip").setDEF("hanim_l_carpal_distal_phalanx_5_tip").setTranslation(new float[] {0f,1f,0f})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_5_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_5").setDEF("hanim_l_carpal_distal_interphalangeal_5").setCenter(new float[] {0.1948f,0.7277f,-0.1017f}).setUlimit(new MFFloat497().getArray()).setLlimit(new MFFloat498().getArray())))))))))))
                                              .addChild(new HAnimJoint().setName("r_sternoclavicular").setDEF("hanim_r_sternoclavicular").setCenter(new float[] {-0.0694f,1.46f,-0.033f}).setUlimit(new MFFloat499().getArray()).setLlimit(new MFFloat500().getArray())
                                                .addChild(new HAnimSegment().setName("r_clavicle").setDEF("hanim_r_clavicle")
                                                  .addChild(new Transform()
                                                    .addComments("Empty Transform")
                                                    .addChild(new Transform()
                                                      .addComments("Empty Transform")
                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32501().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f502().getArray()))
                                                      .addComments("from r_sternoclavicular to r_acromioclavicular vertices 2")
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                .addChild(new HAnimJoint().setName("r_acromioclavicular").setDEF("hanim_r_acromioclavicular").setCenter(new float[] {-0.0836f,1.4281f,-0.0401f}).setUlimit(new MFFloat503().getArray()).setLlimit(new MFFloat504().getArray())
                                                  .addChild(new HAnimSegment().setName("r_scapula").setDEF("hanim_r_scapula")
                                                    .addChild(new Transform()
                                                      .addComments("Empty Transform")
                                                      .addChild(new Transform()
                                                        .addComments("Empty Transform")
                                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32505().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f506().getArray()))
                                                        .addComments("from r_acromioclavicular to r_shoulder vertices 2")
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                    .addChild(new HAnimSite().setName("r_bideltoid_pt").setDEF("hanim_r_bideltoid_pt").setTranslation(new float[] {0f,1f,0f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite r_bideltoid_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimSite().setName("r_humeral_lateral_epicondyles_pt").setDEF("hanim_r_humeral_lateral_epicondyles_pt").setTranslation(new float[] {-0.2224f,1.1517f,-0.1033f})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_lateral_epicondyles_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                  .addChild(new HAnimJoint().setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-0.1907f,1.4407f,-0.0325f}).setUlimit(new MFFloat507().getArray()).setLlimit(new MFFloat508().getArray())
                                                    .addChild(new HAnimSegment().setName("r_upperarm").setDEF("hanim_r_upperarm")
                                                      .addChild(new Transform()
                                                        .addComments("Empty Transform")
                                                        .addChild(new Transform()
                                                          .addComments("Empty Transform")
                                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32509().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f510().getArray()))
                                                          .addComments("from r_shoulder to r_elbow vertices 2")
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addChild(new HAnimSite().setName("r_humeral_medial_epicondyles_pt").setDEF("hanim_r_humeral_medial_epicondyles_pt").setTranslation(new float[] {-0.168f,1.1298f,-0.1062f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_medial_epicondyles_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite().setName("r_olecranon_pt").setDEF("hanim_r_olecranon_pt").setTranslation(new float[] {-0.1907f,1.1405f,-0.1065f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_olecranon_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite().setName("r_radial_styloid_pt").setDEF("hanim_r_radial_styloid_pt").setTranslation(new float[] {-0.1884f,0.8676f,-0.036f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_radial_styloid_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite().setName("r_radiale_pt").setDEF("hanim_r_radiale_pt").setTranslation(new float[] {-0.213f,1.1305f,-0.1091f})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_radiale_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint().setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-0.1949f,1.1388f,-0.062f}).setUlimit(new MFFloat511().getArray()).setLlimit(new MFFloat512().getArray())
                                                      .addChild(new HAnimSegment().setName("r_forearm").setDEF("hanim_r_forearm")
                                                        .addChild(new Transform()
                                                          .addComments("Empty Transform")
                                                          .addChild(new Transform()
                                                            .addComments("Empty Transform")
                                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32513().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f514().getArray()))
                                                            .addComments("from r_elbow to r_radiocarpal vertices 2")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new HAnimSite().setName("r_ulnar_styloid_pt").setDEF("hanim_r_ulnar_styloid_pt").setTranslation(new float[] {-0.2117f,0.8562f,-0.0584f})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_ulnar_styloid_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint().setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setCenter(new float[] {-0.1959f,0.8694f,-0.0521f}).setUlimit(new MFFloat515().getArray()).setLlimit(new MFFloat516().getArray())
                                                        .addChild(new HAnimSegment().setName("r_carpal").setDEF("hanim_r_carpal")
                                                          .addChild(new Transform().setScale(new float[] {0.2f,0.2f,0.2f}).setTranslation(new float[] {-0.2f,0.85f,-0.05f}).setRotation(new float[] {0f,0f,1f,-3.14f})
                                                            .addComments("Transform right hand")
                                                            .addChild(new Transform().setRotation(new float[] {0f,1f,0f,1.57f})
                                                              .addComments("Transform right hand")
                                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32517().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f518().getArray()))
                                                              .addComments("from r_radiocarpal to r_midcarpal_1 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32519().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f520().getArray()))
                                                              .addComments("from r_radiocarpal to r_midcarpal_2 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32521().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f522().getArray()))
                                                              .addComments("from r_radiocarpal to r_midcarpal_3 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32523().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f524().getArray()))
                                                              .addComments("from r_radiocarpal to r_midcarpal_4_5 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                        .addChild(new HAnimJoint().setName("r_midcarpal_1").setDEF("hanim_r_midcarpal_1").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat525().getArray()).setLlimit(new MFFloat526().getArray())
                                                          .addChild(new HAnimSegment().setName("r_trapezium").setDEF("hanim_r_trapezium")
                                                            .addChild(new Transform()
                                                              .addComments("Empty Transform")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32527().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f528().getArray()))
                                                                .addComments("from r_midcarpal_1 to r_carpometacarpal_1 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_1").setDEF("hanim_r_carpometacarpal_1").setCenter(new float[] {-0.1899f,0.8502f,-0.0473f}).setUlimit(new MFFloat529().getArray()).setLlimit(new MFFloat530().getArray())
                                                            .addChild(new HAnimSegment().setName("r_metacarpal_1").setDEF("hanim_r_metacarpal_1")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32531().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f532().getArray()))
                                                                  .addComments("from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_1").setDEF("hanim_r_metacarpophalangeal_1").setCenter(new float[] {-0.1874f,0.8256f,0.0306f}).setUlimit(new MFFloat533().getArray()).setLlimit(new MFFloat534().getArray())
                                                              .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_1").setDEF("hanim_r_carpal_proximal_phalanx_1")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32535().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f536().getArray()))
                                                                    .addComments("from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new HAnimSite().setName("r_carpal_distal_phalanx_1_tip").setDEF("hanim_r_carpal_distal_phalanx_1_tip").setTranslation(new float[] {-0.35f,0.4f,0f})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_1_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                              .addChild(new HAnimJoint().setName("r_carpal_interphalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setCenter(new float[] {-0.1864f,0.819f,0.0506f}).setUlimit(new MFFloat537().getArray()).setLlimit(new MFFloat538().getArray())))))
                                                        .addChild(new HAnimJoint().setName("r_midcarpal_2").setDEF("hanim_r_midcarpal_2").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat539().getArray()).setLlimit(new MFFloat540().getArray())
                                                          .addChild(new HAnimSegment().setName("r_trapezoid").setDEF("hanim_r_trapezoid")
                                                            .addChild(new Transform()
                                                              .addComments("Empty Transform")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32541().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f542().getArray()))
                                                                .addComments("from r_midcarpal_2 to r_carpometacarpal_2 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimSite().setName("r_metacarpal_phalanx_2_pt").setDEF("hanim_r_metacarpal_phalanx_2_pt").setTranslation(new float[] {-0.1977f,0.8169f,-0.0177f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_phalanx_2_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_2").setDEF("hanim_r_carpometacarpal_2").setCenter(new float[] {-0.1961f,0.8055f,-0.0218f}).setUlimit(new MFFloat543().getArray()).setLlimit(new MFFloat544().getArray())
                                                            .addChild(new HAnimSegment().setName("r_metacarpal_2").setDEF("hanim_r_metacarpal_2")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32545().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f546().getArray()))
                                                                  .addComments("from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_2").setDEF("hanim_r_metacarpophalangeal_2").setCenter(new float[] {-0.1961f,0.7846f,-0.0218f}).setUlimit(new MFFloat547().getArray()).setLlimit(new MFFloat548().getArray())
                                                              .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_2").setDEF("hanim_r_carpal_proximal_phalanx_2")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32549().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f550().getArray()))
                                                                    .addComments("from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-0.1954f,0.7393f,-0.0185f}).setUlimit(new MFFloat551().getArray()).setLlimit(new MFFloat552().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_2").setDEF("hanim_r_carpal_middle_phalanx_2")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32553().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f554().getArray()))
                                                                      .addComments("from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_carpal_distal_phalanx_2_tip").setDEF("hanim_r_carpal_distal_phalanx_2_tip").setTranslation(new float[] {-0.24f,0.87f,0f})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_2_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite().setName("r_dactylion_pt").setDEF("hanim_r_dactylion_pt").setTranslation(new float[] {-0.1941f,0.6772f,-0.0423f})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_dactylion_pt"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setCenter(new float[] {-0.1945f,0.7169f,-0.0173f}).setUlimit(new MFFloat555().getArray()).setLlimit(new MFFloat556().getArray()))))))
                                                        .addChild(new HAnimJoint().setName("r_midcarpal_3").setDEF("hanim_r_midcarpal_3").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat557().getArray()).setLlimit(new MFFloat558().getArray())
                                                          .addChild(new HAnimSegment().setName("r_capitate").setDEF("hanim_r_capitate")
                                                            .addChild(new Transform()
                                                              .addComments("Empty Transform")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32559().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f560().getArray()))
                                                                .addComments("from r_midcarpal_3 to r_carpometacarpal_3 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimSite().setName("r_metacarpal_phalanx_3_pt").setDEF("hanim_r_metacarpal_phalanx_3_pt").setTranslation(new float[] {0f,1f,0f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_phalanx_3_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_3").setDEF("hanim_r_carpometacarpal_3").setCenter(new float[] {-0.1972f,0.806f,-0.0468f}).setUlimit(new MFFloat561().getArray()).setLlimit(new MFFloat562().getArray())
                                                            .addChild(new HAnimSegment().setName("r_metacarpal_3").setDEF("hanim_r_metacarpal_3")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32563().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f564().getArray()))
                                                                  .addComments("from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_3").setDEF("hanim_r_metacarpophalangeal_3").setCenter(new float[] {-0.1972f,0.7849f,-0.0468f}).setUlimit(new MFFloat565().getArray()).setLlimit(new MFFloat566().getArray())
                                                              .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_3").setDEF("hanim_r_carpal_proximal_phalanx_3")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32567().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f568().getArray()))
                                                                    .addComments("from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-0.195f,0.7304f,-0.0441f}).setUlimit(new MFFloat569().getArray()).setLlimit(new MFFloat570().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_3").setDEF("hanim_r_carpal_middle_phalanx_3")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32571().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f572().getArray()))
                                                                      .addComments("from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_carpal_distal_phalanx_3_tip").setDEF("hanim_r_carpal_distal_phalanx_3_tip").setTranslation(new float[] {-0.08f,0.96f,0f})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_3_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setCenter(new float[] {-0.1939f,0.7042f,-0.0432f}).setUlimit(new MFFloat573().getArray()).setLlimit(new MFFloat574().getArray()))))))
                                                        .addChild(new HAnimJoint().setName("r_midcarpal_4_5").setDEF("hanim_r_midcarpal_4_5").setCenter(new float[] {0f,1f,0f}).setUlimit(new MFFloat575().getArray()).setLlimit(new MFFloat576().getArray())
                                                          .addChild(new HAnimSegment().setName("r_hamate").setDEF("hanim_r_hamate")
                                                            .addChild(new Transform()
                                                              .addComments("Empty Transform")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32577().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f578().getArray()))
                                                                .addComments("from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32579().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f580().getArray()))
                                                                .addComments("from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimSite().setName("r_metacarpal_phalanx_5_pt").setDEF("hanim_r_metacarpal_phalanx_5_pt").setTranslation(new float[] {-0.1929f,0.789f,-0.1064f})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_phalanx_5_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_4").setDEF("hanim_r_carpometacarpal_4").setCenter(new float[] {-0.1951f,0.8049f,-0.0732f}).setUlimit(new MFFloat581().getArray()).setLlimit(new MFFloat582().getArray())
                                                            .addChild(new HAnimSegment().setName("r_metacarpal_4").setDEF("hanim_r_metacarpal_4")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32583().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f584().getArray()))
                                                                  .addComments("from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_4").setDEF("hanim_r_metacarpophalangeal_4").setCenter(new float[] {-0.1951f,0.7845f,-0.0732f}).setUlimit(new MFFloat585().getArray()).setLlimit(new MFFloat586().getArray())
                                                              .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_4").setDEF("hanim_r_carpal_proximal_phalanx_4")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32587().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f588().getArray()))
                                                                    .addComments("from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setCenter(new float[] {-0.192f,0.7318f,-0.0716f}).setUlimit(new MFFloat589().getArray()).setLlimit(new MFFloat590().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_4").setDEF("hanim_r_carpal_middle_phalanx_4")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32591().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f592().getArray()))
                                                                      .addComments("from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_carpal_distal_phalanx_4_tip").setDEF("hanim_r_carpal_distal_phalanx_4_tip").setTranslation(new float[] {0.1f,0.93f,0f})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_4_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setCenter(new float[] {-0.1908f,0.7077f,-0.0706f}).setUlimit(new MFFloat593().getArray()).setLlimit(new MFFloat594().getArray())))))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_5").setDEF("hanim_r_carpometacarpal_5").setCenter(new float[] {-0.1926f,0.8096f,-0.0975f}).setUlimit(new MFFloat595().getArray()).setLlimit(new MFFloat596().getArray())
                                                            .addChild(new HAnimSegment().setName("r_metacarpal_5").setDEF("hanim_r_metacarpal_5")
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32597().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f598().getArray()))
                                                                  .addComments("from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_5").setDEF("hanim_r_metacarpophalangeal_5").setCenter(new float[] {-0.1926f,0.7896f,-0.0975f}).setUlimit(new MFFloat599().getArray()).setLlimit(new MFFloat600().getArray())
                                                              .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_5").setDEF("hanim_r_carpal_proximal_phalanx_5")
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32601().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f602().getArray()))
                                                                    .addComments("from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_5").setCenter(new float[] {-0.1902f,0.7483f,-0.0963f}).setUlimit(new MFFloat603().getArray()).setLlimit(new MFFloat604().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_5").setDEF("hanim_r_carpal_middle_phalanx_5")
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32605().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f606().getArray()))
                                                                      .addComments("from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_carpal_distal_phalanx_5_tip").setDEF("hanim_r_carpal_distal_phalanx_5_tip").setTranslation(new float[] {0.25f,0.79f,0f})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_5_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_5").setDEF("hanim_r_carpal_distal_interphalangeal_5").setCenter(new float[] {-0.1908f,0.754f,-0.096f}).setUlimit(new MFFloat607().getArray()).setLlimit(new MFFloat608().getArray())))))))))))))))))))))))))))))
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
          .addSegments(new HAnimSegment().setUSE("hanim_sacrum"))
          .addSegments(new HAnimSegment().setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_talus"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_navicular"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_cuneiform_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_cuneiform_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_middle_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_cuneiform_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_middle_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_calcaneus"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_cuboid"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_middle_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_middle_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_talus"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_navicular"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuneiform_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuneiform_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuneiform_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_calcaneus"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuboid"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_5"))
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
          .addSegments(new HAnimSegment().setUSE("hanim_c7"))
          .addSegments(new HAnimSegment().setUSE("hanim_c6"))
          .addSegments(new HAnimSegment().setUSE("hanim_c5"))
          .addSegments(new HAnimSegment().setUSE("hanim_c4"))
          .addSegments(new HAnimSegment().setUSE("hanim_c3"))
          .addSegments(new HAnimSegment().setUSE("hanim_c2"))
          .addSegments(new HAnimSegment().setUSE("hanim_c1"))
          .addSegments(new HAnimSegment().setUSE("hanim_skull"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_clavicle"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_scapula"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_trapezium"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_trapezoid"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_capitate"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_hamate"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_clavicle"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_scapula"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_upperarm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_trapezium"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_trapezoid"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_capitate"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_hamate"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_5"))
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
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f,1f,0f,1f,1f,1f,0f,0.1f,1f,1f,0f,1f,1f,1f,0f,0.1f,1f,1f,0f,1f,1f,1f,0f,0.1f});
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
protected class MFInt3211 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1});
  }
}
protected class MFInt3212 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1});
  }
}
protected class MFInt3213 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1});
  }
}
protected class MFInt3214 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
  }
}
protected class MFVec3f15 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.77f,0f,0f,1.665f,0.09f,-0.033f,1.62f,0.087f,0.033f,1.62f,0.087f,0f,1.55f,0.097f,-0.077f,1.64f,-0.01f,-0.0527f,1.58f,0.015f,0.077f,1.64f,-0.01f,0.0527f,1.58f,0.015f,0f,1.625f,-0.0925f,-0.03f,1.46f,0.035f,0f,1.44f,0.03f,0.03f,1.46f,0.035f,-0.1135f,1.318f,0.095f,0.1135f,1.318f,0.095f,0f,1.25f,0.113f,-0.087f,1.19f,0.09f,-0.0935f,1.03f,0.075f,0.087f,1.19f,0.09f,0.0935f,1.03f,0.075f,-0.1425f,1.065f,0.0033f,-0.15f,0.9f,-0.01f,0.1425f,1.065f,0.0033f,0.15f,0.9f,-0.01f,0f,1.53f,-0.084f,0.0049f,1.1908f,-0.1113f,-0.0773f,1.019f,-0.12f,0.0773f,1.019f,-0.12f,0.005f,1.0915f,-0.1091f,-0.178f,1.4825f,-0.0625f,-0.17f,1.38f,0.007f,-0.1884f,0.8676f,-0.036f,-0.16f,1.38f,-0.127f,-0.2f,1.1388f,-0.08f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.23f,1.133f,-0.055f,-0.1977f,0.8169f,-0.0177f,-0.1941f,0.6772f,-0.0423f,-0.2117f,0.8562f,-0.0584f,-0.1929f,0.789f,-0.1064f,0.175f,1.4825f,-0.06f,0.17f,1.38f,0.007f,0.1901f,0.8645f,-0.0415f,0.16f,1.38f,-0.125f,0.2f,1.1388f,-0.08f,0.165f,1.1388f,-0.04f,0.244f,1.1388f,-0.04f,0.23f,1.133f,-0.055f,0.2009f,0.8139f,-0.0237f,0.2056f,0.6743f,-0.0482f,0.2142f,0.8529f,-0.0648f,0.1929f,0.786f,-0.1122f,-0.1f,0.4913f,-0.03f,-0.17f,0.466f,0f,-0.05f,0.466f,0f,-0.165f,0.01f,0.12f,-0.15f,0.07f,0f,-0.085f,0.086f,0.0125f,-0.09f,0.056f,0.0125f,-0.115f,0.02f,0.122f,-0.115f,0.04f,-0.055f,-0.11f,0.011f,0.19f,0.0993f,0.4881f,-0.0309f,0.17f,0.466f,0f,0.05f,0.4867f,0f,0.165f,0.01f,0.12f,0.15f,0.07f,0f,0.085f,0.086f,0.0125f,0.09f,0.056f,0.0125f,0.115f,0.02f,0.122f,0.115f,0.04f,-0.055f,0.11f,0.011f,0.19f,0f,0.875f,0f,-0.0646f,1.5149f,-0.038f,0.0646f,1.5149f,-0.038f,0f,1.07225f,0.09f,-0.11f,1.427f,-0.1375f,-0.235f,1.42f,-0.0625f,0.11f,1.427f,-0.1375f,0.235f,1.42f,-0.0625f,0f,1.41f,-0.145f,0f,0.925f,0.08f,-0.087f,1.19f,-0.09f,0.087f,1.19f,-0.09f,0.172f,1.32f,-0.03f,-0.172f,1.32f,-0.03f,0.15f,1.23f,-0.015f,-0.15f,1.23f,-0.015f,0.079f,0.92f,-0.14f,0.1f,0.9f,0.077f,-0.079f,0.92f,-0.14f,-0.1f,0.9f,0.075f,0f,0.87f,0f,0.171f,0.65f,0f,0.02f,0.65f,0f,0.1f,0.65f,-0.08f,0.1f,0.65f,0.07f,-0.171f,0.65f,0f,-0.02f,0.65f,0f,-0.1f,0.65f,-0.08f,-0.1f,0.65f,0.07f,0.25f,1.27f,-0.04f,0.17f,1.27f,-0.04f,0.2f,1.27f,-0.09f,0.2f,1.27f,0.02f,0.244f,1.1388f,-0.04f,0.165f,1.1388f,-0.04f,0.2f,1.1388f,-0.08f,0.2f,1.1388f,-0.013f,0.225f,1f,-0.01f,0.225f,1f,-0.07f,0.185f,1f,-0.01f,0.185f,1f,-0.07f,0.2f,1.1388f,-0.04f,0.225f,0.92f,-0.04f,0.175f,0.92f,-0.04f,0.2f,0.92f,-0.065f,0.2f,0.92f,-0.015f,0.225f,0.89f,-0.04f,0.175f,0.89f,-0.04f,0.2f,0.89f,-0.065f,0.2f,0.89f,-0.015f,0.218f,0.86f,-0.04f,0.184f,0.86f,-0.04f,0.2f,0.87f,-0.07f,0.2f,0.87f,0f,0.21f,0.85f,0f,0.1854f,0.85f,0f,0.212f,0.84f,-0.015f,0.183f,0.84f,-0.015f,0.213f,0.835f,-0.04f,0.19f,0.835f,-0.04f,0.211f,0.835f,-0.065f,0.192f,0.835f,-0.065f,0.208f,0.84f,-0.085f,0.19f,0.84f,-0.085f,0.2f,0.84f,-0.095f,0.215f,0.82f,0f,0.193f,0.815f,0.005f,0.198f,0.8f,0.012f,0.21f,0.82f,0.03f,0.19f,0.82f,0.03f,0.2f,0.835f,0.039f,0.212f,0.8f,0.05f,0.188f,0.8f,0.05f,0.2f,0.807f,0.057f,0.2f,0.793f,0.035f,0.2f,0.774f,0.076f,0.212f,0.78f,0.07f,0.188f,0.78f,0.07f,0.2f,0.785f,0.075f,0.2f,0.77f,0.062f,0.215f,0.793f,-0.015f,0.187f,0.793f,-0.015f,0.2f,0.793f,-0.005f,0.215f,0.788f,-0.04f,0.187f,0.788f,-0.04f,0.215f,0.793f,-0.065f,0.187f,0.793f,-0.065f,0.21f,0.79f,-0.085f,0.19f,0.79f,-0.085f,0.2f,0.79f,-0.095f,0.19f,0.77f,-0.0275f,0.19f,0.77f,-0.0525f,0.19f,0.78f,-0.0775f,0.212f,0.745f,-0.015f,0.188f,0.745f,-0.02f,0.2f,0.745f,-0.0255f,0.2f,0.745f,-0.0045f,0.211f,0.72f,-0.015f,0.189f,0.72f,-0.015f,0.2f,0.72f,-0.0252f,0.2f,0.72f,-0.0048f,0.21f,0.695f,-0.015f,0.19f,0.695f,-0.015f,0.2f,0.695f,-0.025f,0.2f,0.695f,-0.005f,0.2f,0.685f,-0.015f,0.215f,0.74f,-0.04f,0.185f,0.74f,-0.04f,0.2f,0.74f,-0.055f,0.2f,0.74f,-0.025f,0.21f,0.7142f,-0.04f,0.19f,0.7142f,-0.04f,0.2f,0.7142f,-0.053f,0.2f,0.7142f,-0.027f,0.21f,0.68f,-0.04f,0.19f,0.68f,-0.04f,0.2f,0.68f,-0.05f,0.2f,0.68f,-0.03f,0.2f,0.67f,-0.04f,0.212f,0.74f,-0.065f,0.188f,0.74f,-0.065f,0.2f,0.74f,-0.0756f,0.2f,0.74f,-0.0542f,0.21f,0.7177f,-0.065f,0.19f,0.7177f,-0.065f,0.2f,0.7177f,-0.0751f,0.2f,0.7177f,-0.0549f,0.21f,0.695f,-0.065f,0.19f,0.695f,-0.065f,0.2f,0.695f,-0.075f,0.2f,0.695f,-0.055f,0.2f,0.685f,-0.065f,0.211f,0.755f,-0.085f,0.189f,0.755f,-0.085f,0.2f,0.755f,-0.0952f,0.2f,0.755f,-0.0748f,0.21f,0.735f,-0.085f,0.19f,0.735f,-0.085f,0.2f,0.735f,-0.0951f,0.2f,0.735f,-0.0749f,0.21f,0.72f,-0.085f,0.19f,0.72f,-0.085f,0.2f,0.72f,-0.095f,0.2f,0.72f,-0.075f,0.2f,0.71f,-0.085f,-0.23f,1.23f,-0.04f,-0.16f,1.23f,-0.04f,-0.2f,1.235f,-0.105f,-0.2f,1.235f,0.02f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.2f,1.1388f,-0.08f,-0.2f,1.1388f,0.013f,-0.225f,1f,-0.01f,-0.225f,1f,-0.07f,-0.185f,1f,-0.01f,-0.185f,1f,-0.07f,-0.2f,1.1388f,-0.04f,-0.225f,0.92f,-0.04f,-0.175f,0.92f,-0.04f,-0.2f,0.92f,-0.065f,-0.2f,0.92f,-0.015f,-0.225f,0.89f,-0.04f,-0.175f,0.89f,-0.04f,-0.2f,0.89f,-0.065f,-0.2f,0.89f,-0.015f,-0.218f,0.86f,-0.04f,-0.184f,0.86f,-0.04f,-0.2f,0.87f,-0.07f,-0.2f,0.87f,0f,-0.21f,0.85f,0f,-0.1854f,0.85f,0f,-0.212f,0.84f,-0.015f,-0.183f,0.84f,-0.015f,-0.213f,0.835f,-0.04f,-0.19f,0.835f,-0.04f,-0.211f,0.835f,-0.065f,-0.192f,0.835f,-0.065f,-0.208f,0.84f,-0.085f,-0.19f,0.84f,-0.085f,-0.2f,0.84f,-0.095f,-0.215f,0.82f,0f,-0.193f,0.815f,0.005f,-0.198f,0.8f,0.012f,-0.21f,0.82f,0.03f,-0.19f,0.82f,0.03f,-0.2f,0.835f,0.039f,-0.212f,0.8f,0.05f,-0.188f,0.8f,0.05f,-0.2f,0.807f,0.057f,-0.2f,0.793f,0.035f,-0.2f,0.774f,0.076f,-0.212f,0.78f,0.07f,-0.188f,0.78f,0.07f,-0.2f,0.785f,0.075f,-0.2f,0.77f,0.062f,-0.215f,0.793f,-0.015f,-0.187f,0.793f,-0.015f,-0.2f,0.793f,-0.005f,-0.215f,0.788f,-0.04f,-0.187f,0.788f,-0.04f,-0.215f,0.793f,-0.065f,-0.187f,0.793f,-0.065f,-0.21f,0.79f,-0.085f,-0.19f,0.79f,-0.085f,-0.2f,0.79f,-0.095f,-0.19f,0.77f,-0.0275f});
  }
}
protected class MFVec3f16 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19f,0.77f,-0.0525f,-0.19f,0.78f,-0.0775f,-0.212f,0.745f,-0.015f,-0.188f,0.745f,-0.02f,-0.2f,0.745f,-0.0255f,-0.2f,0.745f,-0.0045f,-0.211f,0.72f,-0.015f,-0.189f,0.72f,-0.015f,-0.2f,0.72f,-0.0252f,-0.2f,0.72f,-0.0048f,-0.21f,0.695f,-0.015f,-0.19f,0.695f,-0.015f,-0.2f,0.695f,-0.025f,-0.2f,0.695f,-0.005f,-0.2f,0.685f,-0.015f,-0.215f,0.74f,-0.04f,-0.185f,0.74f,-0.04f,-0.2f,0.74f,-0.055f,-0.2f,0.74f,-0.025f,-0.21f,0.7142f,-0.04f,-0.19f,0.7142f,-0.04f,-0.2f,0.7142f,-0.053f,-0.2f,0.7142f,-0.027f,-0.21f,0.68f,-0.04f,-0.19f,0.68f,-0.04f,-0.2f,0.68f,-0.05f,-0.2f,0.68f,-0.03f,-0.2f,0.67f,-0.04f,-0.212f,0.74f,-0.065f,-0.188f,0.74f,-0.065f,-0.2f,0.74f,-0.0756f,-0.2f,0.74f,-0.0542f,-0.21f,0.7177f,-0.065f,-0.19f,0.7177f,-0.065f,-0.2f,0.7177f,-0.0751f,-0.2f,0.7177f,-0.0549f,-0.21f,0.695f,-0.065f,-0.19f,0.695f,-0.065f,-0.2f,0.695f,-0.075f,-0.2f,0.695f,-0.055f,-0.2f,0.685f,-0.065f,-0.211f,0.755f,-0.085f,-0.189f,0.755f,-0.085f,-0.2f,0.755f,-0.0952f,-0.2f,0.755f,-0.0748f,-0.21f,0.735f,-0.085f,-0.19f,0.735f,-0.085f,-0.2f,0.735f,-0.0951f,-0.2f,0.735f,-0.0749f,-0.21f,0.72f,-0.085f,-0.19f,0.72f,-0.085f,-0.2f,0.72f,-0.095f,-0.2f,0.72f,-0.075f,-0.2f,0.71f,-0.085f,0.115f,0.466f,0.06f,0.115f,0.466f,-0.055f,0.15f,0.466f,0f,0.05f,0.466f,0f,0.17f,0.3f,0f,0.06f,0.3f,0f,0.1f,0.3f,-0.05f,0.1f,0.3f,0.05f,0.15f,0.07f,0f,0.085f,0.086f,0.0125f,0.115f,0.069f,-0.045f,0.117f,0.0975f,0.0615f,0.1375f,0.006f,-0.03f,0.095f,0.006f,-0.03f,0.115f,0.015f,-0.045f,0.115f,0.06f,0.1f,0.115f,0f,0.07f,0.165f,0f,0.07f,0.095f,0f,0.07f,0.115f,0.04f,0.13f,0.125f,0f,0.12f,0.165f,0f,0.12f,0.087f,0f,0.122f,0.09f,0.012f,0.188f,0.11f,0.011f,0.19f,0.128f,0.011f,0.185f,0.142f,0.011f,0.178f,0.154f,0.01f,0.168f,-0.115f,0.466f,0.06f,-0.115f,0.466f,-0.055f,-0.17f,0.466f,0f,-0.05f,0.466f,0f,-0.17f,0.3f,0f,-0.06f,0.3f,0f,-0.1f,0.3f,-0.05f,-0.1f,0.3f,0.05f,-0.15f,0.07f,0f,-0.085f,0.086f,0.0125f,-0.115f,0.069f,-0.045f,-0.117f,0.0975f,0.0615f,-0.1375f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.115f,0.06f,0.1f,-0.115f,0f,0.07f,-0.165f,0f,0.07f,-0.095f,0f,0.07f,-0.115f,0.04f,0.13f,-0.125f,0f,0.12f,-0.165f,0f,0.12f,-0.087f,0f,0.122f,-0.09f,0.012f,0.188f,-0.11f,0.011f,0.19f,-0.128f,0.011f,0.185f,-0.142f,0.011f,0.178f,-0.154f,0.01f,0.168f});
  }
}
protected class MFColor17 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f,0f,0f,0f,1f,1f,0f,1f,0f,1f,1f,0f,1f,1f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,1f,0f,1f,1f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,1f,0f,1f,1f,0f,1f,1f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f});
  }
}
protected class MFColor18 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,1f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f});
  }
}
protected class MFColor19 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,1f,1f});
  }
}
protected class MFString20 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"});
  }
}
protected class MFFloat21 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat22 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3223 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0});
  }
}
protected class MFVec3f24 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f});
  }
}
protected class MFInt3225 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0});
  }
}
protected class MFVec3f26 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f});
  }
}
protected class MFInt3227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f28 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.824f,0.0277f,0f,0.9149f,0.0016f});
  }
}
protected class MFInt3229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f30 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.824f,0.0277f,0.0028f,1.0568f,-0.0776f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0961f,0.9124f,-0.0001f});
  }
}
protected class MFInt3235 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f36 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.095f,0.9171f,0.0029f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f40 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.104f,0.4867f,0.0308f});
  }
}
protected class MFFloat41 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat42 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3243 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f44 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.104f,0.4867f,0.0308f,0.1101f,0.0656f,-0.0736f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f48 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0f,1f,0f});
  }
}
protected class MFInt3249 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f50 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0f,1f,0f});
  }
}
protected class MFFloat51 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat52 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3253 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f54 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt3255 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f56 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt3257 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f58 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f62 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f66 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f70 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
protected class MFFloat73 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat74 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3275 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f76 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f80 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f84 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f88 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
protected class MFFloat91 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat92 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3293 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f94 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f98 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f102 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
  }
}
protected class MFFloat103 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat104 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32105 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f106 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
  }
}
protected class MFFloat107 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat108 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f112 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f116 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32117 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f118 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f122 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f126 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f130 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
  }
}
protected class MFFloat145 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFFloat148 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32149 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f150 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.095f,0.9171f,0.0029f,-0.0867f,0.4913f,0.0318f});
  }
}
protected class MFFloat151 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat152 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32153 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f154 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0867f,0.4913f,0.0318f,-0.0801f,0.0712f,-0.0766f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f158 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f,0.0712f,-0.0766f,0f,1f,0f});
  }
}
protected class MFInt32159 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f160 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f,0.0712f,-0.0766f,0f,1f,0f});
  }
}
protected class MFFloat161 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat162 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32163 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f164 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32165 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f166 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32167 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f168 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f172 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f176 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f180 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
protected class MFFloat183 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat184 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32185 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f186 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f190 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f194 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f198 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
protected class MFFloat201 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat202 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32203 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f204 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f208 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f212 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
  }
}
protected class MFFloat213 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat214 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f216 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
  }
}
protected class MFFloat217 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat218 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f222 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f226 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f228 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f232 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f236 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f240 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0f,1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f260 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f,1.0568f,-0.0776f,0.0035f,1.0925f,-0.0787f});
  }
}
protected class MFFloat261 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat262 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32263 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f264 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0035f,1.0925f,-0.0787f,0.0041f,1.1276f,-0.0796f});
  }
}
protected class MFFloat265 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat266 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32267 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f268 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0041f,1.1276f,-0.0796f,0.0045f,1.1546f,-0.08f});
  }
}
protected class MFFloat269 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat270 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32271 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f272 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,0.0048f,1.1912f,-0.0805f});
  }
}
protected class MFFloat273 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat274 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32275 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f276 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0048f,1.1912f,-0.0805f,0.0051f,1.2278f,-0.0808f});
  }
}
protected class MFFloat277 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat278 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32279 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f280 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0051f,1.2278f,-0.0808f,0.0053f,1.2679f,-0.081f});
  }
}
protected class MFFloat281 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat282 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32283 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f284 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0053f,1.2679f,-0.081f,0.0056f,1.2848f,-0.0822f});
  }
}
protected class MFFloat285 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat286 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32287 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f288 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f,1.2848f,-0.0822f,0.0057f,1.3126f,-0.0838f});
  }
}
protected class MFFloat289 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat290 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32291 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f292 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3126f,-0.0838f,0.0057f,1.3382f,-0.0845f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f296 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3382f,-0.0845f,0.0058f,1.3625f,-0.0833f});
  }
}
protected class MFFloat297 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat298 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32299 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f300 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0058f,1.3625f,-0.0833f,0.0059f,1.3866f,-0.08f});
  }
}
protected class MFFloat301 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat302 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32303 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f304 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0059f,1.3866f,-0.08f,0.006f,1.4102f,-0.0745f});
  }
}
protected class MFFloat305 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat306 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32307 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f308 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.006f,1.4102f,-0.0745f,0.0061f,1.432f,-0.0675f});
  }
}
protected class MFFloat309 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat310 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32311 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f312 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0061f,1.432f,-0.0675f,0.0062f,1.4583f,-0.057f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f316 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0062f,1.4583f,-0.057f,0.0063f,1.4761f,-0.0484f});
  }
}
protected class MFFloat317 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat318 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32319 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f320 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0063f,1.4761f,-0.0484f,0.0065f,1.4951f,-0.0387f});
  }
}
protected class MFFloat321 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat322 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32323 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f324 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0066f,1.5132f,-0.0301f});
  }
}
protected class MFInt32325 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f326 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.082f,1.4488f,-0.0353f});
  }
}
protected class MFInt32327 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f328 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,-0.0694f,1.46f,-0.033f});
  }
}
protected class MFFloat329 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat330 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32331 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f332 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5132f,-0.0301f,0.0066f,1.5357f,-0.0143f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f336 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5357f,-0.0143f,0.0066f,1.552f,-0.0082f});
  }
}
protected class MFFloat337 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat338 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32339 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f340 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.552f,-0.0082f,0.0066f,1.5662f,-0.0084f});
  }
}
protected class MFFloat341 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat342 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32343 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f344 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5662f,-0.0084f,0.0066f,1.58f,-0.0103f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f348 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.58f,-0.0103f,0.0066f,1.5928f,-0.0103f});
  }
}
protected class MFFloat349 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat350 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32351 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f352 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5928f,-0.0103f,0.0066f,1.6144f,-0.0034f});
  }
}
protected class MFFloat353 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat354 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32355 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f356 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.6144f,-0.0034f,0.0044f,1.6209f,0.0236f});
  }
}
protected class MFFloat357 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat358 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32359 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f360 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1f,0f});
  }
}
protected class MFInt32361 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f362 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1f,0f});
  }
}
protected class MFInt32363 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f364 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1f,0f});
  }
}
protected class MFInt32365 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f366 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1f,0f});
  }
}
protected class MFInt32367 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f368 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1f,0f});
  }
}
protected class MFInt32369 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f370 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1f,0f});
  }
}
protected class MFInt32371 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f372 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1f,0f});
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
protected class MFFloat375 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat376 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFFloat379 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat380 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFFloat383 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat384 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
protected class MFVec3f388 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.15f,0f,0f,0f,0.15f,-0.1f,0f,0.15f,0.1f,0f,0.05f,0f,-0.02f,0.05f,-0.15f,0f,0f,-0.05f,0f,0f,0.15f,0f,0f,0.05f,0f,0f,0f,0f,-0.15f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.0962f,1.4269f,-0.0424f});
  }
}
protected class MFFloat393 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat394 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32395 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f396 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0962f,1.4269f,-0.0424f,0.2029f,1.4376f,-0.0387f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f400 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f,1.4376f,-0.0387f,0.2014f,1.1357f,-0.0682f});
  }
}
protected class MFFloat401 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat402 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32403 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f404 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1984f,0.8663f,-0.0583f});
  }
}
protected class MFFloat405 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat406 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32407 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f408 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0f,1f,0f});
  }
}
protected class MFInt32409 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f410 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0f,1f,0f});
  }
}
protected class MFInt32411 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f412 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0f,1f,0f});
  }
}
protected class MFInt32413 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f414 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0f,1f,0f});
  }
}
protected class MFFloat415 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat416 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32417 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f418 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0.1924f,0.8472f,-0.0534f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f422 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1924f,0.8472f,-0.0534f,0.1951f,0.8226f,0.0246f});
  }
}
protected class MFFloat423 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat424 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32425 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f426 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1951f,0.8226f,0.0246f,0.1955f,0.8159f,0.0464f});
  }
}
protected class MFFloat427 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat428 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFInt32431 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f432 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0.1983f,0.8024f,-0.028f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f436 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.8024f,-0.028f,0.1983f,0.7815f,-0.028f});
  }
}
protected class MFFloat437 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat438 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32439 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f440 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.7815f,-0.028f,0.2017f,0.7363f,-0.0248f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f444 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2017f,0.7363f,-0.0248f,0.2028f,0.7139f,-0.0236f});
  }
}
protected class MFFloat445 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat446 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFInt32449 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f450 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0.1987f,0.8029f,-0.053f});
  }
}
protected class MFFloat451 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat452 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32453 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f454 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.8029f,-0.053f,0.1987f,0.7818f,-0.053f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.7818f,-0.053f,0.2013f,0.7273f,-0.0503f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2013f,0.7273f,-0.0503f,0.2026f,0.7011f,-0.0494f});
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
protected class MFFloat465 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat466 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32467 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f468 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0.1956f,0.8019f,-0.0794f});
  }
}
protected class MFInt32469 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f470 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,0.1925f,0.8066f,-0.1036f});
  }
}
protected class MFFloat471 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat472 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32473 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f474 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.8019f,-0.0794f,0.1956f,0.7815f,-0.0794f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f478 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.7815f,-0.0794f,0.1973f,0.7287f,-0.0777f});
  }
}
protected class MFFloat479 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat480 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32481 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f482 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1973f,0.7287f,-0.0777f,0.1983f,0.7045f,-0.0767f});
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
protected class MFFloat485 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat486 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32487 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f488 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.8066f,-0.1036f,0.1925f,0.7866f,-0.1036f});
  }
}
protected class MFFloat489 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat490 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32491 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f492 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.7866f,-0.1036f,0.1938f,0.7452f,-0.1024f});
  }
}
protected class MFFloat493 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat494 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32495 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f496 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1938f,0.7452f,-0.1024f,0.1948f,0.7277f,-0.1017f});
  }
}
protected class MFFloat497 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat498 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0694f,1.46f,-0.033f,-0.0836f,1.4281f,-0.0401f});
  }
}
protected class MFFloat503 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat504 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32505 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f506 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0836f,1.4281f,-0.0401f,-0.1907f,1.4407f,-0.0325f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f510 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1907f,1.4407f,-0.0325f,-0.1949f,1.1388f,-0.062f});
  }
}
protected class MFFloat511 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat512 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32513 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f514 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1949f,1.1388f,-0.062f,-0.1959f,0.8694f,-0.0521f});
  }
}
protected class MFFloat515 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat516 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32517 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f518 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,0f,1f,0f});
  }
}
protected class MFInt32519 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f520 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,0f,1f,0f});
  }
}
protected class MFInt32521 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f522 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,0f,1f,0f});
  }
}
protected class MFInt32523 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f524 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,0f,1f,0f});
  }
}
protected class MFFloat525 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat526 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32527 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f528 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,-0.1899f,0.8502f,-0.0473f});
  }
}
protected class MFFloat529 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat530 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32531 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f532 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1899f,0.8502f,-0.0473f,-0.1874f,0.8256f,0.0306f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f536 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1874f,0.8256f,0.0306f,-0.1864f,0.819f,0.0506f});
  }
}
protected class MFFloat537 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat538 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f542 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,-0.1961f,0.8055f,-0.0218f});
  }
}
protected class MFFloat543 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat544 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32545 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f546 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f,0.8055f,-0.0218f,-0.1961f,0.7846f,-0.0218f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f550 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f,0.7846f,-0.0218f,-0.1954f,0.7393f,-0.0185f});
  }
}
protected class MFFloat551 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat552 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32553 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f554 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1954f,0.7393f,-0.0185f,-0.1945f,0.7169f,-0.0173f});
  }
}
protected class MFFloat555 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat556 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFInt32559 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f560 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,-0.1972f,0.806f,-0.0468f});
  }
}
protected class MFFloat561 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat562 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32563 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f564 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f,0.806f,-0.0468f,-0.1972f,0.7849f,-0.0468f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f,0.7849f,-0.0468f,-0.195f,0.7304f,-0.0441f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.195f,0.7304f,-0.0441f,-0.1939f,0.7042f,-0.0432f});
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
protected class MFFloat575 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat576 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32577 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f578 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,-0.1951f,0.8049f,-0.0732f});
  }
}
protected class MFInt32579 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f580 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1f,0f,-0.1926f,0.8096f,-0.0975f});
  }
}
protected class MFFloat581 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat582 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32583 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f584 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f,0.8049f,-0.0732f,-0.1951f,0.7845f,-0.0732f});
  }
}
protected class MFFloat585 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat586 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32587 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f588 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f,0.7845f,-0.0732f,-0.192f,0.7318f,-0.0716f});
  }
}
protected class MFFloat589 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat590 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32591 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f592 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.192f,0.7318f,-0.0716f,-0.1908f,0.7077f,-0.0706f});
  }
}
protected class MFFloat593 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat594 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat595 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat596 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32597 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f598 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f,0.8096f,-0.0975f,-0.1926f,0.7896f,-0.0975f});
  }
}
protected class MFFloat599 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat600 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32601 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f602 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f,0.7896f,-0.0975f,-0.1902f,0.7483f,-0.0963f});
  }
}
protected class MFFloat603 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat604 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32605 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f606 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1902f,0.7483f,-0.0963f,-0.1908f,0.754f,-0.096f});
  }
}
protected class MFFloat607 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat608 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
}
