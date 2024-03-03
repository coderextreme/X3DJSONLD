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
public class Humanoid4_1 implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new Humanoid4_1().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/Humanoid4_1.new.java.x3d");
    model.toFileJSON("../data/Humanoid4_1.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("Humanoid4_1.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d"))
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
            .addChild(new Transform().setTranslation(new double[] {0,2,0})
              .addChild(new Shape().setDEF("HAnimRootShape")
                .setGeometry(new Sphere().setRadius(0.02))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("HAnimRootMaterial").setDiffuseColor(new double[] {0.8,0,0}).setTransparency(0.3)))))
            .addChild(new Transform().setTranslation(new double[] {0,2.1,0})
              .addChild(new Shape().setDEF("HAnimJointShape")
                .setGeometry(new Sphere().setRadius(0.02))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("HAnimJointMaterial").setDiffuseColor(new double[] {0,0,0.8}).setTransparency(0.3)))))
            .addChild(new Transform().setTranslation(new double[] {0,2.05,0})
              .addChild(new Shape().setDEF("HAnimSegmentLine")
                .setGeometry(new LineSet().setVertexCount(new MFInt324().getArray())
                  .setColor(new ColorRGBA().setDEF("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA5().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray())))))
            .addChild(new Transform().setTranslation(new double[] {0,2.1,0})
              .addChild(new Shape().setDEF("HAnimSiteShape")
                .setGeometry(new IndexedFaceSet().setDEF("DiamondIFS").setCreaseAngle(0.5).setSolid(false).setCoordIndex(new MFInt327().getArray())
                  .setColor(new ColorRGBA().setDEF("HAnimSiteColorRGBA").setColor(new MFColorRGBA8().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f9().getArray())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new double[] {1,1,0}).setTransparency(0.3)))))))
        .addChild(new NavigationInfo().setSpeed(1.5))
        .addChild(new Viewpoint().setDescription("default"))
        .addChild(new HAnimHumanoid().setName("HAnim").setDEF("hanim_HAnim").setInfo(new MFString10().getArray()).setVersion("2.0")
          .addComments("</LOD>")
          .setSkinCoord(((Coordinate)new Coordinate().setContainerFieldOverride("skinCoord")).setUSE("TheSkinCoord"))
          .addSkeleton(((HAnimJoint)new HAnimJoint("hanim_HAnim").setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new double[] {0,0.824,0.0277}).setContainerFieldOverride("skeleton"))
            .addChild(new HAnimSegment("hanim_humanoid_root").setName("sacrum").setDEF("hanim_sacrum")
              .addChild(new Transform().setTranslation(new double[] {0,0.824,0.0277})
                .addChild(new Transform()
                  .addComments("Empty Transform")
                  .addChild(new Shape().setUSE("HAnimJointShape"))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3211().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f12().getArray()))
                  .addComments("from humanoid_root to sacroiliac vertices 2")
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
              .addChild(new HAnimSite("hanim_sacrum").setName("buttocks_standing_wall_contact_point_pt").setDEF("hanim_buttocks_standing_wall_contact_point_pt")
                .addChild(new TouchSensor().setDescription("HAnimSite buttocks_standing_wall_contact_point_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setName("crotch_pt").setDEF("hanim_crotch_pt").setTranslation(new double[] {0.0034,0.8266,0.0257})
                .addChild(new TouchSensor().setDescription("HAnimSite crotch_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setName("l_asis_pt").setDEF("hanim_l_asis_pt").setTranslation(new double[] {0.0925,0.9983,0.1052})
                .addChild(new TouchSensor().setDescription("HAnimSite l_asis_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setName("l_iliocristale_pt").setDEF("hanim_l_iliocristale_pt").setTranslation(new double[] {0.1612,1.0537,0.0008})
                .addChild(new TouchSensor().setDescription("HAnimSite l_iliocristale_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setName("l_psis_pt").setDEF("hanim_l_psis_pt").setTranslation(new double[] {0.0774,1.019,-0.1151})
                .addChild(new TouchSensor().setDescription("HAnimSite l_psis_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setName("l_trochanterion_pt").setDEF("hanim_l_trochanterion_pt").setTranslation(new double[] {0.1677,0.8336,0.0303})
                .addChild(new TouchSensor().setDescription("HAnimSite l_trochanterion_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setName("r_asis_pt").setDEF("hanim_r_asis_pt").setTranslation(new double[] {-0.0887,1.0021,0.1112})
                .addChild(new TouchSensor().setDescription("HAnimSite r_asis_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setName("r_iliocristale_pt").setDEF("hanim_r_iliocristale_pt").setTranslation(new double[] {-0.1525,1.0628,0.0035})
                .addChild(new TouchSensor().setDescription("HAnimSite r_iliocristale_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setName("r_psis_pt").setDEF("hanim_r_psis_pt").setTranslation(new double[] {-0.0716,1.019,-0.1138})
                .addChild(new TouchSensor().setDescription("HAnimSite r_psis_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setName("r_trochanterion_pt").setDEF("hanim_r_trochanterion_pt").setTranslation(new double[] {-0.1689,0.8419,0.0352})
                .addChild(new TouchSensor().setDescription("HAnimSite r_trochanterion_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3213().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))
                  .addComments("from humanoid_root to vl5 vertices 2")
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
              .addChild(new HAnimSite("hanim_sacrum").setName("navel_pt").setDEF("hanim_navel_pt").setTranslation(new double[] {0.0069,1.0966,0.1017})
                .addChild(new TouchSensor().setDescription("HAnimSite navel_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setName("waist_preferred_anterior_pt").setDEF("hanim_waist_preferred_anterior_pt")
                .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_anterior_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("hanim_sacrum").setName("waist_preferred_posterior_pt").setDEF("hanim_waist_preferred_posterior_pt").setTranslation(new double[] {0.29,1.0915,-0.1091})
                .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_posterior_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape"))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new double[] {0,0.9149,0.0016})
              .addChild(new HAnimSegment("hanim_sacroiliac").setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new Transform().setTranslation(new double[] {0,0.9149,0.0016})
                  .addChild(new Transform()
                    .addComments("Empty Transform")
                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3215().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f16().getArray()))
                    .addComments("from sacroiliac to l_hip vertices 2")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addChild(new HAnimSite("hanim_pelvis").setName("l_femoral_lateral_epicondyles_pt").setDEF("hanim_l_femoral_lateral_epicondyles_pt").setTranslation(new double[] {0.1598,0.4967,0.0297})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_lateral_epicondyles_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setName("l_femoral_medial_epicondyles_pt").setDEF("hanim_l_femoral_medial_epicondyles_pt").setTranslation(new double[] {0.0398,0.4946,0.0303})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_medial_epicondyles_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setName("l_knee_crease_pt").setDEF("hanim_l_knee_crease_pt").setTranslation(new double[] {0.0993,0.4881,-0.0309})
                  .addChild(new TouchSensor().setDescription("HAnimSite l_knee_crease_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setName("l_suprapatella_pt").setDEF("hanim_l_suprapatella_pt")
                  .addChild(new TouchSensor().setDescription("HAnimSite l_suprapatella_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3217().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f18().getArray()))
                    .addComments("from sacroiliac to r_hip vertices 2")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_femoral_lateral_epicondyles_pt").setDEF("hanim_r_femoral_lateral_epicondyles_pt").setTranslation(new double[] {-0.1421,0.4992,0.031})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_lateral_epicondyles_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_femoral_medial_epicondyles_pt").setDEF("hanim_r_femoral_medial_epicondyles_pt").setTranslation(new double[] {-0.0221,0.5014,0.0289})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_medial_epicondyles_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_knee_crease_pt").setDEF("hanim_r_knee_crease_pt").setTranslation(new double[] {-0.0825,0.4932,-0.0326})
                  .addChild(new TouchSensor().setDescription("HAnimSite r_knee_crease_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setName("r_suprapatella_pt").setDEF("hanim_r_suprapatella_pt")
                  .addChild(new TouchSensor().setDescription("HAnimSite r_suprapatella_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("l_hip").setDEF("hanim_l_hip").setCenter(new double[] {0.0961,0.9124,-0.0001})
                .addChild(new HAnimSegment("hanim_l_hip").setName("l_thigh").setDEF("hanim_l_thigh")
                  .addChild(new Transform().setTranslation(new double[] {0.0961,0.9124,-0.0001})
                    .addChild(new Transform()
                      .addComments("Empty Transform")
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3219().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f20().getArray()))
                      .addComments("from l_hip to l_knee vertices 2")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName("l_lateral_malleolus_pt").setDEF("hanim_l_lateral_malleolus_pt").setTranslation(new double[] {0.1308,0.0597,-0.1032})
                    .addChild(new TouchSensor().setDescription("HAnimSite l_lateral_malleolus_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_l_thigh").setName("l_medial_malleolus_pt").setDEF("hanim_l_medial_malleolus_pt").setTranslation(new double[] {0.089,0.0716,-0.0881})
                    .addChild(new TouchSensor().setDescription("HAnimSite l_medial_malleolus_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_l_thigh").setName("l_tibiale_pt").setDEF("hanim_l_tibiale_pt")
                    .addChild(new TouchSensor().setDescription("HAnimSite l_tibiale_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint("hanim_l_hip").setName("l_knee").setDEF("hanim_l_knee").setCenter(new double[] {0.104,0.4867,0.0308})
                  .addChild(new HAnimSegment("hanim_l_knee").setName("l_calf").setDEF("hanim_l_calf")
                    .addChild(new Transform().setTranslation(new double[] {0.104,0.4867,0.0308})
                      .addChild(new Transform()
                        .addComments("Empty Transform")
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3221().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f22().getArray()))
                        .addComments("from l_knee to l_talocrural vertices 2")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimSite("hanim_l_calf").setName("l_calcaneus_posterior_pt").setDEF("hanim_l_calcaneus_posterior_pt").setTranslation(new double[] {0.0974,0.0259,-0.1171})
                      .addChild(new TouchSensor().setDescription("HAnimSite l_calcaneus_posterior_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                    .addChild(new HAnimSite("hanim_l_calf").setName("l_sphyrion_pt").setDEF("hanim_l_sphyrion_pt").setTranslation(new double[] {0.089,0.0575,-0.0943})
                      .addChild(new TouchSensor().setDescription("HAnimSite l_sphyrion_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                  .addChild(new HAnimJoint("hanim_l_knee").setName("l_talocrural").setDEF("hanim_l_talocrural").setCenter(new double[] {0.1101,0.0656,-0.0736})
                    .addChild(new HAnimSegment("hanim_l_talocrural").setName("l_talus").setDEF("hanim_l_talus")
                      .addChild(new Transform().setScale(new double[] {0.15,0.15,0.15}).setTranslation(new double[] {0.08,0.06,-0.025}).setRotation(new double[] {1,0,0,-1.57})
                        .addComments("Transform left foot")
                        .addChild(new Transform()
                          .addComments("Empty Transform left foot")
                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3223().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f24().getArray()))
                          .addComments("from l_talocrural to l_talocalcaneonavicular vertices 2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3225().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))
                          .addComments("from l_talocrural to l_calcaneocuboid vertices 2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_talocalcaneonavicular").setDEF("hanim_l_talocalcaneonavicular").setCenter(new double[] {3.4715,0.0374,0.6807})
                      .addChild(new HAnimSegment("hanim_l_talocalcaneonavicular").setName("l_navicular").setDEF("hanim_l_navicular")
                        .addChild(new Transform().setTranslation(new double[] {3.4715,0.0374,0.6807})
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3227().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f28().getArray()))
                            .addComments("from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3229().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))
                            .addComments("from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3231().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f32().getArray()))
                            .addComments("from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName("l_cuneonavicular_1").setDEF("hanim_l_cuneonavicular_1").setCenter(new double[] {2.9855,0.0311,1.2819})
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_1").setName("l_cuneiform_1").setDEF("hanim_l_cuneiform_1")
                          .addChild(new Transform().setTranslation(new double[] {2.9855,0.0311,1.2819})
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3233().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray()))
                              .addComments("from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_1").setName("l_tarsometatarsal_1").setDEF("hanim_l_tarsometatarsal_1").setCenter(new double[] {2.8635,0.0194,2.4285})
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_1").setName("l_metatarsal_1").setDEF("hanim_l_metatarsal_1")
                            .addChild(new Transform().setTranslation(new double[] {2.8635,0.0194,2.4285})
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3235().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f36().getArray()))
                                .addComments("from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimSite("hanim_l_metatarsal_1").setName("l_metatarsal_phalanx_1_pt").setDEF("hanim_l_metatarsal_phalanx_1_pt")
                              .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_phalanx_1_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_1").setName("l_metatarsophalangeal_1").setDEF("hanim_l_metatarsophalangeal_1").setCenter(new double[] {2.7525,0.0077,4.6255})
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_1").setName("l_tarsal_proximal_phalanx_1").setDEF("hanim_l_tarsal_proximal_phalanx_1")
                              .addChild(new Transform().setTranslation(new double[] {2.7525,0.0077,4.6255})
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3237().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray()))
                                  .addComments("from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_l_tarsal_proximal_phalanx_1").setName("l_tarsal_distal_phalanx_1_tip").setDEF("hanim_l_tarsal_distal_phalanx_1_tip")
                                .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_1").setName("l_tarsal_interphalangeal_1").setDEF("hanim_l_tarsal_interphalangeal_1")))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName("l_cuneonavicular_2").setDEF("hanim_l_cuneonavicular_2").setCenter(new double[] {3.6105,0.033,1.4168})
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_2").setName("l_cuneiform_2").setDEF("hanim_l_cuneiform_2")
                          .addChild(new Transform().setTranslation(new double[] {3.6105,0.033,1.4168})
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3239().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f40().getArray()))
                              .addComments("from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_2").setName("l_tarsometatarsal_2").setDEF("hanim_l_tarsometatarsal_2").setCenter(new double[] {3.5555,0.0232,2.2895})
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_2").setName("l_metatarsal_2").setDEF("hanim_l_metatarsal_2")
                            .addChild(new Transform().setTranslation(new double[] {3.5555,0.0232,2.2895})
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3241().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray()))
                                .addComments("from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setName("l_metatarsophalangeal_2").setDEF("hanim_l_metatarsophalangeal_2").setCenter(new double[] {3.6595,0.0085,4.8125})
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setName("l_tarsal_proximal_phalanx_2").setDEF("hanim_l_tarsal_proximal_phalanx_2")
                              .addChild(new Transform().setTranslation(new double[] {3.6595,0.0085,4.8125})
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3243().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f44().getArray()))
                                  .addComments("from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName("l_tarsal_proximal_interphalangeal_2").setDEF("hanim_l_tarsal_proximal_interphalangeal_2").setCenter(new double[] {3.7385,0.0054,5.5315})
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_2").setName("l_tarsal_middle_phalanx_2").setDEF("hanim_l_tarsal_middle_phalanx_2")
                                .addChild(new Transform().setTranslation(new double[] {3.7385,0.0054,5.5315})
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3245().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray()))
                                    .addComments("from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite("hanim_l_tarsal_middle_phalanx_2").setName("l_tarsal_distal_phalanx_2_tip").setDEF("hanim_l_tarsal_distal_phalanx_2_tip").setTranslation(new double[] {0.1195,0.0079,0.1433})
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setCenter(new double[] {3.7385,0.0017,5.9505}))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName("l_cuneonavicular_3").setDEF("hanim_l_cuneonavicular_3").setCenter(new double[] {4.1235,0.0328,1.3453})
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_3").setName("l_cuneiform_3").setDEF("hanim_l_cuneiform_3")
                          .addChild(new Transform().setTranslation(new double[] {4.1235,0.0328,1.3453})
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3247().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f48().getArray()))
                              .addComments("from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_3").setName("l_tarsometatarsal_3").setDEF("hanim_l_tarsometatarsal_3")
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_3").setName("l_metatarsal_3").setDEF("hanim_l_metatarsal_3")
                            .addChild(new Transform().setTranslation(new double[] {4.1235,0.0328,1.3453})
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3249().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray()))
                                .addComments("from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_3").setName("l_metatarsophalangeal_3").setDEF("hanim_l_metatarsophalangeal_3").setCenter(new double[] {4.2795,0.0086,4.7055})
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_3").setName("l_tarsal_proximal_phalanx_3").setDEF("hanim_l_tarsal_proximal_phalanx_3")
                              .addChild(new Transform().setTranslation(new double[] {4.2795,0.0086,4.7055})
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3251().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f52().getArray()))
                                  .addComments("from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_3").setName("l_tarsal_proximal_interphalangeal_3").setDEF("hanim_l_tarsal_proximal_interphalangeal_3").setCenter(new double[] {4.3855,0.0044,5.3745})
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_3").setName("l_tarsal_middle_phalanx_3").setDEF("hanim_l_tarsal_middle_phalanx_3")
                                .addChild(new Transform().setTranslation(new double[] {4.3855,0.0044,5.3745})
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3253().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray()))
                                    .addComments("from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite("hanim_l_tarsal_middle_phalanx_3").setName("l_tarsal_distal_phalanx_3_tip").setDEF("hanim_l_tarsal_distal_phalanx_3_tip")
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_3").setName("l_tarsal_distal_interphalangeal_3").setDEF("hanim_l_tarsal_distal_interphalangeal_3").setCenter(new double[] {4.4545,0.0017,5.7845})))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_calcaneocuboid").setDEF("hanim_l_calcaneocuboid").setCenter(new double[] {3.9515,0.0653,-0.6895})
                      .addChild(new HAnimSegment("hanim_l_calcaneocuboid").setName("l_calcaneus").setDEF("hanim_l_calcaneus")
                        .addChild(new Transform().setTranslation(new double[] {3.9515,0.0653,-0.6895})
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3255().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f56().getArray()))
                            .addComments("from l_calcaneocuboid to l_transversetarsal vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint("hanim_l_calcaneocuboid").setName("l_transversetarsal").setDEF("hanim_l_transversetarsal").setCenter(new double[] {4.9085,0.0353,0.5574})
                        .addChild(new HAnimSegment("hanim_l_transversetarsal").setName("l_cuboid").setDEF("hanim_l_cuboid")
                          .addChild(new Transform().setTranslation(new double[] {4.9085,0.0353,0.5574})
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3257().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f58().getArray()))
                              .addComments("from l_transversetarsal to l_tarsometatarsal_4 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3259().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f60().getArray()))
                              .addComments("from l_transversetarsal to l_tarsometatarsal_5 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName("l_tarsometatarsal_4").setDEF("hanim_l_tarsometatarsal_4").setCenter(new double[] {4.7245,0.0211,2.1725})
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_4").setName("l_metatarsal_4").setDEF("hanim_l_metatarsal_4")
                            .addChild(new Transform().setTranslation(new double[] {4.7245,0.0211,2.1725})
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3261().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f62().getArray()))
                                .addComments("from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_4").setName("l_metatarsophalangeal_4").setDEF("hanim_l_metatarsophalangeal_4").setCenter(new double[] {4.8745,0.0076,4.5165})
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_4").setName("l_tarsal_proximal_phalanx_4").setDEF("hanim_l_tarsal_proximal_phalanx_4")
                              .addChild(new Transform().setTranslation(new double[] {4.8745,0.0076,4.5165})
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3263().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f64().getArray()))
                                  .addComments("from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_4").setName("l_tarsal_proximal_interphalangeal_4").setDEF("hanim_l_tarsal_proximal_interphalangeal_4").setCenter(new double[] {5.0655,0.0049,5.1895})
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_4").setName("l_tarsal_middle_phalanx_4").setDEF("hanim_l_tarsal_middle_phalanx_4")
                                .addChild(new Transform().setTranslation(new double[] {5.0655,0.0049,5.1895})
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3265().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f66().getArray()))
                                    .addComments("from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite("hanim_l_tarsal_middle_phalanx_4").setName("l_tarsal_distal_phalanx_4_tip").setDEF("hanim_l_tarsal_distal_phalanx_4_tip")
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_4").setName("l_tarsal_distal_interphalangeal_4").setDEF("hanim_l_tarsal_distal_interphalangeal_4").setCenter(new double[] {5.1325,0.0011,5.5175})))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName("l_tarsometatarsal_5").setDEF("hanim_l_tarsometatarsal_5").setCenter(new double[] {5.3615,0.0164,2.0085})
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_5").setName("l_metatarsal_5").setDEF("hanim_l_metatarsal_5")
                            .addChild(new Transform().setTranslation(new double[] {5.3615,0.0164,2.0085})
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3267().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f68().getArray()))
                                .addComments("from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimSite("hanim_l_metatarsal_5").setName("l_metatarsal_phalanx_5_pt").setDEF("hanim_l_metatarsal_phalanx_5_pt")
                              .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_phalanx_5_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_5").setName("l_metatarsophalangeal_5").setDEF("hanim_l_metatarsophalangeal_5").setCenter(new double[] {5.5055,0.0067,4.3115})
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_5").setName("l_tarsal_proximal_phalanx_5").setDEF("hanim_l_tarsal_proximal_phalanx_5")
                              .addChild(new Transform().setTranslation(new double[] {5.5055,0.0067,4.3115})
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3269().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f70().getArray()))
                                  .addComments("from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_5").setName("l_tarsal_proximal_interphalangeal_5").setDEF("hanim_l_tarsal_proximal_interphalangeal_5").setCenter(new double[] {5.6085,0.003,4.6485})
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_5").setName("l_tarsal_middle_phalanx_5").setDEF("hanim_l_tarsal_middle_phalanx_5")
                                .addChild(new Transform().setTranslation(new double[] {5.6085,0.003,4.6485})
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3271().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f72().getArray()))
                                    .addComments("from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite("hanim_l_tarsal_middle_phalanx_5").setName("l_tarsal_distal_phalanx_5_tip").setDEF("hanim_l_tarsal_distal_phalanx_5_tip")
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_5").setName("l_tarsal_distal_interphalangeal_5").setDEF("hanim_l_tarsal_distal_interphalangeal_5").setCenter(new double[] {5.6485,0,4.9925}))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("r_hip").setDEF("hanim_r_hip").setCenter(new double[] {-0.095,0.9171,0.0029})
                .addChild(new HAnimSegment("hanim_r_hip").setName("r_thigh").setDEF("hanim_r_thigh")
                  .addChild(new Transform().setTranslation(new double[] {-0.095,0.9171,0.0029})
                    .addChild(new Transform()
                      .addComments("Empty Transform")
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3273().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f74().getArray()))
                      .addComments("from r_hip to r_knee vertices 2")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName("r_lateral_malleolus_pt").setDEF("hanim_r_lateral_malleolus_pt").setTranslation(new double[] {-0.1006,0.0658,-0.1075})
                    .addChild(new TouchSensor().setDescription("HAnimSite r_lateral_malleolus_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_r_thigh").setName("r_medial_malleolus_pt").setDEF("hanim_r_medial_malleolus_pt").setTranslation(new double[] {-0.0591,0.076,-0.0928})
                    .addChild(new TouchSensor().setDescription("HAnimSite r_medial_malleolus_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_r_thigh").setName("r_tibiale_pt").setDEF("hanim_r_tibiale_pt")
                    .addChild(new TouchSensor().setDescription("HAnimSite r_tibiale_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint("hanim_r_hip").setName("r_knee").setDEF("hanim_r_knee").setCenter(new double[] {-0.0867,0.4913,0.0318})
                  .addChild(new HAnimSegment("hanim_r_knee").setName("r_calf").setDEF("hanim_r_calf")
                    .addChild(new Transform().setTranslation(new double[] {-0.0867,0.4913,0.0318})
                      .addChild(new Transform()
                        .addComments("Empty Transform")
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3275().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f76().getArray()))
                        .addComments("from r_knee to r_talocrural vertices 2")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimSite("hanim_r_calf").setName("r_calcaneus_posterior_pt").setDEF("hanim_r_calcaneus_posterior_pt").setTranslation(new double[] {-0.0692,0.0297,-0.1221})
                      .addChild(new TouchSensor().setDescription("HAnimSite r_calcaneus_posterior_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                    .addChild(new HAnimSite("hanim_r_calf").setName("r_sphyrion_pt").setDEF("hanim_r_sphyrion_pt").setTranslation(new double[] {-0.0603,0.061,-0.1002})
                      .addChild(new TouchSensor().setDescription("HAnimSite r_sphyrion_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                  .addChild(new HAnimJoint("hanim_r_knee").setName("r_talocrural").setDEF("hanim_r_talocrural").setCenter(new double[] {-0.0801,0.0712,-0.0766})
                    .addChild(new HAnimSegment("hanim_r_talocrural").setName("r_talus").setDEF("hanim_r_talus")
                      .addChild(new Transform().setScale(new double[] {0.15,0.15,0.15}).setTranslation(new double[] {-0.05,0.06,-0.025}).setRotation(new double[] {1,0,0,-1.57})
                        .addComments("Transform right foot")
                        .addChild(new Transform()
                          .addComments("Empty Transform right foot")
                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3277().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f78().getArray()))
                          .addComments("from r_talocrural to r_talocalcaneonavicular vertices 2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3279().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray()))
                          .addComments("from r_talocrural to r_calcaneocuboid vertices 2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocalcaneonavicular").setDEF("hanim_r_talocalcaneonavicular").setCenter(new double[] {-3.4725,0.0374,0.6807})
                      .addChild(new HAnimSegment("hanim_r_talocalcaneonavicular").setName("r_navicular").setDEF("hanim_r_navicular")
                        .addChild(new Transform().setTranslation(new double[] {-3.4725,0.0374,0.6807})
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3281().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f82().getArray()))
                            .addComments("from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3283().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f84().getArray()))
                            .addComments("from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3285().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray()))
                            .addComments("from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_cuneonavicular_1").setDEF("hanim_r_cuneonavicular_1").setCenter(new double[] {-2.9855,0.0311,1.2819})
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_1").setName("r_cuneiform_1").setDEF("hanim_r_cuneiform_1")
                          .addChild(new Transform().setTranslation(new double[] {-2.9855,0.0311,1.2819})
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3287().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f88().getArray()))
                              .addComments("from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setName("r_tarsometatarsal_1").setDEF("hanim_r_tarsometatarsal_1").setCenter(new double[] {-2.8645,0.0194,2.4285})
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_1").setName("r_metatarsal_1").setDEF("hanim_r_metatarsal_1")
                            .addChild(new Transform().setTranslation(new double[] {-2.8645,0.0194,2.4285})
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3289().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f90().getArray()))
                                .addComments("from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimSite("hanim_r_metatarsal_1").setName("r_metatarsal_phalanx_1_pt").setDEF("hanim_r_metatarsal_phalanx_1_pt")
                              .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_phalanx_1_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setName("r_metatarsophalangeal_1").setDEF("hanim_r_metatarsophalangeal_1").setCenter(new double[] {-2.7535,0.0077,4.6255})
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_1").setName("r_tarsal_proximal_phalanx_1").setDEF("hanim_r_tarsal_proximal_phalanx_1")
                              .addChild(new Transform().setTranslation(new double[] {-2.7535,0.0077,4.6255})
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3291().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f92().getArray()))
                                  .addComments("from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_r_tarsal_proximal_phalanx_1").setName("r_tarsal_distal_phalanx_1_tip").setDEF("hanim_r_tarsal_distal_phalanx_1_tip")
                                .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setName("r_tarsal_interphalangeal_1").setDEF("hanim_r_tarsal_interphalangeal_1")))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_cuneonavicular_2").setDEF("hanim_r_cuneonavicular_2").setCenter(new double[] {-3.6105,0.033,1.4168})
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_2").setName("r_cuneiform_2").setDEF("hanim_r_cuneiform_2")
                          .addChild(new Transform().setTranslation(new double[] {-3.6105,0.033,1.4168})
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3293().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f94().getArray()))
                              .addComments("from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setName("r_tarsometatarsal_2").setDEF("hanim_r_tarsometatarsal_2").setCenter(new double[] {-3.5565,0.0232,2.2895})
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_2").setName("r_metatarsal_2").setDEF("hanim_r_metatarsal_2")
                            .addChild(new Transform().setTranslation(new double[] {-3.5565,0.0232,2.2895})
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3295().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f96().getArray()))
                                .addComments("from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new double[] {-3.6595,0.0085,4.8125})
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2")
                              .addChild(new Transform().setTranslation(new double[] {-3.6595,0.0085,4.8125})
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3297().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray()))
                                  .addComments("from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_tarsal_proximal_interphalangeal_2").setDEF("hanim_r_tarsal_proximal_interphalangeal_2").setCenter(new double[] {-3.7385,0.0054,5.5315})
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_middle_phalanx_2").setDEF("hanim_r_tarsal_middle_phalanx_2")
                                .addChild(new Transform().setTranslation(new double[] {-3.7385,0.0054,5.5315})
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3299().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f100().getArray()))
                                    .addComments("from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite("hanim_r_tarsal_middle_phalanx_2").setName("r_tarsal_distal_phalanx_2_tip").setDEF("hanim_r_tarsal_distal_phalanx_2_tip").setTranslation(new double[] {-0.0883,0.0134,0.1383})
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setCenter(new double[] {-3.7385,0.0017,5.9505}))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_cuneonavicular_3").setDEF("hanim_r_cuneonavicular_3").setCenter(new double[] {-4.1245,0.0328,1.3453})
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_3").setName("r_cuneiform_3").setDEF("hanim_r_cuneiform_3")
                          .addChild(new Transform().setTranslation(new double[] {-4.1245,0.0328,1.3453})
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32101().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f102().getArray()))
                              .addComments("from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setName("r_tarsometatarsal_3").setDEF("hanim_r_tarsometatarsal_3")
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_3").setName("r_metatarsal_3").setDEF("hanim_r_metatarsal_3")
                            .addChild(new Transform().setTranslation(new double[] {-4.1245,0.0328,1.3453})
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32103().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f104().getArray()))
                                .addComments("from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setName("r_metatarsophalangeal_3").setDEF("hanim_r_metatarsophalangeal_3").setCenter(new double[] {-4.2795,0.0086,4.7055})
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_3").setName("r_tarsal_proximal_phalanx_3").setDEF("hanim_r_tarsal_proximal_phalanx_3")
                              .addChild(new Transform().setTranslation(new double[] {-4.2795,0.0086,4.7055})
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32105().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f106().getArray()))
                                  .addComments("from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setName("r_tarsal_proximal_interphalangeal_3").setDEF("hanim_r_tarsal_proximal_interphalangeal_3").setCenter(new double[] {-4.3865,0.0044,5.3745})
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_middle_phalanx_3").setDEF("hanim_r_tarsal_middle_phalanx_3")
                                .addChild(new Transform().setTranslation(new double[] {-4.3865,0.0044,5.3745})
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32107().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f108().getArray()))
                                    .addComments("from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite("hanim_r_tarsal_middle_phalanx_3").setName("r_tarsal_distal_phalanx_3_tip").setDEF("hanim_r_tarsal_distal_phalanx_3_tip")
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_distal_interphalangeal_3").setDEF("hanim_r_tarsal_distal_interphalangeal_3").setCenter(new double[] {-4.4545,0.0017,5.7845})))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_calcaneocuboid").setDEF("hanim_r_calcaneocuboid").setCenter(new double[] {-3.9515,0.0653,-0.6895})
                      .addChild(new HAnimSegment("hanim_r_calcaneocuboid").setName("r_calcaneus").setDEF("hanim_r_calcaneus")
                        .addChild(new Transform().setTranslation(new double[] {-3.9515,0.0653,-0.6895})
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32109().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray()))
                            .addComments("from r_calcaneocuboid to r_transversetarsal vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setName("r_transversetarsal").setDEF("hanim_r_transversetarsal").setCenter(new double[] {-4.9095,0.0353,0.5574})
                        .addChild(new HAnimSegment("hanim_r_transversetarsal").setName("r_cuboid").setDEF("hanim_r_cuboid")
                          .addChild(new Transform().setTranslation(new double[] {-4.9095,0.0353,0.5574})
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32111().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f112().getArray()))
                              .addComments("from r_transversetarsal to r_tarsometatarsal_4 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32113().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f114().getArray()))
                              .addComments("from r_transversetarsal to r_tarsometatarsal_5 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName("r_tarsometatarsal_4").setDEF("hanim_r_tarsometatarsal_4").setCenter(new double[] {-4.7255,0.0211,2.1725})
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_4").setName("r_metatarsal_4").setDEF("hanim_r_metatarsal_4")
                            .addChild(new Transform().setTranslation(new double[] {-4.7255,0.0211,2.1725})
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32115().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f116().getArray()))
                                .addComments("from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setName("r_metatarsophalangeal_4").setDEF("hanim_r_metatarsophalangeal_4").setCenter(new double[] {-4.8755,0.0076,4.5165})
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_4").setName("r_tarsal_proximal_phalanx_4").setDEF("hanim_r_tarsal_proximal_phalanx_4")
                              .addChild(new Transform().setTranslation(new double[] {-4.8755,0.0076,4.5165})
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32117().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f118().getArray()))
                                  .addComments("from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setName("r_tarsal_proximal_interphalangeal_4").setDEF("hanim_r_tarsal_proximal_interphalangeal_4").setCenter(new double[] {-5.0655,0.0049,5.1895})
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_middle_phalanx_4").setDEF("hanim_r_tarsal_middle_phalanx_4")
                                .addChild(new Transform().setTranslation(new double[] {-5.0655,0.0049,5.1895})
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32119().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f120().getArray()))
                                    .addComments("from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite("hanim_r_tarsal_middle_phalanx_4").setName("r_tarsal_distal_phalanx_4_tip").setDEF("hanim_r_tarsal_distal_phalanx_4_tip")
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_distal_interphalangeal_4").setDEF("hanim_r_tarsal_distal_interphalangeal_4").setCenter(new double[] {-5.1335,0.0011,5.5175})))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName("r_tarsometatarsal_5").setDEF("hanim_r_tarsometatarsal_5").setCenter(new double[] {-5.3615,0.0164,2.0085})
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_5").setName("r_metatarsal_5").setDEF("hanim_r_metatarsal_5")
                            .addChild(new Transform().setTranslation(new double[] {-5.3615,0.0164,2.0085})
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32121().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f122().getArray()))
                                .addComments("from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimSite("hanim_r_metatarsal_5").setName("r_metatarsal_phalanx_5_pt").setDEF("hanim_r_metatarsal_phalanx_5_pt")
                              .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_phalanx_5_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setName("r_metatarsophalangeal_5").setDEF("hanim_r_metatarsophalangeal_5").setCenter(new double[] {-5.5055,0.0067,4.3115})
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_5").setName("r_tarsal_proximal_phalanx_5").setDEF("hanim_r_tarsal_proximal_phalanx_5")
                              .addChild(new Transform().setTranslation(new double[] {-5.5055,0.0067,4.3115})
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32123().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f124().getArray()))
                                  .addComments("from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setName("r_tarsal_proximal_interphalangeal_5").setDEF("hanim_r_tarsal_proximal_interphalangeal_5").setCenter(new double[] {-5.6085,0.003,4.6485})
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_5").setName("r_tarsal_middle_phalanx_5").setDEF("hanim_r_tarsal_middle_phalanx_5")
                                .addChild(new Transform().setTranslation(new double[] {-5.6085,0.003,4.6485})
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32125().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f126().getArray()))
                                    .addComments("from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addChild(new HAnimSite("hanim_r_tarsal_middle_phalanx_5").setName("r_tarsal_distal_phalanx_5_tip").setDEF("hanim_r_tarsal_distal_phalanx_5_tip")
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5").setName("r_tarsal_distal_interphalangeal_5").setDEF("hanim_r_tarsal_distal_interphalangeal_5").setCenter(new double[] {-5.6495,0,4.9925})))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("vl5").setDEF("hanim_vl5").setCenter(new double[] {0.0028,1.0568,-0.0776})
              .addChild(new HAnimSegment("hanim_vl5").setName("l5").setDEF("hanim_l5")
                .addChild(new Transform().setTranslation(new double[] {0.0028,1.0568,-0.0776})
                  .addChild(new Transform()
                    .addComments("Empty Transform")
                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32127().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f128().getArray()))
                    .addComments("from vl5 to vl4 vertices 2")
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
              .addChild(new HAnimJoint("hanim_vl5").setName("vl4").setDEF("hanim_vl4").setCenter(new double[] {0.0035,1.0925,-0.0787})
                .addChild(new HAnimSegment("hanim_vl4").setName("l4").setDEF("hanim_l4")
                  .addChild(new Transform().setTranslation(new double[] {0.0035,1.0925,-0.0787})
                    .addChild(new Transform()
                      .addComments("Empty Transform")
                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32129().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f130().getArray()))
                      .addComments("from vl4 to vl3 vertices 2")
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                .addChild(new HAnimJoint("hanim_vl4").setName("vl3").setDEF("hanim_vl3").setCenter(new double[] {0.0041,1.1276,-0.0796})
                  .addChild(new HAnimSegment("hanim_vl3").setName("l3").setDEF("hanim_l3")
                    .addChild(new Transform().setTranslation(new double[] {0.0041,1.1276,-0.0796})
                      .addChild(new Transform()
                        .addComments("Empty Transform")
                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32131().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f132().getArray()))
                        .addComments("from vl3 to vl2 vertices 2")
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                    .addChild(new HAnimSite("hanim_l3").setName("l_rib10_pt").setDEF("hanim_l_rib10_pt").setTranslation(new double[] {0.0871,1.1925,0.0992})
                      .addChild(new TouchSensor().setDescription("HAnimSite l_rib10_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                    .addChild(new HAnimSite("hanim_l3").setName("r_rib10_pt").setDEF("hanim_r_rib10_pt").setTranslation(new double[] {-0.0711,1.1941,0.1016})
                      .addChild(new TouchSensor().setDescription("HAnimSite r_rib10_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                    .addChild(new HAnimSite("hanim_l3").setName("spine_2_middle_back_pt").setDEF("hanim_spine_2_middle_back_pt")
                      .addChild(new TouchSensor().setDescription("HAnimSite spine_2_middle_back_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                  .addChild(new HAnimJoint("hanim_vl3").setName("vl2").setDEF("hanim_vl2").setCenter(new double[] {0.0045,1.1546,-0.08})
                    .addChild(new HAnimSegment("hanim_vl2").setName("l2").setDEF("hanim_l2")
                      .addChild(new Transform().setTranslation(new double[] {0.0045,1.1546,-0.08})
                        .addChild(new Transform()
                          .addComments("Empty Transform")
                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32133().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f134().getArray()))
                          .addComments("from vl2 to vl1 vertices 2")
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                    .addChild(new HAnimJoint("hanim_vl2").setName("vl1").setDEF("hanim_vl1").setCenter(new double[] {0.0048,1.1912,-0.0805})
                      .addChild(new HAnimSegment("hanim_vl1").setName("l1").setDEF("hanim_l1")
                        .addChild(new Transform().setTranslation(new double[] {0.0048,1.1912,-0.0805})
                          .addChild(new Transform()
                            .addComments("Empty Transform")
                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32135().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f136().getArray()))
                            .addComments("from vl1 to vt12 vertices 2")
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint("hanim_vl1").setName("vt12").setDEF("hanim_vt12").setCenter(new double[] {0.0051,1.2278,-0.0808})
                        .addChild(new HAnimSegment("hanim_vt12").setName("t12").setDEF("hanim_t12")
                          .addChild(new Transform().setTranslation(new double[] {0.0051,1.2278,-0.0808})
                            .addChild(new Transform()
                              .addComments("Empty Transform")
                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32137().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f138().getArray()))
                              .addComments("from vt12 to vt11 vertices 2")
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint("hanim_vt12").setName("vt11").setDEF("hanim_vt11").setCenter(new double[] {0.0053,1.2679,-0.081})
                          .addChild(new HAnimSegment("hanim_vt11").setName("t11").setDEF("hanim_t11")
                            .addChild(new Transform().setTranslation(new double[] {0.0053,1.2679,-0.081})
                              .addChild(new Transform()
                                .addComments("Empty Transform")
                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32139().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f140().getArray()))
                                .addComments("from vt11 to vt10 vertices 2")
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                            .addChild(new HAnimSite("hanim_t11").setName("substernale_pt").setDEF("hanim_substernale_pt").setTranslation(new double[] {0.0085,1.2995,0.1147})
                              .addChild(new TouchSensor().setDescription("HAnimSite substernale_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                          .addChild(new HAnimJoint("hanim_vt11").setName("vt10").setDEF("hanim_vt10").setCenter(new double[] {0.0056,1.2848,-0.0822})
                            .addChild(new HAnimSegment("hanim_vt10").setName("t10").setDEF("hanim_t10")
                              .addChild(new Transform().setTranslation(new double[] {0.0056,1.2848,-0.0822})
                                .addChild(new Transform()
                                  .addComments("Empty Transform")
                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32141().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f142().getArray()))
                                  .addComments("from vt10 to vt9 vertices 2")
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addChild(new HAnimSite("hanim_t10").setName("l_thelion_pt").setDEF("hanim_l_thelion_pt").setTranslation(new double[] {0.0918,1.3382,0.1192})
                                .addChild(new TouchSensor().setDescription("HAnimSite l_thelion_pt"))
                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                              .addChild(new HAnimSite("hanim_t10").setName("r_thelion_pt").setDEF("hanim_r_thelion_pt").setTranslation(new double[] {-0.0736,1.3385,0.1217})
                                .addChild(new TouchSensor().setDescription("HAnimSite r_thelion_pt"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                            .addChild(new HAnimJoint("hanim_vt10").setName("vt9").setDEF("hanim_vt9").setCenter(new double[] {0.0057,1.3126,-0.0838})
                              .addChild(new HAnimSegment("hanim_vt9").setName("t9").setDEF("hanim_t9")
                                .addChild(new Transform().setTranslation(new double[] {0.0057,1.3126,-0.0838})
                                  .addChild(new Transform()
                                    .addComments("Empty Transform")
                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32143().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f144().getArray()))
                                    .addComments("from vt9 to vt8 vertices 2")
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimJoint("hanim_vt9").setName("vt8").setDEF("hanim_vt8").setCenter(new double[] {0.0057,1.3382,-0.0845})
                                .addChild(new HAnimSegment("hanim_vt8").setName("t8").setDEF("hanim_t8")
                                  .addChild(new Transform().setTranslation(new double[] {0.0057,1.3382,-0.0845})
                                    .addChild(new Transform()
                                      .addComments("Empty Transform")
                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32145().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f146().getArray()))
                                      .addComments("from vt8 to vt7 vertices 2")
                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                .addChild(new HAnimJoint("hanim_vt8").setName("vt7").setDEF("hanim_vt7").setCenter(new double[] {0.0058,1.3625,-0.0833})
                                  .addChild(new HAnimSegment("hanim_vt7").setName("t7").setDEF("hanim_t7")
                                    .addChild(new Transform().setTranslation(new double[] {0.0058,1.3625,-0.0833})
                                      .addChild(new Transform()
                                        .addComments("Empty Transform")
                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                    .addChild(new Shape()
                                      .setGeometry(new LineSet().setVertexCount(new MFInt32147().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f148().getArray()))
                                        .addComments("from vt7 to vt6 vertices 2")
                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                    .addChild(new HAnimSite("hanim_t7").setName("l_chest_midsagittal_plane_pt").setDEF("hanim_l_chest_midsagittal_plane_pt")
                                      .addChild(new TouchSensor().setDescription("HAnimSite l_chest_midsagittal_plane_pt"))
                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                    .addChild(new HAnimSite("hanim_t7").setName("mesosternale_pt").setDEF("hanim_mesosternale_pt")
                                      .addChild(new TouchSensor().setDescription("HAnimSite mesosternale_pt"))
                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                    .addChild(new HAnimSite("hanim_t7").setName("r_chest_midsagittal_plane_pt").setDEF("hanim_r_chest_midsagittal_plane_pt")
                                      .addChild(new TouchSensor().setDescription("HAnimSite r_chest_midsagittal_plane_pt"))
                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                    .addChild(new HAnimSite("hanim_t7").setName("rear_center_midsagittal_plane_pt").setDEF("hanim_rear_center_midsagittal_plane_pt")
                                      .addChild(new TouchSensor().setDescription("HAnimSite rear_center_midsagittal_plane_pt"))
                                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                  .addChild(new HAnimJoint("hanim_vt7").setName("vt6").setDEF("hanim_vt6").setCenter(new double[] {0.0059,1.3866,-0.08})
                                    .addChild(new HAnimSegment("hanim_vt6").setName("t6").setDEF("hanim_t6")
                                      .addChild(new Transform().setTranslation(new double[] {0.0059,1.3866,-0.08})
                                        .addChild(new Transform()
                                          .addComments("Empty Transform")
                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                      .addChild(new Shape()
                                        .setGeometry(new LineSet().setVertexCount(new MFInt32149().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f150().getArray()))
                                          .addComments("from vt6 to vt5 vertices 2")
                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                      .addChild(new HAnimSite("hanim_t6").setName("spine_1_middle_back_pt").setDEF("hanim_spine_1_middle_back_pt")
                                        .addChild(new TouchSensor().setDescription("HAnimSite spine_1_middle_back_pt"))
                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                    .addChild(new HAnimJoint("hanim_vt6").setName("vt5").setDEF("hanim_vt5").setCenter(new double[] {0.006,1.4102,-0.0745})
                                      .addChild(new HAnimSegment("hanim_vt5").setName("t5").setDEF("hanim_t5")
                                        .addChild(new Transform().setTranslation(new double[] {0.006,1.4102,-0.0745})
                                          .addChild(new Transform()
                                            .addComments("Empty Transform")
                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                        .addChild(new Shape()
                                          .setGeometry(new LineSet().setVertexCount(new MFInt32151().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f152().getArray()))
                                            .addComments("from vt5 to vt4 vertices 2")
                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                      .addChild(new HAnimJoint("hanim_vt5").setName("vt4").setDEF("hanim_vt4").setCenter(new double[] {0.0061,1.432,-0.0675})
                                        .addChild(new HAnimSegment("hanim_vt4").setName("t4").setDEF("hanim_t4")
                                          .addChild(new Transform().setTranslation(new double[] {0.0061,1.432,-0.0675})
                                            .addChild(new Transform()
                                              .addComments("Empty Transform")
                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                          .addChild(new Shape()
                                            .setGeometry(new LineSet().setVertexCount(new MFInt32153().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f154().getArray()))
                                              .addComments("from vt4 to vt3 vertices 2")
                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                        .addChild(new HAnimJoint("hanim_vt4").setName("vt3").setDEF("hanim_vt3").setCenter(new double[] {0.0062,1.4583,-0.057})
                                          .addChild(new HAnimSegment("hanim_vt3").setName("t3").setDEF("hanim_t3")
                                            .addChild(new Transform().setTranslation(new double[] {0.0062,1.4583,-0.057})
                                              .addChild(new Transform()
                                                .addComments("Empty Transform")
                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                            .addChild(new Shape()
                                              .setGeometry(new LineSet().setVertexCount(new MFInt32155().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f156().getArray()))
                                                .addComments("from vt3 to vt2 vertices 2")
                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                          .addChild(new HAnimJoint("hanim_vt3").setName("vt2").setDEF("hanim_vt2").setCenter(new double[] {0.0063,1.4761,-0.0484})
                                            .addChild(new HAnimSegment("hanim_vt2").setName("t2").setDEF("hanim_t2")
                                              .addChild(new Transform().setTranslation(new double[] {0.0063,1.4761,-0.0484})
                                                .addChild(new Transform()
                                                  .addComments("Empty Transform")
                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                              .addChild(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32157().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f158().getArray()))
                                                  .addComments("from vt2 to vt1 vertices 2")
                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                              .addChild(new HAnimSite("hanim_t2").setName("cervicale_pt").setDEF("hanim_cervicale_pt").setTranslation(new double[] {0.0064,1.52,-0.0815})
                                                .addChild(new TouchSensor().setDescription("HAnimSite cervicale_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                              .addChild(new HAnimSite("hanim_t2").setName("suprasternale_pt").setDEF("hanim_suprasternale_pt").setTranslation(new double[] {0.0084,1.4714,0.0551})
                                                .addChild(new TouchSensor().setDescription("HAnimSite suprasternale_pt"))
                                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                            .addChild(new HAnimJoint("hanim_vt2").setName("vt1").setDEF("hanim_vt1").setCenter(new double[] {0.0065,1.4951,-0.0387})
                                              .addChild(new HAnimSegment("hanim_vt1").setName("t1").setDEF("hanim_t1")
                                                .addChild(new Transform().setTranslation(new double[] {0.0065,1.4951,-0.0387})
                                                  .addChild(new Transform()
                                                    .addComments("Empty Transform")
                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32159().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f160().getArray()))
                                                    .addComments("from vt1 to vc7 vertices 2")
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addChild(new HAnimSite("hanim_t1").setName("l_neck_base_pt").setDEF("hanim_l_neck_base_pt").setTranslation(new double[] {0.0646,1.5141,-0.038})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_neck_base_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setName("r_neck_base_pt").setDEF("hanim_r_neck_base_pt").setTranslation(new double[] {-0.0419,1.5149,-0.022})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_neck_base_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32161().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f162().getArray()))
                                                    .addComments("from vt1 to l_sternoclavicular vertices 2")
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addChild(new HAnimSite("hanim_t1").setName("l_acromion_pt").setDEF("hanim_l_acromion_pt").setTranslation(new double[] {0.2032,1.476,-0.049})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_acromion_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setName("l_axilla_distal_pt").setDEF("hanim_l_axilla_distal_pt").setTranslation(new double[] {0.1706,1.4072,-0.0875})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_distal_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setName("l_axilla_posterior_folds_pt").setDEF("hanim_l_axilla_posterior_folds_pt")
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_posterior_folds_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setName("l_axilla_proximal_pt").setDEF("hanim_l_axilla_proximal_pt").setTranslation(new double[] {0.1777,1.4065,-0.0075})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_proximal_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setName("l_clavicale_pt").setDEF("hanim_l_clavicale_pt").setTranslation(new double[] {0.0271,1.4943,0.0394})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_clavicale_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32163().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f164().getArray()))
                                                    .addComments("from vt1 to r_sternoclavicular vertices 2")
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addChild(new HAnimSite("hanim_t1").setName("r_acromion_pt").setDEF("hanim_r_acromion_pt").setTranslation(new double[] {-0.1905,1.4791,-0.0431})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_acromion_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setName("r_axilla_distal_pt").setDEF("hanim_r_axilla_distal_pt").setTranslation(new double[] {-0.1603,1.4098,-0.0826})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_distal_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setName("r_axilla_posterior_folds_pt").setDEF("hanim_r_axilla_posterior_folds_pt")
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_posterior_folds_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setName("r_axilla_proximal_pt").setDEF("hanim_r_axilla_proximal_pt").setTranslation(new double[] {-0.1626,1.4072,-0.0031})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_proximal_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setName("r_clavicale_pt").setDEF("hanim_r_clavicale_pt").setTranslation(new double[] {-0.0115,1.4943,0.04})
                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_clavicale_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName("vc7").setDEF("hanim_vc7").setCenter(new double[] {0.0066,1.5132,-0.0301})
                                                .addChild(new HAnimSegment("hanim_vc7").setName("c7").setDEF("hanim_c7")
                                                  .addChild(new Transform().setTranslation(new double[] {0.0066,1.5132,-0.0301})
                                                    .addChild(new Transform()
                                                      .addComments("Empty Transform")
                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32165().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f166().getArray()))
                                                      .addComments("from vc7 to vc6 vertices 2")
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                .addChild(new HAnimJoint("hanim_vc7").setName("vc6").setDEF("hanim_vc6").setCenter(new double[] {0.0066,1.5357,-0.0143})
                                                  .addChild(new HAnimSegment("hanim_vc6").setName("c6").setDEF("hanim_c6")
                                                    .addChild(new Transform().setTranslation(new double[] {0.0066,1.5357,-0.0143})
                                                      .addChild(new Transform()
                                                        .addComments("Empty Transform")
                                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32167().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f168().getArray()))
                                                        .addComments("from vc6 to vc5 vertices 2")
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimJoint("hanim_vc6").setName("vc5").setDEF("hanim_vc5").setCenter(new double[] {0.0066,1.552,-0.0082})
                                                    .addChild(new HAnimSegment("hanim_vc5").setName("c5").setDEF("hanim_c5")
                                                      .addChild(new Transform().setTranslation(new double[] {0.0066,1.552,-0.0082})
                                                        .addChild(new Transform()
                                                          .addComments("Empty Transform")
                                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32169().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f170().getArray()))
                                                          .addComments("from vc5 to vc4 vertices 2")
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                    .addChild(new HAnimJoint("hanim_vc5").setName("vc4").setDEF("hanim_vc4").setCenter(new double[] {0.0066,1.5662,-0.0084})
                                                      .addChild(new HAnimSegment("hanim_vc4").setName("c4").setDEF("hanim_c4")
                                                        .addChild(new Transform().setTranslation(new double[] {0.0066,1.5662,-0.0084})
                                                          .addChild(new Transform()
                                                            .addComments("Empty Transform")
                                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32171().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f172().getArray()))
                                                            .addComments("from vc4 to vc3 vertices 2")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                      .addChild(new HAnimJoint("hanim_vc4").setName("vc3").setDEF("hanim_vc3").setCenter(new double[] {0.0066,1.58,-0.0103})
                                                        .addChild(new HAnimSegment("hanim_vc3").setName("c3").setDEF("hanim_c3")
                                                          .addChild(new Transform().setTranslation(new double[] {0.0066,1.58,-0.0103})
                                                            .addChild(new Transform()
                                                              .addComments("Empty Transform")
                                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32173().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f174().getArray()))
                                                              .addComments("from vc3 to vc2 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new HAnimSite("hanim_c3").setName("adams_apple_pt").setDEF("hanim_adams_apple_pt")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite adams_apple_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                        .addChild(new HAnimJoint("hanim_vc3").setName("vc2").setDEF("hanim_vc2").setCenter(new double[] {0.0066,1.5928,-0.0103})
                                                          .addChild(new HAnimSegment("hanim_vc2").setName("c2").setDEF("hanim_c2")
                                                            .addChild(new Transform().setTranslation(new double[] {0.0066,1.5928,-0.0103})
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32175().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f176().getArray()))
                                                                .addComments("from vc2 to vc1 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint("hanim_vc2").setName("vc1").setDEF("hanim_vc1").setCenter(new double[] {0.0066,1.6144,-0.0034})
                                                            .addChild(new HAnimSegment("hanim_vc1").setName("c1").setDEF("hanim_c1")
                                                              .addChild(new Transform().setTranslation(new double[] {0.0066,1.6144,-0.0034})
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32177().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f178().getArray()))
                                                                  .addComments("from vc1 to skullbase vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                              .addChild(new HAnimSite("hanim_c1").setName("glabella_pt").setDEF("hanim_glabella_pt")
                                                                .addChild(new TouchSensor().setDescription("HAnimSite glabella_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setName("l_ectocanthus_pt").setDEF("hanim_l_ectocanthus_pt")
                                                                .addChild(new TouchSensor().setDescription("HAnimSite l_ectocanthus_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setName("l_infraorbitale_pt").setDEF("hanim_l_infraorbitale_pt").setTranslation(new double[] {0.0341,1.6171,0.0752})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite l_infraorbitale_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setName("l_tragion_pt").setDEF("hanim_l_tragion_pt").setTranslation(new double[] {0.0739,1.6348,0.0282})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite l_tragion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setName("nuchale_pt").setDEF("hanim_nuchale_pt").setTranslation(new double[] {0.0039,1.5972,-0.0796})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite nuchale_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setName("opisthocranion_pt").setDEF("hanim_opisthocranion_pt")
                                                                .addChild(new TouchSensor().setDescription("HAnimSite opisthocranion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setName("r_ectocanthus_pt").setDEF("hanim_r_ectocanthus_pt")
                                                                .addChild(new TouchSensor().setDescription("HAnimSite r_ectocanthus_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setName("r_infraorbitale_pt").setDEF("hanim_r_infraorbitale_pt").setTranslation(new double[] {-0.0237,1.6171,0.0752})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite r_infraorbitale_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setName("r_tragion_pt").setDEF("hanim_r_tragion_pt").setTranslation(new double[] {-0.0646,1.6347,0.0302})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite r_tragion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setName("sellion_pt").setDEF("hanim_sellion_pt").setTranslation(new double[] {0.0058,1.6316,0.0852})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite sellion_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                              .addChild(new HAnimSite("hanim_c1").setName("skull_vertex_pt").setDEF("hanim_skull_vertex_pt").setTranslation(new double[] {0.005,1.7504,0.0055})
                                                                .addChild(new TouchSensor().setDescription("HAnimSite skull_vertex_pt"))
                                                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                            .addChild(new HAnimJoint("hanim_vc1").setName("skullbase").setDEF("hanim_skullbase").setCenter(new double[] {0.0044,1.6209,0.0236})
                                                              .addChild(new HAnimSegment("hanim_skullbase").setName("skull").setDEF("hanim_skull")
                                                                .addChild(new Transform().setTranslation(new double[] {0.0044,1.6209,0.0236})
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32179().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f180().getArray()))
                                                                    .addComments("from skullbase to l_eyelid_joint vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32181().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f182().getArray()))
                                                                    .addComments("from skullbase to r_eyelid_joint vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32183().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f184().getArray()))
                                                                    .addComments("from skullbase to l_eyeball_joint vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32185().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f186().getArray()))
                                                                    .addComments("from skullbase to r_eyeball_joint vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32187().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f188().getArray()))
                                                                    .addComments("from skullbase to l_eyebrow_joint vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32189().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f190().getArray()))
                                                                    .addComments("from skullbase to r_eyebrow_joint vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32191().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f192().getArray()))
                                                                    .addComments("from skullbase to temporomandibular vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new HAnimSite("hanim_skull").setName("l_gonion_pt").setDEF("hanim_l_gonion_pt").setTranslation(new double[] {0.0631,1.553,0.033})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_gonion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setName("menton_pt").setDEF("hanim_menton_pt")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite menton_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setName("r_gonion_pt").setDEF("hanim_r_gonion_pt").setTranslation(new double[] {-0.052,1.5529,0.0347})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_gonion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setName("supramenton_pt").setDEF("hanim_supramenton_pt").setTranslation(new double[] {0.0061,1.541,0.0805})
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite supramenton_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("l_eyelid_joint").setDEF("hanim_l_eyelid_joint").setCenter(new double[] {2.2365,1.87,1.9285}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("r_eyelid_joint").setDEF("hanim_r_eyelid_joint").setCenter(new double[] {-2.2535,1.87,1.9285}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("l_eyeball_joint").setDEF("hanim_l_eyeball_joint").setCenter(new double[] {2.1305,1.8444,4.1555}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("r_eyeball_joint").setDEF("hanim_r_eyeball_joint").setCenter(new double[] {-2.1475,1.8444,4.1555}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("l_eyebrow_joint").setDEF("hanim_l_eyebrow_joint").setCenter(new double[] {0.9581,1.8563,5.2175}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("r_eyebrow_joint").setDEF("hanim_r_eyebrow_joint").setCenter(new double[] {-0.9751,1.8563,5.2175}))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName("temporomandibular").setDEF("hanim_temporomandibular").setCenter(new double[] {-0.0085,1.7229,1.148}))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName("l_sternoclavicular").setDEF("hanim_l_sternoclavicular").setCenter(new double[] {0.082,1.4488,-0.0353})
                                                .addChild(new HAnimSegment("hanim_l_sternoclavicular").setName("l_clavicle").setDEF("hanim_l_clavicle")
                                                  .addChild(new Transform().setTranslation(new double[] {0.082,1.4488,-0.0353})
                                                    .addChild(new Transform()
                                                      .addComments("Empty Transform")
                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32193().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f194().getArray()))
                                                      .addComments("from l_sternoclavicular to l_acromioclavicular vertices 2")
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                .addChild(new HAnimJoint("hanim_l_sternoclavicular").setName("l_acromioclavicular").setDEF("hanim_l_acromioclavicular").setCenter(new double[] {0.0962,1.4269,-0.0424})
                                                  .addChild(new HAnimSegment("hanim_l_acromioclavicular").setName("l_scapula").setDEF("hanim_l_scapula")
                                                    .addChild(new Transform().setTranslation(new double[] {0.0962,1.4269,-0.0424})
                                                      .addChild(new Transform()
                                                        .addComments("Empty Transform")
                                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32195().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f196().getArray()))
                                                        .addComments("from l_acromioclavicular to l_shoulder vertices 2")
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                    .addChild(new HAnimSite("hanim_l_scapula").setName("l_bideltoid_pt").setDEF("hanim_l_bideltoid_pt")
                                                      .addChild(new TouchSensor().setDescription("HAnimSite l_bideltoid_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimSite("hanim_l_scapula").setName("l_humeral_lateral_epicondyles_pt").setDEF("hanim_l_humeral_lateral_epicondyles_pt").setTranslation(new double[] {0.228,1.1482,-0.11})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_lateral_epicondyles_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                  .addChild(new HAnimJoint("hanim_l_acromioclavicular").setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new double[] {0.2029,1.4376,-0.0387})
                                                    .addChild(new HAnimSegment("hanim_l_shoulder").setName("l_upperarm").setDEF("hanim_l_upperarm")
                                                      .addChild(new Transform().setTranslation(new double[] {0.2029,1.4376,-0.0387})
                                                        .addChild(new Transform()
                                                          .addComments("Empty Transform")
                                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32197().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f198().getArray()))
                                                          .addComments("from l_shoulder to l_elbow vertices 2")
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName("l_humeral_medial_epicondyles_pt").setDEF("hanim_l_humeral_medial_epicondyles_pt").setTranslation(new double[] {0.1735,1.1272,-0.1113})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_medial_epicondyles_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName("l_olecranon_pt").setDEF("hanim_l_olecranon_pt").setTranslation(new double[] {-0.1962,1.1375,-0.1123})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_olecranon_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName("l_radial_styloid_pt").setDEF("hanim_l_radial_styloid_pt").setTranslation(new double[] {0.1901,0.8645,-0.0415})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_radial_styloid_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName("l_radiale_pt").setDEF("hanim_l_radiale_pt").setTranslation(new double[] {0.2182,1.1212,-0.1167})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_radiale_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new double[] {0.2014,1.1357,-0.0682})
                                                      .addChild(new HAnimSegment("hanim_l_elbow").setName("l_forearm").setDEF("hanim_l_forearm")
                                                        .addChild(new Transform().setTranslation(new double[] {0.2014,1.1357,-0.0682})
                                                          .addChild(new Transform()
                                                            .addComments("Empty Transform")
                                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32199().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f200().getArray()))
                                                            .addComments("from l_elbow to l_radiocarpal vertices 2")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setName("l_ulnar_styloid_pt").setDEF("hanim_l_ulnar_styloid_pt").setTranslation(new double[] {-0.2142,0.8529,-0.0648})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_ulnar_styloid_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint("hanim_l_elbow").setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setCenter(new double[] {0.1984,0.8663,-0.0583})
                                                        .addChild(new HAnimSegment("hanim_l_radiocarpal").setName("l_carpal").setDEF("hanim_l_carpal")
                                                          .addChild(new Transform().setScale(new double[] {0.2,0.2,0.2}).setTranslation(new double[] {0.2,0.85,-0.05}).setRotation(new double[] {0,0,1,-3.14})
                                                            .addComments("Transform left hand")
                                                            .addChild(new Transform().setRotation(new double[] {0,1,0,-1.57})
                                                              .addComments("Transform left hand")
                                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32201().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f202().getArray()))
                                                              .addComments("from l_radiocarpal to l_midcarpal_1 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32203().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f204().getArray()))
                                                              .addComments("from l_radiocarpal to l_midcarpal_2 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32205().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f206().getArray()))
                                                              .addComments("from l_radiocarpal to l_midcarpal_3 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32207().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f208().getArray()))
                                                              .addComments("from l_radiocarpal to l_midcarpal_4_5 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_1").setDEF("hanim_l_midcarpal_1").setCenter(new double[] {8.0485,0.9213,1.3235})
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_1").setName("l_trapezium").setDEF("hanim_l_trapezium")
                                                            .addChild(new Transform().setTranslation(new double[] {8.0485,0.9213,1.3235})
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32209().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f210().getArray()))
                                                                .addComments("from l_midcarpal_1 to l_carpometacarpal_1 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_1").setName("l_carpometacarpal_1").setDEF("hanim_l_carpometacarpal_1").setCenter(new double[] {0.1924,0.8472,-0.0534})
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_1").setName("l_metacarpal_1").setDEF("hanim_l_metacarpal_1")
                                                              .addChild(new Transform().setTranslation(new double[] {0.1924,0.8472,-0.0534})
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32211().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f212().getArray()))
                                                                  .addComments("from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setName("l_metacarpophalangeal_1").setDEF("hanim_l_metacarpophalangeal_1").setCenter(new double[] {0.1951,0.8226,0.0246})
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_1").setName("l_carpal_proximal_phalanx_1").setDEF("hanim_l_carpal_proximal_phalanx_1")
                                                                .addChild(new Transform().setTranslation(new double[] {0.1951,0.8226,0.0246})
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32213().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f214().getArray()))
                                                                    .addComments("from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new HAnimSite("hanim_l_carpal_proximal_phalanx_1").setName("l_carpal_distal_phalanx_1_tip").setDEF("hanim_l_carpal_distal_phalanx_1_tip")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_1_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setName("l_carpal_interphalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setCenter(new double[] {0.1955,0.8159,0.0464})))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_2").setDEF("hanim_l_midcarpal_2").setCenter(new double[] {8.0485,0.9225,0.8386})
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_2").setName("l_trapezoid").setDEF("hanim_l_trapezoid")
                                                            .addChild(new Transform().setTranslation(new double[] {8.0485,0.9225,0.8386})
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32215().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f216().getArray()))
                                                                .addComments("from l_midcarpal_2 to l_carpometacarpal_2 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimSite("hanim_l_trapezoid").setName("l_metacarpal_phalanx_2_pt").setDEF("hanim_l_metacarpal_phalanx_2_pt").setTranslation(new double[] {0.2009,0.8139,-0.0237})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_phalanx_2_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_2").setName("l_carpometacarpal_2").setDEF("hanim_l_carpometacarpal_2").setCenter(new double[] {0.1983,0.8024,-0.028})
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_2").setName("l_metacarpal_2").setDEF("hanim_l_metacarpal_2")
                                                              .addChild(new Transform().setTranslation(new double[] {0.1983,0.8024,-0.028})
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32217().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f218().getArray()))
                                                                  .addComments("from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setName("l_metacarpophalangeal_2").setDEF("hanim_l_metacarpophalangeal_2").setCenter(new double[] {0.1983,0.7815,-0.028})
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_2").setName("l_carpal_proximal_phalanx_2").setDEF("hanim_l_carpal_proximal_phalanx_2")
                                                                .addChild(new Transform().setTranslation(new double[] {0.1983,0.7815,-0.028})
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32219().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f220().getArray()))
                                                                    .addComments("from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setCenter(new double[] {0.2017,0.7363,-0.0248})
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_middle_phalanx_2").setDEF("hanim_l_carpal_middle_phalanx_2")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.2017,0.7363,-0.0248})
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32221().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f222().getArray()))
                                                                      .addComments("from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_middle_phalanx_2").setName("l_carpal_distal_phalanx_2_tip").setDEF("hanim_l_carpal_distal_phalanx_2_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_2_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_middle_phalanx_2").setName("l_dactylion_pt").setDEF("hanim_l_dactylion_pt").setTranslation(new double[] {0.2056,0.6743,-0.0482})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_dactylion_pt"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setCenter(new double[] {0.2028,0.7139,-0.0236}))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_3").setDEF("hanim_l_midcarpal_3").setCenter(new double[] {8.0395,0.9246,0.2513})
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_3").setName("l_capitate").setDEF("hanim_l_capitate")
                                                            .addChild(new Transform().setTranslation(new double[] {8.0395,0.9246,0.2513})
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32223().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f224().getArray()))
                                                                .addComments("from l_midcarpal_3 to l_carpometacarpal_3 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimSite("hanim_l_capitate").setName("l_metacarpal_phalanx_3_pt").setDEF("hanim_l_metacarpal_phalanx_3_pt")
                                                              .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_phalanx_3_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_3").setName("l_carpometacarpal_3").setDEF("hanim_l_carpometacarpal_3").setCenter(new double[] {0.1987,0.8029,-0.053})
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_3").setName("l_metacarpal_3").setDEF("hanim_l_metacarpal_3")
                                                              .addChild(new Transform().setTranslation(new double[] {0.1987,0.8029,-0.053})
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32225().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f226().getArray()))
                                                                  .addComments("from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setName("l_metacarpophalangeal_3").setDEF("hanim_l_metacarpophalangeal_3").setCenter(new double[] {0.1987,0.7818,-0.053})
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_3").setName("l_carpal_proximal_phalanx_3").setDEF("hanim_l_carpal_proximal_phalanx_3")
                                                                .addChild(new Transform().setTranslation(new double[] {0.1987,0.7818,-0.053})
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32227().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f228().getArray()))
                                                                    .addComments("from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setCenter(new double[] {0.2013,0.7273,-0.0503})
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_middle_phalanx_3").setDEF("hanim_l_carpal_middle_phalanx_3")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.2013,0.7273,-0.0503})
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32229().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f230().getArray()))
                                                                      .addComments("from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_middle_phalanx_3").setName("l_carpal_distal_phalanx_3_tip").setDEF("hanim_l_carpal_distal_phalanx_3_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_3_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setCenter(new double[] {0.2026,0.7011,-0.0494}))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_4_5").setDEF("hanim_l_midcarpal_4_5").setCenter(new double[] {8.0395,0.921,-0.6795})
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_4_5").setName("l_hamate").setDEF("hanim_l_hamate")
                                                            .addChild(new Transform().setTranslation(new double[] {8.0395,0.921,-0.6795})
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32231().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f232().getArray()))
                                                                .addComments("from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32233().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f234().getArray()))
                                                                .addComments("from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimSite("hanim_l_hamate").setName("l_metacarpal_phalanx_5_pt").setDEF("hanim_l_metacarpal_phalanx_5_pt").setTranslation(new double[] {0.1929,0.786,-0.1122})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_phalanx_5_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName("l_carpometacarpal_4").setDEF("hanim_l_carpometacarpal_4").setCenter(new double[] {0.1956,0.8019,-0.0794})
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_4").setName("l_metacarpal_4").setDEF("hanim_l_metacarpal_4")
                                                              .addChild(new Transform().setTranslation(new double[] {0.1956,0.8019,-0.0794})
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32235().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f236().getArray()))
                                                                  .addComments("from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setName("l_metacarpophalangeal_4").setDEF("hanim_l_metacarpophalangeal_4").setCenter(new double[] {0.1956,0.7815,-0.0794})
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_4").setName("l_carpal_proximal_phalanx_4").setDEF("hanim_l_carpal_proximal_phalanx_4")
                                                                .addChild(new Transform().setTranslation(new double[] {0.1956,0.7815,-0.0794})
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32237().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f238().getArray()))
                                                                    .addComments("from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setCenter(new double[] {0.1973,0.7287,-0.0777})
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_middle_phalanx_4").setDEF("hanim_l_carpal_middle_phalanx_4")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1973,0.7287,-0.0777})
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32239().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f240().getArray()))
                                                                      .addComments("from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_middle_phalanx_4").setName("l_carpal_distal_phalanx_4_tip").setDEF("hanim_l_carpal_distal_phalanx_4_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_4_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setCenter(new double[] {0.1983,0.7045,-0.0767})))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName("l_carpometacarpal_5").setDEF("hanim_l_carpometacarpal_5").setCenter(new double[] {0.1925,0.8066,-0.1036})
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_5").setName("l_metacarpal_5").setDEF("hanim_l_metacarpal_5")
                                                              .addChild(new Transform().setTranslation(new double[] {0.1925,0.8066,-0.1036})
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32241().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f242().getArray()))
                                                                  .addComments("from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setName("l_metacarpophalangeal_5").setDEF("hanim_l_metacarpophalangeal_5").setCenter(new double[] {0.1925,0.7866,-0.1036})
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_5").setName("l_carpal_proximal_phalanx_5").setDEF("hanim_l_carpal_proximal_phalanx_5")
                                                                .addChild(new Transform().setTranslation(new double[] {0.1925,0.7866,-0.1036})
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32243().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f244().getArray()))
                                                                    .addComments("from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_5").setCenter(new double[] {0.1938,0.7452,-0.1024})
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_middle_phalanx_5").setDEF("hanim_l_carpal_middle_phalanx_5")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1938,0.7452,-0.1024})
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32245().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f246().getArray()))
                                                                      .addComments("from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_middle_phalanx_5").setName("l_carpal_distal_phalanx_5_tip").setDEF("hanim_l_carpal_distal_phalanx_5_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_carpal_distal_phalanx_5_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setDEF("hanim_l_carpal_distal_interphalangeal_5").setCenter(new double[] {0.1948,0.7277,-0.1017})))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName("r_sternoclavicular").setDEF("hanim_r_sternoclavicular").setCenter(new double[] {-0.0694,1.46,-0.033})
                                                .addChild(new HAnimSegment("hanim_r_sternoclavicular").setName("r_clavicle").setDEF("hanim_r_clavicle")
                                                  .addChild(new Transform().setTranslation(new double[] {-0.0694,1.46,-0.033})
                                                    .addChild(new Transform()
                                                      .addComments("Empty Transform")
                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32247().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f248().getArray()))
                                                      .addComments("from r_sternoclavicular to r_acromioclavicular vertices 2")
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                .addChild(new HAnimJoint("hanim_r_sternoclavicular").setName("r_acromioclavicular").setDEF("hanim_r_acromioclavicular").setCenter(new double[] {-0.0836,1.4281,-0.0401})
                                                  .addChild(new HAnimSegment("hanim_r_acromioclavicular").setName("r_scapula").setDEF("hanim_r_scapula")
                                                    .addChild(new Transform().setTranslation(new double[] {-0.0836,1.4281,-0.0401})
                                                      .addChild(new Transform()
                                                        .addComments("Empty Transform")
                                                        .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32249().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f250().getArray()))
                                                        .addComments("from r_acromioclavicular to r_shoulder vertices 2")
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                    .addChild(new HAnimSite("hanim_r_scapula").setName("r_bideltoid_pt").setDEF("hanim_r_bideltoid_pt")
                                                      .addChild(new TouchSensor().setDescription("HAnimSite r_bideltoid_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                    .addChild(new HAnimSite("hanim_r_scapula").setName("r_humeral_lateral_epicondyles_pt").setDEF("hanim_r_humeral_lateral_epicondyles_pt").setTranslation(new double[] {-0.2224,1.1517,-0.1033})
                                                      .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_lateral_epicondyles_pt"))
                                                      .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                  .addChild(new HAnimJoint("hanim_r_acromioclavicular").setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new double[] {-0.1907,1.4407,-0.0325})
                                                    .addChild(new HAnimSegment("hanim_r_shoulder").setName("r_upperarm").setDEF("hanim_r_upperarm")
                                                      .addChild(new Transform().setTranslation(new double[] {-0.1907,1.4407,-0.0325})
                                                        .addChild(new Transform()
                                                          .addComments("Empty Transform")
                                                          .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32251().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f252().getArray()))
                                                          .addComments("from r_shoulder to r_elbow vertices 2")
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName("r_humeral_medial_epicondyles_pt").setDEF("hanim_r_humeral_medial_epicondyles_pt").setTranslation(new double[] {-0.168,1.1298,-0.1062})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_medial_epicondyles_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName("r_olecranon_pt").setDEF("hanim_r_olecranon_pt").setTranslation(new double[] {-0.1907,1.1405,-0.1065})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_olecranon_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName("r_radial_styloid_pt").setDEF("hanim_r_radial_styloid_pt").setTranslation(new double[] {-0.1884,0.8676,-0.036})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_radial_styloid_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName("r_radiale_pt").setDEF("hanim_r_radiale_pt").setTranslation(new double[] {-0.213,1.1305,-0.1091})
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_radiale_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new double[] {-0.1949,1.1388,-0.062})
                                                      .addChild(new HAnimSegment("hanim_r_elbow").setName("r_forearm").setDEF("hanim_r_forearm")
                                                        .addChild(new Transform().setTranslation(new double[] {-0.1949,1.1388,-0.062})
                                                          .addChild(new Transform()
                                                            .addComments("Empty Transform")
                                                            .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32253().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f254().getArray()))
                                                            .addComments("from r_elbow to r_radiocarpal vertices 2")
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setName("r_ulnar_styloid_pt").setDEF("hanim_r_ulnar_styloid_pt").setTranslation(new double[] {-0.2117,0.8562,-0.0584})
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_ulnar_styloid_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint("hanim_r_elbow").setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setCenter(new double[] {-0.1959,0.8694,-0.0521})
                                                        .addChild(new HAnimSegment("hanim_r_radiocarpal").setName("r_carpal").setDEF("hanim_r_carpal")
                                                          .addChild(new Transform().setScale(new double[] {0.2,0.2,0.2}).setTranslation(new double[] {-0.2,0.85,-0.05}).setRotation(new double[] {0,0,1,-3.14})
                                                            .addComments("Transform right hand")
                                                            .addChild(new Transform().setRotation(new double[] {0,1,0,1.57})
                                                              .addComments("Transform right hand")
                                                              .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32255().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f256().getArray()))
                                                              .addComments("from r_radiocarpal to r_midcarpal_1 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32257().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f258().getArray()))
                                                              .addComments("from r_radiocarpal to r_midcarpal_2 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32259().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f260().getArray()))
                                                              .addComments("from r_radiocarpal to r_midcarpal_3 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32261().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f262().getArray()))
                                                              .addComments("from r_radiocarpal to r_midcarpal_4_5 vertices 2")
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_1").setDEF("hanim_r_midcarpal_1").setCenter(new double[] {-8.0515,0.9213,1.3235})
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_1").setName("r_trapezium").setDEF("hanim_r_trapezium")
                                                            .addChild(new Transform().setTranslation(new double[] {-8.0515,0.9213,1.3235})
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32263().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f264().getArray()))
                                                                .addComments("from r_midcarpal_1 to r_carpometacarpal_1 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_1").setName("r_carpometacarpal_1").setDEF("hanim_r_carpometacarpal_1").setCenter(new double[] {-0.1899,0.8502,-0.0473})
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_1").setName("r_metacarpal_1").setDEF("hanim_r_metacarpal_1")
                                                              .addChild(new Transform().setTranslation(new double[] {-0.1899,0.8502,-0.0473})
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32265().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f266().getArray()))
                                                                  .addComments("from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setName("r_metacarpophalangeal_1").setDEF("hanim_r_metacarpophalangeal_1").setCenter(new double[] {-0.1874,0.8256,0.0306})
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_1").setName("r_carpal_proximal_phalanx_1").setDEF("hanim_r_carpal_proximal_phalanx_1")
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1874,0.8256,0.0306})
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32267().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f268().getArray()))
                                                                    .addComments("from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addChild(new HAnimSite("hanim_r_carpal_proximal_phalanx_1").setName("r_carpal_distal_phalanx_1_tip").setDEF("hanim_r_carpal_distal_phalanx_1_tip")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_1_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setName("r_carpal_interphalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setCenter(new double[] {-0.1864,0.819,0.0506})))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_2").setDEF("hanim_r_midcarpal_2").setCenter(new double[] {-8.0515,0.9225,0.8386})
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_2").setName("r_trapezoid").setDEF("hanim_r_trapezoid")
                                                            .addChild(new Transform().setTranslation(new double[] {-8.0515,0.9225,0.8386})
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32269().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f270().getArray()))
                                                                .addComments("from r_midcarpal_2 to r_carpometacarpal_2 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimSite("hanim_r_trapezoid").setName("r_metacarpal_phalanx_2_pt").setDEF("hanim_r_metacarpal_phalanx_2_pt").setTranslation(new double[] {-0.1977,0.8169,-0.0177})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_phalanx_2_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_2").setName("r_carpometacarpal_2").setDEF("hanim_r_carpometacarpal_2").setCenter(new double[] {-0.1961,0.8055,-0.0218})
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_2").setName("r_metacarpal_2").setDEF("hanim_r_metacarpal_2")
                                                              .addChild(new Transform().setTranslation(new double[] {-0.1961,0.8055,-0.0218})
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32271().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f272().getArray()))
                                                                  .addComments("from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setName("r_metacarpophalangeal_2").setDEF("hanim_r_metacarpophalangeal_2").setCenter(new double[] {-0.1961,0.7846,-0.0218})
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_2").setName("r_carpal_proximal_phalanx_2").setDEF("hanim_r_carpal_proximal_phalanx_2")
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1961,0.7846,-0.0218})
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32273().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f274().getArray()))
                                                                    .addComments("from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setName("r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setCenter(new double[] {-0.1954,0.7393,-0.0185})
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_middle_phalanx_2").setDEF("hanim_r_carpal_middle_phalanx_2")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1954,0.7393,-0.0185})
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32275().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f276().getArray()))
                                                                      .addComments("from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_middle_phalanx_2").setName("r_carpal_distal_phalanx_2_tip").setDEF("hanim_r_carpal_distal_phalanx_2_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_2_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_middle_phalanx_2").setName("r_dactylion_pt").setDEF("hanim_r_dactylion_pt").setTranslation(new double[] {-0.1941,0.6772,-0.0423})
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_dactylion_pt"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setCenter(new double[] {-0.1945,0.7169,-0.0173}))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_3").setDEF("hanim_r_midcarpal_3").setCenter(new double[] {-8.0405,0.9246,0.2513})
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_3").setName("r_capitate").setDEF("hanim_r_capitate")
                                                            .addChild(new Transform().setTranslation(new double[] {-8.0405,0.9246,0.2513})
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32277().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f278().getArray()))
                                                                .addComments("from r_midcarpal_3 to r_carpometacarpal_3 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimSite("hanim_r_capitate").setName("r_metacarpal_phalanx_3_pt").setDEF("hanim_r_metacarpal_phalanx_3_pt")
                                                              .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_phalanx_3_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_3").setName("r_carpometacarpal_3").setDEF("hanim_r_carpometacarpal_3").setCenter(new double[] {-0.1972,0.806,-0.0468})
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_3").setName("r_metacarpal_3").setDEF("hanim_r_metacarpal_3")
                                                              .addChild(new Transform().setTranslation(new double[] {-0.1972,0.806,-0.0468})
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32279().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f280().getArray()))
                                                                  .addComments("from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setName("r_metacarpophalangeal_3").setDEF("hanim_r_metacarpophalangeal_3").setCenter(new double[] {-0.1972,0.7849,-0.0468})
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_3").setName("r_carpal_proximal_phalanx_3").setDEF("hanim_r_carpal_proximal_phalanx_3")
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1972,0.7849,-0.0468})
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32281().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f282().getArray()))
                                                                    .addComments("from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setName("r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setCenter(new double[] {-0.195,0.7304,-0.0441})
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_middle_phalanx_3").setDEF("hanim_r_carpal_middle_phalanx_3")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.195,0.7304,-0.0441})
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32283().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f284().getArray()))
                                                                      .addComments("from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_middle_phalanx_3").setName("r_carpal_distal_phalanx_3_tip").setDEF("hanim_r_carpal_distal_phalanx_3_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_3_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setCenter(new double[] {-0.1939,0.7042,-0.0432}))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_midcarpal_4_5").setDEF("hanim_r_midcarpal_4_5").setCenter(new double[] {-8.0405,0.921,-0.6795})
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_4_5").setName("r_hamate").setDEF("hanim_r_hamate")
                                                            .addChild(new Transform().setTranslation(new double[] {-8.0405,0.921,-0.6795})
                                                              .addChild(new Transform()
                                                                .addComments("Empty Transform")
                                                                .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32285().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f286().getArray()))
                                                                .addComments("from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32287().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f288().getArray()))
                                                                .addComments("from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2")
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                            .addChild(new HAnimSite("hanim_r_hamate").setName("r_metacarpal_phalanx_5_pt").setDEF("hanim_r_metacarpal_phalanx_5_pt").setTranslation(new double[] {-0.1929,0.789,-0.1064})
                                                              .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_phalanx_5_pt"))
                                                              .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName("r_carpometacarpal_4").setDEF("hanim_r_carpometacarpal_4").setCenter(new double[] {-0.1951,0.8049,-0.0732})
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_4").setName("r_metacarpal_4").setDEF("hanim_r_metacarpal_4")
                                                              .addChild(new Transform().setTranslation(new double[] {-0.1951,0.8049,-0.0732})
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32289().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f290().getArray()))
                                                                  .addComments("from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setName("r_metacarpophalangeal_4").setDEF("hanim_r_metacarpophalangeal_4").setCenter(new double[] {-0.1951,0.7845,-0.0732})
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_4").setName("r_carpal_proximal_phalanx_4").setDEF("hanim_r_carpal_proximal_phalanx_4")
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1951,0.7845,-0.0732})
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32291().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f292().getArray()))
                                                                    .addComments("from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setName("r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setCenter(new double[] {-0.192,0.7318,-0.0716})
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_middle_phalanx_4").setDEF("hanim_r_carpal_middle_phalanx_4")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.192,0.7318,-0.0716})
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32293().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f294().getArray()))
                                                                      .addComments("from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_middle_phalanx_4").setName("r_carpal_distal_phalanx_4_tip").setDEF("hanim_r_carpal_distal_phalanx_4_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_4_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setCenter(new double[] {-0.1908,0.7077,-0.0706})))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName("r_carpometacarpal_5").setDEF("hanim_r_carpometacarpal_5").setCenter(new double[] {-0.1926,0.8096,-0.0975})
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_5").setName("r_metacarpal_5").setDEF("hanim_r_metacarpal_5")
                                                              .addChild(new Transform().setTranslation(new double[] {-0.1926,0.8096,-0.0975})
                                                                .addChild(new Transform()
                                                                  .addComments("Empty Transform")
                                                                  .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32295().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f296().getArray()))
                                                                  .addComments("from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2")
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setName("r_metacarpophalangeal_5").setDEF("hanim_r_metacarpophalangeal_5").setCenter(new double[] {-0.1926,0.7896,-0.0975})
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_5").setName("r_carpal_proximal_phalanx_5").setDEF("hanim_r_carpal_proximal_phalanx_5")
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1926,0.7896,-0.0975})
                                                                  .addChild(new Transform()
                                                                    .addComments("Empty Transform")
                                                                    .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32297().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f298().getArray()))
                                                                    .addComments("from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2")
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setName("r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_5").setCenter(new double[] {-0.1902,0.7483,-0.0963})
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_middle_phalanx_5").setDEF("hanim_r_carpal_middle_phalanx_5")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1902,0.7483,-0.0963})
                                                                    .addChild(new Transform()
                                                                      .addComments("Empty Transform")
                                                                      .addChild(new Shape().setUSE("HAnimJointShape"))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32299().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f300().getArray()))
                                                                      .addComments("from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2")
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_middle_phalanx_5").setName("r_carpal_distal_phalanx_5_tip").setDEF("hanim_r_carpal_distal_phalanx_5_tip")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_carpal_distal_phalanx_5_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5").setDEF("hanim_r_carpal_distal_interphalangeal_5").setCenter(new double[] {-0.1908,0.754,-0.096})))))))))))))))))))))))))))))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_humanoid_root"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_sacroiliac"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_hip"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_knee"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_talocrural"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_talocalcaneonavicular"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_cuneonavicular_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsometatarsal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsophalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_interphalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_cuneonavicular_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsometatarsal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_proximal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_cuneonavicular_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsometatarsal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsophalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_proximal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_distal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_calcaneocuboid"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_transversetarsal"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsometatarsal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsophalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_proximal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_distal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsometatarsal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsophalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_proximal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_distal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_hip"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_knee"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_talocrural"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_talocalcaneonavicular"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_cuneonavicular_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsometatarsal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_interphalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_cuneonavicular_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsometatarsal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_cuneonavicular_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsometatarsal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_calcaneocuboid"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_transversetarsal"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsometatarsal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsometatarsal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vl5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vl4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vl3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vl2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vl1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt12"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt11"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt10"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt9"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt8"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt7"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt6"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vt1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vc7"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vc6"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vc5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vc4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vc3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vc2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_vc1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_skullbase"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_eyelid_joint"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_eyelid_joint"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_eyeball_joint"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_eyeball_joint"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_eyebrow_joint"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_eyebrow_joint"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_temporomandibular"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_sternoclavicular"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_acromioclavicular"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_shoulder"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_elbow"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_radiocarpal"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_midcarpal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpometacarpal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpophalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_interphalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_midcarpal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpometacarpal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpophalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_midcarpal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpometacarpal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpophalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_midcarpal_4_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpometacarpal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpophalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpometacarpal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpophalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_sternoclavicular"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_acromioclavicular"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_shoulder"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_elbow"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_radiocarpal"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_midcarpal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpometacarpal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metacarpophalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_interphalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_midcarpal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpometacarpal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metacarpophalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_distal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_midcarpal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpometacarpal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metacarpophalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_distal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_midcarpal_4_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpometacarpal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metacarpophalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_distal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpometacarpal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_metacarpophalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_proximal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_HAnim").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_distal_interphalangeal_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_sacrum"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_pelvis"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_thigh"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_calf"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_talus"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_navicular"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_cuneiform_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metatarsal_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_proximal_phalanx_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_cuneiform_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metatarsal_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_middle_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_cuneiform_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metatarsal_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_proximal_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_middle_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_calcaneus"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_cuboid"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metatarsal_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_proximal_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_middle_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metatarsal_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_proximal_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_middle_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_thigh"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_calf"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_talus"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_navicular"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_cuneiform_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metatarsal_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_cuneiform_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metatarsal_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_middle_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_cuneiform_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metatarsal_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_middle_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_calcaneus"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_cuboid"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metatarsal_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_middle_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metatarsal_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_middle_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t12"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t11"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t10"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t9"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t8"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t7"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t6"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_t1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_c7"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_c6"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_c5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_c4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_c3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_c2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_c1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_skull"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_clavicle"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_scapula"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_upperarm"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_forearm"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_trapezium"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metacarpal_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_proximal_phalanx_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_trapezoid"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metacarpal_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_proximal_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_middle_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_capitate"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metacarpal_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_proximal_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_middle_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_hamate"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metacarpal_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_proximal_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_middle_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_metacarpal_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_proximal_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_middle_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_clavicle"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_scapula"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_upperarm"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_forearm"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_trapezium"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metacarpal_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_proximal_phalanx_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_trapezoid"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metacarpal_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_proximal_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_middle_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_capitate"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metacarpal_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_proximal_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_middle_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_hamate"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metacarpal_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_proximal_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_middle_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_metacarpal_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_proximal_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_HAnim").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal_middle_phalanx_5"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_buttocks_standing_wall_contact_point_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_crotch_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_asis_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_iliocristale_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_psis_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_trochanterion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_asis_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_iliocristale_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_psis_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_trochanterion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_navel_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_waist_preferred_anterior_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_waist_preferred_posterior_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_femoral_lateral_epicondyles_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_femoral_medial_epicondyles_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_knee_crease_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_suprapatella_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_femoral_lateral_epicondyles_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_femoral_medial_epicondyles_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_knee_crease_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_suprapatella_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_lateral_malleolus_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_medial_malleolus_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_tibiale_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_calcaneus_posterior_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_sphyrion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_metatarsal_phalanx_1_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_tarsal_distal_phalanx_1_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_tarsal_distal_phalanx_2_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_tarsal_distal_phalanx_3_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_tarsal_distal_phalanx_4_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_metatarsal_phalanx_5_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_tarsal_distal_phalanx_5_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_lateral_malleolus_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_medial_malleolus_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_tibiale_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_calcaneus_posterior_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_sphyrion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_metatarsal_phalanx_1_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_tarsal_distal_phalanx_1_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_tarsal_distal_phalanx_2_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_tarsal_distal_phalanx_3_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_tarsal_distal_phalanx_4_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_metatarsal_phalanx_5_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_tarsal_distal_phalanx_5_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_rib10_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_rib10_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_spine_2_middle_back_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_substernale_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_thelion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_thelion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_chest_midsagittal_plane_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_mesosternale_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_chest_midsagittal_plane_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_rear_center_midsagittal_plane_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_spine_1_middle_back_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_cervicale_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_suprasternale_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_neck_base_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_neck_base_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_acromion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_axilla_distal_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_axilla_posterior_folds_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_axilla_proximal_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_clavicale_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_acromion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_axilla_distal_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_axilla_posterior_folds_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_axilla_proximal_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_clavicale_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_adams_apple_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_glabella_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_ectocanthus_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_infraorbitale_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_tragion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_nuchale_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_opisthocranion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_ectocanthus_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_infraorbitale_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_tragion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_sellion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_skull_vertex_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_gonion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_menton_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_gonion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_supramenton_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_bideltoid_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_humeral_lateral_epicondyles_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_humeral_medial_epicondyles_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_olecranon_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_radial_styloid_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_radiale_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_ulnar_styloid_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_carpal_distal_phalanx_1_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_metacarpal_phalanx_2_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_carpal_distal_phalanx_2_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_dactylion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_metacarpal_phalanx_3_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_carpal_distal_phalanx_3_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_metacarpal_phalanx_5_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_carpal_distal_phalanx_4_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_l_carpal_distal_phalanx_5_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_bideltoid_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_humeral_lateral_epicondyles_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_humeral_medial_epicondyles_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_olecranon_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_radial_styloid_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_radiale_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_ulnar_styloid_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_carpal_distal_phalanx_1_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_metacarpal_phalanx_2_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_carpal_distal_phalanx_2_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_dactylion_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_metacarpal_phalanx_3_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_carpal_distal_phalanx_3_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_metacarpal_phalanx_5_pt"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_carpal_distal_phalanx_4_tip"))
          .addSites(((HAnimSite)new HAnimSite("hanim_HAnim").setContainerFieldOverride("sites")).setUSE("hanim_r_carpal_distal_phalanx_5_tip"))))      ;
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
private class MFVec3f2 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0,0,0.1,0,0,0,0.1,0,0,0,0.1});
  }
}
private class MFColor3 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {1,0,0,0,0.6,0,0,0,1});
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA5 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f6 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.05,0,0,0.05,0,0});
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA8 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new double[] {1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
  }
}
private class MFVec3f9 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.824,0.0277,0,0.9149,0.0016});
  }
}
private class MFInt3213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.824,0.0277,0.0028,1.0568,-0.0776});
  }
}
private class MFInt3215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f16 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.9149,0.0016,0.0961,0.9124,-0.0001});
  }
}
private class MFInt3217 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f18 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.9149,0.0016,-0.095,0.9171,0.0029});
  }
}
private class MFInt3219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f20 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
  }
}
private class MFInt3221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f22 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
  }
}
private class MFInt3223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f24 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1101,0.0656,-0.0736,3.4715,0.0374,0.6807});
  }
}
private class MFInt3225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1101,0.0656,-0.0736,3.9515,0.0653,-0.6895});
  }
}
private class MFInt3227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f28 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {3.4715,0.0374,0.6807,2.9855,0.0311,1.2819});
  }
}
private class MFInt3229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {3.4715,0.0374,0.6807,3.6105,0.033,1.4168});
  }
}
private class MFInt3231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f32 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {3.4715,0.0374,0.6807,4.1235,0.0328,1.3453});
  }
}
private class MFInt3233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f34 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {2.9855,0.0311,1.2819,2.8635,0.0194,2.4285});
  }
}
private class MFInt3235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f36 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {2.8635,0.0194,2.4285,2.7525,0.0077,4.6255});
  }
}
private class MFInt3237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f38 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {2.7525,0.0077,4.6255,2.7525,0.0077,4.6255});
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f40 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {3.6105,0.033,1.4168,3.5555,0.0232,2.2895});
  }
}
private class MFInt3241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f42 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {3.5555,0.0232,2.2895,3.6595,0.0085,4.8125});
  }
}
private class MFInt3243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f44 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {3.6595,0.0085,4.8125,3.7385,0.0054,5.5315});
  }
}
private class MFInt3245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f46 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {3.7385,0.0054,5.5315,3.7385,0.0017,5.9505});
  }
}
private class MFInt3247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f48 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {4.1235,0.0328,1.3453,3.7385,0.0017,5.9505});
  }
}
private class MFInt3249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f50 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {4.2795,0.0086,4.7055});
  }
}
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f52 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {4.2795,0.0086,4.7055,4.3855,0.0044,5.3745});
  }
}
private class MFInt3253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f54 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {4.3855,0.0044,5.3745,4.4545,0.0017,5.7845});
  }
}
private class MFInt3255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f56 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {3.9515,0.0653,-0.6895,4.9085,0.0353,0.5574});
  }
}
private class MFInt3257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f58 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {4.9085,0.0353,0.5574,4.7245,0.0211,2.1725});
  }
}
private class MFInt3259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f60 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {4.9085,0.0353,0.5574,5.3615,0.0164,2.0085});
  }
}
private class MFInt3261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f62 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {4.7245,0.0211,2.1725,4.8745,0.0076,4.5165});
  }
}
private class MFInt3263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f64 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {4.8745,0.0076,4.5165,5.0655,0.0049,5.1895});
  }
}
private class MFInt3265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f66 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {5.0655,0.0049,5.1895,5.1325,0.0011,5.5175});
  }
}
private class MFInt3267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f68 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {5.3615,0.0164,2.0085,5.5055,0.0067,4.3115});
  }
}
private class MFInt3269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f70 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {5.5055,0.0067,4.3115,5.6085,0.003,4.6485});
  }
}
private class MFInt3271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f72 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {5.6085,0.003,4.6485,5.6485,0,4.9925});
  }
}
private class MFInt3273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f74 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
  }
}
private class MFInt3275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f76 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
  }
}
private class MFInt3277 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f78 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0801,0.0712,-0.0766,-3.4725,0.0374,0.6807});
  }
}
private class MFInt3279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f80 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0801,0.0712,-0.0766,-3.9515,0.0653,-0.6895});
  }
}
private class MFInt3281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f82 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-3.4725,0.0374,0.6807,-2.9855,0.0311,1.2819});
  }
}
private class MFInt3283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f84 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-3.4725,0.0374,0.6807,-3.6105,0.033,1.4168});
  }
}
private class MFInt3285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f86 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-3.4725,0.0374,0.6807,-4.1245,0.0328,1.3453});
  }
}
private class MFInt3287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f88 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-2.9855,0.0311,1.2819,-2.8645,0.0194,2.4285});
  }
}
private class MFInt3289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f90 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-2.8645,0.0194,2.4285,-2.7535,0.0077,4.6255});
  }
}
private class MFInt3291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f92 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-2.7535,0.0077,4.6255,-2.7535,0.0077,4.6255});
  }
}
private class MFInt3293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f94 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-3.6105,0.033,1.4168,-3.5565,0.0232,2.2895});
  }
}
private class MFInt3295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f96 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-3.5565,0.0232,2.2895,-3.6595,0.0085,4.8125});
  }
}
private class MFInt3297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f98 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-3.6595,0.0085,4.8125,-3.7385,0.0054,5.5315});
  }
}
private class MFInt3299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f100 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-3.7385,0.0054,5.5315,-3.7385,0.0017,5.9505});
  }
}
private class MFInt32101 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f102 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-4.1245,0.0328,1.3453,-3.7385,0.0017,5.9505});
  }
}
private class MFInt32103 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f104 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-4.2795,0.0086,4.7055});
  }
}
private class MFInt32105 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f106 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-4.2795,0.0086,4.7055,-4.3865,0.0044,5.3745});
  }
}
private class MFInt32107 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f108 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-4.3865,0.0044,5.3745,-4.4545,0.0017,5.7845});
  }
}
private class MFInt32109 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f110 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-3.9515,0.0653,-0.6895,-4.9095,0.0353,0.5574});
  }
}
private class MFInt32111 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f112 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-4.9095,0.0353,0.5574,-4.7255,0.0211,2.1725});
  }
}
private class MFInt32113 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f114 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-4.9095,0.0353,0.5574,-5.3615,0.0164,2.0085});
  }
}
private class MFInt32115 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f116 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-4.7255,0.0211,2.1725,-4.8755,0.0076,4.5165});
  }
}
private class MFInt32117 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f118 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-4.8755,0.0076,4.5165,-5.0655,0.0049,5.1895});
  }
}
private class MFInt32119 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f120 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-5.0655,0.0049,5.1895,-5.1335,0.0011,5.5175});
  }
}
private class MFInt32121 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f122 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-5.3615,0.0164,2.0085,-5.5055,0.0067,4.3115});
  }
}
private class MFInt32123 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f124 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-5.5055,0.0067,4.3115,-5.6085,0.003,4.6485});
  }
}
private class MFInt32125 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f126 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-5.6085,0.003,4.6485,-5.6495,0,4.9925});
  }
}
private class MFInt32127 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f128 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
  }
}
private class MFInt32129 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f130 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
  }
}
private class MFInt32131 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f132 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
  }
}
private class MFInt32133 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f134 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
  }
}
private class MFInt32135 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f136 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
  }
}
private class MFInt32137 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f138 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
  }
}
private class MFInt32139 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f140 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
  }
}
private class MFInt32141 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f142 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
  }
}
private class MFInt32143 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f144 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
  }
}
private class MFInt32145 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f146 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
  }
}
private class MFInt32147 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f148 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
  }
}
private class MFInt32149 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f150 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
  }
}
private class MFInt32151 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f152 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
  }
}
private class MFInt32153 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f154 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
  }
}
private class MFInt32155 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f156 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
  }
}
private class MFInt32157 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f158 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
  }
}
private class MFInt32159 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f160 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
  }
}
private class MFInt32161 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f162 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
  }
}
private class MFInt32163 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f164 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
  }
}
private class MFInt32165 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f166 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
  }
}
private class MFInt32167 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f168 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
  }
}
private class MFInt32169 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f170 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
  }
}
private class MFInt32171 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f172 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
  }
}
private class MFInt32173 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f174 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
  }
}
private class MFInt32175 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f176 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
  }
}
private class MFInt32177 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f178 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
  }
}
private class MFInt32179 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f180 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0044,1.6209,0.0236,2.2365,1.87,1.9285});
  }
}
private class MFInt32181 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f182 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0044,1.6209,0.0236,-2.2535,1.87,1.9285});
  }
}
private class MFInt32183 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f184 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0044,1.6209,0.0236,2.1305,1.8444,4.1555});
  }
}
private class MFInt32185 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f186 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0044,1.6209,0.0236,-2.1475,1.8444,4.1555});
  }
}
private class MFInt32187 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f188 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0044,1.6209,0.0236,0.9581,1.8563,5.2175});
  }
}
private class MFInt32189 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f190 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0044,1.6209,0.0236,-0.9751,1.8563,5.2175});
  }
}
private class MFInt32191 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f192 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0044,1.6209,0.0236,-0.0085,1.7229,1.148});
  }
}
private class MFInt32193 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f194 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
  }
}
private class MFInt32195 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f196 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
  }
}
private class MFInt32197 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f198 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
  }
}
private class MFInt32199 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f200 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
  }
}
private class MFInt32201 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f202 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1984,0.8663,-0.0583,8.0485,0.9213,1.3235});
  }
}
private class MFInt32203 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f204 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1984,0.8663,-0.0583,8.0485,0.9225,0.8386});
  }
}
private class MFInt32205 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f206 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1984,0.8663,-0.0583,8.0395,0.9246,0.2513});
  }
}
private class MFInt32207 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f208 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1984,0.8663,-0.0583,8.0395,0.921,-0.6795});
  }
}
private class MFInt32209 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f210 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {8.0485,0.9213,1.3235,0.1924,0.8472,-0.0534});
  }
}
private class MFInt32211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f212 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
  }
}
private class MFInt32213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f214 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
  }
}
private class MFInt32215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f216 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {8.0485,0.9225,0.8386,0.1983,0.8024,-0.028});
  }
}
private class MFInt32217 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f218 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
  }
}
private class MFInt32219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f220 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
  }
}
private class MFInt32221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f222 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
  }
}
private class MFInt32223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f224 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {8.0395,0.9246,0.2513,0.1987,0.8029,-0.053});
  }
}
private class MFInt32225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f226 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
  }
}
private class MFInt32227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f228 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
  }
}
private class MFInt32229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f230 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
  }
}
private class MFInt32231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f232 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {8.0395,0.921,-0.6795,0.1956,0.8019,-0.0794});
  }
}
private class MFInt32233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f234 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {8.0395,0.921,-0.6795,0.1925,0.8066,-0.1036});
  }
}
private class MFInt32235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f236 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
  }
}
private class MFInt32237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f238 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
  }
}
private class MFInt32239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f240 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
  }
}
private class MFInt32241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f242 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
  }
}
private class MFInt32243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f244 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
  }
}
private class MFInt32245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f246 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
  }
}
private class MFInt32247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f248 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
  }
}
private class MFInt32249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f250 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
  }
}
private class MFInt32251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f252 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
  }
}
private class MFInt32253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f254 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
  }
}
private class MFInt32255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f256 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1959,0.8694,-0.0521,-8.0515,0.9213,1.3235});
  }
}
private class MFInt32257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f258 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1959,0.8694,-0.0521,-8.0515,0.9225,0.8386});
  }
}
private class MFInt32259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f260 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1959,0.8694,-0.0521,-8.0405,0.9246,0.2513});
  }
}
private class MFInt32261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f262 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1959,0.8694,-0.0521,-8.0405,0.921,-0.6795});
  }
}
private class MFInt32263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f264 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-8.0515,0.9213,1.3235,-0.1899,0.8502,-0.0473});
  }
}
private class MFInt32265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f266 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
  }
}
private class MFInt32267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f268 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
  }
}
private class MFInt32269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f270 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-8.0515,0.9225,0.8386,-0.1961,0.8055,-0.0218});
  }
}
private class MFInt32271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f272 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
  }
}
private class MFInt32273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f274 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
  }
}
private class MFInt32275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f276 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
  }
}
private class MFInt32277 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f278 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-8.0405,0.9246,0.2513,-0.1972,0.806,-0.0468});
  }
}
private class MFInt32279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f280 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
  }
}
private class MFInt32281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f282 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
  }
}
private class MFInt32283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f284 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
  }
}
private class MFInt32285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f286 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-8.0405,0.921,-0.6795,-0.1951,0.8049,-0.0732});
  }
}
private class MFInt32287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f288 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-8.0405,0.921,-0.6795,-0.1926,0.8096,-0.0975});
  }
}
private class MFInt32289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f290 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
  }
}
private class MFInt32291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f292 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
  }
}
private class MFInt32293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f294 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
  }
}
private class MFInt32295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f296 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
  }
}
private class MFInt32297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f298 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
  }
}
private class MFInt32299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f300 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
  }
}
}
