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
public class DiamondManLOA_2 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new DiamondManLOA_2().initialize().toFileJSON("../data/DiamondManLOA_2.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("H-Anim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("DiamondManLOA_2.x3d"))
        .addMeta(new meta().setName("description").setContent("hanim skeletal structure at level of articulation two, one diamond at the base node for the structure"))
        .addMeta(new meta().setName("creator").setContent("Matthew T. Beitler"))
        .addMeta(new meta().setName("translator").setContent("Joel S. Pawloski"))
        .addMeta(new meta().setName("created").setContent("12 November 2001"))
        .addMeta(new meta().setName("modified").setContent("20 February 2021"))
        .addMeta(new meta().setName("Image").setContent("DiamondManLOA_2.png"))
        .addMeta(new meta().setName("TODO").setContent("can X3dTidy sort top-level USE nodes by node type?"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA2.png"))
        .addMeta(new meta().setName("motto").setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""))
        .addMeta(new meta().setName("reference").setContent("The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
        .addMeta(new meta().setName("subject").setContent("human animation, x3d, vrml, animation"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_2.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setInfo(new org.web3d.x3d.jsail.fields.MFString(new MFString0().getArray())).setTitle("HANIM 1.1 Default Joint Centers, LOA1"))
        .addChild(new NavigationInfo().setSpeed(1.5f))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,1f,0f}).setDescription("Diamond Man, LOA 2").setPosition(new float[] {0f,1f,3f}))
        .addChild(new Transform().setTranslation(new float[] {1f,1.5f,0f})
          .addChild(new Billboard()
            .addChild(new Shape()
              .setGeometry(new Text().setString(new org.web3d.x3d.jsail.fields.MFString(new MFString1().getArray()))
                .setFontStyle(new FontStyle().setFamily(new org.web3d.x3d.jsail.fields.MFString(new MFString2().getArray())).setSize(0.1f)))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("TextMaterial").setDiffuseColor(new float[] {0.9f,0.9f,0.9f}))))
            .addChild(new Transform().setTranslation(new float[] {0f,-0.3f,0f})
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("MIN_COLOR").setDiffuseColor(new float[] {1f,0f,0f}))))
              .addChild(new Transform().setTranslation(new float[] {0.2f,0f,0f})
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new org.web3d.x3d.jsail.fields.MFString(new MFString3().getArray()))
                    .setFontStyle(new FontStyle().setFamily(new org.web3d.x3d.jsail.fields.MFString(new MFString4().getArray())).setSize(0.1f)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial"))))))
            .addChild(new Transform().setTranslation(new float[] {0f,-0.5f,0f})
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("JOINT_COLOR").setDiffuseColor(new float[] {1f,1f,0f}))))
              .addChild(new Transform().setTranslation(new float[] {0.2f,0f,0f})
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new org.web3d.x3d.jsail.fields.MFString(new MFString5().getArray()))
                    .setFontStyle(new FontStyle().setFamily(new org.web3d.x3d.jsail.fields.MFString(new MFString6().getArray())).setSize(0.1f)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial"))))))
            .addChild(new Transform().setTranslation(new float[] {0f,-0.7f,0f})
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("REC_SPINAL_COLOR").setDiffuseColor(new float[] {1f,0f,1f}))))
              .addChild(new Transform().setTranslation(new float[] {0.2f,0f,0f})
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new org.web3d.x3d.jsail.fields.MFString(new MFString7().getArray()))
                    .setFontStyle(new FontStyle().setFamily(new org.web3d.x3d.jsail.fields.MFString(new MFString8().getArray())).setSize(0.1f)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial"))))))
            .addChild(new Transform().setTranslation(new float[] {0f,-0.9f,0f})
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("SPINAL_COLOR").setDiffuseColor(new float[] {0f,1f,0f}))))
              .addChild(new Transform().setTranslation(new float[] {0.2f,0f,0f})
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new org.web3d.x3d.jsail.fields.MFString(new MFString9().getArray()))
                    .setFontStyle(new FontStyle().setFamily(new org.web3d.x3d.jsail.fields.MFString(new MFString10().getArray())).setSize(0.1f)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial"))))))
            .addChild(new Transform().setTranslation(new float[] {0f,-1.3f,0f})
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("SITE_COLOR").setDiffuseColor(new float[] {0f,0f,1f}))))
              .addChild(new Transform().setTranslation(new float[] {0.2f,0f,0f})
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new org.web3d.x3d.jsail.fields.MFString(new MFString11().getArray()))
                    .setFontStyle(new FontStyle().setFamily(new org.web3d.x3d.jsail.fields.MFString(new MFString12().getArray())).setSize(0.1f)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial"))))))
            .addChild(new Transform().setTranslation(new float[] {0f,-1.1f,0f})
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("HAND_FEET_COLOR").setDiffuseColor(new float[] {0f,1f,1f}))))
              .addChild(new Transform().setTranslation(new float[] {0.2f,0f,0f})
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new org.web3d.x3d.jsail.fields.MFString(new MFString13().getArray()))
                    .setFontStyle(new FontStyle().setFamily(new org.web3d.x3d.jsail.fields.MFString(new MFString14().getArray())).setSize(0.1f)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial"))))))))
        .addChild(new HAnimHumanoid().setName("humanoid").setDEF("hanim_humanoid").setVersion("1.0")
          .addComments(new CommentsBlock("HAnimHumanoid original info='\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given.\"'"))
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .setValue(new MetadataString().setName("humanoidVersion").setValue(new org.web3d.x3d.jsail.fields.MFString(new MFString15().getArray())))
            .addValue(new MetadataString().setName("authorEmail").setValue(new org.web3d.x3d.jsail.fields.MFString(new MFString16().getArray())))
            .addValue(new MetadataString().setName("authorName").setValue(new org.web3d.x3d.jsail.fields.MFString(new MFString17().getArray())))
            .addValue(new MetadataString().setName("copyright").setValue(new org.web3d.x3d.jsail.fields.MFString(new MFString18().getArray())))
            .addValue(new MetadataString().setName("creationDate").setValue(new org.web3d.x3d.jsail.fields.MFString(new MFString19().getArray())))
            .addValue(new MetadataString().setName("usageRestrictions").setValue(new org.web3d.x3d.jsail.fields.MFString(new MFString20().getArray()))))
          .addSkeleton(new HAnimJoint().setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new float[] {0f,0.824f,0.0277f})
            .addChild(new HAnimSegment().setName("segmentNameNeededTODO-93").setDEF("hanim_segmentNameNeededTODO-93")
              .addChild(new Transform().setTranslation(new float[] {0f,0.824f,0.0277f})
                .addChild(new Shape().setDEF("DiamondShape")
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3221().getArray())).setCreaseAngle(0.5f)
                    .setCoord(new Coordinate().setDEF("points").setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f22().getArray()))))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("ROOT_COLOR").setDiffuseColor(new float[] {1f,1f,1f}))))
                .addChild(new Transform().setTranslation(new float[] {0f,0.01f,0f})
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new org.web3d.x3d.jsail.fields.MFString(new MFString23().getArray()))
                        .setFontStyle(new FontStyle().setFamily(new org.web3d.x3d.jsail.fields.MFString(new MFString24().getArray())).setSize(0.01f).setStyle("ITALIC")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.039216f,1f,0.568627f}))))))))
            .addChild(new HAnimJoint().setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0f,0.9149f,0.0016f})
              .addChild(new HAnimSegment().setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new Transform().setDEF("sacroiliacPos").setTranslation(new float[] {0f,0.9149f,0.0016f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3225().getArray())).setCreaseAngle(0.5f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("MIN_COLOR")))))
                .addChild(new HAnimSite().setName("r_iliocristale_pt").setDEF("hanim_r_iliocristale_pt").setTranslation(new float[] {-0.1525f,1.0628f,0.0035f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3226().getArray())).setCreaseAngle(0.5f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("r_trochanterion_pt").setDEF("hanim_r_trochanterion_pt").setTranslation(new float[] {-0.1689f,0.8419f,0.0352f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3227().getArray())).setCreaseAngle(0.5f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("l_iliocristale_pt").setDEF("hanim_l_iliocristale_pt").setTranslation(new float[] {0.1612f,1.0537f,0.0008f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3228().getArray())).setCreaseAngle(0.5f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("l_trochanterion_pt").setDEF("hanim_l_trochanterion_pt").setTranslation(new float[] {0.1677f,0.8336f,0.0303f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3229().getArray())).setCreaseAngle(0.5f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("r_asis_pt").setDEF("hanim_r_asis_pt").setTranslation(new float[] {-0.0887f,1.0021f,0.1112f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3230().getArray())).setCreaseAngle(0.5f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("l_asis_pt").setDEF("hanim_l_asis_pt").setTranslation(new float[] {0.0925f,0.9983f,0.1052f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3231().getArray())).setCreaseAngle(0.5f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("r_psis_pt").setDEF("hanim_r_psis_pt").setTranslation(new float[] {-0.0716f,1.019f,-0.1138f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3232().getArray())).setCreaseAngle(0.5f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("l_psis_pt").setDEF("hanim_l_psis_pt").setTranslation(new float[] {0.0774f,1.019f,-0.1151f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3233().getArray())).setCreaseAngle(0.5f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("crotch_pt").setDEF("hanim_crotch_pt").setTranslation(new float[] {0.0034f,0.8266f,0.0257f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3234().getArray())).setCreaseAngle(0.5f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR"))))))
              .addChild(new HAnimJoint().setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {0.0961f,0.9124f,-0.0001f})
                .addChild(new HAnimSegment().setName("l_thigh").setDEF("hanim_l_thigh")
                  .addChild(new Transform().setTranslation(new float[] {0.0961f,0.9124f,-0.0001f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3235().getArray())).setCreaseAngle(0.5f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("MIN_COLOR")))))
                  .addChild(new HAnimSite().setName("l_knee_crease_pt").setDEF("hanim_l_knee_crease_pt").setTranslation(new float[] {0.0993f,0.4881f,-0.0309f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3236().getArray())).setCreaseAngle(0.5f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR")))))
                  .addChild(new HAnimSite().setName("l_femoral_lateral_epicn_pt").setDEF("hanim_l_femoral_lateral_epicn_pt").setTranslation(new float[] {0.1598f,0.4967f,0.0297f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3237().getArray())).setCreaseAngle(0.5f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR")))))
                  .addChild(new HAnimSite().setName("l_femoral_medial_epicn_pt").setDEF("hanim_l_femoral_medial_epicn_pt").setTranslation(new float[] {0.0398f,0.4946f,0.0303f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3238().getArray())).setCreaseAngle(0.5f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                .addChild(new HAnimJoint().setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {0.104f,0.4867f,0.0308f})
                  .addChild(new HAnimSegment().setName("l_calf").setDEF("hanim_l_calf")
                    .addChild(new Transform().setTranslation(new float[] {0.104f,0.4867f,0.0308f})
                      .addChild(new Shape()
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3239().getArray())).setCreaseAngle(0.5f)
                          .setCoord(new Coordinate().setUSE("points")))
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setUSE("MIN_COLOR"))))))
                  .addChild(new HAnimJoint().setName("l_ankle").setDEF("hanim_l_ankle").setCenter(new float[] {0.1101f,0.0656f,-0.0736f})
                    .addChild(new HAnimSegment().setName("l_hindfoot").setDEF("hanim_l_hindfoot")
                      .addChild(new Transform().setTranslation(new float[] {0.1101f,0.0656f,-0.0736f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3240().getArray())).setCreaseAngle(0.5f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("MIN_COLOR")))))
                      .addChild(new HAnimSite().setName("l_lateral_malleolus_pt").setDEF("hanim_l_lateral_malleolus_pt").setTranslation(new float[] {0.1308f,0.0597f,-0.1032f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3241().getArray())).setCreaseAngle(0.5f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                      .addChild(new HAnimSite().setName("l_medial_malleolus_pt").setDEF("hanim_l_medial_malleolus_pt").setTranslation(new float[] {0.089f,0.0716f,-0.0881f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3242().getArray())).setCreaseAngle(0.5f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                      .addChild(new HAnimSite().setName("l_sphyrion_pt").setDEF("hanim_l_sphyrion_pt").setTranslation(new float[] {0.089f,0.0575f,-0.0943f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3243().getArray())).setCreaseAngle(0.5f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                      .addChild(new HAnimSite().setName("l_calcaneous_post_pt").setDEF("hanim_l_calcaneous_post_pt").setTranslation(new float[] {0.0974f,0.0259f,-0.1171f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3244().getArray())).setCreaseAngle(0.5f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR"))))))
                    .addChild(new HAnimJoint().setName("l_subtalar").setDEF("hanim_l_subtalar").setCenter(new float[] {0.1086f,0.0001f,-0.0368f})
                      .addChild(new HAnimSegment().setName("segmentNameNeededTODO-230").setDEF("hanim_segmentNameNeededTODO-230")
                        .addChild(new Transform().setTranslation(new float[] {0.1086f,0.0001f,-0.0368f})
                          .addChild(new Shape()
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3245().getArray())).setCreaseAngle(0.5f)
                              .setCoord(new Coordinate().setUSE("points")))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("MIN_COLOR"))))))
                      .addChild(new HAnimJoint().setName("l_midtarsal").setDEF("hanim_l_midtarsal").setCenter(new float[] {0.1086f,0.0001f,0.0368f})
                        .addChild(new HAnimSegment().setName("l_middistal").setDEF("hanim_l_middistal")
                          .addChild(new Transform().setTranslation(new float[] {0.1086f,0.0001f,0.0368f})
                            .addChild(new Shape()
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3246().getArray())).setCreaseAngle(0.5f)
                                .setCoord(new Coordinate().setUSE("points")))
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("JOINT_COLOR")))))
                          .addChild(new HAnimSite().setName("l_middistal_tip").setDEF("hanim_l_middistal_tip").setTranslation(new float[] {0.1354f,0.0016f,0.1476f})
                            .addChild(new Shape()
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3247().getArray())).setCreaseAngle(0.5f)
                                .setCoord(new Coordinate().setUSE("points")))
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                          .addChild(new HAnimSite().setName("l_metatarsal_pha1_pt").setDEF("hanim_l_metatarsal_pha1_pt").setTranslation(new float[] {0.0816f,0.0232f,0.0106f})
                            .addChild(new Shape()
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3248().getArray())).setCreaseAngle(0.5f)
                                .setCoord(new Coordinate().setUSE("points")))
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("HAND_FEET_COLOR"))))))
                        .addChild(new HAnimJoint().setName("l_metatarsal").setDEF("hanim_l_metatarsal").setCenter(new float[] {0.1086f,0f,0.0762f})
                          .addChild(new HAnimSegment().setName("l_forefoot").setDEF("hanim_l_forefoot")
                            .addChild(new Transform().setTranslation(new float[] {0.1086f,0f,0.0762f})
                              .addChild(new Shape()
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3249().getArray())).setCreaseAngle(0.5f)
                                  .setCoord(new Coordinate().setUSE("points")))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("JOINT_COLOR")))))
                            .addChild(new HAnimSite().setName("l_forefoot_tip").setDEF("hanim_l_forefoot_tip").setTranslation(new float[] {0.1354f,0.0016f,0.1476f})
                              .addChild(new Shape()
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3250().getArray())).setCreaseAngle(0.5f)
                                  .setCoord(new Coordinate().setUSE("points")))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                            .addChild(new HAnimSite().setName("l_metatarsal_pha5_pt").setDEF("hanim_l_metatarsal_pha5_pt").setTranslation(new float[] {0.1825f,0.007f,0.0928f})
                              .addComments(new CommentsBlock("# CAESAR Feature Point #66"))
                              .addChild(new Shape()
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3251().getArray())).setCreaseAngle(0.5f)
                                  .setCoord(new Coordinate().setUSE("points")))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                            .addChild(new HAnimSite().setName("l_digit2_pt").setDEF("hanim_l_digit2_pt").setTranslation(new float[] {0.1195f,0.0079f,0.1433f})
                              .addComments(new CommentsBlock("# CAESAR Feature Point #72"))
                              .addChild(new Shape()
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3252().getArray())).setCreaseAngle(0.5f)
                                  .setCoord(new Coordinate().setUSE("points")))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("HAND_FEET_COLOR"))))))))))))
              .addChild(new HAnimJoint().setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-0.095f,0.9171f,0.0029f})
                .addChild(new HAnimSegment().setName("r_thigh").setDEF("hanim_r_thigh")
                  .addChild(new Transform().setTranslation(new float[] {-0.095f,0.9171f,0.0029f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3253().getArray())).setCreaseAngle(0.5f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("MIN_COLOR")))))
                  .addChild(new HAnimSite().setName("r_knee_crease_pt").setDEF("hanim_r_knee_crease_pt").setTranslation(new float[] {-0.0825f,0.4932f,-0.0326f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3254().getArray())).setCreaseAngle(0.5f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR")))))
                  .addChild(new HAnimSite().setName("r_femoral_lateral_epicn_pt").setDEF("hanim_r_femoral_lateral_epicn_pt").setTranslation(new float[] {-0.1421f,0.4992f,0.031f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3255().getArray())).setCreaseAngle(0.5f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR")))))
                  .addChild(new HAnimSite().setName("r_femoral_medial_epicn_pt").setDEF("hanim_r_femoral_medial_epicn_pt").setTranslation(new float[] {-0.0221f,0.5014f,0.0289f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3256().getArray())).setCreaseAngle(0.5f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                .addChild(new HAnimJoint().setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-0.0867f,0.4913f,0.0318f})
                  .addChild(new HAnimSegment().setName("r_calf").setDEF("hanim_r_calf")
                    .addChild(new Transform().setTranslation(new float[] {-0.0867f,0.4913f,0.0318f})
                      .addChild(new Shape()
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3257().getArray())).setCreaseAngle(0.5f)
                          .setCoord(new Coordinate().setUSE("points")))
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                  .addChild(new HAnimJoint().setName("r_ankle").setDEF("hanim_r_ankle").setCenter(new float[] {-0.0801f,0.0712f,-0.0766f})
                    .addChild(new HAnimSegment().setName("r_hindfoot").setDEF("hanim_r_hindfoot")
                      .addChild(new Transform().setTranslation(new float[] {-0.0801f,0.0712f,-0.0766f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3258().getArray())).setCreaseAngle(0.5f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("MIN_COLOR")))))
                      .addChild(new HAnimSite().setName("r_lateral_malleolus_pt").setDEF("hanim_r_lateral_malleolus_pt").setTranslation(new float[] {-0.1006f,0.0658f,-0.1075f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3259().getArray())).setCreaseAngle(0.5f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                      .addChild(new HAnimSite().setName("r_medial_malleolus_pt").setDEF("hanim_r_medial_malleolus_pt").setTranslation(new float[] {-0.0591f,0.076f,-0.0928f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3260().getArray())).setCreaseAngle(0.5f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                      .addChild(new HAnimSite().setName("r_sphyrion_pt").setDEF("hanim_r_sphyrion_pt").setTranslation(new float[] {-0.0603f,0.061f,-0.1002f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3261().getArray())).setCreaseAngle(0.5f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                      .addChild(new HAnimSite().setName("r_calcaneous_post_pt").setDEF("hanim_r_calcaneous_post_pt").setTranslation(new float[] {-0.0692f,0.0297f,-0.1221f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3262().getArray())).setCreaseAngle(0.5f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR"))))))
                    .addChild(new HAnimJoint().setName("r_midtarsal").setDEF("hanim_r_midtarsal").setCenter(new float[] {-0.0801f,0f,0.0368f})
                      .addChild(new HAnimSegment().setName("r_middistal").setDEF("hanim_r_middistal")
                        .addChild(new Transform().setTranslation(new float[] {-0.0801f,0f,0.0368f})
                          .addChild(new Shape()
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3263().getArray())).setCreaseAngle(0.5f)
                              .setCoord(new Coordinate().setUSE("points")))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("JOINT_COLOR")))))
                        .addChild(new HAnimSite().setName("r_middistal_tip").setDEF("hanim_r_middistal_tip").setTranslation(new float[] {-0.1043f,-0.0227f,0.145f})
                          .addChild(new Shape()
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3264().getArray())).setCreaseAngle(0.5f)
                              .setCoord(new Coordinate().setUSE("points")))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                        .addChild(new HAnimSite().setName("r_metatarsal_pha5_pt").setDEF("hanim_r_metatarsal_pha5_pt").setTranslation(new float[] {-0.1523f,0.0166f,0.0895f})
                          .addChild(new Shape()
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3265().getArray())).setCreaseAngle(0.5f)
                              .setCoord(new Coordinate().setUSE("points")))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                        .addChild(new HAnimSite().setName("r_metatarsal_pha1_pt").setDEF("hanim_r_metatarsal_pha1_pt").setTranslation(new float[] {-0.0521f,0.026f,0.0127f})
                          .addChild(new Shape()
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3266().getArray())).setCreaseAngle(0.5f)
                              .setCoord(new Coordinate().setUSE("points")))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                        .addChild(new HAnimSite().setName("r_digit2_pt").setDEF("hanim_r_digit2_pt").setTranslation(new float[] {-0.0883f,0.0134f,0.1383f})
                          .addChild(new Shape()
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3267().getArray())).setCreaseAngle(0.5f)
                              .setCoord(new Coordinate().setUSE("points")))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))))))))
            .addChild(new HAnimJoint().setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0.0028f,1.0568f,-0.0776f})
              .addChild(new HAnimSegment().setName("segmentNameNeededTODO-385").setDEF("hanim_segmentNameNeededTODO-385")
                .addChild(new Transform().setTranslation(new float[] {0.0028f,1.0568f,-0.0776f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3268().getArray())).setCreaseAngle(0.5f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("REC_SPINAL_COLOR"))))))
              .addChild(new HAnimJoint().setName("vl4").setDEF("hanim_vl4").setCenter(new float[] {0.0035f,1.0925f,-0.0787f})
                .addChild(new HAnimSegment().setName("segmentNameNeededTODO-391").setDEF("hanim_segmentNameNeededTODO-391")
                  .addChild(new Transform().setTranslation(new float[] {0.0035f,1.0925f,-0.0787f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3269().getArray())).setCreaseAngle(0.5f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                .addChild(new HAnimJoint().setName("vl3").setDEF("hanim_vl3").setCenter(new float[] {0.0041f,1.1276f,-0.0796f})
                  .addChild(new HAnimSegment().setName("segmentNameNeededTODO-397").setDEF("hanim_segmentNameNeededTODO-397")
                    .addChild(new Transform().setTranslation(new float[] {0.0041f,1.1276f,-0.0796f})
                      .addChild(new Shape()
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3270().getArray())).setCreaseAngle(0.5f)
                          .setCoord(new Coordinate().setUSE("points")))
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setUSE("REC_SPINAL_COLOR"))))))
                  .addChild(new HAnimJoint().setName("vl2").setDEF("hanim_vl2").setCenter(new float[] {0.0045f,1.1546f,-0.08f})
                    .addChild(new HAnimSegment().setName("segmentNameNeededTODO-403").setDEF("hanim_segmentNameNeededTODO-403")
                      .addChild(new Transform().setTranslation(new float[] {0.0045f,1.1546f,-0.08f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3271().getArray())).setCreaseAngle(0.5f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                    .addChild(new HAnimJoint().setName("vl1").setDEF("hanim_vl1").setCenter(new float[] {0.0048f,1.1912f,-0.0805f})
                      .addChild(new HAnimSegment().setName("segmentNameNeededTODO-409").setDEF("hanim_segmentNameNeededTODO-409")
                        .addChild(new Transform().setTranslation(new float[] {0.0048f,1.1912f,-0.0805f})
                          .addChild(new Shape()
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3272().getArray())).setCreaseAngle(0.5f)
                              .setCoord(new Coordinate().setUSE("points")))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("REC_SPINAL_COLOR"))))))
                      .addChild(new HAnimJoint().setName("vt12").setDEF("hanim_vt12").setCenter(new float[] {0.0051f,1.2278f,-0.0808f})
                        .addChild(new HAnimSegment().setName("segmentNameNeededTODO-415").setDEF("hanim_segmentNameNeededTODO-415")
                          .addChild(new Transform().setTranslation(new float[] {0.0051f,1.2278f,-0.0808f})
                            .addChild(new Shape()
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3273().getArray())).setCreaseAngle(0.5f)
                                .setCoord(new Coordinate().setUSE("points")))
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                        .addChild(new HAnimJoint().setName("vt11").setDEF("hanim_vt11").setCenter(new float[] {0.0053f,1.2679f,-0.081f})
                          .addChild(new HAnimSegment().setName("segmentNameNeededTODO-421").setDEF("hanim_segmentNameNeededTODO-421")
                            .addChild(new Transform().setTranslation(new float[] {0.0053f,1.2679f,-0.081f})
                              .addChild(new Shape()
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3274().getArray())).setCreaseAngle(0.5f)
                                  .setCoord(new Coordinate().setUSE("points")))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                          .addChild(new HAnimJoint().setName("vt10").setDEF("hanim_vt10").setCenter(new float[] {0.0056f,1.2848f,-0.0822f})
                            .addChild(new HAnimSegment().setName("segmentNameNeededTODO-427").setDEF("hanim_segmentNameNeededTODO-427")
                              .addChild(new Transform().setTranslation(new float[] {0.0056f,1.2848f,-0.0822f})
                                .addChild(new Shape()
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3275().getArray())).setCreaseAngle(0.5f)
                                    .setCoord(new Coordinate().setUSE("points")))
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setUSE("REC_SPINAL_COLOR"))))))
                            .addChild(new HAnimJoint().setName("vt9").setDEF("hanim_vt9").setCenter(new float[] {0.0057f,1.3126f,-0.0838f})
                              .addChild(new HAnimSegment().setName("segmentNameNeededTODO-433").setDEF("hanim_segmentNameNeededTODO-433")
                                .addChild(new Transform().setTranslation(new float[] {0.0057f,1.3126f,-0.0838f})
                                  .addChild(new Shape()
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3276().getArray())).setCreaseAngle(0.5f)
                                      .setCoord(new Coordinate().setUSE("points")))
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                              .addChild(new HAnimJoint().setName("vt8").setDEF("hanim_vt8").setCenter(new float[] {0.0057f,1.3382f,-0.0845f})
                                .addChild(new HAnimSegment().setName("segmentNameNeededTODO-439").setDEF("hanim_segmentNameNeededTODO-439")
                                  .addChild(new Transform().setTranslation(new float[] {0.0057f,1.3382f,-0.0845f})
                                    .addChild(new Shape()
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3277().getArray())).setCreaseAngle(0.5f)
                                        .setCoord(new Coordinate().setUSE("points")))
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                .addChild(new HAnimJoint().setName("vt7").setDEF("hanim_vt7").setCenter(new float[] {0.0058f,1.3625f,-0.0833f})
                                  .addChild(new HAnimSegment().setName("segmentNameNeededTODO-445").setDEF("hanim_segmentNameNeededTODO-445")
                                    .addChild(new Transform().setTranslation(new float[] {0.0058f,1.3625f,-0.0833f})
                                      .addChild(new Shape()
                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3278().getArray())).setCreaseAngle(0.5f)
                                          .setCoord(new Coordinate().setUSE("points")))
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                  .addChild(new HAnimJoint().setName("vt6").setDEF("hanim_vt6").setCenter(new float[] {0.0059f,1.3866f,-0.08f})
                                    .addChild(new HAnimSegment().setName("segmentNameNeededTODO-451").setDEF("hanim_segmentNameNeededTODO-451")
                                      .addChild(new Transform().setTranslation(new float[] {0.0059f,1.3866f,-0.08f})
                                        .addChild(new Shape()
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3279().getArray())).setCreaseAngle(0.5f)
                                            .setCoord(new Coordinate().setUSE("points")))
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setUSE("REC_SPINAL_COLOR"))))))
                                    .addChild(new HAnimJoint().setName("vt5").setDEF("hanim_vt5").setCenter(new float[] {0.006f,1.4102f,-0.0745f})
                                      .addChild(new HAnimSegment().setName("segmentNameNeededTODO-457").setDEF("hanim_segmentNameNeededTODO-457")
                                        .addChild(new Transform().setTranslation(new float[] {0.006f,1.4102f,-0.0745f})
                                          .addChild(new Shape()
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3280().getArray())).setCreaseAngle(0.5f)
                                              .setCoord(new Coordinate().setUSE("points")))
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                      .addChild(new HAnimJoint().setName("vt4").setDEF("hanim_vt4").setCenter(new float[] {0.0061f,1.432f,-0.0675f})
                                        .addChild(new HAnimSegment().setName("segmentNameNeededTODO-463").setDEF("hanim_segmentNameNeededTODO-463")
                                          .addChild(new Transform().setTranslation(new float[] {0.0061f,1.432f,-0.0675f})
                                            .addChild(new Shape()
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3281().getArray())).setCreaseAngle(0.5f)
                                                .setCoord(new Coordinate().setUSE("points")))
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                        .addChild(new HAnimJoint().setName("vt3").setDEF("hanim_vt3").setCenter(new float[] {0.0062f,1.4583f,-0.057f})
                                          .addChild(new HAnimSegment().setName("segmentNameNeededTODO-469").setDEF("hanim_segmentNameNeededTODO-469")
                                            .addChild(new Transform().setTranslation(new float[] {0.0062f,1.4583f,-0.057f})
                                              .addChild(new Shape()
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3282().getArray())).setCreaseAngle(0.5f)
                                                  .setCoord(new Coordinate().setUSE("points")))
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                          .addChild(new HAnimJoint().setName("vt2").setDEF("hanim_vt2").setCenter(new float[] {0.0063f,1.4761f,-0.0484f})
                                            .addChild(new HAnimSegment().setName("segmentNameNeededTODO-475").setDEF("hanim_segmentNameNeededTODO-475")
                                              .addChild(new Transform().setTranslation(new float[] {0.0063f,1.4761f,-0.0484f})
                                                .addChild(new Shape()
                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3283().getArray())).setCreaseAngle(0.5f)
                                                    .setCoord(new Coordinate().setUSE("points")))
                                                  .setAppearance(new Appearance()
                                                    .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                            .addChild(new HAnimJoint().setName("vt1").setDEF("hanim_vt1").setCenter(new float[] {0.0065f,1.4951f,-0.0387f})
                                              .addChild(new HAnimSegment().setName("segmentNameNeededTODO-481").setDEF("hanim_segmentNameNeededTODO-481")
                                                .addChild(new Transform().setTranslation(new float[] {0.0065f,1.4951f,-0.0387f})
                                                  .addChild(new Shape()
                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3284().getArray())).setCreaseAngle(0.5f)
                                                      .setCoord(new Coordinate().setUSE("points")))
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setUSE("REC_SPINAL_COLOR"))))))
                                              .addChild(new HAnimJoint().setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {0.2029f,1.4376f,-0.0387f})
                                                .addChild(new HAnimSegment().setName("l_upperarm").setDEF("hanim_l_upperarm")
                                                  .addChild(new Transform().setTranslation(new float[] {0.2029f,1.4376f,-0.0387f})
                                                    .addChild(new Shape()
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3285().getArray())).setCreaseAngle(0.5f)
                                                        .setCoord(new Coordinate().setUSE("points")))
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setUSE("MIN_COLOR")))))
                                                  .addChild(new Transform().setDEF("l_upperarm_adjust").setCenter(new float[] {0.182f,1.22f,-0.047f}).setRotation(new float[] {1f,0f,0f,0.119f}).setTranslation(new float[] {0.2029f,1.4376f,-0.0387f}))
                                                  .addChild(new HAnimSite().setName("l_humeral_lateral_epicn_pt").setDEF("hanim_l_humeral_lateral_epicn_pt").setTranslation(new float[] {0.228f,1.1482f,-0.11f})
                                                    .addChild(new Shape()
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3286().getArray())).setCreaseAngle(0.5f)
                                                        .setCoord(new Coordinate().setUSE("points")))
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                                                .addChild(new HAnimJoint().setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {0.2014f,1.1357f,-0.0682f})
                                                  .addChild(new HAnimSegment().setName("l_forearm").setDEF("hanim_l_forearm")
                                                    .addChild(new Transform().setTranslation(new float[] {0.2014f,1.1357f,-0.0682f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3287().getArray())).setCreaseAngle(0.5f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("MIN_COLOR")))))
                                                    .addChild(new Transform().setDEF("l_forearm_adjust").setCenter(new float[] {0.198f,0.961f,-0.0405f}).setRotation(new float[] {-1f,0f,0f,0.1f}).setTranslation(new float[] {0.2014f,1.1357f,-0.0682f}))
                                                    .addChild(new HAnimSite().setName("l_radial_styloid_pt").setDEF("hanim_l_radial_styloid_pt").setTranslation(new float[] {0.1901f,0.8645f,-0.0415f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3288().getArray())).setCreaseAngle(0.5f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                    .addChild(new HAnimSite().setName("l_olecranon_pt").setDEF("hanim_l_olecranon_pt").setTranslation(new float[] {-0.1962f,1.1375f,-0.1123f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3289().getArray())).setCreaseAngle(0.5f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                    .addChild(new HAnimSite().setName("l_humeral_medial_epicn_pt").setDEF("hanim_l_humeral_medial_epicn_pt").setTranslation(new float[] {0.1735f,1.1272f,-0.1113f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3290().getArray())).setCreaseAngle(0.5f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                    .addChild(new HAnimSite().setName("l_radiale_pt").setDEF("hanim_l_radiale_pt").setTranslation(new float[] {0.2182f,1.1212f,-0.1167f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3291().getArray())).setCreaseAngle(0.5f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                                                  .addChild(new HAnimJoint().setName("l_wrist").setDEF("hanim_l_wrist").setCenter(new float[] {0.1984f,0.8663f,-0.0583f})
                                                    .addChild(new HAnimSegment().setName("l_hand").setDEF("hanim_l_hand")
                                                      .addChild(new Transform().setTranslation(new float[] {0.1984f,0.8663f,-0.0583f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3292().getArray())).setCreaseAngle(0.5f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("MIN_COLOR")))))
                                                      .addChild(new Transform().setDEF("l_hand_adjust").setCenter(new float[] {0.213f,0.811f,-0.0338f}).setRotation(new float[] {-0.06361f,-0.9967f,0.04988f,1.333f}).setTranslation(new float[] {0.1984f,0.8663f,-0.0583f}))
                                                      .addChild(new HAnimSite().setName("l_hand_tip").setDEF("hanim_l_hand_tip").setTranslation(new float[] {0.208f,0.6731f,-0.0491f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3293().getArray())).setCreaseAngle(0.5f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("l_metacarpal_pha2_pt").setDEF("hanim_l_metacarpal_pha2_pt").setTranslation(new float[] {0.2009f,0.8139f,-0.0237f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3294().getArray())).setCreaseAngle(0.5f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("l_dactylion_pt").setDEF("hanim_l_dactylion_pt").setTranslation(new float[] {0.2056f,0.6743f,-0.0482f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3295().getArray())).setCreaseAngle(0.5f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("l_ulnar_styloid_pt").setDEF("hanim_l_ulnar_styloid_pt").setTranslation(new float[] {-0.2142f,0.8529f,-0.0648f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3296().getArray())).setCreaseAngle(0.5f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("l_metacarpal_pha5_pt").setDEF("hanim_l_metacarpal_pha5_pt").setTranslation(new float[] {0.1929f,0.786f,-0.1122f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3297().getArray())).setCreaseAngle(0.5f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                                                    .addChild(new HAnimJoint().setName("l_thumb1").setDEF("hanim_l_thumb1").setCenter(new float[] {0.1924f,0.8472f,-0.0534f})
                                                      .addChild(new HAnimSegment().setName("segmentNameNeededTODO-539").setDEF("hanim_segmentNameNeededTODO-539")
                                                        .addChild(new Transform().setTranslation(new float[] {0.1924f,0.8472f,-0.0534f})
                                                          .addChild(new Shape()
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3298().getArray())).setCreaseAngle(0.5f)
                                                              .setCoord(new Coordinate().setUSE("points")))
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setUSE("JOINT_COLOR"))))))
                                                      .addChild(new HAnimJoint().setName("l_thumb2").setDEF("hanim_l_thumb2").setCenter(new float[] {0.1951f,0.8226f,0.0246f})
                                                        .addChild(new HAnimSegment().setName("segmentNameNeededTODO-545").setDEF("hanim_segmentNameNeededTODO-545")
                                                          .addChild(new Transform().setTranslation(new float[] {0.1951f,0.8226f,0.0246f})
                                                            .addChild(new Shape()
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3299().getArray())).setCreaseAngle(0.5f)
                                                                .setCoord(new Coordinate().setUSE("points")))
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setUSE("JOINT_COLOR"))))))
                                                        .addChild(new HAnimJoint().setName("l_thumb3").setDEF("hanim_l_thumb3").setCenter(new float[] {0.1955f,0.8159f,0.0464f})
                                                          .addChild(new HAnimSegment().setName("l_thumb_distal").setDEF("hanim_l_thumb_distal")
                                                            .addChild(new Transform().setTranslation(new float[] {0.1955f,0.8159f,0.0464f})
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32100().getArray())).setCreaseAngle(0.5f)
                                                                  .setCoord(new Coordinate().setUSE("points")))
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setUSE("JOINT_COLOR")))))
                                                            .addChild(new HAnimSite().setName("l_thumb_distal_tip").setDEF("hanim_l_thumb_distal_tip").setTranslation(new float[] {0.1982f,0.8061f,0.0759f})
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32101().getArray())).setCreaseAngle(0.5f)
                                                                  .setCoord(new Coordinate().setUSE("points")))
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))))))
                                                    .addChild(new HAnimJoint().setName("l_index0").setDEF("hanim_l_index0").setCenter(new float[] {0.1983f,0.8024f,-0.028f})
                                                      .addChild(new HAnimSegment().setName("segmentNameNeededTODO-567").setDEF("hanim_segmentNameNeededTODO-567")
                                                        .addChild(new Transform().setTranslation(new float[] {0.1983f,0.8024f,-0.028f})
                                                          .addChild(new Shape()
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32102().getArray())).setCreaseAngle(0.5f)
                                                              .setCoord(new Coordinate().setUSE("points")))
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setUSE("JOINT_COLOR"))))))
                                                      .addChild(new HAnimJoint().setName("l_index1").setDEF("hanim_l_index1").setCenter(new float[] {0.1983f,0.7815f,-0.028f})
                                                        .addChild(new HAnimSegment().setName("segmentNameNeededTODO-573").setDEF("hanim_segmentNameNeededTODO-573")
                                                          .addChild(new Transform().setTranslation(new float[] {0.1983f,0.7815f,-0.028f})
                                                            .addChild(new Shape()
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32103().getArray())).setCreaseAngle(0.5f)
                                                                .setCoord(new Coordinate().setUSE("points")))
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setUSE("JOINT_COLOR"))))))
                                                        .addChild(new HAnimJoint().setName("l_index2").setDEF("hanim_l_index2").setCenter(new float[] {0.2017f,0.7363f,-0.0248f})
                                                          .addChild(new HAnimSegment().setName("segmentNameNeededTODO-579").setDEF("hanim_segmentNameNeededTODO-579")
                                                            .addChild(new Transform().setTranslation(new float[] {0.2017f,0.7363f,-0.0248f})
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32104().getArray())).setCreaseAngle(0.5f)
                                                                  .setCoord(new Coordinate().setUSE("points")))
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setUSE("JOINT_COLOR"))))))
                                                          .addChild(new HAnimJoint().setName("l_index3").setDEF("hanim_l_index3").setCenter(new float[] {0.2028f,0.7139f,-0.0236f})
                                                            .addChild(new HAnimSegment().setName("l_index_distal").setDEF("hanim_l_index_distal")
                                                              .addChild(new Transform().setTranslation(new float[] {0.2028f,0.7139f,-0.0236f})
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32105().getArray())).setCreaseAngle(0.5f)
                                                                    .setCoord(new Coordinate().setUSE("points")))
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setUSE("JOINT_COLOR")))))
                                                              .addChild(new HAnimSite().setName("l_index_distal_tip").setDEF("hanim_l_index_distal_tip").setTranslation(new float[] {0.2089f,0.6858f,-0.0245f})
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32106().getArray())).setCreaseAngle(0.5f)
                                                                    .setCoord(new Coordinate().setUSE("points")))
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))))))))))
                                              .addChild(new HAnimJoint().setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-0.1907f,1.4407f,-0.0325f})
                                                .addChild(new HAnimSegment().setName("r_upperarm").setDEF("hanim_r_upperarm")
                                                  .addChild(new Transform().setTranslation(new float[] {-0.1907f,1.4407f,-0.0325f})
                                                    .addChild(new Shape()
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32107().getArray())).setCreaseAngle(0.5f)
                                                        .setCoord(new Coordinate().setUSE("points")))
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setUSE("MIN_COLOR")))))
                                                  .addChild(new Transform().setDEF("r_upperarm_adjust").setCenter(new float[] {-0.182f,1.22f,-0.047f}).setRotation(new float[] {1f,0f,0f,0.0836f}).setTranslation(new float[] {-0.1907f,1.4407f,-0.0325f}))
                                                  .addChild(new HAnimSite().setName("r_humeral_lateral_epicn_pt").setDEF("hanim_r_humeral_lateral_epicn_pt").setTranslation(new float[] {-0.2224f,1.1517f,-0.1033f})
                                                    .addChild(new Shape()
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32108().getArray())).setCreaseAngle(0.5f)
                                                        .setCoord(new Coordinate().setUSE("points")))
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                                                .addChild(new HAnimJoint().setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-0.1949f,1.1388f,-0.062f})
                                                  .addChild(new HAnimSegment().setName("r_forearm").setDEF("hanim_r_forearm")
                                                    .addChild(new Transform().setTranslation(new float[] {-0.1949f,1.1388f,-0.062f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32109().getArray())).setCreaseAngle(0.5f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("MIN_COLOR")))))
                                                    .addChild(new Transform().setDEF("r_forearm_adjust").setCenter(new float[] {-0.198f,0.961f,-0.0397f}).setRotation(new float[] {-1f,0f,0f,0.1254f}).setTranslation(new float[] {-0.1949f,1.1388f,-0.062f}))
                                                    .addChild(new HAnimSite().setName("r_radial_styloid_pt").setDEF("hanim_r_radial_styloid_pt").setTranslation(new float[] {-0.1884f,0.8676f,-0.036f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32110().getArray())).setCreaseAngle(0.5f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                    .addChild(new HAnimSite().setName("r_olecranon_pt").setDEF("hanim_r_olecranon_pt").setTranslation(new float[] {-0.1907f,1.1405f,-0.1065f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32111().getArray())).setCreaseAngle(0.5f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                    .addChild(new HAnimSite().setName("r_humeral_medial_epicn_pt").setDEF("hanim_r_humeral_medial_epicn_pt").setTranslation(new float[] {-0.168f,1.1298f,-0.1062f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32112().getArray())).setCreaseAngle(0.5f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                    .addChild(new HAnimSite().setName("r_radiale_pt").setDEF("hanim_r_radiale_pt").setTranslation(new float[] {-0.213f,1.1305f,-0.1091f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32113().getArray())).setCreaseAngle(0.5f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                                                  .addChild(new HAnimJoint().setName("r_wrist").setDEF("hanim_r_wrist").setCenter(new float[] {-0.1959f,0.8694f,-0.0521f})
                                                    .addChild(new HAnimSegment().setName("r_hand").setDEF("hanim_r_hand")
                                                      .addChild(new Transform().setTranslation(new float[] {-0.1959f,0.8694f,-0.0521f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32114().getArray())).setCreaseAngle(0.5f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("MIN_COLOR")))))
                                                      .addChild(new Transform().setDEF("r_hand_adjust").setCenter(new float[] {-0.217f,0.811f,-0.0338f}).setRotation(new float[] {-0.09024f,0.994f,-0.0624f,1.216f}))
                                                      .addChild(new HAnimSite().setName("r_hand_tip").setDEF("hanim_r_hand_tip").setTranslation(new float[] {-0.1969f,0.6758f,-0.0427f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32115().getArray())).setCreaseAngle(0.5f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("r_metacarpal_pha2_pt").setDEF("hanim_r_metacarpal_pha2_pt").setTranslation(new float[] {-0.1977f,0.8169f,-0.0177f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32116().getArray())).setCreaseAngle(0.5f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("r_dactylion_pt").setDEF("hanim_r_dactylion_pt").setTranslation(new float[] {-0.1941f,0.6772f,-0.0423f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32117().getArray())).setCreaseAngle(0.5f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("r_ulnar_styloid_pt").setDEF("hanim_r_ulnar_styloid_pt").setTranslation(new float[] {-0.2117f,0.8562f,-0.0584f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32118().getArray())).setCreaseAngle(0.5f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("r_metacarpal_pha5_pt").setDEF("hanim_r_metacarpal_pha5_pt").setTranslation(new float[] {-0.1929f,0.789f,-0.1064f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32119().getArray())).setCreaseAngle(0.5f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))))))
                                              .addChild(new HAnimJoint().setName("vc7").setDEF("hanim_vc7").setCenter(new float[] {0.0066f,1.5132f,-0.0301f})
                                                .addChild(new HAnimSegment().setName("c7").setDEF("hanim_c7")
                                                  .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5132f,-0.0301f})
                                                    .addChild(new Shape()
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32120().getArray())).setCreaseAngle(0.5f)
                                                        .setCoord(new Coordinate().setUSE("points")))
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                                .addChild(new HAnimJoint().setName("vc6").setDEF("hanim_vc6").setCenter(new float[] {0.0066f,1.5357f,-0.0143f})
                                                  .addChild(new HAnimSegment().setName("segmentNameNeededTODO-731").setDEF("hanim_segmentNameNeededTODO-731")
                                                    .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5357f,-0.0143f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32121().getArray())).setCreaseAngle(0.5f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                                  .addChild(new HAnimJoint().setName("vc5").setDEF("hanim_vc5").setCenter(new float[] {0.0066f,1.552f,-0.0082f})
                                                    .addChild(new HAnimSegment().setName("segmentNameNeededTODO-737").setDEF("hanim_segmentNameNeededTODO-737")
                                                      .addChild(new Transform().setTranslation(new float[] {0.0066f,1.552f,-0.0082f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32122().getArray())).setCreaseAngle(0.5f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                                    .addChild(new HAnimJoint().setName("vc4").setDEF("hanim_vc4").setCenter(new float[] {0.0066f,1.5662f,-0.0084f})
                                                      .addChild(new HAnimSegment().setName("c4").setDEF("hanim_c4")
                                                        .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5662f,-0.0084f})
                                                          .addChild(new Shape()
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32123().getArray())).setCreaseAngle(0.5f)
                                                              .setCoord(new Coordinate().setUSE("points")))
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                                      .addChild(new HAnimJoint().setName("vc3").setDEF("hanim_vc3").setCenter(new float[] {0.0066f,1.58f,-0.0103f})
                                                        .addChild(new HAnimSegment().setName("segmentNameNeededTODO-750").setDEF("hanim_segmentNameNeededTODO-750")
                                                          .addChild(new Transform().setTranslation(new float[] {0.0066f,1.58f,-0.0103f})
                                                            .addChild(new Shape()
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32124().getArray())).setCreaseAngle(0.5f)
                                                                .setCoord(new Coordinate().setUSE("points")))
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                                        .addChild(new HAnimJoint().setName("vc2").setDEF("hanim_vc2").setCenter(new float[] {0.0066f,1.5928f,-0.0103f})
                                                          .addChild(new HAnimSegment().setName("segmentNameNeededTODO-756").setDEF("hanim_segmentNameNeededTODO-756")
                                                            .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5928f,-0.0103f})
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32125().getArray())).setCreaseAngle(0.5f)
                                                                  .setCoord(new Coordinate().setUSE("points")))
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setUSE("REC_SPINAL_COLOR"))))))
                                                          .addChild(new HAnimJoint().setName("vc1").setDEF("hanim_vc1").setCenter(new float[] {0.0066f,1.6144f,-0.0034f})
                                                            .addChild(new HAnimSegment().setName("segmentNameNeededTODO-762").setDEF("hanim_segmentNameNeededTODO-762")
                                                              .addChild(new Transform().setTranslation(new float[] {0.0066f,1.6144f,-0.0034f})
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32126().getArray())).setCreaseAngle(0.5f)
                                                                    .setCoord(new Coordinate().setUSE("points")))
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                                            .addChild(new HAnimJoint().setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0.0044f,1.6209f,0.0236f})
                                                              .addChild(new HAnimSegment().setName("skull").setDEF("hanim_skull")
                                                                .addChild(new Transform().setTranslation(new float[] {0.0044f,1.6209f,0.0236f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32127().getArray())).setCreaseAngle(0.5f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("MIN_COLOR")))))
                                                                .addChild(new HAnimSite().setName("skull_tip").setDEF("hanim_skull_tip").setTranslation(new float[] {0.005f,1.7504f,0.0055f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32128().getArray())).setCreaseAngle(0.5f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("sellion_pt").setDEF("hanim_sellion_pt").setTranslation(new float[] {0.0058f,1.6316f,0.0852f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32129().getArray())).setCreaseAngle(0.5f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("r_infraorbitale_pt").setDEF("hanim_r_infraorbitale_pt").setTranslation(new float[] {-0.0237f,1.6171f,0.0752f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32130().getArray())).setCreaseAngle(0.5f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("l_infraorbitale_pt").setDEF("hanim_l_infraorbitale_pt").setTranslation(new float[] {0.0341f,1.6171f,0.0752f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32131().getArray())).setCreaseAngle(0.5f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("supramenton_pt").setDEF("hanim_supramenton_pt").setTranslation(new float[] {0.0061f,1.541f,0.0805f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32132().getArray())).setCreaseAngle(0.5f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("r_tragion_pt").setDEF("hanim_r_tragion_pt").setTranslation(new float[] {-0.0646f,1.6347f,0.0302f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32133().getArray())).setCreaseAngle(0.5f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("r_gonion_pt").setDEF("hanim_r_gonion_pt").setTranslation(new float[] {-0.052f,1.5529f,0.0347f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32134().getArray())).setCreaseAngle(0.5f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("l_tragion_pt").setDEF("hanim_l_tragion_pt").setTranslation(new float[] {0.0739f,1.6348f,0.0282f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32135().getArray())).setCreaseAngle(0.5f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("l_gonion_pt").setDEF("hanim_l_gonion_pt").setTranslation(new float[] {0.0631f,1.553f,0.033f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32136().getArray())).setCreaseAngle(0.5f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("nuchale_pt").setDEF("hanim_nuchale_pt").setTranslation(new float[] {0.0039f,1.5972f,-0.0796f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt32137().getArray())).setCreaseAngle(0.5f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR"))))))))))))))))))))))))))))))))
          .addViewpoints(new HAnimSite().setName("DiamondManLOA_2_view").setDEF("hanim_DiamondManLOA_2_view")
            .addChild(new Viewpoint().setDEF("FrontView").setDescription("Front View").setPosition(new float[] {0.35f,0.854f,2.57665f}))
            .addChild(new Viewpoint().setDEF("SideView").setDescription("Side View").setOrientation(new float[] {0f,1f,0f,1.57079f}).setPosition(new float[] {2f,0.854f,0f}))
            .addChild(new Viewpoint().setDEF("TopView").setDescription("Top View").setOrientation(new float[] {1f,0f,0f,-1.57079f}).setPosition(new float[] {0f,3.4495f,0f}))
            .addChild(new Viewpoint().setDEF("RootView").setDescription("Humanoid Root View").setPosition(new float[] {0f,0.824f,0.277f}))
            .addChild(new Viewpoint().setDEF("InclinedView").setDescription("Inclined View").setOrientation(new float[] {-0.113f,0.993f,0.0347f,0.671f}).setPosition(new float[] {1.62f,1.05f,2.06f})))
          .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint().setUSE("hanim_sacroiliac"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl1"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc4"))
          .addJoints(new HAnimJoint().setUSE("hanim_skullbase"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl5"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl4"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl3"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl2"))
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
          .addJoints(new HAnimJoint().setUSE("hanim_vc3"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc2"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_ankle"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_ankle"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_hip"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_hip"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_index0"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_index1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_index2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_index3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsal"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_midtarsal"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midtarsal"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_subtalar"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_thumb1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_thumb2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_thumb3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_wrist"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_wrist"))
          .addSegments(new HAnimSegment().setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegment().setUSE("hanim_c7"))
          .addSegments(new HAnimSegment().setUSE("hanim_c4"))
          .addSegments(new HAnimSegment().setUSE("hanim_skull"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-93"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-230"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-385"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-391"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-397"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-403"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-409"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-415"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-421"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-427"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-433"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-439"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-445"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-451"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-457"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-463"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-469"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-475"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-481"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-539"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-545"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-567"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-573"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-579"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-731"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-737"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-750"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-756"))
          .addSegments(new HAnimSegment().setUSE("hanim_segmentNameNeededTODO-762"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_forefoot"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_hand"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_hand"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_hindfoot"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_hindfoot"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_index_distal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_middistal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_middistal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_thumb_distal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_upperarm"))
          .addSites(new HAnimSite().setUSE("hanim_crotch_pt"))
          .addSites(new HAnimSite().setUSE("hanim_skull_tip"))
          .addSites(new HAnimSite().setUSE("hanim_sellion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_supramenton_pt"))
          .addSites(new HAnimSite().setUSE("hanim_nuchale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_asis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_asis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_calcaneous_post_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_calcaneous_post_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_dactylion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_dactylion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_digit2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_digit2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_femoral_lateral_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_femoral_lateral_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_femoral_medial_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_femoral_medial_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_forefoot_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_gonion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_gonion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_hand_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_hand_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_humeral_lateral_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_humeral_lateral_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_humeral_medial_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_humeral_medial_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_iliocristale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_iliocristale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_index_distal_tip"))
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
          .addSites(new HAnimSite().setUSE("hanim_l_middistal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_middistal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_olecranon_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_olecranon_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_psis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_psis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_radial_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_radial_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_radiale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_radiale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_sphyrion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_sphyrion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_thumb_distal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_tragion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_tragion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_trochanterion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_trochanterion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_ulnar_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_ulnar_styloid_pt"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Diamond Man Key"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Minimal Humanoid Joints"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Humanoid Joints"});
  }
}
protected class MFString6 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString7 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Recommended Spinal Joints"});
  }
}
protected class MFString8 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString9 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Spinal Joints"});
  }
}
protected class MFString10 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString11 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Humanoid Sites"});
  }
}
protected class MFString12 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString13 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Hand & Feet Joints"});
  }
}
protected class MFString14 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString15 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Nancy V1.2b"});
  }
}
protected class MFString16 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"cindy@ballreich.net"});
  }
}
protected class MFString17 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Cindy Ballreich"});
  }
}
protected class MFString18 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved."});
  }
}
protected class MFString19 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Tue Dec 30 08:30:08 PST 1997"});
  }
}
protected class MFString20 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given."});
  }
}
protected class MFInt3221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f22 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.01f,0f,-0.01f,0f,0f,0f,0f,0.01f,0.01f,0f,0f,0f,0f,-0.01f,0f,-0.01f,0f});
  }
}
protected class MFString23 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Humanoid Root"});
  }
}
protected class MFString24 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFInt3225 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3226 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3230 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3231 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3232 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3235 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3236 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3237 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3238 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3239 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3241 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3242 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3243 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3244 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3245 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3246 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3247 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3248 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3249 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3250 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3251 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3252 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3253 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3254 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3255 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3256 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3257 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3258 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3259 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3260 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3261 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3262 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3263 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3264 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3265 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3266 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3267 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3268 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3269 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3270 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3271 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3272 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3273 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3274 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3275 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3276 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3277 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3278 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3279 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3280 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3281 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3282 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3283 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3284 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3285 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3286 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3287 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3288 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3289 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3290 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3291 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3292 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3293 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3294 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3295 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3296 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3297 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3298 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3299 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32100 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32101 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32102 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32103 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32104 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32105 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32106 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32107 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32108 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32109 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32110 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32111 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32112 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32113 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32114 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32115 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32116 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32117 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32118 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32119 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32120 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32121 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32122 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32123 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32124 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32125 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32126 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32127 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32128 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32129 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32130 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32131 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32132 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32133 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32134 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32135 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32136 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32137 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
}