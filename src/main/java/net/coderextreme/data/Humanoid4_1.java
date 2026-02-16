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
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new Humanoid4_1().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/Humanoid4_1.new.java.x3d");
    model.toFileJSON("../data/Humanoid4_1.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addComponent(new component().setName(new SFString("HAnim")).setLevel(1))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("Humanoid4_1.x3d")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("An attempt at a standard LOA-4 skeleton")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("h2.pl")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("14 Jan 2023")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("John Carlson")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("9 November 2020")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new Transform()
          .addComments(new CommentsBlock("DEF for markerfor XYZ axes"))
          .addChild(new Shape().setDEF(new SFString("AxisLinesShape"))
            .addComments(new CommentsBlock("RGB lines showing XYZ axes"))
            .setGeometry(new IndexedLineSet().setColorIndex(new MFInt320().getArray()).setColorPerVertex(false).setCoordIndex(new MFInt321().getArray())
              .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray()))
              .setColor(new Color().setColor(new MFColor3().getArray())))))
        .addChild(new Group()
          .addComments(new CommentsBlock("DEFS for markers of skeleton joints, segments, and sites"))
          .addChild(new Transform()
            .addChild(new Transform().setTranslation(new float[] {0f ,2f ,0f })
              .addChild(new Shape().setDEF(new SFString("HAnimRootShape"))
                .setGeometry(new Sphere().setRadius(0.02f ))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF(new SFString("HAnimRootMaterial")).setDiffuseColor(new float[] {0.8f ,0f ,0f }).setTransparency(0.3f )))))
            .addChild(new Transform().setTranslation(new float[] {0f ,2.1f ,0f })
              .addChild(new Shape().setDEF(new SFString("HAnimJointShape"))
                .setGeometry(new Sphere().setRadius(0.02f ))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF(new SFString("HAnimJointMaterial")).setDiffuseColor(new float[] {0f ,0f ,0.8f }).setTransparency(0.3f )))))
            .addChild(new Transform().setTranslation(new float[] {0f ,2.05f ,0f })
              .addChild(new Shape().setDEF(new SFString("HAnimSegmentLine"))
                .setGeometry(new LineSet().setVertexCount(new MFInt324().getArray())
                  .setColor(new ColorRGBA().setDEF(new SFString("HAnimSegmentLineColorRGBA")).setColor(new MFColorRGBA5().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray())))))
            .addChild(new Transform().setTranslation(new float[] {0f ,2.1f ,0f })
              .addChild(new Shape().setDEF(new SFString("HAnimSiteShape"))
                .setGeometry(new IndexedFaceSet().setDEF(new SFString("DiamondIFS")).setCreaseAngle(0.5f ).setSolid(false).setCoordIndex(new MFInt327().getArray())
                  .setColor(new ColorRGBA().setDEF(new SFString("HAnimSiteColorRGBA")).setColor(new MFColorRGBA8().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f9().getArray())))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,0f }).setTransparency(0.3f )))))))
        .addChild(new NavigationInfo().setSpeed(1.5f ))
        .addChild(new Viewpoint().setDescription(new SFString("default")))
        .addChild(new HAnimHumanoid().setName(new SFString("HAnim")).setDEF(new SFString("hanim_HAnim")).setInfo(new MFString10().getArray()).setVersion(new SFString("2.0"))
          .addComments(new CommentsBlock("</LOD>"))
          .setSkinCoord(new Coordinate())
          .addSkeleton(new HAnimJoint("hanim_HAnim").setName(new SFString("humanoid_root")).setDEF(new SFString("hanim_humanoid_root")).setCenter(new float[] {0f ,0.824f ,0.0277f }).setUlimit(new MFFloat11().getArray()).setLlimit(new MFFloat12().getArray())
            .addChild(new HAnimSegment("hanim_humanoid_root").setName(new SFString("sacrum")).setDEF(new SFString("hanim_sacrum"))
              .addChild(new Transform().setTranslation(new float[] {0f ,0.824f ,0.0277f })
                .addChild(new Transform()
                  .addComments(new CommentsBlock("Empty Transform"))
                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3213().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))
                  .addComments(new CommentsBlock("from humanoid_root to sacroiliac vertices 2"))
                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
              .addChild(new HAnimSite("hanim_sacrum").setName(new SFString("buttocks_standing_wall_contact_point_pt")).setDEF(new SFString("hanim_buttocks_standing_wall_contact_point_pt"))
                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite buttocks_standing_wall_contact_point_pt")))
                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
              .addChild(new HAnimSite("hanim_sacrum").setName(new SFString("crotch_pt")).setDEF(new SFString("hanim_crotch_pt")).setTranslation(new float[] {0.0034f ,0.8266f ,0.0257f })
                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite crotch_pt")))
                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
              .addChild(new HAnimSite("hanim_sacrum").setName(new SFString("l_asis_pt")).setDEF(new SFString("hanim_l_asis_pt")).setTranslation(new float[] {0.0925f ,0.9983f ,0.1052f })
                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_asis_pt")))
                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
              .addChild(new HAnimSite("hanim_sacrum").setName(new SFString("l_iliocristale_pt")).setDEF(new SFString("hanim_l_iliocristale_pt")).setTranslation(new float[] {0.1612f ,1.0537f ,0.0008f })
                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_iliocristale_pt")))
                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
              .addChild(new HAnimSite("hanim_sacrum").setName(new SFString("l_psis_pt")).setDEF(new SFString("hanim_l_psis_pt")).setTranslation(new float[] {0.0774f ,1.019f ,-0.1151f })
                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_psis_pt")))
                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
              .addChild(new HAnimSite("hanim_sacrum").setName(new SFString("l_trochanterion_pt")).setDEF(new SFString("hanim_l_trochanterion_pt")).setTranslation(new float[] {0.1677f ,0.8336f ,0.0303f })
                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_trochanterion_pt")))
                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
              .addChild(new HAnimSite("hanim_sacrum").setName(new SFString("r_asis_pt")).setDEF(new SFString("hanim_r_asis_pt")).setTranslation(new float[] {-0.0887f ,1.0021f ,0.1112f })
                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_asis_pt")))
                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
              .addChild(new HAnimSite("hanim_sacrum").setName(new SFString("r_iliocristale_pt")).setDEF(new SFString("hanim_r_iliocristale_pt")).setTranslation(new float[] {-0.1525f ,1.0628f ,0.0035f })
                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_iliocristale_pt")))
                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
              .addChild(new HAnimSite("hanim_sacrum").setName(new SFString("r_psis_pt")).setDEF(new SFString("hanim_r_psis_pt")).setTranslation(new float[] {-0.0716f ,1.019f ,-0.1138f })
                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_psis_pt")))
                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
              .addChild(new HAnimSite("hanim_sacrum").setName(new SFString("r_trochanterion_pt")).setDEF(new SFString("hanim_r_trochanterion_pt")).setTranslation(new float[] {-0.1689f ,0.8419f ,0.0352f })
                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_trochanterion_pt")))
                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3215().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f16().getArray()))
                  .addComments(new CommentsBlock("from humanoid_root to vl5 vertices 2"))
                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
              .addChild(new HAnimSite("hanim_sacrum").setName(new SFString("navel_pt")).setDEF(new SFString("hanim_navel_pt")).setTranslation(new float[] {0.0069f ,1.0966f ,0.1017f })
                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite navel_pt")))
                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
              .addChild(new HAnimSite("hanim_sacrum").setName(new SFString("waist_preferred_anterior_pt")).setDEF(new SFString("hanim_waist_preferred_anterior_pt"))
                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite waist_preferred_anterior_pt")))
                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
              .addChild(new HAnimSite("hanim_sacrum").setName(new SFString("waist_preferred_posterior_pt")).setDEF(new SFString("hanim_waist_preferred_posterior_pt")).setTranslation(new float[] {0.29f ,1.0915f ,-0.1091f })
                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite waist_preferred_posterior_pt")))
                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName(new SFString("sacroiliac")).setDEF(new SFString("hanim_sacroiliac")).setCenter(new float[] {0f ,0.9149f ,0.0016f }).setUlimit(new MFFloat17().getArray()).setLlimit(new MFFloat18().getArray())
              .addChild(new HAnimSegment("hanim_sacroiliac").setName(new SFString("pelvis")).setDEF(new SFString("hanim_pelvis"))
                .addChild(new Transform().setTranslation(new float[] {0f ,0.9149f ,0.0016f })
                  .addChild(new Transform()
                    .addComments(new CommentsBlock("Empty Transform"))
                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3219().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f20().getArray()))
                    .addComments(new CommentsBlock("from sacroiliac to l_hip vertices 2"))
                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("l_femoral_lateral_epicondyles_pt")).setDEF(new SFString("hanim_l_femoral_lateral_epicondyles_pt")).setTranslation(new float[] {0.1598f ,0.4967f ,0.0297f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_femoral_lateral_epicondyles_pt")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("l_femoral_medial_epicondyles_pt")).setDEF(new SFString("hanim_l_femoral_medial_epicondyles_pt")).setTranslation(new float[] {0.0398f ,0.4946f ,0.0303f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_femoral_medial_epicondyles_pt")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("l_knee_crease_pt")).setDEF(new SFString("hanim_l_knee_crease_pt")).setTranslation(new float[] {0.0993f ,0.4881f ,-0.0309f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_knee_crease_pt")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("l_suprapatella_pt")).setDEF(new SFString("hanim_l_suprapatella_pt"))
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_suprapatella_pt")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3221().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f22().getArray()))
                    .addComments(new CommentsBlock("from sacroiliac to r_hip vertices 2"))
                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("r_femoral_lateral_epicondyles_pt")).setDEF(new SFString("hanim_r_femoral_lateral_epicondyles_pt")).setTranslation(new float[] {-0.1421f ,0.4992f ,0.031f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_femoral_lateral_epicondyles_pt")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("r_femoral_medial_epicondyles_pt")).setDEF(new SFString("hanim_r_femoral_medial_epicondyles_pt")).setTranslation(new float[] {-0.0221f ,0.5014f ,0.0289f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_femoral_medial_epicondyles_pt")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("r_knee_crease_pt")).setDEF(new SFString("hanim_r_knee_crease_pt")).setTranslation(new float[] {-0.0825f ,0.4932f ,-0.0326f })
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_knee_crease_pt")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                .addChild(new HAnimSite("hanim_pelvis").setName(new SFString("r_suprapatella_pt")).setDEF(new SFString("hanim_r_suprapatella_pt"))
                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_suprapatella_pt")))
                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName(new SFString("l_hip")).setDEF(new SFString("hanim_l_hip")).setCenter(new float[] {0.0961f ,0.9124f ,-0.0001f }).setUlimit(new MFFloat23().getArray()).setLlimit(new MFFloat24().getArray())
                .addChild(new HAnimSegment("hanim_l_hip").setName(new SFString("l_thigh")).setDEF(new SFString("hanim_l_thigh"))
                  .addChild(new Transform().setTranslation(new float[] {0.0961f ,0.9124f ,-0.0001f })
                    .addChild(new Transform()
                      .addComments(new CommentsBlock("Empty Transform"))
                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3225().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))
                      .addComments(new CommentsBlock("from l_hip to l_knee vertices 2"))
                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName(new SFString("l_lateral_malleolus_pt")).setDEF(new SFString("hanim_l_lateral_malleolus_pt")).setTranslation(new float[] {0.1308f ,0.0597f ,-0.1032f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_lateral_malleolus_pt")))
                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName(new SFString("l_medial_malleolus_pt")).setDEF(new SFString("hanim_l_medial_malleolus_pt")).setTranslation(new float[] {0.089f ,0.0716f ,-0.0881f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_medial_malleolus_pt")))
                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                  .addChild(new HAnimSite("hanim_l_thigh").setName(new SFString("l_tibiale_pt")).setDEF(new SFString("hanim_l_tibiale_pt"))
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_tibiale_pt")))
                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                .addChild(new HAnimJoint("hanim_l_hip").setName(new SFString("l_knee")).setDEF(new SFString("hanim_l_knee")).setCenter(new float[] {0.104f ,0.4867f ,0.0308f }).setUlimit(new MFFloat27().getArray()).setLlimit(new MFFloat28().getArray())
                  .addChild(new HAnimSegment("hanim_l_knee").setName(new SFString("l_calf")).setDEF(new SFString("hanim_l_calf"))
                    .addChild(new Transform().setTranslation(new float[] {0.104f ,0.4867f ,0.0308f })
                      .addChild(new Transform()
                        .addComments(new CommentsBlock("Empty Transform"))
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3229().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))
                        .addComments(new CommentsBlock("from l_knee to l_talocrural vertices 2"))
                        .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                    .addChild(new HAnimSite("hanim_l_calf").setName(new SFString("l_calcaneus_posterior_pt")).setDEF(new SFString("hanim_l_calcaneus_posterior_pt")).setTranslation(new float[] {0.0974f ,0.0259f ,-0.1171f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_calcaneus_posterior_pt")))
                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                    .addChild(new HAnimSite("hanim_l_calf").setName(new SFString("l_sphyrion_pt")).setDEF(new SFString("hanim_l_sphyrion_pt")).setTranslation(new float[] {0.089f ,0.0575f ,-0.0943f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_sphyrion_pt")))
                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                  .addChild(new HAnimJoint("hanim_l_knee").setName(new SFString("l_talocrural")).setDEF(new SFString("hanim_l_talocrural")).setCenter(new float[] {0.1101f ,0.0656f ,-0.0736f }).setUlimit(new MFFloat31().getArray()).setLlimit(new MFFloat32().getArray())
                    .addChild(new HAnimSegment("hanim_l_talocrural").setName(new SFString("l_talus")).setDEF(new SFString("hanim_l_talus"))
                      .addChild(new Transform().setScale(new float[] {0.15f ,0.15f ,0.15f }).setTranslation(new float[] {0.08f ,0.06f ,-0.025f }).setRotation(new float[] {1f ,0f ,0f ,-1.57f })
                        .addComments(new CommentsBlock("Transform left foot"))
                        .addChild(new Transform()
                          .addComments(new CommentsBlock("Empty Transform left foot"))
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3233().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray()))
                          .addComments(new CommentsBlock("from l_talocrural to l_talocalcaneonavicular vertices 2"))
                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3235().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f36().getArray()))
                          .addComments(new CommentsBlock("from l_talocrural to l_calcaneocuboid vertices 2"))
                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName(new SFString("l_talocalcaneonavicular")).setDEF(new SFString("hanim_l_talocalcaneonavicular")).setCenter(new float[] {3.4715f ,0.0374f ,0.6807f }).setUlimit(new MFFloat37().getArray()).setLlimit(new MFFloat38().getArray())
                      .addChild(new HAnimSegment("hanim_l_talocalcaneonavicular").setName(new SFString("l_navicular")).setDEF(new SFString("hanim_l_navicular"))
                        .addChild(new Transform().setTranslation(new float[] {3.4715f ,0.0374f ,0.6807f })
                          .addChild(new Transform()
                            .addComments(new CommentsBlock("Empty Transform"))
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3239().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f40().getArray()))
                            .addComments(new CommentsBlock("from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3241().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray()))
                            .addComments(new CommentsBlock("from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3243().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f44().getArray()))
                            .addComments(new CommentsBlock("from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName(new SFString("l_cuneonavicular_1")).setDEF(new SFString("hanim_l_cuneonavicular_1")).setCenter(new float[] {2.9855f ,0.0311f ,1.2819f }).setUlimit(new MFFloat45().getArray()).setLlimit(new MFFloat46().getArray())
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_1").setName(new SFString("l_cuneiform_1")).setDEF(new SFString("hanim_l_cuneiform_1"))
                          .addChild(new Transform().setTranslation(new float[] {2.9855f ,0.0311f ,1.2819f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3247().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f48().getArray()))
                              .addComments(new CommentsBlock("from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_1").setName(new SFString("l_tarsometatarsal_1")).setDEF(new SFString("hanim_l_tarsometatarsal_1")).setCenter(new float[] {2.8635f ,0.0194f ,2.4285f }).setUlimit(new MFFloat49().getArray()).setLlimit(new MFFloat50().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_1").setName(new SFString("l_metatarsal_1")).setDEF(new SFString("hanim_l_metatarsal_1"))
                            .addChild(new Transform().setTranslation(new float[] {2.8635f ,0.0194f ,2.4285f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3251().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f52().getArray()))
                                .addComments(new CommentsBlock("from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimSite("hanim_l_metatarsal_1").setName(new SFString("l_metatarsal_phalanx_1_pt")).setDEF(new SFString("hanim_l_metatarsal_phalanx_1_pt"))
                              .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_metatarsal_phalanx_1_pt")))
                              .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_1").setName(new SFString("l_metatarsophalangeal_1")).setDEF(new SFString("hanim_l_metatarsophalangeal_1")).setCenter(new float[] {2.7525f ,0.0077f ,4.6255f }).setUlimit(new MFFloat53().getArray()).setLlimit(new MFFloat54().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_1").setName(new SFString("l_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_1"))
                              .addChild(new Transform().setTranslation(new float[] {2.7525f ,0.0077f ,4.6255f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3255().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f56().getArray()))
                                  .addComments(new CommentsBlock("from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimSite("hanim_l_tarsal_proximal_phalanx_1").setName(new SFString("l_tarsal_distal_phalanx_1_tip")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_1_tip"))
                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_tarsal_distal_phalanx_1_tip")))
                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_1").setName(new SFString("l_tarsal_interphalangeal_1")).setDEF(new SFString("hanim_l_tarsal_interphalangeal_1")).setUlimit(new MFFloat57().getArray()).setLlimit(new MFFloat58().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName(new SFString("l_cuneonavicular_2")).setDEF(new SFString("hanim_l_cuneonavicular_2")).setCenter(new float[] {3.6105f ,0.033f ,1.4168f }).setUlimit(new MFFloat59().getArray()).setLlimit(new MFFloat60().getArray())
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_2").setName(new SFString("l_cuneiform_2")).setDEF(new SFString("hanim_l_cuneiform_2"))
                          .addChild(new Transform().setTranslation(new float[] {3.6105f ,0.033f ,1.4168f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3261().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f62().getArray()))
                              .addComments(new CommentsBlock("from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_2").setName(new SFString("l_tarsometatarsal_2")).setDEF(new SFString("hanim_l_tarsometatarsal_2")).setCenter(new float[] {3.5555f ,0.0232f ,2.2895f }).setUlimit(new MFFloat63().getArray()).setLlimit(new MFFloat64().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_2").setName(new SFString("l_metatarsal_2")).setDEF(new SFString("hanim_l_metatarsal_2"))
                            .addChild(new Transform().setTranslation(new float[] {3.5555f ,0.0232f ,2.2895f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3265().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f66().getArray()))
                                .addComments(new CommentsBlock("from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setName(new SFString("l_metatarsophalangeal_2")).setDEF(new SFString("hanim_l_metatarsophalangeal_2")).setCenter(new float[] {3.6595f ,0.0085f ,4.8125f }).setUlimit(new MFFloat67().getArray()).setLlimit(new MFFloat68().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setName(new SFString("l_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_2"))
                              .addChild(new Transform().setTranslation(new float[] {3.6595f ,0.0085f ,4.8125f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3269().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f70().getArray()))
                                  .addComments(new CommentsBlock("from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName(new SFString("l_tarsal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_2")).setCenter(new float[] {3.7385f ,0.0054f ,5.5315f }).setUlimit(new MFFloat71().getArray()).setLlimit(new MFFloat72().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_2").setName(new SFString("l_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_2"))
                                .addChild(new Transform().setTranslation(new float[] {3.7385f ,0.0054f ,5.5315f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3273().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f74().getArray()))
                                    .addComments(new CommentsBlock("from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                .addChild(new HAnimSite("hanim_l_tarsal_middle_phalanx_2").setName(new SFString("l_tarsal_distal_phalanx_2_tip")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_2_tip")).setTranslation(new float[] {0.1195f ,0.0079f ,0.1433f })
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_tarsal_distal_phalanx_2_tip")))
                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_2").setName(new SFString("l_tarsal_distal_interphalangeal_2")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_2")).setCenter(new float[] {3.7385f ,0.0017f ,5.9505f }).setUlimit(new MFFloat75().getArray()).setLlimit(new MFFloat76().getArray()))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName(new SFString("l_cuneonavicular_3")).setDEF(new SFString("hanim_l_cuneonavicular_3")).setCenter(new float[] {4.1235f ,0.0328f ,1.3453f }).setUlimit(new MFFloat77().getArray()).setLlimit(new MFFloat78().getArray())
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_3").setName(new SFString("l_cuneiform_3")).setDEF(new SFString("hanim_l_cuneiform_3"))
                          .addChild(new Transform().setTranslation(new float[] {4.1235f ,0.0328f ,1.3453f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3279().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray()))
                              .addComments(new CommentsBlock("from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_3").setName(new SFString("l_tarsometatarsal_3")).setDEF(new SFString("hanim_l_tarsometatarsal_3")).setUlimit(new MFFloat81().getArray()).setLlimit(new MFFloat82().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_3").setName(new SFString("l_metatarsal_3")).setDEF(new SFString("hanim_l_metatarsal_3"))
                            .addChild(new Transform().setTranslation(new float[] {4.1235f ,0.0328f ,1.3453f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3283().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f84().getArray()))
                                .addComments(new CommentsBlock("from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_3").setName(new SFString("l_metatarsophalangeal_3")).setDEF(new SFString("hanim_l_metatarsophalangeal_3")).setCenter(new float[] {4.2795f ,0.0086f ,4.7055f }).setUlimit(new MFFloat85().getArray()).setLlimit(new MFFloat86().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_3").setName(new SFString("l_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_3"))
                              .addChild(new Transform().setTranslation(new float[] {4.2795f ,0.0086f ,4.7055f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt3287().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f88().getArray()))
                                  .addComments(new CommentsBlock("from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_3").setName(new SFString("l_tarsal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_3")).setCenter(new float[] {4.3855f ,0.0044f ,5.3745f }).setUlimit(new MFFloat89().getArray()).setLlimit(new MFFloat90().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_3").setName(new SFString("l_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_3"))
                                .addChild(new Transform().setTranslation(new float[] {4.3855f ,0.0044f ,5.3745f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt3291().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f92().getArray()))
                                    .addComments(new CommentsBlock("from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                .addChild(new HAnimSite("hanim_l_tarsal_middle_phalanx_3").setName(new SFString("l_tarsal_distal_phalanx_3_tip")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_3_tip"))
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_tarsal_distal_phalanx_3_tip")))
                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_3").setName(new SFString("l_tarsal_distal_interphalangeal_3")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_3")).setCenter(new float[] {4.4545f ,0.0017f ,5.7845f }).setUlimit(new MFFloat93().getArray()).setLlimit(new MFFloat94().getArray())))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName(new SFString("l_calcaneocuboid")).setDEF(new SFString("hanim_l_calcaneocuboid")).setCenter(new float[] {3.9515f ,0.0653f ,-0.6895f }).setUlimit(new MFFloat95().getArray()).setLlimit(new MFFloat96().getArray())
                      .addChild(new HAnimSegment("hanim_l_calcaneocuboid").setName(new SFString("l_calcaneus")).setDEF(new SFString("hanim_l_calcaneus"))
                        .addChild(new Transform().setTranslation(new float[] {3.9515f ,0.0653f ,-0.6895f })
                          .addChild(new Transform()
                            .addComments(new CommentsBlock("Empty Transform"))
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3297().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray()))
                            .addComments(new CommentsBlock("from l_calcaneocuboid to l_transversetarsal vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                      .addChild(new HAnimJoint("hanim_l_calcaneocuboid").setName(new SFString("l_transversetarsal")).setDEF(new SFString("hanim_l_transversetarsal")).setCenter(new float[] {4.9085f ,0.0353f ,0.5574f }).setUlimit(new MFFloat99().getArray()).setLlimit(new MFFloat100().getArray())
                        .addChild(new HAnimSegment("hanim_l_transversetarsal").setName(new SFString("l_cuboid")).setDEF(new SFString("hanim_l_cuboid"))
                          .addChild(new Transform().setTranslation(new float[] {4.9085f ,0.0353f ,0.5574f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32101().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f102().getArray()))
                              .addComments(new CommentsBlock("from l_transversetarsal to l_tarsometatarsal_4 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32103().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f104().getArray()))
                              .addComments(new CommentsBlock("from l_transversetarsal to l_tarsometatarsal_5 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName(new SFString("l_tarsometatarsal_4")).setDEF(new SFString("hanim_l_tarsometatarsal_4")).setCenter(new float[] {4.7245f ,0.0211f ,2.1725f }).setUlimit(new MFFloat105().getArray()).setLlimit(new MFFloat106().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_4").setName(new SFString("l_metatarsal_4")).setDEF(new SFString("hanim_l_metatarsal_4"))
                            .addChild(new Transform().setTranslation(new float[] {4.7245f ,0.0211f ,2.1725f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32107().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f108().getArray()))
                                .addComments(new CommentsBlock("from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_4").setName(new SFString("l_metatarsophalangeal_4")).setDEF(new SFString("hanim_l_metatarsophalangeal_4")).setCenter(new float[] {4.8745f ,0.0076f ,4.5165f }).setUlimit(new MFFloat109().getArray()).setLlimit(new MFFloat110().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_4").setName(new SFString("l_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_4"))
                              .addChild(new Transform().setTranslation(new float[] {4.8745f ,0.0076f ,4.5165f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32111().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f112().getArray()))
                                  .addComments(new CommentsBlock("from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_4").setName(new SFString("l_tarsal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_4")).setCenter(new float[] {5.0655f ,0.0049f ,5.1895f }).setUlimit(new MFFloat113().getArray()).setLlimit(new MFFloat114().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_4").setName(new SFString("l_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_4"))
                                .addChild(new Transform().setTranslation(new float[] {5.0655f ,0.0049f ,5.1895f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32115().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f116().getArray()))
                                    .addComments(new CommentsBlock("from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                .addChild(new HAnimSite("hanim_l_tarsal_middle_phalanx_4").setName(new SFString("l_tarsal_distal_phalanx_4_tip")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_4_tip"))
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_tarsal_distal_phalanx_4_tip")))
                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_4").setName(new SFString("l_tarsal_distal_interphalangeal_4")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_4")).setCenter(new float[] {5.1325f ,0.0011f ,5.5175f }).setUlimit(new MFFloat117().getArray()).setLlimit(new MFFloat118().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName(new SFString("l_tarsometatarsal_5")).setDEF(new SFString("hanim_l_tarsometatarsal_5")).setCenter(new float[] {5.3615f ,0.0164f ,2.0085f }).setUlimit(new MFFloat119().getArray()).setLlimit(new MFFloat120().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_5").setName(new SFString("l_metatarsal_5")).setDEF(new SFString("hanim_l_metatarsal_5"))
                            .addChild(new Transform().setTranslation(new float[] {5.3615f ,0.0164f ,2.0085f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32121().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f122().getArray()))
                                .addComments(new CommentsBlock("from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimSite("hanim_l_metatarsal_5").setName(new SFString("l_metatarsal_phalanx_5_pt")).setDEF(new SFString("hanim_l_metatarsal_phalanx_5_pt"))
                              .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_metatarsal_phalanx_5_pt")))
                              .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_5").setName(new SFString("l_metatarsophalangeal_5")).setDEF(new SFString("hanim_l_metatarsophalangeal_5")).setCenter(new float[] {5.5055f ,0.0067f ,4.3115f }).setUlimit(new MFFloat123().getArray()).setLlimit(new MFFloat124().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_5").setName(new SFString("l_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_5"))
                              .addChild(new Transform().setTranslation(new float[] {5.5055f ,0.0067f ,4.3115f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32125().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f126().getArray()))
                                  .addComments(new CommentsBlock("from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_5").setName(new SFString("l_tarsal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_5")).setCenter(new float[] {5.6085f ,0.003f ,4.6485f }).setUlimit(new MFFloat127().getArray()).setLlimit(new MFFloat128().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_5").setName(new SFString("l_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_5"))
                                .addChild(new Transform().setTranslation(new float[] {5.6085f ,0.003f ,4.6485f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32129().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f130().getArray()))
                                    .addComments(new CommentsBlock("from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                .addChild(new HAnimSite("hanim_l_tarsal_middle_phalanx_5").setName(new SFString("l_tarsal_distal_phalanx_5_tip")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_5_tip"))
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_tarsal_distal_phalanx_5_tip")))
                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_5").setName(new SFString("l_tarsal_distal_interphalangeal_5")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_5")).setCenter(new float[] {5.6485f ,0f ,4.9925f }).setUlimit(new MFFloat131().getArray()).setLlimit(new MFFloat132().getArray()))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName(new SFString("r_hip")).setDEF(new SFString("hanim_r_hip")).setCenter(new float[] {-0.095f ,0.9171f ,0.0029f }).setUlimit(new MFFloat133().getArray()).setLlimit(new MFFloat134().getArray())
                .addChild(new HAnimSegment("hanim_r_hip").setName(new SFString("r_thigh")).setDEF(new SFString("hanim_r_thigh"))
                  .addChild(new Transform().setTranslation(new float[] {-0.095f ,0.9171f ,0.0029f })
                    .addChild(new Transform()
                      .addComments(new CommentsBlock("Empty Transform"))
                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32135().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f136().getArray()))
                      .addComments(new CommentsBlock("from r_hip to r_knee vertices 2"))
                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName(new SFString("r_lateral_malleolus_pt")).setDEF(new SFString("hanim_r_lateral_malleolus_pt")).setTranslation(new float[] {-0.1006f ,0.0658f ,-0.1075f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_lateral_malleolus_pt")))
                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName(new SFString("r_medial_malleolus_pt")).setDEF(new SFString("hanim_r_medial_malleolus_pt")).setTranslation(new float[] {-0.0591f ,0.076f ,-0.0928f })
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_medial_malleolus_pt")))
                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                  .addChild(new HAnimSite("hanim_r_thigh").setName(new SFString("r_tibiale_pt")).setDEF(new SFString("hanim_r_tibiale_pt"))
                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_tibiale_pt")))
                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                .addChild(new HAnimJoint("hanim_r_hip").setName(new SFString("r_knee")).setDEF(new SFString("hanim_r_knee")).setCenter(new float[] {-0.0867f ,0.4913f ,0.0318f }).setUlimit(new MFFloat137().getArray()).setLlimit(new MFFloat138().getArray())
                  .addChild(new HAnimSegment("hanim_r_knee").setName(new SFString("r_calf")).setDEF(new SFString("hanim_r_calf"))
                    .addChild(new Transform().setTranslation(new float[] {-0.0867f ,0.4913f ,0.0318f })
                      .addChild(new Transform()
                        .addComments(new CommentsBlock("Empty Transform"))
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32139().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f140().getArray()))
                        .addComments(new CommentsBlock("from r_knee to r_talocrural vertices 2"))
                        .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                    .addChild(new HAnimSite("hanim_r_calf").setName(new SFString("r_calcaneus_posterior_pt")).setDEF(new SFString("hanim_r_calcaneus_posterior_pt")).setTranslation(new float[] {-0.0692f ,0.0297f ,-0.1221f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_calcaneus_posterior_pt")))
                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                    .addChild(new HAnimSite("hanim_r_calf").setName(new SFString("r_sphyrion_pt")).setDEF(new SFString("hanim_r_sphyrion_pt")).setTranslation(new float[] {-0.0603f ,0.061f ,-0.1002f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_sphyrion_pt")))
                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                  .addChild(new HAnimJoint("hanim_r_knee").setName(new SFString("r_talocrural")).setDEF(new SFString("hanim_r_talocrural")).setCenter(new float[] {-0.0801f ,0.0712f ,-0.0766f }).setUlimit(new MFFloat141().getArray()).setLlimit(new MFFloat142().getArray())
                    .addChild(new HAnimSegment("hanim_r_talocrural").setName(new SFString("r_talus")).setDEF(new SFString("hanim_r_talus"))
                      .addChild(new Transform().setScale(new float[] {0.15f ,0.15f ,0.15f }).setTranslation(new float[] {-0.05f ,0.06f ,-0.025f }).setRotation(new float[] {1f ,0f ,0f ,-1.57f })
                        .addComments(new CommentsBlock("Transform right foot"))
                        .addChild(new Transform()
                          .addComments(new CommentsBlock("Empty Transform right foot"))
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32143().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f144().getArray()))
                          .addComments(new CommentsBlock("from r_talocrural to r_talocalcaneonavicular vertices 2"))
                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32145().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f146().getArray()))
                          .addComments(new CommentsBlock("from r_talocrural to r_calcaneocuboid vertices 2"))
                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName(new SFString("r_talocalcaneonavicular")).setDEF(new SFString("hanim_r_talocalcaneonavicular")).setCenter(new float[] {-3.4725f ,0.0374f ,0.6807f }).setUlimit(new MFFloat147().getArray()).setLlimit(new MFFloat148().getArray())
                      .addChild(new HAnimSegment("hanim_r_talocalcaneonavicular").setName(new SFString("r_navicular")).setDEF(new SFString("hanim_r_navicular"))
                        .addChild(new Transform().setTranslation(new float[] {-3.4725f ,0.0374f ,0.6807f })
                          .addChild(new Transform()
                            .addComments(new CommentsBlock("Empty Transform"))
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32149().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f150().getArray()))
                            .addComments(new CommentsBlock("from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32151().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f152().getArray()))
                            .addComments(new CommentsBlock("from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32153().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f154().getArray()))
                            .addComments(new CommentsBlock("from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName(new SFString("r_cuneonavicular_1")).setDEF(new SFString("hanim_r_cuneonavicular_1")).setCenter(new float[] {-2.9855f ,0.0311f ,1.2819f }).setUlimit(new MFFloat155().getArray()).setLlimit(new MFFloat156().getArray())
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_1").setName(new SFString("r_cuneiform_1")).setDEF(new SFString("hanim_r_cuneiform_1"))
                          .addChild(new Transform().setTranslation(new float[] {-2.9855f ,0.0311f ,1.2819f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32157().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f158().getArray()))
                              .addComments(new CommentsBlock("from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setName(new SFString("r_tarsometatarsal_1")).setDEF(new SFString("hanim_r_tarsometatarsal_1")).setCenter(new float[] {-2.8645f ,0.0194f ,2.4285f }).setUlimit(new MFFloat159().getArray()).setLlimit(new MFFloat160().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_1").setName(new SFString("r_metatarsal_1")).setDEF(new SFString("hanim_r_metatarsal_1"))
                            .addChild(new Transform().setTranslation(new float[] {-2.8645f ,0.0194f ,2.4285f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32161().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f162().getArray()))
                                .addComments(new CommentsBlock("from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimSite("hanim_r_metatarsal_1").setName(new SFString("r_metatarsal_phalanx_1_pt")).setDEF(new SFString("hanim_r_metatarsal_phalanx_1_pt"))
                              .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_metatarsal_phalanx_1_pt")))
                              .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setName(new SFString("r_metatarsophalangeal_1")).setDEF(new SFString("hanim_r_metatarsophalangeal_1")).setCenter(new float[] {-2.7535f ,0.0077f ,4.6255f }).setUlimit(new MFFloat163().getArray()).setLlimit(new MFFloat164().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_1").setName(new SFString("r_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_1"))
                              .addChild(new Transform().setTranslation(new float[] {-2.7535f ,0.0077f ,4.6255f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32165().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f166().getArray()))
                                  .addComments(new CommentsBlock("from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimSite("hanim_r_tarsal_proximal_phalanx_1").setName(new SFString("r_tarsal_distal_phalanx_1_tip")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_1_tip"))
                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_tarsal_distal_phalanx_1_tip")))
                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setName(new SFString("r_tarsal_interphalangeal_1")).setDEF(new SFString("hanim_r_tarsal_interphalangeal_1")).setUlimit(new MFFloat167().getArray()).setLlimit(new MFFloat168().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName(new SFString("r_cuneonavicular_2")).setDEF(new SFString("hanim_r_cuneonavicular_2")).setCenter(new float[] {-3.6105f ,0.033f ,1.4168f }).setUlimit(new MFFloat169().getArray()).setLlimit(new MFFloat170().getArray())
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_2").setName(new SFString("r_cuneiform_2")).setDEF(new SFString("hanim_r_cuneiform_2"))
                          .addChild(new Transform().setTranslation(new float[] {-3.6105f ,0.033f ,1.4168f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32171().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f172().getArray()))
                              .addComments(new CommentsBlock("from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setName(new SFString("r_tarsometatarsal_2")).setDEF(new SFString("hanim_r_tarsometatarsal_2")).setCenter(new float[] {-3.5565f ,0.0232f ,2.2895f }).setUlimit(new MFFloat173().getArray()).setLlimit(new MFFloat174().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_2").setName(new SFString("r_metatarsal_2")).setDEF(new SFString("hanim_r_metatarsal_2"))
                            .addChild(new Transform().setTranslation(new float[] {-3.5565f ,0.0232f ,2.2895f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32175().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f176().getArray()))
                                .addComments(new CommentsBlock("from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName(new SFString("r_metatarsophalangeal_2")).setDEF(new SFString("hanim_r_metatarsophalangeal_2")).setCenter(new float[] {-3.6595f ,0.0085f ,4.8125f }).setUlimit(new MFFloat177().getArray()).setLlimit(new MFFloat178().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setName(new SFString("r_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_2"))
                              .addChild(new Transform().setTranslation(new float[] {-3.6595f ,0.0085f ,4.8125f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32179().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f180().getArray()))
                                  .addComments(new CommentsBlock("from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName(new SFString("r_tarsal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_2")).setCenter(new float[] {-3.7385f ,0.0054f ,5.5315f }).setUlimit(new MFFloat181().getArray()).setLlimit(new MFFloat182().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_2").setName(new SFString("r_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_2"))
                                .addChild(new Transform().setTranslation(new float[] {-3.7385f ,0.0054f ,5.5315f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32183().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f184().getArray()))
                                    .addComments(new CommentsBlock("from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                .addChild(new HAnimSite("hanim_r_tarsal_middle_phalanx_2").setName(new SFString("r_tarsal_distal_phalanx_2_tip")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_2_tip")).setTranslation(new float[] {-0.0883f ,0.0134f ,0.1383f })
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_tarsal_distal_phalanx_2_tip")))
                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setName(new SFString("r_tarsal_distal_interphalangeal_2")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_2")).setCenter(new float[] {-3.7385f ,0.0017f ,5.9505f }).setUlimit(new MFFloat185().getArray()).setLlimit(new MFFloat186().getArray()))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName(new SFString("r_cuneonavicular_3")).setDEF(new SFString("hanim_r_cuneonavicular_3")).setCenter(new float[] {-4.1245f ,0.0328f ,1.3453f }).setUlimit(new MFFloat187().getArray()).setLlimit(new MFFloat188().getArray())
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_3").setName(new SFString("r_cuneiform_3")).setDEF(new SFString("hanim_r_cuneiform_3"))
                          .addChild(new Transform().setTranslation(new float[] {-4.1245f ,0.0328f ,1.3453f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32189().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f190().getArray()))
                              .addComments(new CommentsBlock("from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setName(new SFString("r_tarsometatarsal_3")).setDEF(new SFString("hanim_r_tarsometatarsal_3")).setUlimit(new MFFloat191().getArray()).setLlimit(new MFFloat192().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_3").setName(new SFString("r_metatarsal_3")).setDEF(new SFString("hanim_r_metatarsal_3"))
                            .addChild(new Transform().setTranslation(new float[] {-4.1245f ,0.0328f ,1.3453f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32193().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f194().getArray()))
                                .addComments(new CommentsBlock("from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setName(new SFString("r_metatarsophalangeal_3")).setDEF(new SFString("hanim_r_metatarsophalangeal_3")).setCenter(new float[] {-4.2795f ,0.0086f ,4.7055f }).setUlimit(new MFFloat195().getArray()).setLlimit(new MFFloat196().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_3").setName(new SFString("r_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_3"))
                              .addChild(new Transform().setTranslation(new float[] {-4.2795f ,0.0086f ,4.7055f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32197().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f198().getArray()))
                                  .addComments(new CommentsBlock("from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setName(new SFString("r_tarsal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_3")).setCenter(new float[] {-4.3865f ,0.0044f ,5.3745f }).setUlimit(new MFFloat199().getArray()).setLlimit(new MFFloat200().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_3").setName(new SFString("r_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_3"))
                                .addChild(new Transform().setTranslation(new float[] {-4.3865f ,0.0044f ,5.3745f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32201().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f202().getArray()))
                                    .addComments(new CommentsBlock("from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                .addChild(new HAnimSite("hanim_r_tarsal_middle_phalanx_3").setName(new SFString("r_tarsal_distal_phalanx_3_tip")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_3_tip"))
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_tarsal_distal_phalanx_3_tip")))
                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setName(new SFString("r_tarsal_distal_interphalangeal_3")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_3")).setCenter(new float[] {-4.4545f ,0.0017f ,5.7845f }).setUlimit(new MFFloat203().getArray()).setLlimit(new MFFloat204().getArray())))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName(new SFString("r_calcaneocuboid")).setDEF(new SFString("hanim_r_calcaneocuboid")).setCenter(new float[] {-3.9515f ,0.0653f ,-0.6895f }).setUlimit(new MFFloat205().getArray()).setLlimit(new MFFloat206().getArray())
                      .addChild(new HAnimSegment("hanim_r_calcaneocuboid").setName(new SFString("r_calcaneus")).setDEF(new SFString("hanim_r_calcaneus"))
                        .addChild(new Transform().setTranslation(new float[] {-3.9515f ,0.0653f ,-0.6895f })
                          .addChild(new Transform()
                            .addComments(new CommentsBlock("Empty Transform"))
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32207().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f208().getArray()))
                            .addComments(new CommentsBlock("from r_calcaneocuboid to r_transversetarsal vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                      .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setName(new SFString("r_transversetarsal")).setDEF(new SFString("hanim_r_transversetarsal")).setCenter(new float[] {-4.9095f ,0.0353f ,0.5574f }).setUlimit(new MFFloat209().getArray()).setLlimit(new MFFloat210().getArray())
                        .addChild(new HAnimSegment("hanim_r_transversetarsal").setName(new SFString("r_cuboid")).setDEF(new SFString("hanim_r_cuboid"))
                          .addChild(new Transform().setTranslation(new float[] {-4.9095f ,0.0353f ,0.5574f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32211().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f212().getArray()))
                              .addComments(new CommentsBlock("from r_transversetarsal to r_tarsometatarsal_4 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32213().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f214().getArray()))
                              .addComments(new CommentsBlock("from r_transversetarsal to r_tarsometatarsal_5 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName(new SFString("r_tarsometatarsal_4")).setDEF(new SFString("hanim_r_tarsometatarsal_4")).setCenter(new float[] {-4.7255f ,0.0211f ,2.1725f }).setUlimit(new MFFloat215().getArray()).setLlimit(new MFFloat216().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_4").setName(new SFString("r_metatarsal_4")).setDEF(new SFString("hanim_r_metatarsal_4"))
                            .addChild(new Transform().setTranslation(new float[] {-4.7255f ,0.0211f ,2.1725f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32217().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f218().getArray()))
                                .addComments(new CommentsBlock("from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setName(new SFString("r_metatarsophalangeal_4")).setDEF(new SFString("hanim_r_metatarsophalangeal_4")).setCenter(new float[] {-4.8755f ,0.0076f ,4.5165f }).setUlimit(new MFFloat219().getArray()).setLlimit(new MFFloat220().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_4").setName(new SFString("r_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_4"))
                              .addChild(new Transform().setTranslation(new float[] {-4.8755f ,0.0076f ,4.5165f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32221().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f222().getArray()))
                                  .addComments(new CommentsBlock("from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setName(new SFString("r_tarsal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_4")).setCenter(new float[] {-5.0655f ,0.0049f ,5.1895f }).setUlimit(new MFFloat223().getArray()).setLlimit(new MFFloat224().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_4").setName(new SFString("r_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_4"))
                                .addChild(new Transform().setTranslation(new float[] {-5.0655f ,0.0049f ,5.1895f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32225().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f226().getArray()))
                                    .addComments(new CommentsBlock("from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                .addChild(new HAnimSite("hanim_r_tarsal_middle_phalanx_4").setName(new SFString("r_tarsal_distal_phalanx_4_tip")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_4_tip"))
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_tarsal_distal_phalanx_4_tip")))
                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setName(new SFString("r_tarsal_distal_interphalangeal_4")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_4")).setCenter(new float[] {-5.1335f ,0.0011f ,5.5175f }).setUlimit(new MFFloat227().getArray()).setLlimit(new MFFloat228().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName(new SFString("r_tarsometatarsal_5")).setDEF(new SFString("hanim_r_tarsometatarsal_5")).setCenter(new float[] {-5.3615f ,0.0164f ,2.0085f }).setUlimit(new MFFloat229().getArray()).setLlimit(new MFFloat230().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_5").setName(new SFString("r_metatarsal_5")).setDEF(new SFString("hanim_r_metatarsal_5"))
                            .addChild(new Transform().setTranslation(new float[] {-5.3615f ,0.0164f ,2.0085f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32231().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f232().getArray()))
                                .addComments(new CommentsBlock("from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimSite("hanim_r_metatarsal_5").setName(new SFString("r_metatarsal_phalanx_5_pt")).setDEF(new SFString("hanim_r_metatarsal_phalanx_5_pt"))
                              .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_metatarsal_phalanx_5_pt")))
                              .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setName(new SFString("r_metatarsophalangeal_5")).setDEF(new SFString("hanim_r_metatarsophalangeal_5")).setCenter(new float[] {-5.5055f ,0.0067f ,4.3115f }).setUlimit(new MFFloat233().getArray()).setLlimit(new MFFloat234().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_5").setName(new SFString("r_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_5"))
                              .addChild(new Transform().setTranslation(new float[] {-5.5055f ,0.0067f ,4.3115f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32235().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f236().getArray()))
                                  .addComments(new CommentsBlock("from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setName(new SFString("r_tarsal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_5")).setCenter(new float[] {-5.6085f ,0.003f ,4.6485f }).setUlimit(new MFFloat237().getArray()).setLlimit(new MFFloat238().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_5").setName(new SFString("r_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_5"))
                                .addChild(new Transform().setTranslation(new float[] {-5.6085f ,0.003f ,4.6485f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32239().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f240().getArray()))
                                    .addComments(new CommentsBlock("from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                .addChild(new HAnimSite("hanim_r_tarsal_middle_phalanx_5").setName(new SFString("r_tarsal_distal_phalanx_5_tip")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_5_tip"))
                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_tarsal_distal_phalanx_5_tip")))
                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5").setName(new SFString("r_tarsal_distal_interphalangeal_5")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_5")).setCenter(new float[] {-5.6495f ,0f ,4.9925f }).setUlimit(new MFFloat241().getArray()).setLlimit(new MFFloat242().getArray())))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName(new SFString("vl5")).setDEF(new SFString("hanim_vl5")).setCenter(new float[] {0.0028f ,1.0568f ,-0.0776f }).setUlimit(new MFFloat243().getArray()).setLlimit(new MFFloat244().getArray())
              .addChild(new HAnimSegment("hanim_vl5").setName(new SFString("l5")).setDEF(new SFString("hanim_l5"))
                .addChild(new Transform().setTranslation(new float[] {0.0028f ,1.0568f ,-0.0776f })
                  .addChild(new Transform()
                    .addComments(new CommentsBlock("Empty Transform"))
                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32245().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f246().getArray()))
                    .addComments(new CommentsBlock("from vl5 to vl4 vertices 2"))
                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
              .addChild(new HAnimJoint("hanim_vl5").setName(new SFString("vl4")).setDEF(new SFString("hanim_vl4")).setCenter(new float[] {0.0035f ,1.0925f ,-0.0787f }).setUlimit(new MFFloat247().getArray()).setLlimit(new MFFloat248().getArray())
                .addChild(new HAnimSegment("hanim_vl4").setName(new SFString("l4")).setDEF(new SFString("hanim_l4"))
                  .addChild(new Transform().setTranslation(new float[] {0.0035f ,1.0925f ,-0.0787f })
                    .addChild(new Transform()
                      .addComments(new CommentsBlock("Empty Transform"))
                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32249().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f250().getArray()))
                      .addComments(new CommentsBlock("from vl4 to vl3 vertices 2"))
                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                .addChild(new HAnimJoint("hanim_vl4").setName(new SFString("vl3")).setDEF(new SFString("hanim_vl3")).setCenter(new float[] {0.0041f ,1.1276f ,-0.0796f }).setUlimit(new MFFloat251().getArray()).setLlimit(new MFFloat252().getArray())
                  .addChild(new HAnimSegment("hanim_vl3").setName(new SFString("l3")).setDEF(new SFString("hanim_l3"))
                    .addChild(new Transform().setTranslation(new float[] {0.0041f ,1.1276f ,-0.0796f })
                      .addChild(new Transform()
                        .addComments(new CommentsBlock("Empty Transform"))
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32253().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f254().getArray()))
                        .addComments(new CommentsBlock("from vl3 to vl2 vertices 2"))
                        .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                    .addChild(new HAnimSite("hanim_l3").setName(new SFString("l_rib10_pt")).setDEF(new SFString("hanim_l_rib10_pt")).setTranslation(new float[] {0.0871f ,1.1925f ,0.0992f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_rib10_pt")))
                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                    .addChild(new HAnimSite("hanim_l3").setName(new SFString("r_rib10_pt")).setDEF(new SFString("hanim_r_rib10_pt")).setTranslation(new float[] {-0.0711f ,1.1941f ,0.1016f })
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_rib10_pt")))
                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                    .addChild(new HAnimSite("hanim_l3").setName(new SFString("spine_2_middle_back_pt")).setDEF(new SFString("hanim_spine_2_middle_back_pt"))
                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite spine_2_middle_back_pt")))
                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                  .addChild(new HAnimJoint("hanim_vl3").setName(new SFString("vl2")).setDEF(new SFString("hanim_vl2")).setCenter(new float[] {0.0045f ,1.1546f ,-0.08f }).setUlimit(new MFFloat255().getArray()).setLlimit(new MFFloat256().getArray())
                    .addChild(new HAnimSegment("hanim_vl2").setName(new SFString("l2")).setDEF(new SFString("hanim_l2"))
                      .addChild(new Transform().setTranslation(new float[] {0.0045f ,1.1546f ,-0.08f })
                        .addChild(new Transform()
                          .addComments(new CommentsBlock("Empty Transform"))
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32257().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f258().getArray()))
                          .addComments(new CommentsBlock("from vl2 to vl1 vertices 2"))
                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                    .addChild(new HAnimJoint("hanim_vl2").setName(new SFString("vl1")).setDEF(new SFString("hanim_vl1")).setCenter(new float[] {0.0048f ,1.1912f ,-0.0805f }).setUlimit(new MFFloat259().getArray()).setLlimit(new MFFloat260().getArray())
                      .addChild(new HAnimSegment("hanim_vl1").setName(new SFString("l1")).setDEF(new SFString("hanim_l1"))
                        .addChild(new Transform().setTranslation(new float[] {0.0048f ,1.1912f ,-0.0805f })
                          .addChild(new Transform()
                            .addComments(new CommentsBlock("Empty Transform"))
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32261().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f262().getArray()))
                            .addComments(new CommentsBlock("from vl1 to vt12 vertices 2"))
                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                      .addChild(new HAnimJoint("hanim_vl1").setName(new SFString("vt12")).setDEF(new SFString("hanim_vt12")).setCenter(new float[] {0.0051f ,1.2278f ,-0.0808f }).setUlimit(new MFFloat263().getArray()).setLlimit(new MFFloat264().getArray())
                        .addChild(new HAnimSegment("hanim_vt12").setName(new SFString("t12")).setDEF(new SFString("hanim_t12"))
                          .addChild(new Transform().setTranslation(new float[] {0.0051f ,1.2278f ,-0.0808f })
                            .addChild(new Transform()
                              .addComments(new CommentsBlock("Empty Transform"))
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32265().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f266().getArray()))
                              .addComments(new CommentsBlock("from vt12 to vt11 vertices 2"))
                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                        .addChild(new HAnimJoint("hanim_vt12").setName(new SFString("vt11")).setDEF(new SFString("hanim_vt11")).setCenter(new float[] {0.0053f ,1.2679f ,-0.081f }).setUlimit(new MFFloat267().getArray()).setLlimit(new MFFloat268().getArray())
                          .addChild(new HAnimSegment("hanim_vt11").setName(new SFString("t11")).setDEF(new SFString("hanim_t11"))
                            .addChild(new Transform().setTranslation(new float[] {0.0053f ,1.2679f ,-0.081f })
                              .addChild(new Transform()
                                .addComments(new CommentsBlock("Empty Transform"))
                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32269().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f270().getArray()))
                                .addComments(new CommentsBlock("from vt11 to vt10 vertices 2"))
                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                            .addChild(new HAnimSite("hanim_t11").setName(new SFString("substernale_pt")).setDEF(new SFString("hanim_substernale_pt")).setTranslation(new float[] {0.0085f ,1.2995f ,0.1147f })
                              .addChild(new TouchSensor().setDescription(new SFString("HAnimSite substernale_pt")))
                              .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                          .addChild(new HAnimJoint("hanim_vt11").setName(new SFString("vt10")).setDEF(new SFString("hanim_vt10")).setCenter(new float[] {0.0056f ,1.2848f ,-0.0822f }).setUlimit(new MFFloat271().getArray()).setLlimit(new MFFloat272().getArray())
                            .addChild(new HAnimSegment("hanim_vt10").setName(new SFString("t10")).setDEF(new SFString("hanim_t10"))
                              .addChild(new Transform().setTranslation(new float[] {0.0056f ,1.2848f ,-0.0822f })
                                .addChild(new Transform()
                                  .addComments(new CommentsBlock("Empty Transform"))
                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32273().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f274().getArray()))
                                  .addComments(new CommentsBlock("from vt10 to vt9 vertices 2"))
                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                              .addChild(new HAnimSite("hanim_t10").setName(new SFString("l_thelion_pt")).setDEF(new SFString("hanim_l_thelion_pt")).setTranslation(new float[] {0.0918f ,1.3382f ,0.1192f })
                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_thelion_pt")))
                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                              .addChild(new HAnimSite("hanim_t10").setName(new SFString("r_thelion_pt")).setDEF(new SFString("hanim_r_thelion_pt")).setTranslation(new float[] {-0.0736f ,1.3385f ,0.1217f })
                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_thelion_pt")))
                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                            .addChild(new HAnimJoint("hanim_vt10").setName(new SFString("vt9")).setDEF(new SFString("hanim_vt9")).setCenter(new float[] {0.0057f ,1.3126f ,-0.0838f }).setUlimit(new MFFloat275().getArray()).setLlimit(new MFFloat276().getArray())
                              .addChild(new HAnimSegment("hanim_vt9").setName(new SFString("t9")).setDEF(new SFString("hanim_t9"))
                                .addChild(new Transform().setTranslation(new float[] {0.0057f ,1.3126f ,-0.0838f })
                                  .addChild(new Transform()
                                    .addComments(new CommentsBlock("Empty Transform"))
                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32277().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f278().getArray()))
                                    .addComments(new CommentsBlock("from vt9 to vt8 vertices 2"))
                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                              .addChild(new HAnimJoint("hanim_vt9").setName(new SFString("vt8")).setDEF(new SFString("hanim_vt8")).setCenter(new float[] {0.0057f ,1.3382f ,-0.0845f }).setUlimit(new MFFloat279().getArray()).setLlimit(new MFFloat280().getArray())
                                .addChild(new HAnimSegment("hanim_vt8").setName(new SFString("t8")).setDEF(new SFString("hanim_t8"))
                                  .addChild(new Transform().setTranslation(new float[] {0.0057f ,1.3382f ,-0.0845f })
                                    .addChild(new Transform()
                                      .addComments(new CommentsBlock("Empty Transform"))
                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32281().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f282().getArray()))
                                      .addComments(new CommentsBlock("from vt8 to vt7 vertices 2"))
                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                .addChild(new HAnimJoint("hanim_vt8").setName(new SFString("vt7")).setDEF(new SFString("hanim_vt7")).setCenter(new float[] {0.0058f ,1.3625f ,-0.0833f }).setUlimit(new MFFloat283().getArray()).setLlimit(new MFFloat284().getArray())
                                  .addChild(new HAnimSegment("hanim_vt7").setName(new SFString("t7")).setDEF(new SFString("hanim_t7"))
                                    .addChild(new Transform().setTranslation(new float[] {0.0058f ,1.3625f ,-0.0833f })
                                      .addChild(new Transform()
                                        .addComments(new CommentsBlock("Empty Transform"))
                                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                    .addChild(new Shape()
                                      .setGeometry(new LineSet().setVertexCount(new MFInt32285().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f286().getArray()))
                                        .addComments(new CommentsBlock("from vt7 to vt6 vertices 2"))
                                        .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                    .addChild(new HAnimSite("hanim_t7").setName(new SFString("l_chest_midsagittal_plane_pt")).setDEF(new SFString("hanim_l_chest_midsagittal_plane_pt"))
                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_chest_midsagittal_plane_pt")))
                                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                    .addChild(new HAnimSite("hanim_t7").setName(new SFString("mesosternale_pt")).setDEF(new SFString("hanim_mesosternale_pt"))
                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite mesosternale_pt")))
                                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                    .addChild(new HAnimSite("hanim_t7").setName(new SFString("r_chest_midsagittal_plane_pt")).setDEF(new SFString("hanim_r_chest_midsagittal_plane_pt"))
                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_chest_midsagittal_plane_pt")))
                                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                    .addChild(new HAnimSite("hanim_t7").setName(new SFString("rear_center_midsagittal_plane_pt")).setDEF(new SFString("hanim_rear_center_midsagittal_plane_pt"))
                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite rear_center_midsagittal_plane_pt")))
                                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                  .addChild(new HAnimJoint("hanim_vt7").setName(new SFString("vt6")).setDEF(new SFString("hanim_vt6")).setCenter(new float[] {0.0059f ,1.3866f ,-0.08f }).setUlimit(new MFFloat287().getArray()).setLlimit(new MFFloat288().getArray())
                                    .addChild(new HAnimSegment("hanim_vt6").setName(new SFString("t6")).setDEF(new SFString("hanim_t6"))
                                      .addChild(new Transform().setTranslation(new float[] {0.0059f ,1.3866f ,-0.08f })
                                        .addChild(new Transform()
                                          .addComments(new CommentsBlock("Empty Transform"))
                                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                      .addChild(new Shape()
                                        .setGeometry(new LineSet().setVertexCount(new MFInt32289().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f290().getArray()))
                                          .addComments(new CommentsBlock("from vt6 to vt5 vertices 2"))
                                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                      .addChild(new HAnimSite("hanim_t6").setName(new SFString("spine_1_middle_back_pt")).setDEF(new SFString("hanim_spine_1_middle_back_pt"))
                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite spine_1_middle_back_pt")))
                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                    .addChild(new HAnimJoint("hanim_vt6").setName(new SFString("vt5")).setDEF(new SFString("hanim_vt5")).setCenter(new float[] {0.006f ,1.4102f ,-0.0745f }).setUlimit(new MFFloat291().getArray()).setLlimit(new MFFloat292().getArray())
                                      .addChild(new HAnimSegment("hanim_vt5").setName(new SFString("t5")).setDEF(new SFString("hanim_t5"))
                                        .addChild(new Transform().setTranslation(new float[] {0.006f ,1.4102f ,-0.0745f })
                                          .addChild(new Transform()
                                            .addComments(new CommentsBlock("Empty Transform"))
                                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                        .addChild(new Shape()
                                          .setGeometry(new LineSet().setVertexCount(new MFInt32293().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f294().getArray()))
                                            .addComments(new CommentsBlock("from vt5 to vt4 vertices 2"))
                                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                      .addChild(new HAnimJoint("hanim_vt5").setName(new SFString("vt4")).setDEF(new SFString("hanim_vt4")).setCenter(new float[] {0.0061f ,1.432f ,-0.0675f }).setUlimit(new MFFloat295().getArray()).setLlimit(new MFFloat296().getArray())
                                        .addChild(new HAnimSegment("hanim_vt4").setName(new SFString("t4")).setDEF(new SFString("hanim_t4"))
                                          .addChild(new Transform().setTranslation(new float[] {0.0061f ,1.432f ,-0.0675f })
                                            .addChild(new Transform()
                                              .addComments(new CommentsBlock("Empty Transform"))
                                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                          .addChild(new Shape()
                                            .setGeometry(new LineSet().setVertexCount(new MFInt32297().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f298().getArray()))
                                              .addComments(new CommentsBlock("from vt4 to vt3 vertices 2"))
                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                        .addChild(new HAnimJoint("hanim_vt4").setName(new SFString("vt3")).setDEF(new SFString("hanim_vt3")).setCenter(new float[] {0.0062f ,1.4583f ,-0.057f }).setUlimit(new MFFloat299().getArray()).setLlimit(new MFFloat300().getArray())
                                          .addChild(new HAnimSegment("hanim_vt3").setName(new SFString("t3")).setDEF(new SFString("hanim_t3"))
                                            .addChild(new Transform().setTranslation(new float[] {0.0062f ,1.4583f ,-0.057f })
                                              .addChild(new Transform()
                                                .addComments(new CommentsBlock("Empty Transform"))
                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                            .addChild(new Shape()
                                              .setGeometry(new LineSet().setVertexCount(new MFInt32301().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f302().getArray()))
                                                .addComments(new CommentsBlock("from vt3 to vt2 vertices 2"))
                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                          .addChild(new HAnimJoint("hanim_vt3").setName(new SFString("vt2")).setDEF(new SFString("hanim_vt2")).setCenter(new float[] {0.0063f ,1.4761f ,-0.0484f }).setUlimit(new MFFloat303().getArray()).setLlimit(new MFFloat304().getArray())
                                            .addChild(new HAnimSegment("hanim_vt2").setName(new SFString("t2")).setDEF(new SFString("hanim_t2"))
                                              .addChild(new Transform().setTranslation(new float[] {0.0063f ,1.4761f ,-0.0484f })
                                                .addChild(new Transform()
                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                              .addChild(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32305().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f306().getArray()))
                                                  .addComments(new CommentsBlock("from vt2 to vt1 vertices 2"))
                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                              .addChild(new HAnimSite("hanim_t2").setName(new SFString("cervicale_pt")).setDEF(new SFString("hanim_cervicale_pt")).setTranslation(new float[] {0.0064f ,1.52f ,-0.0815f })
                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite cervicale_pt")))
                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                              .addChild(new HAnimSite("hanim_t2").setName(new SFString("suprasternale_pt")).setDEF(new SFString("hanim_suprasternale_pt")).setTranslation(new float[] {0.0084f ,1.4714f ,0.0551f })
                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite suprasternale_pt")))
                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                            .addChild(new HAnimJoint("hanim_vt2").setName(new SFString("vt1")).setDEF(new SFString("hanim_vt1")).setCenter(new float[] {0.0065f ,1.4951f ,-0.0387f }).setUlimit(new MFFloat307().getArray()).setLlimit(new MFFloat308().getArray())
                                              .addChild(new HAnimSegment("hanim_vt1").setName(new SFString("t1")).setDEF(new SFString("hanim_t1"))
                                                .addChild(new Transform().setTranslation(new float[] {0.0065f ,1.4951f ,-0.0387f })
                                                  .addChild(new Transform()
                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32309().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f310().getArray()))
                                                    .addComments(new CommentsBlock("from vt1 to vc7 vertices 2"))
                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("l_neck_base_pt")).setDEF(new SFString("hanim_l_neck_base_pt")).setTranslation(new float[] {0.0646f ,1.5141f ,-0.038f })
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_neck_base_pt")))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("r_neck_base_pt")).setDEF(new SFString("hanim_r_neck_base_pt")).setTranslation(new float[] {-0.0419f ,1.5149f ,-0.022f })
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_neck_base_pt")))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32311().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f312().getArray()))
                                                    .addComments(new CommentsBlock("from vt1 to l_sternoclavicular vertices 2"))
                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("l_acromion_pt")).setDEF(new SFString("hanim_l_acromion_pt")).setTranslation(new float[] {0.2032f ,1.476f ,-0.049f })
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_acromion_pt")))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("l_axilla_distal_pt")).setDEF(new SFString("hanim_l_axilla_distal_pt")).setTranslation(new float[] {0.1706f ,1.4072f ,-0.0875f })
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_axilla_distal_pt")))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("l_axilla_posterior_folds_pt")).setDEF(new SFString("hanim_l_axilla_posterior_folds_pt"))
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_axilla_posterior_folds_pt")))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("l_axilla_proximal_pt")).setDEF(new SFString("hanim_l_axilla_proximal_pt")).setTranslation(new float[] {0.1777f ,1.4065f ,-0.0075f })
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_axilla_proximal_pt")))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("l_clavicale_pt")).setDEF(new SFString("hanim_l_clavicale_pt")).setTranslation(new float[] {0.0271f ,1.4943f ,0.0394f })
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_clavicale_pt")))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32313().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f314().getArray()))
                                                    .addComments(new CommentsBlock("from vt1 to r_sternoclavicular vertices 2"))
                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("r_acromion_pt")).setDEF(new SFString("hanim_r_acromion_pt")).setTranslation(new float[] {-0.1905f ,1.4791f ,-0.0431f })
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_acromion_pt")))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("r_axilla_distal_pt")).setDEF(new SFString("hanim_r_axilla_distal_pt")).setTranslation(new float[] {-0.1603f ,1.4098f ,-0.0826f })
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_axilla_distal_pt")))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("r_axilla_posterior_folds_pt")).setDEF(new SFString("hanim_r_axilla_posterior_folds_pt"))
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_axilla_posterior_folds_pt")))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("r_axilla_proximal_pt")).setDEF(new SFString("hanim_r_axilla_proximal_pt")).setTranslation(new float[] {-0.1626f ,1.4072f ,-0.0031f })
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_axilla_proximal_pt")))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                .addChild(new HAnimSite("hanim_t1").setName(new SFString("r_clavicale_pt")).setDEF(new SFString("hanim_r_clavicale_pt")).setTranslation(new float[] {-0.0115f ,1.4943f ,0.04f })
                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_clavicale_pt")))
                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName(new SFString("vc7")).setDEF(new SFString("hanim_vc7")).setCenter(new float[] {0.0066f ,1.5132f ,-0.0301f }).setUlimit(new MFFloat315().getArray()).setLlimit(new MFFloat316().getArray())
                                                .addChild(new HAnimSegment("hanim_vc7").setName(new SFString("c7")).setDEF(new SFString("hanim_c7"))
                                                  .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5132f ,-0.0301f })
                                                    .addChild(new Transform()
                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32317().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f318().getArray()))
                                                      .addComments(new CommentsBlock("from vc7 to vc6 vertices 2"))
                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                .addChild(new HAnimJoint("hanim_vc7").setName(new SFString("vc6")).setDEF(new SFString("hanim_vc6")).setCenter(new float[] {0.0066f ,1.5357f ,-0.0143f }).setUlimit(new MFFloat319().getArray()).setLlimit(new MFFloat320().getArray())
                                                  .addChild(new HAnimSegment("hanim_vc6").setName(new SFString("c6")).setDEF(new SFString("hanim_c6"))
                                                    .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5357f ,-0.0143f })
                                                      .addChild(new Transform()
                                                        .addComments(new CommentsBlock("Empty Transform"))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32321().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f322().getArray()))
                                                        .addComments(new CommentsBlock("from vc6 to vc5 vertices 2"))
                                                        .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                  .addChild(new HAnimJoint("hanim_vc6").setName(new SFString("vc5")).setDEF(new SFString("hanim_vc5")).setCenter(new float[] {0.0066f ,1.552f ,-0.0082f }).setUlimit(new MFFloat323().getArray()).setLlimit(new MFFloat324().getArray())
                                                    .addChild(new HAnimSegment("hanim_vc5").setName(new SFString("c5")).setDEF(new SFString("hanim_c5"))
                                                      .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.552f ,-0.0082f })
                                                        .addChild(new Transform()
                                                          .addComments(new CommentsBlock("Empty Transform"))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32325().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f326().getArray()))
                                                          .addComments(new CommentsBlock("from vc5 to vc4 vertices 2"))
                                                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                    .addChild(new HAnimJoint("hanim_vc5").setName(new SFString("vc4")).setDEF(new SFString("hanim_vc4")).setCenter(new float[] {0.0066f ,1.5662f ,-0.0084f }).setUlimit(new MFFloat327().getArray()).setLlimit(new MFFloat328().getArray())
                                                      .addChild(new HAnimSegment("hanim_vc4").setName(new SFString("c4")).setDEF(new SFString("hanim_c4"))
                                                        .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5662f ,-0.0084f })
                                                          .addChild(new Transform()
                                                            .addComments(new CommentsBlock("Empty Transform"))
                                                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32329().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f330().getArray()))
                                                            .addComments(new CommentsBlock("from vc4 to vc3 vertices 2"))
                                                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                      .addChild(new HAnimJoint("hanim_vc4").setName(new SFString("vc3")).setDEF(new SFString("hanim_vc3")).setCenter(new float[] {0.0066f ,1.58f ,-0.0103f }).setUlimit(new MFFloat331().getArray()).setLlimit(new MFFloat332().getArray())
                                                        .addChild(new HAnimSegment("hanim_vc3").setName(new SFString("c3")).setDEF(new SFString("hanim_c3"))
                                                          .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.58f ,-0.0103f })
                                                            .addChild(new Transform()
                                                              .addComments(new CommentsBlock("Empty Transform"))
                                                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32333().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f334().getArray()))
                                                              .addComments(new CommentsBlock("from vc3 to vc2 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimSite("hanim_c3").setName(new SFString("adams_apple_pt")).setDEF(new SFString("hanim_adams_apple_pt"))
                                                            .addChild(new TouchSensor().setDescription(new SFString("HAnimSite adams_apple_pt")))
                                                            .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                        .addChild(new HAnimJoint("hanim_vc3").setName(new SFString("vc2")).setDEF(new SFString("hanim_vc2")).setCenter(new float[] {0.0066f ,1.5928f ,-0.0103f }).setUlimit(new MFFloat335().getArray()).setLlimit(new MFFloat336().getArray())
                                                          .addChild(new HAnimSegment("hanim_vc2").setName(new SFString("c2")).setDEF(new SFString("hanim_c2"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5928f ,-0.0103f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32337().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f338().getArray()))
                                                                .addComments(new CommentsBlock("from vc2 to vc1 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                          .addChild(new HAnimJoint("hanim_vc2").setName(new SFString("vc1")).setDEF(new SFString("hanim_vc1")).setCenter(new float[] {0.0066f ,1.6144f ,-0.0034f }).setUlimit(new MFFloat339().getArray()).setLlimit(new MFFloat340().getArray())
                                                            .addChild(new HAnimSegment("hanim_vc1").setName(new SFString("c1")).setDEF(new SFString("hanim_c1"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.6144f ,-0.0034f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32341().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f342().getArray()))
                                                                  .addComments(new CommentsBlock("from vc1 to skullbase vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimSite("hanim_c1").setName(new SFString("glabella_pt")).setDEF(new SFString("hanim_glabella_pt"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite glabella_pt")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                              .addChild(new HAnimSite("hanim_c1").setName(new SFString("l_ectocanthus_pt")).setDEF(new SFString("hanim_l_ectocanthus_pt"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_ectocanthus_pt")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                              .addChild(new HAnimSite("hanim_c1").setName(new SFString("l_infraorbitale_pt")).setDEF(new SFString("hanim_l_infraorbitale_pt")).setTranslation(new float[] {0.0341f ,1.6171f ,0.0752f })
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_infraorbitale_pt")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                              .addChild(new HAnimSite("hanim_c1").setName(new SFString("l_tragion_pt")).setDEF(new SFString("hanim_l_tragion_pt")).setTranslation(new float[] {0.0739f ,1.6348f ,0.0282f })
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_tragion_pt")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                              .addChild(new HAnimSite("hanim_c1").setName(new SFString("nuchale_pt")).setDEF(new SFString("hanim_nuchale_pt")).setTranslation(new float[] {0.0039f ,1.5972f ,-0.0796f })
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite nuchale_pt")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                              .addChild(new HAnimSite("hanim_c1").setName(new SFString("opisthocranion_pt")).setDEF(new SFString("hanim_opisthocranion_pt"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite opisthocranion_pt")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                              .addChild(new HAnimSite("hanim_c1").setName(new SFString("r_ectocanthus_pt")).setDEF(new SFString("hanim_r_ectocanthus_pt"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_ectocanthus_pt")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                              .addChild(new HAnimSite("hanim_c1").setName(new SFString("r_infraorbitale_pt")).setDEF(new SFString("hanim_r_infraorbitale_pt")).setTranslation(new float[] {-0.0237f ,1.6171f ,0.0752f })
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_infraorbitale_pt")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                              .addChild(new HAnimSite("hanim_c1").setName(new SFString("r_tragion_pt")).setDEF(new SFString("hanim_r_tragion_pt")).setTranslation(new float[] {-0.0646f ,1.6347f ,0.0302f })
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_tragion_pt")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                              .addChild(new HAnimSite("hanim_c1").setName(new SFString("sellion_pt")).setDEF(new SFString("hanim_sellion_pt")).setTranslation(new float[] {0.0058f ,1.6316f ,0.0852f })
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite sellion_pt")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                              .addChild(new HAnimSite("hanim_c1").setName(new SFString("skull_vertex_pt")).setDEF(new SFString("hanim_skull_vertex_pt")).setTranslation(new float[] {0.005f ,1.7504f ,0.0055f })
                                                                .addChild(new TouchSensor().setDescription(new SFString("HAnimSite skull_vertex_pt")))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                            .addChild(new HAnimJoint("hanim_vc1").setName(new SFString("skullbase")).setDEF(new SFString("hanim_skullbase")).setCenter(new float[] {0.0044f ,1.6209f ,0.0236f }).setUlimit(new MFFloat343().getArray()).setLlimit(new MFFloat344().getArray())
                                                              .addChild(new HAnimSegment("hanim_skullbase").setName(new SFString("skull")).setDEF(new SFString("hanim_skull"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.0044f ,1.6209f ,0.0236f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32345().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f346().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to l_eyelid_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32347().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f348().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to r_eyelid_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32349().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f350().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to l_eyeball_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32351().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f352().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to r_eyeball_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32353().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f354().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to l_eyebrow_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32355().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f356().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to r_eyebrow_joint vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32357().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f358().getArray()))
                                                                    .addComments(new CommentsBlock("from skullbase to temporomandibular vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("l_gonion_pt")).setDEF(new SFString("hanim_l_gonion_pt")).setTranslation(new float[] {0.0631f ,1.553f ,0.033f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_gonion_pt")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("menton_pt")).setDEF(new SFString("hanim_menton_pt"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite menton_pt")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("r_gonion_pt")).setDEF(new SFString("hanim_r_gonion_pt")).setTranslation(new float[] {-0.052f ,1.5529f ,0.0347f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_gonion_pt")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                                .addChild(new HAnimSite("hanim_skull").setName(new SFString("supramenton_pt")).setDEF(new SFString("hanim_supramenton_pt")).setTranslation(new float[] {0.0061f ,1.541f ,0.0805f })
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite supramenton_pt")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("l_eyelid_joint")).setDEF(new SFString("hanim_l_eyelid_joint")).setCenter(new float[] {2.2365f ,1.87f ,1.9285f }).setUlimit(new MFFloat359().getArray()).setLlimit(new MFFloat360().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("r_eyelid_joint")).setDEF(new SFString("hanim_r_eyelid_joint")).setCenter(new float[] {-2.2535f ,1.87f ,1.9285f }).setUlimit(new MFFloat361().getArray()).setLlimit(new MFFloat362().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("l_eyeball_joint")).setDEF(new SFString("hanim_l_eyeball_joint")).setCenter(new float[] {2.1305f ,1.8444f ,4.1555f }).setUlimit(new MFFloat363().getArray()).setLlimit(new MFFloat364().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("r_eyeball_joint")).setDEF(new SFString("hanim_r_eyeball_joint")).setCenter(new float[] {-2.1475f ,1.8444f ,4.1555f }).setUlimit(new MFFloat365().getArray()).setLlimit(new MFFloat366().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("l_eyebrow_joint")).setDEF(new SFString("hanim_l_eyebrow_joint")).setCenter(new float[] {0.9581f ,1.8563f ,5.2175f }).setUlimit(new MFFloat367().getArray()).setLlimit(new MFFloat368().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("r_eyebrow_joint")).setDEF(new SFString("hanim_r_eyebrow_joint")).setCenter(new float[] {-0.9751f ,1.8563f ,5.2175f }).setUlimit(new MFFloat369().getArray()).setLlimit(new MFFloat370().getArray()))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("temporomandibular")).setDEF(new SFString("hanim_temporomandibular")).setCenter(new float[] {-0.0085f ,1.7229f ,1.148f }).setUlimit(new MFFloat371().getArray()).setLlimit(new MFFloat372().getArray()))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName(new SFString("l_sternoclavicular")).setDEF(new SFString("hanim_l_sternoclavicular")).setCenter(new float[] {0.082f ,1.4488f ,-0.0353f }).setUlimit(new MFFloat373().getArray()).setLlimit(new MFFloat374().getArray())
                                                .addChild(new HAnimSegment("hanim_l_sternoclavicular").setName(new SFString("l_clavicle")).setDEF(new SFString("hanim_l_clavicle"))
                                                  .addChild(new Transform().setTranslation(new float[] {0.082f ,1.4488f ,-0.0353f })
                                                    .addChild(new Transform()
                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32375().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f376().getArray()))
                                                      .addComments(new CommentsBlock("from l_sternoclavicular to l_acromioclavicular vertices 2"))
                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                .addChild(new HAnimJoint("hanim_l_sternoclavicular").setName(new SFString("l_acromioclavicular")).setDEF(new SFString("hanim_l_acromioclavicular")).setCenter(new float[] {0.0962f ,1.4269f ,-0.0424f }).setUlimit(new MFFloat377().getArray()).setLlimit(new MFFloat378().getArray())
                                                  .addChild(new HAnimSegment("hanim_l_acromioclavicular").setName(new SFString("l_scapula")).setDEF(new SFString("hanim_l_scapula"))
                                                    .addChild(new Transform().setTranslation(new float[] {0.0962f ,1.4269f ,-0.0424f })
                                                      .addChild(new Transform()
                                                        .addComments(new CommentsBlock("Empty Transform"))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32379().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f380().getArray()))
                                                        .addComments(new CommentsBlock("from l_acromioclavicular to l_shoulder vertices 2"))
                                                        .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                    .addChild(new HAnimSite("hanim_l_scapula").setName(new SFString("l_bideltoid_pt")).setDEF(new SFString("hanim_l_bideltoid_pt"))
                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_bideltoid_pt")))
                                                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                    .addChild(new HAnimSite("hanim_l_scapula").setName(new SFString("l_humeral_lateral_epicondyles_pt")).setDEF(new SFString("hanim_l_humeral_lateral_epicondyles_pt")).setTranslation(new float[] {0.228f ,1.1482f ,-0.11f })
                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_humeral_lateral_epicondyles_pt")))
                                                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                  .addChild(new HAnimJoint("hanim_l_acromioclavicular").setName(new SFString("l_shoulder")).setDEF(new SFString("hanim_l_shoulder")).setCenter(new float[] {0.2029f ,1.4376f ,-0.0387f }).setUlimit(new MFFloat381().getArray()).setLlimit(new MFFloat382().getArray())
                                                    .addChild(new HAnimSegment("hanim_l_shoulder").setName(new SFString("l_upperarm")).setDEF(new SFString("hanim_l_upperarm"))
                                                      .addChild(new Transform().setTranslation(new float[] {0.2029f ,1.4376f ,-0.0387f })
                                                        .addChild(new Transform()
                                                          .addComments(new CommentsBlock("Empty Transform"))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32383().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f384().getArray()))
                                                          .addComments(new CommentsBlock("from l_shoulder to l_elbow vertices 2"))
                                                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName(new SFString("l_humeral_medial_epicondyles_pt")).setDEF(new SFString("hanim_l_humeral_medial_epicondyles_pt")).setTranslation(new float[] {0.1735f ,1.1272f ,-0.1113f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_humeral_medial_epicondyles_pt")))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName(new SFString("l_olecranon_pt")).setDEF(new SFString("hanim_l_olecranon_pt")).setTranslation(new float[] {-0.1962f ,1.1375f ,-0.1123f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_olecranon_pt")))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName(new SFString("l_radial_styloid_pt")).setDEF(new SFString("hanim_l_radial_styloid_pt")).setTranslation(new float[] {0.1901f ,0.8645f ,-0.0415f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_radial_styloid_pt")))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setName(new SFString("l_radiale_pt")).setDEF(new SFString("hanim_l_radiale_pt")).setTranslation(new float[] {0.2182f ,1.1212f ,-0.1167f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_radiale_pt")))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                    .addChild(new HAnimJoint("hanim_l_shoulder").setName(new SFString("l_elbow")).setDEF(new SFString("hanim_l_elbow")).setCenter(new float[] {0.2014f ,1.1357f ,-0.0682f }).setUlimit(new MFFloat385().getArray()).setLlimit(new MFFloat386().getArray())
                                                      .addChild(new HAnimSegment("hanim_l_elbow").setName(new SFString("l_forearm")).setDEF(new SFString("hanim_l_forearm"))
                                                        .addChild(new Transform().setTranslation(new float[] {0.2014f ,1.1357f ,-0.0682f })
                                                          .addChild(new Transform()
                                                            .addComments(new CommentsBlock("Empty Transform"))
                                                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32387().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f388().getArray()))
                                                            .addComments(new CommentsBlock("from l_elbow to l_radiocarpal vertices 2"))
                                                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setName(new SFString("l_ulnar_styloid_pt")).setDEF(new SFString("hanim_l_ulnar_styloid_pt")).setTranslation(new float[] {-0.2142f ,0.8529f ,-0.0648f })
                                                          .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_ulnar_styloid_pt")))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                      .addChild(new HAnimJoint("hanim_l_elbow").setName(new SFString("l_radiocarpal")).setDEF(new SFString("hanim_l_radiocarpal")).setCenter(new float[] {0.1984f ,0.8663f ,-0.0583f }).setUlimit(new MFFloat389().getArray()).setLlimit(new MFFloat390().getArray())
                                                        .addChild(new HAnimSegment("hanim_l_radiocarpal").setName(new SFString("l_carpal")).setDEF(new SFString("hanim_l_carpal"))
                                                          .addChild(new Transform().setScale(new float[] {0.2f ,0.2f ,0.2f }).setTranslation(new float[] {0.2f ,0.85f ,-0.05f }).setRotation(new float[] {0f ,0f ,1f ,-3.14f })
                                                            .addComments(new CommentsBlock("Transform left hand"))
                                                            .addChild(new Transform().setRotation(new float[] {0f ,1f ,0f ,-1.57f })
                                                              .addComments(new CommentsBlock("Transform left hand"))
                                                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32391().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f392().getArray()))
                                                              .addComments(new CommentsBlock("from l_radiocarpal to l_midcarpal_1 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32393().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f394().getArray()))
                                                              .addComments(new CommentsBlock("from l_radiocarpal to l_midcarpal_2 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32395().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f396().getArray()))
                                                              .addComments(new CommentsBlock("from l_radiocarpal to l_midcarpal_3 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32397().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f398().getArray()))
                                                              .addComments(new CommentsBlock("from l_radiocarpal to l_midcarpal_4_5 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_1")).setDEF(new SFString("hanim_l_midcarpal_1")).setCenter(new float[] {8.0485f ,0.9213f ,1.3235f }).setUlimit(new MFFloat399().getArray()).setLlimit(new MFFloat400().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_1").setName(new SFString("l_trapezium")).setDEF(new SFString("hanim_l_trapezium"))
                                                            .addChild(new Transform().setTranslation(new float[] {8.0485f ,0.9213f ,1.3235f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32401().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f402().getArray()))
                                                                .addComments(new CommentsBlock("from l_midcarpal_1 to l_carpometacarpal_1 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_1").setName(new SFString("l_carpometacarpal_1")).setDEF(new SFString("hanim_l_carpometacarpal_1")).setCenter(new float[] {0.1924f ,0.8472f ,-0.0534f }).setUlimit(new MFFloat403().getArray()).setLlimit(new MFFloat404().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_1").setName(new SFString("l_metacarpal_1")).setDEF(new SFString("hanim_l_metacarpal_1"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1924f ,0.8472f ,-0.0534f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32405().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f406().getArray()))
                                                                  .addComments(new CommentsBlock("from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setName(new SFString("l_metacarpophalangeal_1")).setDEF(new SFString("hanim_l_metacarpophalangeal_1")).setCenter(new float[] {0.1951f ,0.8226f ,0.0246f }).setUlimit(new MFFloat407().getArray()).setLlimit(new MFFloat408().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_1").setName(new SFString("l_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_1"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1951f ,0.8226f ,0.0246f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32409().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f410().getArray()))
                                                                    .addComments(new CommentsBlock("from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new HAnimSite("hanim_l_carpal_proximal_phalanx_1").setName(new SFString("l_carpal_distal_phalanx_1_tip")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_1_tip"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_carpal_distal_phalanx_1_tip")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setName(new SFString("l_carpal_interphalangeal_1")).setDEF(new SFString("hanim_l_carpal_interphalangeal_1")).setCenter(new float[] {0.1955f ,0.8159f ,0.0464f }).setUlimit(new MFFloat411().getArray()).setLlimit(new MFFloat412().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_2")).setDEF(new SFString("hanim_l_midcarpal_2")).setCenter(new float[] {8.0485f ,0.9225f ,0.8386f }).setUlimit(new MFFloat413().getArray()).setLlimit(new MFFloat414().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_2").setName(new SFString("l_trapezoid")).setDEF(new SFString("hanim_l_trapezoid"))
                                                            .addChild(new Transform().setTranslation(new float[] {8.0485f ,0.9225f ,0.8386f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32415().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f416().getArray()))
                                                                .addComments(new CommentsBlock("from l_midcarpal_2 to l_carpometacarpal_2 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimSite("hanim_l_trapezoid").setName(new SFString("l_metacarpal_phalanx_2_pt")).setDEF(new SFString("hanim_l_metacarpal_phalanx_2_pt")).setTranslation(new float[] {0.2009f ,0.8139f ,-0.0237f })
                                                              .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_metacarpal_phalanx_2_pt")))
                                                              .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_2").setName(new SFString("l_carpometacarpal_2")).setDEF(new SFString("hanim_l_carpometacarpal_2")).setCenter(new float[] {0.1983f ,0.8024f ,-0.028f }).setUlimit(new MFFloat417().getArray()).setLlimit(new MFFloat418().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_2").setName(new SFString("l_metacarpal_2")).setDEF(new SFString("hanim_l_metacarpal_2"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.8024f ,-0.028f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32419().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f420().getArray()))
                                                                  .addComments(new CommentsBlock("from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setName(new SFString("l_metacarpophalangeal_2")).setDEF(new SFString("hanim_l_metacarpophalangeal_2")).setCenter(new float[] {0.1983f ,0.7815f ,-0.028f }).setUlimit(new MFFloat421().getArray()).setLlimit(new MFFloat422().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_2").setName(new SFString("l_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_2"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.7815f ,-0.028f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32423().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f424().getArray()))
                                                                    .addComments(new CommentsBlock("from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setName(new SFString("l_carpal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_2")).setCenter(new float[] {0.2017f ,0.7363f ,-0.0248f }).setUlimit(new MFFloat425().getArray()).setLlimit(new MFFloat426().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_2").setName(new SFString("l_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_2"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2017f ,0.7363f ,-0.0248f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32427().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f428().getArray()))
                                                                      .addComments(new CommentsBlock("from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_middle_phalanx_2").setName(new SFString("l_carpal_distal_phalanx_2_tip")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_2_tip"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_carpal_distal_phalanx_2_tip")))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_middle_phalanx_2").setName(new SFString("l_dactylion_pt")).setDEF(new SFString("hanim_l_dactylion_pt")).setTranslation(new float[] {0.2056f ,0.6743f ,-0.0482f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_dactylion_pt")))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setName(new SFString("l_carpal_distal_interphalangeal_2")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_2")).setCenter(new float[] {0.2028f ,0.7139f ,-0.0236f }).setUlimit(new MFFloat429().getArray()).setLlimit(new MFFloat430().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_3")).setDEF(new SFString("hanim_l_midcarpal_3")).setCenter(new float[] {8.0395f ,0.9246f ,0.2513f }).setUlimit(new MFFloat431().getArray()).setLlimit(new MFFloat432().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_3").setName(new SFString("l_capitate")).setDEF(new SFString("hanim_l_capitate"))
                                                            .addChild(new Transform().setTranslation(new float[] {8.0395f ,0.9246f ,0.2513f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32433().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f434().getArray()))
                                                                .addComments(new CommentsBlock("from l_midcarpal_3 to l_carpometacarpal_3 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimSite("hanim_l_capitate").setName(new SFString("l_metacarpal_phalanx_3_pt")).setDEF(new SFString("hanim_l_metacarpal_phalanx_3_pt"))
                                                              .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_metacarpal_phalanx_3_pt")))
                                                              .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_3").setName(new SFString("l_carpometacarpal_3")).setDEF(new SFString("hanim_l_carpometacarpal_3")).setCenter(new float[] {0.1987f ,0.8029f ,-0.053f }).setUlimit(new MFFloat435().getArray()).setLlimit(new MFFloat436().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_3").setName(new SFString("l_metacarpal_3")).setDEF(new SFString("hanim_l_metacarpal_3"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1987f ,0.8029f ,-0.053f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32437().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f438().getArray()))
                                                                  .addComments(new CommentsBlock("from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setName(new SFString("l_metacarpophalangeal_3")).setDEF(new SFString("hanim_l_metacarpophalangeal_3")).setCenter(new float[] {0.1987f ,0.7818f ,-0.053f }).setUlimit(new MFFloat439().getArray()).setLlimit(new MFFloat440().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_3").setName(new SFString("l_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_3"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1987f ,0.7818f ,-0.053f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32441().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f442().getArray()))
                                                                    .addComments(new CommentsBlock("from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setName(new SFString("l_carpal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_3")).setCenter(new float[] {0.2013f ,0.7273f ,-0.0503f }).setUlimit(new MFFloat443().getArray()).setLlimit(new MFFloat444().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_3").setName(new SFString("l_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_3"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2013f ,0.7273f ,-0.0503f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32445().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f446().getArray()))
                                                                      .addComments(new CommentsBlock("from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_middle_phalanx_3").setName(new SFString("l_carpal_distal_phalanx_3_tip")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_3_tip"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_carpal_distal_phalanx_3_tip")))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setName(new SFString("l_carpal_distal_interphalangeal_3")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_3")).setCenter(new float[] {0.2026f ,0.7011f ,-0.0494f }).setUlimit(new MFFloat447().getArray()).setLlimit(new MFFloat448().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_4_5")).setDEF(new SFString("hanim_l_midcarpal_4_5")).setCenter(new float[] {8.0395f ,0.921f ,-0.6795f }).setUlimit(new MFFloat449().getArray()).setLlimit(new MFFloat450().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_midcarpal_4_5").setName(new SFString("l_hamate")).setDEF(new SFString("hanim_l_hamate"))
                                                            .addChild(new Transform().setTranslation(new float[] {8.0395f ,0.921f ,-0.6795f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32451().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f452().getArray()))
                                                                .addComments(new CommentsBlock("from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32453().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f454().getArray()))
                                                                .addComments(new CommentsBlock("from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimSite("hanim_l_hamate").setName(new SFString("l_metacarpal_phalanx_5_pt")).setDEF(new SFString("hanim_l_metacarpal_phalanx_5_pt")).setTranslation(new float[] {0.1929f ,0.786f ,-0.1122f })
                                                              .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_metacarpal_phalanx_5_pt")))
                                                              .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName(new SFString("l_carpometacarpal_4")).setDEF(new SFString("hanim_l_carpometacarpal_4")).setCenter(new float[] {0.1956f ,0.8019f ,-0.0794f }).setUlimit(new MFFloat455().getArray()).setLlimit(new MFFloat456().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_4").setName(new SFString("l_metacarpal_4")).setDEF(new SFString("hanim_l_metacarpal_4"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1956f ,0.8019f ,-0.0794f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32457().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f458().getArray()))
                                                                  .addComments(new CommentsBlock("from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setName(new SFString("l_metacarpophalangeal_4")).setDEF(new SFString("hanim_l_metacarpophalangeal_4")).setCenter(new float[] {0.1956f ,0.7815f ,-0.0794f }).setUlimit(new MFFloat459().getArray()).setLlimit(new MFFloat460().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_4").setName(new SFString("l_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_4"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1956f ,0.7815f ,-0.0794f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32461().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f462().getArray()))
                                                                    .addComments(new CommentsBlock("from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setName(new SFString("l_carpal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_4")).setCenter(new float[] {0.1973f ,0.7287f ,-0.0777f }).setUlimit(new MFFloat463().getArray()).setLlimit(new MFFloat464().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_4").setName(new SFString("l_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_4"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1973f ,0.7287f ,-0.0777f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32465().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f466().getArray()))
                                                                      .addComments(new CommentsBlock("from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_middle_phalanx_4").setName(new SFString("l_carpal_distal_phalanx_4_tip")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_4_tip"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_carpal_distal_phalanx_4_tip")))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setName(new SFString("l_carpal_distal_interphalangeal_4")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_4")).setCenter(new float[] {0.1983f ,0.7045f ,-0.0767f }).setUlimit(new MFFloat467().getArray()).setLlimit(new MFFloat468().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName(new SFString("l_carpometacarpal_5")).setDEF(new SFString("hanim_l_carpometacarpal_5")).setCenter(new float[] {0.1925f ,0.8066f ,-0.1036f }).setUlimit(new MFFloat469().getArray()).setLlimit(new MFFloat470().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_5").setName(new SFString("l_metacarpal_5")).setDEF(new SFString("hanim_l_metacarpal_5"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1925f ,0.8066f ,-0.1036f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32471().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f472().getArray()))
                                                                  .addComments(new CommentsBlock("from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setName(new SFString("l_metacarpophalangeal_5")).setDEF(new SFString("hanim_l_metacarpophalangeal_5")).setCenter(new float[] {0.1925f ,0.7866f ,-0.1036f }).setUlimit(new MFFloat473().getArray()).setLlimit(new MFFloat474().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_5").setName(new SFString("l_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_5"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1925f ,0.7866f ,-0.1036f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32475().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f476().getArray()))
                                                                    .addComments(new CommentsBlock("from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setName(new SFString("l_carpal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_5")).setCenter(new float[] {0.1938f ,0.7452f ,-0.1024f }).setUlimit(new MFFloat477().getArray()).setLlimit(new MFFloat478().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_5").setName(new SFString("l_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_5"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1938f ,0.7452f ,-0.1024f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32479().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f480().getArray()))
                                                                      .addComments(new CommentsBlock("from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_middle_phalanx_5").setName(new SFString("l_carpal_distal_phalanx_5_tip")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_5_tip"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite l_carpal_distal_phalanx_5_tip")))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setName(new SFString("l_carpal_distal_interphalangeal_5")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_5")).setCenter(new float[] {0.1948f ,0.7277f ,-0.1017f }).setUlimit(new MFFloat481().getArray()).setLlimit(new MFFloat482().getArray())))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setName(new SFString("r_sternoclavicular")).setDEF(new SFString("hanim_r_sternoclavicular")).setCenter(new float[] {-0.0694f ,1.46f ,-0.033f }).setUlimit(new MFFloat483().getArray()).setLlimit(new MFFloat484().getArray())
                                                .addChild(new HAnimSegment("hanim_r_sternoclavicular").setName(new SFString("r_clavicle")).setDEF(new SFString("hanim_r_clavicle"))
                                                  .addChild(new Transform().setTranslation(new float[] {-0.0694f ,1.46f ,-0.033f })
                                                    .addChild(new Transform()
                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32485().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f486().getArray()))
                                                      .addComments(new CommentsBlock("from r_sternoclavicular to r_acromioclavicular vertices 2"))
                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                .addChild(new HAnimJoint("hanim_r_sternoclavicular").setName(new SFString("r_acromioclavicular")).setDEF(new SFString("hanim_r_acromioclavicular")).setCenter(new float[] {-0.0836f ,1.4281f ,-0.0401f }).setUlimit(new MFFloat487().getArray()).setLlimit(new MFFloat488().getArray())
                                                  .addChild(new HAnimSegment("hanim_r_acromioclavicular").setName(new SFString("r_scapula")).setDEF(new SFString("hanim_r_scapula"))
                                                    .addChild(new Transform().setTranslation(new float[] {-0.0836f ,1.4281f ,-0.0401f })
                                                      .addChild(new Transform()
                                                        .addComments(new CommentsBlock("Empty Transform"))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32489().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f490().getArray()))
                                                        .addComments(new CommentsBlock("from r_acromioclavicular to r_shoulder vertices 2"))
                                                        .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                    .addChild(new HAnimSite("hanim_r_scapula").setName(new SFString("r_bideltoid_pt")).setDEF(new SFString("hanim_r_bideltoid_pt"))
                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_bideltoid_pt")))
                                                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                    .addChild(new HAnimSite("hanim_r_scapula").setName(new SFString("r_humeral_lateral_epicondyles_pt")).setDEF(new SFString("hanim_r_humeral_lateral_epicondyles_pt")).setTranslation(new float[] {-0.2224f ,1.1517f ,-0.1033f })
                                                      .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_humeral_lateral_epicondyles_pt")))
                                                      .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                  .addChild(new HAnimJoint("hanim_r_acromioclavicular").setName(new SFString("r_shoulder")).setDEF(new SFString("hanim_r_shoulder")).setCenter(new float[] {-0.1907f ,1.4407f ,-0.0325f }).setUlimit(new MFFloat491().getArray()).setLlimit(new MFFloat492().getArray())
                                                    .addChild(new HAnimSegment("hanim_r_shoulder").setName(new SFString("r_upperarm")).setDEF(new SFString("hanim_r_upperarm"))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.1907f ,1.4407f ,-0.0325f })
                                                        .addChild(new Transform()
                                                          .addComments(new CommentsBlock("Empty Transform"))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32493().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f494().getArray()))
                                                          .addComments(new CommentsBlock("from r_shoulder to r_elbow vertices 2"))
                                                          .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName(new SFString("r_humeral_medial_epicondyles_pt")).setDEF(new SFString("hanim_r_humeral_medial_epicondyles_pt")).setTranslation(new float[] {-0.168f ,1.1298f ,-0.1062f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_humeral_medial_epicondyles_pt")))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName(new SFString("r_olecranon_pt")).setDEF(new SFString("hanim_r_olecranon_pt")).setTranslation(new float[] {-0.1907f ,1.1405f ,-0.1065f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_olecranon_pt")))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName(new SFString("r_radial_styloid_pt")).setDEF(new SFString("hanim_r_radial_styloid_pt")).setTranslation(new float[] {-0.1884f ,0.8676f ,-0.036f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_radial_styloid_pt")))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setName(new SFString("r_radiale_pt")).setDEF(new SFString("hanim_r_radiale_pt")).setTranslation(new float[] {-0.213f ,1.1305f ,-0.1091f })
                                                        .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_radiale_pt")))
                                                        .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                    .addChild(new HAnimJoint("hanim_r_shoulder").setName(new SFString("r_elbow")).setDEF(new SFString("hanim_r_elbow")).setCenter(new float[] {-0.1949f ,1.1388f ,-0.062f }).setUlimit(new MFFloat495().getArray()).setLlimit(new MFFloat496().getArray())
                                                      .addChild(new HAnimSegment("hanim_r_elbow").setName(new SFString("r_forearm")).setDEF(new SFString("hanim_r_forearm"))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.1949f ,1.1388f ,-0.062f })
                                                          .addChild(new Transform()
                                                            .addComments(new CommentsBlock("Empty Transform"))
                                                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32497().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f498().getArray()))
                                                            .addComments(new CommentsBlock("from r_elbow to r_radiocarpal vertices 2"))
                                                            .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setName(new SFString("r_ulnar_styloid_pt")).setDEF(new SFString("hanim_r_ulnar_styloid_pt")).setTranslation(new float[] {-0.2117f ,0.8562f ,-0.0584f })
                                                          .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_ulnar_styloid_pt")))
                                                          .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                      .addChild(new HAnimJoint("hanim_r_elbow").setName(new SFString("r_radiocarpal")).setDEF(new SFString("hanim_r_radiocarpal")).setCenter(new float[] {-0.1959f ,0.8694f ,-0.0521f }).setUlimit(new MFFloat499().getArray()).setLlimit(new MFFloat500().getArray())
                                                        .addChild(new HAnimSegment("hanim_r_radiocarpal").setName(new SFString("r_carpal")).setDEF(new SFString("hanim_r_carpal"))
                                                          .addChild(new Transform().setScale(new float[] {0.2f ,0.2f ,0.2f }).setTranslation(new float[] {-0.2f ,0.85f ,-0.05f }).setRotation(new float[] {0f ,0f ,1f ,-3.14f })
                                                            .addComments(new CommentsBlock("Transform right hand"))
                                                            .addChild(new Transform().setRotation(new float[] {0f ,1f ,0f ,1.57f })
                                                              .addComments(new CommentsBlock("Transform right hand"))
                                                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32501().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f502().getArray()))
                                                              .addComments(new CommentsBlock("from r_radiocarpal to r_midcarpal_1 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32503().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f504().getArray()))
                                                              .addComments(new CommentsBlock("from r_radiocarpal to r_midcarpal_2 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32505().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f506().getArray()))
                                                              .addComments(new CommentsBlock("from r_radiocarpal to r_midcarpal_3 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32507().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f508().getArray()))
                                                              .addComments(new CommentsBlock("from r_radiocarpal to r_midcarpal_4_5 vertices 2"))
                                                              .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_1")).setDEF(new SFString("hanim_r_midcarpal_1")).setCenter(new float[] {-8.0515f ,0.9213f ,1.3235f }).setUlimit(new MFFloat509().getArray()).setLlimit(new MFFloat510().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_1").setName(new SFString("r_trapezium")).setDEF(new SFString("hanim_r_trapezium"))
                                                            .addChild(new Transform().setTranslation(new float[] {-8.0515f ,0.9213f ,1.3235f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32511().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f512().getArray()))
                                                                .addComments(new CommentsBlock("from r_midcarpal_1 to r_carpometacarpal_1 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_1").setName(new SFString("r_carpometacarpal_1")).setDEF(new SFString("hanim_r_carpometacarpal_1")).setCenter(new float[] {-0.1899f ,0.8502f ,-0.0473f }).setUlimit(new MFFloat513().getArray()).setLlimit(new MFFloat514().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_1").setName(new SFString("r_metacarpal_1")).setDEF(new SFString("hanim_r_metacarpal_1"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1899f ,0.8502f ,-0.0473f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32515().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f516().getArray()))
                                                                  .addComments(new CommentsBlock("from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setName(new SFString("r_metacarpophalangeal_1")).setDEF(new SFString("hanim_r_metacarpophalangeal_1")).setCenter(new float[] {-0.1874f ,0.8256f ,0.0306f }).setUlimit(new MFFloat517().getArray()).setLlimit(new MFFloat518().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_1").setName(new SFString("r_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_1"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1874f ,0.8256f ,0.0306f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32519().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f520().getArray()))
                                                                    .addComments(new CommentsBlock("from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                .addChild(new HAnimSite("hanim_r_carpal_proximal_phalanx_1").setName(new SFString("r_carpal_distal_phalanx_1_tip")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_1_tip"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_carpal_distal_phalanx_1_tip")))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setName(new SFString("r_carpal_interphalangeal_1")).setDEF(new SFString("hanim_r_carpal_interphalangeal_1")).setCenter(new float[] {-0.1864f ,0.819f ,0.0506f }).setUlimit(new MFFloat521().getArray()).setLlimit(new MFFloat522().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_2")).setDEF(new SFString("hanim_r_midcarpal_2")).setCenter(new float[] {-8.0515f ,0.9225f ,0.8386f }).setUlimit(new MFFloat523().getArray()).setLlimit(new MFFloat524().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_2").setName(new SFString("r_trapezoid")).setDEF(new SFString("hanim_r_trapezoid"))
                                                            .addChild(new Transform().setTranslation(new float[] {-8.0515f ,0.9225f ,0.8386f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32525().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f526().getArray()))
                                                                .addComments(new CommentsBlock("from r_midcarpal_2 to r_carpometacarpal_2 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimSite("hanim_r_trapezoid").setName(new SFString("r_metacarpal_phalanx_2_pt")).setDEF(new SFString("hanim_r_metacarpal_phalanx_2_pt")).setTranslation(new float[] {-0.1977f ,0.8169f ,-0.0177f })
                                                              .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_metacarpal_phalanx_2_pt")))
                                                              .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_2").setName(new SFString("r_carpometacarpal_2")).setDEF(new SFString("hanim_r_carpometacarpal_2")).setCenter(new float[] {-0.1961f ,0.8055f ,-0.0218f }).setUlimit(new MFFloat527().getArray()).setLlimit(new MFFloat528().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_2").setName(new SFString("r_metacarpal_2")).setDEF(new SFString("hanim_r_metacarpal_2"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1961f ,0.8055f ,-0.0218f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32529().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f530().getArray()))
                                                                  .addComments(new CommentsBlock("from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setName(new SFString("r_metacarpophalangeal_2")).setDEF(new SFString("hanim_r_metacarpophalangeal_2")).setCenter(new float[] {-0.1961f ,0.7846f ,-0.0218f }).setUlimit(new MFFloat531().getArray()).setLlimit(new MFFloat532().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_2").setName(new SFString("r_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_2"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1961f ,0.7846f ,-0.0218f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32533().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f534().getArray()))
                                                                    .addComments(new CommentsBlock("from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setName(new SFString("r_carpal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_2")).setCenter(new float[] {-0.1954f ,0.7393f ,-0.0185f }).setUlimit(new MFFloat535().getArray()).setLlimit(new MFFloat536().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_2").setName(new SFString("r_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_2"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1954f ,0.7393f ,-0.0185f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32537().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f538().getArray()))
                                                                      .addComments(new CommentsBlock("from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_middle_phalanx_2").setName(new SFString("r_carpal_distal_phalanx_2_tip")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_2_tip"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_carpal_distal_phalanx_2_tip")))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape"))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_middle_phalanx_2").setName(new SFString("r_dactylion_pt")).setDEF(new SFString("hanim_r_dactylion_pt")).setTranslation(new float[] {-0.1941f ,0.6772f ,-0.0423f })
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_dactylion_pt")))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setName(new SFString("r_carpal_distal_interphalangeal_2")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_2")).setCenter(new float[] {-0.1945f ,0.7169f ,-0.0173f }).setUlimit(new MFFloat539().getArray()).setLlimit(new MFFloat540().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_3")).setDEF(new SFString("hanim_r_midcarpal_3")).setCenter(new float[] {-8.0405f ,0.9246f ,0.2513f }).setUlimit(new MFFloat541().getArray()).setLlimit(new MFFloat542().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_3").setName(new SFString("r_capitate")).setDEF(new SFString("hanim_r_capitate"))
                                                            .addChild(new Transform().setTranslation(new float[] {-8.0405f ,0.9246f ,0.2513f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32543().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f544().getArray()))
                                                                .addComments(new CommentsBlock("from r_midcarpal_3 to r_carpometacarpal_3 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimSite("hanim_r_capitate").setName(new SFString("r_metacarpal_phalanx_3_pt")).setDEF(new SFString("hanim_r_metacarpal_phalanx_3_pt"))
                                                              .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_metacarpal_phalanx_3_pt")))
                                                              .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_3").setName(new SFString("r_carpometacarpal_3")).setDEF(new SFString("hanim_r_carpometacarpal_3")).setCenter(new float[] {-0.1972f ,0.806f ,-0.0468f }).setUlimit(new MFFloat545().getArray()).setLlimit(new MFFloat546().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_3").setName(new SFString("r_metacarpal_3")).setDEF(new SFString("hanim_r_metacarpal_3"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1972f ,0.806f ,-0.0468f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32547().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f548().getArray()))
                                                                  .addComments(new CommentsBlock("from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setName(new SFString("r_metacarpophalangeal_3")).setDEF(new SFString("hanim_r_metacarpophalangeal_3")).setCenter(new float[] {-0.1972f ,0.7849f ,-0.0468f }).setUlimit(new MFFloat549().getArray()).setLlimit(new MFFloat550().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_3").setName(new SFString("r_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_3"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1972f ,0.7849f ,-0.0468f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32551().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f552().getArray()))
                                                                    .addComments(new CommentsBlock("from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setName(new SFString("r_carpal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_3")).setCenter(new float[] {-0.195f ,0.7304f ,-0.0441f }).setUlimit(new MFFloat553().getArray()).setLlimit(new MFFloat554().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_3").setName(new SFString("r_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_3"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.195f ,0.7304f ,-0.0441f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32555().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f556().getArray()))
                                                                      .addComments(new CommentsBlock("from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_middle_phalanx_3").setName(new SFString("r_carpal_distal_phalanx_3_tip")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_3_tip"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_carpal_distal_phalanx_3_tip")))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setName(new SFString("r_carpal_distal_interphalangeal_3")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_3")).setCenter(new float[] {-0.1939f ,0.7042f ,-0.0432f }).setUlimit(new MFFloat557().getArray()).setLlimit(new MFFloat558().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_4_5")).setDEF(new SFString("hanim_r_midcarpal_4_5")).setCenter(new float[] {-8.0405f ,0.921f ,-0.6795f }).setUlimit(new MFFloat559().getArray()).setLlimit(new MFFloat560().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_midcarpal_4_5").setName(new SFString("r_hamate")).setDEF(new SFString("hanim_r_hamate"))
                                                            .addChild(new Transform().setTranslation(new float[] {-8.0405f ,0.921f ,-0.6795f })
                                                              .addChild(new Transform()
                                                                .addComments(new CommentsBlock("Empty Transform"))
                                                                .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32561().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f562().getArray()))
                                                                .addComments(new CommentsBlock("from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32563().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f564().getArray()))
                                                                .addComments(new CommentsBlock("from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2"))
                                                                .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimSite("hanim_r_hamate").setName(new SFString("r_metacarpal_phalanx_5_pt")).setDEF(new SFString("hanim_r_metacarpal_phalanx_5_pt")).setTranslation(new float[] {-0.1929f ,0.789f ,-0.1064f })
                                                              .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_metacarpal_phalanx_5_pt")))
                                                              .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName(new SFString("r_carpometacarpal_4")).setDEF(new SFString("hanim_r_carpometacarpal_4")).setCenter(new float[] {-0.1951f ,0.8049f ,-0.0732f }).setUlimit(new MFFloat565().getArray()).setLlimit(new MFFloat566().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_4").setName(new SFString("r_metacarpal_4")).setDEF(new SFString("hanim_r_metacarpal_4"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1951f ,0.8049f ,-0.0732f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32567().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f568().getArray()))
                                                                  .addComments(new CommentsBlock("from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setName(new SFString("r_metacarpophalangeal_4")).setDEF(new SFString("hanim_r_metacarpophalangeal_4")).setCenter(new float[] {-0.1951f ,0.7845f ,-0.0732f }).setUlimit(new MFFloat569().getArray()).setLlimit(new MFFloat570().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_4").setName(new SFString("r_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_4"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1951f ,0.7845f ,-0.0732f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32571().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f572().getArray()))
                                                                    .addComments(new CommentsBlock("from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setName(new SFString("r_carpal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_4")).setCenter(new float[] {-0.192f ,0.7318f ,-0.0716f }).setUlimit(new MFFloat573().getArray()).setLlimit(new MFFloat574().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_4").setName(new SFString("r_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_4"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.192f ,0.7318f ,-0.0716f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32575().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f576().getArray()))
                                                                      .addComments(new CommentsBlock("from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_middle_phalanx_4").setName(new SFString("r_carpal_distal_phalanx_4_tip")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_4_tip"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_carpal_distal_phalanx_4_tip")))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setName(new SFString("r_carpal_distal_interphalangeal_4")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_4")).setCenter(new float[] {-0.1908f ,0.7077f ,-0.0706f }).setUlimit(new MFFloat577().getArray()).setLlimit(new MFFloat578().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName(new SFString("r_carpometacarpal_5")).setDEF(new SFString("hanim_r_carpometacarpal_5")).setCenter(new float[] {-0.1926f ,0.8096f ,-0.0975f }).setUlimit(new MFFloat579().getArray()).setLlimit(new MFFloat580().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_5").setName(new SFString("r_metacarpal_5")).setDEF(new SFString("hanim_r_metacarpal_5"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1926f ,0.8096f ,-0.0975f })
                                                                .addChild(new Transform()
                                                                  .addComments(new CommentsBlock("Empty Transform"))
                                                                  .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32581().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f582().getArray()))
                                                                  .addComments(new CommentsBlock("from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2"))
                                                                  .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setName(new SFString("r_metacarpophalangeal_5")).setDEF(new SFString("hanim_r_metacarpophalangeal_5")).setCenter(new float[] {-0.1926f ,0.7896f ,-0.0975f }).setUlimit(new MFFloat583().getArray()).setLlimit(new MFFloat584().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_5").setName(new SFString("r_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_5"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1926f ,0.7896f ,-0.0975f })
                                                                  .addChild(new Transform()
                                                                    .addComments(new CommentsBlock("Empty Transform"))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32585().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f586().getArray()))
                                                                    .addComments(new CommentsBlock("from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2"))
                                                                    .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA"))))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setName(new SFString("r_carpal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_5")).setCenter(new float[] {-0.1902f ,0.7483f ,-0.0963f }).setUlimit(new MFFloat587().getArray()).setLlimit(new MFFloat588().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_5").setName(new SFString("r_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_5"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1902f ,0.7483f ,-0.0963f })
                                                                    .addChild(new Transform()
                                                                      .addComments(new CommentsBlock("Empty Transform"))
                                                                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape")))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32589().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f590().getArray()))
                                                                      .addComments(new CommentsBlock("from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2"))
                                                                      .setColor(new ColorRGBA().setUSE(new SFString("HAnimSegmentLineColorRGBA")))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_middle_phalanx_5").setName(new SFString("r_carpal_distal_phalanx_5_tip")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_5_tip"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("HAnimSite r_carpal_distal_phalanx_5_tip")))
                                                                    .addChild(new Shape().setUSE(new SFString("HAnimSiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setName(new SFString("r_carpal_distal_interphalangeal_5")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_5")).setCenter(new float[] {-0.1908f ,0.754f ,-0.096f }).setUlimit(new MFFloat591().getArray()).setLlimit(new MFFloat592().getArray())))))))))))))))))))))))))))))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_humanoid_root")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_acromioclavicular")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_calcaneocuboid")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_distal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_distal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_distal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_distal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_interphalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_proximal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_proximal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_proximal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpal_proximal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpometacarpal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpometacarpal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpometacarpal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpometacarpal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_carpometacarpal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_cuneonavicular_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_cuneonavicular_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_cuneonavicular_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_elbow")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_eyeball_joint")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_eyebrow_joint")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_eyelid_joint")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_hip")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_knee")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metacarpophalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metacarpophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metacarpophalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metacarpophalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metacarpophalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metatarsophalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metatarsophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metatarsophalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metatarsophalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_metatarsophalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_midcarpal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_midcarpal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_midcarpal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_midcarpal_4_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_radiocarpal")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_shoulder")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_sternoclavicular")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_talocalcaneonavicular")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_talocrural")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_distal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_distal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_distal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_distal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_interphalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_proximal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_proximal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_proximal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsal_proximal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsometatarsal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsometatarsal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsometatarsal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsometatarsal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_tarsometatarsal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_l_transversetarsal")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_acromioclavicular")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_calcaneocuboid")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_interphalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpometacarpal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpometacarpal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpometacarpal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpometacarpal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_carpometacarpal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_cuneonavicular_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_cuneonavicular_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_cuneonavicular_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_elbow")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_eyeball_joint")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_eyebrow_joint")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_eyelid_joint")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_hip")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_knee")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metacarpophalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metacarpophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metacarpophalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metacarpophalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metacarpophalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metatarsophalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metatarsophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metatarsophalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metatarsophalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_metatarsophalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_midcarpal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_midcarpal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_midcarpal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_midcarpal_4_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_radiocarpal")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_shoulder")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_sternoclavicular")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_talocalcaneonavicular")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_talocrural")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_interphalangeal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsometatarsal_1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsometatarsal_2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsometatarsal_3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsometatarsal_4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_tarsometatarsal_5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_r_transversetarsal")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_sacroiliac")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_skullbase")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_temporomandibular")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vc1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vc2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vc3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vc4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vc5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vc6")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vc7")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vl1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vl2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vl3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vl4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vl5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt1")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt10")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt11")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt12")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt2")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt3")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt4")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt5")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt6")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt7")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt8")))
          .addJoints(new HAnimJoint("hanim_HAnim").setUSE(new SFString("hanim_vt9")))));
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0.1f ,0f ,0f ,0f ,0.1f ,0f ,0f ,0f ,0.1f });
  }
}
private class MFColor3 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,0f ,0f ,0f ,0.6f ,0f ,0f ,0f ,1f });
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA5 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f6 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f ,0f ,0f ,0.05f ,0f ,0f });
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColorRGBA8 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f9 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"humanoidVersion=2.0"});
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
private class MFInt3213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.824f ,0.0277f ,0f ,0.9149f ,0.0016f });
  }
}
private class MFInt3215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f16 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.824f ,0.0277f ,0.0028f ,1.0568f ,-0.0776f });
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
private class MFInt3219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f20 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9149f ,0.0016f ,0.0961f ,0.9124f ,-0.0001f });
  }
}
private class MFInt3221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f22 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9149f ,0.0016f ,-0.095f ,0.9171f ,0.0029f });
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
private class MFInt3225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f ,0.9124f ,-0.0001f ,0.104f ,0.4867f ,0.0308f });
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
private class MFInt3229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.104f ,0.4867f ,0.0308f ,0.1101f ,0.0656f ,-0.0736f });
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
private class MFInt3233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f34 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f ,0.0656f ,-0.0736f ,3.4715f ,0.0374f ,0.6807f });
  }
}
private class MFInt3235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f36 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f ,0.0656f ,-0.0736f ,3.9515f ,0.0653f ,-0.6895f });
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
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f40 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.4715f ,0.0374f ,0.6807f ,2.9855f ,0.0311f ,1.2819f });
  }
}
private class MFInt3241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f42 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.4715f ,0.0374f ,0.6807f ,3.6105f ,0.033f ,1.4168f });
  }
}
private class MFInt3243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f44 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.4715f ,0.0374f ,0.6807f ,4.1235f ,0.0328f ,1.3453f });
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
private class MFInt3247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f48 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.9855f ,0.0311f ,1.2819f ,2.8635f ,0.0194f ,2.4285f });
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
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f52 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.8635f ,0.0194f ,2.4285f ,2.7525f ,0.0077f ,4.6255f });
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
private class MFInt3255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f56 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.7525f ,0.0077f ,4.6255f ,2.7525f ,0.0077f ,4.6255f });
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
private class MFInt3261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f62 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.6105f ,0.033f ,1.4168f ,3.5555f ,0.0232f ,2.2895f });
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
private class MFInt3265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f66 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.5555f ,0.0232f ,2.2895f ,3.6595f ,0.0085f ,4.8125f });
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
private class MFInt3269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f70 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.6595f ,0.0085f ,4.8125f ,3.7385f ,0.0054f ,5.5315f });
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
private class MFInt3273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f74 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.7385f ,0.0054f ,5.5315f ,3.7385f ,0.0017f ,5.9505f });
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
private class MFInt3279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f80 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.1235f ,0.0328f ,1.3453f ,3.7385f ,0.0017f ,5.9505f });
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
private class MFInt3283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f84 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.2795f ,0.0086f ,4.7055f });
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
private class MFInt3287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f88 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.2795f ,0.0086f ,4.7055f ,4.3855f ,0.0044f ,5.3745f });
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
private class MFInt3291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f92 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.3855f ,0.0044f ,5.3745f ,4.4545f ,0.0017f ,5.7845f });
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
private class MFInt3297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f98 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.9515f ,0.0653f ,-0.6895f ,4.9085f ,0.0353f ,0.5574f });
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
private class MFInt32101 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f102 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.9085f ,0.0353f ,0.5574f ,4.7245f ,0.0211f ,2.1725f });
  }
}
private class MFInt32103 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f104 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.9085f ,0.0353f ,0.5574f ,5.3615f ,0.0164f ,2.0085f });
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
private class MFInt32107 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f108 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.7245f ,0.0211f ,2.1725f ,4.8745f ,0.0076f ,4.5165f });
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
private class MFInt32111 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f112 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.8745f ,0.0076f ,4.5165f ,5.0655f ,0.0049f ,5.1895f });
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
private class MFInt32115 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f116 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.0655f ,0.0049f ,5.1895f ,5.1325f ,0.0011f ,5.5175f });
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
private class MFInt32121 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f122 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.3615f ,0.0164f ,2.0085f ,5.5055f ,0.0067f ,4.3115f });
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
private class MFInt32125 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f126 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.5055f ,0.0067f ,4.3115f ,5.6085f ,0.003f ,4.6485f });
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
private class MFInt32129 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f130 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.6085f ,0.003f ,4.6485f ,5.6485f ,0f ,4.9925f });
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
private class MFInt32135 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f136 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.095f ,0.9171f ,0.0029f ,-0.0867f ,0.4913f ,0.0318f });
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
private class MFInt32139 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f140 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0867f ,0.4913f ,0.0318f ,-0.0801f ,0.0712f ,-0.0766f });
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
private class MFInt32143 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f144 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f ,0.0712f ,-0.0766f ,-3.4725f ,0.0374f ,0.6807f });
  }
}
private class MFInt32145 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f146 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f ,0.0712f ,-0.0766f ,-3.9515f ,0.0653f ,-0.6895f });
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
private class MFInt32149 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f150 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.4725f ,0.0374f ,0.6807f ,-2.9855f ,0.0311f ,1.2819f });
  }
}
private class MFInt32151 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f152 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.4725f ,0.0374f ,0.6807f ,-3.6105f ,0.033f ,1.4168f });
  }
}
private class MFInt32153 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f154 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.4725f ,0.0374f ,0.6807f ,-4.1245f ,0.0328f ,1.3453f });
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
private class MFInt32157 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f158 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.9855f ,0.0311f ,1.2819f ,-2.8645f ,0.0194f ,2.4285f });
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
private class MFInt32161 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f162 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.8645f ,0.0194f ,2.4285f ,-2.7535f ,0.0077f ,4.6255f });
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
private class MFInt32165 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f166 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.7535f ,0.0077f ,4.6255f ,-2.7535f ,0.0077f ,4.6255f });
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
private class MFInt32171 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f172 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.6105f ,0.033f ,1.4168f ,-3.5565f ,0.0232f ,2.2895f });
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
private class MFInt32175 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f176 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.5565f ,0.0232f ,2.2895f ,-3.6595f ,0.0085f ,4.8125f });
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
private class MFInt32179 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f180 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.6595f ,0.0085f ,4.8125f ,-3.7385f ,0.0054f ,5.5315f });
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
private class MFInt32183 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f184 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.7385f ,0.0054f ,5.5315f ,-3.7385f ,0.0017f ,5.9505f });
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
private class MFInt32189 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f190 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.1245f ,0.0328f ,1.3453f ,-3.7385f ,0.0017f ,5.9505f });
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
private class MFInt32193 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f194 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.2795f ,0.0086f ,4.7055f });
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
private class MFInt32197 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f198 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.2795f ,0.0086f ,4.7055f ,-4.3865f ,0.0044f ,5.3745f });
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
private class MFInt32201 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f202 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.3865f ,0.0044f ,5.3745f ,-4.4545f ,0.0017f ,5.7845f });
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
private class MFInt32207 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f208 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.9515f ,0.0653f ,-0.6895f ,-4.9095f ,0.0353f ,0.5574f });
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
private class MFInt32211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f212 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.9095f ,0.0353f ,0.5574f ,-4.7255f ,0.0211f ,2.1725f });
  }
}
private class MFInt32213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f214 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.9095f ,0.0353f ,0.5574f ,-5.3615f ,0.0164f ,2.0085f });
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
private class MFInt32217 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f218 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.7255f ,0.0211f ,2.1725f ,-4.8755f ,0.0076f ,4.5165f });
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
private class MFInt32221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f222 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.8755f ,0.0076f ,4.5165f ,-5.0655f ,0.0049f ,5.1895f });
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
private class MFInt32225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f226 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-5.0655f ,0.0049f ,5.1895f ,-5.1335f ,0.0011f ,5.5175f });
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
private class MFInt32231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f232 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-5.3615f ,0.0164f ,2.0085f ,-5.5055f ,0.0067f ,4.3115f });
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
private class MFInt32235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f236 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-5.5055f ,0.0067f ,4.3115f ,-5.6085f ,0.003f ,4.6485f });
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
private class MFInt32239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f240 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-5.6085f ,0.003f ,4.6485f ,-5.6495f ,0f ,4.9925f });
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
private class MFInt32245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f246 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f ,1.0568f ,-0.0776f ,0.0035f ,1.0925f ,-0.0787f });
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
private class MFInt32249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f250 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0035f ,1.0925f ,-0.0787f ,0.0041f ,1.1276f ,-0.0796f });
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
private class MFInt32253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f254 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0041f ,1.1276f ,-0.0796f ,0.0045f ,1.1546f ,-0.08f });
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
private class MFInt32257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f258 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f ,1.1546f ,-0.08f ,0.0048f ,1.1912f ,-0.0805f });
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
private class MFInt32261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f262 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0048f ,1.1912f ,-0.0805f ,0.0051f ,1.2278f ,-0.0808f });
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
private class MFInt32265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f266 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0051f ,1.2278f ,-0.0808f ,0.0053f ,1.2679f ,-0.081f });
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
private class MFInt32269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f270 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0053f ,1.2679f ,-0.081f ,0.0056f ,1.2848f ,-0.0822f });
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
private class MFInt32273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f274 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f ,1.2848f ,-0.0822f ,0.0057f ,1.3126f ,-0.0838f });
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
private class MFInt32277 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f278 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f ,1.3126f ,-0.0838f ,0.0057f ,1.3382f ,-0.0845f });
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
private class MFInt32281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f282 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f ,1.3382f ,-0.0845f ,0.0058f ,1.3625f ,-0.0833f });
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
private class MFInt32285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f286 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0058f ,1.3625f ,-0.0833f ,0.0059f ,1.3866f ,-0.08f });
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
private class MFInt32289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f290 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0059f ,1.3866f ,-0.08f ,0.006f ,1.4102f ,-0.0745f });
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
private class MFInt32293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f294 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.006f ,1.4102f ,-0.0745f ,0.0061f ,1.432f ,-0.0675f });
  }
}
private class MFFloat295 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat296 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f298 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0061f ,1.432f ,-0.0675f ,0.0062f ,1.4583f ,-0.057f });
  }
}
private class MFFloat299 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat300 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32301 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f302 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0062f ,1.4583f ,-0.057f ,0.0063f ,1.4761f ,-0.0484f });
  }
}
private class MFFloat303 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat304 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32305 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f306 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0063f ,1.4761f ,-0.0484f ,0.0065f ,1.4951f ,-0.0387f });
  }
}
private class MFFloat307 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat308 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32309 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f310 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f ,1.4951f ,-0.0387f ,0.0066f ,1.5132f ,-0.0301f });
  }
}
private class MFInt32311 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f312 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f ,1.4951f ,-0.0387f ,0.082f ,1.4488f ,-0.0353f });
  }
}
private class MFInt32313 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f314 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f ,1.4951f ,-0.0387f ,-0.0694f ,1.46f ,-0.033f });
  }
}
private class MFFloat315 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat316 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32317 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f318 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.5132f ,-0.0301f ,0.0066f ,1.5357f ,-0.0143f });
  }
}
private class MFFloat319 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat320 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f322 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.5357f ,-0.0143f ,0.0066f ,1.552f ,-0.0082f });
  }
}
private class MFFloat323 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat324 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32325 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f326 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.552f ,-0.0082f ,0.0066f ,1.5662f ,-0.0084f });
  }
}
private class MFFloat327 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat328 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f330 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.5662f ,-0.0084f ,0.0066f ,1.58f ,-0.0103f });
  }
}
private class MFFloat331 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat332 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32333 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f334 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.58f ,-0.0103f ,0.0066f ,1.5928f ,-0.0103f });
  }
}
private class MFFloat335 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat336 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32337 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f338 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.5928f ,-0.0103f ,0.0066f ,1.6144f ,-0.0034f });
  }
}
private class MFFloat339 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat340 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32341 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f342 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.6144f ,-0.0034f ,0.0044f ,1.6209f ,0.0236f });
  }
}
private class MFFloat343 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat344 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32345 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f346 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,2.2365f ,1.87f ,1.9285f });
  }
}
private class MFInt32347 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f348 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,-2.2535f ,1.87f ,1.9285f });
  }
}
private class MFInt32349 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f350 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,2.1305f ,1.8444f ,4.1555f });
  }
}
private class MFInt32351 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f352 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,-2.1475f ,1.8444f ,4.1555f });
  }
}
private class MFInt32353 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f354 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,0.9581f ,1.8563f ,5.2175f });
  }
}
private class MFInt32355 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f356 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,-0.9751f ,1.8563f ,5.2175f });
  }
}
private class MFInt32357 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f358 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,-0.0085f ,1.7229f ,1.148f });
  }
}
private class MFFloat359 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat360 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat361 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat362 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat363 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat364 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat365 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat366 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat367 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat368 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat369 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat370 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat371 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat372 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat373 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat374 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32375 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f376 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f ,1.4488f ,-0.0353f ,0.0962f ,1.4269f ,-0.0424f });
  }
}
private class MFFloat377 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat378 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32379 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f380 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0962f ,1.4269f ,-0.0424f ,0.2029f ,1.4376f ,-0.0387f });
  }
}
private class MFFloat381 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat382 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32383 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f384 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f ,1.4376f ,-0.0387f ,0.2014f ,1.1357f ,-0.0682f });
  }
}
private class MFFloat385 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat386 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32387 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f388 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f ,1.1357f ,-0.0682f ,0.1984f ,0.8663f ,-0.0583f });
  }
}
private class MFFloat389 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat390 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32391 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f392 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,8.0485f ,0.9213f ,1.3235f });
  }
}
private class MFInt32393 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f394 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,8.0485f ,0.9225f ,0.8386f });
  }
}
private class MFInt32395 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f396 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,8.0395f ,0.9246f ,0.2513f });
  }
}
private class MFInt32397 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f398 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,8.0395f ,0.921f ,-0.6795f });
  }
}
private class MFFloat399 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat400 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32401 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f402 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.0485f ,0.9213f ,1.3235f ,0.1924f ,0.8472f ,-0.0534f });
  }
}
private class MFFloat403 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat404 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32405 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f406 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1924f ,0.8472f ,-0.0534f ,0.1951f ,0.8226f ,0.0246f });
  }
}
private class MFFloat407 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat408 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32409 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f410 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1951f ,0.8226f ,0.0246f ,0.1955f ,0.8159f ,0.0464f });
  }
}
private class MFFloat411 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat412 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat413 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat414 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32415 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f416 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.0485f ,0.9225f ,0.8386f ,0.1983f ,0.8024f ,-0.028f });
  }
}
private class MFFloat417 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat418 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32419 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f420 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f ,0.8024f ,-0.028f ,0.1983f ,0.7815f ,-0.028f });
  }
}
private class MFFloat421 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat422 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32423 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f424 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f ,0.7815f ,-0.028f ,0.2017f ,0.7363f ,-0.0248f });
  }
}
private class MFFloat425 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat426 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32427 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f428 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2017f ,0.7363f ,-0.0248f ,0.2028f ,0.7139f ,-0.0236f });
  }
}
private class MFFloat429 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat430 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat431 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat432 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32433 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f434 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.0395f ,0.9246f ,0.2513f ,0.1987f ,0.8029f ,-0.053f });
  }
}
private class MFFloat435 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat436 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32437 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f438 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f ,0.8029f ,-0.053f ,0.1987f ,0.7818f ,-0.053f });
  }
}
private class MFFloat439 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat440 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32441 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f442 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f ,0.7818f ,-0.053f ,0.2013f ,0.7273f ,-0.0503f });
  }
}
private class MFFloat443 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat444 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32445 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f446 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2013f ,0.7273f ,-0.0503f ,0.2026f ,0.7011f ,-0.0494f });
  }
}
private class MFFloat447 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat448 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat449 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat450 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32451 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f452 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.0395f ,0.921f ,-0.6795f ,0.1956f ,0.8019f ,-0.0794f });
  }
}
private class MFInt32453 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f454 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {8.0395f ,0.921f ,-0.6795f ,0.1925f ,0.8066f ,-0.1036f });
  }
}
private class MFFloat455 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat456 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32457 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f458 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f ,0.8019f ,-0.0794f ,0.1956f ,0.7815f ,-0.0794f });
  }
}
private class MFFloat459 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat460 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32461 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f462 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f ,0.7815f ,-0.0794f ,0.1973f ,0.7287f ,-0.0777f });
  }
}
private class MFFloat463 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat464 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32465 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f466 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1973f ,0.7287f ,-0.0777f ,0.1983f ,0.7045f ,-0.0767f });
  }
}
private class MFFloat467 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat468 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat469 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat470 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32471 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f472 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f ,0.8066f ,-0.1036f ,0.1925f ,0.7866f ,-0.1036f });
  }
}
private class MFFloat473 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat474 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32475 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f476 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f ,0.7866f ,-0.1036f ,0.1938f ,0.7452f ,-0.1024f });
  }
}
private class MFFloat477 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat478 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32479 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f480 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1938f ,0.7452f ,-0.1024f ,0.1948f ,0.7277f ,-0.1017f });
  }
}
private class MFFloat481 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat482 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat483 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat484 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32485 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f486 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0694f ,1.46f ,-0.033f ,-0.0836f ,1.4281f ,-0.0401f });
  }
}
private class MFFloat487 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat488 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32489 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f490 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0836f ,1.4281f ,-0.0401f ,-0.1907f ,1.4407f ,-0.0325f });
  }
}
private class MFFloat491 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat492 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32493 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f494 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1907f ,1.4407f ,-0.0325f ,-0.1949f ,1.1388f ,-0.062f });
  }
}
private class MFFloat495 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat496 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32497 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f498 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1949f ,1.1388f ,-0.062f ,-0.1959f ,0.8694f ,-0.0521f });
  }
}
private class MFFloat499 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat500 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32501 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f502 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f ,0.8694f ,-0.0521f ,-8.0515f ,0.9213f ,1.3235f });
  }
}
private class MFInt32503 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f504 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f ,0.8694f ,-0.0521f ,-8.0515f ,0.9225f ,0.8386f });
  }
}
private class MFInt32505 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f506 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f ,0.8694f ,-0.0521f ,-8.0405f ,0.9246f ,0.2513f });
  }
}
private class MFInt32507 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f508 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f ,0.8694f ,-0.0521f ,-8.0405f ,0.921f ,-0.6795f });
  }
}
private class MFFloat509 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat510 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32511 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f512 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-8.0515f ,0.9213f ,1.3235f ,-0.1899f ,0.8502f ,-0.0473f });
  }
}
private class MFFloat513 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat514 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32515 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f516 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1899f ,0.8502f ,-0.0473f ,-0.1874f ,0.8256f ,0.0306f });
  }
}
private class MFFloat517 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat518 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32519 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f520 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1874f ,0.8256f ,0.0306f ,-0.1864f ,0.819f ,0.0506f });
  }
}
private class MFFloat521 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat522 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat523 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat524 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32525 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f526 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-8.0515f ,0.9225f ,0.8386f ,-0.1961f ,0.8055f ,-0.0218f });
  }
}
private class MFFloat527 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat528 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32529 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f530 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f ,0.8055f ,-0.0218f ,-0.1961f ,0.7846f ,-0.0218f });
  }
}
private class MFFloat531 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat532 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32533 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f534 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f ,0.7846f ,-0.0218f ,-0.1954f ,0.7393f ,-0.0185f });
  }
}
private class MFFloat535 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat536 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32537 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f538 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1954f ,0.7393f ,-0.0185f ,-0.1945f ,0.7169f ,-0.0173f });
  }
}
private class MFFloat539 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat540 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat541 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat542 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32543 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f544 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-8.0405f ,0.9246f ,0.2513f ,-0.1972f ,0.806f ,-0.0468f });
  }
}
private class MFFloat545 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat546 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32547 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f548 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f ,0.806f ,-0.0468f ,-0.1972f ,0.7849f ,-0.0468f });
  }
}
private class MFFloat549 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat550 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32551 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f552 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f ,0.7849f ,-0.0468f ,-0.195f ,0.7304f ,-0.0441f });
  }
}
private class MFFloat553 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat554 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32555 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f556 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.195f ,0.7304f ,-0.0441f ,-0.1939f ,0.7042f ,-0.0432f });
  }
}
private class MFFloat557 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat558 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat559 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat560 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32561 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f562 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-8.0405f ,0.921f ,-0.6795f ,-0.1951f ,0.8049f ,-0.0732f });
  }
}
private class MFInt32563 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f564 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-8.0405f ,0.921f ,-0.6795f ,-0.1926f ,0.8096f ,-0.0975f });
  }
}
private class MFFloat565 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat566 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32567 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f568 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f ,0.8049f ,-0.0732f ,-0.1951f ,0.7845f ,-0.0732f });
  }
}
private class MFFloat569 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat570 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32571 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f572 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f ,0.7845f ,-0.0732f ,-0.192f ,0.7318f ,-0.0716f });
  }
}
private class MFFloat573 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat574 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32575 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f576 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.192f ,0.7318f ,-0.0716f ,-0.1908f ,0.7077f ,-0.0706f });
  }
}
private class MFFloat577 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat578 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat579 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat580 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32581 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f582 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f ,0.8096f ,-0.0975f ,-0.1926f ,0.7896f ,-0.0975f });
  }
}
private class MFFloat583 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat584 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32585 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f586 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f ,0.7896f ,-0.0975f ,-0.1902f ,0.7483f ,-0.0963f });
  }
}
private class MFFloat587 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat588 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32589 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f590 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1902f ,0.7483f ,-0.0963f ,-0.1908f ,0.754f ,-0.096f });
  }
}
private class MFFloat591 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat592 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
}
