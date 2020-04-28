package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.HumanoidAnimation;
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
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class DiamondManLOA_0 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new DiamondManLOA_0().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/HumanoidAnimation/DiamondManLOA_0.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("H-Anim").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("DiamondManLOA_0.x3d"))
        .addMeta(new metaObject().setName("description").setContent("H-Anim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal H-Anim humanoid."))
        .addMeta(new metaObject().setName("creator").setContent("Matthew T. Beitler"))
        .addMeta(new metaObject().setName("translator").setContent("Joel S. Pawloski"))
        .addMeta(new metaObject().setName("created").setContent("12 November 2001"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("motto").setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""))
        .addMeta(new metaObject().setName("reference").setContent("H-Anim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero"))
        .addMeta(new metaObject().setName("reference").setContent("H-Anim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero"))
        .addMeta(new metaObject().setName("reference").setContent("http://H-Anim.org/Specifications/H-Anim1.1/appendices.html#appendixa"))
        .addMeta(new metaObject().setName("reference").setContent("http://H-Anim.org/Specifications/H-Anim1.1/JointCenters1_1_LOA0.wrl"))
        .addMeta(new metaObject().setName("reference").setContent("http://H-Anim.org/Specifications/H-Anim1.1/JointCenters1_1_LOA0-diamond.wrl"))
        .addMeta(new metaObject().setName("reference").setContent("http://ece.uwaterloo.ca/~h-anim"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.cis.upenn.edu/~beitler"))
        .addMeta(new metaObject().setName("Image").setContent("humanoid_landmark_locations.gif"))
        .addMeta(new metaObject().setName("Image").setContent("http://H-Anim.org/Specifications/H-Anim1.1/humanoid_landmark_locations.gif"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/DiamondManLOA_0.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setInfo(new MFStringObject(new MFString0().getArray())).setTitle("HANIM 2.0 Default Joint Centers, LOA0"))
        .addChild(new NavigationInfoObject().setSpeed(1.5f))
        .addChild(new ViewpointObject().setCenterOfRotation(new float[] {0f,1f,0f}).setDescription("Diamond Man, LOA 0").setPosition(new float[] {0f,1f,3f}))
        .addChild(new HAnimHumanoidObject().setName("humanoid").setDEF("hanim_humanoid").setInfo(new MFStringObject(new MFString1().getArray())).setVersion("2.0")
          .addJoints(new HAnimJointObject().setName("humanoid_root").setDEF("hanim_HumanoidRoot").setCenter(new float[] {0f,0.824f,0.0277f})
            .addChild(new HAnimJointObject().setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0f,0.9149f,0.0016f})
              .addChild(new HAnimSegmentObject().setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new TransformObject().setTranslation(new float[] {0f,0.9149f,0.0016f})
                  .addChild(new ShapeObject().setDEF("DiamondShape")
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt322().getArray())).setCreaseAngle(0.5f)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f3().getArray()))))
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0f}))))))))
          .addJoints(new HAnimJointObject().setUSE("hanim_HumanoidRoot"))
          .addJoints(new HAnimJointObject().setUSE("hanim_sacroiliac"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_pelvis"))
          .addViewpoints(new HAnimSiteObject().setName("hanim_view")
            .addChild(new ViewpointObject().setDEF("InclinedView").setDescription("Inclined View").setOrientation(new float[] {-0.113f,0.993f,0.0347f,0.671f}).setPosition(new float[] {1.62f,1.05f,2.06f}))
            .addChild(new ViewpointObject().setDEF("FrontView").setDescription("Front View").setPosition(new float[] {0f,0.854f,2.57665f}))
            .addChild(new ViewpointObject().setDEF("SideView").setDescription("Side View").setOrientation(new float[] {0f,1f,0f,1.57079f}).setPosition(new float[] {2.5929f,0.854f,0f}))
            .addChild(new ViewpointObject().setDEF("TopView").setDescription("Top View").setOrientation(new float[] {1f,0f,0f,-1.57079f}).setPosition(new float[] {0f,3.4495f,0f})))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~h-anim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org","authorName=Matthew T. Beitler","copyright=Copyright 1999 Matthew T. Beitler","creationDate=05/12/99","humanoidVersion=JointCenters 1.1 LOA0","usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."});
  }
}
protected class MFInt322 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f3 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0.01f,0f,-0.01f,0f,0f,0f,0f,0.01f,0.01f,0f,0f,0f,0f,-0.01f,0f,-0.01f,0f});
  }
}
}
