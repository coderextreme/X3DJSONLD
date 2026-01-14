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
public class JoeSkeletonSkinSiteSaluteWalk implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new JoeSkeletonSkinSiteSaluteWalk().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/JoeSkeletonSkinSiteSaluteWalk.new.java.x3d");
    model.toFileJSON("../data/JoeSkeletonSkinSiteSaluteWalk.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(2))
        .addMeta(new meta().setName("title").setContent("JoeSkeletonSkinSaluteSiteWalk.x3d"))
        .addMeta(new meta().setName("description").setContent("Comprehensive example showing skeleton, skin, sites and interpolator animation together."))
        .addMeta(new meta().setName("creator").setContent("Joe D. Williams"))
        .addMeta(new meta().setName("created").setContent("9 January 2004"))
        .addMeta(new meta().setName("translated").setContent("4 December 2022"))
        .addMeta(new meta().setName("modified").setContent("Tue, 09 Sep 2025 19:38:38 GMT"))
        .addMeta(new meta().setName("warning").setContent("Under development, numerous errors and warnings"))
        .addMeta(new meta().setName("TODO").setContent("This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value"))
        .addMeta(new meta().setName("TODO").setContent("Provide feedback to tovrmlx3d converter"))
        .addMeta(new meta().setName("TODO").setContent("HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegment HAnimSite - improve diagnostics."))
        .addMeta(new meta().setName("TODO").setContent("ensure name prefix \"Joe_\" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy"))
        .addMeta(new meta().setName("reference").setContent("JoeSkeletonSkinSaluteSiteWalk.original.x3dv"))
        .addMeta(new meta().setName("reference").setContent("JoeSkeletonSkinSaluteSiteWalk.modified1.x3dv"))
        .addMeta(new meta().setName("reference").setContent("JoeSkeletonSkinSaluteSiteWalk.modified2.x3dv"))
        .addMeta(new meta().setName("reference").setContent("https://castle-engine.io/view3dscene.php#section_converting"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_view3dscene.png"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_X_ITE.png"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_X3DOM.png"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_freeWrl.png"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_Octaga.png"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_vivaty.png"))
        .addMeta(new meta().setName("drawing").setContent("JoeSkeletonSkinSiteSaluteWalk_composite.vsdx"))
        .addMeta(new meta().setName("generator").setContent("tovrmlx3d, https://castle-engine.io/convert.php"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"))
        .addMeta(new meta().setName("generator").setContent("x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy"))
        .addMeta(new meta().setName("translator").setContent("Michalis Kamburelis"))
        .addMeta(new meta().setName("translator").setContent("Don Brutzman")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3").setInfo(new MFString0().getArray()))
        .addChild(new WorldInfo().setTitle("HAnim V1 LOA3 Skeleton Joint centers Adapted for approximatrion of ManGLoss Site Location Example and ANIM 200x Default Joint Centers, LOA3").setInfo(new MFString1().getArray()))
        .addChild(new NavigationInfo().setDEF("HeadlightOnRevealsSkinTextureAndColors"))
        .addChild(new Background().setSkyColor(new MFColor2().getArray()).setGroundAngle(new MFFloat3().getArray()).setGroundColor(new MFColor4().getArray()))
        .addChild(new Transform().setDEF("cordsysfloor").setScale(new float[] {0.175f ,0.175f ,0.175f })
          .addChild(new Inline().setDEF("CoordinateAxes").setUrl(new MFString5().getArray())))
        .addChild(new Group().setDEF("ViewpointGroup")
          .addChild(new Viewpoint().setDescription("Front Up View").setPosition(new float[] {-1f ,2f ,2.5f }).setOrientation(new float[] {-1f ,-1f ,0f ,0.55f }))
          .addChild(new Viewpoint().setDescription("From Left View").setPosition(new float[] {-2.5f ,1.5f ,0f }).setOrientation(new float[] {0.3f ,1f ,0f ,-1.57f }))
          .addChild(new Viewpoint().setDescription("Front Mid View").setPosition(new float[] {0f ,0.5f ,1.25f }))
          .addChild(new Viewpoint().setDescription("Front Feet View").setPosition(new float[] {0f ,0f ,0.75f }))
          .addChild(new Viewpoint().setDescription("From Right View").setPosition(new float[] {1f ,1f ,0f }).setOrientation(new float[] {0f ,1f ,0f ,1.57f }))
          .addChild(new Viewpoint().setDescription("Front Head View").setPosition(new float[] {0f ,1.65f ,0.75f }).setCenterOfRotation(new float[] {0f ,1.65f ,0f }))
          .addChild(new Viewpoint().setDescription("Front Mid View").setPosition(new float[] {0f ,1f ,1.75f }))
          .addChild(new Viewpoint().setDescription("Rear View").setPosition(new float[] {0f ,1.5f ,-4f }).setOrientation(new float[] {0f ,1f ,0f ,3.14f }))
          .addChild(new Viewpoint().setDescription("Top View").setPosition(new float[] {0f ,4f ,0f }).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }))
          .addChild(new Viewpoint().setDescription("Bottom View").setPosition(new float[] {0f ,-4f ,0f }).setOrientation(new float[] {1f ,0f ,0f ,1.57f }))
          .addChild(new Viewpoint().setDescription("Right View").setPosition(new float[] {4f ,1.5f ,0f }).setOrientation(new float[] {0f ,1f ,0f ,1.57f })))
        .addChild(new Group().setDEF("VisualizationShapes")
          .addChild(new Transform().setTranslation(new float[] {0f ,2.1f ,0f }).setScale(new float[] {5f ,5f ,5f })
            .addChild(new Shape().setDEF("jointbox")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.5f ).setDiffuseColor(new float[] {0f ,0f ,0f }).setShininess(1f )))
              .setGeometry(new IndexedFaceSet().setCreaseAngle(0.1f ).setCoordIndex(new MFInt326().getArray())
                .setColor(new Color().setColor(new MFColor7().getArray()))
                .setCoord(new Coordinate().setDEF("boxCoords").setPoint(new MFVec3f8().getArray())))))
          .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.773f ,-0.016f }).setScale(new float[] {0.1f ,0.1f ,0.1f })
            .addChild(new Shape().setDEF("sitebox")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(1f ).setDiffuseColor(new float[] {1f ,0f ,0f }).setSpecularColor(new float[] {1f ,0f ,0f }).setEmissiveColor(new float[] {1f ,0f ,0f }).setShininess(0.7f )))
              .setGeometry(new IndexedFaceSet().setCreaseAngle(0.1f ).setCoordIndex(new MFInt329().getArray())
                .setCoord(new Coordinate().setUSE("boxCoords")))))
          .addChild(new Transform().setTranslation(new float[] {0f ,0.2f ,0f }).setScale(new float[] {0.1f ,0.1f ,0.1f })
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("SegmentLine")
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,1f ,0f }).setSpecularColor(new float[] {0f ,1f ,0f }).setEmissiveColor(new float[] {0f ,1f ,0f })))
              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3210().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray())))))
          .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.773f ,-0.016f }).setScale(new float[] {0.1f ,0.1f ,0.1f })
            .addChild(new Shape().setDEF("skinsphere")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.5f ).setDiffuseColor(new float[] {0f ,1f ,0f }).setSpecularColor(new float[] {0f ,1f ,0f }).setEmissiveColor(new float[] {0f ,1f ,0f }).setShininess(1f )))
              .setGeometry(new Sphere().setRadius(0.005f )))))
        .addChild(new Group().setDEF("SpecHumanoid")
          .addChild(new Group().setDEF("JoeISOHumanoid")
            .addChild(new HAnimHumanoid("JoeISOHumanoid").setDEF("Joe_Human").setName("Human").setInfo(new MFString12().getArray())
              .addSkeleton(new HAnimJoint("Joe_Human").setDEF("Joe_HumanoidRoot").setName("humanoid_root").setTranslation(new float[] {0f ,-0.0293965f ,0f }).setCenter(new float[] {0f ,0.875f ,0f })
                .addChild(new HAnimSegment("Joe_HumanoidRoot").setDEF("Joe_sacrum").setName("sacrum")
                  .addChild(new Transform().setTranslation(new float[] {0f ,0.875f ,0f })
                    .addChild(new Shape().setUSE("jointbox")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3213().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))))
                  .addChild(new Transform().setTranslation(new float[] {0f ,0.92f ,0.08f })
                    .addChild(new Shape().setUSE("skinsphere")))
                  .addChild(new Transform().setTranslation(new float[] {0f ,0.87f ,-0.022f })
                    .addChild(new Shape().setUSE("skinsphere"))))
                .addChild(new HAnimJoint("Joe_HumanoidRoot").setDEF("Joe_sacroiliac").setName("sacroiliac").setCenter(new float[] {0f ,0.92f ,0f }).setSkinCoordIndex(new MFInt3215().getArray()).setSkinCoordWeight(new MFFloat16().getArray())
                  .addChild(new HAnimSegment("Joe_sacroiliac").setDEF("Joe_pelvis").setName("pelvis")
                    .addChild(new Transform().setTranslation(new float[] {0f ,0.9149f ,0.0016f })
                      .addChild(new Transform()
                        .addChild(new Shape().setUSE("jointbox"))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3217().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f18().getArray()))))
                    .addChild(new HAnimSite("Joe_pelvis").setDEF("Joe_l_iliocristale").setName("l_iliocristale").setTranslation(new float[] {0.1425f ,1.065f ,0.0033f })
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setDEF("Joe_l_trochanterion").setName("l_trochanterion").setTranslation(new float[] {0.15f ,0.9f ,-0.01f })
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setDEF("Joe_r_iliocristale").setName("r_iliocristale").setTranslation(new float[] {-0.1425f ,1.065f ,0.0033f })
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setDEF("Joe_r_trochanterion").setName("r_trochanterion").setTranslation(new float[] {-0.15f ,0.9f ,-0.01f })
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setDEF("Joe_l_asis").setName("l_asis").setTranslation(new float[] {0.0935f ,1.03f ,0.075f })
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setDEF("Joe_r_asis").setName("r_asis").setTranslation(new float[] {-0.0935f ,1.03f ,0.075f })
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setDEF("Joe_l_psis").setName("l_psis").setTranslation(new float[] {0.0773f ,1.019f ,-0.12f })
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setDEF("Joe_r_psis").setName("r_psis").setTranslation(new float[] {-0.0773f ,1.019f ,-0.12f })
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setDEF("Joe_floormarker").setName("floormarker")
                      .addChild(new Transform().setScale(new float[] {3f ,3f ,3f })
                        .addChild(new Shape().setUSE("sitebox"))))
                    .addChild(new HAnimSite("Joe_pelvis").setDEF("Joe_crotch").setName("crotch").setTranslation(new float[] {0f ,0.87f ,-0.022f })
                      .addChild(new Shape().setUSE("sitebox"))))
                  .addChild(new HAnimJoint("Joe_sacroiliac").setDEF("Joe_l_hip").setName("l_hip").setRotation(new float[] {-0.997243499192129f ,0.0195458722844272f ,0.0715776654808345f ,0.536920945834996f }).setCenter(new float[] {0.1f ,0.92f ,0f }).setSkinCoordIndex(new MFInt3219().getArray()).setSkinCoordWeight(new MFFloat20().getArray())
                    .addChild(new HAnimSegment("Joe_l_hip").setDEF("Joe_l_thigh").setName("l_thigh")
                      .addChild(new Transform().setTranslation(new float[] {0.1f ,0.92f ,0f })
                        .addChild(new Shape().setUSE("jointbox")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3221().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f22().getArray()))))
                      .addChild(new Transform().setTranslation(new float[] {0.1f ,0.9f ,0.0775f })
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {0.079f ,0.92f ,-0.14f })
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {0.171f ,0.65f ,0f })
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {0.02f ,0.65f ,0f })
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {0.1f ,0.65f ,-0.08f })
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {0.1f ,0.65f ,0.07f })
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new HAnimSite("Joe_l_thigh").setDEF("Joe_l_knee_crease").setName("l_knee_crease").setTranslation(new float[] {0.115f ,0.466f ,-0.055f })
                        .addChild(new Shape().setUSE("sitebox")))
                      .addChild(new HAnimSite("Joe_l_thigh").setDEF("Joe_l_femoral_lateral_epicn").setName("l_femoral_lateral_epicn").setTranslation(new float[] {0.17f ,0.466f ,0f })
                        .addChild(new Shape().setUSE("sitebox")))
                      .addChild(new HAnimSite("Joe_l_thigh").setDEF("Joe_l_femoral_medial_epicn").setName("l_femoral_medial_epicn").setTranslation(new float[] {0.05f ,0.466f ,0f })
                        .addChild(new Shape().setUSE("sitebox"))))
                    .addChild(new HAnimJoint("Joe_l_hip").setDEF("Joe_l_knee").setName("l_knee").setRotation(new float[] {1.00000000000001f ,0f ,0f ,0.224421281773429f }).setCenter(new float[] {0.115f ,0.466f ,0f }).setSkinCoordIndex(new MFInt3223().getArray()).setSkinCoordWeight(new MFFloat24().getArray())
                      .addChild(new HAnimSegment("Joe_l_knee").setDEF("Joe_l_calf").setName("l_calf")
                        .addChild(new Transform().setTranslation(new float[] {0.115f ,0.466f ,0f })
                          .addChild(new Shape().setUSE("jointbox")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance().setUSE("SegmentLine"))
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3225().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))))
                        .addChild(new Transform().setTranslation(new float[] {0.115f ,0.466f ,0.06f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.115f ,0.466f ,-0.055f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.17f ,0.466f ,0f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.05f ,0.466f ,0f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.17f ,0.3f ,0f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.06f ,0.3f ,0f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.1f ,0.3f ,-0.05f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.1f ,0.3f ,0.05f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new HAnimSite("Joe_l_calf").setDEF("Joe_l_lateral_malleolus").setName("l_lateral_malleolus").setTranslation(new float[] {0.15f ,0.07f ,0f })
                          .addChild(new Shape().setUSE("sitebox")))
                        .addChild(new HAnimSite("Joe_l_calf").setDEF("Joe_l_medial_malleolus").setName("l_medial_malleolus").setTranslation(new float[] {0.085f ,0.086f ,0.0125f })
                          .addChild(new Shape().setUSE("sitebox"))))
                      .addChild(new HAnimJoint("Joe_l_knee").setDEF("Joe_l_ankle").setName("l_ankle").setRotation(new float[] {-1.00000000000007f ,0f ,0f ,0.0655639608914055f }).setCenter(new float[] {0.115f ,0.069f ,0f }).setSkinCoordIndex(new MFInt3227().getArray()).setSkinCoordWeight(new MFFloat28().getArray())
                        .addChild(new HAnimSegment("Joe_l_ankle").setDEF("Joe_l_hindfoot").setName("l_hindfoot")
                          .addChild(new Transform().setTranslation(new float[] {0.115f ,0.069f ,0f })
                            .addChild(new Shape().setUSE("jointbox")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance().setUSE("SegmentLine"))
                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3229().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))))
                          .addChild(new Transform().setTranslation(new float[] {0.15f ,0.07f ,0f })
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {0.085f ,0.086f ,0.0125f })
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {0.115f ,0.069f ,-0.045f })
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {0.117f ,0.0975f ,0.0615f })
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new HAnimSite("Joe_l_hindfoot").setDEF("Joe_l_sphyrion").setName("l_sphyrion").setTranslation(new float[] {0.09f ,0.056f ,0.0125f })
                            .addChild(new Shape().setUSE("sitebox")))
                          .addChild(new HAnimSite("Joe_l_hindfoot").setDEF("Joe_l_calcaneous_post").setName("l_calcaneous_post").setTranslation(new float[] {0.115f ,0.04f ,-0.055f })
                            .addChild(new Shape().setUSE("sitebox"))))
                        .addChild(new HAnimJoint("Joe_l_ankle").setDEF("Joe_l_subtalar").setName("l_subtalar").setCenter(new float[] {0.115f ,0.031f ,0.03f }).setSkinCoordIndex(new MFInt3231().getArray()).setSkinCoordWeight(new MFFloat32().getArray())
                          .addChild(new HAnimSegment("Joe_l_subtalar").setDEF("Joe_l_midproximal").setName("l_midproximal")
                            .addChild(new Transform().setTranslation(new float[] {0.115f ,0.031f ,0.03f })
                              .addChild(new Shape().setUSE("jointbox")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance().setUSE("SegmentLine"))
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3233().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray()))))
                            .addChild(new Transform().setTranslation(new float[] {0.1375f ,0.006f ,-0.03f })
                              .addChild(new Shape().setUSE("skinsphere")))
                            .addChild(new Transform().setTranslation(new float[] {0.095f ,0.006f ,-0.03f })
                              .addChild(new Shape().setUSE("skinsphere")))
                            .addChild(new Transform().setTranslation(new float[] {0.115f ,0.015f ,-0.045f })
                              .addChild(new Shape().setUSE("skinsphere"))))
                          .addChild(new HAnimJoint("Joe_l_subtalar").setDEF("Joe_l_midtarsal").setName("l_midtarsal").setRotation(new float[] {1.00000000000005f ,0f ,0f ,6.19381467367623f }).setCenter(new float[] {0.115f ,0.037f ,0.09f }).setSkinCoordIndex(new MFInt3235().getArray()).setSkinCoordWeight(new MFFloat36().getArray())
                            .addChild(new HAnimSegment("Joe_l_midtarsal").setDEF("Joe_l_middistal").setName("l_middistal")
                              .addChild(new Transform().setTranslation(new float[] {0.115f ,0.037f ,0.09f })
                                .addChild(new Shape().setUSE("jointbox")))
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3237().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray()))))
                              .addChild(new Transform().setTranslation(new float[] {0.115f ,0.06f ,0.1f })
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {0.115f ,0f ,0.07f })
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {0.165f ,0f ,0.07f })
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {0.095f ,0f ,0.07f })
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new HAnimSite("Joe_l_middistal").setDEF("Joe_l_metatarsal_pha1").setName("l_metatarsal_pha1").setTranslation(new float[] {0.087f ,0.01f ,0.122f })
                                .addChild(new Shape().setUSE("sitebox"))))
                            .addChild(new HAnimJoint("Joe_l_midtarsal").setDEF("Joe_l_metatarsal").setName("l_metatarsal").setRotation(new float[] {1.00000000000253f ,0f ,0f ,0.0175699446988144f }).setCenter(new float[] {0.115f ,0.02f ,0.122f }).setSkinCoordIndex(new MFInt3239().getArray()).setSkinCoordWeight(new MFFloat40().getArray())
                              .addChild(new HAnimSegment("Joe_l_metatarsal").setDEF("Joe_l_forefoot").setName("l_forefoot")
                                .addChild(new Transform().setTranslation(new float[] {0.115f ,0.02f ,0.13f })
                                  .addChild(new Shape().setUSE("jointbox")))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3241().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray()))))
                                .addChild(new Transform().setTranslation(new float[] {0.115f ,0.04f ,0.13f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.125f ,0f ,0.12f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.165f ,0f ,0.12f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.087f ,0f ,0.122f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.09f ,0.012f ,0.188f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.11f ,0.011f ,0.19f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.128f ,0.011f ,0.185f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.142f ,0.011f ,0.178f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.154f ,0.01f ,0.168f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new HAnimSite("Joe_l_forefoot").setDEF("Joe_l_metatarsal_pha5").setName("l_metatarsal_pha5").setTranslation(new float[] {0.165f ,0.01f ,0.12f })
                                  .addChild(new Shape().setUSE("sitebox")))
                                .addChild(new HAnimSite("Joe_l_forefoot").setDEF("Joe_l_digit2").setName("l_digit2").setTranslation(new float[] {0.11f ,0.011f ,0.19f })
                                  .addChild(new Shape().setUSE("sitebox"))))))))))
                  .addChild(new HAnimJoint("Joe_sacroiliac").setDEF("Joe_r_hip").setName("r_hip").setRotation(new float[] {0.999396359667701f ,-0.00306481646315883f ,-0.0346052479115659f ,0.222463685925696f }).setCenter(new float[] {-0.1f ,0.92f ,0f }).setSkinCoordIndex(new MFInt3243().getArray()).setSkinCoordWeight(new MFFloat44().getArray())
                    .addChild(new HAnimSegment("Joe_r_hip").setDEF("Joe_r_thigh").setName("r_thigh")
                      .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.92f ,0f })
                        .addChild(new Shape().setUSE("jointbox")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3245().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray()))))
                      .addChild(new Transform().setTranslation(new float[] {-0.079f ,0.92f ,-0.14f })
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.9f ,0.075f })
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {-0.171f ,0.65f ,0f })
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {-0.02f ,0.65f ,0f })
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.65f ,-0.08f })
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.65f ,0.07f })
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new HAnimSite("Joe_r_thigh").setDEF("Joe_r_knee_crease").setName("r_knee_crease").setTranslation(new float[] {-0.115f ,0.466f ,-0.055f })
                        .addChild(new Shape().setUSE("sitebox")))
                      .addChild(new HAnimSite("Joe_r_thigh").setDEF("Joe_r_femoral_lateral_epicn").setName("r_femoral_lateral_epicn").setTranslation(new float[] {-0.17f ,0.466f ,0f })
                        .addChild(new Shape().setUSE("sitebox")))
                      .addChild(new HAnimSite("Joe_r_thigh").setDEF("Joe_r_femoral_medial_epicn").setName("r_femoral_medial_epicn").setTranslation(new float[] {-0.05f ,0.466f ,0f })
                        .addChild(new Shape().setUSE("sitebox"))))
                    .addChild(new HAnimJoint("Joe_r_hip").setDEF("Joe_r_knee").setName("r_knee").setRotation(new float[] {0.999999999999952f ,0f ,0f ,0.086543259681602f }).setCenter(new float[] {-0.05f ,0.466f ,0f }).setSkinCoordIndex(new MFInt3247().getArray()).setSkinCoordWeight(new MFFloat48().getArray())
                      .addChild(new HAnimSegment("Joe_r_knee").setDEF("Joe_r_calf").setName("r_calf")
                        .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.4913f ,0f })
                          .addChild(new Shape().setUSE("jointbox")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance().setUSE("SegmentLine"))
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3249().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray()))))
                        .addChild(new Transform().setTranslation(new float[] {-0.115f ,0.466f ,0.06f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {-0.115f ,0.466f ,-0.055f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {-0.17f ,0.466f ,0f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {-0.05f ,0.466f ,0f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {-0.17f ,0.3f ,0f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {-0.06f ,0.3f ,0f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.3f ,-0.05f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.3f ,0.05f })
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new HAnimSite("Joe_r_calf").setDEF("Joe_r_lateral_malleolus").setName("r_lateral_malleolus").setTranslation(new float[] {-0.15f ,0.07f ,0f })
                          .addChild(new Shape().setUSE("sitebox")))
                        .addChild(new HAnimSite("Joe_r_calf").setDEF("Joe_r_medial_malleolus").setName("r_medial_malleolus").setTranslation(new float[] {-0.085f ,0.086f ,0.0125f })
                          .addChild(new Shape().setUSE("sitebox"))))
                      .addChild(new HAnimJoint("Joe_r_knee").setDEF("Joe_r_ankle").setName("r_ankle").setRotation(new float[] {-1.00000000000001f ,0f ,0f ,0.337435958789841f }).setCenter(new float[] {-0.115f ,0.069f ,0f }).setSkinCoordIndex(new MFInt3251().getArray()).setSkinCoordWeight(new MFFloat52().getArray())
                        .addChild(new HAnimSegment("Joe_r_ankle").setDEF("Joe_r_hindfoot").setName("r_hindfoot")
                          .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.0712f ,0f })
                            .addChild(new Shape().setUSE("jointbox")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance().setUSE("SegmentLine"))
                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3253().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray()))))
                          .addChild(new Transform().setTranslation(new float[] {-0.15f ,0.07f ,0f })
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {-0.085f ,0.086f ,0.0125f })
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {-0.115f ,0.069f ,-0.045f })
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {-0.117f ,0.0975f ,0.0615f })
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new HAnimSite("Joe_r_hindfoot").setDEF("Joe_r_sphyrion").setName("r_sphyrion").setTranslation(new float[] {-0.09f ,0.056f ,0.0125f })
                            .addChild(new Shape().setUSE("sitebox")))
                          .addChild(new HAnimSite("Joe_r_hindfoot").setDEF("Joe_r_calcaneous_post").setName("r_calcaneous_post").setTranslation(new float[] {-0.115f ,0.04f ,-0.055f })
                            .addChild(new Shape().setUSE("sitebox"))))
                        .addChild(new HAnimJoint("Joe_r_ankle").setDEF("Joe_r_subtalar").setName("r_subtalar").setRotation(new float[] {1.00000000000014f ,0f ,0f ,0.0816433505734676f }).setCenter(new float[] {-0.1f ,0.015f ,-0.01f }).setSkinCoordIndex(new MFInt3255().getArray()).setSkinCoordWeight(new MFFloat56().getArray())
                          .addChild(new HAnimSegment("Joe_r_subtalar").setDEF("Joe_r_midproximal").setName("r_midproximal")
                            .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.015f ,-0.01f })
                              .addChild(new Shape().setUSE("jointbox")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance().setUSE("SegmentLine"))
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3257().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f58().getArray()))))
                            .addChild(new Transform().setTranslation(new float[] {-0.1375f ,0.006f ,-0.03f })
                              .addChild(new Shape().setUSE("skinsphere")))
                            .addChild(new Transform().setTranslation(new float[] {-0.095f ,0.006f ,-0.03f })
                              .addChild(new Shape().setUSE("skinsphere")))
                            .addChild(new Transform().setTranslation(new float[] {-0.095f ,0.006f ,-0.03f })
                              .addChild(new Shape().setUSE("skinsphere"))))
                          .addChild(new HAnimJoint("Joe_r_subtalar").setDEF("Joe_r_midtarsal").setName("r_midtarsal").setRotation(new float[] {-1.00000000000001f ,0f ,0f ,0.14271113543743f }).setCenter(new float[] {-0.115f ,0.037f ,0.09f }).setSkinCoordIndex(new MFInt3259().getArray()).setSkinCoordWeight(new MFFloat60().getArray())
                            .addChild(new HAnimSegment("Joe_r_midtarsal").setDEF("Joe_r_middistal").setName("r_middistal")
                              .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.02f ,0.07f })
                                .addChild(new Shape().setUSE("jointbox")))
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3261().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f62().getArray()))))
                              .addChild(new Transform().setTranslation(new float[] {-0.115f ,0.06f ,0.1f })
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {-0.115f ,0f ,0.07f })
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {-0.165f ,0f ,0.07f })
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {-0.165f ,0f ,0.07f })
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new HAnimSite("Joe_r_middistal").setDEF("Joe_r_metatarsal_pha1").setName("r_metatarsal_pha1").setTranslation(new float[] {-0.115f ,0.02f ,0.122f })
                                .addChild(new Shape().setUSE("sitebox"))))
                            .addChild(new HAnimJoint("Joe_r_midtarsal").setDEF("Joe_r_metatarsal").setName("r_metatarsal").setRotation(new float[] {-1.00000000000001f ,0f ,0f ,0.264860122523209f }).setCenter(new float[] {-0.1f ,0.01f ,0.14f }).setSkinCoordIndex(new MFInt3263().getArray()).setSkinCoordWeight(new MFFloat64().getArray())
                              .addChild(new HAnimSegment("Joe_r_metatarsal").setDEF("Joe_r_forefoot").setName("r_forefoot")
                                .addChild(new Transform().setTranslation(new float[] {-0.1086f ,0.01f ,0.14f })
                                  .addChild(new Shape().setUSE("jointbox")))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3265().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f66().getArray()))))
                                .addChild(new Transform().setTranslation(new float[] {-0.115f ,0.04f ,0.13f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.125f ,0f ,0.12f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.165f ,0f ,0.12f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.087f ,0f ,0.122f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.09f ,0.012f ,0.188f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.11f ,0.011f ,0.19f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.128f ,0.011f ,0.185f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.142f ,0.011f ,0.178f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.154f ,0.01f ,0.168f })
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new HAnimSite("Joe_r_forefoot").setDEF("Joe_r_metatarsal_pha5").setName("r_metatarsal_pha5").setTranslation(new float[] {-0.165f ,0.01f ,0.12f })
                                  .addChild(new Shape().setUSE("sitebox")))
                                .addChild(new HAnimSite("Joe_r_forefoot").setDEF("Joe_r_digit2").setName("r_digit2").setTranslation(new float[] {-0.11f ,0.011f ,0.19f })
                                  .addChild(new Shape().setUSE("sitebox")))))))))))
                .addChild(new HAnimJoint("Joe_HumanoidRoot").setDEF("Joe_vl5").setName("vl5").setRotation(new float[] {-0.0104321818467796f ,0.961748598508238f ,-0.273734913464392f ,0.109829831225253f }).setCenter(new float[] {0f ,1.045f ,-0.095f }).setSkinCoordIndex(new MFInt3267().getArray()).setSkinCoordWeight(new MFFloat68().getArray())
                  .addChild(new HAnimSegment("Joe_vl5").setDEF("Joe_toPelvisMarker").setName("toPelvis")
                    .addChild(new Shape()
                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3269().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f70().getArray())))))
                  .addChild(new HAnimSegment("Joe_vl5").setDEF("Joe_l5").setName("l5")
                    .addChild(new Shape()
                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3271().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f72().getArray()))))
                    .addChild(new HAnimSite("Joe_l5").setDEF("Joe_waist_preferred_post").setName("waist_preferred_post").setTranslation(new float[] {0f ,1.0915f ,-0.1091f })
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_l5").setDEF("Joe_navel").setName("navel").setTranslation(new float[] {0f ,1.07225f ,0.09f })
                      .addChild(new Shape().setUSE("sitebox"))))
                  .addChild(new HAnimJoint("Joe_vl5").setDEF("Joe_vl4").setName("vl4").setCenter(new float[] {0f ,1.068f ,-0.085f })
                    .addChild(new HAnimSegment("Joe_vl4").setDEF("Joe_l4").setName("l4")
                      .addChild(new Shape()
                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3273().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f74().getArray()))))
                      .addChild(new Transform().setTranslation(new float[] {0f ,1.068f ,-0.085f })
                        .addChild(new Shape().setUSE("jointbox"))))
                    .addChild(new HAnimJoint("Joe_vl4").setDEF("Joe_vl3").setName("vl3").setCenter(new float[] {0f ,1.092f ,-0.0725f })
                      .addChild(new HAnimSegment("Joe_vl3").setDEF("Joe_l3").setName("l3")
                        .addChild(new Shape()
                          .setAppearance(new Appearance().setUSE("SegmentLine"))
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3275().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f76().getArray()))))
                        .addChild(new Transform().setTranslation(new float[] {0f ,1.092f ,-0.0725f })
                          .addChild(new Shape().setUSE("jointbox"))))
                      .addChild(new HAnimJoint("Joe_vl3").setDEF("Joe_vl2").setName("vl2").setCenter(new float[] {0f ,1.12f ,-0.065f }).setSkinCoordIndex(new MFInt3277().getArray()).setSkinCoordWeight(new MFFloat78().getArray())
                        .addChild(new HAnimSegment("Joe_vl2").setDEF("Joe_l2").setName("l2")
                          .addChild(new Shape()
                            .setAppearance(new Appearance().setUSE("SegmentLine"))
                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3279().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray()))))
                          .addChild(new Transform().setTranslation(new float[] {0f ,1.12f ,-0.065f })
                            .addChild(new Shape().setUSE("jointbox")))
                          .addChild(new Transform().setTranslation(new float[] {-0.087f ,1.19f ,-0.09f })
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {0.087f ,1.19f ,-0.09f })
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {0.172f ,1.32f ,-0.03f })
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {-0.172f ,1.32f ,-0.03f })
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {0.15f ,1.23f ,-0.015f })
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {-0.15f ,1.23f ,-0.015f })
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new HAnimSite("Joe_l2").setDEF("Joe_r_rib10").setName("r_rib10").setTranslation(new float[] {-0.087f ,1.19f ,0.09f })
                            .addChild(new Shape().setUSE("sitebox")))
                          .addChild(new HAnimSite("Joe_l2").setDEF("Joe_l_rib10").setName("l_rib10").setTranslation(new float[] {0.087f ,1.19f ,0.09f })
                            .addChild(new Shape().setUSE("sitebox")))
                          .addChild(new HAnimSite("Joe_l2").setDEF("Joe_rib10_midspine").setName("rib10_midspine").setTranslation(new float[] {0f ,1.1908f ,-0.1113f })
                            .addChild(new Shape().setUSE("sitebox"))))
                        .addChild(new HAnimJoint("Joe_vl2").setDEF("Joe_vl1").setName("vl1").setCenter(new float[] {0f ,1.1459f ,-0.0625f })
                          .addChild(new HAnimSegment("Joe_vl1").setDEF("Joe_l1").setName("l1")
                            .addChild(new Shape()
                              .setAppearance(new Appearance().setUSE("SegmentLine"))
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3281().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f82().getArray()))))
                            .addChild(new Transform().setTranslation(new float[] {0f ,1.1459f ,-0.0625f })
                              .addChild(new Shape().setUSE("jointbox"))))
                          .addChild(new HAnimJoint("Joe_vl1").setDEF("Joe_vt12").setName("vt12").setCenter(new float[] {0f ,1.179f ,-0.068f })
                            .addChild(new HAnimSegment("Joe_vt12").setDEF("Joe_t12").setName("t12")
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3283().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f84().getArray()))))
                              .addChild(new Transform().setTranslation(new float[] {0f ,1.179f ,-0.068f })
                                .addChild(new Shape().setUSE("jointbox"))))
                            .addChild(new HAnimJoint("Joe_vt12").setDEF("Joe_vt11").setName("vt11").setCenter(new float[] {0f ,1.2679f ,-0.081f })
                              .addChild(new HAnimSegment("Joe_vt11").setDEF("Joe_t11").setName("t11")
                                .addChild(new Shape()
                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3285().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray()))))
                                .addChild(new Transform().setTranslation(new float[] {0f ,1.2145f ,-0.0755f })
                                  .addChild(new Shape().setUSE("jointbox"))))
                              .addChild(new HAnimJoint("Joe_vt11").setDEF("Joe_vt10").setName("vt10").setCenter(new float[] {0f ,1.242f ,-0.09f }).setSkinCoordIndex(new MFInt3287().getArray()).setSkinCoordWeight(new MFFloat88().getArray())
                                .addChild(new HAnimSegment("Joe_vt10").setDEF("Joe_t10").setName("t10")
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3289().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f90().getArray()))))
                                  .addChild(new Transform().setTranslation(new float[] {0f ,1.242f ,-0.09f })
                                    .addChild(new Shape().setUSE("jointbox")))
                                  .addChild(new HAnimSite("Joe_t10").setDEF("Joe_substernale").setName("substernale").setTranslation(new float[] {0f ,1.25f ,0.113f })
                                    .addChild(new Shape().setUSE("sitebox"))))
                                .addChild(new HAnimJoint("Joe_vt10").setDEF("Joe_vt9").setName("vt9").setCenter(new float[] {0f ,1.268f ,-0.1f }).setSkinCoordIndex(new MFInt3291().getArray()).setSkinCoordWeight(new MFFloat92().getArray())
                                  .addChild(new HAnimSegment("Joe_vt9").setDEF("Joe_t9").setName("t9")
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3293().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f94().getArray()))))
                                    .addChild(new Transform().setTranslation(new float[] {0f ,1.268f ,-0.1f })
                                      .addChild(new Shape().setUSE("jointbox")))
                                    .addChild(new HAnimSite("Joe_t9").setDEF("Joe_r_thelion").setName("r_thelion").setTranslation(new float[] {-0.1135f ,1.318f ,0.095f })
                                      .addChild(new Shape().setUSE("sitebox")))
                                    .addChild(new HAnimSite("Joe_t9").setDEF("Joe_l_thelion").setName("l_thelion").setTranslation(new float[] {0.1135f ,1.318f ,0.095f })
                                      .addChild(new Shape().setUSE("sitebox"))))
                                  .addChild(new HAnimJoint("Joe_vt9").setDEF("Joe_vt8").setName("vt8").setCenter(new float[] {0f ,1.294f ,-0.11f })
                                    .addChild(new HAnimSegment("Joe_vt8").setDEF("Joe_t8").setName("t8")
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3295().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f96().getArray()))))
                                      .addChild(new Transform().setTranslation(new float[] {0f ,1.294f ,-0.11f })
                                        .addChild(new Shape().setUSE("jointbox"))))
                                    .addChild(new HAnimJoint("Joe_vt8").setDEF("Joe_vt7").setName("vt7").setCenter(new float[] {0f ,1.323f ,-0.1155f })
                                      .addChild(new HAnimSegment("Joe_vt7").setDEF("Joe_t7").setName("t7")
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance().setUSE("SegmentLine"))
                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3297().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray()))))
                                        .addChild(new Transform().setTranslation(new float[] {0f ,1.323f ,-0.1155f })
                                          .addChild(new Shape().setUSE("jointbox"))))
                                      .addChild(new HAnimJoint("Joe_vt7").setDEF("Joe_vt6").setName("vt6").setCenter(new float[] {0f ,1.352f ,-0.12f })
                                        .addChild(new HAnimSegment("Joe_vt6").setDEF("Joe_t6").setName("t6")
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance().setUSE("SegmentLine"))
                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3299().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f100().getArray()))))
                                          .addChild(new Transform().setTranslation(new float[] {0f ,1.352f ,-0.12f })
                                            .addChild(new Shape().setUSE("jointbox"))))
                                        .addChild(new HAnimJoint("Joe_vt6").setDEF("Joe_vt5").setName("vt5").setCenter(new float[] {0f ,1.381f ,-0.1235f })
                                          .addChild(new HAnimSegment("Joe_vt5").setDEF("Joe_t5").setName("t5")
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance().setUSE("SegmentLine"))
                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32101().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f102().getArray()))))
                                            .addChild(new Transform().setTranslation(new float[] {0f ,1.381f ,-0.1235f })
                                              .addChild(new Shape().setUSE("jointbox"))))
                                          .addChild(new HAnimJoint("Joe_vt5").setDEF("Joe_vt4").setName("vt4").setCenter(new float[] {0f ,1.41f ,-0.1235f }).setSkinCoordIndex(new MFInt32103().getArray()).setSkinCoordWeight(new MFFloat104().getArray())
                                            .addChild(new HAnimSegment("Joe_vt4").setDEF("Joe_t4").setName("t4")
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32105().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f106().getArray()))))
                                              .addChild(new Transform().setTranslation(new float[] {0f ,1.41f ,-0.1235f })
                                                .addChild(new Shape().setUSE("jointbox")))
                                              .addChild(new Transform().setTranslation(new float[] {0f ,1.41f ,-0.145f })
                                                .addChild(new Shape().setUSE("skinsphere"))))
                                            .addChild(new HAnimJoint("Joe_vt4").setDEF("Joe_vt3").setName("vt3").setCenter(new float[] {0f ,1.438f ,-0.12f })
                                              .addChild(new HAnimSegment("Joe_vt3").setDEF("Joe_t3").setName("t3")
                                                .addChild(new Shape()
                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32107().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f108().getArray()))))
                                                .addChild(new Transform().setTranslation(new float[] {0f ,1.438f ,-0.12f })
                                                  .addChild(new Shape().setUSE("jointbox"))))
                                              .addChild(new HAnimJoint("Joe_vt3").setDEF("Joe_vt2").setName("vt2").setCenter(new float[] {0f ,1.468f ,-0.105f })
                                                .addChild(new HAnimSegment("Joe_vt2").setDEF("Joe_t2").setName("t2")
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32109().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray()))))
                                                  .addChild(new Transform().setTranslation(new float[] {0f ,1.468f ,-0.105f })
                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                .addChild(new HAnimJoint("Joe_vt2").setDEF("Joe_vt1").setName("vt1").setCenter(new float[] {0f ,1.497f ,-0.09f }).setSkinCoordIndex(new MFInt32111().getArray()).setSkinCoordWeight(new MFFloat112().getArray())
                                                  .addChild(new HAnimSegment("Joe_vt1").setDEF("Joe_t1").setName("t1")
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32113().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f114().getArray()))))
                                                    .addChild(new Transform().setTranslation(new float[] {0f ,1.497f ,-0.09f })
                                                      .addChild(new Shape().setUSE("jointbox")))
                                                    .addChild(new HAnimSite("Joe_t1").setDEF("Joe_suprasternale").setName("suprasternale").setTranslation(new float[] {0f ,1.44f ,0.03f })
                                                      .addChild(new Shape().setUSE("sitebox")))
                                                    .addChild(new HAnimSite("Joe_t1").setDEF("Joe_cervicale").setName("cervicale").setTranslation(new float[] {0f ,1.53f ,-0.084f })
                                                      .addChild(new Shape().setUSE("sitebox"))))
                                                  .addChild(new HAnimJoint("Joe_vt1").setDEF("Joe_vc7").setName("vc7").setCenter(new float[] {0f ,1.525f ,-0.072f }).setSkinCoordIndex(new MFInt32115().getArray()).setSkinCoordWeight(new MFFloat116().getArray())
                                                    .addChild(new HAnimSegment("Joe_vc7").setDEF("Joe_c7").setName("c7")
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32117().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f118().getArray()))))
                                                      .addChild(new Transform().setTranslation(new float[] {0f ,1.525f ,-0.072f })
                                                        .addChild(new Shape().setUSE("jointbox")))
                                                      .addChild(new HAnimSite("Joe_c7").setDEF("Joe_r_neck_base").setName("r_neck_base").setTranslation(new float[] {-0.0646f ,1.5149f ,-0.0385f })
                                                        .addChild(new Shape().setUSE("sitebox")))
                                                      .addChild(new HAnimSite("Joe_c7").setDEF("Joe_l_neck_base").setName("l_neck_base").setTranslation(new float[] {0.0646f ,1.5149f ,-0.0385f })
                                                        .addChild(new Shape().setUSE("sitebox"))))
                                                    .addChild(new HAnimJoint("Joe_vc7").setDEF("Joe_vc6").setName("vc6").setRotation(new float[] {-0.37139068112485f ,-0.928476688976744f ,0f ,0.0468530829448654f }).setCenter(new float[] {0f ,1.54f ,-0.05f })
                                                      .addChild(new HAnimSegment("Joe_vc6").setDEF("Joe_c6").setName("c6")
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32119().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f120().getArray()))))
                                                        .addChild(new Transform().setTranslation(new float[] {0f ,1.54f ,-0.05f })
                                                          .addChild(new Shape().setUSE("jointbox"))))
                                                      .addChild(new HAnimJoint("Joe_vc6").setDEF("Joe_vc5").setName("vc5").setCenter(new float[] {0f ,1.552f ,-0.035f })
                                                        .addChild(new HAnimSegment("Joe_vc5").setDEF("Joe_c5").setName("c5")
                                                          .addChild(new Transform().setTranslation(new float[] {0f ,1.552f ,-0.035f })
                                                            .addChild(new Shape().setUSE("jointbox")))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32121().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f122().getArray())))))
                                                        .addChild(new HAnimJoint("Joe_vc5").setDEF("Joe_vc4").setName("vc4").setCenter(new float[] {0f ,1.5675f ,-0.0256f })
                                                          .addChild(new HAnimSegment("Joe_vc4").setDEF("Joe_c4").setName("c4")
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32123().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f124().getArray()))))
                                                            .addChild(new Transform().setTranslation(new float[] {0f ,1.5675f ,-0.0256f })
                                                              .addChild(new Shape().setUSE("jointbox"))))
                                                          .addChild(new HAnimJoint("Joe_vc4").setDEF("Joe_vc3").setName("vc3").setCenter(new float[] {0f ,1.58225f ,-0.0185f })
                                                            .addChild(new HAnimSegment("Joe_vc3").setDEF("Joe_c3").setName("c3")
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32125().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f126().getArray()))))
                                                              .addChild(new Transform().setTranslation(new float[] {0f ,1.58225f ,-0.0185f })
                                                                .addChild(new Shape().setUSE("jointbox"))))
                                                            .addChild(new HAnimJoint("Joe_vc3").setDEF("Joe_vc2").setName("vc2").setCenter(new float[] {0f ,1.595f ,-0.0175f })
                                                              .addChild(new HAnimSegment("Joe_vc2").setDEF("Joe_c2").setName("c2")
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32127().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f128().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {0f ,1.595f ,-0.0175f })
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_vc2").setDEF("Joe_vc1").setName("vc1").setCenter(new float[] {0f ,1.61f ,-0.015f })
                                                                .addChild(new HAnimSegment("Joe_vc1").setDEF("Joe_c1").setName("c1")
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32129().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f130().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {0f ,1.61f ,-0.015f })
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_vc1").setDEF("Joe_skullbase").setName("skullbase").setRotation(new float[] {0f ,-1f ,0f ,0.105595270685895f }).setCenter(new float[] {0f ,1.63f ,-0.01f }).setSkinCoordIndex(new MFInt32131().getArray()).setSkinCoordWeight(new MFFloat132().getArray())
                                                                  .addChild(new HAnimSegment("Joe_skullbase").setDEF("Joe_skull").setName("skull")
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32133().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f134().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {0f ,1.63f ,-0.01f })
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setDEF("Joe_skull_tip").setName("skull_tip").setTranslation(new float[] {0f ,1.77f ,0f })
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setDEF("Joe_sellion").setName("sellion").setTranslation(new float[] {0f ,1.665f ,0.09f })
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setDEF("Joe_r_infraorbitale").setName("r_infraorbitale").setTranslation(new float[] {-0.033f ,1.62f ,0.087f })
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setDEF("Joe_l_infraorbitale").setName("l_infraorbitale").setTranslation(new float[] {0.033f ,1.62f ,0.087f })
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setDEF("Joe_supramenton").setName("supramenton").setTranslation(new float[] {0f ,1.55f ,0.097f })
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setDEF("Joe_r_tragion").setName("r_tragion").setTranslation(new float[] {-0.077f ,1.64f ,-0.01f })
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setDEF("Joe_r_gonion").setName("r_gonion").setTranslation(new float[] {-0.052f ,1.58f ,0.015f })
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setDEF("Joe_l_tragion").setName("l_tragion").setTranslation(new float[] {0.077f ,1.64f ,-0.01f })
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setDEF("Joe_l_gonion").setName("l_gonion").setTranslation(new float[] {0.0631f ,1.58f ,0.015f })
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setDEF("Joe_nuchale").setName("nuchale").setTranslation(new float[] {0f ,1.625f ,-0.0925f })
                                                                      .addChild(new Shape().setUSE("sitebox"))))
                                                                  .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_l_eyeball_joint").setName("l_eyeball_joint").setCenter(new float[] {0.034f ,1.659f ,0.06f })
                                                                    .addChild(new HAnimSegment("Joe_l_eyeball_joint").setDEF("Joe_l_eyeball").setName("l_eyeball")
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32135().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f136().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.034f ,1.655f ,0.065f }).setScale(new float[] {1f ,1f ,1.4f })
                                                                        .addChild(new Shape().setUSE("jointbox")))))
                                                                  .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_r_eyeball_joint").setName("r_eyeball_joint").setCenter(new float[] {-0.034f ,1.659f ,0.06f })
                                                                    .addChild(new HAnimSegment("Joe_r_eyeball_joint").setDEF("Joe_r_eyeball").setName("r_eyeball")
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32137().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f138().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.034f ,1.655f ,0.065f }).setScale(new float[] {1f ,1f ,1.4f })
                                                                        .addChild(new Shape().setUSE("jointbox")))))))))))))
                                                  .addChild(new HAnimJoint("Joe_vt1").setDEF("Joe_l_sternoclavicular").setName("l_sternoclavicular").setCenter(new float[] {0.082f ,1.4488f ,-0.0353f }).setSkinCoordIndex(new MFInt32139().getArray()).setSkinCoordWeight(new MFFloat140().getArray())
                                                    .addChild(new HAnimSegment("Joe_l_sternoclavicular").setDEF("Joe_l_clavicle").setName("l_clavicle")
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32141().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f142().getArray()))))
                                                      .addChild(new Transform().setTranslation(new float[] {0.082f ,1.4488f ,-0.0353f })
                                                        .addChild(new Shape().setUSE("jointbox")))
                                                      .addChild(new HAnimSite("Joe_l_clavicle").setDEF("Joe_l_clavicale").setName("l_clavicale").setTranslation(new float[] {0.03f ,1.46f ,0.035f })
                                                        .addChild(new Shape().setUSE("sitebox"))))
                                                    .addChild(new HAnimJoint("Joe_l_sternoclavicular").setDEF("Joe_l_acromioclavicular").setName("l_acromioclavicular").setCenter(new float[] {0.0962f ,1.4269f ,-0.0424f }).setSkinCoordIndex(new MFInt32143().getArray()).setSkinCoordWeight(new MFFloat144().getArray())
                                                      .addChild(new HAnimSegment("Joe_l_acromioclavicular").setDEF("Joe_l_scapula").setName("l_scapula")
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32145().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f146().getArray()))))
                                                        .addChild(new Transform().setTranslation(new float[] {0.0962f ,1.4269f ,-0.0424f })
                                                          .addChild(new Shape().setUSE("jointbox")))
                                                        .addChild(new Transform().setTranslation(new float[] {0.11f ,1.427f ,-0.1375f })
                                                          .addChild(new Shape().setUSE("skinsphere")))
                                                        .addChild(new HAnimSite("Joe_l_scapula").setDEF("Joe_l_acromion").setName("l_acromion").setTranslation(new float[] {0.175f ,1.4825f ,-0.06f })
                                                          .addChild(new Shape().setUSE("sitebox")))
                                                        .addChild(new HAnimSite("Joe_l_scapula").setDEF("Joe_l_axilla_ant").setName("l_axilla_ant").setTranslation(new float[] {0.17f ,1.38f ,0.007f })
                                                          .addChild(new Shape().setUSE("sitebox")))
                                                        .addChild(new HAnimSite("Joe_l_scapula").setDEF("Joe_l_axilla_post").setName("l_axilla_post").setTranslation(new float[] {0.16f ,1.38f ,-0.125f })
                                                          .addChild(new Shape().setUSE("sitebox"))))
                                                      .addChild(new HAnimJoint("Joe_l_acromioclavicular").setDEF("Joe_l_shoulder").setName("l_shoulder").setRotation(new float[] {0.978440403355312f ,0f ,0.206529361307055f ,0.207668332501419f }).setCenter(new float[] {0.2f ,1.44f ,-0.04f }).setSkinCoordIndex(new MFInt32147().getArray()).setSkinCoordWeight(new MFFloat148().getArray())
                                                        .addChild(new HAnimSegment("Joe_l_shoulder").setDEF("Joe_l_upperarm").setName("l_upperarm")
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32149().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f150().getArray()))))
                                                          .addChild(new Transform().setTranslation(new float[] {0.2f ,1.44f ,-0.04f })
                                                            .addChild(new Shape().setUSE("jointbox")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.235f ,1.42f ,-0.0625f })
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.25f ,1.27f ,-0.04f })
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.17f ,1.27f ,-0.04f })
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.2f ,1.27f ,-0.09f })
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.2f ,1.27f ,0.02f })
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new HAnimSite("Joe_l_upperarm").setDEF("Joe_l_humeral_medial_epicn").setName("l_humeral_medial_epicn").setTranslation(new float[] {0.165f ,1.1388f ,-0.04f })
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite("Joe_l_upperarm").setDEF("Joe_l_radiale").setName("l_radiale").setTranslation(new float[] {0.23f ,1.133f ,-0.055f })
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite("Joe_l_upperarm").setDEF("Joe_l_humeral_lateral_epicn").setName("l_humeral_lateral_epicn").setTranslation(new float[] {0.244f ,1.1388f ,-0.04f })
                                                            .addChild(new Shape().setUSE("sitebox"))))
                                                        .addChild(new HAnimJoint("Joe_l_shoulder").setDEF("Joe_l_elbow").setName("l_elbow").setRotation(new float[] {-0.999999999999982f ,0f ,0f ,0.139356882713934f }).setCenter(new float[] {0.2f ,1.1388f ,-0.04f }).setSkinCoordIndex(new MFInt32151().getArray()).setSkinCoordWeight(new MFFloat152().getArray())
                                                          .addChild(new HAnimSegment("Joe_l_elbow").setDEF("Joe_l_forearm").setName("l_forearm")
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32153().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f154().getArray()))))
                                                            .addChild(new Transform().setTranslation(new float[] {0.2f ,1.1388f ,-0.04f })
                                                              .addChild(new Shape().setUSE("jointbox")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.2f ,1.1388f ,-0.013f })
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.225f ,1f ,-0.01f })
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.225f ,1f ,-0.07f })
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.185f ,1f ,-0.01f })
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.185f ,1f ,-0.07f })
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new HAnimSite("Joe_l_forearm").setDEF("Joe_l_radial_styloid").setName("l_radial_styloid").setTranslation(new float[] {0.1901f ,0.8645f ,-0.0415f })
                                                              .addChild(new Shape().setUSE("sitebox")))
                                                            .addChild(new HAnimSite("Joe_l_forearm").setDEF("Joe_l_olecranon").setName("l_olecranon").setTranslation(new float[] {0.2f ,1.1388f ,-0.08f })
                                                              .addChild(new Shape().setUSE("sitebox"))))
                                                          .addChild(new HAnimJoint("Joe_l_elbow").setDEF("Joe_l_wrist").setName("l_wrist").setRotation(new float[] {-0.0686990484698033f ,-0.996963540991216f ,0.0366624968270793f ,0.495650570003821f }).setCenter(new float[] {0.2f ,0.87f ,-0.04f }).setSkinCoordIndex(new MFInt32155().getArray()).setSkinCoordWeight(new MFFloat156().getArray())
                                                            .addChild(new HAnimSegment("Joe_l_wrist").setDEF("Joe_l_hand").setName("l_hand")
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32157().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f158().getArray()))))
                                                              .addChild(new Transform().setTranslation(new float[] {0.2f ,0.87f ,-0.04f })
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new HAnimSite("Joe_l_hand").setDEF("Joe_l_metacarpal_pha2").setName("l_metacarpal_pha2").setTranslation(new float[] {0.2009f ,0.8139f ,-0.0237f })
                                                                .addChild(new Shape().setUSE("sitebox")))
                                                              .addChild(new HAnimSite("Joe_l_hand").setDEF("Joe_l_ulnar_styloid").setName("l_ulnar_styloid").setTranslation(new float[] {0.2142f ,0.8529f ,-0.0648f })
                                                                .addChild(new Shape().setUSE("sitebox")))
                                                              .addChild(new HAnimSite("Joe_l_hand").setDEF("Joe_l_metacarpal_pha5").setName("l_metacarpal_pha5").setTranslation(new float[] {0.1929f ,0.786f ,-0.1122f })
                                                                .addChild(new Shape().setUSE("sitebox"))))
                                                            .addChild(new HAnimJoint("Joe_l_wrist").setDEF("Joe_l_thumb1").setName("l_thumb1").setCenter(new float[] {0.1924f ,0.8472f ,-0.0534f }).setSkinCoordIndex(new MFInt32159().getArray()).setSkinCoordWeight(new MFFloat160().getArray())
                                                              .addChild(new HAnimSegment("Joe_l_thumb1").setDEF("Joe_l_thumb_metacarpal").setName("l_thumb_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32161().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f162().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1924f ,0.8472f ,-0.0534f })
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_l_thumb1").setDEF("Joe_l_thumb2").setName("l_thumb2").setCenter(new float[] {0.1951f ,0.8226f ,0.0246f }).setSkinCoordIndex(new MFInt32163().getArray()).setSkinCoordWeight(new MFFloat164().getArray())
                                                                .addChild(new HAnimSegment("Joe_l_thumb2").setDEF("Joe_l_thumb_proximal").setName("l_thumb_distal")
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32165().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f166().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1951f ,0.8226f ,0.0246f })
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_l_thumb2").setDEF("Joe_l_thumb3").setName("l_thumb3").setCenter(new float[] {0.1955f ,0.8159f ,0.0464f }).setSkinCoordIndex(new MFInt32167().getArray()).setSkinCoordWeight(new MFFloat168().getArray())
                                                                  .addChild(new HAnimSegment("Joe_l_thumb3").setDEF("Joe_l_thumb_distal").setName("l_thumb_distal")
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32169().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f170().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1955f ,0.8159f ,0.0464f })
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new HAnimSite("Joe_l_thumb_distal").setDEF("Joe_l_thumb_distal_tip").setName("l_thumb_distal_tip").setTranslation(new float[] {0.1982f ,0.8061f ,0.0759f })
                                                                      .addChild(new Shape().setUSE("sitebox")))))))
                                                            .addChild(new HAnimJoint("Joe_l_wrist").setDEF("Joe_l_index0").setName("l_index0").setCenter(new float[] {0.1983f ,0.8024f ,-0.028f }).setSkinCoordIndex(new MFInt32171().getArray()).setSkinCoordWeight(new MFFloat172().getArray())
                                                              .addChild(new HAnimSegment("Joe_l_index0").setDEF("Joe_l_index_metacarpal").setName("l_index_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32173().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f174().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.8024f ,-0.028f })
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_l_index0").setDEF("Joe_l_index1").setName("l_index1").setCenter(new float[] {0.1983f ,0.7815f ,-0.028f }).setSkinCoordIndex(new MFInt32175().getArray()).setSkinCoordWeight(new MFFloat176().getArray())
                                                                .addChild(new HAnimSegment("Joe_l_index1").setDEF("Joe_l_index_proximal").setName("l_index_proximal")
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32177().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f178().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.7815f ,-0.028f })
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_l_index1").setDEF("Joe_l_index2").setName("l_index2").setCenter(new float[] {0.2017f ,0.7363f ,-0.0248f }).setSkinCoordIndex(new MFInt32179().getArray()).setSkinCoordWeight(new MFFloat180().getArray())
                                                                  .addChild(new HAnimSegment("Joe_l_index2").setDEF("Joe_l_index_middle").setName("l_index_middle")
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32181().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f182().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.2017f ,0.7363f ,-0.0248f })
                                                                      .addChild(new Shape().setUSE("jointbox"))))
                                                                  .addChild(new HAnimJoint("Joe_l_index2").setDEF("Joe_l_index3").setName("l_index3").setCenter(new float[] {0.2028f ,0.7139f ,-0.0236f }).setSkinCoordIndex(new MFInt32183().getArray()).setSkinCoordWeight(new MFFloat184().getArray())
                                                                    .addChild(new HAnimSegment("Joe_l_index3").setDEF("Joe_l_index_distal").setName("l_index_distal")
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32185().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f186().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.2028f ,0.7139f ,-0.0236f })
                                                                        .addChild(new Shape().setUSE("jointbox")))
                                                                      .addChild(new HAnimSite("Joe_l_index_distal").setDEF("Joe_l_index_distal_tip").setName("l_index_distal_tip").setTranslation(new float[] {0.2089f ,0.6858f ,-0.0245f })
                                                                        .addChild(new Shape().setUSE("sitebox")))
                                                                      .addChild(new HAnimSite("Joe_l_index_distal").setDEF("Joe_l_dactylion").setName("l_dactylion").setTranslation(new float[] {0.2056f ,0.6743f ,-0.0482f })
                                                                        .addChild(new Shape().setUSE("sitebox"))))))))
                                                            .addChild(new HAnimJoint("Joe_l_wrist").setDEF("Joe_l_middle0").setName("l_middle0").setCenter(new float[] {0.1987f ,0.8029f ,-0.053f }).setSkinCoordIndex(new MFInt32187().getArray()).setSkinCoordWeight(new MFFloat188().getArray())
                                                              .addChild(new HAnimSegment("Joe_l_middle0").setDEF("Joe_l_middle_metacarpal").setName("l_middle_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32189().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f190().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1987f ,0.8029f ,-0.053f })
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_l_middle0").setDEF("Joe_l_middle1").setName("l_middle1").setCenter(new float[] {0.1987f ,0.7818f ,-0.053f }).setSkinCoordIndex(new MFInt32191().getArray()).setSkinCoordWeight(new MFFloat192().getArray())
                                                                .addChild(new HAnimSegment("Joe_l_middle1").setDEF("Joe_l_middle_proximal").setName("l_middle_proximal")
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32193().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f194().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1987f ,0.7818f ,-0.053f })
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_l_middle1").setDEF("Joe_l_middle2").setName("l_middle2").setCenter(new float[] {0.2013f ,0.7273f ,-0.0503f }).setSkinCoordIndex(new MFInt32195().getArray()).setSkinCoordWeight(new MFFloat196().getArray())
                                                                  .addChild(new HAnimSegment("Joe_l_middle2").setDEF("Joe_l_middle_middle").setName("l_middle_middle")
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32197().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f198().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.2013f ,0.7273f ,-0.0503f })
                                                                      .addChild(new Shape().setUSE("jointbox"))))
                                                                  .addChild(new HAnimJoint("Joe_l_middle2").setDEF("Joe_l_middle3").setName("l_middle3").setCenter(new float[] {0.2026f ,0.7011f ,-0.0494f }).setSkinCoordIndex(new MFInt32199().getArray()).setSkinCoordWeight(new MFFloat200().getArray())
                                                                    .addChild(new HAnimSegment("Joe_l_middle3").setDEF("Joe_l_middle_distal").setName("l_middle_distal")
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32201().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f202().getArray()))))
                                                                      .addChild(new HAnimSite("Joe_l_middle_distal").setDEF("Joe_l_middle_distal_tip").setName("l_middle_distal_tip").setTranslation(new float[] {0.208f ,0.6731f ,-0.0491f })
                                                                        .addChild(new Shape().setUSE("sitebox")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.2026f ,0.7011f ,-0.0494f })
                                                                        .addChild(new Shape().setUSE("jointbox"))))))))
                                                            .addChild(new HAnimJoint("Joe_l_wrist").setDEF("Joe_l_ring0").setName("l_ring0").setCenter(new float[] {0.1956f ,0.8019f ,-0.0794f }).setSkinCoordIndex(new MFInt32203().getArray()).setSkinCoordWeight(new MFFloat204().getArray())
                                                              .addChild(new HAnimSegment("Joe_l_ring0").setDEF("Joe_l_ring_metacarpal").setName("l_ring_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32205().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f206().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1956f ,0.8019f ,-0.0794f })
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_l_ring0").setDEF("Joe_l_ring1").setName("l_ring1").setCenter(new float[] {0.1956f ,0.7815f ,-0.0794f }).setSkinCoordIndex(new MFInt32207().getArray()).setSkinCoordWeight(new MFFloat208().getArray())
                                                                .addChild(new HAnimSegment("Joe_l_ring1").setDEF("Joe_l_ring_proximal").setName("l_ring_proximal")
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32209().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f210().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1956f ,0.7815f ,-0.0794f })
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_l_ring1").setDEF("Joe_l_ring2").setName("l_ring2").setCenter(new float[] {0.1973f ,0.7287f ,-0.0777f }).setSkinCoordIndex(new MFInt32211().getArray()).setSkinCoordWeight(new MFFloat212().getArray())
                                                                  .addChild(new HAnimSegment("Joe_l_ring2").setDEF("Joe_l_ring_middle").setName("l_ring_middle")
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32213().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f214().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1973f ,0.7287f ,-0.0777f })
                                                                      .addChild(new Shape().setUSE("jointbox"))))
                                                                  .addChild(new HAnimJoint("Joe_l_ring2").setDEF("Joe_l_ring3").setName("l_ring3").setCenter(new float[] {0.1983f ,0.7045f ,-0.0767f }).setSkinCoordIndex(new MFInt32215().getArray()).setSkinCoordWeight(new MFFloat216().getArray())
                                                                    .addChild(new HAnimSegment("Joe_l_ring3").setDEF("Joe_l_ring_distal").setName("l_ring_distal")
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32217().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f218().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.7045f ,-0.0767f })
                                                                        .addChild(new Shape().setUSE("jointbox")))
                                                                      .addChild(new HAnimSite("Joe_l_ring_distal").setDEF("Joe_l_ring_distal_tip").setName("l_ring_distal_tip").setTranslation(new float[] {0.2035f ,0.675f ,-0.0756f })
                                                                        .addChild(new Shape().setUSE("sitebox"))))))))
                                                            .addChild(new HAnimJoint("Joe_l_wrist").setDEF("Joe_l_pinky0").setName("l_pinky0").setCenter(new float[] {0.1925f ,0.8066f ,-0.1036f }).setSkinCoordIndex(new MFInt32219().getArray()).setSkinCoordWeight(new MFFloat220().getArray())
                                                              .addChild(new HAnimSegment("Joe_l_pinky0").setDEF("Joe_l_pinky_metacarpal").setName("l_pinky_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32221().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f222().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1925f ,0.8066f ,-0.1036f })
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_l_pinky0").setDEF("Joe_l_pinky1").setName("l_pinky1").setCenter(new float[] {0.1925f ,0.7866f ,-0.1036f }).setSkinCoordIndex(new MFInt32223().getArray()).setSkinCoordWeight(new MFFloat224().getArray())
                                                                .addChild(new HAnimSegment("Joe_l_pinky1").setDEF("Joe_l_pinky_proximal").setName("l_pinky_proximal")
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32225().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f226().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1925f ,0.7866f ,-0.1036f })
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_l_pinky1").setDEF("Joe_l_pinky2").setName("l_pinky2").setCenter(new float[] {0.1938f ,0.7452f ,-0.1024f }).setSkinCoordIndex(new MFInt32227().getArray()).setSkinCoordWeight(new MFFloat228().getArray())
                                                                  .addChild(new HAnimSegment("Joe_l_pinky2").setDEF("Joe_l_pinky_middle").setName("l_pinky_middle")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1938f ,0.7452f ,-0.1024f })
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32229().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f230().getArray())))))
                                                                  .addChild(new HAnimJoint("Joe_l_pinky2").setDEF("Joe_l_pinky3").setName("l_pinky3").setCenter(new float[] {0.1948f ,0.7277f ,-0.1017f }).setSkinCoordIndex(new MFInt32231().getArray()).setSkinCoordWeight(new MFFloat232().getArray())
                                                                    .addChild(new HAnimSegment("Joe_l_pinky3").setDEF("Joe_l_pinky_distal").setName("l_pinky_distal")
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32233().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f234().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1948f ,0.7277f ,-0.1017f })
                                                                        .addChild(new Shape().setUSE("jointbox")))
                                                                      .addChild(new HAnimSite("Joe_l_pinky_distal").setDEF("Joe_l_pinky_distal_tip").setName("l_pinky_distal_tip").setTranslation(new float[] {0.2014f ,0.7009f ,-0.1012f })
                                                                        .addChild(new Shape().setUSE("sitebox")))))))))))))
                                                  .addChild(new HAnimJoint("Joe_vt1").setDEF("Joe_r_sternoclavicular").setName("r_sternoclavicular").setCenter(new float[] {-0.03f ,1.46f ,0f }).setSkinCoordIndex(new MFInt32235().getArray()).setSkinCoordWeight(new MFFloat236().getArray())
                                                    .addChild(new HAnimSegment("Joe_r_sternoclavicular").setDEF("Joe_r_clavicle").setName("r_clavicle")
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32237().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f238().getArray()))))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.03f ,1.46f ,0.02f })
                                                        .addChild(new Shape().setUSE("jointbox")))
                                                      .addChild(new HAnimSite("Joe_r_clavicle").setDEF("Joe_r_clavicale").setName("r_clavicale").setTranslation(new float[] {-0.03f ,1.46f ,0.035f })
                                                        .addChild(new Shape().setUSE("sitebox"))))
                                                    .addChild(new HAnimJoint("Joe_r_sternoclavicular").setDEF("Joe_r_acromioclavicular").setName("r_acromioclavicular").setCenter(new float[] {-0.09f ,1.41f ,-0.11f }).setSkinCoordIndex(new MFInt32239().getArray()).setSkinCoordWeight(new MFFloat240().getArray())
                                                      .addChild(new HAnimSegment("Joe_r_acromioclavicular").setDEF("Joe_r_scapula").setName("r_scapula")
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32241().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f242().getArray()))))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.09f ,1.41f ,-0.09f })
                                                          .addChild(new Shape().setUSE("jointbox")))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.11f ,1.427f ,-0.1375f })
                                                          .addChild(new Shape().setUSE("skinsphere")))
                                                        .addChild(new HAnimSite("Joe_r_scapula").setDEF("Joe_r_acromion").setName("r_acromion").setTranslation(new float[] {-0.178f ,1.4825f ,-0.0625f })
                                                          .addChild(new Shape().setUSE("sitebox")))
                                                        .addChild(new HAnimSite("Joe_r_scapula").setDEF("Joe_r_axilla_ant").setName("r_axilla_ant").setTranslation(new float[] {-0.17f ,1.38f ,0.007f })
                                                          .addChild(new Shape().setUSE("sitebox")))
                                                        .addChild(new HAnimSite("Joe_r_scapula").setDEF("Joe_r_axilla_post").setName("r_axilla_post").setTranslation(new float[] {-0.16f ,1.38f ,-0.127f })
                                                          .addChild(new Shape().setUSE("sitebox"))))
                                                      .addChild(new HAnimJoint("Joe_r_acromioclavicular").setDEF("Joe_r_shoulder").setName("r_shoulder").setRotation(new float[] {0f ,0f ,-0.999999999999779f ,0.0372377698785245f }).setCenter(new float[] {-0.2f ,1.44f ,-0.04f }).setSkinCoordIndex(new MFInt32243().getArray()).setSkinCoordWeight(new MFFloat244().getArray())
                                                        .addChild(new HAnimSegment("Joe_r_shoulder").setDEF("Joe_r_upperarm").setName("r_upperarm")
                                                          .addChild(new Transform().setTranslation(new float[] {-0.2f ,1.44f ,-0.04f })
                                                            .addChild(new Shape().setUSE("jointbox")))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32245().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f246().getArray()))))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.178f ,1.4825f ,-0.0625f })
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.17f ,1.38f ,0.007f })
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.16f ,1.38f ,-0.127f })
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.235f ,1.42f ,-0.0625f })
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.23f ,1.235f ,-0.04f })
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.16f ,1.23f ,-0.04f })
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.2f ,1.23f ,-0.105f })
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.2f ,1.235f ,0.02f })
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new HAnimSite("Joe_r_upperarm").setDEF("Joe_r_humeral_medial_epicn").setName("r_humeral_medial_epicn").setTranslation(new float[] {-0.165f ,1.1388f ,-0.04f })
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite("Joe_r_upperarm").setDEF("Joe_r_radiale").setName("r_radiale").setTranslation(new float[] {-0.23f ,1.133f ,-0.055f })
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite("Joe_r_upperarm").setDEF("Joe_r_humeral_lateral_epicn").setName("r_humeral_lateral_epicn").setTranslation(new float[] {-0.244f ,1.1388f ,-0.04f })
                                                            .addChild(new Shape().setUSE("sitebox"))))
                                                        .addChild(new HAnimJoint("Joe_r_shoulder").setDEF("Joe_r_elbow").setName("r_elbow").setRotation(new float[] {-0.970142500145333f ,-0.242535625036333f ,0f ,0.149344152360623f }).setCenter(new float[] {-0.2f ,1.1388f ,-0.04f }).setSkinCoordIndex(new MFInt32247().getArray()).setSkinCoordWeight(new MFFloat248().getArray())
                                                          .addChild(new HAnimSegment("Joe_r_elbow").setDEF("Joe_r_forearm").setName("r_forearm")
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32249().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f250().getArray()))))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.2f ,1.1388f ,-0.04f })
                                                              .addChild(new Shape().setUSE("jointbox")))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.2f ,1.1388f ,0.013f })
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.225f ,1f ,-0.01f })
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.225f ,1f ,-0.07f })
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.185f ,1f ,-0.01f })
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.185f ,1f ,-0.07f })
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new HAnimSite("Joe_r_forearm").setDEF("Joe_r_radial_styloid").setName("r_radial_styloid").setTranslation(new float[] {-0.2f ,0.9f ,-0.015f })
                                                              .addChild(new Shape().setUSE("sitebox")))
                                                            .addChild(new HAnimSite("Joe_r_forearm").setDEF("Joe_r_olecranon").setName("r_olecranon").setTranslation(new float[] {-0.2f ,1.1388f ,-0.08f })
                                                              .addChild(new Shape().setUSE("sitebox"))))
                                                          .addChild(new HAnimJoint("Joe_r_elbow").setDEF("Joe_r_wrist").setName("r_wrist").setCenter(new float[] {-0.2f ,0.89f ,-0.04f }).setSkinCoordIndex(new MFInt32251().getArray()).setSkinCoordWeight(new MFFloat252().getArray())
                                                            .addChild(new HAnimSegment("Joe_r_wrist").setDEF("Joe_r_hand").setName("r_hand")
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32253().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f254().getArray()))))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.89f ,-0.04f })
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new HAnimSite("Joe_r_hand").setDEF("Joe_r_ulnar_styloid").setName("r_ulnar_styloid").setTranslation(new float[] {-0.2f ,0.9f ,-0.085f })
                                                                .addChild(new Shape().setUSE("sitebox"))))
                                                            .addChild(new HAnimJoint("Joe_r_wrist").setDEF("Joe_r_thumb1").setName("r_thumb1").setRotation(new float[] {0.999999999999976f ,0f ,0f ,0.11171329853783f }).setCenter(new float[] {-0.2f ,0.85f ,0f }).setSkinCoordIndex(new MFInt32255().getArray()).setSkinCoordWeight(new MFFloat256().getArray())
                                                              .addChild(new HAnimSegment("Joe_r_thumb1").setDEF("Joe_r_thumb_metacarpal").setName("r_thumb_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32257().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f258().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.85f ,0f })
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_r_thumb1").setDEF("Joe_r_thumb2").setName("r_thumb2").setRotation(new float[] {0.707106781186553f ,0.707106781186553f ,0f ,0.167569951968385f }).setCenter(new float[] {-0.2f ,0.82f ,0.03f }).setSkinCoordIndex(new MFInt32259().getArray()).setSkinCoordWeight(new MFFloat260().getArray())
                                                                .addChild(new HAnimSegment("Joe_r_thumb2").setDEF("Joe_r_thumb_proximal").setName("r_thumb_proximal")
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32261().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f262().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.82f ,0.03f })
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_r_thumb2").setDEF("Joe_r_thumb3").setName("r_thumb3").setRotation(new float[] {0.707106781186553f ,0.707106781186553f ,0f ,0.167569951968385f }).setCenter(new float[] {-0.2f ,0.8f ,0.05f }).setSkinCoordIndex(new MFInt32263().getArray()).setSkinCoordWeight(new MFFloat264().getArray())
                                                                  .addChild(new HAnimSegment("Joe_r_thumb3").setDEF("Joe_r_thumb_distal").setName("r_thumb_distal")
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32265().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f266().getArray()))))
                                                                    .addChild(new Transform().setDEF("Thumbnail").setTranslation(new float[] {-0.2f ,0.785f ,0.075f })
                                                                      .addChild(new Shape().setUSE("skinsphere")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.8f ,0.05f })
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new HAnimSite("Joe_r_thumb_distal").setDEF("Joe_r_thumb_distal_tip").setName("r_thumb_distal_tip").setTranslation(new float[] {-0.2f ,0.78f ,0.07f })
                                                                      .addChild(new Shape().setUSE("sitebox")))))))
                                                            .addChild(new HAnimJoint("Joe_r_wrist").setDEF("Joe_r_index0").setName("r_index0").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.84f ,-0.015f }).setSkinCoordIndex(new MFInt32267().getArray()).setSkinCoordWeight(new MFFloat268().getArray())
                                                              .addChild(new HAnimSegment("Joe_r_index0").setDEF("Joe_r_index_metacarpal").setName("r_index_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32269().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f270().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.84f ,-0.015f })
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new HAnimSite("Joe_r_index_metacarpal").setDEF("Joe_r_metacarpal_pha2").setName("r_metacarpal_pha2").setTranslation(new float[] {-0.2f ,0.793f ,-0.005f })
                                                                  .addChild(new Shape().setUSE("sitebox"))))
                                                              .addChild(new HAnimJoint("Joe_r_index0").setDEF("Joe_r_index1").setName("r_index1").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.793f ,-0.015f }).setSkinCoordIndex(new MFInt32271().getArray()).setSkinCoordWeight(new MFFloat272().getArray())
                                                                .addChild(new HAnimSegment("Joe_r_index1").setDEF("Joe_r_index_proximal").setName("r_index_proximal")
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32273().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f274().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.793f ,-0.015f })
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_r_index1").setDEF("Joe_r_index2").setName("r_index2").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.745f ,-0.015f }).setSkinCoordIndex(new MFInt32275().getArray()).setSkinCoordWeight(new MFFloat276().getArray())
                                                                  .addChild(new HAnimSegment("Joe_r_index2").setDEF("Joe_r_index_middle").setName("r_index_middle")
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32277().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f278().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.745f ,-0.015f })
                                                                      .addChild(new Shape().setUSE("jointbox"))))
                                                                  .addChild(new HAnimJoint("Joe_r_index2").setDEF("Joe_r_index3").setName("r_index3").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.72f ,-0.015f }).setSkinCoordIndex(new MFInt32279().getArray()).setSkinCoordWeight(new MFFloat280().getArray())
                                                                    .addChild(new HAnimSegment("Joe_r_index3").setDEF("Joe_r_index_distal").setName("r_index_distal")
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32281().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f282().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.72f ,-0.015f })
                                                                        .addChild(new Shape().setUSE("jointbox")))
                                                                      .addChild(new HAnimSite("Joe_r_index_distal").setDEF("Joe_r_index_distal_tip").setName("r_index_distal_tip").setTranslation(new float[] {-0.2f ,0.695f ,-0.015f })
                                                                        .addChild(new Shape().setUSE("sitebox"))))))))
                                                            .addChild(new HAnimJoint("Joe_r_wrist").setDEF("Joe_r_middle0").setName("r_middle0").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.835f ,-0.04f }).setSkinCoordIndex(new MFInt32283().getArray()).setSkinCoordWeight(new MFFloat284().getArray())
                                                              .addChild(new HAnimSegment("Joe_r_middle0").setDEF("Joe_r_middle_metacarpal").setName("r_middle_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32285().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f286().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.835f ,-0.04f })
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_r_middle0").setDEF("Joe_r_middle1").setName("r_middle1").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.788f ,-0.04f }).setSkinCoordIndex(new MFInt32287().getArray()).setSkinCoordWeight(new MFFloat288().getArray())
                                                                .addChild(new HAnimSegment("Joe_r_middle1").setDEF("Joe_r_middle_proximal").setName("r_middle_proximal")
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32289().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f290().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.788f ,-0.04f })
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_r_middle1").setDEF("Joe_r_middle2").setName("r_middle2").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.74f ,-0.04f }).setSkinCoordIndex(new MFInt32291().getArray()).setSkinCoordWeight(new MFFloat292().getArray())
                                                                  .addChild(new HAnimSegment("Joe_r_middle2").setDEF("Joe_r_middle_middle").setName("r_middle_middle")
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32293().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f294().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.74f ,-0.04f })
                                                                      .addChild(new Shape().setUSE("jointbox"))))
                                                                  .addChild(new HAnimJoint("Joe_r_middle2").setDEF("Joe_r_middle3").setName("r_middle3").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.7142f ,-0.04f }).setSkinCoordIndex(new MFInt32295().getArray()).setSkinCoordWeight(new MFFloat296().getArray())
                                                                    .addChild(new HAnimSegment("Joe_r_middle3").setDEF("Joe_r_middle_distal").setName("r_middle_distal")
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32297().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f298().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.7142f ,-0.04f })
                                                                        .addChild(new Shape().setUSE("jointbox")))
                                                                      .addChild(new HAnimSite("Joe_r_middle_distal").setDEF("Joe_r_dactylion").setName("r_dactylion").setTranslation(new float[] {-0.2f ,0.68f ,-0.04f })
                                                                        .addChild(new Shape().setUSE("sitebox")))
                                                                      .addChild(new HAnimSite("Joe_r_middle_distal").setDEF("Joe_r_middle_distal_tip").setName("r_middle_distal_tip").setTranslation(new float[] {-0.2f ,0.68f ,-0.04f })
                                                                        .addChild(new Shape().setUSE("sitebox"))))))))
                                                            .addChild(new HAnimJoint("Joe_r_wrist").setDEF("Joe_r_ring0").setName("r_ring0").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.835f ,-0.065f }).setSkinCoordIndex(new MFInt32299().getArray()).setSkinCoordWeight(new MFFloat300().getArray())
                                                              .addChild(new HAnimSegment("Joe_r_ring0").setDEF("Joe_r_ring_metacarpal").setName("r_ring_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32301().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f302().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.835f ,-0.065f })
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_r_ring0").setDEF("Joe_r_ring1").setName("r_ring1").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.793f ,-0.065f }).setSkinCoordIndex(new MFInt32303().getArray()).setSkinCoordWeight(new MFFloat304().getArray())
                                                                .addChild(new HAnimSegment("Joe_r_ring1").setDEF("Joe_r_ring_proximal").setName("r_ring_proximal")
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32305().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f306().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.793f ,-0.065f })
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_r_ring1").setDEF("Joe_r_ring2").setName("r_ring2").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.74f ,-0.065f }).setSkinCoordIndex(new MFInt32307().getArray()).setSkinCoordWeight(new MFFloat308().getArray())
                                                                  .addChild(new HAnimSegment("Joe_r_ring2").setDEF("Joe_r_ring_middle").setName("r_ring_middle")
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32309().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f310().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.74f ,-0.065f })
                                                                      .addChild(new Shape().setUSE("jointbox"))))
                                                                  .addChild(new HAnimJoint("Joe_r_ring2").setDEF("Joe_r_ring3").setName("r_ring3").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.7177f ,-0.065f }).setSkinCoordIndex(new MFInt32311().getArray()).setSkinCoordWeight(new MFFloat312().getArray())
                                                                    .addChild(new HAnimSegment("Joe_r_ring3").setDEF("Joe_r_ring_distal").setName("r_ring_distal")
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32313().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f314().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.7177f ,-0.065f })
                                                                        .addChild(new Shape().setUSE("jointbox")))
                                                                      .addChild(new HAnimSite("Joe_r_ring_distal").setDEF("Joe_r_ring_distal_tip").setName("r_ring_distal_tip").setTranslation(new float[] {-0.2f ,0.695f ,-0.065f })
                                                                        .addChild(new Shape().setUSE("sitebox"))))))))
                                                            .addChild(new HAnimJoint("Joe_r_wrist").setDEF("Joe_r_pinky0").setName("r_pinky0").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.84f ,-0.085f }).setSkinCoordIndex(new MFInt32315().getArray()).setSkinCoordWeight(new MFFloat316().getArray())
                                                              .addChild(new HAnimSegment("Joe_r_pinky0").setDEF("Joe_r_pinky_metacarpal").setName("r_pinky_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32317().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f318().getArray()))))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.84f ,-0.085f })
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new HAnimSite("Joe_r_pinky_metacarpal").setDEF("Joe_r_metacarpal_pha5").setName("r_metacarpal_pha5").setTranslation(new float[] {-0.2f ,0.79f ,-0.095f })
                                                                  .addChild(new Shape().setUSE("sitebox"))))
                                                              .addChild(new HAnimJoint("Joe_r_pinky0").setDEF("Joe_r_pinky1").setName("r_pinky1").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.79f ,-0.085f }).setSkinCoordIndex(new MFInt32319().getArray()).setSkinCoordWeight(new MFFloat320().getArray())
                                                                .addChild(new HAnimSegment("Joe_r_pinky1").setDEF("Joe_r_pinky_proximal").setName("r_pinky_proximal")
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32321().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f322().getArray()))))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.79f ,-0.085f })
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_r_pinky1").setDEF("Joe_r_pinky2").setName("r_pinky2").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.755f ,-0.085f }).setSkinCoordIndex(new MFInt32323().getArray()).setSkinCoordWeight(new MFFloat324().getArray())
                                                                  .addChild(new HAnimSegment("Joe_r_pinky2").setDEF("Joe_r_pinky_middle").setName("r_pinky_middle")
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32325().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f326().getArray()))))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.755f ,-0.085f })
                                                                      .addChild(new Shape().setUSE("jointbox"))))
                                                                  .addChild(new HAnimJoint("Joe_r_pinky2").setDEF("Joe_r_pinky3").setName("r_pinky3").setRotation(new float[] {0f ,0f ,1.00000000001315f ,0.0055856647187357f }).setCenter(new float[] {-0.2f ,0.735f ,-0.09f }).setSkinCoordIndex(new MFInt32327().getArray()).setSkinCoordWeight(new MFFloat328().getArray())
                                                                    .addChild(new HAnimSegment("Joe_r_pinky3").setDEF("Joe_r_pinky_distal").setName("r_pinky_distal")
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32329().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f330().getArray()))))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.735f ,-0.085f })
                                                                        .addChild(new Shape().setUSE("jointbox")))
                                                                      .addChild(new HAnimSite("Joe_r_pinky_distal").setDEF("Joe_r_pinky_distal_tip").setName("r_pinky_distal_tip").setTranslation(new float[] {-0.2f ,0.72f ,-0.085f })
                                                                        .addChild(new Shape().setUSE("sitebox")))))))))))))))))))))))))))))))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_HumanoidRoot"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_sacroiliac"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_hip"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_knee"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_ankle"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_subtalar"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_midtarsal"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_metatarsal"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_hip"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_knee"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_ankle"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_subtalar"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_midtarsal"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_metatarsal"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vl5"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vl4"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vl3"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vl2"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vl1"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt12"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt11"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt10"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt9"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt8"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt7"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt6"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt5"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt4"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt3"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt2"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt1"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vc7"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vc6"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vc5"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vc4"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vc3"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vc2"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vc1"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_skullbase"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_eyeball_joint"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_eyeball_joint"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_sternoclavicular"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_acromioclavicular"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_shoulder"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_elbow"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_wrist"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_thumb1"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_thumb2"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_thumb3"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_index0"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_index1"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_index2"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_index3"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_middle0"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_middle1"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_middle2"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_middle3"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_ring0"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_ring1"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_ring2"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_ring3"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_pinky0"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_pinky1"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_pinky2"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_pinky3"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_sternoclavicular"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_acromioclavicular"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_shoulder"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_elbow"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_wrist"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_thumb1"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_thumb2"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_thumb3"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_index0"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_index1"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_index2"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_index3"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_middle0"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_middle1"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_middle2"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_middle3"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_ring0"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_ring1"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_ring2"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_ring3"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_pinky0"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_pinky1"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_pinky2"))
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_pinky3"))
              .setSkinCoord(new Coordinate().setDEF("TheSkinCoord").setPoint(new MFVec3f331().getArray().append(new MFVec3f332().getArray())))
              .addSkin(new Shape().setDEF("SkinShape")
                .setAppearance(new Appearance().setDEF("SkinAppearance")
                  .setMaterial(new Material().setDEF("SkinMaterial").setAmbientIntensity(0.6f ).setDiffuseColor(new float[] {1f ,1f ,1f }).setShininess(0.6f ).setTransparency(0.2f ))
                  .setTexture(new ImageTexture().setDEF("zBlueSpiralBkg2").setDescription("Blue Spiral Pattern").setUrl(new MFString333().getArray())))
                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.1f ).setCoordIndex(new MFInt32334().getArray().append(new MFInt32335().getArray()).append(new MFInt32336().getArray()).append(new MFInt32337().getArray()))
                  .setColor(new Color().setColor(new MFColor338().getArray().append(new MFColor339().getArray()).append(new MFColor340().getArray())))
                  .setCoord(new Coordinate().setUSE("TheSkinCoord")))))))
        .addChild(new TimeSensor().setDEF("Time1").setCycleInterval(2.86d).setLoop(true))
        .addChild(new TimeSensor().setDEF("Time2").setCycleInterval(5.72d).setLoop(true))
        .addChild(new TimeSensor().setDEF("Time3").setCycleInterval(5.8d).setLoop(true))
        .addChild(new OrientationInterpolator().setDEF("Pitch").setKey(new MFFloat341().getArray()).setKeyValue(new MFRotation342().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Yaw").setKey(new MFFloat343().getArray()).setKeyValue(new MFRotation344().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Roll").setKey(new MFFloat345().getArray()).setKeyValue(new MFRotation346().getArray()))
        .addChild(new OrientationInterpolator().setDEF("vc6Yaw").setKey(new MFFloat347().getArray()).setKeyValue(new MFRotation348().getArray()))
        .addChild(new OrientationInterpolator().setDEF("EyeballsRotation").setKey(new MFFloat349().getArray()).setKeyValue(new MFRotation350().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_sternoclavicularRelax").setKey(new MFFloat351().getArray()).setKeyValue(new MFRotation352().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_acromioclavicularRelax").setKey(new MFFloat353().getArray()).setKeyValue(new MFRotation354().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_shoulderRelax").setKey(new MFFloat355().getArray()).setKeyValue(new MFRotation356().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_elbowRelax").setKey(new MFFloat357().getArray()).setKeyValue(new MFRotation358().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_wristRelax").setKey(new MFFloat359().getArray()).setKeyValue(new MFRotation360().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_index0Relax").setKey(new MFFloat361().getArray()).setKeyValue(new MFRotation362().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_index1Relax").setKey(new MFFloat363().getArray()).setKeyValue(new MFRotation364().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_middle0Relax").setKey(new MFFloat365().getArray()).setKeyValue(new MFRotation366().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_middle1Relax").setKey(new MFFloat367().getArray()).setKeyValue(new MFRotation368().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_ring0Relax").setKey(new MFFloat369().getArray()).setKeyValue(new MFRotation370().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_ring1Relax").setKey(new MFFloat371().getArray()).setKeyValue(new MFRotation372().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_pinky0Relax").setKey(new MFFloat373().getArray()).setKeyValue(new MFRotation374().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_pinky1Relax").setKey(new MFFloat375().getArray()).setKeyValue(new MFRotation376().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_thumb1Relax").setKey(new MFFloat377().getArray()).setKeyValue(new MFRotation378().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_thumb2Relax").setKey(new MFFloat379().getArray()).setKeyValue(new MFRotation380().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_thumb3Relax").setKey(new MFFloat381().getArray()).setKeyValue(new MFRotation382().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_fingers2Relax").setKey(new MFFloat383().getArray()).setKeyValue(new MFRotation384().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_fingers3Relax").setKey(new MFFloat385().getArray()).setKeyValue(new MFRotation386().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_sternoclavicularRoll").setKey(new MFFloat387().getArray()).setKeyValue(new MFRotation388().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_acromioclavicularRoll").setKey(new MFFloat389().getArray()).setKeyValue(new MFRotation390().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_shoulderRoll").setKey(new MFFloat391().getArray()).setKeyValue(new MFRotation392().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_ForeArmPitch").setKey(new MFFloat393().getArray()).setKeyValue(new MFRotation394().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_wristRoll").setKey(new MFFloat395().getArray()).setKeyValue(new MFRotation396().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_handPitch").setKey(new MFFloat397().getArray()).setKeyValue(new MFRotation398().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_thumb1Pitch").setKey(new MFFloat399().getArray()).setKeyValue(new MFRotation400().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_thumb2Pitch").setKey(new MFFloat401().getArray()).setKeyValue(new MFRotation402().getArray()))
        .addChild(new OrientationInterpolator().setDEF("l_shoulderRoll").setKey(new MFFloat403().getArray()).setKeyValue(new MFRotation404().getArray()))
        .addChild(new Group()
          .addChild(new PositionInterpolator().setDEF("HUMANOIDROOT_POSITION_ANIMATOR").setKey(new MFFloat405().getArray()).setKeyValue(new MFVec3f406().getArray()))
          .addChild(new OrientationInterpolator().setDEF("HUMANOIDROOT_ANIMATOR").setKey(new MFFloat407().getArray()).setKeyValue(new MFRotation408().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_HIP_ANIMATOR").setKey(new MFFloat409().getArray()).setKeyValue(new MFRotation410().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_KNEE_ANIMATOR").setKey(new MFFloat411().getArray()).setKeyValue(new MFRotation412().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_ANKLE_ANIMATOR").setKey(new MFFloat413().getArray()).setKeyValue(new MFRotation414().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_ANKLE_ANIMATOR").setKey(new MFFloat415().getArray()).setKeyValue(new MFRotation416().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_subtalar_ANIMATOR").setKey(new MFFloat417().getArray()).setKeyValue(new MFRotation418().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_MIDTARSAL_ANIMATOR").setKey(new MFFloat419().getArray()).setKeyValue(new MFRotation420().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_metatarsal_ANIMATOR").setKey(new MFFloat421().getArray()).setKeyValue(new MFRotation422().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_HIP_ANIMATOR").setKey(new MFFloat423().getArray()).setKeyValue(new MFRotation424().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_KNEE_ANIMATOR").setKey(new MFFloat425().getArray()).setKeyValue(new MFRotation426().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_subtalar_ANIMATOR").setKey(new MFFloat427().getArray()).setKeyValue(new MFRotation428().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_MIDTARSAL_ANIMATOR").setKey(new MFFloat429().getArray()).setKeyValue(new MFRotation430().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_metatarsal_ANIMATOR").setKey(new MFFloat431().getArray()).setKeyValue(new MFRotation432().getArray()))
          .addChild(new OrientationInterpolator().setDEF("VL5_ANIMATOR").setKey(new MFFloat433().getArray()).setKeyValue(new MFRotation434().getArray()))
          .addChild(new OrientationInterpolator().setDEF("SKULLBASE_ANIMATOR").setKey(new MFFloat435().getArray()).setKeyValue(new MFRotation436().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_SHOULDER_ANIMATOR").setKey(new MFFloat437().getArray()).setKeyValue(new MFRotation438().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_ELBOW_ANIMATOR").setKey(new MFFloat439().getArray()).setKeyValue(new MFRotation440().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_WRIST_ANIMATOR").setKey(new MFFloat441().getArray()).setKeyValue(new MFRotation442().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_SHOULDER_ANIMATOR").setKey(new MFFloat443().getArray()).setKeyValue(new MFRotation444().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_ELBOW_ANIMATOR").setKey(new MFFloat445().getArray()).setKeyValue(new MFRotation446().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_WRIST_ANIMATOR").setKey(new MFFloat447().getArray()).setKeyValue(new MFRotation448().getArray())))
        .addChild(new ROUTE().setFromNode("Time2").setFromField("fraction_changed").setToNode("vc6Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("vc6Yaw").setFromField("value_changed").setToNode("Joe_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Time3").setFromField("fraction_changed").setToNode("EyeballsRotation").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("EyeballsRotation").setFromField("value_changed").setToNode("Joe_r_eyeball_joint").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("EyeballsRotation").setFromField("value_changed").setToNode("Joe_l_eyeball_joint").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_sternoclavicularRelax").setFromField("value_changed").setToNode("Joe_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_acromioclavicularRelax").setFromField("value_changed").setToNode("Joe_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_shoulderRelax").setFromField("value_changed").setToNode("Joe_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_elbowRelax").setFromField("value_changed").setToNode("Joe_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_wristRelax").setFromField("value_changed").setToNode("Joe_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_thumb1Relax").setFromField("value_changed").setToNode("Joe_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_thumb2Relax").setFromField("value_changed").setToNode("Joe_r_thumb2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_thumb3Relax").setFromField("value_changed").setToNode("Joe_r_thumb3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_index0Relax").setFromField("value_changed").setToNode("Joe_r_index0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_index1Relax").setFromField("value_changed").setToNode("Joe_r_index1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_fingers2Relax").setFromField("value_changed").setToNode("Joe_r_index2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_fingers3Relax").setFromField("value_changed").setToNode("Joe_r_index3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_middle0Relax").setFromField("value_changed").setToNode("Joe_r_middle0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_middle1Relax").setFromField("value_changed").setToNode("Joe_r_middle1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_fingers2Relax").setFromField("value_changed").setToNode("Joe_r_middle2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_fingers3Relax").setFromField("value_changed").setToNode("Joe_r_middle3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_ring0Relax").setFromField("value_changed").setToNode("Joe_r_ring0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_ring1Relax").setFromField("value_changed").setToNode("Joe_r_ring1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_fingers2Relax").setFromField("value_changed").setToNode("Joe_r_ring2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_fingers3Relax").setFromField("value_changed").setToNode("Joe_r_ring3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_pinky0Relax").setFromField("value_changed").setToNode("Joe_r_pinky0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_pinky1Relax").setFromField("value_changed").setToNode("Joe_r_pinky1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_fingers2Relax").setFromField("value_changed").setToNode("Joe_r_pinky2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_fingers3Relax").setFromField("value_changed").setToNode("Joe_r_pinky3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Time2").setFromField("fraction_changed").setToNode("r_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time2").setFromField("fraction_changed").setToNode("r_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time2").setFromField("fraction_changed").setToNode("r_shoulderRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time2").setFromField("fraction_changed").setToNode("r_ForeArmPitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time2").setFromField("fraction_changed").setToNode("r_wristRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time2").setFromField("fraction_changed").setToNode("r_handPitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time2").setFromField("fraction_changed").setToNode("r_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time2").setFromField("fraction_changed").setToNode("r_thumb2Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("r_sternoclavicularRoll").setFromField("value_changed").setToNode("Joe_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_acromioclavicularRoll").setFromField("value_changed").setToNode("Joe_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_shoulderRoll").setFromField("value_changed").setToNode("Joe_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_ForeArmPitch").setFromField("value_changed").setToNode("Joe_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_wristRoll").setFromField("value_changed").setToNode("Joe_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_index0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_index1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_index2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_index3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_middle0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_middle1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_middle2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_middle3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_ring0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_ring1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_ring2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_ring3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_pinky0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_pinky1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_pinky2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_handPitch").setFromField("value_changed").setToNode("Joe_r_pinky3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_thumb1Pitch").setFromField("value_changed").setToNode("Joe_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_thumb2Pitch").setFromField("value_changed").setToNode("Joe_r_thumb2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("r_thumb2Pitch").setFromField("value_changed").setToNode("Joe_r_thumb3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("l_shoulderRoll").setFromField("value_changed").setToNode("Joe_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("HUMANOIDROOT_POSITION_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("HUMANOIDROOT_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("L_HIP_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("L_KNEE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("L_ANKLE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("L_subtalar_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("L_MIDTARSAL_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("L_metatarsal_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("R_HIP_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("R_KNEE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("R_ANKLE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("R_subtalar_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("R_MIDTARSAL_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("R_metatarsal_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("VL5_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("SKULLBASE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("L_SHOULDER_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("L_ELBOW_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Time1").setFromField("fraction_changed").setToNode("L_WRIST_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("HUMANOIDROOT_POSITION_ANIMATOR").setFromField("value_changed").setToNode("Joe_HumanoidRoot").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("HUMANOIDROOT_ANIMATOR").setFromField("value_changed").setToNode("Joe_HumanoidRoot").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("L_HIP_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("L_KNEE_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("L_ANKLE_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("L_MIDTARSAL_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_midtarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("L_subtalar_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_subtalar").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("L_metatarsal_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("R_HIP_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("R_KNEE_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("R_ANKLE_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("R_subtalar_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_subtalar").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("R_MIDTARSAL_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_midtarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("R_metatarsal_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("VL5_ANIMATOR").setFromField("value_changed").setToNode("Joe_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("SKULLBASE_ANIMATOR").setFromField("value_changed").setToNode("Joe_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("L_SHOULDER_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("L_ELBOW_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("L_WRIST_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("R_SHOULDER_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("R_ELBOW_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("R_WRIST_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_wrist").setToField("set_rotation")));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"By Joe for Joe"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"By Joe for Joe"});
  }
}
private class MFColor2 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f ,0f ,0.1f });
  }
}
private class MFFloat3 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.57f });
  }
}
private class MFColor4 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f ,0.1f ,0f ,0f ,0.1f ,0f });
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.x3d","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"});
  }
}
private class MFInt326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFColor7 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,1f ,1f ,1f ,1f ,0f });
  }
}
private class MFVec3f8 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.0157f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFInt329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f11 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0.0001f ,0f });
  }
}
private class MFString12 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"humanoidVersion=2.0"});
  }
}
private class MFInt3213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.875f ,0f ,0f ,0.92f ,0f });
  }
}
private class MFInt3215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,19,20,21,22,23,26,27,73,82,89,91,93});
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,0.35f ,0.35f ,1f });
  }
}
private class MFInt3217 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
private class MFVec3f18 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.92f ,0f ,0.0961f ,0.9124f ,0f ,-0.095f ,0.9171f ,0.0029f ,0f ,1.045f ,-0.095f });
  }
}
private class MFInt3219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {89,90,94,95,96,97});
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.65f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f22 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f ,0.92f ,0f ,0.115f ,0.466f ,0f });
  }
}
private class MFInt3223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {334,335,336,337,338,339,340,341});
  }
}
private class MFFloat24 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.115f ,0.466f ,0f ,0.1f ,0.069f ,0f });
  }
}
private class MFInt3227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {342,343,344,345});
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f ,0.069f ,0f ,0.115f ,0.031f ,0.03f });
  }
}
private class MFInt3231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {346,347,348,71});
  }
}
private class MFFloat32 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f34 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.115f ,0.031f ,0.03f ,0.115f ,0.037f ,0.09f });
  }
}
private class MFInt3235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {349,350,351,352});
  }
}
private class MFFloat36 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f38 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.115f ,0.037f ,0.09f ,0.115f ,0.02f ,0.122f });
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {353,354,355,356,357,358,359,360,361});
  }
}
private class MFFloat40 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f42 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.115f ,0.02f ,0.122f ,0.132f ,0.013f ,0.19f });
  }
}
private class MFInt3243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {91,92,98,99,100,101});
  }
}
private class MFFloat44 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.65f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f46 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,0.92f ,0f ,-0.1f ,0.4913f ,0f });
  }
}
private class MFInt3247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {362,363,364,365,366,367,368,369});
  }
}
private class MFFloat48 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f50 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,0.4913f ,0f ,-0.1f ,0.0712f ,0f });
  }
}
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {370,371,372,373});
  }
}
private class MFFloat52 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f54 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,0.0712f ,0f ,-0.1f ,0.015f ,-0.01f });
  }
}
private class MFInt3255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {374,375,376});
  }
}
private class MFFloat56 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f });
  }
}
private class MFInt3257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f58 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,0.015f ,-0.01f ,-0.1f ,0.02f ,0.07f });
  }
}
private class MFInt3259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {377,378,379,380});
  }
}
private class MFFloat60 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f62 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,0.02f ,0.07f ,-0.1f ,0.01f ,0.14f });
  }
}
private class MFInt3263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {381,382,383,384,385,386,387,388,389});
  }
}
private class MFFloat64 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f66 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,0.01f ,0.14f ,-0.1043f ,0.0016f ,0.2f });
  }
}
private class MFInt3267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {28,76});
  }
}
private class MFFloat68 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f70 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.045f ,-0.095f ,0f ,0.9149f ,0.0016f });
  }
}
private class MFInt3271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f72 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.045f ,-0.095f ,0f ,1.068f ,-0.085f });
  }
}
private class MFInt3273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f74 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.068f ,-0.085f ,0f ,1.092f ,-0.0725f });
  }
}
private class MFInt3275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f76 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.092f ,-0.0725f ,0f ,1.12f ,-0.065f });
  }
}
private class MFInt3277 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,18,25,83,84,85,86,87,88});
  }
}
private class MFFloat78 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,0.7f ,1f ,0.8f });
  }
}
private class MFInt3279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f80 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.12f ,-0.065f ,0f ,1.1459f ,-0.0625f });
  }
}
private class MFInt3281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f82 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.1459f ,-0.0625f ,0f ,1.179f ,-0.068f });
  }
}
private class MFInt3283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f84 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.179f ,-0.068f ,0f ,1.242f ,-0.09f });
  }
}
private class MFInt3285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f86 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.2145f ,-0.0755f ,0f ,1.242f ,-0.09f });
  }
}
private class MFInt3287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15});
  }
}
private class MFFloat88 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt3289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f90 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.242f ,-0.09f ,0f ,1.268f ,-0.1f });
  }
}
private class MFInt3291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,14});
  }
}
private class MFFloat92 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f94 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.268f ,-0.1f ,0f ,1.294f ,-0.11f });
  }
}
private class MFInt3295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f96 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.294f ,-0.11f ,0f ,1.352f ,-0.12f });
  }
}
private class MFInt3297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f98 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.352f ,-0.12f ,0f ,1.381f ,-0.1235f });
  }
}
private class MFInt3299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f100 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.381f ,-0.1235f ,0f ,1.41f ,-0.1235f });
  }
}
private class MFInt32101 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f102 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.41f ,-0.1235f ,0f ,1.438f ,-0.12f });
  }
}
private class MFInt32103 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {81});
  }
}
private class MFFloat104 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt32105 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f106 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.41f ,-0.1235f ,0f ,1.438f ,-0.12f });
  }
}
private class MFInt32107 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f108 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.438f ,-0.12f ,0f ,1.468f ,-0.105f });
  }
}
private class MFInt32109 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f110 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.468f ,-0.105f ,0f ,1.497f ,-0.09f });
  }
}
private class MFInt32111 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,24});
  }
}
private class MFFloat112 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32113 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f114 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.497f ,-0.09f ,0f ,1.525f ,-0.072f });
  }
}
private class MFInt32115 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {74,75});
  }
}
private class MFFloat116 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32117 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
private class MFVec3f118 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.525f ,-0.072f ,0.082f ,1.4488f ,-0.0353f ,-0.03f ,1.46f ,0.02f ,0f ,1.54f ,-0.05f });
  }
}
private class MFInt32119 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f120 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.54f ,-0.05f ,0f ,1.5675f ,-0.0256f });
  }
}
private class MFInt32121 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f122 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.5675f ,-0.0256f ,0f ,1.58225f ,-0.0185f });
  }
}
private class MFInt32123 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f124 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.58225f ,-0.0185f ,0f ,1.595f ,-0.0175f });
  }
}
private class MFInt32125 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f126 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.595f ,-0.0175f ,0f ,1.61f ,-0.015f });
  }
}
private class MFInt32127 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f128 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.61f ,-0.015f ,0f ,1.6144f ,-0.0034f });
  }
}
private class MFInt32129 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f130 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.6144f ,-0.0034f ,0f ,1.63f ,-0.01f });
  }
}
private class MFInt32131 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
private class MFFloat132 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32133 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1});
  }
}
private class MFVec3f134 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.63f ,-0.01f ,0.034f ,1.659f ,0.06f ,-0.034f ,1.655f ,0.065f });
  }
}
private class MFInt32135 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f136 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.034f ,1.655f ,0.065f ,-0.034f ,1.655f ,0.065f });
  }
}
private class MFInt32137 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f138 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.034f ,1.655f ,0.065f ,-0.034f ,1.655f ,0.065f });
  }
}
private class MFInt32139 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12});
  }
}
private class MFFloat140 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt32141 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f142 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f ,1.4488f ,-0.0353f ,0.0962f ,1.4269f ,-0.0424f });
  }
}
private class MFInt32143 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {79});
  }
}
private class MFFloat144 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt32145 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f146 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0962f ,1.4269f ,-0.0424f ,0.2f ,1.44f ,-0.04f });
  }
}
private class MFInt32147 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {41,42,44,80,102,103,104,105});
  }
}
private class MFFloat148 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32149 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f150 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f ,1.44f ,-0.0387f ,0.2f ,1.1388f ,-0.04f });
  }
}
private class MFInt32151 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {45,46,47,109,110,111,112,113,115,116,117,118});
  }
}
private class MFFloat152 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32153 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f154 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2f ,1.1388f ,-0.04f ,0.2f ,0.87f ,-0.04f });
  }
}
private class MFInt32155 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {119,120,121,122,123,124,125,126});
  }
}
private class MFFloat156 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32157 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
  }
}
private class MFVec3f158 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2f ,0.87f ,-0.04f ,0.1924f ,0.8472f ,-0.0534f ,0.1983f ,0.8024f ,-0.028f ,0.1987f ,0.8029f ,-0.053f ,0.1956f ,0.8019f ,-0.0794f ,0.1925f ,0.8066f ,-0.1036f });
  }
}
private class MFInt32159 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {127,128});
  }
}
private class MFFloat160 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32161 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f162 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1924f ,0.8472f ,-0.0534f ,0.1951f ,0.8226f ,0.0246f });
  }
}
private class MFInt32163 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,141,142,143});
  }
}
private class MFFloat164 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f });
  }
}
private class MFInt32165 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f166 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1951f ,0.8226f ,0.0246f ,0.1955f ,0.8159f ,0.0464f });
  }
}
private class MFInt32167 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {144,145,146,147,148,149,150,151,152});
  }
}
private class MFFloat168 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32169 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f170 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1955f ,0.8159f ,0.0464f ,0.1982f ,0.8061f ,0.0759f });
  }
}
private class MFInt32171 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {129,130});
  }
}
private class MFFloat172 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32173 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f174 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f ,0.8024f ,-0.028f ,0.1983f ,0.7815f ,-0.028f });
  }
}
private class MFInt32175 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,153,154,155,163});
  }
}
private class MFFloat176 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f ,0.5f });
  }
}
private class MFInt32177 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f178 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f ,0.7815f ,-0.028f ,0.2017f ,0.7363f ,-0.0248f });
  }
}
private class MFInt32179 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {166,167,168,169});
  }
}
private class MFFloat180 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32181 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f182 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2017f ,0.7363f ,-0.0248f ,0.2028f ,0.7139f ,-0.0236f });
  }
}
private class MFInt32183 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {170,171,172,173,174,175,176,177,178});
  }
}
private class MFFloat184 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32185 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f186 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2028f ,0.7139f ,-0.0236f ,0.2089f ,0.6858f ,-0.0245f });
  }
}
private class MFInt32187 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {131,132});
  }
}
private class MFFloat188 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32189 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f190 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f ,0.8029f ,-0.053f ,0.1987f ,0.7818f ,-0.053f });
  }
}
private class MFInt32191 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {156,157,163,164});
  }
}
private class MFFloat192 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt32193 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f194 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f ,0.7818f ,-0.053f ,0.2013f ,0.7273f ,-0.0503f });
  }
}
private class MFInt32195 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {179,180,181,182});
  }
}
private class MFFloat196 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32197 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f198 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2013f ,0.7273f ,-0.0503f ,0.2026f ,0.7011f ,-0.0494f });
  }
}
private class MFInt32199 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {183,184,185,186,187,188,189,190,191});
  }
}
private class MFFloat200 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32201 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f202 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2026f ,0.7011f ,-0.0494f ,0.208f ,0.6731f ,-0.0491f });
  }
}
private class MFInt32203 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {133,134});
  }
}
private class MFFloat204 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32205 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f206 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f ,0.8019f ,-0.0794f ,0.1956f ,0.7815f ,-0.0794f });
  }
}
private class MFInt32207 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {158,159,164,165});
  }
}
private class MFFloat208 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt32209 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f210 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f ,0.7815f ,-0.0794f ,0.1973f ,0.7287f ,-0.0777f });
  }
}
private class MFInt32211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {192,193,194,195});
  }
}
private class MFFloat212 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f214 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1973f ,0.7287f ,-0.0777f ,0.1983f ,0.7045f ,-0.0767f });
  }
}
private class MFInt32215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {196,197,198,199,200,201,202,203,204});
  }
}
private class MFFloat216 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32217 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f218 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f ,0.7045f ,-0.0767f ,0.2035f ,0.675f ,-0.0756f });
  }
}
private class MFInt32219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {135,136,137,165});
  }
}
private class MFFloat220 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,0.5f });
  }
}
private class MFInt32221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f222 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f ,0.8066f ,-0.1036f ,0.1925f ,0.7866f ,-0.1036f });
  }
}
private class MFInt32223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {160,161,162});
  }
}
private class MFFloat224 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f });
  }
}
private class MFInt32225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f226 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f ,0.7866f ,-0.1036f ,0.1938f ,0.7452f ,-0.1024f });
  }
}
private class MFInt32227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {205,206,207,208});
  }
}
private class MFFloat228 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f230 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1938f ,0.7452f ,-0.1024f ,0.1948f ,0.7277f ,-0.1017f });
  }
}
private class MFInt32231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {209,210,211,212,213,214,215,216,217});
  }
}
private class MFFloat232 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f234 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1948f ,0.7277f ,-0.1017f ,0.2014f ,0.7009f ,-0.1012f });
  }
}
private class MFInt32235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10});
  }
}
private class MFFloat236 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt32237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f238 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.03f ,1.46f ,0.02f ,-0.09f ,1.41f ,-0.09f });
  }
}
private class MFInt32239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {77,29});
  }
}
private class MFFloat240 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,0.9f });
  }
}
private class MFInt32241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f242 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.09f ,1.41f ,-0.09f ,-0.2f ,1.44f ,-0.04f });
  }
}
private class MFInt32243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {29,30,32,78,218,219,220,221,86,88});
  }
}
private class MFFloat244 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,0.3f ,0.2f });
  }
}
private class MFInt32245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f246 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,1.44f ,-0.04f ,-0.2f ,1.1388f ,-0.04f });
  }
}
private class MFInt32247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {33,34,35,225,226,227,228,229,231,232,233,234});
  }
}
private class MFFloat248 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f250 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,1.1388f ,-0.04f ,-0.2f ,0.89f ,-0.04f });
  }
}
private class MFInt32251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {235,236,237,238,239,240,241,242});
  }
}
private class MFFloat252 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
  }
}
private class MFVec3f254 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.89f ,-0.04f ,-0.2f ,0.85f ,0f ,-0.2f ,0.84f ,-0.015f ,-0.2f ,0.835f ,-0.04f ,-0.2f ,0.835f ,-0.065f ,-0.2f ,0.84f ,-0.085f });
  }
}
private class MFInt32255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {243,244});
  }
}
private class MFFloat256 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f258 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.85f ,0f ,-0.2f ,0.82f ,0.03f });
  }
}
private class MFInt32259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,257,258,259});
  }
}
private class MFFloat260 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f });
  }
}
private class MFInt32261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f262 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.82f ,0.03f ,-0.2f ,0.8f ,0.05f });
  }
}
private class MFInt32263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {260,261,262,263,264,265,266,267,268});
  }
}
private class MFFloat264 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f266 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.8f ,0.05f ,-0.2f ,0.78f ,0.07f });
  }
}
private class MFInt32267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {245,246});
  }
}
private class MFFloat268 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f270 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.84f ,-0.015f ,-0.2f ,0.793f ,-0.015f });
  }
}
private class MFInt32271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,269,270,271,279});
  }
}
private class MFFloat272 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f ,0.5f });
  }
}
private class MFInt32273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f274 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.793f ,-0.015f ,-0.2f ,0.745f ,-0.015f });
  }
}
private class MFInt32275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {282,283,284,285});
  }
}
private class MFFloat276 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32277 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f278 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.745f ,-0.015f ,-0.2f ,0.72f ,-0.015f });
  }
}
private class MFInt32279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {286,287,288,289,290,291,292,293,294});
  }
}
private class MFFloat280 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f282 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.72f ,-0.015f ,-0.2f ,0.695f ,-0.015f });
  }
}
private class MFInt32283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {247,248});
  }
}
private class MFFloat284 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f286 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.835f ,-0.04f ,-0.2f ,0.788f ,-0.04f });
  }
}
private class MFInt32287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {272,273,279,280});
  }
}
private class MFFloat288 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt32289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f290 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.788f ,-0.04f ,-0.2f ,0.74f ,-0.04f });
  }
}
private class MFInt32291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {295,296,297,298});
  }
}
private class MFFloat292 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f294 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.74f ,-0.04f ,-0.2f ,0.7142f ,-0.04f });
  }
}
private class MFInt32295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {299,300,301,302,303,304,305,306,307});
  }
}
private class MFFloat296 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f298 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.7142f ,-0.04f ,-0.2f ,0.6758f ,-0.04f });
  }
}
private class MFInt32299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {249,250});
  }
}
private class MFFloat300 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32301 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f302 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.835f ,-0.065f ,-0.2f ,0.793f ,-0.065f });
  }
}
private class MFInt32303 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {274,275,280,281});
  }
}
private class MFFloat304 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt32305 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f306 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.793f ,-0.065f ,-0.2f ,0.74f ,-0.065f });
  }
}
private class MFInt32307 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {308,309,310,311});
  }
}
private class MFFloat308 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32309 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f310 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.74f ,-0.065f ,-0.2f ,0.7177f ,-0.065f });
  }
}
private class MFInt32311 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {312,313,314,315,316,317,318,319,320});
  }
}
private class MFFloat312 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32313 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f314 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.7177f ,-0.065f ,-0.2f ,0.695f ,-0.065f });
  }
}
private class MFInt32315 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {251,252,253,281});
  }
}
private class MFFloat316 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,0.5f });
  }
}
private class MFInt32317 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f318 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.84f ,-0.085f ,-0.2f ,0.79f ,-0.085f });
  }
}
private class MFInt32319 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {276,277,278});
  }
}
private class MFFloat320 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f });
  }
}
private class MFInt32321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f322 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.79f ,-0.085f ,-0.2f ,0.755f ,-0.085f });
  }
}
private class MFInt32323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {321,322,323,324});
  }
}
private class MFFloat324 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32325 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f326 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.755f ,-0.085f ,-0.2f ,0.735f ,-0.085f });
  }
}
private class MFInt32327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {325,326,327,328,329,330,331,332,333});
  }
}
private class MFFloat328 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFVec3f330 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.735f ,-0.085f ,-0.2f ,0.72f ,-0.085f });
  }
}
private class MFVec3f331 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.77f ,0f ,0f ,1.665f ,0.09f ,-0.033f ,1.62f ,0.087f ,0.033f ,1.62f ,0.087f ,0f ,1.55f ,0.097f ,-0.077f ,1.64f ,-0.01f ,-0.0527f ,1.58f ,0.015f ,0.077f ,1.64f ,-0.01f ,0.0527f ,1.58f ,0.015f ,0f ,1.625f ,-0.0925f ,-0.03f ,1.46f ,0.035f ,0f ,1.44f ,0.03f ,0.03f ,1.46f ,0.035f ,-0.1135f ,1.318f ,0.095f ,0.1135f ,1.318f ,0.095f ,0f ,1.25f ,0.113f ,-0.087f ,1.19f ,0.09f ,-0.0935f ,1.03f ,0.075f ,0.087f ,1.19f ,0.09f ,0.0935f ,1.03f ,0.075f ,-0.1425f ,1.065f ,0.0033f ,-0.15f ,0.9f ,-0.01f ,0.1425f ,1.065f ,0.0033f ,0.15f ,0.9f ,-0.01f ,0f ,1.53f ,-0.084f ,0.0049f ,1.1908f ,-0.1113f ,-0.0773f ,1.019f ,-0.12f ,0.0773f ,1.019f ,-0.12f ,0.005f ,1.0915f ,-0.1091f ,-0.178f ,1.4825f ,-0.0625f ,-0.17f ,1.38f ,0.007f ,-0.1884f ,0.8676f ,-0.036f ,-0.16f ,1.38f ,-0.127f ,-0.2f ,1.1388f ,-0.08f ,-0.244f ,1.1388f ,-0.04f ,-0.165f ,1.1388f ,-0.04f ,-0.23f ,1.133f ,-0.055f ,-0.1977f ,0.8169f ,-0.0177f ,-0.1941f ,0.6772f ,-0.0423f ,-0.2117f ,0.8562f ,-0.0584f ,-0.1929f ,0.789f ,-0.1064f ,0.175f ,1.4825f ,-0.06f ,0.17f ,1.38f ,0.007f ,0.1901f ,0.8645f ,-0.0415f ,0.16f ,1.38f ,-0.125f ,0.2f ,1.1388f ,-0.08f ,0.165f ,1.1388f ,-0.04f ,0.244f ,1.1388f ,-0.04f ,0.23f ,1.133f ,-0.055f ,0.2009f ,0.8139f ,-0.0237f ,0.2056f ,0.6743f ,-0.0482f ,0.2142f ,0.8529f ,-0.0648f ,0.1929f ,0.786f ,-0.1122f ,-0.1f ,0.4913f ,-0.03f ,-0.17f ,0.466f ,0f ,-0.05f ,0.466f ,0f ,-0.165f ,0.01f ,0.12f ,-0.15f ,0.07f ,0f ,-0.085f ,0.086f ,0.0125f ,-0.09f ,0.056f ,0.0125f ,-0.115f ,0.02f ,0.122f ,-0.115f ,0.04f ,-0.055f ,-0.11f ,0.011f ,0.19f ,0.0993f ,0.4881f ,-0.0309f ,0.17f ,0.466f ,0f ,0.05f ,0.4867f ,0f ,0.165f ,0.01f ,0.12f ,0.15f ,0.07f ,0f ,0.085f ,0.086f ,0.0125f ,0.09f ,0.056f ,0.0125f ,0.115f ,0.02f ,0.122f ,0.115f ,0.04f ,-0.055f ,0.11f ,0.011f ,0.19f ,0f ,0.875f ,0f ,-0.0646f ,1.5149f ,-0.038f ,0.0646f ,1.5149f ,-0.038f ,0f ,1.07225f ,0.09f ,-0.11f ,1.427f ,-0.1375f ,-0.235f ,1.42f ,-0.0625f ,0.11f ,1.427f ,-0.1375f ,0.235f ,1.42f ,-0.0625f ,0f ,1.41f ,-0.145f ,0f ,0.925f ,0.08f ,-0.087f ,1.19f ,-0.09f ,0.087f ,1.19f ,-0.09f ,0.172f ,1.32f ,-0.03f ,-0.172f ,1.32f ,-0.03f ,0.15f ,1.23f ,-0.015f ,-0.15f ,1.23f ,-0.015f ,0.079f ,0.92f ,-0.14f ,0.1f ,0.9f ,0.077f ,-0.079f ,0.92f ,-0.14f ,-0.1f ,0.9f ,0.075f ,0f ,0.87f ,0f ,0.171f ,0.65f ,0f ,0.02f ,0.65f ,0f ,0.1f ,0.65f ,-0.08f ,0.1f ,0.65f ,0.07f ,-0.171f ,0.65f ,0f ,-0.02f ,0.65f ,0f ,-0.1f ,0.65f ,-0.08f ,-0.1f ,0.65f ,0.07f ,0.25f ,1.27f ,-0.04f ,0.17f ,1.27f ,-0.04f ,0.2f ,1.27f ,-0.09f ,0.2f ,1.27f ,0.02f ,0.244f ,1.1388f ,-0.04f ,0.165f ,1.1388f ,-0.04f ,0.2f ,1.1388f ,-0.08f ,0.2f ,1.1388f ,-0.013f ,0.225f ,1f ,-0.01f ,0.225f ,1f ,-0.07f ,0.185f ,1f ,-0.01f ,0.185f ,1f ,-0.07f ,0.2f ,1.1388f ,-0.04f ,0.225f ,0.92f ,-0.04f ,0.175f ,0.92f ,-0.04f ,0.2f ,0.92f ,-0.065f ,0.2f ,0.92f ,-0.015f ,0.225f ,0.89f ,-0.04f ,0.175f ,0.89f ,-0.04f ,0.2f ,0.89f ,-0.065f ,0.2f ,0.89f ,-0.015f ,0.218f ,0.86f ,-0.04f ,0.184f ,0.86f ,-0.04f ,0.2f ,0.87f ,-0.07f ,0.2f ,0.87f ,0f ,0.21f ,0.85f ,0f ,0.1854f ,0.85f ,0f ,0.212f ,0.84f ,-0.015f ,0.183f ,0.84f ,-0.015f ,0.213f ,0.835f ,-0.04f ,0.19f ,0.835f ,-0.04f ,0.211f ,0.835f ,-0.065f ,0.192f ,0.835f ,-0.065f ,0.208f ,0.84f ,-0.085f ,0.19f ,0.84f ,-0.085f ,0.2f ,0.84f ,-0.095f ,0.215f ,0.82f ,0f ,0.193f ,0.815f ,0.005f ,0.198f ,0.8f ,0.012f ,0.21f ,0.82f ,0.03f ,0.19f ,0.82f ,0.03f ,0.2f ,0.835f ,0.039f ,0.212f ,0.8f ,0.05f ,0.188f ,0.8f ,0.05f ,0.2f ,0.807f ,0.057f ,0.2f ,0.793f ,0.035f ,0.2f ,0.774f ,0.076f ,0.212f ,0.78f ,0.07f ,0.188f ,0.78f ,0.07f ,0.2f ,0.785f ,0.075f ,0.2f ,0.77f ,0.062f ,0.215f ,0.793f ,-0.015f ,0.187f ,0.793f ,-0.015f ,0.2f ,0.793f ,-0.005f ,0.215f ,0.788f ,-0.04f ,0.187f ,0.788f ,-0.04f ,0.215f ,0.793f ,-0.065f ,0.187f ,0.793f ,-0.065f ,0.21f ,0.79f ,-0.085f ,0.19f ,0.79f ,-0.085f ,0.2f ,0.79f ,-0.095f ,0.19f ,0.77f ,-0.0275f ,0.19f ,0.77f ,-0.0525f ,0.19f ,0.78f ,-0.0775f ,0.212f ,0.745f ,-0.015f ,0.188f ,0.745f ,-0.02f ,0.2f ,0.745f ,-0.0255f ,0.2f ,0.745f ,-0.0045f ,0.211f ,0.72f ,-0.015f ,0.189f ,0.72f ,-0.015f ,0.2f ,0.72f ,-0.0252f ,0.2f ,0.72f ,-0.0048f ,0.21f ,0.695f ,-0.015f ,0.19f ,0.695f ,-0.015f ,0.2f ,0.695f ,-0.025f ,0.2f ,0.695f ,-0.005f ,0.2f ,0.685f ,-0.015f ,0.215f ,0.74f ,-0.04f ,0.185f ,0.74f ,-0.04f ,0.2f ,0.74f ,-0.055f ,0.2f ,0.74f ,-0.025f ,0.21f ,0.7142f ,-0.04f ,0.19f ,0.7142f ,-0.04f ,0.2f ,0.7142f ,-0.053f ,0.2f ,0.7142f ,-0.027f ,0.21f ,0.68f ,-0.04f ,0.19f ,0.68f ,-0.04f ,0.2f ,0.68f ,-0.05f ,0.2f ,0.68f ,-0.03f ,0.2f ,0.67f ,-0.04f ,0.212f ,0.74f ,-0.065f ,0.188f ,0.74f ,-0.065f ,0.2f ,0.74f ,-0.0756f ,0.2f ,0.74f ,-0.0542f ,0.21f ,0.7177f ,-0.065f ,0.19f ,0.7177f ,-0.065f ,0.2f ,0.7177f ,-0.0751f ,0.2f ,0.7177f ,-0.0549f ,0.21f ,0.695f ,-0.065f ,0.19f ,0.695f ,-0.065f ,0.2f ,0.695f ,-0.075f ,0.2f ,0.695f ,-0.055f ,0.2f ,0.685f ,-0.065f ,0.211f ,0.755f ,-0.085f ,0.189f ,0.755f ,-0.085f ,0.2f ,0.755f ,-0.0952f ,0.2f ,0.755f ,-0.0748f ,0.21f ,0.735f ,-0.085f ,0.19f ,0.735f ,-0.085f ,0.2f ,0.735f ,-0.0951f ,0.2f ,0.735f ,-0.0749f ,0.21f ,0.72f ,-0.085f ,0.19f ,0.72f ,-0.085f ,0.2f ,0.72f ,-0.095f ,0.2f ,0.72f ,-0.075f ,0.2f ,0.71f ,-0.085f ,-0.23f ,1.23f ,-0.04f ,-0.16f ,1.23f ,-0.04f ,-0.2f ,1.235f ,-0.105f ,-0.2f ,1.235f ,0.02f ,-0.244f ,1.1388f ,-0.04f ,-0.165f ,1.1388f ,-0.04f ,-0.2f ,1.1388f ,-0.08f ,-0.2f ,1.1388f ,0.013f ,-0.225f ,1f ,-0.01f ,-0.225f ,1f ,-0.07f ,-0.185f ,1f ,-0.01f ,-0.185f ,1f ,-0.07f ,-0.2f ,1.1388f ,-0.04f ,-0.225f ,0.92f ,-0.04f ,-0.175f ,0.92f ,-0.04f ,-0.2f ,0.92f ,-0.065f ,-0.2f ,0.92f ,-0.015f ,-0.225f ,0.89f ,-0.04f ,-0.175f ,0.89f ,-0.04f ,-0.2f ,0.89f ,-0.065f ,-0.2f ,0.89f ,-0.015f ,-0.218f ,0.86f ,-0.04f ,-0.184f ,0.86f ,-0.04f ,-0.2f ,0.87f ,-0.07f ,-0.2f ,0.87f ,0f ,-0.21f ,0.85f ,0f ,-0.1854f ,0.85f ,0f ,-0.212f ,0.84f ,-0.015f ,-0.183f ,0.84f ,-0.015f ,-0.213f ,0.835f ,-0.04f ,-0.19f ,0.835f ,-0.04f ,-0.211f ,0.835f ,-0.065f ,-0.192f ,0.835f ,-0.065f ,-0.208f ,0.84f ,-0.085f ,-0.19f ,0.84f ,-0.085f ,-0.2f ,0.84f ,-0.095f ,-0.215f ,0.82f ,0f ,-0.193f ,0.815f ,0.005f ,-0.198f ,0.8f ,0.012f ,-0.21f ,0.82f ,0.03f ,-0.19f ,0.82f ,0.03f ,-0.2f ,0.835f ,0.039f ,-0.212f ,0.8f ,0.05f ,-0.188f ,0.8f ,0.05f ,-0.2f ,0.807f ,0.057f ,-0.2f ,0.793f ,0.035f ,-0.2f ,0.774f ,0.076f ,-0.212f ,0.78f ,0.07f ,-0.188f ,0.78f ,0.07f ,-0.2f ,0.785f ,0.075f ,-0.2f ,0.77f ,0.062f ,-0.215f ,0.793f ,-0.015f ,-0.187f ,0.793f ,-0.015f ,-0.2f ,0.793f ,-0.005f ,-0.215f ,0.788f ,-0.04f ,-0.187f ,0.788f ,-0.04f ,-0.215f ,0.793f ,-0.065f ,-0.187f ,0.793f ,-0.065f ,-0.21f ,0.79f ,-0.085f ,-0.19f ,0.79f ,-0.085f ,-0.2f ,0.79f ,-0.095f ,-0.19f ,0.77f ,-0.0275f });
  }
}
private class MFVec3f332 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19f ,0.77f ,-0.0525f ,-0.19f ,0.78f ,-0.0775f ,-0.212f ,0.745f ,-0.015f ,-0.188f ,0.745f ,-0.02f ,-0.2f ,0.745f ,-0.0255f ,-0.2f ,0.745f ,-0.0045f ,-0.211f ,0.72f ,-0.015f ,-0.189f ,0.72f ,-0.015f ,-0.2f ,0.72f ,-0.0252f ,-0.2f ,0.72f ,-0.0048f ,-0.21f ,0.695f ,-0.015f ,-0.19f ,0.695f ,-0.015f ,-0.2f ,0.695f ,-0.025f ,-0.2f ,0.695f ,-0.005f ,-0.2f ,0.685f ,-0.015f ,-0.215f ,0.74f ,-0.04f ,-0.185f ,0.74f ,-0.04f ,-0.2f ,0.74f ,-0.055f ,-0.2f ,0.74f ,-0.025f ,-0.21f ,0.7142f ,-0.04f ,-0.19f ,0.7142f ,-0.04f ,-0.2f ,0.7142f ,-0.053f ,-0.2f ,0.7142f ,-0.027f ,-0.21f ,0.68f ,-0.04f ,-0.19f ,0.68f ,-0.04f ,-0.2f ,0.68f ,-0.05f ,-0.2f ,0.68f ,-0.03f ,-0.2f ,0.67f ,-0.04f ,-0.212f ,0.74f ,-0.065f ,-0.188f ,0.74f ,-0.065f ,-0.2f ,0.74f ,-0.0756f ,-0.2f ,0.74f ,-0.0542f ,-0.21f ,0.7177f ,-0.065f ,-0.19f ,0.7177f ,-0.065f ,-0.2f ,0.7177f ,-0.0751f ,-0.2f ,0.7177f ,-0.0549f ,-0.21f ,0.695f ,-0.065f ,-0.19f ,0.695f ,-0.065f ,-0.2f ,0.695f ,-0.075f ,-0.2f ,0.695f ,-0.055f ,-0.2f ,0.685f ,-0.065f ,-0.211f ,0.755f ,-0.085f ,-0.189f ,0.755f ,-0.085f ,-0.2f ,0.755f ,-0.0952f ,-0.2f ,0.755f ,-0.0748f ,-0.21f ,0.735f ,-0.085f ,-0.19f ,0.735f ,-0.085f ,-0.2f ,0.735f ,-0.0951f ,-0.2f ,0.735f ,-0.0749f ,-0.21f ,0.72f ,-0.085f ,-0.19f ,0.72f ,-0.085f ,-0.2f ,0.72f ,-0.095f ,-0.2f ,0.72f ,-0.075f ,-0.2f ,0.71f ,-0.085f ,0.115f ,0.466f ,0.06f ,0.115f ,0.466f ,-0.055f ,0.15f ,0.466f ,0f ,0.05f ,0.466f ,0f ,0.17f ,0.3f ,0f ,0.06f ,0.3f ,0f ,0.1f ,0.3f ,-0.05f ,0.1f ,0.3f ,0.05f ,0.15f ,0.07f ,0f ,0.085f ,0.086f ,0.0125f ,0.115f ,0.069f ,-0.045f ,0.117f ,0.0975f ,0.0615f ,0.1375f ,0.006f ,-0.03f ,0.095f ,0.006f ,-0.03f ,0.115f ,0.015f ,-0.045f ,0.115f ,0.06f ,0.1f ,0.115f ,0f ,0.07f ,0.165f ,0f ,0.07f ,0.095f ,0f ,0.07f ,0.115f ,0.04f ,0.13f ,0.125f ,0f ,0.12f ,0.165f ,0f ,0.12f ,0.087f ,0f ,0.122f ,0.09f ,0.012f ,0.188f ,0.11f ,0.011f ,0.19f ,0.128f ,0.011f ,0.185f ,0.142f ,0.011f ,0.178f ,0.154f ,0.01f ,0.168f ,-0.115f ,0.466f ,0.06f ,-0.115f ,0.466f ,-0.055f ,-0.17f ,0.466f ,0f ,-0.05f ,0.466f ,0f ,-0.17f ,0.3f ,0f ,-0.06f ,0.3f ,0f ,-0.1f ,0.3f ,-0.05f ,-0.1f ,0.3f ,0.05f ,-0.15f ,0.07f ,0f ,-0.085f ,0.086f ,0.0125f ,-0.115f ,0.069f ,-0.045f ,-0.117f ,0.0975f ,0.0615f ,-0.1375f ,0.006f ,-0.03f ,-0.095f ,0.006f ,-0.03f ,-0.095f ,0.006f ,-0.03f ,-0.115f ,0.06f ,0.1f ,-0.115f ,0f ,0.07f ,-0.165f ,0f ,0.07f ,-0.095f ,0f ,0.07f ,-0.115f ,0.04f ,0.13f ,-0.125f ,0f ,0.12f ,-0.165f ,0f ,0.12f ,-0.087f ,0f ,0.122f ,-0.09f ,0.012f ,0.188f ,-0.11f ,0.011f ,0.19f ,-0.128f ,0.011f ,0.185f ,-0.142f ,0.011f ,0.178f ,-0.154f ,0.01f ,0.168f });
  }
}
private class MFString333 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"});
  }
}
private class MFInt32334 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1});
  }
}
private class MFInt32335 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1});
  }
}
private class MFInt32336 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1});
  }
}
private class MFInt32337 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
  }
}
private class MFColor338 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,0f ,0f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f });
  }
}
private class MFColor339 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f });
  }
}
private class MFColor340 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,1f ,1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,0f ,1f ,1f ,1f ,1f });
  }
}
private class MFFloat341 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation342 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,1.25600004196167f ,1f ,0f ,0f ,2.51200008392334f ,1f ,0f ,0f ,3.76799988746643f ,1f ,0f ,0f ,5.02400016784668f ,1f ,0f ,0f ,6.28000020980835f });
  }
}
private class MFFloat343 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation344 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,1f ,0f ,1.25600004196167f ,0f ,1f ,0f ,2.51200008392334f ,0f ,1f ,0f ,3.76799988746643f ,0f ,1f ,0f ,5.02400016784668f ,0f ,1f ,0f ,6.28000020980835f });
  }
}
private class MFFloat345 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation346 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,1.25600004196167f ,0f ,0f ,1f ,2.51200008392334f ,0f ,0f ,1f ,3.76799988746643f ,0f ,0f ,1f ,5.02400016784668f ,0f ,0f ,1f ,6.28000020980835f });
  }
}
private class MFFloat347 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.6f ,0.7f ,0.8f ,0.9f ,1f });
  }
}
private class MFRotation348 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.699999988079071f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,-1f ,0f ,0f ,0.5f ,-0.400000005960465f ,-1f ,0f ,0.699999988079071f ,-0.400000005960465f ,-1f ,0f ,0.400000005960465f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat349 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.2f ,0.3f ,0.4f ,0.5f ,0.6f ,0.7f ,0.8f ,1f });
  }
}
private class MFRotation350 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.200000002980232f ,0.200000002980232f ,0.200000002980232f ,0.200000002980232f ,-0.200000002980232f ,0.200000002980232f ,0.200000002980232f ,0.200000002980232f ,-0.200000002980232f ,-0.200000002980232f ,0.200000002980232f ,0.200000002980232f ,0.200000002980232f ,-0.200000002980232f ,0.200000002980232f ,0.200000002980232f ,-0.200000002980232f ,0.200000002980232f ,-0.200000002980232f ,0.200000002980232f ,-0.200000002980232f ,0.200000002980232f ,-0.200000002980232f ,0.200000002980232f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat351 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation352 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.200000002980232f ,-1f ,0f ,0.109999999403954f ,0.200000002980232f ,-1f ,0f ,0.109999999403954f ,0.100000001490116f ,-1f ,0f ,0.100000001490116f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat353 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation354 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat355 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.3f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation356 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.400000005960465f ,-0.699999988079071f ,-0.550000011920929f ,0.349999994039536f ,0.400000005960465f ,-0.699999988079071f ,-0.550000011920929f ,0.349999994039536f ,0.400000005960465f ,-0.699999988079071f ,-0.550000011920929f ,0.349999994039536f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat357 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.15f ,0.4f ,0.6f ,0.9f ,1f });
  }
}
private class MFRotation358 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,-0.200000002980232f ,0f ,0.00999999977648258f ,0.5f ,-0.200000002980232f ,0f ,0.00999999977648258f ,0.5f ,-0.200000002980232f ,0f ,0.00999999977648258f ,0.5f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat359 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.9f ,1f });
  }
}
private class MFRotation360 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.100000001490116f ,-0.0900000035762787f ,0.25f ,0f ,0.100000001490116f ,-0.0900000035762787f ,0.25f ,0f ,0.100000001490116f ,-0.0900000035762787f ,0.25f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat361 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.3f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation362 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,-0.25f ,0.25f ,-1f ,0.125f ,-0.25f ,0.25f ,-1f ,0.125f ,-0.25f ,0.25f ,-1f ,0.125f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat363 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.2f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation364 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,-0.135000005364418f ,-0.135000005364418f ,1f ,0.35699999332428f ,-0.158999994397163f ,-0.152999997138977f ,1f ,0.354999989271164f ,-0.158999994397163f ,-0.152999997138977f ,1f ,0.35699999332428f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat365 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.3f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation366 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,-1f ,0.140000000596046f ,0f ,0f ,-1f ,0.140000000596046f ,0f ,0f ,-1f ,0.140000000596046f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat367 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.2f ,0.3f ,0.4f ,0.5f ,0.6f ,0.7f ,0.8f ,0.9f ,1f });
  }
}
private class MFRotation368 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,0.300000011920929f ,0.256999999284744f ,0f ,0f ,0.300000011920929f ,0.370000004768372f ,0f ,0f ,0.300000011920929f ,0.389999985694885f ,0f ,0f ,0.300000011920929f ,0.310000002384186f ,0f ,0f ,0.300000011920929f ,0.319999992847443f ,0f ,0f ,0.300000011920929f ,0.340000003576279f ,0f ,0f ,0.300000011920929f ,0.280000001192093f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat369 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.3f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation370 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.25f ,0.25f ,-1f ,0.100000001490116f ,0.25f ,0.25f ,-1f ,0.100000001490116f ,0.25f ,0.25f ,-1f ,0.100000001490116f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat371 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.4f ,0.5f ,0.8f ,1f });
  }
}
private class MFRotation372 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.135000005364418f ,0.135000005364418f ,1f ,0.270000010728836f ,0.135000005364418f ,0.135000005364418f ,1f ,0.270000010728836f ,0.135000005364418f ,0.150000005960464f ,1f ,0.270000010728836f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat373 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.3f ,0.5f ,0.8f ,1f });
  }
}
private class MFRotation374 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.349999994039536f ,0.349999994039536f ,-0.699999988079071f ,0.119999997317791f ,0.349999994039536f ,0.349999994039536f ,-0.899999976158142f ,0.119999997317791f ,0.349999994039536f ,0.349999994039536f ,-0.699999988079071f ,0.119999997317791f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat375 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation376 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0.200000002980232f ,0.25f ,1f ,0.270000010728836f ,0.200000002980232f ,0.219999998807907f ,1f ,0.270000010728836f ,0.219999998807907f ,0.200000002980232f ,1f ,0.270000010728836f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat377 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.03f ,0.08f ,0.2f ,0.3f ,0.4f ,0.5f ,0.8f ,0.95f ,1f });
  }
}
private class MFRotation378 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,-1f ,1f ,1f ,0.5f ,-0.159999996423721f ,0.159999996423721f ,0.785000026226044f ,0.5f ,-0.159999996423721f ,0.159999996423721f ,0.785000026226044f ,1f ,1f ,1f ,0.75f ,1f ,1f ,1f ,0.75f ,1f ,1f ,1f ,0.75f ,1f ,1f ,1f ,0.75f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat379 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.5f ,0.6f ,0.7f ,0.8f ,1f });
  }
}
private class MFRotation380 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.449999988079071f ,1f ,0f ,0f ,0.449999988079071f ,1f ,0f ,0f ,0.449999988079071f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat381 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.5f ,0.6f ,0.7f ,0.8f ,1f });
  }
}
private class MFRotation382 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.449999988079071f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat383 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.2f ,0.3f ,0.4f ,0.5f ,0.6f ,0.7f ,0.8f ,0.9f ,1f });
  }
}
private class MFRotation384 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.430000007152557f ,0f ,0f ,1f ,0.439999997615814f ,0f ,0f ,1f ,0.46000000834465f ,0f ,0f ,1f ,0.439999997615814f ,0f ,0f ,1f ,0.245000004768372f ,0f ,0f ,1f ,0.239999994635582f ,0f ,0f ,1f ,0.209999993443489f ,0f ,0f ,1f ,0.239999994635582f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat385 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.2f ,0.3f ,0.4f ,0.5f ,0.6f ,0.7f ,0.8f ,0.9f ,1f });
  }
}
private class MFRotation386 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0.370000004768372f ,0f ,0f ,1f ,0.379999995231628f ,0f ,0f ,1f ,0.389999985694885f ,0f ,0f ,1f ,0.379999995231628f ,0f ,0f ,1f ,0.270000010728836f ,0f ,0f ,1f ,0.280000001192093f ,0f ,0f ,1f ,0.270000010728836f ,0f ,0f ,1f ,0.280000001192093f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat387 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.7f ,0.8f ,1f });
  }
}
private class MFRotation388 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,-1f ,0.100000001490116f ,0f ,0f ,-1f ,0.219999998807907f ,0f ,0.5f ,-1f ,0.270000010728836f ,0f ,0f ,-1f ,0.100000001490116f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat389 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation390 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,-0.0500000007450581f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat391 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.85f ,1f });
  }
}
private class MFRotation392 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,0f ,0f ,-1f ,1.6599999666214f ,-0.25f ,0f ,-1f ,1.75999999046326f ,0f ,0f ,-1f ,1.25600004196167f ,0f ,0f ,-1f ,0.0500000007450581f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat393 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.15f ,0.3f ,0.5f ,0.7f ,0.9f ,1f });
  }
}
private class MFRotation394 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.550000011920929f ,-1f ,-0.25f ,0f ,2.54999995231628f ,-1f ,-0.25f ,0f ,2.54999995231628f ,-1f ,-0.25f ,0f ,2.54999995231628f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat395 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.65f ,0.75f ,0.85f ,1f });
  }
}
private class MFRotation396 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,-0.550000011920929f ,0f ,0f ,1f ,0f ,0f ,1f ,0f ,1.54999995231628f ,0f ,0f ,-1f ,1.54999995231628f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat397 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation398 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,0.00999999977648258f ,0.25f ,0f ,0f ,-0.00999999977648258f ,0.0299999993294477f ,0f ,0f ,0.00999999977648258f ,0.0500000007450581f ,0f ,0f ,0.00999999977648258f ,0.00999999977648258f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat399 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation400 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,0.5f ,1f ,0f ,0f ,1f ,1f ,0f ,0f ,0.400000005960465f ,1f ,0f ,0f ,0.200000002980232f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat401 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.6f ,0.8f ,1f });
  }
}
private class MFRotation402 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,1f ,1f ,0f ,0.300000011920929f ,1f ,1f ,0f ,0.300000011920929f ,1f ,1f ,0f ,0.600000023841858f ,1f ,1f ,0f ,0.300000011920929f ,0f ,1f ,1f ,0f });
  }
}
private class MFFloat403 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.5f ,0.85f ,1f });
  }
}
private class MFRotation404 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.25f ,0f ,1f ,1.75999999046326f ,0f ,0f ,1f ,1.6599999666214f ,0.25f ,0f ,1f ,1.75999999046326f ,0f ,0f ,1f ,1.25600004196167f ,0f ,0f ,1f ,0.0500000007450581f ,0.25f ,0f ,1f ,1.75999999046326f });
  }
}
private class MFFloat405 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.04167f ,0.125f ,0.1667f ,0.2083f ,0.25f ,0.2917f ,0.375f ,0.4583f ,0.5f ,0.5417f ,0.5833f ,0.625f ,0.7083f ,0.75f ,0.7917f ,0.875f ,0.9167f ,1f });
  }
}
private class MFVec3f406 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-0.00928f ,0f ,0f ,-0.003858f ,0f ,0f ,-0.008847f ,0f ,0f ,-0.01486f ,0f ,0f ,-0.02641f ,0f ,0f ,-0.03934f ,0f ,0f ,-0.0502f ,0f ,0f ,-0.07469f ,0f ,0f ,-0.02732f ,0f ,0f ,-0.01608f ,0f ,0f ,-0.01129f ,0f ,0f ,-0.005819f ,0f ,0f ,-0.002004f ,0f ,0f ,-0.002579f ,0f ,0f ,-0.0143f ,0f ,0f ,-0.03799f ,0f ,0f ,-0.05648f ,0f ,0f ,-0.045f ,0f ,0f ,-0.00928f ,0f });
  }
}
private class MFFloat407 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation408 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f });
  }
}
private class MFFloat409 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation410 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.873000025749207f ,0.0609400011599064f ,0.483999997377396f ,0.286500006914139f ,0.996299982070923f ,-0.0105699999257922f ,0.0848100036382675f ,0.248799994587898f ,0.996500015258789f ,0.0159099996089935f ,-0.0822200030088425f ,0.383599996566772f ,-0.701799988746643f ,-0.0322300009429455f ,-0.711700022220612f ,0.12890000641346f ,-1f ,0f ,0f ,0.551800012588501f ,-0.996399998664856f ,0.0223099999129772f ,0.0816999971866608f ,0.535099983215332f ,-0.98089998960495f ,0.0491200014948845f ,0.18809999525547f ,0.520399987697601f ,-0.873000025749207f ,0.0609400011599064f ,0.483999997377396f ,0.286500006914139f });
  }
}
private class MFFloat411 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2083f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation412 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.32260000705719f ,1f ,0f ,0f ,0.155599996447563f ,1f ,0f ,0f ,0.086779996752739f ,1f ,0f ,0f ,0.875100016593933f ,1f ,0f ,0f ,1.13100004196167f ,1f ,0f ,0f ,0.0996100008487701f ,1f ,0f ,0f ,0.394199997186661f ,1f ,0f ,0f ,0.32260000705719f });
  }
}
private class MFFloat413 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.375f ,0.6667f ,0.9167f ,1f });
  }
}
private class MFRotation414 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.067100003361702f ,-1f ,0f ,0f ,0.215200006961823f ,-1f ,0f ,0f ,0.318399995565414f ,-1f ,0f ,0f ,0.471700012683868f ,-1f ,0f ,0f ,0.291200011968613f ,1f ,0f ,0f ,0.222200006246567f ,-1f ,0f ,0f ,0.067100003361702f });
  }
}
private class MFFloat415 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.375f ,0.4583f ,0.5f ,0.6667f ,0.75f ,0.78f ,0.9167f ,1f });
  }
}
private class MFRotation416 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.353300005197525f ,-1f ,0f ,0f ,0.107199996709824f ,1f ,0f ,0f ,0.400000005960465f ,1f ,0f ,0f ,0.127000004053116f ,-1f ,0f ,0f ,0.0179999992251396f ,-1f ,0f ,0f ,0.0579999983310699f ,-1f ,0f ,0f ,0.239999994635582f ,-1f ,0f ,0f ,0.349999994039536f ,-1f ,0f ,0f ,0.330000013113022f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat417 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.3f ,1f });
  }
}
private class MFRotation418 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat419 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation420 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0f ,1f ,0f ,0f ,-0.200000002980232f ,1f ,0f ,0f ,0f });
  }
}
private class MFFloat421 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.8f ,1f });
  }
}
private class MFRotation422 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.300000011920929f ,-1f ,0f ,0f ,0.150000005960464f ,1f ,0f ,0f ,0.300000011920929f ,0f ,0f ,1f ,0f ,-1f ,0f ,0f ,0.300000011920929f });
  }
}
private class MFFloat423 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.2917f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation424 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.583100020885468f ,0.0351100005209446f ,0.811600029468536f ,0.148100003600121f ,-0.995000004768372f ,0.0229599997401238f ,0.0967399999499321f ,0.468300014734268f ,-1f ,0.0019000000320375f ,0.00796000007539988f ,0.473199993371964f ,-0.998000025749207f ,-0.0157999992370605f ,-0.0610200017690659f ,0.50789999961853f ,-0.991100013256073f ,-0.0354099981486797f ,-0.128600001335144f ,0.541899979114533f ,-0.913100004196167f ,-0.0624300017952919f ,-0.402999997138977f ,0.33610001206398f ,-0.430599987506866f ,-0.0796200037002564f ,-0.898999989032745f ,0.0703800022602081f ,1f ,0f ,0f ,0.257099986076355f ,0.989099979400635f ,-0.0280499998480082f ,0.144400000572205f ,0.387899994850159f ,-0.583100020885468f ,0.0351100005209446f ,0.811600029468536f ,0.148100003600121f });
  }
}
private class MFFloat425 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.2083f ,0.2917f ,0.375f ,0.5f ,0.6667f ,0.7917f ,0.9167f ,1f });
  }
}
private class MFRotation426 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,0.857299983501434f ,1f ,0f ,0f ,0.892599999904633f ,1f ,0f ,0f ,0.535099983215332f ,1f ,0f ,0f ,0.175600007176399f ,1f ,0f ,0f ,0.119400002062321f ,1f ,0f ,0f ,0.315299987792969f ,1f ,0f ,0f ,0.0935399979352951f ,1f ,0f ,0f ,0.0855799987912178f ,1f ,0f ,0f ,0.247500002384186f ,1f ,0f ,0f ,0.857299983501434f });
  }
}
private class MFFloat427 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.225f ,0.25f ,0.35f ,0.45f ,0.85f ,0.91f });
  }
}
private class MFRotation428 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.1f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.1f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.1f ,1f ,0f ,0f ,0.25f });
  }
}
private class MFFloat429 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.22f ,1f });
  }
}
private class MFRotation430 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,-0.200000002980232f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,-0.200000002980232f });
  }
}
private class MFFloat431 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2f ,0.4f ,0.8f ,1f });
  }
}
private class MFRotation432 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.150000005960464f ,0f ,0f ,1f ,0f ,1f ,0f ,0f ,0.300000011920929f ,-1f ,0f ,0f ,0.300000011920929f ,-1f ,0f ,0f ,0.150000005960464f });
  }
}
private class MFFloat433 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.2083f ,0.375f ,0.75f ,0.8333f ,1f });
  }
}
private class MFRotation434 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0.0825999975204468f ,-0.0197199992835522f ,-0.597400009632111f ,0.801699995994568f ,0.0823099985718727f ,0.0092960000038147f ,-0.964800000190735f ,0.262699991464615f ,0.17339999973774f ,-0.0123800002038479f ,0.954900026321411f ,-0.29679998755455f ,0.0873199999332428f ,-0.00812499970197678f ,0.969099998474121f ,-0.246299996972084f ,0.158000007271767f ,0f ,1f ,0f ,0.0825999975204468f });
  }
}
private class MFFloat435 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.4167f ,0.5f ,0.5833f ,0.6667f ,0.75f ,0.8333f ,0.9167f ,1f });
  }
}
private class MFRotation436 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,-1f ,0f ,0.0864000022411346f ,0f ,1f ,0f ,0.182500004768372f ,0f ,1f ,0f ,0.150499999523163f ,0f ,1f ,0f ,0.10530000180006f ,0f ,1f ,0f ,0.0439100004732609f ,0f ,-1f ,0f ,0.031190000474453f ,0f ,-1f ,0f ,0.0793600007891655f ,0f ,-1f ,0f ,0.16159999370575f ,0f ,-1f ,0f ,0.155000001192093f ,0f ,-1f ,0f ,0.0864199995994568f });
  }
}
private class MFFloat437 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation438 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0.400000005960465f ,0.119999997317791f ,-1f ,0f ,0.400000005960465f ,0.186000004410744f ,1f ,0f ,0.100000001490116f ,0.335999995470047f ,1f ,0f ,0.400000005960465f ,0.119999997317791f });
  }
}
private class MFFloat439 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation440 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.0659999996423721f ,-1f ,0f ,0f ,0.488000005483627f ,-1f ,0f ,0f ,0.0176999997347593f ,-1f ,0f ,0f ,0.065987803041935f });
  }
}
private class MFFloat441 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation442 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,-1f ,0f ,0.460999995470047f ,-0.330199986696243f ,-0.927500009536743f ,0.175500005483627f ,0.538800001144409f ,0.0327773988246918f ,-0.99931401014328f ,-0.0172185003757477f ,0.492033004760742f ,0f ,-1f ,0f ,0.46110001206398f });
  }
}
private class MFFloat443 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation444 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,-1f ,0.0920000001788139f ,1f ,0f ,-0.200000002980232f ,0.319700002670288f ,-1f ,0f ,-0.5f ,0.156399995088577f ,-1f ,0f ,-1f ,0.0920000001788139f });
  }
}
private class MFFloat445 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation446 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f ,0f ,0f ,0.411500006914139f ,-1f ,0f ,0f ,0.0925000011920929f ,-1f ,0f ,0f ,0.572567999362946f ,-1f ,0f ,0f ,0.411507993936539f });
  }
}
private class MFFloat447 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.375f ,0.9167f ,1f });
  }
}
private class MFRotation448 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.812900006771088f ,0.475899994373322f ,-0.335700005292892f ,0.13459999859333f ,0.153300002217293f ,-0.987800002098084f ,0.0258200000971556f ,0.390199989080429f ,-0.570100009441376f ,0.760399997234345f ,-0.310999989509583f ,0.36599999666214f ,-0.812900006771088f ,0.475899994373322f ,-0.335700005292892f ,0.13459999859333f });
  }
}
}
