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
public class JoeSkeletonSkinSiteSaluteWalk {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new JoeSkeletonSkinSiteSaluteWalk().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/JoeSkeletonSkinSiteSaluteWalk.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("H-Anim").setLevel(2))
        .addMeta(new meta().setName("title").setContent("JoeSkeletonSkinSaluteSiteWalk.x3d"))
        .addMeta(new meta().setName("description").setContent("Comprehensive example showing skeleton, skin, sites and interpolator animation together."))
        .addMeta(new meta().setName("creator").setContent("Joe D. Williams"))
        .addMeta(new meta().setName("created").setContent("9 January 2004"))
        .addMeta(new meta().setName("translated").setContent("4 December 2022"))
        .addMeta(new meta().setName("modified").setContent("27 January 2023"))
        .addMeta(new meta().setName("warning").setContent("Under development, numerous errors and warnings"))
        .addMeta(new meta().setName("TODO").setContent("This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value"))
        .addMeta(new meta().setName("TODO").setContent("Provide feedback to tovrmlx3d converter"))
        .addMeta(new meta().setName("TODO").setContent("HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegmet HAnimSite - improve diagnostics."))
        .addMeta(new meta().setName("TODO").setContent("ensure name prefix \"Joe_\" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy"))
        .addMeta(new meta().setName("reference").setContent("JoeSkeletonSkinSaluteSiteWalk.original.x3dv"))
        .addMeta(new meta().setName("reference").setContent("JoeSkeletonSkinSaluteSiteWalk.modified1.x3dv"))
        .addMeta(new meta().setName("reference").setContent("JoeSkeletonSkinSaluteSiteWalk.modified2.x3dv"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png"))
        .addMeta(new meta().setName("reference").setContent("JoeSkeletonSkinSiteSaluteWalk_composite.vsdx"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_view3dscene.png"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_X_ITE.png"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_X3DOM.png"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_freeWrl.png"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_Octaga.png"))
        .addMeta(new meta().setName("Image").setContent("JoeSkeletonSkinSiteSaluteWalk_vivaty.png"))
        .addMeta(new meta().setName("generator").setContent("tovrmlx3d, https://castle-engine.io/convert.php"))
        .addMeta(new meta().setName("reference").setContent("https://castle-engine.io/view3dscene.php#section_converting"))
        .addMeta(new meta().setName("translator").setContent("Michalis Kamburelis"))
        .addMeta(new meta().setName("translator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("translator").setContent("Joe D. Williams"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSaluteSiteWalk.x3d"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setInfo(new MFString0().getArray()).setTitle("HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3"))
        .addChild(new WorldInfo().setInfo(new MFString1().getArray()).setTitle("HAnim V1 LOA3 Skeleton Joint centers Adapted for approximatrion of ManGLoss Site Location Example and ANIM 200x Default Joint Centers, LOA3"))
        .addChild(new NavigationInfo().setDEF("HeadlightOnRevealsSkinTextureAndColors"))
        .addChild(new Background().setGroundAngle(new MFFloat2().getArray()).setGroundColor(new MFColor3().getArray()).setSkyColor(new MFColor4().getArray()))
        .addChild(new Transform().setDEF("cordsysfloor").setScale(new float[] {0.175f,0.175f,0.175f})
          .addChild(new Inline().setDEF("CoordinateAxes").setUrl(new MFString5().getArray())))
        .addComments("Authoring hint: these axes are aligned within local coordinate system")
        .addChild(new Group().setDEF("ViewpointGroup")
          .addChild(new Viewpoint().setDescription("Front Up View").setOrientation(new float[] {-1f,-1f,0f,0.55f}).setPosition(new float[] {-1f,2f,2.5f}))
          .addChild(new Viewpoint().setDescription("From Left View").setOrientation(new float[] {0.3f,1f,0f,-1.57f}).setPosition(new float[] {-2.5f,1.5f,0f}))
          .addChild(new Viewpoint().setDescription("Front Mid View").setPosition(new float[] {0f,0.5f,1.25f}))
          .addChild(new Viewpoint().setDescription("Front Feet View").setPosition(new float[] {0f,0f,0.75f}))
          .addChild(new Viewpoint().setDescription("From Right View").setOrientation(new float[] {0f,1f,0f,1.57f}).setPosition(new float[] {1f,1f,0f}))
          .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,1.65f,0f}).setDescription("Front Head View").setPosition(new float[] {0f,1.65f,0.75f}))
          .addChild(new Viewpoint().setDescription("Front Mid View").setPosition(new float[] {0f,1f,1.75f}))
          .addChild(new Viewpoint().setDescription("Rear View").setOrientation(new float[] {0f,1f,0f,3.14f}).setPosition(new float[] {0f,1.5f,-4f}))
          .addChild(new Viewpoint().setDescription("Top View").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new float[] {0f,4f,0f}))
          .addChild(new Viewpoint().setDescription("Bottom View").setOrientation(new float[] {1f,0f,0f,1.57f}).setPosition(new float[] {0f,-4f,0f}))
          .addChild(new Viewpoint().setDescription("Right View").setOrientation(new float[] {0f,1f,0f,1.57f}).setPosition(new float[] {4f,1.5f,0f})))
        .addChild(new Group().setDEF("VisualizationShapes")
          .addChild(new Transform().setScale(new float[] {5f,5f,5f}).setTranslation(new float[] {0f,2.1f,0f})
            .addChild(new Shape().setDEF("jointbox")
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt326().getArray()).setCreaseAngle(0.10000000149011612f)
                .setCoord(new Coordinate().setDEF("boxCoords").setPoint(new MFVec3f7().getArray()))
                .setColor(new Color().setColor(new MFColor8().getArray())))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.5f).setDiffuseColor(new float[] {0f,0f,0f}).setShininess(1f)))))
          .addChild(new Transform().setScale(new float[] {0.1f,0.1f,0.1f}).setTranslation(new float[] {-0.2f,0.773f,-0.016f})
            .addChild(new Shape().setDEF("sitebox")
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt329().getArray()).setCreaseAngle(0.10000000149011612f)
                .setCoord(new Coordinate().setUSE("boxCoords")))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(1f).setDiffuseColor(new float[] {1f,0f,0f}).setEmissiveColor(new float[] {1f,0f,0f}).setShininess(0.7f).setSpecularColor(new float[] {1f,0f,0f})))))
          .addChild(new Transform().setScale(new float[] {0.1f,0.1f,0.1f}).setTranslation(new float[] {0f,0.2f,0f})
            .addChild(new Shape()
              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3210().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray())))
              .setAppearance(new Appearance().setDEF("SegmentLine")
                .setMaterial(new Material().setDiffuseColor(new float[] {0f,1f,0f}).setEmissiveColor(new float[] {0f,1f,0f}).setSpecularColor(new float[] {0f,1f,0f})))))
          .addChild(new Transform().setScale(new float[] {0.1f,0.1f,0.1f}).setTranslation(new float[] {-0.2f,0.773f,-0.016f})
            .addChild(new Shape().setDEF("skinsphere")
              .setGeometry(new Sphere().setRadius(0.005f))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.5f).setDiffuseColor(new float[] {0f,1f,0f}).setEmissiveColor(new float[] {0f,1f,0f}).setShininess(1f).setSpecularColor(new float[] {0f,1f,0f}))))))
        .addChild(new Group().setDEF("SpecHumanoid")
          .addChild(new Group().setDEF("JoeISOHumanoid")
            .addChild(new HAnimHumanoid("JoeISOHumanoid").setName("Human").setDEF("Joe_Human").setInfo(new MFString12().getArray()).setVersion("2.0")
              .addComments("<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)")
              .addComments("</LOD>")
              .addSkin(new Shape().setDEF("SkinShape")
                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3213().getArray().append(new MFInt3214().getArray()).append(new MFInt3215().getArray()).append(new MFInt3216().getArray())).setCreaseAngle(3.1f)
                  .setCoord(new Coordinate().setDEF("TheSkinCoord").setPoint(new MFVec3f17().getArray().append(new MFVec3f18().getArray())))
                  .setColor(new Color().setColor(new MFColor19().getArray().append(new MFColor20().getArray()).append(new MFColor21().getArray()))))
                .setAppearance(new Appearance().setDEF("SkinAppearance")
                  .setTexture(new ImageTexture().setDEF("zBlueSpiralBkg2").setDescription("Blue Spiral Pattern").setUrl(new MFString22().getArray()))
                  .setMaterial(new Material().setDEF("SkinMaterial").setAmbientIntensity(0.6f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(0.6f).setTransparency(0.2f))))
              .setSkinCoord(new Coordinate().setUSE("TheSkinCoord"))
              .addSkeleton(new HAnimJoint("Joe_Human").setName("HumanoidRoot").setDEF("Joe_HumanoidRoot").setCenter(new float[] {0f,0.875f,0f}).setUlimit(new MFFloat23().getArray()).setLlimit(new MFFloat24().getArray())
                .addChild(new HAnimSegment("Joe_HumanoidRoot").setName("sacrum").setDEF("Joe_sacrum")
                  .addChild(new Transform().setTranslation(new float[] {0f,0.875f,0f})
                    .addChild(new Shape().setUSE("jointbox")))
                  .addChild(new Shape()
                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3225().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray())))
                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                  .addChild(new Transform().setTranslation(new float[] {0f,0.92f,0.08f})
                    .addChild(new Shape().setUSE("skinsphere")))
                  .addChild(new Transform().setTranslation(new float[] {0f,0.87f,-0.022f})
                    .addChild(new Shape().setUSE("skinsphere"))))
                .addChild(new HAnimJoint("Joe_HumanoidRoot").setName("sacroiliac").setDEF("Joe_sacroiliac").setCenter(new float[] {0f,0.92f,0f}).setSkinCoordIndex(new MFInt3227().getArray()).setSkinCoordWeight(new MFFloat28().getArray()).setUlimit(new MFFloat29().getArray()).setLlimit(new MFFloat30().getArray())
                  .addChild(new HAnimSegment("Joe_sacroiliac").setName("pelvis").setDEF("Joe_pelvis")
                    .addChild(new Transform().setTranslation(new float[] {0f,0.9149f,0.0016f})
                      .addChild(new Transform()
                        .addChild(new Shape().setUSE("jointbox"))))
                    .addChild(new Shape()
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3231().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f32().getArray())))
                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                    .addChild(new HAnimSite("Joe_pelvis").setName("l_iliocristale").setDEF("Joe_l_iliocristale").setTranslation(new float[] {0.1425f,1.065f,0.0033f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setName("l_trochanterion").setDEF("Joe_l_trochanterion").setTranslation(new float[] {0.15f,0.9f,-0.01f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setName("r_iliocristale").setDEF("Joe_r_iliocristale").setTranslation(new float[] {-0.1425f,1.065f,0.0033f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setName("r_trochanterion").setDEF("Joe_r_trochanterion").setTranslation(new float[] {-0.15f,0.9f,-0.01f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setName("l_asis").setDEF("Joe_l_asis").setTranslation(new float[] {0.0935f,1.03f,0.075f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setName("r_asis").setDEF("Joe_r_asis").setTranslation(new float[] {-0.0935f,1.03f,0.075f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setName("l_psis").setDEF("Joe_l_psis").setTranslation(new float[] {0.0773f,1.019f,-0.12f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setName("r_psis").setDEF("Joe_r_psis").setTranslation(new float[] {-0.0773f,1.019f,-0.12f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_pelvis").setName("floormarker").setDEF("Joe_floormarker")
                      .addChild(new Transform().setScale(new float[] {3f,3f,3f})
                        .addChild(new Shape().setUSE("sitebox"))))
                    .addChild(new HAnimSite("Joe_pelvis").setName("crotch").setDEF("Joe_crotch").setTranslation(new float[] {0f,0.87f,-0.022f})
                      .addChild(new Shape().setUSE("sitebox"))))
                  .addChild(new HAnimJoint("Joe_sacroiliac").setName("l_hip").setDEF("Joe_l_hip").setCenter(new float[] {0.1f,0.92f,0f}).setSkinCoordIndex(new MFInt3233().getArray()).setSkinCoordWeight(new MFFloat34().getArray()).setUlimit(new MFFloat35().getArray()).setLlimit(new MFFloat36().getArray())
                    .addChild(new HAnimSegment("Joe_l_hip").setName("l_thigh").setDEF("Joe_l_thigh")
                      .addChild(new Transform().setTranslation(new float[] {0.1f,0.92f,0f})
                        .addChild(new Shape().setUSE("jointbox")))
                      .addChild(new Shape()
                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3237().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray())))
                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                      .addChild(new Transform().setTranslation(new float[] {0.1f,0.9f,0.0775f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {0.079f,0.92f,-0.14f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {0.171f,0.65f,0f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {0.02f,0.65f,0f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {0.1f,0.65f,-0.08f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {0.1f,0.65f,0.07f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new HAnimSite("Joe_l_thigh").setName("l_knee_crease").setDEF("Joe_l_knee_crease").setTranslation(new float[] {0.115f,0.466f,-0.055f})
                        .addChild(new Shape().setUSE("sitebox")))
                      .addChild(new HAnimSite("Joe_l_thigh").setName("l_femoral_lateral_epicn").setDEF("Joe_l_femoral_lateral_epicn").setTranslation(new float[] {0.17f,0.466f,0f})
                        .addChild(new Shape().setUSE("sitebox")))
                      .addChild(new HAnimSite("Joe_l_thigh").setName("l_femoral_medial_epicn").setDEF("Joe_l_femoral_medial_epicn").setTranslation(new float[] {0.05f,0.466f,0f})
                        .addChild(new Shape().setUSE("sitebox"))))
                    .addChild(new HAnimJoint("Joe_l_hip").setName("l_knee").setDEF("Joe_l_knee").setCenter(new float[] {0.11500000208616257f,0.4659999907016754f,0f}).setSkinCoordIndex(new MFInt3239().getArray()).setSkinCoordWeight(new MFFloat40().getArray()).setUlimit(new MFFloat41().getArray()).setLlimit(new MFFloat42().getArray())
                      .addChild(new HAnimSegment("Joe_l_knee").setName("l_calf").setDEF("Joe_l_calf")
                        .addChild(new Transform().setTranslation(new float[] {0.11500000208616257f,0.4659999907016754f,0f})
                          .addChild(new Shape().setUSE("jointbox")))
                        .addChild(new Shape()
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3243().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f44().getArray())))
                          .setAppearance(new Appearance().setUSE("SegmentLine")))
                        .addChild(new Transform().setTranslation(new float[] {0.115f,0.466f,0.06f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.115f,0.466f,-0.055f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.17f,0.466f,0f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.05f,0.466f,0f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.17f,0.3f,0f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.06f,0.3f,0f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.1f,0.3f,-0.05f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {0.1f,0.3f,0.05f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new HAnimSite("Joe_l_calf").setName("l_lateral_malleolus").setDEF("Joe_l_lateral_malleolus").setTranslation(new float[] {0.15f,0.07f,0f})
                          .addChild(new Shape().setUSE("sitebox")))
                        .addChild(new HAnimSite("Joe_l_calf").setName("l_medial_malleolus").setDEF("Joe_l_medial_malleolus").setTranslation(new float[] {0.085f,0.086f,0.0125f})
                          .addChild(new Shape().setUSE("sitebox"))))
                      .addChild(new HAnimJoint("Joe_l_knee").setName("l_ankle").setDEF("Joe_l_ankle").setCenter(new float[] {0.115f,0.069f,0f}).setSkinCoordIndex(new MFInt3245().getArray()).setSkinCoordWeight(new MFFloat46().getArray()).setUlimit(new MFFloat47().getArray()).setLlimit(new MFFloat48().getArray())
                        .addChild(new HAnimSegment("Joe_l_ankle").setName("l_hindfoot").setDEF("Joe_l_hindfoot")
                          .addChild(new Transform().setTranslation(new float[] {0.115f,0.069f,0f})
                            .addChild(new Shape().setUSE("jointbox")))
                          .addChild(new Shape()
                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3249().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray())))
                            .setAppearance(new Appearance().setUSE("SegmentLine")))
                          .addChild(new Transform().setTranslation(new float[] {0.15f,0.07f,0f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {0.085f,0.086f,0.0125f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {0.115f,0.069f,-0.045f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {0.117f,0.0975f,0.0615f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new HAnimSite("Joe_l_hindfoot").setName("l_sphyrion").setDEF("Joe_l_sphyrion").setTranslation(new float[] {0.09f,0.056f,0.0125f})
                            .addChild(new Shape().setUSE("sitebox")))
                          .addChild(new HAnimSite("Joe_l_hindfoot").setName("l_calcaneous_post").setDEF("Joe_l_calcaneous_post").setTranslation(new float[] {0.115f,0.04f,-0.055f})
                            .addChild(new Shape().setUSE("sitebox"))))
                        .addChild(new HAnimJoint("Joe_l_ankle").setName("l_subtalar").setDEF("Joe_l_subtalar").setCenter(new float[] {0.115f,0.031f,0.03f}).setSkinCoordIndex(new MFInt3251().getArray()).setSkinCoordWeight(new MFFloat52().getArray()).setUlimit(new MFFloat53().getArray()).setLlimit(new MFFloat54().getArray())
                          .addChild(new HAnimSegment("Joe_l_subtalar").setName("l_midproximal").setDEF("Joe_l_midproximal")
                            .addChild(new Transform().setTranslation(new float[] {0.115f,0.031f,0.03f})
                              .addChild(new Shape().setUSE("jointbox")))
                            .addChild(new Shape()
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3255().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f56().getArray())))
                              .setAppearance(new Appearance().setUSE("SegmentLine")))
                            .addChild(new Transform().setTranslation(new float[] {0.1375f,0.006f,-0.03f})
                              .addChild(new Shape().setUSE("skinsphere")))
                            .addChild(new Transform().setTranslation(new float[] {0.095f,0.006f,-0.03f})
                              .addChild(new Shape().setUSE("skinsphere")))
                            .addChild(new Transform().setTranslation(new float[] {0.115f,0.015f,-0.045f})
                              .addChild(new Shape().setUSE("skinsphere"))))
                          .addChild(new HAnimJoint("Joe_l_subtalar").setName("l_midtarsal").setDEF("Joe_l_midtarsal").setCenter(new float[] {0.115f,0.037f,0.09f}).setSkinCoordIndex(new MFInt3257().getArray()).setSkinCoordWeight(new MFFloat58().getArray()).setUlimit(new MFFloat59().getArray()).setLlimit(new MFFloat60().getArray())
                            .addChild(new HAnimSegment("Joe_l_midtarsal").setName("l_middistal").setDEF("Joe_l_middistal")
                              .addChild(new Transform().setTranslation(new float[] {0.115f,0.037f,0.09f})
                                .addChild(new Shape().setUSE("jointbox")))
                              .addChild(new Shape()
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3261().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f62().getArray())))
                                .setAppearance(new Appearance().setUSE("SegmentLine")))
                              .addChild(new Transform().setTranslation(new float[] {0.11500000208616257f,0.05999999865889549f,0.10000000149011612f})
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {0.11500000208616257f,0f,0.07000000029802322f})
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {0.16500000655651093f,0f,0.07000000029802322f})
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {0.0949999988079071f,0f,0.07000000029802322f})
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new HAnimSite("Joe_l_middistal").setName("l_metatarsal_pha1").setDEF("Joe_l_metatarsal_pha1").setTranslation(new float[] {0.08699999749660492f,0.009999999776482582f,0.12200000137090683f})
                                .addChild(new Shape().setUSE("sitebox"))))
                            .addChild(new HAnimJoint("Joe_l_midtarsal").setName("l_metatarsal").setDEF("Joe_l_metatarsal").setCenter(new float[] {0.11500000208616257f,0.019999999552965164f,0.12200000137090683f}).setSkinCoordIndex(new MFInt3263().getArray()).setSkinCoordWeight(new MFFloat64().getArray()).setUlimit(new MFFloat65().getArray()).setLlimit(new MFFloat66().getArray())
                              .addChild(new HAnimSegment("Joe_l_metatarsal").setName("l_forefoot").setDEF("Joe_l_forefoot")
                                .addChild(new Transform().setTranslation(new float[] {0.11500000208616257f,0.019999999552965164f,0.12999999523162842f})
                                  .addChild(new Shape().setUSE("jointbox")))
                                .addChild(new Shape()
                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3267().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f68().getArray())))
                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                .addChild(new Transform().setTranslation(new float[] {0.11500000208616257f,0.03999999910593033f,0.12999999523162842f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.125f,0f,0.11999999731779099f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.16500000655651093f,0f,0.11999999731779099f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.08699999749660492f,0f,0.12200000137090683f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.09000000357627869f,0.012000000104308128f,0.18799999356269836f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.10999999940395355f,0.010999999940395355f,0.1899999976158142f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.12800000607967377f,0.010999999940395355f,0.1850000023841858f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.1420000046491623f,0.010999999940395355f,0.17800000309944153f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {0.15399999916553497f,0.009999999776482582f,0.1679999977350235f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new HAnimSite("Joe_l_forefoot").setName("l_metatarsal_pha5").setDEF("Joe_l_metatarsal_pha5").setTranslation(new float[] {0.16500000655651093f,0.009999999776482582f,0.11999999731779099f})
                                  .addChild(new Shape().setUSE("sitebox")))
                                .addChild(new HAnimSite("Joe_l_forefoot").setName("l_digit2").setDEF("Joe_l_digit2").setTranslation(new float[] {0.10999999940395355f,0.010999999940395355f,0.1899999976158142f})
                                  .addChild(new Shape().setUSE("sitebox"))))))))))
                  .addChild(new HAnimJoint("Joe_sacroiliac").setName("r_hip").setDEF("Joe_r_hip").setCenter(new float[] {-0.10000000149011612f,0.9200000166893005f,0f}).setSkinCoordIndex(new MFInt3269().getArray()).setSkinCoordWeight(new MFFloat70().getArray()).setUlimit(new MFFloat71().getArray()).setLlimit(new MFFloat72().getArray())
                    .addChild(new HAnimSegment("Joe_r_hip").setName("r_thigh").setDEF("Joe_r_thigh")
                      .addChild(new Transform().setTranslation(new float[] {-0.10000000149011612f,0.9200000166893005f,0f})
                        .addChild(new Shape().setUSE("jointbox")))
                      .addChild(new Shape()
                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3273().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f74().getArray())))
                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                      .addChild(new Transform().setTranslation(new float[] {-0.07900000363588333f,0.9200000166893005f,-0.14000000059604645f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {-0.10000000149011612f,0.8999999761581421f,0.07500000298023224f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {-0.17100000381469727f,0.6499999761581421f,0f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {-0.019999999552965164f,0.6499999761581421f,0f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {-0.10000000149011612f,0.6499999761581421f,-0.07999999821186066f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new Transform().setTranslation(new float[] {-0.10000000149011612f,0.6499999761581421f,0.07000000029802322f})
                        .addChild(new Shape().setUSE("skinsphere")))
                      .addChild(new HAnimSite("Joe_r_thigh").setName("r_knee_crease").setDEF("Joe_r_knee_crease").setTranslation(new float[] {-0.11500000208616257f,0.4659999907016754f,-0.054999999701976776f})
                        .addChild(new Shape().setUSE("sitebox")))
                      .addChild(new HAnimSite("Joe_r_thigh").setName("r_femoral_lateral_epicn").setDEF("Joe_r_femoral_lateral_epicn").setTranslation(new float[] {-0.17000000178813934f,0.4659999907016754f,0f})
                        .addChild(new Shape().setUSE("sitebox")))
                      .addChild(new HAnimSite("Joe_r_thigh").setName("r_femoral_medial_epicn").setDEF("Joe_r_femoral_medial_epicn").setTranslation(new float[] {-0.05000000074505806f,0.4659999907016754f,0f})
                        .addChild(new Shape().setUSE("sitebox"))))
                    .addChild(new HAnimJoint("Joe_r_hip").setName("r_knee").setDEF("Joe_r_knee").setCenter(new float[] {-0.05000000074505806f,0.4659999907016754f,0f}).setSkinCoordIndex(new MFInt3275().getArray()).setSkinCoordWeight(new MFFloat76().getArray()).setUlimit(new MFFloat77().getArray()).setLlimit(new MFFloat78().getArray())
                      .addChild(new HAnimSegment("Joe_r_knee").setName("r_calf").setDEF("Joe_r_calf")
                        .addChild(new Transform().setTranslation(new float[] {-0.10000000149011612f,0.49129998683929443f,0f})
                          .addChild(new Shape().setUSE("jointbox")))
                        .addChild(new Shape()
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3279().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray())))
                          .setAppearance(new Appearance().setUSE("SegmentLine")))
                        .addChild(new Transform().setTranslation(new float[] {-0.11500000208616257f,0.4659999907016754f,0.05999999865889549f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {-0.11500000208616257f,0.4659999907016754f,-0.054999999701976776f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {-0.17000000178813934f,0.4659999907016754f,0f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {-0.05000000074505806f,0.4659999907016754f,0f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {-0.17000000178813934f,0.30000001192092896f,0f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {-0.05999999865889549f,0.30000001192092896f,0f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {-0.10000000149011612f,0.30000001192092896f,-0.05000000074505806f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new Transform().setTranslation(new float[] {-0.10000000149011612f,0.30000001192092896f,0.05000000074505806f})
                          .addChild(new Shape().setUSE("skinsphere")))
                        .addChild(new HAnimSite("Joe_r_calf").setName("r_lateral_malleolus").setDEF("Joe_r_lateral_malleolus").setTranslation(new float[] {-0.15000000596046448f,0.07000000029802322f,0f})
                          .addChild(new Shape().setUSE("sitebox")))
                        .addChild(new HAnimSite("Joe_r_calf").setName("r_medial_malleolus").setDEF("Joe_r_medial_malleolus").setTranslation(new float[] {-0.08500000089406967f,0.0860000029206276f,0.012500000186264515f})
                          .addChild(new Shape().setUSE("sitebox"))))
                      .addChild(new HAnimJoint("Joe_r_knee").setName("r_ankle").setDEF("Joe_r_ankle").setCenter(new float[] {-0.11500000208616257f,0.0689999982714653f,0f}).setSkinCoordIndex(new MFInt3281().getArray()).setSkinCoordWeight(new MFFloat82().getArray()).setUlimit(new MFFloat83().getArray()).setLlimit(new MFFloat84().getArray())
                        .addChild(new HAnimSegment("Joe_r_ankle").setName("r_hindfoot").setDEF("Joe_r_hindfoot")
                          .addChild(new Transform().setTranslation(new float[] {-0.10000000149011612f,0.07119999825954437f,0f})
                            .addChild(new Shape().setUSE("jointbox")))
                          .addChild(new Shape()
                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3285().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray())))
                            .setAppearance(new Appearance().setUSE("SegmentLine")))
                          .addChild(new Transform().setTranslation(new float[] {-0.15000000596046448f,0.07000000029802322f,0f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {-0.08500000089406967f,0.0860000029206276f,0.012500000186264515f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {-0.11500000208616257f,0.0689999982714653f,-0.04500000178813934f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {-0.11699999868869781f,0.09749999642372131f,0.061500001698732376f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new HAnimSite("Joe_r_hindfoot").setName("r_sphyrion").setDEF("Joe_r_sphyrion").setTranslation(new float[] {-0.09000000357627869f,0.0560000017285347f,0.012500000186264515f})
                            .addChild(new Shape().setUSE("sitebox")))
                          .addChild(new HAnimSite("Joe_r_hindfoot").setName("r_calcaneous_post").setDEF("Joe_r_calcaneous_post").setTranslation(new float[] {-0.11500000208616257f,0.03999999910593033f,-0.054999999701976776f})
                            .addChild(new Shape().setUSE("sitebox"))))
                        .addChild(new HAnimJoint("Joe_r_ankle").setName("r_subtalar").setDEF("Joe_r_subtalar").setCenter(new float[] {-0.10000000149011612f,0.014999999664723873f,-0.009999999776482582f}).setSkinCoordIndex(new MFInt3287().getArray()).setSkinCoordWeight(new MFFloat88().getArray()).setUlimit(new MFFloat89().getArray()).setLlimit(new MFFloat90().getArray())
                          .addChild(new HAnimSegment("Joe_r_subtalar").setName("r_midproximal").setDEF("Joe_r_midproximal")
                            .addChild(new Transform().setTranslation(new float[] {-0.10000000149011612f,0.014999999664723873f,-0.009999999776482582f})
                              .addChild(new Shape().setUSE("jointbox")))
                            .addChild(new Shape()
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3291().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f92().getArray())))
                              .setAppearance(new Appearance().setUSE("SegmentLine")))
                            .addChild(new Transform().setTranslation(new float[] {-0.13750000298023224f,0.006000000052154064f,-0.029999999329447746f})
                              .addChild(new Shape().setUSE("skinsphere")))
                            .addChild(new Transform().setTranslation(new float[] {-0.0949999988079071f,0.006000000052154064f,-0.029999999329447746f})
                              .addChild(new Shape().setUSE("skinsphere")))
                            .addChild(new Transform().setTranslation(new float[] {-0.0949999988079071f,0.006000000052154064f,-0.029999999329447746f})
                              .addChild(new Shape().setUSE("skinsphere"))))
                          .addChild(new HAnimJoint("Joe_r_subtalar").setName("r_midtarsal").setDEF("Joe_r_midtarsal").setCenter(new float[] {-0.11500000208616257f,0.03700000047683716f,0.09000000357627869f}).setSkinCoordIndex(new MFInt3293().getArray()).setSkinCoordWeight(new MFFloat94().getArray()).setUlimit(new MFFloat95().getArray()).setLlimit(new MFFloat96().getArray())
                            .addChild(new HAnimSegment("Joe_r_midtarsal").setName("r_middistal").setDEF("Joe_r_middistal")
                              .addChild(new Transform().setTranslation(new float[] {-0.10000000149011612f,0.019999999552965164f,0.07000000029802322f})
                                .addChild(new Shape().setUSE("jointbox")))
                              .addChild(new Shape()
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3297().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray())))
                                .setAppearance(new Appearance().setUSE("SegmentLine")))
                              .addChild(new Transform().setTranslation(new float[] {-0.11500000208616257f,0.05999999865889549f,0.10000000149011612f})
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {-0.11500000208616257f,0f,0.07000000029802322f})
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {-0.16500000655651093f,0f,0.07000000029802322f})
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new Transform().setTranslation(new float[] {-0.16500000655651093f,0f,0.07000000029802322f})
                                .addChild(new Shape().setUSE("skinsphere")))
                              .addChild(new HAnimSite("Joe_r_middistal").setName("r_metatarsal_pha1").setDEF("Joe_r_metatarsal_pha1").setTranslation(new float[] {-0.11500000208616257f,0.019999999552965164f,0.12200000137090683f})
                                .addChild(new Shape().setUSE("sitebox"))))
                            .addChild(new HAnimJoint("Joe_r_midtarsal").setName("r_metatarsal").setDEF("Joe_r_metatarsal").setCenter(new float[] {-0.10000000149011612f,0.009999999776482582f,0.14000000059604645f}).setSkinCoordIndex(new MFInt3299().getArray()).setSkinCoordWeight(new MFFloat100().getArray()).setUlimit(new MFFloat101().getArray()).setLlimit(new MFFloat102().getArray())
                              .addChild(new HAnimSegment("Joe_r_metatarsal").setName("r_forefoot").setDEF("Joe_r_forefoot")
                                .addChild(new Transform().setTranslation(new float[] {-0.10859999805688858f,0.009999999776482582f,0.14000000059604645f})
                                  .addChild(new Shape().setUSE("jointbox")))
                                .addChild(new Shape()
                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32103().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f104().getArray())))
                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                .addChild(new Transform().setTranslation(new float[] {-0.11500000208616257f,0.03999999910593033f,0.12999999523162842f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.125f,0f,0.11999999731779099f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.16500000655651093f,0f,0.11999999731779099f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.08699999749660492f,0f,0.12200000137090683f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.09000000357627869f,0.012000000104308128f,0.18799999356269836f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.10999999940395355f,0.010999999940395355f,0.1899999976158142f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.12800000607967377f,0.010999999940395355f,0.1850000023841858f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.1420000046491623f,0.010999999940395355f,0.17800000309944153f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new Transform().setTranslation(new float[] {-0.15399999916553497f,0.009999999776482582f,0.1679999977350235f})
                                  .addChild(new Shape().setUSE("skinsphere")))
                                .addChild(new HAnimSite("Joe_r_forefoot").setName("r_metatarsal_pha5").setDEF("Joe_r_metatarsal_pha5").setTranslation(new float[] {-0.16500000655651093f,0.009999999776482582f,0.11999999731779099f})
                                  .addChild(new Shape().setUSE("sitebox")))
                                .addChild(new HAnimSite("Joe_r_forefoot").setName("r_digit2").setDEF("Joe_r_digit2").setTranslation(new float[] {-0.10999999940395355f,0.010999999940395355f,0.1899999976158142f})
                                  .addChild(new Shape().setUSE("sitebox")))))))))))
                .addChild(new HAnimJoint("Joe_HumanoidRoot").setName("vl5").setDEF("Joe_vl5").setCenter(new float[] {0f,1.0449999570846558f,-0.0949999988079071f}).setSkinCoordIndex(new MFInt32105().getArray()).setSkinCoordWeight(new MFFloat106().getArray()).setUlimit(new MFFloat107().getArray()).setLlimit(new MFFloat108().getArray())
                  .addChild(new HAnimSegment("Joe_vl5").setName("toPelvis").setDEF("Joe_toPelvisMarker")
                    .addChild(new Shape()
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32109().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray())))
                      .setAppearance(new Appearance().setUSE("SegmentLine"))))
                  .addChild(new HAnimSegment("Joe_vl5").setName("l5").setDEF("Joe_l5")
                    .addChild(new Shape()
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32111().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f112().getArray())))
                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                    .addChild(new HAnimSite("Joe_l5").setName("waist_preferred_post").setDEF("Joe_waist_preferred_post").setTranslation(new float[] {0f,1.0915000438690186f,-0.10909999907016754f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("Joe_l5").setName("navel").setDEF("Joe_navel").setTranslation(new float[] {0f,1.0722500085830688f,0.09000000357627869f})
                      .addChild(new Shape().setUSE("sitebox"))))
                  .addChild(new HAnimJoint("Joe_vl5").setName("vl4").setDEF("Joe_vl4").setCenter(new float[] {0f,1.068f,-0.085f}).setUlimit(new MFFloat113().getArray()).setLlimit(new MFFloat114().getArray())
                    .addChild(new HAnimSegment("Joe_vl4").setName("l4").setDEF("Joe_l4")
                      .addChild(new Shape()
                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32115().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f116().getArray())))
                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                      .addChild(new Transform().setTranslation(new float[] {0f,1.068f,-0.085f})
                        .addChild(new Shape().setUSE("jointbox"))))
                    .addChild(new HAnimJoint("Joe_vl4").setName("vl3").setDEF("Joe_vl3").setCenter(new float[] {0f,1.092f,-0.0725f}).setUlimit(new MFFloat117().getArray()).setLlimit(new MFFloat118().getArray())
                      .addChild(new HAnimSegment("Joe_vl3").setName("l3").setDEF("Joe_l3")
                        .addChild(new Shape()
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32119().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f120().getArray())))
                          .setAppearance(new Appearance().setUSE("SegmentLine")))
                        .addChild(new Transform().setTranslation(new float[] {0f,1.092f,-0.0725f})
                          .addChild(new Shape().setUSE("jointbox"))))
                      .addChild(new HAnimJoint("Joe_vl3").setName("vl2").setDEF("Joe_vl2").setCenter(new float[] {0f,1.12f,-0.065f}).setSkinCoordIndex(new MFInt32121().getArray()).setSkinCoordWeight(new MFFloat122().getArray()).setUlimit(new MFFloat123().getArray()).setLlimit(new MFFloat124().getArray())
                        .addChild(new HAnimSegment("Joe_vl2").setName("l2").setDEF("Joe_l2")
                          .addChild(new Shape()
                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32125().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f126().getArray())))
                            .setAppearance(new Appearance().setUSE("SegmentLine")))
                          .addChild(new Transform().setTranslation(new float[] {0f,1.1200000047683716f,-0.06499999761581421f})
                            .addChild(new Shape().setUSE("jointbox")))
                          .addChild(new Transform().setTranslation(new float[] {-0.08699999749660492f,1.190000057220459f,-0.09000000357627869f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {0.08699999749660492f,1.190000057220459f,-0.09000000357627869f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {0.1720000058412552f,1.3200000524520874f,-0.029999999329447746f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {-0.1720000058412552f,1.3200000524520874f,-0.029999999329447746f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {0.15000000596046448f,1.2300000190734863f,-0.014999999664723873f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new Transform().setTranslation(new float[] {-0.15000000596046448f,1.2300000190734863f,-0.014999999664723873f})
                            .addChild(new Shape().setUSE("skinsphere")))
                          .addChild(new HAnimSite("Joe_l2").setName("r_rib10").setDEF("Joe_r_rib10").setTranslation(new float[] {-0.08699999749660492f,1.190000057220459f,0.09000000357627869f})
                            .addChild(new Shape().setUSE("sitebox")))
                          .addChild(new HAnimSite("Joe_l2").setName("l_rib10").setDEF("Joe_l_rib10").setTranslation(new float[] {0.08699999749660492f,1.190000057220459f,0.09000000357627869f})
                            .addChild(new Shape().setUSE("sitebox")))
                          .addChild(new HAnimSite("Joe_l2").setName("rib10_midspine").setDEF("Joe_rib10_midspine").setTranslation(new float[] {0f,1.1908f,-0.1113f})
                            .addChild(new Shape().setUSE("sitebox"))))
                        .addChild(new HAnimJoint("Joe_vl2").setName("vl1").setDEF("Joe_vl1").setCenter(new float[] {0f,1.1459f,-0.0625f}).setUlimit(new MFFloat127().getArray()).setLlimit(new MFFloat128().getArray())
                          .addChild(new HAnimSegment("Joe_vl1").setName("l1").setDEF("Joe_l1")
                            .addChild(new Shape()
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32129().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f130().getArray())))
                              .setAppearance(new Appearance().setUSE("SegmentLine")))
                            .addChild(new Transform().setTranslation(new float[] {0f,1.1459f,-0.0625f})
                              .addChild(new Shape().setUSE("jointbox"))))
                          .addChild(new HAnimJoint("Joe_vl1").setName("vt12").setDEF("Joe_vt12").setCenter(new float[] {0f,1.1790000200271606f,-0.06800000369548798f}).setUlimit(new MFFloat131().getArray()).setLlimit(new MFFloat132().getArray())
                            .addChild(new HAnimSegment("Joe_vt12").setName("t12").setDEF("Joe_t12")
                              .addChild(new Shape()
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32133().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f134().getArray())))
                                .setAppearance(new Appearance().setUSE("SegmentLine")))
                              .addChild(new Transform().setTranslation(new float[] {0f,1.1790000200271606f,-0.06800000369548798f})
                                .addChild(new Shape().setUSE("jointbox"))))
                            .addChild(new HAnimJoint("Joe_vt12").setName("vt11").setDEF("Joe_vt11").setCenter(new float[] {0f,1.267899990081787f,-0.08100000023841858f}).setUlimit(new MFFloat135().getArray()).setLlimit(new MFFloat136().getArray())
                              .addChild(new HAnimSegment("Joe_vt11").setName("t11").setDEF("Joe_t11")
                                .addChild(new Shape()
                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32137().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f138().getArray())))
                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                .addChild(new Transform().setTranslation(new float[] {0f,1.2144999504089355f,-0.0754999965429306f})
                                  .addChild(new Shape().setUSE("jointbox"))))
                              .addChild(new HAnimJoint("Joe_vt11").setName("vt10").setDEF("Joe_vt10").setCenter(new float[] {0f,1.2419999837875366f,-0.09000000357627869f}).setSkinCoordIndex(new MFInt32139().getArray()).setSkinCoordWeight(new MFFloat140().getArray()).setUlimit(new MFFloat141().getArray()).setLlimit(new MFFloat142().getArray())
                                .addChild(new HAnimSegment("Joe_vt10").setName("t10").setDEF("Joe_t10")
                                  .addChild(new Shape()
                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32143().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f144().getArray())))
                                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                                  .addChild(new Transform().setTranslation(new float[] {0f,1.2419999837875366f,-0.09000000357627869f})
                                    .addChild(new Shape().setUSE("jointbox")))
                                  .addChild(new HAnimSite("Joe_t10").setName("substernale").setDEF("Joe_substernale").setTranslation(new float[] {0f,1.25f,0.11299999803304672f})
                                    .addChild(new Shape().setUSE("sitebox"))))
                                .addChild(new HAnimJoint("Joe_vt10").setName("vt9").setDEF("Joe_vt9").setCenter(new float[] {0f,1.2680000066757202f,-0.10000000149011612f}).setSkinCoordIndex(new MFInt32145().getArray()).setSkinCoordWeight(new MFFloat146().getArray()).setUlimit(new MFFloat147().getArray()).setLlimit(new MFFloat148().getArray())
                                  .addChild(new HAnimSegment("Joe_vt9").setName("t9").setDEF("Joe_t9")
                                    .addChild(new Shape()
                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32149().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f150().getArray())))
                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                    .addChild(new Transform().setTranslation(new float[] {0f,1.2680000066757202f,-0.10000000149011612f})
                                      .addChild(new Shape().setUSE("jointbox")))
                                    .addChild(new HAnimSite("Joe_t9").setName("r_thelion").setDEF("Joe_r_thelion").setTranslation(new float[] {-0.11349999904632568f,1.3179999589920044f,0.0949999988079071f})
                                      .addChild(new Shape().setUSE("sitebox")))
                                    .addChild(new HAnimSite("Joe_t9").setName("l_thelion").setDEF("Joe_l_thelion").setTranslation(new float[] {0.11349999904632568f,1.3179999589920044f,0.0949999988079071f})
                                      .addChild(new Shape().setUSE("sitebox"))))
                                  .addChild(new HAnimJoint("Joe_vt9").setName("vt8").setDEF("Joe_vt8").setCenter(new float[] {0f,1.2940000295639038f,-0.10999999940395355f}).setUlimit(new MFFloat151().getArray()).setLlimit(new MFFloat152().getArray())
                                    .addChild(new HAnimSegment("Joe_vt8").setName("t8").setDEF("Joe_t8")
                                      .addChild(new Shape()
                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32153().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f154().getArray())))
                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                      .addChild(new Transform().setTranslation(new float[] {0f,1.2940000295639038f,-0.10999999940395355f})
                                        .addChild(new Shape().setUSE("jointbox"))))
                                    .addChild(new HAnimJoint("Joe_vt8").setName("vt7").setDEF("Joe_vt7").setCenter(new float[] {0f,1.3229999542236328f,-0.11550000309944153f}).setUlimit(new MFFloat155().getArray()).setLlimit(new MFFloat156().getArray())
                                      .addChild(new HAnimSegment("Joe_vt7").setName("t7").setDEF("Joe_t7")
                                        .addChild(new Shape()
                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32157().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f158().getArray())))
                                          .setAppearance(new Appearance().setUSE("SegmentLine")))
                                        .addChild(new Transform().setTranslation(new float[] {0f,1.3229999542236328f,-0.11550000309944153f})
                                          .addChild(new Shape().setUSE("jointbox"))))
                                      .addChild(new HAnimJoint("Joe_vt7").setName("vt6").setDEF("Joe_vt6").setCenter(new float[] {0f,1.3519999980926514f,-0.11999999731779099f}).setUlimit(new MFFloat159().getArray()).setLlimit(new MFFloat160().getArray())
                                        .addChild(new HAnimSegment("Joe_vt6").setName("t6").setDEF("Joe_t6")
                                          .addChild(new Shape()
                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32161().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f162().getArray())))
                                            .setAppearance(new Appearance().setUSE("SegmentLine")))
                                          .addChild(new Transform().setTranslation(new float[] {0f,1.3519999980926514f,-0.11999999731779099f})
                                            .addChild(new Shape().setUSE("jointbox"))))
                                        .addChild(new HAnimJoint("Joe_vt6").setName("vt5").setDEF("Joe_vt5").setCenter(new float[] {0f,1.38100004196167f,-0.12349999696016312f}).setUlimit(new MFFloat163().getArray()).setLlimit(new MFFloat164().getArray())
                                          .addChild(new HAnimSegment("Joe_vt5").setName("t5").setDEF("Joe_t5")
                                            .addChild(new Shape()
                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32165().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f166().getArray())))
                                              .setAppearance(new Appearance().setUSE("SegmentLine")))
                                            .addChild(new Transform().setTranslation(new float[] {0f,1.38100004196167f,-0.12349999696016312f})
                                              .addChild(new Shape().setUSE("jointbox"))))
                                          .addChild(new HAnimJoint("Joe_vt5").setName("vt4").setDEF("Joe_vt4").setCenter(new float[] {0f,1.409999966621399f,-0.12349999696016312f}).setSkinCoordIndex(new MFInt32167().getArray()).setSkinCoordWeight(new MFFloat168().getArray()).setUlimit(new MFFloat169().getArray()).setLlimit(new MFFloat170().getArray())
                                            .addChild(new HAnimSegment("Joe_vt4").setName("t4").setDEF("Joe_t4")
                                              .addChild(new Shape()
                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32171().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f172().getArray())))
                                                .setAppearance(new Appearance().setUSE("SegmentLine")))
                                              .addChild(new Transform().setTranslation(new float[] {0f,1.409999966621399f,-0.12349999696016312f})
                                                .addChild(new Shape().setUSE("jointbox")))
                                              .addChild(new Transform().setTranslation(new float[] {0f,1.409999966621399f,-0.14499999582767487f})
                                                .addChild(new Shape().setUSE("skinsphere"))))
                                            .addChild(new HAnimJoint("Joe_vt4").setName("vt3").setDEF("Joe_vt3").setCenter(new float[] {0f,1.437999963760376f,-0.11999999731779099f}).setUlimit(new MFFloat173().getArray()).setLlimit(new MFFloat174().getArray())
                                              .addChild(new HAnimSegment("Joe_vt3").setName("t3").setDEF("Joe_t3")
                                                .addChild(new Shape()
                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32175().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f176().getArray())))
                                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                .addChild(new Transform().setTranslation(new float[] {0f,1.437999963760376f,-0.11999999731779099f})
                                                  .addChild(new Shape().setUSE("jointbox"))))
                                              .addChild(new HAnimJoint("Joe_vt3").setName("vt2").setDEF("Joe_vt2").setCenter(new float[] {0f,1.468000054359436f,-0.10499999672174454f}).setUlimit(new MFFloat177().getArray()).setLlimit(new MFFloat178().getArray())
                                                .addChild(new HAnimSegment("Joe_vt2").setName("t2").setDEF("Joe_t2")
                                                  .addChild(new Shape()
                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32179().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f180().getArray())))
                                                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                  .addChild(new Transform().setTranslation(new float[] {0f,1.468000054359436f,-0.10499999672174454f})
                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                .addChild(new HAnimJoint("Joe_vt2").setName("vt1").setDEF("Joe_vt1").setCenter(new float[] {0f,1.497f,-0.09f}).setSkinCoordIndex(new MFInt32181().getArray()).setSkinCoordWeight(new MFFloat182().getArray()).setUlimit(new MFFloat183().getArray()).setLlimit(new MFFloat184().getArray())
                                                  .addChild(new HAnimSegment("Joe_vt1").setName("t1").setDEF("Joe_t1")
                                                    .addChild(new Shape()
                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32185().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f186().getArray())))
                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                    .addChild(new Transform().setTranslation(new float[] {0f,1.497f,-0.09f})
                                                      .addChild(new Shape().setUSE("jointbox")))
                                                    .addChild(new HAnimSite("Joe_t1").setName("suprasternale").setDEF("Joe_suprasternale").setTranslation(new float[] {0f,1.440000057220459f,0.029999999329447746f})
                                                      .addChild(new Shape().setUSE("sitebox")))
                                                    .addChild(new HAnimSite("Joe_t1").setName("cervicale").setDEF("Joe_cervicale").setTranslation(new float[] {0f,1.5299999713897705f,-0.08399999886751175f})
                                                      .addChild(new Shape().setUSE("sitebox"))))
                                                  .addChild(new HAnimJoint("Joe_vt1").setName("vc7").setDEF("Joe_vc7").setCenter(new float[] {0f,1.524999976158142f,-0.07199999690055847f}).setSkinCoordIndex(new MFInt32187().getArray()).setSkinCoordWeight(new MFFloat188().getArray()).setUlimit(new MFFloat189().getArray()).setLlimit(new MFFloat190().getArray())
                                                    .addChild(new HAnimSegment("Joe_vc7").setName("c7").setDEF("Joe_c7")
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32191().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f192().getArray())))
                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                      .addChild(new Transform().setTranslation(new float[] {0f,1.524999976158142f,-0.07199999690055847f})
                                                        .addChild(new Shape().setUSE("jointbox")))
                                                      .addChild(new HAnimSite("Joe_c7").setName("r_neck_base").setDEF("Joe_r_neck_base").setTranslation(new float[] {-0.06459999829530716f,1.5148999691009521f,-0.03849999979138374f})
                                                        .addChild(new Shape().setUSE("sitebox")))
                                                      .addChild(new HAnimSite("Joe_c7").setName("l_neck_base").setDEF("Joe_l_neck_base").setTranslation(new float[] {0.06459999829530716f,1.5148999691009521f,-0.03849999979138374f})
                                                        .addChild(new Shape().setUSE("sitebox"))))
                                                    .addChild(new HAnimJoint("Joe_vc7").setName("vc6").setDEF("Joe_vc6").setCenter(new float[] {0f,1.5399999618530273f,-0.05000000074505806f}).setUlimit(new MFFloat193().getArray()).setLlimit(new MFFloat194().getArray())
                                                      .addChild(new HAnimSegment("Joe_vc6").setName("c6").setDEF("Joe_c6")
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32195().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f196().getArray())))
                                                          .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                        .addChild(new Transform().setTranslation(new float[] {0f,1.5399999618530273f,-0.05000000074505806f})
                                                          .addChild(new Shape().setUSE("jointbox"))))
                                                      .addChild(new HAnimJoint("Joe_vc6").setName("vc5").setDEF("Joe_vc5").setCenter(new float[] {0f,1.5520000457763672f,-0.03500000014901161f}).setUlimit(new MFFloat197().getArray()).setLlimit(new MFFloat198().getArray())
                                                        .addChild(new HAnimSegment("Joe_vc5").setName("c5").setDEF("Joe_c5")
                                                          .addChild(new Transform().setTranslation(new float[] {0f,1.5520000457763672f,-0.03500000014901161f})
                                                            .addChild(new Shape().setUSE("jointbox")))
                                                          .addChild(new Shape()
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32199().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f200().getArray())))
                                                            .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                        .addChild(new HAnimJoint("Joe_vc5").setName("vc4").setDEF("Joe_vc4").setCenter(new float[] {0f,1.5674999952316284f,-0.025599999353289604f}).setUlimit(new MFFloat201().getArray()).setLlimit(new MFFloat202().getArray())
                                                          .addChild(new HAnimSegment("Joe_vc4").setName("c4").setDEF("Joe_c4")
                                                            .addChild(new Shape()
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32203().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f204().getArray())))
                                                              .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                            .addChild(new Transform().setTranslation(new float[] {0f,1.5674999952316284f,-0.025599999353289604f})
                                                              .addChild(new Shape().setUSE("jointbox"))))
                                                          .addChild(new HAnimJoint("Joe_vc4").setName("vc3").setDEF("Joe_vc3").setCenter(new float[] {0f,1.5822499990463257f,-0.01850000023841858f}).setUlimit(new MFFloat205().getArray()).setLlimit(new MFFloat206().getArray())
                                                            .addChild(new HAnimSegment("Joe_vc3").setName("c3").setDEF("Joe_c3")
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32207().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f208().getArray())))
                                                                .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                              .addChild(new Transform().setTranslation(new float[] {0f,1.5822499990463257f,-0.01850000023841858f})
                                                                .addChild(new Shape().setUSE("jointbox"))))
                                                            .addChild(new HAnimJoint("Joe_vc3").setName("vc2").setDEF("Joe_vc2").setCenter(new float[] {0f,1.5950000286102295f,-0.017500000074505806f}).setUlimit(new MFFloat209().getArray()).setLlimit(new MFFloat210().getArray())
                                                              .addChild(new HAnimSegment("Joe_vc2").setName("c2").setDEF("Joe_c2")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32211().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f212().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                .addChild(new Transform().setTranslation(new float[] {0f,1.5950000286102295f,-0.017500000074505806f})
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_vc2").setName("vc1").setDEF("Joe_vc1").setCenter(new float[] {0f,1.6100000143051147f,-0.014999999664723873f}).setUlimit(new MFFloat213().getArray()).setLlimit(new MFFloat214().getArray())
                                                                .addChild(new HAnimSegment("Joe_vc1").setName("c1").setDEF("Joe_c1")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32215().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f216().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0f,1.6100000143051147f,-0.014999999664723873f})
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_vc1").setName("skullbase").setDEF("Joe_skullbase").setCenter(new float[] {0f,1.6299999952316284f,-0.009999999776482582f}).setSkinCoordIndex(new MFInt32217().getArray()).setSkinCoordWeight(new MFFloat218().getArray()).setUlimit(new MFFloat219().getArray()).setLlimit(new MFFloat220().getArray())
                                                                  .addChild(new HAnimSegment("Joe_skullbase").setName("skull").setDEF("Joe_skull")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32221().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f222().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new Transform().setTranslation(new float[] {0f,1.6299999952316284f,-0.009999999776482582f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setName("skull_tip").setDEF("Joe_skull_tip").setTranslation(new float[] {0f,1.7699999809265137f,0f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setName("sellion").setDEF("Joe_sellion").setTranslation(new float[] {0f,1.6649999618530273f,0.09000000357627869f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setName("r_infraorbitale").setDEF("Joe_r_infraorbitale").setTranslation(new float[] {-0.032999999821186066f,1.6200000047683716f,0.08699999749660492f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setName("l_infraorbitale").setDEF("Joe_l_infraorbitale").setTranslation(new float[] {0.032999999821186066f,1.6200000047683716f,0.08699999749660492f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setName("supramenton").setDEF("Joe_supramenton").setTranslation(new float[] {0f,1.5499999523162842f,0.09700000286102295f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setName("r_tragion").setDEF("Joe_r_tragion").setTranslation(new float[] {-0.07699999958276749f,1.6399999856948853f,-0.009999999776482582f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setName("r_gonion").setDEF("Joe_r_gonion").setTranslation(new float[] {-0.052000001072883606f,1.5800000429153442f,0.014999999664723873f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setName("l_tragion").setDEF("Joe_l_tragion").setTranslation(new float[] {0.07699999958276749f,1.6399999856948853f,-0.009999999776482582f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setName("l_gonion").setDEF("Joe_l_gonion").setTranslation(new float[] {0.06310000270605087f,1.5800000429153442f,0.014999999664723873f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("Joe_skull").setName("nuchale").setDEF("Joe_nuchale").setTranslation(new float[] {0f,1.625f,-0.0925000011920929f})
                                                                      .addChild(new Shape().setUSE("sitebox"))))
                                                                  .addChild(new HAnimJoint("Joe_skullbase").setName("l_eyeball_joint").setDEF("Joe_l_eyeball_joint").setCenter(new float[] {0.034f,1.659f,0.06f}).setUlimit(new MFFloat223().getArray()).setLlimit(new MFFloat224().getArray())
                                                                    .addChild(new HAnimSegment("Joe_l_eyeball_joint").setName("l_eyeball").setDEF("Joe_l_eyeball")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32225().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f226().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                      .addChild(new Transform().setScale(new float[] {1f,1f,1.4f}).setTranslation(new float[] {0.034f,1.655f,0.065f})
                                                                        .addChild(new Shape().setUSE("jointbox")))))
                                                                  .addChild(new HAnimJoint("Joe_skullbase").setName("r_eyeball_joint").setDEF("Joe_r_eyeball_joint").setCenter(new float[] {-0.034f,1.659f,0.06f}).setUlimit(new MFFloat227().getArray()).setLlimit(new MFFloat228().getArray())
                                                                    .addChild(new HAnimSegment("Joe_r_eyeball_joint").setName("r_eyeball").setDEF("Joe_r_eyeball")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32229().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f230().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                      .addChild(new Transform().setScale(new float[] {1f,1f,1.4f}).setTranslation(new float[] {-0.034f,1.655f,0.065f})
                                                                        .addChild(new Shape().setUSE("jointbox")))))))))))))
                                                  .addChild(new HAnimJoint("Joe_vt1").setName("l_sternoclavicular").setDEF("Joe_l_sternoclavicular").setCenter(new float[] {0.082f,1.4488f,-0.0353f}).setSkinCoordIndex(new MFInt32231().getArray()).setSkinCoordWeight(new MFFloat232().getArray()).setUlimit(new MFFloat233().getArray()).setLlimit(new MFFloat234().getArray())
                                                    .addChild(new HAnimSegment("Joe_l_sternoclavicular").setName("l_clavicle").setDEF("Joe_l_clavicle")
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32235().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f236().getArray())))
                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                      .addChild(new Transform().setTranslation(new float[] {0.0820000022649765f,1.448799967765808f,-0.03530000150203705f})
                                                        .addChild(new Shape().setUSE("jointbox")))
                                                      .addChild(new HAnimSite("Joe_l_clavicle").setName("l_clavicale").setDEF("Joe_l_clavicale").setTranslation(new float[] {0.029999999329447746f,1.4600000381469727f,0.03500000014901161f})
                                                        .addChild(new Shape().setUSE("sitebox"))))
                                                    .addChild(new HAnimJoint("Joe_l_sternoclavicular").setName("l_acromioclavicular").setDEF("Joe_l_acromioclavicular").setCenter(new float[] {0.09619999676942825f,1.426900029182434f,-0.042399998754262924f}).setSkinCoordIndex(new MFInt32237().getArray()).setSkinCoordWeight(new MFFloat238().getArray()).setUlimit(new MFFloat239().getArray()).setLlimit(new MFFloat240().getArray())
                                                      .addChild(new HAnimSegment("Joe_l_acromioclavicular").setName("l_scapula").setDEF("Joe_l_scapula")
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32241().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f242().getArray())))
                                                          .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                        .addChild(new Transform().setTranslation(new float[] {0.09619999676942825f,1.426900029182434f,-0.042399998754262924f})
                                                          .addChild(new Shape().setUSE("jointbox")))
                                                        .addChild(new Transform().setTranslation(new float[] {0.10999999940395355f,1.4270000457763672f,-0.13750000298023224f})
                                                          .addChild(new Shape().setUSE("skinsphere")))
                                                        .addChild(new HAnimSite("Joe_l_scapula").setName("l_acromion").setDEF("Joe_l_acromion").setTranslation(new float[] {0.17499999701976776f,1.4824999570846558f,-0.05999999865889549f})
                                                          .addChild(new Shape().setUSE("sitebox")))
                                                        .addChild(new HAnimSite("Joe_l_scapula").setName("l_axilla_ant").setDEF("Joe_l_axilla_ant").setTranslation(new float[] {0.17000000178813934f,1.3799999952316284f,0.007000000216066837f})
                                                          .addChild(new Shape().setUSE("sitebox")))
                                                        .addChild(new HAnimSite("Joe_l_scapula").setName("l_axilla_post").setDEF("Joe_l_axilla_post").setTranslation(new float[] {0.1599999964237213f,1.3799999952316284f,-0.125f})
                                                          .addChild(new Shape().setUSE("sitebox"))))
                                                      .addChild(new HAnimJoint("Joe_l_acromioclavicular").setName("l_shoulder").setDEF("Joe_l_shoulder").setCenter(new float[] {0.20000000298023224f,1.440000057220459f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32243().getArray()).setSkinCoordWeight(new MFFloat244().getArray()).setUlimit(new MFFloat245().getArray()).setLlimit(new MFFloat246().getArray())
                                                        .addChild(new HAnimSegment("Joe_l_shoulder").setName("l_upperarm").setDEF("Joe_l_upperarm")
                                                          .addChild(new Shape()
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32247().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f248().getArray())))
                                                            .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.20000000298023224f,1.440000057220459f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("jointbox")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.23499999940395355f,1.4199999570846558f,-0.0625f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.25f,1.2699999809265137f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.17000000178813934f,1.2699999809265137f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.20000000298023224f,1.2699999809265137f,-0.09000000357627869f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.20000000298023224f,1.2699999809265137f,0.019999999552965164f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new HAnimSite("Joe_l_upperarm").setName("l_humeral_medial_epicn").setDEF("Joe_l_humeral_medial_epicn").setTranslation(new float[] {0.16500000655651093f,1.138800024986267f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite("Joe_l_upperarm").setName("l_radiale").setDEF("Joe_l_radiale").setTranslation(new float[] {0.23000000417232513f,1.1330000162124634f,-0.054999999701976776f})
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite("Joe_l_upperarm").setName("l_humeral_lateral_epicn").setDEF("Joe_l_humeral_lateral_epicn").setTranslation(new float[] {0.24400000274181366f,1.138800024986267f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("sitebox"))))
                                                        .addChild(new HAnimJoint("Joe_l_shoulder").setName("l_elbow").setDEF("Joe_l_elbow").setCenter(new float[] {0.20000000298023224f,1.138800024986267f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32249().getArray()).setSkinCoordWeight(new MFFloat250().getArray()).setUlimit(new MFFloat251().getArray()).setLlimit(new MFFloat252().getArray())
                                                          .addChild(new HAnimSegment("Joe_l_elbow").setName("l_forearm").setDEF("Joe_l_forearm")
                                                            .addChild(new Shape()
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32253().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f254().getArray())))
                                                              .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.20000000298023224f,1.138800024986267f,-0.03999999910593033f})
                                                              .addChild(new Shape().setUSE("jointbox")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.20000000298023224f,1.138800024986267f,-0.013000000268220901f})
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.22499999403953552f,1f,-0.009999999776482582f})
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.22499999403953552f,1f,-0.07000000029802322f})
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1850000023841858f,1f,-0.009999999776482582f})
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1850000023841858f,1f,-0.07000000029802322f})
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new HAnimSite("Joe_l_forearm").setName("l_radial_styloid").setDEF("Joe_l_radial_styloid").setTranslation(new float[] {0.19009999930858612f,0.8644999861717224f,-0.04149999842047691f})
                                                              .addChild(new Shape().setUSE("sitebox")))
                                                            .addChild(new HAnimSite("Joe_l_forearm").setName("l_olecranon").setDEF("Joe_l_olecranon").setTranslation(new float[] {0.20000000298023224f,1.138800024986267f,-0.07999999821186066f})
                                                              .addChild(new Shape().setUSE("sitebox"))))
                                                          .addChild(new HAnimJoint("Joe_l_elbow").setName("l_wrist").setDEF("Joe_l_wrist").setCenter(new float[] {0.20000000298023224f,0.8700000047683716f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32255().getArray()).setSkinCoordWeight(new MFFloat256().getArray()).setUlimit(new MFFloat257().getArray()).setLlimit(new MFFloat258().getArray())
                                                            .addChild(new HAnimSegment("Joe_l_wrist").setName("l_hand").setDEF("Joe_l_hand")
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32259().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f260().getArray())))
                                                                .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                              .addChild(new Transform().setTranslation(new float[] {0.20000000298023224f,0.8700000047683716f,-0.03999999910593033f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new HAnimSite("Joe_l_hand").setName("l_metacarpal_pha2").setDEF("Joe_l_metacarpal_pha2").setTranslation(new float[] {0.20090000331401825f,0.8138999938964844f,-0.02370000071823597f})
                                                                .addChild(new Shape().setUSE("sitebox")))
                                                              .addChild(new HAnimSite("Joe_l_hand").setName("l_ulnar_styloid").setDEF("Joe_l_ulnar_styloid").setTranslation(new float[] {0.2142000049352646f,0.8529000282287598f,-0.06480000168085098f})
                                                                .addChild(new Shape().setUSE("sitebox")))
                                                              .addChild(new HAnimSite("Joe_l_hand").setName("l_metacarpal_pha5").setDEF("Joe_l_metacarpal_pha5").setTranslation(new float[] {0.19290000200271606f,0.7860000133514404f,-0.11219999939203262f})
                                                                .addChild(new Shape().setUSE("sitebox"))))
                                                            .addChild(new HAnimJoint("Joe_l_wrist").setName("l_thumb1").setDEF("Joe_l_thumb1").setCenter(new float[] {0.1923999935388565f,0.8471999764442444f,-0.05339999869465828f}).setSkinCoordIndex(new MFInt32261().getArray()).setSkinCoordWeight(new MFFloat262().getArray()).setUlimit(new MFFloat263().getArray()).setLlimit(new MFFloat264().getArray())
                                                              .addChild(new HAnimSegment("Joe_l_thumb1").setName("l_thumb_metacarpal").setDEF("Joe_l_thumb_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32265().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f266().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1923999935388565f,0.8471999764442444f,-0.05339999869465828f})
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_l_thumb1").setName("l_thumb2").setDEF("Joe_l_thumb2").setCenter(new float[] {0.19509999454021454f,0.8226000070571899f,0.02459999918937683f}).setSkinCoordIndex(new MFInt32267().getArray()).setSkinCoordWeight(new MFFloat268().getArray()).setUlimit(new MFFloat269().getArray()).setLlimit(new MFFloat270().getArray())
                                                                .addChild(new HAnimSegment("Joe_l_thumb2").setName("l_thumb_distal").setDEF("Joe_l_thumb_proximal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32271().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f272().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.19509999454021454f,0.8226000070571899f,0.02459999918937683f})
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_l_thumb2").setName("l_thumb3").setDEF("Joe_l_thumb3").setCenter(new float[] {0.19550000131130219f,0.8159000277519226f,0.04639999940991402f}).setSkinCoordIndex(new MFInt32273().getArray()).setSkinCoordWeight(new MFFloat274().getArray()).setUlimit(new MFFloat275().getArray()).setLlimit(new MFFloat276().getArray())
                                                                  .addChild(new HAnimSegment("Joe_l_thumb3").setName("l_thumb_distal").setDEF("Joe_l_thumb_distal")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32277().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f278().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.19550000131130219f,0.8159000277519226f,0.04639999940991402f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new HAnimSite("Joe_l_thumb_distal").setName("l_thumb_distal_tip").setDEF("Joe_l_thumb_distal_tip").setTranslation(new float[] {0.19820000231266022f,0.8061000108718872f,0.07590000331401825f})
                                                                      .addChild(new Shape().setUSE("sitebox")))))))
                                                            .addChild(new HAnimJoint("Joe_l_wrist").setName("l_index0").setDEF("Joe_l_index0").setCenter(new float[] {0.19830000400543213f,0.8023999929428101f,-0.02800000086426735f}).setSkinCoordIndex(new MFInt32279().getArray()).setSkinCoordWeight(new MFFloat280().getArray()).setUlimit(new MFFloat281().getArray()).setLlimit(new MFFloat282().getArray())
                                                              .addChild(new HAnimSegment("Joe_l_index0").setName("l_index_metacarpal").setDEF("Joe_l_index_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32283().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f284().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1983f,0.8024f,-0.028f})
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_l_index0").setName("l_index1").setDEF("Joe_l_index1").setCenter(new float[] {0.1983f,0.7815f,-0.028f}).setSkinCoordIndex(new MFInt32285().getArray()).setSkinCoordWeight(new MFFloat286().getArray()).setUlimit(new MFFloat287().getArray()).setLlimit(new MFFloat288().getArray())
                                                                .addChild(new HAnimSegment("Joe_l_index1").setName("l_index_proximal").setDEF("Joe_l_index_proximal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32289().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f290().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1983f,0.7815f,-0.028f})
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_l_index1").setName("l_index2").setDEF("Joe_l_index2").setCenter(new float[] {0.2017f,0.7363f,-0.0248f}).setSkinCoordIndex(new MFInt32291().getArray()).setSkinCoordWeight(new MFFloat292().getArray()).setUlimit(new MFFloat293().getArray()).setLlimit(new MFFloat294().getArray())
                                                                  .addChild(new HAnimSegment("Joe_l_index2").setName("l_index_middle").setDEF("Joe_l_index_middle")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32295().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f296().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.2017f,0.7363f,-0.0248f})
                                                                      .addChild(new Shape().setUSE("jointbox"))))
                                                                  .addChild(new HAnimJoint("Joe_l_index2").setName("l_index3").setDEF("Joe_l_index3").setCenter(new float[] {0.20280000567436218f,0.7139000296592712f,-0.023600000888109207f}).setSkinCoordIndex(new MFInt32297().getArray()).setSkinCoordWeight(new MFFloat298().getArray()).setUlimit(new MFFloat299().getArray()).setLlimit(new MFFloat300().getArray())
                                                                    .addChild(new HAnimSegment("Joe_l_index3").setName("l_index_distal").setDEF("Joe_l_index_distal")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32301().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f302().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.20280000567436218f,0.7139000296592712f,-0.023600000888109207f})
                                                                        .addChild(new Shape().setUSE("jointbox")))
                                                                      .addChild(new HAnimSite("Joe_l_index_distal").setName("l_index_distal_tip").setDEF("Joe_l_index_distal_tip").setTranslation(new float[] {0.20890000462532043f,0.6858000159263611f,-0.02449999935925007f})
                                                                        .addChild(new Shape().setUSE("sitebox")))
                                                                      .addChild(new HAnimSite("Joe_l_index_distal").setName("l_dactylion").setDEF("Joe_l_dactylion").setTranslation(new float[] {0.20559999346733093f,0.6743000149726868f,-0.04820000007748604f})
                                                                        .addChild(new Shape().setUSE("sitebox"))))))))
                                                            .addChild(new HAnimJoint("Joe_l_wrist").setName("l_middle0").setDEF("Joe_l_middle0").setCenter(new float[] {0.19869999587535858f,0.8029000163078308f,-0.05299999937415123f}).setSkinCoordIndex(new MFInt32303().getArray()).setSkinCoordWeight(new MFFloat304().getArray()).setUlimit(new MFFloat305().getArray()).setLlimit(new MFFloat306().getArray())
                                                              .addChild(new HAnimSegment("Joe_l_middle0").setName("l_middle_metacarpal").setDEF("Joe_l_middle_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32307().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f308().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                .addChild(new Transform().setTranslation(new float[] {0.19869999587535858f,0.8029000163078308f,-0.05299999937415123f})
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_l_middle0").setName("l_middle1").setDEF("Joe_l_middle1").setCenter(new float[] {0.19869999587535858f,0.7817999720573425f,-0.05299999937415123f}).setSkinCoordIndex(new MFInt32309().getArray()).setSkinCoordWeight(new MFFloat310().getArray()).setUlimit(new MFFloat311().getArray()).setLlimit(new MFFloat312().getArray())
                                                                .addChild(new HAnimSegment("Joe_l_middle1").setName("l_middle_proximal").setDEF("Joe_l_middle_proximal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32313().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f314().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.19869999587535858f,0.7817999720573425f,-0.05299999937415123f})
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_l_middle1").setName("l_middle2").setDEF("Joe_l_middle2").setCenter(new float[] {0.2012999951839447f,0.7272999882698059f,-0.0502999983727932f}).setSkinCoordIndex(new MFInt32315().getArray()).setSkinCoordWeight(new MFFloat316().getArray()).setUlimit(new MFFloat317().getArray()).setLlimit(new MFFloat318().getArray())
                                                                  .addChild(new HAnimSegment("Joe_l_middle2").setName("l_middle_middle").setDEF("Joe_l_middle_middle")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32319().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f320().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.2012999951839447f,0.7272999882698059f,-0.0502999983727932f})
                                                                      .addChild(new Shape().setUSE("jointbox"))))
                                                                  .addChild(new HAnimJoint("Joe_l_middle2").setName("l_middle3").setDEF("Joe_l_middle3").setCenter(new float[] {0.20260000228881836f,0.7010999917984009f,-0.049400001764297485f}).setSkinCoordIndex(new MFInt32321().getArray()).setSkinCoordWeight(new MFFloat322().getArray()).setUlimit(new MFFloat323().getArray()).setLlimit(new MFFloat324().getArray())
                                                                    .addChild(new HAnimSegment("Joe_l_middle3").setName("l_middle_distal").setDEF("Joe_l_middle_distal")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32325().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f326().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                      .addChild(new HAnimSite("Joe_l_middle_distal").setName("l_middle_distal_tip").setDEF("Joe_l_middle_distal_tip").setTranslation(new float[] {0.20800000429153442f,0.6730999946594238f,-0.04910000041127205f})
                                                                        .addChild(new Shape().setUSE("sitebox")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.20260000228881836f,0.7010999917984009f,-0.049400001764297485f})
                                                                        .addChild(new Shape().setUSE("jointbox"))))))))
                                                            .addChild(new HAnimJoint("Joe_l_wrist").setName("l_ring0").setDEF("Joe_l_ring0").setCenter(new float[] {0.1956000030040741f,0.8019000291824341f,-0.07940000295639038f}).setSkinCoordIndex(new MFInt32327().getArray()).setSkinCoordWeight(new MFFloat328().getArray()).setUlimit(new MFFloat329().getArray()).setLlimit(new MFFloat330().getArray())
                                                              .addChild(new HAnimSegment("Joe_l_ring0").setName("l_ring_metacarpal").setDEF("Joe_l_ring_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32331().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f332().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1956000030040741f,0.8019000291824341f,-0.07940000295639038f})
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_l_ring0").setName("l_ring1").setDEF("Joe_l_ring1").setCenter(new float[] {0.1956000030040741f,0.781499981880188f,-0.07940000295639038f}).setSkinCoordIndex(new MFInt32333().getArray()).setSkinCoordWeight(new MFFloat334().getArray()).setUlimit(new MFFloat335().getArray()).setLlimit(new MFFloat336().getArray())
                                                                .addChild(new HAnimSegment("Joe_l_ring1").setName("l_ring_proximal").setDEF("Joe_l_ring_proximal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32337().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f338().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1956000030040741f,0.781499981880188f,-0.07940000295639038f})
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_l_ring1").setName("l_ring2").setDEF("Joe_l_ring2").setCenter(new float[] {0.1973000019788742f,0.7286999821662903f,-0.07769999653100967f}).setSkinCoordIndex(new MFInt32339().getArray()).setSkinCoordWeight(new MFFloat340().getArray()).setUlimit(new MFFloat341().getArray()).setLlimit(new MFFloat342().getArray())
                                                                  .addChild(new HAnimSegment("Joe_l_ring2").setName("l_ring_middle").setDEF("Joe_l_ring_middle")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32343().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f344().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1973000019788742f,0.7286999821662903f,-0.07769999653100967f})
                                                                      .addChild(new Shape().setUSE("jointbox"))))
                                                                  .addChild(new HAnimJoint("Joe_l_ring2").setName("l_ring3").setDEF("Joe_l_ring3").setCenter(new float[] {0.19830000400543213f,0.7045000195503235f,-0.07670000195503235f}).setSkinCoordIndex(new MFInt32345().getArray()).setSkinCoordWeight(new MFFloat346().getArray()).setUlimit(new MFFloat347().getArray()).setLlimit(new MFFloat348().getArray())
                                                                    .addChild(new HAnimSegment("Joe_l_ring3").setName("l_ring_distal").setDEF("Joe_l_ring_distal")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32349().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f350().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.19830000400543213f,0.7045000195503235f,-0.07670000195503235f})
                                                                        .addChild(new Shape().setUSE("jointbox")))
                                                                      .addChild(new HAnimSite("Joe_l_ring_distal").setName("l_ring_distal_tip").setDEF("Joe_l_ring_distal_tip").setTranslation(new float[] {0.20350000262260437f,0.675000011920929f,-0.07559999823570251f})
                                                                        .addChild(new Shape().setUSE("sitebox"))))))))
                                                            .addChild(new HAnimJoint("Joe_l_wrist").setName("l_pinky0").setDEF("Joe_l_pinky0").setCenter(new float[] {0.1925f,0.8066f,-0.1036f}).setSkinCoordIndex(new MFInt32351().getArray()).setSkinCoordWeight(new MFFloat352().getArray()).setUlimit(new MFFloat353().getArray()).setLlimit(new MFFloat354().getArray())
                                                              .addChild(new HAnimSegment("Joe_l_pinky0").setName("l_pinky_metacarpal").setDEF("Joe_l_pinky_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32355().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f356().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                .addChild(new Transform().setTranslation(new float[] {0.19249999523162842f,0.8065999746322632f,-0.10360000282526016f})
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_l_pinky0").setName("l_pinky1").setDEF("Joe_l_pinky1").setCenter(new float[] {0.19249999523162842f,0.7865999937057495f,-0.10360000282526016f}).setSkinCoordIndex(new MFInt32357().getArray()).setSkinCoordWeight(new MFFloat358().getArray()).setUlimit(new MFFloat359().getArray()).setLlimit(new MFFloat360().getArray())
                                                                .addChild(new HAnimSegment("Joe_l_pinky1").setName("l_pinky_proximal").setDEF("Joe_l_pinky_proximal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32361().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f362().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.19249999523162842f,0.7865999937057495f,-0.10360000282526016f})
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_l_pinky1").setName("l_pinky2").setDEF("Joe_l_pinky2").setCenter(new float[] {0.19380000233650208f,0.745199978351593f,-0.10239999741315842f}).setSkinCoordIndex(new MFInt32363().getArray()).setSkinCoordWeight(new MFFloat364().getArray()).setUlimit(new MFFloat365().getArray()).setLlimit(new MFFloat366().getArray())
                                                                  .addChild(new HAnimSegment("Joe_l_pinky2").setName("l_pinky_middle").setDEF("Joe_l_pinky_middle")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1938f,0.7452f,-0.1024f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32367().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f368().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))))
                                                                  .addChild(new HAnimJoint("Joe_l_pinky2").setName("l_pinky3").setDEF("Joe_l_pinky3").setCenter(new float[] {0.19480000436306f,0.7276999950408936f,-0.10170000046491623f}).setSkinCoordIndex(new MFInt32369().getArray()).setSkinCoordWeight(new MFFloat370().getArray()).setUlimit(new MFFloat371().getArray()).setLlimit(new MFFloat372().getArray())
                                                                    .addChild(new HAnimSegment("Joe_l_pinky3").setName("l_pinky_distal").setDEF("Joe_l_pinky_distal")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32373().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f374().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1948f,0.7277f,-0.1017f})
                                                                        .addChild(new Shape().setUSE("jointbox")))
                                                                      .addChild(new HAnimSite("Joe_l_pinky_distal").setName("l_pinky_distal_tip").setDEF("Joe_l_pinky_distal_tip").setTranslation(new float[] {0.2013999968767166f,0.7009000182151794f,-0.10119999945163727f})
                                                                        .addChild(new Shape().setUSE("sitebox")))))))))))))
                                                  .addChild(new HAnimJoint("Joe_vt1").setName("r_sternoclavicular").setDEF("Joe_r_sternoclavicular").setCenter(new float[] {-0.029999999329447746f,1.4600000381469727f,0f}).setSkinCoordIndex(new MFInt32375().getArray()).setSkinCoordWeight(new MFFloat376().getArray()).setUlimit(new MFFloat377().getArray()).setLlimit(new MFFloat378().getArray())
                                                    .addChild(new HAnimSegment("Joe_r_sternoclavicular").setName("r_clavicle").setDEF("Joe_r_clavicle")
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32379().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f380().getArray())))
                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.029999999329447746f,1.4600000381469727f,0.019999999552965164f})
                                                        .addChild(new Shape().setUSE("jointbox")))
                                                      .addChild(new HAnimSite("Joe_r_clavicle").setName("r_clavicale").setDEF("Joe_r_clavicale").setTranslation(new float[] {-0.029999999329447746f,1.4600000381469727f,0.03500000014901161f})
                                                        .addChild(new Shape().setUSE("sitebox"))))
                                                    .addChild(new HAnimJoint("Joe_r_sternoclavicular").setName("r_acromioclavicular").setDEF("Joe_r_acromioclavicular").setCenter(new float[] {-0.09000000357627869f,1.409999966621399f,-0.10999999940395355f}).setSkinCoordIndex(new MFInt32381().getArray()).setSkinCoordWeight(new MFFloat382().getArray()).setUlimit(new MFFloat383().getArray()).setLlimit(new MFFloat384().getArray())
                                                      .addChild(new HAnimSegment("Joe_r_acromioclavicular").setName("r_scapula").setDEF("Joe_r_scapula")
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32385().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f386().getArray())))
                                                          .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.09000000357627869f,1.409999966621399f,-0.09000000357627869f})
                                                          .addChild(new Shape().setUSE("jointbox")))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.10999999940395355f,1.4270000457763672f,-0.13750000298023224f})
                                                          .addChild(new Shape().setUSE("skinsphere")))
                                                        .addChild(new HAnimSite("Joe_r_scapula").setName("r_acromion").setDEF("Joe_r_acromion").setTranslation(new float[] {-0.17800000309944153f,1.4824999570846558f,-0.0625f})
                                                          .addChild(new Shape().setUSE("sitebox")))
                                                        .addChild(new HAnimSite("Joe_r_scapula").setName("r_axilla_ant").setDEF("Joe_r_axilla_ant").setTranslation(new float[] {-0.17000000178813934f,1.3799999952316284f,0.007000000216066837f})
                                                          .addChild(new Shape().setUSE("sitebox")))
                                                        .addChild(new HAnimSite("Joe_r_scapula").setName("r_axilla_post").setDEF("Joe_r_axilla_post").setTranslation(new float[] {-0.1599999964237213f,1.3799999952316284f,-0.12700000405311584f})
                                                          .addChild(new Shape().setUSE("sitebox"))))
                                                      .addChild(new HAnimJoint("Joe_r_acromioclavicular").setName("r_shoulder").setDEF("Joe_r_shoulder").setCenter(new float[] {-0.20000000298023224f,1.440000057220459f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32387().getArray()).setSkinCoordWeight(new MFFloat388().getArray()).setUlimit(new MFFloat389().getArray()).setLlimit(new MFFloat390().getArray())
                                                        .addChild(new HAnimSegment("Joe_r_shoulder").setName("r_upperarm").setDEF("Joe_r_upperarm")
                                                          .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,1.440000057220459f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("jointbox")))
                                                          .addChild(new Shape()
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32391().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f392().getArray())))
                                                            .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.17800000309944153f,1.4824999570846558f,-0.0625f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.17000000178813934f,1.3799999952316284f,0.007000000216066837f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.1599999964237213f,1.3799999952316284f,-0.12700000405311584f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.23499999940395355f,1.4199999570846558f,-0.0625f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.23000000417232513f,1.2350000143051147f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.1599999964237213f,1.2300000190734863f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,1.2300000190734863f,-0.10499999672174454f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,1.2350000143051147f,0.019999999552965164f})
                                                            .addChild(new Shape().setUSE("skinsphere")))
                                                          .addChild(new HAnimSite("Joe_r_upperarm").setName("r_humeral_medial_epicn").setDEF("Joe_r_humeral_medial_epicn").setTranslation(new float[] {-0.16500000655651093f,1.138800024986267f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite("Joe_r_upperarm").setName("r_radiale").setDEF("Joe_r_radiale").setTranslation(new float[] {-0.23000000417232513f,1.1330000162124634f,-0.054999999701976776f})
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite("Joe_r_upperarm").setName("r_humeral_lateral_epicn").setDEF("Joe_r_humeral_lateral_epicn").setTranslation(new float[] {-0.24400000274181366f,1.138800024986267f,-0.03999999910593033f})
                                                            .addChild(new Shape().setUSE("sitebox"))))
                                                        .addChild(new HAnimJoint("Joe_r_shoulder").setName("r_elbow").setDEF("Joe_r_elbow").setCenter(new float[] {-0.20000000298023224f,1.138800024986267f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32393().getArray()).setSkinCoordWeight(new MFFloat394().getArray()).setUlimit(new MFFloat395().getArray()).setLlimit(new MFFloat396().getArray())
                                                          .addChild(new HAnimSegment("Joe_r_elbow").setName("r_forearm").setDEF("Joe_r_forearm")
                                                            .addChild(new Shape()
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32397().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f398().getArray())))
                                                              .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,1.138800024986267f,-0.03999999910593033f})
                                                              .addChild(new Shape().setUSE("jointbox")))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,1.138800024986267f,0.013000000268220901f})
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.22499999403953552f,1f,-0.009999999776482582f})
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.22499999403953552f,1f,-0.07000000029802322f})
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1850000023841858f,1f,-0.009999999776482582f})
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1850000023841858f,1f,-0.07000000029802322f})
                                                              .addChild(new Shape().setUSE("skinsphere")))
                                                            .addChild(new HAnimSite("Joe_r_forearm").setName("r_radial_styloid").setDEF("Joe_r_radial_styloid").setTranslation(new float[] {-0.20000000298023224f,0.8999999761581421f,-0.014999999664723873f})
                                                              .addChild(new Shape().setUSE("sitebox")))
                                                            .addChild(new HAnimSite("Joe_r_forearm").setName("r_olecranon").setDEF("Joe_r_olecranon").setTranslation(new float[] {-0.20000000298023224f,1.138800024986267f,-0.07999999821186066f})
                                                              .addChild(new Shape().setUSE("sitebox"))))
                                                          .addChild(new HAnimJoint("Joe_r_elbow").setName("r_wrist").setDEF("Joe_r_wrist").setCenter(new float[] {-0.20000000298023224f,0.8899999856948853f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32399().getArray()).setSkinCoordWeight(new MFFloat400().getArray()).setUlimit(new MFFloat401().getArray()).setLlimit(new MFFloat402().getArray())
                                                            .addChild(new HAnimSegment("Joe_r_wrist").setName("r_hand").setDEF("Joe_r_hand")
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32403().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f404().getArray())))
                                                                .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.8899999856948853f,-0.03999999910593033f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new HAnimSite("Joe_r_hand").setName("r_ulnar_styloid").setDEF("Joe_r_ulnar_styloid").setTranslation(new float[] {-0.20000000298023224f,0.8999999761581421f,-0.08500000089406967f})
                                                                .addChild(new Shape().setUSE("sitebox"))))
                                                            .addChild(new HAnimJoint("Joe_r_wrist").setName("r_thumb1").setDEF("Joe_r_thumb1").setCenter(new float[] {-0.20000000298023224f,0.8500000238418579f,0f}).setSkinCoordIndex(new MFInt32405().getArray()).setSkinCoordWeight(new MFFloat406().getArray()).setUlimit(new MFFloat407().getArray()).setLlimit(new MFFloat408().getArray())
                                                              .addChild(new HAnimSegment("Joe_r_thumb1").setName("r_thumb_metacarpal").setDEF("Joe_r_thumb_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32409().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f410().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.8500000238418579f,0f})
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_r_thumb1").setName("r_thumb2").setDEF("Joe_r_thumb2").setCenter(new float[] {-0.20000000298023224f,0.8199999928474426f,0.029999999329447746f}).setSkinCoordIndex(new MFInt32411().getArray()).setSkinCoordWeight(new MFFloat412().getArray()).setUlimit(new MFFloat413().getArray()).setLlimit(new MFFloat414().getArray())
                                                                .addChild(new HAnimSegment("Joe_r_thumb2").setName("r_thumb_proximal").setDEF("Joe_r_thumb_proximal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32415().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f416().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.8199999928474426f,0.029999999329447746f})
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_r_thumb2").setName("r_thumb3").setDEF("Joe_r_thumb3").setCenter(new float[] {-0.20000000298023224f,0.800000011920929f,0.05000000074505806f}).setSkinCoordIndex(new MFInt32417().getArray()).setSkinCoordWeight(new MFFloat418().getArray()).setUlimit(new MFFloat419().getArray()).setLlimit(new MFFloat420().getArray())
                                                                  .addChild(new HAnimSegment("Joe_r_thumb3").setName("r_thumb_distal").setDEF("Joe_r_thumb_distal")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32421().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f422().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new Transform().setDEF("Thumbnail").setTranslation(new float[] {-0.20000000298023224f,0.7850000262260437f,0.07500000298023224f})
                                                                      .addChild(new Shape().setUSE("skinsphere")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.800000011920929f,0.05000000074505806f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new HAnimSite("Joe_r_thumb_distal").setName("r_thumb_distal_tip").setDEF("Joe_r_thumb_distal_tip").setTranslation(new float[] {-0.20000000298023224f,0.7799999713897705f,0.07000000029802322f})
                                                                      .addChild(new Shape().setUSE("sitebox")))))))
                                                            .addChild(new HAnimJoint("Joe_r_wrist").setName("r_index0").setDEF("Joe_r_index0").setCenter(new float[] {-0.20000000298023224f,0.8399999737739563f,-0.014999999664723873f}).setSkinCoordIndex(new MFInt32423().getArray()).setSkinCoordWeight(new MFFloat424().getArray()).setUlimit(new MFFloat425().getArray()).setLlimit(new MFFloat426().getArray())
                                                              .addChild(new HAnimSegment("Joe_r_index0").setName("r_index_metacarpal").setDEF("Joe_r_index_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32427().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f428().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.8399999737739563f,-0.014999999664723873f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new HAnimSite("Joe_r_index_metacarpal").setName("r_metacarpal_pha2").setDEF("Joe_r_metacarpal_pha2").setTranslation(new float[] {-0.20000000298023224f,0.7929999828338623f,-0.004999999888241291f})
                                                                  .addChild(new Shape().setUSE("sitebox"))))
                                                              .addChild(new HAnimJoint("Joe_r_index0").setName("r_index1").setDEF("Joe_r_index1").setCenter(new float[] {-0.20000000298023224f,0.7929999828338623f,-0.014999999664723873f}).setSkinCoordIndex(new MFInt32429().getArray()).setSkinCoordWeight(new MFFloat430().getArray()).setUlimit(new MFFloat431().getArray()).setLlimit(new MFFloat432().getArray())
                                                                .addChild(new HAnimSegment("Joe_r_index1").setName("r_index_proximal").setDEF("Joe_r_index_proximal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32433().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f434().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7929999828338623f,-0.014999999664723873f})
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_r_index1").setName("r_index2").setDEF("Joe_r_index2").setCenter(new float[] {-0.20000000298023224f,0.7450000047683716f,-0.014999999664723873f}).setSkinCoordIndex(new MFInt32435().getArray()).setSkinCoordWeight(new MFFloat436().getArray()).setUlimit(new MFFloat437().getArray()).setLlimit(new MFFloat438().getArray())
                                                                  .addChild(new HAnimSegment("Joe_r_index2").setName("r_index_middle").setDEF("Joe_r_index_middle")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32439().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f440().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7450000047683716f,-0.014999999664723873f})
                                                                      .addChild(new Shape().setUSE("jointbox"))))
                                                                  .addChild(new HAnimJoint("Joe_r_index2").setName("r_index3").setDEF("Joe_r_index3").setCenter(new float[] {-0.20000000298023224f,0.7200000286102295f,-0.014999999664723873f}).setSkinCoordIndex(new MFInt32441().getArray()).setSkinCoordWeight(new MFFloat442().getArray()).setUlimit(new MFFloat443().getArray()).setLlimit(new MFFloat444().getArray())
                                                                    .addChild(new HAnimSegment("Joe_r_index3").setName("r_index_distal").setDEF("Joe_r_index_distal")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32445().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f446().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7200000286102295f,-0.014999999664723873f})
                                                                        .addChild(new Shape().setUSE("jointbox")))
                                                                      .addChild(new HAnimSite("Joe_r_index_distal").setName("r_index_distal_tip").setDEF("Joe_r_index_distal_tip").setTranslation(new float[] {-0.20000000298023224f,0.6949999928474426f,-0.014999999664723873f})
                                                                        .addChild(new Shape().setUSE("sitebox"))))))))
                                                            .addChild(new HAnimJoint("Joe_r_wrist").setName("r_middle0").setDEF("Joe_r_middle0").setCenter(new float[] {-0.20000000298023224f,0.8349999785423279f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32447().getArray()).setSkinCoordWeight(new MFFloat448().getArray()).setUlimit(new MFFloat449().getArray()).setLlimit(new MFFloat450().getArray())
                                                              .addChild(new HAnimSegment("Joe_r_middle0").setName("r_middle_metacarpal").setDEF("Joe_r_middle_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32451().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f452().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.8349999785423279f,-0.03999999910593033f})
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_r_middle0").setName("r_middle1").setDEF("Joe_r_middle1").setCenter(new float[] {-0.20000000298023224f,0.7879999876022339f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32453().getArray()).setSkinCoordWeight(new MFFloat454().getArray()).setUlimit(new MFFloat455().getArray()).setLlimit(new MFFloat456().getArray())
                                                                .addChild(new HAnimSegment("Joe_r_middle1").setName("r_middle_proximal").setDEF("Joe_r_middle_proximal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32457().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f458().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7879999876022339f,-0.03999999910593033f})
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_r_middle1").setName("r_middle2").setDEF("Joe_r_middle2").setCenter(new float[] {-0.20000000298023224f,0.7400000095367432f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32459().getArray()).setSkinCoordWeight(new MFFloat460().getArray()).setUlimit(new MFFloat461().getArray()).setLlimit(new MFFloat462().getArray())
                                                                  .addChild(new HAnimSegment("Joe_r_middle2").setName("r_middle_middle").setDEF("Joe_r_middle_middle")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32463().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f464().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7400000095367432f,-0.03999999910593033f})
                                                                      .addChild(new Shape().setUSE("jointbox"))))
                                                                  .addChild(new HAnimJoint("Joe_r_middle2").setName("r_middle3").setDEF("Joe_r_middle3").setCenter(new float[] {-0.20000000298023224f,0.7142000198364258f,-0.03999999910593033f}).setSkinCoordIndex(new MFInt32465().getArray()).setSkinCoordWeight(new MFFloat466().getArray()).setUlimit(new MFFloat467().getArray()).setLlimit(new MFFloat468().getArray())
                                                                    .addChild(new HAnimSegment("Joe_r_middle3").setName("r_middle_distal").setDEF("Joe_r_middle_distal")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32469().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f470().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7142000198364258f,-0.03999999910593033f})
                                                                        .addChild(new Shape().setUSE("jointbox")))
                                                                      .addChild(new HAnimSite("Joe_r_middle_distal").setName("r_dactylion").setDEF("Joe_r_dactylion").setTranslation(new float[] {-0.20000000298023224f,0.6800000071525574f,-0.03999999910593033f})
                                                                        .addChild(new Shape().setUSE("sitebox")))
                                                                      .addChild(new HAnimSite("Joe_r_middle_distal").setName("r_middle_distal_tip").setDEF("Joe_r_middle_distal_tip").setTranslation(new float[] {-0.20000000298023224f,0.6800000071525574f,-0.03999999910593033f})
                                                                        .addChild(new Shape().setUSE("sitebox"))))))))
                                                            .addChild(new HAnimJoint("Joe_r_wrist").setName("r_ring0").setDEF("Joe_r_ring0").setCenter(new float[] {-0.2f,0.835f,-0.065f}).setSkinCoordIndex(new MFInt32471().getArray()).setSkinCoordWeight(new MFFloat472().getArray()).setUlimit(new MFFloat473().getArray()).setLlimit(new MFFloat474().getArray())
                                                              .addChild(new HAnimSegment("Joe_r_ring0").setName("r_ring_metacarpal").setDEF("Joe_r_ring_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32475().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f476().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.8349999785423279f,-0.06499999761581421f})
                                                                  .addChild(new Shape().setUSE("jointbox"))))
                                                              .addChild(new HAnimJoint("Joe_r_ring0").setName("r_ring1").setDEF("Joe_r_ring1").setCenter(new float[] {-0.20000000298023224f,0.7929999828338623f,-0.06499999761581421f}).setSkinCoordIndex(new MFInt32477().getArray()).setSkinCoordWeight(new MFFloat478().getArray()).setUlimit(new MFFloat479().getArray()).setLlimit(new MFFloat480().getArray())
                                                                .addChild(new HAnimSegment("Joe_r_ring1").setName("r_ring_proximal").setDEF("Joe_r_ring_proximal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32481().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f482().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7929999828338623f,-0.06499999761581421f})
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_r_ring1").setName("r_ring2").setDEF("Joe_r_ring2").setCenter(new float[] {-0.20000000298023224f,0.7400000095367432f,-0.06499999761581421f}).setSkinCoordIndex(new MFInt32483().getArray()).setSkinCoordWeight(new MFFloat484().getArray()).setUlimit(new MFFloat485().getArray()).setLlimit(new MFFloat486().getArray())
                                                                  .addChild(new HAnimSegment("Joe_r_ring2").setName("r_ring_middle").setDEF("Joe_r_ring_middle")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32487().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f488().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7400000095367432f,-0.06499999761581421f})
                                                                      .addChild(new Shape().setUSE("jointbox"))))
                                                                  .addChild(new HAnimJoint("Joe_r_ring2").setName("r_ring3").setDEF("Joe_r_ring3").setCenter(new float[] {-0.20000000298023224f,0.7177000045776367f,-0.06499999761581421f}).setSkinCoordIndex(new MFInt32489().getArray()).setSkinCoordWeight(new MFFloat490().getArray()).setUlimit(new MFFloat491().getArray()).setLlimit(new MFFloat492().getArray())
                                                                    .addChild(new HAnimSegment("Joe_r_ring3").setName("r_ring_distal").setDEF("Joe_r_ring_distal")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32493().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f494().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7177000045776367f,-0.06499999761581421f})
                                                                        .addChild(new Shape().setUSE("jointbox")))
                                                                      .addChild(new HAnimSite("Joe_r_ring_distal").setName("r_ring_distal_tip").setDEF("Joe_r_ring_distal_tip").setTranslation(new float[] {-0.20000000298023224f,0.6949999928474426f,-0.06499999761581421f})
                                                                        .addChild(new Shape().setUSE("sitebox"))))))))
                                                            .addChild(new HAnimJoint("Joe_r_wrist").setName("r_pinky0").setDEF("Joe_r_pinky0").setCenter(new float[] {-0.20000000298023224f,0.8399999737739563f,-0.08500000089406967f}).setSkinCoordIndex(new MFInt32495().getArray()).setSkinCoordWeight(new MFFloat496().getArray()).setUlimit(new MFFloat497().getArray()).setLlimit(new MFFloat498().getArray())
                                                              .addChild(new HAnimSegment("Joe_r_pinky0").setName("r_pinky_metacarpal").setDEF("Joe_r_pinky_metacarpal")
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32499().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f500().getArray())))
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.8399999737739563f,-0.08500000089406967f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new HAnimSite("Joe_r_pinky_metacarpal").setName("r_metacarpal_pha5").setDEF("Joe_r_metacarpal_pha5").setTranslation(new float[] {-0.20000000298023224f,0.7900000214576721f,-0.0949999988079071f})
                                                                  .addChild(new Shape().setUSE("sitebox"))))
                                                              .addChild(new HAnimJoint("Joe_r_pinky0").setName("r_pinky1").setDEF("Joe_r_pinky1").setCenter(new float[] {-0.20000000298023224f,0.7900000214576721f,-0.08500000089406967f}).setSkinCoordIndex(new MFInt32501().getArray()).setSkinCoordWeight(new MFFloat502().getArray()).setUlimit(new MFFloat503().getArray()).setLlimit(new MFFloat504().getArray())
                                                                .addChild(new HAnimSegment("Joe_r_pinky1").setName("r_pinky_proximal").setDEF("Joe_r_pinky_proximal")
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32505().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f506().getArray())))
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7900000214576721f,-0.08500000089406967f})
                                                                    .addChild(new Shape().setUSE("jointbox"))))
                                                                .addChild(new HAnimJoint("Joe_r_pinky1").setName("r_pinky2").setDEF("Joe_r_pinky2").setCenter(new float[] {-0.20000000298023224f,0.7549999952316284f,-0.08500000089406967f}).setSkinCoordIndex(new MFInt32507().getArray()).setSkinCoordWeight(new MFFloat508().getArray()).setUlimit(new MFFloat509().getArray()).setLlimit(new MFFloat510().getArray())
                                                                  .addChild(new HAnimSegment("Joe_r_pinky2").setName("r_pinky_middle").setDEF("Joe_r_pinky_middle")
                                                                    .addChild(new Shape()
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32511().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f512().getArray())))
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7549999952316284f,-0.08500000089406967f})
                                                                      .addChild(new Shape().setUSE("jointbox"))))
                                                                  .addChild(new HAnimJoint("Joe_r_pinky2").setName("r_pinky3").setDEF("Joe_r_pinky3").setCenter(new float[] {-0.20000000298023224f,0.7350000143051147f,-0.09000000357627869f}).setSkinCoordIndex(new MFInt32513().getArray()).setSkinCoordWeight(new MFFloat514().getArray()).setUlimit(new MFFloat515().getArray()).setLlimit(new MFFloat516().getArray())
                                                                    .addChild(new HAnimSegment("Joe_r_pinky3").setName("r_pinky_distal").setDEF("Joe_r_pinky_distal")
                                                                      .addChild(new Shape()
                                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32517().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f518().getArray())))
                                                                        .setAppearance(new Appearance().setUSE("SegmentLine")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.20000000298023224f,0.7350000143051147f,-0.08500000089406967f})
                                                                        .addChild(new Shape().setUSE("jointbox")))
                                                                      .addChild(new HAnimSite("Joe_r_pinky_distal").setName("r_pinky_distal_tip").setDEF("Joe_r_pinky_distal_tip").setTranslation(new float[] {-0.20000000298023224f,0.7200000286102295f,-0.08500000089406967f})
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
              .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_pinky3")))))
        .addChild(new TimeSensor().setDEF("Time1").setCycleInterval(2.86d).setLoop(true))
        .addChild(new TimeSensor().setDEF("Time2").setCycleInterval(5.72d).setLoop(true))
        .addChild(new TimeSensor().setDEF("Time3").setCycleInterval(5.8d).setLoop(true))
        .addChild(new OrientationInterpolator().setDEF("Pitch").setKey(new MFFloat519().getArray()).setKeyValue(new MFRotation520().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Yaw").setKey(new MFFloat521().getArray()).setKeyValue(new MFRotation522().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Roll").setKey(new MFFloat523().getArray()).setKeyValue(new MFRotation524().getArray()))
        .addChild(new OrientationInterpolator().setDEF("vc6Yaw").setKey(new MFFloat525().getArray()).setKeyValue(new MFRotation526().getArray()))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("vc6Yaw"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vc6Yaw").setToField("set_rotation").setToNode("Joe_vc6"))
        .addChild(new OrientationInterpolator().setDEF("EyeballsRotation").setKey(new MFFloat527().getArray()).setKeyValue(new MFRotation528().getArray()))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time3").setToField("set_fraction").setToNode("EyeballsRotation"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("EyeballsRotation").setToField("set_rotation").setToNode("Joe_r_eyeball_joint"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("EyeballsRotation").setToField("set_rotation").setToNode("Joe_l_eyeball_joint"))
        .addChild(new OrientationInterpolator().setDEF("r_sternoclavicularRelax").setKey(new MFFloat529().getArray()).setKeyValue(new MFRotation530().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_acromioclavicularRelax").setKey(new MFFloat531().getArray()).setKeyValue(new MFRotation532().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_shoulderRelax").setKey(new MFFloat533().getArray()).setKeyValue(new MFRotation534().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_elbowRelax").setKey(new MFFloat535().getArray()).setKeyValue(new MFRotation536().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_wristRelax").setKey(new MFFloat537().getArray()).setKeyValue(new MFRotation538().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_index0Relax").setKey(new MFFloat539().getArray()).setKeyValue(new MFRotation540().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_index1Relax").setKey(new MFFloat541().getArray()).setKeyValue(new MFRotation542().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_middle0Relax").setKey(new MFFloat543().getArray()).setKeyValue(new MFRotation544().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_middle1Relax").setKey(new MFFloat545().getArray()).setKeyValue(new MFRotation546().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_ring0Relax").setKey(new MFFloat547().getArray()).setKeyValue(new MFRotation548().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_ring1Relax").setKey(new MFFloat549().getArray()).setKeyValue(new MFRotation550().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_pinky0Relax").setKey(new MFFloat551().getArray()).setKeyValue(new MFRotation552().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_pinky1Relax").setKey(new MFFloat553().getArray()).setKeyValue(new MFRotation554().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_thumb1Relax").setKey(new MFFloat555().getArray()).setKeyValue(new MFRotation556().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_thumb2Relax").setKey(new MFFloat557().getArray()).setKeyValue(new MFRotation558().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_thumb3Relax").setKey(new MFFloat559().getArray()).setKeyValue(new MFRotation560().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_fingers2Relax").setKey(new MFFloat561().getArray()).setKeyValue(new MFRotation562().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_fingers3Relax").setKey(new MFFloat563().getArray()).setKeyValue(new MFRotation564().getArray()))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_sternoclavicularRelax").setToField("set_rotation").setToNode("Joe_r_sternoclavicular"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_acromioclavicularRelax").setToField("set_rotation").setToNode("Joe_r_acromioclavicular"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_shoulderRelax").setToField("set_rotation").setToNode("Joe_r_shoulder"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_elbowRelax").setToField("set_rotation").setToNode("Joe_r_elbow"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_wristRelax").setToField("set_rotation").setToNode("Joe_r_wrist"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_thumb1Relax").setToField("set_rotation").setToNode("Joe_r_thumb1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_thumb2Relax").setToField("set_rotation").setToNode("Joe_r_thumb2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_thumb3Relax").setToField("set_rotation").setToNode("Joe_r_thumb3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_index0Relax").setToField("set_rotation").setToNode("Joe_r_index0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_index1Relax").setToField("set_rotation").setToNode("Joe_r_index1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_fingers2Relax").setToField("set_rotation").setToNode("Joe_r_index2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_fingers3Relax").setToField("set_rotation").setToNode("Joe_r_index3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_middle0Relax").setToField("set_rotation").setToNode("Joe_r_middle0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_middle1Relax").setToField("set_rotation").setToNode("Joe_r_middle1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_fingers2Relax").setToField("set_rotation").setToNode("Joe_r_middle2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_fingers3Relax").setToField("set_rotation").setToNode("Joe_r_middle3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_ring0Relax").setToField("set_rotation").setToNode("Joe_r_ring0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_ring1Relax").setToField("set_rotation").setToNode("Joe_r_ring1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_fingers2Relax").setToField("set_rotation").setToNode("Joe_r_ring2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_fingers3Relax").setToField("set_rotation").setToNode("Joe_r_ring3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_pinky0Relax").setToField("set_rotation").setToNode("Joe_r_pinky0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_pinky1Relax").setToField("set_rotation").setToNode("Joe_r_pinky1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_fingers2Relax").setToField("set_rotation").setToNode("Joe_r_pinky2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_fingers3Relax").setToField("set_rotation").setToNode("Joe_r_pinky3"))
        .addChild(new OrientationInterpolator().setDEF("r_sternoclavicularRoll").setKey(new MFFloat565().getArray()).setKeyValue(new MFRotation566().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_acromioclavicularRoll").setKey(new MFFloat567().getArray()).setKeyValue(new MFRotation568().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_shoulderRoll").setKey(new MFFloat569().getArray()).setKeyValue(new MFRotation570().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_ForeArmPitch").setKey(new MFFloat571().getArray()).setKeyValue(new MFRotation572().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_wristRoll").setKey(new MFFloat573().getArray()).setKeyValue(new MFRotation574().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_handPitch").setKey(new MFFloat575().getArray()).setKeyValue(new MFRotation576().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_thumb1Pitch").setKey(new MFFloat577().getArray()).setKeyValue(new MFRotation578().getArray()))
        .addChild(new OrientationInterpolator().setDEF("r_thumb2Pitch").setKey(new MFFloat579().getArray()).setKeyValue(new MFRotation580().getArray()))
        .addChild(new OrientationInterpolator().setDEF("l_shoulderRoll").setKey(new MFFloat581().getArray()).setKeyValue(new MFRotation582().getArray()))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("r_sternoclavicularRoll"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("r_acromioclavicularRoll"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("r_shoulderRoll"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("r_ForeArmPitch"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("r_wristRoll"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("r_handPitch"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("r_thumb1Pitch"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time2").setToField("set_fraction").setToNode("r_thumb2Pitch"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_sternoclavicularRoll").setToField("set_rotation").setToNode("Joe_r_sternoclavicular"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_acromioclavicularRoll").setToField("set_rotation").setToNode("Joe_r_acromioclavicular"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_shoulderRoll").setToField("set_rotation").setToNode("Joe_r_shoulder"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_ForeArmPitch").setToField("set_rotation").setToNode("Joe_r_elbow"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_wristRoll").setToField("set_rotation").setToNode("Joe_r_wrist"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_index0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_index1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_index2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_index3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_middle0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_middle1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_middle2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_middle3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_ring0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_ring1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_ring2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_ring3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_pinky0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_pinky1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_pinky2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_handPitch").setToField("set_rotation").setToNode("Joe_r_pinky3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_thumb1Pitch").setToField("set_rotation").setToNode("Joe_r_thumb1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_thumb2Pitch").setToField("set_rotation").setToNode("Joe_r_thumb2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_thumb2Pitch").setToField("set_rotation").setToNode("Joe_r_thumb3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_shoulderRoll").setToField("set_rotation").setToNode("Joe_l_shoulder"))
        .addChild(new Group()
          .addChild(new PositionInterpolator().setDEF("HUMANOIDROOT_POSITION_ANIMATOR").setKey(new MFFloat583().getArray()).setKeyValue(new MFVec3f584().getArray()))
          .addChild(new OrientationInterpolator().setDEF("HUMANOIDROOT_ANIMATOR").setKey(new MFFloat585().getArray()).setKeyValue(new MFRotation586().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_HIP_ANIMATOR").setKey(new MFFloat587().getArray()).setKeyValue(new MFRotation588().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_KNEE_ANIMATOR").setKey(new MFFloat589().getArray()).setKeyValue(new MFRotation590().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_ANKLE_ANIMATOR").setKey(new MFFloat591().getArray()).setKeyValue(new MFRotation592().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_ANKLE_ANIMATOR").setKey(new MFFloat593().getArray()).setKeyValue(new MFRotation594().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_subtalar_ANIMATOR").setKey(new MFFloat595().getArray()).setKeyValue(new MFRotation596().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_MIDTARSAL_ANIMATOR").setKey(new MFFloat597().getArray()).setKeyValue(new MFRotation598().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_metatarsal_ANIMATOR").setKey(new MFFloat599().getArray()).setKeyValue(new MFRotation600().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_HIP_ANIMATOR").setKey(new MFFloat601().getArray()).setKeyValue(new MFRotation602().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_KNEE_ANIMATOR").setKey(new MFFloat603().getArray()).setKeyValue(new MFRotation604().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_subtalar_ANIMATOR").setKey(new MFFloat605().getArray()).setKeyValue(new MFRotation606().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_MIDTARSAL_ANIMATOR").setKey(new MFFloat607().getArray()).setKeyValue(new MFRotation608().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_metatarsal_ANIMATOR").setKey(new MFFloat609().getArray()).setKeyValue(new MFRotation610().getArray()))
          .addChild(new OrientationInterpolator().setDEF("VL5_ANIMATOR").setKey(new MFFloat611().getArray()).setKeyValue(new MFRotation612().getArray()))
          .addChild(new OrientationInterpolator().setDEF("SKULLBASE_ANIMATOR").setKey(new MFFloat613().getArray()).setKeyValue(new MFRotation614().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_SHOULDER_ANIMATOR").setKey(new MFFloat615().getArray()).setKeyValue(new MFRotation616().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_ELBOW_ANIMATOR").setKey(new MFFloat617().getArray()).setKeyValue(new MFRotation618().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_WRIST_ANIMATOR").setKey(new MFFloat619().getArray()).setKeyValue(new MFRotation620().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_SHOULDER_ANIMATOR").setKey(new MFFloat621().getArray()).setKeyValue(new MFRotation622().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_ELBOW_ANIMATOR").setKey(new MFFloat623().getArray()).setKeyValue(new MFRotation624().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_WRIST_ANIMATOR").setKey(new MFFloat625().getArray()).setKeyValue(new MFRotation626().getArray())))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("HUMANOIDROOT_POSITION_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("HUMANOIDROOT_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("L_HIP_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("L_KNEE_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("L_ANKLE_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("L_subtalar_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("L_MIDTARSAL_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("L_metatarsal_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("R_HIP_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("R_KNEE_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("R_ANKLE_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("R_subtalar_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("R_MIDTARSAL_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("R_metatarsal_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("VL5_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("SKULLBASE_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("L_SHOULDER_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("L_ELBOW_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Time1").setToField("set_fraction").setToNode("L_WRIST_ANIMATOR"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("HUMANOIDROOT_POSITION_ANIMATOR").setToField("set_translation").setToNode("Joe_HumanoidRoot"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("HUMANOIDROOT_ANIMATOR").setToField("set_rotation").setToNode("Joe_HumanoidRoot"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("L_HIP_ANIMATOR").setToField("set_rotation").setToNode("Joe_l_hip"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("L_KNEE_ANIMATOR").setToField("set_rotation").setToNode("Joe_l_knee"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("L_ANKLE_ANIMATOR").setToField("set_rotation").setToNode("Joe_l_ankle"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("L_MIDTARSAL_ANIMATOR").setToField("set_rotation").setToNode("Joe_l_midtarsal"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("L_subtalar_ANIMATOR").setToField("set_rotation").setToNode("Joe_l_subtalar"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("L_metatarsal_ANIMATOR").setToField("set_rotation").setToNode("Joe_l_metatarsal"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_HIP_ANIMATOR").setToField("set_rotation").setToNode("Joe_r_hip"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_KNEE_ANIMATOR").setToField("set_rotation").setToNode("Joe_r_knee"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_ANKLE_ANIMATOR").setToField("set_rotation").setToNode("Joe_r_ankle"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_subtalar_ANIMATOR").setToField("set_rotation").setToNode("Joe_r_subtalar"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_MIDTARSAL_ANIMATOR").setToField("set_rotation").setToNode("Joe_r_midtarsal"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_metatarsal_ANIMATOR").setToField("set_rotation").setToNode("Joe_r_metatarsal"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("VL5_ANIMATOR").setToField("set_rotation").setToNode("Joe_vl5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("SKULLBASE_ANIMATOR").setToField("set_rotation").setToNode("Joe_skullbase"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("L_SHOULDER_ANIMATOR").setToField("set_rotation").setToNode("Joe_l_shoulder"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("L_ELBOW_ANIMATOR").setToField("set_rotation").setToNode("Joe_l_elbow"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("L_WRIST_ANIMATOR").setToField("set_rotation").setToNode("Joe_l_wrist"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_SHOULDER_ANIMATOR").setToField("set_rotation").setToNode("Joe_r_shoulder"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_ELBOW_ANIMATOR").setToField("set_rotation").setToNode("Joe_r_elbow"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_WRIST_ANIMATOR").setToField("set_rotation").setToNode("Joe_r_wrist")))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"By Joe for Joe"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"By Joe for Joe"});
  }
}
protected class MFFloat2 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.57f});
  }
}
protected class MFColor3 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0.1f,0f,0f,0.1f,0f});
  }
}
protected class MFColor4 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0f,0.1f});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.x3d","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"});
  }
}
protected class MFInt326 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f7 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.01f,0f,-0.01f,0f,0f,0f,0f,0.0157f,0.01f,0f,0f,0f,0f,-0.01f,0f,-0.01f,0f});
  }
}
protected class MFColor8 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,1f,1f,0f,1f,1f,1f,1f,0f});
  }
}
protected class MFInt329 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f11 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0.0001f,0f});
  }
}
protected class MFString12 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"humanoidVersion=2.0"});
  }
}
protected class MFInt3213 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1});
  }
}
protected class MFInt3214 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1});
  }
}
protected class MFInt3215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1});
  }
}
protected class MFInt3216 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
  }
}
protected class MFVec3f17 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.77f,0f,0f,1.665f,0.09f,-0.033f,1.62f,0.087f,0.033f,1.62f,0.087f,0f,1.55f,0.097f,-0.077f,1.64f,-0.01f,-0.0527f,1.58f,0.015f,0.077f,1.64f,-0.01f,0.0527f,1.58f,0.015f,0f,1.625f,-0.0925f,-0.03f,1.46f,0.035f,0f,1.44f,0.03f,0.03f,1.46f,0.035f,-0.1135f,1.318f,0.095f,0.1135f,1.318f,0.095f,0f,1.25f,0.113f,-0.087f,1.19f,0.09f,-0.0935f,1.03f,0.075f,0.087f,1.19f,0.09f,0.0935f,1.03f,0.075f,-0.1425f,1.065f,0.0033f,-0.15f,0.9f,-0.01f,0.1425f,1.065f,0.0033f,0.15f,0.9f,-0.01f,0f,1.53f,-0.084f,0.0049f,1.1908f,-0.1113f,-0.0773f,1.019f,-0.12f,0.0773f,1.019f,-0.12f,0.005f,1.0915f,-0.1091f,-0.178f,1.4825f,-0.0625f,-0.17f,1.38f,0.007f,-0.1884f,0.8676f,-0.036f,-0.16f,1.38f,-0.127f,-0.2f,1.1388f,-0.08f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.23f,1.133f,-0.055f,-0.1977f,0.8169f,-0.0177f,-0.1941f,0.6772f,-0.0423f,-0.2117f,0.8562f,-0.0584f,-0.1929f,0.789f,-0.1064f,0.175f,1.4825f,-0.06f,0.17f,1.38f,0.007f,0.1901f,0.8645f,-0.0415f,0.16f,1.38f,-0.125f,0.2f,1.1388f,-0.08f,0.165f,1.1388f,-0.04f,0.244f,1.1388f,-0.04f,0.23f,1.133f,-0.055f,0.2009f,0.8139f,-0.0237f,0.2056f,0.6743f,-0.0482f,0.2142f,0.8529f,-0.0648f,0.1929f,0.786f,-0.1122f,-0.1f,0.4913f,-0.03f,-0.17f,0.466f,0f,-0.05f,0.466f,0f,-0.165f,0.01f,0.12f,-0.15f,0.07f,0f,-0.085f,0.086f,0.0125f,-0.09f,0.056f,0.0125f,-0.115f,0.02f,0.122f,-0.115f,0.04f,-0.055f,-0.11f,0.011f,0.19f,0.0993f,0.4881f,-0.0309f,0.17f,0.466f,0f,0.05f,0.4867f,0f,0.165f,0.01f,0.12f,0.15f,0.07f,0f,0.085f,0.086f,0.0125f,0.09f,0.056f,0.0125f,0.115f,0.02f,0.122f,0.115f,0.04f,-0.055f,0.11f,0.011f,0.19f,0f,0.875f,0f,-0.0646f,1.5149f,-0.038f,0.0646f,1.5149f,-0.038f,0f,1.07225f,0.09f,-0.11f,1.427f,-0.1375f,-0.235f,1.42f,-0.0625f,0.11f,1.427f,-0.1375f,0.235f,1.42f,-0.0625f,0f,1.41f,-0.145f,0f,0.925f,0.08f,-0.087f,1.19f,-0.09f,0.087f,1.19f,-0.09f,0.172f,1.32f,-0.03f,-0.172f,1.32f,-0.03f,0.15f,1.23f,-0.015f,-0.15f,1.23f,-0.015f,0.079f,0.92f,-0.14f,0.1f,0.9f,0.077f,-0.079f,0.92f,-0.14f,-0.1f,0.9f,0.075f,0f,0.87f,0f,0.171f,0.65f,0f,0.02f,0.65f,0f,0.1f,0.65f,-0.08f,0.1f,0.65f,0.07f,-0.171f,0.65f,0f,-0.02f,0.65f,0f,-0.1f,0.65f,-0.08f,-0.1f,0.65f,0.07f,0.25f,1.27f,-0.04f,0.17f,1.27f,-0.04f,0.2f,1.27f,-0.09f,0.2f,1.27f,0.02f,0.244f,1.1388f,-0.04f,0.165f,1.1388f,-0.04f,0.2f,1.1388f,-0.08f,0.2f,1.1388f,-0.013f,0.225f,1f,-0.01f,0.225f,1f,-0.07f,0.185f,1f,-0.01f,0.185f,1f,-0.07f,0.2f,1.1388f,-0.04f,0.225f,0.92f,-0.04f,0.175f,0.92f,-0.04f,0.2f,0.92f,-0.065f,0.2f,0.92f,-0.015f,0.225f,0.89f,-0.04f,0.175f,0.89f,-0.04f,0.2f,0.89f,-0.065f,0.2f,0.89f,-0.015f,0.218f,0.86f,-0.04f,0.184f,0.86f,-0.04f,0.2f,0.87f,-0.07f,0.2f,0.87f,0f,0.21f,0.85f,0f,0.1854f,0.85f,0f,0.212f,0.84f,-0.015f,0.183f,0.84f,-0.015f,0.213f,0.835f,-0.04f,0.19f,0.835f,-0.04f,0.211f,0.835f,-0.065f,0.192f,0.835f,-0.065f,0.208f,0.84f,-0.085f,0.19f,0.84f,-0.085f,0.2f,0.84f,-0.095f,0.215f,0.82f,0f,0.193f,0.815f,0.005f,0.198f,0.8f,0.012f,0.21f,0.82f,0.03f,0.19f,0.82f,0.03f,0.2f,0.835f,0.039f,0.212f,0.8f,0.05f,0.188f,0.8f,0.05f,0.2f,0.807f,0.057f,0.2f,0.793f,0.035f,0.2f,0.774f,0.076f,0.212f,0.78f,0.07f,0.188f,0.78f,0.07f,0.2f,0.785f,0.075f,0.2f,0.77f,0.062f,0.215f,0.793f,-0.015f,0.187f,0.793f,-0.015f,0.2f,0.793f,-0.005f,0.215f,0.788f,-0.04f,0.187f,0.788f,-0.04f,0.215f,0.793f,-0.065f,0.187f,0.793f,-0.065f,0.21f,0.79f,-0.085f,0.19f,0.79f,-0.085f,0.2f,0.79f,-0.095f,0.19f,0.77f,-0.0275f,0.19f,0.77f,-0.0525f,0.19f,0.78f,-0.0775f,0.212f,0.745f,-0.015f,0.188f,0.745f,-0.02f,0.2f,0.745f,-0.0255f,0.2f,0.745f,-0.0045f,0.211f,0.72f,-0.015f,0.189f,0.72f,-0.015f,0.2f,0.72f,-0.0252f,0.2f,0.72f,-0.0048f,0.21f,0.695f,-0.015f,0.19f,0.695f,-0.015f,0.2f,0.695f,-0.025f,0.2f,0.695f,-0.005f,0.2f,0.685f,-0.015f,0.215f,0.74f,-0.04f,0.185f,0.74f,-0.04f,0.2f,0.74f,-0.055f,0.2f,0.74f,-0.025f,0.21f,0.7142f,-0.04f,0.19f,0.7142f,-0.04f,0.2f,0.7142f,-0.053f,0.2f,0.7142f,-0.027f,0.21f,0.68f,-0.04f,0.19f,0.68f,-0.04f,0.2f,0.68f,-0.05f,0.2f,0.68f,-0.03f,0.2f,0.67f,-0.04f,0.212f,0.74f,-0.065f,0.188f,0.74f,-0.065f,0.2f,0.74f,-0.0756f,0.2f,0.74f,-0.0542f,0.21f,0.7177f,-0.065f,0.19f,0.7177f,-0.065f,0.2f,0.7177f,-0.0751f,0.2f,0.7177f,-0.0549f,0.21f,0.695f,-0.065f,0.19f,0.695f,-0.065f,0.2f,0.695f,-0.075f,0.2f,0.695f,-0.055f,0.2f,0.685f,-0.065f,0.211f,0.755f,-0.085f,0.189f,0.755f,-0.085f,0.2f,0.755f,-0.0952f,0.2f,0.755f,-0.0748f,0.21f,0.735f,-0.085f,0.19f,0.735f,-0.085f,0.2f,0.735f,-0.0951f,0.2f,0.735f,-0.0749f,0.21f,0.72f,-0.085f,0.19f,0.72f,-0.085f,0.2f,0.72f,-0.095f,0.2f,0.72f,-0.075f,0.2f,0.71f,-0.085f,-0.23f,1.23f,-0.04f,-0.16f,1.23f,-0.04f,-0.2f,1.235f,-0.105f,-0.2f,1.235f,0.02f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.2f,1.1388f,-0.08f,-0.2f,1.1388f,0.013f,-0.225f,1f,-0.01f,-0.225f,1f,-0.07f,-0.185f,1f,-0.01f,-0.185f,1f,-0.07f,-0.2f,1.1388f,-0.04f,-0.225f,0.92f,-0.04f,-0.175f,0.92f,-0.04f,-0.2f,0.92f,-0.065f,-0.2f,0.92f,-0.015f,-0.225f,0.89f,-0.04f,-0.175f,0.89f,-0.04f,-0.2f,0.89f,-0.065f,-0.2f,0.89f,-0.015f,-0.218f,0.86f,-0.04f,-0.184f,0.86f,-0.04f,-0.2f,0.87f,-0.07f,-0.2f,0.87f,0f,-0.21f,0.85f,0f,-0.1854f,0.85f,0f,-0.212f,0.84f,-0.015f,-0.183f,0.84f,-0.015f,-0.213f,0.835f,-0.04f,-0.19f,0.835f,-0.04f,-0.211f,0.835f,-0.065f,-0.192f,0.835f,-0.065f,-0.208f,0.84f,-0.085f,-0.19f,0.84f,-0.085f,-0.2f,0.84f,-0.095f,-0.215f,0.82f,0f,-0.193f,0.815f,0.005f,-0.198f,0.8f,0.012f,-0.21f,0.82f,0.03f,-0.19f,0.82f,0.03f,-0.2f,0.835f,0.039f,-0.212f,0.8f,0.05f,-0.188f,0.8f,0.05f,-0.2f,0.807f,0.057f,-0.2f,0.793f,0.035f,-0.2f,0.774f,0.076f,-0.212f,0.78f,0.07f,-0.188f,0.78f,0.07f,-0.2f,0.785f,0.075f,-0.2f,0.77f,0.062f,-0.215f,0.793f,-0.015f,-0.187f,0.793f,-0.015f,-0.2f,0.793f,-0.005f,-0.215f,0.788f,-0.04f,-0.187f,0.788f,-0.04f,-0.215f,0.793f,-0.065f,-0.187f,0.793f,-0.065f,-0.21f,0.79f,-0.085f,-0.19f,0.79f,-0.085f,-0.2f,0.79f,-0.095f,-0.19f,0.77f,-0.0275f});
  }
}
protected class MFVec3f18 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19f,0.77f,-0.0525f,-0.19f,0.78f,-0.0775f,-0.212f,0.745f,-0.015f,-0.188f,0.745f,-0.02f,-0.2f,0.745f,-0.0255f,-0.2f,0.745f,-0.0045f,-0.211f,0.72f,-0.015f,-0.189f,0.72f,-0.015f,-0.2f,0.72f,-0.0252f,-0.2f,0.72f,-0.0048f,-0.21f,0.695f,-0.015f,-0.19f,0.695f,-0.015f,-0.2f,0.695f,-0.025f,-0.2f,0.695f,-0.005f,-0.2f,0.685f,-0.015f,-0.215f,0.74f,-0.04f,-0.185f,0.74f,-0.04f,-0.2f,0.74f,-0.055f,-0.2f,0.74f,-0.025f,-0.21f,0.7142f,-0.04f,-0.19f,0.7142f,-0.04f,-0.2f,0.7142f,-0.053f,-0.2f,0.7142f,-0.027f,-0.21f,0.68f,-0.04f,-0.19f,0.68f,-0.04f,-0.2f,0.68f,-0.05f,-0.2f,0.68f,-0.03f,-0.2f,0.67f,-0.04f,-0.212f,0.74f,-0.065f,-0.188f,0.74f,-0.065f,-0.2f,0.74f,-0.0756f,-0.2f,0.74f,-0.0542f,-0.21f,0.7177f,-0.065f,-0.19f,0.7177f,-0.065f,-0.2f,0.7177f,-0.0751f,-0.2f,0.7177f,-0.0549f,-0.21f,0.695f,-0.065f,-0.19f,0.695f,-0.065f,-0.2f,0.695f,-0.075f,-0.2f,0.695f,-0.055f,-0.2f,0.685f,-0.065f,-0.211f,0.755f,-0.085f,-0.189f,0.755f,-0.085f,-0.2f,0.755f,-0.0952f,-0.2f,0.755f,-0.0748f,-0.21f,0.735f,-0.085f,-0.19f,0.735f,-0.085f,-0.2f,0.735f,-0.0951f,-0.2f,0.735f,-0.0749f,-0.21f,0.72f,-0.085f,-0.19f,0.72f,-0.085f,-0.2f,0.72f,-0.095f,-0.2f,0.72f,-0.075f,-0.2f,0.71f,-0.085f,0.115f,0.466f,0.06f,0.115f,0.466f,-0.055f,0.15f,0.466f,0f,0.05f,0.466f,0f,0.17f,0.3f,0f,0.06f,0.3f,0f,0.1f,0.3f,-0.05f,0.1f,0.3f,0.05f,0.15f,0.07f,0f,0.085f,0.086f,0.0125f,0.115f,0.069f,-0.045f,0.117f,0.0975f,0.0615f,0.1375f,0.006f,-0.03f,0.095f,0.006f,-0.03f,0.115f,0.015f,-0.045f,0.115f,0.06f,0.1f,0.115f,0f,0.07f,0.165f,0f,0.07f,0.095f,0f,0.07f,0.115f,0.04f,0.13f,0.125f,0f,0.12f,0.165f,0f,0.12f,0.087f,0f,0.122f,0.09f,0.012f,0.188f,0.11f,0.011f,0.19f,0.128f,0.011f,0.185f,0.142f,0.011f,0.178f,0.154f,0.01f,0.168f,-0.115f,0.466f,0.06f,-0.115f,0.466f,-0.055f,-0.17f,0.466f,0f,-0.05f,0.466f,0f,-0.17f,0.3f,0f,-0.06f,0.3f,0f,-0.1f,0.3f,-0.05f,-0.1f,0.3f,0.05f,-0.15f,0.07f,0f,-0.085f,0.086f,0.0125f,-0.115f,0.069f,-0.045f,-0.117f,0.0975f,0.0615f,-0.1375f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.115f,0.06f,0.1f,-0.115f,0f,0.07f,-0.165f,0f,0.07f,-0.095f,0f,0.07f,-0.115f,0.04f,0.13f,-0.125f,0f,0.12f,-0.165f,0f,0.12f,-0.087f,0f,0.122f,-0.09f,0.012f,0.188f,-0.11f,0.011f,0.19f,-0.128f,0.011f,0.185f,-0.142f,0.011f,0.178f,-0.154f,0.01f,0.168f});
  }
}
protected class MFColor19 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f,0f,0f,0f,1f,1f,0f,1f,0f,1f,1f,0f,1f,1f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,1f,0f,1f,1f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,1f,0f,1f,1f,0f,1f,1f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f});
  }
}
protected class MFColor20 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,1f,0f,1f,0f,1f,1f,0f,1f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,1f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,0f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f});
  }
}
protected class MFColor21 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,0f,1f,1f,1f,0f,0f,1f,0f,0f,0f,1f,1f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,0f,1f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,0f,1f,0f,1f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,0f,1f,1f,1f,1f});
  }
}
protected class MFString22 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"});
  }
}
protected class MFFloat23 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat24 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3225 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f26 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.875f,0f,0f,0.92f,0f});
  }
}
protected class MFInt3227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,19,20,21,22,23,26,27,73,82,89,91,93});
  }
}
protected class MFFloat28 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,0.35f,0.35f,1f});
  }
}
protected class MFFloat29 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat30 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3231 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f32 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.92f,0f,0.0961f,0.9124f,0f,-0.095f,0.9171f,0.0029f,0f,1.045f,-0.095f});
  }
}
protected class MFInt3233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {89,90,94,95,96,97});
  }
}
protected class MFFloat34 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.65f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat35 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat36 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3237 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f38 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.92f,0f,0.115f,0.466f,0f});
  }
}
protected class MFInt3239 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {334,335,336,337,338,339,340,341});
  }
}
protected class MFFloat40 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat41 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat42 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3243 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f44 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.115f,0.466f,0f,0.1f,0.069f,0f});
  }
}
protected class MFInt3245 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {342,343,344,345});
  }
}
protected class MFFloat46 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f50 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.069f,0f,0.115f,0.031f,0.03f});
  }
}
protected class MFInt3251 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {346,347,348,71});
  }
}
protected class MFFloat52 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f56 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.115f,0.031f,0.03f,0.115f,0.037f,0.09f});
  }
}
protected class MFInt3257 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {349,350,351,352});
  }
}
protected class MFFloat58 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat59 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat60 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3261 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f62 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.115f,0.037f,0.09f,0.115f,0.02f,0.122f});
  }
}
protected class MFInt3263 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {353,354,355,356,357,358,359,360,361});
  }
}
protected class MFFloat64 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat65 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat66 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3267 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f68 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.11500000208616257f,0.019999999552965164f,0.12200000137090683f,0.13199999928474426f,0.013000000268220901f,0.1899999976158142f});
  }
}
protected class MFInt3269 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {91,92,98,99,100,101});
  }
}
protected class MFFloat70 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.6499999761581421f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat71 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat72 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3273 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f74 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10000000149011612f,0.9200000166893005f,0f,-0.10000000149011612f,0.49129998683929443f,0f});
  }
}
protected class MFInt3275 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {362,363,364,365,366,367,368,369});
  }
}
protected class MFFloat76 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat77 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat78 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3279 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f80 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10000000149011612f,0.49129998683929443f,0f,-0.10000000149011612f,0.07119999825954437f,0f});
  }
}
protected class MFInt3281 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {370,371,372,373});
  }
}
protected class MFFloat82 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat83 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat84 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3285 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f86 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10000000149011612f,0.07119999825954437f,0f,-0.10000000149011612f,0.014999999664723873f,-0.009999999776482582f});
  }
}
protected class MFInt3287 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {374,375,376});
  }
}
protected class MFFloat88 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
  }
}
protected class MFFloat89 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat90 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3291 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f92 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10000000149011612f,0.014999999664723873f,-0.009999999776482582f,-0.10000000149011612f,0.019999999552965164f,0.07000000029802322f});
  }
}
protected class MFInt3293 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {377,378,379,380});
  }
}
protected class MFFloat94 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f98 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10000000149011612f,0.019999999552965164f,0.07000000029802322f,-0.10000000149011612f,0.009999999776482582f,0.14000000059604645f});
  }
}
protected class MFInt3299 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {381,382,383,384,385,386,387,388,389});
  }
}
protected class MFFloat100 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f104 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10000000149011612f,0.009999999776482582f,0.14000000059604645f,-0.10429999977350235f,0.0015999999595806003f,0.20000000298023224f});
  }
}
protected class MFInt32105 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {28,76});
  }
}
protected class MFFloat106 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f110 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.0449999570846558f,-0.0949999988079071f,0f,0.914900004863739f,0.0015999999595806003f});
  }
}
protected class MFInt32111 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f112 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.0449999570846558f,-0.0949999988079071f,0f,1.0679999589920044f,-0.08500000089406967f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f116 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.0679999589920044f,-0.08500000089406967f,0f,1.0920000076293945f,-0.07249999791383743f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f120 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.092f,-0.0725f,0f,1.12f,-0.065f});
  }
}
protected class MFInt32121 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,18,25,83,84,85,86,87,88});
  }
}
protected class MFFloat122 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,0.7f,1f,0.8f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f126 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.1200000047683716f,-0.06499999761581421f,0f,1.145900011062622f,-0.0625f});
  }
}
protected class MFFloat127 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat128 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32129 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f130 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.1459f,-0.0625f,0f,1.179f,-0.068f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f134 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.1790000200271606f,-0.06800000369548798f,0f,1.2419999837875366f,-0.09000000357627869f});
  }
}
protected class MFFloat135 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat136 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32137 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f138 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.2144999504089355f,-0.0754999965429306f,0f,1.2419999837875366f,-0.09000000357627869f});
  }
}
protected class MFInt32139 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15});
  }
}
protected class MFFloat140 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f144 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.2419999837875366f,-0.09000000357627869f,0f,1.2680000066757202f,-0.10000000149011612f});
  }
}
protected class MFInt32145 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,14});
  }
}
protected class MFFloat146 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f150 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.2680000066757202f,-0.10000000149011612f,0f,1.2940000295639038f,-0.10999999940395355f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f154 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.2940000295639038f,-0.10999999940395355f,0f,1.3519999980926514f,-0.11999999731779099f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f158 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.3519999980926514f,-0.11999999731779099f,0f,1.38100004196167f,-0.12349999696016312f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f162 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.38100004196167f,-0.12349999696016312f,0f,1.409999966621399f,-0.12349999696016312f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f166 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.409999966621399f,-0.12349999696016312f,0f,1.437999963760376f,-0.11999999731779099f});
  }
}
protected class MFInt32167 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {81});
  }
}
protected class MFFloat168 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f172 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.409999966621399f,-0.12349999696016312f,0f,1.437999963760376f,-0.11999999731779099f});
  }
}
protected class MFFloat173 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat174 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32175 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f176 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.437999963760376f,-0.11999999731779099f,0f,1.468000054359436f,-0.10499999672174454f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f180 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.468000054359436f,-0.10499999672174454f,0f,1.496999979019165f,-0.09000000357627869f});
  }
}
protected class MFInt32181 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,24});
  }
}
protected class MFFloat182 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f186 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.497f,-0.09f,0f,1.525f,-0.072f});
  }
}
protected class MFInt32187 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {74,75});
  }
}
protected class MFFloat188 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f192 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.524999976158142f,-0.07199999690055847f,0.0820000022649765f,1.448799967765808f,-0.03530000150203705f,-0.029999999329447746f,1.4600000381469727f,0.019999999552965164f,0f,1.5399999618530273f,-0.05000000074505806f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f196 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.5399999618530273f,-0.05000000074505806f,0f,1.5674999952316284f,-0.025599999353289604f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f200 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.5674999952316284f,-0.025599999353289604f,0f,1.5822499990463257f,-0.01850000023841858f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f204 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.5822499990463257f,-0.01850000023841858f,0f,1.5950000286102295f,-0.017500000074505806f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f208 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.5950000286102295f,-0.017500000074505806f,0f,1.6100000143051147f,-0.014999999664723873f});
  }
}
protected class MFFloat209 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat210 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32211 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f212 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.6100000143051147f,-0.014999999664723873f,0f,1.614400029182434f,-0.0034000000450760126f});
  }
}
protected class MFFloat213 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat214 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f216 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.614400029182434f,-0.0034000000450760126f,0f,1.6299999952316284f,-0.009999999776482582f});
  }
}
protected class MFInt32217 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
protected class MFFloat218 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat219 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat220 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1});
  }
}
protected class MFVec3f222 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.6299999952316284f,-0.009999999776482582f,0.03400000184774399f,1.659000039100647f,0.05999999865889549f,-0.03400000184774399f,1.6549999713897705f,0.06499999761581421f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f226 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.034f,1.655f,0.065f,-0.034f,1.655f,0.065f});
  }
}
protected class MFFloat227 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat228 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f230 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.034f,1.655f,0.065f,-0.034f,1.655f,0.065f});
  }
}
protected class MFInt32231 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12});
  }
}
protected class MFFloat232 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f236 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0820000022649765f,1.448799967765808f,-0.03530000150203705f,0.09619999676942825f,1.426900029182434f,-0.042399998754262924f});
  }
}
protected class MFInt32237 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {79});
  }
}
protected class MFFloat238 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f242 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.09619999676942825f,1.426900029182434f,-0.042399998754262924f,0.20000000298023224f,1.440000057220459f,-0.03999999910593033f});
  }
}
protected class MFInt32243 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {41,42,44,80,102,103,104,105});
  }
}
protected class MFFloat244 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f248 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029000073671341f,1.440000057220459f,-0.03869999945163727f,0.20000000298023224f,1.138800024986267f,-0.03999999910593033f});
  }
}
protected class MFInt32249 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {45,46,47,109,110,111,112,113,115,116,117,118});
  }
}
protected class MFFloat250 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f254 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.20000000298023224f,1.138800024986267f,-0.03999999910593033f,0.20000000298023224f,0.8700000047683716f,-0.03999999910593033f});
  }
}
protected class MFInt32255 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {119,120,121,122,123,124,125,126});
  }
}
protected class MFFloat256 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat257 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat258 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32259 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
  }
}
protected class MFVec3f260 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.20000000298023224f,0.8700000047683716f,-0.03999999910593033f,0.1923999935388565f,0.8471999764442444f,-0.05339999869465828f,0.19830000400543213f,0.8023999929428101f,-0.02800000086426735f,0.19869999587535858f,0.8029000163078308f,-0.05299999937415123f,0.1956000030040741f,0.8019000291824341f,-0.07940000295639038f,0.19249999523162842f,0.8065999746322632f,-0.10360000282526016f});
  }
}
protected class MFInt32261 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {127,128});
  }
}
protected class MFFloat262 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat263 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat264 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32265 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f266 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1923999935388565f,0.8471999764442444f,-0.05339999869465828f,0.19509999454021454f,0.8226000070571899f,0.02459999918937683f});
  }
}
protected class MFInt32267 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,141,142,143});
  }
}
protected class MFFloat268 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f});
  }
}
protected class MFFloat269 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat270 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32271 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f272 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19509999454021454f,0.8226000070571899f,0.02459999918937683f,0.19550000131130219f,0.8159000277519226f,0.04639999940991402f});
  }
}
protected class MFInt32273 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {144,145,146,147,148,149,150,151,152});
  }
}
protected class MFFloat274 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat275 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat276 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32277 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f278 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19550000131130219f,0.8159000277519226f,0.04639999940991402f,0.19820000231266022f,0.8061000108718872f,0.07590000331401825f});
  }
}
protected class MFInt32279 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {129,130});
  }
}
protected class MFFloat280 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat281 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat282 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32283 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f284 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.8024f,-0.028f,0.1983f,0.7815f,-0.028f});
  }
}
protected class MFInt32285 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,153,154,155,163});
  }
}
protected class MFFloat286 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f,0.5f});
  }
}
protected class MFFloat287 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat288 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32289 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f290 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.7815f,-0.028f,0.2017f,0.7363f,-0.0248f});
  }
}
protected class MFInt32291 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {166,167,168,169});
  }
}
protected class MFFloat292 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat293 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat294 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32295 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f296 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2017f,0.7363f,-0.0248f,0.2028f,0.7139f,-0.0236f});
  }
}
protected class MFInt32297 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {170,171,172,173,174,175,176,177,178});
  }
}
protected class MFFloat298 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f302 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.20280000567436218f,0.7139000296592712f,-0.023600000888109207f,0.20890000462532043f,0.6858000159263611f,-0.02449999935925007f});
  }
}
protected class MFInt32303 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {131,132});
  }
}
protected class MFFloat304 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f308 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19869999587535858f,0.8029000163078308f,-0.05299999937415123f,0.19869999587535858f,0.7817999720573425f,-0.05299999937415123f});
  }
}
protected class MFInt32309 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {156,157,163,164});
  }
}
protected class MFFloat310 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFFloat311 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat312 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32313 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f314 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19869999587535858f,0.7817999720573425f,-0.05299999937415123f,0.2012999951839447f,0.7272999882698059f,-0.0502999983727932f});
  }
}
protected class MFInt32315 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {179,180,181,182});
  }
}
protected class MFFloat316 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat317 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat318 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32319 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f320 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2012999951839447f,0.7272999882698059f,-0.0502999983727932f,0.20260000228881836f,0.7010999917984009f,-0.049400001764297485f});
  }
}
protected class MFInt32321 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {183,184,185,186,187,188,189,190,191});
  }
}
protected class MFFloat322 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat323 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat324 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32325 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f326 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.20260000228881836f,0.7010999917984009f,-0.049400001764297485f,0.20800000429153442f,0.6730999946594238f,-0.04910000041127205f});
  }
}
protected class MFInt32327 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {133,134});
  }
}
protected class MFFloat328 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat329 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat330 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32331 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f332 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956000030040741f,0.8019000291824341f,-0.07940000295639038f,0.1956000030040741f,0.781499981880188f,-0.07940000295639038f});
  }
}
protected class MFInt32333 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {158,159,164,165});
  }
}
protected class MFFloat334 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFFloat335 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat336 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32337 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f338 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956000030040741f,0.781499981880188f,-0.07940000295639038f,0.1973000019788742f,0.7286999821662903f,-0.07769999653100967f});
  }
}
protected class MFInt32339 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {192,193,194,195});
  }
}
protected class MFFloat340 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat341 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat342 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32343 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f344 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1973000019788742f,0.7286999821662903f,-0.07769999653100967f,0.19830000400543213f,0.7045000195503235f,-0.07670000195503235f});
  }
}
protected class MFInt32345 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {196,197,198,199,200,201,202,203,204});
  }
}
protected class MFFloat346 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat347 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat348 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32349 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f350 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19830000400543213f,0.7045000195503235f,-0.07670000195503235f,0.20350000262260437f,0.675000011920929f,-0.07559999823570251f});
  }
}
protected class MFInt32351 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {135,136,137,165});
  }
}
protected class MFFloat352 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,0.5f});
  }
}
protected class MFFloat353 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat354 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32355 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f356 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19249999523162842f,0.8065999746322632f,-0.10360000282526016f,0.19249999523162842f,0.7865999937057495f,-0.10360000282526016f});
  }
}
protected class MFInt32357 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {160,161,162});
  }
}
protected class MFFloat358 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
  }
}
protected class MFFloat359 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat360 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32361 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f362 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19249999523162842f,0.7865999937057495f,-0.10360000282526016f,0.19380000233650208f,0.745199978351593f,-0.10239999741315842f});
  }
}
protected class MFInt32363 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {205,206,207,208});
  }
}
protected class MFFloat364 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat365 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat366 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32367 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f368 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19380000233650208f,0.745199978351593f,-0.10239999741315842f,0.19480000436306f,0.7276999950408936f,-0.10170000046491623f});
  }
}
protected class MFInt32369 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {209,210,211,212,213,214,215,216,217});
  }
}
protected class MFFloat370 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat371 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat372 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32373 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f374 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19480000436306f,0.7276999950408936f,-0.10170000046491623f,0.2013999968767166f,0.7009000182151794f,-0.10119999945163727f});
  }
}
protected class MFInt32375 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10});
  }
}
protected class MFFloat376 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f380 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.029999999329447746f,1.4600000381469727f,0.019999999552965164f,-0.09000000357627869f,1.409999966621399f,-0.09000000357627869f});
  }
}
protected class MFInt32381 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {77,29});
  }
}
protected class MFFloat382 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,0.8999999761581421f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f386 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.09000000357627869f,1.409999966621399f,-0.09000000357627869f,-0.20000000298023224f,1.440000057220459f,-0.03999999910593033f});
  }
}
protected class MFInt32387 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {29,30,32,78,218,219,220,221,86,88});
  }
}
protected class MFFloat388 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.10000000149011612f,1f,1f,1f,1f,1f,1f,1f,0.30000001192092896f,0.20000000298023224f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f392 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,1.440000057220459f,-0.03999999910593033f,-0.20000000298023224f,1.138800024986267f,-0.03999999910593033f});
  }
}
protected class MFInt32393 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {33,34,35,225,226,227,228,229,231,232,233,234});
  }
}
protected class MFFloat394 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f398 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,1.138800024986267f,-0.03999999910593033f,-0.20000000298023224f,0.8899999856948853f,-0.03999999910593033f});
  }
}
protected class MFInt32399 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {235,236,237,238,239,240,241,242});
  }
}
protected class MFFloat400 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat401 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat402 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32403 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
  }
}
protected class MFVec3f404 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.8899999856948853f,-0.03999999910593033f,-0.20000000298023224f,0.8500000238418579f,0f,-0.20000000298023224f,0.8399999737739563f,-0.014999999664723873f,-0.20000000298023224f,0.8349999785423279f,-0.03999999910593033f,-0.20000000298023224f,0.8349999785423279f,-0.06499999761581421f,-0.20000000298023224f,0.8399999737739563f,-0.08500000089406967f});
  }
}
protected class MFInt32405 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {243,244});
  }
}
protected class MFFloat406 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f410 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.8500000238418579f,0f,-0.20000000298023224f,0.8199999928474426f,0.029999999329447746f});
  }
}
protected class MFInt32411 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,257,258,259});
  }
}
protected class MFFloat412 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f416 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.8199999928474426f,0.029999999329447746f,-0.20000000298023224f,0.800000011920929f,0.05000000074505806f});
  }
}
protected class MFInt32417 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {260,261,262,263,264,265,266,267,268});
  }
}
protected class MFFloat418 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f422 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.800000011920929f,0.05000000074505806f,-0.20000000298023224f,0.7799999713897705f,0.07000000029802322f});
  }
}
protected class MFInt32423 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {245,246});
  }
}
protected class MFFloat424 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f428 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.8399999737739563f,-0.014999999664723873f,-0.20000000298023224f,0.7929999828338623f,-0.014999999664723873f});
  }
}
protected class MFInt32429 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,269,270,271,279});
  }
}
protected class MFFloat430 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f,0.5f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f434 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7929999828338623f,-0.014999999664723873f,-0.20000000298023224f,0.7450000047683716f,-0.014999999664723873f});
  }
}
protected class MFInt32435 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {282,283,284,285});
  }
}
protected class MFFloat436 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f440 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7450000047683716f,-0.014999999664723873f,-0.20000000298023224f,0.7200000286102295f,-0.014999999664723873f});
  }
}
protected class MFInt32441 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {286,287,288,289,290,291,292,293,294});
  }
}
protected class MFFloat442 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f446 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7200000286102295f,-0.014999999664723873f,-0.20000000298023224f,0.6949999928474426f,-0.014999999664723873f});
  }
}
protected class MFInt32447 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {247,248});
  }
}
protected class MFFloat448 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f452 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.8349999785423279f,-0.03999999910593033f,-0.20000000298023224f,0.7879999876022339f,-0.03999999910593033f});
  }
}
protected class MFInt32453 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {272,273,279,280});
  }
}
protected class MFFloat454 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFFloat455 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat456 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32457 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f458 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7879999876022339f,-0.03999999910593033f,-0.20000000298023224f,0.7400000095367432f,-0.03999999910593033f});
  }
}
protected class MFInt32459 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {295,296,297,298});
  }
}
protected class MFFloat460 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat461 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat462 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32463 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f464 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7400000095367432f,-0.03999999910593033f,-0.20000000298023224f,0.7142000198364258f,-0.03999999910593033f});
  }
}
protected class MFInt32465 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {299,300,301,302,303,304,305,306,307});
  }
}
protected class MFFloat466 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f470 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7142000198364258f,-0.03999999910593033f,-0.20000000298023224f,0.6758000254631042f,-0.03999999910593033f});
  }
}
protected class MFInt32471 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {249,250});
  }
}
protected class MFFloat472 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f476 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.8349999785423279f,-0.06499999761581421f,-0.20000000298023224f,0.7929999828338623f,-0.06499999761581421f});
  }
}
protected class MFInt32477 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {274,275,280,281});
  }
}
protected class MFFloat478 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f482 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7929999828338623f,-0.06499999761581421f,-0.20000000298023224f,0.7400000095367432f,-0.06499999761581421f});
  }
}
protected class MFInt32483 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {308,309,310,311});
  }
}
protected class MFFloat484 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f488 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7400000095367432f,-0.06499999761581421f,-0.20000000298023224f,0.7177000045776367f,-0.06499999761581421f});
  }
}
protected class MFInt32489 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {312,313,314,315,316,317,318,319,320});
  }
}
protected class MFFloat490 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f494 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7177000045776367f,-0.06499999761581421f,-0.20000000298023224f,0.6949999928474426f,-0.06499999761581421f});
  }
}
protected class MFInt32495 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {251,252,253,281});
  }
}
protected class MFFloat496 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,0.5f});
  }
}
protected class MFFloat497 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat498 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32499 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f500 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.8399999737739563f,-0.08500000089406967f,-0.20000000298023224f,0.7900000214576721f,-0.08500000089406967f});
  }
}
protected class MFInt32501 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {276,277,278});
  }
}
protected class MFFloat502 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
  }
}
protected class MFFloat503 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat504 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32505 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f506 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7900000214576721f,-0.08500000089406967f,-0.20000000298023224f,0.7549999952316284f,-0.08500000089406967f});
  }
}
protected class MFInt32507 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {321,322,323,324});
  }
}
protected class MFFloat508 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat509 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat510 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32511 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f512 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7549999952316284f,-0.08500000089406967f,-0.20000000298023224f,0.7350000143051147f,-0.08500000089406967f});
  }
}
protected class MFInt32513 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {325,326,327,328,329,330,331,332,333});
  }
}
protected class MFFloat514 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat515 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat516 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32517 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f518 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.20000000298023224f,0.7350000143051147f,-0.08500000089406967f,-0.20000000298023224f,0.7200000286102295f,-0.08500000089406967f});
  }
}
protected class MFFloat519 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation520 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,1.25600004196167f,1f,0f,0f,2.51200008392334f,1f,0f,0f,3.7679998874664307f,1f,0f,0f,5.02400016784668f,1f,0f,0f,6.28000020980835f});
  }
}
protected class MFFloat521 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation522 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,1.25600004196167f,0f,1f,0f,2.51200008392334f,0f,1f,0f,3.7679998874664307f,0f,1f,0f,5.02400016784668f,0f,1f,0f,6.28000020980835f});
  }
}
protected class MFFloat523 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation524 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.25600004196167f,0f,0f,1f,2.51200008392334f,0f,0f,1f,3.7679998874664307f,0f,0f,1f,5.02400016784668f,0f,0f,1f,6.28000020980835f});
  }
}
protected class MFFloat525 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.5f,0.6000000238418579f,0.699999988079071f,0.800000011920929f,0.8999999761581421f,1f});
  }
}
protected class MFRotation526 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,0.699999988079071f,0f,1f,0f,0f,0f,1f,0f,0f,-1f,0f,0f,0.5f,-0.4000000059604645f,-1f,0f,0.699999988079071f,-0.4000000059604645f,-1f,0f,0.4000000059604645f,0f,1f,0f,0f,0f,1f,0f,0f});
  }
}
protected class MFFloat527 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.10000000149011612f,0.20000000298023224f,0.30000001192092896f,0.4000000059604645f,0.5f,0.6000000238418579f,0.699999988079071f,0.800000011920929f,1f});
  }
}
protected class MFRotation528 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0.20000000298023224f,0.20000000298023224f,0.20000000298023224f,0.20000000298023224f,-0.20000000298023224f,0.20000000298023224f,0.20000000298023224f,0.20000000298023224f,-0.20000000298023224f,-0.20000000298023224f,0.20000000298023224f,0.20000000298023224f,0.20000000298023224f,-0.20000000298023224f,0.20000000298023224f,0.20000000298023224f,-0.20000000298023224f,0.20000000298023224f,-0.20000000298023224f,0.20000000298023224f,-0.20000000298023224f,0.20000000298023224f,-0.20000000298023224f,0.20000000298023224f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat529 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation530 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0.20000000298023224f,-1f,0f,0.10999999940395355f,0.20000000298023224f,-1f,0f,0.10999999940395355f,0.10000000149011612f,-1f,0f,0.10000000149011612f,0f,0f,1f,0f});
  }
}
protected class MFFloat531 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation532 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat533 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.10000000149011612f,0.30000001192092896f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation534 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0.4000000059604645f,-0.699999988079071f,-0.550000011920929f,0.3499999940395355f,0.4000000059604645f,-0.699999988079071f,-0.550000011920929f,0.3499999940395355f,0.4000000059604645f,-0.699999988079071f,-0.550000011920929f,0.3499999940395355f,0f,0f,1f,0f});
  }
}
protected class MFFloat535 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.15000000596046448f,0.4000000059604645f,0.6000000238418579f,0.8999999761581421f,1f});
  }
}
protected class MFRotation536 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,-0.20000000298023224f,0f,0.009999999776482582f,0.5f,-0.20000000298023224f,0f,0.009999999776482582f,0.5f,-0.20000000298023224f,0f,0.009999999776482582f,0.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat537 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.8999999761581421f,1f});
  }
}
protected class MFRotation538 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0.10000000149011612f,-0.09000000357627869f,0.25f,0f,0.10000000149011612f,-0.09000000357627869f,0.25f,0f,0.10000000149011612f,-0.09000000357627869f,0.25f,0f,0f,1f,0f});
  }
}
protected class MFFloat539 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.10000000149011612f,0.30000001192092896f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation540 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,-0.25f,0.25f,-1f,0.125f,-0.25f,0.25f,-1f,0.125f,-0.25f,0.25f,-1f,0.125f,0f,0f,1f,0f});
  }
}
protected class MFFloat541 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.10000000149011612f,0.20000000298023224f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation542 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,-0.13500000536441803f,-0.13500000536441803f,1f,0.3569999933242798f,-0.1589999943971634f,-0.15299999713897705f,1f,0.35499998927116394f,-0.1589999943971634f,-0.15299999713897705f,1f,0.3569999933242798f,0f,0f,1f,0f});
  }
}
protected class MFFloat543 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.10000000149011612f,0.30000001192092896f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation544 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,-1f,0.14000000059604645f,0f,0f,-1f,0.14000000059604645f,0f,0f,-1f,0.14000000059604645f,0f,0f,1f,0f});
  }
}
protected class MFFloat545 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.10000000149011612f,0.20000000298023224f,0.30000001192092896f,0.4000000059604645f,0.5f,0.6000000238418579f,0.699999988079071f,0.800000011920929f,0.8999999761581421f,1f});
  }
}
protected class MFRotation546 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,0.30000001192092896f,0.25699999928474426f,0f,0f,0.30000001192092896f,0.3700000047683716f,0f,0f,0.30000001192092896f,0.38999998569488525f,0f,0f,0.30000001192092896f,0.3100000023841858f,0f,0f,0.30000001192092896f,0.3199999928474426f,0f,0f,0.30000001192092896f,0.3400000035762787f,0f,0f,0.30000001192092896f,0.2800000011920929f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat547 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.10000000149011612f,0.30000001192092896f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation548 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0.25f,0.25f,-1f,0.10000000149011612f,0.25f,0.25f,-1f,0.10000000149011612f,0.25f,0.25f,-1f,0.10000000149011612f,0f,0f,1f,0f});
  }
}
protected class MFFloat549 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.10000000149011612f,0.4000000059604645f,0.5f,0.800000011920929f,1f});
  }
}
protected class MFRotation550 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0.13500000536441803f,0.13500000536441803f,1f,0.27000001072883606f,0.13500000536441803f,0.13500000536441803f,1f,0.27000001072883606f,0.13500000536441803f,0.15000000596046448f,1f,0.27000001072883606f,0f,0f,1f,0f});
  }
}
protected class MFFloat551 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.10000000149011612f,0.30000001192092896f,0.5f,0.800000011920929f,1f});
  }
}
protected class MFRotation552 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0.3499999940395355f,0.3499999940395355f,-0.699999988079071f,0.11999999731779099f,0.3499999940395355f,0.3499999940395355f,-0.8999999761581421f,0.11999999731779099f,0.3499999940395355f,0.3499999940395355f,-0.699999988079071f,0.11999999731779099f,0f,0f,1f,0f});
  }
}
protected class MFFloat553 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.10000000149011612f,0.4000000059604645f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation554 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0.20000000298023224f,0.25f,1f,0.27000001072883606f,0.20000000298023224f,0.2199999988079071f,1f,0.27000001072883606f,0.2199999988079071f,0.20000000298023224f,1f,0.27000001072883606f,0f,0f,1f,0f});
  }
}
protected class MFFloat555 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.029999999329447746f,0.07999999821186066f,0.20000000298023224f,0.30000001192092896f,0.4000000059604645f,0.5f,0.800000011920929f,0.949999988079071f,1f});
  }
}
protected class MFRotation556 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,-1f,1f,1f,0.5f,-0.1599999964237213f,0.1599999964237213f,0.7850000262260437f,0.5f,-0.1599999964237213f,0.1599999964237213f,0.7850000262260437f,1f,1f,1f,0.75f,1f,1f,1f,0.75f,1f,1f,1f,0.75f,1f,1f,1f,0.75f,0f,0f,1f,0f});
  }
}
protected class MFFloat557 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.5f,0.6000000238418579f,0.699999988079071f,0.800000011920929f,1f});
  }
}
protected class MFRotation558 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0.44999998807907104f,1f,0f,0f,0.44999998807907104f,1f,0f,0f,0.44999998807907104f,0f,0f,1f,0f});
  }
}
protected class MFFloat559 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.5f,0.6000000238418579f,0.699999988079071f,0.800000011920929f,1f});
  }
}
protected class MFRotation560 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0.44999998807907104f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat561 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.10000000149011612f,0.20000000298023224f,0.30000001192092896f,0.4000000059604645f,0.5f,0.6000000238418579f,0.699999988079071f,0.800000011920929f,0.8999999761581421f,1f});
  }
}
protected class MFRotation562 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0.4300000071525574f,0f,0f,1f,0.4399999976158142f,0f,0f,1f,0.46000000834465027f,0f,0f,1f,0.4399999976158142f,0f,0f,1f,0.24500000476837158f,0f,0f,1f,0.23999999463558197f,0f,0f,1f,0.20999999344348907f,0f,0f,1f,0.23999999463558197f,0f,0f,1f,0f});
  }
}
protected class MFFloat563 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.10000000149011612f,0.20000000298023224f,0.30000001192092896f,0.4000000059604645f,0.5f,0.6000000238418579f,0.699999988079071f,0.800000011920929f,0.8999999761581421f,1f});
  }
}
protected class MFRotation564 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0.3700000047683716f,0f,0f,1f,0.3799999952316284f,0f,0f,1f,0.38999998569488525f,0f,0f,1f,0.3799999952316284f,0f,0f,1f,0.27000001072883606f,0f,0f,1f,0.2800000011920929f,0f,0f,1f,0.27000001072883606f,0f,0f,1f,0.2800000011920929f,0f,0f,1f,0f});
  }
}
protected class MFFloat565 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.5f,0.699999988079071f,0.800000011920929f,1f});
  }
}
protected class MFRotation566 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,-1f,0.10000000149011612f,0f,0f,-1f,0.2199999988079071f,0f,0.5f,-1f,0.27000001072883606f,0f,0f,-1f,0.10000000149011612f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat567 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation568 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,-0.05000000074505806f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat569 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.5f,0.8500000238418579f,1f});
  }
}
protected class MFRotation570 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,0f,0f,-1f,1.659999966621399f,-0.25f,0f,-1f,1.7599999904632568f,0f,0f,-1f,1.25600004196167f,0f,0f,-1f,0.05000000074505806f,1f,0f,0f,0f});
  }
}
protected class MFFloat571 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.15000000596046448f,0.30000001192092896f,0.5f,0.699999988079071f,0.8999999761581421f,1f});
  }
}
protected class MFRotation572 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.550000011920929f,-1f,-0.25f,0f,2.549999952316284f,-1f,-0.25f,0f,2.549999952316284f,-1f,-0.25f,0f,2.549999952316284f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat573 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.6499999761581421f,0.75f,0.8500000238418579f,1f});
  }
}
protected class MFRotation574 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,-0.550000011920929f,0f,0f,1f,0f,0f,1f,0f,1.5499999523162842f,0f,0f,-1f,1.5499999523162842f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat575 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation576 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,0.009999999776482582f,0.25f,0f,0f,-0.009999999776482582f,0.029999999329447746f,0f,0f,0.009999999776482582f,0.05000000074505806f,0f,0f,0.009999999776482582f,0.009999999776482582f,0f,0f,1f,0f});
  }
}
protected class MFFloat577 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation578 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1f,1f,0f,0f,0.4000000059604645f,1f,0f,0f,0.20000000298023224f,1f,0f,0f,0f});
  }
}
protected class MFFloat579 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.6000000238418579f,0.800000011920929f,1f});
  }
}
protected class MFRotation580 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,1f,0f,0.30000001192092896f,1f,1f,0f,0.30000001192092896f,1f,1f,0f,0.6000000238418579f,1f,1f,0f,0.30000001192092896f,0f,1f,1f,0f});
  }
}
protected class MFFloat581 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.5f,0.8500000238418579f,1f});
  }
}
protected class MFRotation582 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.25f,0f,1f,1.7599999904632568f,0f,0f,1f,1.659999966621399f,0.25f,0f,1f,1.7599999904632568f,0f,0f,1f,1.25600004196167f,0f,0f,1f,0.05000000074505806f,0.25f,0f,1f,1.7599999904632568f});
  }
}
protected class MFFloat583 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.041669998317956924f,0.125f,0.16670000553131104f,0.20829999446868896f,0.25f,0.29170000553131104f,0.375f,0.45829999446868896f,0.5f,0.541700005531311f,0.583299994468689f,0.625f,0.708299994468689f,0.75f,0.791700005531311f,0.875f,0.916700005531311f,1f});
  }
}
protected class MFVec3f584 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.009279999881982803f,0f,0f,-0.0038580000400543213f,0f,0f,-0.008847000077366829f,0f,0f,-0.01486000046133995f,0f,0f,-0.026410000398755074f,0f,0f,-0.039340000599622726f,0f,0f,-0.050200000405311584f,0f,0f,-0.07468999922275543f,0f,0f,-0.027319999411702156f,0f,0f,-0.01607999950647354f,0f,0f,-0.011289999820291996f,0f,0f,-0.0058189998380839825f,0f,0f,-0.0020039998926222324f,0f,0f,-0.0025790000800043344f,0f,0f,-0.014299999922513962f,0f,0f,-0.03799000009894371f,0f,0f,-0.05648000165820122f,0f,0f,-0.04500000178813934f,0f,0f,-0.009279999881982803f,0f});
  }
}
protected class MFFloat585 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation586 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,0f});
  }
}
protected class MFFloat587 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.375f,0.5f,0.666700005531311f,0.791700005531311f,0.916700005531311f,1f});
  }
}
protected class MFRotation588 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.8730000257492065f,0.06094000115990639f,0.48399999737739563f,0.2865000069141388f,0.9962999820709229f,-0.010569999925792217f,0.08481000363826752f,0.24879999458789825f,0.9965000152587891f,0.01590999960899353f,-0.08222000300884247f,0.38359999656677246f,-0.7017999887466431f,-0.03223000094294548f,-0.7117000222206116f,0.12890000641345978f,-1f,0f,0f,0.551800012588501f,-0.996399998664856f,0.02230999991297722f,0.08169999718666077f,0.535099983215332f,-0.98089998960495f,0.04912000149488449f,0.18809999525547028f,0.5203999876976013f,-0.8730000257492065f,0.06094000115990639f,0.48399999737739563f,0.2865000069141388f});
  }
}
protected class MFFloat589 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20829999446868896f,0.375f,0.5f,0.666700005531311f,0.791700005531311f,0.916700005531311f,1f});
  }
}
protected class MFRotation590 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.32260000705718994f,1f,0f,0f,0.15559999644756317f,1f,0f,0f,0.08677999675273895f,1f,0f,0f,0.8751000165939331f,1f,0f,0f,1.13100004196167f,1f,0f,0f,0.09961000084877014f,1f,0f,0f,0.39419999718666077f,1f,0f,0f,0.32260000705718994f});
  }
}
protected class MFFloat591 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.20829999446868896f,0.375f,0.666700005531311f,0.916700005531311f,1f});
  }
}
protected class MFRotation592 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.06710000336170197f,-1f,0f,0f,0.2152000069618225f,-1f,0f,0f,0.31839999556541443f,-1f,0f,0f,0.4717000126838684f,-1f,0f,0f,0.29120001196861267f,1f,0f,0f,0.22220000624656677f,-1f,0f,0f,0.06710000336170197f});
  }
}
protected class MFFloat593 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.20829999446868896f,0.375f,0.45829999446868896f,0.5f,0.666700005531311f,0.75f,0.7799999713897705f,0.916700005531311f,1f});
  }
}
protected class MFRotation594 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.353300005197525f,-1f,0f,0f,0.10719999670982361f,1f,0f,0f,0.4000000059604645f,1f,0f,0f,0.12700000405311584f,-1f,0f,0f,0.017999999225139618f,-1f,0f,0f,0.057999998331069946f,-1f,0f,0f,0.23999999463558197f,-1f,0f,0f,0.3499999940395355f,-1f,0f,0f,0.33000001311302185f,0f,0f,1f,0f});
  }
}
protected class MFFloat595 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.30000001192092896f,1f});
  }
}
protected class MFRotation596 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat597 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation598 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,-0.20000000298023224f,1f,0f,0f,0f});
  }
}
protected class MFFloat599 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.800000011920929f,1f});
  }
}
protected class MFRotation600 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.30000001192092896f,-1f,0f,0f,0.15000000596046448f,1f,0f,0f,0.30000001192092896f,0f,0f,1f,0f,-1f,0f,0f,0.30000001192092896f});
  }
}
protected class MFFloat601 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.20829999446868896f,0.29170000553131104f,0.375f,0.5f,0.666700005531311f,0.791700005531311f,0.916700005531311f,1f});
  }
}
protected class MFRotation602 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.5831000208854675f,0.035110000520944595f,0.8116000294685364f,0.14810000360012054f,-0.9950000047683716f,0.02295999974012375f,0.0967399999499321f,0.4683000147342682f,-1f,0.0019000000320374966f,0.007960000075399876f,0.4731999933719635f,-0.9980000257492065f,-0.015799999237060547f,-0.06102000176906586f,0.5078999996185303f,-0.991100013256073f,-0.03540999814867973f,-0.12860000133514404f,0.5418999791145325f,-0.913100004196167f,-0.0624300017952919f,-0.40299999713897705f,0.3361000120639801f,-0.43059998750686646f,-0.07962000370025635f,-0.8989999890327454f,0.07038000226020813f,1f,0f,0f,0.257099986076355f,0.9890999794006348f,-0.028049999848008156f,0.1444000005722046f,0.3878999948501587f,-0.5831000208854675f,0.035110000520944595f,0.8116000294685364f,0.14810000360012054f});
  }
}
protected class MFFloat603 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.20829999446868896f,0.29170000553131104f,0.375f,0.5f,0.666700005531311f,0.791700005531311f,0.916700005531311f,1f});
  }
}
protected class MFRotation604 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.8572999835014343f,1f,0f,0f,0.8925999999046326f,1f,0f,0f,0.535099983215332f,1f,0f,0f,0.17560000717639923f,1f,0f,0f,0.11940000206232071f,1f,0f,0f,0.31529998779296875f,1f,0f,0f,0.0935399979352951f,1f,0f,0f,0.0855799987912178f,1f,0f,0f,0.2475000023841858f,1f,0f,0f,0.8572999835014343f});
  }
}
protected class MFFloat605 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.225f,0.25f,0.35f,0.45f,0.85f,0.91f});
  }
}
protected class MFRotation606 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.1f,0f,0f,1f,0f,0f,0f,1f,0f,1f,0f,0f,0.1f,0f,0f,1f,0f,1f,0f,0f,0.1f,1f,0f,0f,0.25f});
  }
}
protected class MFFloat607 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2199999988079071f,1f});
  }
}
protected class MFRotation608 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,-0.20000000298023224f,0f,0f,1f,0f,1f,0f,0f,-0.20000000298023224f});
  }
}
protected class MFFloat609 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20000000298023224f,0.4000000059604645f,0.800000011920929f,1f});
  }
}
protected class MFRotation610 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.15000000596046448f,0f,0f,1f,0f,1f,0f,0f,0.30000001192092896f,-1f,0f,0f,0.30000001192092896f,-1f,0f,0f,0.15000000596046448f});
  }
}
protected class MFFloat611 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.20829999446868896f,0.375f,0.75f,0.833299994468689f,1f});
  }
}
protected class MFRotation612 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0.08259999752044678f,-0.01971999928355217f,-0.5974000096321106f,0.8016999959945679f,0.08230999857187271f,0.009296000003814697f,-0.9648000001907349f,0.26269999146461487f,0.17339999973773956f,-0.012380000203847885f,0.9549000263214111f,-0.29679998755455017f,0.0873199999332428f,-0.008124999701976776f,0.9690999984741211f,-0.24629999697208405f,0.15800000727176666f,0f,1f,0f,0.08259999752044678f});
  }
}
protected class MFFloat613 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.41670000553131104f,0.5f,0.583299994468689f,0.666700005531311f,0.75f,0.833299994468689f,0.916700005531311f,1f});
  }
}
protected class MFRotation614 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,-1f,0f,0.08640000224113464f,0f,1f,0f,0.18250000476837158f,0f,1f,0f,0.15049999952316284f,0f,1f,0f,0.10530000180006027f,0f,1f,0f,0.04391000047326088f,0f,-1f,0f,0.031190000474452972f,0f,-1f,0f,0.0793600007891655f,0f,-1f,0f,0.1615999937057495f,0f,-1f,0f,0.1550000011920929f,0f,-1f,0f,0.08641999959945679f});
  }
}
protected class MFFloat615 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.916700005531311f,1f});
  }
}
protected class MFRotation616 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0.4000000059604645f,0.11999999731779099f,-1f,0f,0.4000000059604645f,0.1860000044107437f,1f,0f,0.10000000149011612f,0.335999995470047f,1f,0f,0.4000000059604645f,0.11999999731779099f});
  }
}
protected class MFFloat617 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.916700005531311f,1f});
  }
}
protected class MFRotation618 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.06599999964237213f,-1f,0f,0f,0.4880000054836273f,-1f,0f,0f,0.01769999973475933f,-1f,0f,0f,0.06598780304193497f});
  }
}
protected class MFFloat619 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.916700005531311f,1f});
  }
}
protected class MFRotation620 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,-1f,0f,0.460999995470047f,-0.3301999866962433f,-0.9275000095367432f,0.17550000548362732f,0.5388000011444092f,0.03277739882469177f,-0.99931401014328f,-0.01721850037574768f,0.4920330047607422f,0f,-1f,0f,0.4611000120639801f});
  }
}
protected class MFFloat621 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.916700005531311f,1f});
  }
}
protected class MFRotation622 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,-1f,0.09200000017881393f,1f,0f,-0.20000000298023224f,0.3197000026702881f,-1f,0f,-0.5f,0.15639999508857727f,-1f,0f,-1f,0.09200000017881393f});
  }
}
protected class MFFloat623 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.916700005531311f,1f});
  }
}
protected class MFRotation624 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.4115000069141388f,-1f,0f,0f,0.0925000011920929f,-1f,0f,0f,0.5725679993629456f,-1f,0f,0f,0.4115079939365387f});
  }
}
protected class MFFloat625 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.916700005531311f,1f});
  }
}
protected class MFRotation626 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.8129000067710876f,0.47589999437332153f,-0.33570000529289246f,0.13459999859333038f,0.15330000221729279f,-0.9878000020980835f,0.02582000009715557f,0.3901999890804291f,-0.5701000094413757f,0.7603999972343445f,-0.3109999895095825f,0.3659999966621399f,-0.8129000067710876f,0.47589999437332153f,-0.33570000529289246f,0.13459999859333038f});
  }
}
}
