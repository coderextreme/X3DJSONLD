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
public class HAnim1SpecificationLOA3Animation {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new HAnim1SpecificationLOA3Animation().initialize().toFileJSON("../data/HAnim1SpecificationLOA3Animation.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("H-Anim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("HAnim1SpecificationLOA3Animation.x3d"))
        .addMeta(new meta().setName("description").setContent("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnim1SpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships."))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"))
        .addMeta(new meta().setName("created").setContent("24 April 2013"))
        .addMeta(new meta().setName("modified").setContent("19 February 2021"))
        .addMeta(new meta().setName("Image").setContent("HAnim1SpecificationLOA3MotionH3DViewer.png"))
        .addMeta(new meta().setName("Image").setContent("HAnim1SpecificationLOA3MotionInstantReality.png"))
        .addMeta(new meta().setName("Image").setContent("HAnim1SpecificationLOA3MotionOctagaVS.png"))
        .addMeta(new meta().setName("Image").setContent("HAnim1SpecificationLOA3MotionView3dscene.png"))
        .addMeta(new meta().setName("reference").setContent("HAnim1SpecificationLOA3Illustrated.x3d"))
        .addMeta(new meta().setName("reference").setContent("HAnim1SpecificationLOA3Invisible.x3d"))
        .addMeta(new meta().setName("reference").setContent("HAnimSpecificationExampleChangeLog.txt"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA1.png"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA2.png"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA3.png"))
        .addMeta(new meta().setName("reference").setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989."))
        .addMeta(new meta().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
        .addMeta(new meta().setName("reference").setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf"))
        .addMeta(new meta().setName("creator").setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman"))
        .addMeta(new meta().setName("translator").setContent("Don Brutzman and Joe Williams"))
        .addMeta(new meta().setName("generator").setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"))
        .addMeta(new meta().setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl"))
        .addMeta(new meta().setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d"))
        .addMeta(new meta().setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/HAnim1SpecificationLOA3Animation.x3d"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new NavigationInfo())
        .addChild(new Group().setDEF("Original_WorldInfo")
          .addChild(new WorldInfo().setInfo(new MFString1().getArray()).setTitle("HANIM 200x Default Joint Centers, LOA3")))
        .addComments("TODO move viewpoints to be internal to HAnimHumanoid")
        .addComments("Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.")
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Front").setPosition(new float[] {0f,0.4f,4f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Front Close").setPosition(new float[] {0f,0.8f,2f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Front Closer").setPosition(new float[] {0f,1.2f,1f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,1.5f,0.0016f}).setDescription("Humanoid LOA 3 Front Face").setPosition(new float[] {0f,1.63f,1f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Right Side").setOrientation(new float[] {0f,1f,0f,1.5708f}).setPosition(new float[] {2.6f,0.8f,0f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Right Side Close").setOrientation(new float[] {0f,1f,0f,1.2f}).setPosition(new float[] {1f,0.8f,0.5f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Left Side Close").setOrientation(new float[] {0f,1f,0f,-1.2f}).setPosition(new float[] {-1f,0.8f,0.5f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Left Side").setOrientation(new float[] {0f,1f,0f,-1.5708f}).setPosition(new float[] {-2.6f,0.8f,0f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Top").setOrientation(new float[] {1f,0f,0f,-1.5708f}).setPosition(new float[] {0f,3.5f,0f}))
        .addChild(new HAnimHumanoid().setName("humanoid").setDEF("hanim_humanoid").setInfo(new MFString2().getArray()).setVersion("1.0")
          .addSkeleton(new HAnimJoint().setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new float[] {0f,0.824f,0.0277f}).setUlimit(new MFFloat3().getArray()).setLlimit(new MFFloat4().getArray())
            .addChild(new HAnimSegment().setName("sacrum").setDEF("hanim_sacrum")
              .addComments("<HAnimJoint name='humanoid_root'/> visualization sphere within <HAnimSegment name='sacrum'/>")
              .addChild(new TouchSensor().setDescription("HAnimJoint HumanoidRoot, HAnimSegment sacrum"))
              .addChild(new Transform().setTranslation(new float[] {0f,0.824f,0.0277f})
                .addChild(new Shape().setDEF("HAnimJointShape")
                  .setGeometry(new Sphere().setRadius(0.006f))
                  .setAppearance(new Appearance().setDEF("HAnimJointAppearance")
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,0.5f,0f}).setTransparency(0.5f)))))
              .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>")
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt325().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray()))
                  .setColor(new ColorRGBA().setDEF("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA7().getArray()))))
              .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>")
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt328().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f9().getArray()))
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
            .addChild(new HAnimJoint().setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0f,0.9149f,0.0016f}).setUlimit(new MFFloat10().getArray()).setLlimit(new MFFloat11().getArray())
              .addChild(new HAnimSegment().setName("pelvis").setDEF("hanim_pelvis")
                .addComments("<HAnimJoint name='sacroiliac'/> visualization sphere within <HAnimSegment name='pelvis'/>")
                .addChild(new TouchSensor().setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis"))
                .addChild(new Transform().setTranslation(new float[] {0f,0.9149f,0.0016f})
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3212().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f13().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3214().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f15().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3216().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray()))
                    .setColor(new ColorRGBA().setDEF("HAnimSiteLineColorRGBA").setColor(new MFColorRGBA18().getArray()))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3219().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f20().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3221().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f22().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3223().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f24().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3225().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3227().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f28().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3229().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3231().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f32().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3233().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addChild(new HAnimSite().setName("r_iliocristale_pt").setDEF("hanim_r_iliocristale_pt").setTranslation(new float[] {-0.1525f,1.0628f,0.0035f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite r_iliocristale"))
                  .addChild(new Shape().setDEF("HAnimSiteShape")
                    .setGeometry(new IndexedFaceSet().setDEF("DiamondIFS").setCoordIndex(new MFInt3235().getArray()).setCreaseAngle(0.5f).setSolid(false)
                      .setCoord(new Coordinate().setPoint(new MFVec3f36().getArray())))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f})))))
                .addChild(new HAnimSite().setName("r_trochanterion_pt").setDEF("hanim_r_trochanterion_pt").setTranslation(new float[] {-0.1689f,0.8419f,0.0352f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite r_trochanterion"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("l_iliocristale_pt").setDEF("hanim_l_iliocristale_pt").setTranslation(new float[] {0.1612f,1.0537f,0.0008f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite l_iliocristale"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("l_trochanterion_pt").setDEF("hanim_l_trochanterion_pt").setTranslation(new float[] {0.1677f,0.8336f,0.0303f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite l_trochanterion"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("r_asis_pt").setDEF("hanim_r_asis_pt").setTranslation(new float[] {-0.0887f,1.0021f,0.1112f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite r_asis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("l_asis_pt").setDEF("hanim_l_asis_pt").setTranslation(new float[] {0.0925f,0.9983f,0.1052f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite l_asis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("r_psis_pt").setDEF("hanim_r_psis_pt").setTranslation(new float[] {-0.0716f,1.019f,-0.1138f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite r_psis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("l_psis_pt").setDEF("hanim_l_psis_pt").setTranslation(new float[] {0.0774f,1.019f,-0.1151f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite l_psis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("crotch_pt").setDEF("hanim_crotch_pt").setTranslation(new float[] {0.0034f,0.8266f,0.0257f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite crotch"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
              .addChild(new HAnimJoint().setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {0.0961f,0.9124f,-0.0001f}).setUlimit(new MFFloat37().getArray()).setLlimit(new MFFloat38().getArray())
                .addChild(new HAnimSegment().setName("l_thigh").setDEF("hanim_l_thigh")
                  .addComments("<HAnimJoint name='l_hip'/> visualization sphere within <HAnimSegment name='l_thigh'/>")
                  .addChild(new TouchSensor().setDescription("HAnimJoint l_hip, HAnimSegment l_thigh"))
                  .addChild(new Transform().setTranslation(new float[] {0.0961f,0.9124f,-0.0001f})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3239().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f40().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3241().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3243().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f44().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3245().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addChild(new HAnimSite().setName("l_knee_crease_pt").setDEF("hanim_l_knee_crease_pt").setTranslation(new float[] {0.0993f,0.4881f,-0.0309f})
                    .addComments("HAnimSite visualization shape")
                    .addChild(new TouchSensor().setDescription("HAnimSite l_knee_crease"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("l_femoral_lateral_epicn_pt").setDEF("hanim_l_femoral_lateral_epicn_pt").setTranslation(new float[] {0.1598f,0.4967f,0.0297f})
                    .addComments("HAnimSite visualization shape")
                    .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_lateral_epicn"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("l_femoral_medial_epicn_pt").setDEF("hanim_l_femoral_medial_epicn_pt").setTranslation(new float[] {0.0398f,0.4946f,0.0303f})
                    .addComments("HAnimSite visualization shape")
                    .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_medial_epicn"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint().setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {0.104f,0.4867f,0.0308f}).setUlimit(new MFFloat47().getArray()).setLlimit(new MFFloat48().getArray())
                  .addChild(new HAnimSegment().setName("l_calf").setDEF("hanim_l_calf")
                    .addComments("<HAnimJoint name='l_knee'/> visualization sphere within <HAnimSegment name='l_calf'/>")
                    .addChild(new TouchSensor().setDescription("HAnimJoint l_knee, HAnimSegment l_calf"))
                    .addChild(new Transform().setTranslation(new float[] {0.104f,0.4867f,0.0308f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>")
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3249().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray()))
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                  .addChild(new HAnimJoint().setName("l_ankle").setDEF("hanim_l_ankle").setCenter(new float[] {0.1101f,0.0656f,-0.0736f}).setUlimit(new MFFloat51().getArray()).setLlimit(new MFFloat52().getArray())
                    .addChild(new HAnimSegment().setName("l_hindfoot").setDEF("hanim_l_hindfoot")
                      .addComments("<HAnimJoint name='l_ankle'/> visualization sphere within <HAnimSegment name='l_hindfoot'/>")
                      .addChild(new TouchSensor().setDescription("HAnimJoint l_ankle, HAnimSegment l_hindfoot"))
                      .addChild(new Transform().setTranslation(new float[] {0.1101f,0.0656f,-0.0736f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3253().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3255().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f56().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3257().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f58().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3259().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f60().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3261().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f62().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addChild(new HAnimSite().setName("l_lateral_malleolus_pt").setDEF("hanim_l_lateral_malleolus_pt").setTranslation(new float[] {0.1308f,0.0597f,-0.1032f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite l_lateral_malleolus"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("l_medial_malleolus_pt").setDEF("hanim_l_medial_malleolus_pt").setTranslation(new float[] {0.089f,0.0716f,-0.0881f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite l_medial_malleolus"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("l_sphyrion_pt").setDEF("hanim_l_sphyrion_pt").setTranslation(new float[] {0.089f,0.0575f,-0.0943f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite l_sphyrion"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("l_calcaneous_post_pt").setDEF("hanim_l_calcaneous_post_pt").setTranslation(new float[] {0.0974f,0.0259f,-0.1171f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite l_calcaneous_post"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                    .addChild(new HAnimJoint().setName("l_subtalar").setDEF("hanim_l_subtalar").setCenter(new float[] {0.1086f,0.0001f,-0.0368f}).setUlimit(new MFFloat63().getArray()).setLlimit(new MFFloat64().getArray())
                      .addChild(new HAnimSegment().setName("l_midproximal").setDEF("hanim_l_midproximal")
                        .addComments("<HAnimJoint name='l_subtalar'/> visualization sphere within <HAnimSegment name='l_midproximal'/>")
                        .addChild(new TouchSensor().setDescription("HAnimJoint l_subtalar, HAnimSegment l_midproximal"))
                        .addChild(new Transform().setTranslation(new float[] {0.1086f,0.0001f,-0.0368f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>")
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3265().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f66().getArray()))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint().setName("l_midtarsal").setDEF("hanim_l_midtarsal").setCenter(new float[] {0.1086f,0.0001f,0.0368f}).setUlimit(new MFFloat67().getArray()).setLlimit(new MFFloat68().getArray())
                        .addChild(new HAnimSegment().setName("l_middistal").setDEF("hanim_l_middistal")
                          .addComments("<HAnimJoint name='l_midtarsal'/> visualization sphere within <HAnimSegment name='l_middistal'/>")
                          .addChild(new TouchSensor().setDescription("HAnimJoint l_midtarsal, HAnimSegment l_middistal"))
                          .addChild(new Transform().setTranslation(new float[] {0.1086f,0.0001f,0.0368f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3269().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f70().getArray()))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3271().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f72().getArray()))
                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                          .addChild(new HAnimSite().setName("l_metatarsal_pha1_pt").setDEF("hanim_l_metatarsal_pha1_pt").setTranslation(new float[] {0.0816f,0.0232f,0.0106f})
                            .addComments("HAnimSite visualization shape")
                            .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_pha1"))
                            .addChild(new Shape().setUSE("HAnimSiteShape"))))
                        .addChild(new HAnimJoint().setName("l_metatarsal").setDEF("hanim_l_metatarsal").setCenter(new float[] {0.1086f,0f,0.0762f}).setUlimit(new MFFloat73().getArray()).setLlimit(new MFFloat74().getArray())
                          .addChild(new HAnimSegment().setName("l_forefoot").setDEF("hanim_l_forefoot")
                            .addComments("<HAnimJoint name='l_metatarsal'/> visualization sphere within <HAnimSegment name='l_forefoot'/>")
                            .addChild(new TouchSensor().setDescription("HAnimJoint l_metatarsal, HAnimSegment l_forefoot"))
                            .addChild(new Transform().setTranslation(new float[] {0.1086f,0f,0.0762f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3275().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f76().getArray()))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3277().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f78().getArray()))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3279().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray()))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addChild(new HAnimSite().setName("l_forefoot_tip").setDEF("hanim_l_forefoot_tip").setTranslation(new float[] {0.1354f,0.0016f,0.1476f})
                              .addComments("HAnimSite visualization shape")
                              .addChild(new TouchSensor().setDescription("HAnimSite l_forefoot_tip"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite().setName("l_metatarsal_pha5_pt").setDEF("hanim_l_metatarsal_pha5_pt").setTranslation(new float[] {0.1825f,0.007f,0.0928f})
                              .addComments("HAnimSite visualization shape")
                              .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_pha5"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite().setName("l_digit2_pt").setDEF("hanim_l_digit2_pt").setTranslation(new float[] {0.1195f,0.0079f,0.1433f})
                              .addComments("HAnimSite visualization shape")
                              .addChild(new TouchSensor().setDescription("HAnimSite l_digit2"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))))))))
              .addChild(new HAnimJoint().setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-0.0961f,0.9124f,-0.0001f}).setUlimit(new MFFloat81().getArray()).setLlimit(new MFFloat82().getArray())
                .addChild(new HAnimSegment().setName("r_thigh").setDEF("hanim_r_thigh")
                  .addComments("<HAnimJoint name='r_hip'/> visualization sphere within <HAnimSegment name='r_thigh'/>")
                  .addChild(new TouchSensor().setDescription("HAnimJoint r_hip, HAnimSegment r_thigh"))
                  .addChild(new Transform().setTranslation(new float[] {-0.0961f,0.9124f,-0.0001f})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3283().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f84().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3285().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3287().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f88().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3289().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f90().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addChild(new HAnimSite().setName("r_knee_crease_pt").setDEF("hanim_r_knee_crease_pt").setTranslation(new float[] {-0.0825f,0.4932f,-0.0326f})
                    .addComments("HAnimSite visualization shape")
                    .addChild(new TouchSensor().setDescription("HAnimSite r_knee_crease"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("r_femoral_lateral_epicn_pt").setDEF("hanim_r_femoral_lateral_epicn_pt").setTranslation(new float[] {-0.1421f,0.4992f,0.031f})
                    .addComments("HAnimSite visualization shape")
                    .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_lateral_epicn"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("r_femoral_medial_epicn_pt").setDEF("hanim_r_femoral_medial_epicn_pt").setTranslation(new float[] {-0.0221f,0.5014f,0.0289f})
                    .addComments("HAnimSite visualization shape")
                    .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_medial_epicn"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint().setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-0.104f,0.4867f,0.0308f}).setUlimit(new MFFloat91().getArray()).setLlimit(new MFFloat92().getArray())
                  .addChild(new HAnimSegment().setName("r_calf").setDEF("hanim_r_calf")
                    .addComments("<HAnimJoint name='r_knee'/> visualization sphere within <HAnimSegment name='r_calf'/>")
                    .addChild(new TouchSensor().setDescription("HAnimJoint r_knee, HAnimSegment r_calf"))
                    .addChild(new Transform().setTranslation(new float[] {-0.104f,0.4867f,0.0308f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>")
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3293().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f94().getArray()))
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                  .addChild(new HAnimJoint().setName("r_ankle").setDEF("hanim_r_ankle").setCenter(new float[] {-0.1101f,0.0656f,-0.0736f}).setUlimit(new MFFloat95().getArray()).setLlimit(new MFFloat96().getArray())
                    .addChild(new HAnimSegment().setName("r_hindfoot").setDEF("hanim_r_hindfoot")
                      .addComments("<HAnimJoint name='r_ankle'/> visualization sphere within <HAnimSegment name='r_hindfoot'/>")
                      .addChild(new TouchSensor().setDescription("HAnimJoint r_ankle, HAnimSegment r_hindfoot"))
                      .addChild(new Transform().setTranslation(new float[] {-0.1101f,0.0656f,-0.0736f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3297().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3299().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f100().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32101().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f102().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32103().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f104().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32105().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f106().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addChild(new HAnimSite().setName("r_lateral_malleolus_pt").setDEF("hanim_r_lateral_malleolus_pt").setTranslation(new float[] {-0.1006f,0.0658f,-0.1075f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite r_lateral_malleolus"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("r_medial_malleolus_pt").setDEF("hanim_r_medial_malleolus_pt").setTranslation(new float[] {-0.0591f,0.076f,-0.0928f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite r_medial_malleolus"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("r_sphyrion_pt").setDEF("hanim_r_sphyrion_pt").setTranslation(new float[] {-0.0603f,0.061f,-0.1002f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite r_sphyrion"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("r_calcaneous_post_pt").setDEF("hanim_r_calcaneous_post_pt").setTranslation(new float[] {-0.0692f,0.0297f,-0.1221f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite r_calcaneous_post"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                    .addChild(new HAnimJoint().setName("r_subtalar").setDEF("hanim_r_subtalar").setCenter(new float[] {-0.1086f,0.0001f,-0.0368f}).setUlimit(new MFFloat107().getArray()).setLlimit(new MFFloat108().getArray())
                      .addChild(new HAnimSegment().setName("r_midproximal").setDEF("hanim_r_midproximal")
                        .addComments("<HAnimJoint name='r_subtalar'/> visualization sphere within <HAnimSegment name='r_midproximal'/>")
                        .addChild(new TouchSensor().setDescription("HAnimJoint r_subtalar, HAnimSegment r_midproximal"))
                        .addChild(new Transform().setTranslation(new float[] {-0.1086f,0.0001f,-0.0368f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>")
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32109().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray()))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint().setName("r_midtarsal").setDEF("hanim_r_midtarsal").setCenter(new float[] {-0.1086f,0.0001f,0.0368f}).setUlimit(new MFFloat111().getArray()).setLlimit(new MFFloat112().getArray())
                        .addChild(new HAnimSegment().setName("r_middistal").setDEF("hanim_r_middistal")
                          .addComments("<HAnimJoint name='r_midtarsal'/> visualization sphere within <HAnimSegment name='r_middistal'/>")
                          .addChild(new TouchSensor().setDescription("HAnimJoint r_midtarsal, HAnimSegment r_middistal"))
                          .addChild(new Transform().setTranslation(new float[] {-0.1086f,0.0001f,0.0368f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32113().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f114().getArray()))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32115().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f116().getArray()))
                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                          .addChild(new HAnimSite().setName("r_metatarsal_pha1_pt").setDEF("hanim_r_metatarsal_pha1_pt").setTranslation(new float[] {-0.0521f,0.026f,0.0127f})
                            .addComments("HAnimSite visualization shape")
                            .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_pha1"))
                            .addChild(new Shape().setUSE("HAnimSiteShape"))))
                        .addChild(new HAnimJoint().setName("r_metatarsal").setDEF("hanim_r_metatarsal").setCenter(new float[] {-0.1086f,0f,0.0762f}).setUlimit(new MFFloat117().getArray()).setLlimit(new MFFloat118().getArray())
                          .addChild(new HAnimSegment().setName("r_forefoot").setDEF("hanim_r_forefoot")
                            .addComments("<HAnimJoint name='r_metatarsal'/> visualization sphere within <HAnimSegment name='r_forefoot'/>")
                            .addChild(new TouchSensor().setDescription("HAnimJoint r_metatarsal, HAnimSegment r_forefoot"))
                            .addChild(new Transform().setTranslation(new float[] {-0.1086f,0f,0.0762f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32119().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f120().getArray()))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32121().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f122().getArray()))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32123().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f124().getArray()))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addChild(new HAnimSite().setName("r_forefoot_tip").setDEF("hanim_r_forefoot_tip").setTranslation(new float[] {-0.1043f,0.0227f,0.145f})
                              .addComments("HAnimSite visualization shape")
                              .addChild(new TouchSensor().setDescription("HAnimSite r_forefoot_tip"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite().setName("r_metatarsal_pha5_pt").setDEF("hanim_r_metatarsal_pha5_pt").setTranslation(new float[] {-0.1523f,0.0166f,0.0895f})
                              .addComments("HAnimSite visualization shape")
                              .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_pha5"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite().setName("r_digit2_pt").setDEF("hanim_r_digit2_pt").setTranslation(new float[] {-0.0883f,0.0134f,0.1383f})
                              .addComments("HAnimSite visualization shape")
                              .addChild(new TouchSensor().setDescription("HAnimSite r_digit2"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))
            .addChild(new HAnimJoint().setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0.0028f,1.0568f,-0.0776f}).setUlimit(new MFFloat125().getArray()).setLlimit(new MFFloat126().getArray())
              .addChild(new HAnimSegment().setName("l5").setDEF("hanim_l5")
                .addComments("<HAnimJoint name='vl5'/> visualization sphere within <HAnimSegment name='l5'/>")
                .addChild(new TouchSensor().setDescription("HAnimJoint vl5, HAnimSegment l5"))
                .addChild(new Transform().setTranslation(new float[] {0.0028f,1.0568f,-0.0776f})
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32127().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f128().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32129().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f130().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32131().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f132().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addChild(new HAnimSite().setName("waist_preferred_post_pt").setDEF("hanim_waist_preferred_post_pt").setTranslation(new float[] {0f,1.0915f,-0.1091f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_post"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("navel_pt").setDEF("hanim_navel_pt").setTranslation(new float[] {0.0069f,1.0966f,0.1017f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite navel"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
              .addChild(new HAnimJoint().setName("vl4").setDEF("hanim_vl4").setCenter(new float[] {0.0035f,1.0925f,-0.0787f}).setUlimit(new MFFloat133().getArray()).setLlimit(new MFFloat134().getArray())
                .addChild(new HAnimSegment().setName("l4").setDEF("hanim_l4")
                  .addComments("<HAnimJoint name='vl4'/> visualization sphere within <HAnimSegment name='l4'/>")
                  .addChild(new TouchSensor().setDescription("HAnimJoint vl4, HAnimSegment l4"))
                  .addChild(new Transform().setTranslation(new float[] {0.0035f,1.0925f,-0.0787f})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32135().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f136().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                .addChild(new HAnimJoint().setName("vl3").setDEF("hanim_vl3").setCenter(new float[] {0.0041f,1.1276f,-0.0796f}).setUlimit(new MFFloat137().getArray()).setLlimit(new MFFloat138().getArray())
                  .addChild(new HAnimSegment().setName("l3").setDEF("hanim_l3")
                    .addComments("<HAnimJoint name='vl3'/> visualization sphere within <HAnimSegment name='l3'/>")
                    .addChild(new TouchSensor().setDescription("HAnimJoint vl3, HAnimSegment l3"))
                    .addChild(new Transform().setTranslation(new float[] {0.0041f,1.1276f,-0.0796f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>")
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32139().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f140().getArray()))
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                  .addChild(new HAnimJoint().setName("vl2").setDEF("hanim_vl2").setCenter(new float[] {0.0045f,1.1546f,-0.08f}).setUlimit(new MFFloat141().getArray()).setLlimit(new MFFloat142().getArray())
                    .addChild(new HAnimSegment().setName("l2").setDEF("hanim_l2")
                      .addComments("<HAnimJoint name='vl2'/> visualization sphere within <HAnimSegment name='l2'/>")
                      .addChild(new TouchSensor().setDescription("HAnimJoint vl2, HAnimSegment l2"))
                      .addChild(new Transform().setTranslation(new float[] {0.0045f,1.1546f,-0.08f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32143().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f144().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32145().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f146().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32147().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f148().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32149().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f150().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addChild(new HAnimSite().setName("r_rib10_pt").setDEF("hanim_r_rib10_pt").setTranslation(new float[] {-0.0711f,1.1941f,0.1016f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite r_rib10"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("l_rib10_pt").setDEF("hanim_l_rib10_pt").setTranslation(new float[] {0.0871f,1.1925f,0.0992f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite l_rib10"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("rib10_midspine_pt").setDEF("hanim_rib10_midspine_pt").setTranslation(new float[] {0.0049f,1.1908f,-0.1113f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite rib10_midspine"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                    .addChild(new HAnimJoint().setName("vl1").setDEF("hanim_vl1").setCenter(new float[] {0.0048f,1.1912f,-0.0805f}).setUlimit(new MFFloat151().getArray()).setLlimit(new MFFloat152().getArray())
                      .addChild(new HAnimSegment().setName("l1").setDEF("hanim_l1")
                        .addComments("<HAnimJoint name='vl1'/> visualization sphere within <HAnimSegment name='l1'/>")
                        .addChild(new TouchSensor().setDescription("HAnimJoint vl1, HAnimSegment l1"))
                        .addChild(new Transform().setTranslation(new float[] {0.0048f,1.1912f,-0.0805f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>")
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32153().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f154().getArray()))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint().setName("vt12").setDEF("hanim_vt12").setCenter(new float[] {0.0051f,1.2278f,-0.0808f}).setUlimit(new MFFloat155().getArray()).setLlimit(new MFFloat156().getArray())
                        .addChild(new HAnimSegment().setName("t12").setDEF("hanim_t12")
                          .addComments("<HAnimJoint name='vt12'/> visualization sphere within <HAnimSegment name='t12'/>")
                          .addChild(new TouchSensor().setDescription("HAnimJoint vt12, HAnimSegment t12"))
                          .addChild(new Transform().setTranslation(new float[] {0.0051f,1.2278f,-0.0808f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32157().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f158().getArray()))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint().setName("vt11").setDEF("hanim_vt11").setCenter(new float[] {0.0053f,1.2679f,-0.081f}).setUlimit(new MFFloat159().getArray()).setLlimit(new MFFloat160().getArray())
                          .addChild(new HAnimSegment().setName("t11").setDEF("hanim_t11")
                            .addComments("<HAnimJoint name='vt11'/> visualization sphere within <HAnimSegment name='t11'/>")
                            .addChild(new TouchSensor().setDescription("HAnimJoint vt11, HAnimSegment t11"))
                            .addChild(new Transform().setTranslation(new float[] {0.0053f,1.2679f,-0.081f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32161().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f162().getArray()))
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint().setName("vt10").setDEF("hanim_vt10").setCenter(new float[] {0.0056f,1.2848f,-0.0822f}).setUlimit(new MFFloat163().getArray()).setLlimit(new MFFloat164().getArray())
                            .addChild(new HAnimSegment().setName("t10").setDEF("hanim_t10")
                              .addComments("<HAnimJoint name='vt10'/> visualization sphere within <HAnimSegment name='t10'/>")
                              .addChild(new TouchSensor().setDescription("HAnimJoint vt10, HAnimSegment t10"))
                              .addChild(new Transform().setTranslation(new float[] {0.0056f,1.2848f,-0.0822f})
                                .addChild(new Shape().setUSE("HAnimJointShape")))
                              .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>")
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32165().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f166().getArray()))
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>")
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32167().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f168().getArray()))
                                  .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                              .addChild(new HAnimSite().setName("substernale_pt").setDEF("hanim_substernale_pt").setTranslation(new float[] {0.0085f,1.2995f,0.1147f})
                                .addComments("HAnimSite visualization shape")
                                .addChild(new TouchSensor().setDescription("HAnimSite substernale"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                            .addChild(new HAnimJoint().setName("vt9").setDEF("hanim_vt9").setCenter(new float[] {0.0057f,1.3126f,-0.0838f}).setUlimit(new MFFloat169().getArray()).setLlimit(new MFFloat170().getArray())
                              .addChild(new HAnimSegment().setName("t9").setDEF("hanim_t9")
                                .addComments("<HAnimJoint name='vt9'/> visualization sphere within <HAnimSegment name='t9'/>")
                                .addChild(new TouchSensor().setDescription("HAnimJoint vt9, HAnimSegment t9"))
                                .addChild(new Transform().setTranslation(new float[] {0.0057f,1.3126f,-0.0838f})
                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>")
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32171().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f172().getArray()))
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>")
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32173().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f174().getArray()))
                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>")
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32175().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f176().getArray()))
                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                .addChild(new HAnimSite().setName("r_thelion_pt").setDEF("hanim_r_thelion_pt").setTranslation(new float[] {-0.0736f,1.3385f,0.1217f})
                                  .addComments("HAnimSite visualization shape")
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_thelion"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                .addChild(new HAnimSite().setName("l_thelion_pt").setDEF("hanim_l_thelion_pt").setTranslation(new float[] {0.0918f,1.3382f,0.1192f})
                                  .addComments("HAnimSite visualization shape")
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_thelion"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint().setName("vt8").setDEF("hanim_vt8").setCenter(new float[] {0.0057f,1.3382f,-0.0845f}).setUlimit(new MFFloat177().getArray()).setLlimit(new MFFloat178().getArray())
                                .addChild(new HAnimSegment().setName("t8").setDEF("hanim_t8")
                                  .addComments("<HAnimJoint name='vt8'/> visualization sphere within <HAnimSegment name='t8'/>")
                                  .addChild(new TouchSensor().setDescription("HAnimJoint vt8, HAnimSegment t8"))
                                  .addChild(new Transform().setTranslation(new float[] {0.0057f,1.3382f,-0.0845f})
                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                  .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>")
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32179().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f180().getArray()))
                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                .addChild(new HAnimJoint().setName("vt7").setDEF("hanim_vt7").setCenter(new float[] {0.0058f,1.3625f,-0.0833f}).setUlimit(new MFFloat181().getArray()).setLlimit(new MFFloat182().getArray())
                                  .addChild(new HAnimSegment().setName("t7").setDEF("hanim_t7")
                                    .addComments("<HAnimJoint name='vt7'/> visualization sphere within <HAnimSegment name='t7'/>")
                                    .addChild(new TouchSensor().setDescription("HAnimJoint vt7, HAnimSegment t7"))
                                    .addChild(new Transform().setTranslation(new float[] {0.0058f,1.3625f,-0.0833f})
                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                    .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>")
                                    .addChild(new Shape()
                                      .setGeometry(new LineSet().setVertexCount(new MFInt32183().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f184().getArray()))
                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                  .addChild(new HAnimJoint().setName("vt6").setDEF("hanim_vt6").setCenter(new float[] {0.0059f,1.3866f,-0.08f}).setUlimit(new MFFloat185().getArray()).setLlimit(new MFFloat186().getArray())
                                    .addChild(new HAnimSegment().setName("t6").setDEF("hanim_t6")
                                      .addComments("<HAnimJoint name='vt6'/> visualization sphere within <HAnimSegment name='t6'/>")
                                      .addChild(new TouchSensor().setDescription("HAnimJoint vt6, HAnimSegment t6"))
                                      .addChild(new Transform().setTranslation(new float[] {0.0059f,1.3866f,-0.08f})
                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                      .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>")
                                      .addChild(new Shape()
                                        .setGeometry(new LineSet().setVertexCount(new MFInt32187().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f188().getArray()))
                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                    .addChild(new HAnimJoint().setName("vt5").setDEF("hanim_vt5").setCenter(new float[] {0.006f,1.4102f,-0.0745f}).setUlimit(new MFFloat189().getArray()).setLlimit(new MFFloat190().getArray())
                                      .addChild(new HAnimSegment().setName("t5").setDEF("hanim_t5")
                                        .addComments("<HAnimJoint name='vt5'/> visualization sphere within <HAnimSegment name='t5'/>")
                                        .addChild(new TouchSensor().setDescription("HAnimJoint vt5, HAnimSegment t5"))
                                        .addChild(new Transform().setTranslation(new float[] {0.006f,1.4102f,-0.0745f})
                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                        .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>")
                                        .addChild(new Shape()
                                          .setGeometry(new LineSet().setVertexCount(new MFInt32191().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f192().getArray()))
                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                      .addChild(new HAnimJoint().setName("vt4").setDEF("hanim_vt4").setCenter(new float[] {0.0061f,1.432f,-0.0675f}).setUlimit(new MFFloat193().getArray()).setLlimit(new MFFloat194().getArray())
                                        .addChild(new HAnimSegment().setName("t4").setDEF("hanim_t4")
                                          .addComments("<HAnimJoint name='vt4'/> visualization sphere within <HAnimSegment name='t4'/>")
                                          .addChild(new TouchSensor().setDescription("HAnimJoint vt4, HAnimSegment t4"))
                                          .addChild(new Transform().setTranslation(new float[] {0.0061f,1.432f,-0.0675f})
                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                          .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>")
                                          .addChild(new Shape()
                                            .setGeometry(new LineSet().setVertexCount(new MFInt32195().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f196().getArray()))
                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                        .addChild(new HAnimJoint().setName("vt3").setDEF("hanim_vt3").setCenter(new float[] {0.0062f,1.4583f,-0.057f}).setUlimit(new MFFloat197().getArray()).setLlimit(new MFFloat198().getArray())
                                          .addChild(new HAnimSegment().setName("t3").setDEF("hanim_t3")
                                            .addComments("<HAnimJoint name='vt3'/> visualization sphere within <HAnimSegment name='t3'/>")
                                            .addChild(new TouchSensor().setDescription("HAnimJoint vt3, HAnimSegment t3"))
                                            .addChild(new Transform().setTranslation(new float[] {0.0062f,1.4583f,-0.057f})
                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                            .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>")
                                            .addChild(new Shape()
                                              .setGeometry(new LineSet().setVertexCount(new MFInt32199().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f200().getArray()))
                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                          .addChild(new HAnimJoint().setName("vt2").setDEF("hanim_vt2").setCenter(new float[] {0.0063f,1.4761f,-0.0484f}).setUlimit(new MFFloat201().getArray()).setLlimit(new MFFloat202().getArray())
                                            .addChild(new HAnimSegment().setName("t2").setDEF("hanim_t2")
                                              .addComments("<HAnimJoint name='vt2'/> visualization sphere within <HAnimSegment name='t2'/>")
                                              .addChild(new TouchSensor().setDescription("HAnimJoint vt2, HAnimSegment t2"))
                                              .addChild(new Transform().setTranslation(new float[] {0.0063f,1.4761f,-0.0484f})
                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                              .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>")
                                              .addChild(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32203().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f204().getArray()))
                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                            .addChild(new HAnimJoint().setName("vt1").setDEF("hanim_vt1").setCenter(new float[] {0.0065f,1.4951f,-0.0387f}).setUlimit(new MFFloat205().getArray()).setLlimit(new MFFloat206().getArray())
                                              .addChild(new HAnimSegment().setName("t1").setDEF("hanim_t1")
                                                .addComments("<HAnimJoint name='vt1'/> visualization sphere within <HAnimSegment name='t1'/>")
                                                .addChild(new TouchSensor().setDescription("HAnimJoint vt1, HAnimSegment t1"))
                                                .addChild(new Transform().setTranslation(new float[] {0.0065f,1.4951f,-0.0387f})
                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>")
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32207().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f208().getArray()))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>")
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32209().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f210().getArray()))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>")
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32211().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f212().getArray()))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>")
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32213().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f214().getArray()))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>")
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32215().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f216().getArray()))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                .addChild(new HAnimSite().setName("suprasternale_pt").setDEF("hanim_suprasternale_pt").setTranslation(new float[] {0.0084f,1.4714f,0.0551f})
                                                  .addComments("HAnimSite visualization shape")
                                                  .addChild(new TouchSensor().setDescription("HAnimSite suprasternale"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite().setName("cervicale_pt").setDEF("hanim_cervicale_pt").setTranslation(new float[] {0.0064f,1.52f,-0.0815f})
                                                  .addComments("HAnimSite visualization shape")
                                                  .addChild(new TouchSensor().setDescription("HAnimSite cervicale"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                              .addChild(new HAnimJoint().setName("vc7").setDEF("hanim_vc7").setCenter(new float[] {0.0066f,1.5132f,-0.0301f}).setUlimit(new MFFloat217().getArray()).setLlimit(new MFFloat218().getArray())
                                                .addChild(new HAnimSegment().setName("c7").setDEF("hanim_c7")
                                                  .addComments("<HAnimJoint name='vc7'/> visualization sphere within <HAnimSegment name='c7'/>")
                                                  .addChild(new TouchSensor().setDescription("HAnimJoint vc7, HAnimSegment c7"))
                                                  .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5132f,-0.0301f})
                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                  .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32219().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f220().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32221().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f222().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32223().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f224().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addChild(new HAnimSite().setName("r_neck_base_pt").setDEF("hanim_r_neck_base_pt").setTranslation(new float[] {-0.0419f,1.5149f,-0.022f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_neck_base"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("l_neck_base_pt").setDEF("hanim_l_neck_base_pt").setTranslation(new float[] {0.0646f,1.5141f,-0.038f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_neck_base"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                .addChild(new HAnimJoint().setName("vc6").setDEF("hanim_vc6").setCenter(new float[] {0.0066f,1.5357f,-0.0143f}).setUlimit(new MFFloat225().getArray()).setLlimit(new MFFloat226().getArray())
                                                  .addChild(new HAnimSegment().setName("c6").setDEF("hanim_c6")
                                                    .addComments("<HAnimJoint name='vc6'/> visualization sphere within <HAnimSegment name='c6'/>")
                                                    .addChild(new TouchSensor().setDescription("HAnimJoint vc6, HAnimSegment c6"))
                                                    .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5357f,-0.0143f})
                                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                                    .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>")
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32227().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f228().getArray()))
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimJoint().setName("vc5").setDEF("hanim_vc5").setCenter(new float[] {0.0066f,1.552f,-0.0082f}).setUlimit(new MFFloat229().getArray()).setLlimit(new MFFloat230().getArray())
                                                    .addChild(new HAnimSegment().setName("c5").setDEF("hanim_c5")
                                                      .addComments("<HAnimJoint name='vc5'/> visualization sphere within <HAnimSegment name='c5'/>")
                                                      .addChild(new TouchSensor().setDescription("HAnimJoint vc5, HAnimSegment c5"))
                                                      .addChild(new Transform().setTranslation(new float[] {0.0066f,1.552f,-0.0082f})
                                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                                      .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>")
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32231().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f232().getArray()))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                    .addChild(new HAnimJoint().setName("vc4").setDEF("hanim_vc4").setCenter(new float[] {0.0066f,1.5662f,-0.0084f}).setUlimit(new MFFloat233().getArray()).setLlimit(new MFFloat234().getArray())
                                                      .addChild(new HAnimSegment().setName("c4").setDEF("hanim_c4")
                                                        .addComments("<HAnimJoint name='vc4'/> visualization sphere within <HAnimSegment name='c4'/>")
                                                        .addChild(new TouchSensor().setDescription("HAnimJoint vc4, HAnimSegment c4"))
                                                        .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5662f,-0.0084f})
                                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                                        .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32235().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f236().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                      .addChild(new HAnimJoint().setName("vc3").setDEF("hanim_vc3").setCenter(new float[] {0.0066f,1.58f,-0.0103f}).setUlimit(new MFFloat237().getArray()).setLlimit(new MFFloat238().getArray())
                                                        .addChild(new HAnimSegment().setName("c3").setDEF("hanim_c3")
                                                          .addComments("<HAnimJoint name='vc3'/> visualization sphere within <HAnimSegment name='c3'/>")
                                                          .addChild(new TouchSensor().setDescription("HAnimJoint vc3, HAnimSegment c3"))
                                                          .addChild(new Transform().setTranslation(new float[] {0.0066f,1.58f,-0.0103f})
                                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                                          .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32239().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f240().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                        .addChild(new HAnimJoint().setName("vc2").setDEF("hanim_vc2").setCenter(new float[] {0.0066f,1.5928f,-0.0103f}).setUlimit(new MFFloat241().getArray()).setLlimit(new MFFloat242().getArray())
                                                          .addChild(new HAnimSegment().setName("c2").setDEF("hanim_c2")
                                                            .addComments("<HAnimJoint name='vc2'/> visualization sphere within <HAnimSegment name='c2'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint vc2, HAnimSegment c2"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5928f,-0.0103f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32243().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f244().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("vc1").setDEF("hanim_vc1").setCenter(new float[] {0.0066f,1.6144f,-0.0034f}).setUlimit(new MFFloat245().getArray()).setLlimit(new MFFloat246().getArray())
                                                            .addChild(new HAnimSegment().setName("c1").setDEF("hanim_c1")
                                                              .addComments("<HAnimJoint name='vc1'/> visualization sphere within <HAnimSegment name='c1'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint vc1, HAnimSegment c1"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.0066f,1.6144f,-0.0034f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32247().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f248().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0.0044f,1.6209f,0.0236f}).setUlimit(new MFFloat249().getArray()).setLlimit(new MFFloat250().getArray())
                                                              .addChild(new HAnimSegment().setName("skull").setDEF("hanim_skull")
                                                                .addComments("<HAnimJoint name='skullbase'/> visualization sphere within <HAnimSegment name='skull'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint skullbase, HAnimSegment skull"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.0044f,1.6209f,0.0236f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32251().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f252().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32253().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f254().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32255().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f256().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32257().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f258().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32259().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f260().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32261().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f262().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32263().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f264().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32265().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f266().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32267().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f268().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32269().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f270().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32271().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f272().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32273().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f274().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32275().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f276().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32277().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f278().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32279().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f280().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32281().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f282().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32283().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f284().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("TODO move skull_tip x to zero")
                                                                .addChild(new HAnimSite().setName("skull_tip").setDEF("hanim_skull_tip").setTranslation(new float[] {0.005f,1.7504f,0.0055f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite skull_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("sellion_pt").setDEF("hanim_sellion_pt").setTranslation(new float[] {0.0058f,1.6316f,0.0852f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite sellion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("r_infraorbitale_pt").setDEF("hanim_r_infraorbitale_pt").setTranslation(new float[] {-0.0237f,1.6171f,0.0752f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_infraorbitale"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("l_infraorbitale_pt").setDEF("hanim_l_infraorbitale_pt").setTranslation(new float[] {0.0341f,1.6171f,0.0752f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_infraorbitale"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("supramenton_pt").setDEF("hanim_supramenton_pt").setTranslation(new float[] {0.0061f,1.541f,0.0805f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite supramenton"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("r_tragion_pt").setDEF("hanim_r_tragion_pt").setTranslation(new float[] {-0.0646f,1.6347f,0.0302f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tragion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("r_gonion_pt").setDEF("hanim_r_gonion_pt").setTranslation(new float[] {-0.052f,1.5529f,0.0347f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_gonion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("l_tragion_pt").setDEF("hanim_l_tragion_pt").setTranslation(new float[] {0.0739f,1.6348f,0.0282f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tragion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("l_gonion_pt").setDEF("hanim_l_gonion_pt").setTranslation(new float[] {0.0631f,1.553f,0.033f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_gonion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("nuchale_pt").setDEF("hanim_nuchale_pt").setTranslation(new float[] {0.0039f,1.5972f,-0.0796f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite nuchale"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                              .addChild(new HAnimJoint().setName("l_eyeball_joint").setDEF("hanim_l_eyeball_joint").setCenter(new float[] {0.0336f,1.6332f,0.0502f}).setUlimit(new MFFloat285().getArray()).setLlimit(new MFFloat286().getArray())
                                                                .addChild(new HAnimSegment().setName("l_eyeball").setDEF("hanim_l_eyeball")
                                                                  .addComments("<HAnimJoint name='l_eyeball_joint'/> visualization sphere within <HAnimSegment name='l_eyeball'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.0336f,1.6332f,0.0502f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32287().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f288().getArray()))
                                                                      .setColor(new ColorRGBA().setDEF("HAnimSiteViewpointLineColorRGBA").setColor(new MFColorRGBA289().getArray()))))
                                                                  .addChild(new HAnimSite().setName("l_eyeball_site_view").setDEF("hanim_l_eyeball_site_view").setTranslation(new float[] {0.034f,1.64f,0.05f})
                                                                    .addChild(new Viewpoint().setDEF("hanim_l_eyeball_site_viewpoint").setDescription("l_eyeball_site_viewpoint looking forward").setOrientation(new float[] {0f,1f,0f,3.141593f}).setPosition(new float[] {0f,0f,0f}))
                                                                    .addComments("HAnimSite/Viewpoint visualization shape")
                                                                    .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_l_eyeball_site_view").setUrl(new MFString290().getArray())
                                                                      .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat291().getArray())
                                                                        .addChild(new WorldInfo().setInfo(new MFString292().getArray()))
                                                                        .addChild(new Shape().setDEF("HAnimSiteViewpointShape")
                                                                          .setGeometry(new IndexedFaceSet().setDEF("SiteViewpointDiamondIFS").setCoordIndex(new MFInt32293().getArray()).setCreaseAngle(0.5f)
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f294().getArray())))
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,1f}).setTransparency(0.6f)))))))))
                                                              .addChild(new HAnimJoint().setName("l_eyelid_joint").setDEF("hanim_l_eyelid_joint").setCenter(new float[] {0.0336f,1.6332f,0.0502f}).setUlimit(new MFFloat295().getArray()).setLlimit(new MFFloat296().getArray())
                                                                .addChild(new HAnimSegment().setName("l_eyelid").setDEF("hanim_l_eyelid")
                                                                  .addComments("<HAnimJoint name='l_eyelid_joint'/> visualization sphere within <HAnimSegment name='l_eyelid'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.0336f,1.6332f,0.0502f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addChild(new HAnimJoint().setName("l_eyebrow_joint").setDEF("hanim_l_eyebrow_joint").setCenter(new float[] {0.0336f,1.635f,0.0506f}).setUlimit(new MFFloat297().getArray()).setLlimit(new MFFloat298().getArray())
                                                                .addChild(new HAnimSegment().setName("l_eyebrow").setDEF("hanim_l_eyebrow")
                                                                  .addComments("<HAnimJoint name='l_eyebrow_joint'/> visualization sphere within <HAnimSegment name='l_eyebrow'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.0336f,1.635f,0.0506f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addChild(new HAnimJoint().setName("r_eyeball_joint").setDEF("hanim_r_eyeball_joint").setCenter(new float[] {-0.0336f,1.6332f,0.0502f}).setUlimit(new MFFloat299().getArray()).setLlimit(new MFFloat300().getArray())
                                                                .addChild(new HAnimSegment().setName("r_eyeball").setDEF("hanim_r_eyeball")
                                                                  .addComments("<HAnimJoint name='r_eyeball_joint'/> visualization sphere within <HAnimSegment name='r_eyeball'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0336f,1.6332f,0.0502f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32301().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f302().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteViewpointLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_eyeball_site_view").setDEF("hanim_r_eyeball_site_view").setTranslation(new float[] {-0.034f,1.64f,0.05f})
                                                                    .addChild(new Viewpoint().setDEF("hanim_r_eyeball_site_viewpoint").setDescription("r_eyeball_site_viewpoint looking forward").setOrientation(new float[] {0f,1f,0f,3.141593f}).setPosition(new float[] {0f,0f,0f}))
                                                                    .addComments("HAnimSite/Viewpoint visualization shape")
                                                                    .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_r_eyeball_site_view").setUrl(new MFString303().getArray())
                                                                      .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat304().getArray())
                                                                        .addChild(new WorldInfo().setInfo(new MFString305().getArray()))
                                                                        .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))))
                                                              .addChild(new HAnimJoint().setName("r_eyelid_joint").setDEF("hanim_r_eyelid_joint").setCenter(new float[] {-0.0336f,1.6332f,0.0502f}).setUlimit(new MFFloat306().getArray()).setLlimit(new MFFloat307().getArray())
                                                                .addChild(new HAnimSegment().setName("r_eyelid").setDEF("hanim_r_eyelid")
                                                                  .addComments("<HAnimJoint name='r_eyelid_joint'/> visualization sphere within <HAnimSegment name='r_eyelid'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0336f,1.6332f,0.0502f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addChild(new HAnimJoint().setName("r_eyebrow_joint").setDEF("hanim_r_eyebrow_joint").setCenter(new float[] {-0.0336f,1.635f,0.0506f}).setUlimit(new MFFloat308().getArray()).setLlimit(new MFFloat309().getArray())
                                                                .addChild(new HAnimSegment().setName("r_eyebrow").setDEF("hanim_r_eyebrow")
                                                                  .addComments("<HAnimJoint name='r_eyebrow_joint'/> visualization sphere within <HAnimSegment name='r_eyebrow'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0336f,1.635f,0.0506f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addComments("Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint")
                                                              .addChild(new HAnimJoint().setName("temporomandibular").setDEF("hanim_temporomandibular").setCenter(new float[] {0f,1.63f,0.015f}).setUlimit(new MFFloat310().getArray()).setLlimit(new MFFloat311().getArray())
                                                                .addChild(new HAnimSegment().setName("jaw").setDEF("hanim_jaw")
                                                                  .addComments("<HAnimJoint name='temporomandibular'/> visualization sphere within <HAnimSegment name='jaw'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint temporomandibular, HAnimSegment jaw"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0f,1.63f,0.015f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32312().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f313().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32314().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f315().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("temporomandibular_l_site_pt").setDEF("hanim_temporomandibular_l_site_pt").setTranslation(new float[] {0.045f,1.63f,0f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite temporomandibular_l_site"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite().setName("temporomandibular_r_site_pt").setDEF("hanim_temporomandibular_r_site_pt").setTranslation(new float[] {-0.045f,1.63f,0f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite temporomandibular_r_site"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))))
                                              .addChild(new HAnimJoint().setName("l_sternoclavicular").setDEF("hanim_l_sternoclavicular").setCenter(new float[] {0.082f,1.4488f,-0.0353f}).setUlimit(new MFFloat316().getArray()).setLlimit(new MFFloat317().getArray())
                                                .addChild(new HAnimSegment().setName("l_clavicle").setDEF("hanim_l_clavicle")
                                                  .addComments("<HAnimJoint name='l_sternoclavicular'/> visualization sphere within <HAnimSegment name='l_clavicle'/>")
                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle"))
                                                  .addChild(new Transform().setTranslation(new float[] {0.082f,1.4488f,-0.0353f})
                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                  .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32318().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f319().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32320().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f321().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32322().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f323().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32324().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f325().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32326().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f327().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addChild(new HAnimSite().setName("l_clavicale_pt").setDEF("hanim_l_clavicale_pt").setTranslation(new float[] {0.0271f,1.4943f,0.0394f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_clavicale"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("l_acromion_pt").setDEF("hanim_l_acromion_pt").setTranslation(new float[] {0.2032f,1.476f,-0.049f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_acromion"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("l_axilla_ant_pt").setDEF("hanim_l_axilla_ant_pt").setTranslation(new float[] {0.1777f,1.4065f,-0.0075f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_ant"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("l_axilla_post_pt").setDEF("hanim_l_axilla_post_pt").setTranslation(new float[] {0.1706f,1.4072f,-0.0875f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_post"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                .addChild(new HAnimJoint().setName("l_acromioclavicular").setDEF("hanim_l_acromioclavicular").setCenter(new float[] {0.0962f,1.4269f,-0.0424f}).setUlimit(new MFFloat328().getArray()).setLlimit(new MFFloat329().getArray())
                                                  .addChild(new HAnimSegment().setName("l_scapula").setDEF("hanim_l_scapula")
                                                    .addComments("<HAnimJoint name='l_acromioclavicular'/> visualization sphere within <HAnimSegment name='l_scapula'/>")
                                                    .addChild(new TouchSensor().setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula"))
                                                    .addChild(new Transform().setTranslation(new float[] {0.0962f,1.4269f,-0.0424f})
                                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                                    .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>")
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32330().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f331().getArray()))
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimJoint().setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {0.2029f,1.4376f,-0.0387f}).setUlimit(new MFFloat332().getArray()).setLlimit(new MFFloat333().getArray())
                                                    .addChild(new HAnimSegment().setName("l_upperarm").setDEF("hanim_l_upperarm")
                                                      .addComments("<HAnimJoint name='l_shoulder'/> visualization sphere within <HAnimSegment name='l_upperarm'/>")
                                                      .addChild(new TouchSensor().setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm"))
                                                      .addChild(new Transform().setTranslation(new float[] {0.2029f,1.4376f,-0.0387f})
                                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                                      .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>")
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32334().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f335().getArray()))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>")
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32336().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f337().getArray()))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                      .addChild(new HAnimSite().setName("l_humeral_lateral_epicn_pt").setDEF("hanim_l_humeral_lateral_epicn_pt").setTranslation(new float[] {0.228f,1.1482f,-0.11f})
                                                        .addComments("HAnimSite visualization shape")
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_lateral_epicn"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint().setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {0.2014f,1.1357f,-0.0682f}).setUlimit(new MFFloat338().getArray()).setLlimit(new MFFloat339().getArray())
                                                      .addChild(new HAnimSegment().setName("l_forearm").setDEF("hanim_l_forearm")
                                                        .addComments("<HAnimJoint name='l_elbow'/> visualization sphere within <HAnimSegment name='l_forearm'/>")
                                                        .addChild(new TouchSensor().setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm"))
                                                        .addChild(new Transform().setTranslation(new float[] {0.2014f,1.1357f,-0.0682f})
                                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                                        .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32340().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f341().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32342().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f343().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32344().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f345().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32346().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f347().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32348().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f349().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addChild(new HAnimSite().setName("l_radial_styloid_pt").setDEF("hanim_l_radial_styloid_pt").setTranslation(new float[] {0.1901f,0.8645f,-0.0415f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_radial_styloid"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("l_olecranon_pt").setDEF("hanim_l_olecranon_pt").setTranslation(new float[] {0.1962f,1.1375f,-0.1123f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_olecranon"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("l_humeral_medial_epicn_pt").setDEF("hanim_l_humeral_medial_epicn_pt").setTranslation(new float[] {0.1735f,1.1272f,-0.1113f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_medial_epicn"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("l_radiale_pt").setDEF("hanim_l_radiale_pt").setTranslation(new float[] {0.2182f,1.1212f,-0.1167f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_radiale"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint().setName("l_wrist").setDEF("hanim_l_wrist").setCenter(new float[] {0.1984f,0.8663f,-0.0583f}).setUlimit(new MFFloat350().getArray()).setLlimit(new MFFloat351().getArray())
                                                        .addChild(new HAnimSegment().setName("l_hand").setDEF("hanim_l_hand")
                                                          .addComments("<HAnimJoint name='l_wrist'/> visualization sphere within <HAnimSegment name='l_hand'/>")
                                                          .addChild(new TouchSensor().setDescription("HAnimJoint l_wrist, HAnimSegment l_hand"))
                                                          .addChild(new Transform().setTranslation(new float[] {0.1984f,0.8663f,-0.0583f})
                                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                                          .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32352().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f353().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32354().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f355().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32356().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f357().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32358().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f359().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32360().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f361().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32362().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f363().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32364().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f365().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32366().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f367().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32368().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f369().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteViewpointLineColorRGBA"))))
                                                          .addChild(new HAnimSite().setName("l_metacarpal_pha2_pt").setDEF("hanim_l_metacarpal_pha2_pt").setTranslation(new float[] {0.2009f,0.8139f,-0.0237f})
                                                            .addComments("HAnimSite visualization shape")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_pha2"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("l_ulnar_styloid_pt").setDEF("hanim_l_ulnar_styloid_pt").setTranslation(new float[] {0.2142f,0.8529f,-0.0648f})
                                                            .addComments("HAnimSite visualization shape")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_ulnar_styloid"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("l_metacarpal_pha5_pt").setDEF("hanim_l_metacarpal_pha5_pt").setTranslation(new float[] {0.1929f,0.786f,-0.1122f})
                                                            .addComments("HAnimSite visualization shape")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_pha5"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("l_hand_front_view").setDEF("hanim_l_hand_front_view").setTranslation(new float[] {0.3f,0.75f,0.45f})
                                                            .addChild(new Viewpoint().setDEF("hanim_l_hand_front_viewpoint").setCenterOfRotation(new float[] {0f,0.7f,0f}).setDescription("left hand front").setPosition(new float[] {0f,0f,0f}))
                                                            .addComments("HAnimSite/Viewpoint visualization shape")
                                                            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_l_hand_front_view").setUrl(new MFString370().getArray())
                                                              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat371().getArray())
                                                                .addChild(new WorldInfo().setInfo(new MFString372().getArray()))
                                                                .addChild(new Shape().setUSE("HAnimSiteViewpointShape"))))))
                                                        .addChild(new HAnimJoint().setName("l_thumb1").setDEF("hanim_l_thumb1").setCenter(new float[] {0.1924f,0.8472f,-0.0534f}).setUlimit(new MFFloat373().getArray()).setLlimit(new MFFloat374().getArray())
                                                          .addChild(new HAnimSegment().setName("l_thumb_metacarpal").setDEF("hanim_l_thumb_metacarpal")
                                                            .addComments("<HAnimJoint name='l_thumb1'/> visualization sphere within <HAnimSegment name='l_thumb_metacarpal'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1924f,0.8472f,-0.0534f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32375().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f376().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_thumb2").setDEF("hanim_l_thumb2").setCenter(new float[] {0.1951f,0.8226f,0.0246f}).setUlimit(new MFFloat377().getArray()).setLlimit(new MFFloat378().getArray())
                                                            .addChild(new HAnimSegment().setName("l_thumb_proximal").setDEF("hanim_l_thumb_proximal")
                                                              .addComments("<HAnimJoint name='l_thumb2'/> visualization sphere within <HAnimSegment name='l_thumb_proximal'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1951f,0.8226f,0.0246f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32379().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f380().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_thumb3").setDEF("hanim_l_thumb3").setCenter(new float[] {0.1955f,0.8159f,0.0464f}).setUlimit(new MFFloat381().getArray()).setLlimit(new MFFloat382().getArray())
                                                              .addChild(new HAnimSegment().setName("l_thumb_distal").setDEF("hanim_l_thumb_distal")
                                                                .addComments("<HAnimJoint name='l_thumb3'/> visualization sphere within <HAnimSegment name='l_thumb_distal'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1955f,0.8159f,0.0464f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32383().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f384().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addChild(new HAnimSite().setName("l_thumb_distal_tip").setDEF("hanim_l_thumb_distal_tip").setTranslation(new float[] {0.1982f,0.8061f,0.0759f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_thumb_distal_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))))))
                                                        .addChild(new HAnimJoint().setName("l_index0").setDEF("hanim_l_index0").setCenter(new float[] {0.1983f,0.8024f,-0.028f}).setUlimit(new MFFloat385().getArray()).setLlimit(new MFFloat386().getArray())
                                                          .addChild(new HAnimSegment().setName("l_index_metacarpal").setDEF("hanim_l_index_metacarpal")
                                                            .addComments("<HAnimJoint name='l_index0'/> visualization sphere within <HAnimSegment name='l_index_metacarpal'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_index0, HAnimSegment l_index_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1983f,0.8024f,-0.028f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32387().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f388().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_index1").setDEF("hanim_l_index1").setCenter(new float[] {0.1983f,0.7815f,-0.028f}).setUlimit(new MFFloat389().getArray()).setLlimit(new MFFloat390().getArray())
                                                            .addChild(new HAnimSegment().setName("l_index_proximal").setDEF("hanim_l_index_proximal")
                                                              .addComments("<HAnimJoint name='l_index1'/> visualization sphere within <HAnimSegment name='l_index_proximal'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_index1, HAnimSegment l_index_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1983f,0.7815f,-0.028f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32391().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f392().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_index2").setDEF("hanim_l_index2").setCenter(new float[] {0.2017f,0.7363f,-0.0248f}).setUlimit(new MFFloat393().getArray()).setLlimit(new MFFloat394().getArray())
                                                              .addChild(new HAnimSegment().setName("l_index_middle").setDEF("hanim_l_index_middle")
                                                                .addComments("<HAnimJoint name='l_index2'/> visualization sphere within <HAnimSegment name='l_index_middle'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_index2, HAnimSegment l_index_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.2017f,0.7363f,-0.0248f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32395().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f396().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_index3").setDEF("hanim_l_index3").setCenter(new float[] {0.2028f,0.7139f,-0.0236f}).setUlimit(new MFFloat397().getArray()).setLlimit(new MFFloat398().getArray())
                                                                .addChild(new HAnimSegment().setName("l_index_distal").setDEF("hanim_l_index_distal")
                                                                  .addComments("<HAnimJoint name='l_index3'/> visualization sphere within <HAnimSegment name='l_index_distal'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_index3, HAnimSegment l_index_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2028f,0.7139f,-0.0236f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32399().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f400().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32401().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f402().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_index_distal_tip").setDEF("hanim_l_index_distal_tip").setTranslation(new float[] {0.2089f,0.6858f,-0.0245f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_index_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite().setName("l_dactylion_pt").setDEF("hanim_l_dactylion_pt").setTranslation(new float[] {0.2056f,0.6743f,-0.0482f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_dactylion"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("l_middle0").setDEF("hanim_l_middle0").setCenter(new float[] {0.1987f,0.8029f,-0.053f}).setUlimit(new MFFloat403().getArray()).setLlimit(new MFFloat404().getArray())
                                                          .addChild(new HAnimSegment().setName("l_middle_metacarpal").setDEF("hanim_l_middle_metacarpal")
                                                            .addComments("<HAnimJoint name='l_middle0'/> visualization sphere within <HAnimSegment name='l_middle_metacarpal'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1987f,0.8029f,-0.053f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32405().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f406().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_middle1").setDEF("hanim_l_middle1").setCenter(new float[] {0.1987f,0.7818f,-0.053f}).setUlimit(new MFFloat407().getArray()).setLlimit(new MFFloat408().getArray())
                                                            .addChild(new HAnimSegment().setName("l_middle_proximal").setDEF("hanim_l_middle_proximal")
                                                              .addComments("<HAnimJoint name='l_middle1'/> visualization sphere within <HAnimSegment name='l_middle_proximal'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_middle1, HAnimSegment l_middle_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1987f,0.7818f,-0.053f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32409().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f410().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_middle2").setDEF("hanim_l_middle2").setCenter(new float[] {0.2013f,0.7273f,-0.0503f}).setUlimit(new MFFloat411().getArray()).setLlimit(new MFFloat412().getArray())
                                                              .addChild(new HAnimSegment().setName("l_middle_middle").setDEF("hanim_l_middle_middle")
                                                                .addComments("<HAnimJoint name='l_middle2'/> visualization sphere within <HAnimSegment name='l_middle_middle'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_middle2, HAnimSegment l_middle_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.2013f,0.7273f,-0.0503f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32413().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f414().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_middle3").setDEF("hanim_l_middle3").setCenter(new float[] {0.2026f,0.7011f,-0.0494f}).setUlimit(new MFFloat415().getArray()).setLlimit(new MFFloat416().getArray())
                                                                .addChild(new HAnimSegment().setName("l_middle_distal").setDEF("hanim_l_middle_distal")
                                                                  .addComments("<HAnimJoint name='l_middle3'/> visualization sphere within <HAnimSegment name='l_middle_distal'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_middle3, HAnimSegment l_middle_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2026f,0.7011f,-0.0494f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32417().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f418().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_middle_distal_tip").setDEF("hanim_l_middle_distal_tip").setTranslation(new float[] {0.208f,0.6731f,-0.0491f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_middle_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("l_ring0").setDEF("hanim_l_ring0").setCenter(new float[] {0.1956f,0.8019f,-0.0794f}).setUlimit(new MFFloat419().getArray()).setLlimit(new MFFloat420().getArray())
                                                          .addChild(new HAnimSegment().setName("l_ring_metacarpal").setDEF("hanim_l_ring_metacarpal")
                                                            .addComments("<HAnimJoint name='l_ring0'/> visualization sphere within <HAnimSegment name='l_ring_metacarpal'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1956f,0.8019f,-0.0794f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32421().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f422().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_ring1").setDEF("hanim_l_ring1").setCenter(new float[] {0.1956f,0.7815f,-0.0794f}).setUlimit(new MFFloat423().getArray()).setLlimit(new MFFloat424().getArray())
                                                            .addChild(new HAnimSegment().setName("l_ring_proximal").setDEF("hanim_l_ring_proximal")
                                                              .addComments("<HAnimJoint name='l_ring1'/> visualization sphere within <HAnimSegment name='l_ring_proximal'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_ring1, HAnimSegment l_ring_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1956f,0.7815f,-0.0794f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32425().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f426().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_ring2").setDEF("hanim_l_ring2").setCenter(new float[] {0.1973f,0.7287f,-0.0777f}).setUlimit(new MFFloat427().getArray()).setLlimit(new MFFloat428().getArray())
                                                              .addChild(new HAnimSegment().setName("l_ring_middle").setDEF("hanim_l_ring_middle")
                                                                .addComments("<HAnimJoint name='l_ring2'/> visualization sphere within <HAnimSegment name='l_ring_middle'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_ring2, HAnimSegment l_ring_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1973f,0.7287f,-0.0777f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32429().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f430().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_ring3").setDEF("hanim_l_ring3").setCenter(new float[] {0.1983f,0.7045f,-0.0767f}).setUlimit(new MFFloat431().getArray()).setLlimit(new MFFloat432().getArray())
                                                                .addChild(new HAnimSegment().setName("l_ring_distal").setDEF("hanim_l_ring_distal")
                                                                  .addComments("<HAnimJoint name='l_ring3'/> visualization sphere within <HAnimSegment name='l_ring_distal'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_ring3, HAnimSegment l_ring_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1983f,0.7045f,-0.0767f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32433().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f434().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_ring_distal_tip").setDEF("hanim_l_ring_distal_tip").setTranslation(new float[] {0.2035f,0.675f,-0.0756f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_ring_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("l_pinky0").setDEF("hanim_l_pinky0").setCenter(new float[] {0.1925f,0.8066f,-0.1036f}).setUlimit(new MFFloat435().getArray()).setLlimit(new MFFloat436().getArray())
                                                          .addChild(new HAnimSegment().setName("l_pinky_metacarpal").setDEF("hanim_l_pinky_metacarpal")
                                                            .addComments("<HAnimJoint name='l_pinky0'/> visualization sphere within <HAnimSegment name='l_pinky_metacarpal'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1925f,0.8066f,-0.1036f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32437().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f438().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_pinky1").setDEF("hanim_l_pinky1").setCenter(new float[] {0.1925f,0.7866f,-0.1036f}).setUlimit(new MFFloat439().getArray()).setLlimit(new MFFloat440().getArray())
                                                            .addChild(new HAnimSegment().setName("l_pinky_proximal").setDEF("hanim_l_pinky_proximal")
                                                              .addComments("<HAnimJoint name='l_pinky1'/> visualization sphere within <HAnimSegment name='l_pinky_proximal'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1925f,0.7866f,-0.1036f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32441().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f442().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_pinky2").setDEF("hanim_l_pinky2").setCenter(new float[] {0.1938f,0.7452f,-0.1024f}).setUlimit(new MFFloat443().getArray()).setLlimit(new MFFloat444().getArray())
                                                              .addChild(new HAnimSegment().setName("l_pinky_middle").setDEF("hanim_l_pinky_middle")
                                                                .addComments("<HAnimJoint name='l_pinky2'/> visualization sphere within <HAnimSegment name='l_pinky_middle'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1938f,0.7452f,-0.1024f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32445().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f446().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_pinky3").setDEF("hanim_l_pinky3").setCenter(new float[] {0.1948f,0.7277f,-0.1017f}).setUlimit(new MFFloat447().getArray()).setLlimit(new MFFloat448().getArray())
                                                                .addChild(new HAnimSegment().setName("l_pinky_distal").setDEF("hanim_l_pinky_distal")
                                                                  .addComments("<HAnimJoint name='l_pinky3'/> visualization sphere within <HAnimSegment name='l_pinky_distal'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1948f,0.7277f,-0.1017f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32449().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f450().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_pinky_distal_tip").setDEF("hanim_l_pinky_distal_tip").setTranslation(new float[] {0.2014f,0.7009f,-0.1012f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_pinky_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))))
                                              .addChild(new HAnimJoint().setName("r_sternoclavicular").setDEF("hanim_r_sternoclavicular").setCenter(new float[] {-0.082f,1.4488f,-0.0353f}).setUlimit(new MFFloat451().getArray()).setLlimit(new MFFloat452().getArray())
                                                .addChild(new HAnimSegment().setName("r_clavicle").setDEF("hanim_r_clavicle")
                                                  .addComments("<HAnimJoint name='r_sternoclavicular'/> visualization sphere within <HAnimSegment name='r_clavicle'/>")
                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle"))
                                                  .addChild(new Transform().setTranslation(new float[] {-0.082f,1.4488f,-0.0353f})
                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                  .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32453().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f454().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32455().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f456().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32457().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f458().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32459().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f460().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32461().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f462().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addChild(new HAnimSite().setName("r_clavicale_pt").setDEF("hanim_r_clavicale_pt").setTranslation(new float[] {-0.0115f,1.4943f,0.04f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_clavicale"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("r_acromion_pt").setDEF("hanim_r_acromion_pt").setTranslation(new float[] {-0.1905f,1.4791f,-0.0431f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_acromion"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("r_axilla_ant_pt").setDEF("hanim_r_axilla_ant_pt").setTranslation(new float[] {-0.1626f,1.4072f,-0.0031f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_ant"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("r_axilla_post_pt").setDEF("hanim_r_axilla_post_pt").setTranslation(new float[] {-0.1603f,1.4098f,-0.0826f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_post"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                .addChild(new HAnimJoint().setName("r_acromioclavicular").setDEF("hanim_r_acromioclavicular").setCenter(new float[] {-0.0962f,1.4269f,-0.0424f}).setUlimit(new MFFloat463().getArray()).setLlimit(new MFFloat464().getArray())
                                                  .addChild(new HAnimSegment().setName("r_scapula").setDEF("hanim_r_scapula")
                                                    .addComments("<HAnimJoint name='r_acromioclavicular'/> visualization sphere within <HAnimSegment name='r_scapula'/>")
                                                    .addChild(new TouchSensor().setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula"))
                                                    .addChild(new Transform().setTranslation(new float[] {-0.0962f,1.4269f,-0.0424f})
                                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                                    .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>")
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32465().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f466().getArray()))
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimJoint().setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-0.2029f,1.4376f,-0.0387f}).setUlimit(new MFFloat467().getArray()).setLlimit(new MFFloat468().getArray())
                                                    .addChild(new HAnimSegment().setName("r_upperarm").setDEF("hanim_r_upperarm")
                                                      .addComments("<HAnimJoint name='r_shoulder'/> visualization sphere within <HAnimSegment name='r_upperarm'/>")
                                                      .addChild(new TouchSensor().setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm"))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.2029f,1.4376f,-0.0387f})
                                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                                      .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>")
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32469().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f470().getArray()))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>")
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32471().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f472().getArray()))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                      .addChild(new HAnimSite().setName("r_humeral_lateral_epicn_pt").setDEF("hanim_r_humeral_lateral_epicn_pt").setTranslation(new float[] {-0.2224f,1.1517f,-0.1033f})
                                                        .addComments("HAnimSite visualization shape")
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_lateral_epicn"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint().setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-0.2014f,1.1357f,-0.0682f}).setUlimit(new MFFloat473().getArray()).setLlimit(new MFFloat474().getArray())
                                                      .addChild(new HAnimSegment().setName("r_forearm").setDEF("hanim_r_forearm")
                                                        .addComments("<HAnimJoint name='r_elbow'/> visualization sphere within <HAnimSegment name='r_forearm'/>")
                                                        .addChild(new TouchSensor().setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm"))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.2014f,1.1357f,-0.0682f})
                                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                                        .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32475().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f476().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32477().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f478().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32479().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f480().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32481().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f482().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32483().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f484().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addChild(new HAnimSite().setName("r_radial_styloid_pt").setDEF("hanim_r_radial_styloid_pt").setTranslation(new float[] {-0.1884f,0.8676f,-0.036f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_radial_styloid"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("r_olecranon_pt").setDEF("hanim_r_olecranon_pt").setTranslation(new float[] {-0.1907f,1.1405f,-0.1065f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_olecranon"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("r_humeral_medial_epicn_pt").setDEF("hanim_r_humeral_medial_epicn_pt").setTranslation(new float[] {-0.168f,1.1298f,-0.1062f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_medial_epicn"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("r_radiale_pt").setDEF("hanim_r_radiale_pt").setTranslation(new float[] {-0.213f,1.1305f,-0.1091f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_radiale"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint().setName("r_wrist").setDEF("hanim_r_wrist").setCenter(new float[] {-0.1984f,0.8663f,-0.0583f}).setUlimit(new MFFloat485().getArray()).setLlimit(new MFFloat486().getArray())
                                                        .addChild(new HAnimSegment().setName("r_hand").setDEF("hanim_r_hand")
                                                          .addComments("<HAnimJoint name='r_wrist'/> visualization sphere within <HAnimSegment name='r_hand'/>")
                                                          .addChild(new TouchSensor().setDescription("HAnimJoint r_wrist, HAnimSegment r_hand"))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.1984f,0.8663f,-0.0583f})
                                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                                          .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32487().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f488().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32489().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f490().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32491().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f492().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32493().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f494().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32495().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f496().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32497().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f498().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32499().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f500().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32501().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f502().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32503().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f504().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteViewpointLineColorRGBA"))))
                                                          .addChild(new HAnimSite().setName("r_metacarpal_pha2_pt").setDEF("hanim_r_metacarpal_pha2_pt").setTranslation(new float[] {-0.1977f,0.8169f,-0.0177f})
                                                            .addComments("HAnimSite visualization shape")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_pha2"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("r_ulnar_styloid_pt").setDEF("hanim_r_ulnar_styloid_pt").setTranslation(new float[] {-0.2117f,0.8562f,-0.0584f})
                                                            .addComments("HAnimSite visualization shape")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_ulnar_styloid"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("r_metacarpal_pha5_pt").setDEF("hanim_r_metacarpal_pha5_pt").setTranslation(new float[] {-0.1929f,0.789f,-0.1064f})
                                                            .addComments("HAnimSite visualization shape")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_pha5"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("r_hand_front_view").setDEF("hanim_r_hand_front_view").setTranslation(new float[] {-0.3f,0.75f,0.45f})
                                                            .addChild(new Viewpoint().setDEF("hanim_r_hand_front_viewpoint").setCenterOfRotation(new float[] {0f,0.7f,0f}).setDescription("right hand front").setPosition(new float[] {0f,0f,0f}))
                                                            .addComments("HAnimSite/Viewpoint visualization shape")
                                                            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_r_hand_front_view").setUrl(new MFString505().getArray())
                                                              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat506().getArray())
                                                                .addChild(new WorldInfo().setInfo(new MFString507().getArray()))
                                                                .addChild(new Shape().setUSE("HAnimSiteViewpointShape"))))))
                                                        .addChild(new HAnimJoint().setName("r_thumb1").setDEF("hanim_r_thumb1").setCenter(new float[] {-0.1924f,0.8472f,-0.0534f}).setUlimit(new MFFloat508().getArray()).setLlimit(new MFFloat509().getArray())
                                                          .addChild(new HAnimSegment().setName("r_thumb_metacarpal").setDEF("hanim_r_thumb_metacarpal")
                                                            .addComments("<HAnimJoint name='r_thumb1'/> visualization sphere within <HAnimSegment name='r_thumb_metacarpal'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1924f,0.8472f,-0.0534f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32510().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f511().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_thumb2").setDEF("hanim_r_thumb2").setCenter(new float[] {-0.1951f,0.8226f,0.0246f}).setUlimit(new MFFloat512().getArray()).setLlimit(new MFFloat513().getArray())
                                                            .addChild(new HAnimSegment().setName("r_thumb_proximal").setDEF("hanim_r_thumb_proximal")
                                                              .addComments("<HAnimJoint name='r_thumb2'/> visualization sphere within <HAnimSegment name='r_thumb_proximal'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1951f,0.8226f,0.0246f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32514().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f515().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_thumb3").setDEF("hanim_r_thumb3").setCenter(new float[] {-0.1955f,0.8159f,0.0464f}).setUlimit(new MFFloat516().getArray()).setLlimit(new MFFloat517().getArray())
                                                              .addChild(new HAnimSegment().setName("r_thumb_distal").setDEF("hanim_r_thumb_distal")
                                                                .addComments("<HAnimJoint name='r_thumb3'/> visualization sphere within <HAnimSegment name='r_thumb_distal'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1955f,0.8159f,0.0464f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32518().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f519().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addChild(new HAnimSite().setName("r_thumb_distal_tip").setDEF("hanim_r_thumb_distal_tip").setTranslation(new float[] {-0.1869f,0.809f,0.082f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_thumb_distal_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))))))
                                                        .addChild(new HAnimJoint().setName("r_index0").setDEF("hanim_r_index0").setCenter(new float[] {-0.1983f,0.8024f,-0.028f}).setUlimit(new MFFloat520().getArray()).setLlimit(new MFFloat521().getArray())
                                                          .addChild(new HAnimSegment().setName("r_index_metacarpal").setDEF("hanim_r_index_metacarpal")
                                                            .addComments("<HAnimJoint name='r_index0'/> visualization sphere within <HAnimSegment name='r_index_metacarpal'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_index0, HAnimSegment r_index_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1983f,0.8024f,-0.028f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32522().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f523().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_index1").setDEF("hanim_r_index1").setCenter(new float[] {-0.1983f,0.7815f,-0.028f}).setUlimit(new MFFloat524().getArray()).setLlimit(new MFFloat525().getArray())
                                                            .addChild(new HAnimSegment().setName("r_index_proximal").setDEF("hanim_r_index_proximal")
                                                              .addComments("<HAnimJoint name='r_index1'/> visualization sphere within <HAnimSegment name='r_index_proximal'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_index1, HAnimSegment r_index_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1983f,0.7815f,-0.028f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32526().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f527().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_index2").setDEF("hanim_r_index2").setCenter(new float[] {-0.2017f,0.7363f,-0.0248f}).setUlimit(new MFFloat528().getArray()).setLlimit(new MFFloat529().getArray())
                                                              .addChild(new HAnimSegment().setName("r_index_middle").setDEF("hanim_r_index_middle")
                                                                .addComments("<HAnimJoint name='r_index2'/> visualization sphere within <HAnimSegment name='r_index_middle'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_index2, HAnimSegment r_index_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2017f,0.7363f,-0.0248f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32530().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f531().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_index3").setDEF("hanim_r_index3").setCenter(new float[] {-0.2028f,0.7139f,-0.0236f}).setUlimit(new MFFloat532().getArray()).setLlimit(new MFFloat533().getArray())
                                                                .addChild(new HAnimSegment().setName("r_index_distal").setDEF("hanim_r_index_distal")
                                                                  .addComments("<HAnimJoint name='r_index3'/> visualization sphere within <HAnimSegment name='r_index_distal'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_index3, HAnimSegment r_index_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2028f,0.7139f,-0.0236f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32534().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f535().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32536().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f537().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_index_distal_tip").setDEF("hanim_r_index_distal_tip").setTranslation(new float[] {-0.198f,0.6883f,-0.018f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_index_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite().setName("r_dactylion_pt").setDEF("hanim_r_dactylion_pt").setTranslation(new float[] {-0.1941f,0.6772f,-0.0423f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_dactylion"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("r_middle0").setDEF("hanim_r_middle0").setCenter(new float[] {-0.1987f,0.8029f,-0.053f}).setUlimit(new MFFloat538().getArray()).setLlimit(new MFFloat539().getArray())
                                                          .addChild(new HAnimSegment().setName("r_middle_metacarpal").setDEF("hanim_r_middle_metacarpal")
                                                            .addComments("<HAnimJoint name='r_middle0'/> visualization sphere within <HAnimSegment name='r_middle_metacarpal'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1987f,0.8029f,-0.053f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32540().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f541().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_middle1").setDEF("hanim_r_middle1").setCenter(new float[] {-0.1987f,0.7818f,-0.053f}).setUlimit(new MFFloat542().getArray()).setLlimit(new MFFloat543().getArray())
                                                            .addChild(new HAnimSegment().setName("r_middle_proximal").setDEF("hanim_r_middle_proximal")
                                                              .addComments("<HAnimJoint name='r_middle1'/> visualization sphere within <HAnimSegment name='r_middle_proximal'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_middle1, HAnimSegment r_middle_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1987f,0.7818f,-0.053f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32544().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f545().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_middle2").setDEF("hanim_r_middle2").setCenter(new float[] {-0.2013f,0.7273f,-0.0503f}).setUlimit(new MFFloat546().getArray()).setLlimit(new MFFloat547().getArray())
                                                              .addChild(new HAnimSegment().setName("r_middle_middle").setDEF("hanim_r_middle_middle")
                                                                .addComments("<HAnimJoint name='r_middle2'/> visualization sphere within <HAnimSegment name='r_middle_middle'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_middle2, HAnimSegment r_middle_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2013f,0.7273f,-0.0503f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32548().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f549().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_middle3").setDEF("hanim_r_middle3").setCenter(new float[] {-0.2026f,0.7011f,-0.0494f}).setUlimit(new MFFloat550().getArray()).setLlimit(new MFFloat551().getArray())
                                                                .addChild(new HAnimSegment().setName("r_middle_distal").setDEF("hanim_r_middle_distal")
                                                                  .addComments("<HAnimJoint name='r_middle3'/> visualization sphere within <HAnimSegment name='r_middle_distal'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_middle3, HAnimSegment r_middle_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2026f,0.7011f,-0.0494f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32552().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f553().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_middle_distal_tip").setDEF("hanim_r_middle_distal_tip").setTranslation(new float[] {-0.1969f,0.6758f,-0.0427f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_middle_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("r_ring0").setDEF("hanim_r_ring0").setCenter(new float[] {-0.1956f,0.8019f,-0.0794f}).setUlimit(new MFFloat554().getArray()).setLlimit(new MFFloat555().getArray())
                                                          .addChild(new HAnimSegment().setName("r_ring_metacarpal").setDEF("hanim_r_ring_metacarpal")
                                                            .addComments("<HAnimJoint name='r_ring0'/> visualization sphere within <HAnimSegment name='r_ring_metacarpal'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1956f,0.8019f,-0.0794f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32556().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f557().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_ring1").setDEF("hanim_r_ring1").setCenter(new float[] {-0.1956f,0.7815f,-0.0794f}).setUlimit(new MFFloat558().getArray()).setLlimit(new MFFloat559().getArray())
                                                            .addChild(new HAnimSegment().setName("r_ring_proximal").setDEF("hanim_r_ring_proximal")
                                                              .addComments("<HAnimJoint name='r_ring1'/> visualization sphere within <HAnimSegment name='r_ring_proximal'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_ring1, HAnimSegment r_ring_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1956f,0.7815f,-0.0794f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32560().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f561().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_ring2").setDEF("hanim_r_ring2").setCenter(new float[] {-0.1973f,0.7287f,-0.0777f}).setUlimit(new MFFloat562().getArray()).setLlimit(new MFFloat563().getArray())
                                                              .addChild(new HAnimSegment().setName("r_ring_middle").setDEF("hanim_r_ring_middle")
                                                                .addComments("<HAnimJoint name='r_ring2'/> visualization sphere within <HAnimSegment name='r_ring_middle'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_ring2, HAnimSegment r_ring_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1973f,0.7287f,-0.0777f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32564().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f565().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_ring3").setDEF("hanim_r_ring3").setCenter(new float[] {-0.1983f,0.7045f,-0.0767f}).setUlimit(new MFFloat566().getArray()).setLlimit(new MFFloat567().getArray())
                                                                .addChild(new HAnimSegment().setName("r_ring_distal").setDEF("hanim_r_ring_distal")
                                                                  .addComments("<HAnimJoint name='r_ring3'/> visualization sphere within <HAnimSegment name='r_ring_distal'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_ring3, HAnimSegment r_ring_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1983f,0.7045f,-0.0767f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32568().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f569().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_ring_distal_tip").setDEF("hanim_r_ring_distal_tip").setTranslation(new float[] {-0.1934f,0.6778f,-0.0693f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_ring_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("r_pinky0").setDEF("hanim_r_pinky0").setCenter(new float[] {-0.1925f,0.8066f,-0.1036f}).setUlimit(new MFFloat570().getArray()).setLlimit(new MFFloat571().getArray())
                                                          .addChild(new HAnimSegment().setName("r_pinky_metacarpal").setDEF("hanim_r_pinky_metacarpal")
                                                            .addComments("<HAnimJoint name='r_pinky0'/> visualization sphere within <HAnimSegment name='r_pinky_metacarpal'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1925f,0.8066f,-0.1036f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32572().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f573().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_pinky1").setDEF("hanim_r_pinky1").setCenter(new float[] {-0.1925f,0.7866f,-0.1036f}).setUlimit(new MFFloat574().getArray()).setLlimit(new MFFloat575().getArray())
                                                            .addChild(new HAnimSegment().setName("r_pinky_proximal").setDEF("hanim_r_pinky_proximal")
                                                              .addComments("<HAnimJoint name='r_pinky1'/> visualization sphere within <HAnimSegment name='r_pinky_proximal'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1925f,0.7866f,-0.1036f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32576().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f577().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_pinky2").setDEF("hanim_r_pinky2").setCenter(new float[] {-0.1938f,0.7452f,-0.1024f}).setUlimit(new MFFloat578().getArray()).setLlimit(new MFFloat579().getArray())
                                                              .addChild(new HAnimSegment().setName("r_pinky_middle").setDEF("hanim_r_pinky_middle")
                                                                .addComments("<HAnimJoint name='r_pinky2'/> visualization sphere within <HAnimSegment name='r_pinky_middle'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1938f,0.7452f,-0.1024f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32580().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f581().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_pinky3").setDEF("hanim_r_pinky3").setCenter(new float[] {-0.1948f,0.7277f,-0.1017f}).setUlimit(new MFFloat582().getArray()).setLlimit(new MFFloat583().getArray())
                                                                .addChild(new HAnimSegment().setName("r_pinky_distal").setDEF("hanim_r_pinky_distal")
                                                                  .addComments("<HAnimJoint name='r_pinky3'/> visualization sphere within <HAnimSegment name='r_pinky_distal'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1948f,0.7277f,-0.1017f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32584().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f585().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_pinky_distal_tip").setDEF("hanim_r_pinky_distal_tip").setTranslation(new float[] {-0.1938f,0.7035f,-0.0949f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_pinky_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))))))))))))))))))))))
          .addComments("USE nodes for inverse kinematics (IK) engines and other tools")
          .addComments("Top-level HAnimSite/Viewpoint nodes for viewing the humanoid without being affected by body motion")
          .addViewpoints(new HAnimSite().setName("l_inclined_view").setDEF("hanim_l_inclined_view").setRotation(new float[] {-0.113f,0.993f,0.0347f,0.671f}).setTranslation(new float[] {1.62f,1.05f,2.06f})
            .addChild(new Viewpoint().setDEF("hanim_l_inclined_viewpoint").setDescription("left inclined").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_l_inclined_view").setUrl(new MFString586().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat587().getArray())
                .addChild(new WorldInfo().setInfo(new MFString588().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("r_inclined_view").setDEF("hanim_r_inclined_view").setRotation(new float[] {-0.113f,-0.993f,0.0347f,0.671f}).setTranslation(new float[] {-1.62f,1.05f,2.06f})
            .addChild(new Viewpoint().setDEF("hanim_r_inclined_viewpoint").setCenterOfRotation(new float[] {0f,0.9f,0f}).setDescription("right inclined").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_r_inclined_view").setUrl(new MFString589().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat590().getArray())
                .addChild(new WorldInfo().setInfo(new MFString591().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("front_view").setDEF("hanim_front_view").setTranslation(new float[] {0f,0.85f,2.58f})
            .addChild(new Viewpoint().setDEF("hanim_front_viewpoint").setCenterOfRotation(new float[] {0f,0.9f,0f}).setDescription("front").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_front_view").setUrl(new MFString592().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat593().getArray())
                .addChild(new WorldInfo().setInfo(new MFString594().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("back_view").setDEF("hanim_back_view").setRotation(new float[] {0f,1f,0f,3.14f}).setTranslation(new float[] {0f,0.85f,-2.58f})
            .addChild(new Viewpoint().setDEF("hanim_back_viewpoint").setCenterOfRotation(new float[] {0f,0.9f,0f}).setDescription("back").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_back_view").setUrl(new MFString595().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat596().getArray())
                .addChild(new WorldInfo().setInfo(new MFString597().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("l_side_view").setDEF("hanim_l_side_view").setRotation(new float[] {0f,1f,0f,1.5708f}).setTranslation(new float[] {2.6f,0.854f,0f})
            .addChild(new Viewpoint().setDEF("hanim_l_side_viewpoint").setCenterOfRotation(new float[] {0f,0.9f,0f}).setDescription("left side").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_l_side_view").setUrl(new MFString598().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat599().getArray())
                .addChild(new WorldInfo().setInfo(new MFString600().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("Top_view").setDEF("hanim_Top_view").setRotation(new float[] {1f,0f,0f,-1.57f}).setTranslation(new float[] {0f,3.5f,0f})
            .addChild(new Viewpoint().setDEF("hanim_Top_viewpoint").setCenterOfRotation(new float[] {0f,0.9f,0f}).setDescription("Top").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_Top_view").setUrl(new MFString601().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat602().getArray())
                .addChild(new WorldInfo().setInfo(new MFString603().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("front_close_view").setDEF("hanim_front_close_view").setTranslation(new float[] {0f,0.854f,1.575f})
            .addChild(new Viewpoint().setDEF("hanim_front_close_viewpoint").setCenterOfRotation(new float[] {0f,0f,1.575f}).setDescription("front close").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_front_close_view").setUrl(new MFString604().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat605().getArray())
                .addChild(new WorldInfo().setInfo(new MFString606().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("side_close_view").setDEF("hanim_side_close_view").setRotation(new float[] {0f,1f,0f,1.5708f}).setTranslation(new float[] {1.56f,0.854f,0f})
            .addChild(new Viewpoint().setDEF("hanim_side_close_viewpoint").setCenterOfRotation(new float[] {1.6f,0f,0f}).setDescription("side close").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_side_close_view").setUrl(new MFString607().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat608().getArray())
                .addChild(new WorldInfo().setInfo(new MFString609().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("head_front_close_view").setDEF("hanim_head_front_close_view").setTranslation(new float[] {0f,1.5f,1f})
            .addChild(new Viewpoint().setDEF("hanim_head_front_close_viewpoint").setCenterOfRotation(new float[] {0f,0f,1f}).setDescription("head front close").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_head_front_close_view").setUrl(new MFString610().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat611().getArray())
                .addChild(new WorldInfo().setInfo(new MFString612().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("chest_front_close_view").setDEF("hanim_chest_front_close_view").setTranslation(new float[] {0f,1.2f,1f})
            .addChild(new Viewpoint().setDEF("hanim_chest_front_close_viewpoint").setCenterOfRotation(new float[] {0f,0f,1f}).setDescription("chest front close").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_chest_front_close_view").setUrl(new MFString613().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat614().getArray())
                .addChild(new WorldInfo().setInfo(new MFString615().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("pelvis_front_close_view").setDEF("hanim_pelvis_front_close_view").setTranslation(new float[] {0f,0.8f,1f})
            .addChild(new Viewpoint().setDEF("hanim_pelvis_front_close_viewpoint").setCenterOfRotation(new float[] {0f,0f,1f}).setDescription("pelvis front close").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_pelvis_front_close_view").setUrl(new MFString616().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat617().getArray())
                .addChild(new WorldInfo().setInfo(new MFString618().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("knees_front_close_view").setDEF("hanim_knees_front_close_view").setTranslation(new float[] {0f,0.4f,1f})
            .addChild(new Viewpoint().setDEF("hanim_knees_front_close_viewpoint").setCenterOfRotation(new float[] {0f,0.4f,0f}).setDescription("knees front close").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_knees_front_close_view").setUrl(new MFString619().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat620().getArray())
                .addChild(new WorldInfo().setInfo(new MFString621().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("feet_front_close_view").setDEF("hanim_feet_front_close_view").setTranslation(new float[] {0f,0f,1f})
            .addChild(new Viewpoint().setDEF("hanim_feet_front_close_viewpoint").setDescription("feet front close").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_feet_front_close_view").setUrl(new MFString622().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat623().getArray())
                .addChild(new WorldInfo().setInfo(new MFString624().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("eye_level_view").setDEF("hanim_eye_level_view").setTranslation(new float[] {0f,1.6332f,0.0502f})
            .addChild(new Viewpoint().setDEF("hanim_eye_level_viewpoint").setDescription("eye level looking forward").setOrientation(new float[] {0f,1f,0f,3.141593f}).setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite Viewpoint hanim_eye_level_view").setUrl(new MFString625().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat626().getArray())
                .addChild(new WorldInfo().setInfo(new MFString627().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addSites(new HAnimSite().setUSE("hanim_l_eyeball_site_view"))
          .addSites(new HAnimSite().setUSE("hanim_r_eyeball_site_view"))
          .addSites(new HAnimSite().setUSE("hanim_l_hand_front_view"))
          .addSites(new HAnimSite().setUSE("hanim_r_hand_front_view"))
          .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint().setUSE("hanim_sacroiliac"))
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
          .addJoints(new HAnimJoint().setUSE("hanim_temporomandibular"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_acromioclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_acromioclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_ankle"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_ankle"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_eyeball_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_eyeball_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_eyebrow_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_eyebrow_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_eyelid_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_eyelid_joint"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_hip"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_hip"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_index0"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_index0"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_index1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_index1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_index2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_index2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_index3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_index3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsal"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsal"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_middle0"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_middle0"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_middle1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_middle1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_middle2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_middle2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_middle3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_middle3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_midtarsal"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midtarsal"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_pinky0"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_pinky0"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_pinky1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_pinky1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_pinky2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_pinky2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_pinky3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_pinky3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_ring0"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_ring0"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_ring1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_ring1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_ring2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_ring2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_ring3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_ring3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_sternoclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_sternoclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_subtalar"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_subtalar"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_thumb1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_thumb1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_thumb2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_thumb2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_thumb3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_thumb3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_wrist"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_wrist"))
          .addSegments(new HAnimSegment().setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegment().setUSE("hanim_skull"))
          .addSegments(new HAnimSegment().setUSE("hanim_jaw"))
          .addSegments(new HAnimSegment().setUSE("hanim_c1"))
          .addSegments(new HAnimSegment().setUSE("hanim_c2"))
          .addSegments(new HAnimSegment().setUSE("hanim_c3"))
          .addSegments(new HAnimSegment().setUSE("hanim_c4"))
          .addSegments(new HAnimSegment().setUSE("hanim_c5"))
          .addSegments(new HAnimSegment().setUSE("hanim_c6"))
          .addSegments(new HAnimSegment().setUSE("hanim_c7"))
          .addSegments(new HAnimSegment().setUSE("hanim_t1"))
          .addSegments(new HAnimSegment().setUSE("hanim_t2"))
          .addSegments(new HAnimSegment().setUSE("hanim_t3"))
          .addSegments(new HAnimSegment().setUSE("hanim_t4"))
          .addSegments(new HAnimSegment().setUSE("hanim_t5"))
          .addSegments(new HAnimSegment().setUSE("hanim_t6"))
          .addSegments(new HAnimSegment().setUSE("hanim_t7"))
          .addSegments(new HAnimSegment().setUSE("hanim_t8"))
          .addSegments(new HAnimSegment().setUSE("hanim_t9"))
          .addSegments(new HAnimSegment().setUSE("hanim_t10"))
          .addSegments(new HAnimSegment().setUSE("hanim_t11"))
          .addSegments(new HAnimSegment().setUSE("hanim_t12"))
          .addSegments(new HAnimSegment().setUSE("hanim_l1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l5"))
          .addSegments(new HAnimSegment().setUSE("hanim_sacrum"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_clavicle"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_clavicle"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_eyeball"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_eyeball"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_eyebrow"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_eyebrow"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_eyelid"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_eyelid"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_forefoot"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_forefoot"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_hand"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_hand"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_hindfoot"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_hindfoot"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_index_distal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_index_distal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_index_metacarpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_index_metacarpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_index_middle"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_index_middle"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_index_proximal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_index_proximal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_middistal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_middistal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_middle_distal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_middle_distal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_middle_metacarpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_middle_metacarpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_middle_middle"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_middle_middle"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_middle_proximal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_middle_proximal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_midproximal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_midproximal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_pinky_distal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_pinky_distal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_pinky_metacarpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_pinky_metacarpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_pinky_middle"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_pinky_middle"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_pinky_proximal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_pinky_proximal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_ring_distal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_ring_distal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_ring_metacarpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_ring_metacarpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_ring_middle"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_ring_middle"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_ring_proximal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_ring_proximal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_scapula"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_scapula"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_thumb_distal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_thumb_distal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_thumb_metacarpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_thumb_metacarpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_thumb_proximal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_thumb_proximal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_upperarm"))
          .addSites(new HAnimSite().setUSE("hanim_crotch_pt"))
          .addSites(new HAnimSite().setUSE("hanim_skull_tip"))
          .addSites(new HAnimSite().setUSE("hanim_sellion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_supramenton_pt"))
          .addSites(new HAnimSite().setUSE("hanim_nuchale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_suprasternale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_cervicale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_substernale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_rib10_midspine_pt"))
          .addSites(new HAnimSite().setUSE("hanim_waist_preferred_post_pt"))
          .addSites(new HAnimSite().setUSE("hanim_navel_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_acromion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_acromion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_asis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_asis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_axilla_ant_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_axilla_ant_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_axilla_post_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_axilla_post_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_calcaneous_post_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_calcaneous_post_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_clavicale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_clavicale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_dactylion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_dactylion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_digit2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_digit2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_femoral_lateral_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_femoral_lateral_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_femoral_medial_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_femoral_medial_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_forefoot_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_forefoot_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_gonion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_gonion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_humeral_lateral_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_humeral_lateral_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_humeral_medial_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_humeral_medial_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_iliocristale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_iliocristale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_index_distal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_index_distal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_infraorbitale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_infraorbitale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_knee_crease_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_knee_crease_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_lateral_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_lateral_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_medial_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_medial_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metacarpal_pha2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metacarpal_pha2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metacarpal_pha5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metacarpal_pha5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metatarsal_pha1_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metatarsal_pha1_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metatarsal_pha5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metatarsal_pha5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_middle_distal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_middle_distal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_neck_base_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_neck_base_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_olecranon_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_olecranon_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_pinky_distal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_pinky_distal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_psis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_psis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_radial_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_radial_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_radiale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_radiale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_rib10_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_rib10_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_ring_distal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_ring_distal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_temporomandibular_l_site_pt"))
          .addSites(new HAnimSite().setUSE("hanim_temporomandibular_r_site_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_sphyrion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_sphyrion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_thelion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_thelion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_thumb_distal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_thumb_distal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_tragion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_tragion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_trochanterion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_trochanterion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_ulnar_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_ulnar_styloid_pt")))
        .addChild(new Group().setDEF("StopAnimation")
          .addChild(new TimeSensor().setDEF("StopTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new PositionInterpolator().setDEF("Stop_humanoid_root_TranslationInterpolator").setKey(new MFFloat628().getArray()).setKeyValue(new MFVec3f629().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_humanoid_root_RotationInterpolator").setKey(new MFFloat630().getArray()).setKeyValue(new MFRotation631().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_sacroiliac_RotationInterpolator").setKey(new MFFloat632().getArray()).setKeyValue(new MFRotation633().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_hip_RotationInterpolator").setKey(new MFFloat634().getArray()).setKeyValue(new MFRotation635().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_knee_RotationInterpolator").setKey(new MFFloat636().getArray()).setKeyValue(new MFRotation637().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ankle_RotationInterpolator").setKey(new MFFloat638().getArray()).setKeyValue(new MFRotation639().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_subtalar_RotationInterpolator").setKey(new MFFloat640().getArray()).setKeyValue(new MFRotation641().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_midtarsal_RotationInterpolator").setKey(new MFFloat642().getArray()).setKeyValue(new MFRotation643().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_metatarsal_RotationInterpolator").setKey(new MFFloat644().getArray()).setKeyValue(new MFRotation645().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_hip_RotationInterpolator").setKey(new MFFloat646().getArray()).setKeyValue(new MFRotation647().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_knee_RotationInterpolator").setKey(new MFFloat648().getArray()).setKeyValue(new MFRotation649().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ankle_RotationInterpolator").setKey(new MFFloat650().getArray()).setKeyValue(new MFRotation651().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_subtalar_RotationInterpolator").setKey(new MFFloat652().getArray()).setKeyValue(new MFRotation653().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_midtarsal_RotationInterpolator").setKey(new MFFloat654().getArray()).setKeyValue(new MFRotation655().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_metatarsal_RotationInterpolator").setKey(new MFFloat656().getArray()).setKeyValue(new MFRotation657().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl5_RotationInterpolator").setKey(new MFFloat658().getArray()).setKeyValue(new MFRotation659().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl4_RotationInterpolator").setKey(new MFFloat660().getArray()).setKeyValue(new MFRotation661().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl3_RotationInterpolator").setKey(new MFFloat662().getArray()).setKeyValue(new MFRotation663().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl2_RotationInterpolator").setKey(new MFFloat664().getArray()).setKeyValue(new MFRotation665().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl1_RotationInterpolator").setKey(new MFFloat666().getArray()).setKeyValue(new MFRotation667().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt12_RotationInterpolator").setKey(new MFFloat668().getArray()).setKeyValue(new MFRotation669().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt11_RotationInterpolator").setKey(new MFFloat670().getArray()).setKeyValue(new MFRotation671().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt10_RotationInterpolator").setKey(new MFFloat672().getArray()).setKeyValue(new MFRotation673().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt9_RotationInterpolator").setKey(new MFFloat674().getArray()).setKeyValue(new MFRotation675().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt8_RotationInterpolator").setKey(new MFFloat676().getArray()).setKeyValue(new MFRotation677().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt7_RotationInterpolator").setKey(new MFFloat678().getArray()).setKeyValue(new MFRotation679().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt6_RotationInterpolator").setKey(new MFFloat680().getArray()).setKeyValue(new MFRotation681().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt5_RotationInterpolator").setKey(new MFFloat682().getArray()).setKeyValue(new MFRotation683().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt4_RotationInterpolator").setKey(new MFFloat684().getArray()).setKeyValue(new MFRotation685().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt3_RotationInterpolator").setKey(new MFFloat686().getArray()).setKeyValue(new MFRotation687().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt2_RotationInterpolator").setKey(new MFFloat688().getArray()).setKeyValue(new MFRotation689().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt1_RotationInterpolator").setKey(new MFFloat690().getArray()).setKeyValue(new MFRotation691().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc7_RotationInterpolator").setKey(new MFFloat692().getArray()).setKeyValue(new MFRotation693().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc6_RotationInterpolator").setKey(new MFFloat694().getArray()).setKeyValue(new MFRotation695().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc5_RotationInterpolator").setKey(new MFFloat696().getArray()).setKeyValue(new MFRotation697().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc4_RotationInterpolator").setKey(new MFFloat698().getArray()).setKeyValue(new MFRotation699().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc3_RotationInterpolator").setKey(new MFFloat700().getArray()).setKeyValue(new MFRotation701().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc2_RotationInterpolator").setKey(new MFFloat702().getArray()).setKeyValue(new MFRotation703().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc1_RotationInterpolator").setKey(new MFFloat704().getArray()).setKeyValue(new MFRotation705().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_skullbase_RotationInterpolator").setKey(new MFFloat706().getArray()).setKeyValue(new MFRotation707().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_eyeball_joint_RotationInterpolator").setKey(new MFFloat708().getArray()).setKeyValue(new MFRotation709().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_eyeball_joint_RotationInterpolator").setKey(new MFFloat710().getArray()).setKeyValue(new MFRotation711().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_sternoclavicular_RotationInterpolator").setKey(new MFFloat712().getArray()).setKeyValue(new MFRotation713().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_acromioclavicular_RotationInterpolator").setKey(new MFFloat714().getArray()).setKeyValue(new MFRotation715().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_shoulder_RotationInterpolator").setKey(new MFFloat716().getArray()).setKeyValue(new MFRotation717().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_elbow_RotationInterpolator").setKey(new MFFloat718().getArray()).setKeyValue(new MFRotation719().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_wrist_RotationInterpolator").setKey(new MFFloat720().getArray()).setKeyValue(new MFRotation721().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_thumb1_RotationInterpolator").setKey(new MFFloat722().getArray()).setKeyValue(new MFRotation723().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_thumb2_RotationInterpolator").setKey(new MFFloat724().getArray()).setKeyValue(new MFRotation725().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_thumb3_RotationInterpolator").setKey(new MFFloat726().getArray()).setKeyValue(new MFRotation727().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index0_RotationInterpolator").setKey(new MFFloat728().getArray()).setKeyValue(new MFRotation729().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index1_RotationInterpolator").setKey(new MFFloat730().getArray()).setKeyValue(new MFRotation731().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index2_RotationInterpolator").setKey(new MFFloat732().getArray()).setKeyValue(new MFRotation733().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index3_RotationInterpolator").setKey(new MFFloat734().getArray()).setKeyValue(new MFRotation735().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle0_RotationInterpolator").setKey(new MFFloat736().getArray()).setKeyValue(new MFRotation737().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle1_RotationInterpolator").setKey(new MFFloat738().getArray()).setKeyValue(new MFRotation739().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle2_RotationInterpolator").setKey(new MFFloat740().getArray()).setKeyValue(new MFRotation741().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle3_RotationInterpolator").setKey(new MFFloat742().getArray()).setKeyValue(new MFRotation743().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring0_RotationInterpolator").setKey(new MFFloat744().getArray()).setKeyValue(new MFRotation745().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring1_RotationInterpolator").setKey(new MFFloat746().getArray()).setKeyValue(new MFRotation747().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring2_RotationInterpolator").setKey(new MFFloat748().getArray()).setKeyValue(new MFRotation749().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring3_RotationInterpolator").setKey(new MFFloat750().getArray()).setKeyValue(new MFRotation751().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky0_RotationInterpolator").setKey(new MFFloat752().getArray()).setKeyValue(new MFRotation753().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky1_RotationInterpolator").setKey(new MFFloat754().getArray()).setKeyValue(new MFRotation755().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky2_RotationInterpolator").setKey(new MFFloat756().getArray()).setKeyValue(new MFRotation757().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky3_RotationInterpolator").setKey(new MFFloat758().getArray()).setKeyValue(new MFRotation759().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_sternoclavicular_RotationInterpolator").setKey(new MFFloat760().getArray()).setKeyValue(new MFRotation761().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_acromioclavicular_RotationInterpolator").setKey(new MFFloat762().getArray()).setKeyValue(new MFRotation763().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_shoulder_RotationInterpolator").setKey(new MFFloat764().getArray()).setKeyValue(new MFRotation765().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_elbow_RotationInterpolator").setKey(new MFFloat766().getArray()).setKeyValue(new MFRotation767().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_wrist_RotationInterpolator").setKey(new MFFloat768().getArray()).setKeyValue(new MFRotation769().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_thumb1_RotationInterpolator").setKey(new MFFloat770().getArray()).setKeyValue(new MFRotation771().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_thumb2_RotationInterpolator").setKey(new MFFloat772().getArray()).setKeyValue(new MFRotation773().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_thumb3_RotationInterpolator").setKey(new MFFloat774().getArray()).setKeyValue(new MFRotation775().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index0_RotationInterpolator").setKey(new MFFloat776().getArray()).setKeyValue(new MFRotation777().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index1_RotationInterpolator").setKey(new MFFloat778().getArray()).setKeyValue(new MFRotation779().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index2_RotationInterpolator").setKey(new MFFloat780().getArray()).setKeyValue(new MFRotation781().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index3_RotationInterpolator").setKey(new MFFloat782().getArray()).setKeyValue(new MFRotation783().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle0_RotationInterpolator").setKey(new MFFloat784().getArray()).setKeyValue(new MFRotation785().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle1_RotationInterpolator").setKey(new MFFloat786().getArray()).setKeyValue(new MFRotation787().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle2_RotationInterpolator").setKey(new MFFloat788().getArray()).setKeyValue(new MFRotation789().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle3_RotationInterpolator").setKey(new MFFloat790().getArray()).setKeyValue(new MFRotation791().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring0_RotationInterpolator").setKey(new MFFloat792().getArray()).setKeyValue(new MFRotation793().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring1_RotationInterpolator").setKey(new MFFloat794().getArray()).setKeyValue(new MFRotation795().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring2_RotationInterpolator").setKey(new MFFloat796().getArray()).setKeyValue(new MFRotation797().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring3_RotationInterpolator").setKey(new MFFloat798().getArray()).setKeyValue(new MFRotation799().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky0_RotationInterpolator").setKey(new MFFloat800().getArray()).setKeyValue(new MFRotation801().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky1_RotationInterpolator").setKey(new MFFloat802().getArray()).setKeyValue(new MFRotation803().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky2_RotationInterpolator").setKey(new MFFloat804().getArray()).setKeyValue(new MFRotation805().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky3_RotationInterpolator").setKey(new MFFloat806().getArray()).setKeyValue(new MFRotation807().getArray()))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_humanoid_root_TranslationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_humanoid_root_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_sacroiliac_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_hip_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_knee_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_ankle_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_subtalar_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_midtarsal_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_metatarsal_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_hip_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_knee_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_ankle_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_subtalar_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_midtarsal_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_metatarsal_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vl5_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vl4_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vl3_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vl2_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vl1_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt12_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt11_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt10_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt9_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt8_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt7_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt6_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt5_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt4_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt3_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt2_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt1_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vc7_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vc6_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vc5_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vc4_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vc3_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vc2_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vc1_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_skullbase_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_eyeball_joint_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_eyeball_joint_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_sternoclavicular_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_acromioclavicular_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_shoulder_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_elbow_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_wrist_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_thumb1_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_thumb2_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_thumb3_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_index0_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_index1_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_index2_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_index3_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_middle0_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_middle1_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_middle2_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_middle3_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_ring0_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_ring1_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_ring2_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_ring3_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_pinky0_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_pinky1_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_pinky2_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_pinky3_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_sternoclavicular_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_acromioclavicular_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_shoulder_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_elbow_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_wrist_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_thumb1_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_thumb2_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_thumb3_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_index0_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_index1_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_index2_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_index3_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_middle0_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_middle1_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_middle2_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_middle3_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_ring0_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_ring1_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_ring2_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_ring3_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_pinky0_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_pinky1_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_pinky2_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_pinky3_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_humanoid_root_TranslationInterpolator").setToField("translation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_humanoid_root_RotationInterpolator").setToField("rotation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_sacroiliac_RotationInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_hip_RotationInterpolator").setToField("rotation").setToNode("hanim_l_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_knee_RotationInterpolator").setToField("rotation").setToNode("hanim_l_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_ankle_RotationInterpolator").setToField("rotation").setToNode("hanim_l_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_subtalar_RotationInterpolator").setToField("rotation").setToNode("hanim_l_subtalar"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_midtarsal_RotationInterpolator").setToField("rotation").setToNode("hanim_l_midtarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_metatarsal_RotationInterpolator").setToField("rotation").setToNode("hanim_l_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_hip_RotationInterpolator").setToField("rotation").setToNode("hanim_r_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_knee_RotationInterpolator").setToField("rotation").setToNode("hanim_r_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_ankle_RotationInterpolator").setToField("rotation").setToNode("hanim_r_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_subtalar_RotationInterpolator").setToField("rotation").setToNode("hanim_r_subtalar"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_midtarsal_RotationInterpolator").setToField("rotation").setToNode("hanim_r_midtarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_metatarsal_RotationInterpolator").setToField("rotation").setToNode("hanim_r_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vl5_RotationInterpolator").setToField("rotation").setToNode("hanim_vl5"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vl4_RotationInterpolator").setToField("rotation").setToNode("hanim_vl4"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vl3_RotationInterpolator").setToField("rotation").setToNode("hanim_vl3"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vl2_RotationInterpolator").setToField("rotation").setToNode("hanim_vl2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vl1_RotationInterpolator").setToField("rotation").setToNode("hanim_vl1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vt12_RotationInterpolator").setToField("rotation").setToNode("hanim_vt12"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vt11_RotationInterpolator").setToField("rotation").setToNode("hanim_vt11"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vt10_RotationInterpolator").setToField("rotation").setToNode("hanim_vt10"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vt9_RotationInterpolator").setToField("rotation").setToNode("hanim_vt9"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vt8_RotationInterpolator").setToField("rotation").setToNode("hanim_vt8"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vt7_RotationInterpolator").setToField("rotation").setToNode("hanim_vt7"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vt6_RotationInterpolator").setToField("rotation").setToNode("hanim_vt6"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vt5_RotationInterpolator").setToField("rotation").setToNode("hanim_vt5"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vt4_RotationInterpolator").setToField("rotation").setToNode("hanim_vt4"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vt3_RotationInterpolator").setToField("rotation").setToNode("hanim_vt3"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vt2_RotationInterpolator").setToField("rotation").setToNode("hanim_vt2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vt1_RotationInterpolator").setToField("rotation").setToNode("hanim_vt1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vc7_RotationInterpolator").setToField("rotation").setToNode("hanim_vc7"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vc6_RotationInterpolator").setToField("rotation").setToNode("hanim_vc6"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vc5_RotationInterpolator").setToField("rotation").setToNode("hanim_vc5"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vc4_RotationInterpolator").setToField("rotation").setToNode("hanim_vc4"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vc3_RotationInterpolator").setToField("rotation").setToNode("hanim_vc3"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vc2_RotationInterpolator").setToField("rotation").setToNode("hanim_vc2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_vc1_RotationInterpolator").setToField("rotation").setToNode("hanim_vc1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_skullbase_RotationInterpolator").setToField("rotation").setToNode("hanim_skullbase"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_eyeball_joint_RotationInterpolator").setToField("rotation").setToNode("hanim_l_eyeball_joint"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_eyeball_joint_RotationInterpolator").setToField("rotation").setToNode("hanim_r_eyeball_joint"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_sternoclavicular_RotationInterpolator").setToField("rotation").setToNode("hanim_l_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_acromioclavicular_RotationInterpolator").setToField("rotation").setToNode("hanim_l_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_shoulder_RotationInterpolator").setToField("rotation").setToNode("hanim_l_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_elbow_RotationInterpolator").setToField("rotation").setToNode("hanim_l_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_wrist_RotationInterpolator").setToField("rotation").setToNode("hanim_l_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_thumb1_RotationInterpolator").setToField("rotation").setToNode("hanim_l_thumb1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_thumb2_RotationInterpolator").setToField("rotation").setToNode("hanim_l_thumb2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_thumb3_RotationInterpolator").setToField("rotation").setToNode("hanim_l_thumb3"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_index0_RotationInterpolator").setToField("rotation").setToNode("hanim_l_index0"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_index1_RotationInterpolator").setToField("rotation").setToNode("hanim_l_index1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_index2_RotationInterpolator").setToField("rotation").setToNode("hanim_l_index2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_index3_RotationInterpolator").setToField("rotation").setToNode("hanim_l_index3"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_middle0_RotationInterpolator").setToField("rotation").setToNode("hanim_l_middle0"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_middle1_RotationInterpolator").setToField("rotation").setToNode("hanim_l_middle1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_middle2_RotationInterpolator").setToField("rotation").setToNode("hanim_l_middle2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_middle3_RotationInterpolator").setToField("rotation").setToNode("hanim_l_middle3"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_ring0_RotationInterpolator").setToField("rotation").setToNode("hanim_l_ring0"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_ring1_RotationInterpolator").setToField("rotation").setToNode("hanim_l_ring1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_ring2_RotationInterpolator").setToField("rotation").setToNode("hanim_l_ring2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_ring3_RotationInterpolator").setToField("rotation").setToNode("hanim_l_ring3"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_pinky0_RotationInterpolator").setToField("rotation").setToNode("hanim_l_pinky0"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_pinky1_RotationInterpolator").setToField("rotation").setToNode("hanim_l_pinky1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_pinky2_RotationInterpolator").setToField("rotation").setToNode("hanim_l_pinky2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_l_pinky3_RotationInterpolator").setToField("rotation").setToNode("hanim_l_pinky3"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_sternoclavicular_RotationInterpolator").setToField("rotation").setToNode("hanim_r_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_acromioclavicular_RotationInterpolator").setToField("rotation").setToNode("hanim_r_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_shoulder_RotationInterpolator").setToField("rotation").setToNode("hanim_r_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_elbow_RotationInterpolator").setToField("rotation").setToNode("hanim_r_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_wrist_RotationInterpolator").setToField("rotation").setToNode("hanim_r_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_thumb1_RotationInterpolator").setToField("rotation").setToNode("hanim_r_thumb1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_thumb2_RotationInterpolator").setToField("rotation").setToNode("hanim_r_thumb2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_thumb3_RotationInterpolator").setToField("rotation").setToNode("hanim_r_thumb3"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_index0_RotationInterpolator").setToField("rotation").setToNode("hanim_r_index0"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_index1_RotationInterpolator").setToField("rotation").setToNode("hanim_r_index1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_index2_RotationInterpolator").setToField("rotation").setToNode("hanim_r_index2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_index3_RotationInterpolator").setToField("rotation").setToNode("hanim_r_index3"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_middle0_RotationInterpolator").setToField("rotation").setToNode("hanim_r_middle0"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_middle1_RotationInterpolator").setToField("rotation").setToNode("hanim_r_middle1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_middle2_RotationInterpolator").setToField("rotation").setToNode("hanim_r_middle2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_middle3_RotationInterpolator").setToField("rotation").setToNode("hanim_r_middle3"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_ring0_RotationInterpolator").setToField("rotation").setToNode("hanim_r_ring0"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_ring1_RotationInterpolator").setToField("rotation").setToNode("hanim_r_ring1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_ring2_RotationInterpolator").setToField("rotation").setToNode("hanim_r_ring2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_ring3_RotationInterpolator").setToField("rotation").setToNode("hanim_r_ring3"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_pinky0_RotationInterpolator").setToField("rotation").setToNode("hanim_r_pinky0"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_pinky1_RotationInterpolator").setToField("rotation").setToNode("hanim_r_pinky1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_pinky2_RotationInterpolator").setToField("rotation").setToNode("hanim_r_pinky2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stop_r_pinky3_RotationInterpolator").setToField("rotation").setToNode("hanim_r_pinky3")))
        .addChild(new Group().setDEF("StandAnimation")
          .addChild(new TimeSensor().setDEF("StandTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_metatarsal_PitchInterpolator").setKey(new MFFloat808().getArray()).setKeyValue(new MFRotation809().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_ankle_RotationInterpolator").setKey(new MFFloat810().getArray()).setKeyValue(new MFRotation811().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_knee_RotationInterpolator").setKey(new MFFloat812().getArray()).setKeyValue(new MFRotation813().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_hip_RotationInterpolator").setKey(new MFFloat814().getArray()).setKeyValue(new MFRotation815().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_ankle_RotationInterpolator").setKey(new MFFloat816().getArray()).setKeyValue(new MFRotation817().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_knee_RotationInterpolator").setKey(new MFFloat818().getArray()).setKeyValue(new MFRotation819().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_hip_RotationInterpolator").setKey(new MFFloat820().getArray()).setKeyValue(new MFRotation821().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_wrist_RotationInterpolator").setKey(new MFFloat822().getArray()).setKeyValue(new MFRotation823().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_elbow_RotationInterpolator").setKey(new MFFloat824().getArray()).setKeyValue(new MFRotation825().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_shoulder_RotationInterpolator").setKey(new MFFloat826().getArray()).setKeyValue(new MFRotation827().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_wrist_RotationInterpolator").setKey(new MFFloat828().getArray()).setKeyValue(new MFRotation829().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_elbow_RotationInterpolator").setKey(new MFFloat830().getArray()).setKeyValue(new MFRotation831().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_shoulder_RotationInterpolator").setKey(new MFFloat832().getArray()).setKeyValue(new MFRotation833().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_head_RotationInterpolator").setKey(new MFFloat834().getArray()).setKeyValue(new MFRotation835().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_neck_RotationInterpolator").setKey(new MFFloat836().getArray()).setKeyValue(new MFRotation837().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_eyeball_RotationInterpolator").setKey(new MFFloat838().getArray()).setKeyValue(new MFRotation839().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_eyeball_RotationInterpolator").setKey(new MFFloat840().getArray()).setKeyValue(new MFRotation841().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_lower_body_RotationInterpolator").setKey(new MFFloat842().getArray()).setKeyValue(new MFRotation843().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_upper_body_RotationInterpolator").setKey(new MFFloat844().getArray()).setKeyValue(new MFRotation845().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_whole_body_RotationInterpolator").setKey(new MFFloat846().getArray()).setKeyValue(new MFRotation847().getArray()))
          .addChild(new PositionInterpolator().setDEF("Stand_whole_body_TranslationInterpolator").setKey(new MFFloat848().getArray()).setKeyValue(new MFVec3f849().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_sternoclavicular_RollInterpolator").setKey(new MFFloat850().getArray()).setKeyValue(new MFRotation851().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_acromioclavicular_RollInterpolator").setKey(new MFFloat852().getArray()).setKeyValue(new MFRotation853().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_sternoclavicular_RollInterpolator").setKey(new MFFloat854().getArray()).setKeyValue(new MFRotation855().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_acromioclavicular_RollInterpolator").setKey(new MFFloat856().getArray()).setKeyValue(new MFRotation857().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_sacroiliac_YawInterpolator").setKey(new MFFloat858().getArray()).setKeyValue(new MFRotation859().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_vl5_YawInterpolator").setKey(new MFFloat860().getArray()).setKeyValue(new MFRotation861().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_vc6_YawInterpolator").setKey(new MFFloat862().getArray()).setKeyValue(new MFRotation863().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_thumb1_PitchInterpolator").setKey(new MFFloat864().getArray()).setKeyValue(new MFRotation865().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_thumb1_PitchInterpolator").setKey(new MFFloat866().getArray()).setKeyValue(new MFRotation867().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_index1_RollInterpolator").setKey(new MFFloat868().getArray()).setKeyValue(new MFRotation869().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_index2_RollInterpolator").setKey(new MFFloat870().getArray()).setKeyValue(new MFRotation871().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_index3_RollInterpolator").setKey(new MFFloat872().getArray()).setKeyValue(new MFRotation873().getArray()))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_ankle_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_knee_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_hip_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_ankle_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_knee_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_hip_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_lower_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_wrist_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_elbow_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_shoulder_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_wrist_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_elbow_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_shoulder_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_head_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_neck_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_eyeball_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_eyeball_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_upper_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_whole_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_whole_body_TranslationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_metatarsal_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_sacroiliac_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_vl5_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_vc6_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_index1_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_index2_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_index3_RollInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_ankle_RotationInterpolator").setToField("rotation").setToNode("hanim_r_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_knee_RotationInterpolator").setToField("rotation").setToNode("hanim_r_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_hip_RotationInterpolator").setToField("rotation").setToNode("hanim_r_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_l_ankle_RotationInterpolator").setToField("rotation").setToNode("hanim_l_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_l_knee_RotationInterpolator").setToField("rotation").setToNode("hanim_l_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_l_hip_RotationInterpolator").setToField("rotation").setToNode("hanim_l_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_wrist_RotationInterpolator").setToField("rotation").setToNode("hanim_r_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_elbow_RotationInterpolator").setToField("rotation").setToNode("hanim_r_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_shoulder_RotationInterpolator").setToField("rotation").setToNode("hanim_r_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_l_wrist_RotationInterpolator").setToField("rotation").setToNode("hanim_l_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_l_elbow_RotationInterpolator").setToField("rotation").setToNode("hanim_l_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_l_shoulder_RotationInterpolator").setToField("rotation").setToNode("hanim_l_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_head_RotationInterpolator").setToField("rotation").setToNode("hanim_skullbase"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_neck_RotationInterpolator").setToField("rotation").setToNode("hanim_vc7"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_l_eyeball_RotationInterpolator").setToField("rotation").setToNode("hanim_l_eyeball_joint"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_eyeball_RotationInterpolator").setToField("rotation").setToNode("hanim_r_eyeball_joint"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_upper_body_RotationInterpolator").setToField("rotation").setToNode("hanim_vl1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_lower_body_RotationInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_whole_body_RotationInterpolator").setToField("rotation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_whole_body_TranslationInterpolator").setToField("translation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_l_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_l_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_l_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_r_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_sacroiliac_YawInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_vl5_YawInterpolator").setToField("rotation").setToNode("hanim_vl5"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_vc6_YawInterpolator").setToField("rotation").setToNode("hanim_vc6"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_l_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_l_thumb1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_r_thumb1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_index1_RollInterpolator").setToField("rotation").setToNode("hanim_r_index1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_index2_RollInterpolator").setToField("rotation").setToNode("hanim_r_index2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_index3_RollInterpolator").setToField("rotation").setToNode("hanim_r_index3"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_index1_RollInterpolator").setToField("rotation").setToNode("hanim_r_middle1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_index2_RollInterpolator").setToField("rotation").setToNode("hanim_r_middle2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_index3_RollInterpolator").setToField("rotation").setToNode("hanim_r_middle3"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_index1_RollInterpolator").setToField("rotation").setToNode("hanim_r_ring1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_index2_RollInterpolator").setToField("rotation").setToNode("hanim_r_ring2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_index3_RollInterpolator").setToField("rotation").setToNode("hanim_r_ring3"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_index1_RollInterpolator").setToField("rotation").setToNode("hanim_r_pinky1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_index2_RollInterpolator").setToField("rotation").setToNode("hanim_r_pinky2"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Stand_r_index3_RollInterpolator").setToField("rotation").setToNode("hanim_r_pinky3")))
        .addChild(new Group().setDEF("PitchesAnimation")
          .addChild(new TimeSensor().setDEF("PitchTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_metatarsal_PitchInterpolator").setKey(new MFFloat874().getArray()).setKeyValue(new MFRotation875().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_ankle_RotationInterpolator").setKey(new MFFloat876().getArray()).setKeyValue(new MFRotation877().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_knee_RotationInterpolator").setKey(new MFFloat878().getArray()).setKeyValue(new MFRotation879().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_hip_RotationInterpolator").setKey(new MFFloat880().getArray()).setKeyValue(new MFRotation881().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_ankle_RotationInterpolator").setKey(new MFFloat882().getArray()).setKeyValue(new MFRotation883().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_knee_RotationInterpolator").setKey(new MFFloat884().getArray()).setKeyValue(new MFRotation885().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_hip_RotationInterpolator").setKey(new MFFloat886().getArray()).setKeyValue(new MFRotation887().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_wrist_RotationInterpolator").setKey(new MFFloat888().getArray()).setKeyValue(new MFRotation889().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_elbow_RotationInterpolator").setKey(new MFFloat890().getArray()).setKeyValue(new MFRotation891().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_shoulder_RotationInterpolator").setKey(new MFFloat892().getArray()).setKeyValue(new MFRotation893().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_wrist_RotationInterpolator").setKey(new MFFloat894().getArray()).setKeyValue(new MFRotation895().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_elbow_RotationInterpolator").setKey(new MFFloat896().getArray()).setKeyValue(new MFRotation897().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_shoulder_RotationInterpolator").setKey(new MFFloat898().getArray()).setKeyValue(new MFRotation899().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_head_RotationInterpolator").setKey(new MFFloat900().getArray()).setKeyValue(new MFRotation901().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_neck_RotationInterpolator").setKey(new MFFloat902().getArray()).setKeyValue(new MFRotation903().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_lower_body_RotationInterpolator").setKey(new MFFloat904().getArray()).setKeyValue(new MFRotation905().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_upper_body_RotationInterpolator").setKey(new MFFloat906().getArray()).setKeyValue(new MFRotation907().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_whole_body_RotationInterpolator").setKey(new MFFloat908().getArray()).setKeyValue(new MFRotation909().getArray()))
          .addChild(new PositionInterpolator().setDEF("Pitches_whole_body_TranslationInterpolator").setKey(new MFFloat910().getArray()).setKeyValue(new MFVec3f911().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_l_sternoclavicular_RollInterpolator").setKey(new MFFloat912().getArray()).setKeyValue(new MFRotation913().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_l_acromioclavicular_RollInterpolator").setKey(new MFFloat914().getArray()).setKeyValue(new MFRotation915().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_sternoclavicular_RollInterpolator").setKey(new MFFloat916().getArray()).setKeyValue(new MFRotation917().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_acromioclavicular_RollInterpolator").setKey(new MFFloat918().getArray()).setKeyValue(new MFRotation919().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_sacroiliac_YawInterpolator").setKey(new MFFloat920().getArray()).setKeyValue(new MFRotation921().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_vl5_YawInterpolator").setKey(new MFFloat922().getArray()).setKeyValue(new MFRotation923().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_vc6_YawInterpolator").setKey(new MFFloat924().getArray()).setKeyValue(new MFRotation925().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_l_thumb1_PitchInterpolator").setKey(new MFFloat926().getArray()).setKeyValue(new MFRotation927().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_thumb1_PitchInterpolator").setKey(new MFFloat928().getArray()).setKeyValue(new MFRotation929().getArray()))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_r_ankle_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_r_knee_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_r_hip_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_l_ankle_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_l_knee_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_l_hip_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_lower_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_r_wrist_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_r_elbow_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_r_shoulder_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_l_wrist_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_l_elbow_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_l_shoulder_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_head_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_neck_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_upper_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_whole_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_whole_body_TranslationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_l_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_l_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_r_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_r_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_r_metatarsal_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_sacroiliac_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_vl5_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_vc6_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_l_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_r_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_r_ankle_RotationInterpolator").setToField("rotation").setToNode("hanim_r_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_r_knee_RotationInterpolator").setToField("rotation").setToNode("hanim_r_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_r_hip_RotationInterpolator").setToField("rotation").setToNode("hanim_r_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_l_ankle_RotationInterpolator").setToField("rotation").setToNode("hanim_l_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_l_knee_RotationInterpolator").setToField("rotation").setToNode("hanim_l_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_l_hip_RotationInterpolator").setToField("rotation").setToNode("hanim_l_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_lower_body_RotationInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_r_wrist_RotationInterpolator").setToField("rotation").setToNode("hanim_r_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_r_elbow_RotationInterpolator").setToField("rotation").setToNode("hanim_r_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_r_shoulder_RotationInterpolator").setToField("rotation").setToNode("hanim_r_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_l_wrist_RotationInterpolator").setToField("rotation").setToNode("hanim_l_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_l_elbow_RotationInterpolator").setToField("rotation").setToNode("hanim_l_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_l_shoulder_RotationInterpolator").setToField("rotation").setToNode("hanim_l_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_head_RotationInterpolator").setToField("rotation").setToNode("hanim_skullbase"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_neck_RotationInterpolator").setToField("rotation").setToNode("hanim_vc4"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_upper_body_RotationInterpolator").setToField("rotation").setToNode("hanim_vl1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_whole_body_RotationInterpolator").setToField("rotation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitches_whole_body_TranslationInterpolator").setToField("translation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitch_l_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitch_l_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitch_r_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitch_r_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitch_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_l_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitch_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_r_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitch_sacroiliac_YawInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitch_vl5_YawInterpolator").setToField("rotation").setToNode("hanim_vl5"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitch_vc6_YawInterpolator").setToField("rotation").setToNode("hanim_vc6"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitch_l_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_l_thumb1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Pitch_r_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_r_thumb1")))
        .addChild(new Group().setDEF("YawsAnimation")
          .addChild(new TimeSensor().setDEF("YawTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_metatarsal_PitchInterpolator").setKey(new MFFloat930().getArray()).setKeyValue(new MFRotation931().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_ankle_RotationInterpolator").setKey(new MFFloat932().getArray()).setKeyValue(new MFRotation933().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_knee_RotationInterpolator").setKey(new MFFloat934().getArray()).setKeyValue(new MFRotation935().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_hip_RotationInterpolator").setKey(new MFFloat936().getArray()).setKeyValue(new MFRotation937().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_ankle_RotationInterpolator").setKey(new MFFloat938().getArray()).setKeyValue(new MFRotation939().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_knee_RotationInterpolator").setKey(new MFFloat940().getArray()).setKeyValue(new MFRotation941().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_hip_RotationInterpolator").setKey(new MFFloat942().getArray()).setKeyValue(new MFRotation943().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_wrist_RotationInterpolator").setKey(new MFFloat944().getArray()).setKeyValue(new MFRotation945().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_elbow_RotationInterpolator").setKey(new MFFloat946().getArray()).setKeyValue(new MFRotation947().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_shoulder_RotationInterpolator").setKey(new MFFloat948().getArray()).setKeyValue(new MFRotation949().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_wrist_RotationInterpolator").setKey(new MFFloat950().getArray()).setKeyValue(new MFRotation951().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_elbow_RotationInterpolator").setKey(new MFFloat952().getArray()).setKeyValue(new MFRotation953().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_shoulder_RotationInterpolator").setKey(new MFFloat954().getArray()).setKeyValue(new MFRotation955().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_head_RotationInterpolator").setKey(new MFFloat956().getArray()).setKeyValue(new MFRotation957().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_neck_RotationInterpolator").setKey(new MFFloat958().getArray()).setKeyValue(new MFRotation959().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_upper_body_RotationInterpolator").setKey(new MFFloat960().getArray()).setKeyValue(new MFRotation961().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_lower_body_RotationInterpolator").setKey(new MFFloat962().getArray()).setKeyValue(new MFRotation963().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_whole_body_RotationInterpolator").setKey(new MFFloat964().getArray()).setKeyValue(new MFRotation965().getArray()))
          .addChild(new PositionInterpolator().setDEF("Yaws_whole_body_TranslationInterpolator").setKey(new MFFloat966().getArray()).setKeyValue(new MFVec3f967().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_l_sternoclavicular_RollInterpolator").setKey(new MFFloat968().getArray()).setKeyValue(new MFRotation969().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_l_acromioclavicular_RollInterpolator").setKey(new MFFloat970().getArray()).setKeyValue(new MFRotation971().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_sternoclavicular_RollInterpolator").setKey(new MFFloat972().getArray()).setKeyValue(new MFRotation973().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_acromioclavicular_RollInterpolator").setKey(new MFFloat974().getArray()).setKeyValue(new MFRotation975().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_sacroiliac_YawInterpolator").setKey(new MFFloat976().getArray()).setKeyValue(new MFRotation977().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_vl5_YawInterpolator").setKey(new MFFloat978().getArray()).setKeyValue(new MFRotation979().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_vc6_YawInterpolator").setKey(new MFFloat980().getArray()).setKeyValue(new MFRotation981().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_l_thumb1_PitchInterpolator").setKey(new MFFloat982().getArray()).setKeyValue(new MFRotation983().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_thumb1_PitchInterpolator").setKey(new MFFloat984().getArray()).setKeyValue(new MFRotation985().getArray()))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_r_ankle_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_r_knee_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_r_hip_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_l_ankle_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_l_knee_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_l_hip_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_lower_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_r_wrist_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_r_elbow_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_r_shoulder_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_l_wrist_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_l_elbow_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_l_shoulder_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_head_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_neck_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_upper_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_whole_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_whole_body_TranslationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_l_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_l_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_r_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_r_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_r_metatarsal_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_sacroiliac_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_vl5_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_vc6_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_l_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_r_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_r_ankle_RotationInterpolator").setToField("rotation").setToNode("hanim_r_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_r_knee_RotationInterpolator").setToField("rotation").setToNode("hanim_r_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_r_hip_RotationInterpolator").setToField("rotation").setToNode("hanim_r_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_l_ankle_RotationInterpolator").setToField("rotation").setToNode("hanim_l_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_l_knee_RotationInterpolator").setToField("rotation").setToNode("hanim_l_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_l_hip_RotationInterpolator").setToField("rotation").setToNode("hanim_l_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_lower_body_RotationInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_r_wrist_RotationInterpolator").setToField("rotation").setToNode("hanim_r_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_r_elbow_RotationInterpolator").setToField("rotation").setToNode("hanim_r_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_r_shoulder_RotationInterpolator").setToField("rotation").setToNode("hanim_r_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_l_wrist_RotationInterpolator").setToField("rotation").setToNode("hanim_l_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_l_elbow_RotationInterpolator").setToField("rotation").setToNode("hanim_l_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_l_shoulder_RotationInterpolator").setToField("rotation").setToNode("hanim_l_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_head_RotationInterpolator").setToField("rotation").setToNode("hanim_skullbase"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_neck_RotationInterpolator").setToField("rotation").setToNode("hanim_vc4"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_upper_body_RotationInterpolator").setToField("rotation").setToNode("hanim_vl1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_whole_body_RotationInterpolator").setToField("rotation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaws_whole_body_TranslationInterpolator").setToField("translation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaw_l_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaw_l_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaw_r_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaw_r_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaw_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_l_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaw_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_r_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaw_sacroiliac_YawInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaw_vl5_YawInterpolator").setToField("rotation").setToNode("hanim_vl5"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaw_vc6_YawInterpolator").setToField("rotation").setToNode("hanim_vc6"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaw_l_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_l_thumb1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Yaw_r_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_r_thumb1")))
        .addChild(new Group().setDEF("RollsAnimation")
          .addChild(new TimeSensor().setDEF("RollTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_metatarsal_PitchInterpolator").setKey(new MFFloat986().getArray()).setKeyValue(new MFRotation987().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_ankle_RotationInterpolator").setKey(new MFFloat988().getArray()).setKeyValue(new MFRotation989().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_knee_RotationInterpolator").setKey(new MFFloat990().getArray()).setKeyValue(new MFRotation991().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_hip_RotationInterpolator").setKey(new MFFloat992().getArray()).setKeyValue(new MFRotation993().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_ankle_RotationInterpolator").setKey(new MFFloat994().getArray()).setKeyValue(new MFRotation995().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_knee_RotationInterpolator").setKey(new MFFloat996().getArray()).setKeyValue(new MFRotation997().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_hip_RotationInterpolator").setKey(new MFFloat998().getArray()).setKeyValue(new MFRotation999().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_wrist_RotationInterpolator").setKey(new MFFloat1000().getArray()).setKeyValue(new MFRotation1001().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_elbow_RotationInterpolator").setKey(new MFFloat1002().getArray()).setKeyValue(new MFRotation1003().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_shoulder_RotationInterpolator").setKey(new MFFloat1004().getArray()).setKeyValue(new MFRotation1005().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_wrist_RotationInterpolator").setKey(new MFFloat1006().getArray()).setKeyValue(new MFRotation1007().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_elbow_RotationInterpolator").setKey(new MFFloat1008().getArray()).setKeyValue(new MFRotation1009().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_shoulder_RotationInterpolator").setKey(new MFFloat1010().getArray()).setKeyValue(new MFRotation1011().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_head_RotationInterpolator").setKey(new MFFloat1012().getArray()).setKeyValue(new MFRotation1013().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_neck_RotationInterpolator").setKey(new MFFloat1014().getArray()).setKeyValue(new MFRotation1015().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_lower_body_RotationInterpolator").setKey(new MFFloat1016().getArray()).setKeyValue(new MFRotation1017().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_upper_body_RotationInterpolator").setKey(new MFFloat1018().getArray()).setKeyValue(new MFRotation1019().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_whole_body_RotationInterpolator").setKey(new MFFloat1020().getArray()).setKeyValue(new MFRotation1021().getArray()))
          .addChild(new PositionInterpolator().setDEF("Rolls_whole_body_TranslationInterpolator").setKey(new MFFloat1022().getArray()).setKeyValue(new MFVec3f1023().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_l_sternoclavicular_RollInterpolator").setKey(new MFFloat1024().getArray()).setKeyValue(new MFRotation1025().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_l_acromioclavicular_RollInterpolator").setKey(new MFFloat1026().getArray()).setKeyValue(new MFRotation1027().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_sternoclavicular_RollInterpolator").setKey(new MFFloat1028().getArray()).setKeyValue(new MFRotation1029().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_acromioclavicular_RollInterpolator").setKey(new MFFloat1030().getArray()).setKeyValue(new MFRotation1031().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_sacroiliac_YawInterpolator").setKey(new MFFloat1032().getArray()).setKeyValue(new MFRotation1033().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_vl5_YawInterpolator").setKey(new MFFloat1034().getArray()).setKeyValue(new MFRotation1035().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_vc6_YawInterpolator").setKey(new MFFloat1036().getArray()).setKeyValue(new MFRotation1037().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_l_thumb1_PitchInterpolator").setKey(new MFFloat1038().getArray()).setKeyValue(new MFRotation1039().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_thumb1_PitchInterpolator").setKey(new MFFloat1040().getArray()).setKeyValue(new MFRotation1041().getArray()))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_r_ankle_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_r_knee_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_r_hip_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_l_ankle_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_l_knee_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_l_hip_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_lower_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_r_wrist_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_r_elbow_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_r_shoulder_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_l_wrist_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_l_elbow_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_l_shoulder_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_head_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_neck_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_upper_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_whole_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_whole_body_TranslationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_l_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_l_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_r_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_r_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_r_metatarsal_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_sacroiliac_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_vl5_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_vc6_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_l_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_r_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_r_ankle_RotationInterpolator").setToField("rotation").setToNode("hanim_r_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_r_knee_RotationInterpolator").setToField("rotation").setToNode("hanim_r_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_r_hip_RotationInterpolator").setToField("rotation").setToNode("hanim_r_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_l_ankle_RotationInterpolator").setToField("rotation").setToNode("hanim_l_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_l_knee_RotationInterpolator").setToField("rotation").setToNode("hanim_l_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_l_hip_RotationInterpolator").setToField("rotation").setToNode("hanim_l_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_lower_body_RotationInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_r_wrist_RotationInterpolator").setToField("rotation").setToNode("hanim_r_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_r_elbow_RotationInterpolator").setToField("rotation").setToNode("hanim_r_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_r_shoulder_RotationInterpolator").setToField("rotation").setToNode("hanim_r_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_l_wrist_RotationInterpolator").setToField("rotation").setToNode("hanim_l_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_l_elbow_RotationInterpolator").setToField("rotation").setToNode("hanim_l_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_l_shoulder_RotationInterpolator").setToField("rotation").setToNode("hanim_l_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_head_RotationInterpolator").setToField("rotation").setToNode("hanim_skullbase"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_neck_RotationInterpolator").setToField("rotation").setToNode("hanim_vc4"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_upper_body_RotationInterpolator").setToField("rotation").setToNode("hanim_vl1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_whole_body_RotationInterpolator").setToField("rotation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Rolls_whole_body_TranslationInterpolator").setToField("translation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Roll_l_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Roll_l_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Roll_r_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Roll_r_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Roll_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_l_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Roll_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_r_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Roll_sacroiliac_YawInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Roll_vl5_YawInterpolator").setToField("rotation").setToNode("hanim_vl5"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Roll_vc6_YawInterpolator").setToField("rotation").setToNode("hanim_vc6"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Roll_l_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_l_thumb1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Roll_r_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_r_thumb1")))
        .addChild(new Group().setDEF("WalkAnimation")
          .addChild(new TimeSensor().setDEF("WalkTimer").setCycleInterval(1.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_metatarsal_PitchInterpolator").setKey(new MFFloat1042().getArray()).setKeyValue(new MFRotation1043().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_ankle_RotationInterpolator").setKey(new MFFloat1044().getArray()).setKeyValue(new MFRotation1045().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_knee_RotationInterpolator").setKey(new MFFloat1046().getArray()).setKeyValue(new MFRotation1047().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_hip_RotationInterpolator").setKey(new MFFloat1048().getArray()).setKeyValue(new MFRotation1049().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_ankle_RotationInterpolator").setKey(new MFFloat1050().getArray()).setKeyValue(new MFRotation1051().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_knee_RotationInterpolator").setKey(new MFFloat1052().getArray()).setKeyValue(new MFRotation1053().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_hip_RotationInterpolator").setKey(new MFFloat1054().getArray()).setKeyValue(new MFRotation1055().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_lower_body_RotationInterpolator").setKey(new MFFloat1056().getArray()).setKeyValue(new MFRotation1057().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_wrist_RotationInterpolator").setKey(new MFFloat1058().getArray()).setKeyValue(new MFRotation1059().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_elbow_RotationInterpolator").setKey(new MFFloat1060().getArray()).setKeyValue(new MFRotation1061().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_shoulder_RotationInterpolator").setKey(new MFFloat1062().getArray()).setKeyValue(new MFRotation1063().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_wrist_RotationInterpolator").setKey(new MFFloat1064().getArray()).setKeyValue(new MFRotation1065().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_elbow_RotationInterpolator").setKey(new MFFloat1066().getArray()).setKeyValue(new MFRotation1067().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_shoulder_RotationInterpolator").setKey(new MFFloat1068().getArray()).setKeyValue(new MFRotation1069().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_head_RotationInterpolator").setKey(new MFFloat1070().getArray()).setKeyValue(new MFRotation1071().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_neck_RotationInterpolator").setKey(new MFFloat1072().getArray()).setKeyValue(new MFRotation1073().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_upper_body_RotationInterpolator").setKey(new MFFloat1074().getArray()).setKeyValue(new MFRotation1075().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_whole_body_RotationInterpolator").setKey(new MFFloat1076().getArray()).setKeyValue(new MFRotation1077().getArray()))
          .addChild(new PositionInterpolator().setDEF("Walk_whole_body_TranslationInterpolator").setKey(new MFFloat1078().getArray()).setKeyValue(new MFVec3f1079().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_sternoclavicular_RollInterpolator").setKey(new MFFloat1080().getArray()).setKeyValue(new MFRotation1081().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_acromioclavicular_RollInterpolator").setKey(new MFFloat1082().getArray()).setKeyValue(new MFRotation1083().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_sternoclavicular_RollInterpolator").setKey(new MFFloat1084().getArray()).setKeyValue(new MFRotation1085().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_acromioclavicular_RollInterpolator").setKey(new MFFloat1086().getArray()).setKeyValue(new MFRotation1087().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_sacroiliac_YawInterpolator").setKey(new MFFloat1088().getArray()).setKeyValue(new MFRotation1089().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_vl5_YawInterpolator").setKey(new MFFloat1090().getArray()).setKeyValue(new MFRotation1091().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_vc6_YawInterpolator").setKey(new MFFloat1092().getArray()).setKeyValue(new MFRotation1093().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_thumb1_PitchInterpolator").setKey(new MFFloat1094().getArray()).setKeyValue(new MFRotation1095().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_thumb1_PitchInterpolator").setKey(new MFFloat1096().getArray()).setKeyValue(new MFRotation1097().getArray()))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_ankle_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_knee_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_hip_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_ankle_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_knee_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_hip_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_lower_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_wrist_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_elbow_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_shoulder_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_wrist_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_elbow_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_shoulder_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_head_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_neck_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_upper_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_whole_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_whole_body_TranslationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_metatarsal_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_sacroiliac_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_vl5_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_vc6_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_r_ankle_RotationInterpolator").setToField("rotation").setToNode("hanim_r_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_r_knee_RotationInterpolator").setToField("rotation").setToNode("hanim_r_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_r_hip_RotationInterpolator").setToField("rotation").setToNode("hanim_r_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_l_ankle_RotationInterpolator").setToField("rotation").setToNode("hanim_l_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_l_knee_RotationInterpolator").setToField("rotation").setToNode("hanim_l_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_l_hip_RotationInterpolator").setToField("rotation").setToNode("hanim_l_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_lower_body_RotationInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_r_wrist_RotationInterpolator").setToField("rotation").setToNode("hanim_r_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_r_elbow_RotationInterpolator").setToField("rotation").setToNode("hanim_r_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_r_shoulder_RotationInterpolator").setToField("rotation").setToNode("hanim_r_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_l_wrist_RotationInterpolator").setToField("rotation").setToNode("hanim_l_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_l_elbow_RotationInterpolator").setToField("rotation").setToNode("hanim_l_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_l_shoulder_RotationInterpolator").setToField("rotation").setToNode("hanim_l_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_head_RotationInterpolator").setToField("rotation").setToNode("hanim_skullbase"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_neck_RotationInterpolator").setToField("rotation").setToNode("hanim_vc4"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_upper_body_RotationInterpolator").setToField("rotation").setToNode("hanim_vl1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_whole_body_RotationInterpolator").setToField("rotation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_whole_body_TranslationInterpolator").setToField("translation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_l_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_l_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_r_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_r_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_l_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_r_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_sacroiliac_YawInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_vl5_YawInterpolator").setToField("rotation").setToNode("hanim_vl5"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_vc6_YawInterpolator").setToField("rotation").setToNode("hanim_vc6"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_l_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_l_thumb1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Walk_r_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_r_thumb1")))
        .addChild(new Group().setDEF("RunAnimation")
          .addChild(new TimeSensor().setDEF("RunTimer").setCycleInterval(0.9d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Run_r_metatarsal_PitchInterpolator").setKey(new MFFloat1098().getArray()).setKeyValue(new MFRotation1099().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_hip_RotationInterpolator_Run").setKey(new MFFloat1100().getArray()).setKeyValue(new MFRotation1101().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_knee_RotationInterpolator_Run").setKey(new MFFloat1102().getArray()).setKeyValue(new MFRotation1103().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_ankle_RotationInterpolator_Run").setKey(new MFFloat1104().getArray()).setKeyValue(new MFRotation1105().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_hip_RotationInterpolator_Run").setKey(new MFFloat1106().getArray()).setKeyValue(new MFRotation1107().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_knee_RotationInterpolator_Run").setKey(new MFFloat1108().getArray()).setKeyValue(new MFRotation1109().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_ankle_RotationInterpolator_Run").setKey(new MFFloat1110().getArray()).setKeyValue(new MFRotation1111().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_shoulder_RotationInterpolator_Run").setKey(new MFFloat1112().getArray()).setKeyValue(new MFRotation1113().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_elbow_RotationInterpolator_Run").setKey(new MFFloat1114().getArray()).setKeyValue(new MFRotation1115().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_wrist_RotationInterpolator_Run").setKey(new MFFloat1116().getArray()).setKeyValue(new MFRotation1117().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_shoulder_RotationInterpolator_Run").setKey(new MFFloat1118().getArray()).setKeyValue(new MFRotation1119().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_elbow_RotationInterpolator_Run").setKey(new MFFloat1120().getArray()).setKeyValue(new MFRotation1121().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_wrist_RotationInterpolator_Run").setKey(new MFFloat1122().getArray()).setKeyValue(new MFRotation1123().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_lower_body_RotationInterpolator_Run").setKey(new MFFloat1124().getArray()).setKeyValue(new MFRotation1125().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_head_RotationInterpolator_Run").setKey(new MFFloat1126().getArray()).setKeyValue(new MFRotation1127().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_neck_RotationInterpolator_Run").setKey(new MFFloat1128().getArray()).setKeyValue(new MFRotation1129().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_upper_body_RotationInterpolator_Run").setKey(new MFFloat1130().getArray()).setKeyValue(new MFRotation1131().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_whole_body_RotationInterpolator_Run").setKey(new MFFloat1132().getArray()).setKeyValue(new MFRotation1133().getArray()))
          .addChild(new PositionInterpolator().setDEF("Run_whole_body_TranslationInterpolator_Run").setKey(new MFFloat1134().getArray()).setKeyValue(new MFVec3f1135().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_sternoclavicular_RollInterpolator").setKey(new MFFloat1136().getArray()).setKeyValue(new MFRotation1137().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_acromioclavicular_RollInterpolator").setKey(new MFFloat1138().getArray()).setKeyValue(new MFRotation1139().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_sternoclavicular_RollInterpolator").setKey(new MFFloat1140().getArray()).setKeyValue(new MFRotation1141().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_acromioclavicular_RollInterpolator").setKey(new MFFloat1142().getArray()).setKeyValue(new MFRotation1143().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_sacroiliac_YawInterpolator").setKey(new MFFloat1144().getArray()).setKeyValue(new MFRotation1145().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_vl5_YawInterpolator").setKey(new MFFloat1146().getArray()).setKeyValue(new MFRotation1147().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_vc6_YawInterpolator").setKey(new MFFloat1148().getArray()).setKeyValue(new MFRotation1149().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_thumb1_PitchInterpolator").setKey(new MFFloat1150().getArray()).setKeyValue(new MFRotation1151().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_thumb1_PitchInterpolator").setKey(new MFFloat1152().getArray()).setKeyValue(new MFRotation1153().getArray()))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_ankle_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_knee_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_hip_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_ankle_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_knee_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_hip_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_lower_body_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_wrist_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_elbow_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_shoulder_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_wrist_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_elbow_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_shoulder_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_head_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_neck_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_upper_body_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_whole_body_RotationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_whole_body_TranslationInterpolator_Run"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_metatarsal_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_sacroiliac_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_vl5_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_vc6_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_r_ankle_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_r_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_r_knee_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_r_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_r_hip_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_r_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_l_ankle_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_l_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_l_knee_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_l_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_l_hip_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_l_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_r_wrist_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_r_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_r_elbow_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_r_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_r_shoulder_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_r_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_l_wrist_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_l_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_l_elbow_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_l_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_l_shoulder_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_l_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_lower_body_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_head_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_skullbase"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_neck_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_vc4"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_upper_body_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_vl1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_whole_body_RotationInterpolator_Run").setToField("rotation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_whole_body_TranslationInterpolator_Run").setToField("translation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_l_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_l_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_r_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_r_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_l_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_r_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_sacroiliac_YawInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_vl5_YawInterpolator").setToField("rotation").setToNode("hanim_vl5"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_vc6_YawInterpolator").setToField("rotation").setToNode("hanim_vc6"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_l_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_l_thumb1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Run_r_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_r_thumb1")))
        .addChild(new Group().setDEF("JumpAnimation")
          .addChild(new TimeSensor().setDEF("JumpTimer").setCycleInterval(3.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_metatarsal_PitchInterpolator").setKey(new MFFloat1154().getArray()).setKeyValue(new MFRotation1155().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_ankle_RotationInterpolator").setKey(new MFFloat1156().getArray()).setKeyValue(new MFRotation1157().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_knee_RotationInterpolator").setKey(new MFFloat1158().getArray()).setKeyValue(new MFRotation1159().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_hip_RotationInterpolator").setKey(new MFFloat1160().getArray()).setKeyValue(new MFRotation1161().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_ankle_RotationInterpolator").setKey(new MFFloat1162().getArray()).setKeyValue(new MFRotation1163().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_knee_RotationInterpolator").setKey(new MFFloat1164().getArray()).setKeyValue(new MFRotation1165().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_hip_RotationInterpolator").setKey(new MFFloat1166().getArray()).setKeyValue(new MFRotation1167().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_lower_body_RotationInterpolator").setKey(new MFFloat1168().getArray()).setKeyValue(new MFRotation1169().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_wrist_RotationInterpolator").setKey(new MFFloat1170().getArray()).setKeyValue(new MFRotation1171().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_elbow_RotationInterpolator").setKey(new MFFloat1172().getArray()).setKeyValue(new MFRotation1173().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_shoulder_RotationInterpolator").setKey(new MFFloat1174().getArray()).setKeyValue(new MFRotation1175().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_wrist_RotationInterpolator").setKey(new MFFloat1176().getArray()).setKeyValue(new MFRotation1177().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_elbow_RotationInterpolator").setKey(new MFFloat1178().getArray()).setKeyValue(new MFRotation1179().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_shoulder_RotationInterpolator").setKey(new MFFloat1180().getArray()).setKeyValue(new MFRotation1181().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_head_RotationInterpolator").setKey(new MFFloat1182().getArray()).setKeyValue(new MFRotation1183().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_neck_RotationInterpolator").setKey(new MFFloat1184().getArray()).setKeyValue(new MFRotation1185().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_upper_body_RotationInterpolator").setKey(new MFFloat1186().getArray()).setKeyValue(new MFRotation1187().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_whole_body_RotationInterpolator").setKey(new MFFloat1188().getArray()).setKeyValue(new MFRotation1189().getArray()))
          .addChild(new PositionInterpolator().setDEF("Jump_whole_body_TranslationInterpolator").setKey(new MFFloat1190().getArray()).setKeyValue(new MFVec3f1191().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_sternoclavicular_RollInterpolator").setKey(new MFFloat1192().getArray()).setKeyValue(new MFRotation1193().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_acromioclavicular_RollInterpolator").setKey(new MFFloat1194().getArray()).setKeyValue(new MFRotation1195().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_sternoclavicular_RollInterpolator").setKey(new MFFloat1196().getArray()).setKeyValue(new MFRotation1197().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_acromioclavicular_RollInterpolator").setKey(new MFFloat1198().getArray()).setKeyValue(new MFRotation1199().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_sacroiliac_YawInterpolator").setKey(new MFFloat1200().getArray()).setKeyValue(new MFRotation1201().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_vl5_YawInterpolator").setKey(new MFFloat1202().getArray()).setKeyValue(new MFRotation1203().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_vc6_YawInterpolator").setKey(new MFFloat1204().getArray()).setKeyValue(new MFRotation1205().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_thumb1_PitchInterpolator").setKey(new MFFloat1206().getArray()).setKeyValue(new MFRotation1207().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_thumb1_PitchInterpolator").setKey(new MFFloat1208().getArray()).setKeyValue(new MFRotation1209().getArray()))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_ankle_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_knee_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_hip_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_ankle_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_knee_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_hip_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_lower_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_wrist_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_elbow_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_shoulder_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_wrist_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_elbow_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_shoulder_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_head_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_neck_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_upper_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_whole_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_whole_body_TranslationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_metatarsal_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_sacroiliac_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_vl5_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_vc6_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_r_ankle_RotationInterpolator").setToField("rotation").setToNode("hanim_r_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_r_knee_RotationInterpolator").setToField("rotation").setToNode("hanim_r_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_r_hip_RotationInterpolator").setToField("rotation").setToNode("hanim_r_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_l_ankle_RotationInterpolator").setToField("rotation").setToNode("hanim_l_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_l_knee_RotationInterpolator").setToField("rotation").setToNode("hanim_l_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_l_hip_RotationInterpolator").setToField("rotation").setToNode("hanim_l_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_lower_body_RotationInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_r_wrist_RotationInterpolator").setToField("rotation").setToNode("hanim_r_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_r_elbow_RotationInterpolator").setToField("rotation").setToNode("hanim_r_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_r_shoulder_RotationInterpolator").setToField("rotation").setToNode("hanim_r_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_l_wrist_RotationInterpolator").setToField("rotation").setToNode("hanim_l_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_l_elbow_RotationInterpolator").setToField("rotation").setToNode("hanim_l_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_l_shoulder_RotationInterpolator").setToField("rotation").setToNode("hanim_l_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_head_RotationInterpolator").setToField("rotation").setToNode("hanim_skullbase"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_neck_RotationInterpolator").setToField("rotation").setToNode("hanim_vc4"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_upper_body_RotationInterpolator").setToField("rotation").setToNode("hanim_vl1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_whole_body_RotationInterpolator").setToField("rotation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_whole_body_TranslationInterpolator").setToField("translation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_l_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_l_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_r_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_r_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_l_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_r_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_sacroiliac_YawInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_vl5_YawInterpolator").setToField("rotation").setToNode("hanim_vl5"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_vc6_YawInterpolator").setToField("rotation").setToNode("hanim_vc6"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_l_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_l_thumb1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Jump_r_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_r_thumb1")))
        .addChild(new Group().setDEF("KickAnimation")
          .addChild(new TimeSensor().setDEF("KickTimer").setCycleInterval(3.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_sternoclavicular_RollInterpolator").setKey(new MFFloat1210().getArray()).setKeyValue(new MFRotation1211().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_acromioclavicular_RollInterpolator").setKey(new MFFloat1212().getArray()).setKeyValue(new MFRotation1213().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_shoulder_RollInterpolator").setKey(new MFFloat1214().getArray()).setKeyValue(new MFRotation1215().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_ForeArm_PitchInterpolator").setKey(new MFFloat1216().getArray()).setKeyValue(new MFRotation1217().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_wrist_RollInterpolator").setKey(new MFFloat1218().getArray()).setKeyValue(new MFRotation1219().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_thumb1_PitchInterpolator").setKey(new MFFloat1220().getArray()).setKeyValue(new MFRotation1221().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_sternoclavicular_RollInterpolator").setKey(new MFFloat1222().getArray()).setKeyValue(new MFRotation1223().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_acromioclavicular_RollInterpolator").setKey(new MFFloat1224().getArray()).setKeyValue(new MFRotation1225().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_shoulder_RollInterpolator").setKey(new MFFloat1226().getArray()).setKeyValue(new MFRotation1227().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_ForeArm_PitchInterpolator").setKey(new MFFloat1228().getArray()).setKeyValue(new MFRotation1229().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_wrist_RollInterpolator").setKey(new MFFloat1230().getArray()).setKeyValue(new MFRotation1231().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_thumb1_PitchInterpolator").setKey(new MFFloat1232().getArray()).setKeyValue(new MFRotation1233().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_hip_PitchInterpolator").setKey(new MFFloat1234().getArray()).setKeyValue(new MFRotation1235().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_knee_PitchInterpolator").setKey(new MFFloat1236().getArray()).setKeyValue(new MFRotation1237().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_hip_PitchInterpolator").setKey(new MFFloat1238().getArray()).setKeyValue(new MFRotation1239().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_knee_PitchInterpolator").setKey(new MFFloat1240().getArray()).setKeyValue(new MFRotation1241().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_ankle_PitchInterpolator").setKey(new MFFloat1242().getArray()).setKeyValue(new MFRotation1243().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_metatarsal_PitchInterpolator").setKey(new MFFloat1244().getArray()).setKeyValue(new MFRotation1245().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_sacroiliac_YawInterpolator").setKey(new MFFloat1246().getArray()).setKeyValue(new MFRotation1247().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_vl5_YawInterpolator").setKey(new MFFloat1248().getArray()).setKeyValue(new MFRotation1249().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_vc6_YawInterpolator").setKey(new MFFloat1250().getArray()).setKeyValue(new MFRotation1251().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_lower_body_RotationInterpolator").setKey(new MFFloat1252().getArray()).setKeyValue(new MFRotation1253().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_upper_body_RotationInterpolator").setKey(new MFFloat1254().getArray()).setKeyValue(new MFRotation1255().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_whole_body_RotationInterpolator").setKey(new MFFloat1256().getArray()).setKeyValue(new MFRotation1257().getArray()))
          .addChild(new PositionInterpolator().setDEF("Kick_whole_body_TranslationInterpolator").setKey(new MFFloat1258().getArray()).setKeyValue(new MFVec3f1259().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_neck_RotationInterpolator").setKey(new MFFloat1260().getArray()).setKeyValue(new MFRotation1261().getArray()))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_shoulder_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_ForeArm_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_wrist_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_sternoclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_acromioclavicular_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_shoulder_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_ForeArm_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_wrist_RollInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_thumb1_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_hip_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_knee_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_hip_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_knee_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_ankle_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_metatarsal_PitchInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_sacroiliac_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_vl5_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_vc6_YawInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_lower_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_upper_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_whole_body_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_whole_body_TranslationInterpolator"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_neck_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_l_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_l_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_l_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_l_shoulder_RollInterpolator").setToField("rotation").setToNode("hanim_l_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_l_ForeArm_PitchInterpolator").setToField("rotation").setToNode("hanim_l_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_l_wrist_RollInterpolator").setToField("rotation").setToNode("hanim_l_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_l_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_l_thumb1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_r_sternoclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_sternoclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_r_acromioclavicular_RollInterpolator").setToField("rotation").setToNode("hanim_r_acromioclavicular"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_r_shoulder_RollInterpolator").setToField("rotation").setToNode("hanim_r_shoulder"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_r_ForeArm_PitchInterpolator").setToField("rotation").setToNode("hanim_r_elbow"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_r_wrist_RollInterpolator").setToField("rotation").setToNode("hanim_r_wrist"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_r_thumb1_PitchInterpolator").setToField("rotation").setToNode("hanim_r_thumb1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_r_hip_PitchInterpolator").setToField("rotation").setToNode("hanim_r_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_r_knee_PitchInterpolator").setToField("rotation").setToNode("hanim_r_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_r_ankle_PitchInterpolator").setToField("rotation").setToNode("hanim_r_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_r_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_l_hip_PitchInterpolator").setToField("rotation").setToNode("hanim_l_hip"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_l_knee_PitchInterpolator").setToField("rotation").setToNode("hanim_l_knee"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_r_ankle_PitchInterpolator").setToField("rotation").setToNode("hanim_l_ankle"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_r_metatarsal_PitchInterpolator").setToField("rotation").setToNode("hanim_l_metatarsal"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_sacroiliac_YawInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_vl5_YawInterpolator").setToField("rotation").setToNode("hanim_vl5"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_vc6_YawInterpolator").setToField("rotation").setToNode("hanim_vc6"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_upper_body_RotationInterpolator").setToField("rotation").setToNode("hanim_vl1"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_lower_body_RotationInterpolator").setToField("rotation").setToNode("hanim_sacroiliac"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_whole_body_RotationInterpolator").setToField("rotation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_whole_body_TranslationInterpolator").setToField("translation").setToNode("hanim_humanoid_root"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("Kick_neck_RotationInterpolator").setToField("rotation").setToNode("hanim_vc4")))
        .addChild(new Group().setDEF("UserInterface")
          .addComments("Authoring hint: these axes are aligned within local coordinate system")
          .addChild(new Transform().setDEF("CoordinateAxesAdjustedScale").setScale(new float[] {0.175f,0.175f,0.175f})
            .addChild(new Inline().setDEF("CoordinateAxes").setUrl(new MFString1262().getArray())))
          .addChild(new Transform().setDEF("cordsys").setScale(new float[] {0.175f,0.175f,0.175f})
            .addComments("<Inline bboxCenter='0.05143541 0.07883984 0.04731131' bboxSize='2.202872 2.25768 2.194624' url='\"JointCoordinateAxes.x3dv\"'/>"))
          .addChild(new ProximitySensor().setDEF("HudProximitySensor").setCenter(new float[] {0f,20f,0f}).setSize(new float[] {500f,100f,500f}))
          .addChild(new Transform().setDEF("Stage").setScale(new float[] {1f,0.0125f,1f}).setTranslation(new float[] {0f,-0.0125f,0f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setTransparency(0.6f)))
              .setGeometry(new Box()))
            .addChild(new Transform().setDEF("Circle0").setScale(new float[] {1.175f,1f,1.175f})
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0.9f,0f,0.7f}).setEmissiveColor(new float[] {0.424956f,0.483976f,1f})))
                .setGeometry(new IndexedLineSet().setDEF("Orbit1").setCoordIndex(new MFInt321263().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f1264().getArray())))))
            .addChild(new Transform().setDEF("Circle1").setScale(new float[] {0.5f,1f,0.5f})
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0.9f,0f,0.7f}).setEmissiveColor(new float[] {0.424956f,0.483976f,1f})))
                .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
            .addChild(new Transform().setDEF("Circle2").setScale(new float[] {0.25f,1f,0.25f})
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0.9f,0f,0.7f}).setEmissiveColor(new float[] {0.424956f,0.483976f,1f})))
                .setGeometry(new IndexedLineSet().setUSE("Orbit1")))))
          .addChild(new Transform().setDEF("HudXform").setRotation(new float[] {-0.09996068f,0.9942513f,0.03837026f,0.7131352f}).setTranslation(new float[] {1.705442f,1.042139f,1.989742f})
            .addChild(new Transform().setScale(new float[] {0.035f,0.035f,0.035f}).setTranslation(new float[] {-0.42f,-0.2f,-0.75f})
              .addChild(new Transform().setDEF("StandTransform").setTranslation(new float[] {0f,-1f,0f})
                .addChild(new TouchSensor().setDEF("Stand_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("StandTextShape")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("text_color").setAmbientIntensity(1f).setDiffuseColor(new float[] {0.819f,0.521f,0.169f}).setEmissiveColor(new float[] {0.819f,0.521f,0.169f}).setSpecularColor(new float[] {0.819f,0.521f,0.169f})))
                  .setGeometry(new Text().setString(new MFString1265().getArray())))
                .addChild(new Shape().setDEF("Stand_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("Clear").setAmbientIntensity(1f).setDiffuseColor(new float[] {0f,0.5f,0f}).setEmissiveColor(new float[] {0f,0.5f,0f}).setTransparency(0.8f)))
                  .setGeometry(new IndexedFaceSet().setDEF("Backing").setCoordIndex(new MFInt321266().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f1267().getArray())))))
              .addChild(new Transform().setDEF("PitchTransform").setTranslation(new float[] {3f,-1f,0f})
                .addChild(new TouchSensor().setDEF("Pitch_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("PitchTextShape")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1268().getArray())))
                .addChild(new Shape().setDEF("Pitch_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("YawTransform").setTranslation(new float[] {6f,-1f,0f})
                .addChild(new TouchSensor().setDEF("Yaw_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("YawText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1269().getArray())))
                .addChild(new Shape().setDEF("Yaw_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("RollTransform").setTranslation(new float[] {9f,-1f,0f})
                .addChild(new TouchSensor().setDEF("Roll_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("_RollInterpolator")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1270().getArray())))
                .addChild(new Shape().setDEF("Roll_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("WalkTransform").setTranslation(new float[] {12f,-1f,0f})
                .addChild(new TouchSensor().setDEF("Walk_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("WalkText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1271().getArray())))
                .addChild(new Shape().setDEF("Walk_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("RunTransform").setTranslation(new float[] {15f,-1f,0f})
                .addChild(new TouchSensor().setDEF("Run_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("RunText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1272().getArray())))
                .addChild(new Shape().setDEF("Run_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("JumpTransform").setTranslation(new float[] {18f,-1f,0f})
                .addChild(new TouchSensor().setDEF("Jump_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("Jump")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1273().getArray())))
                .addChild(new Shape().setDEF("Jump_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("KickTransform").setTranslation(new float[] {21f,-1f,0f})
                .addChild(new TouchSensor().setDEF("Kick_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("KickText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1274().getArray())))
                .addChild(new Shape().setDEF("Kick_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Stop_Text").setTranslation(new float[] {0f,1.4f,0f})
                .addChild(new TouchSensor().setDEF("Stop_Touch").setDescription("touch to select"))
                .addChild(new Shape().setDEF("StopText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1275().getArray())))
                .addChild(new Shape().setDEF("Stop_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))))
          .addChild(new ROUTE().setFromField("position_changed").setFromNode("HudProximitySensor").setToField("translation").setToNode("HudXform"))
          .addChild(new ROUTE().setFromField("orientation_changed").setFromNode("HudProximitySensor").setToField("rotation").setToNode("HudXform")))
        .addChild(new Group().setDEF("BehaviorSynchronization")
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stand_Touch").setToField("stopTime").setToNode("PitchTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stand_Touch").setToField("stopTime").setToNode("YawTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stand_Touch").setToField("stopTime").setToNode("RollTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stand_Touch").setToField("stopTime").setToNode("WalkTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stand_Touch").setToField("stopTime").setToNode("RunTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stand_Touch").setToField("stopTime").setToNode("JumpTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stand_Touch").setToField("stopTime").setToNode("KickTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stand_Touch").setToField("stopTime").setToNode("StopTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stand_Touch").setToField("startTime").setToNode("StandTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("stopTime").setToNode("StandTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("stopTime").setToNode("YawTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("stopTime").setToNode("RollTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("stopTime").setToNode("WalkTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("stopTime").setToNode("RunTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("stopTime").setToNode("JumpTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("stopTime").setToNode("KickTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("stopTime").setToNode("StopTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("startTime").setToNode("PitchTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("stopTime").setToNode("StandTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("stopTime").setToNode("PitchTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("stopTime").setToNode("RollTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("stopTime").setToNode("WalkTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("stopTime").setToNode("RunTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("stopTime").setToNode("JumpTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("stopTime").setToNode("KickTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("stopTime").setToNode("StopTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("startTime").setToNode("YawTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Walk_Touch").setToField("stopTime").setToNode("StandTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Walk_Touch").setToField("stopTime").setToNode("PitchTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Walk_Touch").setToField("stopTime").setToNode("YawTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Walk_Touch").setToField("stopTime").setToNode("RollTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Walk_Touch").setToField("stopTime").setToNode("RunTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Walk_Touch").setToField("stopTime").setToNode("JumpTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Walk_Touch").setToField("stopTime").setToNode("KickTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Walk_Touch").setToField("stopTime").setToNode("StopTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Walk_Touch").setToField("startTime").setToNode("WalkTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Roll_Touch").setToField("stopTime").setToNode("StandTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Roll_Touch").setToField("stopTime").setToNode("PitchTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Roll_Touch").setToField("stopTime").setToNode("YawTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Roll_Touch").setToField("stopTime").setToNode("WalkTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Roll_Touch").setToField("stopTime").setToNode("RunTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Roll_Touch").setToField("stopTime").setToNode("JumpTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Roll_Touch").setToField("stopTime").setToNode("KickTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Roll_Touch").setToField("stopTime").setToNode("StopTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Roll_Touch").setToField("startTime").setToNode("RollTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Run_Touch").setToField("stopTime").setToNode("StandTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Run_Touch").setToField("stopTime").setToNode("PitchTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Run_Touch").setToField("stopTime").setToNode("YawTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Run_Touch").setToField("stopTime").setToNode("RollTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Run_Touch").setToField("stopTime").setToNode("WalkTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Run_Touch").setToField("stopTime").setToNode("JumpTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Run_Touch").setToField("stopTime").setToNode("KickTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Run_Touch").setToField("stopTime").setToNode("StopTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Run_Touch").setToField("startTime").setToNode("RunTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Jump_Touch").setToField("stopTime").setToNode("StandTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Jump_Touch").setToField("stopTime").setToNode("PitchTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Jump_Touch").setToField("stopTime").setToNode("YawTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Jump_Touch").setToField("stopTime").setToNode("RollTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Jump_Touch").setToField("stopTime").setToNode("WalkTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Jump_Touch").setToField("stopTime").setToNode("RunTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Jump_Touch").setToField("stopTime").setToNode("KickTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Jump_Touch").setToField("stopTime").setToNode("StopTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Jump_Touch").setToField("startTime").setToNode("JumpTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Kick_Touch").setToField("stopTime").setToNode("StandTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Kick_Touch").setToField("stopTime").setToNode("PitchTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Kick_Touch").setToField("stopTime").setToNode("YawTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Kick_Touch").setToField("stopTime").setToNode("RollTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Kick_Touch").setToField("stopTime").setToNode("WalkTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Kick_Touch").setToField("stopTime").setToNode("RunTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Kick_Touch").setToField("stopTime").setToNode("JumpTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Kick_Touch").setToField("stopTime").setToNode("StopTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Kick_Touch").setToField("startTime").setToNode("KickTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stop_Touch").setToField("stopTime").setToNode("StandTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stop_Touch").setToField("stopTime").setToNode("PitchTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stop_Touch").setToField("stopTime").setToNode("YawTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stop_Touch").setToField("stopTime").setToNode("RollTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stop_Touch").setToField("stopTime").setToNode("WalkTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stop_Touch").setToField("stopTime").setToNode("RunTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stop_Touch").setToField("stopTime").setToNode("JumpTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stop_Touch").setToField("stopTime").setToNode("KickTimer"))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("Stop_Touch").setToField("startTime").setToNode("StopTimer"))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.3f,0.3f,0.3f});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=1.0","height=1.7504"});
  }
}
protected class MFFloat3 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat4 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt325 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f6 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.824f,0.0277f,0f,0.9149f,0.0016f});
  }
}
protected class MFColorRGBA7 {
  protected org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f,1f,0f,1f,1f,1f,0f,0.1f});
  }
}
protected class MFInt328 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f9 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.824f,0.0277f,0.0028f,1.0568f,-0.0776f});
  }
}
protected class MFFloat10 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat11 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3212 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f13 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0961f,0.9124f,-0.0001f});
  }
}
protected class MFInt3214 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f15 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.0961f,0.9124f,-0.0001f});
  }
}
protected class MFInt3216 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f17 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.1525f,1.0628f,0.0035f});
  }
}
protected class MFColorRGBA18 {
  protected org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f,0f,0f,1f,1f,0f,0f,0.1f});
  }
}
protected class MFInt3219 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f20 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.1689f,0.8419f,0.0352f});
  }
}
protected class MFInt3221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f22 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.1612f,1.0537f,0.0008f});
  }
}
protected class MFInt3223 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f24 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.1677f,0.8336f,0.0303f});
  }
}
protected class MFInt3225 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f26 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.0887f,1.0021f,0.1112f});
  }
}
protected class MFInt3227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f28 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0925f,0.9983f,0.1052f});
  }
}
protected class MFInt3229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f30 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.0716f,1.019f,-0.1138f});
  }
}
protected class MFInt3231 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f32 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0774f,1.019f,-0.1151f});
  }
}
protected class MFInt3233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f34 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0034f,0.8266f,0.0257f});
  }
}
protected class MFInt3235 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f36 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.008f,0f,-0.008f,0f,0f,0f,0f,0.008f,0.008f,0f,0f,0f,0f,-0.008f,0f,-0.008f,0f});
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
protected class MFInt3241 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f42 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.0993f,0.4881f,-0.0309f});
  }
}
protected class MFInt3243 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f44 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.1598f,0.4967f,0.0297f});
  }
}
protected class MFInt3245 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f46 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.0398f,0.4946f,0.0303f});
  }
}
protected class MFFloat47 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat48 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3249 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f50 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.104f,0.4867f,0.0308f,0.1101f,0.0656f,-0.0736f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.1086f,0.0001f,-0.0368f});
  }
}
protected class MFInt3255 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f56 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.1308f,0.0597f,-0.1032f});
  }
}
protected class MFInt3257 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f58 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.089f,0.0716f,-0.0881f});
  }
}
protected class MFInt3259 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f60 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.089f,0.0575f,-0.0943f});
  }
}
protected class MFInt3261 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f62 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.0974f,0.0259f,-0.1171f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0.0001f,-0.0368f,0.1086f,0.0001f,0.0368f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0.0001f,0.0368f,0.1086f,0f,0.0762f});
  }
}
protected class MFInt3271 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f72 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0.0001f,0.0368f,0.0816f,0.0232f,0.0106f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0f,0.0762f,0.1354f,0.0016f,0.1476f});
  }
}
protected class MFInt3277 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f78 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0f,0.0762f,0.1825f,0.007f,0.0928f});
  }
}
protected class MFInt3279 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f80 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0f,0.0762f,0.1195f,0.0079f,0.1433f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f,0.9124f,-0.0001f,-0.104f,0.4867f,0.0308f});
  }
}
protected class MFInt3285 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f86 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f,0.9124f,-0.0001f,-0.0825f,0.4932f,-0.0326f});
  }
}
protected class MFInt3287 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f88 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f,0.9124f,-0.0001f,-0.1421f,0.4992f,0.031f});
  }
}
protected class MFInt3289 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f90 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f,0.9124f,-0.0001f,-0.0221f,0.5014f,0.0289f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.104f,0.4867f,0.0308f,-0.1101f,0.0656f,-0.0736f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f,0.0656f,-0.0736f,-0.1086f,0.0001f,-0.0368f});
  }
}
protected class MFInt3299 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f100 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f,0.0656f,-0.0736f,-0.1006f,0.0658f,-0.1075f});
  }
}
protected class MFInt32101 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f102 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f,0.0656f,-0.0736f,-0.0591f,0.076f,-0.0928f});
  }
}
protected class MFInt32103 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f104 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f,0.0656f,-0.0736f,-0.0603f,0.061f,-0.1002f});
  }
}
protected class MFInt32105 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f106 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f,0.0656f,-0.0736f,-0.0692f,0.0297f,-0.1221f});
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
protected class MFInt32109 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f110 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0.0001f,-0.0368f,-0.1086f,0.0001f,0.0368f});
  }
}
protected class MFFloat111 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat112 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32113 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f114 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0.0001f,0.0368f,-0.1086f,0f,0.0762f});
  }
}
protected class MFInt32115 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f116 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0.0001f,0.0368f,-0.0521f,0.026f,0.0127f});
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
protected class MFInt32119 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f120 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0f,0.0762f,-0.1043f,0.0227f,0.145f});
  }
}
protected class MFInt32121 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f122 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0f,0.0762f,-0.1523f,0.0166f,0.0895f});
  }
}
protected class MFInt32123 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f124 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0f,0.0762f,-0.0883f,0.0134f,0.1383f});
  }
}
protected class MFFloat125 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat126 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32127 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f128 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f,1.0568f,-0.0776f,0.0035f,1.0925f,-0.0787f});
  }
}
protected class MFInt32129 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f130 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f,1.0568f,-0.0776f,0f,1.0915f,-0.1091f});
  }
}
protected class MFInt32131 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f132 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f,1.0568f,-0.0776f,0.0069f,1.0966f,0.1017f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0035f,1.0925f,-0.0787f,0.0041f,1.1276f,-0.0796f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0041f,1.1276f,-0.0796f,0.0045f,1.1546f,-0.08f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,0.0048f,1.1912f,-0.0805f});
  }
}
protected class MFInt32145 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f146 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,-0.0711f,1.1941f,0.1016f});
  }
}
protected class MFInt32147 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f148 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,0.0871f,1.1925f,0.0992f});
  }
}
protected class MFInt32149 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f150 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,0.0049f,1.1908f,-0.1113f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0048f,1.1912f,-0.0805f,0.0051f,1.2278f,-0.0808f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0051f,1.2278f,-0.0808f,0.0053f,1.2679f,-0.081f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f162 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0053f,1.2679f,-0.081f,0.0056f,1.2848f,-0.0822f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f166 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f,1.2848f,-0.0822f,0.0057f,1.3126f,-0.0838f});
  }
}
protected class MFInt32167 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f168 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f,1.2848f,-0.0822f,0.0085f,1.2995f,0.1147f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3126f,-0.0838f,0.0057f,1.3382f,-0.0845f});
  }
}
protected class MFInt32173 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f174 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3126f,-0.0838f,-0.0736f,1.3385f,0.1217f});
  }
}
protected class MFInt32175 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f176 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3126f,-0.0838f,0.0918f,1.3382f,0.1192f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3382f,-0.0845f,0.0058f,1.3625f,-0.0833f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f184 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0058f,1.3625f,-0.0833f,0.0059f,1.3866f,-0.08f});
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
protected class MFInt32187 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f188 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0059f,1.3866f,-0.08f,0.006f,1.4102f,-0.0745f});
  }
}
protected class MFFloat189 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat190 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32191 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f192 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.006f,1.4102f,-0.0745f,0.0061f,1.432f,-0.0675f});
  }
}
protected class MFFloat193 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat194 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32195 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f196 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0061f,1.432f,-0.0675f,0.0062f,1.4583f,-0.057f});
  }
}
protected class MFFloat197 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat198 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32199 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f200 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0062f,1.4583f,-0.057f,0.0063f,1.4761f,-0.0484f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0063f,1.4761f,-0.0484f,0.0065f,1.4951f,-0.0387f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0066f,1.5132f,-0.0301f});
  }
}
protected class MFInt32209 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f210 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.082f,1.4488f,-0.0353f});
  }
}
protected class MFInt32211 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f212 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,-0.082f,1.4488f,-0.0353f});
  }
}
protected class MFInt32213 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f214 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0084f,1.4714f,0.0551f});
  }
}
protected class MFInt32215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f216 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0064f,1.52f,-0.0815f});
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
protected class MFInt32219 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f220 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5132f,-0.0301f,0.0066f,1.5357f,-0.0143f});
  }
}
protected class MFInt32221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f222 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5132f,-0.0301f,-0.0419f,1.5149f,-0.022f});
  }
}
protected class MFInt32223 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f224 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5132f,-0.0301f,0.0646f,1.5141f,-0.038f});
  }
}
protected class MFFloat225 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat226 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f228 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5357f,-0.0143f,0.0066f,1.552f,-0.0082f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.552f,-0.0082f,0.0066f,1.5662f,-0.0084f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5662f,-0.0084f,0.0066f,1.58f,-0.0103f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.58f,-0.0103f,0.0066f,1.5928f,-0.0103f});
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
protected class MFInt32243 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f244 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5928f,-0.0103f,0.0066f,1.6144f,-0.0034f});
  }
}
protected class MFFloat245 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat246 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32247 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f248 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.6144f,-0.0034f,0.0044f,1.6209f,0.0236f});
  }
}
protected class MFFloat249 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat250 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32251 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f252 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0336f,1.6332f,0.0502f});
  }
}
protected class MFInt32253 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f254 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0336f,1.6332f,0.0502f});
  }
}
protected class MFInt32255 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f256 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0336f,1.635f,0.0506f});
  }
}
protected class MFInt32257 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f258 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0336f,1.6332f,0.0502f});
  }
}
protected class MFInt32259 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f260 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0336f,1.6332f,0.0502f});
  }
}
protected class MFInt32261 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f262 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0336f,1.635f,0.0506f});
  }
}
protected class MFInt32263 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f264 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1.63f,0.015f});
  }
}
protected class MFInt32265 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f266 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.005f,1.7504f,0.0055f});
  }
}
protected class MFInt32267 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f268 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0058f,1.6316f,0.0852f});
  }
}
protected class MFInt32269 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f270 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0237f,1.6171f,0.0752f});
  }
}
protected class MFInt32271 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f272 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0341f,1.6171f,0.0752f});
  }
}
protected class MFInt32273 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f274 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0061f,1.541f,0.0805f});
  }
}
protected class MFInt32275 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f276 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0646f,1.6347f,0.0302f});
  }
}
protected class MFInt32277 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f278 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.052f,1.5529f,0.0347f});
  }
}
protected class MFInt32279 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f280 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0739f,1.6348f,0.0282f});
  }
}
protected class MFInt32281 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f282 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0631f,1.553f,0.033f});
  }
}
protected class MFInt32283 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f284 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0039f,1.5972f,-0.0796f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0336f,1.6332f,0.0502f,0.034f,1.64f,0.05f});
  }
}
protected class MFColorRGBA289 {
  protected org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {0f,0f,1f,1f,0f,0f,1f,0.1f});
  }
}
protected class MFString290 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_eyeball_site_viewpoint"});
  }
}
protected class MFFloat291 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString292 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFInt32293 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f294 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.01f,0f,-0.01f,0f,0f,0f,0f,0.01f,0.01f,0f,0f,0f,0f,-0.01f,0f,-0.01f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0336f,1.6332f,0.0502f,-0.034f,1.64f,0.05f});
  }
}
protected class MFString303 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_r_eyeball_site_viewpoint"});
  }
}
protected class MFFloat304 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString305 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFFloat306 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFFloat311 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32312 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f313 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.63f,0.015f,0.045f,1.63f,0f});
  }
}
protected class MFInt32314 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f315 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.63f,0.015f,-0.045f,1.63f,0f});
  }
}
protected class MFFloat316 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat317 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32318 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f319 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.0962f,1.4269f,-0.0424f});
  }
}
protected class MFInt32320 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f321 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.0271f,1.4943f,0.0394f});
  }
}
protected class MFInt32322 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f323 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.2032f,1.476f,-0.049f});
  }
}
protected class MFInt32324 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f325 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.1777f,1.4065f,-0.0075f});
  }
}
protected class MFInt32326 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f327 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.1706f,1.4072f,-0.0875f});
  }
}
protected class MFFloat328 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat329 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32330 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f331 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0962f,1.4269f,-0.0424f,0.2029f,1.4376f,-0.0387f});
  }
}
protected class MFFloat332 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat333 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32334 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f335 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f,1.4376f,-0.0387f,0.2014f,1.1357f,-0.0682f});
  }
}
protected class MFInt32336 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f337 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f,1.4376f,-0.0387f,0.228f,1.1482f,-0.11f});
  }
}
protected class MFFloat338 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat339 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32340 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f341 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1984f,0.8663f,-0.0583f});
  }
}
protected class MFInt32342 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f343 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1901f,0.8645f,-0.0415f});
  }
}
protected class MFInt32344 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f345 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1962f,1.1375f,-0.1123f});
  }
}
protected class MFInt32346 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f347 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1735f,1.1272f,-0.1113f});
  }
}
protected class MFInt32348 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f349 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.2182f,1.1212f,-0.1167f});
  }
}
protected class MFFloat350 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat351 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32352 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f353 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1924f,0.8472f,-0.0534f});
  }
}
protected class MFInt32354 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f355 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1983f,0.8024f,-0.028f});
  }
}
protected class MFInt32356 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f357 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1987f,0.8029f,-0.053f});
  }
}
protected class MFInt32358 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f359 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1956f,0.8019f,-0.0794f});
  }
}
protected class MFInt32360 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f361 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1925f,0.8066f,-0.1036f});
  }
}
protected class MFInt32362 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f363 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.2009f,0.8139f,-0.0237f});
  }
}
protected class MFInt32364 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f365 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.2142f,0.8529f,-0.0648f});
  }
}
protected class MFInt32366 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f367 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1929f,0.786f,-0.1122f});
  }
}
protected class MFInt32368 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f369 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.3f,0.75f,0.45f});
  }
}
protected class MFString370 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_hand_front_viewpoint"});
  }
}
protected class MFFloat371 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString372 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1924f,0.8472f,-0.0534f,0.1951f,0.8226f,0.0246f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1951f,0.8226f,0.0246f,0.1955f,0.8159f,0.0464f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1955f,0.8159f,0.0464f,0.1982f,0.8061f,0.0759f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.8024f,-0.028f,0.1983f,0.7815f,-0.028f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.7815f,-0.028f,0.2017f,0.7363f,-0.0248f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2017f,0.7363f,-0.0248f,0.2028f,0.7139f,-0.0236f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2028f,0.7139f,-0.0236f,0.2089f,0.6858f,-0.0245f});
  }
}
protected class MFInt32401 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f402 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2028f,0.7139f,-0.0236f,0.2056f,0.6743f,-0.0482f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.8029f,-0.053f,0.1987f,0.7818f,-0.053f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.7818f,-0.053f,0.2013f,0.7273f,-0.0503f});
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
protected class MFInt32413 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f414 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2013f,0.7273f,-0.0503f,0.2026f,0.7011f,-0.0494f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2026f,0.7011f,-0.0494f,0.208f,0.6731f,-0.0491f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.8019f,-0.0794f,0.1956f,0.7815f,-0.0794f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.7815f,-0.0794f,0.1973f,0.7287f,-0.0777f});
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
protected class MFInt32429 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f430 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1973f,0.7287f,-0.0777f,0.1983f,0.7045f,-0.0767f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f434 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.7045f,-0.0767f,0.2035f,0.675f,-0.0756f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.8066f,-0.1036f,0.1925f,0.7866f,-0.1036f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.7866f,-0.1036f,0.1938f,0.7452f,-0.1024f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1938f,0.7452f,-0.1024f,0.1948f,0.7277f,-0.1017f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1948f,0.7277f,-0.1017f,0.2014f,0.7009f,-0.1012f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f,1.4488f,-0.0353f,-0.0962f,1.4269f,-0.0424f});
  }
}
protected class MFInt32455 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f456 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f,1.4488f,-0.0353f,-0.0115f,1.4943f,0.04f});
  }
}
protected class MFInt32457 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f458 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f,1.4488f,-0.0353f,-0.1905f,1.4791f,-0.0431f});
  }
}
protected class MFInt32459 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f460 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f,1.4488f,-0.0353f,-0.1626f,1.4072f,-0.0031f});
  }
}
protected class MFInt32461 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f462 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f,1.4488f,-0.0353f,-0.1603f,1.4098f,-0.0826f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0962f,1.4269f,-0.0424f,-0.2029f,1.4376f,-0.0387f});
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
protected class MFInt32469 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f470 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2029f,1.4376f,-0.0387f,-0.2014f,1.1357f,-0.0682f});
  }
}
protected class MFInt32471 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f472 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2029f,1.4376f,-0.0387f,-0.2224f,1.1517f,-0.1033f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f,1.1357f,-0.0682f,-0.1984f,0.8663f,-0.0583f});
  }
}
protected class MFInt32477 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f478 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f,1.1357f,-0.0682f,-0.1884f,0.8676f,-0.036f});
  }
}
protected class MFInt32479 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f480 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f,1.1357f,-0.0682f,-0.1907f,1.1405f,-0.1065f});
  }
}
protected class MFInt32481 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f482 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f,1.1357f,-0.0682f,-0.168f,1.1298f,-0.1062f});
  }
}
protected class MFInt32483 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f484 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f,1.1357f,-0.0682f,-0.213f,1.1305f,-0.1091f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1924f,0.8472f,-0.0534f});
  }
}
protected class MFInt32489 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f490 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1983f,0.8024f,-0.028f});
  }
}
protected class MFInt32491 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f492 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1987f,0.8029f,-0.053f});
  }
}
protected class MFInt32493 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f494 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1956f,0.8019f,-0.0794f});
  }
}
protected class MFInt32495 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f496 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1925f,0.8066f,-0.1036f});
  }
}
protected class MFInt32497 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f498 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1977f,0.8169f,-0.0177f});
  }
}
protected class MFInt32499 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f500 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.2117f,0.8562f,-0.0584f});
  }
}
protected class MFInt32501 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f502 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1929f,0.789f,-0.1064f});
  }
}
protected class MFInt32503 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f504 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.3f,0.75f,0.45f});
  }
}
protected class MFString505 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_r_hand_front_viewpoint"});
  }
}
protected class MFFloat506 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString507 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFFloat508 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat509 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32510 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f511 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1924f,0.8472f,-0.0534f,-0.1951f,0.8226f,0.0246f});
  }
}
protected class MFFloat512 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat513 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32514 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f515 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f,0.8226f,0.0246f,-0.1955f,0.8159f,0.0464f});
  }
}
protected class MFFloat516 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat517 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32518 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f519 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1955f,0.8159f,0.0464f,-0.1869f,0.809f,0.082f});
  }
}
protected class MFFloat520 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat521 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32522 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f523 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1983f,0.8024f,-0.028f,-0.1983f,0.7815f,-0.028f});
  }
}
protected class MFFloat524 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat525 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32526 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f527 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1983f,0.7815f,-0.028f,-0.2017f,0.7363f,-0.0248f});
  }
}
protected class MFFloat528 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat529 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32530 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f531 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2017f,0.7363f,-0.0248f,-0.2028f,0.7139f,-0.0236f});
  }
}
protected class MFFloat532 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat533 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32534 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f535 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2028f,0.7139f,-0.0236f,-0.198f,0.6883f,-0.018f});
  }
}
protected class MFInt32536 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f537 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2028f,0.7139f,-0.0236f,-0.1941f,0.6772f,-0.0423f});
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
protected class MFInt32540 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f541 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1987f,0.8029f,-0.053f,-0.1987f,0.7818f,-0.053f});
  }
}
protected class MFFloat542 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat543 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32544 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f545 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1987f,0.7818f,-0.053f,-0.2013f,0.7273f,-0.0503f});
  }
}
protected class MFFloat546 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat547 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32548 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f549 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2013f,0.7273f,-0.0503f,-0.2026f,0.7011f,-0.0494f});
  }
}
protected class MFFloat550 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat551 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32552 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f553 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2026f,0.7011f,-0.0494f,-0.1969f,0.6758f,-0.0427f});
  }
}
protected class MFFloat554 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat555 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32556 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f557 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1956f,0.8019f,-0.0794f,-0.1956f,0.7815f,-0.0794f});
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
protected class MFInt32560 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f561 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1956f,0.7815f,-0.0794f,-0.1973f,0.7287f,-0.0777f});
  }
}
protected class MFFloat562 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat563 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32564 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f565 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1973f,0.7287f,-0.0777f,-0.1983f,0.7045f,-0.0767f});
  }
}
protected class MFFloat566 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat567 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32568 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f569 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1983f,0.7045f,-0.0767f,-0.1934f,0.6778f,-0.0693f});
  }
}
protected class MFFloat570 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat571 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32572 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f573 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1925f,0.8066f,-0.1036f,-0.1925f,0.7866f,-0.1036f});
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
protected class MFInt32576 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f577 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1925f,0.7866f,-0.1036f,-0.1938f,0.7452f,-0.1024f});
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
protected class MFInt32580 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f581 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1938f,0.7452f,-0.1024f,-0.1948f,0.7277f,-0.1017f});
  }
}
protected class MFFloat582 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat583 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32584 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f585 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1948f,0.7277f,-0.1017f,-0.1938f,0.7035f,-0.0949f});
  }
}
protected class MFString586 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_inclined_viewpoint"});
  }
}
protected class MFFloat587 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString588 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString589 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_r_inclined_viewpoint"});
  }
}
protected class MFFloat590 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString591 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString592 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_front_viewpoint"});
  }
}
protected class MFFloat593 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString594 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString595 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_back_viewpoint"});
  }
}
protected class MFFloat596 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString597 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString598 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_side_viewpoint"});
  }
}
protected class MFFloat599 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString600 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString601 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_Top_viewpoint"});
  }
}
protected class MFFloat602 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString603 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString604 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_front_close_viewpoint"});
  }
}
protected class MFFloat605 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString606 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString607 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_side_close_viewpoint"});
  }
}
protected class MFFloat608 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString609 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString610 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_head_front_close_viewpoint"});
  }
}
protected class MFFloat611 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString612 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString613 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_chest_front_close_viewpoint"});
  }
}
protected class MFFloat614 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString615 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString616 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_pelvis_front_close_viewpoint"});
  }
}
protected class MFFloat617 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString618 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString619 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_knees_front_close_viewpoint"});
  }
}
protected class MFFloat620 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString621 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString622 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_feet_front_close_viewpoint"});
  }
}
protected class MFFloat623 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString624 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString625 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_eye_level_viewpoint"});
  }
}
protected class MFFloat626 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString627 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFFloat628 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFVec3f629 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat630 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation631 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat632 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation633 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat634 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation635 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat636 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation637 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat638 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation639 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat640 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation641 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat642 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation643 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat644 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation645 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat646 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation647 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat648 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation649 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat650 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation651 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat652 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation653 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat654 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation655 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat656 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation657 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat658 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation659 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat660 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation661 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat662 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation663 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat664 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation665 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat666 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation667 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat668 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation669 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat670 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation671 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat672 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation673 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat674 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation675 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat676 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation677 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat678 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation679 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat680 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation681 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat682 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation683 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat684 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation685 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat686 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation687 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat688 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation689 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat690 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation691 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat692 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation693 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat694 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation695 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat696 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation697 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat698 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation699 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat700 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation701 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat702 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation703 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat704 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation705 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat706 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation707 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat708 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation709 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat710 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation711 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat712 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation713 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat714 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation715 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat716 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation717 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat718 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation719 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat720 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation721 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat722 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation723 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat724 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation725 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat726 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation727 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat728 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation729 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat730 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation731 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat732 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation733 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat734 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation735 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat736 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation737 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat738 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation739 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat740 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation741 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat742 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation743 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat744 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation745 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat746 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation747 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat748 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation749 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat750 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation751 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat752 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation753 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat754 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation755 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat756 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation757 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat758 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation759 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat760 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation761 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat762 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation763 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat764 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation765 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat766 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation767 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat768 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation769 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat770 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation771 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat772 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation773 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat774 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation775 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat776 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation777 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat778 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation779 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat780 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation781 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat782 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation783 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat784 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation785 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat786 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation787 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat788 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation789 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat790 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation791 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat792 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation793 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat794 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation795 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat796 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation797 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat798 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation799 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat800 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation801 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat802 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation803 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat804 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation805 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat806 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation807 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat808 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation809 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,-1f,0f,0f,0.015f,1f,0f,0f,0.17f,-1f,0f,0f,0.025f,1f,0f,0f,0.01f,1f,0f,0f,0f});
  }
}
protected class MFFloat810 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation811 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat812 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation813 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat814 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation815 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat816 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation817 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat818 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation819 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat820 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation821 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat822 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation823 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,-1f,0.25f,0f,0f,1f,0f});
  }
}
protected class MFFloat824 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation825 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat826 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation827 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat828 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation829 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat830 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation831 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat832 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation833 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat834 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation835 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat836 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation837 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat838 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.4f,0.7f,1f});
  }
}
protected class MFRotation839 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5f,1f,0f,0f,0.45f,0f,0f,1f,0f});
  }
}
protected class MFFloat840 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.4f,0.7f,1f});
  }
}
protected class MFRotation841 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5f,1f,0f,0f,0.45f,0f,0f,1f,0f});
  }
}
protected class MFFloat842 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation843 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat844 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation845 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat846 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation847 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat848 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFVec3f849 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat850 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation851 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat852 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation853 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat854 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation855 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat856 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation857 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat858 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation859 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat860 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation861 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat862 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation863 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,-1f,0f,0f,0f,0f,-1f,0f,0f,0f,1f,0f,0f});
  }
}
protected class MFFloat864 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation865 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat866 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation867 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,0.1f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat868 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.8f,1f});
  }
}
protected class MFRotation869 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0.1f,0f,0f,1f,0.2f,0f,0f,1f,0.3f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat870 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.8f,1f});
  }
}
protected class MFRotation871 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0.4f,0f,0f,1f,0.32f,0f,0f,1f,0.25f,0f,0f,1f,0.2f,0f,0f,1f,0f});
  }
}
protected class MFFloat872 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.8f,1f});
  }
}
protected class MFRotation873 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.3f,0f,0f,1f,0.35f,0f,0f,1f,0.2f,0f,0f,1f,0f});
  }
}
protected class MFFloat874 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation875 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,-1f,0f,0f,0.5f,-1f,0f,0f,0.7f,1f,0f,0f,0.75f,-1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat876 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation877 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat878 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation879 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat880 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation881 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat882 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation883 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat884 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation885 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat886 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation887 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat888 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation889 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat890 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation891 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat892 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation893 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat894 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation895 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat896 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation897 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat898 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation899 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat900 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation901 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat902 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.55f,1f});
  }
}
protected class MFRotation903 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,0.55f,-1f,0f,0f,1.05f,0f,0f,1f,0f});
  }
}
protected class MFFloat904 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation905 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat906 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation907 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat908 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation909 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat910 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.25f,0.375f,0.5f,0.625f,0.75f,0.875f,1f});
  }
}
protected class MFVec3f911 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,-0.15f,0f,0f,-0.7f,0f,0f,-0.15f,0f,0f,0f,0f,0f,-0.15f,0f,0f,-0.7f,0f,0f,-0.15f,0f,0f,0f,0f});
  }
}
protected class MFFloat912 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation913 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat914 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation915 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat916 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation917 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat918 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation919 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat920 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation921 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat922 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation923 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat924 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation925 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat926 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation927 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.3f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat928 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation929 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.3f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat930 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation931 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat932 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation933 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat934 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation935 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat936 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation937 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat938 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation939 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat940 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation941 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat942 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation943 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat944 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation945 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat946 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation947 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat948 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation949 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat950 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation951 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat952 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation953 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat954 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation955 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat956 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation957 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat958 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation959 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat960 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation961 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat962 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation963 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat964 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation965 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat966 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFVec3f967 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat968 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation969 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat970 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation971 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat972 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation973 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat974 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation975 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat976 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation977 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,-1f,0f,0.1f,0f,1f,0f,0f,0f,1f,0f,0.24f,0f,-1f,0f,0.4f,0f,1f,0f,0f});
  }
}
protected class MFFloat978 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation979 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat980 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation981 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat982 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation983 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat984 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation985 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat986 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation987 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat988 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation989 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat990 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation991 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat992 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation993 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,-1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat994 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation995 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat996 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation997 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat998 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation999 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat1000 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation1001 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat1002 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1003 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1004 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation1005 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,-1f,3f,0f,0f,-1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat1006 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation1007 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat1008 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1009 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1010 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation1011 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,3f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat1012 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1013 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1014 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation1015 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.25f,0f,0f,1f,0f,0f,0f,-1f,1.25f,0f,0f,1f,0f});
  }
}
protected class MFFloat1016 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1017 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1018 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1019 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1020 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1021 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1022 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.25f,0.375f,0.5f,0.625f,0.75f,0.875f,1f});
  }
}
protected class MFVec3f1023 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,-0.25f,0f,0f,-0.8f,0f,0f,-0.25f,0f,0f,0f,0f,0f,-0.25f,0f,0f,-0.8f,0f,0f,-0.25f,0f,0f,0f,0f});
  }
}
protected class MFFloat1024 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1025 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.22f,0f,0f,1f,0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1026 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1027 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1028 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1029 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,-0.2f,0f,0f,1f,-0.22f,0f,0f,1f,-0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1030 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1031 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,-0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1032 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1033 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1034 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1035 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1036 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1037 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1038 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1039 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1040 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1041 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1042 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation1043 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1044 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.2083f,0.375f,0.4583f,0.5f,0.6667f,0.75f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation1045 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.3533f,-1f,0f,0f,0.1072f,1f,0f,0f,0.2612f,1f,0f,0f,0.1268f,-1f,0f,0f,0.01793f,-1f,0f,0f,0.05824f,-1f,0f,0f,0.2398f,-1f,0f,0f,0.35f,-1f,0f,0f,0.3322f,0f,0f,1f,0f});
  }
}
protected class MFFloat1046 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.2083f,0.2917f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation1047 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.8573f,1f,0f,0f,0.8926f,1f,0f,0f,0.5351f,1f,0f,0f,0.1756f,1f,0f,0f,0.1194f,1f,0f,0f,0.3153f,1f,0f,0f,0.09354f,1f,0f,0f,0.08558f,1f,0f,0f,0.2475f,1f,0f,0f,0.8573f});
  }
}
protected class MFFloat1048 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.2083f,0.2917f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation1049 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.5831f,0.03511f,0.8116f,0.1481f,-0.995f,0.02296f,0.09674f,0.4683f,-1f,0.00192f,0.007964f,0.4732f,-0.998f,-0.0158f,-0.06102f,0.5079f,-0.9911f,-0.03541f,-0.1286f,0.5419f,-0.9131f,-0.06243f,-0.403f,0.3361f,-0.4306f,-0.07962f,-0.899f,0.07038f,1f,0f,0f,0.2571f,0.9891f,-0.02805f,0.1444f,0.3879f,-0.5831f,0.03511f,0.8116f,0.1481f});
  }
}
protected class MFFloat1050 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.2083f,0.375f,0.6667f,0.9167f,1f});
  }
}
protected class MFRotation1051 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.06714f,-1f,0f,0f,0.2152f,-1f,0f,0f,0.3184f,-1f,0f,0f,0.4717f,-1f,0f,0f,0.2912f,1f,0f,0f,0.1222f,-1f,0f,0f,0.06714f});
  }
}
protected class MFFloat1052 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2083f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation1053 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.3226f,1f,0f,0f,0.1556f,1f,0f,0f,0.08678f,1f,0f,0f,0.8751f,1f,0f,0f,1.131f,1f,0f,0f,0.09961f,1f,0f,0f,0.3942f,1f,0f,0f,0.3226f});
  }
}
protected class MFFloat1054 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation1055 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.873f,0.06094f,0.484f,0.2865f,0.9963f,-0.01057f,0.08481f,0.2488f,0.9965f,0.01591f,-0.08222f,0.3836f,-0.7018f,-0.03223f,-0.7117f,0.1289f,-1f,0f,0f,0.5518f,-0.9964f,0.02231f,0.0817f,0.5351f,-0.9809f,0.04912f,0.1881f,0.5204f,-0.873f,0.06094f,0.484f,0.2865f});
  }
}
protected class MFFloat1056 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1057 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,-1f,0.1056f,0f,0f,1f,0.09018f,0f,0f,-1f,0.1056f});
  }
}
protected class MFFloat1058 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation1059 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.8129f,0.4759f,-0.3357f,0.1346f,0.1533f,-0.9878f,0.02582f,0.3902f,-0.5701f,0.7604f,-0.311f,0.366f,-0.8129f,0.4759f,-0.3357f,0.1346f});
  }
}
protected class MFFloat1060 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation1061 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.411508f,-1f,0f,0f,0.0925011f,-1f,0f,0f,0.572568f,-1f,0f,0f,0.411508f});
  }
}
protected class MFFloat1062 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation1063 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.09346f,1f,0f,0f,0.3197f,-1f,0f,0f,0.1564f,-1f,0f,0f,0.09346f});
  }
}
protected class MFFloat1064 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation1065 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,-1f,0f,0.461076f,-0.330195f,-0.927451f,0.175516f,0.538852f,0.0327774f,-0.999314f,-0.0172185f,0.492033f,0f,-1f,0f,0.461076f});
  }
}
protected class MFFloat1066 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation1067 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.0659878f,-1f,0f,0f,0.488383f,-1f,0f,0f,0.0177536f,-1f,0f,0f,0.0659878f});
  }
}
protected class MFFloat1068 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation1069 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.1189f,-1f,0f,0f,0.1861f,1f,0f,0f,0.3357f,1f,0f,0f,0.1189f});
  }
}
protected class MFFloat1070 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.4167f,0.5f,0.5833f,0.6667f,0.75f,0.8333f,0.9167f,1f});
  }
}
protected class MFRotation1071 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,-1f,0f,0.08642f,0f,1f,0f,0.1825f,0f,1f,0f,0.1505f,0f,1f,0f,0.1053f,0f,1f,0f,0.04391f,0f,-1f,0f,0.03119f,0f,-1f,0f,0.07936f,0f,-1f,0f,0.1616f,0f,-1f,0f,0.155f,0f,-1f,0f,0.08642f});
  }
}
protected class MFFloat1072 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation1073 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1074 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2083f,0.375f,0.75f,0.8333f,1f});
  }
}
protected class MFRotation1075 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0.0826f,-0.01972f,-0.5974f,0.8017f,0.08231f,0.009296f,-0.9648f,0.2627f,0.1734f,-0.01238f,0.9549f,-0.2968f,0.08732f,-0.008125f,0.9691f,-0.2463f,0.158f,0f,1f,0f,0.0826f});
  }
}
protected class MFFloat1076 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation1077 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1078 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.04167f,0.125f,0.1667f,0.2083f,0.25f,0.2917f,0.375f,0.4583f,0.5f,0.5417f,0.5833f,0.625f,0.7083f,0.75f,0.7917f,0.875f,0.9167f,1f});
  }
}
protected class MFVec3f1079 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.00928f,0f,0f,-0.003858f,0f,0f,-0.008847f,0f,0f,-0.01486f,0f,0f,-0.02641f,0f,0f,-0.03934f,0f,0f,-0.0502f,0f,0f,-0.07469f,0f,0f,-0.02732f,0f,0f,-0.01608f,0f,0f,-0.01129f,0f,0f,-0.005819f,0f,0f,-0.002004f,0f,0f,-0.002579f,0f,0f,-0.0143f,0f,0f,-0.03799f,0f,0f,-0.05648f,0f,0f,-0.045f,0f,0f,-0.00928f,0f});
  }
}
protected class MFFloat1080 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1081 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1082 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1083 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1084 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1085 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1086 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1087 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1088 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1089 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1090 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1091 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1092 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1093 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1094 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1095 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.5f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat1096 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1097 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.5f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat1098 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation1099 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1100 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2182f,0.4909f,0.7455f,1f});
  }
}
protected class MFRotation1101 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.99f,0.033f,0.04f,1.42f,-0.99f,0.1328f,0.067f,0.42f,0.99f,0.014f,0.009f,0.9f,-0.99f,0.0703f,0.05f,0.7f,-0.99f,0.033f,0.04f,1.42f});
  }
}
protected class MFFloat1102 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2182f,0.4909f,0.7455f,1f});
  }
}
protected class MFRotation1103 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,1.01f,1f,0f,0f,0.426f,1f,0f,0f,0.705f,1f,0f,0f,2.179f,1f,0f,0f,1.01f});
  }
}
protected class MFFloat1104 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.22f,0.3f,0.4f,1f});
  }
}
protected class MFRotation1105 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.0374f,-1f,0f,0f,0.1037f,-1f,0f,0f,0.4328f,1f,0f,0f,0.1929f,1f,0f,0f,0.03574f});
  }
}
protected class MFFloat1106 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation1107 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.99f,-0.014f,0.009f,0.9f,-0.99f,-0.0703f,-0.05f,0.7f,-0.99f,-0.033f,0.04f,1.42f,-0.99f,-0.1328f,-0.067f,0.42f,0.99f,-0.014f,0.009f,0.9f});
  }
}
protected class MFFloat1108 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation1109 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.705f,1f,0f,0f,2.179f,1f,0f,0f,1.01f,1f,0f,0f,0.426f,1f,0f,0f,0.705f});
  }
}
protected class MFFloat1110 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.4f,0.71f,0.8f,0.82f,1f});
  }
}
protected class MFRotation1111 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.2323f,-1f,0f,0f,0.07843f,-1f,0f,0f,0.32f,-1f,0f,0f,0.374f,-1f,0f,0f,0.3478f,1f,0f,0f,0.2323f});
  }
}
protected class MFFloat1112 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2182f,0.4909f,0.7455f,1f});
  }
}
protected class MFRotation1113 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.99f,-0.074f,0.25f,1.5f,0.99f,-0.092f,0.44f,0.3f,-0.99f,0.136f,0.25f,0.85f,0.99f,-0.081f,0.38f,0.4f,0.99f,-0.074f,0.25f,1.5f});
  }
}
protected class MFFloat1114 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2182f,0.4909f,0.7455f,1f});
  }
}
protected class MFRotation1115 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,1.85f,-0.99f,-0.19f,0.18f,1.35f,-1f,0f,0f,0.975f,-0.99f,-0.09f,-0.02f,1.55f,-1f,0f,0f,1.85f});
  }
}
protected class MFFloat1116 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation1117 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.25f,-1f,0.08f,0.14f,0.25f,1f,0.08f,0.14f,0f,0f,1f,0f,-0.25f,1f,0.08f,-0.14f,-0.25f,1f,0.08f,0.14f});
  }
}
protected class MFFloat1118 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation1119 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.99f,-0.136f,-0.25f,0.85f,0.99f,0.081f,-0.38f,0.4f,0.99f,0.074f,-0.25f,1.5f,0.99f,0.081f,-0.38f,0.4f,-0.99f,-0.136f,-0.25f,0.85f});
  }
}
protected class MFFloat1120 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation1121 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.975f,-0.99f,0.09f,0.02f,1.55f,-1f,0f,0f,1.85f,-0.99f,0.19f,-0.18f,1.35f,-1f,0f,0f,0.975f});
  }
}
protected class MFFloat1122 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation1123 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.917742f,-0.237244f,-0.318536f,0.214273f,-0.917742f,-0.237244f,-0.318536f,0.214273f});
  }
}
protected class MFFloat1124 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2182f,0.4909f,0.7455f,1f});
  }
}
protected class MFRotation1125 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,-1f,0f,0.125f,0f,0f,1f,0f,0f,1f,0f,0.125f,0f,0f,1f,0f,0f,-1f,0f,0.125f});
  }
}
protected class MFFloat1126 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation1127 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.08f,1f,0f,0f,0.12f,1f,0f,0f,0.3f,1f,0f,0f,0.3f,1f,0f,0f,0.08f});
  }
}
protected class MFFloat1128 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation1129 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.7f,0f,0f,0.4f,-0.7f,-0.7f,0f,0.4f,0f,0f,0f,0.4f,-0.7f,0.7f,0f,0.4f,0.7f,0f,0f,0.4f});
  }
}
protected class MFFloat1130 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2545f,0.4909f,0.7636f,1f});
  }
}
protected class MFRotation1131 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.97f,0.65f,0.086f,0.5f,0.9f,0.003f,-0.02f,0.38f,0.95f,-0.68f,-0.086f,0.5f,0.9f,0.004f,-0.025f,0.4f,0.97f,0.65f,0.086f,0.5f});
  }
}
protected class MFFloat1132 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation1133 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.06f,1f,0f,0f,0.167f,1f,0f,0f,0.06f,1f,0f,0f,0.168f,1f,0f,0f,0.06f});
  }
}
protected class MFFloat1134 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.22f,0.3f,0.31f,0.5f,0.69f,0.7f,0.78f,1f});
  }
}
protected class MFVec3f1135 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.01f,0f,0f,-0.037f,0f,0f,-0.049f,0f,0f,-0.037f,0f,0f,-0.01f,0f,0f,-0.037f,0f,0f,-0.049f,0f,0f,-0.037f,0f,0f,-0.01f,0f});
  }
}
protected class MFFloat1136 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1137 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1138 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1139 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1140 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1141 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1142 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1143 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1144 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1145 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1146 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1147 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1148 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1149 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1150 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1151 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.7f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat1152 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1153 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.7f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat1154 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation1155 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1156 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.1f,0.15f,0.25f,0.28f,0.32f,0.35f,0.64f,0.76f,0.84f,0.88f,0.92f,0.96f,1f});
  }
}
protected class MFRotation1157 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.6735f,-1f,0f,0f,0.6735f,-1f,0f,0f,0.3527f,-1f,0f,0f,0.3038f,-1f,0f,0f,0.07964f,1f,0f,0f,1.3f,1f,0f,0f,0.6509f,1f,0f,0f,0.3001f,-1f,0f,0f,0.2087f,-1f,0f,0f,0.3756f,-1f,0f,0f,0.3279f,-1f,0f,0f,0.1193f,0f,0f,1f,0f});
  }
}
protected class MFFloat1158 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.25f,0.3f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation1159 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,2.5f,1f,0f,0f,1.7f,0f,0f,1f,0f,1f,0f,0f,0.9507f,1f,0f,0f,0.5845f,1f,0f,0f,0.9054f,0f,0f,1f,0f});
  }
}
protected class MFFloat1160 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.18f,0.24f,0.26f,0.28f,0.32f,0.48f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation1161 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,1.63f,-1f,0f,0f,1.7f,-1f,0f,0f,1.55f,-1f,0f,0f,0.8943f,-1f,0f,0f,0.3698f,0f,0f,1f,0f,-1f,0f,0f,0.4963f,-1f,0f,0f,0.3829f,-1f,0f,0f,0.5169f,0f,0f,1f,0f});
  }
}
protected class MFFloat1162 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.36f,0.4f,0.44f,0.48f,0.64f,0.76f,0.84f,0.88f,0.92f,0.96f,1f});
  }
}
protected class MFRotation1163 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.625f,-1f,0f,0f,0.625f,-1f,0f,0f,0.3364f,-1f,0f,0f,0.2742f,-1f,0f,0f,0.05078f,1f,0f,0f,0.2833f,1f,0f,0f,0.6667f,1f,0f,0f,0.2833f,-1f,0f,0f,0.2108f,-1f,0f,0f,0.375f,-1f,0f,0f,0.3146f,-1f,0f,0f,0.1174f,0f,0f,1f,0f});
  }
}
protected class MFFloat1164 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.48f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation1165 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,2.047f,1f,0f,0f,2.047f,0f,0f,1f,0f,1f,0f,0f,1.566f,1f,0f,0f,0.5913f,1f,0f,0f,0.9235f,0f,0f,1f,0f});
  }
}
protected class MFFloat1166 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.36f,0.4f,0.44f,0.48f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation1167 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,4.349f,1f,0f,0f,4.349f,1f,0f,0f,4.615f,-1f,0f,0f,0.9136f,-1f,0f,0f,0.3614f,0f,0f,1f,0f,-1f,0f,0f,0.7869f,-1f,0f,0f,0.3918f,-1f,0f,0f,0.5433f,0f,0f,1f,0f});
  }
}
protected class MFFloat1168 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.48f,0.76f,1f});
  }
}
protected class MFRotation1169 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,0.1892f,1f,0f,0f,0.1892f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1170 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.64f,0.76f,1f});
  }
}
protected class MFRotation1171 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-0.0585279f,0.983903f,-0.168849f,1.85956f,-0.0585279f,0.983903f,-0.168849f,1.85956f,-0.00222418f,0.99801f,-0.0630095f,1.46072f,0f,1f,0f,0.497349f,0f,0f,1f,0f});
  }
}
protected class MFFloat1172 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.64f,0.76f,1f});
  }
}
protected class MFRotation1173 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.04151f,-1f,0f,0f,0.04151f,-1f,0f,0f,0.5855f,-1f,0f,0f,0.5852f,0f,0f,1f,0f});
  }
}
protected class MFFloat1174 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation1175 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0.9992f,0.02042f,0.03558f,4.688f,0.9992f,0.02042f,0.03558f,4.688f,0.9989f,-0.04623f,0.005159f,4.079f,-0.8687f,-0.2525f,-0.4261f,1.501f,-0.941f,-0.2893f,-0.1754f,0.4788f,0f,0f,1f,0f});
  }
}
protected class MFFloat1176 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.48f,0.52f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation1177 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0.0672928f,0.989475f,-0.128107f,4.15574f,0.0672928f,0.989475f,-0.128107f,4.15574f,0.00364942f,0.999901f,0.0135896f,4.5822f,0f,-1f,0f,0.655922f,-0.00050618f,-0.999999f,0.0012782f,1.28397f,0f,0f,1f,0f});
  }
}
protected class MFFloat1178 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.58f,0.72f,1f});
  }
}
protected class MFRotation1179 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,1.13f,-1f,0f,0f,1.7f,-1f,0f,0f,1.7f,-1f,0f,0f,0.4f,0f,0f,1f,0f});
  }
}
protected class MFFloat1180 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation1181 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-0.9987f,0.02554f,0.04498f,1.57f,-0.9987f,0.02554f,0.04498f,1.57f,1f,0.0004113f,0.003055f,4.114f,-0.8413f,0.3238f,0.4329f,1.453f,-0.877f,0.4198f,0.2337f,0.6009f,0f,0f,1f,0f});
  }
}
protected class MFFloat1182 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.48f,0.76f,1f});
  }
}
protected class MFRotation1183 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5989f,-1f,0f,0f,0.5989f,-1f,0f,0f,0.3216f,1f,0f,0f,0.06503f,0f,0f,1f,0f});
  }
}
protected class MFFloat1184 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.48f,0.76f,1f});
  }
}
protected class MFRotation1185 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.1942f,-1f,0f,0f,0.1942f,0f,0f,1f,0f,1f,0f,0f,0.2284f,0f,0f,1f,0f});
  }
}
protected class MFFloat1186 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.22f,0.28f,0.34f,0.71f,0.88f,1f});
  }
}
protected class MFRotation1187 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,1.05f,1f,0f,0f,1.051f,-1f,0f,0f,0.257f,1f,0f,0f,0.2171f,1f,0f,0f,0.3465f,0f,0f,1f,0f});
  }
}
protected class MFFloat1188 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.48f,0.64f,0.76f,1f});
  }
}
protected class MFRotation1189 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,0.3273f,1f,0f,0f,0.3273f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1190 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.04f,0.07f,0.11f,0.15f,0.19f,0.22f,0.25f,0.27f,0.31f,0.33f,0.35f,0.38f,0.53f,0.544f,0.76f,0.8f,0.84f,0.88f,0.92f,0.96f,1f});
  }
}
protected class MFVec3f1191 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,-0.01264f,-0.01289f,0f,-0.04712f,-0.03738f,-0.0003345f,-0.1049f,-0.05353f,-0.0005712f,-0.1892f,-0.06561f,-0.0008233f,-0.286f,-0.06276f,-0.0009591f,-0.3795f,-0.05148f,-0.00106f,-0.4484f,-0.03656f,-0.00106f,-0.4484f,-0.03656f,-0.001122f,-0.25f,-0.1499f,-0.0008616f,-0.05f,-0.06358f,-0.0005128f,0.15f,-0.05488f,0.0004779f,0.55f,0.02732f,0.0001728f,1.385f,0.006873f,0.00017f,1.395f,0.0069f,0f,0.35f,0.02148f,0f,-0.01299f,-0.01057f,0f,-0.06932f,-0.01064f,0.0001365f,-0.1037f,-0.005059f,0.0001279f,-0.07198f,-0.007596f,0.000141f,-0.01626f,-0.004935f,0f,0f,0f});
  }
}
protected class MFFloat1192 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1193 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.22f,0f,0f,1f,0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1194 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1195 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1196 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1197 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,-0.2f,0f,0f,1f,-0.22f,0f,0f,1f,-0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1198 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1199 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,-0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1200 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1201 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,-1f,0f,0.1f,0f,1f,0f,0f,0f,1f,-1f,0.24f,0f,-1f,0f,0.4f,0f,1f,0f,0f});
  }
}
protected class MFFloat1202 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1203 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,-0.1f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0f,0.6f,0f,1f,0f,0.1f,0f,1f,0f,0f});
  }
}
protected class MFFloat1204 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1205 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,0.8f,0f,1f,0f,0f,0f,1f,0f,0f,-1f,0f,0f,0.6f,0f,-1f,0f,0.8f,0f,1f,0f,0f});
  }
}
protected class MFFloat1206 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1207 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat1208 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1209 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat1210 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1211 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.22f,0f,0f,1f,0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1212 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1213 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1214 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1215 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.76f,-0.25f,0f,1f,1.76f,0f,0f,1f,1.256f,0f,0f,1f,0.05f,0f,0f,1f,0f});
  }
}
protected class MFFloat1216 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1217 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,-0.55f,-1f,0.25f,0f,2.55f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
protected class MFFloat1218 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1219 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0.55f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1220 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1221 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat1222 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1223 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,-0.2f,0f,0f,1f,-0.22f,0f,0f,1f,-0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1224 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1225 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,-0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1226 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1227 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,-1.76f,0.25f,0f,1f,-1.76f,0f,0f,1f,-1.256f,0f,0f,1f,-0.05f,0f,0f,1f,0f});
  }
}
protected class MFFloat1228 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1229 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,-0.55f,1f,0.25f,0f,-2.55f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
protected class MFFloat1230 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1231 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,-0.55f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1232 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1233 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat1234 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.3f,0.5f,0.6f,0.9f,1f});
  }
}
protected class MFRotation1235 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.9f,-1f,0f,0f,1.75f,-1f,0f,0f,2.25f,-1f,0f,0f,2f,1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
protected class MFFloat1236 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1237 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,1.95f,1f,0f,0f,1.75f,-1f,0f,0f,0.28f,1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
protected class MFFloat1238 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.3f,0.5f,0.6f,0.9f,1f});
  }
}
protected class MFRotation1239 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1240 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1241 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1242 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation1243 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.9f,-1f,0f,0f,0.95f,1f,0f,0f,0.75f,-1f,0f,0f,0.05f,1f,0f,0f,0f});
  }
}
protected class MFFloat1244 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation1245 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,-1f,0f,0f,0.5f,-1f,0f,0f,0.7f,1f,0f,0f,0.75f,-1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat1246 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1247 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,-1f,0f,0.1f,0f,1f,0f,0f,0f,1f,-1f,0.24f,0f,-1f,0f,0.4f,0f,1f,0f,0f});
  }
}
protected class MFFloat1248 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1249 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1250 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1251 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1252 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1253 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1254 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1255 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1256 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1257 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1258 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFVec3f1259 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat1260 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.55f,1f});
  }
}
protected class MFRotation1261 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,0.7f,1f,0f,0f,0.5f,0f,0f,1f,0f});
  }
}
protected class MFString1262 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"});
  }
}
protected class MFInt321263 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
  }
}
protected class MFVec3f1264 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1f,0f,0f,0.995f,0f,-0.105f,0.979f,0f,-0.208f,0.951f,0f,-0.309f,0.914f,0f,-0.407f,0.866f,0f,-0.5f,0.809f,0f,-0.588f,0.743f,0f,-0.669f,0.669f,0f,-0.743f,0.588f,0f,-0.809f,0.5f,0f,-0.866f,0.407f,0f,-0.914f,0.309f,0f,-0.951f,0.208f,0f,-0.978f,0.105f,0f,-0.995f,0f,0f,-1f,-0.105f,0f,-0.994522f,-0.208f,0f,-0.978f,-0.309f,0f,-0.951f,-0.407f,0f,-0.914f,-0.5f,0f,-0.866f,-0.588f,0f,-0.809f,-0.669f,0f,-0.743f,-0.743f,0f,-0.669f,-0.809f,0f,-0.588f,-0.866f,0f,-0.5f,-0.914f,0f,-0.407f,-0.951f,0f,-0.309f,-0.978f,0f,-0.208f,-0.995f,0f,-0.105f,-1f,0f,0f,-0.995f,0f,0.105f,-0.978f,0f,0.208f,-0.951f,0f,0.309f,-0.914f,0f,0.407f,-0.866f,0f,0.5f,-0.809f,0f,0.588f,-0.743f,0f,0.669f,-0.669f,0f,0.743f,-0.588f,0f,0.809f,-0.5f,0f,0.866f,-0.407f,0f,0.914f,-0.309f,0f,0.951f,-0.208f,0f,0.978f,-0.105f,0f,0.995f,0f,0f,1f,0.105f,0f,0.995f,0.208f,0f,0.978f,0.309f,0f,0.951f,0.407f,0f,0.914f,0.5f,0f,0.866f,0.588f,0f,0.809f,0.669f,0f,0.743f,0.743f,0f,0.669f,0.809f,0f,0.588f,0.866f,0f,0.5f,0.914f,0f,0.407f,0.951f,0f,0.309f,0.978f,0f,0.208f,0.995f,0f,0.104f,1f,0f,0f});
  }
}
protected class MFString1265 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Stand"});
  }
}
protected class MFInt321266 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
protected class MFVec3f1267 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f,-1.2f,-0.01f,2.5f,-1.2f,-0.01f,2.5f,0.75f,-0.01f,-0.2f,0.75f,-0.01f});
  }
}
protected class MFString1268 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Pitch"});
  }
}
protected class MFString1269 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Yaw"});
  }
}
protected class MFString1270 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Roll"});
  }
}
protected class MFString1271 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Walk"});
  }
}
protected class MFString1272 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Run"});
  }
}
protected class MFString1273 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Jump"});
  }
}
protected class MFString1274 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Kick"});
  }
}
protected class MFString1275 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Stop","Default Pose"});
  }
}
}
