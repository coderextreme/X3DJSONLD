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
public class DiamondManLOA0_patched2 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new DiamondManLOA0_patched2().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/DiamondManLOA0_patched2.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("DiamondManLOA0.x3d"))
        .addMeta(new meta().setName("description").setContent("HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid."))
        .addMeta(new meta().setName("creator").setContent("Matthew T. Beitler"))
        .addMeta(new meta().setName("translator").setContent("Joel S. Pawloski"))
        .addMeta(new meta().setName("created").setContent("12 November 2001"))
        .addMeta(new meta().setName("modified").setContent("Thu, 14 Dec 2023 22:20:20 GMT"))
        .addMeta(new meta().setName("motto").setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""))
        .addMeta(new meta().setName("reference").setContent("HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero"))
        .addMeta(new meta().setName("reference").setContent("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl"))
        .addMeta(new meta().setName("reference").setContent("http://ece.uwaterloo.ca/~HAnim"))
        .addMeta(new meta().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"))
        .addMeta(new meta().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
        .addMeta(new meta().setName("reference").setContent("http://www.cis.upenn.edu/~beitler"))
        .addMeta(new meta().setName("Image").setContent("humanoid_landmark_locations.gif"))
        .addMeta(new meta().setName("Image").setContent("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d"))
        .addComponent(new component().setName("HAnim").setLevel(1)))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HANIM 2.0 Default Joint Centers, LOA0").setInfo(new MFString0().getArray()))
        .addChild(new NavigationInfo().setSpeed(1.5f))
        .addChild(new Viewpoint().setDescription("Diamond Man, LOA 0").setPosition(new float[] {0f,1f,3f}).setCenterOfRotation(new float[] {0f,1f,0f}))
        .addChild(new HAnimHumanoid().setDEF("hanim_humanoid").setName("humanoid").setLoa(0)
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .setMetadata(new MetadataString().setName("authorEmail").setValue(new MFString1().getArray()))
            .setMetadata(new MetadataString().setName("authorName").setValue(new MFString2().getArray()))
            .setMetadata(new MetadataString().setName("copyright").setValue(new MFString3().getArray()))
            .setMetadata(new MetadataString().setName("creationDate").setValue(new MFString4().getArray()))
            .setMetadata(new MetadataString().setName("humanoidVersion").setValue(new MFString5().getArray()))
            .setMetadata(new MetadataString().setName("usageRestrictions").setValue(new MFString6().getArray())))
          .addSkeleton(new HAnimJoint("hanim_humanoid").setDEF("hanim_humanoid_root").setName("humanoid_root").setCenter(new float[] {0f,0.824f,0.0277f})
            .addChild(new HAnimJoint("hanim_humanoid_root").setDEF("hanim_sacroiliac").setName("sacroiliac").setCenter(new float[] {0f,0.9149f,0.0016f})
              .addChild(new HAnimSegment("hanim_sacroiliac").setDEF("hanim_pelvis").setName("pelvis")
                .addChild(new Transform().setTranslation(new float[] {0f,0.9149f,0.0016f})
                  .addChild(new Shape().setDEF("DiamondShape")
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0f})))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f).setCoordIndex(new MFInt327().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f8().getArray()))))))))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_site_view").setName("site_view")
            .addChild(new Viewpoint().setDEF("InclinedView").setDescription("Inclined View").setPosition(new float[] {1.62f,1.05f,2.06f}).setOrientation(new float[] {-0.113f,0.993f,0.0347f,0.671f}))
            .addChild(new Viewpoint().setDEF("FrontView").setDescription("Front View").setPosition(new float[] {0f,0.854f,2.57665f}))
            .addChild(new Viewpoint().setDEF("SideView").setDescription("Side View").setPosition(new float[] {2.5929f,0.854f,0f}).setOrientation(new float[] {0f,1f,0f,1.57079f}))
            .addChild(new Viewpoint().setDEF("TopView").setDescription("Top View").setPosition(new float[] {0f,3.4495f,0f}).setOrientation(new float[] {1f,0f,0f,-1.57079f})))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_pelvis"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_sacroiliac"))))      ;
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"beitler@graphics.cis.upenn.edu beitler@acm.org"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Matthew T. Beitler"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Copyright 1999 Matthew T. Beitler"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"05/12/99"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JointCenters 1.1 LOA0"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."});
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFVec3f8 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.01f,0f,-0.01f,0f,0f,0f,0f,0.01f,0.01f,0f,0f,0f,0f,-0.01f,0f,-0.01f,0f});
  }
}
}
