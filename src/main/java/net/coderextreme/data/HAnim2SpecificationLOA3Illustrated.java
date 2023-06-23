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
public class HAnim2SpecificationLOA3Illustrated {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new HAnim2SpecificationLOA3Illustrated().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/HAnim2SpecificationLOA3Illustrated.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("HAnim2SpecificationLOA3Illustrated.x3d"))
        .addMeta(new meta().setName("description").setContent("HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template."))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"))
        .addMeta(new meta().setName("created").setContent("18 February 2021"))
        .addMeta(new meta().setName("modified").setContent("23 December 2021"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("reference").setContent("HAnim2SpecificationLOA3Invisible.x3d"))
        .addMeta(new meta().setName("reference").setContent("HAnim2SpecificationLOA3Animation.x3d"))
        .addMeta(new meta().setName("reference").setContent("HAnimSpecificationExampleChangeLog.txt"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA1.png"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA2.png"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA3.png"))
        .addMeta(new meta().setName("TODO").setContent("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"))
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
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Illustrated.x3d"))
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
        .addChild(new HAnimHumanoid().setName("humanoid").setDEF("hanim_humanoid").setLoa(3).setVersion("2.0")
          .addComments("original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'")
          .addComments("Only one root HAnimJoint is allowed")
          .addComments("original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'")
          .addComments("Only one root HAnimJoint is allowed")
          .addComments("USE nodes go here for access by inverse kinematics (IK) engines and other tools")
          .addComments("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation")
          .addComments("original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'")
          .addComments("Only one root HAnimJoint is expected")
          .addComments("USE nodes go here for access by inverse kinematics (IK) engines and other tools")
          .addComments("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation")
          .addComments("original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'")
          .addComments("Only one root HAnimJoint is expected")
          .addComments("USE nodes go here for access by inverse kinematics (IK) engines and other tools")
          .addComments("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation")
          .addComments("original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'")
          .addComments("Only one root HAnimJoint is expected")
          .addComments("USE nodes go here for access by inverse kinematics (IK) engines and other tools")
          .addComments("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation")
          .addComments("original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'")
          .addComments("Only one root HAnimJoint is expected")
          .addComments("USE nodes go here for access by inverse kinematics (IK) engines and other tools")
          .addComments("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation")
          .addComments("original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'")
          .addComments("Only one root HAnimJoint is expected")
          .addComments("USE nodes go here for access by inverse kinematics (IK) engines and other tools")
          .addComments("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation")
          .addComments("original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'")
          .addComments("Only one root HAnimJoint is expected")
          .addComments("USE nodes go here for access by inverse kinematics (IK) engines and other tools")
          .addComments("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation")
          .addComments("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default")
          .addComments("original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'")
          .addComments("Only one root HAnimJoint is expected")
          .addComments("USE nodes go here for access by inverse kinematics (IK) engines and other tools")
          .addComments("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation")
          .addComments("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default")
          .addComments("original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'")
          .addComments("Only one root HAnimJoint is expected")
          .addComments("USE nodes go here for access by inverse kinematics (IK) engines and other tools")
          .addComments("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation")
          .addComments("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default")
          .addComments("original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'")
          .addComments("Only one root HAnimJoint is expected")
          .addComments("USE nodes go here for access by inverse kinematics (IK) engines and other tools")
          .addComments("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation")
          .addComments("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default")
          .addComments("original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'")
          .addComments("Only one root HAnimJoint is expected")
          .addComments("USE nodes go here for access by inverse kinematics (IK) engines and other tools")
          .addComments("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation")
          .addComments("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default")
          .addComments("original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'")
          .addComments("Only one root HAnimJoint is expected")
          .addComments("USE nodes go here for access by inverse kinematics (IK) engines and other tools")
          .addComments("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation")
          .addComments("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default")
          .addComments("original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'")
          .addComments("Only one root HAnimJoint is expected")
          .addComments("USE nodes go here for access by inverse kinematics (IK) engines and other tools")
          .addComments("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation")
          .addComments("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default")
          .addComments("original HAnimHumanoid info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'")
          .addComments("Only one root HAnimJoint is expected")
          .addComments("USE nodes go here for access by inverse kinematics (IK) engines and other tools")
          .addComments("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation")
          .addComments("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default")
          .addComments("right between the eyes, stationary position not animating except with body itself")
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .addValue(new MetadataString().setName("authorName").setValue(new MFString2().getArray()))
            .addValue(new MetadataString().setName("authorEmail").setValue(new MFString3().getArray()))
            .addValue(new MetadataString().setName("copyright").setValue(new MFString4().getArray()))
            .addValue(new MetadataString().setName("creationDate").setValue(new MFString5().getArray()))
            .addValue(new MetadataFloat().setName("height").setValue(new MFFloat6().getArray()))
            .addValue(new MetadataString().setName("humanoidVersion").setValue(new MFString7().getArray()))
            .addValue(new MetadataString().setName("usageRestrictions").setValue(new MFString8().getArray())))
          .addSkeleton(new HAnimJoint().setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new float[] {0f,0.824f,0.0277f}).setUlimit(new MFFloat9().getArray()).setLlimit(new MFFloat10().getArray())
            .addChild(new HAnimSegment().setName("sacrum").setDEF("hanim_sacrum")
              .addComments("Visualization sphere for <HAnimJoint name='humanoid_root'/> is placed within <HAnimSegment name='sacrum'/>")
              .addChild(new TouchSensor().setDescription("HAnimJoint humanoid_root, HAnimSegment sacrum"))
              .addChild(new Transform().setTranslation(new float[] {0f,0.824f,0.0277f})
                .addChild(new Shape().setDEF("HAnimJointShape")
                  .setGeometry(new Sphere().setRadius(0.006f))
                  .setAppearance(new Appearance().setDEF("HAnimJointAppearance")
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,0.5f,0f}).setTransparency(0.5f)))))
              .addComments("HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='sacroiliac'/>")
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3211().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f12().getArray()))
                  .setColor(new ColorRGBA().setDEF("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA13().getArray()))))
              .addComments("HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='vl5'/>")
              .addChild(new Shape()
                .setGeometry(new LineSet().setVertexCount(new MFInt3214().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f15().getArray()))
                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
            .addChild(new HAnimJoint().setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0f,0.9149f,0.0016f}).setUlimit(new MFFloat16().getArray()).setLlimit(new MFFloat17().getArray())
              .addChild(new HAnimSegment().setName("pelvis").setDEF("hanim_pelvis")
                .addComments("Visualization sphere for <HAnimJoint name='sacroiliac'/> is placed within <HAnimSegment name='pelvis'/>")
                .addChild(new TouchSensor().setDescription("HAnimJoint sacroiliac, HAnimSegment pelvis"))
                .addChild(new Transform().setTranslation(new float[] {0f,0.9149f,0.0016f})
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addComments("HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='l_hip'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3218().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f19().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addComments("HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='r_hip'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3220().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f21().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale_pt'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3222().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f23().getArray()))
                    .setColor(new ColorRGBA().setDEF("HAnimSiteLineColorRGBA").setColor(new MFColorRGBA24().getArray()))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion_pt'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3225().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale_pt'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3227().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f28().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion_pt'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3229().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis_pt'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3231().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f32().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis_pt'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3233().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis_pt'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3235().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f36().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis_pt'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3237().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch_pt'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt3239().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f40().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addChild(new HAnimSite().setName("r_iliocristale_pt").setDEF("hanim_r_iliocristale_pt").setTranslation(new float[] {-0.1525f,1.0628f,0.0035f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite r_iliocristale_pt"))
                  .addChild(new Shape().setDEF("HAnimSiteShape")
                    .setGeometry(new IndexedFaceSet().setDEF("DiamondIFS").setCoordIndex(new MFInt3241().getArray()).setCreaseAngle(0.5f).setSolid(false)
                      .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray())))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f})))))
                .addChild(new HAnimSite().setName("r_trochanterion_pt").setDEF("hanim_r_trochanterion_pt").setTranslation(new float[] {-0.1689f,0.8419f,0.0352f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite r_trochanterion_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("l_iliocristale_pt").setDEF("hanim_l_iliocristale_pt").setTranslation(new float[] {0.1612f,1.0537f,0.0008f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite l_iliocristale_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("l_trochanterion_pt").setDEF("hanim_l_trochanterion_pt").setTranslation(new float[] {0.1677f,0.8336f,0.0303f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite l_trochanterion_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("r_asis_pt").setDEF("hanim_r_asis_pt").setTranslation(new float[] {-0.0887f,1.0021f,0.1112f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite r_asis_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("l_asis_pt").setDEF("hanim_l_asis_pt").setTranslation(new float[] {0.0925f,0.9983f,0.1052f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite l_asis_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("r_psis_pt").setDEF("hanim_r_psis_pt").setTranslation(new float[] {-0.0716f,1.019f,-0.1138f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite r_psis_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("l_psis_pt").setDEF("hanim_l_psis_pt").setTranslation(new float[] {0.0774f,1.019f,-0.1151f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite l_psis_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("crotch_pt").setDEF("hanim_crotch_pt").setTranslation(new float[] {0.0034f,0.8266f,0.0257f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite crotch_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
              .addChild(new HAnimJoint().setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {0.0961f,0.9124f,-0.0001f}).setUlimit(new MFFloat43().getArray()).setLlimit(new MFFloat44().getArray())
                .addChild(new HAnimSegment().setName("l_thigh").setDEF("hanim_l_thigh")
                  .addComments("Visualization sphere for <HAnimJoint name='l_hip'/> is placed within <HAnimSegment name='l_thigh'/>")
                  .addChild(new TouchSensor().setDescription("HAnimJoint l_hip, HAnimSegment l_thigh"))
                  .addChild(new Transform().setTranslation(new float[] {0.0961f,0.9124f,-0.0001f})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_hip'/> to child <HAnimJoint name='l_knee'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3245().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease_pt'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3247().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f48().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn_pt'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3249().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn_pt'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3251().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f52().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addChild(new HAnimSite().setName("l_knee_crease_pt").setDEF("hanim_l_knee_crease_pt").setTranslation(new float[] {0.0993f,0.4881f,-0.0309f})
                    .addComments("HAnimSite visualization shape")
                    .addChild(new TouchSensor().setDescription("HAnimSite l_knee_crease_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("l_femoral_lateral_epicondyle_pt").setDEF("hanim_l_femoral_lateral_epicondyle_pt").setTranslation(new float[] {0.1598f,0.4967f,0.0297f})
                    .addComments("HAnimSite visualization shape")
                    .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_lateral_epicn_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("l_femoral_medial_epicondyle_pt").setDEF("hanim_l_femoral_medial_epicondyle_pt").setTranslation(new float[] {0.0398f,0.4946f,0.0303f})
                    .addComments("HAnimSite visualization shape")
                    .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_medial_epicn_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint().setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {0.104f,0.4867f,0.0308f}).setUlimit(new MFFloat53().getArray()).setLlimit(new MFFloat54().getArray())
                  .addChild(new HAnimSegment().setName("l_calf").setDEF("hanim_l_calf")
                    .addComments("Visualization sphere for <HAnimJoint name='l_knee'/> is placed within <HAnimSegment name='l_calf'/>")
                    .addChild(new TouchSensor().setDescription("HAnimJoint l_knee, HAnimSegment l_calf"))
                    .addChild(new Transform().setTranslation(new float[] {0.104f,0.4867f,0.0308f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_knee'/> to child <HAnimJoint name='l_talocrural'/>")
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3255().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f56().getArray()))
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                  .addChild(new HAnimJoint().setName("l_talocrural").setDEF("hanim_l_talocrural").setCenter(new float[] {0.1101f,0.0656f,-0.0736f}).setUlimit(new MFFloat57().getArray()).setLlimit(new MFFloat58().getArray())
                    .addChild(new HAnimSegment().setName("l_talus").setDEF("hanim_l_talus")
                      .addComments("Visualization sphere for <HAnimJoint name='l_talocrural'/> is placed within <HAnimSegment name='l_talus'/>")
                      .addChild(new TouchSensor().setDescription("HAnimJoint l_talocrural, HAnimSegment l_talus"))
                      .addChild(new Transform().setTranslation(new float[] {0.1101f,0.0656f,-0.0736f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_talocrural'/> to child <HAnimJoint name='l_tarsometatarsal_2'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3259().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f60().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_lateral_malleolus_pt'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3261().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f62().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_medial_malleolus_pt'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3263().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f64().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_sphyrion_pt'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3265().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f66().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_calcaneous_post_pt'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt3267().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f68().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addChild(new HAnimSite().setName("l_lateral_malleolus_pt").setDEF("hanim_l_lateral_malleolus_pt").setTranslation(new float[] {0.1308f,0.0597f,-0.1032f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite l_lateral_malleolus_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("l_medial_malleolus_pt").setDEF("hanim_l_medial_malleolus_pt").setTranslation(new float[] {0.089f,0.0716f,-0.0881f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite l_medial_malleolus_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("l_sphyrion_pt").setDEF("hanim_l_sphyrion_pt").setTranslation(new float[] {0.089f,0.0575f,-0.0943f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite l_sphyrion_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("l_calcaneus_posterior_pt").setDEF("hanim_l_calcaneus_posterior_pt").setTranslation(new float[] {0.0974f,0.0259f,-0.1171f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite l_calcaneous_post_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                    .addChild(new HAnimJoint().setName("l_tarsometatarsal_2").setDEF("hanim_l_tarsometatarsal_2").setCenter(new float[] {0.1086f,0.0001f,-0.0368f}).setUlimit(new MFFloat69().getArray()).setLlimit(new MFFloat70().getArray())
                      .addChild(new HAnimSegment().setName("l_metatarsal_2").setDEF("hanim_l_metatarsal_2")
                        .addComments("Visualization sphere for <HAnimJoint name='l_tarsometatarsal_2'/> is placed within <HAnimSegment name='l_metatarsal_2'/>")
                        .addChild(new TouchSensor().setDescription("HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2"))
                        .addChild(new Transform().setTranslation(new float[] {0.1086f,0.0001f,-0.0368f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_tarsometatarsal_2'/> to child <HAnimJoint name='l_metatarsophalangeal_2'/>")
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt3271().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f72().getArray()))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint().setName("l_metatarsophalangeal_2").setDEF("hanim_l_metatarsophalangeal_2").setCenter(new float[] {0.1086f,0.0001f,0.0368f}).setUlimit(new MFFloat73().getArray()).setLlimit(new MFFloat74().getArray())
                        .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_2").setDEF("hanim_l_tarsal_proximal_phalanx_2")
                          .addComments("Visualization sphere for <HAnimJoint name='l_metatarsophalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_proximal_phalanx_2'/>")
                          .addChild(new TouchSensor().setDescription("HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2"))
                          .addChild(new Transform().setTranslation(new float[] {0.1086f,0.0001f,0.0368f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_metatarsophalangeal_2'/> to child <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/>")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3275().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f76().getArray()))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsophalangeal_2'/> to <HAnimSite name='l_metatarsal_pha1_pt'/>")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt3277().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f78().getArray()))
                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                          .addChild(new HAnimSite().setName("l_metatarsal_phalanx_1_pt").setDEF("hanim_l_metatarsal_phalanx_1_pt").setTranslation(new float[] {0.0816f,0.0232f,0.0106f})
                            .addComments("HAnimSite visualization shape")
                            .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_pha1_pt"))
                            .addChild(new Shape().setUSE("HAnimSiteShape"))))
                        .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setCenter(new float[] {0.1086f,0f,0.0762f}).setUlimit(new MFFloat79().getArray()).setLlimit(new MFFloat80().getArray())
                          .addChild(new HAnimSegment().setName("l_tarsal_distal_phalanx_2").setDEF("hanim_l_tarsal_distal_phalanx_2")
                            .addComments("Visualization sphere for <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_distal_phalanx_2'/>")
                            .addChild(new TouchSensor().setDescription("HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2"))
                            .addChild(new Transform().setTranslation(new float[] {0.1086f,0f,0.0762f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_forefoot_tip'/>")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3281().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f82().getArray()))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_metatarsal_pha5_pt'/>")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3283().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f84().getArray()))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_digit2_pt'/>")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt3285().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray()))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addChild(new HAnimSite().setName("l_forefoot_tip_pt").setDEF("hanim_l_forefoot_tip_pt").setTranslation(new float[] {0.1354f,0.0016f,0.1476f})
                              .addComments("HAnimSite visualization shape")
                              .addChild(new TouchSensor().setDescription("HAnimSite l_forefoot_tip"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite().setName("l_metatarsal_phalanx_5_pt").setDEF("hanim_l_metatarsal_phalanx_5_pt").setTranslation(new float[] {0.1825f,0.007f,0.0928f})
                              .addComments("HAnimSite visualization shape")
                              .addChild(new TouchSensor().setDescription("HAnimSite l_metatarsal_pha5_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite().setName("l_tarsal_distal_phalanx_2_pt").setDEF("hanim_l_tarsal_distal_phalanx_2_pt").setTranslation(new float[] {0.1195f,0.0079f,0.1433f})
                              .addComments("HAnimSite visualization shape")
                              .addChild(new TouchSensor().setDescription("HAnimSite l_digit2_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape"))))))))))
              .addChild(new HAnimJoint().setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-0.0961f,0.9124f,-0.0001f}).setUlimit(new MFFloat87().getArray()).setLlimit(new MFFloat88().getArray())
                .addChild(new HAnimSegment().setName("r_thigh").setDEF("hanim_r_thigh")
                  .addComments("Visualization sphere for <HAnimJoint name='r_hip'/> is placed within <HAnimSegment name='r_thigh'/>")
                  .addChild(new TouchSensor().setDescription("HAnimJoint r_hip, HAnimSegment r_thigh"))
                  .addChild(new Transform().setTranslation(new float[] {-0.0961f,0.9124f,-0.0001f})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_hip'/> to child <HAnimJoint name='r_knee'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3289().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f90().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease_pt'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3291().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f92().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn_pt'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3293().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f94().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn_pt'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt3295().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f96().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                  .addChild(new HAnimSite().setName("r_knee_crease_pt").setDEF("hanim_r_knee_crease_pt").setTranslation(new float[] {-0.0825f,0.4932f,-0.0326f})
                    .addComments("HAnimSite visualization shape")
                    .addChild(new TouchSensor().setDescription("HAnimSite r_knee_crease_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("r_femoral_lateral_epicondyle_pt").setDEF("hanim_r_femoral_lateral_epicondyle_pt").setTranslation(new float[] {-0.1421f,0.4992f,0.031f})
                    .addComments("HAnimSite visualization shape")
                    .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_lateral_epicn_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite().setName("r_femoral_medial_epicondyle_pt").setDEF("hanim_r_femoral_medial_epicondyle_pt").setTranslation(new float[] {-0.0221f,0.5014f,0.0289f})
                    .addComments("HAnimSite visualization shape")
                    .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_medial_epicn_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint().setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-0.104f,0.4867f,0.0308f}).setUlimit(new MFFloat97().getArray()).setLlimit(new MFFloat98().getArray())
                  .addChild(new HAnimSegment().setName("r_calf").setDEF("hanim_r_calf")
                    .addComments("Visualization sphere for <HAnimJoint name='r_knee'/> is placed within <HAnimSegment name='r_calf'/>")
                    .addChild(new TouchSensor().setDescription("HAnimJoint r_knee, HAnimSegment r_calf"))
                    .addChild(new Transform().setTranslation(new float[] {-0.104f,0.4867f,0.0308f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_knee'/> to child <HAnimJoint name='r_talocrural'/>")
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt3299().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f100().getArray()))
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                  .addChild(new HAnimJoint().setName("r_talocrural").setDEF("hanim_r_talocrural").setCenter(new float[] {-0.1101f,0.0656f,-0.0736f}).setUlimit(new MFFloat101().getArray()).setLlimit(new MFFloat102().getArray())
                    .addChild(new HAnimSegment().setName("r_talus").setDEF("hanim_r_talus")
                      .addComments("Visualization sphere for <HAnimJoint name='r_talocrural'/> is placed within <HAnimSegment name='r_talus'/>")
                      .addChild(new TouchSensor().setDescription("HAnimJoint r_talocrural, HAnimSegment r_talus"))
                      .addChild(new Transform().setTranslation(new float[] {-0.1101f,0.0656f,-0.0736f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_talocrural'/> to child <HAnimJoint name='r_tarsometatarsal_2'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32103().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f104().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_lateral_malleolus_pt'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32105().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f106().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_medial_malleolus_pt'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32107().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f108().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_sphyrion_pt'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32109().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_calcaneous_post_pt'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32111().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f112().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addChild(new HAnimSite().setName("r_lateral_malleolus_pt").setDEF("hanim_r_lateral_malleolus_pt").setTranslation(new float[] {-0.1006f,0.0658f,-0.1075f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite r_lateral_malleolus_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("r_medial_malleolus_pt").setDEF("hanim_r_medial_malleolus_pt").setTranslation(new float[] {-0.0591f,0.076f,-0.0928f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite r_medial_malleolus_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("r_sphyrion_pt").setDEF("hanim_r_sphyrion_pt").setTranslation(new float[] {-0.0603f,0.061f,-0.1002f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite r_sphyrion_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("r_calcaneus_posterior_pt").setDEF("hanim_r_calcaneus_posterior_pt").setTranslation(new float[] {-0.0692f,0.0297f,-0.1221f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite r_calcaneous_post_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                    .addChild(new HAnimJoint().setName("r_tarsometatarsal_2").setDEF("hanim_r_tarsometatarsal_2").setCenter(new float[] {-0.1086f,0.0001f,-0.0368f}).setUlimit(new MFFloat113().getArray()).setLlimit(new MFFloat114().getArray())
                      .addChild(new HAnimSegment().setName("r_metatarsal_2").setDEF("hanim_r_metatarsal_2")
                        .addComments("Visualization sphere for <HAnimJoint name='r_tarsometatarsal_2'/> is placed within <HAnimSegment name='r_metatarsal_2'/>")
                        .addChild(new TouchSensor().setDescription("HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2"))
                        .addChild(new Transform().setTranslation(new float[] {-0.1086f,0.0001f,-0.0368f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_tarsometatarsal_2'/> to child <HAnimJoint name='r_metatarsophalangeal_2'/>")
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32115().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f116().getArray()))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint().setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new float[] {-0.1086f,0.0001f,0.0368f}).setUlimit(new MFFloat117().getArray()).setLlimit(new MFFloat118().getArray())
                        .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2")
                          .addComments("Visualization sphere for <HAnimJoint name='r_metatarsophalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_proximal_phalanx_2'/>")
                          .addChild(new TouchSensor().setDescription("HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2"))
                          .addChild(new Transform().setTranslation(new float[] {-0.1086f,0.0001f,0.0368f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_metatarsophalangeal_2'/> to child <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/>")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32119().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f120().getArray()))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsophalangeal_2'/> to <HAnimSite name='r_metatarsal_pha1_pt'/>")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32121().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f122().getArray()))
                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                          .addChild(new HAnimSite().setName("r_metatarsal_phalanx_1_pt").setDEF("hanim_r_metatarsal_phalanx_1_pt").setTranslation(new float[] {-0.0521f,0.026f,0.0127f})
                            .addComments("HAnimSite visualization shape")
                            .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_pha1_pt"))
                            .addChild(new Shape().setUSE("HAnimSiteShape"))))
                        .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setCenter(new float[] {-0.1086f,0f,0.0762f}).setUlimit(new MFFloat123().getArray()).setLlimit(new MFFloat124().getArray())
                          .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_2").setDEF("hanim_r_tarsal_distal_phalanx_2")
                            .addComments("Visualization sphere for <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_distal_phalanx_2'/>")
                            .addChild(new TouchSensor().setDescription("HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2"))
                            .addChild(new Transform().setTranslation(new float[] {-0.1086f,0f,0.0762f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_forefoot_tip'/>")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32125().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f126().getArray()))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_metatarsal_pha5_pt'/>")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32127().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f128().getArray()))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_digit2_pt'/>")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32129().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f130().getArray()))
                                .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                            .addChild(new HAnimSite().setName("r_forefoot_tip_pt").setDEF("hanim_r_forefoot_tip_pt").setTranslation(new float[] {-0.1043f,0.0227f,0.145f})
                              .addComments("HAnimSite visualization shape")
                              .addChild(new TouchSensor().setDescription("HAnimSite r_forefoot_tip"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite().setName("r_metatarsal_phalanx_5_pt").setDEF("hanim_r_metatarsal_phalanx_5_pt").setTranslation(new float[] {-0.1523f,0.0166f,0.0895f})
                              .addComments("HAnimSite visualization shape")
                              .addChild(new TouchSensor().setDescription("HAnimSite r_metatarsal_pha5_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))
                            .addChild(new HAnimSite().setName("r_tarsal_distal_phalanx_2_pt").setDEF("hanim_r_tarsal_distal_phalanx_2_pt").setTranslation(new float[] {-0.0883f,0.0134f,0.1383f})
                              .addComments("HAnimSite visualization shape")
                              .addChild(new TouchSensor().setDescription("HAnimSite r_digit2_pt"))
                              .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))
            .addChild(new HAnimJoint().setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0.0028f,1.0568f,-0.0776f}).setUlimit(new MFFloat131().getArray()).setLlimit(new MFFloat132().getArray())
              .addChild(new HAnimSegment().setName("l5").setDEF("hanim_l5")
                .addComments("Visualization sphere for <HAnimJoint name='vl5'/> is placed within <HAnimSegment name='l5'/>")
                .addChild(new TouchSensor().setDescription("HAnimJoint vl5, HAnimSegment l5"))
                .addChild(new Transform().setTranslation(new float[] {0.0028f,1.0568f,-0.0776f})
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addComments("HAnimSegment visualization line from current <HAnimJoint name='vl5'/> to child <HAnimJoint name='vl4'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32133().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f134().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post_pt'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32135().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f136().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel_pt'/>")
                .addChild(new Shape()
                  .setGeometry(new LineSet().setVertexCount(new MFInt32137().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f138().getArray()))
                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                .addChild(new HAnimSite().setName("waist_preferred_posterior_pt").setDEF("hanim_waist_preferred_posterior_pt").setTranslation(new float[] {0f,1.0915f,-0.1091f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_post_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite().setName("navel_pt").setDEF("hanim_navel_pt").setTranslation(new float[] {0.0069f,1.0966f,0.1017f})
                  .addComments("HAnimSite visualization shape")
                  .addChild(new TouchSensor().setDescription("HAnimSite navel_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
              .addChild(new HAnimJoint().setName("vl4").setDEF("hanim_vl4").setCenter(new float[] {0.0035f,1.0925f,-0.0787f}).setUlimit(new MFFloat139().getArray()).setLlimit(new MFFloat140().getArray())
                .addChild(new HAnimSegment().setName("l4").setDEF("hanim_l4")
                  .addComments("Visualization sphere for <HAnimJoint name='vl4'/> is placed within <HAnimSegment name='l4'/>")
                  .addChild(new TouchSensor().setDescription("HAnimJoint vl4, HAnimSegment l4"))
                  .addChild(new Transform().setTranslation(new float[] {0.0035f,1.0925f,-0.0787f})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addComments("HAnimSegment visualization line from current <HAnimJoint name='vl4'/> to child <HAnimJoint name='vl3'/>")
                  .addChild(new Shape()
                    .setGeometry(new LineSet().setVertexCount(new MFInt32141().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f142().getArray()))
                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                .addChild(new HAnimJoint().setName("vl3").setDEF("hanim_vl3").setCenter(new float[] {0.0041f,1.1276f,-0.0796f}).setUlimit(new MFFloat143().getArray()).setLlimit(new MFFloat144().getArray())
                  .addChild(new HAnimSegment().setName("l3").setDEF("hanim_l3")
                    .addComments("Visualization sphere for <HAnimJoint name='vl3'/> is placed within <HAnimSegment name='l3'/>")
                    .addChild(new TouchSensor().setDescription("HAnimJoint vl3, HAnimSegment l3"))
                    .addChild(new Transform().setTranslation(new float[] {0.0041f,1.1276f,-0.0796f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addComments("HAnimSegment visualization line from current <HAnimJoint name='vl3'/> to child <HAnimJoint name='vl2'/>")
                    .addChild(new Shape()
                      .setGeometry(new LineSet().setVertexCount(new MFInt32145().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f146().getArray()))
                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                  .addChild(new HAnimJoint().setName("vl2").setDEF("hanim_vl2").setCenter(new float[] {0.0045f,1.1546f,-0.08f}).setUlimit(new MFFloat147().getArray()).setLlimit(new MFFloat148().getArray())
                    .addChild(new HAnimSegment().setName("l2").setDEF("hanim_l2")
                      .addComments("Visualization sphere for <HAnimJoint name='vl2'/> is placed within <HAnimSegment name='l2'/>")
                      .addChild(new TouchSensor().setDescription("HAnimJoint vl2, HAnimSegment l2"))
                      .addChild(new Transform().setTranslation(new float[] {0.0045f,1.1546f,-0.08f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addComments("HAnimSegment visualization line from current <HAnimJoint name='vl2'/> to child <HAnimJoint name='vl1'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32149().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f150().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10_pt'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32151().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f152().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10_pt'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32153().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f154().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine_pt'/>")
                      .addChild(new Shape()
                        .setGeometry(new LineSet().setVertexCount(new MFInt32155().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f156().getArray()))
                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                      .addChild(new HAnimSite().setName("r_rib10_pt").setDEF("hanim_r_rib10_pt").setTranslation(new float[] {-0.0711f,1.1941f,0.1016f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite r_rib10_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("l_rib10_pt").setDEF("hanim_l_rib10_pt").setTranslation(new float[] {0.0871f,1.1925f,0.0992f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite l_rib10_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape")))
                      .addChild(new HAnimSite().setName("rib10_midspine_pt").setDEF("hanim_rib10_midspine_pt").setTranslation(new float[] {0.0049f,1.1908f,-0.1113f})
                        .addComments("HAnimSite visualization shape")
                        .addChild(new TouchSensor().setDescription("HAnimSite rib10_midspine_pt"))
                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                    .addChild(new HAnimJoint().setName("vl1").setDEF("hanim_vl1").setCenter(new float[] {0.0048f,1.1912f,-0.0805f}).setUlimit(new MFFloat157().getArray()).setLlimit(new MFFloat158().getArray())
                      .addChild(new HAnimSegment().setName("l1").setDEF("hanim_l1")
                        .addComments("Visualization sphere for <HAnimJoint name='vl1'/> is placed within <HAnimSegment name='l1'/>")
                        .addChild(new TouchSensor().setDescription("HAnimJoint vl1, HAnimSegment l1"))
                        .addChild(new Transform().setTranslation(new float[] {0.0048f,1.1912f,-0.0805f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addComments("HAnimSegment visualization line from current <HAnimJoint name='vl1'/> to child <HAnimJoint name='vt12'/>")
                        .addChild(new Shape()
                          .setGeometry(new LineSet().setVertexCount(new MFInt32159().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f160().getArray()))
                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                      .addChild(new HAnimJoint().setName("vt12").setDEF("hanim_vt12").setCenter(new float[] {0.0051f,1.2278f,-0.0808f}).setUlimit(new MFFloat161().getArray()).setLlimit(new MFFloat162().getArray())
                        .addChild(new HAnimSegment().setName("t12").setDEF("hanim_t12")
                          .addComments("Visualization sphere for <HAnimJoint name='vt12'/> is placed within <HAnimSegment name='t12'/>")
                          .addChild(new TouchSensor().setDescription("HAnimJoint vt12, HAnimSegment t12"))
                          .addChild(new Transform().setTranslation(new float[] {0.0051f,1.2278f,-0.0808f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addComments("HAnimSegment visualization line from current <HAnimJoint name='vt12'/> to child <HAnimJoint name='vt11'/>")
                          .addChild(new Shape()
                            .setGeometry(new LineSet().setVertexCount(new MFInt32163().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f164().getArray()))
                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                        .addChild(new HAnimJoint().setName("vt11").setDEF("hanim_vt11").setCenter(new float[] {0.0053f,1.2679f,-0.081f}).setUlimit(new MFFloat165().getArray()).setLlimit(new MFFloat166().getArray())
                          .addChild(new HAnimSegment().setName("t11").setDEF("hanim_t11")
                            .addComments("Visualization sphere for <HAnimJoint name='vt11'/> is placed within <HAnimSegment name='t11'/>")
                            .addChild(new TouchSensor().setDescription("HAnimJoint vt11, HAnimSegment t11"))
                            .addChild(new Transform().setTranslation(new float[] {0.0053f,1.2679f,-0.081f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addComments("HAnimSegment visualization line from current <HAnimJoint name='vt11'/> to child <HAnimJoint name='vt10'/>")
                            .addChild(new Shape()
                              .setGeometry(new LineSet().setVertexCount(new MFInt32167().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f168().getArray()))
                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                          .addChild(new HAnimJoint().setName("vt10").setDEF("hanim_vt10").setCenter(new float[] {0.0056f,1.2848f,-0.0822f}).setUlimit(new MFFloat169().getArray()).setLlimit(new MFFloat170().getArray())
                            .addChild(new HAnimSegment().setName("t10").setDEF("hanim_t10")
                              .addComments("Visualization sphere for <HAnimJoint name='vt10'/> is placed within <HAnimSegment name='t10'/>")
                              .addChild(new TouchSensor().setDescription("HAnimJoint vt10, HAnimSegment t10"))
                              .addChild(new Transform().setTranslation(new float[] {0.0056f,1.2848f,-0.0822f})
                                .addChild(new Shape().setUSE("HAnimJointShape")))
                              .addComments("HAnimSegment visualization line from current <HAnimJoint name='vt10'/> to child <HAnimJoint name='vt9'/>")
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32171().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f172().getArray()))
                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                              .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale_pt'/>")
                              .addChild(new Shape()
                                .setGeometry(new LineSet().setVertexCount(new MFInt32173().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f174().getArray()))
                                  .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                              .addChild(new HAnimSite().setName("substernale_pt").setDEF("hanim_substernale_pt").setTranslation(new float[] {0.0085f,1.2995f,0.1147f})
                                .addComments("HAnimSite visualization shape")
                                .addChild(new TouchSensor().setDescription("HAnimSite substernale_pt"))
                                .addChild(new Shape().setUSE("HAnimSiteShape"))))
                            .addChild(new HAnimJoint().setName("vt9").setDEF("hanim_vt9").setCenter(new float[] {0.0057f,1.3126f,-0.0838f}).setUlimit(new MFFloat175().getArray()).setLlimit(new MFFloat176().getArray())
                              .addChild(new HAnimSegment().setName("t9").setDEF("hanim_t9")
                                .addComments("Visualization sphere for <HAnimJoint name='vt9'/> is placed within <HAnimSegment name='t9'/>")
                                .addChild(new TouchSensor().setDescription("HAnimJoint vt9, HAnimSegment t9"))
                                .addChild(new Transform().setTranslation(new float[] {0.0057f,1.3126f,-0.0838f})
                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='vt9'/> to child <HAnimJoint name='vt8'/>")
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32177().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f178().getArray()))
                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion_pt'/>")
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32179().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f180().getArray()))
                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion_pt'/>")
                                .addChild(new Shape()
                                  .setGeometry(new LineSet().setVertexCount(new MFInt32181().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f182().getArray()))
                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                .addChild(new HAnimSite().setName("r_thelion_pt").setDEF("hanim_r_thelion_pt").setTranslation(new float[] {-0.0736f,1.3385f,0.1217f})
                                  .addComments("HAnimSite visualization shape")
                                  .addChild(new TouchSensor().setDescription("HAnimSite r_thelion_pt"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                .addChild(new HAnimSite().setName("l_thelion_pt").setDEF("hanim_l_thelion_pt").setTranslation(new float[] {0.0918f,1.3382f,0.1192f})
                                  .addComments("HAnimSite visualization shape")
                                  .addChild(new TouchSensor().setDescription("HAnimSite l_thelion_pt"))
                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                              .addChild(new HAnimJoint().setName("vt8").setDEF("hanim_vt8").setCenter(new float[] {0.0057f,1.3382f,-0.0845f}).setUlimit(new MFFloat183().getArray()).setLlimit(new MFFloat184().getArray())
                                .addChild(new HAnimSegment().setName("t8").setDEF("hanim_t8")
                                  .addComments("Visualization sphere for <HAnimJoint name='vt8'/> is placed within <HAnimSegment name='t8'/>")
                                  .addChild(new TouchSensor().setDescription("HAnimJoint vt8, HAnimSegment t8"))
                                  .addChild(new Transform().setTranslation(new float[] {0.0057f,1.3382f,-0.0845f})
                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                  .addComments("HAnimSegment visualization line from current <HAnimJoint name='vt8'/> to child <HAnimJoint name='vt7'/>")
                                  .addChild(new Shape()
                                    .setGeometry(new LineSet().setVertexCount(new MFInt32185().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f186().getArray()))
                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                .addChild(new HAnimJoint().setName("vt7").setDEF("hanim_vt7").setCenter(new float[] {0.0058f,1.3625f,-0.0833f}).setUlimit(new MFFloat187().getArray()).setLlimit(new MFFloat188().getArray())
                                  .addChild(new HAnimSegment().setName("t7").setDEF("hanim_t7")
                                    .addComments("Visualization sphere for <HAnimJoint name='vt7'/> is placed within <HAnimSegment name='t7'/>")
                                    .addChild(new TouchSensor().setDescription("HAnimJoint vt7, HAnimSegment t7"))
                                    .addChild(new Transform().setTranslation(new float[] {0.0058f,1.3625f,-0.0833f})
                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                    .addComments("HAnimSegment visualization line from current <HAnimJoint name='vt7'/> to child <HAnimJoint name='vt6'/>")
                                    .addChild(new Shape()
                                      .setGeometry(new LineSet().setVertexCount(new MFInt32189().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f190().getArray()))
                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                  .addChild(new HAnimJoint().setName("vt6").setDEF("hanim_vt6").setCenter(new float[] {0.0059f,1.3866f,-0.08f}).setUlimit(new MFFloat191().getArray()).setLlimit(new MFFloat192().getArray())
                                    .addChild(new HAnimSegment().setName("t6").setDEF("hanim_t6")
                                      .addComments("Visualization sphere for <HAnimJoint name='vt6'/> is placed within <HAnimSegment name='t6'/>")
                                      .addChild(new TouchSensor().setDescription("HAnimJoint vt6, HAnimSegment t6"))
                                      .addChild(new Transform().setTranslation(new float[] {0.0059f,1.3866f,-0.08f})
                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                      .addComments("HAnimSegment visualization line from current <HAnimJoint name='vt6'/> to child <HAnimJoint name='vt5'/>")
                                      .addChild(new Shape()
                                        .setGeometry(new LineSet().setVertexCount(new MFInt32193().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f194().getArray()))
                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                    .addChild(new HAnimJoint().setName("vt5").setDEF("hanim_vt5").setCenter(new float[] {0.006f,1.4102f,-0.0745f}).setUlimit(new MFFloat195().getArray()).setLlimit(new MFFloat196().getArray())
                                      .addChild(new HAnimSegment().setName("t5").setDEF("hanim_t5")
                                        .addComments("Visualization sphere for <HAnimJoint name='vt5'/> is placed within <HAnimSegment name='t5'/>")
                                        .addChild(new TouchSensor().setDescription("HAnimJoint vt5, HAnimSegment t5"))
                                        .addChild(new Transform().setTranslation(new float[] {0.006f,1.4102f,-0.0745f})
                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                        .addComments("HAnimSegment visualization line from current <HAnimJoint name='vt5'/> to child <HAnimJoint name='vt4'/>")
                                        .addChild(new Shape()
                                          .setGeometry(new LineSet().setVertexCount(new MFInt32197().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f198().getArray()))
                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                      .addChild(new HAnimJoint().setName("vt4").setDEF("hanim_vt4").setCenter(new float[] {0.0061f,1.432f,-0.0675f}).setUlimit(new MFFloat199().getArray()).setLlimit(new MFFloat200().getArray())
                                        .addChild(new HAnimSegment().setName("t4").setDEF("hanim_t4")
                                          .addComments("Visualization sphere for <HAnimJoint name='vt4'/> is placed within <HAnimSegment name='t4'/>")
                                          .addChild(new TouchSensor().setDescription("HAnimJoint vt4, HAnimSegment t4"))
                                          .addChild(new Transform().setTranslation(new float[] {0.0061f,1.432f,-0.0675f})
                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                          .addComments("HAnimSegment visualization line from current <HAnimJoint name='vt4'/> to child <HAnimJoint name='vt3'/>")
                                          .addChild(new Shape()
                                            .setGeometry(new LineSet().setVertexCount(new MFInt32201().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f202().getArray()))
                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                        .addChild(new HAnimJoint().setName("vt3").setDEF("hanim_vt3").setCenter(new float[] {0.0062f,1.4583f,-0.057f}).setUlimit(new MFFloat203().getArray()).setLlimit(new MFFloat204().getArray())
                                          .addChild(new HAnimSegment().setName("t3").setDEF("hanim_t3")
                                            .addComments("Visualization sphere for <HAnimJoint name='vt3'/> is placed within <HAnimSegment name='t3'/>")
                                            .addChild(new TouchSensor().setDescription("HAnimJoint vt3, HAnimSegment t3"))
                                            .addChild(new Transform().setTranslation(new float[] {0.0062f,1.4583f,-0.057f})
                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                            .addComments("HAnimSegment visualization line from current <HAnimJoint name='vt3'/> to child <HAnimJoint name='vt2'/>")
                                            .addChild(new Shape()
                                              .setGeometry(new LineSet().setVertexCount(new MFInt32205().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f206().getArray()))
                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                          .addChild(new HAnimJoint().setName("vt2").setDEF("hanim_vt2").setCenter(new float[] {0.0063f,1.4761f,-0.0484f}).setUlimit(new MFFloat207().getArray()).setLlimit(new MFFloat208().getArray())
                                            .addChild(new HAnimSegment().setName("t2").setDEF("hanim_t2")
                                              .addComments("Visualization sphere for <HAnimJoint name='vt2'/> is placed within <HAnimSegment name='t2'/>")
                                              .addChild(new TouchSensor().setDescription("HAnimJoint vt2, HAnimSegment t2"))
                                              .addChild(new Transform().setTranslation(new float[] {0.0063f,1.4761f,-0.0484f})
                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                              .addComments("HAnimSegment visualization line from current <HAnimJoint name='vt2'/> to child <HAnimJoint name='vt1'/>")
                                              .addChild(new Shape()
                                                .setGeometry(new LineSet().setVertexCount(new MFInt32209().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f210().getArray()))
                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                            .addChild(new HAnimJoint().setName("vt1").setDEF("hanim_vt1").setCenter(new float[] {0.0065f,1.4951f,-0.0387f}).setUlimit(new MFFloat211().getArray()).setLlimit(new MFFloat212().getArray())
                                              .addChild(new HAnimSegment().setName("t1").setDEF("hanim_t1")
                                                .addComments("Visualization sphere for <HAnimJoint name='vt1'/> is placed within <HAnimSegment name='t1'/>")
                                                .addChild(new TouchSensor().setDescription("HAnimJoint vt1, HAnimSegment t1"))
                                                .addChild(new Transform().setTranslation(new float[] {0.0065f,1.4951f,-0.0387f})
                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='vc7'/>")
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32213().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f214().getArray()))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='l_sternoclavicular'/>")
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32215().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f216().getArray()))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='r_sternoclavicular'/>")
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32217().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f218().getArray()))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale_pt'/>")
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32219().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f220().getArray()))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale_pt'/>")
                                                .addChild(new Shape()
                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32221().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f222().getArray()))
                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                .addChild(new HAnimSite().setName("suprasternale_pt").setDEF("hanim_suprasternale_pt").setTranslation(new float[] {0.0084f,1.4714f,0.0551f})
                                                  .addComments("HAnimSite visualization shape")
                                                  .addChild(new TouchSensor().setDescription("HAnimSite suprasternale_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                .addChild(new HAnimSite().setName("cervicale_pt").setDEF("hanim_cervicale_pt").setTranslation(new float[] {0.0064f,1.52f,-0.0815f})
                                                  .addComments("HAnimSite visualization shape")
                                                  .addChild(new TouchSensor().setDescription("HAnimSite cervicale_pt"))
                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                              .addChild(new HAnimJoint().setName("vc7").setDEF("hanim_vc7").setCenter(new float[] {0.0066f,1.5132f,-0.0301f}).setUlimit(new MFFloat223().getArray()).setLlimit(new MFFloat224().getArray())
                                                .addChild(new HAnimSegment().setName("c7").setDEF("hanim_c7")
                                                  .addComments("Visualization sphere for <HAnimJoint name='vc7'/> is placed within <HAnimSegment name='c7'/>")
                                                  .addChild(new TouchSensor().setDescription("HAnimJoint vc7, HAnimSegment c7"))
                                                  .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5132f,-0.0301f})
                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                  .addComments("HAnimSegment visualization line from current <HAnimJoint name='vc7'/> to child <HAnimJoint name='vc6'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32225().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f226().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base_pt'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32227().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f228().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base_pt'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32229().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f230().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addChild(new HAnimSite().setName("r_neck_base_pt").setDEF("hanim_r_neck_base_pt").setTranslation(new float[] {-0.0419f,1.5149f,-0.022f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_neck_base_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("l_neck_base_pt").setDEF("hanim_l_neck_base_pt").setTranslation(new float[] {0.0646f,1.5141f,-0.038f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_neck_base_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                .addChild(new HAnimJoint().setName("vc6").setDEF("hanim_vc6").setCenter(new float[] {0.0066f,1.5357f,-0.0143f}).setUlimit(new MFFloat231().getArray()).setLlimit(new MFFloat232().getArray())
                                                  .addChild(new HAnimSegment().setName("c6").setDEF("hanim_c6")
                                                    .addComments("Visualization sphere for <HAnimJoint name='vc6'/> is placed within <HAnimSegment name='c6'/>")
                                                    .addChild(new TouchSensor().setDescription("HAnimJoint vc6, HAnimSegment c6"))
                                                    .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5357f,-0.0143f})
                                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                                    .addComments("HAnimSegment visualization line from current <HAnimJoint name='vc6'/> to child <HAnimJoint name='vc5'/>")
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32233().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f234().getArray()))
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimJoint().setName("vc5").setDEF("hanim_vc5").setCenter(new float[] {0.0066f,1.552f,-0.0082f}).setUlimit(new MFFloat235().getArray()).setLlimit(new MFFloat236().getArray())
                                                    .addChild(new HAnimSegment().setName("c5").setDEF("hanim_c5")
                                                      .addComments("Visualization sphere for <HAnimJoint name='vc5'/> is placed within <HAnimSegment name='c5'/>")
                                                      .addChild(new TouchSensor().setDescription("HAnimJoint vc5, HAnimSegment c5"))
                                                      .addChild(new Transform().setTranslation(new float[] {0.0066f,1.552f,-0.0082f})
                                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                                      .addComments("HAnimSegment visualization line from current <HAnimJoint name='vc5'/> to child <HAnimJoint name='vc4'/>")
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32237().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f238().getArray()))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                    .addChild(new HAnimJoint().setName("vc4").setDEF("hanim_vc4").setCenter(new float[] {0.0066f,1.5662f,-0.0084f}).setUlimit(new MFFloat239().getArray()).setLlimit(new MFFloat240().getArray())
                                                      .addChild(new HAnimSegment().setName("c4").setDEF("hanim_c4")
                                                        .addComments("Visualization sphere for <HAnimJoint name='vc4'/> is placed within <HAnimSegment name='c4'/>")
                                                        .addChild(new TouchSensor().setDescription("HAnimJoint vc4, HAnimSegment c4"))
                                                        .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5662f,-0.0084f})
                                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                                        .addComments("HAnimSegment visualization line from current <HAnimJoint name='vc4'/> to child <HAnimJoint name='vc3'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32241().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f242().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                      .addChild(new HAnimJoint().setName("vc3").setDEF("hanim_vc3").setCenter(new float[] {0.0066f,1.58f,-0.0103f}).setUlimit(new MFFloat243().getArray()).setLlimit(new MFFloat244().getArray())
                                                        .addChild(new HAnimSegment().setName("c3").setDEF("hanim_c3")
                                                          .addComments("Visualization sphere for <HAnimJoint name='vc3'/> is placed within <HAnimSegment name='c3'/>")
                                                          .addChild(new TouchSensor().setDescription("HAnimJoint vc3, HAnimSegment c3"))
                                                          .addChild(new Transform().setTranslation(new float[] {0.0066f,1.58f,-0.0103f})
                                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                                          .addComments("HAnimSegment visualization line from current <HAnimJoint name='vc3'/> to child <HAnimJoint name='vc2'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32245().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f246().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                        .addChild(new HAnimJoint().setName("vc2").setDEF("hanim_vc2").setCenter(new float[] {0.0066f,1.5928f,-0.0103f}).setUlimit(new MFFloat247().getArray()).setLlimit(new MFFloat248().getArray())
                                                          .addChild(new HAnimSegment().setName("c2").setDEF("hanim_c2")
                                                            .addComments("Visualization sphere for <HAnimJoint name='vc2'/> is placed within <HAnimSegment name='c2'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint vc2, HAnimSegment c2"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5928f,-0.0103f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line from current <HAnimJoint name='vc2'/> to child <HAnimJoint name='vc1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32249().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f250().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("vc1").setDEF("hanim_vc1").setCenter(new float[] {0.0066f,1.6144f,-0.0034f}).setUlimit(new MFFloat251().getArray()).setLlimit(new MFFloat252().getArray())
                                                            .addChild(new HAnimSegment().setName("c1").setDEF("hanim_c1")
                                                              .addComments("Visualization sphere for <HAnimJoint name='vc1'/> is placed within <HAnimSegment name='c1'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint vc1, HAnimSegment c1"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.0066f,1.6144f,-0.0034f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line from current <HAnimJoint name='vc1'/> to child <HAnimJoint name='skullbase'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32253().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f254().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0.0044f,1.6209f,0.0236f}).setUlimit(new MFFloat255().getArray()).setLlimit(new MFFloat256().getArray())
                                                              .addChild(new HAnimSegment().setName("skull").setDEF("hanim_skull")
                                                                .addComments("Visualization sphere for <HAnimJoint name='skullbase'/> is placed within <HAnimSegment name='skull'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint skullbase, HAnimSegment skull"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.0044f,1.6209f,0.0236f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyeball_joint'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32257().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f258().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyelid_joint'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32259().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f260().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyebrow_joint'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32261().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f262().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyeball_joint'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32263().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f264().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyelid_joint'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32265().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f266().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyebrow_joint'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32267().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f268().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='temporomandibular'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32269().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f270().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32271().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f272().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion_pt'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32273().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f274().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale_pt'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32275().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f276().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale_pt'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32277().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f278().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton_pt'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32279().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f280().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion_pt'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32281().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f282().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion_pt'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32283().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f284().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion_pt'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32285().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f286().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion_pt'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32287().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f288().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale_pt'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32289().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f290().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addChild(new HAnimSite().setName("skull_vertex_pt").setDEF("hanim_skull_vertex_pt").setTranslation(new float[] {0.005f,1.7504f,0.0055f})
                                                                  .addComments("TODO move skull_tip x to zero, check others for symmetry")
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite skull_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("sellion_pt").setDEF("hanim_sellion_pt").setTranslation(new float[] {0.0058f,1.6316f,0.0852f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite sellion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("r_infraorbitale_pt").setDEF("hanim_r_infraorbitale_pt").setTranslation(new float[] {-0.0237f,1.6171f,0.0752f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_infraorbitale_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("l_infraorbitale_pt").setDEF("hanim_l_infraorbitale_pt").setTranslation(new float[] {0.0341f,1.6171f,0.0752f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_infraorbitale_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("supramenton_pt").setDEF("hanim_supramenton_pt").setTranslation(new float[] {0.0061f,1.541f,0.0805f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite supramenton_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("r_tragion_pt").setDEF("hanim_r_tragion_pt").setTranslation(new float[] {-0.0646f,1.6347f,0.0302f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_tragion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("r_gonion_pt").setDEF("hanim_r_gonion_pt").setTranslation(new float[] {-0.052f,1.5529f,0.0347f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_gonion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("l_tragion_pt").setDEF("hanim_l_tragion_pt").setTranslation(new float[] {0.0739f,1.6348f,0.0282f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_tragion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("l_gonion_pt").setDEF("hanim_l_gonion_pt").setTranslation(new float[] {0.0631f,1.553f,0.033f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_gonion_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                .addChild(new HAnimSite().setName("nuchale_pt").setDEF("hanim_nuchale_pt").setTranslation(new float[] {0.0039f,1.5972f,-0.0796f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite nuchale_pt"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                              .addChild(new HAnimJoint().setName("l_eyeball_joint").setDEF("hanim_l_eyeball_joint").setCenter(new float[] {0.0336f,1.6332f,0.0502f}).setUlimit(new MFFloat291().getArray()).setLlimit(new MFFloat292().getArray())
                                                                .addChild(new HAnimSegment().setName("l_eyeball").setDEF("hanim_l_eyeball")
                                                                  .addComments("Visualization sphere for <HAnimJoint name='l_eyeball_joint'/> is placed within <HAnimSegment name='l_eyeball'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.0336f,1.6332f,0.0502f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32293().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f294().getArray()))
                                                                      .setColor(new ColorRGBA().setDEF("HAnimSiteViewpointLineColorRGBA").setColor(new MFColorRGBA295().getArray()))))
                                                                  .addChild(new HAnimSite().setName("l_eyeball_site_view").setDEF("hanim_l_eyeball_site_view").setTranslation(new float[] {0.034f,1.64f,0.05f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_eyeball_site_view"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                    .addChild(new Viewpoint().setDEF("hanim_l_eyeball_site_viewpoint").setDescription("l_eyeball_site_viewpoint looking forward").setOrientation(new float[] {0f,1f,0f,3.141593f}).setPosition(new float[] {0f,0f,0f}))
                                                                    .addComments("HAnimSite/Viewpoint visualization shape")
                                                                    .addChild(new Anchor().setDescription("HAnimSite hanim_l_eyeball_site_view Viewpoint").setUrl(new MFString296().getArray())
                                                                      .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat297().getArray())
                                                                        .addChild(new WorldInfo().setInfo(new MFString298().getArray()))
                                                                        .addChild(new Shape().setDEF("HAnimSiteViewpointShape")
                                                                          .setGeometry(new IndexedFaceSet().setDEF("SiteViewpointDiamondIFS").setCoordIndex(new MFInt32299().getArray()).setCreaseAngle(0.5f)
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f300().getArray())))
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0f}).setTransparency(0.3f)))))))))
                                                              .addChild(new HAnimJoint().setName("l_eyelid_joint").setDEF("hanim_l_eyelid_joint").setCenter(new float[] {0.0336f,1.6332f,0.0502f}).setUlimit(new MFFloat301().getArray()).setLlimit(new MFFloat302().getArray())
                                                                .addChild(new HAnimSegment().setName("l_eyelid").setDEF("hanim_l_eyelid")
                                                                  .addComments("Visualization sphere for <HAnimJoint name='l_eyelid_joint'/> is placed within <HAnimSegment name='l_eyelid'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.0336f,1.6332f,0.0502f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addChild(new HAnimJoint().setName("l_eyebrow_joint").setDEF("hanim_l_eyebrow_joint").setCenter(new float[] {0.0336f,1.635f,0.0506f}).setUlimit(new MFFloat303().getArray()).setLlimit(new MFFloat304().getArray())
                                                                .addChild(new HAnimSegment().setName("l_eyebrow").setDEF("hanim_l_eyebrow")
                                                                  .addComments("Visualization sphere for <HAnimJoint name='l_eyebrow_joint'/> is placed within <HAnimSegment name='l_eyebrow'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.0336f,1.635f,0.0506f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addChild(new HAnimJoint().setName("r_eyeball_joint").setDEF("hanim_r_eyeball_joint").setCenter(new float[] {-0.0336f,1.6332f,0.0502f}).setUlimit(new MFFloat305().getArray()).setLlimit(new MFFloat306().getArray())
                                                                .addChild(new HAnimSegment().setName("r_eyeball").setDEF("hanim_r_eyeball")
                                                                  .addComments("Visualization sphere for <HAnimJoint name='r_eyeball_joint'/> is placed within <HAnimSegment name='r_eyeball'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0336f,1.6332f,0.0502f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32307().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f308().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteViewpointLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_eyeball_site_view").setDEF("hanim_r_eyeball_site_view").setTranslation(new float[] {-0.034f,1.64f,0.05f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_eyeball_site_view"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                                    .addChild(new Viewpoint().setDEF("hanim_r_eyeball_site_viewpoint").setDescription("r_eyeball_site_viewpoint looking forward").setOrientation(new float[] {0f,1f,0f,3.141593f}).setPosition(new float[] {0f,0f,0f}))
                                                                    .addComments("HAnimSite/Viewpoint visualization shape")
                                                                    .addChild(new Anchor().setDescription("HAnimSite hanim_r_eyeball_site_view Viewpoint").setUrl(new MFString309().getArray())
                                                                      .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat310().getArray())
                                                                        .addChild(new WorldInfo().setInfo(new MFString311().getArray()))
                                                                        .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))))
                                                              .addChild(new HAnimJoint().setName("r_eyelid_joint").setDEF("hanim_r_eyelid_joint").setCenter(new float[] {-0.0336f,1.6332f,0.0502f}).setUlimit(new MFFloat312().getArray()).setLlimit(new MFFloat313().getArray())
                                                                .addChild(new HAnimSegment().setName("r_eyelid").setDEF("hanim_r_eyelid")
                                                                  .addComments("Visualization sphere for <HAnimJoint name='r_eyelid_joint'/> is placed within <HAnimSegment name='r_eyelid'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0336f,1.6332f,0.0502f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addChild(new HAnimJoint().setName("r_eyebrow_joint").setDEF("hanim_r_eyebrow_joint").setCenter(new float[] {-0.0336f,1.635f,0.0506f}).setUlimit(new MFFloat314().getArray()).setLlimit(new MFFloat315().getArray())
                                                                .addChild(new HAnimSegment().setName("r_eyebrow").setDEF("hanim_r_eyebrow")
                                                                  .addComments("Visualization sphere for <HAnimJoint name='r_eyebrow_joint'/> is placed within <HAnimSegment name='r_eyebrow'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0336f,1.635f,0.0506f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))))
                                                              .addChild(new HAnimJoint().setName("temporomandibular").setDEF("hanim_temporomandibular").setCenter(new float[] {0f,1.63f,0.015f}).setUlimit(new MFFloat316().getArray()).setLlimit(new MFFloat317().getArray())
                                                                .addComments("Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint")
                                                                .addChild(new HAnimSegment().setName("jaw").setDEF("hanim_jaw")
                                                                  .addComments("Visualization sphere for <HAnimJoint name='temporomandibular'/> is placed within <HAnimSegment name='jaw'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint temporomandibular, HAnimSegment jaw"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0f,1.63f,0.015f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site_pt'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32318().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f319().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site_pt'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32320().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f321().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("temporomandibular_l_site_pt").setDEF("hanim_temporomandibular_l_site_pt").setTranslation(new float[] {0.045f,1.63f,0f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite temporomandibular_l_site_pt"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite().setName("temporomandibular_r_site_pt").setDEF("hanim_temporomandibular_r_site_pt").setTranslation(new float[] {-0.045f,1.63f,0f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite temporomandibular_r_site_pt"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))))
                                              .addChild(new HAnimJoint().setName("l_sternoclavicular").setDEF("hanim_l_sternoclavicular").setCenter(new float[] {0.082f,1.4488f,-0.0353f}).setUlimit(new MFFloat322().getArray()).setLlimit(new MFFloat323().getArray())
                                                .addChild(new HAnimSegment().setName("l_clavicle").setDEF("hanim_l_clavicle")
                                                  .addComments("Visualization sphere for <HAnimJoint name='l_sternoclavicular'/> is placed within <HAnimSegment name='l_clavicle'/>")
                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle"))
                                                  .addChild(new Transform().setTranslation(new float[] {0.082f,1.4488f,-0.0353f})
                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                  .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_sternoclavicular'/> to child <HAnimJoint name='l_acromioclavicular'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32324().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f325().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale_pt'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32326().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f327().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion_pt'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32328().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f329().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant_pt'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32330().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f331().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post_pt'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32332().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f333().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addChild(new HAnimSite().setName("l_clavicle_pt").setDEF("hanim_l_clavicle_pt").setTranslation(new float[] {0.0271f,1.4943f,0.0394f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_clavicale_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("l_acromion_pt").setDEF("hanim_l_acromion_pt").setTranslation(new float[] {0.2032f,1.476f,-0.049f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_acromion_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("l_axilla_proximal_pt").setDEF("hanim_l_axilla_proximal_pt").setTranslation(new float[] {0.1777f,1.4065f,-0.0075f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_ant_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("l_axilla_distal_pt").setDEF("hanim_l_axilla_distal_pt").setTranslation(new float[] {0.1706f,1.4072f,-0.0875f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_axilla_post_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                .addChild(new HAnimJoint().setName("l_acromioclavicular").setDEF("hanim_l_acromioclavicular").setCenter(new float[] {0.0962f,1.4269f,-0.0424f}).setUlimit(new MFFloat334().getArray()).setLlimit(new MFFloat335().getArray())
                                                  .addChild(new HAnimSegment().setName("l_scapula").setDEF("hanim_l_scapula")
                                                    .addComments("Visualization sphere for <HAnimJoint name='l_acromioclavicular'/> is placed within <HAnimSegment name='l_scapula'/>")
                                                    .addChild(new TouchSensor().setDescription("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula"))
                                                    .addChild(new Transform().setTranslation(new float[] {0.0962f,1.4269f,-0.0424f})
                                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                                    .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_acromioclavicular'/> to child <HAnimJoint name='l_shoulder'/>")
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32336().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f337().getArray()))
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimJoint().setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {0.2029f,1.4376f,-0.0387f}).setUlimit(new MFFloat338().getArray()).setLlimit(new MFFloat339().getArray())
                                                    .addChild(new HAnimSegment().setName("l_upperarm").setDEF("hanim_l_upperarm")
                                                      .addComments("Visualization sphere for <HAnimJoint name='l_shoulder'/> is placed within <HAnimSegment name='l_upperarm'/>")
                                                      .addChild(new TouchSensor().setDescription("HAnimJoint l_shoulder, HAnimSegment l_upperarm"))
                                                      .addChild(new Transform().setTranslation(new float[] {0.2029f,1.4376f,-0.0387f})
                                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                                      .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_shoulder'/> to child <HAnimJoint name='l_elbow'/>")
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32340().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f341().getArray()))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn_pt'/>")
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32342().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f343().getArray()))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                      .addChild(new HAnimSite().setName("l_humeral_lateral_epicondyle_pt").setDEF("hanim_l_humeral_lateral_epicondyle_pt").setTranslation(new float[] {0.228f,1.1482f,-0.11f})
                                                        .addComments("HAnimSite visualization shape")
                                                        .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_lateral_epicn_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint().setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {0.2014f,1.1357f,-0.0682f}).setUlimit(new MFFloat344().getArray()).setLlimit(new MFFloat345().getArray())
                                                      .addChild(new HAnimSegment().setName("l_forearm").setDEF("hanim_l_forearm")
                                                        .addComments("Visualization sphere for <HAnimJoint name='l_elbow'/> is placed within <HAnimSegment name='l_forearm'/>")
                                                        .addChild(new TouchSensor().setDescription("HAnimJoint l_elbow, HAnimSegment l_forearm"))
                                                        .addChild(new Transform().setTranslation(new float[] {0.2014f,1.1357f,-0.0682f})
                                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                                        .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_elbow'/> to child <HAnimJoint name='l_radiocarpal'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32346().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f347().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid_pt'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32348().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f349().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon_pt'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32350().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f351().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn_pt'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32352().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f353().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale_pt'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32354().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f355().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addChild(new HAnimSite().setName("l_radial_styloid_pt").setDEF("hanim_l_radial_styloid_pt").setTranslation(new float[] {0.1901f,0.8645f,-0.0415f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_radial_styloid_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("l_olecranon_pt").setDEF("hanim_l_olecranon_pt").setTranslation(new float[] {0.1962f,1.1375f,-0.1123f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_olecranon_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("l_humeral_medial_epicondyle_pt").setDEF("hanim_l_humeral_medial_epicondyle_pt").setTranslation(new float[] {0.1735f,1.1272f,-0.1113f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_medial_epicn_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("l_radiale_pt").setDEF("hanim_l_radiale_pt").setTranslation(new float[] {0.2182f,1.1212f,-0.1167f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite l_radiale_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint().setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setCenter(new float[] {0.1984f,0.8663f,-0.0583f}).setUlimit(new MFFloat356().getArray()).setLlimit(new MFFloat357().getArray())
                                                        .addChild(new HAnimSegment().setName("l_carpal").setDEF("hanim_l_carpal")
                                                          .addComments("Visualization sphere for <HAnimJoint name='l_radiocarpal'/> is placed within <HAnimSegment name='l_carpal'/>")
                                                          .addChild(new TouchSensor().setDescription("HAnimJoint l_radiocarpal, HAnimSegment l_carpal"))
                                                          .addChild(new Transform().setTranslation(new float[] {0.1984f,0.8663f,-0.0583f})
                                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                                          .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_thumb1'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32358().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f359().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_index0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32360().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f361().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_middle0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32362().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f363().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_ring0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32364().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f365().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_pinky0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32366().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f367().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha2_pt'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32368().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f369().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_ulnar_styloid_pt'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32370().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f371().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha5_pt'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32372().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f373().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_hand_front_view'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32374().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f375().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteViewpointLineColorRGBA"))))
                                                          .addChild(new HAnimSite().setName("l_metacarpal_phalanx_2_pt").setDEF("hanim_l_metacarpal_phalanx_2_pt").setTranslation(new float[] {0.2009f,0.8139f,-0.0237f})
                                                            .addComments("HAnimSite visualization shape")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_pha2_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("l_ulnar_styloid_pt").setDEF("hanim_l_ulnar_styloid_pt").setTranslation(new float[] {0.2142f,0.8529f,-0.0648f})
                                                            .addComments("HAnimSite visualization shape")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_ulnar_styloid_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("l_metacarpal_phalanx_5_pt").setDEF("hanim_l_metacarpal_phalanx_5_pt").setTranslation(new float[] {0.1929f,0.786f,-0.1122f})
                                                            .addComments("HAnimSite visualization shape")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_metacarpal_pha5_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("l_hand_front_view").setDEF("hanim_l_hand_front_view").setTranslation(new float[] {0.3f,0.75f,0.45f})
                                                            .addComments("HAnimSite visualization shape")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite l_hand_front_view"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                            .addChild(new Viewpoint().setDEF("hanim_l_hand_front_viewpoint").setCenterOfRotation(new float[] {0f,0.7f,0f}).setDescription("left hand front").setPosition(new float[] {0f,0f,0f}))
                                                            .addComments("HAnimSite/Viewpoint visualization shape")
                                                            .addChild(new Anchor().setDescription("HAnimSite hanim_l_hand_front_view Viewpoint").setUrl(new MFString376().getArray())
                                                              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat377().getArray())
                                                                .addChild(new WorldInfo().setInfo(new MFString378().getArray()))
                                                                .addChild(new Shape().setUSE("HAnimSiteViewpointShape"))))))
                                                        .addChild(new HAnimJoint().setName("l_carpometacarpal_1").setDEF("hanim_l_carpometacarpal_1").setCenter(new float[] {0.1924f,0.8472f,-0.0534f}).setUlimit(new MFFloat379().getArray()).setLlimit(new MFFloat380().getArray())
                                                          .addChild(new HAnimSegment().setName("l_metacarpal_1").setDEF("hanim_l_metacarpal_1")
                                                            .addComments("Visualization sphere for <HAnimJoint name='l_thumb1'/> is placed within <HAnimSegment name='l_metacarpal_1'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1924f,0.8472f,-0.0534f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_thumb1'/> to child <HAnimJoint name='l_thumb2'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32381().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f382().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_metacarpophalangeal_1").setDEF("hanim_l_metacarpophalangeal_1").setCenter(new float[] {0.1951f,0.8226f,0.0246f}).setUlimit(new MFFloat383().getArray()).setLlimit(new MFFloat384().getArray())
                                                            .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_1").setDEF("hanim_l_carpal_proximal_phalanx_1")
                                                              .addComments("Visualization sphere for <HAnimJoint name='l_thumb2'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_1'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1951f,0.8226f,0.0246f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_thumb2'/> to child <HAnimJoint name='l_thumb3'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32385().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f386().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_carpal_interphalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setCenter(new float[] {0.1955f,0.8159f,0.0464f}).setUlimit(new MFFloat387().getArray()).setLlimit(new MFFloat388().getArray())
                                                              .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_1").setDEF("hanim_l_carpal_distal_phalanx_1")
                                                                .addComments("Visualization sphere for <HAnimJoint name='l_thumb3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_1'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1955f,0.8159f,0.0464f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32389().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f390().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addChild(new HAnimSite().setName("l_carpal_distal_phalanx_1_pt").setDEF("hanim_l_carpal_distal_phalanx_1_pt").setTranslation(new float[] {0.1982f,0.8061f,0.0759f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite l_thumb_distal_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))))))
                                                        .addChild(new HAnimJoint().setName("l_carpometacarpal_2").setDEF("hanim_l_carpometacarpal_2").setCenter(new float[] {0.1983f,0.8024f,-0.028f}).setUlimit(new MFFloat391().getArray()).setLlimit(new MFFloat392().getArray())
                                                          .addChild(new HAnimSegment().setName("l_metacarpal_2").setDEF("hanim_l_metacarpal_2")
                                                            .addComments("Visualization sphere for <HAnimJoint name='l_index0'/> is placed within <HAnimSegment name='l_metacarpal_2'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_index0, HAnimSegment l_metacarpal_2"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1983f,0.8024f,-0.028f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_index0'/> to child <HAnimJoint name='l_index1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32393().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f394().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_metacarpophalangeal_2").setDEF("hanim_l_metacarpophalangeal_2").setCenter(new float[] {0.1983f,0.7815f,-0.028f}).setUlimit(new MFFloat395().getArray()).setLlimit(new MFFloat396().getArray())
                                                            .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_2").setDEF("hanim_l_carpal_proximal_phalanx_2")
                                                              .addComments("Visualization sphere for <HAnimJoint name='l_index1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_2'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1983f,0.7815f,-0.028f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_index1'/> to child <HAnimJoint name='l_index2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32397().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f398().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setCenter(new float[] {0.2017f,0.7363f,-0.0248f}).setUlimit(new MFFloat399().getArray()).setLlimit(new MFFloat400().getArray())
                                                              .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_2").setDEF("hanim_l_carpal_middle_phalanx_2")
                                                                .addComments("Visualization sphere for <HAnimJoint name='l_index2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_2'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.2017f,0.7363f,-0.0248f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_index2'/> to child <HAnimJoint name='l_index3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32401().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f402().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setCenter(new float[] {0.2028f,0.7139f,-0.0236f}).setUlimit(new MFFloat403().getArray()).setLlimit(new MFFloat404().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_2").setDEF("hanim_l_carpal_distal_phalanx_2")
                                                                  .addComments("Visualization sphere for <HAnimJoint name='l_index3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_2'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2028f,0.7139f,-0.0236f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32405().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f406().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion_pt'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32407().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f408().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_carpal_distal_phalanx_2_pt").setDEF("hanim_l_carpal_distal_phalanx_2_pt").setTranslation(new float[] {0.2089f,0.6858f,-0.0245f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_index_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite().setName("l_dactylion_pt").setDEF("hanim_l_dactylion_pt").setTranslation(new float[] {0.2056f,0.6743f,-0.0482f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_dactylion_pt"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("l_carpometacarpal_3").setDEF("hanim_l_carpometacarpal_3").setCenter(new float[] {0.1987f,0.8029f,-0.053f}).setUlimit(new MFFloat409().getArray()).setLlimit(new MFFloat410().getArray())
                                                          .addChild(new HAnimSegment().setName("l_metacarpal_3").setDEF("hanim_l_metacarpal_3")
                                                            .addComments("Visualization sphere for <HAnimJoint name='l_middle0'/> is placed within <HAnimSegment name='l_metacarpal_3'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_middle0, HAnimSegment l_metacarpal_3"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1987f,0.8029f,-0.053f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_middle0'/> to child <HAnimJoint name='l_middle1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32411().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f412().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_metacarpophalangeal_3").setDEF("hanim_l_metacarpophalangeal_3").setCenter(new float[] {0.1987f,0.7818f,-0.053f}).setUlimit(new MFFloat413().getArray()).setLlimit(new MFFloat414().getArray())
                                                            .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_3").setDEF("hanim_l_carpal_proximal_phalanx_3")
                                                              .addComments("Visualization sphere for <HAnimJoint name='l_middle1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_3'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1987f,0.7818f,-0.053f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_middle1'/> to child <HAnimJoint name='l_middle2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32415().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f416().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setCenter(new float[] {0.2013f,0.7273f,-0.0503f}).setUlimit(new MFFloat417().getArray()).setLlimit(new MFFloat418().getArray())
                                                              .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_3").setDEF("hanim_l_carpal_middle_phalanx_3")
                                                                .addComments("Visualization sphere for <HAnimJoint name='l_middle2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_3'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.2013f,0.7273f,-0.0503f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_middle2'/> to child <HAnimJoint name='l_middle3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32419().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f420().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setCenter(new float[] {0.2026f,0.7011f,-0.0494f}).setUlimit(new MFFloat421().getArray()).setLlimit(new MFFloat422().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_3").setDEF("hanim_l_carpal_distal_phalanx_3")
                                                                  .addComments("Visualization sphere for <HAnimJoint name='l_middle3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_3'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2026f,0.7011f,-0.0494f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32423().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f424().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_carpal_distal_phalanx_3_pt").setDEF("hanim_l_carpal_distal_phalanx_3_pt").setTranslation(new float[] {0.208f,0.6731f,-0.0491f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_middle_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("l_carpometacarpal_4").setDEF("hanim_l_carpometacarpal_4").setCenter(new float[] {0.1956f,0.8019f,-0.0794f}).setUlimit(new MFFloat425().getArray()).setLlimit(new MFFloat426().getArray())
                                                          .addChild(new HAnimSegment().setName("l_metacarpal_4").setDEF("hanim_l_metacarpal_4")
                                                            .addComments("Visualization sphere for <HAnimJoint name='l_ring0'/> is placed within <HAnimSegment name='l_metacarpal_4'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_ring0, HAnimSegment l_metacarpal_4"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1956f,0.8019f,-0.0794f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_ring0'/> to child <HAnimJoint name='l_ring1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32427().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f428().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_metacarpophalangeal_4").setDEF("hanim_l_metacarpophalangeal_4").setCenter(new float[] {0.1956f,0.7815f,-0.0794f}).setUlimit(new MFFloat429().getArray()).setLlimit(new MFFloat430().getArray())
                                                            .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_4").setDEF("hanim_l_carpal_proximal_phalanx_4")
                                                              .addComments("Visualization sphere for <HAnimJoint name='l_ring1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_4'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1956f,0.7815f,-0.0794f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_ring1'/> to child <HAnimJoint name='l_ring2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32431().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f432().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setCenter(new float[] {0.1973f,0.7287f,-0.0777f}).setUlimit(new MFFloat433().getArray()).setLlimit(new MFFloat434().getArray())
                                                              .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_4").setDEF("hanim_l_carpal_middle_phalanx_4")
                                                                .addComments("Visualization sphere for <HAnimJoint name='l_ring2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_4'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1973f,0.7287f,-0.0777f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_ring2'/> to child <HAnimJoint name='l_ring3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32435().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f436().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setCenter(new float[] {0.1983f,0.7045f,-0.0767f}).setUlimit(new MFFloat437().getArray()).setLlimit(new MFFloat438().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_4").setDEF("hanim_l_carpal_distal_phalanx_4")
                                                                  .addComments("Visualization sphere for <HAnimJoint name='l_ring3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_4'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1983f,0.7045f,-0.0767f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32439().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f440().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_carpal_distal_phalanx_4_pt").setDEF("hanim_l_carpal_distal_phalanx_4_pt").setTranslation(new float[] {0.2035f,0.675f,-0.0756f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_ring_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("l_carpometacarpal_5").setDEF("hanim_l_carpometacarpal_5").setCenter(new float[] {0.1925f,0.8066f,-0.1036f}).setUlimit(new MFFloat441().getArray()).setLlimit(new MFFloat442().getArray())
                                                          .addChild(new HAnimSegment().setName("l_metacarpal_5").setDEF("hanim_l_metacarpal_5")
                                                            .addComments("Visualization sphere for <HAnimJoint name='l_pinky0'/> is placed within <HAnimSegment name='l_metacarpal_5'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1925f,0.8066f,-0.1036f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_pinky0'/> to child <HAnimJoint name='l_pinky1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32443().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f444().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("l_metacarpophalangeal_5").setDEF("hanim_l_metacarpophalangeal_5").setCenter(new float[] {0.1925f,0.7866f,-0.1036f}).setUlimit(new MFFloat445().getArray()).setLlimit(new MFFloat446().getArray())
                                                            .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_5").setDEF("hanim_l_carpal_proximal_phalanx_5")
                                                              .addComments("Visualization sphere for <HAnimJoint name='l_pinky1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_5'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1925f,0.7866f,-0.1036f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_pinky1'/> to child <HAnimJoint name='l_pinky2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32447().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f448().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_5").setCenter(new float[] {0.1938f,0.7452f,-0.1024f}).setUlimit(new MFFloat449().getArray()).setLlimit(new MFFloat450().getArray())
                                                              .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_5").setDEF("hanim_l_carpal_middle_phalanx_5")
                                                                .addComments("Visualization sphere for <HAnimJoint name='l_pinky2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_5'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1938f,0.7452f,-0.1024f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='l_pinky2'/> to child <HAnimJoint name='l_pinky3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32451().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f452().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_5").setDEF("hanim_l_carpal_distal_interphalangeal_5").setCenter(new float[] {0.1948f,0.7277f,-0.1017f}).setUlimit(new MFFloat453().getArray()).setLlimit(new MFFloat454().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_5").setDEF("hanim_l_carpal_distal_phalanx_5")
                                                                  .addComments("Visualization sphere for <HAnimJoint name='l_pinky3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_5'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1948f,0.7277f,-0.1017f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32455().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f456().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("l_carpal_distal_phalanx_5_pt").setDEF("hanim_l_carpal_distal_phalanx_5_pt").setTranslation(new float[] {0.2014f,0.7009f,-0.1012f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite l_pinky_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))))
                                              .addChild(new HAnimJoint().setName("r_sternoclavicular").setDEF("hanim_r_sternoclavicular").setCenter(new float[] {-0.082f,1.4488f,-0.0353f}).setUlimit(new MFFloat457().getArray()).setLlimit(new MFFloat458().getArray())
                                                .addChild(new HAnimSegment().setName("r_clavicle").setDEF("hanim_r_clavicle")
                                                  .addComments("Visualization sphere for <HAnimJoint name='r_sternoclavicular'/> is placed within <HAnimSegment name='r_clavicle'/>")
                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle"))
                                                  .addChild(new Transform().setTranslation(new float[] {-0.082f,1.4488f,-0.0353f})
                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                  .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_sternoclavicular'/> to child <HAnimJoint name='r_acromioclavicular'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32459().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f460().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale_pt'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32461().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f462().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion_pt'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32463().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f464().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant_pt'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32465().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f466().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post_pt'/>")
                                                  .addChild(new Shape()
                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32467().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f468().getArray()))
                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                  .addChild(new HAnimSite().setName("r_clavicle_pt").setDEF("hanim_r_clavicle_pt").setTranslation(new float[] {-0.0115f,1.4943f,0.04f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_clavicale_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("r_acromion_pt").setDEF("hanim_r_acromion_pt").setTranslation(new float[] {-0.1905f,1.4791f,-0.0431f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_acromion_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("r_axilla_proximal_pt").setDEF("hanim_r_axilla_proximal_pt").setTranslation(new float[] {-0.1626f,1.4072f,-0.0031f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_ant_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                  .addChild(new HAnimSite().setName("r_axilla_distal_pt").setDEF("hanim_r_axilla_distal_pt").setTranslation(new float[] {-0.1603f,1.4098f,-0.0826f})
                                                    .addComments("HAnimSite visualization shape")
                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_axilla_post_pt"))
                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                .addChild(new HAnimJoint().setName("r_acromioclavicular").setDEF("hanim_r_acromioclavicular").setCenter(new float[] {-0.0962f,1.4269f,-0.0424f}).setUlimit(new MFFloat469().getArray()).setLlimit(new MFFloat470().getArray())
                                                  .addChild(new HAnimSegment().setName("r_scapula").setDEF("hanim_r_scapula")
                                                    .addComments("Visualization sphere for <HAnimJoint name='r_acromioclavicular'/> is placed within <HAnimSegment name='r_scapula'/>")
                                                    .addChild(new TouchSensor().setDescription("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula"))
                                                    .addChild(new Transform().setTranslation(new float[] {-0.0962f,1.4269f,-0.0424f})
                                                      .addChild(new Shape().setUSE("HAnimJointShape")))
                                                    .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_acromioclavicular'/> to child <HAnimJoint name='r_shoulder'/>")
                                                    .addChild(new Shape()
                                                      .setGeometry(new LineSet().setVertexCount(new MFInt32471().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f472().getArray()))
                                                        .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                  .addChild(new HAnimJoint().setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-0.2029f,1.4376f,-0.0387f}).setUlimit(new MFFloat473().getArray()).setLlimit(new MFFloat474().getArray())
                                                    .addChild(new HAnimSegment().setName("r_upperarm").setDEF("hanim_r_upperarm")
                                                      .addComments("Visualization sphere for <HAnimJoint name='r_shoulder'/> is placed within <HAnimSegment name='r_upperarm'/>")
                                                      .addChild(new TouchSensor().setDescription("HAnimJoint r_shoulder, HAnimSegment r_upperarm"))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.2029f,1.4376f,-0.0387f})
                                                        .addChild(new Shape().setUSE("HAnimJointShape")))
                                                      .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_shoulder'/> to child <HAnimJoint name='r_elbow'/>")
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32475().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f476().getArray()))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                      .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn_pt'/>")
                                                      .addChild(new Shape()
                                                        .setGeometry(new LineSet().setVertexCount(new MFInt32477().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f478().getArray()))
                                                          .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                      .addChild(new HAnimSite().setName("r_humeral_lateral_epicondyle_pt").setDEF("hanim_r_humeral_lateral_epicondyle_pt").setTranslation(new float[] {-0.2224f,1.1517f,-0.1033f})
                                                        .addComments("HAnimSite visualization shape")
                                                        .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_lateral_epicn_pt"))
                                                        .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                    .addChild(new HAnimJoint().setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-0.2014f,1.1357f,-0.0682f}).setUlimit(new MFFloat479().getArray()).setLlimit(new MFFloat480().getArray())
                                                      .addChild(new HAnimSegment().setName("r_forearm").setDEF("hanim_r_forearm")
                                                        .addComments("Visualization sphere for <HAnimJoint name='r_elbow'/> is placed within <HAnimSegment name='r_forearm'/>")
                                                        .addChild(new TouchSensor().setDescription("HAnimJoint r_elbow, HAnimSegment r_forearm"))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.2014f,1.1357f,-0.0682f})
                                                          .addChild(new Shape().setUSE("HAnimJointShape")))
                                                        .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_elbow'/> to child <HAnimJoint name='r_radiocarpal'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32481().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f482().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid_pt'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32483().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f484().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon_pt'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32485().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f486().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn_pt'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32487().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f488().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale_pt'/>")
                                                        .addChild(new Shape()
                                                          .setGeometry(new LineSet().setVertexCount(new MFInt32489().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f490().getArray()))
                                                            .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                        .addChild(new HAnimSite().setName("r_radial_styloid_pt").setDEF("hanim_r_radial_styloid_pt").setTranslation(new float[] {-0.1884f,0.8676f,-0.036f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_radial_styloid_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("r_olecranon_pt").setDEF("hanim_r_olecranon_pt").setTranslation(new float[] {-0.1907f,1.1405f,-0.1065f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_olecranon_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("r_humeral_medial_epicondyle_pt").setDEF("hanim_r_humeral_medial_epicondyle_pt").setTranslation(new float[] {-0.168f,1.1298f,-0.1062f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_medial_epicn_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                        .addChild(new HAnimSite().setName("r_radiale_pt").setDEF("hanim_r_radiale_pt").setTranslation(new float[] {-0.213f,1.1305f,-0.1091f})
                                                          .addComments("HAnimSite visualization shape")
                                                          .addChild(new TouchSensor().setDescription("HAnimSite r_radiale_pt"))
                                                          .addChild(new Shape().setUSE("HAnimSiteShape"))))
                                                      .addChild(new HAnimJoint().setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setCenter(new float[] {-0.1984f,0.8663f,-0.0583f}).setUlimit(new MFFloat491().getArray()).setLlimit(new MFFloat492().getArray())
                                                        .addChild(new HAnimSegment().setName("r_carpal").setDEF("hanim_r_carpal")
                                                          .addComments("Visualization sphere for <HAnimJoint name='r_radiocarpal'/> is placed within <HAnimSegment name='r_carpal'/>")
                                                          .addChild(new TouchSensor().setDescription("HAnimJoint r_radiocarpal, HAnimSegment r_carpal"))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.1984f,0.8663f,-0.0583f})
                                                            .addChild(new Shape().setUSE("HAnimJointShape")))
                                                          .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_thumb1'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32493().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f494().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_index0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32495().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f496().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_middle0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32497().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f498().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_ring0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32499().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f500().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_pinky0'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32501().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f502().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA"))))
                                                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha2_pt'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32503().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f504().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_ulnar_styloid_pt'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32505().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f506().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha5_pt'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32507().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f508().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                          .addComments("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_hand_front_view'/>")
                                                          .addChild(new Shape()
                                                            .setGeometry(new LineSet().setVertexCount(new MFInt32509().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f510().getArray()))
                                                              .setColor(new ColorRGBA().setUSE("HAnimSiteViewpointLineColorRGBA"))))
                                                          .addChild(new HAnimSite().setName("r_metacarpal_phalanx_2_pt").setDEF("hanim_r_metacarpal_phalanx_2_pt").setTranslation(new float[] {-0.1977f,0.8169f,-0.0177f})
                                                            .addComments("HAnimSite visualization shape")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_pha2_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("r_ulnar_styloid_pt").setDEF("hanim_r_ulnar_styloid_pt").setTranslation(new float[] {-0.2117f,0.8562f,-0.0584f})
                                                            .addComments("HAnimSite visualization shape")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_ulnar_styloid_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("r_metacarpal_phalanx_5_pt").setDEF("hanim_r_metacarpal_phalanx_5_pt").setTranslation(new float[] {-0.1929f,0.789f,-0.1064f})
                                                            .addComments("HAnimSite visualization shape")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_metacarpal_pha5_pt"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                          .addChild(new HAnimSite().setName("r_hand_front_view").setDEF("hanim_r_hand_front_view").setTranslation(new float[] {-0.3f,0.75f,0.45f})
                                                            .addComments("HAnimSite visualization shape")
                                                            .addChild(new TouchSensor().setDescription("HAnimSite r_hand_front_view"))
                                                            .addChild(new Shape().setUSE("HAnimSiteShape"))
                                                            .addChild(new Viewpoint().setDEF("hanim_r_hand_front_viewpoint").setCenterOfRotation(new float[] {0f,0.7f,0f}).setDescription("right hand front").setPosition(new float[] {0f,0f,0f}))
                                                            .addComments("HAnimSite/Viewpoint visualization shape")
                                                            .addChild(new Anchor().setDescription("HAnimSite hanim_r_hand_front_view Viewpoint").setUrl(new MFString511().getArray())
                                                              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat512().getArray())
                                                                .addChild(new WorldInfo().setInfo(new MFString513().getArray()))
                                                                .addChild(new Shape().setUSE("HAnimSiteViewpointShape"))))))
                                                        .addChild(new HAnimJoint().setName("r_carpometacarpal_1").setDEF("hanim_r_carpometacarpal_1").setCenter(new float[] {-0.1924f,0.8472f,-0.0534f}).setUlimit(new MFFloat514().getArray()).setLlimit(new MFFloat515().getArray())
                                                          .addChild(new HAnimSegment().setName("r_metacarpal_1").setDEF("hanim_r_metacarpal_1")
                                                            .addComments("Visualization sphere for <HAnimJoint name='r_thumb1'/> is placed within <HAnimSegment name='r_metacarpal_1'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1924f,0.8472f,-0.0534f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_thumb1'/> to child <HAnimJoint name='r_thumb2'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32516().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f517().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_metacarpophalangeal_1").setDEF("hanim_r_metacarpophalangeal_1").setCenter(new float[] {-0.1951f,0.8226f,0.0246f}).setUlimit(new MFFloat518().getArray()).setLlimit(new MFFloat519().getArray())
                                                            .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_1").setDEF("hanim_r_carpal_proximal_phalanx_1")
                                                              .addComments("Visualization sphere for <HAnimJoint name='r_thumb2'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_1'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1951f,0.8226f,0.0246f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_thumb2'/> to child <HAnimJoint name='r_thumb3'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32520().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f521().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_carpal_interphalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setCenter(new float[] {-0.1955f,0.8159f,0.0464f}).setUlimit(new MFFloat522().getArray()).setLlimit(new MFFloat523().getArray())
                                                              .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_1").setDEF("hanim_r_carpal_distal_phalanx_1")
                                                                .addComments("Visualization sphere for <HAnimJoint name='r_thumb3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_1'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1955f,0.8159f,0.0464f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32524().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f525().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                .addChild(new HAnimSite().setName("r_carpal_distal_phalanx_1_pt").setDEF("hanim_r_carpal_distal_phalanx_1_pt").setTranslation(new float[] {-0.1869f,0.809f,0.082f})
                                                                  .addComments("HAnimSite visualization shape")
                                                                  .addChild(new TouchSensor().setDescription("HAnimSite r_thumb_distal_tip"))
                                                                  .addChild(new Shape().setUSE("HAnimSiteShape")))))))
                                                        .addChild(new HAnimJoint().setName("r_carpometacarpal_2").setDEF("hanim_r_carpometacarpal_2").setCenter(new float[] {-0.1983f,0.8024f,-0.028f}).setUlimit(new MFFloat526().getArray()).setLlimit(new MFFloat527().getArray())
                                                          .addChild(new HAnimSegment().setName("r_metacarpal_2").setDEF("hanim_r_metacarpal_2")
                                                            .addComments("Visualization sphere for <HAnimJoint name='r_index0'/> is placed within <HAnimSegment name='r_metacarpal_2'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_index0, HAnimSegment r_metacarpal_2"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1983f,0.8024f,-0.028f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_index0'/> to child <HAnimJoint name='r_index1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32528().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f529().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_metacarpophalangeal_2").setDEF("hanim_r_metacarpophalangeal_2").setCenter(new float[] {-0.1983f,0.7815f,-0.028f}).setUlimit(new MFFloat530().getArray()).setLlimit(new MFFloat531().getArray())
                                                            .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_2").setDEF("hanim_r_carpal_proximal_phalanx_2")
                                                              .addComments("Visualization sphere for <HAnimJoint name='r_index1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_2'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1983f,0.7815f,-0.028f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_index1'/> to child <HAnimJoint name='r_index2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32532().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f533().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-0.2017f,0.7363f,-0.0248f}).setUlimit(new MFFloat534().getArray()).setLlimit(new MFFloat535().getArray())
                                                              .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_2").setDEF("hanim_r_carpal_middle_phalanx_2")
                                                                .addComments("Visualization sphere for <HAnimJoint name='r_index2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_2'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2017f,0.7363f,-0.0248f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_index2'/> to child <HAnimJoint name='r_index3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32536().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f537().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setCenter(new float[] {-0.2028f,0.7139f,-0.0236f}).setUlimit(new MFFloat538().getArray()).setLlimit(new MFFloat539().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_2").setDEF("hanim_r_carpal_distal_phalanx_2")
                                                                  .addComments("Visualization sphere for <HAnimJoint name='r_index3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_2'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2028f,0.7139f,-0.0236f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32540().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f541().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion_pt'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32542().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f543().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_carpal_distal_phalanx_2_pt").setDEF("hanim_r_carpal_distal_phalanx_2_pt").setTranslation(new float[] {-0.198f,0.6883f,-0.018f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_index_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                                                                  .addChild(new HAnimSite().setName("r_dactylion_pt").setDEF("hanim_r_dactylion_pt").setTranslation(new float[] {-0.1941f,0.6772f,-0.0423f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_dactylion_pt"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("r_carpometacarpal_3").setDEF("hanim_r_carpometacarpal_3").setCenter(new float[] {-0.1987f,0.8029f,-0.053f}).setUlimit(new MFFloat544().getArray()).setLlimit(new MFFloat545().getArray())
                                                          .addChild(new HAnimSegment().setName("r_metacarpal_3").setDEF("hanim_r_metacarpal_3")
                                                            .addComments("Visualization sphere for <HAnimJoint name='r_middle0'/> is placed within <HAnimSegment name='r_metacarpal_3'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_middle0, HAnimSegment r_metacarpal_3"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1987f,0.8029f,-0.053f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_middle0'/> to child <HAnimJoint name='r_middle1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32546().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f547().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_metacarpophalangeal_3").setDEF("hanim_r_metacarpophalangeal_3").setCenter(new float[] {-0.1987f,0.7818f,-0.053f}).setUlimit(new MFFloat548().getArray()).setLlimit(new MFFloat549().getArray())
                                                            .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_3").setDEF("hanim_r_carpal_proximal_phalanx_3")
                                                              .addComments("Visualization sphere for <HAnimJoint name='r_middle1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_3'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1987f,0.7818f,-0.053f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_middle1'/> to child <HAnimJoint name='r_middle2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32550().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f551().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-0.2013f,0.7273f,-0.0503f}).setUlimit(new MFFloat552().getArray()).setLlimit(new MFFloat553().getArray())
                                                              .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_3").setDEF("hanim_r_carpal_middle_phalanx_3")
                                                                .addComments("Visualization sphere for <HAnimJoint name='r_middle2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_3'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2013f,0.7273f,-0.0503f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_middle2'/> to child <HAnimJoint name='r_middle3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32554().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f555().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setCenter(new float[] {-0.2026f,0.7011f,-0.0494f}).setUlimit(new MFFloat556().getArray()).setLlimit(new MFFloat557().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_3").setDEF("hanim_r_carpal_distal_phalanx_3")
                                                                  .addComments("Visualization sphere for <HAnimJoint name='r_middle3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_3'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2026f,0.7011f,-0.0494f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32558().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f559().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_carpal_distal_phalanx_3_pt").setDEF("hanim_r_carpal_distal_phalanx_3_pt").setTranslation(new float[] {-0.1969f,0.6758f,-0.0427f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_middle_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("r_carpometacarpal_4").setDEF("hanim_r_carpometacarpal_4").setCenter(new float[] {-0.1956f,0.8019f,-0.0794f}).setUlimit(new MFFloat560().getArray()).setLlimit(new MFFloat561().getArray())
                                                          .addChild(new HAnimSegment().setName("r_metacarpal_4").setDEF("hanim_r_metacarpal_4")
                                                            .addComments("Visualization sphere for <HAnimJoint name='r_ring0'/> is placed within <HAnimSegment name='r_metacarpal_4'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_ring0, HAnimSegment r_metacarpal_4"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1956f,0.8019f,-0.0794f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_ring0'/> to child <HAnimJoint name='r_ring1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32562().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f563().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_metacarpophalangeal_4").setDEF("hanim_r_metacarpophalangeal_4").setCenter(new float[] {-0.1956f,0.7815f,-0.0794f}).setUlimit(new MFFloat564().getArray()).setLlimit(new MFFloat565().getArray())
                                                            .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_4").setDEF("hanim_r_carpal_proximal_phalanx_4")
                                                              .addComments("Visualization sphere for <HAnimJoint name='r_ring1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_4'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1956f,0.7815f,-0.0794f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_ring1'/> to child <HAnimJoint name='r_ring2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32566().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f567().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setCenter(new float[] {-0.1973f,0.7287f,-0.0777f}).setUlimit(new MFFloat568().getArray()).setLlimit(new MFFloat569().getArray())
                                                              .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_4").setDEF("hanim_r_carpal_middle_phalanx_4")
                                                                .addComments("Visualization sphere for <HAnimJoint name='r_ring2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_4'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1973f,0.7287f,-0.0777f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_ring2'/> to child <HAnimJoint name='r_ring3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32570().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f571().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setCenter(new float[] {-0.1983f,0.7045f,-0.0767f}).setUlimit(new MFFloat572().getArray()).setLlimit(new MFFloat573().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_4").setDEF("hanim_r_carpal_distal_phalanx_4")
                                                                  .addComments("Visualization sphere for <HAnimJoint name='r_ring3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_4'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1983f,0.7045f,-0.0767f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32574().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f575().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_carpal_distal_phalanx_4_pt").setDEF("hanim_r_carpal_distal_phalanx_4_pt").setTranslation(new float[] {-0.1934f,0.6778f,-0.0693f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_ring_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape"))))))))
                                                        .addChild(new HAnimJoint().setName("r_carpometacarpal_5").setDEF("hanim_r_carpometacarpal_5").setCenter(new float[] {-0.1925f,0.8066f,-0.1036f}).setUlimit(new MFFloat576().getArray()).setLlimit(new MFFloat577().getArray())
                                                          .addChild(new HAnimSegment().setName("r_metacarpal_5").setDEF("hanim_r_metacarpal_5")
                                                            .addComments("Visualization sphere for <HAnimJoint name='r_pinky0'/> is placed within <HAnimSegment name='r_metacarpal_5'/>")
                                                            .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1925f,0.8066f,-0.1036f})
                                                              .addChild(new Shape().setUSE("HAnimJointShape")))
                                                            .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_pinky0'/> to child <HAnimJoint name='r_pinky1'/>")
                                                            .addChild(new Shape()
                                                              .setGeometry(new LineSet().setVertexCount(new MFInt32578().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f579().getArray()))
                                                                .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                          .addChild(new HAnimJoint().setName("r_metacarpophalangeal_5").setDEF("hanim_r_metacarpophalangeal_5").setCenter(new float[] {-0.1925f,0.7866f,-0.1036f}).setUlimit(new MFFloat580().getArray()).setLlimit(new MFFloat581().getArray())
                                                            .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_5").setDEF("hanim_r_carpal_proximal_phalanx_5")
                                                              .addComments("Visualization sphere for <HAnimJoint name='r_pinky1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_5'/>")
                                                              .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1925f,0.7866f,-0.1036f})
                                                                .addChild(new Shape().setUSE("HAnimJointShape")))
                                                              .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_pinky1'/> to child <HAnimJoint name='r_pinky2'/>")
                                                              .addChild(new Shape()
                                                                .setGeometry(new LineSet().setVertexCount(new MFInt32582().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f583().getArray()))
                                                                  .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                            .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_5").setCenter(new float[] {-0.1938f,0.7452f,-0.1024f}).setUlimit(new MFFloat584().getArray()).setLlimit(new MFFloat585().getArray())
                                                              .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_5").setDEF("hanim_r_carpal_middle_phalanx_5")
                                                                .addComments("Visualization sphere for <HAnimJoint name='r_pinky2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_5'/>")
                                                                .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1938f,0.7452f,-0.1024f})
                                                                  .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                .addComments("HAnimSegment visualization line from current <HAnimJoint name='r_pinky2'/> to child <HAnimJoint name='r_pinky3'/>")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new LineSet().setVertexCount(new MFInt32586().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f587().getArray()))
                                                                    .setColor(new ColorRGBA().setUSE("HAnimSegmentLineColorRGBA")))))
                                                              .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_5").setDEF("hanim_r_carpal_distal_interphalangeal_5").setCenter(new float[] {-0.1948f,0.7277f,-0.1017f}).setUlimit(new MFFloat588().getArray()).setLlimit(new MFFloat589().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_5").setDEF("hanim_r_carpal_distal_phalanx_5")
                                                                  .addComments("Visualization sphere for <HAnimJoint name='r_pinky3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_5'/>")
                                                                  .addChild(new TouchSensor().setDescription("HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1948f,0.7277f,-0.1017f})
                                                                    .addChild(new Shape().setUSE("HAnimJointShape")))
                                                                  .addComments("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new LineSet().setVertexCount(new MFInt32590().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f591().getArray()))
                                                                      .setColor(new ColorRGBA().setUSE("HAnimSiteLineColorRGBA"))))
                                                                  .addChild(new HAnimSite().setName("r_carpal_distal_phalanx_5_pt").setDEF("hanim_r_carpal_distal_phalanx_5_pt").setTranslation(new float[] {-0.1938f,0.7035f,-0.0949f})
                                                                    .addComments("HAnimSite visualization shape")
                                                                    .addChild(new TouchSensor().setDescription("HAnimSite r_pinky_distal_tip"))
                                                                    .addChild(new Shape().setUSE("HAnimSiteShape")))))))))))))))))))))))))))))))
          .addViewpoints(new HAnimSite().setName("l_inclined_view").setDEF("hanim_l_inclined_view").setRotation(new float[] {-0.113f,0.993f,0.0347f,0.671f}).setTranslation(new float[] {1.62f,1.05f,2.06f})
            .addComments("HAnimSite visualization shape")
            .addChild(new TouchSensor().setDescription("HAnimSite l_inclined_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_l_inclined_viewpoint").setDescription("left inclined").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite hanim_l_inclined_view Viewpoint").setUrl(new MFString592().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat593().getArray())
                .addChild(new WorldInfo().setInfo(new MFString594().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("r_inclined_view").setDEF("hanim_r_inclined_view").setRotation(new float[] {-0.113f,-0.993f,0.0347f,0.671f}).setTranslation(new float[] {-1.62f,1.05f,2.06f})
            .addComments("HAnimSite visualization shape")
            .addChild(new TouchSensor().setDescription("HAnimSite r_inclined_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_r_inclined_viewpoint").setCenterOfRotation(new float[] {0f,0.9f,0f}).setDescription("right inclined").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite hanim_r_inclined_view Viewpoint").setUrl(new MFString595().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat596().getArray())
                .addChild(new WorldInfo().setInfo(new MFString597().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("front_view").setDEF("hanim_front_view").setTranslation(new float[] {0f,0.85f,2.58f})
            .addComments("HAnimSite visualization shape")
            .addChild(new TouchSensor().setDescription("HAnimSite front_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_front_viewpoint").setCenterOfRotation(new float[] {0f,0.9f,0f}).setDescription("front").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite hanim_front_view Viewpoint").setUrl(new MFString598().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat599().getArray())
                .addChild(new WorldInfo().setInfo(new MFString600().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("back_view").setDEF("hanim_back_view").setRotation(new float[] {0f,1f,0f,3.14f}).setTranslation(new float[] {0f,0.85f,-2.58f})
            .addComments("HAnimSite visualization shape")
            .addChild(new TouchSensor().setDescription("HAnimSite back_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_back_viewpoint").setCenterOfRotation(new float[] {0f,0.9f,0f}).setDescription("back").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite hanim_back_view Viewpoint").setUrl(new MFString601().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat602().getArray())
                .addChild(new WorldInfo().setInfo(new MFString603().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("l_side_view").setDEF("hanim_l_side_view").setRotation(new float[] {0f,1f,0f,1.5708f}).setTranslation(new float[] {2.6f,0.854f,0f})
            .addComments("HAnimSite visualization shape")
            .addChild(new TouchSensor().setDescription("HAnimSite l_side_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_l_side_viewpoint").setCenterOfRotation(new float[] {0f,0.9f,0f}).setDescription("left side").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite hanim_l_side_view Viewpoint").setUrl(new MFString604().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat605().getArray())
                .addChild(new WorldInfo().setInfo(new MFString606().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("Top_view").setDEF("hanim_Top_view").setRotation(new float[] {1f,0f,0f,-1.57f}).setTranslation(new float[] {0f,3.5f,0f})
            .addComments("HAnimSite visualization shape")
            .addChild(new TouchSensor().setDescription("HAnimSite Top_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_Top_viewpoint").setCenterOfRotation(new float[] {0f,0.9f,0f}).setDescription("Top").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite hanim_Top_view Viewpoint").setUrl(new MFString607().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat608().getArray())
                .addChild(new WorldInfo().setInfo(new MFString609().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("front_close_view").setDEF("hanim_front_close_view").setTranslation(new float[] {0f,0.854f,1.575f})
            .addComments("HAnimSite visualization shape")
            .addChild(new TouchSensor().setDescription("HAnimSite front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_front_close_viewpoint").setCenterOfRotation(new float[] {0f,0f,1.575f}).setDescription("front close").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite hanim_front_close_view Viewpoint").setUrl(new MFString610().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat611().getArray())
                .addChild(new WorldInfo().setInfo(new MFString612().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("side_close_view").setDEF("hanim_side_close_view").setRotation(new float[] {0f,1f,0f,1.5708f}).setTranslation(new float[] {1.56f,0.854f,0f})
            .addComments("HAnimSite visualization shape")
            .addChild(new TouchSensor().setDescription("HAnimSite side_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_side_close_viewpoint").setCenterOfRotation(new float[] {1.6f,0f,0f}).setDescription("side close").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite hanim_side_close_view Viewpoint").setUrl(new MFString613().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat614().getArray())
                .addChild(new WorldInfo().setInfo(new MFString615().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("head_front_close_view").setDEF("hanim_head_front_close_view").setTranslation(new float[] {0f,1.5f,1f})
            .addComments("HAnimSite visualization shape")
            .addChild(new TouchSensor().setDescription("HAnimSite head_front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_head_front_close_viewpoint").setCenterOfRotation(new float[] {0f,0f,1f}).setDescription("head front close").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite hanim_head_front_close_view Viewpoint").setUrl(new MFString616().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat617().getArray())
                .addChild(new WorldInfo().setInfo(new MFString618().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("chest_front_close_view").setDEF("hanim_chest_front_close_view").setTranslation(new float[] {0f,1.2f,1f})
            .addComments("HAnimSite visualization shape")
            .addChild(new TouchSensor().setDescription("HAnimSite chest_front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_chest_front_close_viewpoint").setCenterOfRotation(new float[] {0f,0f,1f}).setDescription("chest front close").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite hanim_chest_front_close_view Viewpoint").setUrl(new MFString619().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat620().getArray())
                .addChild(new WorldInfo().setInfo(new MFString621().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("pelvis_front_close_view").setDEF("hanim_pelvis_front_close_view").setTranslation(new float[] {0f,0.8f,1f})
            .addComments("HAnimSite visualization shape")
            .addChild(new TouchSensor().setDescription("HAnimSite pelvis_front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_pelvis_front_close_viewpoint").setCenterOfRotation(new float[] {0f,0f,1f}).setDescription("pelvis front close").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite hanim_pelvis_front_close_view Viewpoint").setUrl(new MFString622().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat623().getArray())
                .addChild(new WorldInfo().setInfo(new MFString624().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("knees_front_close_view").setDEF("hanim_knees_front_close_view").setTranslation(new float[] {0f,0.4f,1f})
            .addComments("HAnimSite visualization shape")
            .addChild(new TouchSensor().setDescription("HAnimSite knees_front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_knees_front_close_viewpoint").setCenterOfRotation(new float[] {0f,0.4f,0f}).setDescription("knees front close").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite hanim_knees_front_close_view Viewpoint").setUrl(new MFString625().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat626().getArray())
                .addChild(new WorldInfo().setInfo(new MFString627().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("feet_front_close_view").setDEF("hanim_feet_front_close_view").setTranslation(new float[] {0f,0f,1f})
            .addComments("HAnimSite visualization shape")
            .addChild(new TouchSensor().setDescription("HAnimSite feet_front_close_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_feet_front_close_viewpoint").setDescription("feet front close").setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite hanim_feet_front_close_view Viewpoint").setUrl(new MFString628().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat629().getArray())
                .addChild(new WorldInfo().setInfo(new MFString630().getArray()))
                .addChild(new Shape().setUSE("HAnimSiteViewpointShape")))))
          .addViewpoints(new HAnimSite().setName("eye_level_view").setDEF("hanim_eye_level_view").setTranslation(new float[] {0f,1.6332f,0.0502f})
            .addComments("HAnimSite visualization shape")
            .addChild(new TouchSensor().setDescription("HAnimSite eye_level_view"))
            .addChild(new Shape().setUSE("HAnimSiteShape"))
            .addChild(new Viewpoint().setDEF("hanim_eye_level_viewpoint").setDescription("eye level looking forward").setOrientation(new float[] {0f,1f,0f,3.141593f}).setPosition(new float[] {0f,0f,0f}))
            .addComments("HAnimSite/Viewpoint visualization shape")
            .addChild(new Anchor().setDescription("HAnimSite hanim_eye_level_view Viewpoint").setUrl(new MFString631().getArray())
              .addChild(new LOD().setForceTransitions(true).setRange(new MFFloat632().getArray())
                .addChild(new WorldInfo().setInfo(new MFString633().getArray()))
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
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_5"))
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
          .addJoints(new HAnimJoint().setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_radiocarpal"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_radiocarpal"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_sternoclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_sternoclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_talocrural"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_talocrural"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_2"))
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
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_distal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_distal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_distal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_distal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_distal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_5"))
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
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_scapula"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_scapula"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_talus"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_talus"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_upperarm"))
          .addSites(new HAnimSite().setUSE("hanim_crotch_pt"))
          .addSites(new HAnimSite().setUSE("hanim_skull_vertex_pt"))
          .addSites(new HAnimSite().setUSE("hanim_sellion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_supramenton_pt"))
          .addSites(new HAnimSite().setUSE("hanim_nuchale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_suprasternale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_cervicale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_substernale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_rib10_midspine_pt"))
          .addSites(new HAnimSite().setUSE("hanim_waist_preferred_posterior_pt"))
          .addSites(new HAnimSite().setUSE("hanim_navel_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_acromion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_acromion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_asis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_asis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_axilla_distal_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_axilla_distal_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_axilla_proximal_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_axilla_proximal_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_calcaneus_posterior_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_calcaneus_posterior_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_carpal_distal_phalanx_1_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_carpal_distal_phalanx_1_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_carpal_distal_phalanx_2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_carpal_distal_phalanx_2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_carpal_distal_phalanx_3_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_carpal_distal_phalanx_3_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_carpal_distal_phalanx_4_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_carpal_distal_phalanx_4_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_carpal_distal_phalanx_5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_carpal_distal_phalanx_5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_clavicle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_clavicle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_dactylion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_dactylion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_femoral_lateral_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_femoral_lateral_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_femoral_medial_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_femoral_medial_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_forefoot_tip_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_forefoot_tip_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_gonion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_gonion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_humeral_lateral_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_humeral_lateral_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_humeral_medial_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_humeral_medial_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_iliocristale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_iliocristale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_infraorbitale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_infraorbitale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_knee_crease_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_knee_crease_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_lateral_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_lateral_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_medial_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_medial_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metacarpal_phalanx_2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metacarpal_phalanx_2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metacarpal_phalanx_5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metacarpal_phalanx_5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metatarsal_phalanx_1_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metatarsal_phalanx_1_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metatarsal_phalanx_5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metatarsal_phalanx_5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_neck_base_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_neck_base_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_olecranon_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_olecranon_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_psis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_psis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_radial_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_radial_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_radiale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_radiale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_rib10_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_rib10_pt"))
          .addSites(new HAnimSite().setUSE("hanim_temporomandibular_l_site_pt"))
          .addSites(new HAnimSite().setUSE("hanim_temporomandibular_r_site_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_sphyrion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_sphyrion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_tarsal_distal_phalanx_2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_tarsal_distal_phalanx_2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_thelion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_thelion_pt"))
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Matthew T. Beitler Joe D. Williams Don Brutzman"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"HAnim@web3D.org"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"none"});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"12 May 1999"});
  }
}
protected class MFFloat6 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.7504f});
  }
}
protected class MFString7 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"2.0"});
  }
}
protected class MFString8 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"none"});
  }
}
protected class MFFloat9 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat10 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3211 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f12 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.824f,0.0277f,0f,0.9149f,0.0016f});
  }
}
protected class MFColorRGBA13 {
  protected org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f,1f,0f,1f,1f,1f,0f,0.1f});
  }
}
protected class MFInt3214 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f15 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.824f,0.0277f,0.0028f,1.0568f,-0.0776f});
  }
}
protected class MFFloat16 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat17 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3218 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f19 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0961f,0.9124f,-0.0001f});
  }
}
protected class MFInt3220 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f21 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.0961f,0.9124f,-0.0001f});
  }
}
protected class MFInt3222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f23 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.1525f,1.0628f,0.0035f});
  }
}
protected class MFColorRGBA24 {
  protected org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f,0f,0f,1f,1f,0f,0f,0.1f});
  }
}
protected class MFInt3225 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f26 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.1689f,0.8419f,0.0352f});
  }
}
protected class MFInt3227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f28 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.1612f,1.0537f,0.0008f});
  }
}
protected class MFInt3229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f30 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.1677f,0.8336f,0.0303f});
  }
}
protected class MFInt3231 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f32 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.0887f,1.0021f,0.1112f});
  }
}
protected class MFInt3233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f34 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0925f,0.9983f,0.1052f});
  }
}
protected class MFInt3235 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f36 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.0716f,1.019f,-0.1138f});
  }
}
protected class MFInt3237 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f38 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0774f,1.019f,-0.1151f});
  }
}
protected class MFInt3239 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f40 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0034f,0.8266f,0.0257f});
  }
}
protected class MFInt3241 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f42 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.008f,0f,-0.008f,0f,0f,0f,0f,0.008f,0.008f,0f,0f,0f,0f,-0.008f,0f,-0.008f,0f});
  }
}
protected class MFFloat43 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat44 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3245 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f46 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.104f,0.4867f,0.0308f});
  }
}
protected class MFInt3247 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f48 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.0993f,0.4881f,-0.0309f});
  }
}
protected class MFInt3249 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f50 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.1598f,0.4967f,0.0297f});
  }
}
protected class MFInt3251 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f52 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.0398f,0.4946f,0.0303f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f56 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.104f,0.4867f,0.0308f,0.1101f,0.0656f,-0.0736f});
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
protected class MFInt3259 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f60 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.1086f,0.0001f,-0.0368f});
  }
}
protected class MFInt3261 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f62 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.1308f,0.0597f,-0.1032f});
  }
}
protected class MFInt3263 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f64 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.089f,0.0716f,-0.0881f});
  }
}
protected class MFInt3265 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f66 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.089f,0.0575f,-0.0943f});
  }
}
protected class MFInt3267 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f68 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.0974f,0.0259f,-0.1171f});
  }
}
protected class MFFloat69 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat70 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3271 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f72 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0.0001f,-0.0368f,0.1086f,0.0001f,0.0368f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0.0001f,0.0368f,0.1086f,0f,0.0762f});
  }
}
protected class MFInt3277 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f78 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0.0001f,0.0368f,0.0816f,0.0232f,0.0106f});
  }
}
protected class MFFloat79 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat80 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3281 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f82 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0f,0.0762f,0.1354f,0.0016f,0.1476f});
  }
}
protected class MFInt3283 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f84 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0f,0.0762f,0.1825f,0.007f,0.0928f});
  }
}
protected class MFInt3285 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f86 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0f,0.0762f,0.1195f,0.0079f,0.1433f});
  }
}
protected class MFFloat87 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat88 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3289 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f90 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f,0.9124f,-0.0001f,-0.104f,0.4867f,0.0308f});
  }
}
protected class MFInt3291 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f92 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f,0.9124f,-0.0001f,-0.0825f,0.4932f,-0.0326f});
  }
}
protected class MFInt3293 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f94 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f,0.9124f,-0.0001f,-0.1421f,0.4992f,0.031f});
  }
}
protected class MFInt3295 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f96 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0961f,0.9124f,-0.0001f,-0.0221f,0.5014f,0.0289f});
  }
}
protected class MFFloat97 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat98 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3299 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f100 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.104f,0.4867f,0.0308f,-0.1101f,0.0656f,-0.0736f});
  }
}
protected class MFFloat101 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat102 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32103 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f104 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f,0.0656f,-0.0736f,-0.1086f,0.0001f,-0.0368f});
  }
}
protected class MFInt32105 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f106 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f,0.0656f,-0.0736f,-0.1006f,0.0658f,-0.1075f});
  }
}
protected class MFInt32107 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f108 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f,0.0656f,-0.0736f,-0.0591f,0.076f,-0.0928f});
  }
}
protected class MFInt32109 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f110 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f,0.0656f,-0.0736f,-0.0603f,0.061f,-0.1002f});
  }
}
protected class MFInt32111 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f112 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1101f,0.0656f,-0.0736f,-0.0692f,0.0297f,-0.1221f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0.0001f,-0.0368f,-0.1086f,0.0001f,0.0368f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0.0001f,0.0368f,-0.1086f,0f,0.0762f});
  }
}
protected class MFInt32121 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f122 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0.0001f,0.0368f,-0.0521f,0.026f,0.0127f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0f,0.0762f,-0.1043f,0.0227f,0.145f});
  }
}
protected class MFInt32127 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f128 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0f,0.0762f,-0.1523f,0.0166f,0.0895f});
  }
}
protected class MFInt32129 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f130 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1086f,0f,0.0762f,-0.0883f,0.0134f,0.1383f});
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
protected class MFInt32133 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f134 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f,1.0568f,-0.0776f,0.0035f,1.0925f,-0.0787f});
  }
}
protected class MFInt32135 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f136 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f,1.0568f,-0.0776f,0f,1.0915f,-0.1091f});
  }
}
protected class MFInt32137 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f138 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f,1.0568f,-0.0776f,0.0069f,1.0966f,0.1017f});
  }
}
protected class MFFloat139 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat140 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32141 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f142 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0035f,1.0925f,-0.0787f,0.0041f,1.1276f,-0.0796f});
  }
}
protected class MFFloat143 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat144 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32145 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f146 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0041f,1.1276f,-0.0796f,0.0045f,1.1546f,-0.08f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,0.0048f,1.1912f,-0.0805f});
  }
}
protected class MFInt32151 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f152 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,-0.0711f,1.1941f,0.1016f});
  }
}
protected class MFInt32153 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f154 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,0.0871f,1.1925f,0.0992f});
  }
}
protected class MFInt32155 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f156 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,0.0049f,1.1908f,-0.1113f});
  }
}
protected class MFFloat157 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat158 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32159 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f160 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0048f,1.1912f,-0.0805f,0.0051f,1.2278f,-0.0808f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0051f,1.2278f,-0.0808f,0.0053f,1.2679f,-0.081f});
  }
}
protected class MFFloat165 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat166 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32167 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f168 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0053f,1.2679f,-0.081f,0.0056f,1.2848f,-0.0822f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f,1.2848f,-0.0822f,0.0057f,1.3126f,-0.0838f});
  }
}
protected class MFInt32173 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f174 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f,1.2848f,-0.0822f,0.0085f,1.2995f,0.1147f});
  }
}
protected class MFFloat175 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat176 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32177 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f178 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3126f,-0.0838f,0.0057f,1.3382f,-0.0845f});
  }
}
protected class MFInt32179 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f180 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3126f,-0.0838f,-0.0736f,1.3385f,0.1217f});
  }
}
protected class MFInt32181 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f182 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3126f,-0.0838f,0.0918f,1.3382f,0.1192f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3382f,-0.0845f,0.0058f,1.3625f,-0.0833f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0058f,1.3625f,-0.0833f,0.0059f,1.3866f,-0.08f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0059f,1.3866f,-0.08f,0.006f,1.4102f,-0.0745f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.006f,1.4102f,-0.0745f,0.0061f,1.432f,-0.0675f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f202 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0061f,1.432f,-0.0675f,0.0062f,1.4583f,-0.057f});
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
protected class MFInt32205 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f206 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0062f,1.4583f,-0.057f,0.0063f,1.4761f,-0.0484f});
  }
}
protected class MFFloat207 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat208 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32209 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f210 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0063f,1.4761f,-0.0484f,0.0065f,1.4951f,-0.0387f});
  }
}
protected class MFFloat211 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat212 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32213 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f214 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0066f,1.5132f,-0.0301f});
  }
}
protected class MFInt32215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f216 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.082f,1.4488f,-0.0353f});
  }
}
protected class MFInt32217 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f218 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,-0.082f,1.4488f,-0.0353f});
  }
}
protected class MFInt32219 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f220 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0084f,1.4714f,0.0551f});
  }
}
protected class MFInt32221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f222 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0064f,1.52f,-0.0815f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5132f,-0.0301f,0.0066f,1.5357f,-0.0143f});
  }
}
protected class MFInt32227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f228 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5132f,-0.0301f,-0.0419f,1.5149f,-0.022f});
  }
}
protected class MFInt32229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f230 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5132f,-0.0301f,0.0646f,1.5141f,-0.038f});
  }
}
protected class MFFloat231 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat232 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f234 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5357f,-0.0143f,0.0066f,1.552f,-0.0082f});
  }
}
protected class MFFloat235 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat236 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32237 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f238 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.552f,-0.0082f,0.0066f,1.5662f,-0.0084f});
  }
}
protected class MFFloat239 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat240 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32241 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f242 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5662f,-0.0084f,0.0066f,1.58f,-0.0103f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.58f,-0.0103f,0.0066f,1.5928f,-0.0103f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5928f,-0.0103f,0.0066f,1.6144f,-0.0034f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.6144f,-0.0034f,0.0044f,1.6209f,0.0236f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0336f,1.6332f,0.0502f});
  }
}
protected class MFInt32259 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f260 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0336f,1.6332f,0.0502f});
  }
}
protected class MFInt32261 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f262 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0336f,1.635f,0.0506f});
  }
}
protected class MFInt32263 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f264 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0336f,1.6332f,0.0502f});
  }
}
protected class MFInt32265 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f266 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0336f,1.6332f,0.0502f});
  }
}
protected class MFInt32267 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f268 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0336f,1.635f,0.0506f});
  }
}
protected class MFInt32269 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f270 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0f,1.63f,0.015f});
  }
}
protected class MFInt32271 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f272 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.005f,1.7504f,0.0055f});
  }
}
protected class MFInt32273 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f274 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0058f,1.6316f,0.0852f});
  }
}
protected class MFInt32275 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f276 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0237f,1.6171f,0.0752f});
  }
}
protected class MFInt32277 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f278 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0341f,1.6171f,0.0752f});
  }
}
protected class MFInt32279 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f280 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0061f,1.541f,0.0805f});
  }
}
protected class MFInt32281 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f282 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.0646f,1.6347f,0.0302f});
  }
}
protected class MFInt32283 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f284 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,-0.052f,1.5529f,0.0347f});
  }
}
protected class MFInt32285 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f286 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0739f,1.6348f,0.0282f});
  }
}
protected class MFInt32287 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f288 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0631f,1.553f,0.033f});
  }
}
protected class MFInt32289 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f290 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0039f,1.5972f,-0.0796f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0336f,1.6332f,0.0502f,0.034f,1.64f,0.05f});
  }
}
protected class MFColorRGBA295 {
  protected org.web3d.x3d.jsail.fields.MFColorRGBA getArray() {
    return new org.web3d.x3d.jsail.fields.MFColorRGBA(new float[] {1f,1f,0f,1f,1f,1f,0f,0.1f});
  }
}
protected class MFString296 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_eyeball_site_viewpoint"});
  }
}
protected class MFFloat297 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString298 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFInt32299 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f300 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.01f,0f,-0.01f,0f,0f,0f,0f,0.01f,0.01f,0f,0f,0f,0f,-0.01f,0f,-0.01f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0336f,1.6332f,0.0502f,-0.034f,1.64f,0.05f});
  }
}
protected class MFString309 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_r_eyeball_site_viewpoint"});
  }
}
protected class MFFloat310 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString311 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFFloat312 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.63f,0.015f,0.045f,1.63f,0f});
  }
}
protected class MFInt32320 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f321 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.63f,0.015f,-0.045f,1.63f,0f});
  }
}
protected class MFFloat322 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat323 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32324 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f325 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.0962f,1.4269f,-0.0424f});
  }
}
protected class MFInt32326 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f327 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.0271f,1.4943f,0.0394f});
  }
}
protected class MFInt32328 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f329 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.2032f,1.476f,-0.049f});
  }
}
protected class MFInt32330 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f331 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.1777f,1.4065f,-0.0075f});
  }
}
protected class MFInt32332 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f333 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.1706f,1.4072f,-0.0875f});
  }
}
protected class MFFloat334 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat335 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32336 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f337 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0962f,1.4269f,-0.0424f,0.2029f,1.4376f,-0.0387f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f,1.4376f,-0.0387f,0.2014f,1.1357f,-0.0682f});
  }
}
protected class MFInt32342 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f343 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f,1.4376f,-0.0387f,0.228f,1.1482f,-0.11f});
  }
}
protected class MFFloat344 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat345 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32346 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f347 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1984f,0.8663f,-0.0583f});
  }
}
protected class MFInt32348 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f349 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1901f,0.8645f,-0.0415f});
  }
}
protected class MFInt32350 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f351 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1962f,1.1375f,-0.1123f});
  }
}
protected class MFInt32352 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f353 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1735f,1.1272f,-0.1113f});
  }
}
protected class MFInt32354 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f355 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.2182f,1.1212f,-0.1167f});
  }
}
protected class MFFloat356 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat357 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32358 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f359 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1924f,0.8472f,-0.0534f});
  }
}
protected class MFInt32360 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f361 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1983f,0.8024f,-0.028f});
  }
}
protected class MFInt32362 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f363 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1987f,0.8029f,-0.053f});
  }
}
protected class MFInt32364 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f365 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1956f,0.8019f,-0.0794f});
  }
}
protected class MFInt32366 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f367 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1925f,0.8066f,-0.1036f});
  }
}
protected class MFInt32368 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f369 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.2009f,0.8139f,-0.0237f});
  }
}
protected class MFInt32370 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f371 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.2142f,0.8529f,-0.0648f});
  }
}
protected class MFInt32372 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f373 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1929f,0.786f,-0.1122f});
  }
}
protected class MFInt32374 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f375 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.3f,0.75f,0.45f});
  }
}
protected class MFString376 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_hand_front_viewpoint"});
  }
}
protected class MFFloat377 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString378 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
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
protected class MFInt32381 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f382 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1924f,0.8472f,-0.0534f,0.1951f,0.8226f,0.0246f});
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
protected class MFInt32385 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f386 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1951f,0.8226f,0.0246f,0.1955f,0.8159f,0.0464f});
  }
}
protected class MFFloat387 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat388 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32389 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f390 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1955f,0.8159f,0.0464f,0.1982f,0.8061f,0.0759f});
  }
}
protected class MFFloat391 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat392 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32393 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f394 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.8024f,-0.028f,0.1983f,0.7815f,-0.028f});
  }
}
protected class MFFloat395 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat396 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32397 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f398 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.7815f,-0.028f,0.2017f,0.7363f,-0.0248f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f402 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2017f,0.7363f,-0.0248f,0.2028f,0.7139f,-0.0236f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2028f,0.7139f,-0.0236f,0.2089f,0.6858f,-0.0245f});
  }
}
protected class MFInt32407 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f408 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2028f,0.7139f,-0.0236f,0.2056f,0.6743f,-0.0482f});
  }
}
protected class MFFloat409 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat410 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32411 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f412 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.8029f,-0.053f,0.1987f,0.7818f,-0.053f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f416 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.7818f,-0.053f,0.2013f,0.7273f,-0.0503f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2013f,0.7273f,-0.0503f,0.2026f,0.7011f,-0.0494f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2026f,0.7011f,-0.0494f,0.208f,0.6731f,-0.0491f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.8019f,-0.0794f,0.1956f,0.7815f,-0.0794f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.7815f,-0.0794f,0.1973f,0.7287f,-0.0777f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1973f,0.7287f,-0.0777f,0.1983f,0.7045f,-0.0767f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.7045f,-0.0767f,0.2035f,0.675f,-0.0756f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.8066f,-0.1036f,0.1925f,0.7866f,-0.1036f});
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
protected class MFInt32447 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f448 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.7866f,-0.1036f,0.1938f,0.7452f,-0.1024f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f452 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1938f,0.7452f,-0.1024f,0.1948f,0.7277f,-0.1017f});
  }
}
protected class MFFloat453 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat454 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32455 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f456 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1948f,0.7277f,-0.1017f,0.2014f,0.7009f,-0.1012f});
  }
}
protected class MFFloat457 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat458 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32459 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f460 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f,1.4488f,-0.0353f,-0.0962f,1.4269f,-0.0424f});
  }
}
protected class MFInt32461 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f462 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f,1.4488f,-0.0353f,-0.0115f,1.4943f,0.04f});
  }
}
protected class MFInt32463 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f464 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f,1.4488f,-0.0353f,-0.1905f,1.4791f,-0.0431f});
  }
}
protected class MFInt32465 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f466 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f,1.4488f,-0.0353f,-0.1626f,1.4072f,-0.0031f});
  }
}
protected class MFInt32467 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f468 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.082f,1.4488f,-0.0353f,-0.1603f,1.4098f,-0.0826f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0962f,1.4269f,-0.0424f,-0.2029f,1.4376f,-0.0387f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2029f,1.4376f,-0.0387f,-0.2014f,1.1357f,-0.0682f});
  }
}
protected class MFInt32477 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f478 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2029f,1.4376f,-0.0387f,-0.2224f,1.1517f,-0.1033f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f,1.1357f,-0.0682f,-0.1984f,0.8663f,-0.0583f});
  }
}
protected class MFInt32483 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f484 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f,1.1357f,-0.0682f,-0.1884f,0.8676f,-0.036f});
  }
}
protected class MFInt32485 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f486 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f,1.1357f,-0.0682f,-0.1907f,1.1405f,-0.1065f});
  }
}
protected class MFInt32487 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f488 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f,1.1357f,-0.0682f,-0.168f,1.1298f,-0.1062f});
  }
}
protected class MFInt32489 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f490 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2014f,1.1357f,-0.0682f,-0.213f,1.1305f,-0.1091f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1924f,0.8472f,-0.0534f});
  }
}
protected class MFInt32495 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f496 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1983f,0.8024f,-0.028f});
  }
}
protected class MFInt32497 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f498 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1987f,0.8029f,-0.053f});
  }
}
protected class MFInt32499 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f500 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1956f,0.8019f,-0.0794f});
  }
}
protected class MFInt32501 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f502 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1925f,0.8066f,-0.1036f});
  }
}
protected class MFInt32503 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f504 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1977f,0.8169f,-0.0177f});
  }
}
protected class MFInt32505 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f506 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.2117f,0.8562f,-0.0584f});
  }
}
protected class MFInt32507 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f508 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.1929f,0.789f,-0.1064f});
  }
}
protected class MFInt32509 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f510 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1984f,0.8663f,-0.0583f,-0.3f,0.75f,0.45f});
  }
}
protected class MFString511 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_r_hand_front_viewpoint"});
  }
}
protected class MFFloat512 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString513 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFFloat514 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat515 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32516 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f517 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1924f,0.8472f,-0.0534f,-0.1951f,0.8226f,0.0246f});
  }
}
protected class MFFloat518 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat519 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32520 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f521 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f,0.8226f,0.0246f,-0.1955f,0.8159f,0.0464f});
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
protected class MFInt32524 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f525 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1955f,0.8159f,0.0464f,-0.1869f,0.809f,0.082f});
  }
}
protected class MFFloat526 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat527 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32528 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f529 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1983f,0.8024f,-0.028f,-0.1983f,0.7815f,-0.028f});
  }
}
protected class MFFloat530 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat531 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32532 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f533 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1983f,0.7815f,-0.028f,-0.2017f,0.7363f,-0.0248f});
  }
}
protected class MFFloat534 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat535 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32536 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f537 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2017f,0.7363f,-0.0248f,-0.2028f,0.7139f,-0.0236f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2028f,0.7139f,-0.0236f,-0.198f,0.6883f,-0.018f});
  }
}
protected class MFInt32542 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f543 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2028f,0.7139f,-0.0236f,-0.1941f,0.6772f,-0.0423f});
  }
}
protected class MFFloat544 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat545 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32546 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f547 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1987f,0.8029f,-0.053f,-0.1987f,0.7818f,-0.053f});
  }
}
protected class MFFloat548 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat549 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32550 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f551 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1987f,0.7818f,-0.053f,-0.2013f,0.7273f,-0.0503f});
  }
}
protected class MFFloat552 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat553 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32554 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f555 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2013f,0.7273f,-0.0503f,-0.2026f,0.7011f,-0.0494f});
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
protected class MFInt32558 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f559 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2026f,0.7011f,-0.0494f,-0.1969f,0.6758f,-0.0427f});
  }
}
protected class MFFloat560 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat561 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32562 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f563 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1956f,0.8019f,-0.0794f,-0.1956f,0.7815f,-0.0794f});
  }
}
protected class MFFloat564 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat565 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32566 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f567 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1956f,0.7815f,-0.0794f,-0.1973f,0.7287f,-0.0777f});
  }
}
protected class MFFloat568 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat569 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32570 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f571 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1973f,0.7287f,-0.0777f,-0.1983f,0.7045f,-0.0767f});
  }
}
protected class MFFloat572 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat573 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32574 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f575 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1983f,0.7045f,-0.0767f,-0.1934f,0.6778f,-0.0693f});
  }
}
protected class MFFloat576 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat577 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32578 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f579 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1925f,0.8066f,-0.1036f,-0.1925f,0.7866f,-0.1036f});
  }
}
protected class MFFloat580 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat581 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32582 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f583 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1925f,0.7866f,-0.1036f,-0.1938f,0.7452f,-0.1024f});
  }
}
protected class MFFloat584 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat585 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32586 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f587 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1938f,0.7452f,-0.1024f,-0.1948f,0.7277f,-0.1017f});
  }
}
protected class MFFloat588 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat589 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32590 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
protected class MFVec3f591 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1948f,0.7277f,-0.1017f,-0.1938f,0.7035f,-0.0949f});
  }
}
protected class MFString592 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_inclined_viewpoint"});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_r_inclined_viewpoint"});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_front_viewpoint"});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_back_viewpoint"});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_l_side_viewpoint"});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_Top_viewpoint"});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_front_close_viewpoint"});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_side_close_viewpoint"});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_head_front_close_viewpoint"});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_chest_front_close_viewpoint"});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_pelvis_front_close_viewpoint"});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_knees_front_close_viewpoint"});
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
protected class MFString628 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_feet_front_close_viewpoint"});
  }
}
protected class MFFloat629 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString630 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
protected class MFString631 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#hanim_eye_level_viewpoint"});
  }
}
protected class MFFloat632 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.04f});
  }
}
protected class MFString633 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hide diamond when close"});
  }
}
}
