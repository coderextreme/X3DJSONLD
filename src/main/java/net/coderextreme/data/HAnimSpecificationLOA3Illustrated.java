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
public class HAnimSpecificationLOA3Illustrated {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new HAnimSpecificationLOA3Illustrated().initialize().toFileJSON("../data/HAnimSpecificationLOA3Illustrated.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("HAnimSpecificationLOA3Illustrated.x3d"))
        .addMeta(new meta().setName("description").setContent("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships."))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"))
        .addMeta(new meta().setName("created").setContent("24 April 2013"))
        .addMeta(new meta().setName("modified").setContent("11 July 2020"))
        .addMeta(new meta().setName("creator").setContent("Matthew T. Beitler, Joe D. Williams, Don Brutzman"))
        .addMeta(new meta().setName("Image").setContent("HAnimSpecificationLOA3Illustrated.png"))
        .addMeta(new meta().setName("Image").setContent("HAnimSpecificationLOA3IllustratedLeftSide.png"))
        .addMeta(new meta().setName("reference").setContent("HAnimSpecificationLOA3Invisible.x3d"))
        .addMeta(new meta().setName("reference").setContent("HAnimSpecificationLOA3Motion.x3d"))
        .addMeta(new meta().setName("reference").setContent("HAnimSpecificationExampleChangeLog.txt"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA1.png"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA2.png"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA3.png"))
        .addMeta(new meta().setName("TODO").setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"))
        .addMeta(new meta().setName("warning").setContent("BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK"))
        .addMeta(new meta().setName("TODO").setContent("insert MetadataInteger nodes indicating LOA for each Joint and Segment"))
        .addMeta(new meta().setName("reference").setContent("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989."))
        .addMeta(new meta().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
        .addMeta(new meta().setName("reference").setContent("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf"))
        .addMeta(new meta().setName("translator").setContent("Don Brutzman and Joe Williams"))
        .addMeta(new meta().setName("generator").setContent("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"))
        .addMeta(new meta().setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl"))
        .addMeta(new meta().setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d"))
        .addMeta(new meta().setName("reference").setContent("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d"))
        .addMeta(new meta().setName("reference").setContent("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/HAnimSpecificationLOA3Illustrated.x3d"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Background().setSkyColor(new org.web3d.x3d.jsail.fields.MFColor(new MFColor0().getArray())))
        .addChild(new NavigationInfo())
        .addChild(new Group().setDEF("Original_WorldInfo")
          .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString1().getArray())).setTitle("HANIM 200x Default Joint Centers, LOA3")))
        .addComments(new CommentsBlock("TODO move viewpoints to be internal to HAnimHumanoid"))
        .addComments(new CommentsBlock("Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human."))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Front").setPosition(new float[] {0f,0.4f,4f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Front Close").setPosition(new float[] {0f,0.8f,2f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Front Closer").setPosition(new float[] {0f,1.2f,1f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,1.5f,0.0016f}).setDescription("Humanoid LOA 3 Front Face").setPosition(new float[] {0f,1.63f,1f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Right Side").setOrientation(new float[] {0f,1f,0f,1.5708f}).setPosition(new float[] {2.6f,0.8f,0f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Right Side Close").setOrientation(new float[] {0f,1f,0f,1.2f}).setPosition(new float[] {1f,0.8f,0.5f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Left Side Close").setOrientation(new float[] {0f,1f,0f,-1.2f}).setPosition(new float[] {-1f,0.8f,0.5f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Left Side").setOrientation(new float[] {0f,1f,0f,-1.5708f}).setPosition(new float[] {-2.6f,0.8f,0f}))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,0.9149f,0.0016f}).setDescription("Humanoid LOA 3 Top").setOrientation(new float[] {1f,0f,0f,-1.5708f}).setPosition(new float[] {0f,3.5f,0f}))
        .addChild(new HAnimHumanoid().setName("humanoid").setDEF("hanim_humanoid").setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString2().getArray())).setVersion("1.0")
          .addComments(new CommentsBlock("Only one root HAnimJoint is expected"))
          .addComments(new CommentsBlock("USE nodes go here for access by inverse kinematics (IK) engines and other tools"))
          .addComments(new CommentsBlock("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation"))
          .addComments(new CommentsBlock("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default"))
          .addComments(new CommentsBlock("right between the eyes, stationary position not animating except with body itself"))
          .setSkeleton(new HAnimJoint().setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new float[] {0f,0.824f,0.0277f})
            .addChild(new HAnimSegment().setName("sacrum").setDEF("hanim_sacrum")
              .addComments(new CommentsBlock("<HAnimJoint name='humanoid_root'/> visualization sphere is placed within <HAnimSegment name='sacrum'/>"))
              .addChild(new TouchSensor().setDescription("HAnimJoint HumanoidRoot, HAnimSegment sacrum"))
              .addChild(new Transform().setTranslation(new float[] {0f,0.824f,0.0277f})
                .addChild(new Shape().setDEF("HAnimJointShape")
                  .setGeometry(new Sphere().setRadius(0.006f))
                  .setAppearance(new Appearance().setDEF("HAnimJointAppearance")
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,0.5f,0f}).setTransparency(0.5f)))))
              .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>"))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt323().getArray()))
                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f4().getArray())))
                  .setColor(new ColorRGBA().setDEF("HAnimSegmentLineColorRGBA").setColor(new org.web3d.x3d.jsail.fields.MFColorRGBA(new MFColorRGBA5().getArray())))))
              .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>"))
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt326().getArray()))
                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f7().getArray())))
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
            .addChild(new HAnimJoint().setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0f,0.9149f,0.0016f})
              .addChild(new HAnimSegment().setName("pelvis").setDEF("hanim_pelvis")
                .addComments(new CommentsBlock("<HAnimJoint name='sacroiliac'/> visualization sphere is placed within <HAnimSegment name='pelvis'/>"))
                .addChild(new TouchSensor().setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis"))
                .addChild(new Transform().setTranslation(new float[] {0f,0.9149f,0.0016f})
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>"))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt328().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f9().getArray())))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>"))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3210().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f11().getArray())))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>"))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3212().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f13().getArray())))
                    .setColor(new ColorRGBA().setDEF("HAnimSiteLineColorRGBA").setColor(new org.web3d.x3d.jsail.fields.MFColorRGBA(new MFColorRGBA14().getArray())))))
                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>"))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3215().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f16().getArray())))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>"))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3217().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f18().getArray())))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>"))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3219().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f20().getArray())))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>"))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3221().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f22().getArray())))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>"))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3223().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f24().getArray())))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>"))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3225().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f26().getArray())))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>"))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3227().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f28().getArray())))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>"))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3229().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f30().getArray())))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addChild(new HAnimSite().setName("r_iliocristale_pt").setDEF("hanim_r_iliocristale_pt").setTranslation(new float[] {-0.1525f,1.0628f,0.0035f})
                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                  .addChild(new TouchSensor().setDescription("HAnimSite r_iliocristale"))
                  .addChild(new Shape().setDEF("HAnimSiteShape")
                    .setGeometry(new IndexedFaceSet().setDEF("DiamondIFS").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3231().getArray())).setCreaseAngle(0.5f).setSolid(false)
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f32().getArray()))))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f})))))
                .addChild(new HAnimSite().setName("r_trochanterion_pt").setDEF("hanim_r_trochanterion_pt").setTranslation(new float[] {-0.1689f,0.8419f,0.0352f})
                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                  .addChild(new TouchSensor().setDescription("HAnimSite r_trochanterion"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("l_iliocristale_pt").setDEF("hanim_l_iliocristale_pt").setTranslation(new float[] {0.1612f,1.0537f,0.0008f})
                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                  .addChild(new TouchSensor().setDescription("HAnimSite l_iliocristale"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("l_trochanterion_pt").setDEF("hanim_l_trochanterion_pt").setTranslation(new float[] {0.1677f,0.8336f,0.0303f})
                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                  .addChild(new TouchSensor().setDescription("HAnimSite l_trochanterion"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("r_asis_pt").setDEF("hanim_r_asis_pt").setTranslation(new float[] {-0.0887f,1.0021f,0.1112f})
                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                  .addChild(new TouchSensor().setDescription("HAnimSite r_asis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("l_asis_pt").setDEF("hanim_l_asis_pt").setTranslation(new float[] {0.0925f,0.9983f,0.1052f})
                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                  .addChild(new TouchSensor().setDescription("HAnimSite l_asis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("r_psis_pt").setDEF("hanim_r_psis_pt").setTranslation(new float[] {-0.0716f,1.019f,-0.1138f})
                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                  .addChild(new TouchSensor().setDescription("HAnimSite r_psis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("l_psis_pt").setDEF("hanim_l_psis_pt").setTranslation(new float[] {0.0774f,1.019f,-0.1151f})
                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                  .addChild(new TouchSensor().setDescription("HAnimSite l_psis"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("crotch_pt").setDEF("hanim_crotch_pt").setTranslation(new float[] {0.0034f,0.8266f,0.0257f})
                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                  .addChild(new TouchSensor().setDescription("HAnimSite crotch"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
              .addChild(new HAnimJoint().setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {0.0961f,0.9124f,-0.0001f})
                .addChild(new HAnimSegment().setName("l_thigh").setDEF("hanim_l_thigh")
                  .addComments(new CommentsBlock("<HAnimJoint name='l_hip'/> visualization sphere is placed within <HAnimSegment name='l_thigh'/>"))
                  .addChild(new TouchSensor().setDescription("HAnimJoint l_hip, HAnimSegment l_thigh"))
                  .addChild(new Transform().setTranslation(new float[] {0.0961f,0.9124f,-0.0001f})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>"))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3233().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f34().getArray())))
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>"))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3235().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f36().getArray())))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>"))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3237().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f38().getArray())))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>"))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3239().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f40().getArray())))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addChild(new HAnimSite().setName("l_knee_crease_pt").setDEF("hanim_l_knee_crease_pt").setTranslation(new float[] {0.0993f,0.4881f,-0.0309f})
                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                    .addChild(new TouchSensor().setDescription("HAnimSite l_knee_crease"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("l_femoral_lateral_epicn_pt").setDEF("hanim_l_femoral_lateral_epicn_pt").setTranslation(new float[] {0.1598f,0.4967f,0.0297f})
                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                    .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_lateral_epicn"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("l_femoral_medial_epicn_pt").setDEF("hanim_l_femoral_medial_epicn_pt").setTranslation(new float[] {0.0398f,0.4946f,0.0303f})
                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                    .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_medial_epicn"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint().setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {0.104f,0.4867f,0.0308f})
                  .addChild(new HAnimSegment().setName("l_calf").setDEF("hanim_l_calf")
                    .addComments(new CommentsBlock("<HAnimJoint name='l_knee'/> visualization sphere is placed within <HAnimSegment name='l_calf'/>"))
                    .addChild(new TouchSensor().setDescription("HAnimJoint l_knee, HAnimSegment l_calf"))
                    .addChild(new Transform().setTranslation(new float[] {0.104f,0.4867f,0.0308f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>"))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3241().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f42().getArray())))
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                  .addChild(new HAnimJoint().setName("l_ankle").setDEF("hanim_l_ankle").setCenter(new float[] {0.1101f,0.0656f,-0.0736f})
                    .addChild(new HAnimSegment().setName("l_hindfoot").setDEF("hanim_l_hindfoot")
                      .addComments(new CommentsBlock("<HAnimJoint name='l_ankle'/> visualization sphere is placed within <HAnimSegment name='l_hindfoot'/>"))
                      .addChild(new TouchSensor().setDescription("HAnimJoint l_ankle, HAnimSegment l_hindfoot"))
                      .addChild(new Transform().setTranslation(new float[] {0.1101f,0.0656f,-0.0736f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3243().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f44().getArray())))
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3245().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f46().getArray())))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3247().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f48().getArray())))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3249().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f50().getArray())))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3251().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f52().getArray())))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addChild(new HAnimSite().setName("l_lateral_malleolus_pt").setDEF("hanim_l_lateral_malleolus_pt").setTranslation(new float[] {0.1308f,0.0597f,-0.1032f})
                        .addComments(new CommentsBlock("HAnimSite visualization shape"))
                        .addChild(new TouchSensor().setDescription("HAnimSite l_lateral_malleolus"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("l_medial_malleolus_pt").setDEF("hanim_l_medial_malleolus_pt").setTranslation(new float[] {0.089f,0.0716f,-0.0881f})
                        .addComments(new CommentsBlock("HAnimSite visualization shape"))
                        .addChild(new TouchSensor().setDescription("HAnimSite l_medial_malleolus"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("l_sphyrion_pt").setDEF("hanim_l_sphyrion_pt").setTranslation(new float[] {0.089f,0.0575f,-0.0943f})
                        .addComments(new CommentsBlock("HAnimSite visualization shape"))
                        .addChild(new TouchSensor().setDescription("HAnimSite l_sphyrion"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("l_calcaneous_post_pt").setDEF("hanim_l_calcaneous_post_pt").setTranslation(new float[] {0.0974f,0.0259f,-0.1171f})
                        .addComments(new CommentsBlock("HAnimSite visualization shape"))
                        .addChild(new TouchSensor().setDescription("HAnimSite l_calcaneous_post"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                    .addChild(new HAnimJoint().setName("l_subtalar").setDEF("hanim_l_subtalar").setCenter(new float[] {0.1086f,0.0001f,-0.0368f})
                      .addChild(new HAnimSegment().setName("l_midproximal").setDEF("hanim_l_midproximal")
                        .addComments(new CommentsBlock("<HAnimJoint name='l_subtalar'/> visualization sphere is placed within <HAnimSegment name='l_midproximal'/>"))
                        .addChild(new TouchSensor().setDescription("HAnimJoint l_subtalar, HAnimSegment l_midproximal"))
                        .addChild(new Transform().setTranslation(new float[] {0.1086f,0.0001f,-0.0368f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>"))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3253().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f54().getArray())))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint().setName("l_midtarsal").setDEF("hanim_l_midtarsal").setCenter(new float[] {0.1086f,0.0001f,0.0368f})
                        .addChild(new HAnimSegment().setName("l_middistal").setDEF("hanim_l_middistal")
                          .addComments(new CommentsBlock("<HAnimJoint name='l_midtarsal'/> visualization sphere is placed within <HAnimSegment name='l_middistal'/>"))
                          .addChild(new TouchSensor().setDescription("HAnimJoint l_midtarsal, HAnimSegment l_middistal"))
                          .addChild(new Transform().setTranslation(new float[] {0.1086f,0.0001f,0.0368f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>"))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3255().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f56().getArray())))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>"))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3257().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f58().getArray())))
                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                          .addChild(new HAnimSite().setName("l_metatarsal_pha1_pt").setDEF("hanim_l_metatarsal_pha1_pt").setTranslation(new float[] {0.0816f,0.0232f,0.0106f})
                            .addComments(new CommentsBlock("HAnimSite visualization shape"))
                            .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_pha1"))
                            .addChild(new Shape().setUSE("HAnimSiteShape"))))
                        .addChild(new HAnimJoint().setName("l_metatarsal").setDEF("hanim_l_metatarsal").setCenter(new float[] {0.1086f,0f,0.0762f})
                          .addChild(new HAnimSegment().setName("l_forefoot").setDEF("hanim_l_forefoot")
                            .addComments(new CommentsBlock("<HAnimJoint name='l_metatarsal'/> visualization sphere is placed within <HAnimSegment name='l_forefoot'/>"))
                            .addChild(new TouchSensor().setDescription("HAnimJoint l_metatarsal, HAnimSegment l_forefoot"))
                            .addChild(new Transform().setTranslation(new float[] {0.1086f,0f,0.0762f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3259().getArray()))
                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f60().getArray())))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3261().getArray()))
                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f62().getArray())))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3263().getArray()))
                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f64().getArray())))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addChild(new HAnimSite().setName("l_forefoot_tip").setDEF("hanim_l_forefoot_tip").setTranslation(new float[] {0.1354f,0.0016f,0.1476f})
                              .addComments(new CommentsBlock("HAnimSite visualization shape"))
                              .addChild(new TouchSensor().setDescription("HAnimSite l_forefoot_tip"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite().setName("l_metatarsal_pha5_pt").setDEF("hanim_l_metatarsal_pha5_pt").setTranslation(new float[] {0.1825f,0.007f,0.0928f})
                              .addComments(new CommentsBlock("HAnimSite visualization shape"))
                              .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_pha5"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite().setName("l_digit2_pt").setDEF("hanim_l_digit2_pt").setTranslation(new float[] {0.1195f,0.0079f,0.1433f})
                              .addComments(new CommentsBlock("HAnimSite visualization shape"))
                              .addChild(new TouchSensor().setDescription("HAnimSite l_digit2"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))))))))
              .addChild(new HAnimJoint().setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-0.0961f,0.9124f,-0.0001f})
                .addChild(new HAnimSegment().setName("r_thigh").setDEF("hanim_r_thigh")
                  .addComments(new CommentsBlock("<HAnimJoint name='r_hip'/> visualization sphere is placed within <HAnimSegment name='r_thigh'/>"))
                  .addChild(new TouchSensor().setDescription("HAnimJoint r_hip, HAnimSegment r_thigh"))
                  .addChild(new Transform().setTranslation(new float[] {-0.0961f,0.9124f,-0.0001f})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>"))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3265().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f66().getArray())))
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>"))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3267().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f68().getArray())))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>"))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3269().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f70().getArray())))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>"))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3271().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f72().getArray())))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addChild(new HAnimSite().setName("r_knee_crease_pt").setDEF("hanim_r_knee_crease_pt").setTranslation(new float[] {-0.0825f,0.4932f,-0.0326f})
                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                    .addChild(new TouchSensor().setDescription("HAnimSite r_knee_crease"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("r_femoral_lateral_epicn_pt").setDEF("hanim_r_femoral_lateral_epicn_pt").setTranslation(new float[] {-0.1421f,0.4992f,0.031f})
                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                    .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_lateral_epicn"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("r_femoral_medial_epicn_pt").setDEF("hanim_r_femoral_medial_epicn_pt").setTranslation(new float[] {-0.0221f,0.5014f,0.0289f})
                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                    .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_medial_epicn"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint().setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-0.104f,0.4867f,0.0308f})
                  .addChild(new HAnimSegment().setName("r_calf").setDEF("hanim_r_calf")
                    .addComments(new CommentsBlock("<HAnimJoint name='r_knee'/> visualization sphere is placed within <HAnimSegment name='r_calf'/>"))
                    .addChild(new TouchSensor().setDescription("HAnimJoint r_knee, HAnimSegment r_calf"))
                    .addChild(new Transform().setTranslation(new float[] {-0.104f,0.4867f,0.0308f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>"))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3273().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f74().getArray())))
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                  .addChild(new HAnimJoint().setName("r_ankle").setDEF("hanim_r_ankle").setCenter(new float[] {-0.1101f,0.0656f,-0.0736f})
                    .addChild(new HAnimSegment().setName("r_hindfoot").setDEF("hanim_r_hindfoot")
                      .addComments(new CommentsBlock("<HAnimJoint name='r_ankle'/> visualization sphere is placed within <HAnimSegment name='r_hindfoot'/>"))
                      .addChild(new TouchSensor().setDescription("HAnimJoint r_ankle, HAnimSegment r_hindfoot"))
                      .addChild(new Transform().setTranslation(new float[] {-0.1101f,0.0656f,-0.0736f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3275().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f76().getArray())))
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3277().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f78().getArray())))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3279().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f80().getArray())))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3281().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f82().getArray())))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3283().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f84().getArray())))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addChild(new HAnimSite().setName("r_lateral_malleolus_pt").setDEF("hanim_r_lateral_malleolus_pt").setTranslation(new float[] {-0.1006f,0.0658f,-0.1075f})
                        .addComments(new CommentsBlock("HAnimSite visualization shape"))
                        .addChild(new TouchSensor().setDescription("HAnimSite r_lateral_malleolus"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("r_medial_malleolus_pt").setDEF("hanim_r_medial_malleolus_pt").setTranslation(new float[] {-0.0591f,0.076f,-0.0928f})
                        .addComments(new CommentsBlock("HAnimSite visualization shape"))
                        .addChild(new TouchSensor().setDescription("HAnimSite r_medial_malleolus"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("r_sphyrion_pt").setDEF("hanim_r_sphyrion_pt").setTranslation(new float[] {-0.0603f,0.061f,-0.1002f})
                        .addComments(new CommentsBlock("HAnimSite visualization shape"))
                        .addChild(new TouchSensor().setDescription("HAnimSite r_sphyrion"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("r_calcaneous_post_pt").setDEF("hanim_r_calcaneous_post_pt").setTranslation(new float[] {-0.0692f,0.0297f,-0.1221f})
                        .addComments(new CommentsBlock("HAnimSite visualization shape"))
                        .addChild(new TouchSensor().setDescription("HAnimSite r_calcaneous_post"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                    .addChild(new HAnimJoint().setName("r_subtalar").setDEF("hanim_r_subtalar").setCenter(new float[] {-0.1086f,0.0001f,-0.0368f})
                      .addChild(new HAnimSegment().setName("r_midproximal").setDEF("hanim_r_midproximal")
                        .addComments(new CommentsBlock("<HAnimJoint name='r_subtalar'/> visualization sphere is placed within <HAnimSegment name='r_midproximal'/>"))
                        .addChild(new TouchSensor().setDescription("HAnimJoint r_subtalar, HAnimSegment r_midproximal"))
                        .addChild(new Transform().setTranslation(new float[] {-0.1086f,0.0001f,-0.0368f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>"))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3285().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f86().getArray())))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint().setName("r_midtarsal").setDEF("hanim_r_midtarsal").setCenter(new float[] {-0.1086f,0.0001f,0.0368f})
                        .addChild(new HAnimSegment().setName("r_middistal").setDEF("hanim_r_middistal")
                          .addComments(new CommentsBlock("<HAnimJoint name='r_midtarsal'/> visualization sphere is placed within <HAnimSegment name='r_middistal'/>"))
                          .addChild(new TouchSensor().setDescription("HAnimJoint r_midtarsal, HAnimSegment r_middistal"))
                          .addChild(new Transform().setTranslation(new float[] {-0.1086f,0.0001f,0.0368f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>"))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3287().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f88().getArray())))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>"))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3289().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f90().getArray())))
                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                          .addChild(new HAnimSite().setName("r_metatarsal_pha1_pt").setDEF("hanim_r_metatarsal_pha1_pt").setTranslation(new float[] {-0.0521f,0.026f,0.0127f})
                            .addComments(new CommentsBlock("HAnimSite visualization shape"))
                            .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_pha1"))
                            .addChild(new Shape().setUSE("HAnimSiteShape"))))
                        .addChild(new HAnimJoint().setName("r_metatarsal").setDEF("hanim_r_metatarsal").setCenter(new float[] {-0.1086f,0f,0.0762f})
                          .addChild(new HAnimSegment().setName("r_forefoot").setDEF("hanim_r_forefoot")
                            .addComments(new CommentsBlock("<HAnimJoint name='r_metatarsal'/> visualization sphere is placed within <HAnimSegment name='r_forefoot'/>"))
                            .addChild(new TouchSensor().setDescription("HAnimJoint r_metatarsal, HAnimSegment r_forefoot"))
                            .addChild(new Transform().setTranslation(new float[] {-0.1086f,0f,0.0762f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3291().getArray()))
                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f92().getArray())))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3293().getArray()))
                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f94().getArray())))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3295().getArray()))
                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f96().getArray())))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addChild(new HAnimSite().setName("r_forefoot_tip").setDEF("hanim_r_forefoot_tip").setTranslation(new float[] {-0.1043f,0.0227f,0.145f})
                              .addComments(new CommentsBlock("HAnimSite visualization shape"))
                              .addChild(new TouchSensor().setDescription("HAnimSite r_forefoot_tip"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite().setName("r_metatarsal_pha5_pt").setDEF("hanim_r_metatarsal_pha5_pt").setTranslation(new float[] {-0.1523f,0.0166f,0.0895f})
                              .addComments(new CommentsBlock("HAnimSite visualization shape"))
                              .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_pha5"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite().setName("r_digit2_pt").setDEF("hanim_r_digit2_pt").setTranslation(new float[] {-0.0883f,0.0134f,0.1383f})
                              .addComments(new CommentsBlock("HAnimSite visualization shape"))
                              .addChild(new TouchSensor().setDescription("HAnimSite r_digit2"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))
            .addChild(new HAnimJoint().setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0.0028f,1.0568f,-0.0776f})
              .addChild(new HAnimSegment().setName("l5").setDEF("hanim_l5")
                .addComments(new CommentsBlock("<HAnimJoint name='vl5'/> visualization sphere is placed within <HAnimSegment name='l5'/>"))
                .addChild(new TouchSensor().setDescription("HAnimJoint vl5, HAnimSegment l5"))
                .addChild(new Transform().setTranslation(new float[] {0.0028f,1.0568f,-0.0776f})
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>"))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3297().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f98().getArray())))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>"))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3299().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f100().getArray())))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>"))
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32101().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f102().getArray())))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addChild(new HAnimSite().setName("waist_preferred_post_pt").setDEF("hanim_waist_preferred_post_pt").setTranslation(new float[] {0f,1.0915f,-0.1091f})
                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                  .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_post"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("navel_pt").setDEF("hanim_navel_pt").setTranslation(new float[] {0.0069f,1.0966f,0.1017f})
                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                  .addChild(new TouchSensor().setDescription("HAnimSite navel"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
              .addChild(new HAnimJoint().setName("vl4").setDEF("hanim_vl4").setCenter(new float[] {0.0035f,1.0925f,-0.0787f})
                .addChild(new HAnimSegment().setName("l4").setDEF("hanim_l4")
                  .addComments(new CommentsBlock("<HAnimJoint name='vl4'/> visualization sphere is placed within <HAnimSegment name='l4'/>"))
                  .addChild(new TouchSensor().setDescription("HAnimJoint vl4, HAnimSegment l4"))
                  .addChild(new Transform().setTranslation(new float[] {0.0035f,1.0925f,-0.0787f})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>"))
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32103().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f104().getArray())))
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                .addChild(new HAnimJoint().setName("vl3").setDEF("hanim_vl3").setCenter(new float[] {0.0041f,1.1276f,-0.0796f})
                  .addChild(new HAnimSegment().setName("l3").setDEF("hanim_l3")
                    .addComments(new CommentsBlock("<HAnimJoint name='vl3'/> visualization sphere is placed within <HAnimSegment name='l3'/>"))
                    .addChild(new TouchSensor().setDescription("HAnimJoint vl3, HAnimSegment l3"))
                    .addChild(new Transform().setTranslation(new float[] {0.0041f,1.1276f,-0.0796f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>"))
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32105().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f106().getArray())))
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                  .addChild(new HAnimJoint().setName("vl2").setDEF("hanim_vl2").setCenter(new float[] {0.0045f,1.1546f,-0.08f})
                    .addChild(new HAnimSegment().setName("l2").setDEF("hanim_l2")
                      .addComments(new CommentsBlock("<HAnimJoint name='vl2'/> visualization sphere is placed within <HAnimSegment name='l2'/>"))
                      .addChild(new TouchSensor().setDescription("HAnimJoint vl2, HAnimSegment l2"))
                      .addChild(new Transform().setTranslation(new float[] {0.0045f,1.1546f,-0.08f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32107().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f108().getArray())))
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32109().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f110().getArray())))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32111().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f112().getArray())))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>"))
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32113().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f114().getArray())))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addChild(new HAnimSite().setName("r_rib10_pt").setDEF("hanim_r_rib10_pt").setTranslation(new float[] {-0.0711f,1.1941f,0.1016f})
                        .addComments(new CommentsBlock("HAnimSite visualization shape"))
                        .addChild(new TouchSensor().setDescription("HAnimSite r_rib10"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("l_rib10_pt").setDEF("hanim_l_rib10_pt").setTranslation(new float[] {0.0871f,1.1925f,0.0992f})
                        .addComments(new CommentsBlock("HAnimSite visualization shape"))
                        .addChild(new TouchSensor().setDescription("HAnimSite l_rib10"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("rib10_midspine_pt").setDEF("hanim_rib10_midspine_pt").setTranslation(new float[] {0.0049f,1.1908f,-0.1113f})
                        .addComments(new CommentsBlock("HAnimSite visualization shape"))
                        .addChild(new TouchSensor().setDescription("HAnimSite rib10_midspine"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                    .addChild(new HAnimJoint().setName("vl1").setDEF("hanim_vl1").setCenter(new float[] {0.0048f,1.1912f,-0.0805f})
                      .addChild(new HAnimSegment().setName("l1").setDEF("hanim_l1")
                        .addComments(new CommentsBlock("<HAnimJoint name='vl1'/> visualization sphere is placed within <HAnimSegment name='l1'/>"))
                        .addChild(new TouchSensor().setDescription("HAnimJoint vl1, HAnimSegment l1"))
                        .addChild(new Transform().setTranslation(new float[] {0.0048f,1.1912f,-0.0805f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>"))
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32115().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f116().getArray())))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint().setName("vt12").setDEF("hanim_vt12").setCenter(new float[] {0.0051f,1.2278f,-0.0808f})
                        .addChild(new HAnimSegment().setName("t12").setDEF("hanim_t12")
                          .addComments(new CommentsBlock("<HAnimJoint name='vt12'/> visualization sphere is placed within <HAnimSegment name='t12'/>"))
                          .addChild(new TouchSensor().setDescription("HAnimJoint vt12, HAnimSegment t12"))
                          .addChild(new Transform().setTranslation(new float[] {0.0051f,1.2278f,-0.0808f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>"))
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32117().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f118().getArray())))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint().setName("vt11").setDEF("hanim_vt11").setCenter(new float[] {0.0053f,1.2679f,-0.081f})
                          .addChild(new HAnimSegment().setName("t11").setDEF("hanim_t11")
                            .addComments(new CommentsBlock("<HAnimJoint name='vt11'/> visualization sphere is placed within <HAnimSegment name='t11'/>"))
                            .addChild(new TouchSensor().setDescription("HAnimJoint vt11, HAnimSegment t11"))
                            .addChild(new Transform().setTranslation(new float[] {0.0053f,1.2679f,-0.081f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>"))
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32119().getArray()))
                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f120().getArray())))
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint().setName("vt10").setDEF("hanim_vt10").setCenter(new float[] {0.0056f,1.2848f,-0.0822f})
                            .addChild(new HAnimSegment().setName("t10").setDEF("hanim_t10")
                              .addComments(new CommentsBlock("<HAnimJoint name='vt10'/> visualization sphere is placed within <HAnimSegment name='t10'/>"))
                              .addChild(new TouchSensor().setDescription("HAnimJoint vt10, HAnimSegment t10"))
                              .addChild(new Transform().setTranslation(new float[] {0.0056f,1.2848f,-0.0822f})
                                .addChild(new Shape().setUSE("HAnimJointShape")))
                              .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>"))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32121().getArray()))
                                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f122().getArray())))
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>"))
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32123().getArray()))
                                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f124().getArray())))
                                  .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                              .addChild(new HAnimSite().setName("substernale_pt").setDEF("hanim_substernale_pt").setTranslation(new float[] {0.0085f,1.2995f,0.1147f})
                                .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                .addChild(new TouchSensor().setDescription("HAnimSite substernale"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                            .addChild(new HAnimJoint().setName("vt9").setDEF("hanim_vt9").setCenter(new float[] {0.0057f,1.3126f,-0.0838f})
                              .addChild(new HAnimSegment().setName("t9").setDEF("hanim_t9")
                                .addComments(new CommentsBlock("<HAnimJoint name='vt9'/> visualization sphere is placed within <HAnimSegment name='t9'/>"))
                                .addChild(new TouchSensor().setDescription("HAnimJoint vt9, HAnimSegment t9"))
                                .addChild(new Transform().setTranslation(new float[] {0.0057f,1.3126f,-0.0838f})
                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>"))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32125().getArray()))
                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f126().getArray())))
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>"))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32127().getArray()))
                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f128().getArray())))
                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>"))
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32129().getArray()))
                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f130().getArray())))
                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                .addChild(new HAnimSite().setName("r_thelion_pt").setDEF("hanim_r_thelion_pt").setTranslation(new float[] {-0.0736f,1.3385f,0.1217f})
                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_thelion"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                .addChild(new HAnimSite().setName("l_thelion_pt").setDEF("hanim_l_thelion_pt").setTranslation(new float[] {0.0918f,1.3382f,0.1192f})
                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_thelion"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint().setName("vt8").setDEF("hanim_vt8").setCenter(new float[] {0.0057f,1.3382f,-0.0845f})
                                .addChild(new HAnimSegment().setName("t8").setDEF("hanim_t8")
                                  .addComments(new CommentsBlock("<HAnimJoint name='vt8'/> visualization sphere is placed within <HAnimSegment name='t8'/>"))
                                  .addChild(new TouchSensor().setDescription("HAnimJoint vt8, HAnimSegment t8"))
                                  .addChild(new Transform().setTranslation(new float[] {0.0057f,1.3382f,-0.0845f})
                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                  .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>"))
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32131().getArray()))
                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f132().getArray())))
                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                .addChild(new HAnimJoint().setName("vt7").setDEF("hanim_vt7").setCenter(new float[] {0.0058f,1.3625f,-0.0833f})
                                  .addChild(new HAnimSegment().setName("t7").setDEF("hanim_t7")
                                    .addComments(new CommentsBlock("<HAnimJoint name='vt7'/> visualization sphere is placed within <HAnimSegment name='t7'/>"))
                                    .addChild(new TouchSensor().setDescription("HAnimJoint vt7, HAnimSegment t7"))
                                    .addChild(new Transform().setTranslation(new float[] {0.0058f,1.3625f,-0.0833f})
                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                    .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>"))
                                    .addChild(new Shape()
                                      .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32133().getArray()))
                                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f134().getArray())))
                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                  .addChild(new HAnimJoint().setName("vt6").setDEF("hanim_vt6").setCenter(new float[] {0.0059f,1.3866f,-0.08f})
                                    .addChild(new HAnimSegment().setName("t6").setDEF("hanim_t6")
                                      .addComments(new CommentsBlock("<HAnimJoint name='vt6'/> visualization sphere is placed within <HAnimSegment name='t6'/>"))
                                      .addChild(new TouchSensor().setDescription("HAnimJoint vt6, HAnimSegment t6"))
                                      .addChild(new Transform().setTranslation(new float[] {0.0059f,1.3866f,-0.08f})
                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                      .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>"))
                                      .addChild(new Shape()
                                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32135().getArray()))
                                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f136().getArray())))
                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                    .addChild(new HAnimJoint().setName("vt5").setDEF("hanim_vt5").setCenter(new float[] {0.006f,1.4102f,-0.0745f})
                                      .addChild(new HAnimSegment().setName("t5").setDEF("hanim_t5")
                                        .addComments(new CommentsBlock("<HAnimJoint name='vt5'/> visualization sphere is placed within <HAnimSegment name='t5'/>"))
                                        .addChild(new TouchSensor().setDescription("HAnimJoint vt5, HAnimSegment t5"))
                                        .addChild(new Transform().setTranslation(new float[] {0.006f,1.4102f,-0.0745f})
                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                        .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>"))
                                        .addChild(new Shape()
                                          .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32137().getArray()))
                                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f138().getArray())))
                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                      .addChild(new HAnimJoint().setName("vt4").setDEF("hanim_vt4").setCenter(new float[] {0.0061f,1.432f,-0.0675f})
                                        .addChild(new HAnimSegment().setName("t4").setDEF("hanim_t4")
                                          .addComments(new CommentsBlock("<HAnimJoint name='vt4'/> visualization sphere is placed within <HAnimSegment name='t4'/>"))
                                          .addChild(new TouchSensor().setDescription("HAnimJoint vt4, HAnimSegment t4"))
                                          .addChild(new Transform().setTranslation(new float[] {0.0061f,1.432f,-0.0675f})
                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                          .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>"))
                                          .addChild(new Shape()
                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32139().getArray()))
                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f140().getArray())))
                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                        .addChild(new HAnimJoint().setName("vt3").setDEF("hanim_vt3").setCenter(new float[] {0.0062f,1.4583f,-0.057f})
                                          .addChild(new HAnimSegment().setName("t3").setDEF("hanim_t3")
                                            .addComments(new CommentsBlock("<HAnimJoint name='vt3'/> visualization sphere is placed within <HAnimSegment name='t3'/>"))
                                            .addChild(new TouchSensor().setDescription("HAnimJoint vt3, HAnimSegment t3"))
                                            .addChild(new Transform().setTranslation(new float[] {0.0062f,1.4583f,-0.057f})
                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                            .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>"))
                                            .addChild(new Shape()
                                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32141().getArray()))
                                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f142().getArray())))
                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                          .addChild(new HAnimJoint().setName("vt2").setDEF("hanim_vt2").setCenter(new float[] {0.0063f,1.4761f,-0.0484f})
                                            .addChild(new HAnimSegment().setName("t2").setDEF("hanim_t2")
                                              .addComments(new CommentsBlock("<HAnimJoint name='vt2'/> visualization sphere is placed within <HAnimSegment name='t2'/>"))
                                              .addChild(new TouchSensor().setDescription("HAnimJoint vt2, HAnimSegment t2"))
                                              .addChild(new Transform().setTranslation(new float[] {0.0063f,1.4761f,-0.0484f})
                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                              .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>"))
                                              .addChild(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32143().getArray()))
                                                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f144().getArray())))
                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                            .addChild(new HAnimJoint().setName("vt1").setDEF("hanim_vt1").setCenter(new float[] {0.0065f,1.4951f,-0.0387f})
                                              .addChild(new HAnimSegment().setName("t1").setDEF("hanim_t1")
                                                .addComments(new CommentsBlock("<HAnimJoint name='vt1'/> visualization sphere is placed within <HAnimSegment name='t1'/>"))
                                                .addChild(new TouchSensor().setDescription("HAnimJoint vt1, HAnimSegment t1"))
                                                .addChild(new Transform().setTranslation(new float[] {0.0065f,1.4951f,-0.0387f})
                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>"))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32145().getArray()))
                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f146().getArray())))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>"))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32147().getArray()))
                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f148().getArray())))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>"))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32149().getArray()))
                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f150().getArray())))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>"))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32151().getArray()))
                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f152().getArray())))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>"))
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32153().getArray()))
                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f154().getArray())))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                .addChild(new HAnimSite().setName("suprasternale_pt").setDEF("hanim_suprasternale_pt").setTranslation(new float[] {0.0084f,1.4714f,0.0551f})
                                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                  .addChild(new TouchSensor().setDescription("HAnimSite suprasternale"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite().setName("cervicale_pt").setDEF("hanim_cervicale_pt").setTranslation(new float[] {0.0064f,1.52f,-0.0815f})
                                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                  .addChild(new TouchSensor().setDescription("HAnimSite cervicale"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                              .addChild(new HAnimJoint().setName("vc7").setDEF("hanim_vc7").setCenter(new float[] {0.0066f,1.5132f,-0.0301f})
                                                .addChild(new HAnimSegment().setName("c7").setDEF("hanim_c7")
                                                  .addComments(new CommentsBlock("<HAnimJoint name='vc7'/> visualization sphere is placed within <HAnimSegment name='c7'/>"))
                                                  .addChild(new TouchSensor().setDescription("HAnimJoint vc7, HAnimSegment c7"))
                                                  .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5132f,-0.0301f})
                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                  .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>"))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32155().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f156().getArray())))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>"))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32157().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f158().getArray())))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>"))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32159().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f160().getArray())))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addChild(new HAnimSite().setName("r_neck_base_pt").setDEF("hanim_r_neck_base_pt").setTranslation(new float[] {-0.0419f,1.5149f,-0.022f})
                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_neck_base"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("l_neck_base_pt").setDEF("hanim_l_neck_base_pt").setTranslation(new float[] {0.0646f,1.5141f,-0.038f})
                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_neck_base"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                .addChild(new HAnimJoint().setName("vc6").setDEF("hanim_vc6").setCenter(new float[] {0.0066f,1.5357f,-0.0143f})
                                                  .addChild(new HAnimSegment().setName("c6").setDEF("hanim_c6")
                                                    .addComments(new CommentsBlock("<HAnimJoint name='vc6'/> visualization sphere is placed within <HAnimSegment name='c6'/>"))
                                                    .addChild(new TouchSensor().setDescription("HAnimJoint vc6, HAnimSegment c6"))
                                                    .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5357f,-0.0143f})
                                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                                    .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>"))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32161().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f162().getArray())))
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimJoint().setName("vc5").setDEF("hanim_vc5").setCenter(new float[] {0.0066f,1.552f,-0.0082f})
                                                    .addChild(new HAnimSegment().setName("c5").setDEF("hanim_c5")
                                                      .addComments(new CommentsBlock("<HAnimJoint name='vc5'/> visualization sphere is placed within <HAnimSegment name='c5'/>"))
                                                      .addChild(new TouchSensor().setDescription("HAnimJoint vc5, HAnimSegment c5"))
                                                      .addChild(new Transform().setTranslation(new float[] {0.0066f,1.552f,-0.0082f})
                                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                                      .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>"))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32163().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f164().getArray())))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                    .addChild(new HAnimJoint().setName("vc4").setDEF("hanim_vc4").setCenter(new float[] {0.0066f,1.5662f,-0.0084f})
                                                      .addChild(new HAnimSegment().setName("c4").setDEF("hanim_c4")
                                                        .addComments(new CommentsBlock("<HAnimJoint name='vc4'/> visualization sphere is placed within <HAnimSegment name='c4'/>"))
                                                        .addChild(new TouchSensor().setDescription("HAnimJoint vc4, HAnimSegment c4"))
                                                        .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5662f,-0.0084f})
                                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                                        .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>"))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32165().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f166().getArray())))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                      .addChild(new HAnimJoint().setName("vc3").setDEF("hanim_vc3").setCenter(new float[] {0.0066f,1.58f,-0.0103f})
                                                        .addChild(new HAnimSegment().setName("c3").setDEF("hanim_c3")
                                                          .addComments(new CommentsBlock("<HAnimJoint name='vc3'/> visualization sphere is placed within <HAnimSegment name='c3'/>"))
                                                          .addChild(new TouchSensor().setDescription("HAnimJoint vc3, HAnimSegment c3"))
                                                          .addChild(new Transform().setTranslation(new float[] {0.0066f,1.58f,-0.0103f})
                                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                                          .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32167().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f168().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                        .addChild(new HAnimJoint().setName("vc2").setDEF("hanim_vc2").setCenter(new float[] {0.0066f,1.5928f,-0.0103f})
                                                          .addChild(new HAnimSegment().setName("c2").setDEF("hanim_c2")
                                                            .addComments(new CommentsBlock("<HAnimJoint name='vc2'/> visualization sphere is placed within <HAnimSegment name='c2'/>"))
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint vc2, HAnimSegment c2"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5928f,-0.0103f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32169().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f170().getArray())))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("vc1").setDEF("hanim_vc1").setCenter(new float[] {0.0066f,1.6144f,-0.0034f})
                                                            .addChild(new HAnimSegment().setName("c1").setDEF("hanim_c1")
                                                              .addComments(new CommentsBlock("<HAnimJoint name='vc1'/> visualization sphere is placed within <HAnimSegment name='c1'/>"))
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint vc1, HAnimSegment c1"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.0066f,1.6144f,-0.0034f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32171().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f172().getArray())))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0.0044f,1.6209f,0.0236f})
                                                              .addChild(new HAnimSegment().setName("skull").setDEF("hanim_skull")
                                                                .addComments(new CommentsBlock("<HAnimJoint name='skullbase'/> visualization sphere is placed within <HAnimSegment name='skull'/>"))
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint skullbase, HAnimSegment skull"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.0044f,1.6209f,0.0236f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32173().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f174().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32175().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f176().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32177().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f178().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32179().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f180().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32181().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f182().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32183().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f184().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32185().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f186().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32187().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f188().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32189().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f190().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32191().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f192().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32193().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f194().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32195().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f196().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32197().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f198().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32199().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f200().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32201().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f202().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32203().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f204().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32205().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f206().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addChild(new HAnimSite().setName("skull_tip").setDEF("hanim_skull_tip").setTranslation(new float[] {0.005f,1.7504f,0.0055f})
                                                                  .addComments(new CommentsBlock("TODO move skull_tip x to zero, check others for symmetry"))
                                                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite skull_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("sellion_pt").setDEF("hanim_sellion_pt").setTranslation(new float[] {0.0058f,1.6316f,0.0852f})
                                                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite sellion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("r_infraorbitale_pt").setDEF("hanim_r_infraorbitale_pt").setTranslation(new float[] {-0.0237f,1.6171f,0.0752f})
                                                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_infraorbitale"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("l_infraorbitale_pt").setDEF("hanim_l_infraorbitale_pt").setTranslation(new float[] {0.0341f,1.6171f,0.0752f})
                                                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_infraorbitale"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("supramenton_pt").setDEF("hanim_supramenton_pt").setTranslation(new float[] {0.0061f,1.541f,0.0805f})
                                                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite supramenton"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("r_tragion_pt").setDEF("hanim_r_tragion_pt").setTranslation(new float[] {-0.0646f,1.6347f,0.0302f})
                                                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tragion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("r_gonion_pt").setDEF("hanim_r_gonion_pt").setTranslation(new float[] {-0.052f,1.5529f,0.0347f})
                                                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_gonion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("l_tragion_pt").setDEF("hanim_l_tragion_pt").setTranslation(new float[] {0.0739f,1.6348f,0.0282f})
                                                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tragion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("l_gonion_pt").setDEF("hanim_l_gonion_pt").setTranslation(new float[] {0.0631f,1.553f,0.033f})
                                                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_gonion"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("nuchale_pt").setDEF("hanim_nuchale_pt").setTranslation(new float[] {0.0039f,1.5972f,-0.0796f})
                                                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite nuchale"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                              .addChild(new HAnimJoint().setName("l_eyeball_joint").setDEF("hanim_l_eyeball_joint").setCenter(new float[] {0.0336f,1.6332f,0.0502f})
                                                                .addChild(new HAnimSegment().setName("l_eyeball").setDEF("hanim_l_eyeball")
                                                                  .addComments(new CommentsBlock("<HAnimJoint name='l_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyeball'/>"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.0336f,1.6332f,0.0502f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32207().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f208().getArray())))
                                                                      .setColor(new ColorRGBA().setDEF("HAnimSiteViewpointLineColorRGBA").setColor(new org.web3d.x3d.jsail.fields.MFColorRGBA(new MFColorRGBA209().getArray())))))
                                                                  .addChild(new HAnimSite().setName("l_eyeball_site_view").setDEF("hanim_l_eyeball_site_view").setTranslation(new float[] {0.034f,1.64f,0.05f})
                                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_eyeball_site_view"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                    .addChild(new Viewpoint().setDEF("hanim_l_eyeball_site_viewpoint").setDescription("l_eyeball_site_viewpoint looking forward").setOrientation(new float[] {0f,1f,0f,3.141593f}).setPosition(new float[] {0f,0f,0f}))
                                                                    .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
                                                                    .addChild(new Anchor().setDescription("HAnimSite hanim_l_eyeball_site_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString210().getArray()))
                                                                      .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat211().getArray()))
                                                                        .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString212().getArray())))
                                                                        .addChild(new Shape().setDEF("HAnimSiteViewpointShape")
                                                                          .setGeometry(new IndexedFaceSet().setDEF("SiteViewpointDiamondIFS").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32213().getArray())).setCreaseAngle(0.5f)
                                                                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f214().getArray()))))
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,1f}).setTransparency(0.6f)))))))))
                                                              .addChild(new HAnimJoint().setName("l_eyelid_joint").setDEF("hanim_l_eyelid_joint").setCenter(new float[] {0.0336f,1.6332f,0.0502f})
                                                                .addChild(new HAnimSegment().setName("l_eyelid").setDEF("hanim_l_eyelid")
                                                                  .addComments(new CommentsBlock("<HAnimJoint name='l_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyelid'/>"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.0336f,1.6332f,0.0502f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addChild(new HAnimJoint().setName("l_eyebrow_joint").setDEF("hanim_l_eyebrow_joint").setCenter(new float[] {0.0336f,1.635f,0.0506f})
                                                                .addChild(new HAnimSegment().setName("l_eyebrow").setDEF("hanim_l_eyebrow")
                                                                  .addComments(new CommentsBlock("<HAnimJoint name='l_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyebrow'/>"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.0336f,1.635f,0.0506f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addChild(new HAnimJoint().setName("r_eyeball_joint").setDEF("hanim_r_eyeball_joint").setCenter(new float[] {-0.0336f,1.6332f,0.0502f})
                                                                .addChild(new HAnimSegment().setName("r_eyeball").setDEF("hanim_r_eyeball")
                                                                  .addComments(new CommentsBlock("<HAnimJoint name='r_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyeball'/>"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0336f,1.6332f,0.0502f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32215().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f216().getArray())))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteViewpointLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_eyeball_site_view").setDEF("hanim_r_eyeball_site_view").setTranslation(new float[] {-0.034f,1.64f,0.05f})
                                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_eyeball_site_view"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                    .addChild(new Viewpoint().setDEF("hanim_r_eyeball_site_viewpoint").setDescription("r_eyeball_site_viewpoint looking forward").setOrientation(new float[] {0f,1f,0f,3.141593f}).setPosition(new float[] {0f,0f,0f}))
                                                                    .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
                                                                    .addChild(new Anchor().setDescription("HAnimSite hanim_r_eyeball_site_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString217().getArray()))
                                                                      .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat218().getArray()))
                                                                        .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString219().getArray())))
                                                                        .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))))
                                                              .addChild(new HAnimJoint().setName("r_eyelid_joint").setDEF("hanim_r_eyelid_joint").setCenter(new float[] {-0.0336f,1.6332f,0.0502f})
                                                                .addChild(new HAnimSegment().setName("r_eyelid").setDEF("hanim_r_eyelid")
                                                                  .addComments(new CommentsBlock("<HAnimJoint name='r_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyelid'/>"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0336f,1.6332f,0.0502f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addChild(new HAnimJoint().setName("r_eyebrow_joint").setDEF("hanim_r_eyebrow_joint").setCenter(new float[] {-0.0336f,1.635f,0.0506f})
                                                                .addChild(new HAnimSegment().setName("r_eyebrow").setDEF("hanim_r_eyebrow")
                                                                  .addComments(new CommentsBlock("<HAnimJoint name='r_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyebrow'/>"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0336f,1.635f,0.0506f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addChild(new HAnimJoint().setName("temporomandibular").setDEF("hanim_temporomandibular").setCenter(new float[] {0f,1.63f,0.015f})
                                                                .addComments(new CommentsBlock("Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint"))
                                                                .addChild(new HAnimSegment().setName("jaw").setDEF("hanim_jaw")
                                                                  .addComments(new CommentsBlock("<HAnimJoint name='temporomandibular'/> visualization sphere is placed within <HAnimSegment name='jaw'/>"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint temporomandibular, HAnimSegment jaw"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0f,1.63f,0.015f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32220().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f221().getArray())))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32222().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f223().getArray())))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("temporomandibular_l_site_pt").setDEF("hanim_temporomandibular_l_site_pt").setTranslation(new float[] {0.045f,1.63f,0f})
                                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite temporomandibular_l_site"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite().setName("temporomandibular_r_site_pt").setDEF("hanim_temporomandibular_r_site_pt").setTranslation(new float[] {-0.045f,1.63f,0f})
                                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite temporomandibular_r_site"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))))
                                              .addChild(new HAnimJoint().setName("l_sternoclavicular").setDEF("hanim_l_sternoclavicular").setCenter(new float[] {0.082f,1.4488f,-0.0353f})
                                                .addChild(new HAnimSegment().setName("l_clavicle").setDEF("hanim_l_clavicle")
                                                  .addComments(new CommentsBlock("<HAnimJoint name='l_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='l_clavicle'/>"))
                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle"))
                                                  .addChild(new Transform().setTranslation(new float[] {0.082f,1.4488f,-0.0353f})
                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                  .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>"))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32224().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f225().getArray())))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>"))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32226().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f227().getArray())))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>"))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32228().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f229().getArray())))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>"))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32230().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f231().getArray())))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>"))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32232().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f233().getArray())))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addChild(new HAnimSite().setName("l_clavicale_pt").setDEF("hanim_l_clavicale_pt").setTranslation(new float[] {0.0271f,1.4943f,0.0394f})
                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_clavicale"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("l_acromion_pt").setDEF("hanim_l_acromion_pt").setTranslation(new float[] {0.2032f,1.476f,-0.049f})
                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_acromion"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("l_axilla_ant_pt").setDEF("hanim_l_axilla_ant_pt").setTranslation(new float[] {0.1777f,1.4065f,-0.0075f})
                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_ant"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("l_axilla_post_pt").setDEF("hanim_l_axilla_post_pt").setTranslation(new float[] {0.1706f,1.4072f,-0.0875f})
                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_post"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                .addChild(new HAnimJoint().setName("l_acromioclavicular").setDEF("hanim_l_acromioclavicular").setCenter(new float[] {0.0962f,1.4269f,-0.0424f})
                                                  .addChild(new HAnimSegment().setName("l_scapula").setDEF("hanim_l_scapula")
                                                    .addComments(new CommentsBlock("<HAnimJoint name='l_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='l_scapula'/>"))
                                                    .addChild(new TouchSensor().setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula"))
                                                    .addChild(new Transform().setTranslation(new float[] {0.0962f,1.4269f,-0.0424f})
                                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                                    .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>"))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32234().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f235().getArray())))
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimJoint().setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {0.2029f,1.4376f,-0.0387f})
                                                    .addChild(new HAnimSegment().setName("l_upperarm").setDEF("hanim_l_upperarm")
                                                      .addComments(new CommentsBlock("<HAnimJoint name='l_shoulder'/> visualization sphere is placed within <HAnimSegment name='l_upperarm'/>"))
                                                      .addChild(new TouchSensor().setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm"))
                                                      .addChild(new Transform().setTranslation(new float[] {0.2029f,1.4376f,-0.0387f})
                                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                                      .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>"))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32236().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f237().getArray())))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>"))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32238().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f239().getArray())))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                      .addChild(new HAnimSite().setName("l_humeral_lateral_epicn_pt").setDEF("hanim_l_humeral_lateral_epicn_pt").setTranslation(new float[] {0.228f,1.1482f,-0.11f})
                                                        .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_lateral_epicn"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint().setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {0.2014f,1.1357f,-0.0682f})
                                                      .addChild(new HAnimSegment().setName("l_forearm").setDEF("hanim_l_forearm")
                                                        .addComments(new CommentsBlock("<HAnimJoint name='l_elbow'/> visualization sphere is placed within <HAnimSegment name='l_forearm'/>"))
                                                        .addChild(new TouchSensor().setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm"))
                                                        .addChild(new Transform().setTranslation(new float[] {0.2014f,1.1357f,-0.0682f})
                                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                                        .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>"))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32240().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f241().getArray())))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>"))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32242().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f243().getArray())))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>"))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32244().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f245().getArray())))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>"))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32246().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f247().getArray())))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>"))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32248().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f249().getArray())))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addChild(new HAnimSite().setName("l_radial_styloid_pt").setDEF("hanim_l_radial_styloid_pt").setTranslation(new float[] {0.1901f,0.8645f,-0.0415f})
                                                          .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_radial_styloid"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("l_olecranon_pt").setDEF("hanim_l_olecranon_pt").setTranslation(new float[] {0.1962f,1.1375f,-0.1123f})
                                                          .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_olecranon"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("l_humeral_medial_epicn_pt").setDEF("hanim_l_humeral_medial_epicn_pt").setTranslation(new float[] {0.1735f,1.1272f,-0.1113f})
                                                          .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_medial_epicn"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("l_radiale_pt").setDEF("hanim_l_radiale_pt").setTranslation(new float[] {0.2182f,1.1212f,-0.1167f})
                                                          .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_radiale"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint().setName("l_wrist").setDEF("hanim_l_wrist").setCenter(new float[] {0.1984f,0.8663f,-0.0583f})
                                                        .addChild(new HAnimSegment().setName("l_hand").setDEF("hanim_l_hand")
                                                          .addComments(new CommentsBlock("<HAnimJoint name='l_wrist'/> visualization sphere is placed within <HAnimSegment name='l_hand'/>"))
                                                          .addChild(new TouchSensor().setDescription("HAnimJoint l_wrist, HAnimSegment l_hand"))
                                                          .addChild(new Transform().setTranslation(new float[] {0.1984f,0.8663f,-0.0583f})
                                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                                          .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32250().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f251().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32252().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f253().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32254().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f255().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32256().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f257().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32258().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f259().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32260().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f261().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32262().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f263().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32264().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f265().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32266().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f267().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteViewpointLineColorRGBA"))))
                                                          .addChild(new HAnimSite().setName("l_metacarpal_pha2_pt").setDEF("hanim_l_metacarpal_pha2_pt").setTranslation(new float[] {0.2009f,0.8139f,-0.0237f})
                                                            .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_pha2"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("l_ulnar_styloid_pt").setDEF("hanim_l_ulnar_styloid_pt").setTranslation(new float[] {0.2142f,0.8529f,-0.0648f})
                                                            .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_ulnar_styloid"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("l_metacarpal_pha5_pt").setDEF("hanim_l_metacarpal_pha5_pt").setTranslation(new float[] {0.1929f,0.786f,-0.1122f})
                                                            .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_pha5"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("l_hand_front_view").setDEF("hanim_l_hand_front_view").setTranslation(new float[] {0.3f,0.75f,0.45f})
                                                            .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_hand_front_view"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                            .addChild(new Viewpoint().setDEF("hanim_l_hand_front_viewpoint").setCenterOfRotation(new float[] {0f,0.7f,0f}).setDescription("left hand front").setPosition(new float[] {0f,0f,0f}))
                                                            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
                                                            .addChild(new Anchor().setDescription("HAnimSite hanim_l_hand_front_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString268().getArray()))
                                                              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat269().getArray()))
                                                                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString270().getArray())))
                                                                .addChild(new Shape().setUSE("HAnimSiteViewpointShape"))))))
                                                        .addChild(new HAnimJoint().setName("l_thumb1").setDEF("hanim_l_thumb1").setCenter(new float[] {0.1924f,0.8472f,-0.0534f})
                                                          .addChild(new HAnimSegment().setName("l_thumb_metacarpal").setDEF("hanim_l_thumb_metacarpal")
                                                            .addComments(new CommentsBlock("<HAnimJoint name='l_thumb1'/> visualization sphere is placed within <HAnimSegment name='l_thumb_metacarpal'/>"))
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1924f,0.8472f,-0.0534f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32271().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f272().getArray())))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_thumb2").setDEF("hanim_l_thumb2").setCenter(new float[] {0.1951f,0.8226f,0.0246f})
                                                            .addChild(new HAnimSegment().setName("l_thumb_proximal").setDEF("hanim_l_thumb_proximal")
                                                              .addComments(new CommentsBlock("<HAnimJoint name='l_thumb2'/> visualization sphere is placed within <HAnimSegment name='l_thumb_proximal'/>"))
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1951f,0.8226f,0.0246f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32273().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f274().getArray())))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_thumb3").setDEF("hanim_l_thumb3").setCenter(new float[] {0.1955f,0.8159f,0.0464f})
                                                              .addChild(new HAnimSegment().setName("l_thumb_distal").setDEF("hanim_l_thumb_distal")
                                                                .addComments(new CommentsBlock("<HAnimJoint name='l_thumb3'/> visualization sphere is placed within <HAnimSegment name='l_thumb_distal'/>"))
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1955f,0.8159f,0.0464f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32275().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f276().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addChild(new HAnimSite().setName("l_thumb_distal_tip").setDEF("hanim_l_thumb_distal_tip").setTranslation(new float[] {0.1982f,0.8061f,0.0759f})
                                                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_thumb_distal_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))))))
                                                        .addChild(new HAnimJoint().setName("l_index0").setDEF("hanim_l_index0").setCenter(new float[] {0.1983f,0.8024f,-0.028f})
                                                          .addChild(new HAnimSegment().setName("l_index_metacarpal").setDEF("hanim_l_index_metacarpal")
                                                            .addComments(new CommentsBlock("<HAnimJoint name='l_index0'/> visualization sphere is placed within <HAnimSegment name='l_index_metacarpal'/>"))
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_index0, HAnimSegment l_index_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1983f,0.8024f,-0.028f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32277().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f278().getArray())))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_index1").setDEF("hanim_l_index1").setCenter(new float[] {0.1983f,0.7815f,-0.028f})
                                                            .addChild(new HAnimSegment().setName("l_index_proximal").setDEF("hanim_l_index_proximal")
                                                              .addComments(new CommentsBlock("<HAnimJoint name='l_index1'/> visualization sphere is placed within <HAnimSegment name='l_index_proximal'/>"))
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_index1, HAnimSegment l_index_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1983f,0.7815f,-0.028f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32279().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f280().getArray())))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_index2").setDEF("hanim_l_index2").setCenter(new float[] {0.2017f,0.7363f,-0.0248f})
                                                              .addChild(new HAnimSegment().setName("l_index_middle").setDEF("hanim_l_index_middle")
                                                                .addComments(new CommentsBlock("<HAnimJoint name='l_index2'/> visualization sphere is placed within <HAnimSegment name='l_index_middle'/>"))
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_index2, HAnimSegment l_index_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.2017f,0.7363f,-0.0248f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32281().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f282().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_index3").setDEF("hanim_l_index3").setCenter(new float[] {0.2028f,0.7139f,-0.0236f})
                                                                .addChild(new HAnimSegment().setName("l_index_distal").setDEF("hanim_l_index_distal")
                                                                  .addComments(new CommentsBlock("<HAnimJoint name='l_index3'/> visualization sphere is placed within <HAnimSegment name='l_index_distal'/>"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_index3, HAnimSegment l_index_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2028f,0.7139f,-0.0236f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32283().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f284().getArray())))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32285().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f286().getArray())))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_index_distal_tip").setDEF("hanim_l_index_distal_tip").setTranslation(new float[] {0.2089f,0.6858f,-0.0245f})
                                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_index_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite().setName("l_dactylion_pt").setDEF("hanim_l_dactylion_pt").setTranslation(new float[] {0.2056f,0.6743f,-0.0482f})
                                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_dactylion"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("l_middle0").setDEF("hanim_l_middle0").setCenter(new float[] {0.1987f,0.8029f,-0.053f})
                                                          .addChild(new HAnimSegment().setName("l_middle_metacarpal").setDEF("hanim_l_middle_metacarpal")
                                                            .addComments(new CommentsBlock("<HAnimJoint name='l_middle0'/> visualization sphere is placed within <HAnimSegment name='l_middle_metacarpal'/>"))
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1987f,0.8029f,-0.053f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32287().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f288().getArray())))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_middle1").setDEF("hanim_l_middle1").setCenter(new float[] {0.1987f,0.7818f,-0.053f})
                                                            .addChild(new HAnimSegment().setName("l_middle_proximal").setDEF("hanim_l_middle_proximal")
                                                              .addComments(new CommentsBlock("<HAnimJoint name='l_middle1'/> visualization sphere is placed within <HAnimSegment name='l_middle_proximal'/>"))
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_middle1, HAnimSegment l_middle_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1987f,0.7818f,-0.053f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32289().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f290().getArray())))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_middle2").setDEF("hanim_l_middle2").setCenter(new float[] {0.2013f,0.7273f,-0.0503f})
                                                              .addChild(new HAnimSegment().setName("l_middle_middle").setDEF("hanim_l_middle_middle")
                                                                .addComments(new CommentsBlock("<HAnimJoint name='l_middle2'/> visualization sphere is placed within <HAnimSegment name='l_middle_middle'/>"))
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_middle2, HAnimSegment l_middle_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.2013f,0.7273f,-0.0503f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32291().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f292().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_middle3").setDEF("hanim_l_middle3").setCenter(new float[] {0.2026f,0.7011f,-0.0494f})
                                                                .addChild(new HAnimSegment().setName("l_middle_distal").setDEF("hanim_l_middle_distal")
                                                                  .addComments(new CommentsBlock("<HAnimJoint name='l_middle3'/> visualization sphere is placed within <HAnimSegment name='l_middle_distal'/>"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_middle3, HAnimSegment l_middle_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2026f,0.7011f,-0.0494f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32293().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f294().getArray())))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_middle_distal_tip").setDEF("hanim_l_middle_distal_tip").setTranslation(new float[] {0.208f,0.6731f,-0.0491f})
                                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_middle_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("l_ring0").setDEF("hanim_l_ring0").setCenter(new float[] {0.1956f,0.8019f,-0.0794f})
                                                          .addChild(new HAnimSegment().setName("l_ring_metacarpal").setDEF("hanim_l_ring_metacarpal")
                                                            .addComments(new CommentsBlock("<HAnimJoint name='l_ring0'/> visualization sphere is placed within <HAnimSegment name='l_ring_metacarpal'/>"))
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1956f,0.8019f,-0.0794f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32295().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f296().getArray())))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_ring1").setDEF("hanim_l_ring1").setCenter(new float[] {0.1956f,0.7815f,-0.0794f})
                                                            .addChild(new HAnimSegment().setName("l_ring_proximal").setDEF("hanim_l_ring_proximal")
                                                              .addComments(new CommentsBlock("<HAnimJoint name='l_ring1'/> visualization sphere is placed within <HAnimSegment name='l_ring_proximal'/>"))
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_ring1, HAnimSegment l_ring_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1956f,0.7815f,-0.0794f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32297().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f298().getArray())))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_ring2").setDEF("hanim_l_ring2").setCenter(new float[] {0.1973f,0.7287f,-0.0777f})
                                                              .addChild(new HAnimSegment().setName("l_ring_middle").setDEF("hanim_l_ring_middle")
                                                                .addComments(new CommentsBlock("<HAnimJoint name='l_ring2'/> visualization sphere is placed within <HAnimSegment name='l_ring_middle'/>"))
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_ring2, HAnimSegment l_ring_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1973f,0.7287f,-0.0777f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32299().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f300().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_ring3").setDEF("hanim_l_ring3").setCenter(new float[] {0.1983f,0.7045f,-0.0767f})
                                                                .addChild(new HAnimSegment().setName("l_ring_distal").setDEF("hanim_l_ring_distal")
                                                                  .addComments(new CommentsBlock("<HAnimJoint name='l_ring3'/> visualization sphere is placed within <HAnimSegment name='l_ring_distal'/>"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_ring3, HAnimSegment l_ring_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1983f,0.7045f,-0.0767f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32301().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f302().getArray())))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_ring_distal_tip").setDEF("hanim_l_ring_distal_tip").setTranslation(new float[] {0.2035f,0.675f,-0.0756f})
                                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_ring_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("l_pinky0").setDEF("hanim_l_pinky0").setCenter(new float[] {0.1925f,0.8066f,-0.1036f})
                                                          .addChild(new HAnimSegment().setName("l_pinky_metacarpal").setDEF("hanim_l_pinky_metacarpal")
                                                            .addComments(new CommentsBlock("<HAnimJoint name='l_pinky0'/> visualization sphere is placed within <HAnimSegment name='l_pinky_metacarpal'/>"))
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1925f,0.8066f,-0.1036f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32303().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f304().getArray())))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_pinky1").setDEF("hanim_l_pinky1").setCenter(new float[] {0.1925f,0.7866f,-0.1036f})
                                                            .addChild(new HAnimSegment().setName("l_pinky_proximal").setDEF("hanim_l_pinky_proximal")
                                                              .addComments(new CommentsBlock("<HAnimJoint name='l_pinky1'/> visualization sphere is placed within <HAnimSegment name='l_pinky_proximal'/>"))
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1925f,0.7866f,-0.1036f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32305().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f306().getArray())))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_pinky2").setDEF("hanim_l_pinky2").setCenter(new float[] {0.1938f,0.7452f,-0.1024f})
                                                              .addChild(new HAnimSegment().setName("l_pinky_middle").setDEF("hanim_l_pinky_middle")
                                                                .addComments(new CommentsBlock("<HAnimJoint name='l_pinky2'/> visualization sphere is placed within <HAnimSegment name='l_pinky_middle'/>"))
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1938f,0.7452f,-0.1024f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32307().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f308().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_pinky3").setDEF("hanim_l_pinky3").setCenter(new float[] {0.1948f,0.7277f,-0.1017f})
                                                                .addChild(new HAnimSegment().setName("l_pinky_distal").setDEF("hanim_l_pinky_distal")
                                                                  .addComments(new CommentsBlock("<HAnimJoint name='l_pinky3'/> visualization sphere is placed within <HAnimSegment name='l_pinky_distal'/>"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1948f,0.7277f,-0.1017f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32309().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f310().getArray())))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_pinky_distal_tip").setDEF("hanim_l_pinky_distal_tip").setTranslation(new float[] {0.2014f,0.7009f,-0.1012f})
                                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_pinky_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))))
                                              .addChild(new HAnimJoint().setName("r_sternoclavicular").setDEF("hanim_r_sternoclavicular").setCenter(new float[] {-0.082f,1.4488f,-0.0353f})
                                                .addChild(new HAnimSegment().setName("r_clavicle").setDEF("hanim_r_clavicle")
                                                  .addComments(new CommentsBlock("<HAnimJoint name='r_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='r_clavicle'/>"))
                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle"))
                                                  .addChild(new Transform().setTranslation(new float[] {-0.082f,1.4488f,-0.0353f})
                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                  .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>"))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32311().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f312().getArray())))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>"))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32313().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f314().getArray())))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>"))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32315().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f316().getArray())))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>"))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32317().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f318().getArray())))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>"))
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32319().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f320().getArray())))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addChild(new HAnimSite().setName("r_clavicale_pt").setDEF("hanim_r_clavicale_pt").setTranslation(new float[] {-0.0115f,1.4943f,0.04f})
                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_clavicale"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("r_acromion_pt").setDEF("hanim_r_acromion_pt").setTranslation(new float[] {-0.1905f,1.4791f,-0.0431f})
                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_acromion"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("r_axilla_ant_pt").setDEF("hanim_r_axilla_ant_pt").setTranslation(new float[] {-0.1626f,1.4072f,-0.0031f})
                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_ant"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("r_axilla_post_pt").setDEF("hanim_r_axilla_post_pt").setTranslation(new float[] {-0.1603f,1.4098f,-0.0826f})
                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_post"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                .addChild(new HAnimJoint().setName("r_acromioclavicular").setDEF("hanim_r_acromioclavicular").setCenter(new float[] {-0.0962f,1.4269f,-0.0424f})
                                                  .addChild(new HAnimSegment().setName("r_scapula").setDEF("hanim_r_scapula")
                                                    .addComments(new CommentsBlock("<HAnimJoint name='r_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='r_scapula'/>"))
                                                    .addChild(new TouchSensor().setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula"))
                                                    .addChild(new Transform().setTranslation(new float[] {-0.0962f,1.4269f,-0.0424f})
                                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                                    .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>"))
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32321().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f322().getArray())))
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimJoint().setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-0.2029f,1.4376f,-0.0387f})
                                                    .addChild(new HAnimSegment().setName("r_upperarm").setDEF("hanim_r_upperarm")
                                                      .addComments(new CommentsBlock("<HAnimJoint name='r_shoulder'/> visualization sphere is placed within <HAnimSegment name='r_upperarm'/>"))
                                                      .addChild(new TouchSensor().setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm"))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.2029f,1.4376f,-0.0387f})
                                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                                      .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>"))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32323().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f324().getArray())))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>"))
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32325().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f326().getArray())))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                      .addChild(new HAnimSite().setName("r_humeral_lateral_epicn_pt").setDEF("hanim_r_humeral_lateral_epicn_pt").setTranslation(new float[] {-0.2224f,1.1517f,-0.1033f})
                                                        .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_lateral_epicn"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint().setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-0.2014f,1.1357f,-0.0682f})
                                                      .addChild(new HAnimSegment().setName("r_forearm").setDEF("hanim_r_forearm")
                                                        .addComments(new CommentsBlock("<HAnimJoint name='r_elbow'/> visualization sphere is placed within <HAnimSegment name='r_forearm'/>"))
                                                        .addChild(new TouchSensor().setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm"))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.2014f,1.1357f,-0.0682f})
                                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                                        .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>"))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32327().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f328().getArray())))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>"))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32329().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f330().getArray())))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>"))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32331().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f332().getArray())))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>"))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32333().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f334().getArray())))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>"))
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32335().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f336().getArray())))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addChild(new HAnimSite().setName("r_radial_styloid_pt").setDEF("hanim_r_radial_styloid_pt").setTranslation(new float[] {-0.1884f,0.8676f,-0.036f})
                                                          .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_radial_styloid"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("r_olecranon_pt").setDEF("hanim_r_olecranon_pt").setTranslation(new float[] {-0.1907f,1.1405f,-0.1065f})
                                                          .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_olecranon"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("r_humeral_medial_epicn_pt").setDEF("hanim_r_humeral_medial_epicn_pt").setTranslation(new float[] {-0.168f,1.1298f,-0.1062f})
                                                          .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_medial_epicn"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("r_radiale_pt").setDEF("hanim_r_radiale_pt").setTranslation(new float[] {-0.213f,1.1305f,-0.1091f})
                                                          .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_radiale"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint().setName("r_wrist").setDEF("hanim_r_wrist").setCenter(new float[] {-0.1984f,0.8663f,-0.0583f})
                                                        .addChild(new HAnimSegment().setName("r_hand").setDEF("hanim_r_hand")
                                                          .addComments(new CommentsBlock("<HAnimJoint name='r_wrist'/> visualization sphere is placed within <HAnimSegment name='r_hand'/>"))
                                                          .addChild(new TouchSensor().setDescription("HAnimJoint r_wrist, HAnimSegment r_hand"))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.1984f,0.8663f,-0.0583f})
                                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                                          .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32337().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f338().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32339().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f340().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32341().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f342().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32343().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f344().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32345().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f346().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32347().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f348().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32349().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f350().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32351().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f352().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>"))
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32353().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f354().getArray())))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteViewpointLineColorRGBA"))))
                                                          .addChild(new HAnimSite().setName("r_metacarpal_pha2_pt").setDEF("hanim_r_metacarpal_pha2_pt").setTranslation(new float[] {-0.1977f,0.8169f,-0.0177f})
                                                            .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_pha2"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("r_ulnar_styloid_pt").setDEF("hanim_r_ulnar_styloid_pt").setTranslation(new float[] {-0.2117f,0.8562f,-0.0584f})
                                                            .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_ulnar_styloid"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("r_metacarpal_pha5_pt").setDEF("hanim_r_metacarpal_pha5_pt").setTranslation(new float[] {-0.1929f,0.789f,-0.1064f})
                                                            .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_pha5"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("r_hand_front_view").setDEF("hanim_r_hand_front_view").setTranslation(new float[] {-0.3f,0.75f,0.45f})
                                                            .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_hand_front_view"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                            .addChild(new Viewpoint().setDEF("hanim_r_hand_front_viewpoint").setCenterOfRotation(new float[] {0f,0.7f,0f}).setDescription("right hand front").setPosition(new float[] {0f,0f,0f}))
                                                            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
                                                            .addChild(new Anchor().setDescription("HAnimSite hanim_r_hand_front_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString355().getArray()))
                                                              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat356().getArray()))
                                                                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString357().getArray())))
                                                                .addChild(new Shape().setUSE("HAnimSiteViewpointShape"))))))
                                                        .addChild(new HAnimJoint().setName("r_thumb1").setDEF("hanim_r_thumb1").setCenter(new float[] {-0.1924f,0.8472f,-0.0534f})
                                                          .addChild(new HAnimSegment().setName("r_thumb_metacarpal").setDEF("hanim_r_thumb_metacarpal")
                                                            .addComments(new CommentsBlock("<HAnimJoint name='r_thumb1'/> visualization sphere is placed within <HAnimSegment name='r_thumb_metacarpal'/>"))
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1924f,0.8472f,-0.0534f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32358().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f359().getArray())))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_thumb2").setDEF("hanim_r_thumb2").setCenter(new float[] {-0.1951f,0.8226f,0.0246f})
                                                            .addChild(new HAnimSegment().setName("r_thumb_proximal").setDEF("hanim_r_thumb_proximal")
                                                              .addComments(new CommentsBlock("<HAnimJoint name='r_thumb2'/> visualization sphere is placed within <HAnimSegment name='r_thumb_proximal'/>"))
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1951f,0.8226f,0.0246f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32360().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f361().getArray())))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_thumb3").setDEF("hanim_r_thumb3").setCenter(new float[] {-0.1955f,0.8159f,0.0464f})
                                                              .addChild(new HAnimSegment().setName("r_thumb_distal").setDEF("hanim_r_thumb_distal")
                                                                .addComments(new CommentsBlock("<HAnimJoint name='r_thumb3'/> visualization sphere is placed within <HAnimSegment name='r_thumb_distal'/>"))
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1955f,0.8159f,0.0464f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32362().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f363().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addChild(new HAnimSite().setName("r_thumb_distal_tip").setDEF("hanim_r_thumb_distal_tip").setTranslation(new float[] {-0.1869f,0.809f,0.082f})
                                                                  .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_thumb_distal_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))))))
                                                        .addChild(new HAnimJoint().setName("r_index0").setDEF("hanim_r_index0").setCenter(new float[] {-0.1983f,0.8024f,-0.028f})
                                                          .addChild(new HAnimSegment().setName("r_index_metacarpal").setDEF("hanim_r_index_metacarpal")
                                                            .addComments(new CommentsBlock("<HAnimJoint name='r_index0'/> visualization sphere is placed within <HAnimSegment name='r_index_metacarpal'/>"))
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_index0, HAnimSegment r_index_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1983f,0.8024f,-0.028f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32364().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f365().getArray())))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_index1").setDEF("hanim_r_index1").setCenter(new float[] {-0.1983f,0.7815f,-0.028f})
                                                            .addChild(new HAnimSegment().setName("r_index_proximal").setDEF("hanim_r_index_proximal")
                                                              .addComments(new CommentsBlock("<HAnimJoint name='r_index1'/> visualization sphere is placed within <HAnimSegment name='r_index_proximal'/>"))
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_index1, HAnimSegment r_index_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1983f,0.7815f,-0.028f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32366().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f367().getArray())))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_index2").setDEF("hanim_r_index2").setCenter(new float[] {-0.2017f,0.7363f,-0.0248f})
                                                              .addChild(new HAnimSegment().setName("r_index_middle").setDEF("hanim_r_index_middle")
                                                                .addComments(new CommentsBlock("<HAnimJoint name='r_index2'/> visualization sphere is placed within <HAnimSegment name='r_index_middle'/>"))
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_index2, HAnimSegment r_index_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2017f,0.7363f,-0.0248f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32368().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f369().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_index3").setDEF("hanim_r_index3").setCenter(new float[] {-0.2028f,0.7139f,-0.0236f})
                                                                .addChild(new HAnimSegment().setName("r_index_distal").setDEF("hanim_r_index_distal")
                                                                  .addComments(new CommentsBlock("<HAnimJoint name='r_index3'/> visualization sphere is placed within <HAnimSegment name='r_index_distal'/>"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_index3, HAnimSegment r_index_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2028f,0.7139f,-0.0236f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32370().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f371().getArray())))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32372().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f373().getArray())))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_index_distal_tip").setDEF("hanim_r_index_distal_tip").setTranslation(new float[] {-0.198f,0.6883f,-0.018f})
                                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_index_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite().setName("r_dactylion_pt").setDEF("hanim_r_dactylion_pt").setTranslation(new float[] {-0.1941f,0.6772f,-0.0423f})
                                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_dactylion"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("r_middle0").setDEF("hanim_r_middle0").setCenter(new float[] {-0.1987f,0.8029f,-0.053f})
                                                          .addChild(new HAnimSegment().setName("r_middle_metacarpal").setDEF("hanim_r_middle_metacarpal")
                                                            .addComments(new CommentsBlock("<HAnimJoint name='r_middle0'/> visualization sphere is placed within <HAnimSegment name='r_middle_metacarpal'/>"))
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1987f,0.8029f,-0.053f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32374().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f375().getArray())))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_middle1").setDEF("hanim_r_middle1").setCenter(new float[] {-0.1987f,0.7818f,-0.053f})
                                                            .addChild(new HAnimSegment().setName("r_middle_proximal").setDEF("hanim_r_middle_proximal")
                                                              .addComments(new CommentsBlock("<HAnimJoint name='r_middle1'/> visualization sphere is placed within <HAnimSegment name='r_middle_proximal'/>"))
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_middle1, HAnimSegment r_middle_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1987f,0.7818f,-0.053f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32376().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f377().getArray())))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_middle2").setDEF("hanim_r_middle2").setCenter(new float[] {-0.2013f,0.7273f,-0.0503f})
                                                              .addChild(new HAnimSegment().setName("r_middle_middle").setDEF("hanim_r_middle_middle")
                                                                .addComments(new CommentsBlock("<HAnimJoint name='r_middle2'/> visualization sphere is placed within <HAnimSegment name='r_middle_middle'/>"))
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_middle2, HAnimSegment r_middle_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2013f,0.7273f,-0.0503f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32378().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f379().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_middle3").setDEF("hanim_r_middle3").setCenter(new float[] {-0.2026f,0.7011f,-0.0494f})
                                                                .addChild(new HAnimSegment().setName("r_middle_distal").setDEF("hanim_r_middle_distal")
                                                                  .addComments(new CommentsBlock("<HAnimJoint name='r_middle3'/> visualization sphere is placed within <HAnimSegment name='r_middle_distal'/>"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_middle3, HAnimSegment r_middle_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2026f,0.7011f,-0.0494f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32380().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f381().getArray())))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_middle_distal_tip").setDEF("hanim_r_middle_distal_tip").setTranslation(new float[] {-0.1969f,0.6758f,-0.0427f})
                                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_middle_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("r_ring0").setDEF("hanim_r_ring0").setCenter(new float[] {-0.1956f,0.8019f,-0.0794f})
                                                          .addChild(new HAnimSegment().setName("r_ring_metacarpal").setDEF("hanim_r_ring_metacarpal")
                                                            .addComments(new CommentsBlock("<HAnimJoint name='r_ring0'/> visualization sphere is placed within <HAnimSegment name='r_ring_metacarpal'/>"))
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1956f,0.8019f,-0.0794f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32382().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f383().getArray())))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_ring1").setDEF("hanim_r_ring1").setCenter(new float[] {-0.1956f,0.7815f,-0.0794f})
                                                            .addChild(new HAnimSegment().setName("r_ring_proximal").setDEF("hanim_r_ring_proximal")
                                                              .addComments(new CommentsBlock("<HAnimJoint name='r_ring1'/> visualization sphere is placed within <HAnimSegment name='r_ring_proximal'/>"))
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_ring1, HAnimSegment r_ring_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1956f,0.7815f,-0.0794f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32384().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f385().getArray())))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_ring2").setDEF("hanim_r_ring2").setCenter(new float[] {-0.1973f,0.7287f,-0.0777f})
                                                              .addChild(new HAnimSegment().setName("r_ring_middle").setDEF("hanim_r_ring_middle")
                                                                .addComments(new CommentsBlock("<HAnimJoint name='r_ring2'/> visualization sphere is placed within <HAnimSegment name='r_ring_middle'/>"))
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_ring2, HAnimSegment r_ring_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1973f,0.7287f,-0.0777f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32386().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f387().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_ring3").setDEF("hanim_r_ring3").setCenter(new float[] {-0.1983f,0.7045f,-0.0767f})
                                                                .addChild(new HAnimSegment().setName("r_ring_distal").setDEF("hanim_r_ring_distal")
                                                                  .addComments(new CommentsBlock("<HAnimJoint name='r_ring3'/> visualization sphere is placed within <HAnimSegment name='r_ring_distal'/>"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_ring3, HAnimSegment r_ring_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1983f,0.7045f,-0.0767f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32388().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f389().getArray())))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_ring_distal_tip").setDEF("hanim_r_ring_distal_tip").setTranslation(new float[] {-0.1934f,0.6778f,-0.0693f})
                                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_ring_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("r_pinky0").setDEF("hanim_r_pinky0").setCenter(new float[] {-0.1925f,0.8066f,-0.1036f})
                                                          .addChild(new HAnimSegment().setName("r_pinky_metacarpal").setDEF("hanim_r_pinky_metacarpal")
                                                            .addComments(new CommentsBlock("<HAnimJoint name='r_pinky0'/> visualization sphere is placed within <HAnimSegment name='r_pinky_metacarpal'/>"))
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1925f,0.8066f,-0.1036f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>"))
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32390().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f391().getArray())))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_pinky1").setDEF("hanim_r_pinky1").setCenter(new float[] {-0.1925f,0.7866f,-0.1036f})
                                                            .addChild(new HAnimSegment().setName("r_pinky_proximal").setDEF("hanim_r_pinky_proximal")
                                                              .addComments(new CommentsBlock("<HAnimJoint name='r_pinky1'/> visualization sphere is placed within <HAnimSegment name='r_pinky_proximal'/>"))
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1925f,0.7866f,-0.1036f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>"))
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32392().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f393().getArray())))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_pinky2").setDEF("hanim_r_pinky2").setCenter(new float[] {-0.1938f,0.7452f,-0.1024f})
                                                              .addChild(new HAnimSegment().setName("r_pinky_middle").setDEF("hanim_r_pinky_middle")
                                                                .addComments(new CommentsBlock("<HAnimJoint name='r_pinky2'/> visualization sphere is placed within <HAnimSegment name='r_pinky_middle'/>"))
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1938f,0.7452f,-0.1024f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments(new CommentsBlock("HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>"))
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32394().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f395().getArray())))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_pinky3").setDEF("hanim_r_pinky3").setCenter(new float[] {-0.1948f,0.7277f,-0.1017f})
                                                                .addChild(new HAnimSegment().setName("r_pinky_distal").setDEF("hanim_r_pinky_distal")
                                                                  .addComments(new CommentsBlock("<HAnimJoint name='r_pinky3'/> visualization sphere is placed within <HAnimSegment name='r_pinky_distal'/>"))
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1948f,0.7277f,-0.1017f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments(new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>"))
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32396().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f397().getArray())))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_pinky_distal_tip").setDEF("hanim_r_pinky_distal_tip").setTranslation(new float[] {-0.1938f,0.7035f,-0.0949f})
                                                                    .addComments(new CommentsBlock("HAnimSite visualization shape"))
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_pinky_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))))))))))))))))))))))
          .addViewpoints(new HAnimSite().setName("l_inclined_view").setDEF("hanim_l_inclined_view").setRotation(new float[] {-0.113f,0.993f,0.0347f,0.671f}).setTranslation(new float[] {1.62f,1.05f,2.06f})
            .addComments(new CommentsBlock("HAnimSite visualization shape"))
            .addChild(new TouchSensor().setDescription("HAnimSite l_inclined_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_l_inclined_viewpoint").setDescription("left inclined").setPosition(new float[] {0f,0f,0f}))
            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
            .addChild(new Anchor().setDescription("HAnimSite hanim_l_inclined_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString398().getArray()))
              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat399().getArray()))
                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString400().getArray())))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("r_inclined_view").setDEF("hanim_r_inclined_view").setRotation(new float[] {-0.113f,-0.993f,0.0347f,0.671f}).setTranslation(new float[] {-1.62f,1.05f,2.06f})
            .addComments(new CommentsBlock("HAnimSite visualization shape"))
            .addChild(new TouchSensor().setDescription("HAnimSite r_inclined_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_r_inclined_viewpoint").setCenterOfRotation(new float[] {0f,0.9f,0f}).setDescription("right inclined").setPosition(new float[] {0f,0f,0f}))
            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
            .addChild(new Anchor().setDescription("HAnimSite hanim_r_inclined_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString401().getArray()))
              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat402().getArray()))
                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString403().getArray())))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("front_view").setDEF("hanim_front_view").setTranslation(new float[] {0f,0.85f,2.58f})
            .addComments(new CommentsBlock("HAnimSite visualization shape"))
            .addChild(new TouchSensor().setDescription("HAnimSite front_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_front_viewpoint").setCenterOfRotation(new float[] {0f,0.9f,0f}).setDescription("front").setPosition(new float[] {0f,0f,0f}))
            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
            .addChild(new Anchor().setDescription("HAnimSite hanim_front_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString404().getArray()))
              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat405().getArray()))
                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString406().getArray())))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("back_view").setDEF("hanim_back_view").setRotation(new float[] {0f,1f,0f,3.14f}).setTranslation(new float[] {0f,0.85f,-2.58f})
            .addComments(new CommentsBlock("HAnimSite visualization shape"))
            .addChild(new TouchSensor().setDescription("HAnimSite back_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_back_viewpoint").setCenterOfRotation(new float[] {0f,0.9f,0f}).setDescription("back").setPosition(new float[] {0f,0f,0f}))
            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
            .addChild(new Anchor().setDescription("HAnimSite hanim_back_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString407().getArray()))
              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat408().getArray()))
                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString409().getArray())))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("l_side_view").setDEF("hanim_l_side_view").setRotation(new float[] {0f,1f,0f,1.5708f}).setTranslation(new float[] {2.6f,0.854f,0f})
            .addComments(new CommentsBlock("HAnimSite visualization shape"))
            .addChild(new TouchSensor().setDescription("HAnimSite l_side_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_l_side_viewpoint").setCenterOfRotation(new float[] {0f,0.9f,0f}).setDescription("left side").setPosition(new float[] {0f,0f,0f}))
            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
            .addChild(new Anchor().setDescription("HAnimSite hanim_l_side_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString410().getArray()))
              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat411().getArray()))
                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString412().getArray())))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("Top_view").setDEF("hanim_Top_view").setRotation(new float[] {1f,0f,0f,-1.57f}).setTranslation(new float[] {0f,3.5f,0f})
            .addComments(new CommentsBlock("HAnimSite visualization shape"))
            .addChild(new TouchSensor().setDescription("HAnimSite Top_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_Top_viewpoint").setCenterOfRotation(new float[] {0f,0.9f,0f}).setDescription("Top").setPosition(new float[] {0f,0f,0f}))
            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
            .addChild(new Anchor().setDescription("HAnimSite hanim_Top_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString413().getArray()))
              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat414().getArray()))
                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString415().getArray())))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("front_close_view").setDEF("hanim_front_close_view").setTranslation(new float[] {0f,0.854f,1.575f})
            .addComments(new CommentsBlock("HAnimSite visualization shape"))
            .addChild(new TouchSensor().setDescription("HAnimSite front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_front_close_viewpoint").setCenterOfRotation(new float[] {0f,0f,1.575f}).setDescription("front close").setPosition(new float[] {0f,0f,0f}))
            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
            .addChild(new Anchor().setDescription("HAnimSite hanim_front_close_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString416().getArray()))
              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat417().getArray()))
                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString418().getArray())))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("side_close_view").setDEF("hanim_side_close_view").setRotation(new float[] {0f,1f,0f,1.5708f}).setTranslation(new float[] {1.56f,0.854f,0f})
            .addComments(new CommentsBlock("HAnimSite visualization shape"))
            .addChild(new TouchSensor().setDescription("HAnimSite side_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_side_close_viewpoint").setCenterOfRotation(new float[] {1.6f,0f,0f}).setDescription("side close").setPosition(new float[] {0f,0f,0f}))
            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
            .addChild(new Anchor().setDescription("HAnimSite hanim_side_close_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString419().getArray()))
              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat420().getArray()))
                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString421().getArray())))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("head_front_close_view").setDEF("hanim_head_front_close_view").setTranslation(new float[] {0f,1.5f,1f})
            .addComments(new CommentsBlock("HAnimSite visualization shape"))
            .addChild(new TouchSensor().setDescription("HAnimSite head_front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_head_front_close_viewpoint").setCenterOfRotation(new float[] {0f,0f,1f}).setDescription("head front close").setPosition(new float[] {0f,0f,0f}))
            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
            .addChild(new Anchor().setDescription("HAnimSite hanim_head_front_close_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString422().getArray()))
              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat423().getArray()))
                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString424().getArray())))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("chest_front_close_view").setDEF("hanim_chest_front_close_view").setTranslation(new float[] {0f,1.2f,1f})
            .addComments(new CommentsBlock("HAnimSite visualization shape"))
            .addChild(new TouchSensor().setDescription("HAnimSite chest_front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_chest_front_close_viewpoint").setCenterOfRotation(new float[] {0f,0f,1f}).setDescription("chest front close").setPosition(new float[] {0f,0f,0f}))
            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
            .addChild(new Anchor().setDescription("HAnimSite hanim_chest_front_close_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString425().getArray()))
              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat426().getArray()))
                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString427().getArray())))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("pelvis_front_close_view").setDEF("hanim_pelvis_front_close_view").setTranslation(new float[] {0f,0.8f,1f})
            .addComments(new CommentsBlock("HAnimSite visualization shape"))
            .addChild(new TouchSensor().setDescription("HAnimSite pelvis_front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_pelvis_front_close_viewpoint").setCenterOfRotation(new float[] {0f,0f,1f}).setDescription("pelvis front close").setPosition(new float[] {0f,0f,0f}))
            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
            .addChild(new Anchor().setDescription("HAnimSite hanim_pelvis_front_close_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString428().getArray()))
              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat429().getArray()))
                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString430().getArray())))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("knees_front_close_view").setDEF("hanim_knees_front_close_view").setTranslation(new float[] {0f,0.4f,1f})
            .addComments(new CommentsBlock("HAnimSite visualization shape"))
            .addChild(new TouchSensor().setDescription("HAnimSite knees_front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_knees_front_close_viewpoint").setCenterOfRotation(new float[] {0f,0.4f,0f}).setDescription("knees front close").setPosition(new float[] {0f,0f,0f}))
            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
            .addChild(new Anchor().setDescription("HAnimSite hanim_knees_front_close_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString431().getArray()))
              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat432().getArray()))
                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString433().getArray())))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("feet_front_close_view").setDEF("hanim_feet_front_close_view").setTranslation(new float[] {0f,0f,1f})
            .addComments(new CommentsBlock("HAnimSite visualization shape"))
            .addChild(new TouchSensor().setDescription("HAnimSite feet_front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_feet_front_close_viewpoint").setDescription("feet front close").setPosition(new float[] {0f,0f,0f}))
            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
            .addChild(new Anchor().setDescription("HAnimSite hanim_feet_front_close_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString434().getArray()))
              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat435().getArray()))
                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString436().getArray())))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("eye_level_view").setDEF("hanim_eye_level_view").setTranslation(new float[] {0f,1.6332f,0.0502f})
            .addComments(new CommentsBlock("HAnimSite visualization shape"))
            .addChild(new TouchSensor().setDescription("HAnimSite eye_level_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_eye_level_viewpoint").setDescription("eye level looking forward").setOrientation(new float[] {0f,1f,0f,3.141593f}).setPosition(new float[] {0f,0f,0f}))
            .addComments(new CommentsBlock("HAnimSite/Viewpoint visualization shape"))
            .addChild(new Anchor().setDescription("HAnimSite hanim_eye_level_view Viewpoint").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString437().getArray()))
              .addChild(new LOD().setForceTransitions(true).setRange(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat438().getArray()))
                .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString439().getArray())))
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
          .addSites(new HAnimSite().setUSE("hanim_r_ulnar_styloid_pt"))))      ;
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"});
  }
}
protected class MFInt323 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f4 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.824f,0.0277f,0f,0.9149f,0.0016f});
  }
}
protected class MFColorRGBA5 {
  protected org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f,1f,0f,1f,1f,1f,0f,0.1f});
  }
}
protected class MFInt326 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f7 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.824f,0.0277f,0.0028f,1.0568f,-0.0776f});
  }
}
protected class MFInt328 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f9 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0961f,0.9124f,-0.0001f});
  }
}
protected class MFInt3210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f11 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.0961f,0.9124f,-0.0001f});
  }
}
protected class MFInt3212 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f13 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.1525f,1.0628f,0.0035f});
  }
}
protected class MFColorRGBA14 {
  protected org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f,0f,0f,1f,1f,0f,0f,0.1f});
  }
}
protected class MFInt3215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f16 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.1689f,0.8419f,0.0352f});
  }
}
protected class MFInt3217 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f18 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.1612f,1.0537f,0.0008f});
  }
}
protected class MFInt3219 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f20 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.1677f,0.8336f,0.0303f});
  }
}
protected class MFInt3221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f22 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.0887f,1.0021f,0.1112f});
  }
}
protected class MFInt3223 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f24 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0925f,0.9983f,0.1052f});
  }
}
protected class MFInt3225 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f26 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.0716f,1.019f,-0.1138f});
  }
}
protected class MFInt3227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f28 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0774f,1.019f,-0.1151f});
  }
}
protected class MFInt3229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f30 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0034f,0.8266f,0.0257f});
  }
}
protected class MFInt3231 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f32 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.008f,0f,-0.008f,0f,0f,0f,0f,0.008f,0.008f,0f,0f,0f,0f,-0.008f,0f,-0.008f,0f});
  }
}
protected class MFInt3233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f34 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.104f,0.4867f,0.0308f});
  }
}
protected class MFInt3235 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f36 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.0993f,0.4881f,-0.0309f});
  }
}
protected class MFInt3237 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f38 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.1598f,0.4967f,0.0297f});
  }
}
protected class MFInt3239 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f40 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.0398f,0.4946f,0.0303f});
  }
}
protected class MFInt3241 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f42 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.104f,0.4867f,0.0308f,0.1101f,0.0656f,-0.0736f});
  }
}
protected class MFInt3243 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f44 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.1086f,0.0001f,-0.0368f});
  }
}
protected class MFInt3245 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f46 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.1308f,0.0597f,-0.1032f});
  }
}
protected class MFInt3247 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f48 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.089f,0.0716f,-0.0881f});
  }
}
protected class MFInt3249 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f50 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.089f,0.0575f,-0.0943f});
  }
}
protected class MFInt3251 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f52 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.0974f,0.0259f,-0.1171f});
  }
}
protected class MFInt3253 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f54 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0.0001f,-0.0368f,0.1086f,0.0001f,0.0368f});
  }
}
protected class MFInt3255 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f56 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0.0001f,0.0368f,0.1086f,0f,0.0762f});
  }
}
protected class MFInt3257 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f58 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0.0001f,0.0368f,0.0816f,0.0232f,0.0106f});
  }
}
protected class MFInt3259 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f60 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0f,0.0762f,0.1354f,0.0016f,0.1476f});
  }
}
protected class MFInt3261 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f62 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0f,0.0762f,0.1825f,0.007f,0.0928f});
  }
}
protected class MFInt3263 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f64 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0f,0.0762f,0.1195f,0.0079f,0.1433f});
  }
}
protected class MFInt3265 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f66 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f,0.9124f,-0.0001f,-0.104f,0.4867f,0.0308f});
  }
}
protected class MFInt3267 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f68 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f,0.9124f,-0.0001f,-0.0825f,0.4932f,-0.0326f});
  }
}
protected class MFInt3269 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f70 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f,0.9124f,-0.0001f,-0.1421f,0.4992f,0.031f});
  }
}
protected class MFInt3271 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f72 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f,0.9124f,-0.0001f,-0.0221f,0.5014f,0.0289f});
  }
}
protected class MFInt3273 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f74 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.104f,0.4867f,0.0308f,-0.1101f,0.0656f,-0.0736f});
  }
}
protected class MFInt3275 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f76 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f,0.0656f,-0.0736f,-0.1086f,0.0001f,-0.0368f});
  }
}
protected class MFInt3277 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f78 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f,0.0656f,-0.0736f,-0.1006f,0.0658f,-0.1075f});
  }
}
protected class MFInt3279 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f80 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f,0.0656f,-0.0736f,-0.0591f,0.076f,-0.0928f});
  }
}
protected class MFInt3281 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f82 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f,0.0656f,-0.0736f,-0.0603f,0.061f,-0.1002f});
  }
}
protected class MFInt3283 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f84 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f,0.0656f,-0.0736f,-0.0692f,0.0297f,-0.1221f});
  }
}
protected class MFInt3285 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f86 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0.0001f,-0.0368f,-0.1086f,0.0001f,0.0368f});
  }
}
protected class MFInt3287 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f88 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0.0001f,0.0368f,-0.1086f,0f,0.0762f});
  }
}
protected class MFInt3289 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f90 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0.0001f,0.0368f,-0.0521f,0.026f,0.0127f});
  }
}
protected class MFInt3291 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f92 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0f,0.0762f,-0.1043f,0.0227f,0.145f});
  }
}
protected class MFInt3293 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f94 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0f,0.0762f,-0.1523f,0.0166f,0.0895f});
  }
}
protected class MFInt3295 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f96 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0f,0.0762f,-0.0883f,0.0134f,0.1383f});
  }
}
protected class MFInt3297 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f98 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f,1.0568f,-0.0776f,0.0035f,1.0925f,-0.0787f});
  }
}
protected class MFInt3299 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f100 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f,1.0568f,-0.0776f,0f,1.0915f,-0.1091f});
  }
}
protected class MFInt32101 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f102 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f,1.0568f,-0.0776f,0.0069f,1.0966f,0.1017f});
  }
}
protected class MFInt32103 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f104 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0035f,1.0925f,-0.0787f,0.0041f,1.1276f,-0.0796f});
  }
}
protected class MFInt32105 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f106 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0041f,1.1276f,-0.0796f,0.0045f,1.1546f,-0.08f});
  }
}
protected class MFInt32107 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f108 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,0.0048f,1.1912f,-0.0805f});
  }
}
protected class MFInt32109 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f110 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,-0.0711f,1.1941f,0.1016f});
  }
}
protected class MFInt32111 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f112 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,0.0871f,1.1925f,0.0992f});
  }
}
protected class MFInt32113 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f114 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,0.0049f,1.1908f,-0.1113f});
  }
}
protected class MFInt32115 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f116 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0048f,1.1912f,-0.0805f,0.0051f,1.2278f,-0.0808f});
  }
}
protected class MFInt32117 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f118 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0051f,1.2278f,-0.0808f,0.0053f,1.2679f,-0.081f});
  }
}
protected class MFInt32119 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f120 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0053f,1.2679f,-0.081f,0.0056f,1.2848f,-0.0822f});
  }
}
protected class MFInt32121 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f122 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f,1.2848f,-0.0822f,0.0057f,1.3126f,-0.0838f});
  }
}
protected class MFInt32123 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f124 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f,1.2848f,-0.0822f,0.0085f,1.2995f,0.1147f});
  }
}
protected class MFInt32125 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f126 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3126f,-0.0838f,0.0057f,1.3382f,-0.0845f});
  }
}
protected class MFInt32127 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f128 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3126f,-0.0838f,-0.0736f,1.3385f,0.1217f});
  }
}
protected class MFInt32129 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f130 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3126f,-0.0838f,0.0918f,1.3382f,0.1192f});
  }
}
protected class MFInt32131 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f132 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3382f,-0.0845f,0.0058f,1.3625f,-0.0833f});
  }
}
protected class MFInt32133 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f134 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0058f,1.3625f,-0.0833f,0.0059f,1.3866f,-0.08f});
  }
}
protected class MFInt32135 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f136 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0059f,1.3866f,-0.08f,0.006f,1.4102f,-0.0745f});
  }
}
protected class MFInt32137 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f138 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.006f,1.4102f,-0.0745f,0.0061f,1.432f,-0.0675f});
  }
}
protected class MFInt32139 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f140 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0061f,1.432f,-0.0675f,0.0062f,1.4583f,-0.057f});
  }
}
protected class MFInt32141 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f142 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0062f,1.4583f,-0.057f,0.0063f,1.4761f,-0.0484f});
  }
}
protected class MFInt32143 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f144 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0063f,1.4761f,-0.0484f,0.0065f,1.4951f,-0.0387f});
  }
}
protected class MFInt32145 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f146 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0066f,1.5132f,-0.0301f});
  }
}
protected class MFInt32147 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f148 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.082f,1.4488f,-0.0353f});
  }
}
protected class MFInt32149 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f150 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,-0.082f,1.4488f,-0.0353f});
  }
}
protected class MFInt32151 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f152 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0084f,1.4714f,0.0551f});
  }
}
protected class MFInt32153 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f154 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0064f,1.52f,-0.0815f});
  }
}
protected class MFInt32155 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f156 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5132f,-0.0301f,0.0066f,1.5357f,-0.0143f});
  }
}
protected class MFInt32157 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f158 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5132f,-0.0301f,-0.0419f,1.5149f,-0.022f});
  }
}
protected class MFInt32159 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f160 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5132f,-0.0301f,0.0646f,1.5141f,-0.038f});
  }
}
protected class MFInt32161 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f162 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5357f,-0.0143f,0.0066f,1.552f,-0.0082f});
  }
}
protected class MFInt32163 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f164 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.552f,-0.0082f,0.0066f,1.5662f,-0.0084f});
  }
}
protected class MFInt32165 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f166 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5662f,-0.0084f,0.0066f,1.58f,-0.0103f});
  }
}
protected class MFInt32167 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f168 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.58f,-0.0103f,0.0066f,1.5928f,-0.0103f});
  }
}
protected class MFInt32169 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f170 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5928f,-0.0103f,0.0066f,1.6144f,-0.0034f});
  }
}
protected class MFInt32171 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f172 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.6144f,-0.0034f,0.0044f,1.6209f,0.0236f});
  }
}
protected class MFInt32173 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f174 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0336f,1.6332f,0.0502f});
  }
}
protected class MFInt32175 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f176 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0336f,1.6332f,0.0502f});
  }
}
protected class MFInt32177 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f178 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0336f,1.635f,0.0506f});
  }
}
protected class MFInt32179 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f180 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0336f,1.6332f,0.0502f});
  }
}
protected class MFInt32181 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f182 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0336f,1.6332f,0.0502f});
  }
}
protected class MFInt32183 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f184 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0336f,1.635f,0.0506f});
  }
}
protected class MFInt32185 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f186 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1.63f,0.015f});
  }
}
protected class MFInt32187 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f188 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.005f,1.7504f,0.0055f});
  }
}
protected class MFInt32189 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f190 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0058f,1.6316f,0.0852f});
  }
}
protected class MFInt32191 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f192 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0237f,1.6171f,0.0752f});
  }
}
protected class MFInt32193 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f194 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0341f,1.6171f,0.0752f});
  }
}
protected class MFInt32195 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f196 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0061f,1.541f,0.0805f});
  }
}
protected class MFInt32197 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f198 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0646f,1.6347f,0.0302f});
  }
}
protected class MFInt32199 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f200 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.052f,1.5529f,0.0347f});
  }
}
protected class MFInt32201 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f202 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0739f,1.6348f,0.0282f});
  }
}
protected class MFInt32203 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f204 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0631f,1.553f,0.033f});
  }
}
protected class MFInt32205 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f206 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0039f,1.5972f,-0.0796f});
  }
}
protected class MFInt32207 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f208 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0336f,1.6332f,0.0502f,0.034f,1.64f,0.05f});
  }
}
protected class MFColorRGBA209 {
  protected org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {0f,0f,1f,1f,0f,0f,1f,0.1f});
  }
}
protected class MFString210 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_eyeball_site_viewpoint"});
  }
}
protected class MFFloat211 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString212 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFInt32213 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f214 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.01f,0f,-0.01f,0f,0f,0f,0f,0.01f,0.01f,0f,0f,0f,0f,-0.01f,0f,-0.01f,0f});
  }
}
protected class MFInt32215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f216 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0336f,1.6332f,0.0502f,-0.034f,1.64f,0.05f});
  }
}
protected class MFString217 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_r_eyeball_site_viewpoint"});
  }
}
protected class MFFloat218 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString219 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFInt32220 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f221 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.63f,0.015f,0.045f,1.63f,0f});
  }
}
protected class MFInt32222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f223 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.63f,0.015f,-0.045f,1.63f,0f});
  }
}
protected class MFInt32224 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f225 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.0962f,1.4269f,-0.0424f});
  }
}
protected class MFInt32226 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f227 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.0271f,1.4943f,0.0394f});
  }
}
protected class MFInt32228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f229 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.2032f,1.476f,-0.049f});
  }
}
protected class MFInt32230 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f231 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.1777f,1.4065f,-0.0075f});
  }
}
protected class MFInt32232 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f233 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.1706f,1.4072f,-0.0875f});
  }
}
protected class MFInt32234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f235 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0962f,1.4269f,-0.0424f,0.2029f,1.4376f,-0.0387f});
  }
}
protected class MFInt32236 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f237 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f,1.4376f,-0.0387f,0.2014f,1.1357f,-0.0682f});
  }
}
protected class MFInt32238 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f239 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f,1.4376f,-0.0387f,0.228f,1.1482f,-0.11f});
  }
}
protected class MFInt32240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f241 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1984f,0.8663f,-0.0583f});
  }
}
protected class MFInt32242 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f243 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1901f,0.8645f,-0.0415f});
  }
}
protected class MFInt32244 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f245 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1962f,1.1375f,-0.1123f});
  }
}
protected class MFInt32246 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f247 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1735f,1.1272f,-0.1113f});
  }
}
protected class MFInt32248 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f249 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.2182f,1.1212f,-0.1167f});
  }
}
protected class MFInt32250 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f251 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1924f,0.8472f,-0.0534f});
  }
}
protected class MFInt32252 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f253 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1983f,0.8024f,-0.028f});
  }
}
protected class MFInt32254 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f255 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1987f,0.8029f,-0.053f});
  }
}
protected class MFInt32256 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f257 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1956f,0.8019f,-0.0794f});
  }
}
protected class MFInt32258 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f259 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1925f,0.8066f,-0.1036f});
  }
}
protected class MFInt32260 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f261 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.2009f,0.8139f,-0.0237f});
  }
}
protected class MFInt32262 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f263 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.2142f,0.8529f,-0.0648f});
  }
}
protected class MFInt32264 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f265 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1929f,0.786f,-0.1122f});
  }
}
protected class MFInt32266 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f267 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.3f,0.75f,0.45f});
  }
}
protected class MFString268 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_hand_front_viewpoint"});
  }
}
protected class MFFloat269 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString270 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFInt32271 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f272 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1924f,0.8472f,-0.0534f,0.1951f,0.8226f,0.0246f});
  }
}
protected class MFInt32273 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f274 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1951f,0.8226f,0.0246f,0.1955f,0.8159f,0.0464f});
  }
}
protected class MFInt32275 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f276 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1955f,0.8159f,0.0464f,0.1982f,0.8061f,0.0759f});
  }
}
protected class MFInt32277 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f278 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.8024f,-0.028f,0.1983f,0.7815f,-0.028f});
  }
}
protected class MFInt32279 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f280 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.7815f,-0.028f,0.2017f,0.7363f,-0.0248f});
  }
}
protected class MFInt32281 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f282 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2017f,0.7363f,-0.0248f,0.2028f,0.7139f,-0.0236f});
  }
}
protected class MFInt32283 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f284 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2028f,0.7139f,-0.0236f,0.2089f,0.6858f,-0.0245f});
  }
}
protected class MFInt32285 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f286 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2028f,0.7139f,-0.0236f,0.2056f,0.6743f,-0.0482f});
  }
}
protected class MFInt32287 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f288 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.8029f,-0.053f,0.1987f,0.7818f,-0.053f});
  }
}
protected class MFInt32289 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f290 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.7818f,-0.053f,0.2013f,0.7273f,-0.0503f});
  }
}
protected class MFInt32291 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f292 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2013f,0.7273f,-0.0503f,0.2026f,0.7011f,-0.0494f});
  }
}
protected class MFInt32293 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f294 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2026f,0.7011f,-0.0494f,0.208f,0.6731f,-0.0491f});
  }
}
protected class MFInt32295 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f296 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.8019f,-0.0794f,0.1956f,0.7815f,-0.0794f});
  }
}
protected class MFInt32297 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f298 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.7815f,-0.0794f,0.1973f,0.7287f,-0.0777f});
  }
}
protected class MFInt32299 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f300 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1973f,0.7287f,-0.0777f,0.1983f,0.7045f,-0.0767f});
  }
}
protected class MFInt32301 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f302 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.7045f,-0.0767f,0.2035f,0.675f,-0.0756f});
  }
}
protected class MFInt32303 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f304 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.8066f,-0.1036f,0.1925f,0.7866f,-0.1036f});
  }
}
protected class MFInt32305 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f306 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.7866f,-0.1036f,0.1938f,0.7452f,-0.1024f});
  }
}
protected class MFInt32307 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f308 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1938f,0.7452f,-0.1024f,0.1948f,0.7277f,-0.1017f});
  }
}
protected class MFInt32309 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f310 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1948f,0.7277f,-0.1017f,0.2014f,0.7009f,-0.1012f});
  }
}
protected class MFInt32311 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f312 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f,1.4488f,-0.0353f,-0.0962f,1.4269f,-0.0424f});
  }
}
protected class MFInt32313 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f314 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f,1.4488f,-0.0353f,-0.0115f,1.4943f,0.04f});
  }
}
protected class MFInt32315 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f316 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f,1.4488f,-0.0353f,-0.1905f,1.4791f,-0.0431f});
  }
}
protected class MFInt32317 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f318 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f,1.4488f,-0.0353f,-0.1626f,1.4072f,-0.0031f});
  }
}
protected class MFInt32319 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f320 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f,1.4488f,-0.0353f,-0.1603f,1.4098f,-0.0826f});
  }
}
protected class MFInt32321 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f322 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0962f,1.4269f,-0.0424f,-0.2029f,1.4376f,-0.0387f});
  }
}
protected class MFInt32323 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f324 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2029f,1.4376f,-0.0387f,-0.2014f,1.1357f,-0.0682f});
  }
}
protected class MFInt32325 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f326 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2029f,1.4376f,-0.0387f,-0.2224f,1.1517f,-0.1033f});
  }
}
protected class MFInt32327 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f328 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f,1.1357f,-0.0682f,-0.1984f,0.8663f,-0.0583f});
  }
}
protected class MFInt32329 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f330 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f,1.1357f,-0.0682f,-0.1884f,0.8676f,-0.036f});
  }
}
protected class MFInt32331 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f332 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f,1.1357f,-0.0682f,-0.1907f,1.1405f,-0.1065f});
  }
}
protected class MFInt32333 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f334 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f,1.1357f,-0.0682f,-0.168f,1.1298f,-0.1062f});
  }
}
protected class MFInt32335 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f336 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f,1.1357f,-0.0682f,-0.213f,1.1305f,-0.1091f});
  }
}
protected class MFInt32337 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f338 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1924f,0.8472f,-0.0534f});
  }
}
protected class MFInt32339 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f340 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1983f,0.8024f,-0.028f});
  }
}
protected class MFInt32341 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f342 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1987f,0.8029f,-0.053f});
  }
}
protected class MFInt32343 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f344 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1956f,0.8019f,-0.0794f});
  }
}
protected class MFInt32345 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f346 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1925f,0.8066f,-0.1036f});
  }
}
protected class MFInt32347 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f348 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1977f,0.8169f,-0.0177f});
  }
}
protected class MFInt32349 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f350 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.2117f,0.8562f,-0.0584f});
  }
}
protected class MFInt32351 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f352 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1929f,0.789f,-0.1064f});
  }
}
protected class MFInt32353 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f354 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.3f,0.75f,0.45f});
  }
}
protected class MFString355 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_r_hand_front_viewpoint"});
  }
}
protected class MFFloat356 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString357 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFInt32358 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f359 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1924f,0.8472f,-0.0534f,-0.1951f,0.8226f,0.0246f});
  }
}
protected class MFInt32360 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f361 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f,0.8226f,0.0246f,-0.1955f,0.8159f,0.0464f});
  }
}
protected class MFInt32362 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f363 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1955f,0.8159f,0.0464f,-0.1869f,0.809f,0.082f});
  }
}
protected class MFInt32364 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f365 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1983f,0.8024f,-0.028f,-0.1983f,0.7815f,-0.028f});
  }
}
protected class MFInt32366 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f367 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1983f,0.7815f,-0.028f,-0.2017f,0.7363f,-0.0248f});
  }
}
protected class MFInt32368 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f369 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2017f,0.7363f,-0.0248f,-0.2028f,0.7139f,-0.0236f});
  }
}
protected class MFInt32370 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f371 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2028f,0.7139f,-0.0236f,-0.198f,0.6883f,-0.018f});
  }
}
protected class MFInt32372 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f373 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2028f,0.7139f,-0.0236f,-0.1941f,0.6772f,-0.0423f});
  }
}
protected class MFInt32374 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f375 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1987f,0.8029f,-0.053f,-0.1987f,0.7818f,-0.053f});
  }
}
protected class MFInt32376 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f377 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1987f,0.7818f,-0.053f,-0.2013f,0.7273f,-0.0503f});
  }
}
protected class MFInt32378 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f379 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2013f,0.7273f,-0.0503f,-0.2026f,0.7011f,-0.0494f});
  }
}
protected class MFInt32380 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f381 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2026f,0.7011f,-0.0494f,-0.1969f,0.6758f,-0.0427f});
  }
}
protected class MFInt32382 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f383 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1956f,0.8019f,-0.0794f,-0.1956f,0.7815f,-0.0794f});
  }
}
protected class MFInt32384 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f385 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1956f,0.7815f,-0.0794f,-0.1973f,0.7287f,-0.0777f});
  }
}
protected class MFInt32386 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f387 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1973f,0.7287f,-0.0777f,-0.1983f,0.7045f,-0.0767f});
  }
}
protected class MFInt32388 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f389 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1983f,0.7045f,-0.0767f,-0.1934f,0.6778f,-0.0693f});
  }
}
protected class MFInt32390 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f391 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1925f,0.8066f,-0.1036f,-0.1925f,0.7866f,-0.1036f});
  }
}
protected class MFInt32392 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f393 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1925f,0.7866f,-0.1036f,-0.1938f,0.7452f,-0.1024f});
  }
}
protected class MFInt32394 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f395 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1938f,0.7452f,-0.1024f,-0.1948f,0.7277f,-0.1017f});
  }
}
protected class MFInt32396 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f397 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1948f,0.7277f,-0.1017f,-0.1938f,0.7035f,-0.0949f});
  }
}
protected class MFString398 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_inclined_viewpoint"});
  }
}
protected class MFFloat399 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString400 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString401 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_r_inclined_viewpoint"});
  }
}
protected class MFFloat402 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString403 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString404 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_front_viewpoint"});
  }
}
protected class MFFloat405 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString406 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString407 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_back_viewpoint"});
  }
}
protected class MFFloat408 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString409 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString410 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_side_viewpoint"});
  }
}
protected class MFFloat411 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString412 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString413 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_Top_viewpoint"});
  }
}
protected class MFFloat414 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString415 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString416 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_front_close_viewpoint"});
  }
}
protected class MFFloat417 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString418 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString419 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_side_close_viewpoint"});
  }
}
protected class MFFloat420 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString421 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString422 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_head_front_close_viewpoint"});
  }
}
protected class MFFloat423 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString424 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString425 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_chest_front_close_viewpoint"});
  }
}
protected class MFFloat426 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString427 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString428 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_pelvis_front_close_viewpoint"});
  }
}
protected class MFFloat429 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString430 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString431 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_knees_front_close_viewpoint"});
  }
}
protected class MFFloat432 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString433 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString434 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_feet_front_close_viewpoint"});
  }
}
protected class MFFloat435 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString436 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString437 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_eye_level_viewpoint"});
  }
}
protected class MFFloat438 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString439 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
}