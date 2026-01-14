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
public class HAnim2SpecificationLOA3Illustrated implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new HAnim2SpecificationLOA3Illustrated().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/HAnim2SpecificationLOA3Illustrated.new.java.x3d");
    model.toFileJSON("../data/HAnim2SpecificationLOA3Illustrated.new.java.x3dj");
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
        .addMeta(new meta().setName("title").setContent("HAnim2SpecificationLOA3Illustrated.x3d"))
        .addMeta(new meta().setName("description").setContent("HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template."))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"))
        .addMeta(new meta().setName("reference").setContent("HAnim2SpecificationLOA3Invisible.x3d"))
        .addMeta(new meta().setName("reference").setContent("HAnim2SpecificationLOA3Animation.x3d"))
        .addMeta(new meta().setName("reference").setContent("HAnimSpecificationExampleChangeLog.txt"))
        .addMeta(new meta().setName("reference").setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989."))
        .addMeta(new meta().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
        .addMeta(new meta().setName("reference").setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf"))
        .addMeta(new meta().setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl"))
        .addMeta(new meta().setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d"))
        .addMeta(new meta().setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d"))
        .addMeta(new meta().setName("reference").setContent("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames"))
        .addMeta(new meta().setName("created").setContent("18 February 2021"))
        .addMeta(new meta().setName("modified").setContent("Mon, 15 Sep 2025 05:20:09 GMT"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA1.png"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA2.png"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA3.png"))
        .addMeta(new meta().setName("TODO").setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"))
        .addMeta(new meta().setName("TODO").setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment"))
        .addMeta(new meta().setName("translator").setContent("Don Brutzman and Joe Williams"))
        .addMeta(new meta().setName("generator").setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new NavigationInfo())
        .addChild(new Group().setDEF("Original_WorldInfo")
          .addChild(new WorldInfo().setTitle("HANIM 200x Default Joint Centers, LOA3").setInfo(new MFString1().getArray())))
        .addChild(new Viewpoint().setDescription("Humanoid LOA 3 Front").setPosition(new float[] {0f ,0.4f ,4f }).setCenterOfRotation(new float[] {0f ,0.9149f ,0.0016f }))
        .addChild(new Viewpoint().setDescription("Humanoid LOA 3 Front Close").setPosition(new float[] {0f ,0.8f ,2f }).setCenterOfRotation(new float[] {0f ,0.9149f ,0.0016f }))
        .addChild(new Viewpoint().setDescription("Humanoid LOA 3 Front Closer").setPosition(new float[] {0f ,1.2f ,1f }).setCenterOfRotation(new float[] {0f ,0.9149f ,0.0016f }))
        .addChild(new Viewpoint().setDescription("Humanoid LOA 3 Front Face").setPosition(new float[] {0f ,1.63f ,1f }).setCenterOfRotation(new float[] {0f ,1.5f ,0.0016f }))
        .addChild(new Viewpoint().setDescription("Humanoid LOA 3 Right Side").setPosition(new float[] {2.6f ,0.8f ,0f }).setOrientation(new float[] {0f ,1f ,0f ,1.5708f }).setCenterOfRotation(new float[] {0f ,0.9149f ,0.0016f }))
        .addChild(new Viewpoint().setDescription("Humanoid LOA 3 Right Side Close").setPosition(new float[] {1f ,0.8f ,0.5f }).setOrientation(new float[] {0f ,1f ,0f ,1.2f }).setCenterOfRotation(new float[] {0f ,0.9149f ,0.0016f }))
        .addChild(new Viewpoint().setDescription("Humanoid LOA 3 Left Side Close").setPosition(new float[] {-1f ,0.8f ,0.5f }).setOrientation(new float[] {0f ,1f ,0f ,-1.2f }).setCenterOfRotation(new float[] {0f ,0.9149f ,0.0016f }))
        .addChild(new Viewpoint().setDescription("Humanoid LOA 3 Left Side").setPosition(new float[] {-2.6f ,0.8f ,0f }).setOrientation(new float[] {0f ,1f ,0f ,-1.5708f }).setCenterOfRotation(new float[] {0f ,0.9149f ,0.0016f }))
        .addChild(new Viewpoint().setDescription("Humanoid LOA 3 Top").setPosition(new float[] {0f ,3.5f ,0f }).setOrientation(new float[] {1f ,0f ,0f ,-1.5708f }).setCenterOfRotation(new float[] {0f ,0.9149f ,0.0016f }))
        .addChild(new HAnimHumanoid().setDEF("hanim_humanoid").setName("humanoid").setLoa(3)
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .setMetadata(new MetadataString().setName("authorName"))
            .setMetadata(new MetadataString().setName("authorEmail"))
            .setMetadata(new MetadataString().setName("copyright"))
            .setMetadata(new MetadataString().setName("creationDate"))
            .addValue(new MetadataFloat().setName("height").setValue(new MFFloat2().getArray()))
            .setMetadata(new MetadataString().setName("humanoidVersion"))
            .setMetadata(new MetadataString().setName("usageRestrictions")))
          .addSkeleton(new HAnimJoint("hanim_humanoid").setDEF("hanim_humanoid_root").setName("humanoid_root").setCenter(new float[] {0f ,0.824f ,0.0277f })
            .addChild(new HAnimSegment("hanim_humanoid_root").setDEF("hanim_sacrum").setName("sacrum")
              .addChild(new TouchSensor().setDescription("HAnimJoint humanoid_root, HAnimSegment sacrum"))
              .addChild(new Transform().setTranslation(new float[] {0f ,0.824f ,0.0277f })
                .addChild(new Shape().setDEF("HAnimJointShape")
                  .setAppearance(new Appearance().setDEF("HAnimJointAppearance")
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f ,0.5f ,0f }).setTransparency(0.5f )))
                  .setGeometry(new Sphere().setRadius(0.006f ))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt323().getArray())
                  .setColor(new ColorRGBA().setDEF("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA4().getArray()))
                  .setCoord(new Coordinate().setPoint(new MFVec3f5().getArray()))))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt326().getArray())
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                  .setCoord(new Coordinate().setPoint(new MFVec3f7().getArray())))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setDEF("hanim_sacroiliac").setName("sacroiliac").setCenter(new float[] {0f ,0.9149f ,0.0016f })
              .addChild(new HAnimSegment("hanim_sacroiliac").setDEF("hanim_pelvis").setName("pelvis")
                .addChild(new TouchSensor().setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis"))
                .addChild(new Transform().setTranslation(new float[] {0f ,0.9149f ,0.0016f })
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt328().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f9().getArray()))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3210().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray()))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3212().getArray())
                    .setColor(new ColorRGBA().setDEF("HAnimSiteLineColorRGBA").setColor(new MFColorRGBA13().getArray()))
                    .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3215().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f16().getArray()))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3217().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f18().getArray()))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3219().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f20().getArray()))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3221().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f22().getArray()))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3223().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f24().getArray()))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3225().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3227().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f28().getArray()))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3229().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_r_iliocristale_pt").setName("r_iliocristale_pt").setTranslation(new float[] {-0.1525f ,1.0628f ,0.0035f })
                  .addChild(new TouchSensor().setDescription("HAnimSite r_iliocristale_pt"))
                  .addChild(new Shape().setDEF("HAnimSiteShape")
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,0f ,0f })))
                    .setGeometry(new IndexedFaceSet().setDEF("DiamondIFS").setSolid(false).setCreaseAngle(0.5f ).setCoordIndex(new MFInt3231().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f32().getArray())))))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_r_trochanterion_pt").setName("r_trochanterion_pt").setTranslation(new float[] {-0.1689f ,0.8419f ,0.0352f })
                  .addChild(new TouchSensor().setDescription("HAnimSite r_trochanterion_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_iliocristale_pt").setName("l_iliocristale_pt").setTranslation(new float[] {0.1612f ,1.0537f ,0.0008f })
                  .addChild(new TouchSensor().setDescription("HAnimSite l_iliocristale_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_trochanterion_pt").setName("l_trochanterion_pt").setTranslation(new float[] {0.1677f ,0.8336f ,0.0303f })
                  .addChild(new TouchSensor().setDescription("HAnimSite l_trochanterion_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_r_asis_pt").setName("r_asis_pt").setTranslation(new float[] {-0.0887f ,1.0021f ,0.1112f })
                  .addChild(new TouchSensor().setDescription("HAnimSite r_asis_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_asis_pt").setName("l_asis_pt").setTranslation(new float[] {0.0925f ,0.9983f ,0.1052f })
                  .addChild(new TouchSensor().setDescription("HAnimSite l_asis_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_r_psis_pt").setName("r_psis_pt").setTranslation(new float[] {-0.0716f ,1.019f ,-0.1138f })
                  .addChild(new TouchSensor().setDescription("HAnimSite r_psis_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_psis_pt").setName("l_psis_pt").setTranslation(new float[] {0.0774f ,1.019f ,-0.1151f })
                  .addChild(new TouchSensor().setDescription("HAnimSite l_psis_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_crotch_pt").setName("crotch_pt").setTranslation(new float[] {0.0034f ,0.8266f ,0.0257f })
                  .addChild(new TouchSensor().setDescription("HAnimSite crotch_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_l_hip").setName("l_hip").setCenter(new float[] {0.0961f ,0.9124f ,-0.0001f })
                .addChild(new HAnimSegment("hanim_l_hip").setDEF("hanim_l_thigh").setName("l_thigh")
                  .addChild(new TouchSensor().setDescription("HAnimJoint l_hip, HAnimSegment l_thigh"))
                  .addChild(new Transform().setTranslation(new float[] {0.0961f ,0.9124f ,-0.0001f })
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3233().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray()))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3235().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f36().getArray()))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3237().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray()))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3239().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f40().getArray()))))
                  .addChild(new HAnimSite("hanim_l_thigh").setDEF("hanim_l_knee_crease_pt").setName("l_knee_crease_pt").setTranslation(new float[] {0.0993f ,0.4881f ,-0.0309f })
                    .addChild(new TouchSensor().setDescription("HAnimSite l_knee_crease_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_l_thigh").setDEF("hanim_l_femoral_lateral_epicondyle_pt").setName("l_femoral_lateral_epicondyle_pt").setTranslation(new float[] {0.1598f ,0.4967f ,0.0297f })
                    .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_lateral_epicn_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_l_thigh").setDEF("hanim_l_femoral_medial_epicondyle_pt").setName("l_femoral_medial_epicondyle_pt").setTranslation(new float[] {0.0398f ,0.4946f ,0.0303f })
                    .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_medial_epicn_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint("hanim_l_hip").setDEF("hanim_l_knee").setName("l_knee").setCenter(new float[] {0.104f ,0.4867f ,0.0308f })
                  .addChild(new HAnimSegment("hanim_l_knee").setDEF("hanim_l_calf").setName("l_calf")
                    .addChild(new TouchSensor().setDescription("HAnimJoint l_knee, HAnimSegment l_calf"))
                    .addChild(new Transform().setTranslation(new float[] {0.104f ,0.4867f ,0.0308f })
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3241().getArray())
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                        .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray())))))
                  .addChild(new HAnimJoint("hanim_l_knee").setDEF("hanim_l_talocrural").setName("l_talocrural").setCenter(new float[] {0.1101f ,0.0656f ,-0.0736f })
                    .addChild(new HAnimSegment("hanim_l_talocrural").setDEF("hanim_l_talus").setName("l_talus")
                      .addChild(new TouchSensor().setDescription("HAnimJoint l_talocrural, HAnimSegment l_talus"))
                      .addChild(new Transform().setTranslation(new float[] {0.1101f ,0.0656f ,-0.0736f })
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3243().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f44().getArray()))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3245().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray()))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3247().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f48().getArray()))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3249().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray()))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3251().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f52().getArray()))))
                      .addChild(new HAnimSite("hanim_l_talus").setDEF("hanim_l_lateral_malleolus_pt").setName("l_lateral_malleolus_pt").setTranslation(new float[] {0.1308f ,0.0597f ,-0.1032f })
                        .addChild(new TouchSensor().setDescription("HAnimSite l_lateral_malleolus_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_l_talus").setDEF("hanim_l_medial_malleolus_pt").setName("l_medial_malleolus_pt").setTranslation(new float[] {0.089f ,0.0716f ,-0.0881f })
                        .addChild(new TouchSensor().setDescription("HAnimSite l_medial_malleolus_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_l_talus").setDEF("hanim_l_sphyrion_pt").setName("l_sphyrion_pt").setTranslation(new float[] {0.089f ,0.0575f ,-0.0943f })
                        .addChild(new TouchSensor().setDescription("HAnimSite l_sphyrion_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_l_talus").setDEF("hanim_l_calcaneus_posterior_pt").setName("l_calcaneus_posterior_pt").setTranslation(new float[] {0.0974f ,0.0259f ,-0.1171f })
                        .addChild(new TouchSensor().setDescription("HAnimSite l_calcaneous_post_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setDEF("hanim_l_tarsometatarsal_2").setName("l_tarsometatarsal_2").setCenter(new float[] {0.1086f ,0.0001f ,-0.0368f })
                      .addChild(new HAnimSegment("hanim_l_tarsometatarsal_2").setDEF("hanim_l_metatarsal_2").setName("l_metatarsal_2")
                        .addChild(new TouchSensor().setDescription("HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2"))
                        .addChild(new Transform().setTranslation(new float[] {0.1086f ,0.0001f ,-0.0368f })
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3253().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setDEF("hanim_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(new float[] {0.1086f ,0.0001f ,0.0368f })
                        .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setDEF("hanim_l_tarsal_proximal_phalanx_2").setName("l_tarsal_proximal_phalanx_2")
                          .addChild(new TouchSensor().setDescription("HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2"))
                          .addChild(new Transform().setTranslation(new float[] {0.1086f ,0.0001f ,0.0368f })
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3255().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f56().getArray()))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3257().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f58().getArray()))))
                          .addChild(new HAnimSite("hanim_l_tarsal_proximal_phalanx_2").setDEF("hanim_l_metatarsal_phalanx_1_pt").setName("l_metatarsal_phalanx_1_pt").setTranslation(new float[] {0.0816f ,0.0232f ,0.0106f })
                            .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_pha1_pt"))
                            .addChild(new Shape().setUSE("HAnimSiteShape"))))
                        .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_2").setCenter(new float[] {0.1086f ,0f ,0.0762f })
                          .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_phalanx_2").setName("l_tarsal_distal_phalanx_2")
                            .addChild(new TouchSensor().setDescription("HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2"))
                            .addChild(new Transform().setTranslation(new float[] {0.1086f ,0f ,0.0762f })
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3259().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f60().getArray()))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3261().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f62().getArray()))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3263().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f64().getArray()))))
                            .addChild(new HAnimSite("hanim_l_tarsal_distal_phalanx_2").setDEF("hanim_l_forefoot_tip_pt").setName("l_forefoot_tip_pt").setTranslation(new float[] {0.1354f ,0.0016f ,0.1476f })
                              .addChild(new TouchSensor().setDescription("HAnimSite l_forefoot_tip"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite("hanim_l_tarsal_distal_phalanx_2").setDEF("hanim_l_metatarsal_phalanx_5_pt").setName("l_metatarsal_phalanx_5_pt").setTranslation(new float[] {0.1825f ,0.007f ,0.0928f })
                              .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_pha5_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite("hanim_l_tarsal_distal_phalanx_2").setDEF("hanim_l_tarsal_distal_phalanx_2_pt").setName("l_tarsal_distal_phalanx_2_pt").setTranslation(new float[] {0.1195f ,0.0079f ,0.1433f })
                              .addChild(new TouchSensor().setDescription("HAnimSite l_digit2_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_r_hip").setName("r_hip").setCenter(new float[] {-0.0961f ,0.9124f ,-0.0001f })
                .addChild(new HAnimSegment("hanim_r_hip").setDEF("hanim_r_thigh").setName("r_thigh")
                  .addChild(new TouchSensor().setDescription("HAnimJoint r_hip, HAnimSegment r_thigh"))
                  .addChild(new Transform().setTranslation(new float[] {-0.0961f ,0.9124f ,-0.0001f })
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3265().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f66().getArray()))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3267().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f68().getArray()))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3269().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f70().getArray()))))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3271().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f72().getArray()))))
                  .addChild(new HAnimSite("hanim_r_thigh").setDEF("hanim_r_knee_crease_pt").setName("r_knee_crease_pt").setTranslation(new float[] {-0.0825f ,0.4932f ,-0.0326f })
                    .addChild(new TouchSensor().setDescription("HAnimSite r_knee_crease_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_r_thigh").setDEF("hanim_r_femoral_lateral_epicondyle_pt").setName("r_femoral_lateral_epicondyle_pt").setTranslation(new float[] {-0.1421f ,0.4992f ,0.031f })
                    .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_lateral_epicn_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_r_thigh").setDEF("hanim_r_femoral_medial_epicondyle_pt").setName("r_femoral_medial_epicondyle_pt").setTranslation(new float[] {-0.0221f ,0.5014f ,0.0289f })
                    .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_medial_epicn_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint("hanim_r_hip").setDEF("hanim_r_knee").setName("r_knee").setCenter(new float[] {-0.104f ,0.4867f ,0.0308f })
                  .addChild(new HAnimSegment("hanim_r_knee").setDEF("hanim_r_calf").setName("r_calf")
                    .addChild(new TouchSensor().setDescription("HAnimJoint r_knee, HAnimSegment r_calf"))
                    .addChild(new Transform().setTranslation(new float[] {-0.104f ,0.4867f ,0.0308f })
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3273().getArray())
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                        .setCoord(new Coordinate().setPoint(new MFVec3f74().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_knee").setDEF("hanim_r_talocrural").setName("r_talocrural").setCenter(new float[] {-0.1101f ,0.0656f ,-0.0736f })
                    .addChild(new HAnimSegment("hanim_r_talocrural").setDEF("hanim_r_talus").setName("r_talus")
                      .addChild(new TouchSensor().setDescription("HAnimJoint r_talocrural, HAnimSegment r_talus"))
                      .addChild(new Transform().setTranslation(new float[] {-0.1101f ,0.0656f ,-0.0736f })
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3275().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f76().getArray()))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3277().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f78().getArray()))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3279().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray()))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3281().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f82().getArray()))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3283().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f84().getArray()))))
                      .addChild(new HAnimSite("hanim_r_talus").setDEF("hanim_r_lateral_malleolus_pt").setName("r_lateral_malleolus_pt").setTranslation(new float[] {-0.1006f ,0.0658f ,-0.1075f })
                        .addChild(new TouchSensor().setDescription("HAnimSite r_lateral_malleolus_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_r_talus").setDEF("hanim_r_medial_malleolus_pt").setName("r_medial_malleolus_pt").setTranslation(new float[] {-0.0591f ,0.076f ,-0.0928f })
                        .addChild(new TouchSensor().setDescription("HAnimSite r_medial_malleolus_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_r_talus").setDEF("hanim_r_sphyrion_pt").setName("r_sphyrion_pt").setTranslation(new float[] {-0.0603f ,0.061f ,-0.1002f })
                        .addChild(new TouchSensor().setDescription("HAnimSite r_sphyrion_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_r_talus").setDEF("hanim_r_calcaneus_posterior_pt").setName("r_calcaneus_posterior_pt").setTranslation(new float[] {-0.0692f ,0.0297f ,-0.1221f })
                        .addChild(new TouchSensor().setDescription("HAnimSite r_calcaneous_post_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setDEF("hanim_r_tarsometatarsal_2").setName("r_tarsometatarsal_2").setCenter(new float[] {-0.1086f ,0.0001f ,-0.0368f })
                      .addChild(new HAnimSegment("hanim_r_tarsometatarsal_2").setDEF("hanim_r_metatarsal_2").setName("r_metatarsal_2")
                        .addChild(new TouchSensor().setDescription("HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2"))
                        .addChild(new Transform().setTranslation(new float[] {-0.1086f ,0.0001f ,-0.0368f })
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3285().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setDEF("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(new float[] {-0.1086f ,0.0001f ,0.0368f })
                        .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setDEF("hanim_r_tarsal_proximal_phalanx_2").setName("r_tarsal_proximal_phalanx_2")
                          .addChild(new TouchSensor().setDescription("HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2"))
                          .addChild(new Transform().setTranslation(new float[] {-0.1086f ,0.0001f ,0.0368f })
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3287().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f88().getArray()))))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3289().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f90().getArray()))))
                          .addChild(new HAnimSite("hanim_r_tarsal_proximal_phalanx_2").setDEF("hanim_r_metatarsal_phalanx_1_pt").setName("r_metatarsal_phalanx_1_pt").setTranslation(new float[] {-0.0521f ,0.026f ,0.0127f })
                            .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_pha1_pt"))
                            .addChild(new Shape().setUSE("HAnimSiteShape"))))
                        .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setCenter(new float[] {-0.1086f ,0f ,0.0762f })
                          .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_phalanx_2").setName("r_tarsal_distal_phalanx_2")
                            .addChild(new TouchSensor().setDescription("HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2"))
                            .addChild(new Transform().setTranslation(new float[] {-0.1086f ,0f ,0.0762f })
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3291().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f92().getArray()))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3293().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f94().getArray()))))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3295().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f96().getArray()))))
                            .addChild(new HAnimSite("hanim_r_tarsal_distal_phalanx_2").setDEF("hanim_r_forefoot_tip_pt").setName("r_forefoot_tip_pt").setTranslation(new float[] {-0.1043f ,0.0227f ,0.145f })
                              .addChild(new TouchSensor().setDescription("HAnimSite r_forefoot_tip"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite("hanim_r_tarsal_distal_phalanx_2").setDEF("hanim_r_metatarsal_phalanx_5_pt").setName("r_metatarsal_phalanx_5_pt").setTranslation(new float[] {-0.1523f ,0.0166f ,0.0895f })
                              .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_pha5_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite("hanim_r_tarsal_distal_phalanx_2").setDEF("hanim_r_tarsal_distal_phalanx_2_pt").setName("r_tarsal_distal_phalanx_2_pt").setTranslation(new float[] {-0.0883f ,0.0134f ,0.1383f })
                              .addChild(new TouchSensor().setDescription("HAnimSite r_digit2_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setDEF("hanim_vl5").setName("vl5").setCenter(new float[] {0.0028f ,1.0568f ,-0.0776f })
              .addChild(new HAnimSegment("hanim_vl5").setDEF("hanim_l5").setName("l5")
                .addChild(new TouchSensor().setDescription("HAnimJoint vl5, HAnimSegment l5"))
                .addChild(new Transform().setTranslation(new float[] {0.0028f ,1.0568f ,-0.0776f })
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3297().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray()))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3299().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f100().getArray()))))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32101().getArray())
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                    .setCoord(new Coordinate().setPoint(new MFVec3f102().getArray()))))
                .addChild(new HAnimSite("hanim_l5").setDEF("hanim_waist_preferred_posterior_pt").setName("waist_preferred_posterior_pt").setTranslation(new float[] {0f ,1.0915f ,-0.1091f })
                  .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_post_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_l5").setDEF("hanim_navel_pt").setName("navel_pt").setTranslation(new float[] {0.0069f ,1.0966f ,0.1017f })
                  .addChild(new TouchSensor().setDescription("HAnimSite navel_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
              .addChild(new HAnimJoint("hanim_vl5").setDEF("hanim_vl4").setName("vl4").setCenter(new float[] {0.0035f ,1.0925f ,-0.0787f })
                .addChild(new HAnimSegment("hanim_vl4").setDEF("hanim_l4").setName("l4")
                  .addChild(new TouchSensor().setDescription("HAnimJoint vl4, HAnimSegment l4"))
                  .addChild(new Transform().setTranslation(new float[] {0.0035f ,1.0925f ,-0.0787f })
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32103().getArray())
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                      .setCoord(new Coordinate().setPoint(new MFVec3f104().getArray())))))
                .addChild(new HAnimJoint("hanim_vl4").setDEF("hanim_vl3").setName("vl3").setCenter(new float[] {0.0041f ,1.1276f ,-0.0796f })
                  .addChild(new HAnimSegment("hanim_vl3").setDEF("hanim_l3").setName("l3")
                    .addChild(new TouchSensor().setDescription("HAnimJoint vl3, HAnimSegment l3"))
                    .addChild(new Transform().setTranslation(new float[] {0.0041f ,1.1276f ,-0.0796f })
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32105().getArray())
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                        .setCoord(new Coordinate().setPoint(new MFVec3f106().getArray())))))
                  .addChild(new HAnimJoint("hanim_vl3").setDEF("hanim_vl2").setName("vl2").setCenter(new float[] {0.0045f ,1.1546f ,-0.08f })
                    .addChild(new HAnimSegment("hanim_vl2").setDEF("hanim_l2").setName("l2")
                      .addChild(new TouchSensor().setDescription("HAnimJoint vl2, HAnimSegment l2"))
                      .addChild(new Transform().setTranslation(new float[] {0.0045f ,1.1546f ,-0.08f })
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32107().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f108().getArray()))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32109().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray()))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32111().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f112().getArray()))))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32113().getArray())
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                          .setCoord(new Coordinate().setPoint(new MFVec3f114().getArray()))))
                      .addChild(new HAnimSite("hanim_l2").setDEF("hanim_r_rib10_pt").setName("r_rib10_pt").setTranslation(new float[] {-0.0711f ,1.1941f ,0.1016f })
                        .addChild(new TouchSensor().setDescription("HAnimSite r_rib10_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_l2").setDEF("hanim_l_rib10_pt").setName("l_rib10_pt").setTranslation(new float[] {0.0871f ,1.1925f ,0.0992f })
                        .addChild(new TouchSensor().setDescription("HAnimSite l_rib10_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_l2").setDEF("hanim_rib10_midspine_pt").setName("rib10_midspine_pt").setTranslation(new float[] {0.0049f ,1.1908f ,-0.1113f })
                        .addChild(new TouchSensor().setDescription("HAnimSite rib10_midspine_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                    .addChild(new HAnimJoint("hanim_vl2").setDEF("hanim_vl1").setName("vl1").setCenter(new float[] {0.0048f ,1.1912f ,-0.0805f })
                      .addChild(new HAnimSegment("hanim_vl1").setDEF("hanim_l1").setName("l1")
                        .addChild(new TouchSensor().setDescription("HAnimJoint vl1, HAnimSegment l1"))
                        .addChild(new Transform().setTranslation(new float[] {0.0048f ,1.1912f ,-0.0805f })
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32115().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f116().getArray())))))
                      .addChild(new HAnimJoint("hanim_vl1").setDEF("hanim_vt12").setName("vt12").setCenter(new float[] {0.0051f ,1.2278f ,-0.0808f })
                        .addChild(new HAnimSegment("hanim_vt12").setDEF("hanim_t12").setName("t12")
                          .addChild(new TouchSensor().setDescription("HAnimJoint vt12, HAnimSegment t12"))
                          .addChild(new Transform().setTranslation(new float[] {0.0051f ,1.2278f ,-0.0808f })
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32117().getArray())
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                              .setCoord(new Coordinate().setPoint(new MFVec3f118().getArray())))))
                        .addChild(new HAnimJoint("hanim_vt12").setDEF("hanim_vt11").setName("vt11").setCenter(new float[] {0.0053f ,1.2679f ,-0.081f })
                          .addChild(new HAnimSegment("hanim_vt11").setDEF("hanim_t11").setName("t11")
                            .addChild(new TouchSensor().setDescription("HAnimJoint vt11, HAnimSegment t11"))
                            .addChild(new Transform().setTranslation(new float[] {0.0053f ,1.2679f ,-0.081f })
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32119().getArray())
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                .setCoord(new Coordinate().setPoint(new MFVec3f120().getArray())))))
                          .addChild(new HAnimJoint("hanim_vt11").setDEF("hanim_vt10").setName("vt10").setCenter(new float[] {0.0056f ,1.2848f ,-0.0822f })
                            .addChild(new HAnimSegment("hanim_vt10").setDEF("hanim_t10").setName("t10")
                              .addChild(new TouchSensor().setDescription("HAnimJoint vt10, HAnimSegment t10"))
                              .addChild(new Transform().setTranslation(new float[] {0.0056f ,1.2848f ,-0.0822f })
                                .addChild(new Shape().setUSE("HAnimJointShape")))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32121().getArray())
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f122().getArray()))))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32123().getArray())
                                  .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f124().getArray()))))
                              .addChild(new HAnimSite("hanim_t10").setDEF("hanim_substernale_pt").setName("substernale_pt").setTranslation(new float[] {0.0085f ,1.2995f ,0.1147f })
                                .addChild(new TouchSensor().setDescription("HAnimSite substernale_pt"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                            .addChild(new HAnimJoint("hanim_vt10").setDEF("hanim_vt9").setName("vt9").setCenter(new float[] {0.0057f ,1.3126f ,-0.0838f })
                              .addChild(new HAnimSegment("hanim_vt9").setDEF("hanim_t9").setName("t9")
                                .addChild(new TouchSensor().setDescription("HAnimJoint vt9, HAnimSegment t9"))
                                .addChild(new Transform().setTranslation(new float[] {0.0057f ,1.3126f ,-0.0838f })
                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32125().getArray())
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f126().getArray()))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32127().getArray())
                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f128().getArray()))))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32129().getArray())
                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f130().getArray()))))
                                .addChild(new HAnimSite("hanim_t9").setDEF("hanim_r_thelion_pt").setName("r_thelion_pt").setTranslation(new float[] {-0.0736f ,1.3385f ,0.1217f })
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_thelion_pt"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                .addChild(new HAnimSite("hanim_t9").setDEF("hanim_l_thelion_pt").setName("l_thelion_pt").setTranslation(new float[] {0.0918f ,1.3382f ,0.1192f })
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_thelion_pt"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint("hanim_vt9").setDEF("hanim_vt8").setName("vt8").setCenter(new float[] {0.0057f ,1.3382f ,-0.0845f })
                                .addChild(new HAnimSegment("hanim_vt8").setDEF("hanim_t8").setName("t8")
                                  .addChild(new TouchSensor().setDescription("HAnimJoint vt8, HAnimSegment t8"))
                                  .addChild(new Transform().setTranslation(new float[] {0.0057f ,1.3382f ,-0.0845f })
                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32131().getArray())
                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f132().getArray())))))
                                .addChild(new HAnimJoint("hanim_vt8").setDEF("hanim_vt7").setName("vt7").setCenter(new float[] {0.0058f ,1.3625f ,-0.0833f })
                                  .addChild(new HAnimSegment("hanim_vt7").setDEF("hanim_t7").setName("t7")
                                    .addChild(new TouchSensor().setDescription("HAnimJoint vt7, HAnimSegment t7"))
                                    .addChild(new Transform().setTranslation(new float[] {0.0058f ,1.3625f ,-0.0833f })
                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                    .addChild(new Shape()
                                      .setGeometry(new LineSet().setVertexCount(new MFInt32133().getArray())
                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f134().getArray())))))
                                  .addChild(new HAnimJoint("hanim_vt7").setDEF("hanim_vt6").setName("vt6").setCenter(new float[] {0.0059f ,1.3866f ,-0.08f })
                                    .addChild(new HAnimSegment("hanim_vt6").setDEF("hanim_t6").setName("t6")
                                      .addChild(new TouchSensor().setDescription("HAnimJoint vt6, HAnimSegment t6"))
                                      .addChild(new Transform().setTranslation(new float[] {0.0059f ,1.3866f ,-0.08f })
                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                      .addChild(new Shape()
                                        .setGeometry(new LineSet().setVertexCount(new MFInt32135().getArray())
                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                          .setCoord(new Coordinate().setPoint(new MFVec3f136().getArray())))))
                                    .addChild(new HAnimJoint("hanim_vt6").setDEF("hanim_vt5").setName("vt5").setCenter(new float[] {0.006f ,1.4102f ,-0.0745f })
                                      .addChild(new HAnimSegment("hanim_vt5").setDEF("hanim_t5").setName("t5")
                                        .addChild(new TouchSensor().setDescription("HAnimJoint vt5, HAnimSegment t5"))
                                        .addChild(new Transform().setTranslation(new float[] {0.006f ,1.4102f ,-0.0745f })
                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                        .addChild(new Shape()
                                          .setGeometry(new LineSet().setVertexCount(new MFInt32137().getArray())
                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                            .setCoord(new Coordinate().setPoint(new MFVec3f138().getArray())))))
                                      .addChild(new HAnimJoint("hanim_vt5").setDEF("hanim_vt4").setName("vt4").setCenter(new float[] {0.0061f ,1.432f ,-0.0675f })
                                        .addChild(new HAnimSegment("hanim_vt4").setDEF("hanim_t4").setName("t4")
                                          .addChild(new TouchSensor().setDescription("HAnimJoint vt4, HAnimSegment t4"))
                                          .addChild(new Transform().setTranslation(new float[] {0.0061f ,1.432f ,-0.0675f })
                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                          .addChild(new Shape()
                                            .setGeometry(new LineSet().setVertexCount(new MFInt32139().getArray())
                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                              .setCoord(new Coordinate().setPoint(new MFVec3f140().getArray())))))
                                        .addChild(new HAnimJoint("hanim_vt4").setDEF("hanim_vt3").setName("vt3").setCenter(new float[] {0.0062f ,1.4583f ,-0.057f })
                                          .addChild(new HAnimSegment("hanim_vt3").setDEF("hanim_t3").setName("t3")
                                            .addChild(new TouchSensor().setDescription("HAnimJoint vt3, HAnimSegment t3"))
                                            .addChild(new Transform().setTranslation(new float[] {0.0062f ,1.4583f ,-0.057f })
                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                            .addChild(new Shape()
                                              .setGeometry(new LineSet().setVertexCount(new MFInt32141().getArray())
                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                .setCoord(new Coordinate().setPoint(new MFVec3f142().getArray())))))
                                          .addChild(new HAnimJoint("hanim_vt3").setDEF("hanim_vt2").setName("vt2").setCenter(new float[] {0.0063f ,1.4761f ,-0.0484f })
                                            .addChild(new HAnimSegment("hanim_vt2").setDEF("hanim_t2").setName("t2")
                                              .addChild(new TouchSensor().setDescription("HAnimJoint vt2, HAnimSegment t2"))
                                              .addChild(new Transform().setTranslation(new float[] {0.0063f ,1.4761f ,-0.0484f })
                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                              .addChild(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32143().getArray())
                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f144().getArray())))))
                                            .addChild(new HAnimJoint("hanim_vt2").setDEF("hanim_vt1").setName("vt1").setCenter(new float[] {0.0065f ,1.4951f ,-0.0387f })
                                              .addChild(new HAnimSegment("hanim_vt1").setDEF("hanim_t1").setName("t1")
                                                .addChild(new TouchSensor().setDescription("HAnimJoint vt1, HAnimSegment t1"))
                                                .addChild(new Transform().setTranslation(new float[] {0.0065f ,1.4951f ,-0.0387f })
                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32145().getArray())
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f146().getArray()))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32147().getArray())
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f148().getArray()))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32149().getArray())
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f150().getArray()))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32151().getArray())
                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f152().getArray()))))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32153().getArray())
                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f154().getArray()))))
                                                .addChild(new HAnimSite("hanim_t1").setDEF("hanim_suprasternale_pt").setName("suprasternale_pt").setTranslation(new float[] {0.0084f ,1.4714f ,0.0551f })
                                                  .addChild(new TouchSensor().setDescription("HAnimSite suprasternale_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setDEF("hanim_cervicale_pt").setName("cervicale_pt").setTranslation(new float[] {0.0064f ,1.52f ,-0.0815f })
                                                  .addChild(new TouchSensor().setDescription("HAnimSite cervicale_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_vc7").setName("vc7").setCenter(new float[] {0.0066f ,1.5132f ,-0.0301f })
                                                .addChild(new HAnimSegment("hanim_vc7").setDEF("hanim_c7").setName("c7")
                                                  .addChild(new TouchSensor().setDescription("HAnimJoint vc7, HAnimSegment c7"))
                                                  .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5132f ,-0.0301f })
                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32155().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f156().getArray()))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32157().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f158().getArray()))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32159().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f160().getArray()))))
                                                  .addChild(new HAnimSite("hanim_c7").setDEF("hanim_r_neck_base_pt").setName("r_neck_base_pt").setTranslation(new float[] {-0.0419f ,1.5149f ,-0.022f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_neck_base_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_c7").setDEF("hanim_l_neck_base_pt").setName("l_neck_base_pt").setTranslation(new float[] {0.0646f ,1.5141f ,-0.038f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_neck_base_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                .addChild(new HAnimJoint("hanim_vc7").setDEF("hanim_vc6").setName("vc6").setCenter(new float[] {0.0066f ,1.5357f ,-0.0143f })
                                                  .addChild(new HAnimSegment("hanim_vc6").setDEF("hanim_c6").setName("c6")
                                                    .addChild(new TouchSensor().setDescription("HAnimJoint vc6, HAnimSegment c6"))
                                                    .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5357f ,-0.0143f })
                                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32161().getArray())
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f162().getArray())))))
                                                  .addChild(new HAnimJoint("hanim_vc6").setDEF("hanim_vc5").setName("vc5").setCenter(new float[] {0.0066f ,1.552f ,-0.0082f })
                                                    .addChild(new HAnimSegment("hanim_vc5").setDEF("hanim_c5").setName("c5")
                                                      .addChild(new TouchSensor().setDescription("HAnimJoint vc5, HAnimSegment c5"))
                                                      .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.552f ,-0.0082f })
                                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32163().getArray())
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f164().getArray())))))
                                                    .addChild(new HAnimJoint("hanim_vc5").setDEF("hanim_vc4").setName("vc4").setCenter(new float[] {0.0066f ,1.5662f ,-0.0084f })
                                                      .addChild(new HAnimSegment("hanim_vc4").setDEF("hanim_c4").setName("c4")
                                                        .addChild(new TouchSensor().setDescription("HAnimJoint vc4, HAnimSegment c4"))
                                                        .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5662f ,-0.0084f })
                                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32165().getArray())
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f166().getArray())))))
                                                      .addChild(new HAnimJoint("hanim_vc4").setDEF("hanim_vc3").setName("vc3").setCenter(new float[] {0.0066f ,1.58f ,-0.0103f })
                                                        .addChild(new HAnimSegment("hanim_vc3").setDEF("hanim_c3").setName("c3")
                                                          .addChild(new TouchSensor().setDescription("HAnimJoint vc3, HAnimSegment c3"))
                                                          .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.58f ,-0.0103f })
                                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32167().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f168().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_vc3").setDEF("hanim_vc2").setName("vc2").setCenter(new float[] {0.0066f ,1.5928f ,-0.0103f })
                                                          .addChild(new HAnimSegment("hanim_vc2").setDEF("hanim_c2").setName("c2")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint vc2, HAnimSegment c2"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5928f ,-0.0103f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32169().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f170().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_vc2").setDEF("hanim_vc1").setName("vc1").setCenter(new float[] {0.0066f ,1.6144f ,-0.0034f })
                                                            .addChild(new HAnimSegment("hanim_vc1").setDEF("hanim_c1").setName("c1")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint vc1, HAnimSegment c1"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.6144f ,-0.0034f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32171().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f172().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_vc1").setDEF("hanim_skullbase").setName("skullbase").setCenter(new float[] {0.0044f ,1.6209f ,0.0236f })
                                                              .addChild(new HAnimSegment("hanim_skullbase").setDEF("hanim_skull").setName("skull")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint skullbase, HAnimSegment skull"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.0044f ,1.6209f ,0.0236f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32173().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f174().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32175().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f176().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32177().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f178().getArray()))))
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
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f188().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32189().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f190().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32191().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f192().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32193().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f194().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32195().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f196().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32197().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f198().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32199().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f200().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32201().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f202().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32203().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f204().getArray()))))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32205().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f206().getArray()))))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_skull_vertex_pt").setName("skull_vertex_pt").setTranslation(new float[] {0.005f ,1.7504f ,0.0055f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite skull_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_sellion_pt").setName("sellion_pt").setTranslation(new float[] {0.0058f ,1.6316f ,0.0852f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite sellion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_r_infraorbitale_pt").setName("r_infraorbitale_pt").setTranslation(new float[] {-0.0237f ,1.6171f ,0.0752f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_infraorbitale_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_l_infraorbitale_pt").setName("l_infraorbitale_pt").setTranslation(new float[] {0.0341f ,1.6171f ,0.0752f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_infraorbitale_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_supramenton_pt").setName("supramenton_pt").setTranslation(new float[] {0.0061f ,1.541f ,0.0805f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite supramenton_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_r_tragion_pt").setName("r_tragion_pt").setTranslation(new float[] {-0.0646f ,1.6347f ,0.0302f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tragion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_r_gonion_pt").setName("r_gonion_pt").setTranslation(new float[] {-0.052f ,1.5529f ,0.0347f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_gonion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_l_tragion_pt").setName("l_tragion_pt").setTranslation(new float[] {0.0739f ,1.6348f ,0.0282f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tragion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_l_gonion_pt").setName("l_gonion_pt").setTranslation(new float[] {0.0631f ,1.553f ,0.033f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_gonion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_nuchale_pt").setName("nuchale_pt").setTranslation(new float[] {0.0039f ,1.5972f ,-0.0796f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite nuchale_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyeball_joint").setName("l_eyeball_joint").setCenter(new float[] {0.0336f ,1.6332f ,0.0502f })
                                                                .addChild(new HAnimSegment("hanim_l_eyeball_joint").setDEF("hanim_l_eyeball").setName("l_eyeball")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.0336f ,1.6332f ,0.0502f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32207().getArray())
                                                                      .setColor(new ColorRGBA().setDEF("HAnimSiteViewpointLineColorRGBA").setColor(new MFColorRGBA208().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f209().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_l_eyeball").setDEF("hanim_l_eyeball_site_view").setName("l_eyeball_site_view").setTranslation(new float[] {0.034f ,1.64f ,0.05f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_eyeball_site_view"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                    .addChild(new Viewpoint().setDEF("hanim_l_eyeball_site_viewpoint").setDescription("l_eyeball_site_viewpoint looking forward").setPosition(new float[] {0f ,0f ,0f }).setOrientation(new float[] {0f ,1f ,0f ,3.141593f }))
                                                                    .addChild(new Anchor().setDescription("HAnimSite hanim_l_eyeball_site_view Viewpoint").setUrl(new MFString210().getArray())
                                                                      .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat211().getArray())
                                                                        .addChild(new WorldInfo().setInfo(new MFString212().getArray()))
                                                                        .addChild(new Shape().setDEF("HAnimSiteViewpointShape")
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,0f }).setTransparency(0.3f )))
                                                                          .setGeometry(new IndexedFaceSet().setDEF("SiteViewpointDiamondIFS").setCreaseAngle(0.5f ).setCoordIndex(new MFInt32213().getArray())
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f214().getArray())))))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyelid_joint").setName("l_eyelid_joint").setCenter(new float[] {0.0336f ,1.6332f ,0.0502f })
                                                                .addChild(new HAnimSegment("hanim_l_eyelid_joint").setDEF("hanim_l_eyelid").setName("l_eyelid")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.0336f ,1.6332f ,0.0502f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyebrow_joint").setName("l_eyebrow_joint").setCenter(new float[] {0.0336f ,1.635f ,0.0506f })
                                                                .addChild(new HAnimSegment("hanim_l_eyebrow_joint").setDEF("hanim_l_eyebrow").setName("l_eyebrow")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.0336f ,1.635f ,0.0506f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyeball_joint").setName("r_eyeball_joint").setCenter(new float[] {-0.0336f ,1.6332f ,0.0502f })
                                                                .addChild(new HAnimSegment("hanim_r_eyeball_joint").setDEF("hanim_r_eyeball").setName("r_eyeball")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0336f ,1.6332f ,0.0502f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32215().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteViewpointLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f216().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_r_eyeball").setDEF("hanim_r_eyeball_site_view").setName("r_eyeball_site_view").setTranslation(new float[] {-0.034f ,1.64f ,0.05f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_eyeball_site_view"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                    .addChild(new Viewpoint().setDEF("hanim_r_eyeball_site_viewpoint").setDescription("r_eyeball_site_viewpoint looking forward").setPosition(new float[] {0f ,0f ,0f }).setOrientation(new float[] {0f ,1f ,0f ,3.141593f }))
                                                                    .addChild(new Anchor().setDescription("HAnimSite hanim_r_eyeball_site_view Viewpoint").setUrl(new MFString217().getArray())
                                                                      .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat218().getArray())
                                                                        .addChild(new WorldInfo().setInfo(new MFString219().getArray()))
                                                                        .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyelid_joint").setName("r_eyelid_joint").setCenter(new float[] {-0.0336f ,1.6332f ,0.0502f })
                                                                .addChild(new HAnimSegment("hanim_r_eyelid_joint").setDEF("hanim_r_eyelid").setName("r_eyelid")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0336f ,1.6332f ,0.0502f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyebrow_joint").setName("r_eyebrow_joint").setCenter(new float[] {-0.0336f ,1.635f ,0.0506f })
                                                                .addChild(new HAnimSegment("hanim_r_eyebrow_joint").setDEF("hanim_r_eyebrow").setName("r_eyebrow")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0336f ,1.635f ,0.0506f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_temporomandibular").setName("temporomandibular").setCenter(new float[] {0f ,1.63f ,0.015f })
                                                                .addChild(new HAnimSegment("hanim_temporomandibular").setDEF("hanim_jaw").setName("jaw")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint temporomandibular, HAnimSegment jaw"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0f ,1.63f ,0.015f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32220().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f221().getArray()))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32222().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f223().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_jaw").setDEF("hanim_temporomandibular_l_site_pt").setName("temporomandibular_l_site_pt").setTranslation(new float[] {0.045f ,1.63f ,0f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite temporomandibular_l_site_pt"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite("hanim_jaw").setDEF("hanim_temporomandibular_r_site_pt").setName("temporomandibular_r_site_pt").setTranslation(new float[] {-0.045f ,1.63f ,0f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite temporomandibular_r_site_pt"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_l_sternoclavicular").setName("l_sternoclavicular").setCenter(new float[] {0.082f ,1.4488f ,-0.0353f })
                                                .addChild(new HAnimSegment("hanim_l_sternoclavicular").setDEF("hanim_l_clavicle").setName("l_clavicle")
                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle"))
                                                  .addChild(new Transform().setTranslation(new float[] {0.082f ,1.4488f ,-0.0353f })
                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32224().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f225().getArray()))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32226().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f227().getArray()))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32228().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f229().getArray()))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32230().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f231().getArray()))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32232().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f233().getArray()))))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setDEF("hanim_l_clavicle_pt").setName("l_clavicle_pt").setTranslation(new float[] {0.0271f ,1.4943f ,0.0394f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_clavicale_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setDEF("hanim_l_acromion_pt").setName("l_acromion_pt").setTranslation(new float[] {0.2032f ,1.476f ,-0.049f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_acromion_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setDEF("hanim_l_axilla_proximal_pt").setName("l_axilla_proximal_pt").setTranslation(new float[] {0.1777f ,1.4065f ,-0.0075f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_ant_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setDEF("hanim_l_axilla_distal_pt").setName("l_axilla_distal_pt").setTranslation(new float[] {0.1706f ,1.4072f ,-0.0875f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_post_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                .addChild(new HAnimJoint("hanim_l_sternoclavicular").setDEF("hanim_l_acromioclavicular").setName("l_acromioclavicular").setCenter(new float[] {0.0962f ,1.4269f ,-0.0424f })
                                                  .addChild(new HAnimSegment("hanim_l_acromioclavicular").setDEF("hanim_l_scapula").setName("l_scapula")
                                                    .addChild(new TouchSensor().setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula"))
                                                    .addChild(new Transform().setTranslation(new float[] {0.0962f ,1.4269f ,-0.0424f })
                                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32234().getArray())
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f235().getArray())))))
                                                  .addChild(new HAnimJoint("hanim_l_acromioclavicular").setDEF("hanim_l_shoulder").setName("l_shoulder").setCenter(new float[] {0.2029f ,1.4376f ,-0.0387f })
                                                    .addChild(new HAnimSegment("hanim_l_shoulder").setDEF("hanim_l_upperarm").setName("l_upperarm")
                                                      .addChild(new TouchSensor().setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm"))
                                                      .addChild(new Transform().setTranslation(new float[] {0.2029f ,1.4376f ,-0.0387f })
                                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32236().getArray())
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f237().getArray()))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32238().getArray())
                                                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f239().getArray()))))
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setDEF("hanim_l_humeral_lateral_epicondyle_pt").setName("l_humeral_lateral_epicondyle_pt").setTranslation(new float[] {0.228f ,1.1482f ,-0.11f })
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_lateral_epicn_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint("hanim_l_shoulder").setDEF("hanim_l_elbow").setName("l_elbow").setCenter(new float[] {0.2014f ,1.1357f ,-0.0682f })
                                                      .addChild(new HAnimSegment("hanim_l_elbow").setDEF("hanim_l_forearm").setName("l_forearm")
                                                        .addChild(new TouchSensor().setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm"))
                                                        .addChild(new Transform().setTranslation(new float[] {0.2014f ,1.1357f ,-0.0682f })
                                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32240().getArray())
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f241().getArray()))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32242().getArray())
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f243().getArray()))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32244().getArray())
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f245().getArray()))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32246().getArray())
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f247().getArray()))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32248().getArray())
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f249().getArray()))))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_radial_styloid_pt").setName("l_radial_styloid_pt").setTranslation(new float[] {0.1901f ,0.8645f ,-0.0415f })
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_radial_styloid_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_olecranon_pt").setName("l_olecranon_pt").setTranslation(new float[] {0.1962f ,1.1375f ,-0.1123f })
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_olecranon_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_humeral_medial_epicondyle_pt").setName("l_humeral_medial_epicondyle_pt").setTranslation(new float[] {0.1735f ,1.1272f ,-0.1113f })
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_medial_epicn_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_radiale_pt").setName("l_radiale_pt").setTranslation(new float[] {0.2182f ,1.1212f ,-0.1167f })
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_radiale_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint("hanim_l_elbow").setDEF("hanim_l_radiocarpal").setName("l_radiocarpal").setCenter(new float[] {0.1984f ,0.8663f ,-0.0583f })
                                                        .addChild(new HAnimSegment("hanim_l_radiocarpal").setDEF("hanim_l_carpal").setName("l_carpal")
                                                          .addChild(new TouchSensor().setDescription("HAnimJoint l_radiocarpal, HAnimSegment l_carpal"))
                                                          .addChild(new Transform().setTranslation(new float[] {0.1984f ,0.8663f ,-0.0583f })
                                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32250().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f251().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32252().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f253().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32254().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f255().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32256().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f257().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32258().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f259().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32260().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f261().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32262().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f263().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32264().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f265().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32266().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteViewpointLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f267().getArray()))))
                                                          .addChild(new HAnimSite("hanim_l_carpal").setDEF("hanim_l_metacarpal_phalanx_2_pt").setName("l_metacarpal_phalanx_2_pt").setTranslation(new float[] {0.2009f ,0.8139f ,-0.0237f })
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_pha2_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite("hanim_l_carpal").setDEF("hanim_l_ulnar_styloid_pt").setName("l_ulnar_styloid_pt").setTranslation(new float[] {0.2142f ,0.8529f ,-0.0648f })
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_ulnar_styloid_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite("hanim_l_carpal").setDEF("hanim_l_metacarpal_phalanx_5_pt").setName("l_metacarpal_phalanx_5_pt").setTranslation(new float[] {0.1929f ,0.786f ,-0.1122f })
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_pha5_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite("hanim_l_carpal").setDEF("hanim_l_hand_front_view").setName("l_hand_front_view").setTranslation(new float[] {0.3f ,0.75f ,0.45f })
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_hand_front_view"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                            .addChild(new Viewpoint().setDEF("hanim_l_hand_front_viewpoint").setDescription("left hand front").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.7f ,0f }))
                                                            .addChild(new Anchor().setDescription("HAnimSite hanim_l_hand_front_view Viewpoint").setUrl(new MFString268().getArray())
                                                              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat269().getArray())
                                                                .addChild(new WorldInfo().setInfo(new MFString270().getArray()))
                                                                .addChild(new Shape().setUSE("HAnimSiteViewpointShape"))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_carpometacarpal_1").setName("l_carpometacarpal_1").setCenter(new float[] {0.1924f ,0.8472f ,-0.0534f })
                                                          .addChild(new HAnimSegment("hanim_l_carpometacarpal_1").setDEF("hanim_l_metacarpal_1").setName("l_metacarpal_1")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1924f ,0.8472f ,-0.0534f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32271().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f272().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setDEF("hanim_l_metacarpophalangeal_1").setName("l_metacarpophalangeal_1").setCenter(new float[] {0.1951f ,0.8226f ,0.0246f })
                                                            .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_1").setDEF("hanim_l_carpal_proximal_phalanx_1").setName("l_carpal_proximal_phalanx_1")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1951f ,0.8226f ,0.0246f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32273().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f274().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setName("l_carpal_interphalangeal_1").setCenter(new float[] {0.1955f ,0.8159f ,0.0464f })
                                                              .addChild(new HAnimSegment("hanim_l_carpal_interphalangeal_1").setDEF("hanim_l_carpal_distal_phalanx_1").setName("l_carpal_distal_phalanx_1")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1955f ,0.8159f ,0.0464f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32275().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f276().getArray()))))
                                                                .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_1").setDEF("hanim_l_carpal_distal_phalanx_1_pt").setName("l_carpal_distal_phalanx_1_pt").setTranslation(new float[] {0.1982f ,0.8061f ,0.0759f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_thumb_distal_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_carpometacarpal_2").setName("l_carpometacarpal_2").setCenter(new float[] {0.1983f ,0.8024f ,-0.028f })
                                                          .addChild(new HAnimSegment("hanim_l_carpometacarpal_2").setDEF("hanim_l_metacarpal_2").setName("l_metacarpal_2")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_index0, HAnimSegment l_metacarpal_2"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.8024f ,-0.028f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32277().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f278().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setDEF("hanim_l_metacarpophalangeal_2").setName("l_metacarpophalangeal_2").setCenter(new float[] {0.1983f ,0.7815f ,-0.028f })
                                                            .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_2").setDEF("hanim_l_carpal_proximal_phalanx_2").setName("l_carpal_proximal_phalanx_2")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.7815f ,-0.028f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32279().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f280().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setCenter(new float[] {0.2017f ,0.7363f ,-0.0248f })
                                                              .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_middle_phalanx_2").setName("l_carpal_middle_phalanx_2")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.2017f ,0.7363f ,-0.0248f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32281().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f282().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setCenter(new float[] {0.2028f ,0.7139f ,-0.0236f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_2").setDEF("hanim_l_carpal_distal_phalanx_2").setName("l_carpal_distal_phalanx_2")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2028f ,0.7139f ,-0.0236f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32283().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f284().getArray()))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32285().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f286().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_2").setDEF("hanim_l_carpal_distal_phalanx_2_pt").setName("l_carpal_distal_phalanx_2_pt").setTranslation(new float[] {0.2089f ,0.6858f ,-0.0245f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_index_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_2").setDEF("hanim_l_dactylion_pt").setName("l_dactylion_pt").setTranslation(new float[] {0.2056f ,0.6743f ,-0.0482f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_dactylion_pt"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_carpometacarpal_3").setName("l_carpometacarpal_3").setCenter(new float[] {0.1987f ,0.8029f ,-0.053f })
                                                          .addChild(new HAnimSegment("hanim_l_carpometacarpal_3").setDEF("hanim_l_metacarpal_3").setName("l_metacarpal_3")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_middle0, HAnimSegment l_metacarpal_3"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1987f ,0.8029f ,-0.053f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32287().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f288().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setDEF("hanim_l_metacarpophalangeal_3").setName("l_metacarpophalangeal_3").setCenter(new float[] {0.1987f ,0.7818f ,-0.053f })
                                                            .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_3").setDEF("hanim_l_carpal_proximal_phalanx_3").setName("l_carpal_proximal_phalanx_3")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1987f ,0.7818f ,-0.053f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32289().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f290().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setCenter(new float[] {0.2013f ,0.7273f ,-0.0503f })
                                                              .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_middle_phalanx_3").setName("l_carpal_middle_phalanx_3")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.2013f ,0.7273f ,-0.0503f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32291().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f292().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setCenter(new float[] {0.2026f ,0.7011f ,-0.0494f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_3").setDEF("hanim_l_carpal_distal_phalanx_3").setName("l_carpal_distal_phalanx_3")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2026f ,0.7011f ,-0.0494f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32293().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f294().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_3").setDEF("hanim_l_carpal_distal_phalanx_3_pt").setName("l_carpal_distal_phalanx_3_pt").setTranslation(new float[] {0.208f ,0.6731f ,-0.0491f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_middle_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_carpometacarpal_4").setName("l_carpometacarpal_4").setCenter(new float[] {0.1956f ,0.8019f ,-0.0794f })
                                                          .addChild(new HAnimSegment("hanim_l_carpometacarpal_4").setDEF("hanim_l_metacarpal_4").setName("l_metacarpal_4")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_ring0, HAnimSegment l_metacarpal_4"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1956f ,0.8019f ,-0.0794f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32295().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f296().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setDEF("hanim_l_metacarpophalangeal_4").setName("l_metacarpophalangeal_4").setCenter(new float[] {0.1956f ,0.7815f ,-0.0794f })
                                                            .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_4").setDEF("hanim_l_carpal_proximal_phalanx_4").setName("l_carpal_proximal_phalanx_4")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1956f ,0.7815f ,-0.0794f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32297().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f298().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setCenter(new float[] {0.1973f ,0.7287f ,-0.0777f })
                                                              .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_middle_phalanx_4").setName("l_carpal_middle_phalanx_4")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1973f ,0.7287f ,-0.0777f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32299().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f300().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setCenter(new float[] {0.1983f ,0.7045f ,-0.0767f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_4").setDEF("hanim_l_carpal_distal_phalanx_4").setName("l_carpal_distal_phalanx_4")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.7045f ,-0.0767f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32301().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f302().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_4").setDEF("hanim_l_carpal_distal_phalanx_4_pt").setName("l_carpal_distal_phalanx_4_pt").setTranslation(new float[] {0.2035f ,0.675f ,-0.0756f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_ring_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_carpometacarpal_5").setName("l_carpometacarpal_5").setCenter(new float[] {0.1925f ,0.8066f ,-0.1036f })
                                                          .addChild(new HAnimSegment("hanim_l_carpometacarpal_5").setDEF("hanim_l_metacarpal_5").setName("l_metacarpal_5")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1925f ,0.8066f ,-0.1036f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32303().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f304().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setDEF("hanim_l_metacarpophalangeal_5").setName("l_metacarpophalangeal_5").setCenter(new float[] {0.1925f ,0.7866f ,-0.1036f })
                                                            .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_5").setDEF("hanim_l_carpal_proximal_phalanx_5").setName("l_carpal_proximal_phalanx_5")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1925f ,0.7866f ,-0.1036f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32305().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f306().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setCenter(new float[] {0.1938f ,0.7452f ,-0.1024f })
                                                              .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_middle_phalanx_5").setName("l_carpal_middle_phalanx_5")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1938f ,0.7452f ,-0.1024f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32307().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f308().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_distal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setCenter(new float[] {0.1948f ,0.7277f ,-0.1017f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_5").setDEF("hanim_l_carpal_distal_phalanx_5").setName("l_carpal_distal_phalanx_5")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1948f ,0.7277f ,-0.1017f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32309().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f310().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_l_carpal_distal_phalanx_5").setDEF("hanim_l_carpal_distal_phalanx_5_pt").setName("l_carpal_distal_phalanx_5_pt").setTranslation(new float[] {0.2014f ,0.7009f ,-0.1012f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_pinky_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_r_sternoclavicular").setName("r_sternoclavicular").setCenter(new float[] {-0.082f ,1.4488f ,-0.0353f })
                                                .addChild(new HAnimSegment("hanim_r_sternoclavicular").setDEF("hanim_r_clavicle").setName("r_clavicle")
                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle"))
                                                  .addChild(new Transform().setTranslation(new float[] {-0.082f ,1.4488f ,-0.0353f })
                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32311().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f312().getArray()))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32313().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f314().getArray()))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32315().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f316().getArray()))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32317().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f318().getArray()))))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32319().getArray())
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f320().getArray()))))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setDEF("hanim_r_clavicle_pt").setName("r_clavicle_pt").setTranslation(new float[] {-0.0115f ,1.4943f ,0.04f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_clavicale_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setDEF("hanim_r_acromion_pt").setName("r_acromion_pt").setTranslation(new float[] {-0.1905f ,1.4791f ,-0.0431f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_acromion_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setDEF("hanim_r_axilla_proximal_pt").setName("r_axilla_proximal_pt").setTranslation(new float[] {-0.1626f ,1.4072f ,-0.0031f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_ant_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setDEF("hanim_r_axilla_distal_pt").setName("r_axilla_distal_pt").setTranslation(new float[] {-0.1603f ,1.4098f ,-0.0826f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_post_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                .addChild(new HAnimJoint("hanim_r_sternoclavicular").setDEF("hanim_r_acromioclavicular").setName("r_acromioclavicular").setCenter(new float[] {-0.0962f ,1.4269f ,-0.0424f })
                                                  .addChild(new HAnimSegment("hanim_r_acromioclavicular").setDEF("hanim_r_scapula").setName("r_scapula")
                                                    .addChild(new TouchSensor().setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula"))
                                                    .addChild(new Transform().setTranslation(new float[] {-0.0962f ,1.4269f ,-0.0424f })
                                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32321().getArray())
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f322().getArray())))))
                                                  .addChild(new HAnimJoint("hanim_r_acromioclavicular").setDEF("hanim_r_shoulder").setName("r_shoulder").setCenter(new float[] {-0.2029f ,1.4376f ,-0.0387f })
                                                    .addChild(new HAnimSegment("hanim_r_shoulder").setDEF("hanim_r_upperarm").setName("r_upperarm")
                                                      .addChild(new TouchSensor().setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm"))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.2029f ,1.4376f ,-0.0387f })
                                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32323().getArray())
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f324().getArray()))))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32325().getArray())
                                                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f326().getArray()))))
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setDEF("hanim_r_humeral_lateral_epicondyle_pt").setName("r_humeral_lateral_epicondyle_pt").setTranslation(new float[] {-0.2224f ,1.1517f ,-0.1033f })
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_lateral_epicn_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint("hanim_r_shoulder").setDEF("hanim_r_elbow").setName("r_elbow").setCenter(new float[] {-0.2014f ,1.1357f ,-0.0682f })
                                                      .addChild(new HAnimSegment("hanim_r_elbow").setDEF("hanim_r_forearm").setName("r_forearm")
                                                        .addChild(new TouchSensor().setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm"))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.2014f ,1.1357f ,-0.0682f })
                                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32327().getArray())
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f328().getArray()))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32329().getArray())
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f330().getArray()))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32331().getArray())
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f332().getArray()))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32333().getArray())
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f334().getArray()))))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32335().getArray())
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f336().getArray()))))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_radial_styloid_pt").setName("r_radial_styloid_pt").setTranslation(new float[] {-0.1884f ,0.8676f ,-0.036f })
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_radial_styloid_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_olecranon_pt").setName("r_olecranon_pt").setTranslation(new float[] {-0.1907f ,1.1405f ,-0.1065f })
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_olecranon_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_humeral_medial_epicondyle_pt").setName("r_humeral_medial_epicondyle_pt").setTranslation(new float[] {-0.168f ,1.1298f ,-0.1062f })
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_medial_epicn_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_radiale_pt").setName("r_radiale_pt").setTranslation(new float[] {-0.213f ,1.1305f ,-0.1091f })
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_radiale_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint("hanim_r_elbow").setDEF("hanim_r_radiocarpal").setName("r_radiocarpal").setCenter(new float[] {-0.1984f ,0.8663f ,-0.0583f })
                                                        .addChild(new HAnimSegment("hanim_r_radiocarpal").setDEF("hanim_r_carpal").setName("r_carpal")
                                                          .addChild(new TouchSensor().setDescription("HAnimJoint r_radiocarpal, HAnimSegment r_carpal"))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.1984f ,0.8663f ,-0.0583f })
                                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32337().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f338().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32339().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f340().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32341().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f342().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32343().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f344().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32345().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f346().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32347().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f348().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32349().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f350().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32351().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f352().getArray()))))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32353().getArray())
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteViewpointLineColorRGBA"))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f354().getArray()))))
                                                          .addChild(new HAnimSite("hanim_r_carpal").setDEF("hanim_r_metacarpal_phalanx_2_pt").setName("r_metacarpal_phalanx_2_pt").setTranslation(new float[] {-0.1977f ,0.8169f ,-0.0177f })
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_pha2_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite("hanim_r_carpal").setDEF("hanim_r_ulnar_styloid_pt").setName("r_ulnar_styloid_pt").setTranslation(new float[] {-0.2117f ,0.8562f ,-0.0584f })
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_ulnar_styloid_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite("hanim_r_carpal").setDEF("hanim_r_metacarpal_phalanx_5_pt").setName("r_metacarpal_phalanx_5_pt").setTranslation(new float[] {-0.1929f ,0.789f ,-0.1064f })
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_pha5_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite("hanim_r_carpal").setDEF("hanim_r_hand_front_view").setName("r_hand_front_view").setTranslation(new float[] {-0.3f ,0.75f ,0.45f })
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_hand_front_view"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                            .addChild(new Viewpoint().setDEF("hanim_r_hand_front_viewpoint").setDescription("right hand front").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.7f ,0f }))
                                                            .addChild(new Anchor().setDescription("HAnimSite hanim_r_hand_front_view Viewpoint").setUrl(new MFString355().getArray())
                                                              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat356().getArray())
                                                                .addChild(new WorldInfo().setInfo(new MFString357().getArray()))
                                                                .addChild(new Shape().setUSE("HAnimSiteViewpointShape"))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_carpometacarpal_1").setName("r_carpometacarpal_1").setCenter(new float[] {-0.1924f ,0.8472f ,-0.0534f })
                                                          .addChild(new HAnimSegment("hanim_r_carpometacarpal_1").setDEF("hanim_r_metacarpal_1").setName("r_metacarpal_1")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1924f ,0.8472f ,-0.0534f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32358().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f359().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setDEF("hanim_r_metacarpophalangeal_1").setName("r_metacarpophalangeal_1").setCenter(new float[] {-0.1951f ,0.8226f ,0.0246f })
                                                            .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_1").setDEF("hanim_r_carpal_proximal_phalanx_1").setName("r_carpal_proximal_phalanx_1")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1951f ,0.8226f ,0.0246f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32360().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f361().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setName("r_carpal_interphalangeal_1").setCenter(new float[] {-0.1955f ,0.8159f ,0.0464f })
                                                              .addChild(new HAnimSegment("hanim_r_carpal_interphalangeal_1").setDEF("hanim_r_carpal_distal_phalanx_1").setName("r_carpal_distal_phalanx_1")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1955f ,0.8159f ,0.0464f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32362().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f363().getArray()))))
                                                                .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_1").setDEF("hanim_r_carpal_distal_phalanx_1_pt").setName("r_carpal_distal_phalanx_1_pt").setTranslation(new float[] {-0.1869f ,0.809f ,0.082f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_thumb_distal_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_carpometacarpal_2").setName("r_carpometacarpal_2").setCenter(new float[] {-0.1983f ,0.8024f ,-0.028f })
                                                          .addChild(new HAnimSegment("hanim_r_carpometacarpal_2").setDEF("hanim_r_metacarpal_2").setName("r_metacarpal_2")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_index0, HAnimSegment r_metacarpal_2"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1983f ,0.8024f ,-0.028f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32364().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f365().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setDEF("hanim_r_metacarpophalangeal_2").setName("r_metacarpophalangeal_2").setCenter(new float[] {-0.1983f ,0.7815f ,-0.028f })
                                                            .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_2").setDEF("hanim_r_carpal_proximal_phalanx_2").setName("r_carpal_proximal_phalanx_2")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1983f ,0.7815f ,-0.028f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32366().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f367().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-0.2017f ,0.7363f ,-0.0248f })
                                                              .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_middle_phalanx_2").setName("r_carpal_middle_phalanx_2")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2017f ,0.7363f ,-0.0248f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32368().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f369().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2").setCenter(new float[] {-0.2028f ,0.7139f ,-0.0236f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_2").setDEF("hanim_r_carpal_distal_phalanx_2").setName("r_carpal_distal_phalanx_2")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2028f ,0.7139f ,-0.0236f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32370().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f371().getArray()))))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32372().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f373().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_2").setDEF("hanim_r_carpal_distal_phalanx_2_pt").setName("r_carpal_distal_phalanx_2_pt").setTranslation(new float[] {-0.198f ,0.6883f ,-0.018f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_index_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_2").setDEF("hanim_r_dactylion_pt").setName("r_dactylion_pt").setTranslation(new float[] {-0.1941f ,0.6772f ,-0.0423f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_dactylion_pt"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_carpometacarpal_3").setName("r_carpometacarpal_3").setCenter(new float[] {-0.1987f ,0.8029f ,-0.053f })
                                                          .addChild(new HAnimSegment("hanim_r_carpometacarpal_3").setDEF("hanim_r_metacarpal_3").setName("r_metacarpal_3")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_middle0, HAnimSegment r_metacarpal_3"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1987f ,0.8029f ,-0.053f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32374().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f375().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setDEF("hanim_r_metacarpophalangeal_3").setName("r_metacarpophalangeal_3").setCenter(new float[] {-0.1987f ,0.7818f ,-0.053f })
                                                            .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_3").setDEF("hanim_r_carpal_proximal_phalanx_3").setName("r_carpal_proximal_phalanx_3")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1987f ,0.7818f ,-0.053f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32376().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f377().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-0.2013f ,0.7273f ,-0.0503f })
                                                              .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_middle_phalanx_3").setName("r_carpal_middle_phalanx_3")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2013f ,0.7273f ,-0.0503f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32378().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f379().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3").setCenter(new float[] {-0.2026f ,0.7011f ,-0.0494f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_3").setDEF("hanim_r_carpal_distal_phalanx_3").setName("r_carpal_distal_phalanx_3")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2026f ,0.7011f ,-0.0494f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32380().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f381().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_3").setDEF("hanim_r_carpal_distal_phalanx_3_pt").setName("r_carpal_distal_phalanx_3_pt").setTranslation(new float[] {-0.1969f ,0.6758f ,-0.0427f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_middle_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_carpometacarpal_4").setName("r_carpometacarpal_4").setCenter(new float[] {-0.1956f ,0.8019f ,-0.0794f })
                                                          .addChild(new HAnimSegment("hanim_r_carpometacarpal_4").setDEF("hanim_r_metacarpal_4").setName("r_metacarpal_4")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_ring0, HAnimSegment r_metacarpal_4"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1956f ,0.8019f ,-0.0794f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32382().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f383().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setDEF("hanim_r_metacarpophalangeal_4").setName("r_metacarpophalangeal_4").setCenter(new float[] {-0.1956f ,0.7815f ,-0.0794f })
                                                            .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_4").setDEF("hanim_r_carpal_proximal_phalanx_4").setName("r_carpal_proximal_phalanx_4")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1956f ,0.7815f ,-0.0794f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32384().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f385().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_proximal_interphalangeal_4").setCenter(new float[] {-0.1973f ,0.7287f ,-0.0777f })
                                                              .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_middle_phalanx_4").setName("r_carpal_middle_phalanx_4")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1973f ,0.7287f ,-0.0777f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32386().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f387().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4").setCenter(new float[] {-0.1983f ,0.7045f ,-0.0767f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_4").setDEF("hanim_r_carpal_distal_phalanx_4").setName("r_carpal_distal_phalanx_4")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1983f ,0.7045f ,-0.0767f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32388().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f389().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_4").setDEF("hanim_r_carpal_distal_phalanx_4_pt").setName("r_carpal_distal_phalanx_4_pt").setTranslation(new float[] {-0.1934f ,0.6778f ,-0.0693f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_ring_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_carpometacarpal_5").setName("r_carpometacarpal_5").setCenter(new float[] {-0.1925f ,0.8066f ,-0.1036f })
                                                          .addChild(new HAnimSegment("hanim_r_carpometacarpal_5").setDEF("hanim_r_metacarpal_5").setName("r_metacarpal_5")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1925f ,0.8066f ,-0.1036f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32390().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f391().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setDEF("hanim_r_metacarpophalangeal_5").setName("r_metacarpophalangeal_5").setCenter(new float[] {-0.1925f ,0.7866f ,-0.1036f })
                                                            .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_5").setDEF("hanim_r_carpal_proximal_phalanx_5").setName("r_carpal_proximal_phalanx_5")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1925f ,0.7866f ,-0.1036f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32392().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f393().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_proximal_interphalangeal_5").setCenter(new float[] {-0.1938f ,0.7452f ,-0.1024f })
                                                              .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_middle_phalanx_5").setName("r_carpal_middle_phalanx_5")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1938f ,0.7452f ,-0.1024f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32394().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f395().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_distal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5").setCenter(new float[] {-0.1948f ,0.7277f ,-0.1017f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_5").setDEF("hanim_r_carpal_distal_phalanx_5").setName("r_carpal_distal_phalanx_5")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1948f ,0.7277f ,-0.1017f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32396().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f397().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_r_carpal_distal_phalanx_5").setDEF("hanim_r_carpal_distal_phalanx_5_pt").setName("r_carpal_distal_phalanx_5_pt").setTranslation(new float[] {-0.1938f ,0.7035f ,-0.0949f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_pinky_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))))))))))))))))))))))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_sacroiliac"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vl5"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vl4"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vl3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vl2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vl1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt12"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt11"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt10"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt9"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt8"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt7"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt6"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt5"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt4"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vc7"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vc6"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vc5"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vc4"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vc3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vc2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vc1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_skullbase"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_temporomandibular"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_acromioclavicular"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_acromioclavicular"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_carpal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_carpal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_carpometacarpal_1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_carpometacarpal_1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_carpometacarpal_2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_carpometacarpal_2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_carpometacarpal_3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_carpometacarpal_3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_carpometacarpal_4"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_carpometacarpal_4"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_carpometacarpal_5"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_carpometacarpal_5"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_eyeball_joint"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_eyeball_joint"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_eyebrow_joint"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_eyebrow_joint"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_eyelid_joint"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_eyelid_joint"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_hip"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_hip"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_radiocarpal"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_radiocarpal"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_sternoclavicular"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_sternoclavicular"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_talocrural"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_talocrural"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_tarsometatarsal_2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_tarsometatarsal_2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_skull"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_jaw"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_c1"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_c2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_c3"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_c4"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_c5"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_c6"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_c7"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t1"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t3"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t4"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t5"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t6"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t7"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t8"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t9"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t10"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t11"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t12"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l1"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l3"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l4"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l5"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_sacrum"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_carpal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_carpal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_carpal_distal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_carpal_distal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_carpal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_carpal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_carpal_distal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_carpal_distal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_carpal_distal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_carpal_distal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_carpal_distal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_carpal_distal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_carpal_middle_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_carpal_middle_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_carpal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_carpal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_clavicle"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_clavicle"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_eyeball"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_eyeball"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_eyebrow"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_eyebrow"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_eyelid"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_eyelid"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_metacarpal_1"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_metacarpal_1"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_metacarpal_2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_metacarpal_2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_metacarpal_3"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_metacarpal_3"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_metacarpal_4"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_metacarpal_4"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_metacarpal_5"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_metacarpal_5"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_metatarsal_2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_metatarsal_2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_scapula"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_scapula"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_talus"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_talus"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_upperarm"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_crotch_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_skull_vertex_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_sellion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_supramenton_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_nuchale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_suprasternale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_cervicale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_substernale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_rib10_midspine_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_waist_preferred_posterior_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_navel_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_acromion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_acromion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_asis_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_asis_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_axilla_distal_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_axilla_distal_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_axilla_proximal_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_axilla_proximal_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_calcaneus_posterior_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_calcaneus_posterior_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_carpal_distal_phalanx_1_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_carpal_distal_phalanx_1_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_carpal_distal_phalanx_2_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_carpal_distal_phalanx_2_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_carpal_distal_phalanx_3_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_carpal_distal_phalanx_3_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_carpal_distal_phalanx_4_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_carpal_distal_phalanx_4_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_carpal_distal_phalanx_5_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_carpal_distal_phalanx_5_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_clavicle_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_clavicle_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_dactylion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_dactylion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_femoral_lateral_epicondyle_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_femoral_lateral_epicondyle_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_femoral_medial_epicondyle_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_femoral_medial_epicondyle_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_forefoot_tip_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_forefoot_tip_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_gonion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_gonion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_humeral_lateral_epicondyle_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_humeral_lateral_epicondyle_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_humeral_medial_epicondyle_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_humeral_medial_epicondyle_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_iliocristale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_iliocristale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_infraorbitale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_infraorbitale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_knee_crease_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_knee_crease_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_lateral_malleolus_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_lateral_malleolus_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_medial_malleolus_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_medial_malleolus_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_metacarpal_phalanx_2_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_metacarpal_phalanx_2_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_metacarpal_phalanx_5_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_metacarpal_phalanx_5_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_metatarsal_phalanx_1_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_metatarsal_phalanx_1_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_metatarsal_phalanx_5_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_metatarsal_phalanx_5_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_neck_base_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_neck_base_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_olecranon_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_olecranon_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_psis_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_psis_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_radial_styloid_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_radial_styloid_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_radiale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_radiale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_rib10_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_rib10_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_temporomandibular_l_site_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_temporomandibular_r_site_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_sphyrion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_sphyrion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_tarsal_distal_phalanx_2_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_tarsal_distal_phalanx_2_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_thelion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_thelion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_tragion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_tragion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_trochanterion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_trochanterion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_ulnar_styloid_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_ulnar_styloid_pt"))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_l_inclined_view").setName("l_inclined_view").setTranslation(new float[] {1.62f ,1.05f ,2.06f }).setRotation(new float[] {-0.113f ,0.993f ,0.0347f ,0.671f })
            .addChild(new TouchSensor().setDescription("HAnimSite l_inclined_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_l_inclined_viewpoint").setDescription("left inclined").setPosition(new float[] {0f ,0f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite hanim_l_inclined_view Viewpoint").setUrl(new MFString398().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat399().getArray())
                .addChild(new WorldInfo().setInfo(new MFString400().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_r_inclined_view").setName("r_inclined_view").setTranslation(new float[] {-1.62f ,1.05f ,2.06f }).setRotation(new float[] {-0.113f ,-0.993f ,0.0347f ,0.671f })
            .addChild(new TouchSensor().setDescription("HAnimSite r_inclined_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_r_inclined_viewpoint").setDescription("right inclined").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.9f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite hanim_r_inclined_view Viewpoint").setUrl(new MFString401().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat402().getArray())
                .addChild(new WorldInfo().setInfo(new MFString403().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_front_view").setName("front_view").setTranslation(new float[] {0f ,0.85f ,2.58f })
            .addChild(new TouchSensor().setDescription("HAnimSite front_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_front_viewpoint").setDescription("front").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.9f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite hanim_front_view Viewpoint").setUrl(new MFString404().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat405().getArray())
                .addChild(new WorldInfo().setInfo(new MFString406().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_back_view").setName("back_view").setTranslation(new float[] {0f ,0.85f ,-2.58f }).setRotation(new float[] {0f ,1f ,0f ,3.14f })
            .addChild(new TouchSensor().setDescription("HAnimSite back_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_back_viewpoint").setDescription("back").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.9f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite hanim_back_view Viewpoint").setUrl(new MFString407().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat408().getArray())
                .addChild(new WorldInfo().setInfo(new MFString409().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_l_side_view").setName("l_side_view").setTranslation(new float[] {2.6f ,0.854f ,0f }).setRotation(new float[] {0f ,1f ,0f ,1.5708f })
            .addChild(new TouchSensor().setDescription("HAnimSite l_side_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_l_side_viewpoint").setDescription("left side").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.9f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite hanim_l_side_view Viewpoint").setUrl(new MFString410().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat411().getArray())
                .addChild(new WorldInfo().setInfo(new MFString412().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_Top_view").setName("Top_view").setTranslation(new float[] {0f ,3.5f ,0f }).setRotation(new float[] {1f ,0f ,0f ,-1.57f })
            .addChild(new TouchSensor().setDescription("HAnimSite Top_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_Top_viewpoint").setDescription("Top").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.9f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite hanim_Top_view Viewpoint").setUrl(new MFString413().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat414().getArray())
                .addChild(new WorldInfo().setInfo(new MFString415().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_front_close_view").setName("front_close_view").setTranslation(new float[] {0f ,0.854f ,1.575f })
            .addChild(new TouchSensor().setDescription("HAnimSite front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_front_close_viewpoint").setDescription("front close").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0f ,1.575f }))
            .addChild(new Anchor().setDescription("HAnimSite hanim_front_close_view Viewpoint").setUrl(new MFString416().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat417().getArray())
                .addChild(new WorldInfo().setInfo(new MFString418().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_side_close_view").setName("side_close_view").setTranslation(new float[] {1.56f ,0.854f ,0f }).setRotation(new float[] {0f ,1f ,0f ,1.5708f })
            .addChild(new TouchSensor().setDescription("HAnimSite side_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_side_close_viewpoint").setDescription("side close").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {1.6f ,0f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite hanim_side_close_view Viewpoint").setUrl(new MFString419().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat420().getArray())
                .addChild(new WorldInfo().setInfo(new MFString421().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_head_front_close_view").setName("head_front_close_view").setTranslation(new float[] {0f ,1.5f ,1f })
            .addChild(new TouchSensor().setDescription("HAnimSite head_front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_head_front_close_viewpoint").setDescription("head front close").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0f ,1f }))
            .addChild(new Anchor().setDescription("HAnimSite hanim_head_front_close_view Viewpoint").setUrl(new MFString422().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat423().getArray())
                .addChild(new WorldInfo().setInfo(new MFString424().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_chest_front_close_view").setName("chest_front_close_view").setTranslation(new float[] {0f ,1.2f ,1f })
            .addChild(new TouchSensor().setDescription("HAnimSite chest_front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_chest_front_close_viewpoint").setDescription("chest front close").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0f ,1f }))
            .addChild(new Anchor().setDescription("HAnimSite hanim_chest_front_close_view Viewpoint").setUrl(new MFString425().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat426().getArray())
                .addChild(new WorldInfo().setInfo(new MFString427().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_pelvis_front_close_view").setName("pelvis_front_close_view").setTranslation(new float[] {0f ,0.8f ,1f })
            .addChild(new TouchSensor().setDescription("HAnimSite pelvis_front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_pelvis_front_close_viewpoint").setDescription("pelvis front close").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0f ,1f }))
            .addChild(new Anchor().setDescription("HAnimSite hanim_pelvis_front_close_view Viewpoint").setUrl(new MFString428().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat429().getArray())
                .addChild(new WorldInfo().setInfo(new MFString430().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_knees_front_close_view").setName("knees_front_close_view").setTranslation(new float[] {0f ,0.4f ,1f })
            .addChild(new TouchSensor().setDescription("HAnimSite knees_front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_knees_front_close_viewpoint").setDescription("knees front close").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.4f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite hanim_knees_front_close_view Viewpoint").setUrl(new MFString431().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat432().getArray())
                .addChild(new WorldInfo().setInfo(new MFString433().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_feet_front_close_view").setName("feet_front_close_view").setTranslation(new float[] {0f ,0f ,1f })
            .addChild(new TouchSensor().setDescription("HAnimSite feet_front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_feet_front_close_viewpoint").setDescription("feet front close").setPosition(new float[] {0f ,0f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite hanim_feet_front_close_view Viewpoint").setUrl(new MFString434().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat435().getArray())
                .addChild(new WorldInfo().setInfo(new MFString436().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_eye_level_view").setName("eye_level_view").setTranslation(new float[] {0f ,1.6332f ,0.0502f })
            .addChild(new TouchSensor().setDescription("HAnimSite eye_level_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_eye_level_viewpoint").setDescription("eye level looking forward").setPosition(new float[] {0f ,0f ,0f }).setOrientation(new float[] {0f ,1f ,0f ,3.141593f }))
            .addChild(new Anchor().setDescription("HAnimSite hanim_eye_level_view Viewpoint").setUrl(new MFString437().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat438().getArray())
                .addChild(new WorldInfo().setInfo(new MFString439().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_eyeball_site_view"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_eyeball_site_view"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_hand_front_view"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_hand_front_view"))));
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.3f ,0.3f ,0.3f });
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "});
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.7504f });
  }
}
private class MFInt323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA4 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f5 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.824f ,0.0277f ,0f ,0.9149f ,0.0016f });
  }
}
private class MFInt326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f7 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.824f ,0.0277f ,0.0028f ,1.0568f ,-0.0776f });
  }
}
private class MFInt328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f9 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9149f ,0.0016f ,0.0961f ,0.9124f ,-0.0001f });
  }
}
private class MFInt3210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f11 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9149f ,0.0016f ,-0.0961f ,0.9124f ,-0.0001f });
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA13 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,0f ,0f ,1f ,1f ,0f ,0f ,0.1f });
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9149f ,0.0016f ,-0.1525f ,1.0628f ,0.0035f });
  }
}
private class MFInt3215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f16 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9149f ,0.0016f ,-0.1689f ,0.8419f ,0.0352f });
  }
}
private class MFInt3217 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f18 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9149f ,0.0016f ,0.1612f ,1.0537f ,0.0008f });
  }
}
private class MFInt3219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f20 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9149f ,0.0016f ,0.1677f ,0.8336f ,0.0303f });
  }
}
private class MFInt3221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f22 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9149f ,0.0016f ,-0.0887f ,1.0021f ,0.1112f });
  }
}
private class MFInt3223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f24 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9149f ,0.0016f ,0.0925f ,0.9983f ,0.1052f });
  }
}
private class MFInt3225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9149f ,0.0016f ,-0.0716f ,1.019f ,-0.1138f });
  }
}
private class MFInt3227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f28 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9149f ,0.0016f ,0.0774f ,1.019f ,-0.1151f });
  }
}
private class MFInt3229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.9149f ,0.0016f ,0.0034f ,0.8266f ,0.0257f });
  }
}
private class MFInt3231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFVec3f32 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.008f ,0f ,-0.008f ,0f ,0f ,0f ,0f ,0.008f ,0.008f ,0f ,0f ,0f ,0f ,-0.008f ,0f ,-0.008f ,0f });
  }
}
private class MFInt3233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f34 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f ,0.9124f ,-0.0001f ,0.104f ,0.4867f ,0.0308f });
  }
}
private class MFInt3235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f36 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f ,0.9124f ,-0.0001f ,0.0993f ,0.4881f ,-0.0309f });
  }
}
private class MFInt3237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f38 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f ,0.9124f ,-0.0001f ,0.1598f ,0.4967f ,0.0297f });
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f40 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f ,0.9124f ,-0.0001f ,0.0398f ,0.4946f ,0.0303f });
  }
}
private class MFInt3241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f42 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.104f ,0.4867f ,0.0308f ,0.1101f ,0.0656f ,-0.0736f });
  }
}
private class MFInt3243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f44 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f ,0.0656f ,-0.0736f ,0.1086f ,0.0001f ,-0.0368f });
  }
}
private class MFInt3245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f46 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f ,0.0656f ,-0.0736f ,0.1308f ,0.0597f ,-0.1032f });
  }
}
private class MFInt3247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f48 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f ,0.0656f ,-0.0736f ,0.089f ,0.0716f ,-0.0881f });
  }
}
private class MFInt3249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f50 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f ,0.0656f ,-0.0736f ,0.089f ,0.0575f ,-0.0943f });
  }
}
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f52 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f ,0.0656f ,-0.0736f ,0.0974f ,0.0259f ,-0.1171f });
  }
}
private class MFInt3253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f54 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f ,0.0001f ,-0.0368f ,0.1086f ,0.0001f ,0.0368f });
  }
}
private class MFInt3255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f56 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f ,0.0001f ,0.0368f ,0.1086f ,0f ,0.0762f });
  }
}
private class MFInt3257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f58 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f ,0.0001f ,0.0368f ,0.0816f ,0.0232f ,0.0106f });
  }
}
private class MFInt3259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f60 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f ,0f ,0.0762f ,0.1354f ,0.0016f ,0.1476f });
  }
}
private class MFInt3261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f62 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f ,0f ,0.0762f ,0.1825f ,0.007f ,0.0928f });
  }
}
private class MFInt3263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f64 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f ,0f ,0.0762f ,0.1195f ,0.0079f ,0.1433f });
  }
}
private class MFInt3265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f66 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f ,0.9124f ,-0.0001f ,-0.104f ,0.4867f ,0.0308f });
  }
}
private class MFInt3267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f68 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f ,0.9124f ,-0.0001f ,-0.0825f ,0.4932f ,-0.0326f });
  }
}
private class MFInt3269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f70 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f ,0.9124f ,-0.0001f ,-0.1421f ,0.4992f ,0.031f });
  }
}
private class MFInt3271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f72 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f ,0.9124f ,-0.0001f ,-0.0221f ,0.5014f ,0.0289f });
  }
}
private class MFInt3273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f74 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.104f ,0.4867f ,0.0308f ,-0.1101f ,0.0656f ,-0.0736f });
  }
}
private class MFInt3275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f76 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f ,0.0656f ,-0.0736f ,-0.1086f ,0.0001f ,-0.0368f });
  }
}
private class MFInt3277 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f78 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f ,0.0656f ,-0.0736f ,-0.1006f ,0.0658f ,-0.1075f });
  }
}
private class MFInt3279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f80 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f ,0.0656f ,-0.0736f ,-0.0591f ,0.076f ,-0.0928f });
  }
}
private class MFInt3281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f82 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f ,0.0656f ,-0.0736f ,-0.0603f ,0.061f ,-0.1002f });
  }
}
private class MFInt3283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f84 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f ,0.0656f ,-0.0736f ,-0.0692f ,0.0297f ,-0.1221f });
  }
}
private class MFInt3285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f86 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f ,0.0001f ,-0.0368f ,-0.1086f ,0.0001f ,0.0368f });
  }
}
private class MFInt3287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f88 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f ,0.0001f ,0.0368f ,-0.1086f ,0f ,0.0762f });
  }
}
private class MFInt3289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f90 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f ,0.0001f ,0.0368f ,-0.0521f ,0.026f ,0.0127f });
  }
}
private class MFInt3291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f92 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f ,0f ,0.0762f ,-0.1043f ,0.0227f ,0.145f });
  }
}
private class MFInt3293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f94 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f ,0f ,0.0762f ,-0.1523f ,0.0166f ,0.0895f });
  }
}
private class MFInt3295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f96 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f ,0f ,0.0762f ,-0.0883f ,0.0134f ,0.1383f });
  }
}
private class MFInt3297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f98 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f ,1.0568f ,-0.0776f ,0.0035f ,1.0925f ,-0.0787f });
  }
}
private class MFInt3299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f100 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f ,1.0568f ,-0.0776f ,0f ,1.0915f ,-0.1091f });
  }
}
private class MFInt32101 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f102 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f ,1.0568f ,-0.0776f ,0.0069f ,1.0966f ,0.1017f });
  }
}
private class MFInt32103 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f104 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0035f ,1.0925f ,-0.0787f ,0.0041f ,1.1276f ,-0.0796f });
  }
}
private class MFInt32105 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f106 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0041f ,1.1276f ,-0.0796f ,0.0045f ,1.1546f ,-0.08f });
  }
}
private class MFInt32107 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f108 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f ,1.1546f ,-0.08f ,0.0048f ,1.1912f ,-0.0805f });
  }
}
private class MFInt32109 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f110 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f ,1.1546f ,-0.08f ,-0.0711f ,1.1941f ,0.1016f });
  }
}
private class MFInt32111 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f112 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f ,1.1546f ,-0.08f ,0.0871f ,1.1925f ,0.0992f });
  }
}
private class MFInt32113 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f114 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f ,1.1546f ,-0.08f ,0.0049f ,1.1908f ,-0.1113f });
  }
}
private class MFInt32115 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f116 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0048f ,1.1912f ,-0.0805f ,0.0051f ,1.2278f ,-0.0808f });
  }
}
private class MFInt32117 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f118 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0051f ,1.2278f ,-0.0808f ,0.0053f ,1.2679f ,-0.081f });
  }
}
private class MFInt32119 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f120 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0053f ,1.2679f ,-0.081f ,0.0056f ,1.2848f ,-0.0822f });
  }
}
private class MFInt32121 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f122 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f ,1.2848f ,-0.0822f ,0.0057f ,1.3126f ,-0.0838f });
  }
}
private class MFInt32123 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f124 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f ,1.2848f ,-0.0822f ,0.0085f ,1.2995f ,0.1147f });
  }
}
private class MFInt32125 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f126 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f ,1.3126f ,-0.0838f ,0.0057f ,1.3382f ,-0.0845f });
  }
}
private class MFInt32127 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f128 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f ,1.3126f ,-0.0838f ,-0.0736f ,1.3385f ,0.1217f });
  }
}
private class MFInt32129 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f130 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f ,1.3126f ,-0.0838f ,0.0918f ,1.3382f ,0.1192f });
  }
}
private class MFInt32131 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f132 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f ,1.3382f ,-0.0845f ,0.0058f ,1.3625f ,-0.0833f });
  }
}
private class MFInt32133 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f134 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0058f ,1.3625f ,-0.0833f ,0.0059f ,1.3866f ,-0.08f });
  }
}
private class MFInt32135 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f136 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0059f ,1.3866f ,-0.08f ,0.006f ,1.4102f ,-0.0745f });
  }
}
private class MFInt32137 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f138 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.006f ,1.4102f ,-0.0745f ,0.0061f ,1.432f ,-0.0675f });
  }
}
private class MFInt32139 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f140 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0061f ,1.432f ,-0.0675f ,0.0062f ,1.4583f ,-0.057f });
  }
}
private class MFInt32141 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f142 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0062f ,1.4583f ,-0.057f ,0.0063f ,1.4761f ,-0.0484f });
  }
}
private class MFInt32143 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f144 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0063f ,1.4761f ,-0.0484f ,0.0065f ,1.4951f ,-0.0387f });
  }
}
private class MFInt32145 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f146 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f ,1.4951f ,-0.0387f ,0.0066f ,1.5132f ,-0.0301f });
  }
}
private class MFInt32147 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f148 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f ,1.4951f ,-0.0387f ,0.082f ,1.4488f ,-0.0353f });
  }
}
private class MFInt32149 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f150 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f ,1.4951f ,-0.0387f ,-0.082f ,1.4488f ,-0.0353f });
  }
}
private class MFInt32151 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f152 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f ,1.4951f ,-0.0387f ,0.0084f ,1.4714f ,0.0551f });
  }
}
private class MFInt32153 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f154 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f ,1.4951f ,-0.0387f ,0.0064f ,1.52f ,-0.0815f });
  }
}
private class MFInt32155 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f156 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.5132f ,-0.0301f ,0.0066f ,1.5357f ,-0.0143f });
  }
}
private class MFInt32157 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f158 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.5132f ,-0.0301f ,-0.0419f ,1.5149f ,-0.022f });
  }
}
private class MFInt32159 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f160 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.5132f ,-0.0301f ,0.0646f ,1.5141f ,-0.038f });
  }
}
private class MFInt32161 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f162 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.5357f ,-0.0143f ,0.0066f ,1.552f ,-0.0082f });
  }
}
private class MFInt32163 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f164 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.552f ,-0.0082f ,0.0066f ,1.5662f ,-0.0084f });
  }
}
private class MFInt32165 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f166 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.5662f ,-0.0084f ,0.0066f ,1.58f ,-0.0103f });
  }
}
private class MFInt32167 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f168 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.58f ,-0.0103f ,0.0066f ,1.5928f ,-0.0103f });
  }
}
private class MFInt32169 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f170 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.5928f ,-0.0103f ,0.0066f ,1.6144f ,-0.0034f });
  }
}
private class MFInt32171 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f172 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f ,1.6144f ,-0.0034f ,0.0044f ,1.6209f ,0.0236f });
  }
}
private class MFInt32173 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f174 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,0.0336f ,1.6332f ,0.0502f });
  }
}
private class MFInt32175 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f176 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,0.0336f ,1.6332f ,0.0502f });
  }
}
private class MFInt32177 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f178 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,0.0336f ,1.635f ,0.0506f });
  }
}
private class MFInt32179 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f180 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,-0.0336f ,1.6332f ,0.0502f });
  }
}
private class MFInt32181 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f182 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,-0.0336f ,1.6332f ,0.0502f });
  }
}
private class MFInt32183 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f184 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,-0.0336f ,1.635f ,0.0506f });
  }
}
private class MFInt32185 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f186 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,0f ,1.63f ,0.015f });
  }
}
private class MFInt32187 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f188 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,0.005f ,1.7504f ,0.0055f });
  }
}
private class MFInt32189 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f190 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,0.0058f ,1.6316f ,0.0852f });
  }
}
private class MFInt32191 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f192 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,-0.0237f ,1.6171f ,0.0752f });
  }
}
private class MFInt32193 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f194 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,0.0341f ,1.6171f ,0.0752f });
  }
}
private class MFInt32195 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f196 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,0.0061f ,1.541f ,0.0805f });
  }
}
private class MFInt32197 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f198 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,-0.0646f ,1.6347f ,0.0302f });
  }
}
private class MFInt32199 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f200 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,-0.052f ,1.5529f ,0.0347f });
  }
}
private class MFInt32201 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f202 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,0.0739f ,1.6348f ,0.0282f });
  }
}
private class MFInt32203 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f204 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,0.0631f ,1.553f ,0.033f });
  }
}
private class MFInt32205 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f206 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f ,1.6209f ,0.0236f ,0.0039f ,1.5972f ,-0.0796f });
  }
}
private class MFInt32207 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFColorRGBA208 {
  private org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f ,1f ,0f ,1f ,1f ,1f ,0f ,0.1f });
  }
}
private class MFVec3f209 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0336f ,1.6332f ,0.0502f ,0.034f ,1.64f ,0.05f });
  }
}
private class MFString210 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_eyeball_site_viewpoint"});
  }
}
private class MFFloat211 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString212 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFInt32213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFVec3f214 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFInt32215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f216 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0336f ,1.6332f ,0.0502f ,-0.034f ,1.64f ,0.05f });
  }
}
private class MFString217 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_r_eyeball_site_viewpoint"});
  }
}
private class MFFloat218 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString219 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFInt32220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f221 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.63f ,0.015f ,0.045f ,1.63f ,0f });
  }
}
private class MFInt32222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f223 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.63f ,0.015f ,-0.045f ,1.63f ,0f });
  }
}
private class MFInt32224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f225 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f ,1.4488f ,-0.0353f ,0.0962f ,1.4269f ,-0.0424f });
  }
}
private class MFInt32226 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f227 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f ,1.4488f ,-0.0353f ,0.0271f ,1.4943f ,0.0394f });
  }
}
private class MFInt32228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f229 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f ,1.4488f ,-0.0353f ,0.2032f ,1.476f ,-0.049f });
  }
}
private class MFInt32230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f231 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f ,1.4488f ,-0.0353f ,0.1777f ,1.4065f ,-0.0075f });
  }
}
private class MFInt32232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f233 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f ,1.4488f ,-0.0353f ,0.1706f ,1.4072f ,-0.0875f });
  }
}
private class MFInt32234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f235 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0962f ,1.4269f ,-0.0424f ,0.2029f ,1.4376f ,-0.0387f });
  }
}
private class MFInt32236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f237 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f ,1.4376f ,-0.0387f ,0.2014f ,1.1357f ,-0.0682f });
  }
}
private class MFInt32238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f239 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f ,1.4376f ,-0.0387f ,0.228f ,1.1482f ,-0.11f });
  }
}
private class MFInt32240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f241 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f ,1.1357f ,-0.0682f ,0.1984f ,0.8663f ,-0.0583f });
  }
}
private class MFInt32242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f243 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f ,1.1357f ,-0.0682f ,0.1901f ,0.8645f ,-0.0415f });
  }
}
private class MFInt32244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f245 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f ,1.1357f ,-0.0682f ,0.1962f ,1.1375f ,-0.1123f });
  }
}
private class MFInt32246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f247 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f ,1.1357f ,-0.0682f ,0.1735f ,1.1272f ,-0.1113f });
  }
}
private class MFInt32248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f249 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f ,1.1357f ,-0.0682f ,0.2182f ,1.1212f ,-0.1167f });
  }
}
private class MFInt32250 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f251 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,0.1924f ,0.8472f ,-0.0534f });
  }
}
private class MFInt32252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f253 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,0.1983f ,0.8024f ,-0.028f });
  }
}
private class MFInt32254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f255 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,0.1987f ,0.8029f ,-0.053f });
  }
}
private class MFInt32256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f257 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,0.1956f ,0.8019f ,-0.0794f });
  }
}
private class MFInt32258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f259 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,0.1925f ,0.8066f ,-0.1036f });
  }
}
private class MFInt32260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f261 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,0.2009f ,0.8139f ,-0.0237f });
  }
}
private class MFInt32262 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f263 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,0.2142f ,0.8529f ,-0.0648f });
  }
}
private class MFInt32264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f265 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,0.1929f ,0.786f ,-0.1122f });
  }
}
private class MFInt32266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f267 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f ,0.8663f ,-0.0583f ,0.3f ,0.75f ,0.45f });
  }
}
private class MFString268 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_hand_front_viewpoint"});
  }
}
private class MFFloat269 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString270 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFInt32271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f272 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1924f ,0.8472f ,-0.0534f ,0.1951f ,0.8226f ,0.0246f });
  }
}
private class MFInt32273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f274 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1951f ,0.8226f ,0.0246f ,0.1955f ,0.8159f ,0.0464f });
  }
}
private class MFInt32275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f276 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1955f ,0.8159f ,0.0464f ,0.1982f ,0.8061f ,0.0759f });
  }
}
private class MFInt32277 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f278 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f ,0.8024f ,-0.028f ,0.1983f ,0.7815f ,-0.028f });
  }
}
private class MFInt32279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f280 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f ,0.7815f ,-0.028f ,0.2017f ,0.7363f ,-0.0248f });
  }
}
private class MFInt32281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f282 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2017f ,0.7363f ,-0.0248f ,0.2028f ,0.7139f ,-0.0236f });
  }
}
private class MFInt32283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f284 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2028f ,0.7139f ,-0.0236f ,0.2089f ,0.6858f ,-0.0245f });
  }
}
private class MFInt32285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f286 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2028f ,0.7139f ,-0.0236f ,0.2056f ,0.6743f ,-0.0482f });
  }
}
private class MFInt32287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f288 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f ,0.8029f ,-0.053f ,0.1987f ,0.7818f ,-0.053f });
  }
}
private class MFInt32289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f290 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f ,0.7818f ,-0.053f ,0.2013f ,0.7273f ,-0.0503f });
  }
}
private class MFInt32291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f292 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2013f ,0.7273f ,-0.0503f ,0.2026f ,0.7011f ,-0.0494f });
  }
}
private class MFInt32293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f294 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2026f ,0.7011f ,-0.0494f ,0.208f ,0.6731f ,-0.0491f });
  }
}
private class MFInt32295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f296 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f ,0.8019f ,-0.0794f ,0.1956f ,0.7815f ,-0.0794f });
  }
}
private class MFInt32297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f298 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f ,0.7815f ,-0.0794f ,0.1973f ,0.7287f ,-0.0777f });
  }
}
private class MFInt32299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f300 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1973f ,0.7287f ,-0.0777f ,0.1983f ,0.7045f ,-0.0767f });
  }
}
private class MFInt32301 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f302 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f ,0.7045f ,-0.0767f ,0.2035f ,0.675f ,-0.0756f });
  }
}
private class MFInt32303 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f304 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f ,0.8066f ,-0.1036f ,0.1925f ,0.7866f ,-0.1036f });
  }
}
private class MFInt32305 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f306 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f ,0.7866f ,-0.1036f ,0.1938f ,0.7452f ,-0.1024f });
  }
}
private class MFInt32307 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f308 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1938f ,0.7452f ,-0.1024f ,0.1948f ,0.7277f ,-0.1017f });
  }
}
private class MFInt32309 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f310 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1948f ,0.7277f ,-0.1017f ,0.2014f ,0.7009f ,-0.1012f });
  }
}
private class MFInt32311 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f312 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f ,1.4488f ,-0.0353f ,-0.0962f ,1.4269f ,-0.0424f });
  }
}
private class MFInt32313 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f314 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f ,1.4488f ,-0.0353f ,-0.0115f ,1.4943f ,0.04f });
  }
}
private class MFInt32315 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f316 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f ,1.4488f ,-0.0353f ,-0.1905f ,1.4791f ,-0.0431f });
  }
}
private class MFInt32317 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f318 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f ,1.4488f ,-0.0353f ,-0.1626f ,1.4072f ,-0.0031f });
  }
}
private class MFInt32319 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f320 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f ,1.4488f ,-0.0353f ,-0.1603f ,1.4098f ,-0.0826f });
  }
}
private class MFInt32321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f322 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0962f ,1.4269f ,-0.0424f ,-0.2029f ,1.4376f ,-0.0387f });
  }
}
private class MFInt32323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f324 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2029f ,1.4376f ,-0.0387f ,-0.2014f ,1.1357f ,-0.0682f });
  }
}
private class MFInt32325 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f326 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2029f ,1.4376f ,-0.0387f ,-0.2224f ,1.1517f ,-0.1033f });
  }
}
private class MFInt32327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f328 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f ,1.1357f ,-0.0682f ,-0.1984f ,0.8663f ,-0.0583f });
  }
}
private class MFInt32329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f330 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f ,1.1357f ,-0.0682f ,-0.1884f ,0.8676f ,-0.036f });
  }
}
private class MFInt32331 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f332 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f ,1.1357f ,-0.0682f ,-0.1907f ,1.1405f ,-0.1065f });
  }
}
private class MFInt32333 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f334 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f ,1.1357f ,-0.0682f ,-0.168f ,1.1298f ,-0.1062f });
  }
}
private class MFInt32335 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f336 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f ,1.1357f ,-0.0682f ,-0.213f ,1.1305f ,-0.1091f });
  }
}
private class MFInt32337 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f338 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f ,0.8663f ,-0.0583f ,-0.1924f ,0.8472f ,-0.0534f });
  }
}
private class MFInt32339 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f340 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f ,0.8663f ,-0.0583f ,-0.1983f ,0.8024f ,-0.028f });
  }
}
private class MFInt32341 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f342 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f ,0.8663f ,-0.0583f ,-0.1987f ,0.8029f ,-0.053f });
  }
}
private class MFInt32343 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f344 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f ,0.8663f ,-0.0583f ,-0.1956f ,0.8019f ,-0.0794f });
  }
}
private class MFInt32345 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f346 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f ,0.8663f ,-0.0583f ,-0.1925f ,0.8066f ,-0.1036f });
  }
}
private class MFInt32347 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f348 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f ,0.8663f ,-0.0583f ,-0.1977f ,0.8169f ,-0.0177f });
  }
}
private class MFInt32349 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f350 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f ,0.8663f ,-0.0583f ,-0.2117f ,0.8562f ,-0.0584f });
  }
}
private class MFInt32351 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f352 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f ,0.8663f ,-0.0583f ,-0.1929f ,0.789f ,-0.1064f });
  }
}
private class MFInt32353 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f354 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f ,0.8663f ,-0.0583f ,-0.3f ,0.75f ,0.45f });
  }
}
private class MFString355 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_r_hand_front_viewpoint"});
  }
}
private class MFFloat356 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString357 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFInt32358 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f359 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1924f ,0.8472f ,-0.0534f ,-0.1951f ,0.8226f ,0.0246f });
  }
}
private class MFInt32360 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f361 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f ,0.8226f ,0.0246f ,-0.1955f ,0.8159f ,0.0464f });
  }
}
private class MFInt32362 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f363 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1955f ,0.8159f ,0.0464f ,-0.1869f ,0.809f ,0.082f });
  }
}
private class MFInt32364 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f365 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1983f ,0.8024f ,-0.028f ,-0.1983f ,0.7815f ,-0.028f });
  }
}
private class MFInt32366 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f367 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1983f ,0.7815f ,-0.028f ,-0.2017f ,0.7363f ,-0.0248f });
  }
}
private class MFInt32368 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f369 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2017f ,0.7363f ,-0.0248f ,-0.2028f ,0.7139f ,-0.0236f });
  }
}
private class MFInt32370 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f371 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2028f ,0.7139f ,-0.0236f ,-0.198f ,0.6883f ,-0.018f });
  }
}
private class MFInt32372 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f373 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2028f ,0.7139f ,-0.0236f ,-0.1941f ,0.6772f ,-0.0423f });
  }
}
private class MFInt32374 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f375 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1987f ,0.8029f ,-0.053f ,-0.1987f ,0.7818f ,-0.053f });
  }
}
private class MFInt32376 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f377 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1987f ,0.7818f ,-0.053f ,-0.2013f ,0.7273f ,-0.0503f });
  }
}
private class MFInt32378 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f379 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2013f ,0.7273f ,-0.0503f ,-0.2026f ,0.7011f ,-0.0494f });
  }
}
private class MFInt32380 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f381 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2026f ,0.7011f ,-0.0494f ,-0.1969f ,0.6758f ,-0.0427f });
  }
}
private class MFInt32382 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f383 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1956f ,0.8019f ,-0.0794f ,-0.1956f ,0.7815f ,-0.0794f });
  }
}
private class MFInt32384 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f385 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1956f ,0.7815f ,-0.0794f ,-0.1973f ,0.7287f ,-0.0777f });
  }
}
private class MFInt32386 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f387 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1973f ,0.7287f ,-0.0777f ,-0.1983f ,0.7045f ,-0.0767f });
  }
}
private class MFInt32388 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f389 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1983f ,0.7045f ,-0.0767f ,-0.1934f ,0.6778f ,-0.0693f });
  }
}
private class MFInt32390 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f391 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1925f ,0.8066f ,-0.1036f ,-0.1925f ,0.7866f ,-0.1036f });
  }
}
private class MFInt32392 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f393 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1925f ,0.7866f ,-0.1036f ,-0.1938f ,0.7452f ,-0.1024f });
  }
}
private class MFInt32394 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f395 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1938f ,0.7452f ,-0.1024f ,-0.1948f ,0.7277f ,-0.1017f });
  }
}
private class MFInt32396 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f397 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1948f ,0.7277f ,-0.1017f ,-0.1938f ,0.7035f ,-0.0949f });
  }
}
private class MFString398 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_inclined_viewpoint"});
  }
}
private class MFFloat399 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString400 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFString401 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_r_inclined_viewpoint"});
  }
}
private class MFFloat402 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString403 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFString404 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_front_viewpoint"});
  }
}
private class MFFloat405 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString406 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFString407 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_back_viewpoint"});
  }
}
private class MFFloat408 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString409 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFString410 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_side_viewpoint"});
  }
}
private class MFFloat411 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString412 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFString413 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_Top_viewpoint"});
  }
}
private class MFFloat414 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString415 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFString416 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_front_close_viewpoint"});
  }
}
private class MFFloat417 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString418 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFString419 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_side_close_viewpoint"});
  }
}
private class MFFloat420 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString421 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFString422 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_head_front_close_viewpoint"});
  }
}
private class MFFloat423 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString424 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFString425 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_chest_front_close_viewpoint"});
  }
}
private class MFFloat426 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString427 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFString428 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_pelvis_front_close_viewpoint"});
  }
}
private class MFFloat429 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString430 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFString431 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_knees_front_close_viewpoint"});
  }
}
private class MFFloat432 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString433 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFString434 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_feet_front_close_viewpoint"});
  }
}
private class MFFloat435 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString436 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
private class MFString437 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_eye_level_viewpoint"});
  }
}
private class MFFloat438 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f });
  }
}
private class MFString439 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
}
