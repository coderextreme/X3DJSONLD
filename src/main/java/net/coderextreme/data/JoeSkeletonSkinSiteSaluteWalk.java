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
import org.web3d.x3d.jsail.Interpolation.OrientationInterpolator;
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
public class JoeSkeletonSkinSiteSaluteWalk implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new JoeSkeletonSkinSiteSaluteWalk().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/JoeSkeletonSkinSiteSaluteWalk.new.java.x3d");
    model.toFileJSON("../data/JoeSkeletonSkinSiteSaluteWalk.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addComponent(new component().setName(new SFString("HAnim")).setLevel(2))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("JoeSkeletonSkinSiteSaluteWalk.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Comprehensive LOA4 example showing skeleton, skin, sites and interpolator animation together. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2.")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Joe D. Williams")))
        .addMeta(new meta().setName(new SFString("translator")).setContent(new SFString("Michalis Kamburelis")))
        .addMeta(new meta().setName(new SFString("translator")).setContent(new SFString("Don Brutzman")))
        .addMeta(new meta().setName(new SFString("translator")).setContent(new SFString("Joe D. Williams")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("9 January 2004")))
        .addMeta(new meta().setName(new SFString("translated")).setContent(new SFString("4 December 2022")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("16 March 2026")))
        .addMeta(new meta().setName(new SFString("TODO")).setContent(new SFString("X3dTidy warning: look for missing underscore and digit number as suffix of improperly named HAnimJoint name=l_metatarsal")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("JoeSkeletonSkinSiteSaluteWalk.original.x3dv")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("JoeSkeletonSkinSiteSaluteWalk.modified1.x3dv")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("JoeSkeletonSkinSiteSaluteWalk.modified2.x3dv")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png")))
        .addMeta(new meta().setName(new SFString("drawing")).setContent(new SFString("JoeSkeletonSkinSiteSaluteWalk_composite.vsdx")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("JoeSkeletonSkinSiteSaluteWalk_view3dscene.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("JoeSkeletonSkinSiteSaluteWalk_X_ITE.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("JoeSkeletonSkinSiteSaluteWalk_X3DOM.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("JoeSkeletonSkinSiteSaluteWalk_freeWrl.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("JoeSkeletonSkinSiteSaluteWalk_Octaga.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("JoeSkeletonSkinSiteSaluteWalk_vivaty.png")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("tovrmlx3d, https://castle-engine.io/convert.php")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://castle-engine.io/view3dscene.php#section_converting")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSiteSaluteWalk.x3d")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setInfo(new MFString0().getArray()).setTitle(new SFString("JoeSkeletonSkinSiteSaluteWalk.x3d")))
        .addChild(new NavigationInfo().setDEF(new SFString("HeadlightOnRevealsSkinTextureAndColors")))
        .addChild(new Background().setGroundAngle(new MFFloat1().getArray()).setGroundColor(new MFColor2().getArray()).setSkyColor(new MFColor3().getArray()))
        .addChild(new Transform().setDEF(new SFString("cordsysfloor")).setScale(new float[] {0.175f ,0.175f ,0.175f })
          .addChild(new Inline().setDEF(new SFString("CoordinateAxes")).setUrl(new MFString4().getArray())))
        .addComments(new CommentsBlock("Authoring hint: these axes are aligned within local coordinate system"))
        .addChild(new Group().setDEF(new SFString("ViewpointGroup"))
          .addChild(new Viewpoint().setDescription(new SFString("Front Up View")).setOrientation(new float[] {-1f ,-1f ,0f ,0.55f }).setPosition(new float[] {-1f ,2f ,2.5f }))
          .addChild(new Viewpoint().setDescription(new SFString("From Left View")).setOrientation(new float[] {0.3f ,1f ,0f ,-1.57f }).setPosition(new float[] {-2.5f ,1.5f ,0f }))
          .addChild(new Viewpoint().setDescription(new SFString("Front Mid View")).setPosition(new float[] {0f ,0.5f ,1.25f }))
          .addChild(new Viewpoint().setDescription(new SFString("Front Feet View")).setPosition(new float[] {0f ,0f ,0.75f }))
          .addChild(new Viewpoint().setDescription(new SFString("From Right View")).setOrientation(new float[] {0f ,1f ,0f ,1.57f }).setPosition(new float[] {1f ,1f ,0f }))
          .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f ,1.65f ,0f }).setDescription(new SFString("Front Head View")).setPosition(new float[] {0f ,1.65f ,0.75f }))
          .addChild(new Viewpoint().setDescription(new SFString("Front Mid View")).setPosition(new float[] {0f ,1f ,1.75f }))
          .addChild(new Viewpoint().setDescription(new SFString("Rear View")).setOrientation(new float[] {0f ,1f ,0f ,3.14f }).setPosition(new float[] {0f ,1.5f ,-4f }))
          .addChild(new Viewpoint().setDescription(new SFString("Top View")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new float[] {0f ,4f ,0f }))
          .addChild(new Viewpoint().setDescription(new SFString("Bottom View")).setOrientation(new float[] {1f ,0f ,0f ,1.57f }).setPosition(new float[] {0f ,-4f ,0f }))
          .addChild(new Viewpoint().setDescription(new SFString("Right View")).setOrientation(new float[] {0f ,1f ,0f ,1.57f }).setPosition(new float[] {4f ,1.5f ,0f })))
        .addChild(new Group().setDEF(new SFString("VisualizationShapes")).setVisible(false)
          .addChild(new Transform().setScale(new float[] {5f ,5f ,5f }).setTranslation(new float[] {0f ,2.1f ,0f })
            .addChild(new Shape().setDEF(new SFString("jointbox"))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.5f ).setDiffuseColor(new float[] {0f ,0f ,0f }).setShininess(1f )))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt325().getArray()).setCreaseAngle(0.1f )
                .setColor(new Color().setColor(new MFColor6().getArray()))
                .setCoord(new Coordinate().setDEF(new SFString("boxCoords")).setPoint(new MFVec3f7().getArray())))))
          .addChild(new Transform().setScale(new float[] {0.1f ,0.1f ,0.1f }).setTranslation(new float[] {-0.2f ,0.773f ,-0.016f })
            .addChild(new Shape().setDEF(new SFString("sitebox"))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(1f ).setDiffuseColor(new float[] {1f ,0f ,0f }).setEmissiveColor(new float[] {1f ,0f ,0f }).setShininess(0.7f ).setSpecularColor(new float[] {1f ,0f ,0f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt328().getArray()).setCreaseAngle(0.1f )
                .setCoord(new Coordinate().setUSE(new SFString("boxCoords"))))))
          .addChild(new Transform().setScale(new float[] {0.1f ,0.1f ,0.1f }).setTranslation(new float[] {0f ,0.2f ,0f })
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF(new SFString("SegmentLine"))
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,1f ,0f }).setEmissiveColor(new float[] {0f ,1f ,0f }).setSpecularColor(new float[] {0f ,1f ,0f })))
              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt329().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f10().getArray())))))
          .addChild(new Transform().setScale(new float[] {0.1f ,0.1f ,0.1f }).setTranslation(new float[] {-0.2f ,0.773f ,-0.016f })
            .addChild(new Shape().setDEF(new SFString("skinsphere"))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.5f ).setDiffuseColor(new float[] {0f ,1f ,0f }).setEmissiveColor(new float[] {0f ,1f ,0f }).setShininess(1f ).setSpecularColor(new float[] {0f ,1f ,0f })))
              .setGeometry(new Sphere().setRadius(0.005f )))))
        .addChild(new Group().setDEF(new SFString("SpecHumanoid"))
          .addChild(new Group().setDEF(new SFString("JoeISOHumanoid"))
            .addChild(new HAnimHumanoid("JoeISOHumanoid").setName(new SFString("Human")).setDEF(new SFString("Joe_Human")).setLoa(4).setVersion(new SFString("2.0"))
              .addComments(new CommentsBlock("original HAnimHumanoid info='\"humanoidVersion=2.0\"'"))
              .addComments(new CommentsBlock("<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)"))
              .addComments(new CommentsBlock("</LOD>"))
              .setMetadata(new MetadataSet().setName(new SFString("HAnimHumanoid.info")).setReference(new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"))
                .setMetadata(new MetadataString().setName(new SFString("humanoidVersion")).setValue(new MFString11().getArray())))
              .addSkeleton(new HAnimJoint("Joe_Human").setName(new SFString("humanoid_root")).setDEF(new SFString("Joe_humanoid_root")).setCenter(new float[] {0f ,0.875f ,0f })
                .addChild(new HAnimSegment("Joe_humanoid_root").setName(new SFString("sacrum")).setDEF(new SFString("Joe_sacrum"))
                  .addChild(new Transform().setTranslation(new float[] {0f ,0.875f ,0f })
                    .addChild(new Shape().setUSE(new SFString("jointbox"))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3212().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f13().getArray()))))
                  .addChild(new Transform().setTranslation(new float[] {0f ,0.92f ,0.08f })
                    .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                  .addChild(new Transform().setTranslation(new float[] {0f ,0.87f ,-0.022f })
                    .addChild(new Shape().setUSE(new SFString("skinsphere")))))
                .addChild(new HAnimJoint("Joe_humanoid_root").setName(new SFString("sacroiliac")).setDEF(new SFString("Joe_sacroiliac")).setCenter(new float[] {0f ,0.92f ,0f }).setSkinCoordIndex(new MFInt3214().getArray()).setSkinCoordWeight(new MFFloat15().getArray())
                  .addChild(new HAnimSegment("Joe_sacroiliac").setName(new SFString("pelvis")).setDEF(new SFString("Joe_pelvis"))
                    .addChild(new Transform().setTranslation(new float[] {0f ,0.9149f ,0.0016f })
                      .addChild(new Transform()
                        .addChild(new Shape().setUSE(new SFString("jointbox")))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3216().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray()))))
                    .addChild(new HAnimSite("Joe_pelvis").setName(new SFString("l_iliocristale_pt")).setDEF(new SFString("Joe_l_iliocristale_pt")).setTranslation(new float[] {0.1425f ,1.065f ,0.0033f })
                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                    .addChild(new HAnimSite("Joe_pelvis").setName(new SFString("l_trochanterion_pt")).setDEF(new SFString("Joe_l_trochanterion_pt")).setTranslation(new float[] {0.15f ,0.9f ,-0.01f })
                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                    .addChild(new HAnimSite("Joe_pelvis").setName(new SFString("r_iliocristale_pt")).setDEF(new SFString("Joe_r_iliocristale_pt")).setTranslation(new float[] {-0.1425f ,1.065f ,0.0033f })
                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                    .addChild(new HAnimSite("Joe_pelvis").setName(new SFString("r_trochanterion_pt")).setDEF(new SFString("Joe_r_trochanterion_pt")).setTranslation(new float[] {-0.15f ,0.9f ,-0.01f })
                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                    .addChild(new HAnimSite("Joe_pelvis").setName(new SFString("l_asis_pt")).setDEF(new SFString("Joe_l_asis_pt")).setTranslation(new float[] {0.0935f ,1.03f ,0.075f })
                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                    .addChild(new HAnimSite("Joe_pelvis").setName(new SFString("r_asis_pt")).setDEF(new SFString("Joe_r_asis_pt")).setTranslation(new float[] {-0.0935f ,1.03f ,0.075f })
                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                    .addChild(new HAnimSite("Joe_pelvis").setName(new SFString("l_psis_pt")).setDEF(new SFString("Joe_l_psis_pt")).setTranslation(new float[] {0.0773f ,1.019f ,-0.12f })
                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                    .addChild(new HAnimSite("Joe_pelvis").setName(new SFString("r_psis_pt")).setDEF(new SFString("Joe_r_psis_pt")).setTranslation(new float[] {-0.0773f ,1.019f ,-0.12f })
                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                    .addChild(new HAnimSite("Joe_pelvis").setName(new SFString("floormarker_pt")).setDEF(new SFString("Joe_floormarker_pt"))
                      .addChild(new Transform().setScale(new float[] {3f ,3f ,3f })
                        .addChild(new Shape().setUSE(new SFString("sitebox")))))
                    .addChild(new HAnimSite("Joe_pelvis").setName(new SFString("crotch_pt")).setDEF(new SFString("Joe_crotch_pt")).setTranslation(new float[] {0f ,0.87f ,-0.022f })
                      .addChild(new Shape().setUSE(new SFString("sitebox")))))
                  .addChild(new HAnimJoint("Joe_sacroiliac").setName(new SFString("l_hip")).setDEF(new SFString("Joe_l_hip")).setCenter(new float[] {0.1f ,0.92f ,0f }).setSkinCoordIndex(new MFInt3218().getArray()).setSkinCoordWeight(new MFFloat19().getArray())
                    .addChild(new HAnimSegment("Joe_l_hip").setName(new SFString("l_thigh")).setDEF(new SFString("Joe_l_thigh"))
                      .addChild(new Transform().setTranslation(new float[] {0.1f ,0.92f ,0f })
                        .addChild(new Shape().setUSE(new SFString("jointbox"))))
                      .addChild(new Shape()
                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3220().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f21().getArray()))))
                      .addChild(new Transform().setTranslation(new float[] {0.1f ,0.9f ,0.0775f })
                        .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                      .addChild(new Transform().setTranslation(new float[] {0.079f ,0.92f ,-0.14f })
                        .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                      .addChild(new Transform().setTranslation(new float[] {0.171f ,0.65f ,0f })
                        .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                      .addChild(new Transform().setTranslation(new float[] {0.02f ,0.65f ,0f })
                        .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                      .addChild(new Transform().setTranslation(new float[] {0.1f ,0.65f ,-0.08f })
                        .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                      .addChild(new Transform().setTranslation(new float[] {0.1f ,0.65f ,0.07f })
                        .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                      .addChild(new HAnimSite("Joe_l_thigh").setName(new SFString("l_knee_crease_pt")).setDEF(new SFString("Joe_l_knee_crease_pt")).setTranslation(new float[] {0.115f ,0.466f ,-0.055f })
                        .addChild(new Shape().setUSE(new SFString("sitebox"))))
                      .addChild(new HAnimSite("Joe_l_thigh").setName(new SFString("l_femoral_lateral_epicondyle_pt")).setDEF(new SFString("Joe_l_femoral_lateral_epicondyle_pt")).setTranslation(new float[] {0.17f ,0.466f ,0f })
                        .addChild(new Shape().setUSE(new SFString("sitebox"))))
                      .addChild(new HAnimSite("Joe_l_thigh").setName(new SFString("l_femoral_medial_epicondyle_pt")).setDEF(new SFString("Joe_l_femoral_medial_epicondyle_pt")).setTranslation(new float[] {0.05f ,0.466f ,0f })
                        .addChild(new Shape().setUSE(new SFString("sitebox")))))
                    .addChild(new HAnimJoint("Joe_l_hip").setName(new SFString("l_knee")).setDEF(new SFString("Joe_l_knee")).setCenter(new float[] {0.115f ,0.466f ,0f }).setSkinCoordIndex(new MFInt3222().getArray()).setSkinCoordWeight(new MFFloat23().getArray())
                      .addChild(new HAnimSegment("Joe_l_knee").setName(new SFString("l_calf")).setDEF(new SFString("Joe_l_calf"))
                        .addChild(new Transform().setTranslation(new float[] {0.115f ,0.466f ,0f })
                          .addChild(new Shape().setUSE(new SFString("jointbox"))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3224().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f25().getArray()))))
                        .addChild(new Transform().setTranslation(new float[] {0.115f ,0.466f ,0.06f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new Transform().setTranslation(new float[] {0.115f ,0.466f ,-0.055f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new Transform().setTranslation(new float[] {0.17f ,0.466f ,0f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new Transform().setTranslation(new float[] {0.05f ,0.466f ,0f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new Transform().setTranslation(new float[] {0.17f ,0.3f ,0f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new Transform().setTranslation(new float[] {0.06f ,0.3f ,0f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new Transform().setTranslation(new float[] {0.1f ,0.3f ,-0.05f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new Transform().setTranslation(new float[] {0.1f ,0.3f ,0.05f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new HAnimSite("Joe_l_calf").setName(new SFString("l_lateral_malleolus_pt")).setDEF(new SFString("Joe_l_lateral_malleolus_pt")).setTranslation(new float[] {0.15f ,0.07f ,0f })
                          .addChild(new Shape().setUSE(new SFString("sitebox"))))
                        .addChild(new HAnimSite("Joe_l_calf").setName(new SFString("l_medial_malleolus_pt")).setDEF(new SFString("Joe_l_medial_malleolus_pt")).setTranslation(new float[] {0.085f ,0.086f ,0.0125f })
                          .addChild(new Shape().setUSE(new SFString("sitebox")))))
                      .addChild(new HAnimJoint("Joe_l_knee").setName(new SFString("l_talocrural")).setDEF(new SFString("Joe_l_talocrural")).setCenter(new float[] {0.115f ,0.069f ,0f }).setSkinCoordIndex(new MFInt3226().getArray()).setSkinCoordWeight(new MFFloat27().getArray())
                        .addChild(new HAnimSegment("Joe_l_talocrural").setName(new SFString("l_talus")).setDEF(new SFString("Joe_l_talus"))
                          .addChild(new Transform().setTranslation(new float[] {0.115f ,0.069f ,0f })
                            .addChild(new Shape().setUSE(new SFString("jointbox"))))
                          .addChild(new Shape()
                            .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3228().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f29().getArray()))))
                          .addChild(new Transform().setTranslation(new float[] {0.15f ,0.07f ,0f })
                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                          .addChild(new Transform().setTranslation(new float[] {0.085f ,0.086f ,0.0125f })
                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                          .addChild(new Transform().setTranslation(new float[] {0.115f ,0.069f ,-0.045f })
                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                          .addChild(new Transform().setTranslation(new float[] {0.117f ,0.0975f ,0.0615f })
                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                          .addChild(new HAnimSite("Joe_l_talus").setName(new SFString("l_sphyrion_pt")).setDEF(new SFString("Joe_l_sphyrion_pt")).setTranslation(new float[] {0.09f ,0.056f ,0.0125f })
                            .addChild(new Shape().setUSE(new SFString("sitebox"))))
                          .addChild(new HAnimSite("Joe_l_talus").setName(new SFString("l_calcaneus_posterior_pt")).setDEF(new SFString("Joe_l_calcaneus_posterior_pt")).setTranslation(new float[] {0.115f ,0.04f ,-0.055f })
                            .addChild(new Shape().setUSE(new SFString("sitebox")))))
                        .addChild(new HAnimJoint("Joe_l_talocrural").setName(new SFString("l_tarsometatarsal_2")).setDEF(new SFString("Joe_l_tarsometatarsal_2")).setCenter(new float[] {0.115f ,0.031f ,0.03f }).setSkinCoordIndex(new MFInt3230().getArray()).setSkinCoordWeight(new MFFloat31().getArray())
                          .addChild(new HAnimSegment("Joe_l_tarsometatarsal_2").setName(new SFString("l_metatarsal_2")).setDEF(new SFString("Joe_l_metatarsal_2"))
                            .addChild(new Transform().setTranslation(new float[] {0.115f ,0.031f ,0.03f })
                              .addChild(new Shape().setUSE(new SFString("jointbox"))))
                            .addChild(new Shape()
                              .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3232().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f33().getArray()))))
                            .addChild(new Transform().setTranslation(new float[] {0.1375f ,0.006f ,-0.03f })
                              .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                            .addChild(new Transform().setTranslation(new float[] {0.095f ,0.006f ,-0.03f })
                              .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                            .addChild(new Transform().setTranslation(new float[] {0.115f ,0.015f ,-0.045f })
                              .addChild(new Shape().setUSE(new SFString("skinsphere")))))
                          .addChild(new HAnimJoint("Joe_l_tarsometatarsal_2").setName(new SFString("l_metatarsophalangeal_2")).setDEF(new SFString("Joe_l_metatarsophalangeal_2")).setCenter(new float[] {0.115f ,0.037f ,0.09f }).setSkinCoordIndex(new MFInt3234().getArray()).setSkinCoordWeight(new MFFloat35().getArray())
                            .addChild(new HAnimSegment("Joe_l_metatarsophalangeal_2").setName(new SFString("l_tarsal_proximal_phalanx_2")).setDEF(new SFString("Joe_l_tarsal_proximal_phalanx_2"))
                              .addChild(new Transform().setTranslation(new float[] {0.115f ,0.037f ,0.09f })
                                .addChild(new Shape().setUSE(new SFString("jointbox"))))
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3236().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f37().getArray()))))
                              .addChild(new Transform().setTranslation(new float[] {0.115f ,0.06f ,0.1f })
                                .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                              .addChild(new Transform().setTranslation(new float[] {0.115f ,0f ,0.07f })
                                .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                              .addChild(new Transform().setTranslation(new float[] {0.165f ,0f ,0.07f })
                                .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                              .addChild(new Transform().setTranslation(new float[] {0.095f ,0f ,0.07f })
                                .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                              .addChild(new HAnimSite("Joe_l_tarsal_proximal_phalanx_2").setName(new SFString("l_metatarsal_phalanx_1_pt")).setDEF(new SFString("Joe_l_metatarsal_phalanx_1_pt")).setTranslation(new float[] {0.087f ,0.01f ,0.122f })
                                .addChild(new Shape().setUSE(new SFString("sitebox")))))
                            .addChild(new HAnimJoint("Joe_l_metatarsophalangeal_2").setName(new SFString("l_metatarsal")).setDEF(new SFString("Joe_l_metatarsal")).setCenter(new float[] {0.115f ,0.02f ,0.122f }).setSkinCoordIndex(new MFInt3238().getArray()).setSkinCoordWeight(new MFFloat39().getArray())
                              .addChild(new HAnimSegment("Joe_l_metatarsal").setName(new SFString("l_tarsal_distal_phalanx_2")).setDEF(new SFString("Joe_l_tarsal_distal_phalanx_2"))
                                .addChild(new Transform().setTranslation(new float[] {0.115f ,0.02f ,0.13f })
                                  .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3240().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray()))))
                                .addChild(new Transform().setTranslation(new float[] {0.115f ,0.04f ,0.13f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {0.125f ,0f ,0.12f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {0.165f ,0f ,0.12f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {0.087f ,0f ,0.122f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {0.09f ,0.012f ,0.188f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {0.11f ,0.011f ,0.19f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {0.128f ,0.011f ,0.185f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {0.142f ,0.011f ,0.178f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {0.154f ,0.01f ,0.168f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new HAnimSite("Joe_l_tarsal_distal_phalanx_2").setName(new SFString("l_metatarsal_phalanx_5_pt")).setDEF(new SFString("Joe_l_metatarsal_phalanx_5_pt")).setTranslation(new float[] {0.165f ,0.01f ,0.12f })
                                  .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                .addChild(new HAnimSite("Joe_l_tarsal_distal_phalanx_2").setName(new SFString("l_tarsal_distal_phalanx_2_pt")).setDEF(new SFString("Joe_l_tarsal_distal_phalanx_2_pt")).setTranslation(new float[] {0.11f ,0.011f ,0.19f })
                                  .addChild(new Shape().setUSE(new SFString("sitebox")))))))))))
                  .addChild(new HAnimJoint("Joe_sacroiliac").setName(new SFString("r_hip")).setDEF(new SFString("Joe_r_hip")).setCenter(new float[] {-0.1f ,0.92f ,0f }).setSkinCoordIndex(new MFInt3242().getArray()).setSkinCoordWeight(new MFFloat43().getArray())
                    .addChild(new HAnimSegment("Joe_r_hip").setName(new SFString("r_thigh")).setDEF(new SFString("Joe_r_thigh"))
                      .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.92f ,0f })
                        .addChild(new Shape().setUSE(new SFString("jointbox"))))
                      .addChild(new Shape()
                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3244().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f45().getArray()))))
                      .addChild(new Transform().setTranslation(new float[] {-0.079f ,0.92f ,-0.14f })
                        .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                      .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.9f ,0.075f })
                        .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                      .addChild(new Transform().setTranslation(new float[] {-0.171f ,0.65f ,0f })
                        .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                      .addChild(new Transform().setTranslation(new float[] {-0.02f ,0.65f ,0f })
                        .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                      .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.65f ,-0.08f })
                        .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                      .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.65f ,0.07f })
                        .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                      .addChild(new HAnimSite("Joe_r_thigh").setName(new SFString("r_knee_crease_pt")).setDEF(new SFString("Joe_r_knee_crease_pt")).setTranslation(new float[] {-0.115f ,0.466f ,-0.055f })
                        .addChild(new Shape().setUSE(new SFString("sitebox"))))
                      .addChild(new HAnimSite("Joe_r_thigh").setName(new SFString("r_femoral_lateral_epicondyle_pt")).setDEF(new SFString("Joe_r_femoral_lateral_epicondyle_pt")).setTranslation(new float[] {-0.17f ,0.466f ,0f })
                        .addChild(new Shape().setUSE(new SFString("sitebox"))))
                      .addChild(new HAnimSite("Joe_r_thigh").setName(new SFString("r_femoral_medial_epicondyle_pt")).setDEF(new SFString("Joe_r_femoral_medial_epicondyle_pt")).setTranslation(new float[] {-0.05f ,0.466f ,0f })
                        .addChild(new Shape().setUSE(new SFString("sitebox")))))
                    .addChild(new HAnimJoint("Joe_r_hip").setName(new SFString("r_knee")).setDEF(new SFString("Joe_r_knee")).setCenter(new float[] {-0.05f ,0.466f ,0f }).setSkinCoordIndex(new MFInt3246().getArray()).setSkinCoordWeight(new MFFloat47().getArray())
                      .addChild(new HAnimSegment("Joe_r_knee").setName(new SFString("r_calf")).setDEF(new SFString("Joe_r_calf"))
                        .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.4913f ,0f })
                          .addChild(new Shape().setUSE(new SFString("jointbox"))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3248().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f49().getArray()))))
                        .addChild(new Transform().setTranslation(new float[] {-0.115f ,0.466f ,0.06f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new Transform().setTranslation(new float[] {-0.115f ,0.466f ,-0.055f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new Transform().setTranslation(new float[] {-0.17f ,0.466f ,0f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new Transform().setTranslation(new float[] {-0.05f ,0.466f ,0f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new Transform().setTranslation(new float[] {-0.17f ,0.3f ,0f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new Transform().setTranslation(new float[] {-0.06f ,0.3f ,0f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.3f ,-0.05f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.3f ,0.05f })
                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                        .addChild(new HAnimSite("Joe_r_calf").setName(new SFString("r_lateral_malleolus_pt")).setDEF(new SFString("Joe_r_lateral_malleolus_pt")).setTranslation(new float[] {-0.15f ,0.07f ,0f })
                          .addChild(new Shape().setUSE(new SFString("sitebox"))))
                        .addChild(new HAnimSite("Joe_r_calf").setName(new SFString("r_medial_malleolus_pt")).setDEF(new SFString("Joe_r_medial_malleolus_pt")).setTranslation(new float[] {-0.085f ,0.086f ,0.0125f })
                          .addChild(new Shape().setUSE(new SFString("sitebox")))))
                      .addChild(new HAnimJoint("Joe_r_knee").setName(new SFString("r_talocrural")).setDEF(new SFString("Joe_r_talocrural")).setCenter(new float[] {-0.115f ,0.069f ,0f }).setSkinCoordIndex(new MFInt3250().getArray()).setSkinCoordWeight(new MFFloat51().getArray())
                        .addChild(new HAnimSegment("Joe_r_talocrural").setName(new SFString("r_talus")).setDEF(new SFString("Joe_r_talus"))
                          .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.0712f ,0f })
                            .addChild(new Shape().setUSE(new SFString("jointbox"))))
                          .addChild(new Shape()
                            .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3252().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray()))))
                          .addChild(new Transform().setTranslation(new float[] {-0.15f ,0.07f ,0f })
                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                          .addChild(new Transform().setTranslation(new float[] {-0.085f ,0.086f ,0.0125f })
                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                          .addChild(new Transform().setTranslation(new float[] {-0.115f ,0.069f ,-0.045f })
                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                          .addChild(new Transform().setTranslation(new float[] {-0.117f ,0.0975f ,0.0615f })
                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                          .addChild(new HAnimSite("Joe_r_talus").setName(new SFString("r_sphyrion_pt")).setDEF(new SFString("Joe_r_sphyrion_pt")).setTranslation(new float[] {-0.09f ,0.056f ,0.0125f })
                            .addChild(new Shape().setUSE(new SFString("sitebox"))))
                          .addChild(new HAnimSite("Joe_r_talus").setName(new SFString("r_calcaneus_posterior_pt")).setDEF(new SFString("Joe_r_calcaneus_posterior_pt")).setTranslation(new float[] {-0.115f ,0.04f ,-0.055f })
                            .addChild(new Shape().setUSE(new SFString("sitebox")))))
                        .addChild(new HAnimJoint("Joe_r_talocrural").setName(new SFString("r_tarsometatarsal_2")).setDEF(new SFString("Joe_r_tarsometatarsal_2")).setCenter(new float[] {-0.1f ,0.015f ,-0.01f }).setSkinCoordIndex(new MFInt3254().getArray()).setSkinCoordWeight(new MFFloat55().getArray())
                          .addChild(new HAnimSegment("Joe_r_tarsometatarsal_2").setName(new SFString("r_metatarsal_2")).setDEF(new SFString("Joe_r_metatarsal_2"))
                            .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.015f ,-0.01f })
                              .addChild(new Shape().setUSE(new SFString("jointbox"))))
                            .addChild(new Shape()
                              .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3256().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f57().getArray()))))
                            .addChild(new Transform().setTranslation(new float[] {-0.1375f ,0.006f ,-0.03f })
                              .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                            .addChild(new Transform().setTranslation(new float[] {-0.095f ,0.006f ,-0.03f })
                              .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                            .addChild(new Transform().setTranslation(new float[] {-0.095f ,0.006f ,-0.03f })
                              .addChild(new Shape().setUSE(new SFString("skinsphere")))))
                          .addChild(new HAnimJoint("Joe_r_tarsometatarsal_2").setName(new SFString("r_metatarsophalangeal_2")).setDEF(new SFString("Joe_r_metatarsophalangeal_2")).setCenter(new float[] {-0.115f ,0.037f ,0.09f }).setSkinCoordIndex(new MFInt3258().getArray()).setSkinCoordWeight(new MFFloat59().getArray())
                            .addChild(new HAnimSegment("Joe_r_metatarsophalangeal_2").setName(new SFString("r_tarsal_proximal_phalanx_2")).setDEF(new SFString("Joe_r_tarsal_proximal_phalanx_2"))
                              .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.02f ,0.07f })
                                .addChild(new Shape().setUSE(new SFString("jointbox"))))
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3260().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f61().getArray()))))
                              .addChild(new Transform().setTranslation(new float[] {-0.115f ,0.06f ,0.1f })
                                .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                              .addChild(new Transform().setTranslation(new float[] {-0.115f ,0f ,0.07f })
                                .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                              .addChild(new Transform().setTranslation(new float[] {-0.165f ,0f ,0.07f })
                                .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                              .addChild(new Transform().setTranslation(new float[] {-0.165f ,0f ,0.07f })
                                .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                              .addChild(new HAnimSite("Joe_r_tarsal_proximal_phalanx_2").setName(new SFString("r_metatarsal_phalanx_1_pt")).setDEF(new SFString("Joe_r_metatarsal_phalanx_1_pt")).setTranslation(new float[] {-0.115f ,0.02f ,0.122f })
                                .addChild(new Shape().setUSE(new SFString("sitebox")))))
                            .addChild(new HAnimJoint("Joe_r_metatarsophalangeal_2").setName(new SFString("r_tarsal_distal_interphalangeal_2")).setDEF(new SFString("Joe_r_tarsal_distal_interphalangeal_2")).setCenter(new float[] {-0.1f ,0.01f ,0.14f }).setSkinCoordIndex(new MFInt3262().getArray()).setSkinCoordWeight(new MFFloat63().getArray())
                              .addChild(new HAnimSegment("Joe_r_tarsal_distal_interphalangeal_2").setName(new SFString("r_tarsal_distal_phalanx_2")).setDEF(new SFString("Joe_r_tarsal_distal_phalanx_2"))
                                .addChild(new Transform().setTranslation(new float[] {-0.1086f ,0.01f ,0.14f })
                                  .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3264().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f65().getArray()))))
                                .addChild(new Transform().setTranslation(new float[] {-0.115f ,0.04f ,0.13f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {-0.125f ,0f ,0.12f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {-0.165f ,0f ,0.12f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {-0.087f ,0f ,0.122f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {-0.09f ,0.012f ,0.188f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {-0.11f ,0.011f ,0.19f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {-0.128f ,0.011f ,0.185f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {-0.142f ,0.011f ,0.178f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new Transform().setTranslation(new float[] {-0.154f ,0.01f ,0.168f })
                                  .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                .addChild(new HAnimSite("Joe_r_tarsal_distal_phalanx_2").setName(new SFString("r_metatarsal_phalanx_5_pt")).setDEF(new SFString("Joe_r_metatarsal_phalanx_5_pt")).setTranslation(new float[] {-0.165f ,0.01f ,0.12f })
                                  .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                .addChild(new HAnimSite("Joe_r_tarsal_distal_phalanx_2").setName(new SFString("r_tarsal_distal_phalanx_2_pt")).setDEF(new SFString("Joe_r_tarsal_distal_phalanx_2_pt")).setTranslation(new float[] {-0.11f ,0.011f ,0.19f })
                                  .addChild(new Shape().setUSE(new SFString("sitebox"))))))))))))
                .addChild(new HAnimJoint("Joe_humanoid_root").setName(new SFString("vl5")).setDEF(new SFString("Joe_vl5")).setCenter(new float[] {0f ,1.045f ,-0.095f }).setSkinCoordIndex(new MFInt3266().getArray()).setSkinCoordWeight(new MFFloat67().getArray())
                  .addChild(new HAnimSegment("Joe_vl5").setName(new SFString("toPelvis")).setDEF(new SFString("Joe_toPelvis"))
                    .addChild(new Shape()
                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3268().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f69().getArray())))))
                  .addChild(new HAnimSegment("Joe_vl5").setName(new SFString("l5")).setDEF(new SFString("Joe_l5"))
                    .addChild(new Shape()
                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3270().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray()))))
                    .addChild(new HAnimSite("Joe_l5").setName(new SFString("waist_preferred_posterior_pt")).setDEF(new SFString("Joe_waist_preferred_posterior_pt")).setTranslation(new float[] {0f ,1.0915f ,-0.1091f })
                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                    .addChild(new HAnimSite("Joe_l5").setName(new SFString("navel_pt")).setDEF(new SFString("Joe_navel_pt")).setTranslation(new float[] {0f ,1.0723f ,0.09f })
                      .addChild(new Shape().setUSE(new SFString("sitebox")))))
                  .addChild(new HAnimJoint("Joe_vl5").setName(new SFString("vl4")).setDEF(new SFString("Joe_vl4")).setCenter(new float[] {0f ,1.068f ,-0.085f })
                    .addChild(new HAnimSegment("Joe_vl4").setName(new SFString("l4")).setDEF(new SFString("Joe_l4"))
                      .addChild(new Shape()
                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3272().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f73().getArray()))))
                      .addChild(new Transform().setTranslation(new float[] {0f ,1.068f ,-0.085f })
                        .addChild(new Shape().setUSE(new SFString("jointbox")))))
                    .addChild(new HAnimJoint("Joe_vl4").setName(new SFString("vl3")).setDEF(new SFString("Joe_vl3")).setCenter(new float[] {0f ,1.092f ,-0.0725f })
                      .addChild(new HAnimSegment("Joe_vl3").setName(new SFString("l3")).setDEF(new SFString("Joe_l3"))
                        .addChild(new Shape()
                          .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3274().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f75().getArray()))))
                        .addChild(new Transform().setTranslation(new float[] {0f ,1.092f ,-0.0725f })
                          .addChild(new Shape().setUSE(new SFString("jointbox")))))
                      .addChild(new HAnimJoint("Joe_vl3").setName(new SFString("vl2")).setDEF(new SFString("Joe_vl2")).setCenter(new float[] {0f ,1.12f ,-0.065f }).setSkinCoordIndex(new MFInt3276().getArray()).setSkinCoordWeight(new MFFloat77().getArray())
                        .addChild(new HAnimSegment("Joe_vl2").setName(new SFString("l2")).setDEF(new SFString("Joe_l2"))
                          .addChild(new Shape()
                            .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3278().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f79().getArray()))))
                          .addChild(new Transform().setTranslation(new float[] {0f ,1.12f ,-0.065f })
                            .addChild(new Shape().setUSE(new SFString("jointbox"))))
                          .addChild(new Transform().setTranslation(new float[] {-0.087f ,1.19f ,-0.09f })
                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                          .addChild(new Transform().setTranslation(new float[] {0.087f ,1.19f ,-0.09f })
                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                          .addChild(new Transform().setTranslation(new float[] {0.172f ,1.32f ,-0.03f })
                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                          .addChild(new Transform().setTranslation(new float[] {-0.172f ,1.32f ,-0.03f })
                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                          .addChild(new Transform().setTranslation(new float[] {0.15f ,1.23f ,-0.015f })
                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                          .addChild(new Transform().setTranslation(new float[] {-0.15f ,1.23f ,-0.015f })
                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                          .addChild(new HAnimSite("Joe_l2").setName(new SFString("r_rib10_pt")).setDEF(new SFString("Joe_r_rib10_pt")).setTranslation(new float[] {-0.087f ,1.19f ,0.09f })
                            .addChild(new Shape().setUSE(new SFString("sitebox"))))
                          .addChild(new HAnimSite("Joe_l2").setName(new SFString("l_rib10_pt")).setDEF(new SFString("Joe_l_rib10_pt")).setTranslation(new float[] {0.087f ,1.19f ,0.09f })
                            .addChild(new Shape().setUSE(new SFString("sitebox"))))
                          .addChild(new HAnimSite("Joe_l2").setName(new SFString("rib10_midspine_pt")).setDEF(new SFString("Joe_rib10_midspine_pt")).setTranslation(new float[] {0f ,1.1908f ,-0.1113f })
                            .addChild(new Shape().setUSE(new SFString("sitebox")))))
                        .addChild(new HAnimJoint("Joe_vl2").setName(new SFString("vl1")).setDEF(new SFString("Joe_vl1")).setCenter(new float[] {0f ,1.1459f ,-0.0625f })
                          .addChild(new HAnimSegment("Joe_vl1").setName(new SFString("l1")).setDEF(new SFString("Joe_l1"))
                            .addChild(new Shape()
                              .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3280().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f81().getArray()))))
                            .addChild(new Transform().setTranslation(new float[] {0f ,1.1459f ,-0.0625f })
                              .addChild(new Shape().setUSE(new SFString("jointbox")))))
                          .addChild(new HAnimJoint("Joe_vl1").setName(new SFString("vt12")).setDEF(new SFString("Joe_vt12")).setCenter(new float[] {0f ,1.179f ,-0.068f })
                            .addChild(new HAnimSegment("Joe_vt12").setName(new SFString("t12")).setDEF(new SFString("Joe_t12"))
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3282().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f83().getArray()))))
                              .addChild(new Transform().setTranslation(new float[] {0f ,1.179f ,-0.068f })
                                .addChild(new Shape().setUSE(new SFString("jointbox")))))
                            .addChild(new HAnimJoint("Joe_vt12").setName(new SFString("vt11")).setDEF(new SFString("Joe_vt11")).setCenter(new float[] {0f ,1.2679f ,-0.081f })
                              .addChild(new HAnimSegment("Joe_vt11").setName(new SFString("t11")).setDEF(new SFString("Joe_t11"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3284().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f85().getArray()))))
                                .addChild(new Transform().setTranslation(new float[] {0f ,1.2145f ,-0.0755f })
                                  .addChild(new Shape().setUSE(new SFString("jointbox")))))
                              .addChild(new HAnimJoint("Joe_vt11").setName(new SFString("vt10")).setDEF(new SFString("Joe_vt10")).setCenter(new float[] {0f ,1.242f ,-0.09f }).setSkinCoordIndex(new MFInt3286().getArray()).setSkinCoordWeight(new MFFloat87().getArray())
                                .addChild(new HAnimSegment("Joe_vt10").setName(new SFString("t10")).setDEF(new SFString("Joe_t10"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3288().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f89().getArray()))))
                                  .addChild(new Transform().setTranslation(new float[] {0f ,1.242f ,-0.09f })
                                    .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                  .addChild(new HAnimSite("Joe_t10").setName(new SFString("substernale_pt")).setDEF(new SFString("Joe_substernale_pt")).setTranslation(new float[] {0f ,1.25f ,0.113f })
                                    .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                .addChild(new HAnimJoint("Joe_vt10").setName(new SFString("vt9")).setDEF(new SFString("Joe_vt9")).setCenter(new float[] {0f ,1.268f ,-0.1f }).setSkinCoordIndex(new MFInt3290().getArray()).setSkinCoordWeight(new MFFloat91().getArray())
                                  .addChild(new HAnimSegment("Joe_vt9").setName(new SFString("t9")).setDEF(new SFString("Joe_t9"))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3292().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f93().getArray()))))
                                    .addChild(new Transform().setTranslation(new float[] {0f ,1.268f ,-0.1f })
                                      .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                    .addChild(new HAnimSite("Joe_t9").setName(new SFString("r_thelion_pt")).setDEF(new SFString("Joe_r_thelion_pt")).setTranslation(new float[] {-0.1135f ,1.318f ,0.095f })
                                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                    .addChild(new HAnimSite("Joe_t9").setName(new SFString("l_thelion_pt")).setDEF(new SFString("Joe_l_thelion_pt")).setTranslation(new float[] {0.1135f ,1.318f ,0.095f })
                                      .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                  .addChild(new HAnimJoint("Joe_vt9").setName(new SFString("vt8")).setDEF(new SFString("Joe_vt8")).setCenter(new float[] {0f ,1.294f ,-0.11f })
                                    .addChild(new HAnimSegment("Joe_vt8").setName(new SFString("t8")).setDEF(new SFString("Joe_t8"))
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3294().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f95().getArray()))))
                                      .addChild(new Transform().setTranslation(new float[] {0f ,1.294f ,-0.11f })
                                        .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                    .addChild(new HAnimJoint("Joe_vt8").setName(new SFString("vt7")).setDEF(new SFString("Joe_vt7")).setCenter(new float[] {0f ,1.323f ,-0.1155f })
                                      .addChild(new HAnimSegment("Joe_vt7").setName(new SFString("t7")).setDEF(new SFString("Joe_t7"))
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3296().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f97().getArray()))))
                                        .addChild(new Transform().setTranslation(new float[] {0f ,1.323f ,-0.1155f })
                                          .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                      .addChild(new HAnimJoint("Joe_vt7").setName(new SFString("vt6")).setDEF(new SFString("Joe_vt6")).setCenter(new float[] {0f ,1.352f ,-0.12f })
                                        .addChild(new HAnimSegment("Joe_vt6").setName(new SFString("t6")).setDEF(new SFString("Joe_t6"))
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3298().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f99().getArray()))))
                                          .addChild(new Transform().setTranslation(new float[] {0f ,1.352f ,-0.12f })
                                            .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                        .addChild(new HAnimJoint("Joe_vt6").setName(new SFString("vt5")).setDEF(new SFString("Joe_vt5")).setCenter(new float[] {0f ,1.381f ,-0.1235f })
                                          .addChild(new HAnimSegment("Joe_vt5").setName(new SFString("t5")).setDEF(new SFString("Joe_t5"))
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32100().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f101().getArray()))))
                                            .addChild(new Transform().setTranslation(new float[] {0f ,1.381f ,-0.1235f })
                                              .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                          .addChild(new HAnimJoint("Joe_vt5").setName(new SFString("vt4")).setDEF(new SFString("Joe_vt4")).setCenter(new float[] {0f ,1.41f ,-0.1235f }).setSkinCoordIndex(new MFInt32102().getArray()).setSkinCoordWeight(new MFFloat103().getArray())
                                            .addChild(new HAnimSegment("Joe_vt4").setName(new SFString("t4")).setDEF(new SFString("Joe_t4"))
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32104().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f105().getArray()))))
                                              .addChild(new Transform().setTranslation(new float[] {0f ,1.41f ,-0.1235f })
                                                .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                              .addChild(new Transform().setTranslation(new float[] {0f ,1.41f ,-0.145f })
                                                .addChild(new Shape().setUSE(new SFString("skinsphere")))))
                                            .addChild(new HAnimJoint("Joe_vt4").setName(new SFString("vt3")).setDEF(new SFString("Joe_vt3")).setCenter(new float[] {0f ,1.438f ,-0.12f })
                                              .addChild(new HAnimSegment("Joe_vt3").setName(new SFString("t3")).setDEF(new SFString("Joe_t3"))
                                                .addChild(new Shape()
                                                  .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32106().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f107().getArray()))))
                                                .addChild(new Transform().setTranslation(new float[] {0f ,1.438f ,-0.12f })
                                                  .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                              .addChild(new HAnimJoint("Joe_vt3").setName(new SFString("vt2")).setDEF(new SFString("Joe_vt2")).setCenter(new float[] {0f ,1.468f ,-0.105f })
                                                .addChild(new HAnimSegment("Joe_vt2").setName(new SFString("t2")).setDEF(new SFString("Joe_t2"))
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32108().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f109().getArray()))))
                                                  .addChild(new Transform().setTranslation(new float[] {0f ,1.468f ,-0.105f })
                                                    .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                .addChild(new HAnimJoint("Joe_vt2").setName(new SFString("vt1")).setDEF(new SFString("Joe_vt1")).setCenter(new float[] {0f ,1.497f ,-0.09f }).setSkinCoordIndex(new MFInt32110().getArray()).setSkinCoordWeight(new MFFloat111().getArray())
                                                  .addChild(new HAnimSegment("Joe_vt1").setName(new SFString("t1")).setDEF(new SFString("Joe_t1"))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32112().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f113().getArray()))))
                                                    .addChild(new Transform().setTranslation(new float[] {0f ,1.497f ,-0.09f })
                                                      .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                    .addChild(new HAnimSite("Joe_t1").setName(new SFString("suprasternale_pt")).setDEF(new SFString("Joe_suprasternale_pt")).setTranslation(new float[] {0f ,1.44f ,0.03f })
                                                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                    .addChild(new HAnimSite("Joe_t1").setName(new SFString("cervicale_pt")).setDEF(new SFString("Joe_cervicale_pt")).setTranslation(new float[] {0f ,1.53f ,-0.084f })
                                                      .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                                  .addChild(new HAnimJoint("Joe_vt1").setName(new SFString("vc7")).setDEF(new SFString("Joe_vc7")).setCenter(new float[] {0f ,1.525f ,-0.072f }).setSkinCoordIndex(new MFInt32114().getArray()).setSkinCoordWeight(new MFFloat115().getArray())
                                                    .addChild(new HAnimSegment("Joe_vc7").setName(new SFString("c7")).setDEF(new SFString("Joe_c7"))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32116().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f117().getArray()))))
                                                      .addChild(new Transform().setTranslation(new float[] {0f ,1.525f ,-0.072f })
                                                        .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                      .addChild(new HAnimSite("Joe_c7").setName(new SFString("r_neck_base_pt")).setDEF(new SFString("Joe_r_neck_base_pt")).setTranslation(new float[] {-0.0646f ,1.5149f ,-0.0385f })
                                                        .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                      .addChild(new HAnimSite("Joe_c7").setName(new SFString("l_neck_base_pt")).setDEF(new SFString("Joe_l_neck_base_pt")).setTranslation(new float[] {0.0646f ,1.5149f ,-0.0385f })
                                                        .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                                    .addChild(new HAnimJoint("Joe_vc7").setName(new SFString("vc6")).setDEF(new SFString("Joe_vc6")).setCenter(new float[] {0f ,1.54f ,-0.05f })
                                                      .addChild(new HAnimSegment("Joe_vc6").setName(new SFString("c6")).setDEF(new SFString("Joe_c6"))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32118().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f119().getArray()))))
                                                        .addChild(new Transform().setTranslation(new float[] {0f ,1.54f ,-0.05f })
                                                          .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                      .addChild(new HAnimJoint("Joe_vc6").setName(new SFString("vc5")).setDEF(new SFString("Joe_vc5")).setCenter(new float[] {0f ,1.552f ,-0.035f })
                                                        .addChild(new HAnimSegment("Joe_vc5").setName(new SFString("c5")).setDEF(new SFString("Joe_c5"))
                                                          .addChild(new Transform().setTranslation(new float[] {0f ,1.552f ,-0.035f })
                                                            .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32120().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f121().getArray())))))
                                                        .addChild(new HAnimJoint("Joe_vc5").setName(new SFString("vc4")).setDEF(new SFString("Joe_vc4")).setCenter(new float[] {0f ,1.5675f ,-0.0256f })
                                                          .addChild(new HAnimSegment("Joe_vc4").setName(new SFString("c4")).setDEF(new SFString("Joe_c4"))
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32122().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f123().getArray()))))
                                                            .addChild(new Transform().setTranslation(new float[] {0f ,1.5675f ,-0.0256f })
                                                              .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                          .addChild(new HAnimJoint("Joe_vc4").setName(new SFString("vc3")).setDEF(new SFString("Joe_vc3")).setCenter(new float[] {0f ,1.5823f ,-0.0185f })
                                                            .addChild(new HAnimSegment("Joe_vc3").setName(new SFString("c3")).setDEF(new SFString("Joe_c3"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32124().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f125().getArray()))))
                                                              .addChild(new Transform().setTranslation(new float[] {0f ,1.5823f ,-0.0185f })
                                                                .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                            .addChild(new HAnimJoint("Joe_vc3").setName(new SFString("vc2")).setDEF(new SFString("Joe_vc2")).setCenter(new float[] {0f ,1.595f ,-0.0175f })
                                                              .addChild(new HAnimSegment("Joe_vc2").setName(new SFString("c2")).setDEF(new SFString("Joe_c2"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32126().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f127().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {0f ,1.595f ,-0.0175f })
                                                                  .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                              .addChild(new HAnimJoint("Joe_vc2").setName(new SFString("vc1")).setDEF(new SFString("Joe_vc1")).setCenter(new float[] {0f ,1.61f ,-0.015f })
                                                                .addChild(new HAnimSegment("Joe_vc1").setName(new SFString("c1")).setDEF(new SFString("Joe_c1"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32128().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f129().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {0f ,1.61f ,-0.015f })
                                                                    .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                .addChild(new HAnimJoint("Joe_vc1").setName(new SFString("skullbase")).setDEF(new SFString("Joe_skullbase")).setCenter(new float[] {0f ,1.63f ,-0.01f }).setSkinCoordIndex(new MFInt32130().getArray()).setSkinCoordWeight(new MFFloat131().getArray())
                                                                  .addChild(new HAnimSegment("Joe_skullbase").setName(new SFString("skull")).setDEF(new SFString("Joe_skull"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32132().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f133().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {0f ,1.63f ,-0.01f })
                                                                      .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                                    .addChild(new HAnimSite("Joe_skull").setName(new SFString("skull_vertex_tip")).setDEF(new SFString("Joe_skull_vertex_tip")).setTranslation(new float[] {0f ,1.77f ,0f })
                                                                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                                    .addChild(new HAnimSite("Joe_skull").setName(new SFString("sellion_pt")).setDEF(new SFString("Joe_sellion_pt")).setTranslation(new float[] {0f ,1.665f ,0.09f })
                                                                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                                    .addChild(new HAnimSite("Joe_skull").setName(new SFString("r_infraorbitale_pt")).setDEF(new SFString("Joe_r_infraorbitale_pt")).setTranslation(new float[] {-0.033f ,1.62f ,0.087f })
                                                                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                                    .addChild(new HAnimSite("Joe_skull").setName(new SFString("l_infraorbitale_pt")).setDEF(new SFString("Joe_l_infraorbitale_pt")).setTranslation(new float[] {0.033f ,1.62f ,0.087f })
                                                                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                                    .addChild(new HAnimSite("Joe_skull").setName(new SFString("supramenton_pt")).setDEF(new SFString("Joe_supramenton_pt")).setTranslation(new float[] {0f ,1.55f ,0.097f })
                                                                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                                    .addChild(new HAnimSite("Joe_skull").setName(new SFString("r_tragion_pt")).setDEF(new SFString("Joe_r_tragion_pt")).setTranslation(new float[] {-0.077f ,1.64f ,-0.01f })
                                                                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                                    .addChild(new HAnimSite("Joe_skull").setName(new SFString("r_gonion_pt")).setDEF(new SFString("Joe_r_gonion_pt")).setTranslation(new float[] {-0.052f ,1.58f ,0.015f })
                                                                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                                    .addChild(new HAnimSite("Joe_skull").setName(new SFString("l_tragion_pt")).setDEF(new SFString("Joe_l_tragion_pt")).setTranslation(new float[] {0.077f ,1.64f ,-0.01f })
                                                                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                                    .addChild(new HAnimSite("Joe_skull").setName(new SFString("l_gonion_pt")).setDEF(new SFString("Joe_l_gonion_pt")).setTranslation(new float[] {0.0631f ,1.58f ,0.015f })
                                                                      .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                                    .addChild(new HAnimSite("Joe_skull").setName(new SFString("nuchale_pt")).setDEF(new SFString("Joe_nuchale_pt")).setTranslation(new float[] {0f ,1.625f ,-0.0925f })
                                                                      .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                                                  .addChild(new HAnimJoint("Joe_skullbase").setName(new SFString("l_eyeball_joint")).setDEF(new SFString("Joe_l_eyeball_joint")).setCenter(new float[] {0.034f ,1.659f ,0.06f })
                                                                    .addChild(new HAnimSegment("Joe_l_eyeball_joint").setName(new SFString("l_eyeball")).setDEF(new SFString("Joe_l_eyeball"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32134().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f135().getArray()))))
                                                                      .addChild(new Transform().setScale(new float[] {1f ,1f ,1.4f }).setTranslation(new float[] {0.034f ,1.655f ,0.065f })
                                                                        .addChild(new Shape().setUSE(new SFString("jointbox"))))))
                                                                  .addChild(new HAnimJoint("Joe_skullbase").setName(new SFString("r_eyeball_joint")).setDEF(new SFString("Joe_r_eyeball_joint")).setCenter(new float[] {-0.034f ,1.659f ,0.06f })
                                                                    .addChild(new HAnimSegment("Joe_r_eyeball_joint").setName(new SFString("r_eyeball")).setDEF(new SFString("Joe_r_eyeball"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32136().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f137().getArray()))))
                                                                      .addChild(new Transform().setScale(new float[] {1f ,1f ,1.4f }).setTranslation(new float[] {-0.034f ,1.655f ,0.065f })
                                                                        .addChild(new Shape().setUSE(new SFString("jointbox"))))))))))))))
                                                  .addChild(new HAnimJoint("Joe_vt1").setName(new SFString("l_sternoclavicular")).setDEF(new SFString("Joe_l_sternoclavicular")).setCenter(new float[] {0.082f ,1.4488f ,-0.0353f }).setSkinCoordIndex(new MFInt32138().getArray()).setSkinCoordWeight(new MFFloat139().getArray())
                                                    .addChild(new HAnimSegment("Joe_l_sternoclavicular").setName(new SFString("l_clavicle")).setDEF(new SFString("Joe_l_clavicle"))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32140().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f141().getArray()))))
                                                      .addChild(new Transform().setTranslation(new float[] {0.082f ,1.4488f ,-0.0353f })
                                                        .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                      .addChild(new HAnimSite("Joe_l_clavicle").setName(new SFString("l_clavicle_pt")).setDEF(new SFString("Joe_l_clavicle_pt")).setTranslation(new float[] {0.03f ,1.46f ,0.035f })
                                                        .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                                    .addChild(new HAnimJoint("Joe_l_sternoclavicular").setName(new SFString("l_acromioclavicular")).setDEF(new SFString("Joe_l_acromioclavicular")).setCenter(new float[] {0.0962f ,1.4269f ,-0.0424f }).setSkinCoordIndex(new MFInt32142().getArray()).setSkinCoordWeight(new MFFloat143().getArray())
                                                      .addChild(new HAnimSegment("Joe_l_acromioclavicular").setName(new SFString("l_scapula")).setDEF(new SFString("Joe_l_scapula"))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32144().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f145().getArray()))))
                                                        .addChild(new Transform().setTranslation(new float[] {0.0962f ,1.4269f ,-0.0424f })
                                                          .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                        .addChild(new Transform().setTranslation(new float[] {0.11f ,1.427f ,-0.1375f })
                                                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                        .addChild(new HAnimSite("Joe_l_scapula").setName(new SFString("l_acromion_pt")).setDEF(new SFString("Joe_l_acromion_pt")).setTranslation(new float[] {0.175f ,1.4825f ,-0.06f })
                                                          .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                        .addChild(new HAnimSite("Joe_l_scapula").setName(new SFString("l_axilla_proximal_pt")).setDEF(new SFString("Joe_l_axilla_proximal_pt")).setTranslation(new float[] {0.17f ,1.38f ,0.007f })
                                                          .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                        .addChild(new HAnimSite("Joe_l_scapula").setName(new SFString("l_axilla_distal_pt")).setDEF(new SFString("Joe_l_axilla_distal_pt")).setTranslation(new float[] {0.16f ,1.38f ,-0.125f })
                                                          .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                                      .addChild(new HAnimJoint("Joe_l_acromioclavicular").setName(new SFString("l_shoulder")).setDEF(new SFString("Joe_l_shoulder")).setCenter(new float[] {0.2f ,1.44f ,-0.04f }).setSkinCoordIndex(new MFInt32146().getArray()).setSkinCoordWeight(new MFFloat147().getArray())
                                                        .addChild(new HAnimSegment("Joe_l_shoulder").setName(new SFString("l_upperarm")).setDEF(new SFString("Joe_l_upperarm"))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32148().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f149().getArray()))))
                                                          .addChild(new Transform().setTranslation(new float[] {0.2f ,1.44f ,-0.04f })
                                                            .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                          .addChild(new Transform().setTranslation(new float[] {0.235f ,1.42f ,-0.0625f })
                                                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                          .addChild(new Transform().setTranslation(new float[] {0.25f ,1.27f ,-0.04f })
                                                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                          .addChild(new Transform().setTranslation(new float[] {0.17f ,1.27f ,-0.04f })
                                                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                          .addChild(new Transform().setTranslation(new float[] {0.2f ,1.27f ,-0.09f })
                                                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                          .addChild(new Transform().setTranslation(new float[] {0.2f ,1.27f ,0.02f })
                                                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                          .addChild(new HAnimSite("Joe_l_upperarm").setName(new SFString("l_humeral_medial_epicondyle_pt")).setDEF(new SFString("Joe_l_humeral_medial_epicondyle_pt")).setTranslation(new float[] {0.165f ,1.1388f ,-0.04f })
                                                            .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                          .addChild(new HAnimSite("Joe_l_upperarm").setName(new SFString("l_radiale_pt")).setDEF(new SFString("Joe_l_radiale_pt")).setTranslation(new float[] {0.23f ,1.133f ,-0.055f })
                                                            .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                          .addChild(new HAnimSite("Joe_l_upperarm").setName(new SFString("l_humeral_lateral_epicondyle_pt")).setDEF(new SFString("Joe_l_humeral_lateral_epicondyle_pt")).setTranslation(new float[] {0.244f ,1.1388f ,-0.04f })
                                                            .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                                        .addChild(new HAnimJoint("Joe_l_shoulder").setName(new SFString("l_elbow")).setDEF(new SFString("Joe_l_elbow")).setCenter(new float[] {0.2f ,1.1388f ,-0.04f }).setSkinCoordIndex(new MFInt32150().getArray()).setSkinCoordWeight(new MFFloat151().getArray())
                                                          .addChild(new HAnimSegment("Joe_l_elbow").setName(new SFString("l_forearm")).setDEF(new SFString("Joe_l_forearm"))
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32152().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f153().getArray()))))
                                                            .addChild(new Transform().setTranslation(new float[] {0.2f ,1.1388f ,-0.04f })
                                                              .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                            .addChild(new Transform().setTranslation(new float[] {0.2f ,1.1388f ,-0.013f })
                                                              .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                            .addChild(new Transform().setTranslation(new float[] {0.225f ,1f ,-0.01f })
                                                              .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                            .addChild(new Transform().setTranslation(new float[] {0.225f ,1f ,-0.07f })
                                                              .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                            .addChild(new Transform().setTranslation(new float[] {0.185f ,1f ,-0.01f })
                                                              .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                            .addChild(new Transform().setTranslation(new float[] {0.185f ,1f ,-0.07f })
                                                              .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                            .addChild(new HAnimSite("Joe_l_forearm").setName(new SFString("l_radial_styloid_pt")).setDEF(new SFString("Joe_l_radial_styloid_pt")).setTranslation(new float[] {0.1901f ,0.8645f ,-0.0415f })
                                                              .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                            .addChild(new HAnimSite("Joe_l_forearm").setName(new SFString("l_olecranon_pt")).setDEF(new SFString("Joe_l_olecranon_pt")).setTranslation(new float[] {0.2f ,1.1388f ,-0.08f })
                                                              .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                                          .addChild(new HAnimJoint("Joe_l_elbow").setName(new SFString("l_radiocarpal")).setDEF(new SFString("Joe_l_radiocarpal")).setCenter(new float[] {0.2f ,0.87f ,-0.04f }).setSkinCoordIndex(new MFInt32154().getArray()).setSkinCoordWeight(new MFFloat155().getArray())
                                                            .addChild(new HAnimSegment("Joe_l_radiocarpal").setName(new SFString("l_carpal")).setDEF(new SFString("Joe_l_carpal"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32156().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f157().getArray()))))
                                                              .addChild(new Transform().setTranslation(new float[] {0.2f ,0.87f ,-0.04f })
                                                                .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                              .addChild(new HAnimSite("Joe_l_carpal").setName(new SFString("l_metacarpal_phalanx_2_pt")).setDEF(new SFString("Joe_l_metacarpal_phalanx_2_pt")).setTranslation(new float[] {0.2009f ,0.8139f ,-0.0237f })
                                                                .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                              .addChild(new HAnimSite("Joe_l_carpal").setName(new SFString("l_ulnar_styloid_pt")).setDEF(new SFString("Joe_l_ulnar_styloid_pt")).setTranslation(new float[] {0.2142f ,0.8529f ,-0.0648f })
                                                                .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                              .addChild(new HAnimSite("Joe_l_carpal").setName(new SFString("l_metacarpal_phalanx_5_pt")).setDEF(new SFString("Joe_l_metacarpal_phalanx_5_pt")).setTranslation(new float[] {0.1929f ,0.786f ,-0.1122f })
                                                                .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                                            .addChild(new HAnimJoint("Joe_l_radiocarpal").setName(new SFString("l_carpometacarpal_1")).setDEF(new SFString("Joe_l_carpometacarpal_1")).setCenter(new float[] {0.1924f ,0.8472f ,-0.0534f }).setSkinCoordIndex(new MFInt32158().getArray()).setSkinCoordWeight(new MFFloat159().getArray())
                                                              .addChild(new HAnimSegment("Joe_l_carpometacarpal_1").setName(new SFString("l_metacarpal_1")).setDEF(new SFString("Joe_l_metacarpal_1"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32160().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f161().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1924f ,0.8472f ,-0.0534f })
                                                                  .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                              .addChild(new HAnimJoint("Joe_l_carpometacarpal_1").setName(new SFString("l_metacarpophalangeal_1")).setDEF(new SFString("Joe_l_metacarpophalangeal_1")).setCenter(new float[] {0.1951f ,0.8226f ,0.0246f }).setSkinCoordIndex(new MFInt32162().getArray()).setSkinCoordWeight(new MFFloat163().getArray())
                                                                .addChild(new HAnimSegment("Joe_l_metacarpophalangeal_1").setName(new SFString("l_carpal_proximal_phalanx_1")).setDEF(new SFString("Joe_l_carpal_proximal_phalanx_1"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32164().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f165().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1951f ,0.8226f ,0.0246f })
                                                                    .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_1").setName(new SFString("l_carpal_interphalangeal_1")).setDEF(new SFString("Joe_l_carpal_interphalangeal_1")).setCenter(new float[] {0.1955f ,0.8159f ,0.0464f }).setSkinCoordIndex(new MFInt32166().getArray()).setSkinCoordWeight(new MFFloat167().getArray())
                                                                  .addChild(new HAnimSegment("Joe_l_carpal_interphalangeal_1").setName(new SFString("l_carpal_distal_phalanx_1")).setDEF(new SFString("Joe_l_carpal_distal_phalanx_1"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32168().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f169().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1955f ,0.8159f ,0.0464f })
                                                                      .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                                    .addChild(new HAnimSite("Joe_l_carpal_distal_phalanx_1").setName(new SFString("l_carpal_distal_phalanx_1_tip")).setDEF(new SFString("Joe_l_carpal_distal_phalanx_1_tip")).setTranslation(new float[] {0.1982f ,0.8061f ,0.0759f })
                                                                      .addChild(new Shape().setUSE(new SFString("sitebox"))))))))
                                                            .addChild(new HAnimJoint("Joe_l_radiocarpal").setName(new SFString("l_carpometacarpal_2")).setDEF(new SFString("Joe_l_carpometacarpal_2")).setCenter(new float[] {0.1983f ,0.8024f ,-0.028f }).setSkinCoordIndex(new MFInt32170().getArray()).setSkinCoordWeight(new MFFloat171().getArray())
                                                              .addChild(new HAnimSegment("Joe_l_carpometacarpal_2").setName(new SFString("l_metacarpal_2")).setDEF(new SFString("Joe_l_metacarpal_2"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32172().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f173().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.8024f ,-0.028f })
                                                                  .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                              .addChild(new HAnimJoint("Joe_l_carpometacarpal_2").setName(new SFString("l_metacarpophalangeal_2")).setDEF(new SFString("Joe_l_metacarpophalangeal_2")).setCenter(new float[] {0.1983f ,0.7815f ,-0.028f }).setSkinCoordIndex(new MFInt32174().getArray()).setSkinCoordWeight(new MFFloat175().getArray())
                                                                .addChild(new HAnimSegment("Joe_l_metacarpophalangeal_2").setName(new SFString("l_carpal_proximal_phalanx_2")).setDEF(new SFString("Joe_l_carpal_proximal_phalanx_2"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32176().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f177().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.7815f ,-0.028f })
                                                                    .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_2").setName(new SFString("l_carpal_proximal_interphalangeal_2")).setDEF(new SFString("Joe_l_carpal_proximal_interphalangeal_2")).setCenter(new float[] {0.2017f ,0.7363f ,-0.0248f }).setSkinCoordIndex(new MFInt32178().getArray()).setSkinCoordWeight(new MFFloat179().getArray())
                                                                  .addChild(new HAnimSegment("Joe_l_carpal_proximal_interphalangeal_2").setName(new SFString("l_carpal_middle_phalanx_2")).setDEF(new SFString("Joe_l_carpal_middle_phalanx_2"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32180().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f181().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.2017f ,0.7363f ,-0.0248f })
                                                                      .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                  .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_2").setName(new SFString("l_carpal_distal_interphalangeal_2")).setDEF(new SFString("Joe_l_carpal_distal_interphalangeal_2")).setCenter(new float[] {0.2028f ,0.7139f ,-0.0236f }).setSkinCoordIndex(new MFInt32182().getArray()).setSkinCoordWeight(new MFFloat183().getArray())
                                                                    .addChild(new HAnimSegment("Joe_l_carpal_distal_interphalangeal_2").setName(new SFString("l_carpal_distal_phalanx_2")).setDEF(new SFString("Joe_l_carpal_distal_phalanx_2"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32184().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f185().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.2028f ,0.7139f ,-0.0236f })
                                                                        .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                                      .addChild(new HAnimSite("Joe_l_carpal_distal_phalanx_2").setName(new SFString("l_carpal_distal_phalanx_2_tip")).setDEF(new SFString("Joe_l_carpal_distal_phalanx_2_tip")).setTranslation(new float[] {0.2089f ,0.6858f ,-0.0245f })
                                                                        .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                                      .addChild(new HAnimSite("Joe_l_carpal_distal_phalanx_2").setName(new SFString("l_dactylion_pt")).setDEF(new SFString("Joe_l_dactylion_pt")).setTranslation(new float[] {0.2056f ,0.6743f ,-0.0482f })
                                                                        .addChild(new Shape().setUSE(new SFString("sitebox")))))))))
                                                            .addChild(new HAnimJoint("Joe_l_radiocarpal").setName(new SFString("l_carpometacarpal_3")).setDEF(new SFString("Joe_l_carpometacarpal_3")).setCenter(new float[] {0.1987f ,0.8029f ,-0.053f }).setSkinCoordIndex(new MFInt32186().getArray()).setSkinCoordWeight(new MFFloat187().getArray())
                                                              .addChild(new HAnimSegment("Joe_l_carpometacarpal_3").setName(new SFString("l_metacarpal_3")).setDEF(new SFString("Joe_l_metacarpal_3"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32188().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f189().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1987f ,0.8029f ,-0.053f })
                                                                  .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                              .addChild(new HAnimJoint("Joe_l_carpometacarpal_3").setName(new SFString("l_metacarpophalangeal_3")).setDEF(new SFString("Joe_l_metacarpophalangeal_3")).setCenter(new float[] {0.1987f ,0.7818f ,-0.053f }).setSkinCoordIndex(new MFInt32190().getArray()).setSkinCoordWeight(new MFFloat191().getArray())
                                                                .addChild(new HAnimSegment("Joe_l_metacarpophalangeal_3").setName(new SFString("l_carpal_proximal_phalanx_3")).setDEF(new SFString("Joe_l_carpal_proximal_phalanx_3"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32192().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f193().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1987f ,0.7818f ,-0.053f })
                                                                    .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_3").setName(new SFString("l_carpal_proximal_interphalangeal_3")).setDEF(new SFString("Joe_l_carpal_proximal_interphalangeal_3")).setCenter(new float[] {0.2013f ,0.7273f ,-0.0503f }).setSkinCoordIndex(new MFInt32194().getArray()).setSkinCoordWeight(new MFFloat195().getArray())
                                                                  .addChild(new HAnimSegment("Joe_l_carpal_proximal_interphalangeal_3").setName(new SFString("l_carpal_middle_phalanx_3")).setDEF(new SFString("Joe_l_carpal_middle_phalanx_3"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32196().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f197().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.2013f ,0.7273f ,-0.0503f })
                                                                      .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                  .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_3").setName(new SFString("l_carpal_distal_interphalangeal_3")).setDEF(new SFString("Joe_l_carpal_distal_interphalangeal_3")).setCenter(new float[] {0.2026f ,0.7011f ,-0.0494f }).setSkinCoordIndex(new MFInt32198().getArray()).setSkinCoordWeight(new MFFloat199().getArray())
                                                                    .addChild(new HAnimSegment("Joe_l_carpal_distal_interphalangeal_3").setName(new SFString("l_carpal_distal_phalanx_3")).setDEF(new SFString("Joe_l_carpal_distal_phalanx_3"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32200().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f201().getArray()))))
                                                                      .addChild(new HAnimSite("Joe_l_carpal_distal_phalanx_3").setName(new SFString("l_carpal_distal_phalanx_3_tip")).setDEF(new SFString("Joe_l_carpal_distal_phalanx_3_tip")).setTranslation(new float[] {0.208f ,0.6731f ,-0.0491f })
                                                                        .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.2026f ,0.7011f ,-0.0494f })
                                                                        .addChild(new Shape().setUSE(new SFString("jointbox")))))))))
                                                            .addChild(new HAnimJoint("Joe_l_radiocarpal").setName(new SFString("l_carpometacarpal_4")).setDEF(new SFString("Joe_l_carpometacarpal_4")).setCenter(new float[] {0.1956f ,0.8019f ,-0.0794f }).setSkinCoordIndex(new MFInt32202().getArray()).setSkinCoordWeight(new MFFloat203().getArray())
                                                              .addChild(new HAnimSegment("Joe_l_carpometacarpal_4").setName(new SFString("l_metacarpal_4")).setDEF(new SFString("Joe_l_metacarpal_4"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32204().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f205().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1956f ,0.8019f ,-0.0794f })
                                                                  .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                              .addChild(new HAnimJoint("Joe_l_carpometacarpal_4").setName(new SFString("l_metacarpophalangeal_4")).setDEF(new SFString("Joe_l_metacarpophalangeal_4")).setCenter(new float[] {0.1956f ,0.7815f ,-0.0794f }).setSkinCoordIndex(new MFInt32206().getArray()).setSkinCoordWeight(new MFFloat207().getArray())
                                                                .addChild(new HAnimSegment("Joe_l_metacarpophalangeal_4").setName(new SFString("l_carpal_proximal_phalanx_4")).setDEF(new SFString("Joe_l_carpal_proximal_phalanx_4"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32208().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f209().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1956f ,0.7815f ,-0.0794f })
                                                                    .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_4").setName(new SFString("l_carpal_proximal_interphalangeal_4")).setDEF(new SFString("Joe_l_carpal_proximal_interphalangeal_4")).setCenter(new float[] {0.1973f ,0.7287f ,-0.0777f }).setSkinCoordIndex(new MFInt32210().getArray()).setSkinCoordWeight(new MFFloat211().getArray())
                                                                  .addChild(new HAnimSegment("Joe_l_carpal_proximal_interphalangeal_4").setName(new SFString("l_carpal_middle_phalanx_4")).setDEF(new SFString("Joe_l_carpal_middle_phalanx_4"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32212().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f213().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1973f ,0.7287f ,-0.0777f })
                                                                      .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                  .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_4").setName(new SFString("l_carpal_distal_interphalangeal_4")).setDEF(new SFString("Joe_l_carpal_distal_interphalangeal_4")).setCenter(new float[] {0.1983f ,0.7045f ,-0.0767f }).setSkinCoordIndex(new MFInt32214().getArray()).setSkinCoordWeight(new MFFloat215().getArray())
                                                                    .addChild(new HAnimSegment("Joe_l_carpal_distal_interphalangeal_4").setName(new SFString("l_carpal_distal_phalanx_4")).setDEF(new SFString("Joe_l_carpal_distal_phalanx_4"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32216().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f217().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.7045f ,-0.0767f })
                                                                        .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                                      .addChild(new HAnimSite("Joe_l_carpal_distal_phalanx_4").setName(new SFString("l_carpal_distal_phalanx_4_tip")).setDEF(new SFString("Joe_l_carpal_distal_phalanx_4_tip")).setTranslation(new float[] {0.2035f ,0.675f ,-0.0756f })
                                                                        .addChild(new Shape().setUSE(new SFString("sitebox")))))))))
                                                            .addChild(new HAnimJoint("Joe_l_radiocarpal").setName(new SFString("l_carpometacarpal_5")).setDEF(new SFString("Joe_l_carpometacarpal_5")).setCenter(new float[] {0.1925f ,0.8066f ,-0.1036f }).setSkinCoordIndex(new MFInt32218().getArray()).setSkinCoordWeight(new MFFloat219().getArray())
                                                              .addChild(new HAnimSegment("Joe_l_carpometacarpal_5").setName(new SFString("l_metacarpal_5")).setDEF(new SFString("Joe_l_metacarpal_5"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32220().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f221().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1925f ,0.8066f ,-0.1036f })
                                                                  .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                              .addChild(new HAnimJoint("Joe_l_carpometacarpal_5").setName(new SFString("l_metacarpophalangeal_5")).setDEF(new SFString("Joe_l_metacarpophalangeal_5")).setCenter(new float[] {0.1925f ,0.7866f ,-0.1036f }).setSkinCoordIndex(new MFInt32222().getArray()).setSkinCoordWeight(new MFFloat223().getArray())
                                                                .addChild(new HAnimSegment("Joe_l_metacarpophalangeal_5").setName(new SFString("l_carpal_proximal_phalanx_5")).setDEF(new SFString("Joe_l_carpal_proximal_phalanx_5"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32224().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f225().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1925f ,0.7866f ,-0.1036f })
                                                                    .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_5").setName(new SFString("l_carpal_proximal_interphalangeal_5")).setDEF(new SFString("Joe_l_carpal_proximal_interphalangeal_5")).setCenter(new float[] {0.1938f ,0.7452f ,-0.1024f }).setSkinCoordIndex(new MFInt32226().getArray()).setSkinCoordWeight(new MFFloat227().getArray())
                                                                  .addChild(new HAnimSegment("Joe_l_carpal_proximal_interphalangeal_5").setName(new SFString("l_carpal_middle_phalanx_5")).setDEF(new SFString("Joe_l_carpal_middle_phalanx_5"))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1938f ,0.7452f ,-0.1024f })
                                                                      .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32228().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f229().getArray())))))
                                                                  .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_5").setName(new SFString("l_carpal_distal_interphalangeal_5")).setDEF(new SFString("Joe_l_carpal_distal_interphalangeal_5")).setCenter(new float[] {0.1948f ,0.7277f ,-0.1017f }).setSkinCoordIndex(new MFInt32230().getArray()).setSkinCoordWeight(new MFFloat231().getArray())
                                                                    .addChild(new HAnimSegment("Joe_l_carpal_distal_interphalangeal_5").setName(new SFString("l_carpal_distal_phalanx_5")).setDEF(new SFString("Joe_l_carpal_distal_phalanx_5"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32232().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f233().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1948f ,0.7277f ,-0.1017f })
                                                                        .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                                      .addChild(new HAnimSite("Joe_l_carpal_distal_phalanx_5").setName(new SFString("l_carpal_distal_phalanx_5_tip")).setDEF(new SFString("Joe_l_carpal_distal_phalanx_5_tip")).setTranslation(new float[] {0.2014f ,0.7009f ,-0.1012f })
                                                                        .addChild(new Shape().setUSE(new SFString("sitebox"))))))))))))))
                                                  .addChild(new HAnimJoint("Joe_vt1").setName(new SFString("r_sternoclavicular")).setDEF(new SFString("Joe_r_sternoclavicular")).setCenter(new float[] {-0.03f ,1.46f ,0f }).setSkinCoordIndex(new MFInt32234().getArray()).setSkinCoordWeight(new MFFloat235().getArray())
                                                    .addChild(new HAnimSegment("Joe_r_sternoclavicular").setName(new SFString("r_clavicle")).setDEF(new SFString("Joe_r_clavicle"))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32236().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f237().getArray()))))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.03f ,1.46f ,0.02f })
                                                        .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                      .addChild(new HAnimSite("Joe_r_clavicle").setName(new SFString("r_clavicle_pt")).setDEF(new SFString("Joe_r_clavicle_pt")).setTranslation(new float[] {-0.03f ,1.46f ,0.035f })
                                                        .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                                    .addChild(new HAnimJoint("Joe_r_sternoclavicular").setName(new SFString("r_acromioclavicular")).setDEF(new SFString("Joe_r_acromioclavicular")).setCenter(new float[] {-0.09f ,1.41f ,-0.11f }).setSkinCoordIndex(new MFInt32238().getArray()).setSkinCoordWeight(new MFFloat239().getArray())
                                                      .addChild(new HAnimSegment("Joe_r_acromioclavicular").setName(new SFString("r_scapula")).setDEF(new SFString("Joe_r_scapula"))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32240().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f241().getArray()))))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.09f ,1.41f ,-0.09f })
                                                          .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.11f ,1.427f ,-0.1375f })
                                                          .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                        .addChild(new HAnimSite("Joe_r_scapula").setName(new SFString("r_acromion_pt")).setDEF(new SFString("Joe_r_acromion_pt")).setTranslation(new float[] {-0.178f ,1.4825f ,-0.0625f })
                                                          .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                        .addChild(new HAnimSite("Joe_r_scapula").setName(new SFString("r_axilla_proximal_pt")).setDEF(new SFString("Joe_r_axilla_proximal_pt")).setTranslation(new float[] {-0.17f ,1.38f ,0.007f })
                                                          .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                        .addChild(new HAnimSite("Joe_r_scapula").setName(new SFString("r_axilla_distal_pt")).setDEF(new SFString("Joe_r_axilla_distal_pt")).setTranslation(new float[] {-0.16f ,1.38f ,-0.127f })
                                                          .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                                      .addChild(new HAnimJoint("Joe_r_acromioclavicular").setName(new SFString("r_shoulder")).setDEF(new SFString("Joe_r_shoulder")).setCenter(new float[] {-0.2f ,1.44f ,-0.04f }).setSkinCoordIndex(new MFInt32242().getArray()).setSkinCoordWeight(new MFFloat243().getArray())
                                                        .addChild(new HAnimSegment("Joe_r_shoulder").setName(new SFString("r_upperarm")).setDEF(new SFString("Joe_r_upperarm"))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.2f ,1.44f ,-0.04f })
                                                            .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32244().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f245().getArray()))))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.178f ,1.4825f ,-0.0625f })
                                                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.17f ,1.38f ,0.007f })
                                                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.16f ,1.38f ,-0.127f })
                                                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.235f ,1.42f ,-0.0625f })
                                                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.23f ,1.235f ,-0.04f })
                                                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.16f ,1.23f ,-0.04f })
                                                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.2f ,1.23f ,-0.105f })
                                                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.2f ,1.235f ,0.02f })
                                                            .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                          .addChild(new HAnimSite("Joe_r_upperarm").setName(new SFString("r_humeral_medial_epicondyle_pt")).setDEF(new SFString("Joe_r_humeral_medial_epicondyle_pt")).setTranslation(new float[] {-0.165f ,1.1388f ,-0.04f })
                                                            .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                          .addChild(new HAnimSite("Joe_r_upperarm").setName(new SFString("r_radiale_pt")).setDEF(new SFString("Joe_r_radiale_pt")).setTranslation(new float[] {-0.23f ,1.133f ,-0.055f })
                                                            .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                          .addChild(new HAnimSite("Joe_r_upperarm").setName(new SFString("r_humeral_lateral_epicondyle_pt")).setDEF(new SFString("Joe_r_humeral_lateral_epicondyle_pt")).setTranslation(new float[] {-0.244f ,1.1388f ,-0.04f })
                                                            .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                                        .addChild(new HAnimJoint("Joe_r_shoulder").setName(new SFString("r_elbow")).setDEF(new SFString("Joe_r_elbow")).setCenter(new float[] {-0.2f ,1.1388f ,-0.04f }).setSkinCoordIndex(new MFInt32246().getArray()).setSkinCoordWeight(new MFFloat247().getArray())
                                                          .addChild(new HAnimSegment("Joe_r_elbow").setName(new SFString("r_forearm")).setDEF(new SFString("Joe_r_forearm"))
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32248().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f249().getArray()))))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.2f ,1.1388f ,-0.04f })
                                                              .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.2f ,1.1388f ,0.013f })
                                                              .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.225f ,1f ,-0.01f })
                                                              .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.225f ,1f ,-0.07f })
                                                              .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.185f ,1f ,-0.01f })
                                                              .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.185f ,1f ,-0.07f })
                                                              .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                            .addChild(new HAnimSite("Joe_r_forearm").setName(new SFString("r_radial_styloid_pt")).setDEF(new SFString("Joe_r_radial_styloid_pt")).setTranslation(new float[] {-0.2f ,0.9f ,-0.015f })
                                                              .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                            .addChild(new HAnimSite("Joe_r_forearm").setName(new SFString("r_olecranon_pt")).setDEF(new SFString("Joe_r_olecranon_pt")).setTranslation(new float[] {-0.2f ,1.1388f ,-0.08f })
                                                              .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                                          .addChild(new HAnimJoint("Joe_r_elbow").setName(new SFString("r_radiocarpal")).setDEF(new SFString("Joe_r_radiocarpal")).setCenter(new float[] {-0.2f ,0.89f ,-0.04f }).setSkinCoordIndex(new MFInt32250().getArray()).setSkinCoordWeight(new MFFloat251().getArray())
                                                            .addChild(new HAnimSegment("Joe_r_radiocarpal").setName(new SFString("r_carpal")).setDEF(new SFString("Joe_r_carpal"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32252().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f253().getArray()))))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.89f ,-0.04f })
                                                                .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                              .addChild(new HAnimSite("Joe_r_carpal").setName(new SFString("r_ulnar_styloid_pt")).setDEF(new SFString("Joe_r_ulnar_styloid_pt")).setTranslation(new float[] {-0.2f ,0.9f ,-0.085f })
                                                                .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                                            .addChild(new HAnimJoint("Joe_r_radiocarpal").setName(new SFString("r_carpometacarpal_1")).setDEF(new SFString("Joe_r_carpometacarpal_1")).setCenter(new float[] {-0.2f ,0.85f ,0f }).setSkinCoordIndex(new MFInt32254().getArray()).setSkinCoordWeight(new MFFloat255().getArray())
                                                              .addChild(new HAnimSegment("Joe_r_carpometacarpal_1").setName(new SFString("r_metacarpal_1")).setDEF(new SFString("Joe_r_metacarpal_1"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32256().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f257().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.85f ,0f })
                                                                  .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                              .addChild(new HAnimJoint("Joe_r_carpometacarpal_1").setName(new SFString("r_metacarpophalangeal_1")).setDEF(new SFString("Joe_r_metacarpophalangeal_1")).setCenter(new float[] {-0.2f ,0.82f ,0.03f }).setSkinCoordIndex(new MFInt32258().getArray()).setSkinCoordWeight(new MFFloat259().getArray())
                                                                .addChild(new HAnimSegment("Joe_r_metacarpophalangeal_1").setName(new SFString("r_carpal_proximal_phalanx_1")).setDEF(new SFString("Joe_r_carpal_proximal_phalanx_1"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32260().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f261().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.82f ,0.03f })
                                                                    .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_1").setName(new SFString("r_carpal_interphalangeal_1")).setDEF(new SFString("Joe_r_carpal_interphalangeal_1")).setCenter(new float[] {-0.2f ,0.8f ,0.05f }).setSkinCoordIndex(new MFInt32262().getArray()).setSkinCoordWeight(new MFFloat263().getArray())
                                                                  .addChild(new HAnimSegment("Joe_r_carpal_interphalangeal_1").setName(new SFString("r_carpal_distal_phalanx_1")).setDEF(new SFString("Joe_r_carpal_distal_phalanx_1"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32264().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f265().getArray()))))
                                                                    .addChild(new Transform().setDEF(new SFString("Thumbnail")).setTranslation(new float[] {-0.2f ,0.785f ,0.075f })
                                                                      .addChild(new Shape().setUSE(new SFString("skinsphere"))))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.8f ,0.05f })
                                                                      .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                                    .addChild(new HAnimSite("Joe_r_carpal_distal_phalanx_1").setName(new SFString("r_carpal_distal_phalanx_1_tip")).setDEF(new SFString("Joe_r_carpal_distal_phalanx_1_tip")).setTranslation(new float[] {-0.2f ,0.78f ,0.07f })
                                                                      .addChild(new Shape().setUSE(new SFString("sitebox"))))))))
                                                            .addChild(new HAnimJoint("Joe_r_radiocarpal").setName(new SFString("r_carpometacarpal_2")).setDEF(new SFString("Joe_r_carpometacarpal_2")).setCenter(new float[] {-0.2f ,0.84f ,-0.015f }).setSkinCoordIndex(new MFInt32266().getArray()).setSkinCoordWeight(new MFFloat267().getArray())
                                                              .addChild(new HAnimSegment("Joe_r_carpometacarpal_2").setName(new SFString("r_metacarpal_2")).setDEF(new SFString("Joe_r_metacarpal_2"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32268().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f269().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.84f ,-0.015f })
                                                                  .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                                .addChild(new HAnimSite("Joe_r_metacarpal_2").setName(new SFString("r_metacarpal_phalanx_2_pt")).setDEF(new SFString("Joe_r_metacarpal_phalanx_2_pt")).setTranslation(new float[] {-0.2f ,0.793f ,-0.005f })
                                                                  .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                                              .addChild(new HAnimJoint("Joe_r_carpometacarpal_2").setName(new SFString("r_metacarpophalangeal_2")).setDEF(new SFString("Joe_r_metacarpophalangeal_2")).setCenter(new float[] {-0.2f ,0.793f ,-0.015f }).setSkinCoordIndex(new MFInt32270().getArray()).setSkinCoordWeight(new MFFloat271().getArray())
                                                                .addChild(new HAnimSegment("Joe_r_metacarpophalangeal_2").setName(new SFString("r_carpal_proximal_phalanx_2")).setDEF(new SFString("Joe_r_carpal_proximal_phalanx_2"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32272().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f273().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.793f ,-0.015f })
                                                                    .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_2").setName(new SFString("r_carpal_proximal_interphalangeal_2")).setDEF(new SFString("Joe_r_carpal_proximal_interphalangeal_2")).setCenter(new float[] {-0.2f ,0.745f ,-0.015f }).setSkinCoordIndex(new MFInt32274().getArray()).setSkinCoordWeight(new MFFloat275().getArray())
                                                                  .addChild(new HAnimSegment("Joe_r_carpal_proximal_interphalangeal_2").setName(new SFString("r_carpal_middle_phalanx_2")).setDEF(new SFString("Joe_r_carpal_middle_phalanx_2"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32276().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f277().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.745f ,-0.015f })
                                                                      .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                  .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_2").setName(new SFString("r_carpal_distal_interphalangeal_2")).setDEF(new SFString("Joe_r_carpal_distal_interphalangeal_2")).setCenter(new float[] {-0.2f ,0.72f ,-0.015f }).setSkinCoordIndex(new MFInt32278().getArray()).setSkinCoordWeight(new MFFloat279().getArray())
                                                                    .addChild(new HAnimSegment("Joe_r_carpal_distal_interphalangeal_2").setName(new SFString("r_carpal_distal_phalanx_2")).setDEF(new SFString("Joe_r_carpal_distal_phalanx_2"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32280().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f281().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.72f ,-0.015f })
                                                                        .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                                      .addChild(new HAnimSite("Joe_r_carpal_distal_phalanx_2").setName(new SFString("r_carpal_distal_phalanx_2_tip")).setDEF(new SFString("Joe_r_carpal_distal_phalanx_2_tip")).setTranslation(new float[] {-0.2f ,0.695f ,-0.015f })
                                                                        .addChild(new Shape().setUSE(new SFString("sitebox")))))))))
                                                            .addChild(new HAnimJoint("Joe_r_radiocarpal").setName(new SFString("r_carpometacarpal_3")).setDEF(new SFString("Joe_r_carpometacarpal_3")).setCenter(new float[] {-0.2f ,0.835f ,-0.04f }).setSkinCoordIndex(new MFInt32282().getArray()).setSkinCoordWeight(new MFFloat283().getArray())
                                                              .addChild(new HAnimSegment("Joe_r_carpometacarpal_3").setName(new SFString("r_metacarpal_3")).setDEF(new SFString("Joe_r_metacarpal_3"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32284().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f285().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.835f ,-0.04f })
                                                                  .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                              .addChild(new HAnimJoint("Joe_r_carpometacarpal_3").setName(new SFString("r_metacarpophalangeal_3")).setDEF(new SFString("Joe_r_metacarpophalangeal_3")).setCenter(new float[] {-0.2f ,0.788f ,-0.04f }).setSkinCoordIndex(new MFInt32286().getArray()).setSkinCoordWeight(new MFFloat287().getArray())
                                                                .addChild(new HAnimSegment("Joe_r_metacarpophalangeal_3").setName(new SFString("r_carpal_proximal_phalanx_3")).setDEF(new SFString("Joe_r_carpal_proximal_phalanx_3"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32288().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f289().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.788f ,-0.04f })
                                                                    .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_3").setName(new SFString("r_carpal_proximal_interphalangeal_3")).setDEF(new SFString("Joe_r_carpal_proximal_interphalangeal_3")).setCenter(new float[] {-0.2f ,0.74f ,-0.04f }).setSkinCoordIndex(new MFInt32290().getArray()).setSkinCoordWeight(new MFFloat291().getArray())
                                                                  .addChild(new HAnimSegment("Joe_r_carpal_proximal_interphalangeal_3").setName(new SFString("r_carpal_middle_phalanx_3")).setDEF(new SFString("Joe_r_carpal_middle_phalanx_3"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32292().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f293().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.74f ,-0.04f })
                                                                      .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                  .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_3").setName(new SFString("r_carpal_distal_interphalangeal_3")).setDEF(new SFString("Joe_r_carpal_distal_interphalangeal_3")).setCenter(new float[] {-0.2f ,0.7142f ,-0.04f }).setSkinCoordIndex(new MFInt32294().getArray()).setSkinCoordWeight(new MFFloat295().getArray())
                                                                    .addChild(new HAnimSegment("Joe_r_carpal_distal_interphalangeal_3").setName(new SFString("r_carpal_distal_phalanx_3")).setDEF(new SFString("Joe_r_carpal_distal_phalanx_3"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32296().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f297().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.7142f ,-0.04f })
                                                                        .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                                      .addChild(new HAnimSite("Joe_r_carpal_distal_phalanx_3").setName(new SFString("r_dactylion_pt")).setDEF(new SFString("Joe_r_dactylion_pt")).setTranslation(new float[] {-0.2f ,0.68f ,-0.04f })
                                                                        .addChild(new Shape().setUSE(new SFString("sitebox"))))
                                                                      .addChild(new HAnimSite("Joe_r_carpal_distal_phalanx_3").setName(new SFString("r_carpal_distal_phalanx_3_tip")).setDEF(new SFString("Joe_r_carpal_distal_phalanx_3_tip")).setTranslation(new float[] {-0.2f ,0.68f ,-0.04f })
                                                                        .addChild(new Shape().setUSE(new SFString("sitebox")))))))))
                                                            .addChild(new HAnimJoint("Joe_r_radiocarpal").setName(new SFString("r_carpometacarpal_4")).setDEF(new SFString("Joe_r_carpometacarpal_4")).setCenter(new float[] {-0.2f ,0.835f ,-0.065f }).setSkinCoordIndex(new MFInt32298().getArray()).setSkinCoordWeight(new MFFloat299().getArray())
                                                              .addChild(new HAnimSegment("Joe_r_carpometacarpal_4").setName(new SFString("r_metacarpal_4")).setDEF(new SFString("Joe_r_metacarpal_4"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32300().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f301().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.835f ,-0.065f })
                                                                  .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                              .addChild(new HAnimJoint("Joe_r_carpometacarpal_4").setName(new SFString("r_metacarpophalangeal_4")).setDEF(new SFString("Joe_r_metacarpophalangeal_4")).setCenter(new float[] {-0.2f ,0.793f ,-0.065f }).setSkinCoordIndex(new MFInt32302().getArray()).setSkinCoordWeight(new MFFloat303().getArray())
                                                                .addChild(new HAnimSegment("Joe_r_metacarpophalangeal_4").setName(new SFString("r_carpal_proximal_phalanx_4")).setDEF(new SFString("Joe_r_carpal_proximal_phalanx_4"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32304().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f305().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.793f ,-0.065f })
                                                                    .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_4").setName(new SFString("r_carpal_proximal_interphalangeal_4")).setDEF(new SFString("Joe_r_carpal_proximal_interphalangeal_4")).setCenter(new float[] {-0.2f ,0.74f ,-0.065f }).setSkinCoordIndex(new MFInt32306().getArray()).setSkinCoordWeight(new MFFloat307().getArray())
                                                                  .addChild(new HAnimSegment("Joe_r_carpal_proximal_interphalangeal_4").setName(new SFString("r_carpal_middle_phalanx_4")).setDEF(new SFString("Joe_r_carpal_middle_phalanx_4"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32308().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f309().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.74f ,-0.065f })
                                                                      .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                  .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_4").setName(new SFString("r_carpal_distal_interphalangeal_4")).setDEF(new SFString("Joe_r_carpal_distal_interphalangeal_4")).setCenter(new float[] {-0.2f ,0.7177f ,-0.065f }).setSkinCoordIndex(new MFInt32310().getArray()).setSkinCoordWeight(new MFFloat311().getArray())
                                                                    .addChild(new HAnimSegment("Joe_r_carpal_distal_interphalangeal_4").setName(new SFString("r_carpal_distal_phalanx_4")).setDEF(new SFString("Joe_r_carpal_distal_phalanx_4"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32312().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f313().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.7177f ,-0.065f })
                                                                        .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                                      .addChild(new HAnimSite("Joe_r_carpal_distal_phalanx_4").setName(new SFString("r_carpal_distal_phalanx_4_tip")).setDEF(new SFString("Joe_r_carpal_distal_phalanx_4_tip")).setTranslation(new float[] {-0.2f ,0.695f ,-0.065f })
                                                                        .addChild(new Shape().setUSE(new SFString("sitebox")))))))))
                                                            .addChild(new HAnimJoint("Joe_r_radiocarpal").setName(new SFString("r_carpometacarpal_5")).setDEF(new SFString("Joe_r_carpometacarpal_5")).setCenter(new float[] {-0.2f ,0.84f ,-0.085f }).setSkinCoordIndex(new MFInt32314().getArray()).setSkinCoordWeight(new MFFloat315().getArray())
                                                              .addChild(new HAnimSegment("Joe_r_carpometacarpal_5").setName(new SFString("r_metacarpal_5")).setDEF(new SFString("Joe_r_metacarpal_5"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32316().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f317().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.84f ,-0.085f })
                                                                  .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                                .addChild(new HAnimSite("Joe_r_metacarpal_5").setName(new SFString("r_metacarpal_phalanx_5_pt")).setDEF(new SFString("Joe_r_metacarpal_phalanx_5_pt")).setTranslation(new float[] {-0.2f ,0.79f ,-0.095f })
                                                                  .addChild(new Shape().setUSE(new SFString("sitebox")))))
                                                              .addChild(new HAnimJoint("Joe_r_carpometacarpal_5").setName(new SFString("r_metacarpophalangeal_5")).setDEF(new SFString("Joe_r_metacarpophalangeal_5")).setCenter(new float[] {-0.2f ,0.79f ,-0.085f }).setSkinCoordIndex(new MFInt32318().getArray()).setSkinCoordWeight(new MFFloat319().getArray())
                                                                .addChild(new HAnimSegment("Joe_r_metacarpophalangeal_5").setName(new SFString("r_carpal_proximal_phalanx_5")).setDEF(new SFString("Joe_r_carpal_proximal_phalanx_5"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32320().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f321().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.79f ,-0.085f })
                                                                    .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_5").setName(new SFString("r_carpal_proximal_interphalangeal_5")).setDEF(new SFString("Joe_r_carpal_proximal_interphalangeal_5")).setCenter(new float[] {-0.2f ,0.755f ,-0.085f }).setSkinCoordIndex(new MFInt32322().getArray()).setSkinCoordWeight(new MFFloat323().getArray())
                                                                  .addChild(new HAnimSegment("Joe_r_carpal_proximal_interphalangeal_5").setName(new SFString("r_carpal_middle_phalanx_5")).setDEF(new SFString("Joe_r_carpal_middle_phalanx_5"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32324().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f325().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.755f ,-0.085f })
                                                                      .addChild(new Shape().setUSE(new SFString("jointbox")))))
                                                                  .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_5").setName(new SFString("r_carpal_distal_interphalangeal_5")).setDEF(new SFString("Joe_r_carpal_distal_interphalangeal_5")).setCenter(new float[] {-0.2f ,0.735f ,-0.09f }).setSkinCoordIndex(new MFInt32326().getArray()).setSkinCoordWeight(new MFFloat327().getArray())
                                                                    .addChild(new HAnimSegment("Joe_r_carpal_distal_interphalangeal_5").setName(new SFString("r_carpal_distal_phalanx_5")).setDEF(new SFString("Joe_r_carpal_distal_phalanx_5"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE(new SFString("SegmentLine")))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32328().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f329().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.735f ,-0.085f })
                                                                        .addChild(new Shape().setUSE(new SFString("jointbox"))))
                                                                      .addChild(new HAnimSite("Joe_r_carpal_distal_phalanx_5").setName(new SFString("r_carpal_distal_phalanx_5_tip")).setDEF(new SFString("Joe_r_carpal_distal_phalanx_5_tip")).setTranslation(new float[] {-0.2f ,0.72f ,-0.085f })
                                                                        .addChild(new Shape().setUSE(new SFString("sitebox"))))))))))))))))))))))))))))))))
              .addSkin(new Shape().setDEF(new SFString("SkinShape"))
                .setAppearance(new Appearance().setDEF(new SFString("SkinAppearance"))
                  .setMaterial(new Material().setDEF(new SFString("SkinMaterial")).setAmbientIntensity(0.6f ).setDiffuseColor(new float[] {1f ,1f ,1f }).setShininess(0.6f ).setTransparency(0.2f ))
                  .setTexture(new ImageTexture().setDEF(new SFString("zBlueSpiralBkg2")).setDescription(new SFString("Blue Spiral Pattern")).setUrl(new MFString330().getArray())))
                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32331().getArray().append(new MFInt32332().getArray()).append(new MFInt32333().getArray()).append(new MFInt32334().getArray())).setCreaseAngle(3.1f )
                  .setColor(new Color().setColor(new MFColor335().getArray().append(new MFColor336().getArray()).append(new MFColor337().getArray())))
                  .setCoord(new Coordinate().setDEF(new SFString("TheSkinCoord")).setPoint(new MFVec3f338().getArray().append(new MFVec3f339().getArray())))))
              .setSkinCoord(new Coordinate().setUSE(new SFString("TheSkinCoord")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_humanoid_root")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_sacroiliac")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vl5")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vl4")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vl3")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vl2")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vl1")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vt12")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vt11")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vt10")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vt9")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vt8")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vt7")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vt6")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vt5")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vt4")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vt3")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vt2")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vt1")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vc7")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vc6")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vc5")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vc4")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vc3")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vc2")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_vc1")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_skullbase")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_acromioclavicular")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_acromioclavicular")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_carpal_distal_interphalangeal_2")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_carpal_distal_interphalangeal_2")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_carpal_distal_interphalangeal_3")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_carpal_distal_interphalangeal_3")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_carpal_distal_interphalangeal_4")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_carpal_distal_interphalangeal_4")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_carpal_distal_interphalangeal_5")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_carpal_distal_interphalangeal_5")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_carpal_interphalangeal_1")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_carpal_interphalangeal_1")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_carpal_proximal_interphalangeal_2")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_carpal_proximal_interphalangeal_2")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_carpal_proximal_interphalangeal_3")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_carpal_proximal_interphalangeal_3")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_carpal_proximal_interphalangeal_4")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_carpal_proximal_interphalangeal_4")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_carpal_proximal_interphalangeal_5")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_carpal_proximal_interphalangeal_5")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_carpometacarpal_1")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_carpometacarpal_1")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_carpometacarpal_2")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_carpometacarpal_2")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_carpometacarpal_3")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_carpometacarpal_3")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_carpometacarpal_4")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_carpometacarpal_4")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_carpometacarpal_5")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_carpometacarpal_5")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_elbow")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_elbow")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_eyeball_joint")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_eyeball_joint")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_hip")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_hip")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_knee")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_knee")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_metacarpophalangeal_1")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_metacarpophalangeal_1")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_metacarpophalangeal_2")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_metacarpophalangeal_2")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_metacarpophalangeal_3")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_metacarpophalangeal_3")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_metacarpophalangeal_4")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_metacarpophalangeal_4")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_metacarpophalangeal_5")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_metacarpophalangeal_5")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_metatarsal")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_metatarsophalangeal_2")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_metatarsophalangeal_2")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_radiocarpal")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_radiocarpal")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_shoulder")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_shoulder")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_sternoclavicular")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_sternoclavicular")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_talocrural")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_talocrural")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_tarsal_distal_interphalangeal_2")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_l_tarsometatarsal_2")))
              .addJoints(new HAnimJoint("Joe_Human").setUSE(new SFString("Joe_r_tarsometatarsal_2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_c1")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_c2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_c3")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_c4")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_c5")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_c6")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_c7")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l1")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l3")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l4")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l5")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_pelvis")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_sacrum")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_skull")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_t1")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_t10")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_t11")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_t12")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_t2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_t3")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_t4")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_t5")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_t6")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_t7")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_t8")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_t9")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_toPelvis")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_calf")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_calf")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_carpal")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_carpal")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_carpal_distal_phalanx_1")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_carpal_distal_phalanx_1")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_carpal_distal_phalanx_2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_carpal_distal_phalanx_2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_carpal_distal_phalanx_3")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_carpal_distal_phalanx_3")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_carpal_distal_phalanx_4")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_carpal_distal_phalanx_4")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_carpal_distal_phalanx_5")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_carpal_distal_phalanx_5")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_carpal_middle_phalanx_2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_carpal_middle_phalanx_2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_carpal_middle_phalanx_3")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_carpal_middle_phalanx_3")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_carpal_middle_phalanx_4")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_carpal_middle_phalanx_4")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_carpal_middle_phalanx_5")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_carpal_middle_phalanx_5")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_carpal_proximal_phalanx_1")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_carpal_proximal_phalanx_1")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_carpal_proximal_phalanx_2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_carpal_proximal_phalanx_2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_carpal_proximal_phalanx_3")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_carpal_proximal_phalanx_3")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_carpal_proximal_phalanx_4")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_carpal_proximal_phalanx_4")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_carpal_proximal_phalanx_5")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_carpal_proximal_phalanx_5")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_clavicle")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_clavicle")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_eyeball")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_eyeball")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_forearm")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_forearm")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_metacarpal_1")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_metacarpal_1")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_metacarpal_2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_metacarpal_2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_metacarpal_3")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_metacarpal_3")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_metacarpal_4")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_metacarpal_4")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_metacarpal_5")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_metacarpal_5")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_metatarsal_2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_metatarsal_2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_scapula")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_scapula")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_talus")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_talus")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_tarsal_distal_phalanx_2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_tarsal_distal_phalanx_2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_tarsal_proximal_phalanx_2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_tarsal_proximal_phalanx_2")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_thigh")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_thigh")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_l_upperarm")))
              .addSegments(new HAnimSegment("Joe_Human").setUSE(new SFString("Joe_r_upperarm")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_cervicale_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_crotch_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_floormarker_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_navel_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_nuchale_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_rib10_midspine_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_sellion_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_skull_vertex_tip")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_substernale_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_supramenton_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_suprasternale_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_waist_preferred_posterior_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_acromion_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_acromion_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_asis_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_asis_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_axilla_distal_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_axilla_distal_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_axilla_proximal_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_axilla_proximal_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_calcaneus_posterior_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_calcaneus_posterior_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_carpal_distal_phalanx_1_tip")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_carpal_distal_phalanx_1_tip")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_carpal_distal_phalanx_2_tip")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_carpal_distal_phalanx_2_tip")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_carpal_distal_phalanx_3_tip")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_carpal_distal_phalanx_3_tip")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_carpal_distal_phalanx_4_tip")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_carpal_distal_phalanx_4_tip")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_carpal_distal_phalanx_5_tip")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_carpal_distal_phalanx_5_tip")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_clavicle_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_clavicle_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_dactylion_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_dactylion_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_femoral_lateral_epicondyle_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_femoral_lateral_epicondyle_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_femoral_medial_epicondyle_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_femoral_medial_epicondyle_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_gonion_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_gonion_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_humeral_lateral_epicondyle_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_humeral_lateral_epicondyle_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_humeral_medial_epicondyle_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_humeral_medial_epicondyle_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_iliocristale_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_iliocristale_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_infraorbitale_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_infraorbitale_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_knee_crease_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_knee_crease_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_lateral_malleolus_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_lateral_malleolus_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_medial_malleolus_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_medial_malleolus_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_metacarpal_phalanx_2_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_metacarpal_phalanx_2_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_metacarpal_phalanx_5_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_metacarpal_phalanx_5_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_metatarsal_phalanx_1_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_metatarsal_phalanx_1_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_metatarsal_phalanx_5_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_metatarsal_phalanx_5_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_neck_base_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_neck_base_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_olecranon_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_olecranon_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_psis_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_psis_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_radial_styloid_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_radial_styloid_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_radiale_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_radiale_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_rib10_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_rib10_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_sphyrion_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_sphyrion_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_tarsal_distal_phalanx_2_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_tarsal_distal_phalanx_2_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_thelion_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_thelion_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_tragion_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_tragion_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_trochanterion_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_trochanterion_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_l_ulnar_styloid_pt")))
              .addSites(new HAnimSite("Joe_Human").setUSE(new SFString("Joe_r_ulnar_styloid_pt"))))))
        .addChild(new TimeSensor().setDEF(new SFString("Time1")).setCycleInterval(2.86d).setLoop(true))
        .addChild(new TimeSensor().setDEF(new SFString("Time2")).setCycleInterval(5.72d).setLoop(true))
        .addChild(new TimeSensor().setDEF(new SFString("Time3")).setCycleInterval(5.8d).setLoop(true))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Pitch")).setKey(new MFFloat340().getArray()).setKeyValue(new MFRotation341().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Yaw")).setKey(new MFFloat342().getArray()).setKeyValue(new MFRotation343().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Roll")).setKey(new MFFloat344().getArray()).setKeyValue(new MFRotation345().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("vc6Yaw")).setKey(new MFFloat346().getArray()).setKeyValue(new MFRotation347().getArray()))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time2")).setToField(new SFString("set_fraction")).setToNode(new SFString("vc6Yaw")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("vc6Yaw")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_vc6")))
        .addChild(new OrientationInterpolator().setDEF(new SFString("EyeballsRotation")).setKey(new MFFloat348().getArray()).setKeyValue(new MFRotation349().getArray()))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time3")).setToField(new SFString("set_fraction")).setToNode(new SFString("EyeballsRotation")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("EyeballsRotation")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_eyeball_joint")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("EyeballsRotation")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_l_eyeball_joint")))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_sternoclavicularRelax")).setKey(new MFFloat350().getArray()).setKeyValue(new MFRotation351().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_acromioclavicularRelax")).setKey(new MFFloat352().getArray()).setKeyValue(new MFRotation353().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_shoulderRelax")).setKey(new MFFloat354().getArray()).setKeyValue(new MFRotation355().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_elbowRelax")).setKey(new MFFloat356().getArray()).setKeyValue(new MFRotation357().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_wristRelax")).setKey(new MFFloat358().getArray()).setKeyValue(new MFRotation359().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_index0Relax")).setKey(new MFFloat360().getArray()).setKeyValue(new MFRotation361().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_index1Relax")).setKey(new MFFloat362().getArray()).setKeyValue(new MFRotation363().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_middle0Relax")).setKey(new MFFloat364().getArray()).setKeyValue(new MFRotation365().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_middle1Relax")).setKey(new MFFloat366().getArray()).setKeyValue(new MFRotation367().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_ring0Relax")).setKey(new MFFloat368().getArray()).setKeyValue(new MFRotation369().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_ring1Relax")).setKey(new MFFloat370().getArray()).setKeyValue(new MFRotation371().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_pinky0Relax")).setKey(new MFFloat372().getArray()).setKeyValue(new MFRotation373().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_pinky1Relax")).setKey(new MFFloat374().getArray()).setKeyValue(new MFRotation375().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_thumb1Relax")).setKey(new MFFloat376().getArray()).setKeyValue(new MFRotation377().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_thumb2Relax")).setKey(new MFFloat378().getArray()).setKeyValue(new MFRotation379().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_thumb3Relax")).setKey(new MFFloat380().getArray()).setKeyValue(new MFRotation381().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_fingers2Relax")).setKey(new MFFloat382().getArray()).setKeyValue(new MFRotation383().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_fingers3Relax")).setKey(new MFFloat384().getArray()).setKeyValue(new MFRotation385().getArray()))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_sternoclavicularRelax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_sternoclavicular")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_acromioclavicularRelax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_acromioclavicular")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_shoulderRelax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_shoulder")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_elbowRelax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_elbow")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_wristRelax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_radiocarpal")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_thumb1Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpometacarpal_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_thumb2Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_metacarpophalangeal_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_thumb3Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_interphalangeal_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_index0Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpometacarpal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_index1Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_metacarpophalangeal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_fingers2Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_proximal_interphalangeal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_fingers3Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_distal_interphalangeal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_middle0Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpometacarpal_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_middle1Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_metacarpophalangeal_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_fingers2Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_proximal_interphalangeal_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_fingers3Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_distal_interphalangeal_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_ring0Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpometacarpal_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_ring1Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_metacarpophalangeal_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_fingers2Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_proximal_interphalangeal_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_fingers3Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_distal_interphalangeal_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_pinky0Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpometacarpal_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_pinky1Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_metacarpophalangeal_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_fingers2Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_proximal_interphalangeal_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_fingers3Relax")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_distal_interphalangeal_5")))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_sternoclavicularRoll")).setKey(new MFFloat386().getArray()).setKeyValue(new MFRotation387().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_acromioclavicularRoll")).setKey(new MFFloat388().getArray()).setKeyValue(new MFRotation389().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_shoulderRoll")).setKey(new MFFloat390().getArray()).setKeyValue(new MFRotation391().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_ForeArmPitch")).setKey(new MFFloat392().getArray()).setKeyValue(new MFRotation393().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_wristRoll")).setKey(new MFFloat394().getArray()).setKeyValue(new MFRotation395().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_handPitch")).setKey(new MFFloat396().getArray()).setKeyValue(new MFRotation397().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_thumb1Pitch")).setKey(new MFFloat398().getArray()).setKeyValue(new MFRotation399().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("r_thumb2Pitch")).setKey(new MFFloat400().getArray()).setKeyValue(new MFRotation401().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("l_shoulderRoll")).setKey(new MFFloat402().getArray()).setKeyValue(new MFRotation403().getArray()))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time2")).setToField(new SFString("set_fraction")).setToNode(new SFString("r_sternoclavicularRoll")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time2")).setToField(new SFString("set_fraction")).setToNode(new SFString("r_acromioclavicularRoll")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time2")).setToField(new SFString("set_fraction")).setToNode(new SFString("r_shoulderRoll")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time2")).setToField(new SFString("set_fraction")).setToNode(new SFString("r_ForeArmPitch")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time2")).setToField(new SFString("set_fraction")).setToNode(new SFString("r_wristRoll")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time2")).setToField(new SFString("set_fraction")).setToNode(new SFString("r_handPitch")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time2")).setToField(new SFString("set_fraction")).setToNode(new SFString("r_thumb1Pitch")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time2")).setToField(new SFString("set_fraction")).setToNode(new SFString("r_thumb2Pitch")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_sternoclavicularRoll")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_sternoclavicular")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_acromioclavicularRoll")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_acromioclavicular")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_shoulderRoll")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_shoulder")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_ForeArmPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_elbow")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_wristRoll")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_radiocarpal")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpometacarpal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_metacarpophalangeal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_proximal_interphalangeal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_distal_interphalangeal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpometacarpal_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_metacarpophalangeal_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_proximal_interphalangeal_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_distal_interphalangeal_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpometacarpal_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_metacarpophalangeal_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_proximal_interphalangeal_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_distal_interphalangeal_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpometacarpal_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_metacarpophalangeal_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_proximal_interphalangeal_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_handPitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_distal_interphalangeal_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_thumb1Pitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpometacarpal_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_thumb2Pitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_metacarpophalangeal_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("r_thumb2Pitch")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_carpal_interphalangeal_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("l_shoulderRoll")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_l_shoulder")))
        .addChild(new Group()
          .addChild(new PositionInterpolator().setDEF(new SFString("HUMANOIDROOT_POSITION_ANIMATOR")).setKey(new MFFloat404().getArray()).setKeyValue(new MFVec3f405().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("HUMANOIDROOT_ANIMATOR")).setKey(new MFFloat406().getArray()).setKeyValue(new MFRotation407().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("L_HIP_ANIMATOR")).setKey(new MFFloat408().getArray()).setKeyValue(new MFRotation409().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("L_KNEE_ANIMATOR")).setKey(new MFFloat410().getArray()).setKeyValue(new MFRotation411().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("L_ANKLE_ANIMATOR")).setKey(new MFFloat412().getArray()).setKeyValue(new MFRotation413().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("R_ANKLE_ANIMATOR")).setKey(new MFFloat414().getArray()).setKeyValue(new MFRotation415().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("L_subtalar_ANIMATOR")).setKey(new MFFloat416().getArray()).setKeyValue(new MFRotation417().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("L_MIDTARSAL_ANIMATOR")).setKey(new MFFloat418().getArray()).setKeyValue(new MFRotation419().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("L_metatarsal_ANIMATOR")).setKey(new MFFloat420().getArray()).setKeyValue(new MFRotation421().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("R_HIP_ANIMATOR")).setKey(new MFFloat422().getArray()).setKeyValue(new MFRotation423().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("R_KNEE_ANIMATOR")).setKey(new MFFloat424().getArray()).setKeyValue(new MFRotation425().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("R_subtalar_ANIMATOR")).setKey(new MFFloat426().getArray()).setKeyValue(new MFRotation427().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("R_MIDTARSAL_ANIMATOR")).setKey(new MFFloat428().getArray()).setKeyValue(new MFRotation429().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("R_metatarsal_ANIMATOR")).setKey(new MFFloat430().getArray()).setKeyValue(new MFRotation431().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("VL5_ANIMATOR")).setKey(new MFFloat432().getArray()).setKeyValue(new MFRotation433().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("SKULLBASE_ANIMATOR")).setKey(new MFFloat434().getArray()).setKeyValue(new MFRotation435().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("L_SHOULDER_ANIMATOR")).setKey(new MFFloat436().getArray()).setKeyValue(new MFRotation437().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("L_ELBOW_ANIMATOR")).setKey(new MFFloat438().getArray()).setKeyValue(new MFRotation439().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("L_WRIST_ANIMATOR")).setKey(new MFFloat440().getArray()).setKeyValue(new MFRotation441().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("R_SHOULDER_ANIMATOR")).setKey(new MFFloat442().getArray()).setKeyValue(new MFRotation443().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("R_ELBOW_ANIMATOR")).setKey(new MFFloat444().getArray()).setKeyValue(new MFRotation445().getArray()))
          .addChild(new OrientationInterpolator().setDEF(new SFString("R_WRIST_ANIMATOR")).setKey(new MFFloat446().getArray()).setKeyValue(new MFRotation447().getArray())))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("HUMANOIDROOT_POSITION_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("HUMANOIDROOT_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_HIP_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_KNEE_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_ANKLE_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_subtalar_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_MIDTARSAL_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_metatarsal_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("R_HIP_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("R_KNEE_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("R_ANKLE_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("R_subtalar_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("R_MIDTARSAL_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("R_metatarsal_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("VL5_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("SKULLBASE_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_SHOULDER_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_ELBOW_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Time1")).setToField(new SFString("set_fraction")).setToNode(new SFString("L_WRIST_ANIMATOR")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("HUMANOIDROOT_POSITION_ANIMATOR")).setToField(new SFString("set_translation")).setToNode(new SFString("Joe_humanoid_root")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("HUMANOIDROOT_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_humanoid_root")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("L_HIP_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_l_hip")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("L_KNEE_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_l_knee")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("L_ANKLE_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_l_talocrural")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("L_MIDTARSAL_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_l_metatarsophalangeal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("L_subtalar_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_l_tarsometatarsal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("L_metatarsal_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_l_metatarsal")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("R_HIP_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_hip")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("R_KNEE_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_knee")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("R_ANKLE_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_talocrural")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("R_subtalar_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_tarsometatarsal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("R_MIDTARSAL_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_metatarsophalangeal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("R_metatarsal_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_tarsal_distal_interphalangeal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("VL5_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_vl5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("SKULLBASE_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_skullbase")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("L_SHOULDER_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_l_shoulder")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("L_ELBOW_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_l_elbow")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("L_WRIST_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_l_radiocarpal")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("R_SHOULDER_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_shoulder")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("R_ELBOW_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_elbow")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("R_WRIST_ANIMATOR")).setToField(new SFString("set_rotation")).setToNode(new SFString("Joe_r_radiocarpal"))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"By Joe for Joe","HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3"});
  }
}
private class MFFloat1 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.57f });
  }
}
private class MFColor2 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f ,0.1f ,0f ,0f ,0.1f ,0f });
  }
}
private class MFColor3 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f ,0f ,0.1f });
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.x3d","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"});
  }
}
private class MFInt325 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColor6 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,1f ,1f ,1f ,1f ,0f });
  }
}
private class MFVec3f7 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.0157f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFInt328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f10 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0.0001f ,0f });
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"2.0"});
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f13 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.875f ,0f ,0f ,0.92f ,0f });
  }
}
private class MFInt3214 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,19,20,21,22,23,26,27,73,82,89,91,93});
  }
}
private class MFFloat15 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,0.35f ,0.35f ,1f });
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
private class MFVec3f17 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.92f ,0f ,0.0961f ,0.9124f ,0f ,-0.095f ,0.9171f ,0.0029f ,0f ,1.045f ,-0.095f });
  }
}
private class MFInt3218 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {89,90,94,95,96,97});
  }
}
private class MFFloat19 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.65f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f21 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f ,0.92f ,0f ,0.115f ,0.466f ,0f });
  }
}
private class MFInt3222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {334,335,336,337,338,339,340,341});
  }
}
private class MFFloat23 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f25 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.115f ,0.466f ,0f ,0.1f ,0.069f ,0f });
  }
}
private class MFInt3226 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {342,343,344,345});
  }
}
private class MFFloat27 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f29 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f ,0.069f ,0f ,0.115f ,0.031f ,0.03f });
  }
}
private class MFInt3230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {346,347,348,71});
  }
}
private class MFFloat31 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f33 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.115f ,0.031f ,0.03f ,0.115f ,0.037f ,0.09f });
  }
}
private class MFInt3234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {349,350,351,352});
  }
}
private class MFFloat35 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f37 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.115f ,0.037f ,0.09f ,0.115f ,0.02f ,0.122f });
  }
}
private class MFInt3238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {353,354,355,356,357,358,359,360,361});
  }
}
private class MFFloat39 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f41 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.115f ,0.02f ,0.122f ,0.132f ,0.013f ,0.19f });
  }
}
private class MFInt3242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {91,92,98,99,100,101});
  }
}
private class MFFloat43 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.65f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f45 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,0.92f ,0f ,-0.1f ,0.4913f ,0f });
  }
}
private class MFInt3246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {362,363,364,365,366,367,368,369});
  }
}
private class MFFloat47 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f49 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,0.4913f ,0f ,-0.1f ,0.0712f ,0f });
  }
}
private class MFInt3250 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {370,371,372,373});
  }
}
private class MFFloat51 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f53 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,0.0712f ,0f ,-0.1f ,0.015f ,-0.01f });
  }
}
private class MFInt3254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {374,375,376});
  }
}
private class MFFloat55 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f });
  }
}
private class MFInt3256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f57 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,0.015f ,-0.01f ,-0.1f ,0.02f ,0.07f });
  }
}
private class MFInt3258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {377,378,379,380});
  }
}
private class MFFloat59 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f61 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,0.02f ,0.07f ,-0.1f ,0.01f ,0.14f });
  }
}
private class MFInt3262 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {381,382,383,384,385,386,387,388,389});
  }
}
private class MFFloat63 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f65 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,0.01f ,0.14f ,-0.1043f ,0.0016f ,0.2f });
  }
}
private class MFInt3266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {28,76});
  }
}
private class MFFloat67 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f69 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.045f ,-0.095f ,0f ,0.9149f ,0.0016f });
  }
}
private class MFInt3270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f71 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.045f ,-0.095f ,0f ,1.068f ,-0.085f });
  }
}
private class MFInt3272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f73 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.068f ,-0.085f ,0f ,1.092f ,-0.0725f });
  }
}
private class MFInt3274 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f75 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.092f ,-0.0725f ,0f ,1.12f ,-0.065f });
  }
}
private class MFInt3276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,18,25,83,84,85,86,87,88});
  }
}
private class MFFloat77 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,0.7f ,1f ,0.8f });
  }
}
private class MFInt3278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f79 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.12f ,-0.065f ,0f ,1.1459f ,-0.0625f });
  }
}
private class MFInt3280 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f81 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.1459f ,-0.0625f ,0f ,1.179f ,-0.068f });
  }
}
private class MFInt3282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f83 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.179f ,-0.068f ,0f ,1.242f ,-0.09f });
  }
}
private class MFInt3284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f85 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.2145f ,-0.0755f ,0f ,1.242f ,-0.09f });
  }
}
private class MFInt3286 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15});
  }
}
private class MFFloat87 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt3288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f89 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.242f ,-0.09f ,0f ,1.268f ,-0.1f });
  }
}
private class MFInt3290 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,14});
  }
}
private class MFFloat91 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3292 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f93 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.268f ,-0.1f ,0f ,1.294f ,-0.11f });
  }
}
private class MFInt3294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f95 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.294f ,-0.11f ,0f ,1.352f ,-0.12f });
  }
}
private class MFInt3296 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f97 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.352f ,-0.12f ,0f ,1.381f ,-0.1235f });
  }
}
private class MFInt3298 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f99 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.381f ,-0.1235f ,0f ,1.41f ,-0.1235f });
  }
}
private class MFInt32100 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f101 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.41f ,-0.1235f ,0f ,1.438f ,-0.12f });
  }
}
private class MFInt32102 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {81});
  }
}
private class MFFloat103 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt32104 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f105 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.41f ,-0.1235f ,0f ,1.438f ,-0.12f });
  }
}
private class MFInt32106 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f107 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.438f ,-0.12f ,0f ,1.468f ,-0.105f });
  }
}
private class MFInt32108 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f109 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.468f ,-0.105f ,0f ,1.497f ,-0.09f });
  }
}
private class MFInt32110 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,24});
  }
}
private class MFFloat111 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32112 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f113 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.497f ,-0.09f ,0f ,1.525f ,-0.072f });
  }
}
private class MFInt32114 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {74,75});
  }
}
private class MFFloat115 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32116 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
private class MFVec3f117 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.525f ,-0.072f ,0.082f ,1.4488f ,-0.0353f ,-0.03f ,1.46f ,0.02f ,0f ,1.54f ,-0.05f });
  }
}
private class MFInt32118 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f119 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.54f ,-0.05f ,0f ,1.5675f ,-0.0256f });
  }
}
private class MFInt32120 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f121 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.5675f ,-0.0256f ,0f ,1.5823f ,-0.0185f });
  }
}
private class MFInt32122 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f123 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.5823f ,-0.0185f ,0f ,1.595f ,-0.0175f });
  }
}
private class MFInt32124 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f125 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.595f ,-0.0175f ,0f ,1.61f ,-0.015f });
  }
}
private class MFInt32126 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f127 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.61f ,-0.015f ,0f ,1.6144f ,-0.0034f });
  }
}
private class MFInt32128 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f129 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.6144f ,-0.0034f ,0f ,1.63f ,-0.01f });
  }
}
private class MFInt32130 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
private class MFFloat131 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32132 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1});
  }
}
private class MFVec3f133 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.63f ,-0.01f ,0.034f ,1.659f ,0.06f ,-0.034f ,1.655f ,0.065f });
  }
}
private class MFInt32134 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f135 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.034f ,1.655f ,0.065f ,-0.034f ,1.655f ,0.065f });
  }
}
private class MFInt32136 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f137 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.034f ,1.655f ,0.065f ,-0.034f ,1.655f ,0.065f });
  }
}
private class MFInt32138 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12});
  }
}
private class MFFloat139 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt32140 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f141 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f ,1.4488f ,-0.0353f ,0.0962f ,1.4269f ,-0.0424f });
  }
}
private class MFInt32142 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {79});
  }
}
private class MFFloat143 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt32144 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f145 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0962f ,1.4269f ,-0.0424f ,0.2f ,1.44f ,-0.04f });
  }
}
private class MFInt32146 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {41,42,44,80,102,103,104,105});
  }
}
private class MFFloat147 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32148 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f149 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f ,1.44f ,-0.0387f ,0.2f ,1.1388f ,-0.04f });
  }
}
private class MFInt32150 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {45,46,47,109,110,111,112,113,115,116,117,118});
  }
}
private class MFFloat151 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32152 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f153 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2f ,1.1388f ,-0.04f ,0.2f ,0.87f ,-0.04f });
  }
}
private class MFInt32154 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {119,120,121,122,123,124,125,126});
  }
}
private class MFFloat155 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32156 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
  }
}
private class MFVec3f157 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2f ,0.87f ,-0.04f ,0.1924f ,0.8472f ,-0.0534f ,0.1983f ,0.8024f ,-0.028f ,0.1987f ,0.8029f ,-0.053f ,0.1956f ,0.8019f ,-0.0794f ,0.1925f ,0.8066f ,-0.1036f });
  }
}
private class MFInt32158 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {127,128});
  }
}
private class MFFloat159 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32160 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f161 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1924f ,0.8472f ,-0.0534f ,0.1951f ,0.8226f ,0.0246f });
  }
}
private class MFInt32162 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,141,142,143});
  }
}
private class MFFloat163 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f });
  }
}
private class MFInt32164 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f165 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1951f ,0.8226f ,0.0246f ,0.1955f ,0.8159f ,0.0464f });
  }
}
private class MFInt32166 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {144,145,146,147,148,149,150,151,152});
  }
}
private class MFFloat167 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32168 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f169 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1955f ,0.8159f ,0.0464f ,0.1982f ,0.8061f ,0.0759f });
  }
}
private class MFInt32170 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {129,130});
  }
}
private class MFFloat171 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32172 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f173 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f ,0.8024f ,-0.028f ,0.1983f ,0.7815f ,-0.028f });
  }
}
private class MFInt32174 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,153,154,155,163});
  }
}
private class MFFloat175 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f ,0.5f });
  }
}
private class MFInt32176 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f177 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f ,0.7815f ,-0.028f ,0.2017f ,0.7363f ,-0.0248f });
  }
}
private class MFInt32178 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {166,167,168,169});
  }
}
private class MFFloat179 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32180 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f181 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2017f ,0.7363f ,-0.0248f ,0.2028f ,0.7139f ,-0.0236f });
  }
}
private class MFInt32182 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {170,171,172,173,174,175,176,177,178});
  }
}
private class MFFloat183 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32184 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f185 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2028f ,0.7139f ,-0.0236f ,0.2089f ,0.6858f ,-0.0245f });
  }
}
private class MFInt32186 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {131,132});
  }
}
private class MFFloat187 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32188 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f189 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f ,0.8029f ,-0.053f ,0.1987f ,0.7818f ,-0.053f });
  }
}
private class MFInt32190 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {156,157,163,164});
  }
}
private class MFFloat191 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt32192 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f193 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f ,0.7818f ,-0.053f ,0.2013f ,0.7273f ,-0.0503f });
  }
}
private class MFInt32194 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {179,180,181,182});
  }
}
private class MFFloat195 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32196 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f197 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2013f ,0.7273f ,-0.0503f ,0.2026f ,0.7011f ,-0.0494f });
  }
}
private class MFInt32198 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {183,184,185,186,187,188,189,190,191});
  }
}
private class MFFloat199 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32200 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f201 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2026f ,0.7011f ,-0.0494f ,0.208f ,0.6731f ,-0.0491f });
  }
}
private class MFInt32202 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {133,134});
  }
}
private class MFFloat203 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32204 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f205 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f ,0.8019f ,-0.0794f ,0.1956f ,0.7815f ,-0.0794f });
  }
}
private class MFInt32206 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {158,159,164,165});
  }
}
private class MFFloat207 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt32208 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f209 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f ,0.7815f ,-0.0794f ,0.1973f ,0.7287f ,-0.0777f });
  }
}
private class MFInt32210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {192,193,194,195});
  }
}
private class MFFloat211 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f213 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1973f ,0.7287f ,-0.0777f ,0.1983f ,0.7045f ,-0.0767f });
  }
}
private class MFInt32214 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {196,197,198,199,200,201,202,203,204});
  }
}
private class MFFloat215 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f217 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f ,0.7045f ,-0.0767f ,0.2035f ,0.675f ,-0.0756f });
  }
}
private class MFInt32218 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {135,136,137,165});
  }
}
private class MFFloat219 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,0.5f });
  }
}
private class MFInt32220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f221 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f ,0.8066f ,-0.1036f ,0.1925f ,0.7866f ,-0.1036f });
  }
}
private class MFInt32222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {160,161,162});
  }
}
private class MFFloat223 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f });
  }
}
private class MFInt32224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f225 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f ,0.7866f ,-0.1036f ,0.1938f ,0.7452f ,-0.1024f });
  }
}
private class MFInt32226 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {205,206,207,208});
  }
}
private class MFFloat227 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f229 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1938f ,0.7452f ,-0.1024f ,0.1948f ,0.7277f ,-0.1017f });
  }
}
private class MFInt32230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {209,210,211,212,213,214,215,216,217});
  }
}
private class MFFloat231 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f233 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1948f ,0.7277f ,-0.1017f ,0.2014f ,0.7009f ,-0.1012f });
  }
}
private class MFInt32234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10});
  }
}
private class MFFloat235 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt32236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f237 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.03f ,1.46f ,0.02f ,-0.09f ,1.41f ,-0.09f });
  }
}
private class MFInt32238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {77,29});
  }
}
private class MFFloat239 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,0.9f });
  }
}
private class MFInt32240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f241 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.09f ,1.41f ,-0.09f ,-0.2f ,1.44f ,-0.04f });
  }
}
private class MFInt32242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {29,30,32,78,218,219,220,221,86,88});
  }
}
private class MFFloat243 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,0.3f ,0.2f });
  }
}
private class MFInt32244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f245 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,1.44f ,-0.04f ,-0.2f ,1.1388f ,-0.04f });
  }
}
private class MFInt32246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {33,34,35,225,226,227,228,229,231,232,233,234});
  }
}
private class MFFloat247 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f249 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,1.1388f ,-0.04f ,-0.2f ,0.89f ,-0.04f });
  }
}
private class MFInt32250 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {235,236,237,238,239,240,241,242});
  }
}
private class MFFloat251 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
  }
}
private class MFVec3f253 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.89f ,-0.04f ,-0.2f ,0.85f ,0f ,-0.2f ,0.84f ,-0.015f ,-0.2f ,0.835f ,-0.04f ,-0.2f ,0.835f ,-0.065f ,-0.2f ,0.84f ,-0.085f });
  }
}
private class MFInt32254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {243,244});
  }
}
private class MFFloat255 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f257 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.85f ,0f ,-0.2f ,0.82f ,0.03f });
  }
}
private class MFInt32258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,257,258,259});
  }
}
private class MFFloat259 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f });
  }
}
private class MFInt32260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f261 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.82f ,0.03f ,-0.2f ,0.8f ,0.05f });
  }
}
private class MFInt32262 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {260,261,262,263,264,265,266,267,268});
  }
}
private class MFFloat263 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f265 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.8f ,0.05f ,-0.2f ,0.78f ,0.07f });
  }
}
private class MFInt32266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {245,246});
  }
}
private class MFFloat267 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f269 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.84f ,-0.015f ,-0.2f ,0.793f ,-0.015f });
  }
}
private class MFInt32270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,269,270,271,279});
  }
}
private class MFFloat271 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f ,0.5f });
  }
}
private class MFInt32272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f273 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.793f ,-0.015f ,-0.2f ,0.745f ,-0.015f });
  }
}
private class MFInt32274 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {282,283,284,285});
  }
}
private class MFFloat275 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f277 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.745f ,-0.015f ,-0.2f ,0.72f ,-0.015f });
  }
}
private class MFInt32278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {286,287,288,289,290,291,292,293,294});
  }
}
private class MFFloat279 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32280 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f281 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.72f ,-0.015f ,-0.2f ,0.695f ,-0.015f });
  }
}
private class MFInt32282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {247,248});
  }
}
private class MFFloat283 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f285 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.835f ,-0.04f ,-0.2f ,0.788f ,-0.04f });
  }
}
private class MFInt32286 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {272,273,279,280});
  }
}
private class MFFloat287 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt32288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f289 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.788f ,-0.04f ,-0.2f ,0.74f ,-0.04f });
  }
}
private class MFInt32290 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {295,296,297,298});
  }
}
private class MFFloat291 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32292 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f293 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.74f ,-0.04f ,-0.2f ,0.7142f ,-0.04f });
  }
}
private class MFInt32294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {299,300,301,302,303,304,305,306,307});
  }
}
private class MFFloat295 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32296 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f297 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.7142f ,-0.04f ,-0.2f ,0.6758f ,-0.04f });
  }
}
private class MFInt32298 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {249,250});
  }
}
private class MFFloat299 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32300 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f301 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.835f ,-0.065f ,-0.2f ,0.793f ,-0.065f });
  }
}
private class MFInt32302 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {274,275,280,281});
  }
}
private class MFFloat303 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt32304 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f305 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.793f ,-0.065f ,-0.2f ,0.74f ,-0.065f });
  }
}
private class MFInt32306 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {308,309,310,311});
  }
}
private class MFFloat307 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32308 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f309 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.74f ,-0.065f ,-0.2f ,0.7177f ,-0.065f });
  }
}
private class MFInt32310 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {312,313,314,315,316,317,318,319,320});
  }
}
private class MFFloat311 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32312 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f313 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.7177f ,-0.065f ,-0.2f ,0.695f ,-0.065f });
  }
}
private class MFInt32314 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {251,252,253,281});
  }
}
private class MFFloat315 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,0.5f });
  }
}
private class MFInt32316 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f317 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.84f ,-0.085f ,-0.2f ,0.79f ,-0.085f });
  }
}
private class MFInt32318 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {276,277,278});
  }
}
private class MFFloat319 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f });
  }
}
private class MFInt32320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f321 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.79f ,-0.085f ,-0.2f ,0.755f ,-0.085f });
  }
}
private class MFInt32322 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {321,322,323,324});
  }
}
private class MFFloat323 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f325 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.755f ,-0.085f ,-0.2f ,0.735f ,-0.085f });
  }
}
private class MFInt32326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {325,326,327,328,329,330,331,332,333});
  }
}
private class MFFloat327 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f329 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.735f ,-0.085f ,-0.2f ,0.72f ,-0.085f });
  }
}
private class MFString330 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"});
  }
}
private class MFInt32331 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1});
  }
}
private class MFInt32332 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1});
  }
}
private class MFInt32333 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1});
  }
}
private class MFInt32334 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
  }
}
private class MFColor335 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,0f ,0f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f });
  }
}
private class MFColor336 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f });
  }
}
private class MFColor337 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,1f });
  }
}
private class MFVec3f338 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.77f ,0f ,0f ,1.665f ,0.09f ,-0.033f ,1.62f ,0.087f ,0.033f ,1.62f ,0.087f ,0f ,1.55f ,0.097f ,-0.077f ,1.64f ,-0.01f ,-0.0527f ,1.58f ,0.015f ,0.077f ,1.64f ,-0.01f ,0.0527f ,1.58f ,0.015f ,0f ,1.625f ,-0.0925f ,-0.03f ,1.46f ,0.035f ,0f ,1.44f ,0.03f ,0.03f ,1.46f ,0.035f ,-0.1135f ,1.318f ,0.095f ,0.1135f ,1.318f ,0.095f ,0f ,1.25f ,0.113f ,-0.087f ,1.19f ,0.09f ,-0.0935f ,1.03f ,0.075f ,0.087f ,1.19f ,0.09f ,0.0935f ,1.03f ,0.075f ,-0.1425f ,1.065f ,0.0033f ,-0.15f ,0.9f ,-0.01f ,0.1425f ,1.065f ,0.0033f ,0.15f ,0.9f ,-0.01f ,0f ,1.53f ,-0.084f ,0.0049f ,1.1908f ,-0.1113f ,-0.0773f ,1.019f ,-0.12f ,0.0773f ,1.019f ,-0.12f ,0.005f ,1.0915f ,-0.1091f ,-0.178f ,1.4825f ,-0.0625f ,-0.17f ,1.38f ,0.007f ,-0.1884f ,0.8676f ,-0.036f ,-0.16f ,1.38f ,-0.127f ,-0.2f ,1.1388f ,-0.08f ,-0.244f ,1.1388f ,-0.04f ,-0.165f ,1.1388f ,-0.04f ,-0.23f ,1.133f ,-0.055f ,-0.1977f ,0.8169f ,-0.0177f ,-0.1941f ,0.6772f ,-0.0423f ,-0.2117f ,0.8562f ,-0.0584f ,-0.1929f ,0.789f ,-0.1064f ,0.175f ,1.4825f ,-0.06f ,0.17f ,1.38f ,0.007f ,0.1901f ,0.8645f ,-0.0415f ,0.16f ,1.38f ,-0.125f ,0.2f ,1.1388f ,-0.08f ,0.165f ,1.1388f ,-0.04f ,0.244f ,1.1388f ,-0.04f ,0.23f ,1.133f ,-0.055f ,0.2009f ,0.8139f ,-0.0237f ,0.2056f ,0.6743f ,-0.0482f ,0.2142f ,0.8529f ,-0.0648f ,0.1929f ,0.786f ,-0.1122f ,-0.1f ,0.4913f ,-0.03f ,-0.17f ,0.466f ,0f ,-0.05f ,0.466f ,0f ,-0.165f ,0.01f ,0.12f ,-0.15f ,0.07f ,0f ,-0.085f ,0.086f ,0.0125f ,-0.09f ,0.056f ,0.0125f ,-0.115f ,0.02f ,0.122f ,-0.115f ,0.04f ,-0.055f ,-0.11f ,0.011f ,0.19f ,0.0993f ,0.4881f ,-0.0309f ,0.17f ,0.466f ,0f ,0.05f ,0.4867f ,0f ,0.165f ,0.01f ,0.12f ,0.15f ,0.07f ,0f ,0.085f ,0.086f ,0.0125f ,0.09f ,0.056f ,0.0125f ,0.115f ,0.02f ,0.122f ,0.115f ,0.04f ,-0.055f ,0.11f ,0.011f ,0.19f ,0f ,0.875f ,0f ,-0.0646f ,1.5149f ,-0.038f ,0.0646f ,1.5149f ,-0.038f ,0f ,1.0723f ,0.09f ,-0.11f ,1.427f ,-0.1375f ,-0.235f ,1.42f ,-0.0625f ,0.11f ,1.427f ,-0.1375f ,0.235f ,1.42f ,-0.0625f ,0f ,1.41f ,-0.145f ,0f ,0.925f ,0.08f ,-0.087f ,1.19f ,-0.09f ,0.087f ,1.19f ,-0.09f ,0.172f ,1.32f ,-0.03f ,-0.172f ,1.32f ,-0.03f ,0.15f ,1.23f ,-0.015f ,-0.15f ,1.23f ,-0.015f ,0.079f ,0.92f ,-0.14f ,0.1f ,0.9f ,0.077f ,-0.079f ,0.92f ,-0.14f ,-0.1f ,0.9f ,0.075f ,0f ,0.87f ,0f ,0.171f ,0.65f ,0f ,0.02f ,0.65f ,0f ,0.1f ,0.65f ,-0.08f ,0.1f ,0.65f ,0.07f ,-0.171f ,0.65f ,0f ,-0.02f ,0.65f ,0f ,-0.1f ,0.65f ,-0.08f ,-0.1f ,0.65f ,0.07f ,0.25f ,1.27f ,-0.04f ,0.17f ,1.27f ,-0.04f ,0.2f ,1.27f ,-0.09f ,0.2f ,1.27f ,0.02f ,0.244f ,1.1388f ,-0.04f ,0.165f ,1.1388f ,-0.04f ,0.2f ,1.1388f ,-0.08f ,0.2f ,1.1388f ,-0.013f ,0.225f ,1f ,-0.01f ,0.225f ,1f ,-0.07f ,0.185f ,1f ,-0.01f ,0.185f ,1f ,-0.07f ,0.2f ,1.1388f ,-0.04f ,0.225f ,0.92f ,-0.04f ,0.175f ,0.92f ,-0.04f ,0.2f ,0.92f ,-0.065f ,0.2f ,0.92f ,-0.015f ,0.225f ,0.89f ,-0.04f ,0.175f ,0.89f ,-0.04f ,0.2f ,0.89f ,-0.065f ,0.2f ,0.89f ,-0.015f ,0.218f ,0.86f ,-0.04f ,0.184f ,0.86f ,-0.04f ,0.2f ,0.87f ,-0.07f ,0.2f ,0.87f ,0f ,0.21f ,0.85f ,0f ,0.1854f ,0.85f ,0f ,0.212f ,0.84f ,-0.015f ,0.183f ,0.84f ,-0.015f ,0.213f ,0.835f ,-0.04f ,0.19f ,0.835f ,-0.04f ,0.211f ,0.835f ,-0.065f ,0.192f ,0.835f ,-0.065f ,0.208f ,0.84f ,-0.085f ,0.19f ,0.84f ,-0.085f ,0.2f ,0.84f ,-0.095f ,0.215f ,0.82f ,0f ,0.193f ,0.815f ,0.005f ,0.198f ,0.8f ,0.012f ,0.21f ,0.82f ,0.03f ,0.19f ,0.82f ,0.03f ,0.2f ,0.835f ,0.039f ,0.212f ,0.8f ,0.05f ,0.188f ,0.8f ,0.05f ,0.2f ,0.807f ,0.057f ,0.2f ,0.793f ,0.035f ,0.2f ,0.774f ,0.076f ,0.212f ,0.78f ,0.07f ,0.188f ,0.78f ,0.07f ,0.2f ,0.785f ,0.075f ,0.2f ,0.77f ,0.062f ,0.215f ,0.793f ,-0.015f ,0.187f ,0.793f ,-0.015f ,0.2f ,0.793f ,-0.005f ,0.215f ,0.788f ,-0.04f ,0.187f ,0.788f ,-0.04f ,0.215f ,0.793f ,-0.065f ,0.187f ,0.793f ,-0.065f ,0.21f ,0.79f ,-0.085f ,0.19f ,0.79f ,-0.085f ,0.2f ,0.79f ,-0.095f ,0.19f ,0.77f ,-0.0275f ,0.19f ,0.77f ,-0.0525f ,0.19f ,0.78f ,-0.0775f ,0.212f ,0.745f ,-0.015f ,0.188f ,0.745f ,-0.02f ,0.2f ,0.745f ,-0.0255f ,0.2f ,0.745f ,-0.0045f ,0.211f ,0.72f ,-0.015f ,0.189f ,0.72f ,-0.015f ,0.2f ,0.72f ,-0.0252f ,0.2f ,0.72f ,-0.0048f ,0.21f ,0.695f ,-0.015f ,0.19f ,0.695f ,-0.015f ,0.2f ,0.695f ,-0.025f ,0.2f ,0.695f ,-0.005f ,0.2f ,0.685f ,-0.015f ,0.215f ,0.74f ,-0.04f ,0.185f ,0.74f ,-0.04f ,0.2f ,0.74f ,-0.055f ,0.2f ,0.74f ,-0.025f ,0.21f ,0.7142f ,-0.04f ,0.19f ,0.7142f ,-0.04f ,0.2f ,0.7142f ,-0.053f ,0.2f ,0.7142f ,-0.027f ,0.21f ,0.68f ,-0.04f ,0.19f ,0.68f ,-0.04f ,0.2f ,0.68f ,-0.05f ,0.2f ,0.68f ,-0.03f ,0.2f ,0.67f ,-0.04f ,0.212f ,0.74f ,-0.065f ,0.188f ,0.74f ,-0.065f ,0.2f ,0.74f ,-0.0756f ,0.2f ,0.74f ,-0.0542f ,0.21f ,0.7177f ,-0.065f ,0.19f ,0.7177f ,-0.065f ,0.2f ,0.7177f ,-0.0751f ,0.2f ,0.7177f ,-0.0549f ,0.21f ,0.695f ,-0.065f ,0.19f ,0.695f ,-0.065f ,0.2f ,0.695f ,-0.075f ,0.2f ,0.695f ,-0.055f ,0.2f ,0.685f ,-0.065f ,0.211f ,0.755f ,-0.085f ,0.189f ,0.755f ,-0.085f ,0.2f ,0.755f ,-0.0952f ,0.2f ,0.755f ,-0.0748f ,0.21f ,0.735f ,-0.085f ,0.19f ,0.735f ,-0.085f ,0.2f ,0.735f ,-0.0951f ,0.2f ,0.735f ,-0.0749f ,0.21f ,0.72f ,-0.085f ,0.19f ,0.72f ,-0.085f ,0.2f ,0.72f ,-0.095f ,0.2f ,0.72f ,-0.075f ,0.2f ,0.71f ,-0.085f ,-0.23f ,1.23f ,-0.04f ,-0.16f ,1.23f ,-0.04f ,-0.2f ,1.235f ,-0.105f ,-0.2f ,1.235f ,0.02f ,-0.244f ,1.1388f ,-0.04f ,-0.165f ,1.1388f ,-0.04f ,-0.2f ,1.1388f ,-0.08f ,-0.2f ,1.1388f ,0.013f ,-0.225f ,1f ,-0.01f ,-0.225f ,1f ,-0.07f ,-0.185f ,1f ,-0.01f ,-0.185f ,1f ,-0.07f ,-0.2f ,1.1388f ,-0.04f ,-0.225f ,0.92f ,-0.04f ,-0.175f ,0.92f ,-0.04f ,-0.2f ,0.92f ,-0.065f ,-0.2f ,0.92f ,-0.015f ,-0.225f ,0.89f ,-0.04f ,-0.175f ,0.89f ,-0.04f ,-0.2f ,0.89f ,-0.065f ,-0.2f ,0.89f ,-0.015f ,-0.218f ,0.86f ,-0.04f ,-0.184f ,0.86f ,-0.04f ,-0.2f ,0.87f ,-0.07f ,-0.2f ,0.87f ,0f ,-0.21f ,0.85f ,0f ,-0.1854f ,0.85f ,0f ,-0.212f ,0.84f ,-0.015f ,-0.183f ,0.84f ,-0.015f ,-0.213f ,0.835f ,-0.04f ,-0.19f ,0.835f ,-0.04f ,-0.211f ,0.835f ,-0.065f ,-0.192f ,0.835f ,-0.065f ,-0.208f ,0.84f ,-0.085f ,-0.19f ,0.84f ,-0.085f ,-0.2f ,0.84f ,-0.095f ,-0.215f ,0.82f ,0f ,-0.193f ,0.815f ,0.005f ,-0.198f ,0.8f ,0.012f ,-0.21f ,0.82f ,0.03f ,-0.19f ,0.82f ,0.03f ,-0.2f ,0.835f ,0.039f ,-0.212f ,0.8f ,0.05f ,-0.188f ,0.8f ,0.05f ,-0.2f ,0.807f ,0.057f ,-0.2f ,0.793f ,0.035f ,-0.2f ,0.774f ,0.076f ,-0.212f ,0.78f ,0.07f ,-0.188f ,0.78f ,0.07f ,-0.2f ,0.785f ,0.075f ,-0.2f ,0.77f ,0.062f ,-0.215f ,0.793f ,-0.015f ,-0.187f ,0.793f ,-0.015f ,-0.2f ,0.793f ,-0.005f ,-0.215f ,0.788f ,-0.04f ,-0.187f ,0.788f ,-0.04f ,-0.215f ,0.793f ,-0.065f ,-0.187f ,0.793f ,-0.065f ,-0.21f ,0.79f ,-0.085f ,-0.19f ,0.79f ,-0.085f ,-0.2f ,0.79f ,-0.095f ,-0.19f ,0.77f ,-0.0275f });
  }
}
private class MFVec3f339 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19f ,0.77f ,-0.0525f ,-0.19f ,0.78f ,-0.0775f ,-0.212f ,0.745f ,-0.015f ,-0.188f ,0.745f ,-0.02f ,-0.2f ,0.745f ,-0.0255f ,-0.2f ,0.745f ,-0.0045f ,-0.211f ,0.72f ,-0.015f ,-0.189f ,0.72f ,-0.015f ,-0.2f ,0.72f ,-0.0252f ,-0.2f ,0.72f ,-0.0048f ,-0.21f ,0.695f ,-0.015f ,-0.19f ,0.695f ,-0.015f ,-0.2f ,0.695f ,-0.025f ,-0.2f ,0.695f ,-0.005f ,-0.2f ,0.685f ,-0.015f ,-0.215f ,0.74f ,-0.04f ,-0.185f ,0.74f ,-0.04f ,-0.2f ,0.74f ,-0.055f ,-0.2f ,0.74f ,-0.025f ,-0.21f ,0.7142f ,-0.04f ,-0.19f ,0.7142f ,-0.04f ,-0.2f ,0.7142f ,-0.053f ,-0.2f ,0.7142f ,-0.027f ,-0.21f ,0.68f ,-0.04f ,-0.19f ,0.68f ,-0.04f ,-0.2f ,0.68f ,-0.05f ,-0.2f ,0.68f ,-0.03f ,-0.2f ,0.67f ,-0.04f ,-0.212f ,0.74f ,-0.065f ,-0.188f ,0.74f ,-0.065f ,-0.2f ,0.74f ,-0.0756f ,-0.2f ,0.74f ,-0.0542f ,-0.21f ,0.7177f ,-0.065f ,-0.19f ,0.7177f ,-0.065f ,-0.2f ,0.7177f ,-0.0751f ,-0.2f ,0.7177f ,-0.0549f ,-0.21f ,0.695f ,-0.065f ,-0.19f ,0.695f ,-0.065f ,-0.2f ,0.695f ,-0.075f ,-0.2f ,0.695f ,-0.055f ,-0.2f ,0.685f ,-0.065f ,-0.211f ,0.755f ,-0.085f ,-0.189f ,0.755f ,-0.085f ,-0.2f ,0.755f ,-0.0952f ,-0.2f ,0.755f ,-0.0748f ,-0.21f ,0.735f ,-0.085f ,-0.19f ,0.735f ,-0.085f ,-0.2f ,0.735f ,-0.0951f ,-0.2f ,0.735f ,-0.0749f ,-0.21f ,0.72f ,-0.085f ,-0.19f ,0.72f ,-0.085f ,-0.2f ,0.72f ,-0.095f ,-0.2f ,0.72f ,-0.075f ,-0.2f ,0.71f ,-0.085f ,0.115f ,0.466f ,0.06f ,0.115f ,0.466f ,-0.055f ,0.15f ,0.466f ,0f ,0.05f ,0.466f ,0f ,0.17f ,0.3f ,0f ,0.06f ,0.3f ,0f ,0.1f ,0.3f ,-0.05f ,0.1f ,0.3f ,0.05f ,0.15f ,0.07f ,0f ,0.085f ,0.086f ,0.0125f ,0.115f ,0.069f ,-0.045f ,0.117f ,0.0975f ,0.0615f ,0.1375f ,0.006f ,-0.03f ,0.095f ,0.006f ,-0.03f ,0.115f ,0.015f ,-0.045f ,0.115f ,0.06f ,0.1f ,0.115f ,0f ,0.07f ,0.165f ,0f ,0.07f ,0.095f ,0f ,0.07f ,0.115f ,0.04f ,0.13f ,0.125f ,0f ,0.12f ,0.165f ,0f ,0.12f ,0.087f ,0f ,0.122f ,0.09f ,0.012f ,0.188f ,0.11f ,0.011f ,0.19f ,0.128f ,0.011f ,0.185f ,0.142f ,0.011f ,0.178f ,0.154f ,0.01f ,0.168f ,-0.115f ,0.466f ,0.06f ,-0.115f ,0.466f ,-0.055f ,-0.17f ,0.466f ,0f ,-0.05f ,0.466f ,0f ,-0.17f ,0.3f ,0f ,-0.06f ,0.3f ,0f ,-0.1f ,0.3f ,-0.05f ,-0.1f ,0.3f ,0.05f ,-0.15f ,0.07f ,0f ,-0.085f ,0.086f ,0.0125f ,-0.115f ,0.069f ,-0.045f ,-0.117f ,0.0975f ,0.0615f ,-0.1375f ,0.006f ,-0.03f ,-0.095f ,0.006f ,-0.03f ,-0.095f ,0.006f ,-0.03f ,-0.115f ,0.06f ,0.1f ,-0.115f ,0f ,0.07f ,-0.165f ,0f ,0.07f ,-0.095f ,0f ,0.07f ,-0.115f ,0.04f ,0.13f ,-0.125f ,0f ,0.12f ,-0.165f ,0f ,0.12f ,-0.087f ,0f ,0.122f ,-0.09f ,0.012f ,0.188f ,-0.11f ,0.011f ,0.19f ,-0.128f ,0.011f ,0.185f ,-0.142f ,0.011f ,0.178f ,-0.154f ,0.01f ,0.168f });
  }
}
private class MFFloat340 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation341 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,1.256f ,1f ,0f ,0f ,2.512f ,1f ,0f ,0f ,3.768f ,1f ,0f ,0f ,5.024f ,1f ,0f ,0f ,6.28f });
  }
}
private class MFFloat342 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation343 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,1f ,0f ,1.256f ,0f ,1f ,0f ,2.512f ,0f ,1f ,0f ,3.768f ,0f ,1f ,0f ,5.024f ,0f ,1f ,0f ,6.28f });
  }
}
private class MFFloat344 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation345 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.256f ,0f ,0f ,1f ,2.512f ,0f ,0f ,1f ,3.768f ,0f ,0f ,1f ,5.024f ,0f ,0f ,1f ,6.28f });
  }
}
private class MFFloat346 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.7f ,0.8f ,0.9f ,1f });
  }
}
private class MFRotation347 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.7f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,-1f ,0f ,0f ,0.5f ,-0.4f ,-1f ,0f ,0.7f ,-0.4f ,-1f ,0f ,0.4f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat348 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.2f ,0.3f ,0.4f ,0.5f ,0.6f ,0.7f ,0.8f ,1f });
  }
}
private class MFRotation349 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.2f ,0.2f ,0.2f ,0.2f ,-0.2f ,0.2f ,0.2f ,0.2f ,-0.2f ,-0.2f ,0.2f ,0.2f ,0.2f ,-0.2f ,0.2f ,0.2f ,-0.2f ,0.2f ,-0.2f ,0.2f ,-0.2f ,0.2f ,-0.2f ,0.2f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat350 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation351 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.2f ,-1f ,0f ,0.11f ,0.2f ,-1f ,0f ,0.11f ,0.1f ,-1f ,0f ,0.1f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat352 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation353 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat354 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.3f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation355 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.4f ,-0.7f ,-0.55f ,0.35f ,0.4f ,-0.7f ,-0.55f ,0.35f ,0.4f ,-0.7f ,-0.55f ,0.35f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat356 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.15f ,0.4f ,0.6f ,0.9f ,1f });
  }
}
private class MFRotation357 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,-0.2f ,0f ,0.01f ,0.5f ,-0.2f ,0f ,0.01f ,0.5f ,-0.2f ,0f ,0.01f ,0.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat358 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.9f ,1f });
  }
}
private class MFRotation359 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.1f ,-0.09f ,0.25f ,0f ,0.1f ,-0.09f ,0.25f ,0f ,0.1f ,-0.09f ,0.25f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat360 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.3f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation361 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,-0.25f ,0.25f ,-1f ,0.125f ,-0.25f ,0.25f ,-1f ,0.125f ,-0.25f ,0.25f ,-1f ,0.125f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat362 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.2f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation363 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,-0.135f ,-0.135f ,1f ,0.357f ,-0.159f ,-0.153f ,1f ,0.355f ,-0.159f ,-0.153f ,1f ,0.357f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat364 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.3f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation365 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,-1f ,0.14f ,0f ,0f ,-1f ,0.14f ,0f ,0f ,-1f ,0.14f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat366 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.2f ,0.3f ,0.4f ,0.5f ,0.6f ,0.7f ,0.8f ,0.9f ,1f });
  }
}
private class MFRotation367 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,0.3f ,0.257f ,0f ,0f ,0.3f ,0.37f ,0f ,0f ,0.3f ,0.39f ,0f ,0f ,0.3f ,0.31f ,0f ,0f ,0.3f ,0.32f ,0f ,0f ,0.3f ,0.34f ,0f ,0f ,0.3f ,0.28f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat368 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.3f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation369 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.25f ,0.25f ,-1f ,0.1f ,0.25f ,0.25f ,-1f ,0.1f ,0.25f ,0.25f ,-1f ,0.1f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat370 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.4f ,0.5f ,0.8f ,1f });
  }
}
private class MFRotation371 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.135f ,0.135f ,1f ,0.27f ,0.135f ,0.135f ,1f ,0.27f ,0.135f ,0.15f ,1f ,0.27f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat372 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.3f ,0.5f ,0.8f ,1f });
  }
}
private class MFRotation373 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.35f ,0.35f ,-0.7f ,0.12f ,0.35f ,0.35f ,-0.9f ,0.12f ,0.35f ,0.35f ,-0.7f ,0.12f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat374 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation375 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.2f ,0.25f ,1f ,0.27f ,0.2f ,0.22f ,1f ,0.27f ,0.22f ,0.2f ,1f ,0.27f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat376 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.03f ,0.08f ,0.2f ,0.3f ,0.4f ,0.5f ,0.8f ,0.95f ,1f });
  }
}
private class MFRotation377 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,-1f ,1f ,1f ,0.5f ,-0.16f ,0.16f ,0.785f ,0.5f ,-0.16f ,0.16f ,0.785f ,1f ,1f ,1f ,0.75f ,1f ,1f ,1f ,0.75f ,1f ,1f ,1f ,0.75f ,1f ,1f ,1f ,0.75f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat378 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.5f ,0.6f ,0.7f ,0.8f ,1f });
  }
}
private class MFRotation379 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.45f ,1f ,0f ,0f ,0.45f ,1f ,0f ,0f ,0.45f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat380 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.5f ,0.6f ,0.7f ,0.8f ,1f });
  }
}
private class MFRotation381 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.45f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat382 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.2f ,0.3f ,0.4f ,0.5f ,0.6f ,0.7f ,0.8f ,0.9f ,1f });
  }
}
private class MFRotation383 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.43f ,0f ,0f ,1f ,0.44f ,0f ,0f ,1f ,0.46f ,0f ,0f ,1f ,0.44f ,0f ,0f ,1f ,0.245f ,0f ,0f ,1f ,0.24f ,0f ,0f ,1f ,0.21f ,0f ,0f ,1f ,0.24f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat384 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.2f ,0.3f ,0.4f ,0.5f ,0.6f ,0.7f ,0.8f ,0.9f ,1f });
  }
}
private class MFRotation385 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.37f ,0f ,0f ,1f ,0.38f ,0f ,0f ,1f ,0.39f ,0f ,0f ,1f ,0.38f ,0f ,0f ,1f ,0.27f ,0f ,0f ,1f ,0.28f ,0f ,0f ,1f ,0.27f ,0f ,0f ,1f ,0.28f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat386 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.7f ,0.8f ,1f });
  }
}
private class MFRotation387 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,-1f ,0.1f ,0f ,0f ,-1f ,0.22f ,0f ,0.5f ,-1f ,0.27f ,0f ,0f ,-1f ,0.1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat388 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation389 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,-0.05f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat390 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.85f ,1f });
  }
}
private class MFRotation391 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,0f ,0f ,-1f ,1.66f ,-0.25f ,0f ,-1f ,1.76f ,0f ,0f ,-1f ,1.256f ,0f ,0f ,-1f ,0.05f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat392 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.15f ,0.3f ,0.5f ,0.7f ,0.9f ,1f });
  }
}
private class MFRotation393 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.55f ,-1f ,-0.25f ,0f ,2.55f ,-1f ,-0.25f ,0f ,2.55f ,-1f ,-0.25f ,0f ,2.55f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat394 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.65f ,0.75f ,0.85f ,1f });
  }
}
private class MFRotation395 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,-0.55f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1.55f ,0f ,0f ,-1f ,1.55f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat396 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation397 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,0.01f ,0.25f ,0f ,0f ,-0.01f ,0.03f ,0f ,0f ,0.01f ,0.05f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat398 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation399 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,1f ,1f ,0f ,0f ,0.4f ,1f ,0f ,0f ,0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat400 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation401 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,1f ,0f ,0.3f ,1f ,1f ,0f ,0.3f ,1f ,1f ,0f ,0.6f ,1f ,1f ,0f ,0.3f ,0f ,1f ,1f ,0f });
  }
}
private class MFFloat402 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.85f ,1f });
  }
}
private class MFRotation403 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.25f ,0f ,1f ,1.76f ,0f ,0f ,1f ,1.66f ,0.25f ,0f ,1f ,1.76f ,0f ,0f ,1f ,1.256f ,0f ,0f ,1f ,0.05f ,0.25f ,0f ,1f ,1.76f });
  }
}
private class MFFloat404 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.0417f ,0.125f ,0.1667f ,0.2083f ,0.25f ,0.2917f ,0.375f ,0.4583f ,0.5f ,0.5417f ,0.5833f ,0.625f ,0.7083f ,0.75f ,0.7917f ,0.875f ,0.9167f ,1f });
  }
}
private class MFVec3f405 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-0.0093f ,0f ,0f ,-0.0039f ,0f ,0f ,-0.0088f ,0f ,0f ,-0.0149f ,0f ,0f ,-0.0264f ,0f ,0f ,-0.0393f ,0f ,0f ,-0.0502f ,0f ,0f ,-0.0747f ,0f ,0f ,-0.0273f ,0f ,0f ,-0.0161f ,0f ,0f ,-0.0113f ,0f ,0f ,-0.0058f ,0f ,0f ,-0.002f ,0f ,0f ,-0.0026f ,0f ,0f ,-0.0143f ,0f ,0f ,-0.038f ,0f ,0f ,-0.0565f ,0f ,0f ,-0.045f ,0f ,0f ,-0.0093f ,0f });
  }
}
private class MFFloat406 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation407 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat408 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation409 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.873f ,0.0609f ,0.484f ,0.2865f ,0.9963f ,-0.0106f ,0.0848f ,0.2488f ,0.9965f ,0.0159f ,-0.0822f ,0.3836f ,-0.7018f ,-0.0322f ,-0.7117f ,0.1289f ,-1f ,0f ,0f ,0.5518f ,-0.9964f ,0.0223f ,0.0817f ,0.5351f ,-0.9809f ,0.0491f ,0.1881f ,0.5204f ,-0.873f ,0.0609f ,0.484f ,0.2865f });
  }
}
private class MFFloat410 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2083f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation411 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.3226f ,1f ,0f ,0f ,0.1556f ,1f ,0f ,0f ,0.0868f ,1f ,0f ,0f ,0.8751f ,1f ,0f ,0f ,1.131f ,1f ,0f ,0f ,0.0996f ,1f ,0f ,0f ,0.3942f ,1f ,0f ,0f ,0.3226f });
  }
}
private class MFFloat412 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.375f ,0.6667f ,0.9167f ,1f });
  }
}
private class MFRotation413 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.0671f ,-1f ,0f ,0f ,0.2152f ,-1f ,0f ,0f ,0.3184f ,-1f ,0f ,0f ,0.4717f ,-1f ,0f ,0f ,0.2912f ,1f ,0f ,0f ,0.2222f ,-1f ,0f ,0f ,0.0671f });
  }
}
private class MFFloat414 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.375f ,0.4583f ,0.5f ,0.6667f ,0.75f ,0.78f ,0.9167f ,1f });
  }
}
private class MFRotation415 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.3533f ,-1f ,0f ,0f ,0.1072f ,1f ,0f ,0f ,0.4f ,1f ,0f ,0f ,0.127f ,-1f ,0f ,0f ,0.018f ,-1f ,0f ,0f ,0.058f ,-1f ,0f ,0f ,0.24f ,-1f ,0f ,0f ,0.35f ,-1f ,0f ,0f ,0.33f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat416 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.3f ,1f });
  }
}
private class MFRotation417 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat418 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation419 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,-0.2f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat420 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.8f ,1f });
  }
}
private class MFRotation421 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.3f ,-1f ,0f ,0f ,0.15f ,1f ,0f ,0f ,0.3f ,0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.3f });
  }
}
private class MFFloat422 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.2917f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation423 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.5831f ,0.0351f ,0.8116f ,0.1481f ,-0.995f ,0.023f ,0.0967f ,0.4683f ,-1f ,0.0019f ,0.008f ,0.4732f ,-0.998f ,-0.0158f ,-0.061f ,0.5079f ,-0.9911f ,-0.0354f ,-0.1286f ,0.5419f ,-0.9131f ,-0.0624f ,-0.403f ,0.3361f ,-0.4306f ,-0.0796f ,-0.899f ,0.0704f ,1f ,0f ,0f ,0.2571f ,0.9891f ,-0.0281f ,0.1444f ,0.3879f ,-0.5831f ,0.0351f ,0.8116f ,0.1481f });
  }
}
private class MFFloat424 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.2917f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation425 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.8573f ,1f ,0f ,0f ,0.8926f ,1f ,0f ,0f ,0.5351f ,1f ,0f ,0f ,0.1756f ,1f ,0f ,0f ,0.1194f ,1f ,0f ,0f ,0.3153f ,1f ,0f ,0f ,0.0935f ,1f ,0f ,0f ,0.0856f ,1f ,0f ,0f ,0.2475f ,1f ,0f ,0f ,0.8573f });
  }
}
private class MFFloat426 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.225f ,0.25f ,0.35f ,0.45f ,0.85f ,0.91f });
  }
}
private class MFRotation427 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.1f ,1f ,0f ,0f ,0.25f });
  }
}
private class MFFloat428 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.22f ,1f });
  }
}
private class MFRotation429 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,-0.2f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,-0.2f });
  }
}
private class MFFloat430 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.8f ,1f });
  }
}
private class MFRotation431 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.15f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.3f ,-1f ,0f ,0f ,0.3f ,-1f ,0f ,0f ,0.15f });
  }
}
private class MFFloat432 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2083f ,0.375f ,0.75f ,0.8333f ,1f });
  }
}
private class MFRotation433 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0.0826f ,-0.0197f ,-0.5974f ,0.8017f ,0.0823f ,0.0093f ,-0.9648f ,0.2627f ,0.1734f ,-0.0124f ,0.9549f ,-0.2968f ,0.0873f ,-0.0081f ,0.9691f ,-0.2463f ,0.158f ,0f ,1f ,0f ,0.0826f });
  }
}
private class MFFloat434 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.4167f ,0.5f ,0.5833f ,0.6667f ,0.75f ,0.8333f ,0.9167f ,1f });
  }
}
private class MFRotation435 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,-1f ,0f ,0.0864f ,0f ,1f ,0f ,0.1825f ,0f ,1f ,0f ,0.1505f ,0f ,1f ,0f ,0.1053f ,0f ,1f ,0f ,0.0439f ,0f ,-1f ,0f ,0.0312f ,0f ,-1f ,0f ,0.0794f ,0f ,-1f ,0f ,0.1616f ,0f ,-1f ,0f ,0.155f ,0f ,-1f ,0f ,0.0864f });
  }
}
private class MFFloat436 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation437 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0.4f ,0.12f ,-1f ,0f ,0.4f ,0.186f ,1f ,0f ,0.1f ,0.336f ,1f ,0f ,0.4f ,0.12f });
  }
}
private class MFFloat438 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation439 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.066f ,-1f ,0f ,0f ,0.488f ,-1f ,0f ,0f ,0.0177f ,-1f ,0f ,0f ,0.066f });
  }
}
private class MFFloat440 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation441 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,-1f ,0f ,0.461f ,-0.3302f ,-0.9275f ,0.1755f ,0.5388f ,0.0328f ,-0.9993f ,-0.0172f ,0.492f ,0f ,-1f ,0f ,0.4611f });
  }
}
private class MFFloat442 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation443 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,-1f ,0.092f ,1f ,0f ,-0.2f ,0.3197f ,-1f ,0f ,-0.5f ,0.1564f ,-1f ,0f ,-1f ,0.092f });
  }
}
private class MFFloat444 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation445 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.4115f ,-1f ,0f ,0f ,0.0925f ,-1f ,0f ,0f ,0.5726f ,-1f ,0f ,0f ,0.4115f });
  }
}
private class MFFloat446 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation447 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.8129f ,0.4759f ,-0.3357f ,0.1346f ,0.1533f ,-0.9878f ,0.0258f ,0.3902f ,-0.5701f ,0.7604f ,-0.311f ,0.366f ,-0.8129f ,0.4759f ,-0.3357f ,0.1346f });
  }
}
}
