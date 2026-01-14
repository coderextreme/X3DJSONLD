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
public class HAnim1SpecificationLOA3Animation implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new HAnim1SpecificationLOA3Animation().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/HAnim1SpecificationLOA3Animation.new.java.x3d");
    model.toFileJSON("../data/HAnim1SpecificationLOA3Animation.new.java.json");
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
        .addMeta(new meta().setName("title").setContent("HAnimSpecificationLOA3Animation.x3d"))
        .addMeta(new meta().setName("description").setContent("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships."))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"))
        .addMeta(new meta().setName("reference").setContent("HAnimSpecificationLOA3Illustrated.x3d"))
        .addMeta(new meta().setName("reference").setContent("HAnimSpecificationLOA3Invisible.x3d"))
        .addMeta(new meta().setName("reference").setContent("HAnimSpecificationExampleChangeLog.txt"))
        .addMeta(new meta().setName("reference").setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989."))
        .addMeta(new meta().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
        .addMeta(new meta().setName("reference").setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf"))
        .addMeta(new meta().setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl"))
        .addMeta(new meta().setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d"))
        .addMeta(new meta().setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d"))
        .addMeta(new meta().setName("created").setContent("24 April 2013"))
        .addMeta(new meta().setName("modified").setContent("Tue, 09 Sep 2025 19:39:08 GMT"))
        .addMeta(new meta().setName("error").setContent("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"))
        .addMeta(new meta().setName("Image").setContent("HAnimSpecificationLOA3MotionH3DViewer.png"))
        .addMeta(new meta().setName("Image").setContent("HAnimSpecificationLOA3MotionInstantReality.png"))
        .addMeta(new meta().setName("Image").setContent("HAnimSpecificationLOA3MotionOctagaVS.png"))
        .addMeta(new meta().setName("Image").setContent("HAnimSpecificationLOA3MotionView3dscene.png"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA1.png"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA2.png"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA3.png"))
        .addMeta(new meta().setName("creator").setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman"))
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
        .addChild(new HAnimHumanoid().setDEF("hanim_humanoid").setName("humanoid").setInfo(new MFString2().getArray()).setVersion("1.0")
          .addSkeleton(new HAnimJoint("hanim_humanoid").setDEF("hanim_humanoid_root").setName("humanoid_root").setCenter(new float[] {0f ,0.824f ,0.0277f })
            .addChild(new HAnimSegment("hanim_humanoid_root").setDEF("hanim_sacrum").setName("sacrum")
              .addChild(new TouchSensor().setDescription("HAnimJoint HumanoidRoot, HAnimSegment sacrum"))
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
                  .addChild(new TouchSensor().setDescription("HAnimSite r_iliocristale"))
                  .addChild(new Shape().setDEF("HAnimSiteShape")
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,0f ,0f })))
                    .setGeometry(new IndexedFaceSet().setDEF("DiamondIFS").setSolid(false).setCreaseAngle(0.5f ).setCoordIndex(new MFInt3231().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f32().getArray())))))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_r_trochanterion_pt").setName("r_trochanterion_pt").setTranslation(new float[] {-0.1689f ,0.8419f ,0.0352f })
                  .addChild(new TouchSensor().setDescription("HAnimSite r_trochanterion"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_iliocristale_pt").setName("l_iliocristale_pt").setTranslation(new float[] {0.1612f ,1.0537f ,0.0008f })
                  .addChild(new TouchSensor().setDescription("HAnimSite l_iliocristale"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_trochanterion_pt").setName("l_trochanterion_pt").setTranslation(new float[] {0.1677f ,0.8336f ,0.0303f })
                  .addChild(new TouchSensor().setDescription("HAnimSite l_trochanterion"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_r_asis_pt").setName("r_asis_pt").setTranslation(new float[] {-0.0887f ,1.0021f ,0.1112f })
                  .addChild(new TouchSensor().setDescription("HAnimSite r_asis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_asis_pt").setName("l_asis_pt").setTranslation(new float[] {0.0925f ,0.9983f ,0.1052f })
                  .addChild(new TouchSensor().setDescription("HAnimSite l_asis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_r_psis_pt").setName("r_psis_pt").setTranslation(new float[] {-0.0716f ,1.019f ,-0.1138f })
                  .addChild(new TouchSensor().setDescription("HAnimSite r_psis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_psis_pt").setName("l_psis_pt").setTranslation(new float[] {0.0774f ,1.019f ,-0.1151f })
                  .addChild(new TouchSensor().setDescription("HAnimSite l_psis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_crotch_pt").setName("crotch_pt").setTranslation(new float[] {0.0034f ,0.8266f ,0.0257f })
                  .addChild(new TouchSensor().setDescription("HAnimSite crotch"))
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
                    .addChild(new TouchSensor().setDescription("HAnimSite l_knee_crease"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_l_thigh").setDEF("hanim_l_femoral_lateral_epicn_pt").setName("l_femoral_lateral_epicn_pt").setTranslation(new float[] {0.1598f ,0.4967f ,0.0297f })
                    .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_lateral_epicn"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_l_thigh").setDEF("hanim_l_femoral_medial_epicn_pt").setName("l_femoral_medial_epicn_pt").setTranslation(new float[] {0.0398f ,0.4946f ,0.0303f })
                    .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_medial_epicn"))
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
                  .addChild(new HAnimJoint("hanim_l_knee").setDEF("hanim_l_ankle").setName("l_ankle").setRotation(new float[] {-0.999999999999999f ,0f ,0f ,0.486193023827777f }).setCenter(new float[] {0.1101f ,0.0656f ,-0.0736f })
                    .addChild(new HAnimSegment("hanim_l_ankle").setDEF("hanim_l_hindfoot").setName("l_hindfoot")
                      .addChild(new TouchSensor().setDescription("HAnimJoint l_ankle, HAnimSegment l_hindfoot"))
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
                      .addChild(new HAnimSite("hanim_l_hindfoot").setDEF("hanim_l_lateral_malleolus_pt").setName("l_lateral_malleolus_pt").setTranslation(new float[] {0.1308f ,0.0597f ,-0.1032f })
                        .addChild(new TouchSensor().setDescription("HAnimSite l_lateral_malleolus"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_l_hindfoot").setDEF("hanim_l_medial_malleolus_pt").setName("l_medial_malleolus_pt").setTranslation(new float[] {0.089f ,0.0716f ,-0.0881f })
                        .addChild(new TouchSensor().setDescription("HAnimSite l_medial_malleolus"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_l_hindfoot").setDEF("hanim_l_sphyrion_pt").setName("l_sphyrion_pt").setTranslation(new float[] {0.089f ,0.0575f ,-0.0943f })
                        .addChild(new TouchSensor().setDescription("HAnimSite l_sphyrion"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_l_hindfoot").setDEF("hanim_l_calcaneous_post_pt").setName("l_calcaneous_post_pt").setTranslation(new float[] {0.0974f ,0.0259f ,-0.1171f })
                        .addChild(new TouchSensor().setDescription("HAnimSite l_calcaneous_post"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                    .addChild(new HAnimJoint("hanim_l_ankle").setDEF("hanim_l_subtalar").setName("l_subtalar").setCenter(new float[] {0.1086f ,0.0001f ,-0.0368f })
                      .addChild(new HAnimSegment("hanim_l_subtalar").setDEF("hanim_l_midproximal").setName("l_midproximal")
                        .addChild(new TouchSensor().setDescription("HAnimJoint l_subtalar, HAnimSegment l_midproximal"))
                        .addChild(new Transform().setTranslation(new float[] {0.1086f ,0.0001f ,-0.0368f })
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3253().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_subtalar").setDEF("hanim_l_midtarsal").setName("l_midtarsal").setCenter(new float[] {0.1086f ,0.0001f ,0.0368f })
                        .addChild(new HAnimSegment("hanim_l_midtarsal").setDEF("hanim_l_middistal").setName("l_middistal")
                          .addChild(new TouchSensor().setDescription("HAnimJoint l_midtarsal, HAnimSegment l_middistal"))
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
                          .addChild(new HAnimSite("hanim_l_middistal").setDEF("hanim_l_metatarsal_pha1_pt").setName("l_metatarsal_pha1_pt").setTranslation(new float[] {0.0816f ,0.0232f ,0.0106f })
                            .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_pha1"))
                            .addChild(new Shape().setUSE("HAnimSiteShape"))))
                        .addChild(new HAnimJoint("hanim_l_midtarsal").setDEF("hanim_l_metatarsal").setName("l_metatarsal").setRotation(new float[] {-1f ,0f ,0f ,0.270107235459875f }).setCenter(new float[] {0.1086f ,0f ,0.0762f })
                          .addChild(new HAnimSegment("hanim_l_metatarsal").setDEF("hanim_l_forefoot").setName("l_forefoot")
                            .addChild(new TouchSensor().setDescription("HAnimJoint l_metatarsal, HAnimSegment l_forefoot"))
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
                            .addChild(new HAnimSite("hanim_l_forefoot").setDEF("hanim_l_forefoot_tip").setName("l_forefoot_tip").setTranslation(new float[] {0.1354f ,0.0016f ,0.1476f })
                              .addChild(new TouchSensor().setDescription("HAnimSite l_forefoot_tip"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite("hanim_l_forefoot").setDEF("hanim_l_metatarsal_pha5_pt").setName("l_metatarsal_pha5_pt").setTranslation(new float[] {0.1825f ,0.007f ,0.0928f })
                              .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_pha5"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite("hanim_l_forefoot").setDEF("hanim_l_digit2_pt").setName("l_digit2_pt").setTranslation(new float[] {0.1195f ,0.0079f ,0.1433f })
                              .addChild(new TouchSensor().setDescription("HAnimSite l_digit2"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_r_hip").setName("r_hip").setRotation(new float[] {0.999999999999999f ,0f ,0f ,0.486193023827777f }).setCenter(new float[] {-0.0961f ,0.9124f ,-0.0001f })
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
                    .addChild(new TouchSensor().setDescription("HAnimSite r_knee_crease"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_r_thigh").setDEF("hanim_r_femoral_lateral_epicn_pt").setName("r_femoral_lateral_epicn_pt").setTranslation(new float[] {-0.1421f ,0.4992f ,0.031f })
                    .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_lateral_epicn"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("hanim_r_thigh").setDEF("hanim_r_femoral_medial_epicn_pt").setName("r_femoral_medial_epicn_pt").setTranslation(new float[] {-0.0221f ,0.5014f ,0.0289f })
                    .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_medial_epicn"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint("hanim_r_hip").setDEF("hanim_r_knee").setName("r_knee").setRotation(new float[] {1f ,0f ,0f ,1.05341821829351f }).setCenter(new float[] {-0.104f ,0.4867f ,0.0308f })
                  .addChild(new HAnimSegment("hanim_r_knee").setDEF("hanim_r_calf").setName("r_calf")
                    .addChild(new TouchSensor().setDescription("HAnimJoint r_knee, HAnimSegment r_calf"))
                    .addChild(new Transform().setTranslation(new float[] {-0.104f ,0.4867f ,0.0308f })
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3273().getArray())
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                        .setCoord(new Coordinate().setPoint(new MFVec3f74().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_knee").setDEF("hanim_r_ankle").setName("r_ankle").setRotation(new float[] {-0.999999999999999f ,0f ,0f ,0.486193023827777f }).setCenter(new float[] {-0.1101f ,0.0656f ,-0.0736f })
                    .addChild(new HAnimSegment("hanim_r_ankle").setDEF("hanim_r_hindfoot").setName("r_hindfoot")
                      .addChild(new TouchSensor().setDescription("HAnimJoint r_ankle, HAnimSegment r_hindfoot"))
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
                      .addChild(new HAnimSite("hanim_r_hindfoot").setDEF("hanim_r_lateral_malleolus_pt").setName("r_lateral_malleolus_pt").setTranslation(new float[] {-0.1006f ,0.0658f ,-0.1075f })
                        .addChild(new TouchSensor().setDescription("HAnimSite r_lateral_malleolus"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_r_hindfoot").setDEF("hanim_r_medial_malleolus_pt").setName("r_medial_malleolus_pt").setTranslation(new float[] {-0.0591f ,0.076f ,-0.0928f })
                        .addChild(new TouchSensor().setDescription("HAnimSite r_medial_malleolus"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_r_hindfoot").setDEF("hanim_r_sphyrion_pt").setName("r_sphyrion_pt").setTranslation(new float[] {-0.0603f ,0.061f ,-0.1002f })
                        .addChild(new TouchSensor().setDescription("HAnimSite r_sphyrion"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_r_hindfoot").setDEF("hanim_r_calcaneous_post_pt").setName("r_calcaneous_post_pt").setTranslation(new float[] {-0.0692f ,0.0297f ,-0.1221f })
                        .addChild(new TouchSensor().setDescription("HAnimSite r_calcaneous_post"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                    .addChild(new HAnimJoint("hanim_r_ankle").setDEF("hanim_r_subtalar").setName("r_subtalar").setCenter(new float[] {-0.1086f ,0.0001f ,-0.0368f })
                      .addChild(new HAnimSegment("hanim_r_subtalar").setDEF("hanim_r_midproximal").setName("r_midproximal")
                        .addChild(new TouchSensor().setDescription("HAnimJoint r_subtalar, HAnimSegment r_midproximal"))
                        .addChild(new Transform().setTranslation(new float[] {-0.1086f ,0.0001f ,-0.0368f })
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3285().getArray())
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                            .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_subtalar").setDEF("hanim_r_midtarsal").setName("r_midtarsal").setCenter(new float[] {-0.1086f ,0.0001f ,0.0368f })
                        .addChild(new HAnimSegment("hanim_r_midtarsal").setDEF("hanim_r_middistal").setName("r_middistal")
                          .addChild(new TouchSensor().setDescription("HAnimJoint r_midtarsal, HAnimSegment r_middistal"))
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
                          .addChild(new HAnimSite("hanim_r_middistal").setDEF("hanim_r_metatarsal_pha1_pt").setName("r_metatarsal_pha1_pt").setTranslation(new float[] {-0.0521f ,0.026f ,0.0127f })
                            .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_pha1"))
                            .addChild(new Shape().setUSE("HAnimSiteShape"))))
                        .addChild(new HAnimJoint("hanim_r_midtarsal").setDEF("hanim_r_metatarsal").setName("r_metatarsal").setRotation(new float[] {-1f ,0f ,0f ,0.270107235459875f }).setCenter(new float[] {-0.1086f ,0f ,0.0762f })
                          .addChild(new HAnimSegment("hanim_r_metatarsal").setDEF("hanim_r_forefoot").setName("r_forefoot")
                            .addChild(new TouchSensor().setDescription("HAnimJoint r_metatarsal, HAnimSegment r_forefoot"))
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
                            .addChild(new HAnimSite("hanim_r_forefoot").setDEF("hanim_r_forefoot_tip").setName("r_forefoot_tip").setTranslation(new float[] {-0.1043f ,0.0227f ,0.145f })
                              .addChild(new TouchSensor().setDescription("HAnimSite r_forefoot_tip"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite("hanim_r_forefoot").setDEF("hanim_r_metatarsal_pha5_pt").setName("r_metatarsal_pha5_pt").setTranslation(new float[] {-0.1523f ,0.0166f ,0.0895f })
                              .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_pha5"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite("hanim_r_forefoot").setDEF("hanim_r_digit2_pt").setName("r_digit2_pt").setTranslation(new float[] {-0.0883f ,0.0134f ,0.1383f })
                              .addChild(new TouchSensor().setDescription("HAnimSite r_digit2"))
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
                .addChild(new HAnimSite("hanim_l5").setDEF("hanim_waist_preferred_post_pt").setName("waist_preferred_post_pt").setTranslation(new float[] {0f ,1.0915f ,-0.1091f })
                  .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_post"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("hanim_l5").setDEF("hanim_navel_pt").setName("navel_pt").setTranslation(new float[] {0.0069f ,1.0966f ,0.1017f })
                  .addChild(new TouchSensor().setDescription("HAnimSite navel"))
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
                        .addChild(new TouchSensor().setDescription("HAnimSite r_rib10"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_l2").setDEF("hanim_l_rib10_pt").setName("l_rib10_pt").setTranslation(new float[] {0.0871f ,1.1925f ,0.0992f })
                        .addChild(new TouchSensor().setDescription("HAnimSite l_rib10"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite("hanim_l2").setDEF("hanim_rib10_midspine_pt").setName("rib10_midspine_pt").setTranslation(new float[] {0.0049f ,1.1908f ,-0.1113f })
                        .addChild(new TouchSensor().setDescription("HAnimSite rib10_midspine"))
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
                                .addChild(new TouchSensor().setDescription("HAnimSite substernale"))
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
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_thelion"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                .addChild(new HAnimSite("hanim_t9").setDEF("hanim_l_thelion_pt").setName("l_thelion_pt").setTranslation(new float[] {0.0918f ,1.3382f ,0.1192f })
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_thelion"))
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
                                                  .addChild(new TouchSensor().setDescription("HAnimSite suprasternale"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite("hanim_t1").setDEF("hanim_cervicale_pt").setName("cervicale_pt").setTranslation(new float[] {0.0064f ,1.52f ,-0.0815f })
                                                  .addChild(new TouchSensor().setDescription("HAnimSite cervicale"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_vc7").setName("vc7").setRotation(new float[] {-0.999999999999996f ,0f ,0f ,0.222164034843446f }).setCenter(new float[] {0.0066f ,1.5132f ,-0.0301f })
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
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_neck_base"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_c7").setDEF("hanim_l_neck_base_pt").setName("l_neck_base_pt").setTranslation(new float[] {0.0646f ,1.5141f ,-0.038f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_neck_base"))
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
                                                    .addChild(new HAnimJoint("hanim_vc5").setDEF("hanim_vc4").setName("vc4").setRotation(new float[] {1f ,0f ,0f ,0.302520108222961f }).setCenter(new float[] {0.0066f ,1.5662f ,-0.0084f })
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
                                                            .addChild(new HAnimJoint("hanim_vc1").setDEF("hanim_skullbase").setName("skullbase").setRotation(new float[] {-1.00000000000001f ,0f ,0f ,0.231096035769597f }).setCenter(new float[] {0.0044f ,1.6209f ,0.0236f })
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
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_skull_tip").setName("skull_tip").setTranslation(new float[] {0.005f ,1.7504f ,0.0055f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite skull_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_sellion_pt").setName("sellion_pt").setTranslation(new float[] {0.0058f ,1.6316f ,0.0852f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite sellion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_r_infraorbitale_pt").setName("r_infraorbitale_pt").setTranslation(new float[] {-0.0237f ,1.6171f ,0.0752f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_infraorbitale"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_l_infraorbitale_pt").setName("l_infraorbitale_pt").setTranslation(new float[] {0.0341f ,1.6171f ,0.0752f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_infraorbitale"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_supramenton_pt").setName("supramenton_pt").setTranslation(new float[] {0.0061f ,1.541f ,0.0805f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite supramenton"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_r_tragion_pt").setName("r_tragion_pt").setTranslation(new float[] {-0.0646f ,1.6347f ,0.0302f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tragion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_r_gonion_pt").setName("r_gonion_pt").setTranslation(new float[] {-0.052f ,1.5529f ,0.0347f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_gonion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_l_tragion_pt").setName("l_tragion_pt").setTranslation(new float[] {0.0739f ,1.6348f ,0.0282f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tragion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_l_gonion_pt").setName("l_gonion_pt").setTranslation(new float[] {0.0631f ,1.553f ,0.033f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_gonion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_nuchale_pt").setName("nuchale_pt").setTranslation(new float[] {0.0039f ,1.5972f ,-0.0796f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite nuchale"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyeball_joint").setName("l_eyeball_joint").setRotation(new float[] {-0.999999999999999f ,0f ,0f ,0.277705039416179f }).setCenter(new float[] {0.0336f ,1.6332f ,0.0502f })
                                                                .addChild(new HAnimSegment("hanim_l_eyeball_joint").setDEF("hanim_l_eyeball").setName("l_eyeball")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.0336f ,1.6332f ,0.0502f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32207().getArray())
                                                                      .setColor(new ColorRGBA().setDEF("HAnimSiteViewpointLineColorRGBA").setColor(new MFColorRGBA208().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f209().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_l_eyeball").setDEF("hanim_l_eyeball_site_view").setName("l_eyeball_site_view").setTranslation(new float[] {0.034f ,1.64f ,0.05f })
                                                                    .addChild(new Viewpoint().setDEF("hanim_l_eyeball_site_viewpoint").setDescription("l_eyeball_site_viewpoint looking forward").setPosition(new float[] {0f ,0f ,0f }).setOrientation(new float[] {0f ,1f ,0f ,3.141593f }))
                                                                    .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_l_eyeball_site_view").setUrl(new MFString210().getArray())
                                                                      .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat211().getArray())
                                                                        .addChild(new WorldInfo().setInfo(new MFString212().getArray()))
                                                                        .addChild(new Shape().setDEF("HAnimSiteViewpointShape")
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f }).setTransparency(0.6f )))
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
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyeball_joint").setName("r_eyeball_joint").setRotation(new float[] {-0.999999999999999f ,0f ,0f ,0.277705039416179f }).setCenter(new float[] {-0.0336f ,1.6332f ,0.0502f })
                                                                .addChild(new HAnimSegment("hanim_r_eyeball_joint").setDEF("hanim_r_eyeball").setName("r_eyeball")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0336f ,1.6332f ,0.0502f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32215().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteViewpointLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f216().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_r_eyeball").setDEF("hanim_r_eyeball_site_view").setName("r_eyeball_site_view").setTranslation(new float[] {-0.034f ,1.64f ,0.05f })
                                                                    .addChild(new Viewpoint().setDEF("hanim_r_eyeball_site_viewpoint").setDescription("r_eyeball_site_viewpoint looking forward").setPosition(new float[] {0f ,0f ,0f }).setOrientation(new float[] {0f ,1f ,0f ,3.141593f }))
                                                                    .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_r_eyeball_site_view").setUrl(new MFString217().getArray())
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
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite temporomandibular_l_site"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite("hanim_jaw").setDEF("hanim_temporomandibular_r_site_pt").setName("temporomandibular_r_site_pt").setTranslation(new float[] {-0.045f ,1.63f ,0f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite temporomandibular_r_site"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_l_sternoclavicular").setName("l_sternoclavicular").setRotation(new float[] {0f ,0f ,1.00000000000003f ,0.108042894183947f }).setCenter(new float[] {0.082f ,1.4488f ,-0.0353f })
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
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setDEF("hanim_l_clavicale_pt").setName("l_clavicale_pt").setTranslation(new float[] {0.0271f ,1.4943f ,0.0394f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_clavicale"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setDEF("hanim_l_acromion_pt").setName("l_acromion_pt").setTranslation(new float[] {0.2032f ,1.476f ,-0.049f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_acromion"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setDEF("hanim_l_axilla_ant_pt").setName("l_axilla_ant_pt").setTranslation(new float[] {0.1777f ,1.4065f ,-0.0075f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_ant"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_l_clavicle").setDEF("hanim_l_axilla_post_pt").setName("l_axilla_post_pt").setTranslation(new float[] {0.1706f ,1.4072f ,-0.0875f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_post"))
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
                                                  .addChild(new HAnimJoint("hanim_l_acromioclavicular").setDEF("hanim_l_shoulder").setName("l_shoulder").setRotation(new float[] {0f ,0f ,1f ,0.950777468818762f }).setCenter(new float[] {0.2029f ,1.4376f ,-0.0387f })
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
                                                      .addChild(new HAnimSite("hanim_l_upperarm").setDEF("hanim_l_humeral_lateral_epicn_pt").setName("l_humeral_lateral_epicn_pt").setTranslation(new float[] {0.228f ,1.1482f ,-0.11f })
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_lateral_epicn"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint("hanim_l_shoulder").setDEF("hanim_l_elbow").setName("l_elbow").setRotation(new float[] {-1f ,0f ,0f ,0.297117959005863f }).setCenter(new float[] {0.2014f ,1.1357f ,-0.0682f })
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
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_radial_styloid"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_olecranon_pt").setName("l_olecranon_pt").setTranslation(new float[] {0.1962f ,1.1375f ,-0.1123f })
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_olecranon"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_humeral_medial_epicn_pt").setName("l_humeral_medial_epicn_pt").setTranslation(new float[] {0.1735f ,1.1272f ,-0.1113f })
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_medial_epicn"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_radiale_pt").setName("l_radiale_pt").setTranslation(new float[] {0.2182f ,1.1212f ,-0.1167f })
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_radiale"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint("hanim_l_elbow").setDEF("hanim_l_wrist").setName("l_wrist").setCenter(new float[] {0.1984f ,0.8663f ,-0.0583f })
                                                        .addChild(new HAnimSegment("hanim_l_wrist").setDEF("hanim_l_hand").setName("l_hand")
                                                          .addChild(new TouchSensor().setDescription("HAnimJoint l_wrist, HAnimSegment l_hand"))
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
                                                          .addChild(new HAnimSite("hanim_l_hand").setDEF("hanim_l_metacarpal_pha2_pt").setName("l_metacarpal_pha2_pt").setTranslation(new float[] {0.2009f ,0.8139f ,-0.0237f })
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_pha2"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite("hanim_l_hand").setDEF("hanim_l_ulnar_styloid_pt").setName("l_ulnar_styloid_pt").setTranslation(new float[] {0.2142f ,0.8529f ,-0.0648f })
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_ulnar_styloid"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite("hanim_l_hand").setDEF("hanim_l_metacarpal_pha5_pt").setName("l_metacarpal_pha5_pt").setTranslation(new float[] {0.1929f ,0.786f ,-0.1122f })
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_pha5"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite("hanim_l_hand").setDEF("hanim_l_hand_front_view").setName("l_hand_front_view").setTranslation(new float[] {0.3f ,0.75f ,0.45f })
                                                            .addChild(new Viewpoint().setDEF("hanim_l_hand_front_viewpoint").setDescription("left hand front").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.7f ,0f }))
                                                            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_l_hand_front_view").setUrl(new MFString268().getArray())
                                                              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat269().getArray())
                                                                .addChild(new WorldInfo().setInfo(new MFString270().getArray()))
                                                                .addChild(new Shape().setUSE("HAnimSiteViewpointShape"))))))
                                                        .addChild(new HAnimJoint("hanim_l_wrist").setDEF("hanim_l_thumb1").setName("l_thumb1").setRotation(new float[] {1f ,0f ,0f ,0.270107235459875f }).setCenter(new float[] {0.1924f ,0.8472f ,-0.0534f })
                                                          .addChild(new HAnimSegment("hanim_l_thumb1").setDEF("hanim_l_thumb_metacarpal").setName("l_thumb_metacarpal")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1924f ,0.8472f ,-0.0534f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32271().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f272().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_thumb1").setDEF("hanim_l_thumb2").setName("l_thumb2").setCenter(new float[] {0.1951f ,0.8226f ,0.0246f })
                                                            .addChild(new HAnimSegment("hanim_l_thumb2").setDEF("hanim_l_thumb_proximal").setName("l_thumb_proximal")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1951f ,0.8226f ,0.0246f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32273().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f274().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_thumb2").setDEF("hanim_l_thumb3").setName("l_thumb3").setCenter(new float[] {0.1955f ,0.8159f ,0.0464f })
                                                              .addChild(new HAnimSegment("hanim_l_thumb3").setDEF("hanim_l_thumb_distal").setName("l_thumb_distal")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1955f ,0.8159f ,0.0464f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32275().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f276().getArray()))))
                                                                .addChild(new HAnimSite("hanim_l_thumb_distal").setDEF("hanim_l_thumb_distal_tip").setName("l_thumb_distal_tip").setTranslation(new float[] {0.1982f ,0.8061f ,0.0759f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_thumb_distal_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))))))
                                                        .addChild(new HAnimJoint("hanim_l_wrist").setDEF("hanim_l_index0").setName("l_index0").setCenter(new float[] {0.1983f ,0.8024f ,-0.028f })
                                                          .addChild(new HAnimSegment("hanim_l_index0").setDEF("hanim_l_index_metacarpal").setName("l_index_metacarpal")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_index0, HAnimSegment l_index_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.8024f ,-0.028f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32277().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f278().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_index0").setDEF("hanim_l_index1").setName("l_index1").setCenter(new float[] {0.1983f ,0.7815f ,-0.028f })
                                                            .addChild(new HAnimSegment("hanim_l_index1").setDEF("hanim_l_index_proximal").setName("l_index_proximal")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_index1, HAnimSegment l_index_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.7815f ,-0.028f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32279().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f280().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_index1").setDEF("hanim_l_index2").setName("l_index2").setCenter(new float[] {0.2017f ,0.7363f ,-0.0248f })
                                                              .addChild(new HAnimSegment("hanim_l_index2").setDEF("hanim_l_index_middle").setName("l_index_middle")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_index2, HAnimSegment l_index_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.2017f ,0.7363f ,-0.0248f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32281().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f282().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_index2").setDEF("hanim_l_index3").setName("l_index3").setCenter(new float[] {0.2028f ,0.7139f ,-0.0236f })
                                                                .addChild(new HAnimSegment("hanim_l_index3").setDEF("hanim_l_index_distal").setName("l_index_distal")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_index3, HAnimSegment l_index_distal"))
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
                                                                  .addChild(new HAnimSite("hanim_l_index_distal").setDEF("hanim_l_index_distal_tip").setName("l_index_distal_tip").setTranslation(new float[] {0.2089f ,0.6858f ,-0.0245f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_index_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite("hanim_l_index_distal").setDEF("hanim_l_dactylion_pt").setName("l_dactylion_pt").setTranslation(new float[] {0.2056f ,0.6743f ,-0.0482f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_dactylion"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint("hanim_l_wrist").setDEF("hanim_l_middle0").setName("l_middle0").setCenter(new float[] {0.1987f ,0.8029f ,-0.053f })
                                                          .addChild(new HAnimSegment("hanim_l_middle0").setDEF("hanim_l_middle_metacarpal").setName("l_middle_metacarpal")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1987f ,0.8029f ,-0.053f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32287().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f288().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_middle0").setDEF("hanim_l_middle1").setName("l_middle1").setCenter(new float[] {0.1987f ,0.7818f ,-0.053f })
                                                            .addChild(new HAnimSegment("hanim_l_middle1").setDEF("hanim_l_middle_proximal").setName("l_middle_proximal")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_middle1, HAnimSegment l_middle_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1987f ,0.7818f ,-0.053f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32289().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f290().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_middle1").setDEF("hanim_l_middle2").setName("l_middle2").setCenter(new float[] {0.2013f ,0.7273f ,-0.0503f })
                                                              .addChild(new HAnimSegment("hanim_l_middle2").setDEF("hanim_l_middle_middle").setName("l_middle_middle")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_middle2, HAnimSegment l_middle_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.2013f ,0.7273f ,-0.0503f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32291().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f292().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_middle2").setDEF("hanim_l_middle3").setName("l_middle3").setCenter(new float[] {0.2026f ,0.7011f ,-0.0494f })
                                                                .addChild(new HAnimSegment("hanim_l_middle3").setDEF("hanim_l_middle_distal").setName("l_middle_distal")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_middle3, HAnimSegment l_middle_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2026f ,0.7011f ,-0.0494f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32293().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f294().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_l_middle_distal").setDEF("hanim_l_middle_distal_tip").setName("l_middle_distal_tip").setTranslation(new float[] {0.208f ,0.6731f ,-0.0491f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_middle_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint("hanim_l_wrist").setDEF("hanim_l_ring0").setName("l_ring0").setCenter(new float[] {0.1956f ,0.8019f ,-0.0794f })
                                                          .addChild(new HAnimSegment("hanim_l_ring0").setDEF("hanim_l_ring_metacarpal").setName("l_ring_metacarpal")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1956f ,0.8019f ,-0.0794f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32295().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f296().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_ring0").setDEF("hanim_l_ring1").setName("l_ring1").setCenter(new float[] {0.1956f ,0.7815f ,-0.0794f })
                                                            .addChild(new HAnimSegment("hanim_l_ring1").setDEF("hanim_l_ring_proximal").setName("l_ring_proximal")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_ring1, HAnimSegment l_ring_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1956f ,0.7815f ,-0.0794f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32297().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f298().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_ring1").setDEF("hanim_l_ring2").setName("l_ring2").setCenter(new float[] {0.1973f ,0.7287f ,-0.0777f })
                                                              .addChild(new HAnimSegment("hanim_l_ring2").setDEF("hanim_l_ring_middle").setName("l_ring_middle")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_ring2, HAnimSegment l_ring_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1973f ,0.7287f ,-0.0777f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32299().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f300().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_ring2").setDEF("hanim_l_ring3").setName("l_ring3").setCenter(new float[] {0.1983f ,0.7045f ,-0.0767f })
                                                                .addChild(new HAnimSegment("hanim_l_ring3").setDEF("hanim_l_ring_distal").setName("l_ring_distal")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_ring3, HAnimSegment l_ring_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.7045f ,-0.0767f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32301().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f302().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_l_ring_distal").setDEF("hanim_l_ring_distal_tip").setName("l_ring_distal_tip").setTranslation(new float[] {0.2035f ,0.675f ,-0.0756f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_ring_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint("hanim_l_wrist").setDEF("hanim_l_pinky0").setName("l_pinky0").setCenter(new float[] {0.1925f ,0.8066f ,-0.1036f })
                                                          .addChild(new HAnimSegment("hanim_l_pinky0").setDEF("hanim_l_pinky_metacarpal").setName("l_pinky_metacarpal")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1925f ,0.8066f ,-0.1036f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32303().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f304().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_pinky0").setDEF("hanim_l_pinky1").setName("l_pinky1").setCenter(new float[] {0.1925f ,0.7866f ,-0.1036f })
                                                            .addChild(new HAnimSegment("hanim_l_pinky1").setDEF("hanim_l_pinky_proximal").setName("l_pinky_proximal")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1925f ,0.7866f ,-0.1036f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32305().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f306().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_pinky1").setDEF("hanim_l_pinky2").setName("l_pinky2").setCenter(new float[] {0.1938f ,0.7452f ,-0.1024f })
                                                              .addChild(new HAnimSegment("hanim_l_pinky2").setDEF("hanim_l_pinky_middle").setName("l_pinky_middle")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1938f ,0.7452f ,-0.1024f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32307().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f308().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_pinky2").setDEF("hanim_l_pinky3").setName("l_pinky3").setCenter(new float[] {0.1948f ,0.7277f ,-0.1017f })
                                                                .addChild(new HAnimSegment("hanim_l_pinky3").setDEF("hanim_l_pinky_distal").setName("l_pinky_distal")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1948f ,0.7277f ,-0.1017f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32309().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f310().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_l_pinky_distal").setDEF("hanim_l_pinky_distal_tip").setName("l_pinky_distal_tip").setTranslation(new float[] {0.2014f ,0.7009f ,-0.1012f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_pinky_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_r_sternoclavicular").setName("r_sternoclavicular").setRotation(new float[] {0f ,0f ,-1.00000000000003f ,0.108042894183947f }).setCenter(new float[] {-0.082f ,1.4488f ,-0.0353f })
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
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setDEF("hanim_r_clavicale_pt").setName("r_clavicale_pt").setTranslation(new float[] {-0.0115f ,1.4943f ,0.04f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_clavicale"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setDEF("hanim_r_acromion_pt").setName("r_acromion_pt").setTranslation(new float[] {-0.1905f ,1.4791f ,-0.0431f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_acromion"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setDEF("hanim_r_axilla_ant_pt").setName("r_axilla_ant_pt").setTranslation(new float[] {-0.1626f ,1.4072f ,-0.0031f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_ant"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite("hanim_r_clavicle").setDEF("hanim_r_axilla_post_pt").setName("r_axilla_post_pt").setTranslation(new float[] {-0.1603f ,1.4098f ,-0.0826f })
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_post"))
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
                                                  .addChild(new HAnimJoint("hanim_r_acromioclavicular").setDEF("hanim_r_shoulder").setName("r_shoulder").setRotation(new float[] {0f ,0f ,-1f ,0.950777468818762f }).setCenter(new float[] {-0.2029f ,1.4376f ,-0.0387f })
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
                                                      .addChild(new HAnimSite("hanim_r_upperarm").setDEF("hanim_r_humeral_lateral_epicn_pt").setName("r_humeral_lateral_epicn_pt").setTranslation(new float[] {-0.2224f ,1.1517f ,-0.1033f })
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_lateral_epicn"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint("hanim_r_shoulder").setDEF("hanim_r_elbow").setName("r_elbow").setRotation(new float[] {-1f ,0f ,0f ,0.297117959005863f }).setCenter(new float[] {-0.2014f ,1.1357f ,-0.0682f })
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
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_radial_styloid"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_olecranon_pt").setName("r_olecranon_pt").setTranslation(new float[] {-0.1907f ,1.1405f ,-0.1065f })
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_olecranon"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_humeral_medial_epicn_pt").setName("r_humeral_medial_epicn_pt").setTranslation(new float[] {-0.168f ,1.1298f ,-0.1062f })
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_medial_epicn"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_radiale_pt").setName("r_radiale_pt").setTranslation(new float[] {-0.213f ,1.1305f ,-0.1091f })
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_radiale"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint("hanim_r_elbow").setDEF("hanim_r_wrist").setName("r_wrist").setCenter(new float[] {-0.1984f ,0.8663f ,-0.0583f })
                                                        .addChild(new HAnimSegment("hanim_r_wrist").setDEF("hanim_r_hand").setName("r_hand")
                                                          .addChild(new TouchSensor().setDescription("HAnimJoint r_wrist, HAnimSegment r_hand"))
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
                                                          .addChild(new HAnimSite("hanim_r_hand").setDEF("hanim_r_metacarpal_pha2_pt").setName("r_metacarpal_pha2_pt").setTranslation(new float[] {-0.1977f ,0.8169f ,-0.0177f })
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_pha2"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite("hanim_r_hand").setDEF("hanim_r_ulnar_styloid_pt").setName("r_ulnar_styloid_pt").setTranslation(new float[] {-0.2117f ,0.8562f ,-0.0584f })
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_ulnar_styloid"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite("hanim_r_hand").setDEF("hanim_r_metacarpal_pha5_pt").setName("r_metacarpal_pha5_pt").setTranslation(new float[] {-0.1929f ,0.789f ,-0.1064f })
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_pha5"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite("hanim_r_hand").setDEF("hanim_r_hand_front_view").setName("r_hand_front_view").setTranslation(new float[] {-0.3f ,0.75f ,0.45f })
                                                            .addChild(new Viewpoint().setDEF("hanim_r_hand_front_viewpoint").setDescription("right hand front").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.7f ,0f }))
                                                            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_r_hand_front_view").setUrl(new MFString355().getArray())
                                                              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat356().getArray())
                                                                .addChild(new WorldInfo().setInfo(new MFString357().getArray()))
                                                                .addChild(new Shape().setUSE("HAnimSiteViewpointShape"))))))
                                                        .addChild(new HAnimJoint("hanim_r_wrist").setDEF("hanim_r_thumb1").setName("r_thumb1").setRotation(new float[] {1f ,0f ,0f ,0.270107235459875f }).setCenter(new float[] {-0.1924f ,0.8472f ,-0.0534f })
                                                          .addChild(new HAnimSegment("hanim_r_thumb1").setDEF("hanim_r_thumb_metacarpal").setName("r_thumb_metacarpal")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1924f ,0.8472f ,-0.0534f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32358().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f359().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_thumb1").setDEF("hanim_r_thumb2").setName("r_thumb2").setCenter(new float[] {-0.1951f ,0.8226f ,0.0246f })
                                                            .addChild(new HAnimSegment("hanim_r_thumb2").setDEF("hanim_r_thumb_proximal").setName("r_thumb_proximal")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1951f ,0.8226f ,0.0246f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32360().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f361().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_thumb2").setDEF("hanim_r_thumb3").setName("r_thumb3").setCenter(new float[] {-0.1955f ,0.8159f ,0.0464f })
                                                              .addChild(new HAnimSegment("hanim_r_thumb3").setDEF("hanim_r_thumb_distal").setName("r_thumb_distal")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1955f ,0.8159f ,0.0464f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32362().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f363().getArray()))))
                                                                .addChild(new HAnimSite("hanim_r_thumb_distal").setDEF("hanim_r_thumb_distal_tip").setName("r_thumb_distal_tip").setTranslation(new float[] {-0.1869f ,0.809f ,0.082f })
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_thumb_distal_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))))))
                                                        .addChild(new HAnimJoint("hanim_r_wrist").setDEF("hanim_r_index0").setName("r_index0").setCenter(new float[] {-0.1983f ,0.8024f ,-0.028f })
                                                          .addChild(new HAnimSegment("hanim_r_index0").setDEF("hanim_r_index_metacarpal").setName("r_index_metacarpal")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_index0, HAnimSegment r_index_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1983f ,0.8024f ,-0.028f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32364().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f365().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_index0").setDEF("hanim_r_index1").setName("r_index1").setRotation(new float[] {0f ,0f ,1.00000000000003f ,0.111082015766469f }).setCenter(new float[] {-0.1983f ,0.7815f ,-0.028f })
                                                            .addChild(new HAnimSegment("hanim_r_index1").setDEF("hanim_r_index_proximal").setName("r_index_proximal")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_index1, HAnimSegment r_index_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1983f ,0.7815f ,-0.028f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32366().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f367().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_index1").setDEF("hanim_r_index2").setName("r_index2").setRotation(new float[] {0f ,0f ,0.999999999999999f ,0.391134387386823f }).setCenter(new float[] {-0.2017f ,0.7363f ,-0.0248f })
                                                              .addChild(new HAnimSegment("hanim_r_index2").setDEF("hanim_r_index_middle").setName("r_index_middle")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_index2, HAnimSegment r_index_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2017f ,0.7363f ,-0.0248f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32368().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f369().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_index2").setDEF("hanim_r_index3").setName("r_index3").setRotation(new float[] {0f ,0f ,0.999999999999997f ,0.211082015766472f }).setCenter(new float[] {-0.2028f ,0.7139f ,-0.0236f })
                                                                .addChild(new HAnimSegment("hanim_r_index3").setDEF("hanim_r_index_distal").setName("r_index_distal")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_index3, HAnimSegment r_index_distal"))
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
                                                                  .addChild(new HAnimSite("hanim_r_index_distal").setDEF("hanim_r_index_distal_tip").setName("r_index_distal_tip").setTranslation(new float[] {-0.198f ,0.6883f ,-0.018f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_index_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite("hanim_r_index_distal").setDEF("hanim_r_dactylion_pt").setName("r_dactylion_pt").setTranslation(new float[] {-0.1941f ,0.6772f ,-0.0423f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_dactylion"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint("hanim_r_wrist").setDEF("hanim_r_middle0").setName("r_middle0").setCenter(new float[] {-0.1987f ,0.8029f ,-0.053f })
                                                          .addChild(new HAnimSegment("hanim_r_middle0").setDEF("hanim_r_middle_metacarpal").setName("r_middle_metacarpal")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1987f ,0.8029f ,-0.053f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32374().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f375().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_middle0").setDEF("hanim_r_middle1").setName("r_middle1").setRotation(new float[] {0f ,0f ,1.00000000000003f ,0.111082015766469f }).setCenter(new float[] {-0.1987f ,0.7818f ,-0.053f })
                                                            .addChild(new HAnimSegment("hanim_r_middle1").setDEF("hanim_r_middle_proximal").setName("r_middle_proximal")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_middle1, HAnimSegment r_middle_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1987f ,0.7818f ,-0.053f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32376().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f377().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_middle1").setDEF("hanim_r_middle2").setName("r_middle2").setRotation(new float[] {0f ,0f ,0.999999999999999f ,0.391134387386823f }).setCenter(new float[] {-0.2013f ,0.7273f ,-0.0503f })
                                                              .addChild(new HAnimSegment("hanim_r_middle2").setDEF("hanim_r_middle_middle").setName("r_middle_middle")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_middle2, HAnimSegment r_middle_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2013f ,0.7273f ,-0.0503f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32378().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f379().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_middle2").setDEF("hanim_r_middle3").setName("r_middle3").setRotation(new float[] {0f ,0f ,0.999999999999997f ,0.211082015766472f }).setCenter(new float[] {-0.2026f ,0.7011f ,-0.0494f })
                                                                .addChild(new HAnimSegment("hanim_r_middle3").setDEF("hanim_r_middle_distal").setName("r_middle_distal")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_middle3, HAnimSegment r_middle_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2026f ,0.7011f ,-0.0494f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32380().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f381().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_r_middle_distal").setDEF("hanim_r_middle_distal_tip").setName("r_middle_distal_tip").setTranslation(new float[] {-0.1969f ,0.6758f ,-0.0427f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_middle_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint("hanim_r_wrist").setDEF("hanim_r_ring0").setName("r_ring0").setCenter(new float[] {-0.1956f ,0.8019f ,-0.0794f })
                                                          .addChild(new HAnimSegment("hanim_r_ring0").setDEF("hanim_r_ring_metacarpal").setName("r_ring_metacarpal")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1956f ,0.8019f ,-0.0794f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32382().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f383().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_ring0").setDEF("hanim_r_ring1").setName("r_ring1").setRotation(new float[] {0f ,0f ,1.00000000000003f ,0.111082015766469f }).setCenter(new float[] {-0.1956f ,0.7815f ,-0.0794f })
                                                            .addChild(new HAnimSegment("hanim_r_ring1").setDEF("hanim_r_ring_proximal").setName("r_ring_proximal")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_ring1, HAnimSegment r_ring_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1956f ,0.7815f ,-0.0794f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32384().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f385().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_ring1").setDEF("hanim_r_ring2").setName("r_ring2").setRotation(new float[] {0f ,0f ,0.999999999999999f ,0.391134387386823f }).setCenter(new float[] {-0.1973f ,0.7287f ,-0.0777f })
                                                              .addChild(new HAnimSegment("hanim_r_ring2").setDEF("hanim_r_ring_middle").setName("r_ring_middle")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_ring2, HAnimSegment r_ring_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1973f ,0.7287f ,-0.0777f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32386().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f387().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_ring2").setDEF("hanim_r_ring3").setName("r_ring3").setRotation(new float[] {0f ,0f ,0.999999999999997f ,0.211082015766472f }).setCenter(new float[] {-0.1983f ,0.7045f ,-0.0767f })
                                                                .addChild(new HAnimSegment("hanim_r_ring3").setDEF("hanim_r_ring_distal").setName("r_ring_distal")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_ring3, HAnimSegment r_ring_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1983f ,0.7045f ,-0.0767f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32388().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f389().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_r_ring_distal").setDEF("hanim_r_ring_distal_tip").setName("r_ring_distal_tip").setTranslation(new float[] {-0.1934f ,0.6778f ,-0.0693f })
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_ring_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint("hanim_r_wrist").setDEF("hanim_r_pinky0").setName("r_pinky0").setCenter(new float[] {-0.1925f ,0.8066f ,-0.1036f })
                                                          .addChild(new HAnimSegment("hanim_r_pinky0").setDEF("hanim_r_pinky_metacarpal").setName("r_pinky_metacarpal")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1925f ,0.8066f ,-0.1036f })
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32390().getArray())
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f391().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_pinky0").setDEF("hanim_r_pinky1").setName("r_pinky1").setRotation(new float[] {0f ,0f ,1.00000000000003f ,0.111082015766469f }).setCenter(new float[] {-0.1925f ,0.7866f ,-0.1036f })
                                                            .addChild(new HAnimSegment("hanim_r_pinky1").setDEF("hanim_r_pinky_proximal").setName("r_pinky_proximal")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1925f ,0.7866f ,-0.1036f })
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32392().getArray())
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f393().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_pinky1").setDEF("hanim_r_pinky2").setName("r_pinky2").setRotation(new float[] {0f ,0f ,0.999999999999999f ,0.391134387386823f }).setCenter(new float[] {-0.1938f ,0.7452f ,-0.1024f })
                                                              .addChild(new HAnimSegment("hanim_r_pinky2").setDEF("hanim_r_pinky_middle").setName("r_pinky_middle")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1938f ,0.7452f ,-0.1024f })
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32394().getArray())
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f395().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_pinky2").setDEF("hanim_r_pinky3").setName("r_pinky3").setRotation(new float[] {0f ,0f ,0.999999999999997f ,0.211082015766472f }).setCenter(new float[] {-0.1948f ,0.7277f ,-0.1017f })
                                                                .addChild(new HAnimSegment("hanim_r_pinky3").setDEF("hanim_r_pinky_distal").setName("r_pinky_distal")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1948f ,0.7277f ,-0.1017f })
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32396().getArray())
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f397().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_r_pinky_distal").setDEF("hanim_r_pinky_distal_tip").setName("r_pinky_distal_tip").setTranslation(new float[] {-0.1938f ,0.7035f ,-0.0949f })
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
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_ankle"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_ankle"))
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
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_index0"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_index0"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_index1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_index1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_index2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_index2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_index3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_index3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_metatarsal"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_metatarsal"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_middle0"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_middle0"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_middle1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_middle1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_middle2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_middle2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_middle3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_middle3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_midtarsal"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_midtarsal"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_pinky0"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_pinky0"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_pinky1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_pinky1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_pinky2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_pinky2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_pinky3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_pinky3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_ring0"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_ring0"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_ring1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_ring1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_ring2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_ring2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_ring3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_ring3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_sternoclavicular"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_sternoclavicular"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_subtalar"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_subtalar"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_thumb1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_thumb1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_thumb2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_thumb2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_thumb3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_thumb3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_wrist"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_wrist"))
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
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_forefoot"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_forefoot"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_hand"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_hand"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_hindfoot"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_hindfoot"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_index_distal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_index_distal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_index_metacarpal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_index_metacarpal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_index_middle"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_index_middle"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_index_proximal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_index_proximal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_middistal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_middistal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_middle_distal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_middle_distal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_middle_metacarpal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_middle_metacarpal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_middle_middle"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_middle_middle"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_middle_proximal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_middle_proximal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_midproximal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_midproximal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_pinky_distal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_pinky_distal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_pinky_metacarpal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_pinky_metacarpal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_pinky_middle"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_pinky_middle"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_pinky_proximal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_pinky_proximal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_ring_distal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_ring_distal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_ring_metacarpal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_ring_metacarpal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_ring_middle"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_ring_middle"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_ring_proximal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_ring_proximal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_scapula"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_scapula"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_thumb_distal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_thumb_distal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_thumb_metacarpal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_thumb_metacarpal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_thumb_proximal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_thumb_proximal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_upperarm"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_crotch_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_skull_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_sellion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_supramenton_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_nuchale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_suprasternale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_cervicale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_substernale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_rib10_midspine_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_waist_preferred_post_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_navel_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_acromion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_acromion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_asis_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_asis_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_axilla_ant_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_axilla_ant_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_axilla_post_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_axilla_post_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_calcaneous_post_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_calcaneous_post_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_clavicale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_clavicale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_dactylion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_dactylion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_digit2_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_digit2_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_femoral_lateral_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_femoral_lateral_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_femoral_medial_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_femoral_medial_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_forefoot_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_forefoot_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_gonion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_gonion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_humeral_lateral_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_humeral_lateral_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_humeral_medial_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_humeral_medial_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_iliocristale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_iliocristale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_index_distal_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_index_distal_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_infraorbitale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_infraorbitale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_knee_crease_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_knee_crease_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_lateral_malleolus_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_lateral_malleolus_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_medial_malleolus_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_medial_malleolus_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_metacarpal_pha2_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_metacarpal_pha2_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_metacarpal_pha5_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_metacarpal_pha5_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_metatarsal_pha1_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_metatarsal_pha1_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_metatarsal_pha5_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_metatarsal_pha5_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_middle_distal_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_middle_distal_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_neck_base_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_neck_base_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_olecranon_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_olecranon_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_pinky_distal_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_pinky_distal_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_psis_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_psis_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_radial_styloid_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_radial_styloid_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_radiale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_radiale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_rib10_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_rib10_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_ring_distal_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_ring_distal_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_temporomandibular_l_site_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_temporomandibular_r_site_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_sphyrion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_sphyrion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_thelion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_thelion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_thumb_distal_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_thumb_distal_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_tragion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_tragion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_trochanterion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_trochanterion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_ulnar_styloid_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_ulnar_styloid_pt"))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_l_inclined_view").setName("l_inclined_view").setTranslation(new float[] {1.62f ,1.05f ,2.06f }).setRotation(new float[] {-0.113f ,0.993f ,0.0347f ,0.671f })
            .addChild(new Viewpoint().setDEF("hanim_l_inclined_viewpoint").setDescription("left inclined").setPosition(new float[] {0f ,0f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_l_inclined_view").setUrl(new MFString398().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat399().getArray())
                .addChild(new WorldInfo().setInfo(new MFString400().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_r_inclined_view").setName("r_inclined_view").setTranslation(new float[] {-1.62f ,1.05f ,2.06f }).setRotation(new float[] {-0.113f ,-0.993f ,0.0347f ,0.671f })
            .addChild(new Viewpoint().setDEF("hanim_r_inclined_viewpoint").setDescription("right inclined").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.9f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_r_inclined_view").setUrl(new MFString401().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat402().getArray())
                .addChild(new WorldInfo().setInfo(new MFString403().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_front_view").setName("front_view").setTranslation(new float[] {0f ,0.85f ,2.58f })
            .addChild(new Viewpoint().setDEF("hanim_front_viewpoint").setDescription("front").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.9f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_front_view").setUrl(new MFString404().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat405().getArray())
                .addChild(new WorldInfo().setInfo(new MFString406().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_back_view").setName("back_view").setTranslation(new float[] {0f ,0.85f ,-2.58f }).setRotation(new float[] {0f ,1f ,0f ,3.14f })
            .addChild(new Viewpoint().setDEF("hanim_back_viewpoint").setDescription("back").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.9f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_back_view").setUrl(new MFString407().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat408().getArray())
                .addChild(new WorldInfo().setInfo(new MFString409().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_l_side_view").setName("l_side_view").setTranslation(new float[] {2.6f ,0.854f ,0f }).setRotation(new float[] {0f ,1f ,0f ,1.5708f })
            .addChild(new Viewpoint().setDEF("hanim_l_side_viewpoint").setDescription("left side").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.9f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_l_side_view").setUrl(new MFString410().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat411().getArray())
                .addChild(new WorldInfo().setInfo(new MFString412().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_Top_view").setName("Top_view").setTranslation(new float[] {0f ,3.5f ,0f }).setRotation(new float[] {1f ,0f ,0f ,-1.57f })
            .addChild(new Viewpoint().setDEF("hanim_Top_viewpoint").setDescription("Top").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.9f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_Top_view").setUrl(new MFString413().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat414().getArray())
                .addChild(new WorldInfo().setInfo(new MFString415().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_front_close_view").setName("front_close_view").setTranslation(new float[] {0f ,0.854f ,1.575f })
            .addChild(new Viewpoint().setDEF("hanim_front_close_viewpoint").setDescription("front close").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0f ,1.575f }))
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_front_close_view").setUrl(new MFString416().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat417().getArray())
                .addChild(new WorldInfo().setInfo(new MFString418().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_side_close_view").setName("side_close_view").setTranslation(new float[] {1.56f ,0.854f ,0f }).setRotation(new float[] {0f ,1f ,0f ,1.5708f })
            .addChild(new Viewpoint().setDEF("hanim_side_close_viewpoint").setDescription("side close").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {1.6f ,0f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_side_close_view").setUrl(new MFString419().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat420().getArray())
                .addChild(new WorldInfo().setInfo(new MFString421().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_head_front_close_view").setName("head_front_close_view").setTranslation(new float[] {0f ,1.5f ,1f })
            .addChild(new Viewpoint().setDEF("hanim_head_front_close_viewpoint").setDescription("head front close").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0f ,1f }))
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_head_front_close_view").setUrl(new MFString422().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat423().getArray())
                .addChild(new WorldInfo().setInfo(new MFString424().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_chest_front_close_view").setName("chest_front_close_view").setTranslation(new float[] {0f ,1.2f ,1f })
            .addChild(new Viewpoint().setDEF("hanim_chest_front_close_viewpoint").setDescription("chest front close").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0f ,1f }))
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_chest_front_close_view").setUrl(new MFString425().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat426().getArray())
                .addChild(new WorldInfo().setInfo(new MFString427().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_pelvis_front_close_view").setName("pelvis_front_close_view").setTranslation(new float[] {0f ,0.8f ,1f })
            .addChild(new Viewpoint().setDEF("hanim_pelvis_front_close_viewpoint").setDescription("pelvis front close").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0f ,1f }))
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_pelvis_front_close_view").setUrl(new MFString428().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat429().getArray())
                .addChild(new WorldInfo().setInfo(new MFString430().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_knees_front_close_view").setName("knees_front_close_view").setTranslation(new float[] {0f ,0.4f ,1f })
            .addChild(new Viewpoint().setDEF("hanim_knees_front_close_viewpoint").setDescription("knees front close").setPosition(new float[] {0f ,0f ,0f }).setCenterOfRotation(new float[] {0f ,0.4f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_knees_front_close_view").setUrl(new MFString431().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat432().getArray())
                .addChild(new WorldInfo().setInfo(new MFString433().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_feet_front_close_view").setName("feet_front_close_view").setTranslation(new float[] {0f ,0f ,1f })
            .addChild(new Viewpoint().setDEF("hanim_feet_front_close_viewpoint").setDescription("feet front close").setPosition(new float[] {0f ,0f ,0f }))
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_feet_front_close_view").setUrl(new MFString434().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat435().getArray())
                .addChild(new WorldInfo().setInfo(new MFString436().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_eye_level_view").setName("eye_level_view").setTranslation(new float[] {0f ,1.6332f ,0.0502f })
            .addChild(new Viewpoint().setDEF("hanim_eye_level_viewpoint").setDescription("eye level looking forward").setPosition(new float[] {0f ,0f ,0f }).setOrientation(new float[] {0f ,1f ,0f ,3.141593f }))
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_eye_level_view").setUrl(new MFString437().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat438().getArray())
                .addChild(new WorldInfo().setInfo(new MFString439().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_eyeball_site_view"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_eyeball_site_view"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_hand_front_view"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_hand_front_view")))
        .addChild(new Group().setDEF("StopAnimation")
          .addChild(new TimeSensor().setDEF("StopTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new PositionInterpolator().setDEF("Stop_HumanoidRoot_TranslationInterpolator").setKey(new MFFloat440().getArray()).setKeyValue(new MFVec3f441().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_HumanoidRoot_RotationInterpolator").setKey(new MFFloat442().getArray()).setKeyValue(new MFRotation443().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_sacroiliac_RotationInterpolator").setKey(new MFFloat444().getArray()).setKeyValue(new MFRotation445().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_hip_RotationInterpolator").setKey(new MFFloat446().getArray()).setKeyValue(new MFRotation447().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_knee_RotationInterpolator").setKey(new MFFloat448().getArray()).setKeyValue(new MFRotation449().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ankle_RotationInterpolator").setKey(new MFFloat450().getArray()).setKeyValue(new MFRotation451().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_subtalar_RotationInterpolator").setKey(new MFFloat452().getArray()).setKeyValue(new MFRotation453().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_midtarsal_RotationInterpolator").setKey(new MFFloat454().getArray()).setKeyValue(new MFRotation455().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_metatarsal_RotationInterpolator").setKey(new MFFloat456().getArray()).setKeyValue(new MFRotation457().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_hip_RotationInterpolator").setKey(new MFFloat458().getArray()).setKeyValue(new MFRotation459().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_knee_RotationInterpolator").setKey(new MFFloat460().getArray()).setKeyValue(new MFRotation461().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ankle_RotationInterpolator").setKey(new MFFloat462().getArray()).setKeyValue(new MFRotation463().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_subtalar_RotationInterpolator").setKey(new MFFloat464().getArray()).setKeyValue(new MFRotation465().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_midtarsal_RotationInterpolator").setKey(new MFFloat466().getArray()).setKeyValue(new MFRotation467().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_metatarsal_RotationInterpolator").setKey(new MFFloat468().getArray()).setKeyValue(new MFRotation469().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl5_RotationInterpolator").setKey(new MFFloat470().getArray()).setKeyValue(new MFRotation471().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl4_RotationInterpolator").setKey(new MFFloat472().getArray()).setKeyValue(new MFRotation473().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl3_RotationInterpolator").setKey(new MFFloat474().getArray()).setKeyValue(new MFRotation475().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl2_RotationInterpolator").setKey(new MFFloat476().getArray()).setKeyValue(new MFRotation477().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl1_RotationInterpolator").setKey(new MFFloat478().getArray()).setKeyValue(new MFRotation479().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt12_RotationInterpolator").setKey(new MFFloat480().getArray()).setKeyValue(new MFRotation481().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt11_RotationInterpolator").setKey(new MFFloat482().getArray()).setKeyValue(new MFRotation483().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt10_RotationInterpolator").setKey(new MFFloat484().getArray()).setKeyValue(new MFRotation485().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt9_RotationInterpolator").setKey(new MFFloat486().getArray()).setKeyValue(new MFRotation487().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt8_RotationInterpolator").setKey(new MFFloat488().getArray()).setKeyValue(new MFRotation489().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt7_RotationInterpolator").setKey(new MFFloat490().getArray()).setKeyValue(new MFRotation491().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt6_RotationInterpolator").setKey(new MFFloat492().getArray()).setKeyValue(new MFRotation493().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt5_RotationInterpolator").setKey(new MFFloat494().getArray()).setKeyValue(new MFRotation495().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt4_RotationInterpolator").setKey(new MFFloat496().getArray()).setKeyValue(new MFRotation497().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt3_RotationInterpolator").setKey(new MFFloat498().getArray()).setKeyValue(new MFRotation499().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt2_RotationInterpolator").setKey(new MFFloat500().getArray()).setKeyValue(new MFRotation501().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt1_RotationInterpolator").setKey(new MFFloat502().getArray()).setKeyValue(new MFRotation503().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc7_RotationInterpolator").setKey(new MFFloat504().getArray()).setKeyValue(new MFRotation505().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc6_RotationInterpolator").setKey(new MFFloat506().getArray()).setKeyValue(new MFRotation507().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc5_RotationInterpolator").setKey(new MFFloat508().getArray()).setKeyValue(new MFRotation509().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc4_RotationInterpolator").setKey(new MFFloat510().getArray()).setKeyValue(new MFRotation511().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc3_RotationInterpolator").setKey(new MFFloat512().getArray()).setKeyValue(new MFRotation513().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc2_RotationInterpolator").setKey(new MFFloat514().getArray()).setKeyValue(new MFRotation515().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc1_RotationInterpolator").setKey(new MFFloat516().getArray()).setKeyValue(new MFRotation517().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_skullbase_RotationInterpolator").setKey(new MFFloat518().getArray()).setKeyValue(new MFRotation519().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_eyeball_joint_RotationInterpolator").setKey(new MFFloat520().getArray()).setKeyValue(new MFRotation521().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_eyeball_joint_RotationInterpolator").setKey(new MFFloat522().getArray()).setKeyValue(new MFRotation523().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_sternoclavicular_RotationInterpolator").setKey(new MFFloat524().getArray()).setKeyValue(new MFRotation525().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_acromioclavicular_RotationInterpolator").setKey(new MFFloat526().getArray()).setKeyValue(new MFRotation527().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_shoulder_RotationInterpolator").setKey(new MFFloat528().getArray()).setKeyValue(new MFRotation529().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_elbow_RotationInterpolator").setKey(new MFFloat530().getArray()).setKeyValue(new MFRotation531().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_wrist_RotationInterpolator").setKey(new MFFloat532().getArray()).setKeyValue(new MFRotation533().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_thumb1_RotationInterpolator").setKey(new MFFloat534().getArray()).setKeyValue(new MFRotation535().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_thumb2_RotationInterpolator").setKey(new MFFloat536().getArray()).setKeyValue(new MFRotation537().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_thumb3_RotationInterpolator").setKey(new MFFloat538().getArray()).setKeyValue(new MFRotation539().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index0_RotationInterpolator").setKey(new MFFloat540().getArray()).setKeyValue(new MFRotation541().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index1_RotationInterpolator").setKey(new MFFloat542().getArray()).setKeyValue(new MFRotation543().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index2_RotationInterpolator").setKey(new MFFloat544().getArray()).setKeyValue(new MFRotation545().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index3_RotationInterpolator").setKey(new MFFloat546().getArray()).setKeyValue(new MFRotation547().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle0_RotationInterpolator").setKey(new MFFloat548().getArray()).setKeyValue(new MFRotation549().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle1_RotationInterpolator").setKey(new MFFloat550().getArray()).setKeyValue(new MFRotation551().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle2_RotationInterpolator").setKey(new MFFloat552().getArray()).setKeyValue(new MFRotation553().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle3_RotationInterpolator").setKey(new MFFloat554().getArray()).setKeyValue(new MFRotation555().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring0_RotationInterpolator").setKey(new MFFloat556().getArray()).setKeyValue(new MFRotation557().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring1_RotationInterpolator").setKey(new MFFloat558().getArray()).setKeyValue(new MFRotation559().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring2_RotationInterpolator").setKey(new MFFloat560().getArray()).setKeyValue(new MFRotation561().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring3_RotationInterpolator").setKey(new MFFloat562().getArray()).setKeyValue(new MFRotation563().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky0_RotationInterpolator").setKey(new MFFloat564().getArray()).setKeyValue(new MFRotation565().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky1_RotationInterpolator").setKey(new MFFloat566().getArray()).setKeyValue(new MFRotation567().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky2_RotationInterpolator").setKey(new MFFloat568().getArray()).setKeyValue(new MFRotation569().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky3_RotationInterpolator").setKey(new MFFloat570().getArray()).setKeyValue(new MFRotation571().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_sternoclavicular_RotationInterpolator").setKey(new MFFloat572().getArray()).setKeyValue(new MFRotation573().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_acromioclavicular_RotationInterpolator").setKey(new MFFloat574().getArray()).setKeyValue(new MFRotation575().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_shoulder_RotationInterpolator").setKey(new MFFloat576().getArray()).setKeyValue(new MFRotation577().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_elbow_RotationInterpolator").setKey(new MFFloat578().getArray()).setKeyValue(new MFRotation579().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_wrist_RotationInterpolator").setKey(new MFFloat580().getArray()).setKeyValue(new MFRotation581().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_thumb1_RotationInterpolator").setKey(new MFFloat582().getArray()).setKeyValue(new MFRotation583().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_thumb2_RotationInterpolator").setKey(new MFFloat584().getArray()).setKeyValue(new MFRotation585().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_thumb3_RotationInterpolator").setKey(new MFFloat586().getArray()).setKeyValue(new MFRotation587().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index0_RotationInterpolator").setKey(new MFFloat588().getArray()).setKeyValue(new MFRotation589().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index1_RotationInterpolator").setKey(new MFFloat590().getArray()).setKeyValue(new MFRotation591().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index2_RotationInterpolator").setKey(new MFFloat592().getArray()).setKeyValue(new MFRotation593().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index3_RotationInterpolator").setKey(new MFFloat594().getArray()).setKeyValue(new MFRotation595().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle0_RotationInterpolator").setKey(new MFFloat596().getArray()).setKeyValue(new MFRotation597().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle1_RotationInterpolator").setKey(new MFFloat598().getArray()).setKeyValue(new MFRotation599().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle2_RotationInterpolator").setKey(new MFFloat600().getArray()).setKeyValue(new MFRotation601().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle3_RotationInterpolator").setKey(new MFFloat602().getArray()).setKeyValue(new MFRotation603().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring0_RotationInterpolator").setKey(new MFFloat604().getArray()).setKeyValue(new MFRotation605().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring1_RotationInterpolator").setKey(new MFFloat606().getArray()).setKeyValue(new MFRotation607().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring2_RotationInterpolator").setKey(new MFFloat608().getArray()).setKeyValue(new MFRotation609().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring3_RotationInterpolator").setKey(new MFFloat610().getArray()).setKeyValue(new MFRotation611().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky0_RotationInterpolator").setKey(new MFFloat612().getArray()).setKeyValue(new MFRotation613().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky1_RotationInterpolator").setKey(new MFFloat614().getArray()).setKeyValue(new MFRotation615().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky2_RotationInterpolator").setKey(new MFFloat616().getArray()).setKeyValue(new MFRotation617().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky3_RotationInterpolator").setKey(new MFFloat618().getArray()).setKeyValue(new MFRotation619().getArray())))
        .addChild(new Group().setDEF("StandAnimation")
          .addChild(new TimeSensor().setDEF("StandTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_metatarsal_PitchInterpolator").setKey(new MFFloat620().getArray()).setKeyValue(new MFRotation621().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_ankle_RotationInterpolator").setKey(new MFFloat622().getArray()).setKeyValue(new MFRotation623().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_knee_RotationInterpolator").setKey(new MFFloat624().getArray()).setKeyValue(new MFRotation625().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_hip_RotationInterpolator").setKey(new MFFloat626().getArray()).setKeyValue(new MFRotation627().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_ankle_RotationInterpolator").setKey(new MFFloat628().getArray()).setKeyValue(new MFRotation629().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_knee_RotationInterpolator").setKey(new MFFloat630().getArray()).setKeyValue(new MFRotation631().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_hip_RotationInterpolator").setKey(new MFFloat632().getArray()).setKeyValue(new MFRotation633().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_wrist_RotationInterpolator").setKey(new MFFloat634().getArray()).setKeyValue(new MFRotation635().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_elbow_RotationInterpolator").setKey(new MFFloat636().getArray()).setKeyValue(new MFRotation637().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_shoulder_RotationInterpolator").setKey(new MFFloat638().getArray()).setKeyValue(new MFRotation639().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_wrist_RotationInterpolator").setKey(new MFFloat640().getArray()).setKeyValue(new MFRotation641().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_elbow_RotationInterpolator").setKey(new MFFloat642().getArray()).setKeyValue(new MFRotation643().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_shoulder_RotationInterpolator").setKey(new MFFloat644().getArray()).setKeyValue(new MFRotation645().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_head_RotationInterpolator").setKey(new MFFloat646().getArray()).setKeyValue(new MFRotation647().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_neck_RotationInterpolator").setKey(new MFFloat648().getArray()).setKeyValue(new MFRotation649().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_eyeball_RotationInterpolator").setKey(new MFFloat650().getArray()).setKeyValue(new MFRotation651().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_eyeball_RotationInterpolator").setKey(new MFFloat652().getArray()).setKeyValue(new MFRotation653().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_lower_body_RotationInterpolator").setKey(new MFFloat654().getArray()).setKeyValue(new MFRotation655().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_upper_body_RotationInterpolator").setKey(new MFFloat656().getArray()).setKeyValue(new MFRotation657().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_whole_body_RotationInterpolator").setKey(new MFFloat658().getArray()).setKeyValue(new MFRotation659().getArray()))
          .addChild(new PositionInterpolator().setDEF("Stand_whole_body_TranslationInterpolator").setKey(new MFFloat660().getArray()).setKeyValue(new MFVec3f661().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_sternoclavicular_RollInterpolator").setKey(new MFFloat662().getArray()).setKeyValue(new MFRotation663().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_acromioclavicular_RollInterpolator").setKey(new MFFloat664().getArray()).setKeyValue(new MFRotation665().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_sternoclavicular_RollInterpolator").setKey(new MFFloat666().getArray()).setKeyValue(new MFRotation667().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_acromioclavicular_RollInterpolator").setKey(new MFFloat668().getArray()).setKeyValue(new MFRotation669().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_sacroiliac_YawInterpolator").setKey(new MFFloat670().getArray()).setKeyValue(new MFRotation671().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_vl5_YawInterpolator").setKey(new MFFloat672().getArray()).setKeyValue(new MFRotation673().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_vc6_YawInterpolator").setKey(new MFFloat674().getArray()).setKeyValue(new MFRotation675().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_thumb1_PitchInterpolator").setKey(new MFFloat676().getArray()).setKeyValue(new MFRotation677().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_thumb1_PitchInterpolator").setKey(new MFFloat678().getArray()).setKeyValue(new MFRotation679().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_index1_RollInterpolator").setKey(new MFFloat680().getArray()).setKeyValue(new MFRotation681().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_index2_RollInterpolator").setKey(new MFFloat682().getArray()).setKeyValue(new MFRotation683().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_index3_RollInterpolator").setKey(new MFFloat684().getArray()).setKeyValue(new MFRotation685().getArray())))
        .addChild(new Group().setDEF("PitchesAnimation")
          .addChild(new TimeSensor().setDEF("PitchTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_metatarsal_PitchInterpolator").setKey(new MFFloat686().getArray()).setKeyValue(new MFRotation687().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_ankle_RotationInterpolator").setKey(new MFFloat688().getArray()).setKeyValue(new MFRotation689().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_knee_RotationInterpolator").setKey(new MFFloat690().getArray()).setKeyValue(new MFRotation691().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_hip_RotationInterpolator").setKey(new MFFloat692().getArray()).setKeyValue(new MFRotation693().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_ankle_RotationInterpolator").setKey(new MFFloat694().getArray()).setKeyValue(new MFRotation695().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_knee_RotationInterpolator").setKey(new MFFloat696().getArray()).setKeyValue(new MFRotation697().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_hip_RotationInterpolator").setKey(new MFFloat698().getArray()).setKeyValue(new MFRotation699().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_wrist_RotationInterpolator").setKey(new MFFloat700().getArray()).setKeyValue(new MFRotation701().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_elbow_RotationInterpolator").setKey(new MFFloat702().getArray()).setKeyValue(new MFRotation703().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_shoulder_RotationInterpolator").setKey(new MFFloat704().getArray()).setKeyValue(new MFRotation705().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_wrist_RotationInterpolator").setKey(new MFFloat706().getArray()).setKeyValue(new MFRotation707().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_elbow_RotationInterpolator").setKey(new MFFloat708().getArray()).setKeyValue(new MFRotation709().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_shoulder_RotationInterpolator").setKey(new MFFloat710().getArray()).setKeyValue(new MFRotation711().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_head_RotationInterpolator").setKey(new MFFloat712().getArray()).setKeyValue(new MFRotation713().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_neck_RotationInterpolator").setKey(new MFFloat714().getArray()).setKeyValue(new MFRotation715().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_lower_body_RotationInterpolator").setKey(new MFFloat716().getArray()).setKeyValue(new MFRotation717().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_upper_body_RotationInterpolator").setKey(new MFFloat718().getArray()).setKeyValue(new MFRotation719().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_whole_body_RotationInterpolator").setKey(new MFFloat720().getArray()).setKeyValue(new MFRotation721().getArray()))
          .addChild(new PositionInterpolator().setDEF("Pitches_whole_body_TranslationInterpolator").setKey(new MFFloat722().getArray()).setKeyValue(new MFVec3f723().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_l_sternoclavicular_RollInterpolator").setKey(new MFFloat724().getArray()).setKeyValue(new MFRotation725().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_l_acromioclavicular_RollInterpolator").setKey(new MFFloat726().getArray()).setKeyValue(new MFRotation727().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_sternoclavicular_RollInterpolator").setKey(new MFFloat728().getArray()).setKeyValue(new MFRotation729().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_acromioclavicular_RollInterpolator").setKey(new MFFloat730().getArray()).setKeyValue(new MFRotation731().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_sacroiliac_YawInterpolator").setKey(new MFFloat732().getArray()).setKeyValue(new MFRotation733().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_vl5_YawInterpolator").setKey(new MFFloat734().getArray()).setKeyValue(new MFRotation735().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_vc6_YawInterpolator").setKey(new MFFloat736().getArray()).setKeyValue(new MFRotation737().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_l_thumb1_PitchInterpolator").setKey(new MFFloat738().getArray()).setKeyValue(new MFRotation739().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_thumb1_PitchInterpolator").setKey(new MFFloat740().getArray()).setKeyValue(new MFRotation741().getArray())))
        .addChild(new Group().setDEF("YawsAnimation")
          .addChild(new TimeSensor().setDEF("YawTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_metatarsal_PitchInterpolator").setKey(new MFFloat742().getArray()).setKeyValue(new MFRotation743().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_ankle_RotationInterpolator").setKey(new MFFloat744().getArray()).setKeyValue(new MFRotation745().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_knee_RotationInterpolator").setKey(new MFFloat746().getArray()).setKeyValue(new MFRotation747().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_hip_RotationInterpolator").setKey(new MFFloat748().getArray()).setKeyValue(new MFRotation749().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_ankle_RotationInterpolator").setKey(new MFFloat750().getArray()).setKeyValue(new MFRotation751().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_knee_RotationInterpolator").setKey(new MFFloat752().getArray()).setKeyValue(new MFRotation753().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_hip_RotationInterpolator").setKey(new MFFloat754().getArray()).setKeyValue(new MFRotation755().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_wrist_RotationInterpolator").setKey(new MFFloat756().getArray()).setKeyValue(new MFRotation757().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_elbow_RotationInterpolator").setKey(new MFFloat758().getArray()).setKeyValue(new MFRotation759().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_shoulder_RotationInterpolator").setKey(new MFFloat760().getArray()).setKeyValue(new MFRotation761().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_wrist_RotationInterpolator").setKey(new MFFloat762().getArray()).setKeyValue(new MFRotation763().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_elbow_RotationInterpolator").setKey(new MFFloat764().getArray()).setKeyValue(new MFRotation765().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_shoulder_RotationInterpolator").setKey(new MFFloat766().getArray()).setKeyValue(new MFRotation767().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_head_RotationInterpolator").setKey(new MFFloat768().getArray()).setKeyValue(new MFRotation769().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_neck_RotationInterpolator").setKey(new MFFloat770().getArray()).setKeyValue(new MFRotation771().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_upper_body_RotationInterpolator").setKey(new MFFloat772().getArray()).setKeyValue(new MFRotation773().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_lower_body_RotationInterpolator").setKey(new MFFloat774().getArray()).setKeyValue(new MFRotation775().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_whole_body_RotationInterpolator").setKey(new MFFloat776().getArray()).setKeyValue(new MFRotation777().getArray()))
          .addChild(new PositionInterpolator().setDEF("Yaws_whole_body_TranslationInterpolator").setKey(new MFFloat778().getArray()).setKeyValue(new MFVec3f779().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_l_sternoclavicular_RollInterpolator").setKey(new MFFloat780().getArray()).setKeyValue(new MFRotation781().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_l_acromioclavicular_RollInterpolator").setKey(new MFFloat782().getArray()).setKeyValue(new MFRotation783().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_sternoclavicular_RollInterpolator").setKey(new MFFloat784().getArray()).setKeyValue(new MFRotation785().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_acromioclavicular_RollInterpolator").setKey(new MFFloat786().getArray()).setKeyValue(new MFRotation787().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_sacroiliac_YawInterpolator").setKey(new MFFloat788().getArray()).setKeyValue(new MFRotation789().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_vl5_YawInterpolator").setKey(new MFFloat790().getArray()).setKeyValue(new MFRotation791().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_vc6_YawInterpolator").setKey(new MFFloat792().getArray()).setKeyValue(new MFRotation793().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_l_thumb1_PitchInterpolator").setKey(new MFFloat794().getArray()).setKeyValue(new MFRotation795().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_thumb1_PitchInterpolator").setKey(new MFFloat796().getArray()).setKeyValue(new MFRotation797().getArray())))
        .addChild(new Group().setDEF("RollsAnimation")
          .addChild(new TimeSensor().setDEF("RollTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_metatarsal_PitchInterpolator").setKey(new MFFloat798().getArray()).setKeyValue(new MFRotation799().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_ankle_RotationInterpolator").setKey(new MFFloat800().getArray()).setKeyValue(new MFRotation801().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_knee_RotationInterpolator").setKey(new MFFloat802().getArray()).setKeyValue(new MFRotation803().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_hip_RotationInterpolator").setKey(new MFFloat804().getArray()).setKeyValue(new MFRotation805().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_ankle_RotationInterpolator").setKey(new MFFloat806().getArray()).setKeyValue(new MFRotation807().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_knee_RotationInterpolator").setKey(new MFFloat808().getArray()).setKeyValue(new MFRotation809().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_hip_RotationInterpolator").setKey(new MFFloat810().getArray()).setKeyValue(new MFRotation811().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_wrist_RotationInterpolator").setKey(new MFFloat812().getArray()).setKeyValue(new MFRotation813().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_elbow_RotationInterpolator").setKey(new MFFloat814().getArray()).setKeyValue(new MFRotation815().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_shoulder_RotationInterpolator").setKey(new MFFloat816().getArray()).setKeyValue(new MFRotation817().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_wrist_RotationInterpolator").setKey(new MFFloat818().getArray()).setKeyValue(new MFRotation819().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_elbow_RotationInterpolator").setKey(new MFFloat820().getArray()).setKeyValue(new MFRotation821().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_shoulder_RotationInterpolator").setKey(new MFFloat822().getArray()).setKeyValue(new MFRotation823().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_head_RotationInterpolator").setKey(new MFFloat824().getArray()).setKeyValue(new MFRotation825().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_neck_RotationInterpolator").setKey(new MFFloat826().getArray()).setKeyValue(new MFRotation827().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_lower_body_RotationInterpolator").setKey(new MFFloat828().getArray()).setKeyValue(new MFRotation829().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_upper_body_RotationInterpolator").setKey(new MFFloat830().getArray()).setKeyValue(new MFRotation831().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_whole_body_RotationInterpolator").setKey(new MFFloat832().getArray()).setKeyValue(new MFRotation833().getArray()))
          .addChild(new PositionInterpolator().setDEF("Rolls_whole_body_TranslationInterpolator").setKey(new MFFloat834().getArray()).setKeyValue(new MFVec3f835().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_l_sternoclavicular_RollInterpolator").setKey(new MFFloat836().getArray()).setKeyValue(new MFRotation837().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_l_acromioclavicular_RollInterpolator").setKey(new MFFloat838().getArray()).setKeyValue(new MFRotation839().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_sternoclavicular_RollInterpolator").setKey(new MFFloat840().getArray()).setKeyValue(new MFRotation841().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_acromioclavicular_RollInterpolator").setKey(new MFFloat842().getArray()).setKeyValue(new MFRotation843().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_sacroiliac_YawInterpolator").setKey(new MFFloat844().getArray()).setKeyValue(new MFRotation845().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_vl5_YawInterpolator").setKey(new MFFloat846().getArray()).setKeyValue(new MFRotation847().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_vc6_YawInterpolator").setKey(new MFFloat848().getArray()).setKeyValue(new MFRotation849().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_l_thumb1_PitchInterpolator").setKey(new MFFloat850().getArray()).setKeyValue(new MFRotation851().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_thumb1_PitchInterpolator").setKey(new MFFloat852().getArray()).setKeyValue(new MFRotation853().getArray())))
        .addChild(new Group().setDEF("WalkAnimation")
          .addChild(new TimeSensor().setDEF("WalkTimer").setCycleInterval(1.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_metatarsal_PitchInterpolator").setKey(new MFFloat854().getArray()).setKeyValue(new MFRotation855().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_ankle_RotationInterpolator").setKey(new MFFloat856().getArray()).setKeyValue(new MFRotation857().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_knee_RotationInterpolator").setKey(new MFFloat858().getArray()).setKeyValue(new MFRotation859().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_hip_RotationInterpolator").setKey(new MFFloat860().getArray()).setKeyValue(new MFRotation861().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_ankle_RotationInterpolator").setKey(new MFFloat862().getArray()).setKeyValue(new MFRotation863().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_knee_RotationInterpolator").setKey(new MFFloat864().getArray()).setKeyValue(new MFRotation865().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_hip_RotationInterpolator").setKey(new MFFloat866().getArray()).setKeyValue(new MFRotation867().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_lower_body_RotationInterpolator").setKey(new MFFloat868().getArray()).setKeyValue(new MFRotation869().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_wrist_RotationInterpolator").setKey(new MFFloat870().getArray()).setKeyValue(new MFRotation871().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_elbow_RotationInterpolator").setKey(new MFFloat872().getArray()).setKeyValue(new MFRotation873().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_shoulder_RotationInterpolator").setKey(new MFFloat874().getArray()).setKeyValue(new MFRotation875().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_wrist_RotationInterpolator").setKey(new MFFloat876().getArray()).setKeyValue(new MFRotation877().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_elbow_RotationInterpolator").setKey(new MFFloat878().getArray()).setKeyValue(new MFRotation879().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_shoulder_RotationInterpolator").setKey(new MFFloat880().getArray()).setKeyValue(new MFRotation881().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_head_RotationInterpolator").setKey(new MFFloat882().getArray()).setKeyValue(new MFRotation883().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_neck_RotationInterpolator").setKey(new MFFloat884().getArray()).setKeyValue(new MFRotation885().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_upper_body_RotationInterpolator").setKey(new MFFloat886().getArray()).setKeyValue(new MFRotation887().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_whole_body_RotationInterpolator").setKey(new MFFloat888().getArray()).setKeyValue(new MFRotation889().getArray()))
          .addChild(new PositionInterpolator().setDEF("Walk_whole_body_TranslationInterpolator").setKey(new MFFloat890().getArray()).setKeyValue(new MFVec3f891().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_sternoclavicular_RollInterpolator").setKey(new MFFloat892().getArray()).setKeyValue(new MFRotation893().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_acromioclavicular_RollInterpolator").setKey(new MFFloat894().getArray()).setKeyValue(new MFRotation895().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_sternoclavicular_RollInterpolator").setKey(new MFFloat896().getArray()).setKeyValue(new MFRotation897().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_acromioclavicular_RollInterpolator").setKey(new MFFloat898().getArray()).setKeyValue(new MFRotation899().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_sacroiliac_YawInterpolator").setKey(new MFFloat900().getArray()).setKeyValue(new MFRotation901().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_vl5_YawInterpolator").setKey(new MFFloat902().getArray()).setKeyValue(new MFRotation903().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_vc6_YawInterpolator").setKey(new MFFloat904().getArray()).setKeyValue(new MFRotation905().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_thumb1_PitchInterpolator").setKey(new MFFloat906().getArray()).setKeyValue(new MFRotation907().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_thumb1_PitchInterpolator").setKey(new MFFloat908().getArray()).setKeyValue(new MFRotation909().getArray())))
        .addChild(new Group().setDEF("RunAnimation")
          .addChild(new TimeSensor().setDEF("RunTimer").setCycleInterval(0.9d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Run_r_metatarsal_PitchInterpolator").setKey(new MFFloat910().getArray()).setKeyValue(new MFRotation911().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_hip_RotationInterpolator_Run").setKey(new MFFloat912().getArray()).setKeyValue(new MFRotation913().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_knee_RotationInterpolator_Run").setKey(new MFFloat914().getArray()).setKeyValue(new MFRotation915().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_ankle_RotationInterpolator_Run").setKey(new MFFloat916().getArray()).setKeyValue(new MFRotation917().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_hip_RotationInterpolator_Run").setKey(new MFFloat918().getArray()).setKeyValue(new MFRotation919().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_knee_RotationInterpolator_Run").setKey(new MFFloat920().getArray()).setKeyValue(new MFRotation921().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_ankle_RotationInterpolator_Run").setKey(new MFFloat922().getArray()).setKeyValue(new MFRotation923().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_shoulder_RotationInterpolator_Run").setKey(new MFFloat924().getArray()).setKeyValue(new MFRotation925().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_elbow_RotationInterpolator_Run").setKey(new MFFloat926().getArray()).setKeyValue(new MFRotation927().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_wrist_RotationInterpolator_Run").setKey(new MFFloat928().getArray()).setKeyValue(new MFRotation929().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_shoulder_RotationInterpolator_Run").setKey(new MFFloat930().getArray()).setKeyValue(new MFRotation931().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_elbow_RotationInterpolator_Run").setKey(new MFFloat932().getArray()).setKeyValue(new MFRotation933().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_wrist_RotationInterpolator_Run").setKey(new MFFloat934().getArray()).setKeyValue(new MFRotation935().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_lower_body_RotationInterpolator_Run").setKey(new MFFloat936().getArray()).setKeyValue(new MFRotation937().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_head_RotationInterpolator_Run").setKey(new MFFloat938().getArray()).setKeyValue(new MFRotation939().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_neck_RotationInterpolator_Run").setKey(new MFFloat940().getArray()).setKeyValue(new MFRotation941().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_upper_body_RotationInterpolator_Run").setKey(new MFFloat942().getArray()).setKeyValue(new MFRotation943().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_whole_body_RotationInterpolator_Run").setKey(new MFFloat944().getArray()).setKeyValue(new MFRotation945().getArray()))
          .addChild(new PositionInterpolator().setDEF("Run_whole_body_TranslationInterpolator_Run").setKey(new MFFloat946().getArray()).setKeyValue(new MFVec3f947().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_sternoclavicular_RollInterpolator").setKey(new MFFloat948().getArray()).setKeyValue(new MFRotation949().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_acromioclavicular_RollInterpolator").setKey(new MFFloat950().getArray()).setKeyValue(new MFRotation951().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_sternoclavicular_RollInterpolator").setKey(new MFFloat952().getArray()).setKeyValue(new MFRotation953().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_acromioclavicular_RollInterpolator").setKey(new MFFloat954().getArray()).setKeyValue(new MFRotation955().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_sacroiliac_YawInterpolator").setKey(new MFFloat956().getArray()).setKeyValue(new MFRotation957().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_vl5_YawInterpolator").setKey(new MFFloat958().getArray()).setKeyValue(new MFRotation959().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_vc6_YawInterpolator").setKey(new MFFloat960().getArray()).setKeyValue(new MFRotation961().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_thumb1_PitchInterpolator").setKey(new MFFloat962().getArray()).setKeyValue(new MFRotation963().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_thumb1_PitchInterpolator").setKey(new MFFloat964().getArray()).setKeyValue(new MFRotation965().getArray())))
        .addChild(new Group().setDEF("JumpAnimation")
          .addChild(new TimeSensor().setDEF("JumpTimer").setCycleInterval(3.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_metatarsal_PitchInterpolator").setKey(new MFFloat966().getArray()).setKeyValue(new MFRotation967().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_ankle_RotationInterpolator").setKey(new MFFloat968().getArray()).setKeyValue(new MFRotation969().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_knee_RotationInterpolator").setKey(new MFFloat970().getArray()).setKeyValue(new MFRotation971().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_hip_RotationInterpolator").setKey(new MFFloat972().getArray()).setKeyValue(new MFRotation973().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_ankle_RotationInterpolator").setKey(new MFFloat974().getArray()).setKeyValue(new MFRotation975().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_knee_RotationInterpolator").setKey(new MFFloat976().getArray()).setKeyValue(new MFRotation977().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_hip_RotationInterpolator").setKey(new MFFloat978().getArray()).setKeyValue(new MFRotation979().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_lower_body_RotationInterpolator").setKey(new MFFloat980().getArray()).setKeyValue(new MFRotation981().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_wrist_RotationInterpolator").setKey(new MFFloat982().getArray()).setKeyValue(new MFRotation983().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_elbow_RotationInterpolator").setKey(new MFFloat984().getArray()).setKeyValue(new MFRotation985().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_shoulder_RotationInterpolator").setKey(new MFFloat986().getArray()).setKeyValue(new MFRotation987().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_wrist_RotationInterpolator").setKey(new MFFloat988().getArray()).setKeyValue(new MFRotation989().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_elbow_RotationInterpolator").setKey(new MFFloat990().getArray()).setKeyValue(new MFRotation991().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_shoulder_RotationInterpolator").setKey(new MFFloat992().getArray()).setKeyValue(new MFRotation993().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_head_RotationInterpolator").setKey(new MFFloat994().getArray()).setKeyValue(new MFRotation995().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_neck_RotationInterpolator").setKey(new MFFloat996().getArray()).setKeyValue(new MFRotation997().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_upper_body_RotationInterpolator").setKey(new MFFloat998().getArray()).setKeyValue(new MFRotation999().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_whole_body_RotationInterpolator").setKey(new MFFloat1000().getArray()).setKeyValue(new MFRotation1001().getArray()))
          .addChild(new PositionInterpolator().setDEF("Jump_whole_body_TranslationInterpolator").setKey(new MFFloat1002().getArray()).setKeyValue(new MFVec3f1003().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_sternoclavicular_RollInterpolator").setKey(new MFFloat1004().getArray()).setKeyValue(new MFRotation1005().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_acromioclavicular_RollInterpolator").setKey(new MFFloat1006().getArray()).setKeyValue(new MFRotation1007().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_sternoclavicular_RollInterpolator").setKey(new MFFloat1008().getArray()).setKeyValue(new MFRotation1009().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_acromioclavicular_RollInterpolator").setKey(new MFFloat1010().getArray()).setKeyValue(new MFRotation1011().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_sacroiliac_YawInterpolator").setKey(new MFFloat1012().getArray()).setKeyValue(new MFRotation1013().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_vl5_YawInterpolator").setKey(new MFFloat1014().getArray()).setKeyValue(new MFRotation1015().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_vc6_YawInterpolator").setKey(new MFFloat1016().getArray()).setKeyValue(new MFRotation1017().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_thumb1_PitchInterpolator").setKey(new MFFloat1018().getArray()).setKeyValue(new MFRotation1019().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_thumb1_PitchInterpolator").setKey(new MFFloat1020().getArray()).setKeyValue(new MFRotation1021().getArray())))
        .addChild(new Group().setDEF("KickAnimation")
          .addChild(new TimeSensor().setDEF("KickTimer").setCycleInterval(3.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_sternoclavicular_RollInterpolator").setKey(new MFFloat1022().getArray()).setKeyValue(new MFRotation1023().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_acromioclavicular_RollInterpolator").setKey(new MFFloat1024().getArray()).setKeyValue(new MFRotation1025().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_shoulder_RollInterpolator").setKey(new MFFloat1026().getArray()).setKeyValue(new MFRotation1027().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_ForeArm_PitchInterpolator").setKey(new MFFloat1028().getArray()).setKeyValue(new MFRotation1029().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_wrist_RollInterpolator").setKey(new MFFloat1030().getArray()).setKeyValue(new MFRotation1031().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_thumb1_PitchInterpolator").setKey(new MFFloat1032().getArray()).setKeyValue(new MFRotation1033().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_sternoclavicular_RollInterpolator").setKey(new MFFloat1034().getArray()).setKeyValue(new MFRotation1035().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_acromioclavicular_RollInterpolator").setKey(new MFFloat1036().getArray()).setKeyValue(new MFRotation1037().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_shoulder_RollInterpolator").setKey(new MFFloat1038().getArray()).setKeyValue(new MFRotation1039().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_ForeArm_PitchInterpolator").setKey(new MFFloat1040().getArray()).setKeyValue(new MFRotation1041().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_wrist_RollInterpolator").setKey(new MFFloat1042().getArray()).setKeyValue(new MFRotation1043().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_thumb1_PitchInterpolator").setKey(new MFFloat1044().getArray()).setKeyValue(new MFRotation1045().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_hip_PitchInterpolator").setKey(new MFFloat1046().getArray()).setKeyValue(new MFRotation1047().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_knee_PitchInterpolator").setKey(new MFFloat1048().getArray()).setKeyValue(new MFRotation1049().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_hip_PitchInterpolator").setKey(new MFFloat1050().getArray()).setKeyValue(new MFRotation1051().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_knee_PitchInterpolator").setKey(new MFFloat1052().getArray()).setKeyValue(new MFRotation1053().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_ankle_PitchInterpolator").setKey(new MFFloat1054().getArray()).setKeyValue(new MFRotation1055().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_metatarsal_PitchInterpolator").setKey(new MFFloat1056().getArray()).setKeyValue(new MFRotation1057().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_sacroiliac_YawInterpolator").setKey(new MFFloat1058().getArray()).setKeyValue(new MFRotation1059().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_vl5_YawInterpolator").setKey(new MFFloat1060().getArray()).setKeyValue(new MFRotation1061().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_vc6_YawInterpolator").setKey(new MFFloat1062().getArray()).setKeyValue(new MFRotation1063().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_lower_body_RotationInterpolator").setKey(new MFFloat1064().getArray()).setKeyValue(new MFRotation1065().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_upper_body_RotationInterpolator").setKey(new MFFloat1066().getArray()).setKeyValue(new MFRotation1067().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_whole_body_RotationInterpolator").setKey(new MFFloat1068().getArray()).setKeyValue(new MFRotation1069().getArray()))
          .addChild(new PositionInterpolator().setDEF("Kick_whole_body_TranslationInterpolator").setKey(new MFFloat1070().getArray()).setKeyValue(new MFVec3f1071().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_neck_RotationInterpolator").setKey(new MFFloat1072().getArray()).setKeyValue(new MFRotation1073().getArray())))
        .addChild(new Group().setDEF("UserInterface")
          .addChild(new Transform().setDEF("CoordinateAxesAdjustedScale").setScale(new float[] {0.175f ,0.175f ,0.175f })
            .addChild(new Inline().setDEF("CoordinateAxes").setGlobal(true).setUrl(new MFString1074().getArray())))
          .addChild(new Transform().setDEF("cordsys").setScale(new float[] {0.175f ,0.175f ,0.175f }))
          .addChild(new ProximitySensor().setDEF("HudProximitySensor").setSize(new float[] {500f ,100f ,500f }).setCenter(new float[] {0f ,20f ,0f }))
          .addChild(new Transform().setDEF("Stage").setTranslation(new float[] {0f ,-0.0125f ,0f }).setScale(new float[] {1f ,0.0125f ,1f })
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setTransparency(0.6f )))
              .setGeometry(new Box()))
            .addChild(new Transform().setDEF("Circle0").setScale(new float[] {1.175f ,1f ,1.175f })
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0f ,0.7f }).setEmissiveColor(new float[] {0.424956f ,0.483976f ,1f })))
                .setGeometry(new IndexedLineSet().setDEF("Orbit1").setCoordIndex(new MFInt321075().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f1076().getArray())))))
            .addChild(new Transform().setDEF("Circle1").setScale(new float[] {0.5f ,1f ,0.5f })
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0f ,0.7f }).setEmissiveColor(new float[] {0.424956f ,0.483976f ,1f })))
                .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
            .addChild(new Transform().setDEF("Circle2").setScale(new float[] {0.25f ,1f ,0.25f })
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0f ,0.7f }).setEmissiveColor(new float[] {0.424956f ,0.483976f ,1f })))
                .setGeometry(new IndexedLineSet().setUSE("Orbit1")))))
          .addChild(new Transform().setDEF("HudXform").setTranslation(new float[] {1.705442f ,1.042139f ,1.989742f }).setRotation(new float[] {-0.09996068f ,0.9942513f ,0.03837026f ,0.7131352f })
            .addChild(new Transform().setTranslation(new float[] {-0.42f ,-0.2f ,-0.75f }).setScale(new float[] {0.035f ,0.035f ,0.035f })
              .addChild(new Transform().setDEF("StandTransform").setTranslation(new float[] {0f ,-1f ,0f })
                .addChild(new TouchSensor().setDEF("Stand_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("StandTextShape")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("text_color").setAmbientIntensity(1f ).setDiffuseColor(new float[] {0.819f ,0.521f ,0.169f }).setSpecularColor(new float[] {0.819f ,0.521f ,0.169f }).setEmissiveColor(new float[] {0.819f ,0.521f ,0.169f })))
                  .setGeometry(new Text().setString(new MFString1077().getArray())))
                .addChild(new Shape().setDEF("Stand_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("Clear").setAmbientIntensity(1f ).setDiffuseColor(new float[] {0f ,0.5f ,0f }).setEmissiveColor(new float[] {0f ,0.5f ,0f }).setTransparency(0.8f )))
                  .setGeometry(new IndexedFaceSet().setDEF("Backing").setCoordIndex(new MFInt321078().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f1079().getArray())))))
              .addChild(new Transform().setDEF("PitchTransform").setTranslation(new float[] {3f ,-1f ,0f })
                .addChild(new TouchSensor().setDEF("Pitch_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("PitchTextShape")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1080().getArray())))
                .addChild(new Shape().setDEF("Pitch_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("YawTransform").setTranslation(new float[] {6f ,-1f ,0f })
                .addChild(new TouchSensor().setDEF("Yaw_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("YawText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1081().getArray())))
                .addChild(new Shape().setDEF("Yaw_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("RollTransform").setTranslation(new float[] {9f ,-1f ,0f })
                .addChild(new TouchSensor().setDEF("Roll_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("_RollInterpolator")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1082().getArray())))
                .addChild(new Shape().setDEF("Roll_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("WalkTransform").setTranslation(new float[] {12f ,-1f ,0f })
                .addChild(new TouchSensor().setDEF("Walk_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("WalkText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1083().getArray())))
                .addChild(new Shape().setDEF("Walk_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("RunTransform").setTranslation(new float[] {15f ,-1f ,0f })
                .addChild(new TouchSensor().setDEF("Run_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("RunText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1084().getArray())))
                .addChild(new Shape().setDEF("Run_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("JumpTransform").setTranslation(new float[] {18f ,-1f ,0f })
                .addChild(new TouchSensor().setDEF("Jump_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("Jump")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1085().getArray())))
                .addChild(new Shape().setDEF("Jump_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("KickTransform").setTranslation(new float[] {21f ,-1f ,0f })
                .addChild(new TouchSensor().setDEF("Kick_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("KickText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1086().getArray())))
                .addChild(new Shape().setDEF("Kick_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Stop_Text").setTranslation(new float[] {0f ,1.4f ,0f })
                .addChild(new TouchSensor().setDEF("Stop_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("StopText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1087().getArray())))
                .addChild(new Shape().setDEF("Stop_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing")))))))
        .addChild(new Group().setDEF("BehaviorSynchronization"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_HumanoidRoot_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_sacroiliac_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_subtalar_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_midtarsal_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_metatarsal_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_subtalar_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_midtarsal_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_metatarsal_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl5_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl4_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt12_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt11_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt10_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt9_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt8_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt7_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt6_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt5_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt4_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc7_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc6_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc5_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc4_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_skullbase_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_eyeball_joint_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_eyeball_joint_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_sternoclavicular_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_acromioclavicular_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_thumb1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_thumb2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_thumb3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_sternoclavicular_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_acromioclavicular_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_thumb1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_thumb2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_thumb3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Stop_HumanoidRoot_TranslationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Stop_HumanoidRoot_RotationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_sacroiliac_RotationInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_hip_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_knee_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_subtalar_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_subtalar").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_midtarsal_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_midtarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_metatarsal_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_hip_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_knee_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_subtalar_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_subtalar").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_midtarsal_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_midtarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_metatarsal_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vl5_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vl4_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vl4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vl3_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vl3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vl2_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vl2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vl1_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt12_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vt12").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt11_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vt11").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt10_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vt10").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt9_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vt9").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt8_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vt8").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt7_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vt7").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt6_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vt6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt5_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vt5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt4_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vt4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt3_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vt3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt2_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vt2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt1_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vt1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vc7_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vc7").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vc6_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vc5_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vc5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vc4_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vc3_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vc3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vc2_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vc2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vc1_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vc1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_skullbase_RotationInterpolator").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_eyeball_joint_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_eyeball_joint").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_eyeball_joint_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_eyeball_joint").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_sternoclavicular_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_acromioclavicular_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_thumb1_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_thumb2_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_thumb2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_thumb3_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_thumb3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_index0_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_index0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_index1_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_index1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_index2_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_index2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_index3_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_index3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_middle0_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_middle0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_middle1_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_middle1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_middle2_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_middle2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_middle3_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_middle3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_ring0_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_ring0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_ring1_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_ring1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_ring2_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_ring2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_ring3_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_ring3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_pinky0_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_pinky0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_pinky1_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_pinky1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_pinky2_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_pinky2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_pinky3_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_pinky3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_sternoclavicular_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_acromioclavicular_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_thumb1_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_thumb2_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_thumb2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_thumb3_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_thumb3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_index0_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_index0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_index1_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_index1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_index2_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_index2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_index3_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_index3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_middle0_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_middle0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_middle1_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_middle1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_middle2_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_middle2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_middle3_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_middle3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_ring0_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_ring0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_ring1_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_ring1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_ring2_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_ring2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_ring3_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_ring3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_pinky0_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_pinky0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_pinky1_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_pinky1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_pinky2_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_pinky2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_pinky3_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_pinky3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_lower_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_head_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_neck_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_eyeball_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_eyeball_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_upper_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_whole_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_whole_body_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_index1_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_index2_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_index3_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Stand_r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_knee_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_hip_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_knee_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_hip_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_head_RotationInterpolator").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_neck_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vc7").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_eyeball_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_eyeball_joint").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_eyeball_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_eyeball_joint").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_upper_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_lower_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_whole_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_whole_body_TranslationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Stand_l_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_sacroiliac_YawInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_vl5_YawInterpolator").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_vc6_YawInterpolator").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index1_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_index1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index2_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_index2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index3_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_index3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index1_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_middle1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index2_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_middle2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index3_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_middle3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index1_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_ring1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index2_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_ring2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index3_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_ring3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index1_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_pinky1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index2_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_pinky2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index3_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_pinky3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_lower_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_head_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_neck_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_upper_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_whole_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_whole_body_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Pitches_r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_r_knee_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_r_hip_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_knee_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_hip_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_lower_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_head_RotationInterpolator").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_neck_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_upper_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_whole_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_whole_body_TranslationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Pitch_l_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_l_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_r_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_r_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_sacroiliac_YawInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_vl5_YawInterpolator").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_vc6_YawInterpolator").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_l_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_r_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_lower_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_head_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_neck_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_upper_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_whole_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_whole_body_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Yaws_r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_r_knee_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_r_hip_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_knee_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_hip_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_lower_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_head_RotationInterpolator").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_neck_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_upper_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_whole_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_whole_body_TranslationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Yaw_l_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_l_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_r_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_r_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_sacroiliac_YawInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_vl5_YawInterpolator").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_vc6_YawInterpolator").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_l_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_r_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_lower_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_head_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_neck_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_upper_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_whole_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_whole_body_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Rolls_r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_r_knee_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_r_hip_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_knee_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_hip_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_lower_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_head_RotationInterpolator").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_neck_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_upper_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_whole_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_whole_body_TranslationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Roll_l_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_l_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_r_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_r_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_sacroiliac_YawInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_vl5_YawInterpolator").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_vc6_YawInterpolator").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_l_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_r_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_lower_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_head_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_neck_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_upper_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_whole_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_whole_body_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Walk_r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_knee_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_hip_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_knee_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_hip_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_lower_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_head_RotationInterpolator").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_neck_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_upper_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_whole_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_whole_body_TranslationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Walk_l_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_sacroiliac_YawInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_vl5_YawInterpolator").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_vc6_YawInterpolator").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_ankle_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_knee_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_hip_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_ankle_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_knee_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_hip_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_lower_body_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_wrist_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_elbow_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_shoulder_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_wrist_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_elbow_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_shoulder_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_head_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_neck_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_upper_body_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_whole_body_RotationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_whole_body_TranslationInterpolator_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Run_r_ankle_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_knee_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_hip_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_ankle_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_knee_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_hip_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_wrist_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_elbow_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_shoulder_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_wrist_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_elbow_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_shoulder_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_lower_body_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_head_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_neck_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_upper_body_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_whole_body_RotationInterpolator_Run").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_whole_body_TranslationInterpolator_Run").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Run_l_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_sacroiliac_YawInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_vl5_YawInterpolator").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_vc6_YawInterpolator").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_lower_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_head_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_neck_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_upper_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_whole_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_whole_body_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Jump_r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_knee_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_hip_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_knee_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_hip_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_lower_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_head_RotationInterpolator").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_neck_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_upper_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_whole_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_whole_body_TranslationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Jump_l_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_sacroiliac_YawInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_vl5_YawInterpolator").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_vc6_YawInterpolator").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_shoulder_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_ForeArm_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_wrist_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_sternoclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_acromioclavicular_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_shoulder_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_ForeArm_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_wrist_RollInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_thumb1_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_hip_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_knee_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_hip_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_knee_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_ankle_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_metatarsal_PitchInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_sacroiliac_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_vl5_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_vc6_YawInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_lower_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_upper_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_whole_body_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_whole_body_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_neck_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Kick_l_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_shoulder_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_ForeArm_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_wrist_RollInterpolator").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_sternoclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_acromioclavicular_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_shoulder_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_ForeArm_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_wrist_RollInterpolator").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_thumb1_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_hip_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_knee_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_ankle_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_hip_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_knee_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_ankle_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_metatarsal_PitchInterpolator").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_sacroiliac_YawInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_vl5_YawInterpolator").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_vc6_YawInterpolator").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_upper_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_lower_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_whole_body_RotationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_whole_body_TranslationInterpolator").setFromField("value_changed").setToNode("hanim_humanoid_root").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Kick_neck_RotationInterpolator").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("HudProximitySensor").setFromField("position_changed").setToNode("HudXform").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("HudProximitySensor").setFromField("orientation_changed").setToNode("HudXform").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_startTime")));
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
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"});
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
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {0f ,0f ,1f ,1f ,0f ,0f ,1f ,0.1f });
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
private class MFFloat440 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFVec3f441 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat442 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation443 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat444 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation445 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat446 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation447 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat448 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation449 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat450 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation451 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat452 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation453 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat454 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation455 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat456 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation457 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat458 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation459 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat460 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation461 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat462 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation463 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat464 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation465 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat466 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation467 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat468 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation469 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat470 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation471 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat472 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation473 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat474 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation475 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat476 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation477 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat478 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation479 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat480 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation481 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat482 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation483 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat484 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation485 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat486 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation487 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat488 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation489 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat490 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation491 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat492 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation493 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat494 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation495 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat496 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation497 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat498 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation499 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat500 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation501 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat502 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation503 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat504 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation505 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat506 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation507 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat508 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation509 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat510 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation511 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat512 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation513 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat514 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation515 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat516 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation517 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat518 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation519 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat520 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation521 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat522 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation523 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat524 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation525 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat526 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation527 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat528 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation529 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat530 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation531 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat532 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation533 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat534 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation535 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat536 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation537 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat538 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation539 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat540 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation541 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat542 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation543 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat544 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation545 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat546 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation547 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat548 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation549 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat550 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation551 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat552 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation553 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat554 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation555 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat556 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation557 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat558 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation559 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat560 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation561 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat562 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation563 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat564 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation565 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat566 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation567 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat568 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation569 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat570 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation571 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat572 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation573 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat574 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation575 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat576 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation577 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat578 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation579 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat580 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation581 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat582 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation583 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat584 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation585 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat586 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation587 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat588 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation589 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat590 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation591 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat592 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation593 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat594 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation595 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat596 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation597 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat598 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation599 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat600 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation601 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat602 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation603 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat604 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation605 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat606 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation607 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat608 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation609 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat610 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation611 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat612 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation613 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat614 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation615 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat616 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation617 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat618 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation619 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat620 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation621 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,-1f ,0f ,0f ,0.015f ,1f ,0f ,0f ,0.17f ,-1f ,0f ,0f ,0.025f ,1f ,0f ,0f ,0.01f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat622 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation623 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat624 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation625 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat626 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation627 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat628 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation629 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat630 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation631 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat632 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation633 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat634 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation635 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,-1f ,0.25f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat636 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation637 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat638 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation639 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat640 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation641 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat642 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation643 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat644 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation645 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat646 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation647 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat648 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation649 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat650 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.4f ,0.7f ,1f });
  }
}
private class MFRotation651 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,0.45f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat652 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.4f ,0.7f ,1f });
  }
}
private class MFRotation653 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,0.45f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat654 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation655 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat656 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation657 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat658 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation659 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat660 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFVec3f661 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat662 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation663 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat664 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation665 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat666 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation667 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat668 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation669 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat670 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation671 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat672 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation673 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat674 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation675 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,-1f ,0f ,0f ,0f ,0f ,-1f ,0f ,0f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat676 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation677 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat678 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation679 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,0.1f ,1f ,0f ,0f ,0.27f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat680 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.8f ,1f });
  }
}
private class MFRotation681 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.1f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0.3f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat682 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.8f ,1f });
  }
}
private class MFRotation683 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.4f ,0f ,0f ,1f ,0.32f ,0f ,0f ,1f ,0.25f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat684 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.8f ,1f });
  }
}
private class MFRotation685 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0.3f ,0f ,0f ,1f ,0.35f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat686 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation687 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,-1f ,0f ,0f ,0.5f ,-1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.75f ,-1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat688 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation689 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat690 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation691 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat692 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation693 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat694 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation695 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat696 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation697 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat698 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation699 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat700 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation701 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat702 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation703 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat704 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation705 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat706 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation707 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat708 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation709 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat710 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation711 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat712 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation713 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat714 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.55f ,1f });
  }
}
private class MFRotation715 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.55f ,-1f ,0f ,0f ,1.05f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat716 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation717 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat718 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation719 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat720 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation721 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat722 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.25f ,0.375f ,0.5f ,0.625f ,0.75f ,0.875f ,1f });
  }
}
private class MFVec3f723 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-0.15f ,0f ,0f ,-0.7f ,0f ,0f ,-0.15f ,0f ,0f ,0f ,0f ,0f ,-0.15f ,0f ,0f ,-0.7f ,0f ,0f ,-0.15f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat724 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation725 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat726 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation727 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat728 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation729 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat730 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation731 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat732 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation733 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat734 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation735 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat736 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation737 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat738 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation739 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.25f ,1f ,0f ,0f ,0.3f ,1f ,0f ,0f ,0.27f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat740 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation741 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.25f ,1f ,0f ,0f ,0.3f ,1f ,0f ,0f ,0.27f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat742 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation743 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat744 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation745 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,-1f ,0f ,1.5f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat746 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation747 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,1f ,0f ,1.5f ,0f ,0f ,1f ,0f ,0f ,-1f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat748 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation749 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat750 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation751 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,1f ,0f ,1.5f ,0f ,0f ,1f ,0f ,0f ,-1f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat752 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation753 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,-1f ,0f ,1.5f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat754 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation755 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat756 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation757 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat758 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation759 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat760 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation761 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat762 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation763 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat764 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation765 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat766 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation767 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat768 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation769 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat770 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation771 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,1f ,0f ,1.5f ,0f ,0f ,1f ,0f ,0f ,-1f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat772 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation773 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,-1f ,0f ,1.5f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat774 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation775 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat776 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation777 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat778 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFVec3f779 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat780 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation781 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat782 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation783 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat784 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation785 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat786 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation787 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat788 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation789 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,-1f ,0f ,0.1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.24f ,0f ,-1f ,0f ,0.4f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat790 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation791 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat792 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation793 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat794 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation795 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat796 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation797 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat798 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation799 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat800 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation801 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat802 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation803 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat804 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation805 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,-1f ,0f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,1f ,0f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat806 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation807 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,1f ,0f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat808 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation809 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat810 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation811 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat812 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation813 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat814 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation815 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat816 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation817 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,-1f ,3f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat818 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation819 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,0f ,0f ,0f ,-1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat820 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation821 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat822 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation823 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,3f ,0f ,0f ,1f ,1.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat824 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation825 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat826 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation827 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.25f ,0f ,0f ,1f ,0f ,0f ,0f ,-1f ,1.25f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat828 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation829 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat830 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation831 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat832 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation833 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat834 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.25f ,0.375f ,0.5f ,0.625f ,0.75f ,0.875f ,1f });
  }
}
private class MFVec3f835 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-0.25f ,0f ,0f ,-0.8f ,0f ,0f ,-0.25f ,0f ,0f ,0f ,0f ,0f ,-0.25f ,0f ,0f ,-0.8f ,0f ,0f ,-0.25f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat836 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation837 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0.22f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat838 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation839 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.05f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat840 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation841 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,-0.2f ,0f ,0f ,1f ,-0.22f ,0f ,0f ,1f ,-0.2f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat842 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation843 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,-0.05f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat844 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation845 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat846 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation847 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat848 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation849 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat850 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation851 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat852 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation853 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat854 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation855 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat856 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.375f ,0.4583f ,0.5f ,0.6667f ,0.75f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation857 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.3533f ,-1f ,0f ,0f ,0.1072f ,1f ,0f ,0f ,0.2612f ,1f ,0f ,0f ,0.1268f ,-1f ,0f ,0f ,0.01793f ,-1f ,0f ,0f ,0.05824f ,-1f ,0f ,0f ,0.2398f ,-1f ,0f ,0f ,0.35f ,-1f ,0f ,0f ,0.3322f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat858 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.2917f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation859 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.8573f ,1f ,0f ,0f ,0.8926f ,1f ,0f ,0f ,0.5351f ,1f ,0f ,0f ,0.1756f ,1f ,0f ,0f ,0.1194f ,1f ,0f ,0f ,0.3153f ,1f ,0f ,0f ,0.09354f ,1f ,0f ,0f ,0.08558f ,1f ,0f ,0f ,0.2475f ,1f ,0f ,0f ,0.8573f });
  }
}
private class MFFloat860 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.2917f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation861 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.5831f ,0.03511f ,0.8116f ,0.1481f ,-0.995f ,0.02296f ,0.09674f ,0.4683f ,-1f ,0.00192f ,0.007964f ,0.4732f ,-0.998f ,-0.0158f ,-0.06102f ,0.5079f ,-0.9911f ,-0.03541f ,-0.1286f ,0.5419f ,-0.9131f ,-0.06243f ,-0.403f ,0.3361f ,-0.4306f ,-0.07962f ,-0.899f ,0.07038f ,1f ,0f ,0f ,0.2571f ,0.9891f ,-0.02805f ,0.1444f ,0.3879f ,-0.5831f ,0.03511f ,0.8116f ,0.1481f });
  }
}
private class MFFloat862 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.375f ,0.6667f ,0.9167f ,1f });
  }
}
private class MFRotation863 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.06714f ,-1f ,0f ,0f ,0.2152f ,-1f ,0f ,0f ,0.3184f ,-1f ,0f ,0f ,0.4717f ,-1f ,0f ,0f ,0.2912f ,1f ,0f ,0f ,0.1222f ,-1f ,0f ,0f ,0.06714f });
  }
}
private class MFFloat864 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2083f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation865 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.3226f ,1f ,0f ,0f ,0.1556f ,1f ,0f ,0f ,0.08678f ,1f ,0f ,0f ,0.8751f ,1f ,0f ,0f ,1.131f ,1f ,0f ,0f ,0.09961f ,1f ,0f ,0f ,0.3942f ,1f ,0f ,0f ,0.3226f });
  }
}
private class MFFloat866 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation867 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.873f ,0.06094f ,0.484f ,0.2865f ,0.9963f ,-0.01057f ,0.08481f ,0.2488f ,0.9965f ,0.01591f ,-0.08222f ,0.3836f ,-0.7018f ,-0.03223f ,-0.7117f ,0.1289f ,-1f ,0f ,0f ,0.5518f ,-0.9964f ,0.02231f ,0.0817f ,0.5351f ,-0.9809f ,0.04912f ,0.1881f ,0.5204f ,-0.873f ,0.06094f ,0.484f ,0.2865f });
  }
}
private class MFFloat868 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation869 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,-1f ,0.1056f ,0f ,0f ,1f ,0.09018f ,0f ,0f ,-1f ,0.1056f });
  }
}
private class MFFloat870 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation871 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.8129f ,0.4759f ,-0.3357f ,0.1346f ,0.1533f ,-0.9878f ,0.02582f ,0.3902f ,-0.5701f ,0.7604f ,-0.311f ,0.366f ,-0.8129f ,0.4759f ,-0.3357f ,0.1346f });
  }
}
private class MFFloat872 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation873 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.411508f ,-1f ,0f ,0f ,0.0925011f ,-1f ,0f ,0f ,0.572568f ,-1f ,0f ,0f ,0.411508f });
  }
}
private class MFFloat874 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation875 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.09346f ,1f ,0f ,0f ,0.3197f ,-1f ,0f ,0f ,0.1564f ,-1f ,0f ,0f ,0.09346f });
  }
}
private class MFFloat876 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation877 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,-1f ,0f ,0.461076f ,-0.330195f ,-0.927451f ,0.175516f ,0.538852f ,0.0327774f ,-0.999314f ,-0.0172185f ,0.492033f ,0f ,-1f ,0f ,0.461076f });
  }
}
private class MFFloat878 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation879 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.0659878f ,-1f ,0f ,0f ,0.488383f ,-1f ,0f ,0f ,0.0177536f ,-1f ,0f ,0f ,0.0659878f });
  }
}
private class MFFloat880 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation881 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.1189f ,-1f ,0f ,0f ,0.1861f ,1f ,0f ,0f ,0.3357f ,1f ,0f ,0f ,0.1189f });
  }
}
private class MFFloat882 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.4167f ,0.5f ,0.5833f ,0.6667f ,0.75f ,0.8333f ,0.9167f ,1f });
  }
}
private class MFRotation883 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,-1f ,0f ,0.08642f ,0f ,1f ,0f ,0.1825f ,0f ,1f ,0f ,0.1505f ,0f ,1f ,0f ,0.1053f ,0f ,1f ,0f ,0.04391f ,0f ,-1f ,0f ,0.03119f ,0f ,-1f ,0f ,0.07936f ,0f ,-1f ,0f ,0.1616f ,0f ,-1f ,0f ,0.155f ,0f ,-1f ,0f ,0.08642f });
  }
}
private class MFFloat884 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation885 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat886 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2083f ,0.375f ,0.75f ,0.8333f ,1f });
  }
}
private class MFRotation887 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0.0826f ,-0.01972f ,-0.5974f ,0.8017f ,0.08231f ,0.009296f ,-0.9648f ,0.2627f ,0.1734f ,-0.01238f ,0.9549f ,-0.2968f ,0.08732f ,-0.008125f ,0.9691f ,-0.2463f ,0.158f ,0f ,1f ,0f ,0.0826f });
  }
}
private class MFFloat888 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation889 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat890 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.04167f ,0.125f ,0.1667f ,0.2083f ,0.25f ,0.2917f ,0.375f ,0.4583f ,0.5f ,0.5417f ,0.5833f ,0.625f ,0.7083f ,0.75f ,0.7917f ,0.875f ,0.9167f ,1f });
  }
}
private class MFVec3f891 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-0.00928f ,0f ,0f ,-0.003858f ,0f ,0f ,-0.008847f ,0f ,0f ,-0.01486f ,0f ,0f ,-0.02641f ,0f ,0f ,-0.03934f ,0f ,0f ,-0.0502f ,0f ,0f ,-0.07469f ,0f ,0f ,-0.02732f ,0f ,0f ,-0.01608f ,0f ,0f ,-0.01129f ,0f ,0f ,-0.005819f ,0f ,0f ,-0.002004f ,0f ,0f ,-0.002579f ,0f ,0f ,-0.0143f ,0f ,0f ,-0.03799f ,0f ,0f ,-0.05648f ,0f ,0f ,-0.045f ,0f ,0f ,-0.00928f ,0f });
  }
}
private class MFFloat892 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation893 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat894 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation895 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat896 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation897 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat898 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation899 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat900 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation901 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat902 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation903 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat904 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation905 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat906 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation907 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.25f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat908 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation909 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.25f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat910 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation911 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat912 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2182f ,0.4909f ,0.7455f ,1f });
  }
}
private class MFRotation913 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.99f ,0.033f ,0.04f ,1.42f ,-0.99f ,0.1328f ,0.067f ,0.42f ,0.99f ,0.014f ,0.009f ,0.9f ,-0.99f ,0.0703f ,0.05f ,0.7f ,-0.99f ,0.033f ,0.04f ,1.42f });
  }
}
private class MFFloat914 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2182f ,0.4909f ,0.7455f ,1f });
  }
}
private class MFRotation915 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,1.01f ,1f ,0f ,0f ,0.426f ,1f ,0f ,0f ,0.705f ,1f ,0f ,0f ,2.179f ,1f ,0f ,0f ,1.01f });
  }
}
private class MFFloat916 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.22f ,0.3f ,0.4f ,1f });
  }
}
private class MFRotation917 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.0374f ,-1f ,0f ,0f ,0.1037f ,-1f ,0f ,0f ,0.4328f ,1f ,0f ,0f ,0.1929f ,1f ,0f ,0f ,0.03574f });
  }
}
private class MFFloat918 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2545f ,0.4909f ,0.7091f ,1f });
  }
}
private class MFRotation919 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.99f ,-0.014f ,0.009f ,0.9f ,-0.99f ,-0.0703f ,-0.05f ,0.7f ,-0.99f ,-0.033f ,0.04f ,1.42f ,-0.99f ,-0.1328f ,-0.067f ,0.42f ,0.99f ,-0.014f ,0.009f ,0.9f });
  }
}
private class MFFloat920 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2545f ,0.4909f ,0.7091f ,1f });
  }
}
private class MFRotation921 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.705f ,1f ,0f ,0f ,2.179f ,1f ,0f ,0f ,1.01f ,1f ,0f ,0f ,0.426f ,1f ,0f ,0f ,0.705f });
  }
}
private class MFFloat922 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.4f ,0.71f ,0.8f ,0.82f ,1f });
  }
}
private class MFRotation923 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.2323f ,-1f ,0f ,0f ,0.07843f ,-1f ,0f ,0f ,0.32f ,-1f ,0f ,0f ,0.374f ,-1f ,0f ,0f ,0.3478f ,1f ,0f ,0f ,0.2323f });
  }
}
private class MFFloat924 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2182f ,0.4909f ,0.7455f ,1f });
  }
}
private class MFRotation925 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.99f ,-0.074f ,0.25f ,1.5f ,0.99f ,-0.092f ,0.44f ,0.3f ,-0.99f ,0.136f ,0.25f ,0.85f ,0.99f ,-0.081f ,0.38f ,0.4f ,0.99f ,-0.074f ,0.25f ,1.5f });
  }
}
private class MFFloat926 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2182f ,0.4909f ,0.7455f ,1f });
  }
}
private class MFRotation927 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,1.85f ,-0.99f ,-0.19f ,0.18f ,1.35f ,-1f ,0f ,0f ,0.975f ,-0.99f ,-0.09f ,-0.02f ,1.55f ,-1f ,0f ,0f ,1.85f });
  }
}
private class MFFloat928 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation929 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.25f ,-1f ,0.08f ,0.14f ,0.25f ,1f ,0.08f ,0.14f ,0f ,0f ,1f ,0f ,-0.25f ,1f ,0.08f ,-0.14f ,-0.25f ,1f ,0.08f ,0.14f });
  }
}
private class MFFloat930 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2545f ,0.4909f ,0.7091f ,1f });
  }
}
private class MFRotation931 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.99f ,-0.136f ,-0.25f ,0.85f ,0.99f ,0.081f ,-0.38f ,0.4f ,0.99f ,0.074f ,-0.25f ,1.5f ,0.99f ,0.081f ,-0.38f ,0.4f ,-0.99f ,-0.136f ,-0.25f ,0.85f });
  }
}
private class MFFloat932 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2545f ,0.4909f ,0.7091f ,1f });
  }
}
private class MFRotation933 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.975f ,-0.99f ,0.09f ,0.02f ,1.55f ,-1f ,0f ,0f ,1.85f ,-0.99f ,0.19f ,-0.18f ,1.35f ,-1f ,0f ,0f ,0.975f });
  }
}
private class MFFloat934 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation935 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.917742f ,-0.237244f ,-0.318536f ,0.214273f ,-0.917742f ,-0.237244f ,-0.318536f ,0.214273f });
  }
}
private class MFFloat936 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2182f ,0.4909f ,0.7455f ,1f });
  }
}
private class MFRotation937 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,-1f ,0f ,0.125f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,0.125f ,0f ,0f ,1f ,0f ,0f ,-1f ,0f ,0.125f });
  }
}
private class MFFloat938 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2545f ,0.4909f ,0.7091f ,1f });
  }
}
private class MFRotation939 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.08f ,1f ,0f ,0f ,0.12f ,1f ,0f ,0f ,0.3f ,1f ,0f ,0f ,0.3f ,1f ,0f ,0f ,0.08f });
  }
}
private class MFFloat940 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2545f ,0.4909f ,0.7091f ,1f });
  }
}
private class MFRotation941 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.7f ,0f ,0f ,0.4f ,-0.7f ,-0.7f ,0f ,0.4f ,0f ,0f ,0f ,0.4f ,-0.7f ,0.7f ,0f ,0.4f ,0.7f ,0f ,0f ,0.4f });
  }
}
private class MFFloat942 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2545f ,0.4909f ,0.7636f ,1f });
  }
}
private class MFRotation943 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.97f ,0.65f ,0.086f ,0.5f ,0.9f ,0.003f ,-0.02f ,0.38f ,0.95f ,-0.68f ,-0.086f ,0.5f ,0.9f ,0.004f ,-0.025f ,0.4f ,0.97f ,0.65f ,0.086f ,0.5f });
  }
}
private class MFFloat944 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation945 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.06f ,1f ,0f ,0f ,0.167f ,1f ,0f ,0f ,0.06f ,1f ,0f ,0f ,0.168f ,1f ,0f ,0f ,0.06f });
  }
}
private class MFFloat946 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.22f ,0.3f ,0.31f ,0.5f ,0.69f ,0.7f ,0.78f ,1f });
  }
}
private class MFVec3f947 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-0.01f ,0f ,0f ,-0.037f ,0f ,0f ,-0.049f ,0f ,0f ,-0.037f ,0f ,0f ,-0.01f ,0f ,0f ,-0.037f ,0f ,0f ,-0.049f ,0f ,0f ,-0.037f ,0f ,0f ,-0.01f ,0f });
  }
}
private class MFFloat948 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation949 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat950 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation951 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat952 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation953 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat954 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation955 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat956 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation957 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat958 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation959 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat960 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation961 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat962 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation963 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.25f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.27f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat964 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation965 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.25f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.27f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat966 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation967 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat968 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.15f ,0.25f ,0.28f ,0.32f ,0.35f ,0.64f ,0.76f ,0.84f ,0.88f ,0.92f ,0.96f ,1f });
  }
}
private class MFRotation969 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.6735f ,-1f ,0f ,0f ,0.6735f ,-1f ,0f ,0f ,0.3527f ,-1f ,0f ,0f ,0.3038f ,-1f ,0f ,0f ,0.07964f ,1f ,0f ,0f ,1.3f ,1f ,0f ,0f ,0.6509f ,1f ,0f ,0f ,0.3001f ,-1f ,0f ,0f ,0.2087f ,-1f ,0f ,0f ,0.3756f ,-1f ,0f ,0f ,0.3279f ,-1f ,0f ,0f ,0.1193f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat970 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.25f ,0.3f ,0.64f ,0.76f ,0.88f ,1f });
  }
}
private class MFRotation971 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,2.5f ,1f ,0f ,0f ,1.7f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.9507f ,1f ,0f ,0f ,0.5845f ,1f ,0f ,0f ,0.9054f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat972 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.18f ,0.24f ,0.26f ,0.28f ,0.32f ,0.48f ,0.64f ,0.76f ,0.88f ,1f });
  }
}
private class MFRotation973 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.63f ,-1f ,0f ,0f ,1.7f ,-1f ,0f ,0f ,1.55f ,-1f ,0f ,0f ,0.8943f ,-1f ,0f ,0f ,0.3698f ,0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.4963f ,-1f ,0f ,0f ,0.3829f ,-1f ,0f ,0f ,0.5169f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat974 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.36f ,0.4f ,0.44f ,0.48f ,0.64f ,0.76f ,0.84f ,0.88f ,0.92f ,0.96f ,1f });
  }
}
private class MFRotation975 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.625f ,-1f ,0f ,0f ,0.625f ,-1f ,0f ,0f ,0.3364f ,-1f ,0f ,0f ,0.2742f ,-1f ,0f ,0f ,0.05078f ,1f ,0f ,0f ,0.2833f ,1f ,0f ,0f ,0.6667f ,1f ,0f ,0f ,0.2833f ,-1f ,0f ,0f ,0.2108f ,-1f ,0f ,0f ,0.375f ,-1f ,0f ,0f ,0.3146f ,-1f ,0f ,0f ,0.1174f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat976 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.48f ,0.64f ,0.76f ,0.88f ,1f });
  }
}
private class MFRotation977 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,2.047f ,1f ,0f ,0f ,2.047f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.566f ,1f ,0f ,0f ,0.5913f ,1f ,0f ,0f ,0.9235f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat978 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.36f ,0.4f ,0.44f ,0.48f ,0.64f ,0.76f ,0.88f ,1f });
  }
}
private class MFRotation979 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,4.349f ,1f ,0f ,0f ,4.349f ,1f ,0f ,0f ,4.615f ,-1f ,0f ,0f ,0.9136f ,-1f ,0f ,0f ,0.3614f ,0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.7869f ,-1f ,0f ,0f ,0.3918f ,-1f ,0f ,0f ,0.5433f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat980 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.48f ,0.76f ,1f });
  }
}
private class MFRotation981 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.1892f ,1f ,0f ,0f ,0.1892f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat982 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.64f ,0.76f ,1f });
  }
}
private class MFRotation983 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-0.0585279f ,0.983903f ,-0.168849f ,1.85956f ,-0.0585279f ,0.983903f ,-0.168849f ,1.85956f ,-0.00222418f ,0.99801f ,-0.0630095f ,1.46072f ,0f ,1f ,0f ,0.497349f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat984 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.64f ,0.76f ,1f });
  }
}
private class MFRotation985 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.04151f ,-1f ,0f ,0f ,0.04151f ,-1f ,0f ,0f ,0.5855f ,-1f ,0f ,0f ,0.5852f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat986 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.64f ,0.76f ,0.88f ,1f });
  }
}
private class MFRotation987 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0.9992f ,0.02042f ,0.03558f ,4.688f ,0.9992f ,0.02042f ,0.03558f ,4.688f ,0.9989f ,-0.04623f ,0.005159f ,4.079f ,-0.8687f ,-0.2525f ,-0.4261f ,1.501f ,-0.941f ,-0.2893f ,-0.1754f ,0.4788f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat988 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.48f ,0.52f ,0.64f ,0.76f ,0.88f ,1f });
  }
}
private class MFRotation989 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0.0672928f ,0.989475f ,-0.128107f ,4.15574f ,0.0672928f ,0.989475f ,-0.128107f ,4.15574f ,0.00364942f ,0.999901f ,0.0135896f ,4.5822f ,0f ,-1f ,0f ,0.655922f ,-0.00050618f ,-0.999999f ,0.0012782f ,1.28397f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat990 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.58f ,0.72f ,1f });
  }
}
private class MFRotation991 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1.13f ,-1f ,0f ,0f ,1.7f ,-1f ,0f ,0f ,1.7f ,-1f ,0f ,0f ,0.4f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat992 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.64f ,0.76f ,0.88f ,1f });
  }
}
private class MFRotation993 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-0.9987f ,0.02554f ,0.04498f ,1.57f ,-0.9987f ,0.02554f ,0.04498f ,1.57f ,1f ,0.0004113f ,0.003055f ,4.114f ,-0.8413f ,0.3238f ,0.4329f ,1.453f ,-0.877f ,0.4198f ,0.2337f ,0.6009f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat994 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.48f ,0.76f ,1f });
  }
}
private class MFRotation995 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.5989f ,-1f ,0f ,0f ,0.5989f ,-1f ,0f ,0f ,0.3216f ,1f ,0f ,0f ,0.06503f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat996 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.48f ,0.76f ,1f });
  }
}
private class MFRotation997 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.1942f ,-1f ,0f ,0f ,0.1942f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.2284f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat998 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.22f ,0.28f ,0.34f ,0.71f ,0.88f ,1f });
  }
}
private class MFRotation999 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.05f ,1f ,0f ,0f ,1.051f ,-1f ,0f ,0f ,0.257f ,1f ,0f ,0f ,0.2171f ,1f ,0f ,0f ,0.3465f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1000 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.28f ,0.32f ,0.48f ,0.64f ,0.76f ,1f });
  }
}
private class MFRotation1001 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.3273f ,1f ,0f ,0f ,0.3273f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1002 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.04f ,0.07f ,0.11f ,0.15f ,0.19f ,0.22f ,0.25f ,0.27f ,0.31f ,0.33f ,0.35f ,0.38f ,0.53f ,0.544f ,0.76f ,0.8f ,0.84f ,0.88f ,0.92f ,0.96f ,1f });
  }
}
private class MFVec3f1003 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-0.01264f ,-0.01289f ,0f ,-0.04712f ,-0.03738f ,-0.0003345f ,-0.1049f ,-0.05353f ,-0.0005712f ,-0.1892f ,-0.06561f ,-0.0008233f ,-0.286f ,-0.06276f ,-0.0009591f ,-0.3795f ,-0.05148f ,-0.00106f ,-0.4484f ,-0.03656f ,-0.00106f ,-0.4484f ,-0.03656f ,-0.001122f ,-0.25f ,-0.1499f ,-0.0008616f ,-0.05f ,-0.06358f ,-0.0005128f ,0.15f ,-0.05488f ,0.0004779f ,0.55f ,0.02732f ,0.0001728f ,1.385f ,0.006873f ,0.00017f ,1.395f ,0.0069f ,0f ,0.35f ,0.02148f ,0f ,-0.01299f ,-0.01057f ,0f ,-0.06932f ,-0.01064f ,0.0001365f ,-0.1037f ,-0.005059f ,0.0001279f ,-0.07198f ,-0.007596f ,0.000141f ,-0.01626f ,-0.004935f ,0f ,0f ,0f });
  }
}
private class MFFloat1004 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1005 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0.22f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1006 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1007 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.05f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1008 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1009 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,-0.2f ,0f ,0f ,1f ,-0.22f ,0f ,0f ,1f ,-0.2f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1010 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1011 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,-0.05f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1012 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1013 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,-1f ,0f ,0.1f ,0f ,1f ,0f ,0f ,0f ,1f ,-1f ,0.24f ,0f ,-1f ,0f ,0.4f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat1014 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1015 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,1f ,0f ,-0.1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,0f ,0.6f ,0f ,1f ,0f ,0.1f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat1016 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1017 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.8f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,-1f ,0f ,0f ,0.6f ,0f ,-1f ,0f ,0.8f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat1018 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1019 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,1.1f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat1020 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1021 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,1.1f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat1022 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1023 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0.22f ,0f ,0f ,1f ,0.2f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1024 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1025 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.05f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1026 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1027 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.76f ,-0.25f ,0f ,1f ,1.76f ,0f ,0f ,1f ,1.256f ,0f ,0f ,1f ,0.05f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1028 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1029 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,-0.55f ,-1f ,0.25f ,0f ,2.55f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat1030 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1031 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,0.55f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1032 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1033 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,1.1f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat1034 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1035 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,-0.2f ,0f ,0f ,1f ,-0.22f ,0f ,0f ,1f ,-0.2f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1036 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1037 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,-0.05f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1038 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1039 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,-1.76f ,0.25f ,0f ,1f ,-1.76f ,0f ,0f ,1f ,-1.256f ,0f ,0f ,1f ,-0.05f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1040 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1041 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,-0.55f ,1f ,0.25f ,0f ,-2.55f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat1042 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1043 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,-0.55f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1044 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1045 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,1.1f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat1046 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.3f ,0.5f ,0.6f ,0.9f ,1f });
  }
}
private class MFRotation1047 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.9f ,-1f ,0f ,0f ,1.75f ,-1f ,0f ,0f ,2.25f ,-1f ,0f ,0f ,2f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat1048 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1049 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,1.95f ,1f ,0f ,0f ,1.75f ,-1f ,0f ,0f ,0.28f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat1050 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.3f ,0.5f ,0.6f ,0.9f ,1f });
  }
}
private class MFRotation1051 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1052 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1053 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1054 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation1055 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.9f ,-1f ,0f ,0f ,0.95f ,1f ,0f ,0f ,0.75f ,-1f ,0f ,0f ,0.05f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat1056 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.7f ,1f });
  }
}
private class MFRotation1057 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,-1f ,0f ,0f ,0.5f ,-1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.75f ,-1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat1058 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1059 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,-1f ,0f ,0.1f ,0f ,1f ,0f ,0f ,0f ,1f ,-1f ,0.24f ,0f ,-1f ,0f ,0.4f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat1060 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1061 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1062 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation1063 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1064 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation1065 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1066 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation1067 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1068 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation1069 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat1070 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFVec3f1071 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat1072 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.55f ,1f });
  }
}
private class MFRotation1073 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.7f ,1f ,0f ,0f ,0.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFString1074 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"});
  }
}
private class MFInt321075 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
  }
}
private class MFVec3f1076 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1f ,0f ,0f ,0.995f ,0f ,-0.105f ,0.979f ,0f ,-0.208f ,0.951f ,0f ,-0.309f ,0.914f ,0f ,-0.407f ,0.866f ,0f ,-0.5f ,0.809f ,0f ,-0.588f ,0.743f ,0f ,-0.669f ,0.669f ,0f ,-0.743f ,0.588f ,0f ,-0.809f ,0.5f ,0f ,-0.866f ,0.407f ,0f ,-0.914f ,0.309f ,0f ,-0.951f ,0.208f ,0f ,-0.978f ,0.105f ,0f ,-0.995f ,0f ,0f ,-1f ,-0.105f ,0f ,-0.994522f ,-0.208f ,0f ,-0.978f ,-0.309f ,0f ,-0.951f ,-0.407f ,0f ,-0.914f ,-0.5f ,0f ,-0.866f ,-0.588f ,0f ,-0.809f ,-0.669f ,0f ,-0.743f ,-0.743f ,0f ,-0.669f ,-0.809f ,0f ,-0.588f ,-0.866f ,0f ,-0.5f ,-0.914f ,0f ,-0.407f ,-0.951f ,0f ,-0.309f ,-0.978f ,0f ,-0.208f ,-0.995f ,0f ,-0.105f ,-1f ,0f ,0f ,-0.995f ,0f ,0.105f ,-0.978f ,0f ,0.208f ,-0.951f ,0f ,0.309f ,-0.914f ,0f ,0.407f ,-0.866f ,0f ,0.5f ,-0.809f ,0f ,0.588f ,-0.743f ,0f ,0.669f ,-0.669f ,0f ,0.743f ,-0.588f ,0f ,0.809f ,-0.5f ,0f ,0.866f ,-0.407f ,0f ,0.914f ,-0.309f ,0f ,0.951f ,-0.208f ,0f ,0.978f ,-0.105f ,0f ,0.995f ,0f ,0f ,1f ,0.105f ,0f ,0.995f ,0.208f ,0f ,0.978f ,0.309f ,0f ,0.951f ,0.407f ,0f ,0.914f ,0.5f ,0f ,0.866f ,0.588f ,0f ,0.809f ,0.669f ,0f ,0.743f ,0.743f ,0f ,0.669f ,0.809f ,0f ,0.588f ,0.866f ,0f ,0.5f ,0.914f ,0f ,0.407f ,0.951f ,0f ,0.309f ,0.978f ,0f ,0.208f ,0.995f ,0f ,0.104f ,1f ,0f ,0f });
  }
}
private class MFString1077 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Stand"});
  }
}
private class MFInt321078 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f1079 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,-1.2f ,-0.01f ,2.5f ,-1.2f ,-0.01f ,2.5f ,0.75f ,-0.01f ,-0.2f ,0.75f ,-0.01f });
  }
}
private class MFString1080 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Pitch"});
  }
}
private class MFString1081 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Yaw"});
  }
}
private class MFString1082 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Roll"});
  }
}
private class MFString1083 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Walk"});
  }
}
private class MFString1084 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Run"});
  }
}
private class MFString1085 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Jump"});
  }
}
private class MFString1086 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Kick"});
  }
}
private class MFString1087 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Stop","Default Pose"});
  }
}
}
