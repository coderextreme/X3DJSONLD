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
public class KoreanCharacter02Chul implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new KoreanCharacter02Chul().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/KoreanCharacter02Chul.new.java.x3d");
    model.toFileJSON("../data/KoreanCharacter02Chul.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addComponent(new component().setName(new SFString("HAnim")).setLevel(1))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("KoreanCharacter02Chul.x3d")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Jin Hoon Lee and Min Joo Lee")))
        .addMeta(new meta().setName(new SFString("translator")).setContent(new SFString("Chul Hee Jung and Myeong Won Lee")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("31 March 2011")))
        .addMeta(new meta().setName(new SFString("translated")).setContent(new SFString("1 November 2014")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("5 November 2025")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("../Poses/images/HAnimPoseExampleKoreanCharacter02Chul.png")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("KoreanCharacter00ReadMe.txt")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("../KoreanCharacterHumanMotion_Infotech2014_140706.pdf")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("KoreanCharactersIllustrated.pdf")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter02Chul.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Suwon University HAnim Editor")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Gnu Image Manipulation Program, http://www.gimp.org")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle(new SFString("KoreanCharacter02Chul.x3d")))
        .addChild(new NavigationInfo().setSpeed(1.5f ))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f ,1f ,0f }).setDescription(new SFString("Chul")).setPosition(new float[] {0f ,1f ,3f }))
        .addChild(new HAnimHumanoid().setName(new SFString("Chul")).setDEF(new SFString("hanim_Chul")).setScale(new float[] {0.0225f ,0.0225f ,0.0225f }).setVersion(new SFString("2.0"))
          .addComments(new CommentsBlock("original HAnimHumanoid info='\"authorName=Chul Hee Jung and Myeong Won Lee\" \"authorEmail=myeongwonlee@gmail.com\" \"creationDate=31 March 2011\" \"humanoidVersion=2.0\" \"gender=male\" \"height=1.5\"'"))
          .setMetadata(new MetadataSet().setName(new SFString("HAnimHumanoid.info")).setReference(new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"))
            .setMetadata(new MetadataString().setName(new SFString("authorName")).setValue(new MFString0().getArray()))
            .setMetadata(new MetadataString().setName(new SFString("authorEmail")).setValue(new MFString1().getArray()))
            .setMetadata(new MetadataString().setName(new SFString("creationDate")).setValue(new MFString2().getArray()))
            .setMetadata(new MetadataString().setName(new SFString("gender")).setValue(new MFString3().getArray()))
            .addValue(new MetadataFloat().setName(new SFString("height")).setValue(new MFFloat4().getArray()))
            .setMetadata(new MetadataString().setName(new SFString("humanoidVersion")).setValue(new MFString5().getArray())))
          .addSkeleton(new HAnimJoint("hanim_Chul").setName(new SFString("humanoid_root")).setDEF(new SFString("hanim_humanoid_root")).setCenter(new float[] {0f ,44.07f ,-1.034f }).setUlimit(new MFFloat6().getArray()).setLlimit(new MFFloat7().getArray())
            .addChild(new HAnimSegment("hanim_humanoid_root").setName(new SFString("sacrum")).setDEF(new SFString("hanim_sacrum"))
              .addChild(new Transform().setTranslation(new float[] {0f ,44.07f ,-1.034f })
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                    .setTexture(new ImageTexture().setDEF(new SFString("ChulTextureAtlas")).setUrl(new MFString8().getArray())))
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt329().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt3210().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f12().getArray()))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName(new SFString("l_hip")).setDEF(new SFString("hanim_l_hip")).setCenter(new float[] {4.001f ,41.139999f ,-1.119f }).setUlimit(new MFFloat13().getArray()).setLlimit(new MFFloat14().getArray())
              .addChild(new HAnimSegment("hanim_l_hip").setName(new SFString("l_thigh")).setDEF(new SFString("hanim_l_thigh"))
                .addChild(new Transform().setTranslation(new float[] {4.001f ,41.139999f ,-1.119f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                      .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3215().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt3216().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f18().getArray()))))))
              .addChild(new HAnimJoint("hanim_l_hip").setName(new SFString("l_knee")).setDEF(new SFString("hanim_l_knee")).setCenter(new float[] {4.315f ,25.190001f ,-1.119f }).setUlimit(new MFFloat19().getArray()).setLlimit(new MFFloat20().getArray())
                .addChild(new HAnimSegment("hanim_l_knee").setName(new SFString("l_calf")).setDEF(new SFString("hanim_l_calf"))
                  .addChild(new Transform().setTranslation(new float[] {4.315f ,25.190001f ,-1.119f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                        .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3221().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt3222().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f23().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f24().getArray()))))))
                .addChild(new HAnimJoint("hanim_l_knee").setName(new SFString("l_talocrural")).setDEF(new SFString("hanim_l_talocrural")).setCenter(new float[] {4.574f ,6.838f ,-1.463f }).setUlimit(new MFFloat25().getArray()).setLlimit(new MFFloat26().getArray())
                  .addChild(new HAnimSegment("hanim_l_talocrural").setName(new SFString("l_talus")).setDEF(new SFString("hanim_l_talus"))
                    .addChild(new Transform().setTranslation(new float[] {4.574f ,6.838f ,-1.463f })
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                          .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3227().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt3228().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f29().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f30().getArray()))))))
                  .addChild(new HAnimJoint("hanim_l_talocrural").setName(new SFString("l_metatarsophalangeal_2")).setDEF(new SFString("hanim_l_metatarsophalangeal_2")).setCenter(new float[] {4.809f ,5.583f ,1.492f }).setUlimit(new MFFloat31().getArray()).setLlimit(new MFFloat32().getArray())
                    .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setName(new SFString("l_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_2"))
                      .addChild(new Transform().setTranslation(new float[] {4.809f ,5.583f ,1.492f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                            .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3233().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt3234().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f35().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f36().getArray()))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName(new SFString("r_hip")).setDEF(new SFString("hanim_r_hip")).setCenter(new float[] {-4.001f ,41.139999f ,-1.119f }).setUlimit(new MFFloat37().getArray()).setLlimit(new MFFloat38().getArray())
              .addChild(new HAnimSegment("hanim_r_hip").setName(new SFString("r_thigh")).setDEF(new SFString("hanim_r_thigh"))
                .addChild(new Transform().setTranslation(new float[] {-4.001f ,41.139999f ,-1.119f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                      .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3239().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt3240().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f42().getArray()))))))
              .addChild(new HAnimJoint("hanim_r_hip").setName(new SFString("r_knee")).setDEF(new SFString("hanim_r_knee")).setCenter(new float[] {-4.315f ,25.190001f ,-1.119f }).setUlimit(new MFFloat43().getArray()).setLlimit(new MFFloat44().getArray())
                .addChild(new HAnimSegment("hanim_r_knee").setName(new SFString("r_calf")).setDEF(new SFString("hanim_r_calf"))
                  .addChild(new Transform().setTranslation(new float[] {-4.315f ,25.190001f ,-1.119f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                        .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3245().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt3246().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f47().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f48().getArray()))))))
                .addChild(new HAnimJoint("hanim_r_knee").setName(new SFString("r_talocrural")).setDEF(new SFString("hanim_r_talocrural")).setCenter(new float[] {-4.574f ,6.838f ,-1.463f }).setUlimit(new MFFloat49().getArray()).setLlimit(new MFFloat50().getArray())
                  .addChild(new HAnimSegment("hanim_r_talocrural").setName(new SFString("r_talus")).setDEF(new SFString("hanim_r_talus"))
                    .addChild(new Transform().setTranslation(new float[] {-4.574f ,6.838f ,-1.463f })
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                          .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3251().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt3252().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f54().getArray()))))))
                  .addChild(new HAnimJoint("hanim_r_talocrural").setName(new SFString("r_metatarsophalangeal_2")).setDEF(new SFString("hanim_r_metatarsophalangeal_2")).setCenter(new float[] {-4.809f ,5.583f ,1.492f }).setUlimit(new MFFloat55().getArray()).setLlimit(new MFFloat56().getArray())
                    .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setName(new SFString("r_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_2"))
                      .addChild(new Transform().setTranslation(new float[] {-4.809f ,5.583f ,1.492f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                            .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3257().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt3258().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f60().getArray()))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName(new SFString("sacroiliac")).setDEF(new SFString("hanim_sacroiliac")).setCenter(new float[] {0f ,38.639999f ,-1.034f }).setUlimit(new MFFloat61().getArray()).setLlimit(new MFFloat62().getArray())
              .addChild(new HAnimSegment("hanim_sacroiliac").setName(new SFString("pelvis")).setDEF(new SFString("hanim_pelvis"))
                .addChild(new Transform().setTranslation(new float[] {0f ,38.639999f ,-1.034f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                      .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3263().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt3264().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f65().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f66().getArray()))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName(new SFString("l_shoulder")).setDEF(new SFString("hanim_l_shoulder")).setCenter(new float[] {7.699f ,59.419998f ,-1.567f }).setUlimit(new MFFloat67().getArray()).setLlimit(new MFFloat68().getArray())
                .addChild(new HAnimSegment("hanim_l_shoulder").setName(new SFString("l_upperarm")).setDEF(new SFString("hanim_l_upperarm"))
                  .addChild(new Transform().setTranslation(new float[] {7.699f ,59.419998f ,-1.567f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                        .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3269().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt3270().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f72().getArray()))))))
                .addChild(new HAnimJoint("hanim_l_shoulder").setName(new SFString("l_elbow")).setDEF(new SFString("hanim_l_elbow")).setCenter(new float[] {8.026f ,48.450001f ,-1.959f }).setUlimit(new MFFloat73().getArray()).setLlimit(new MFFloat74().getArray())
                  .addChild(new HAnimSegment("hanim_l_elbow").setName(new SFString("l_forearm")).setDEF(new SFString("hanim_l_forearm"))
                    .addChild(new Transform().setTranslation(new float[] {8.026f ,48.450001f ,-1.959f })
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                          .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3275().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt3276().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f78().getArray()))))))
                  .addChild(new HAnimJoint("hanim_l_elbow").setName(new SFString("l_radiocarpal")).setDEF(new SFString("hanim_l_radiocarpal")).setCenter(new float[] {7.617f ,37.689999f ,-1.663f }).setUlimit(new MFFloat79().getArray()).setLlimit(new MFFloat80().getArray())
                    .addChild(new HAnimSegment("hanim_l_radiocarpal").setName(new SFString("l_carpal")).setDEF(new SFString("hanim_l_carpal"))
                      .addChild(new Transform().setTranslation(new float[] {7.617f ,37.689999f ,-1.663f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                            .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3281().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt3282().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f83().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f84().getArray())))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName(new SFString("r_shoulder")).setDEF(new SFString("hanim_r_shoulder")).setCenter(new float[] {-7.699f ,59.419998f ,-1.567f }).setUlimit(new MFFloat85().getArray()).setLlimit(new MFFloat86().getArray())
                .addChild(new HAnimSegment("hanim_r_shoulder").setName(new SFString("r_upperarm")).setDEF(new SFString("hanim_r_upperarm"))
                  .addChild(new Transform().setTranslation(new float[] {-7.699f ,59.419998f ,-1.567f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                        .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3287().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt3288().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f89().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f90().getArray()))))))
                .addChild(new HAnimJoint("hanim_r_shoulder").setName(new SFString("r_elbow")).setDEF(new SFString("hanim_r_elbow")).setCenter(new float[] {-8.026f ,48.450001f ,-1.959f }).setUlimit(new MFFloat91().getArray()).setLlimit(new MFFloat92().getArray())
                  .addChild(new HAnimSegment("hanim_r_elbow").setName(new SFString("r_forearm")).setDEF(new SFString("hanim_r_forearm"))
                    .addChild(new Transform().setTranslation(new float[] {-8.026f ,48.450001f ,-1.959f })
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                          .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3293().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt3294().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f95().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f96().getArray()))))))
                  .addChild(new HAnimJoint("hanim_r_elbow").setName(new SFString("r_radiocarpal")).setDEF(new SFString("hanim_r_radiocarpal")).setCenter(new float[] {-7.617f ,37.689999f ,-1.663f }).setUlimit(new MFFloat97().getArray()).setLlimit(new MFFloat98().getArray())
                    .addChild(new HAnimSegment("hanim_r_radiocarpal").setName(new SFString("r_carpal")).setDEF(new SFString("hanim_r_carpal"))
                      .addChild(new Transform().setTranslation(new float[] {-7.617f ,37.689999f ,-1.663f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                            .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3299().getArray()).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt32100().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f101().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f102().getArray())))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName(new SFString("vl5")).setDEF(new SFString("hanim_vl5")).setCenter(new float[] {0f ,47.330002f ,-0.5744f }).setUlimit(new MFFloat103().getArray()).setLlimit(new MFFloat104().getArray())
                .addChild(new HAnimSegment("hanim_vl5").setName(new SFString("l5")).setDEF(new SFString("hanim_l5"))
                  .addChild(new Transform().setTranslation(new float[] {0f ,47.330002f ,-0.5744f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                        .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32105().getArray().append(new MFInt32106().getArray())).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt32107().getArray().append(new MFInt32108().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f109().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f110().getArray()))))))
                .addChild(new HAnimJoint("hanim_vl5").setName(new SFString("skullbase")).setDEF(new SFString("hanim_skullbase")).setCenter(new float[] {0f ,65.510002f ,-1.446f }).setUlimit(new MFFloat111().getArray()).setLlimit(new MFFloat112().getArray())
                  .addChild(new HAnimSegment("hanim_skullbase").setName(new SFString("skull")).setDEF(new SFString("hanim_skull"))
                    .addChild(new Transform().setTranslation(new float[] {0f ,65.510002f ,-1.446f })
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                          .setTexture(new ImageTexture().setUSE(new SFString("ChulTextureAtlas"))))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32113().getArray().append(new MFInt32114().getArray()).append(new MFInt32115().getArray())).setCreaseAngle(1.57f ).setTexCoordIndex(new MFInt32116().getArray().append(new MFInt32117().getArray()).append(new MFInt32118().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f119().getArray().append(new MFVec3f120().getArray())))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f121().getArray()))))))))))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_humanoid_root")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_sacroiliac")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_skullbase")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_vl5")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_l_elbow")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_r_elbow")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_l_hip")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_r_hip")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_l_knee")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_r_knee")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_l_metatarsophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_r_metatarsophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_l_radiocarpal")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_r_radiocarpal")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_l_shoulder")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_r_shoulder")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_l_talocrural")))
          .addJoints(new HAnimJoint("hanim_Chul").setUSE(new SFString("hanim_r_talocrural"))))
        .addChild(new EXPORT().setAS(new SFString("KoreanCharacter02Chul")).setLocalDEF(new SFString("hanim_Chul"))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Chul Hee Jung and Myeong Won Lee"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"myeongwonlee@gmail.com"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"31 March 2011"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"male"});
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.5f });
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"2.0"});
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat7 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/Chul.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Chul.png"});
  }
}
private class MFInt329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFInt3210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFVec3f11 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.87f ,0.0225f ,0f ,0.7535f ,-0.4472f ,-0.3613f ,0.7535f ,-0.3842f ,-0.6259f ,0.7535f ,-0.3083f ,-0.7227f ,0.7535f ,0.0225f ,-0.6259f ,0.7535f ,0.3534f ,-0.3613f ,0.7535f ,0.4293f ,0f ,0.7535f ,0.4922f ,0.3613f ,0.7535f ,0.4293f ,0.6259f ,0.7535f ,0.3534f ,0.7227f ,0.7535f ,0.0225f ,0.6259f ,0.7535f ,-0.3083f ,0.3613f ,0.7535f ,-0.3842f ,0f ,0.435f ,-0.7303f ,-0.4673f ,0.435f ,-0.6294f ,-0.8094f ,0.435f ,-0.3539f ,-0.9347f ,0.435f ,0.0225f ,-0.8094f ,0.435f ,0.399f ,-0.4673f ,0.435f ,0.5769f ,0f ,0.435f ,0.6777f ,0.4673f ,0.435f ,0.5769f ,0.8094f ,0.435f ,0.399f ,0.9347f ,0.435f ,0.0225f ,0.8094f ,0.435f ,-0.3539f ,0.4673f ,0.435f ,-0.6294f ,0f ,0f ,-0.7942f ,-0.5396f ,0f ,-0.6777f ,-0.9347f ,0f ,-0.3596f ,-1.079f ,0f ,0.0225f ,-0.9347f ,0f ,0.4572f ,-0.5396f ,0f ,0.6777f ,0f ,0f ,0.7942f ,0.5396f ,0f ,0.6777f ,0.9347f ,0f ,0.4572f ,1.079f ,0f ,0.0225f ,0.9347f ,0f ,-0.3596f ,0.5396f ,0f ,-0.6777f ,0f ,-0.435f ,-0.6777f ,-0.4673f ,-0.435f ,-0.5769f ,-0.8094f ,-0.435f ,-0.3013f ,-0.9347f ,-0.435f ,0.0225f ,-0.8094f ,-0.435f ,0.399f ,-0.4673f ,-0.435f ,0.5769f ,0f ,-0.435f ,0.6777f ,0.4673f ,-0.435f ,0.5769f ,0.8094f ,-0.435f ,0.399f ,0.9347f ,-0.435f ,0.0225f ,0.8094f ,-0.435f ,-0.3013f ,0.4673f ,-0.435f ,-0.5769f ,0f ,-0.7535f ,-0.3596f ,-0.2698f ,-0.7535f ,-0.3013f ,-0.4673f ,-0.7535f ,-0.1948f ,-0.5396f ,-0.7535f ,0.0225f ,-0.4673f ,-0.7535f ,0.2399f ,-0.2698f ,-0.7535f ,0.399f ,0f ,-0.7535f ,0.4572f ,0.2698f ,-0.7535f ,0.399f ,0.4673f ,-0.7535f ,0.2399f ,0.5396f ,-0.7535f ,0.0225f ,0.4673f ,-0.7535f ,-0.1948f ,0.2698f ,-0.7535f ,-0.3013f ,0f ,-0.87f ,0.0225f });
  }
}
private class MFVec2f12 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7418f ,0.2139f ,0.7309f ,0.2139f ,0.7342f ,0.26f ,0.7342f ,0.2938f ,0.7342f ,0.3062f ,0.7342f ,0.2938f ,0.7342f ,0.26f ,0.7309f ,0.2139f ,0.7343f ,0.2601f ,0.7343f ,0.2939f ,0.7343f ,0.3063f ,0.7343f ,0.2939f ,0.7343f ,0.2601f ,0.7157f ,0.2139f ,0.7156f ,0.2735f ,0.7156f ,0.3173f ,0.7156f ,0.3333f ,0.7156f ,0.3173f ,0.7156f ,0.2735f ,0.7157f ,0.2139f ,0.7157f ,0.2736f ,0.7157f ,0.3174f ,0.7157f ,0.3334f ,0.7157f ,0.3174f ,0.7157f ,0.2736f ,0.7015f ,0.2147f ,0.7014f ,0.2836f ,0.7014f ,0.3341f ,0.7014f ,0.3526f ,0.7014f ,0.3341f ,0.7014f ,0.2836f ,0.7015f ,0.2147f ,0.7015f ,0.2837f ,0.7015f ,0.3342f ,0.7015f ,0.3527f ,0.7015f ,0.3342f ,0.7015f ,0.2837f ,0.6609f ,0.2147f ,0.6608f ,0.2744f ,0.6608f ,0.3181f ,0.6608f ,0.3341f ,0.6608f ,0.3181f ,0.6608f ,0.2744f ,0.6609f ,0.2147f ,0.6609f ,0.2745f ,0.6609f ,0.3182f ,0.6609f ,0.3342f ,0.6609f ,0.3182f ,0.6609f ,0.2745f ,0.6312f ,0.2147f ,0.6311f ,0.2491f ,0.6311f ,0.2744f ,0.6311f ,0.2836f ,0.6311f ,0.2744f ,0.6311f ,0.2491f ,0.6312f ,0.2147f ,0.6312f ,0.2492f ,0.6312f ,0.2745f ,0.6312f ,0.2837f ,0.6312f ,0.2745f ,0.6312f ,0.2492f ,0.6204f ,0.2147f });
  }
}
private class MFFloat13 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {40,39,38,-1,38,37,36,-1,38,36,35,-1,40,38,35,-1,41,40,35,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,107,-1,107,106,14,-1,15,16,108,-1,108,107,15,-1,16,17,109,-1,109,108,16,-1,17,18,110,-1,110,109,17,-1,18,19,111,-1,111,110,18,-1,19,20,112,-1,112,111,19,-1,20,14,106,-1,106,112,20,-1,29,28,106,-1,106,107,29,-1,30,29,107,-1,107,108,30,-1,31,30,108,-1,108,109,31,-1,32,31,109,-1,109,110,32,-1,33,32,110,-1,110,111,33,-1,34,33,111,-1,111,112,34,-1,28,34,112,-1,112,106,28,-1,35,36,1,-1,1,0,35,-1,36,37,2,-1,2,1,36,-1,37,38,3,-1,3,2,37,-1,38,39,4,-1,4,3,38,-1,39,40,5,-1,5,4,39,-1,40,41,6,-1,6,5,40,-1,41,35,0,-1,0,6,41,-1,113,43,21,-1,50,51,42,-1,115,113,22,-1,52,53,44,-1,116,115,23,-1,54,55,45,-1,117,116,24,-1,56,57,46,-1,118,117,25,-1,58,59,47,-1,119,118,26,-1,60,61,48,-1,43,119,27,-1,62,63,114,-1,122,64,65,-1,66,67,130,-1,121,68,69,-1,70,71,129,-1,123,72,73,-1,74,75,131,-1,124,76,77,-1,78,79,132,-1,125,80,81,-1,82,83,133,-1,126,84,85,-1,86,87,134,-1,127,88,89,-1,90,91,135,-1,43,113,140,-1,113,115,140,-1,115,116,140,-1,116,117,140,-1,117,118,140,-1,118,119,140,-1,119,43,140,-1,92,93,49,-1,94,95,120,-1,96,97,128,-1,98,99,136,-1,100,101,137,-1,102,103,138,-1,104,105,139,-1});
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,42,43,29,-1,29,28,42,-1,44,42,28,-1,28,30,44,-1,45,44,30,-1,30,31,45,-1,46,45,31,-1,31,32,46,-1,47,46,32,-1,32,33,47,-1,48,47,33,-1,33,34,48,-1,43,48,34,-1,34,29,43,-1,43,42,28,-1,28,29,43,-1,42,44,30,-1,30,28,42,-1,44,45,31,-1,31,30,44,-1,45,46,32,-1,32,31,45,-1,46,47,33,-1,33,32,46,-1,47,48,34,-1,34,33,47,-1,48,43,29,-1,29,34,48,-1,43,42,49,-1,42,44,49,-1,44,45,49,-1,45,46,49,-1,46,47,49,-1,47,48,49,-1,48,43,49,-1,42,43,49,-1,44,42,49,-1,45,44,49,-1,46,45,49,-1,47,46,49,-1,48,47,49,-1,43,48,49,-1});
  }
}
private class MFVec3f17 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.64f ,0.923f ,0f ,1.465f ,0.923f ,2.862f ,-1.174f ,0.923f ,3.569f ,-3.002f ,0.923f ,1.588f ,-3.002f ,0.923f ,-1.588f ,-1.174f ,0.923f ,-3.569f ,1.465f ,0.923f ,-2.862f ,2.64f ,-2.421f ,0f ,1.465f ,-2.421f ,2.862f ,-1.174f ,-2.421f ,3.569f ,-3.002f ,-2.421f ,1.588f ,-3.002f ,-2.421f ,-1.588f ,-1.174f ,-2.421f ,-3.569f ,1.465f ,-2.421f ,-2.862f ,2.64f ,-8.213f ,0f ,1.465f ,-8.213f ,2.862f ,-1.174f ,-8.213f ,3.569f ,-3.002f ,-8.213f ,1.588f ,-3.002f ,-8.213f ,-1.588f ,-1.174f ,-8.213f ,-3.569f ,1.465f ,-8.213f ,-2.862f ,3.002f ,-14.12f ,0f ,1.691f ,-14.12f ,3.194f ,-1.255f ,-14.12f ,3.983f ,-2.991f ,-14.12f ,1.773f ,-2.991f ,-14.12f ,-1.773f ,-1.255f ,-14.12f ,-3.983f ,1.691f ,-14.12f ,-3.194f ,1.914f ,-6.856f ,0f ,1.013f ,-6.856f ,2.196f ,-1.012f ,-6.856f ,2.738f ,-2.348f ,-6.856f ,1.219f ,-2.348f ,-6.856f ,-1.219f ,-1.012f ,-6.856f ,-2.738f ,1.013f ,-6.856f ,-2.196f ,1.829f ,2.698f ,0f ,0.9595f ,2.698f ,2.118f ,-0.9934f ,2.698f ,2.641f ,-2.56f ,2.698f ,1.175f ,-2.56f ,2.698f ,-1.175f ,-0.9934f ,2.698f ,-2.641f ,0.9595f ,2.698f ,-2.118f ,0.9751f ,-17.04f ,2.046f ,1.815f ,-17.04f ,0f ,-0.9119f ,-17.04f ,2.551f ,-2.024f ,-17.04f ,1.136f ,-2.024f ,-17.04f ,-1.136f ,-0.9119f ,-17.04f ,-2.552f ,0.9751f ,-17.04f ,-2.046f ,-0.3011f ,-18.41f ,0f ,3.002f ,-14.12f ,0f ,1.691f ,-14.12f ,3.194f ,1.691f ,-14.12f ,3.194f ,-1.255f ,-14.12f ,3.983f ,-1.255f ,-14.12f ,3.983f ,-2.991f ,-14.12f ,1.773f ,-2.991f ,-14.12f ,1.773f ,-2.991f ,-14.12f ,-1.773f ,-2.991f ,-14.12f ,-1.773f ,-1.255f ,-14.12f ,-3.983f ,-1.255f ,-14.12f ,-3.983f ,1.691f ,-14.12f ,-3.194f ,1.691f ,-14.12f ,-3.194f ,3.002f ,-14.12f ,0f ,0.9751f ,-17.04f ,2.046f ,1.691f ,-14.12f ,3.194f ,1.691f ,-14.12f ,3.194f ,3.002f ,-14.12f ,0f ,-0.9119f ,-17.04f ,2.551f ,-1.255f ,-14.12f ,3.983f ,-1.255f ,-14.12f ,3.983f ,1.691f ,-14.12f ,3.194f ,-2.024f ,-17.04f ,1.136f ,-2.991f ,-14.12f ,1.773f ,-2.991f ,-14.12f ,1.773f ,-1.255f ,-14.12f ,3.983f ,-2.024f ,-17.04f ,-1.136f ,-2.991f ,-14.12f ,-1.773f ,-2.991f ,-14.12f ,-1.773f ,-2.991f ,-14.12f ,1.773f ,-0.9119f ,-17.04f ,-2.552f ,-1.255f ,-14.12f ,-3.983f ,-1.255f ,-14.12f ,-3.983f ,-2.991f ,-14.12f ,-1.773f ,0.9751f ,-17.04f ,-2.046f ,1.691f ,-14.12f ,-3.194f ,1.691f ,-14.12f ,-3.194f ,-1.255f ,-14.12f ,-3.983f ,1.815f ,-17.04f ,0f ,3.002f ,-14.12f ,0f ,3.002f ,-14.12f ,0f ,1.691f ,-14.12f ,-3.194f ,0.9751f ,-17.04f ,2.046f ,1.815f ,-17.04f ,0f ,-0.9119f ,-17.04f ,2.551f ,0.9751f ,-17.04f ,2.046f ,-2.024f ,-17.04f ,1.136f ,-0.9119f ,-17.04f ,2.551f ,-2.024f ,-17.04f ,-1.136f ,-2.024f ,-17.04f ,1.136f ,-0.9119f ,-17.04f ,-2.552f ,-2.024f ,-17.04f ,-1.136f ,0.9751f ,-17.04f ,-2.046f ,-0.9119f ,-17.04f ,-2.552f ,1.815f ,-17.04f ,0f ,0.9751f ,-17.04f ,-2.046f ,3.002f ,-14.12f ,0f ,1.691f ,-14.12f ,3.194f ,-1.255f ,-14.12f ,3.983f ,-2.991f ,-14.12f ,1.773f ,-2.991f ,-14.12f ,-1.773f ,-1.255f ,-14.12f ,-3.983f ,1.691f ,-14.12f ,-3.194f ,0.9751f ,-17.04f ,2.046f ,1.815f ,-17.04f ,0f ,-0.9119f ,-17.04f ,2.551f ,-2.024f ,-17.04f ,1.136f ,-2.024f ,-17.04f ,-1.136f ,-0.9119f ,-17.04f ,-2.552f ,0.9751f ,-17.04f ,-2.046f ,-0.3011f ,-18.41f ,0f ,0.9751f ,-17.04f ,2.046f ,1.815f ,-17.04f ,0f ,-0.9119f ,-17.04f ,2.551f ,-2.024f ,-17.04f ,1.136f ,-2.024f ,-17.04f ,-1.136f ,-0.9119f ,-17.04f ,-2.552f ,0.9751f ,-17.04f ,-2.046f ,-0.3011f ,-18.41f ,0f ,0.9751f ,-17.04f ,2.046f ,1.815f ,-17.04f ,0f ,-0.9119f ,-17.04f ,2.551f ,-2.024f ,-17.04f ,1.136f ,-2.024f ,-17.04f ,-1.136f ,-0.9119f ,-17.04f ,-2.552f ,0.9751f ,-17.04f ,-2.046f ,-0.3011f ,-18.41f ,0f ,-0.3011f ,-18.41f ,0f ,-0.3011f ,-18.41f ,0f ,-0.3011f ,-18.41f ,0f ,-0.3011f ,-18.41f ,0f });
  }
}
private class MFVec2f18 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7014f ,0.3364f ,0.7014f ,0.3621f ,0.7014f ,0.2785f ,0.7014f ,0.2321f ,0.7014f ,0.2321f ,0.7014f ,0.2785f ,0.7014f ,0.3364f ,0.6864f ,0.3861f ,0.6582f ,0.3513f ,0.6582f ,0.3861f ,0.6864f ,0.3513f ,0.6582f ,0.2731f ,0.6864f ,0.2731f ,0.6582f ,0.219f ,0.6864f ,0.219f ,0.6582f ,0.219f ,0.6864f ,0.219f ,0.6582f ,0.2731f ,0.6864f ,0.2731f ,0.6582f ,0.3513f ,0.6864f ,0.3513f ,0.5958f ,0.3513f ,0.5958f ,0.3861f ,0.5958f ,0.2731f ,0.5958f ,0.219f ,0.5958f ,0.219f ,0.5958f ,0.2731f ,0.5958f ,0.3513f ,0.5417f ,0.3589f ,0.5417f ,0.3977f ,0.5417f ,0.2716f ,0.5417f ,0.2202f ,0.5417f ,0.2202f ,0.5417f ,0.2716f ,0.5417f ,0.3589f ,0.6072f ,0.3379f ,0.6072f ,0.3646f ,0.6072f ,0.2779f ,0.6072f ,0.2384f ,0.6072f ,0.2384f ,0.6072f ,0.2779f ,0.6072f ,0.3379f ,0.535f ,0.3368f ,0.535f ,0.3617f ,0.535f ,0.2809f ,0.535f ,0.248f ,0.535f ,0.248f ,0.535f ,0.2809f ,0.535f ,0.3368f ,0.5235f ,0.299f });
  }
}
private class MFFloat19 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {40,39,38,-1,38,37,36,-1,38,36,35,-1,40,38,35,-1,41,40,35,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,35,36,1,-1,1,0,35,-1,36,37,2,-1,2,1,36,-1,37,38,3,-1,3,2,37,-1,38,39,4,-1,4,3,38,-1,39,40,5,-1,5,4,39,-1,40,41,6,-1,6,5,40,-1,41,35,0,-1,0,6,41,-1});
  }
}
private class MFInt3222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1});
  }
}
private class MFVec3f23 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.59f ,-0.0184f ,0f ,1.415f ,-0.0184f ,2.862f ,-1.224f ,-0.0184f ,3.569f ,-3.033f ,-0.0184f ,1.588f ,-3.033f ,-0.0184f ,-1.588f ,-1.224f ,-0.0184f ,-3.569f ,1.415f ,-0.0184f ,-2.862f ,2.59f ,-3.362f ,0f ,1.415f ,-3.362f ,2.862f ,-1.224f ,-3.362f ,3.569f ,-3.033f ,-3.362f ,1.588f ,-3.033f ,-3.362f ,-1.588f ,-1.224f ,-3.362f ,-3.569f ,1.415f ,-3.362f ,-2.862f ,2.59f ,-13.66f ,0f ,1.415f ,-13.66f ,2.862f ,-1.224f ,-13.66f ,3.569f ,-3.033f ,-13.66f ,1.588f ,-3.033f ,-13.66f ,-1.588f ,-1.224f ,-13.66f ,-3.569f ,1.415f ,-13.66f ,-2.862f ,3.239f ,-19.57f ,0f ,1.813f ,-19.57f ,3.472f ,-1.389f ,-19.57f ,4.33f ,-3.239f ,-19.57f ,1.927f ,-3.239f ,-19.57f ,-1.927f ,-1.389f ,-19.57f ,-4.33f ,1.813f ,-19.57f ,-3.472f ,1.863f ,-12.3f ,0f ,0.9622f ,-12.3f ,2.196f ,-1.063f ,-12.3f ,2.738f ,-2.378f ,-12.3f ,1.219f ,-2.378f ,-12.3f ,-1.219f ,-1.063f ,-12.3f ,-2.738f ,0.9622f ,-12.3f ,-2.196f ,1.778f ,1.756f ,0f ,0.9091f ,1.756f ,2.118f ,-1.044f ,1.756f ,2.641f ,-2.61f ,1.756f ,1.175f ,-2.61f ,1.756f ,-1.175f ,-1.044f ,1.756f ,-2.641f ,0.9091f ,1.756f ,-2.118f });
  }
}
private class MFVec2f24 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.5993f ,0.2671f ,0.5993f ,0.2423f ,0.5993f ,0.3227f ,0.5993f ,0.3673f ,0.5993f ,0.3673f ,0.5993f ,0.3227f ,0.5993f ,0.2671f ,0.5849f ,0.2192f ,0.5579f ,0.2527f ,0.5579f ,0.2192f ,0.5849f ,0.2527f ,0.5579f ,0.3279f ,0.5849f ,0.3279f ,0.5579f ,0.3793f ,0.5849f ,0.3793f ,0.5579f ,0.3793f ,0.5849f ,0.3793f ,0.5579f ,0.3279f ,0.5849f ,0.3279f ,0.5579f ,0.2527f ,0.5849f ,0.2527f ,0.4746f ,0.2527f ,0.4746f ,0.2192f ,0.4746f ,0.3279f ,0.4746f ,0.3793f ,0.4746f ,0.3793f ,0.4746f ,0.3279f ,0.4746f ,0.2527f ,0.426f ,0.2592f ,0.4268f ,0.2203f ,0.4268f ,0.3325f ,0.4268f ,0.3852f ,0.4268f ,0.3852f ,0.4268f ,0.3325f ,0.426f ,0.2592f ,0.4856f ,0.2656f ,0.4856f ,0.2399f ,0.4856f ,0.3232f ,0.4856f ,0.3607f ,0.4856f ,0.3607f ,0.4856f ,0.3232f ,0.4856f ,0.2656f });
  }
}
private class MFFloat25 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,4,1,-1,1,2,0,-1,3,5,0,-1,0,2,3,-1,6,9,7,-1,7,8,6,-1,8,7,10,-1,10,11,8,-1,12,20,9,-1,9,6,12,-1,21,20,12,-1,12,13,21,-1,11,10,14,-1,14,15,11,-1,15,14,16,-1,16,17,15,-1,9,1,4,-1,4,7,9,-1,7,4,0,-1,0,10,7,-1,10,0,5,-1,5,14,10,-1,14,5,3,-1,3,16,14,-1,6,8,19,-1,8,11,19,-1,12,6,19,-1,13,12,19,-1,11,15,19,-1,15,17,19,-1,17,18,19,-1,18,13,19,-1,13,18,22,-1,22,21,13,-1,18,17,16,-1,16,22,18,-1,24,25,26,-1,26,27,28,-1,24,26,28,-1,24,28,29,-1,24,29,30,-1,24,30,23,-1,2,1,24,-1,24,23,2,-1,1,9,25,-1,25,24,1,-1,9,20,26,-1,26,25,9,-1,20,21,27,-1,27,26,20,-1,21,22,28,-1,28,27,21,-1,22,16,29,-1,29,28,22,-1,16,3,30,-1,30,29,16,-1,3,2,23,-1,23,30,3,-1});
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,4,1,-1,1,2,0,-1,3,5,0,-1,0,2,3,-1,6,9,7,-1,7,8,6,-1,8,7,10,-1,10,11,8,-1,12,20,9,-1,9,6,12,-1,21,20,12,-1,12,13,21,-1,11,10,14,-1,14,15,11,-1,15,14,16,-1,16,17,15,-1,9,1,4,-1,4,7,9,-1,7,4,0,-1,0,10,7,-1,10,0,5,-1,5,14,10,-1,14,5,3,-1,3,16,14,-1,6,8,19,-1,8,11,19,-1,12,6,19,-1,13,12,19,-1,11,15,19,-1,15,17,19,-1,17,18,19,-1,18,13,19,-1,13,18,22,-1,22,21,13,-1,18,17,16,-1,16,22,18,-1,24,25,26,-1,26,27,28,-1,24,26,28,-1,24,28,29,-1,24,29,30,-1,24,30,23,-1,2,1,24,-1,24,23,2,-1,1,9,25,-1,25,24,1,-1,9,20,26,-1,26,25,9,-1,20,21,27,-1,27,26,20,-1,21,22,28,-1,28,27,21,-1,22,16,29,-1,29,28,22,-1,16,3,30,-1,30,29,16,-1,3,2,23,-1,23,30,3,-1});
  }
}
private class MFVec3f29 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.8202f ,-6.687f ,-3.411f ,2.567f ,-6.814f ,0.3665f ,0.4068f ,-6.835f ,0.5953f ,-2.033f ,-6.8f ,0.7383f ,2.347f ,-6.742f ,-2.364f ,-2.159f ,-6.722f ,-2.362f ,1.391f ,0.0721f ,-0.2632f ,2.329f ,-3.518f ,-2.264f ,1.029f ,0.4254f ,-1.355f ,2.148f ,-3.639f ,0.4281f ,0.578f ,-3.439f ,-3.248f ,0.1667f ,-0.7673f ,-2.634f ,0.6108f ,-0.1555f ,0.5745f ,-1.165f ,-0.0864f ,1.722f ,-2.436f ,-3.539f ,-2.293f ,-1.3f ,-0.7319f ,-2.864f ,-2.025f ,-3.634f ,0.7655f ,-2.416f ,-1.184f ,-1.037f ,-2.567f ,-0.7486f ,1.337f ,-0.5315f ,0.4359f ,-0.5649f ,1.591f ,-1.917f ,2.128f ,-0.6895f ,-0.8855f ,3.411f ,-2.449f ,-2.096f ,3.113f ,0.575f ,-6.557f ,1.961f ,2.022f ,-6.548f ,1.82f ,1.675f ,-4.087f ,1.579f ,1.205f ,-2.631f ,3.158f ,-0.5196f ,-1.891f ,4.248f ,-1.582f ,-2.617f ,4.058f ,-1.245f ,-3.851f ,1.847f ,-1.226f ,-6.514f ,2.023f });
  }
}
private class MFVec2f30 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2874f ,0.0046f ,0.2798f ,0.0442f ,0.2785f ,0.0523f ,0.2806f ,0.06f ,0.2841f ,0.0129f ,0.2854f ,0.0243f ,0.6233f ,0.0398f ,0.3712f ,0.0119f ,0.6447f ,0.028f ,0.3638f ,0.0437f ,0.376f ,0.0049f ,0.5724f ,0.0153f ,0.6095f ,0.0515f ,0.6137f ,0.0693f ,0.3699f ,0.0236f ,0.5745f ,0.0163f ,0.3642f ,0.0581f ,0.5471f ,0.0403f ,0.5735f ,0.0684f ,0.6453f ,0.0411f ,0.4855f ,0.066f ,0.5541f ,0.0994f ,0.4746f ,0.0876f ,0.2785f ,0.0523f ,0.2798f ,0.0442f ,0.3638f ,0.0437f ,0.4855f ,0.066f ,0.5541f ,0.0994f ,0.4746f ,0.0876f ,0.3642f ,0.0581f ,0.2806f ,0.06f });
  }
}
private class MFFloat31 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat32 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,19,-1,19,18,0,-1,1,2,20,-1,20,19,1,-1,22,5,25,-1,4,24,25,-1,25,5,4,-1,3,0,18,-1,18,21,3,-1,6,9,7,-1,7,8,6,-1,22,20,2,-1,2,5,22,-1,6,11,10,-1,10,9,6,-1,0,13,12,-1,12,1,0,-1,1,12,14,-1,14,2,1,-1,3,4,15,-1,15,16,3,-1,5,17,15,-1,15,4,5,-1,3,16,13,-1,13,0,3,-1,2,14,17,-1,17,5,2,-1,15,6,8,-1,8,16,15,-1,16,8,7,-1,7,13,16,-1,13,7,9,-1,9,12,13,-1,15,17,11,-1,11,6,15,-1,12,9,10,-1,10,14,12,-1,14,10,11,-1,11,17,14,-1,4,3,23,-1,23,24,4,-1,23,3,21,-1,18,19,27,-1,27,26,18,-1,19,20,28,-1,28,27,19,-1,20,22,29,-1,29,28,20,-1,22,25,29,-1,23,21,30,-1,21,18,26,-1,26,30,21,-1,23,25,24,-1,29,25,23,-1,23,30,29,-1,27,28,29,-1,26,27,29,-1,30,26,29,-1});
  }
}
private class MFInt3234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,19,-1,19,18,0,-1,1,2,20,-1,20,19,1,-1,22,5,25,-1,4,24,25,-1,25,5,4,-1,3,0,18,-1,18,21,3,-1,6,9,7,-1,7,8,6,-1,22,20,2,-1,2,5,22,-1,6,11,10,-1,10,9,6,-1,0,13,12,-1,12,1,0,-1,1,12,14,-1,14,2,1,-1,3,4,15,-1,15,16,3,-1,5,17,15,-1,15,4,5,-1,3,16,13,-1,13,0,3,-1,2,14,17,-1,17,5,2,-1,15,6,8,-1,8,16,15,-1,16,8,7,-1,7,13,16,-1,13,7,9,-1,9,12,13,-1,15,17,11,-1,11,6,15,-1,12,9,10,-1,10,14,12,-1,14,10,11,-1,11,17,14,-1,4,3,23,-1,23,24,4,-1,23,3,21,-1,18,19,27,-1,27,26,18,-1,19,20,28,-1,28,27,19,-1,20,22,29,-1,29,28,20,-1,22,25,29,-1,23,21,30,-1,21,18,26,-1,26,30,21,-1,23,25,24,-1,29,25,23,-1,23,30,29,-1,27,28,29,-1,26,27,29,-1,30,26,29,-1});
  }
}
private class MFVec3f35 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.803f ,-5.588f ,0.6731f ,0.2267f ,-5.589f ,2.081f ,-2.411f ,-5.604f ,1.896f ,2.336f ,-2.423f ,0.7256f ,-0.4491f ,-0.4293f ,2.144f ,-2.566f ,-2.188f ,1.933f ,-0.2886f ,-2.342f ,8.508f ,2.628f ,-5.51f ,5.676f ,2.567f ,-2.341f ,5.71f ,-0.0624f ,-5.51f ,8.465f ,-1.743f ,-5.522f ,7.68f ,-1.73f ,-2.103f ,7.711f ,-0.0387f ,-5.541f ,5.353f ,2.584f ,-5.536f ,2.735f ,-2.525f ,-5.553f ,5.417f ,-0.265f ,-1.11f ,5.396f ,2.299f ,-2.375f ,2.776f ,-2.512f ,-2.385f ,5.448f ,2.332f ,-5.559f ,-2.589f ,0.1713f ,-5.58f ,-2.36f ,-2.269f ,-5.545f ,-2.217f ,1.912f ,-2.384f ,-2.527f ,-2.26f ,-2.379f ,-2.19f ,1.356f ,-0.6618f ,-0.8278f ,-0.925f ,0.3698f ,0.4552f ,-2.684f ,-0.8406f ,0.1573f ,1.828f ,-3.703f ,-4.62f ,0.0134f ,-3.719f ,-4.434f ,-1.422f ,-3.68f ,-4.33f ,-1.411f ,-0.7578f ,-4.754f ,0.2889f ,-0.8748f ,-4.705f });
  }
}
private class MFVec2f36 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.278f ,0.0809f ,0.2779f ,0.1038f ,0.277f ,0.1083f ,0.3615f ,0.0805f ,0.4946f ,0.1295f ,0.3758f ,0.1069f ,0.3664f ,0.1777f ,0.2827f ,0.1396f ,0.3665f ,0.1379f ,0.2827f ,0.1788f ,0.282f ,0.1739f ,0.3809f ,0.172f ,0.2808f ,0.1426f ,0.2811f ,0.1055f ,0.2801f ,0.1495f ,0.4533f ,0.1669f ,0.3644f ,0.1045f ,0.3638f ,0.1477f ,0.2798f ,0.0442f ,0.2785f ,0.0523f ,0.2806f ,0.06f ,0.3638f ,0.0437f ,0.3642f ,0.0581f ,0.4855f ,0.066f ,0.5541f ,0.0994f ,0.4746f ,0.0876f ,0.2798f ,0.0442f ,0.2785f ,0.0523f ,0.2806f ,0.06f ,0.3642f ,0.0581f ,0.3638f ,0.0437f });
  }
}
private class MFFloat37 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat38 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {36,37,38,-1,35,36,38,-1,38,39,40,-1,35,38,40,-1,41,35,40,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,106,107,-1,107,15,14,-1,15,107,108,-1,108,16,15,-1,16,108,109,-1,109,17,16,-1,17,109,110,-1,110,18,17,-1,18,110,111,-1,111,19,18,-1,19,111,112,-1,112,20,19,-1,20,112,106,-1,106,14,20,-1,29,107,106,-1,106,28,29,-1,30,108,107,-1,107,29,30,-1,31,109,108,-1,108,30,31,-1,32,110,109,-1,109,31,32,-1,33,111,110,-1,110,32,33,-1,34,112,111,-1,111,33,34,-1,28,106,112,-1,112,34,28,-1,35,0,1,-1,1,36,35,-1,36,1,2,-1,2,37,36,-1,37,2,3,-1,3,38,37,-1,38,3,4,-1,4,39,38,-1,39,4,5,-1,5,40,39,-1,40,5,6,-1,6,41,40,-1,41,6,0,-1,0,35,41,-1,113,21,43,-1,50,42,51,-1,115,22,113,-1,52,44,53,-1,116,23,115,-1,54,45,55,-1,117,24,116,-1,56,46,57,-1,118,25,117,-1,58,47,59,-1,119,26,118,-1,60,48,61,-1,43,27,119,-1,62,114,63,-1,122,65,64,-1,66,130,67,-1,121,69,68,-1,70,129,71,-1,123,73,72,-1,74,131,75,-1,124,77,76,-1,78,132,79,-1,125,81,80,-1,82,133,83,-1,126,85,84,-1,86,134,87,-1,127,89,88,-1,90,135,91,-1,43,140,113,-1,113,140,115,-1,115,140,116,-1,116,140,117,-1,117,140,118,-1,118,140,119,-1,119,140,43,-1,92,49,93,-1,94,120,95,-1,96,128,97,-1,98,136,99,-1,100,137,101,-1,102,138,103,-1,104,139,105,-1});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,42,29,43,-1,29,42,28,-1,44,28,42,-1,28,44,30,-1,45,30,44,-1,30,45,31,-1,46,31,45,-1,31,46,32,-1,47,32,46,-1,32,47,33,-1,48,33,47,-1,33,48,34,-1,43,34,48,-1,34,43,29,-1,43,28,42,-1,28,43,29,-1,42,30,44,-1,30,42,28,-1,44,31,45,-1,31,44,30,-1,45,32,46,-1,32,45,31,-1,46,33,47,-1,33,46,32,-1,47,34,48,-1,34,47,33,-1,48,29,43,-1,29,48,34,-1,43,49,42,-1,42,49,44,-1,44,49,45,-1,45,49,46,-1,46,49,47,-1,47,49,48,-1,48,49,43,-1,42,49,43,-1,44,49,42,-1,45,49,44,-1,46,49,45,-1,47,49,46,-1,48,49,47,-1,43,49,48,-1});
  }
}
private class MFVec3f41 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.64f ,0.923f ,0f ,-1.465f ,0.923f ,2.862f ,1.174f ,0.923f ,3.569f ,3.002f ,0.923f ,1.588f ,3.002f ,0.923f ,-1.588f ,1.174f ,0.923f ,-3.569f ,-1.465f ,0.923f ,-2.862f ,-2.64f ,-2.421f ,0f ,-1.465f ,-2.421f ,2.862f ,1.174f ,-2.421f ,3.569f ,3.002f ,-2.421f ,1.588f ,3.002f ,-2.421f ,-1.588f ,1.174f ,-2.421f ,-3.569f ,-1.465f ,-2.421f ,-2.862f ,-2.64f ,-8.213f ,0f ,-1.465f ,-8.213f ,2.862f ,1.174f ,-8.213f ,3.569f ,3.002f ,-8.213f ,1.588f ,3.002f ,-8.213f ,-1.588f ,1.174f ,-8.213f ,-3.569f ,-1.465f ,-8.213f ,-2.862f ,-3.002f ,-14.12f ,0f ,-1.691f ,-14.12f ,3.194f ,1.255f ,-14.12f ,3.983f ,2.991f ,-14.12f ,1.773f ,2.991f ,-14.12f ,-1.773f ,1.255f ,-14.12f ,-3.983f ,-1.691f ,-14.12f ,-3.194f ,-1.914f ,-6.856f ,0f ,-1.013f ,-6.856f ,2.196f ,1.012f ,-6.856f ,2.738f ,2.348f ,-6.856f ,1.219f ,2.348f ,-6.856f ,-1.219f ,1.012f ,-6.856f ,-2.738f ,-1.013f ,-6.856f ,-2.196f ,-1.829f ,2.698f ,0f ,-0.9595f ,2.698f ,2.118f ,0.9934f ,2.698f ,2.641f ,2.56f ,2.698f ,1.175f ,2.56f ,2.698f ,-1.175f ,0.9934f ,2.698f ,-2.641f ,-0.9595f ,2.698f ,-2.118f ,-0.9751f ,-17.04f ,2.046f ,-1.815f ,-17.04f ,0f ,0.9119f ,-17.04f ,2.552f ,2.024f ,-17.04f ,1.136f ,2.024f ,-17.04f ,-1.136f ,0.9119f ,-17.04f ,-2.552f ,-0.9751f ,-17.04f ,-2.046f ,0.3011f ,-18.41f ,0f ,-3.002f ,-14.12f ,0f ,-1.691f ,-14.12f ,3.194f ,-1.691f ,-14.12f ,3.194f ,1.255f ,-14.12f ,3.983f ,1.255f ,-14.12f ,3.983f ,2.991f ,-14.12f ,1.773f ,2.991f ,-14.12f ,1.773f ,2.991f ,-14.12f ,-1.773f ,2.991f ,-14.12f ,-1.773f ,1.255f ,-14.12f ,-3.983f ,1.255f ,-14.12f ,-3.983f ,-1.691f ,-14.12f ,-3.194f ,-1.691f ,-14.12f ,-3.194f ,-3.002f ,-14.12f ,0f ,-0.9751f ,-17.04f ,2.046f ,-1.691f ,-14.12f ,3.194f ,-1.691f ,-14.12f ,3.194f ,-3.002f ,-14.12f ,0f ,0.9119f ,-17.04f ,2.552f ,1.255f ,-14.12f ,3.983f ,1.255f ,-14.12f ,3.983f ,-1.691f ,-14.12f ,3.194f ,2.024f ,-17.04f ,1.136f ,2.991f ,-14.12f ,1.773f ,2.991f ,-14.12f ,1.773f ,1.255f ,-14.12f ,3.983f ,2.024f ,-17.04f ,-1.136f ,2.991f ,-14.12f ,-1.773f ,2.991f ,-14.12f ,-1.773f ,2.991f ,-14.12f ,1.773f ,0.9119f ,-17.04f ,-2.552f ,1.255f ,-14.12f ,-3.983f ,1.255f ,-14.12f ,-3.983f ,2.991f ,-14.12f ,-1.773f ,-0.9751f ,-17.04f ,-2.046f ,-1.691f ,-14.12f ,-3.194f ,-1.691f ,-14.12f ,-3.194f ,1.255f ,-14.12f ,-3.983f ,-1.815f ,-17.04f ,0f ,-3.002f ,-14.12f ,0f ,-3.002f ,-14.12f ,0f ,-1.691f ,-14.12f ,-3.194f ,-0.9751f ,-17.04f ,2.046f ,-1.815f ,-17.04f ,0f ,0.9119f ,-17.04f ,2.552f ,-0.9751f ,-17.04f ,2.046f ,2.024f ,-17.04f ,1.136f ,0.9119f ,-17.04f ,2.552f ,2.024f ,-17.04f ,-1.136f ,2.024f ,-17.04f ,1.136f ,0.9119f ,-17.04f ,-2.552f ,2.024f ,-17.04f ,-1.136f ,-0.9751f ,-17.04f ,-2.046f ,0.9119f ,-17.04f ,-2.552f ,-1.815f ,-17.04f ,0f ,-0.9751f ,-17.04f ,-2.046f ,-3.002f ,-14.12f ,0f ,-1.691f ,-14.12f ,3.194f ,1.255f ,-14.12f ,3.983f ,2.991f ,-14.12f ,1.773f ,2.991f ,-14.12f ,-1.773f ,1.255f ,-14.12f ,-3.983f ,-1.691f ,-14.12f ,-3.194f ,-0.9751f ,-17.04f ,2.046f ,-1.815f ,-17.04f ,0f ,0.9119f ,-17.04f ,2.552f ,2.024f ,-17.04f ,1.136f ,2.024f ,-17.04f ,-1.136f ,0.9119f ,-17.04f ,-2.552f ,-0.9751f ,-17.04f ,-2.046f ,0.3011f ,-18.41f ,0f ,-0.9751f ,-17.04f ,2.046f ,-1.815f ,-17.04f ,0f ,0.9119f ,-17.04f ,2.552f ,2.024f ,-17.04f ,1.136f ,2.024f ,-17.04f ,-1.136f ,0.9119f ,-17.04f ,-2.552f ,-0.9751f ,-17.04f ,-2.046f ,0.3011f ,-18.41f ,0f ,-0.9751f ,-17.04f ,2.046f ,-1.815f ,-17.04f ,0f ,0.9119f ,-17.04f ,2.552f ,2.024f ,-17.04f ,1.136f ,2.024f ,-17.04f ,-1.136f ,0.9119f ,-17.04f ,-2.552f ,-0.9751f ,-17.04f ,-2.046f ,0.3011f ,-18.41f ,0f ,0.3011f ,-18.41f ,0f ,0.3011f ,-18.41f ,0f ,0.3011f ,-18.41f ,0f ,0.3011f ,-18.41f ,0f });
  }
}
private class MFVec2f42 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7014f ,0.3364f ,0.7014f ,0.3621f ,0.7014f ,0.2785f ,0.7014f ,0.2321f ,0.7014f ,0.2321f ,0.7014f ,0.2785f ,0.7014f ,0.3364f ,0.6864f ,0.3861f ,0.6582f ,0.3513f ,0.6582f ,0.3861f ,0.6864f ,0.3513f ,0.6582f ,0.2731f ,0.6864f ,0.2731f ,0.6582f ,0.219f ,0.6864f ,0.219f ,0.6582f ,0.219f ,0.6864f ,0.219f ,0.6582f ,0.2731f ,0.6864f ,0.2731f ,0.6582f ,0.3513f ,0.6864f ,0.3513f ,0.5958f ,0.3513f ,0.5958f ,0.3861f ,0.5958f ,0.2731f ,0.5958f ,0.219f ,0.5958f ,0.219f ,0.5958f ,0.2731f ,0.5958f ,0.3513f ,0.5417f ,0.3589f ,0.5417f ,0.3977f ,0.5417f ,0.2716f ,0.5417f ,0.2202f ,0.5417f ,0.2202f ,0.5417f ,0.2716f ,0.5417f ,0.3589f ,0.6072f ,0.3379f ,0.6072f ,0.3646f ,0.6072f ,0.2779f ,0.6072f ,0.2384f ,0.6072f ,0.2384f ,0.6072f ,0.2779f ,0.6072f ,0.3379f ,0.535f ,0.3368f ,0.535f ,0.3617f ,0.535f ,0.2809f ,0.535f ,0.248f ,0.535f ,0.248f ,0.535f ,0.2809f ,0.535f ,0.3368f ,0.5235f ,0.299f });
  }
}
private class MFFloat43 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat44 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {36,37,38,-1,35,36,38,-1,38,39,40,-1,35,38,40,-1,41,35,40,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,35,0,1,-1,1,36,35,-1,36,1,2,-1,2,37,36,-1,37,2,3,-1,3,38,37,-1,38,3,4,-1,4,39,38,-1,39,4,5,-1,5,40,39,-1,40,5,6,-1,6,41,40,-1,41,6,0,-1,0,35,41,-1});
  }
}
private class MFInt3246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1});
  }
}
private class MFVec3f47 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.59f ,-0.0184f ,0f ,-1.415f ,-0.0184f ,2.862f ,1.224f ,-0.0184f ,3.569f ,3.033f ,-0.0184f ,1.588f ,3.033f ,-0.0184f ,-1.588f ,1.224f ,-0.0184f ,-3.569f ,-1.415f ,-0.0184f ,-2.862f ,-2.59f ,-3.362f ,0f ,-1.415f ,-3.362f ,2.862f ,1.224f ,-3.362f ,3.569f ,3.033f ,-3.362f ,1.588f ,3.033f ,-3.362f ,-1.588f ,1.224f ,-3.362f ,-3.569f ,-1.415f ,-3.362f ,-2.862f ,-2.59f ,-13.66f ,0f ,-1.415f ,-13.66f ,2.862f ,1.224f ,-13.66f ,3.569f ,3.033f ,-13.66f ,1.588f ,3.033f ,-13.66f ,-1.588f ,1.224f ,-13.66f ,-3.569f ,-1.415f ,-13.66f ,-2.862f ,-3.239f ,-19.57f ,0f ,-1.813f ,-19.57f ,3.472f ,1.389f ,-19.57f ,4.33f ,3.239f ,-19.57f ,1.927f ,3.239f ,-19.57f ,-1.927f ,1.389f ,-19.57f ,-4.33f ,-1.813f ,-19.57f ,-3.472f ,-1.863f ,-12.3f ,0f ,-0.9622f ,-12.3f ,2.196f ,1.063f ,-12.3f ,2.738f ,2.378f ,-12.3f ,1.219f ,2.378f ,-12.3f ,-1.219f ,1.063f ,-12.3f ,-2.738f ,-0.9622f ,-12.3f ,-2.196f ,-1.778f ,1.756f ,0f ,-0.9091f ,1.756f ,2.118f ,1.044f ,1.756f ,2.641f ,2.61f ,1.756f ,1.175f ,2.61f ,1.756f ,-1.175f ,1.044f ,1.756f ,-2.641f ,-0.9091f ,1.756f ,-2.118f });
  }
}
private class MFVec2f48 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.5993f ,0.2671f ,0.5993f ,0.2423f ,0.5993f ,0.3227f ,0.5993f ,0.3673f ,0.5993f ,0.3673f ,0.5993f ,0.3227f ,0.5993f ,0.2671f ,0.5849f ,0.2192f ,0.5579f ,0.2527f ,0.5579f ,0.2192f ,0.5849f ,0.2527f ,0.5579f ,0.3279f ,0.5849f ,0.3279f ,0.5579f ,0.3793f ,0.5849f ,0.3793f ,0.5579f ,0.3793f ,0.5849f ,0.3793f ,0.5579f ,0.3279f ,0.5849f ,0.3279f ,0.5579f ,0.2527f ,0.5849f ,0.2527f ,0.4746f ,0.2527f ,0.4746f ,0.2192f ,0.4746f ,0.3279f ,0.4746f ,0.3793f ,0.4746f ,0.3793f ,0.4746f ,0.3279f ,0.4746f ,0.2527f ,0.426f ,0.2592f ,0.4268f ,0.2203f ,0.4268f ,0.3325f ,0.4268f ,0.3852f ,0.4268f ,0.3852f ,0.4268f ,0.3325f ,0.426f ,0.2592f ,0.4856f ,0.2656f ,0.4856f ,0.2399f ,0.4856f ,0.3232f ,0.4856f ,0.3607f ,0.4856f ,0.3607f ,0.4856f ,0.3232f ,0.4856f ,0.2656f });
  }
}
private class MFFloat49 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat50 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,1,4,0,-1,3,2,0,-1,0,5,3,-1,6,8,7,-1,7,9,6,-1,8,11,10,-1,10,7,8,-1,12,6,9,-1,9,20,12,-1,21,13,12,-1,12,20,21,-1,11,15,14,-1,14,10,11,-1,15,17,16,-1,16,14,15,-1,9,7,4,-1,4,1,9,-1,7,10,0,-1,0,4,7,-1,10,14,5,-1,5,0,10,-1,14,16,3,-1,3,5,14,-1,6,19,8,-1,8,19,11,-1,12,19,6,-1,13,19,12,-1,11,19,15,-1,15,19,17,-1,17,19,18,-1,18,19,13,-1,13,21,22,-1,22,18,13,-1,18,22,16,-1,16,17,18,-1,24,23,30,-1,24,30,29,-1,24,29,28,-1,28,27,26,-1,24,28,26,-1,24,26,25,-1,2,23,24,-1,24,1,2,-1,1,24,25,-1,25,9,1,-1,9,25,26,-1,26,20,9,-1,20,26,27,-1,27,21,20,-1,21,27,28,-1,28,22,21,-1,22,28,29,-1,29,16,22,-1,16,29,30,-1,30,3,16,-1,3,30,23,-1,23,2,3,-1});
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,1,4,0,-1,3,2,0,-1,0,5,3,-1,6,8,7,-1,7,9,6,-1,8,11,10,-1,10,7,8,-1,12,6,9,-1,9,20,12,-1,21,13,12,-1,12,20,21,-1,11,15,14,-1,14,10,11,-1,15,17,16,-1,16,14,15,-1,9,7,4,-1,4,1,9,-1,7,10,0,-1,0,4,7,-1,10,14,5,-1,5,0,10,-1,14,16,3,-1,3,5,14,-1,6,19,8,-1,8,19,11,-1,12,19,6,-1,13,19,12,-1,11,19,15,-1,15,19,17,-1,17,19,18,-1,18,19,13,-1,13,21,22,-1,22,18,13,-1,18,22,16,-1,16,17,18,-1,24,23,30,-1,24,30,29,-1,24,29,28,-1,28,27,26,-1,24,28,26,-1,24,26,25,-1,2,23,24,-1,24,1,2,-1,1,24,25,-1,25,9,1,-1,9,25,26,-1,26,20,9,-1,20,26,27,-1,27,21,20,-1,21,27,28,-1,28,22,21,-1,22,28,29,-1,29,16,22,-1,16,29,30,-1,30,3,16,-1,3,30,23,-1,23,2,3,-1});
  }
}
private class MFVec3f53 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.8202f ,-6.687f ,-3.411f ,-2.567f ,-6.814f ,0.3665f ,-0.4068f ,-6.835f ,0.5953f ,2.033f ,-6.8f ,0.7383f ,-2.347f ,-6.742f ,-2.364f ,2.159f ,-6.722f ,-2.362f ,-1.391f ,0.0721f ,-0.2632f ,-2.329f ,-3.518f ,-2.264f ,-1.029f ,0.4254f ,-1.355f ,-2.148f ,-3.639f ,0.4281f ,-0.578f ,-3.439f ,-3.248f ,-0.1667f ,-0.7673f ,-2.634f ,-0.6108f ,-0.1555f ,0.5745f ,1.165f ,-0.0864f ,1.722f ,2.436f ,-3.539f ,-2.293f ,1.3f ,-0.7319f ,-2.864f ,2.025f ,-3.634f ,0.7655f ,2.416f ,-1.184f ,-1.037f ,2.567f ,-0.7486f ,1.337f ,0.5315f ,0.4359f ,-0.5649f ,-1.591f ,-1.917f ,2.128f ,0.6895f ,-0.8855f ,3.411f ,2.449f ,-2.096f ,3.113f ,-0.575f ,-6.557f ,1.961f ,-2.022f ,-6.548f ,1.82f ,-1.675f ,-4.087f ,1.579f ,-1.205f ,-2.631f ,3.158f ,0.5196f ,-1.891f ,4.248f ,1.582f ,-2.617f ,4.058f ,1.245f ,-3.851f ,1.847f ,1.226f ,-6.514f ,2.023f });
  }
}
private class MFVec2f54 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2874f ,0.0046f ,0.2798f ,0.0442f ,0.2785f ,0.0523f ,0.2806f ,0.06f ,0.2841f ,0.0129f ,0.2854f ,0.0243f ,0.6233f ,0.0398f ,0.3712f ,0.0119f ,0.6447f ,0.028f ,0.3638f ,0.0437f ,0.376f ,0.0049f ,0.5724f ,0.0153f ,0.6095f ,0.0515f ,0.6137f ,0.0693f ,0.3699f ,0.0236f ,0.5745f ,0.0163f ,0.3642f ,0.0581f ,0.5471f ,0.0403f ,0.5735f ,0.0684f ,0.6453f ,0.0411f ,0.4855f ,0.066f ,0.5541f ,0.0994f ,0.4746f ,0.0876f ,0.2785f ,0.0523f ,0.2798f ,0.0442f ,0.3638f ,0.0437f ,0.4855f ,0.066f ,0.5541f ,0.0994f ,0.4746f ,0.0876f ,0.3642f ,0.0581f ,0.2806f ,0.06f });
  }
}
private class MFFloat55 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat56 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,18,19,-1,19,1,0,-1,1,19,20,-1,20,2,1,-1,22,25,5,-1,4,5,25,-1,25,24,4,-1,3,21,18,-1,18,0,3,-1,6,8,7,-1,7,9,6,-1,22,5,2,-1,2,20,22,-1,6,9,10,-1,10,11,6,-1,0,1,12,-1,12,13,0,-1,1,2,14,-1,14,12,1,-1,3,16,15,-1,15,4,3,-1,5,4,15,-1,15,17,5,-1,3,0,13,-1,13,16,3,-1,2,5,17,-1,17,14,2,-1,15,16,8,-1,8,6,15,-1,16,13,7,-1,7,8,16,-1,13,12,9,-1,9,7,13,-1,15,6,11,-1,11,17,15,-1,12,14,10,-1,10,9,12,-1,14,17,11,-1,11,10,14,-1,4,24,23,-1,23,3,4,-1,23,21,3,-1,18,26,27,-1,27,19,18,-1,19,27,28,-1,28,20,19,-1,20,28,29,-1,29,22,20,-1,22,29,25,-1,23,30,21,-1,21,30,26,-1,26,18,21,-1,23,24,25,-1,29,30,23,-1,23,25,29,-1,29,28,27,-1,29,27,26,-1,30,29,26,-1});
  }
}
private class MFInt3258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,18,19,-1,19,1,0,-1,1,19,20,-1,20,2,1,-1,22,25,5,-1,4,5,25,-1,25,24,4,-1,3,21,18,-1,18,0,3,-1,6,8,7,-1,7,9,6,-1,22,5,2,-1,2,20,22,-1,6,9,10,-1,10,11,6,-1,0,1,12,-1,12,13,0,-1,1,2,14,-1,14,12,1,-1,3,16,15,-1,15,4,3,-1,5,4,15,-1,15,17,5,-1,3,0,13,-1,13,16,3,-1,2,5,17,-1,17,14,2,-1,15,16,8,-1,8,6,15,-1,16,13,7,-1,7,8,16,-1,13,12,9,-1,9,7,13,-1,15,6,11,-1,11,17,15,-1,12,14,10,-1,10,9,12,-1,14,17,11,-1,11,10,14,-1,4,24,23,-1,23,3,4,-1,23,21,3,-1,18,26,27,-1,27,19,18,-1,19,27,28,-1,28,20,19,-1,20,28,29,-1,29,22,20,-1,22,29,25,-1,23,30,21,-1,21,30,26,-1,26,18,21,-1,23,24,25,-1,29,30,23,-1,23,25,29,-1,29,28,27,-1,29,27,26,-1,30,29,26,-1});
  }
}
private class MFVec3f59 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.803f ,-5.588f ,0.6731f ,-0.2267f ,-5.589f ,2.081f ,2.411f ,-5.604f ,1.896f ,-2.336f ,-2.423f ,0.7256f ,0.4491f ,-0.4293f ,2.144f ,2.566f ,-2.188f ,1.933f ,0.2886f ,-2.342f ,8.508f ,-2.628f ,-5.51f ,5.676f ,-2.567f ,-2.341f ,5.71f ,0.0624f ,-5.51f ,8.465f ,1.743f ,-5.522f ,7.68f ,1.73f ,-2.103f ,7.711f ,0.0387f ,-5.541f ,5.353f ,-2.584f ,-5.536f ,2.735f ,2.525f ,-5.553f ,5.417f ,0.265f ,-1.11f ,5.396f ,-2.299f ,-2.375f ,2.776f ,2.512f ,-2.385f ,5.448f ,-2.332f ,-5.559f ,-2.589f ,-0.1713f ,-5.58f ,-2.36f ,2.269f ,-5.545f ,-2.217f ,-1.912f ,-2.384f ,-2.527f ,2.26f ,-2.379f ,-2.19f ,-1.356f ,-0.6618f ,-0.8278f ,0.925f ,0.3698f ,0.4552f ,2.684f ,-0.8406f ,0.1573f ,-1.828f ,-3.703f ,-4.62f ,-0.0134f ,-3.719f ,-4.434f ,1.422f ,-3.68f ,-4.33f ,1.411f ,-0.7578f ,-4.754f ,-0.2889f ,-0.8748f ,-4.705f });
  }
}
private class MFVec2f60 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.278f ,0.0809f ,0.2779f ,0.1038f ,0.277f ,0.1083f ,0.3615f ,0.0805f ,0.4946f ,0.1295f ,0.3758f ,0.1069f ,0.3664f ,0.1777f ,0.2827f ,0.1396f ,0.3665f ,0.1379f ,0.2827f ,0.1788f ,0.282f ,0.1739f ,0.3809f ,0.172f ,0.2808f ,0.1426f ,0.2811f ,0.1055f ,0.2801f ,0.1495f ,0.4533f ,0.1669f ,0.3644f ,0.1045f ,0.3638f ,0.1477f ,0.2798f ,0.0442f ,0.2785f ,0.0523f ,0.2806f ,0.06f ,0.3638f ,0.0437f ,0.3642f ,0.0581f ,0.4855f ,0.066f ,0.5541f ,0.0994f ,0.4746f ,0.0876f ,0.2798f ,0.0442f ,0.2785f ,0.0523f ,0.2806f ,0.06f ,0.3642f ,0.0581f ,0.3638f ,0.0437f });
  }
}
private class MFFloat61 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat62 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFVec3f65 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,9.77f ,0.127f ,0f ,9.113f ,-2.519f ,-2.036f ,9.113f ,-2.165f ,-3.526f ,9.113f ,-1.737f ,-4.072f ,9.113f ,0.127f ,-3.526f ,9.113f ,1.991f ,-2.036f ,9.113f ,2.419f ,0f ,9.113f ,2.773f ,2.036f ,9.113f ,2.419f ,3.526f ,9.113f ,1.991f ,4.072f ,9.113f ,0.127f ,3.526f ,9.113f ,-1.737f ,2.036f ,9.113f ,-2.165f ,0f ,7.318f ,-4.115f ,-2.633f ,7.318f ,-3.546f ,-4.561f ,7.318f ,-1.994f ,-5.266f ,7.318f ,0.127f ,-4.561f ,7.318f ,2.248f ,-2.633f ,7.318f ,3.25f ,0f ,7.318f ,3.819f ,2.633f ,7.318f ,3.25f ,4.561f ,7.318f ,2.248f ,5.266f ,7.318f ,0.127f ,4.561f ,7.318f ,-1.994f ,2.633f ,7.318f ,-3.546f ,0f ,4.867f ,-4.475f ,-3.04f ,4.867f ,-3.819f ,-5.266f ,4.867f ,-2.026f ,-6.081f ,4.867f ,0.127f ,-5.266f ,4.867f ,2.576f ,-3.04f ,4.867f ,3.819f ,0f ,4.867f ,4.475f ,3.04f ,4.867f ,3.819f ,5.266f ,4.867f ,2.576f ,6.081f ,4.867f ,0.127f ,5.266f ,4.867f ,-2.026f ,3.04f ,4.867f ,-3.819f ,0f ,2.416f ,-3.819f ,-2.633f ,2.416f ,-3.25f ,-4.561f ,2.416f ,-1.698f ,-5.266f ,2.416f ,0.127f ,-4.561f ,2.416f ,2.248f ,-2.633f ,2.416f ,3.25f ,0f ,2.416f ,3.819f ,2.633f ,2.416f ,3.25f ,4.561f ,2.416f ,2.248f ,5.266f ,2.416f ,0.127f ,4.561f ,2.416f ,-1.698f ,2.633f ,2.416f ,-3.25f ,0f ,0.6221f ,-2.026f ,-1.52f ,0.6221f ,-1.698f ,-2.633f ,0.6221f ,-1.097f ,-3.04f ,0.6221f ,0.127f ,-2.633f ,0.6221f ,1.351f ,-1.52f ,0.6221f ,2.248f ,0f ,0.6221f ,2.576f ,1.52f ,0.6221f ,2.248f ,2.633f ,0.6221f ,1.351f ,3.04f ,0.6221f ,0.127f ,2.633f ,0.6221f ,-1.097f ,1.52f ,0.6221f ,-1.698f ,0f ,-0.0347f ,0.127f });
  }
}
private class MFVec2f66 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7418f ,0.2139f ,0.7309f ,0.2139f ,0.7342f ,0.26f ,0.7342f ,0.2938f ,0.7342f ,0.3062f ,0.7342f ,0.2938f ,0.7342f ,0.26f ,0.7309f ,0.2139f ,0.7343f ,0.2601f ,0.7343f ,0.2939f ,0.7343f ,0.3063f ,0.7343f ,0.2939f ,0.7343f ,0.2601f ,0.7157f ,0.2139f ,0.7156f ,0.2735f ,0.7156f ,0.3173f ,0.7156f ,0.3333f ,0.7156f ,0.3173f ,0.7156f ,0.2735f ,0.7157f ,0.2139f ,0.7157f ,0.2736f ,0.7157f ,0.3174f ,0.7157f ,0.3334f ,0.7157f ,0.3174f ,0.7157f ,0.2736f ,0.7015f ,0.2147f ,0.7014f ,0.2836f ,0.7014f ,0.3341f ,0.7014f ,0.3526f ,0.7014f ,0.3341f ,0.7014f ,0.2836f ,0.7015f ,0.2147f ,0.7015f ,0.2837f ,0.7015f ,0.3342f ,0.7015f ,0.3527f ,0.7015f ,0.3342f ,0.7015f ,0.2837f ,0.6609f ,0.2147f ,0.6608f ,0.2744f ,0.6608f ,0.3181f ,0.6608f ,0.3341f ,0.6608f ,0.3181f ,0.6608f ,0.2744f ,0.6609f ,0.2147f ,0.6609f ,0.2745f ,0.6609f ,0.3182f ,0.6609f ,0.3342f ,0.6609f ,0.3182f ,0.6609f ,0.2745f ,0.6312f ,0.2147f ,0.6311f ,0.2491f ,0.6311f ,0.2744f ,0.6311f ,0.2836f ,0.6311f ,0.2744f ,0.6311f ,0.2491f ,0.6312f ,0.2147f ,0.6312f ,0.2492f ,0.6312f ,0.2745f ,0.6312f ,0.2837f ,0.6312f ,0.2745f ,0.6312f ,0.2492f ,0.6204f ,0.2147f });
  }
}
private class MFFloat67 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat68 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,2,1,6,-1,6,7,2,-1,7,6,8,-1,8,9,7,-1,9,8,5,-1,5,4,9,-1,0,11,10,-1,10,1,0,-1,5,13,12,-1,12,3,5,-1,6,1,10,-1,10,14,6,-1,6,14,15,-1,15,8,6,-1,8,15,13,-1,13,5,8,-1,12,17,16,-1,16,11,12,-1,10,11,16,-1,16,18,10,-1,13,19,17,-1,17,12,13,-1,10,18,20,-1,20,14,10,-1,15,14,20,-1,20,21,15,-1,13,15,21,-1,21,19,13,-1,17,23,22,-1,22,16,17,-1,18,16,22,-1,22,24,18,-1,19,25,23,-1,23,17,19,-1,18,24,26,-1,26,20,18,-1,21,20,26,-1,26,27,21,-1,19,21,27,-1,27,25,19,-1,23,29,28,-1,28,22,23,-1,22,28,30,-1,30,24,22,-1,25,31,29,-1,29,23,25,-1,24,30,32,-1,32,26,24,-1,26,32,33,-1,33,27,26,-1,27,33,31,-1,31,25,27,-1,29,35,34,-1,34,28,29,-1,28,34,36,-1,36,30,28,-1,31,37,35,-1,35,29,31,-1,30,36,38,-1,38,32,30,-1,32,38,39,-1,39,33,32,-1,33,39,37,-1,37,31,33,-1,0,2,40,-1,40,41,0,-1,4,3,42,-1,42,43,4,-1,2,7,44,-1,44,40,2,-1,7,9,45,-1,45,44,7,-1,9,4,43,-1,43,45,9,-1,3,12,46,-1,46,42,3,-1,12,11,47,-1,47,46,12,-1,41,40,48,-1,43,42,48,-1,40,44,48,-1,44,45,48,-1,45,43,48,-1,42,46,48,-1,46,47,48,-1,34,35,49,-1,36,34,49,-1,35,37,49,-1,38,36,49,-1,39,38,49,-1,37,39,49,-1});
  }
}
private class MFInt3270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,2,1,6,-1,6,7,2,-1,7,6,8,-1,8,9,7,-1,9,8,5,-1,5,4,9,-1,0,11,10,-1,10,1,0,-1,5,13,12,-1,12,3,5,-1,6,1,10,-1,10,14,6,-1,6,14,15,-1,15,8,6,-1,8,15,13,-1,13,5,8,-1,50,51,16,-1,16,11,50,-1,10,11,16,-1,16,18,10,-1,13,19,17,-1,17,12,13,-1,10,18,20,-1,20,14,10,-1,15,14,20,-1,20,21,15,-1,13,15,21,-1,21,19,13,-1,52,53,22,-1,22,16,52,-1,18,16,22,-1,22,24,18,-1,19,25,23,-1,23,17,19,-1,18,24,26,-1,26,20,18,-1,21,20,26,-1,26,27,21,-1,19,21,27,-1,27,25,19,-1,54,55,28,-1,28,22,54,-1,22,28,30,-1,30,24,22,-1,25,31,29,-1,29,23,25,-1,24,30,32,-1,32,26,24,-1,26,32,33,-1,33,27,26,-1,27,33,31,-1,31,25,27,-1,56,57,34,-1,34,28,56,-1,28,34,36,-1,36,30,28,-1,31,37,35,-1,35,29,31,-1,30,36,38,-1,38,32,30,-1,32,38,39,-1,39,33,32,-1,33,39,37,-1,37,31,33,-1,0,2,40,-1,40,41,0,-1,4,3,42,-1,42,43,4,-1,2,7,44,-1,44,40,2,-1,7,9,45,-1,45,69,7,-1,9,4,43,-1,43,45,9,-1,3,12,46,-1,46,42,3,-1,59,11,47,-1,47,58,59,-1,41,40,48,-1,60,61,48,-1,40,44,48,-1,44,62,48,-1,63,64,48,-1,65,66,48,-1,67,47,48,-1,34,68,49,-1,36,34,49,-1,35,37,49,-1,38,36,49,-1,39,38,49,-1,37,39,49,-1});
  }
}
private class MFVec3f71 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1.805f ,-1.524f ,1.771f ,0.0584f ,-1.838f ,2.197f ,-0.3087f ,-0.8066f ,2.836f ,-1.788f ,-1.533f ,-1.801f ,-0.3087f ,-0.8066f ,-2.836f ,0.0584f ,-1.838f ,-2.819f ,2.954f ,-0.699f ,1.997f ,2.155f ,1.069f ,1.997f ,2.953f ,-0.699f ,-1.703f ,2.11f ,1.038f ,-1.703f ,0.4985f ,-2.844f ,2.197f ,-1.762f ,-2.191f ,0.9288f ,-1.762f ,-2.191f ,-0.8936f ,0.4985f ,-2.844f ,-2.659f ,3.097f ,-2.644f ,1.051f ,3.097f ,-2.644f ,-0.8368f ,-1.384f ,-5.116f ,0.973f ,-1.384f ,-5.116f ,-0.9359f ,0.5185f ,-5.524f ,1.801f ,0.5185f ,-5.524f ,-2.058f ,2.604f ,-5.03f ,0.9889f ,2.604f ,-5.03f ,-0.7969f ,-1.181f ,-8.251f ,0.8308f ,-1.181f ,-8.251f ,-0.9379f ,0.4076f ,-9.293f ,1.225f ,0.4076f ,-9.293f ,-1.965f ,2.159f ,-8.822f ,0.2392f ,2.159f ,-8.822f ,-0.9061f ,-1.254f ,-9.178f ,0.3009f ,-1.254f ,-9.178f ,-1.07f ,0.3261f ,-10.22f ,1.219f ,0.3253f ,-10.22f ,-2.074f ,2.012f ,-9.757f ,0.2392f ,2.012f ,-9.757f ,-0.9059f ,-1.568f ,-10.77f ,0.2995f ,-1.568f ,-10.77f ,-1.067f ,0.1923f ,-11.8f ,1.212f ,0.1925f ,-11.8f ,-1.826f ,1.877f ,-11.33f ,0.2366f ,1.877f ,-11.33f ,-0.9017f ,-0.743f ,-0.1609f ,2.331f ,-1.942f ,-0.7259f ,1.447f ,-1.928f ,-0.7331f ,-1.522f ,-0.743f ,-0.1609f ,-2.382f ,0.9954f ,2.188f ,1.635f ,0.958f ,2.162f ,-1.44f ,-1.686f ,-1.124f ,-0.768f ,-1.686f ,-1.124f ,0.7466f ,-1.597f ,0.8227f ,0.0058f ,0.1065f ,-12.53f ,-0.3412f });
  }
}
private class MFVec2f72 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8175f ,0.3603f ,0.8632f ,0.3546f ,0.8605f ,0.3699f ,0.9777f ,0.3334f ,0.969f ,0.3634f ,0.9603f ,0.3336f ,0.8992f ,0.3596f ,0.8908f ,0.3854f ,0.9343f ,0.3596f ,0.9435f ,0.3848f ,0.8525f ,0.3149f ,0.8059f ,0.3198f ,0.9839f ,0.323f ,0.9553f ,0.3189f ,0.9082f ,0.3292f ,0.9254f ,0.3292f ,0.8055f ,0.2725f ,0.9792f ,0.2777f ,0.8587f ,0.2725f ,0.9499f ,0.2765f ,0.9085f ,0.29f ,0.9252f ,0.29f ,0.8162f ,0.2273f ,0.9712f ,0.2286f ,0.8696f ,0.2158f ,0.944f ,0.2164f ,0.9155f ,0.2287f ,0.9256f ,0.2287f ,0.8189f ,0.2013f ,0.9684f ,0.2137f ,0.8705f ,0.2008f ,0.9438f ,0.2015f ,0.9155f ,0.2135f ,0.9255f ,0.2135f ,0.8216f ,0.181f ,0.969f ,0.1876f ,0.872f ,0.1755f ,0.9412f ,0.1762f ,0.9157f ,0.1882f ,0.9252f ,0.1882f ,0.8292f ,0.3842f ,0.8182f ,0.3733f ,0.9806f ,0.3457f ,0.9745f ,0.3724f ,0.838f ,0.4052f ,0.9619f ,0.3995f ,0.9854f ,0.3401f ,0.8086f ,0.3454f ,0.8127f ,0.3778f ,0.9241f ,0.1643f ,0.7988f ,0.3204f ,0.7988f ,0.2717f ,0.7988f ,0.2717f ,0.8096f ,0.2286f ,0.8096f ,0.2286f ,0.8053f ,0.2016f ,0.8053f ,0.2016f ,0.8125f ,0.1748f ,0.8055f ,0.3493f ,0.7988f ,0.3204f ,0.8071f ,0.3803f ,0.8007f ,0.3548f ,0.8121f ,0.3995f ,0.8121f ,0.3995f ,0.8071f ,0.3803f ,0.8007f ,0.3548f ,0.8055f ,0.3493f ,0.8055f ,0.3493f ,0.8125f ,0.1748f ,0.9181f ,0.4f });
  }
}
private class MFFloat73 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat74 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,1,-1,1,2,0,-1,2,1,4,-1,4,5,2,-1,6,7,3,-1,3,0,6,-1,5,4,8,-1,8,9,5,-1,9,8,10,-1,10,11,9,-1,11,10,7,-1,7,6,11,-1,3,13,12,-1,12,1,3,-1,4,1,12,-1,12,14,4,-1,13,3,7,-1,7,15,13,-1,4,14,16,-1,16,8,4,-1,8,16,17,-1,17,10,8,-1,7,10,17,-1,17,15,7,-1,13,19,18,-1,18,12,13,-1,12,18,20,-1,20,14,12,-1,13,15,21,-1,21,19,13,-1,16,14,20,-1,20,22,16,-1,16,22,23,-1,23,17,16,-1,17,23,21,-1,21,15,17,-1,24,25,19,-1,19,21,24,-1,26,20,18,-1,18,27,26,-1,25,27,18,-1,18,19,25,-1,24,21,23,-1,23,28,24,-1,28,23,22,-1,22,29,28,-1,26,29,22,-1,22,20,26,-1,0,2,30,-1,30,31,0,-1,2,5,32,-1,32,30,2,-1,6,0,31,-1,31,33,6,-1,5,9,34,-1,34,32,5,-1,9,11,35,-1,35,34,9,-1,11,6,33,-1,33,35,11,-1,31,30,36,-1,30,32,36,-1,33,31,36,-1,32,34,36,-1,34,35,36,-1,35,33,36,-1,25,24,37,-1,26,27,37,-1,27,25,37,-1,24,28,37,-1,28,29,37,-1,29,26,37,-1});
  }
}
private class MFInt3276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,1,-1,1,2,0,-1,2,1,4,-1,4,5,2,-1,6,7,3,-1,3,0,6,-1,5,4,8,-1,8,9,5,-1,38,39,10,-1,10,11,38,-1,11,10,7,-1,7,6,11,-1,3,13,12,-1,12,1,3,-1,4,1,12,-1,12,14,4,-1,13,3,7,-1,7,15,13,-1,4,14,16,-1,16,8,4,-1,40,41,17,-1,17,10,40,-1,7,10,17,-1,17,15,7,-1,13,19,18,-1,18,12,13,-1,12,18,20,-1,20,14,12,-1,13,15,21,-1,21,19,13,-1,16,14,20,-1,20,22,16,-1,42,43,23,-1,23,17,42,-1,17,23,21,-1,21,15,17,-1,24,25,19,-1,19,21,24,-1,26,20,18,-1,18,27,26,-1,25,27,18,-1,18,19,25,-1,24,21,23,-1,23,28,24,-1,28,23,44,-1,44,45,28,-1,26,29,22,-1,22,20,26,-1,0,2,30,-1,30,31,0,-1,2,5,32,-1,32,30,2,-1,6,0,31,-1,31,33,6,-1,5,9,34,-1,34,32,5,-1,47,11,35,-1,35,46,47,-1,11,6,33,-1,33,35,11,-1,31,30,48,-1,30,32,36,-1,33,31,49,-1,32,34,36,-1,50,35,51,-1,35,33,52,-1,25,24,37,-1,26,27,37,-1,27,25,37,-1,24,28,37,-1,28,53,37,-1,29,26,37,-1});
  }
}
private class MFVec3f77 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1.607f ,-0.3011f ,-0.7068f ,-1.816f ,-1.259f ,0.7158f ,-1.607f ,-0.3011f ,0.7173f ,-1.816f ,-1.259f ,-0.7039f ,0.0748f ,-2.207f ,1.664f ,0.0977f ,-1.281f ,1.671f ,0.0968f ,-1.282f ,-1.749f ,0.075f ,-2.207f ,-1.492f ,1.791f ,-1.616f ,0.6505f ,1.816f ,-0.6919f ,0.6532f ,1.791f ,-1.616f ,-0.5319f ,1.816f ,-0.6919f ,-0.5362f ,-1.323f ,-4.528f ,1.438f ,-1.323f ,-4.528f ,-0.6341f ,0.0101f ,-4.917f ,1.749f ,0.01f ,-4.917f ,-1.419f ,1.599f ,-4.353f ,0.9644f ,1.599f ,-4.353f ,-0.4902f ,-1.275f ,-7.552f ,0.9117f ,-1.275f ,-7.552f ,-0.5772f ,0.0603f ,-7.691f ,1.6f ,0.0602f ,-7.691f ,-1.319f ,1.34f ,-7.172f ,0.8445f ,1.34f ,-7.172f ,-0.3992f ,0.0847f ,-10.99f ,-0.7836f ,-0.679f ,-10.66f ,-0.3055f ,0.092f ,-10.99f ,1.088f ,-0.6772f ,-10.65f ,0.6521f ,0.6479f ,-10.85f ,-0.4597f ,0.652f ,-10.87f ,0.7241f ,-0.8326f ,0.9823f ,0.4058f ,-0.8326f ,0.9823f ,-0.3926f ,0.1232f ,0.4326f ,0.9405f ,0.1227f ,0.4326f ,-0.977f ,1.087f ,0.7632f ,0.3698f ,1.087f ,0.7632f ,-0.297f ,0.1182f ,1.187f ,0.0082f ,-0.0134f ,-11.39f ,0.1526f });
  }
}
private class MFVec2f78 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9014f ,0.1592f ,0.9207f ,0.1477f ,0.9221f ,0.1592f ,0.9028f ,0.1477f ,0.9498f ,0.1348f ,0.951f ,0.146f ,0.8725f ,0.146f ,0.8736f ,0.1348f ,0.9793f ,0.1407f ,0.9796f ,0.1519f ,0.8426f ,0.1407f ,0.8423f ,0.1519f ,0.9299f ,0.1077f ,0.9022f ,0.1077f ,0.9466f ,0.102f ,0.8775f ,0.102f ,0.9732f ,0.1077f ,0.8437f ,0.1077f ,0.9238f ,0.071f ,0.9036f ,0.071f ,0.9446f ,0.0684f ,0.8798f ,0.0684f ,0.9704f ,0.0737f ,0.845f ,0.0737f ,0.8879f ,0.0318f ,0.9059f ,0.0364f ,0.939f ,0.0318f ,0.9232f ,0.0366f ,0.8712f ,0.0331f ,0.9514f ,0.0329f ,0.9243f ,0.1741f ,0.8994f ,0.1741f ,0.9551f ,0.1668f ,0.8685f ,0.1668f ,0.9806f ,0.1701f ,0.8414f ,0.1701f ,0.9871f ,0.1759f ,0.9173f ,0.0271f ,0.8271f ,0.1519f ,0.8268f ,0.1407f ,0.8268f ,0.1407f ,0.8207f ,0.1077f ,0.8207f ,0.1077f ,0.8264f ,0.0737f ,0.8264f ,0.0737f ,0.8397f ,0.0329f ,0.8281f ,0.1701f ,0.8271f ,0.1519f ,0.8346f ,0.1759f ,0.8346f ,0.1759f ,0.8281f ,0.1701f ,0.8346f ,0.1759f ,0.8346f ,0.1759f ,0.8397f ,0.0329f });
  }
}
private class MFFloat79 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat80 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,1,-1,1,2,0,-1,4,7,5,-1,5,6,4,-1,10,11,8,-1,8,9,10,-1,14,15,12,-1,12,13,14,-1,11,14,13,-1,13,8,11,-1,17,10,9,-1,9,16,17,-1,19,17,16,-1,16,18,19,-1,15,19,18,-1,18,12,15,-1,20,21,11,-1,11,10,20,-1,24,25,22,-1,22,23,24,-1,21,26,14,-1,14,11,21,-1,27,20,10,-1,10,17,27,-1,28,27,17,-1,17,19,28,-1,29,28,19,-1,19,15,29,-1,2,1,21,-1,21,20,2,-1,3,0,29,-1,29,26,3,-1,1,3,26,-1,26,21,1,-1,30,2,20,-1,20,27,30,-1,31,30,27,-1,27,28,31,-1,0,31,28,-1,28,29,0,-1,32,33,0,-1,0,2,32,-1,34,32,2,-1,2,30,34,-1,35,34,30,-1,30,31,35,-1,33,35,31,-1,31,0,33,-1,36,37,32,-1,32,34,36,-1,38,36,34,-1,34,35,38,-1,39,38,35,-1,35,33,39,-1,37,39,33,-1,33,32,37,-1,6,5,37,-1,37,36,6,-1,4,6,36,-1,36,38,4,-1,7,4,38,-1,38,39,7,-1,5,7,39,-1,39,37,5,-1,23,22,15,-1,15,14,23,-1,24,23,14,-1,14,26,24,-1,42,43,40,-1,40,41,42,-1,22,25,29,-1,29,15,22,-1,44,45,25,-1,25,24,44,-1,46,47,26,-1,26,29,46,-1,47,44,24,-1,24,26,47,-1,45,46,29,-1,29,25,45,-1,41,40,47,-1,47,46,41,-1,42,41,46,-1,46,45,42,-1,43,42,45,-1,45,44,43,-1,40,43,44,-1,44,47,40,-1,9,8,48,-1,13,12,48,-1,8,13,48,-1,16,9,48,-1,18,16,48,-1,12,18,48,-1});
  }
}
private class MFInt3282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {47,50,48,-1,48,49,47,-1,8,11,9,-1,9,10,8,-1,53,54,51,-1,51,52,53,-1,57,58,55,-1,55,56,57,-1,54,57,56,-1,56,51,54,-1,14,15,12,-1,12,13,14,-1,17,14,13,-1,13,16,17,-1,19,17,16,-1,16,18,19,-1,59,60,54,-1,54,53,59,-1,63,64,61,-1,61,62,63,-1,60,65,57,-1,57,54,60,-1,20,21,15,-1,15,14,20,-1,22,20,14,-1,14,17,22,-1,23,22,17,-1,17,19,23,-1,49,48,60,-1,60,59,49,-1,50,47,66,-1,66,65,50,-1,48,50,65,-1,65,60,48,-1,24,25,21,-1,21,20,24,-1,26,24,20,-1,20,22,26,-1,27,26,22,-1,22,23,27,-1,67,68,47,-1,47,49,67,-1,28,29,25,-1,25,24,28,-1,30,28,24,-1,24,26,30,-1,31,30,26,-1,26,27,31,-1,32,33,29,-1,29,28,32,-1,34,32,28,-1,28,30,34,-1,35,34,30,-1,30,31,35,-1,69,70,68,-1,68,67,69,-1,10,9,33,-1,33,32,10,-1,8,10,32,-1,32,34,8,-1,11,8,34,-1,34,35,11,-1,71,72,70,-1,70,69,71,-1,62,61,58,-1,58,57,62,-1,63,62,57,-1,57,65,63,-1,38,39,36,-1,36,37,38,-1,40,41,23,-1,23,19,40,-1,73,74,64,-1,64,63,73,-1,43,44,42,-1,42,23,43,-1,75,73,63,-1,63,65,75,-1,45,43,23,-1,23,41,45,-1,37,36,44,-1,44,43,37,-1,38,37,43,-1,43,45,38,-1,76,77,74,-1,74,73,76,-1,78,76,73,-1,73,75,78,-1,1,0,5,-1,3,2,6,-1,0,4,7,-1,13,12,46,-1,16,13,46,-1,18,16,46,-1});
  }
}
private class MFVec3f83 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.428f ,-4.043f ,1.035f ,-0.062f ,-2.76f ,-0.7256f ,0.4283f ,-4.043f ,-1.325f ,-0.0621f ,-2.759f ,0.4786f ,0.5207f ,-5.808f ,0.5759f ,-0.0026f ,-5.67f ,-1.325f ,0.5207f ,-5.808f ,-0.9061f ,-0.0026f ,-5.67f ,1.035f ,-0.311f ,0.5832f ,-0.6014f ,0.4947f ,0.3747f ,-1.08f ,0.3587f ,-0.8063f ,-1.077f ,-0.3511f ,-0.5647f ,-0.6024f ,0.502f ,0.3752f ,0.7923f ,-0.3112f ,0.5961f ,0.3561f ,-0.3512f ,-0.5647f ,0.3516f ,0.5145f ,-0.7545f ,0.7924f ,1.03f ,0.5998f ,-0.7556f ,1.03f ,-0.5583f ,-0.7457f ,1.037f ,0.5778f ,0.4281f ,1.031f ,-0.5582f ,0.4287f ,0.3854f ,-2.321f ,-1.587f ,-0.3249f ,-2.079f ,-0.8558f ,0.2488f ,-1.494f ,1.332f ,-0.4651f ,-1.238f ,0.8921f ,-0.7055f ,-1.95f ,1.153f ,-0.2884f ,-2.29f ,1.587f ,-0.324f ,-2.079f ,0.6132f ,1.057f ,-2.073f ,-1.077f ,1.049f ,-2.091f ,0.6923f ,0.3858f ,-2.321f ,1.292f ,0.9501f ,-4.181f ,-0.9063f ,0.9499f ,-4.181f ,0.5762f ,0.2552f ,-4.694f ,-1.325f ,0.2552f ,-4.694f ,1.035f ,0.7786f ,-4.832f ,-0.9061f ,0.7786f ,-4.832f ,0.5759f ,0.6497f ,-5.32f ,-0.9061f ,0.1263f ,-5.182f ,-1.325f ,0.6497f ,-5.32f ,0.5759f ,0.1263f ,-5.182f ,1.035f ,-0.6755f ,-3.115f ,0.6119f ,-0.214f ,-3.44f ,1.081f ,-0.6399f ,-3.326f ,1.586f ,-1.057f ,-2.987f ,1.151f ,-0.8814f ,-2.469f ,1.15f ,-0.4641f ,-2.808f ,1.587f ,-0.0383f ,-2.922f ,1.082f ,-0.4998f ,-2.597f ,0.6126f ,0.4437f ,0.8321f ,-0.1433f });
  }
}
private class MFVec2f84 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1427f ,0.2125f ,0.1222f ,0.2114f ,0.072f ,0.2114f ,0.0487f ,0.2146f ,0.1648f ,0.2146f ,0.1427f ,0.2125f ,0.072f ,0.2114f ,0.1648f ,0.2146f ,0.1856f ,0.1891f ,0.2639f ,0.1883f ,0.2484f ,0.188f ,0.1701f ,0.1891f ,0.2529f ,0.0205f ,0.2367f ,0.0146f ,0.2411f ,0.0322f ,0.2577f ,0.0389f ,0.1901f ,0.0132f ,0.1856f ,0.0283f ,0.1719f ,0.0186f ,0.1675f ,0.0336f ,0.2484f ,0.0869f ,0.2649f ,0.0843f ,0.1864f ,0.0924f ,0.1708f ,0.0905f ,0.2488f ,0.1471f ,0.2643f ,0.1474f ,0.186f ,0.1482f ,0.1705f ,0.1482f ,0.2484f ,0.1644f ,0.2639f ,0.1647f ,0.1856f ,0.1655f ,0.1701f ,0.1655f ,0.2484f ,0.1762f ,0.2639f ,0.1765f ,0.1856f ,0.1773f ,0.1701f ,0.1773f ,0.1633f ,0.1308f ,0.1534f ,0.1396f ,0.1426f ,0.1381f ,0.1476f ,0.1297f ,0.1475f ,0.0465f ,0.1445f ,0.0998f ,0.1671f ,0.1111f ,0.1534f ,0.127f ,0.1633f ,0.1182f ,0.1426f ,0.1255f ,0.2062f ,0.0097f ,0.1009f ,0.1405f ,0.0196f ,0.0979f ,0.0057f ,0.141f ,0.0959f ,0.0953f ,0.0453f ,0.0029f ,0.0235f ,0.0102f ,0.0236f ,0.0455f ,0.0452f ,0.0373f ,0.1089f ,0.0102f ,0.089f ,0.0039f ,0.0888f ,0.0373f ,0.1089f ,0.0441f ,0.005f ,0.081f ,0.0337f ,0.0828f ,0.1222f ,0.069f ,0.1135f ,0.0574f ,0.1162f ,0.0936f ,0.1239f ,0.0947f ,0.102f ,0.0746f ,0.1039f ,0.0949f ,0.0057f ,0.1603f ,0.1009f ,0.1598f ,0.0057f ,0.1748f ,0.1009f ,0.1743f ,0.0057f ,0.1892f ,0.1009f ,0.1888f ,0.1179f ,0.119f ,0.1252f ,0.1262f ,0.1098f ,0.1164f ,0.1179f ,0.1343f ,0.1252f ,0.1415f ,0.1098f ,0.1317f });
  }
}
private class MFFloat85 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat86 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,2,7,6,-1,6,1,2,-1,7,9,8,-1,8,6,7,-1,9,4,5,-1,5,8,9,-1,0,1,10,-1,10,11,0,-1,5,3,12,-1,12,13,5,-1,6,14,10,-1,10,1,6,-1,6,8,15,-1,15,14,6,-1,8,5,13,-1,13,15,8,-1,12,11,16,-1,16,17,12,-1,10,18,16,-1,16,11,10,-1,13,12,17,-1,17,19,13,-1,10,14,20,-1,20,18,10,-1,15,21,20,-1,20,14,15,-1,13,19,21,-1,21,15,13,-1,17,16,22,-1,22,23,17,-1,18,24,22,-1,22,16,18,-1,19,17,23,-1,23,25,19,-1,18,20,26,-1,26,24,18,-1,21,27,26,-1,26,20,21,-1,19,25,27,-1,27,21,19,-1,23,22,28,-1,28,29,23,-1,22,24,30,-1,30,28,22,-1,25,23,29,-1,29,31,25,-1,24,26,32,-1,32,30,24,-1,26,27,33,-1,33,32,26,-1,27,25,31,-1,31,33,27,-1,29,28,34,-1,34,35,29,-1,28,30,36,-1,36,34,28,-1,31,29,35,-1,35,37,31,-1,30,32,38,-1,38,36,30,-1,32,33,39,-1,39,38,32,-1,33,31,37,-1,37,39,33,-1,0,41,40,-1,40,2,0,-1,4,43,42,-1,42,3,4,-1,2,40,44,-1,44,7,2,-1,7,44,45,-1,45,9,7,-1,9,45,43,-1,43,4,9,-1,3,42,46,-1,46,12,3,-1,12,46,47,-1,47,11,12,-1,41,48,40,-1,43,48,42,-1,40,48,44,-1,44,48,45,-1,45,48,43,-1,42,48,46,-1,46,48,47,-1,34,49,35,-1,36,49,34,-1,35,49,37,-1,38,49,36,-1,39,49,38,-1,37,49,39,-1});
  }
}
private class MFInt3288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,2,7,6,-1,6,1,2,-1,7,9,8,-1,8,6,7,-1,9,4,5,-1,5,8,9,-1,0,1,10,-1,10,11,0,-1,5,3,12,-1,12,13,5,-1,6,14,10,-1,10,1,6,-1,6,8,15,-1,15,14,6,-1,8,5,13,-1,13,15,8,-1,50,11,16,-1,16,51,50,-1,10,18,16,-1,16,11,10,-1,13,12,17,-1,17,19,13,-1,10,14,20,-1,20,18,10,-1,15,21,20,-1,20,14,15,-1,13,19,21,-1,21,15,13,-1,52,16,22,-1,22,53,52,-1,18,24,22,-1,22,16,18,-1,19,17,23,-1,23,25,19,-1,18,20,26,-1,26,24,18,-1,21,27,26,-1,26,20,21,-1,19,25,27,-1,27,21,19,-1,54,22,28,-1,28,55,54,-1,22,24,30,-1,30,28,22,-1,25,23,29,-1,29,31,25,-1,24,26,32,-1,32,30,24,-1,26,27,33,-1,33,32,26,-1,27,25,31,-1,31,33,27,-1,56,28,34,-1,34,57,56,-1,28,30,36,-1,36,34,28,-1,31,29,35,-1,35,37,31,-1,30,32,38,-1,38,36,30,-1,32,33,39,-1,39,38,32,-1,33,31,37,-1,37,39,33,-1,0,41,40,-1,40,2,0,-1,4,43,42,-1,42,3,4,-1,2,40,44,-1,44,7,2,-1,7,69,45,-1,45,9,7,-1,9,45,43,-1,43,4,9,-1,3,42,46,-1,46,12,3,-1,59,58,47,-1,47,11,59,-1,41,48,40,-1,60,48,61,-1,40,48,44,-1,44,48,62,-1,63,48,64,-1,65,48,66,-1,67,48,47,-1,34,49,68,-1,36,49,34,-1,35,49,37,-1,38,49,36,-1,39,49,38,-1,37,49,39,-1});
  }
}
private class MFVec3f89 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.805f ,-1.524f ,1.771f ,-0.0582f ,-1.838f ,2.197f ,0.3089f ,-0.8066f ,2.836f ,1.788f ,-1.533f ,-1.801f ,0.3089f ,-0.8066f ,-2.836f ,-0.0582f ,-1.838f ,-2.819f ,-2.953f ,-0.699f ,1.997f ,-2.154f ,1.069f ,1.997f ,-2.953f ,-0.699f ,-1.703f ,-2.109f ,1.038f ,-1.703f ,-0.4983f ,-2.844f ,2.197f ,1.762f ,-2.191f ,0.9288f ,1.762f ,-2.191f ,-0.8936f ,-0.4983f ,-2.844f ,-2.659f ,-3.097f ,-2.644f ,1.051f ,-3.097f ,-2.644f ,-0.8368f ,1.384f ,-5.116f ,0.973f ,1.384f ,-5.116f ,-0.9359f ,-0.5183f ,-5.524f ,1.801f ,-0.5183f ,-5.524f ,-2.058f ,-2.604f ,-5.03f ,0.9889f ,-2.604f ,-5.03f ,-0.7969f ,1.181f ,-8.251f ,0.8308f ,1.181f ,-8.251f ,-0.9379f ,-0.4074f ,-9.293f ,1.225f ,-0.4074f ,-9.293f ,-1.965f ,-2.158f ,-8.822f ,0.2392f ,-2.158f ,-8.822f ,-0.9061f ,1.254f ,-9.178f ,0.3009f ,1.254f ,-9.178f ,-1.07f ,-0.3259f ,-10.22f ,1.219f ,-0.3251f ,-10.22f ,-2.074f ,-2.012f ,-9.757f ,0.2392f ,-2.012f ,-9.757f ,-0.9059f ,1.568f ,-10.77f ,0.2995f ,1.568f ,-10.77f ,-1.067f ,-0.1921f ,-11.8f ,1.212f ,-0.1923f ,-11.8f ,-1.826f ,-1.877f ,-11.33f ,0.2366f ,-1.876f ,-11.33f ,-0.9017f ,0.7432f ,-0.1609f ,2.331f ,1.942f ,-0.7259f ,1.447f ,1.928f ,-0.7331f ,-1.522f ,0.7432f ,-0.1609f ,-2.382f ,-0.9952f ,2.188f ,1.635f ,-0.9578f ,2.162f ,-1.44f ,1.686f ,-1.124f ,-0.768f ,1.686f ,-1.124f ,0.7466f ,1.597f ,0.8227f ,0.0058f ,-0.1063f ,-12.53f ,-0.3412f });
  }
}
private class MFVec2f90 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8175f ,0.3603f ,0.8632f ,0.3546f ,0.8605f ,0.3699f ,0.9777f ,0.3334f ,0.969f ,0.3634f ,0.9603f ,0.3336f ,0.8992f ,0.3596f ,0.8908f ,0.3854f ,0.9343f ,0.3596f ,0.9435f ,0.3848f ,0.8525f ,0.3149f ,0.8059f ,0.3198f ,0.9839f ,0.323f ,0.9553f ,0.3189f ,0.9082f ,0.3292f ,0.9254f ,0.3292f ,0.8055f ,0.2725f ,0.9792f ,0.2777f ,0.8587f ,0.2725f ,0.9499f ,0.2765f ,0.9085f ,0.29f ,0.9252f ,0.29f ,0.8162f ,0.2273f ,0.9712f ,0.2286f ,0.8696f ,0.2158f ,0.944f ,0.2164f ,0.9155f ,0.2287f ,0.9256f ,0.2287f ,0.8189f ,0.2013f ,0.9684f ,0.2137f ,0.8705f ,0.2008f ,0.9438f ,0.2015f ,0.9155f ,0.2135f ,0.9255f ,0.2135f ,0.8216f ,0.181f ,0.969f ,0.1876f ,0.872f ,0.1755f ,0.9412f ,0.1762f ,0.9157f ,0.1882f ,0.9252f ,0.1882f ,0.8292f ,0.3842f ,0.8182f ,0.3733f ,0.9806f ,0.3457f ,0.9745f ,0.3724f ,0.838f ,0.4052f ,0.9619f ,0.3995f ,0.9854f ,0.3401f ,0.8086f ,0.3454f ,0.8127f ,0.3778f ,0.9241f ,0.1643f ,0.7988f ,0.3204f ,0.7988f ,0.2717f ,0.7988f ,0.2717f ,0.8096f ,0.2286f ,0.8096f ,0.2286f ,0.8053f ,0.2016f ,0.8053f ,0.2016f ,0.8125f ,0.1748f ,0.8055f ,0.3493f ,0.7988f ,0.3204f ,0.8071f ,0.3803f ,0.8007f ,0.3548f ,0.8121f ,0.3995f ,0.8121f ,0.3995f ,0.8071f ,0.3803f ,0.8007f ,0.3548f ,0.8055f ,0.3493f ,0.8055f ,0.3493f ,0.8125f ,0.1748f ,0.9181f ,0.4f });
  }
}
private class MFFloat91 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat92 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,1,3,0,-1,2,5,4,-1,4,1,2,-1,6,0,3,-1,3,7,6,-1,5,9,8,-1,8,4,5,-1,9,11,10,-1,10,8,9,-1,11,6,7,-1,7,10,11,-1,3,1,12,-1,12,13,3,-1,4,14,12,-1,12,1,4,-1,13,15,7,-1,7,3,13,-1,4,8,16,-1,16,14,4,-1,8,10,17,-1,17,16,8,-1,7,15,17,-1,17,10,7,-1,13,12,18,-1,18,19,13,-1,12,14,20,-1,20,18,12,-1,13,19,21,-1,21,15,13,-1,16,22,20,-1,20,14,16,-1,16,17,23,-1,23,22,16,-1,17,15,21,-1,21,23,17,-1,24,21,19,-1,19,25,24,-1,26,27,18,-1,18,20,26,-1,25,19,18,-1,18,27,25,-1,24,28,23,-1,23,21,24,-1,28,29,22,-1,22,23,28,-1,26,20,22,-1,22,29,26,-1,0,31,30,-1,30,2,0,-1,2,30,32,-1,32,5,2,-1,6,33,31,-1,31,0,6,-1,5,32,34,-1,34,9,5,-1,9,34,35,-1,35,11,9,-1,11,35,33,-1,33,6,11,-1,31,36,30,-1,30,36,32,-1,33,36,31,-1,32,36,34,-1,34,36,35,-1,35,36,33,-1,25,37,24,-1,26,37,27,-1,27,37,25,-1,24,37,28,-1,28,37,29,-1,29,37,26,-1});
  }
}
private class MFInt3294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,1,3,0,-1,2,5,4,-1,4,1,2,-1,6,0,3,-1,3,7,6,-1,5,9,8,-1,8,4,5,-1,38,11,10,-1,10,39,38,-1,11,6,7,-1,7,10,11,-1,3,1,12,-1,12,13,3,-1,4,14,12,-1,12,1,4,-1,13,15,7,-1,7,3,13,-1,4,8,16,-1,16,14,4,-1,40,10,17,-1,17,41,40,-1,7,15,17,-1,17,10,7,-1,13,12,18,-1,18,19,13,-1,12,14,20,-1,20,18,12,-1,13,19,21,-1,21,15,13,-1,16,22,20,-1,20,14,16,-1,42,17,23,-1,23,43,42,-1,17,15,21,-1,21,23,17,-1,24,21,19,-1,19,25,24,-1,26,27,18,-1,18,20,26,-1,25,19,18,-1,18,27,25,-1,24,28,23,-1,23,21,24,-1,28,45,44,-1,44,23,28,-1,26,20,22,-1,22,29,26,-1,0,31,30,-1,30,2,0,-1,2,30,32,-1,32,5,2,-1,6,33,31,-1,31,0,6,-1,5,32,34,-1,34,9,5,-1,47,46,35,-1,35,11,47,-1,11,35,33,-1,33,6,11,-1,31,48,30,-1,30,36,32,-1,33,49,31,-1,32,36,34,-1,50,51,35,-1,35,52,33,-1,25,37,24,-1,26,37,27,-1,27,37,25,-1,24,37,28,-1,28,37,53,-1,29,37,26,-1});
  }
}
private class MFVec3f95 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.607f ,-0.3011f ,-0.7068f ,1.816f ,-1.259f ,0.7158f ,1.607f ,-0.3011f ,0.7173f ,1.816f ,-1.259f ,-0.7039f ,-0.0748f ,-2.207f ,1.664f ,-0.0977f ,-1.281f ,1.671f ,-0.0968f ,-1.282f ,-1.749f ,-0.075f ,-2.207f ,-1.492f ,-1.791f ,-1.616f ,0.6505f ,-1.816f ,-0.6919f ,0.6532f ,-1.791f ,-1.616f ,-0.5319f ,-1.816f ,-0.6919f ,-0.5362f ,1.323f ,-4.528f ,1.438f ,1.323f ,-4.528f ,-0.6341f ,-0.0101f ,-4.917f ,1.749f ,-0.01f ,-4.917f ,-1.419f ,-1.599f ,-4.353f ,0.9644f ,-1.599f ,-4.353f ,-0.4902f ,1.275f ,-7.552f ,0.9117f ,1.275f ,-7.552f ,-0.5772f ,-0.0603f ,-7.691f ,1.6f ,-0.0602f ,-7.691f ,-1.319f ,-1.34f ,-7.172f ,0.8445f ,-1.34f ,-7.172f ,-0.3992f ,-0.0847f ,-10.99f ,-0.7836f ,0.679f ,-10.66f ,-0.3055f ,-0.092f ,-10.99f ,1.088f ,0.6772f ,-10.65f ,0.6521f ,-0.6479f ,-10.85f ,-0.4597f ,-0.652f ,-10.87f ,0.7241f ,0.8326f ,0.9823f ,0.4058f ,0.8326f ,0.9823f ,-0.3926f ,-0.1232f ,0.4326f ,0.9405f ,-0.1227f ,0.4326f ,-0.977f ,-1.087f ,0.7632f ,0.3698f ,-1.087f ,0.7632f ,-0.297f ,-0.1182f ,1.187f ,0.0082f ,0.0134f ,-11.39f ,0.1526f });
  }
}
private class MFVec2f96 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9014f ,0.1592f ,0.9207f ,0.1477f ,0.9221f ,0.1592f ,0.9028f ,0.1477f ,0.9498f ,0.1348f ,0.951f ,0.146f ,0.8725f ,0.146f ,0.8736f ,0.1348f ,0.9793f ,0.1407f ,0.9796f ,0.1519f ,0.8426f ,0.1407f ,0.8423f ,0.1519f ,0.9299f ,0.1077f ,0.9022f ,0.1077f ,0.9466f ,0.102f ,0.8775f ,0.102f ,0.9732f ,0.1077f ,0.8437f ,0.1077f ,0.9238f ,0.071f ,0.9036f ,0.071f ,0.9446f ,0.0684f ,0.8798f ,0.0684f ,0.9704f ,0.0737f ,0.845f ,0.0737f ,0.8879f ,0.0318f ,0.9059f ,0.0364f ,0.939f ,0.0318f ,0.9232f ,0.0366f ,0.8712f ,0.0331f ,0.9514f ,0.0329f ,0.9243f ,0.1741f ,0.8994f ,0.1741f ,0.9551f ,0.1668f ,0.8685f ,0.1668f ,0.9806f ,0.1701f ,0.8414f ,0.1701f ,0.9871f ,0.1759f ,0.9173f ,0.0271f ,0.8271f ,0.1519f ,0.8268f ,0.1407f ,0.8268f ,0.1407f ,0.8207f ,0.1077f ,0.8207f ,0.1077f ,0.8264f ,0.0737f ,0.8264f ,0.0737f ,0.8397f ,0.0329f ,0.8281f ,0.1701f ,0.8271f ,0.1519f ,0.8346f ,0.1759f ,0.8346f ,0.1759f ,0.8281f ,0.1701f ,0.8346f ,0.1759f ,0.8346f ,0.1759f ,0.8397f ,0.0329f });
  }
}
private class MFFloat97 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat98 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,1,3,0,-1,4,6,5,-1,5,7,4,-1,10,9,8,-1,8,11,10,-1,14,13,12,-1,12,15,14,-1,11,8,13,-1,13,14,11,-1,17,16,9,-1,9,10,17,-1,19,18,16,-1,16,17,19,-1,15,12,18,-1,18,19,15,-1,20,10,11,-1,11,21,20,-1,24,23,22,-1,22,25,24,-1,21,11,14,-1,14,26,21,-1,27,17,10,-1,10,20,27,-1,28,19,17,-1,17,27,28,-1,29,15,19,-1,19,28,29,-1,2,20,21,-1,21,1,2,-1,3,26,29,-1,29,0,3,-1,1,21,26,-1,26,3,1,-1,30,27,20,-1,20,2,30,-1,31,28,27,-1,27,30,31,-1,0,29,28,-1,28,31,0,-1,32,2,0,-1,0,33,32,-1,34,30,2,-1,2,32,34,-1,35,31,30,-1,30,34,35,-1,33,0,31,-1,31,35,33,-1,36,34,32,-1,32,37,36,-1,38,35,34,-1,34,36,38,-1,39,33,35,-1,35,38,39,-1,37,32,33,-1,33,39,37,-1,6,36,37,-1,37,5,6,-1,4,38,36,-1,36,6,4,-1,7,39,38,-1,38,4,7,-1,5,37,39,-1,39,7,5,-1,23,14,15,-1,15,22,23,-1,24,26,14,-1,14,23,24,-1,42,41,40,-1,40,43,42,-1,22,15,29,-1,29,25,22,-1,44,24,25,-1,25,45,44,-1,46,29,26,-1,26,47,46,-1,47,26,24,-1,24,44,47,-1,45,25,29,-1,29,46,45,-1,41,46,47,-1,47,40,41,-1,42,45,46,-1,46,41,42,-1,43,44,45,-1,45,42,43,-1,40,47,44,-1,44,43,40,-1,9,48,8,-1,13,48,12,-1,8,48,13,-1,16,48,9,-1,18,48,16,-1,12,48,18,-1});
  }
}
private class MFInt32100 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {47,49,48,-1,48,50,47,-1,8,10,9,-1,9,11,8,-1,53,52,51,-1,51,54,53,-1,57,56,55,-1,55,58,57,-1,54,51,56,-1,56,57,54,-1,14,13,12,-1,12,15,14,-1,17,16,13,-1,13,14,17,-1,19,18,16,-1,16,17,19,-1,59,53,54,-1,54,60,59,-1,63,62,61,-1,61,64,63,-1,60,54,57,-1,57,65,60,-1,20,14,15,-1,15,21,20,-1,22,17,14,-1,14,20,22,-1,23,19,17,-1,17,22,23,-1,49,59,60,-1,60,48,49,-1,50,65,66,-1,66,47,50,-1,48,60,65,-1,65,50,48,-1,24,20,21,-1,21,25,24,-1,26,22,20,-1,20,24,26,-1,27,23,22,-1,22,26,27,-1,67,49,47,-1,47,68,67,-1,28,24,25,-1,25,29,28,-1,30,26,24,-1,24,28,30,-1,31,27,26,-1,26,30,31,-1,32,28,29,-1,29,33,32,-1,34,30,28,-1,28,32,34,-1,35,31,30,-1,30,34,35,-1,69,67,68,-1,68,70,69,-1,10,32,33,-1,33,9,10,-1,8,34,32,-1,32,10,8,-1,11,35,34,-1,34,8,11,-1,71,69,70,-1,70,72,71,-1,62,57,58,-1,58,61,62,-1,63,65,57,-1,57,62,63,-1,38,37,36,-1,36,39,38,-1,40,19,23,-1,23,41,40,-1,73,63,64,-1,64,74,73,-1,43,23,42,-1,42,44,43,-1,75,65,63,-1,63,73,75,-1,45,41,23,-1,23,43,45,-1,37,43,44,-1,44,36,37,-1,38,45,43,-1,43,37,38,-1,76,73,74,-1,74,77,76,-1,78,75,73,-1,73,76,78,-1,1,5,0,-1,3,6,2,-1,0,7,4,-1,13,46,12,-1,16,46,13,-1,18,46,16,-1});
  }
}
private class MFVec3f101 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.428f ,-4.043f ,1.035f ,0.062f ,-2.76f ,-0.7256f ,-0.4283f ,-4.043f ,-1.325f ,0.0621f ,-2.759f ,0.4786f ,-0.5207f ,-5.808f ,0.5759f ,0.0026f ,-5.67f ,-1.325f ,-0.5208f ,-5.808f ,-0.9061f ,0.0026f ,-5.67f ,1.035f ,0.311f ,0.5832f ,-0.6014f ,-0.4947f ,0.3747f ,-1.08f ,-0.3587f ,-0.8063f ,-1.077f ,0.3511f ,-0.5647f ,-0.6024f ,-0.502f ,0.3752f ,0.7923f ,0.3112f ,0.5961f ,0.3561f ,0.3512f ,-0.5647f ,0.3515f ,-0.5145f ,-0.7545f ,0.7924f ,-1.03f ,0.5998f ,-0.7556f ,-1.03f ,-0.5583f ,-0.7457f ,-1.037f ,0.5778f ,0.4281f ,-1.031f ,-0.5582f ,0.4287f ,-0.3854f ,-2.321f ,-1.587f ,0.3249f ,-2.079f ,-0.8558f ,-0.2488f ,-1.494f ,1.332f ,0.4651f ,-1.238f ,0.8921f ,0.7055f ,-1.95f ,1.153f ,0.2884f ,-2.29f ,1.587f ,0.324f ,-2.079f ,0.6132f ,-1.057f ,-2.073f ,-1.077f ,-1.049f ,-2.091f ,0.6923f ,-0.3858f ,-2.321f ,1.292f ,-0.9501f ,-4.181f ,-0.9063f ,-0.9499f ,-4.181f ,0.5762f ,-0.2552f ,-4.694f ,-1.325f ,-0.2552f ,-4.694f ,1.035f ,-0.7786f ,-4.832f ,-0.9061f ,-0.7786f ,-4.832f ,0.5759f ,-0.6497f ,-5.32f ,-0.9061f ,-0.1263f ,-5.182f ,-1.325f ,-0.6497f ,-5.32f ,0.5759f ,-0.1263f ,-5.182f ,1.035f ,0.6755f ,-3.115f ,0.6119f ,0.214f ,-3.44f ,1.081f ,0.6399f ,-3.326f ,1.586f ,1.057f ,-2.987f ,1.151f ,0.8814f ,-2.469f ,1.15f ,0.4641f ,-2.808f ,1.587f ,0.0383f ,-2.922f ,1.082f ,0.4998f ,-2.597f ,0.6126f ,-0.4437f ,0.8321f ,-0.1433f });
  }
}
private class MFVec2f102 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1427f ,0.2125f ,0.1222f ,0.2114f ,0.072f ,0.2114f ,0.0487f ,0.2146f ,0.1648f ,0.2146f ,0.1427f ,0.2125f ,0.072f ,0.2114f ,0.1648f ,0.2146f ,0.1856f ,0.1891f ,0.2639f ,0.1883f ,0.2484f ,0.188f ,0.1701f ,0.1891f ,0.2529f ,0.0205f ,0.2367f ,0.0146f ,0.2411f ,0.0322f ,0.2577f ,0.0389f ,0.1901f ,0.0132f ,0.1856f ,0.0283f ,0.1719f ,0.0186f ,0.1675f ,0.0336f ,0.2484f ,0.0869f ,0.2649f ,0.0843f ,0.1864f ,0.0924f ,0.1708f ,0.0905f ,0.2488f ,0.1471f ,0.2643f ,0.1474f ,0.186f ,0.1482f ,0.1705f ,0.1482f ,0.2484f ,0.1644f ,0.2639f ,0.1647f ,0.1856f ,0.1655f ,0.1701f ,0.1655f ,0.2484f ,0.1762f ,0.2639f ,0.1765f ,0.1856f ,0.1773f ,0.1701f ,0.1773f ,0.1633f ,0.1308f ,0.1534f ,0.1396f ,0.1426f ,0.1381f ,0.1476f ,0.1297f ,0.1475f ,0.0465f ,0.1445f ,0.0998f ,0.1671f ,0.1111f ,0.1534f ,0.127f ,0.1633f ,0.1182f ,0.1426f ,0.1255f ,0.2062f ,0.0097f ,0.1009f ,0.1405f ,0.0196f ,0.0979f ,0.0057f ,0.141f ,0.0959f ,0.0953f ,0.0453f ,0.0029f ,0.0235f ,0.0102f ,0.0236f ,0.0455f ,0.0452f ,0.0373f ,0.1089f ,0.0102f ,0.089f ,0.0039f ,0.0888f ,0.0373f ,0.1089f ,0.0441f ,0.005f ,0.081f ,0.0337f ,0.0828f ,0.1222f ,0.069f ,0.1135f ,0.0574f ,0.1162f ,0.0936f ,0.1239f ,0.0947f ,0.102f ,0.0746f ,0.1039f ,0.0949f ,0.0057f ,0.1603f ,0.1009f ,0.1598f ,0.0057f ,0.1748f ,0.1009f ,0.1743f ,0.0057f ,0.1892f ,0.1009f ,0.1888f ,0.1179f ,0.119f ,0.1252f ,0.1262f ,0.1098f ,0.1164f ,0.1179f ,0.1343f ,0.1252f ,0.1415f ,0.1098f ,0.1317f });
  }
}
private class MFFloat103 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat104 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32105 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,152,154,-1,154,25,17,-1,17,25,8,-1,8,4,17,-1,25,154,20,-1,20,181,25,-1,6,8,25,-1,25,181,6,-1,19,5,9,-1,9,26,19,-1,18,19,26,-1,26,27,18,-1,9,7,23,-1,23,26,9,-1,26,23,22,-1,22,27,26,-1,150,6,181,-1,181,3,150,-1,151,2,23,-1,23,7,151,-1,152,28,30,-1,30,18,152,-1,18,30,31,-1,31,19,18,-1,152,17,29,-1,29,28,152,-1,19,31,11,-1,11,5,19,-1,4,10,29,-1,29,17,4,-1,28,155,34,-1,34,30,28,-1,30,34,35,-1,35,31,30,-1,28,29,33,-1,33,155,28,-1,31,35,13,-1,13,11,31,-1,10,12,33,-1,33,29,10,-1,155,36,38,-1,38,34,155,-1,35,34,38,-1,38,39,35,-1,33,37,36,-1,36,155,33,-1,35,39,15,-1,15,13,35,-1,33,12,14,-1,14,37,33,-1,20,42,43,-1,43,22,20,-1,152,40,44,-1,44,154,152,-1,154,44,42,-1,42,20,154,-1,27,45,41,-1,41,18,27,-1,22,43,45,-1,45,27,22,-1,18,41,40,-1,40,152,18,-1,50,47,16,-1,108,109,158,-1,21,174,24,-1,110,111,153,-1,46,48,32,-1,156,112,113,-1,32,48,49,-1,115,157,114,-1,2,3,181,-1,53,116,117,-1,161,2,51,-1,2,151,52,-1,52,51,2,-1,22,23,181,-1,181,20,22,-1,181,23,2,-1,16,47,173,-1,119,182,118,-1,2,150,3,-1,121,0,120,-1,43,42,54,-1,54,55,43,-1,44,54,42,-1,45,43,55,-1,45,55,54,-1,54,44,45,-1,41,45,44,-1,44,40,41,-1,38,36,56,-1,56,57,38,-1,39,38,57,-1,57,58,39,-1,36,37,59,-1,59,56,36,-1,15,39,58,-1,58,60,15,-1,37,14,61,-1,61,59,37,-1,57,56,62,-1,58,57,62,-1,56,59,62,-1,60,58,62,-1,59,61,62,-1,178,162,66,-1,66,74,178,-1,8,74,66,-1,66,4,8,-1,69,178,74,-1,74,177,69,-1,74,8,6,-1,6,177,74,-1,9,5,68,-1,68,75,9,-1,75,68,67,-1,67,76,75,-1,72,7,9,-1,9,75,72,-1,71,72,75,-1,75,76,71,-1,177,6,150,-1,150,64,177,-1,72,63,151,-1,151,7,72,-1,79,77,162,-1,162,67,79,-1,80,79,67,-1,67,68,80,-1,78,66,162,-1,162,77,78,-1,11,80,68,-1,68,5,11,-1,78,10,4,-1,4,66,78,-1,83,165,77,-1,77,79,83,-1,84,83,79,-1,79,80,84,-1,82,78,77,-1,77,165,82,-1,13,84,80,-1,80,11,13,-1,82,12,10,-1,10,78,82,-1,87,85,165,-1,165,83,87,-1,87,83,84,-1,84,88,87,-1,85,86,82,-1,82,165,85,-1,15,88,84,-1,84,13,15,-1,14,12,82,-1,82,86,14,-1,92,91,69,-1,69,71,92,-1,93,89,162,-1,162,178,93,-1,91,93,178,-1,178,69,91,-1,90,94,76,-1,76,67,90,-1,94,92,71,-1,71,76,94,-1,89,90,67,-1,67,162,89,-1,99,65,96,-1,123,168,122,-1,70,73,180,-1,164,124,125,-1,95,81,97,-1,166,126,127,-1,81,98,97,-1,128,129,167,-1,63,177,64,-1,101,130,131,-1,170,100,63,-1,52,151,63,-1,63,100,52,-1,177,72,71,-1,71,69,177,-1,177,63,72,-1,65,179,96,-1,132,133,183,-1,63,64,150,-1,134,135,171,-1,102,91,92,-1,92,103,102,-1,93,91,102,-1,94,103,92,-1,102,103,94,-1,94,93,102,-1,93,94,90,-1,90,89,93,-1,104,85,87,-1,87,105,104,-1,105,87,88,-1,88,106,105,-1,107,86,85,-1,85,104,107,-1,106,88,15,-1,15,60,106,-1,61,14,86,-1,86,107,61,-1,105,62,104,-1,106,62,105,-1,104,62,107,-1,60,62,106,-1,107,62,61,-1});
  }
}
private class MFInt32106 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {100,170,163,-1,169,136,137,-1,176,138,139,-1,140,141,172,-1,159,142,143,-1,175,144,145,-1,160,146,147,-1,148,149,1,-1,185,184,189,-1,189,190,185,-1,184,186,191,-1,191,189,184,-1,186,187,192,-1,192,191,186,-1,187,188,193,-1,193,192,187,-1,194,195,196,-1,196,197,194,-1,188,194,197,-1,197,193,188,-1,202,198,185,-1,185,190,202,-1,203,199,198,-1,198,202,203,-1,204,200,199,-1,199,203,204,-1,205,201,200,-1,200,204,205,-1,196,195,206,-1,206,207,196,-1,207,206,201,-1,201,205,207,-1});
  }
}
private class MFInt32107 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,0,-1,0,1,2,-1,2,1,4,-1,4,5,2,-1,1,0,6,-1,6,7,1,-1,8,4,1,-1,1,7,8,-1,38,39,36,-1,36,37,38,-1,41,38,37,-1,37,40,41,-1,36,43,42,-1,42,37,36,-1,37,42,44,-1,44,40,37,-1,9,8,7,-1,7,10,9,-1,45,46,42,-1,42,43,45,-1,47,49,48,-1,48,41,47,-1,41,48,50,-1,50,38,41,-1,3,2,11,-1,11,12,3,-1,38,50,51,-1,51,39,38,-1,5,13,11,-1,11,2,5,-1,49,53,52,-1,52,48,49,-1,48,52,54,-1,54,50,48,-1,12,11,14,-1,14,15,12,-1,50,54,55,-1,55,51,50,-1,13,16,14,-1,14,11,13,-1,53,57,56,-1,56,52,53,-1,54,52,56,-1,56,58,54,-1,14,18,17,-1,17,15,14,-1,54,58,59,-1,59,55,54,-1,14,16,19,-1,19,18,14,-1,60,62,61,-1,61,44,60,-1,47,65,63,-1,63,64,47,-1,64,63,62,-1,62,60,64,-1,40,67,66,-1,66,41,40,-1,44,61,67,-1,67,40,44,-1,41,66,65,-1,65,47,41,-1,68,69,47,-1,47,64,68,-1,70,68,64,-1,64,60,70,-1,71,72,53,-1,71,53,49,-1,53,72,73,-1,53,73,57,-1,20,10,7,-1,74,70,46,-1,74,46,75,-1,46,45,76,-1,76,75,46,-1,44,42,70,-1,70,60,44,-1,70,42,46,-1,47,69,71,-1,47,71,49,-1,20,9,10,-1,21,9,20,-1,61,62,77,-1,77,78,61,-1,63,77,62,-1,67,61,78,-1,67,78,77,-1,77,63,67,-1,66,67,63,-1,63,65,66,-1,56,57,79,-1,79,80,56,-1,58,56,80,-1,80,81,58,-1,57,83,82,-1,82,79,57,-1,59,58,81,-1,81,84,59,-1,83,129,128,-1,128,82,83,-1,80,79,87,-1,81,80,87,-1,79,82,87,-1,84,81,87,-1,82,130,87,-1,22,25,23,-1,23,24,22,-1,4,24,23,-1,23,5,4,-1,26,22,24,-1,24,27,26,-1,24,4,8,-1,8,27,24,-1,36,39,88,-1,88,89,36,-1,89,88,90,-1,90,91,89,-1,92,43,36,-1,36,89,92,-1,93,92,89,-1,89,91,93,-1,27,8,9,-1,9,28,27,-1,92,94,45,-1,45,43,92,-1,96,97,95,-1,95,90,96,-1,98,96,90,-1,90,88,98,-1,29,23,25,-1,25,30,29,-1,51,98,88,-1,88,39,51,-1,29,13,5,-1,5,23,29,-1,99,100,97,-1,97,96,99,-1,101,99,96,-1,96,98,101,-1,31,29,30,-1,30,32,31,-1,55,101,98,-1,98,51,55,-1,31,16,13,-1,13,29,31,-1,102,103,100,-1,100,99,102,-1,102,99,101,-1,101,104,102,-1,33,34,31,-1,31,32,33,-1,59,104,101,-1,101,55,59,-1,19,16,31,-1,31,34,19,-1,106,107,105,-1,105,93,106,-1,109,110,95,-1,95,108,109,-1,107,109,108,-1,108,105,107,-1,111,112,91,-1,91,90,111,-1,112,106,93,-1,93,91,112,-1,110,111,90,-1,90,95,110,-1,113,95,114,-1,95,113,108,-1,115,108,113,-1,108,115,105,-1,116,100,117,-1,116,97,100,-1,100,118,117,-1,100,103,118,-1,35,27,28,-1,119,94,115,-1,119,120,94,-1,76,45,94,-1,94,120,76,-1,115,92,93,-1,93,105,115,-1,115,94,92,-1,95,116,114,-1,95,97,116,-1,35,28,9,-1,21,35,9,-1,121,107,106,-1,106,122,121,-1,109,107,121,-1,112,122,106,-1,121,122,112,-1,112,109,121,-1,109,112,111,-1,111,110,109,-1,123,103,102,-1,102,124,123,-1,124,102,104,-1,104,125,124,-1,126,127,103,-1,103,123,126,-1,125,104,59,-1,59,84,125,-1,85,86,127,-1,127,126,85,-1,124,87,123,-1,125,87,124,-1,123,87,126,-1,84,87,125,-1,126,87,85,-1});
  }
}
private class MFInt32108 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {120,119,115,-1,120,115,94,-1,74,75,46,-1,74,46,70,-1,75,76,45,-1,75,45,46,-1,76,120,94,-1,76,94,45,-1,132,131,136,-1,136,137,132,-1,131,133,138,-1,138,136,131,-1,133,134,139,-1,139,138,133,-1,134,135,140,-1,140,139,134,-1,141,142,143,-1,143,144,141,-1,135,141,144,-1,144,140,135,-1,149,145,132,-1,132,137,149,-1,150,146,145,-1,145,149,150,-1,151,147,146,-1,146,150,151,-1,152,148,147,-1,147,151,152,-1,143,142,153,-1,153,154,143,-1,154,153,148,-1,148,152,154,-1});
  }
}
private class MFVec3f109 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,15.44f ,0.8112f ,0f ,15.67f ,-3.376f ,2.697f ,16.18f ,-2.249f ,2.09f ,15.08f ,0.6152f ,0f ,7.983f ,3.876f ,0f ,7.41f ,-5.026f ,0f ,13.72f ,2.98f ,0f ,13.72f ,-4.072f ,0f ,10.57f ,3.901f ,0f ,10.57f ,-5.026f ,0f ,7.042f ,3.812f ,0f ,6.4f ,-5.026f ,0f ,4.758f ,3.526f ,0f ,4.249f ,-4.822f ,0f ,-1.099f ,3.066f ,0f ,-0.1768f ,-3.945f ,6.699f ,7.869f ,2.172f ,2.644f ,7.41f ,4.093f ,6.699f ,7.869f ,-3.225f ,2.644f ,7.41f ,-5.218f ,5.274f ,14.26f ,1.005f ,3.102f ,14.58f ,2.516f ,5.144f ,15.02f ,-2.695f ,3.953f ,15.51f ,-2.518f ,6.378f ,10.57f ,2.332f ,3.196f ,10.57f ,3.787f ,2.622f ,10.57f ,-5.218f ,6.378f ,10.57f ,-4.198f ,6.321f ,6.859f ,1.479f ,2.644f ,6.4f ,3.507f ,6.321f ,6.859f ,-2.919f ,2.644f ,6.4f ,-5.218f ,5.721f ,3.445f ,1.299f ,2.591f ,3.486f ,3.807f ,5.72f ,3.443f ,-2.672f ,2.598f ,4.609f ,-4.651f ,4.449f ,-0.3754f ,0.925f ,1.414f ,-0.8264f ,3.196f ,4.449f ,0.1736f ,-2.369f ,2.4f ,0.3773f ,-3.774f ,6.937f ,8.714f ,0.7786f ,6.954f ,8.723f ,-2.793f ,6.109f ,14.39f ,1.005f ,6.109f ,14.34f ,-2.695f ,7.659f ,10.67f ,1.843f ,7.659f ,10.67f ,-3.828f ,3.082f ,5.41f ,4.545f ,2.758f ,8.208f ,4.853f ,3.018f ,1.961f ,4.928f ,2.787f ,-1.072f ,4.799f ,2.625f ,11.08f ,4.576f ,2.697f ,17.34f ,-2.249f ,0f ,17.14f ,-3.188f ,3.38f ,16.55f ,2.416f ,7.73f ,14.39f ,1.005f ,7.729f ,14.34f ,-2.695f ,2.528f ,-1.347f ,0.311f ,2.527f ,-1.036f ,-1.556f ,1.366f ,-0.9207f ,-2.352f ,0.8074f ,-1.603f ,1.598f ,0f ,-1.235f ,-2.449f ,0f ,-1.757f ,1.525f ,0f ,-1.516f ,-0.4923f ,-2.697f ,16.18f ,-2.249f ,-2.09f ,15.08f ,0.6152f ,-6.699f ,7.869f ,2.172f ,-2.644f ,7.41f ,4.093f ,-6.699f ,7.869f ,-3.225f ,-2.644f ,7.41f ,-5.218f ,-5.274f ,14.26f ,1.005f ,-3.102f ,14.58f ,2.516f ,-5.144f ,15.02f ,-2.695f ,-3.953f ,15.51f ,-2.518f ,-6.378f ,10.57f ,2.332f ,-3.196f ,10.57f ,3.787f ,-2.622f ,10.57f ,-5.218f ,-6.378f ,10.57f ,-4.198f ,-6.321f ,6.859f ,1.479f ,-2.644f ,6.4f ,3.507f ,-6.321f ,6.859f ,-2.919f ,-2.644f ,6.4f ,-5.218f ,-5.721f ,3.445f ,1.299f ,-2.591f ,3.486f ,3.807f ,-5.72f ,3.443f ,-2.672f ,-2.598f ,4.609f ,-4.651f ,-4.449f ,-0.3754f ,0.925f ,-1.414f ,-0.8264f ,3.196f ,-4.449f ,0.1736f ,-2.369f ,-2.4f ,0.3773f ,-3.774f ,-6.937f ,8.714f ,0.7786f ,-6.954f ,8.723f ,-2.793f ,-6.109f ,14.39f ,1.005f ,-6.109f ,14.34f ,-2.695f ,-7.659f ,10.67f ,1.843f ,-7.659f ,10.67f ,-3.828f ,-3.082f ,5.41f ,4.545f ,-2.758f ,8.208f ,4.853f ,-3.018f ,1.961f ,4.928f ,-2.787f ,-1.072f ,4.799f ,-2.625f ,11.08f ,4.576f ,-2.697f ,17.34f ,-2.249f ,-3.38f ,16.55f ,2.416f ,-7.73f ,14.39f ,1.005f ,-7.729f ,14.34f ,-2.695f ,-2.528f ,-1.347f ,0.311f ,-2.527f ,-1.036f ,-1.556f ,-1.366f ,-0.9207f ,-2.352f ,-0.8074f ,-1.603f ,1.598f ,6.699f ,7.869f ,2.172f ,6.378f ,10.57f ,2.332f ,6.378f ,10.57f ,2.332f ,5.274f ,14.26f ,1.005f ,5.721f ,3.445f ,1.299f ,6.321f ,6.859f ,1.479f ,4.449f ,-0.3754f ,0.925f ,5.721f ,3.445f ,1.299f ,3.102f ,14.58f ,2.516f ,2.697f ,16.18f ,-2.249f ,6.321f ,6.859f ,1.479f ,6.699f ,7.869f ,2.172f ,2.697f ,16.18f ,-2.249f ,0f ,15.67f ,-3.376f ,-6.378f ,10.57f ,2.332f ,-6.699f ,7.869f ,2.172f ,-3.102f ,14.58f ,2.516f ,-5.274f ,14.26f ,1.005f ,-6.321f ,6.859f ,1.479f ,-5.721f ,3.445f ,1.299f ,-5.721f ,3.445f ,1.299f ,-4.449f ,-0.3754f ,0.925f ,-2.697f ,16.18f ,-2.249f ,-3.102f ,14.58f ,2.516f ,-6.699f ,7.869f ,2.172f ,-6.321f ,6.859f ,1.479f ,0f ,15.67f ,-3.376f ,-2.697f ,16.18f ,-2.249f ,-3.102f ,14.58f ,2.516f ,-2.697f ,16.18f ,-2.249f ,2.697f ,17.34f ,-2.249f ,2.697f ,16.18f ,-2.249f ,3.38f ,16.55f ,2.416f ,2.697f ,16.18f ,-2.249f ,0f ,17.14f ,-3.188f ,0f ,15.67f ,-3.376f ,0f ,15.67f ,-3.376f ,2.697f ,16.18f ,-2.249f ,-2.697f ,17.34f ,-2.249f ,-2.697f ,16.18f ,-2.249f ,0f ,17.14f ,-3.188f ,-2.697f ,16.18f ,-2.249f ,0f ,15.44f ,0.8112f ,0f ,15.67f ,-3.376f ,6.699f ,7.869f ,2.172f ,3.102f ,14.58f ,2.516f ,6.378f ,10.57f ,2.332f ,5.721f ,3.445f ,1.299f ,3.082f ,5.41f ,4.545f ,2.787f ,-1.072f ,4.799f ,2.625f ,11.08f ,4.576f ,2.697f ,17.34f ,-2.249f ,0f ,17.14f ,-3.188f ,3.38f ,16.55f ,2.416f ,-6.699f ,7.869f ,2.172f ,-3.102f ,14.58f ,2.516f ,-6.378f ,10.57f ,2.332f ,-5.721f ,3.445f ,1.299f ,-3.082f ,5.41f ,4.545f ,-2.787f ,-1.072f ,4.799f ,-2.625f ,11.08f ,4.576f ,-2.697f ,17.34f ,-2.249f ,-3.38f ,16.55f ,2.416f ,0f ,15.44f ,0.8112f ,3.102f ,14.58f ,2.516f ,3.082f ,5.41f ,4.545f ,2.625f ,11.08f ,4.576f ,2.697f ,17.34f ,-2.249f ,3.38f ,16.55f ,2.416f ,-3.102f ,14.58f ,2.516f ,-6.378f ,10.57f ,2.332f ,-3.082f ,5.41f ,4.545f ,-2.625f ,11.08f ,4.576f ,3.102f ,14.58f ,2.516f ,3.082f ,5.41f ,4.545f ,-3.082f ,5.41f ,4.545f ,0.4788f ,19.29f ,-1.951f ,0f ,19.29f ,-2.014f ,1.016f ,19.29f ,-1.707f ,1.393f ,19.29f ,-0.8835f ,1.087f ,19.29f ,-0.3107f ,0.4788f ,13.68f ,-1.951f ,0f ,13.74f ,-2.014f ,1.016f ,13.91f ,-1.707f ,1.393f ,13.89f ,-0.8835f ,1.087f ,13.56f ,-0.3107f ,0.5395f ,19.41f ,0.0337f ,0f ,18.91f ,0.1174f ,0f ,13.27f ,0.1174f ,0.5395f ,13.28f ,0.0337f ,-0.4788f ,19.29f ,-1.951f ,-1.016f ,19.29f ,-1.707f ,-1.393f ,19.29f ,-0.8835f ,-1.087f ,19.29f ,-0.3107f ,-0.4788f ,13.68f ,-1.951f ,-1.016f ,13.91f ,-1.707f ,-1.393f ,13.89f ,-0.8835f ,-1.087f ,13.56f ,-0.3107f ,-0.5395f ,19.41f ,0.0337f ,-0.5395f ,13.28f ,0.0337f });
  }
}
private class MFVec2f110 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1137f ,0.4353f ,0.2462f ,0.4353f ,0.2627f ,0.3623f ,0.1041f ,0.3729f ,0.3893f ,0.4353f ,0.3893f ,0.3755f ,0.1466f ,0.533f ,0.2501f ,0.4926f ,0.3893f ,0.4894f ,0.3893f ,0.5602f ,0.2792f ,0.5518f ,0.2627f ,0.3389f ,0.1154f ,0.3495f ,0.3893f ,0.3537f ,0.2643f ,0.2715f ,0.1333f ,0.2706f ,0.3893f ,0.3009f ,0.1712f ,0.2298f ,0.2994f ,0.2194f ,0.3893f ,0.2131f ,0.2611f ,0.5773f ,0.3893f ,0.5655f ,0.1138f ,0.4353f ,0.2628f ,0.3623f ,0.2463f ,0.4353f ,0.1042f ,0.3729f ,0.1467f ,0.533f ,0.2502f ,0.4926f ,0.2793f ,0.5518f ,0.2628f ,0.3389f ,0.1155f ,0.3495f ,0.2644f ,0.2715f ,0.1334f ,0.2706f ,0.1713f ,0.2298f ,0.2995f ,0.2194f ,0.2612f ,0.5773f ,0.6307f ,0.4386f ,0.6307f ,0.4769f ,0.755f ,0.4772f ,0.7551f ,0.4386f ,0.6307f ,0.5194f ,0.7429f ,0.5302f ,0.5323f ,0.5214f ,0.5881f ,0.4386f ,0.5452f ,0.5279f ,0.5366f ,0.4386f ,0.5197f ,0.5286f ,0.7429f ,0.5917f ,0.7696f ,0.5316f ,0.7696f ,0.6269f ,0.7817f ,0.4772f ,0.7818f ,0.4386f ,0.8599f ,0.5314f ,0.8599f ,0.6265f ,0.8291f ,0.4806f ,0.8387f ,0.4386f ,0.9464f ,0.5276f ,0.9609f ,0.6256f ,0.941f ,0.4855f ,0.9557f ,0.4386f ,0.5652f ,0.5822f ,0.5633f ,0.5331f ,0.5618f ,0.5799f ,0.6278f ,0.5853f ,0.6307f ,0.5947f ,0.7205f ,0.5756f ,0.7203f ,0.5356f ,0.6278f ,0.5288f ,0.6217f ,0.7512f ,0.7384f ,0.7514f ,0.5501f ,0.7437f ,0.8124f ,0.7452f ,0.9036f ,0.7488f ,0.964f ,0.7479f ,0.5066f ,0.7388f ,0.4976f ,0.5286f ,0.4976f ,0.4386f ,0.5618f ,0.5768f ,0.5633f ,0.5393f ,0.9867f ,0.621f ,0.9784f ,0.5239f ,0.9754f ,0.4831f ,0.9909f ,0.7092f ,0.9703f ,0.7119f ,0.9837f ,0.4386f ,0.995f ,0.7441f ,0.9775f ,0.7441f ,0.9911f ,0.4386f ,0.7551f ,0.4772f ,0.6307f ,0.4769f ,0.7429f ,0.5303f ,0.6307f ,0.5194f ,0.5324f ,0.5214f ,0.5452f ,0.5279f ,0.5197f ,0.5286f ,0.7429f ,0.5917f ,0.7696f ,0.5317f ,0.7696f ,0.6269f ,0.7818f ,0.4772f ,0.86f ,0.5315f ,0.8599f ,0.6265f ,0.8291f ,0.4806f ,0.9464f ,0.5276f ,0.961f ,0.6256f ,0.9411f ,0.4856f ,0.5653f ,0.5822f ,0.5633f ,0.5331f ,0.5618f ,0.5799f ,0.6307f ,0.5947f ,0.6278f ,0.5854f ,0.7206f ,0.5756f ,0.7203f ,0.5357f ,0.6279f ,0.5289f ,0.6217f ,0.7512f ,0.7384f ,0.7515f ,0.5502f ,0.7437f ,0.8124f ,0.7453f ,0.9036f ,0.7488f ,0.9641f ,0.7479f ,0.5066f ,0.7389f ,0.4976f ,0.5286f ,0.5618f ,0.5768f ,0.5633f ,0.5393f ,0.9867f ,0.621f ,0.9784f ,0.524f ,0.9754f ,0.4831f ,0.9909f ,0.7092f ,0.9703f ,0.7119f ,0.9949f ,0.7441f ,0.9775f ,0.7441f ,0.9949f ,0.7441f ,0.3995f ,0.6721f ,0.3906f ,0.6721f ,0.4094f ,0.6721f ,0.4164f ,0.6721f ,0.4107f ,0.6721f ,0.3995f ,0.6285f ,0.3906f ,0.6293f ,0.4094f ,0.632f ,0.4164f ,0.6316f ,0.4107f ,0.6267f ,0.4006f ,0.6738f ,0.3906f ,0.6664f ,0.3906f ,0.6224f ,0.4006f ,0.6225f ,0.3818f ,0.6721f ,0.3719f ,0.6721f ,0.3649f ,0.6721f ,0.3706f ,0.6721f ,0.3818f ,0.6285f ,0.3719f ,0.632f ,0.3649f ,0.6316f ,0.3706f ,0.6267f ,0.3807f ,0.6738f ,0.3807f ,0.6225f });
  }
}
private class MFFloat111 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat112 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32113 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {58,44,47,-1,47,49,58,-1,49,60,59,-1,59,1,49,-1,56,48,47,-1,47,44,56,-1,50,51,59,-1,59,60,50,-1,173,168,58,-1,58,49,173,-1,171,173,49,-1,49,1,171,-1,14,12,18,-1,18,15,14,-1,162,160,14,-1,14,15,162,-1,16,57,33,-1,21,18,12,-1,18,79,19,-1,80,20,19,-1,11,10,79,-1,18,21,79,-1,11,79,21,-1,21,12,78,-1,11,21,22,-1,321,345,320,-1,322,323,346,-1,80,25,24,-1,24,20,80,-1,26,38,24,-1,23,13,38,-1,20,77,18,-1,18,19,20,-1,38,29,30,-1,30,23,38,-1,27,30,29,-1,27,28,30,-1,30,28,23,-1,33,31,16,-1,31,37,16,-1,28,34,23,-1,17,35,36,-1,36,28,17,-1,33,36,35,-1,17,32,35,-1,32,33,35,-1,33,34,36,-1,36,34,28,-1,10,19,79,-1,4,40,37,-1,40,42,41,-1,40,41,37,-1,40,4,42,-1,56,43,4,-1,4,46,56,-1,45,43,56,-1,56,44,45,-1,43,45,4,-1,48,56,46,-1,46,3,48,-1,50,60,3,-1,51,50,3,-1,3,2,51,-1,58,168,52,-1,52,168,170,-1,61,52,170,-1,4,45,52,-1,52,61,4,-1,52,45,44,-1,44,58,52,-1,61,170,53,-1,170,165,39,-1,39,53,170,-1,4,61,53,-1,53,42,4,-1,53,39,41,-1,41,42,53,-1,165,57,39,-1,13,23,54,-1,16,37,57,-1,41,39,57,-1,37,41,57,-1,57,165,166,-1,54,166,13,-1,33,57,34,-1,34,57,54,-1,34,54,23,-1,166,162,55,-1,55,162,15,-1,77,55,15,-1,15,18,77,-1,166,77,13,-1,77,166,55,-1,13,77,24,-1,24,38,13,-1,20,24,77,-1,54,57,166,-1,47,60,49,-1,48,3,47,-1,3,60,47,-1,3,63,2,-1,72,62,63,-1,3,65,63,-1,3,46,64,-1,64,66,3,-1,6,66,64,-1,3,66,65,-1,6,73,8,-1,8,73,67,-1,6,75,73,-1,5,71,73,-1,73,75,5,-1,6,70,75,-1,64,46,69,-1,75,70,69,-1,75,69,344,-1,2,63,62,-1,8,66,6,-1,63,8,72,-1,9,74,71,-1,68,74,9,-1,74,8,67,-1,68,72,74,-1,72,8,74,-1,67,71,74,-1,67,73,71,-1,65,8,63,-1,65,66,8,-1,70,6,64,-1,70,64,69,-1,4,0,344,-1,69,46,4,-1,69,4,344,-1,76,344,0,-1,5,76,0,-1,5,75,76,-1,75,344,76,-1,133,125,123,-1,123,120,133,-1,125,1,59,-1,59,134,125,-1,131,120,123,-1,123,124,131,-1,126,134,59,-1,59,51,126,-1,172,125,133,-1,133,167,172,-1,171,1,125,-1,125,172,171,-1,14,91,94,-1,94,12,14,-1,161,91,14,-1,14,160,161,-1,109,132,92,-1,12,94,97,-1,95,149,94,-1,95,96,150,-1,149,88,89,-1,149,97,94,-1,97,149,89,-1,78,12,97,-1,98,97,89,-1,325,348,324,-1,354,326,327,-1,150,96,100,-1,100,101,150,-1,100,114,102,-1,114,90,99,-1,96,95,94,-1,94,148,96,-1,114,99,106,-1,106,105,114,-1,105,106,103,-1,106,104,103,-1,99,104,106,-1,92,107,109,-1,92,113,107,-1,99,110,104,-1,93,104,112,-1,112,111,93,-1,111,112,109,-1,111,108,93,-1,111,109,108,-1,112,110,109,-1,104,110,112,-1,149,95,88,-1,113,116,83,-1,117,118,116,-1,113,117,116,-1,118,83,116,-1,131,122,83,-1,83,119,131,-1,121,120,131,-1,131,119,121,-1,83,121,119,-1,124,82,122,-1,122,131,124,-1,82,134,126,-1,51,2,82,-1,82,126,51,-1,127,167,133,-1,169,167,127,-1,169,127,135,-1,83,135,127,-1,127,121,83,-1,127,133,120,-1,120,121,127,-1,128,169,135,-1,169,128,115,-1,115,163,169,-1});
  }
}
private class MFInt32114 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {83,118,128,-1,128,135,83,-1,128,118,117,-1,117,115,128,-1,115,132,163,-1,129,99,90,-1,132,113,92,-1,132,115,117,-1,132,117,113,-1,164,163,132,-1,90,164,129,-1,110,132,109,-1,129,132,110,-1,99,129,110,-1,130,161,164,-1,91,161,130,-1,148,94,91,-1,91,130,148,-1,90,148,164,-1,130,164,148,-1,90,114,100,-1,100,148,90,-1,148,100,96,-1,164,132,129,-1,125,134,123,-1,123,82,124,-1,123,134,82,-1,2,136,82,-1,136,62,72,-1,136,138,82,-1,82,139,137,-1,137,122,82,-1,137,139,85,-1,138,139,82,-1,87,144,85,-1,140,144,87,-1,144,146,85,-1,84,146,144,-1,144,143,84,-1,146,142,85,-1,141,122,137,-1,141,142,146,-1,347,141,146,-1,62,136,2,-1,85,139,87,-1,72,87,136,-1,143,145,9,-1,9,145,68,-1,145,140,87,-1,68,145,72,-1,72,145,87,-1,145,143,140,-1,143,144,140,-1,136,87,138,-1,87,139,138,-1,137,85,142,-1,141,137,142,-1,347,81,83,-1,83,122,141,-1,347,83,141,-1,81,347,147,-1,81,147,84,-1,147,146,84,-1,147,347,146,-1,162,166,152,-1,151,160,162,-1,162,152,151,-1,152,166,165,-1,165,154,152,-1,154,165,170,-1,170,156,154,-1,152,154,155,-1,155,151,152,-1,156,153,155,-1,155,154,156,-1,173,156,170,-1,170,168,173,-1,171,153,156,-1,156,173,171,-1,157,164,161,-1,151,157,161,-1,161,160,151,-1,157,158,163,-1,163,164,157,-1,158,159,169,-1,169,163,158,-1,157,151,155,-1,155,158,157,-1,159,158,155,-1,155,153,159,-1,172,167,169,-1,169,159,172,-1,171,172,159,-1,159,153,171,-1,355,237,223,-1,174,236,237,-1,236,174,175,-1,179,238,176,-1,179,176,177,-1,179,177,178,-1,178,174,179,-1,174,178,175,-1,180,226,236,-1,238,180,236,-1,180,230,226,-1,237,236,223,-1,223,236,218,-1,225,355,223,-1,223,224,225,-1,328,329,239,-1,330,331,350,-1,228,227,219,-1,219,222,228,-1,236,226,218,-1,174,237,0,-1,0,237,355,-1,0,179,174,-1,318,355,225,-1,220,228,222,-1,221,228,220,-1,5,0,355,-1,218,182,223,-1,183,223,182,-1,181,183,185,-1,181,185,242,-1,213,212,244,-1,244,246,213,-1,213,246,245,-1,245,214,213,-1,245,247,184,-1,184,214,245,-1,214,184,206,-1,206,207,214,-1,217,319,225,-1,225,224,217,-1,183,181,217,-1,217,224,183,-1,224,223,183,-1,226,209,218,-1,218,209,184,-1,182,185,183,-1,218,184,182,-1,207,208,232,-1,232,214,207,-1,232,215,214,-1,209,206,184,-1,186,192,190,-1,190,188,186,-1,197,192,208,-1,208,207,197,-1,190,222,219,-1,219,188,190,-1,194,195,190,-1,226,189,209,-1,187,189,226,-1,192,186,208,-1,191,216,205,-1,196,205,216,-1,195,196,216,-1,196,195,194,-1,209,189,198,-1,199,197,207,-1,207,206,199,-1,233,234,197,-1,197,199,233,-1,209,198,199,-1,199,206,209,-1,233,199,198,-1,198,200,233,-1,248,194,202,-1,201,205,250,-1,248,249,196,-1,196,194,248,-1,196,249,250,-1,250,205,196,-1,234,203,197,-1,203,192,197,-1,194,190,202,-1,200,198,189,-1,189,204,200,-1,202,190,192,-1,202,192,203,-1,205,210,191,-1,210,205,201,-1,220,222,193,-1,204,189,187,-1,187,210,204,-1,210,201,204,-1,210,187,191,-1,195,211,190,-1,195,193,211,-1,193,222,211,-1,211,222,190,-1,215,212,213,-1,213,214,215,-1,230,187,226,-1,230,191,187,-1,229,221,230,-1,229,228,221,-1,9,355,318,-1,5,355,71,-1,71,355,9,-1,231,247,185,-1,182,231,185,-1,184,231,182,-1,184,247,231,-1,238,230,180,-1,230,221,191,-1,221,235,191,-1,191,235,216,-1});
  }
}
private class MFInt32115 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {221,220,235,-1,193,235,220,-1,216,235,193,-1,193,195,216,-1,250,249,233,-1,203,234,248,-1,234,233,249,-1,250,233,200,-1,249,248,234,-1,243,241,240,-1,241,243,247,-1,204,201,250,-1,200,204,250,-1,203,248,202,-1,247,243,242,-1,247,242,185,-1,332,333,349,-1,334,335,7,-1,292,304,353,-1,304,303,251,-1,252,251,303,-1,253,305,256,-1,254,253,256,-1,256,251,255,-1,255,254,256,-1,252,255,251,-1,303,295,257,-1,303,257,305,-1,295,298,257,-1,292,303,304,-1,288,303,292,-1,294,352,292,-1,292,353,294,-1,336,337,293,-1,306,338,339,-1,296,291,219,-1,219,227,296,-1,288,295,303,-1,81,304,251,-1,353,304,81,-1,251,256,81,-1,294,353,317,-1,291,296,289,-1,289,296,290,-1,353,81,84,-1,292,258,288,-1,258,292,259,-1,261,259,181,-1,242,261,181,-1,285,309,244,-1,244,212,285,-1,285,286,308,-1,308,309,285,-1,308,286,260,-1,260,310,308,-1,286,281,280,-1,280,260,286,-1,217,352,294,-1,294,319,217,-1,259,352,217,-1,217,181,259,-1,259,292,352,-1,288,282,295,-1,260,282,288,-1,259,261,258,-1,258,260,288,-1,281,286,232,-1,232,208,281,-1,286,215,232,-1,260,280,282,-1,186,188,264,-1,264,266,186,-1,271,281,208,-1,208,266,271,-1,264,188,219,-1,219,291,264,-1,264,269,268,-1,282,263,295,-1,295,263,262,-1,208,186,266,-1,279,287,265,-1,287,279,270,-1,287,270,269,-1,268,269,270,-1,272,263,282,-1,273,280,281,-1,281,271,273,-1,300,273,271,-1,271,301,300,-1,282,280,273,-1,273,272,282,-1,300,274,272,-1,272,273,300,-1,276,268,311,-1,313,279,275,-1,311,268,270,-1,270,312,311,-1,270,279,313,-1,313,312,270,-1,271,277,301,-1,271,266,277,-1,276,264,268,-1,274,278,263,-1,263,272,274,-1,266,264,276,-1,277,266,276,-1,265,283,279,-1,275,279,283,-1,267,291,289,-1,278,283,262,-1,262,263,278,-1,278,275,283,-1,265,262,283,-1,264,284,269,-1,284,267,269,-1,284,291,267,-1,264,291,284,-1,285,212,215,-1,215,286,285,-1,295,262,298,-1,262,265,298,-1,298,290,297,-1,290,296,297,-1,317,353,9,-1,143,353,84,-1,9,353,143,-1,261,310,299,-1,261,299,258,-1,258,299,260,-1,299,310,260,-1,257,298,305,-1,265,290,298,-1,265,302,290,-1,287,302,265,-1,302,289,290,-1,289,302,267,-1,287,269,267,-1,267,302,287,-1,300,312,313,-1,311,301,277,-1,312,300,301,-1,274,300,313,-1,301,311,312,-1,240,307,243,-1,310,243,307,-1,313,275,278,-1,313,278,274,-1,276,311,277,-1,242,243,310,-1,261,242,310,-1,351,340,341,-1,86,342,343,-1,244,314,315,-1,315,246,244,-1,246,315,247,-1,247,245,246,-1,244,309,316,-1,316,314,244,-1,309,308,310,-1,310,316,309,-1,175,176,238,-1,238,236,175,-1,177,176,175,-1,175,178,177,-1,252,303,305,-1,305,253,252,-1,254,255,252,-1,252,253,254,-1,318,225,319,-1,319,9,318,-1,317,9,319,-1,319,294,317,-1});
  }
}
private class MFInt32116 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,48,50,49,-1,49,44,48,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,117,120,119,-1,119,118,117,-1,120,123,122,-1,122,121,120,-1,124,118,119,-1,119,125,124,-1,126,121,122,-1,122,127,126,-1,128,120,117,-1,117,129,128,-1,130,123,120,-1,120,128,130,-1,14,132,131,-1,131,17,14,-1,133,132,14,-1,14,19,133,-1,136,135,134,-1,17,131,137,-1,139,138,131,-1,139,141,140,-1,138,143,142,-1,138,137,131,-1,137,138,142,-1,30,17,144,-1,145,137,142,-1,144,145,146,-1,30,144,146,-1,140,141,148,-1,148,147,140,-1,148,150,149,-1,150,152,151,-1,141,139,131,-1,131,153,141,-1,150,151,155,-1,155,154,150,-1,154,155,156,-1,155,157,156,-1,151,157,155,-1,134,158,136,-1,134,159,158,-1,151,160,157,-1,161,157,163,-1,163,162,161,-1,162,163,136,-1,162,164,161,-1,162,136,164,-1,163,160,136,-1,157,160,163,-1,138,139,143,-1,159,166,165,-1,168,167,166,-1,159,168,166,-1,167,165,166,-1,124,170,165,-1,165,169,124,-1,171,172,124,-1,124,169,171,-1,165,171,169,-1,125,173,170,-1,170,124,125,-1,173,121,126,-1,127,174,173,-1,173,126,127,-1,175,129,117,-1,176,129,175,-1,176,175,177,-1,165,177,175,-1,175,171,165,-1,175,117,172,-1,172,171,175,-1,178,176,177,-1,176,178,180,-1,180,179,176,-1});
  }
}
private class MFInt32117 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {165,167,178,-1,178,177,165,-1,178,167,168,-1,168,180,178,-1,180,135,179,-1,181,151,152,-1,135,159,134,-1,135,180,168,-1,135,168,159,-1,182,179,135,-1,152,182,181,-1,160,135,136,-1,181,135,160,-1,151,181,160,-1,183,133,182,-1,132,133,183,-1,153,131,132,-1,132,183,153,-1,152,184,182,-1,183,182,184,-1,152,150,148,-1,148,184,152,-1,184,148,141,-1,182,135,181,-1,120,121,119,-1,119,173,125,-1,119,121,173,-1,72,186,185,-1,187,76,77,-1,186,188,185,-1,185,191,190,-1,190,189,185,-1,190,191,192,-1,188,191,185,-1,194,193,192,-1,195,193,194,-1,193,196,192,-1,197,200,199,-1,199,198,197,-1,200,202,201,-1,203,189,190,-1,204,202,200,-1,205,203,196,-1,96,186,72,-1,192,191,194,-1,97,194,186,-1,207,206,100,-1,101,208,103,-1,206,195,194,-1,104,206,97,-1,97,206,194,-1,208,198,209,-1,198,199,209,-1,187,211,210,-1,211,212,210,-1,190,192,213,-1,203,190,213,-1,216,215,214,-1,217,189,203,-1,205,217,203,-1,215,216,218,-1,215,218,219,-1,220,196,197,-1,220,205,196,-1,18,69,221,-1,222,19,18,-1,18,221,222,-1,221,69,67,-1,67,223,221,-1,223,67,63,-1,63,224,223,-1,221,223,225,-1,225,222,221,-1,224,226,225,-1,225,223,224,-1,11,224,63,-1,63,12,11,-1,13,226,224,-1,224,11,13,-1,227,182,133,-1,222,227,133,-1,133,19,222,-1,227,228,179,-1,179,182,227,-1,228,229,176,-1,176,179,228,-1,227,222,225,-1,225,228,227,-1,229,228,225,-1,225,230,229,-1,128,129,176,-1,176,229,128,-1,130,128,229,-1,229,230,130,-1,233,232,231,-1,235,234,232,-1,234,235,236,-1,239,238,237,-1,239,237,240,-1,239,240,241,-1,241,235,239,-1,235,241,236,-1,243,242,234,-1,238,243,234,-1,243,244,242,-1,232,234,231,-1,231,234,245,-1,246,233,231,-1,231,247,246,-1,247,246,233,-1,231,247,233,-1,248,251,250,-1,250,249,248,-1,234,242,245,-1,235,232,252,-1,252,232,233,-1,252,239,235,-1,253,233,246,-1,254,248,249,-1,255,248,254,-1,256,252,233,-1,245,257,231,-1,258,231,257,-1,261,260,259,-1,261,259,262,-1,263,266,265,-1,265,264,263,-1,263,264,268,-1,268,267,263,-1,268,270,269,-1,269,267,268,-1,267,269,272,-1,272,271,267,-1,273,274,246,-1,246,247,273,-1,258,275,273,-1,273,247,258,-1,247,231,258,-1,278,277,276,-1,276,277,269,-1,279,259,260,-1,276,269,279,-1,271,281,280,-1,280,267,271,-1,280,282,267,-1,277,272,269,-1,284,287,286,-1,286,285,284,-1,288,287,281,-1,281,271,288,-1,286,249,250,-1,250,285,286,-1,290,289,286,-1,278,291,277,-1,292,291,278,-1,287,284,283,-1,295,294,293,-1,296,293,294,-1,289,296,294,-1,296,289,290,-1,277,291,297,-1,298,288,271,-1,271,272,298,-1,299,300,288,-1,288,298,299,-1,277,297,298,-1,298,272,277,-1,299,298,297,-1,297,301,299,-1,303,290,302,-1,305,293,304,-1,303,306,296,-1,296,290,303,-1,296,306,304,-1,304,293,296,-1,300,307,288,-1,307,287,288,-1,290,286,302,-1,301,297,291,-1,291,308,301,-1,302,286,287,-1,309,287,307,-1,293,310,295,-1,310,293,305,-1,254,249,311,-1,308,291,292,-1,292,310,308,-1,310,305,308,-1,310,292,295,-1,289,312,286,-1,289,311,312,-1,311,249,312,-1,312,249,286,-1,282,266,263,-1,263,267,282,-1,313,292,278,-1,313,295,292,-1,314,255,313,-1,314,248,255,-1,315,233,253,-1,256,233,316,-1,316,233,315,-1,317,270,259,-1,279,317,259,-1,269,317,279,-1,269,270,317,-1,238,244,243,-1,313,255,295,-1,255,318,295,-1,295,318,294,-1});
  }
}
private class MFInt32118 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {255,254,318,-1,311,318,254,-1,294,318,311,-1,311,289,294,-1,304,306,299,-1,307,300,303,-1,300,299,306,-1,304,299,301,-1,306,303,300,-1,321,320,319,-1,320,321,270,-1,308,305,304,-1,301,308,304,-1,307,303,309,-1,270,321,262,-1,270,262,259,-1,252,322,239,-1,252,256,322,-1,231,232,233,-1,232,234,235,-1,236,235,234,-1,237,238,239,-1,240,237,239,-1,239,235,241,-1,241,240,239,-1,236,241,235,-1,234,242,243,-1,234,243,238,-1,242,244,243,-1,231,234,232,-1,245,234,231,-1,246,247,231,-1,231,233,246,-1,233,246,247,-1,233,247,231,-1,323,324,250,-1,250,251,323,-1,245,242,234,-1,252,232,235,-1,233,232,252,-1,235,239,252,-1,246,233,253,-1,324,323,325,-1,325,323,326,-1,233,252,256,-1,231,257,245,-1,257,231,258,-1,329,328,327,-1,330,329,327,-1,331,332,265,-1,265,266,331,-1,331,334,333,-1,333,332,331,-1,333,334,336,-1,336,335,333,-1,334,338,337,-1,337,336,334,-1,273,247,246,-1,246,274,273,-1,258,247,273,-1,273,275,258,-1,258,231,247,-1,341,340,339,-1,336,340,341,-1,328,329,342,-1,342,336,341,-1,338,334,280,-1,280,343,338,-1,334,282,280,-1,336,337,340,-1,284,285,345,-1,345,344,284,-1,346,338,343,-1,343,344,346,-1,345,285,250,-1,250,324,345,-1,345,348,347,-1,340,349,339,-1,339,349,350,-1,283,284,344,-1,353,352,351,-1,352,353,354,-1,352,354,348,-1,347,348,354,-1,355,349,340,-1,356,337,338,-1,338,346,356,-1,357,356,346,-1,346,358,357,-1,340,337,356,-1,356,355,340,-1,357,359,355,-1,355,356,357,-1,361,347,360,-1,363,353,362,-1,360,347,354,-1,354,364,360,-1,354,353,363,-1,363,364,354,-1,346,365,358,-1,346,344,365,-1,361,345,347,-1,359,366,349,-1,349,355,359,-1,344,345,361,-1,365,344,367,-1,351,368,353,-1,362,353,368,-1,369,324,325,-1,366,368,350,-1,350,349,366,-1,366,362,368,-1,351,350,368,-1,345,370,348,-1,370,369,348,-1,370,324,369,-1,345,324,370,-1,331,266,282,-1,282,334,331,-1,339,350,371,-1,350,351,371,-1,371,326,372,-1,326,323,372,-1,253,233,315,-1,316,233,256,-1,315,233,316,-1,329,335,373,-1,329,373,342,-1,342,373,336,-1,373,335,336,-1,243,244,238,-1,351,326,371,-1,351,374,326,-1,352,374,351,-1,374,325,326,-1,325,374,369,-1,352,348,369,-1,369,374,352,-1,357,364,363,-1,360,358,365,-1,364,357,358,-1,359,357,363,-1,358,360,364,-1,319,376,375,-1,335,375,376,-1,363,362,366,-1,363,366,359,-1,367,360,365,-1,330,375,335,-1,329,330,335,-1,239,322,252,-1,322,256,252,-1,265,378,377,-1,377,264,265,-1,264,377,270,-1,270,268,264,-1,265,332,379,-1,379,378,265,-1,332,333,335,-1,335,379,332,-1,380,383,382,-1,382,381,380,-1,384,383,380,-1,380,385,384,-1,380,381,382,-1,382,383,380,-1,384,385,380,-1,380,383,384,-1,253,246,274,-1,274,100,253,-1,253,100,274,-1,274,246,253,-1});
  }
}
private class MFVec3f119 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.222f ,2.176f ,-0.5181f ,0f ,7.197f ,-6.644f ,0f ,2.571f ,-6.826f ,2.315f ,2.853f ,-6.435f ,5.19f ,3.62f ,-2.089f ,3.31f ,1.221f ,-2.134f ,2.908f ,1.425f ,-3.883f ,5.046f ,2.447f ,-1.86f ,1.623f ,1.278f ,-4.697f ,0f ,0.2518f ,-3.295f ,2.136f ,4.543f ,5.567f ,0.6921f ,4.509f ,6.046f ,0f ,8.815f ,6.025f ,3.931f ,8.336f ,3.184f ,0f ,10.16f ,4.947f ,1.984f ,9.841f ,4.638f ,5.317f ,4.065f ,0.9472f ,3.604f ,0.8767f ,3.05f ,1.758f ,8.691f ,5.577f ,2.262f ,6.373f ,5.581f ,3.294f ,6.059f ,4.623f ,0.399f ,6.676f ,6.474f ,0.4575f ,6.102f ,6.257f ,4.319f ,5.648f ,2.968f ,3.466f ,6.008f ,4.323f ,3.283f ,4.761f ,4.368f ,3.412f ,4.589f ,4.067f ,2.929f ,2.333f ,3.912f ,4.051f ,3.807f ,3.029f ,3.441f ,3.572f ,3.8f ,4.08f ,3.511f ,3.48f ,4.517f ,1.184f ,1.02f ,4.336f ,1.672f ,2.022f ,4.687f ,2.533f ,1.713f ,4.949f ,5.063f ,2.328f ,4.602f ,1.944f ,2.335f ,4.853f ,3.587f ,2.483f ,5.45f ,4.043f ,0.143f ,3.623f ,5.362f ,3.673f ,5.357f ,7.134f ,-0.5946f ,6.261f ,1.61f ,-0.9085f ,5.857f ,4.459f ,-0.7436f ,5.641f ,4.313f ,-1.474f ,5.556f ,0.8695f ,-3.16f ,4.439f ,4.913f ,-5.151f ,5.641f ,4.282f ,-2.723f ,3.76f ,3.185f ,-4.668f ,3.141f ,5.318f ,-6.483f ,3.054f ,1.788f ,-6.582f ,2.211f ,7.197f ,-6.117f ,1.719f ,1.896f ,-8.02f ,0f ,3.476f ,-7.631f ,4.979f ,6.987f ,-2.571f ,5.22f ,6.98f ,-1.672f ,4.62f ,7.688f ,1.785f ,2.709f ,9.748f ,3.871f ,4.569f ,2.833f ,-4.822f ,5.051f ,7.318f ,0.6887f ,4.21f ,7.197f ,-4.781f ,0f ,5.051f ,-7.195f ,2.211f ,5.319f ,-6.765f ,4.989f ,6.933f ,-2.001f ,0f ,0.2386f ,-7.477f ,1.046f ,1.763f ,-5.545f ,3.547f ,2.201f ,-4.229f ,2.601f ,-0.6988f ,-6.611f ,2.963f ,1.984f ,-4.882f ,1.755f ,-1.263f ,-4.562f ,0f ,-0.7123f ,-5.924f ,4.203f ,2.309f ,-3.193f ,3.941f ,-0.1316f ,-4.084f ,1.258f ,0.6232f ,-3.199f ,0f ,1.052f ,-5.47f ,2.029f ,0.9145f ,-3.447f ,0.8389f ,0.7626f ,-4.138f ,3.405f ,1.671f ,-2.891f ,4.159f ,1.793f ,-1.372f ,3.261f ,8.323f ,4.331f ,0f ,6.861f ,6.511f ,1.391f ,6.609f ,6.157f ,2.489f ,4.625f ,5.274f ,-4.222f ,2.176f ,-0.5181f ,-2.315f ,2.853f ,-6.435f ,-5.19f ,3.62f ,-2.089f ,-3.31f ,1.221f ,-2.134f ,-2.908f ,1.425f ,-3.883f ,-5.046f ,2.447f ,-1.86f ,-1.623f ,1.278f ,-4.697f ,-2.136f ,4.543f ,5.567f ,-0.6921f ,4.509f ,6.046f ,-3.931f ,8.336f ,3.184f ,-1.984f ,9.841f ,4.638f ,-5.317f ,4.065f ,0.9472f ,-3.604f ,0.8767f ,3.05f ,-1.758f ,8.691f ,5.577f ,-2.262f ,6.373f ,5.581f ,-3.294f ,6.059f ,4.623f ,-0.399f ,6.676f ,6.474f ,-0.4575f ,6.102f ,6.257f ,-4.319f ,5.648f ,2.968f ,-3.466f ,6.008f ,4.323f ,-3.283f ,4.761f ,4.368f ,-3.412f ,4.589f ,4.067f ,-2.929f ,2.333f ,3.912f ,-4.051f ,3.807f ,3.029f ,-3.441f ,3.572f ,3.8f ,-4.08f ,3.511f ,3.48f ,-4.517f ,1.184f ,1.02f ,-4.336f ,1.672f ,2.022f ,-4.687f ,2.533f ,1.713f ,-4.949f ,5.063f ,2.328f ,-4.602f ,1.944f ,2.335f ,-4.853f ,3.587f ,2.483f ,-5.45f ,4.043f ,0.143f ,-3.623f ,5.362f ,3.673f ,-5.357f ,7.134f ,-0.5946f ,-6.261f ,1.61f ,-0.9085f ,-5.857f ,4.459f ,-0.7436f ,-5.641f ,4.313f ,-1.474f ,-5.556f ,0.8695f ,-3.16f ,-4.439f ,4.913f ,-5.151f ,-5.641f ,4.282f ,-2.723f ,-3.76f ,3.185f ,-4.668f ,-3.141f ,5.318f ,-6.483f ,-3.054f ,1.788f ,-6.582f ,-2.211f ,7.197f ,-6.117f ,-1.719f ,1.896f ,-8.02f ,-4.979f ,6.987f ,-2.571f ,-5.22f ,6.98f ,-1.672f ,-4.62f ,7.688f ,1.785f ,-2.709f ,9.748f ,3.871f ,-4.569f ,2.833f ,-4.822f ,-5.051f ,7.318f ,0.6887f ,-4.21f ,7.197f ,-4.781f ,-2.211f ,5.319f ,-6.765f ,-4.989f ,6.933f ,-2.001f ,-1.046f ,1.763f ,-5.545f ,-3.547f ,2.201f ,-4.229f ,-2.601f ,-0.6988f ,-6.611f ,-2.963f ,1.984f ,-4.882f ,-1.755f ,-1.263f ,-4.562f ,-4.203f ,2.309f ,-3.193f ,-3.941f ,-0.1316f ,-4.084f ,-1.258f ,0.6232f ,-3.199f ,-2.029f ,0.9145f ,-3.447f ,-0.8389f ,0.7626f ,-4.138f ,-3.405f ,1.671f ,-2.891f ,-4.159f ,1.793f ,-1.372f ,-3.261f ,8.323f ,4.331f ,-1.391f ,6.609f ,6.157f ,-2.489f ,4.625f ,5.274f ,0f ,11.63f ,1.862f ,2.211f ,11.36f ,1.862f ,0f ,11.51f ,-2.832f ,2.211f ,11.73f ,-0.6185f ,0f ,11.99f ,-0.6185f ,2.211f ,11.25f ,-2.832f ,-2.211f ,11.36f ,1.862f ,-2.211f ,11.73f ,-0.6185f ,-2.211f ,11.25f ,-2.832f ,0f ,11f ,3.537f ,-2.211f ,10.65f ,3.176f ,2.211f ,10.65f ,3.176f ,-4.225f ,10.06f ,-0.6185f ,-4.085f ,9.572f ,1.596f ,4.225f ,10.06f ,-0.6185f ,4.085f ,9.572f ,1.596f ,-4.259f ,8.46f ,-3.886f ,4.259f ,8.46f ,-3.886f ,-4.147f ,9.888f ,-2.496f ,4.147f ,9.888f ,-2.496f ,0f ,9.854f ,-5.5f ,-2.211f ,9.566f ,-5.329f ,2.211f ,9.566f ,-5.329f ,4.492f ,1.99f ,0.143f ,4.772f ,2.153f ,0.1371f ,4.972f ,4.581f ,0.343f ,5.135f ,3.976f ,-0.6884f ,5.058f ,2.911f ,-0.7058f ,4.507f ,4.043f ,0.143f ,4.117f ,3.624f ,1.674f ,0f ,-1.03f ,3.727f ,2.235f ,0.3183f ,3f ,1.116f ,-0.4984f ,3.255f ,1.945f ,1.28f ,4.102f ,0.9662f ,-0.055f ,3.949f ,0f ,3.651f ,5.101f ,3.676f ,4.367f ,2.97f ,0f ,4.104f ,5.73f ,3.427f ,3.238f ,3.006f ,0.5571f ,3.952f ,5.452f ,3.464f ,4.891f ,3.604f ,0.2332f ,3.651f ,5.101f ,1.876f ,4.481f ,5.063f ,1.426f ,3.897f ,4.75f ,1.876f ,4.376f ,5.003f ,1.94f ,4.073f ,4.627f ,0.9465f ,2.663f ,4.581f ,2.983f ,2.631f ,3.463f ,2.262f ,2.574f ,3.974f ,2.749f ,3.322f ,3.659f ,3.003f ,3.765f ,3.524f ,0.9307f ,3.594f ,4.772f ,1.209f ,3.377f ,4.582f ,2.878f ,3.435f ,3.574f ,2.7f ,4.202f ,4.085f ,2.204f ,1.933f ,4.119f ,0.8199f ,2.229f ,4.707f ,0f ,2.802f ,5.144f ,3.135f ,2.09f ,3.146f ,3.286f ,3.897f ,3.378f ,0.9901f ,4.195f ,5.324f ,0f ,1.146f ,5.23f ,0.13f ,1.146f ,5.229f ,0.4095f ,1.415f ,4.857f ,0f ,1.692f ,5.982f ,2.889f ,4.705f ,4.217f ,0f ,-0.9679f ,3.096f ,3.071f ,1.218f ,2.763f ,0f ,5.995f ,5.73f ,1.759f ,6.091f ,5.052f ,3.166f ,5.897f ,4.064f ,1.003f ,6.052f ,5.459f ,2.496f ,0.3932f ,1.674f ,1.283f ,-0.5664f ,2.512f ,1.871f ,0.0736f ,0.2553f ,3.872f ,2.799f ,2.123f ,0f ,8.901f ,5.08f ,1.758f ,9.206f ,4.633f ,3.415f ,7.335f ,3.545f ,4.24f ,5.051f ,2.557f ,1.464f ,0.5323f ,4.104f ,0f ,2.097f ,5.657f ,2.492f ,3.311f ,3.918f ,1.637f ,3.328f ,4.377f ,2.892f ,4.756f ,4.212f ,3.633f ,1.746f ,1.236f ,3.632f ,1.5f ,-0.3157f ,4.279f ,4.065f ,0.9472f ,3.176f ,1.093f ,-1.478f ,0f ,0.6573f ,4.697f ,0.2001f ,0.6573f ,4.697f ,0f ,-0.0579f ,4.322f ,0f ,0.278f ,4.702f ,0f ,0.8415f ,5.119f ,0.3637f ,0.8168f ,5.021f ,0.2001f ,0.8415f ,5.119f ,1.055f ,0.576f ,4.273f ,1.511f ,3.785f ,4.712f ,1.946f ,3.93f ,4.509f ,2.619f ,4.028f ,4.063f ,-4.492f ,1.99f ,0.143f ,-4.772f ,2.153f ,0.1371f ,-4.972f ,4.581f ,0.343f ,-5.135f ,3.976f ,-0.6884f ,-5.058f ,2.911f ,-0.7058f ,-4.507f ,4.043f ,0.143f ,-4.117f ,3.624f ,1.674f ,-2.235f ,0.3183f ,3f ,-1.116f ,-0.4984f ,3.255f ,-1.945f ,1.28f ,4.102f ,-0.9662f ,-0.055f ,3.949f ,-3.676f ,4.367f ,2.97f ,-3.427f ,3.238f ,3.006f ,-0.5571f ,3.952f ,5.452f ,-3.464f ,4.891f ,3.604f ,-0.2332f ,3.651f ,5.101f ,-1.876f ,4.481f ,5.063f ,-1.426f ,3.897f ,4.75f ,-1.876f ,4.376f ,5.003f ,-1.94f ,4.073f ,4.627f ,-0.9465f ,2.663f ,4.581f ,-2.983f ,2.631f ,3.463f ,-2.262f ,2.574f ,3.974f ,-2.749f ,3.322f ,3.659f ,-3.003f ,3.765f ,3.524f ,-0.9307f ,3.594f ,4.772f ,-1.209f ,3.377f ,4.582f ,-2.878f ,3.435f ,3.574f ,-2.7f ,4.202f ,4.085f });
  }
}
private class MFVec3f120 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.204f ,1.933f ,4.119f ,-0.8199f ,2.229f ,4.707f ,-3.135f ,2.09f ,3.146f ,-3.286f ,3.897f ,3.378f ,-0.9901f ,4.195f ,5.324f ,-0.13f ,1.146f ,5.229f ,-0.4095f ,1.415f ,4.857f ,-2.889f ,4.705f ,4.217f ,-3.071f ,1.218f ,2.763f ,-1.759f ,6.091f ,5.052f ,-3.166f ,5.897f ,4.064f ,-1.003f ,6.052f ,5.459f ,-2.496f ,0.3932f ,1.674f ,-1.283f ,-0.5664f ,2.512f ,-1.871f ,0.0736f ,0.2553f ,-3.872f ,2.799f ,2.123f ,-1.758f ,9.206f ,4.633f ,-3.415f ,7.335f ,3.545f ,-4.24f ,5.051f ,2.557f ,-1.464f ,0.5323f ,4.104f ,-2.492f ,3.311f ,3.918f ,-1.637f ,3.328f ,4.377f ,-2.892f ,4.756f ,4.212f ,-3.633f ,1.746f ,1.236f ,-3.632f ,1.5f ,-0.3157f ,-4.279f ,4.065f ,0.9472f ,-3.176f ,1.093f ,-1.478f ,-0.2001f ,0.6573f ,4.697f ,-0.3637f ,0.8168f ,5.021f ,-0.2001f ,0.8415f ,5.119f ,-1.055f ,0.576f ,4.273f ,-1.511f ,3.785f ,4.712f ,-1.946f ,3.93f ,4.509f ,-2.619f ,4.028f ,4.063f ,0f ,0.6559f ,4.853f ,0.2001f ,0.6559f ,4.853f ,-0.2001f ,0.6559f ,4.853f ,-1.864f ,0.045f ,-1.544f ,1.864f ,0.045f ,-1.544f ,0f ,-0.437f ,1.275f ,0.399f ,6.676f ,6.474f ,0.6921f ,4.509f ,6.046f ,0.6921f ,4.509f ,6.046f ,0.399f ,6.676f ,6.474f ,-0.6921f ,4.509f ,6.046f ,-0.399f ,6.676f ,6.474f ,-0.399f ,6.676f ,6.474f ,-0.6921f ,4.509f ,6.046f ,1.283f ,-0.5664f ,2.512f ,1.871f ,0.0736f ,0.2553f ,2.496f ,0.3932f ,1.674f ,1.283f ,-0.5664f ,2.512f ,4.222f ,2.176f ,-0.5181f ,5.046f ,2.447f ,-1.86f ,4.222f ,2.176f ,-0.5181f ,3.31f ,1.221f ,-2.134f ,-3.176f ,1.093f ,-1.478f ,-1.871f ,0.0736f ,0.2553f ,-1.283f ,-0.5664f ,2.512f ,-2.496f ,0.3932f ,1.674f ,-5.046f ,2.447f ,-1.86f ,-4.222f ,2.176f ,-0.5181f ,-3.31f ,1.221f ,-2.134f ,-4.222f ,2.176f ,-0.5181f ,5.046f ,2.447f ,-1.86f ,0.4575f ,6.102f ,6.257f ,0f ,6.861f ,6.511f ,-5.046f ,2.447f ,-1.86f ,-0.4575f ,6.102f ,6.257f ,4.507f ,4.043f ,0.143f ,3.176f ,1.093f ,-1.478f ,-4.507f ,4.043f ,0.143f ,-1.283f ,-0.5664f ,2.512f ,-3.176f ,1.093f ,-1.478f ,0f ,6.861f ,6.511f ,3.176f ,1.093f ,-1.478f });
  }
}
private class MFVec2f121 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9175f ,0.8974f ,0.9509f ,0.8981f ,0.9421f ,0.8701f ,0.924f ,0.8702f ,0.9824f ,0.8971f ,0.9824f ,0.8682f ,0.9541f ,0.8718f ,0.9147f ,0.8129f ,0.9437f ,0.8153f ,0.9638f ,0.8095f ,0.9824f ,0.809f ,0.9461f ,0.923f ,0.9071f ,0.9135f ,0.9824f ,0.9287f ,0.7343f ,0.9169f ,0.7616f ,0.9147f ,0.7553f ,0.8982f ,0.7343f ,0.8968f ,0.7739f ,0.9327f ,0.7343f ,0.9365f ,0.8187f ,0.8433f ,0.8348f ,0.9045f ,0.8324f ,0.8647f ,0.74f ,0.8745f ,0.761f ,0.8768f ,0.7497f ,0.8755f ,0.777f ,0.8787f ,0.7647f ,0.8593f ,0.7596f ,0.8565f ,0.7438f ,0.8546f ,0.7343f ,0.8756f ,0.7372f ,0.8736f ,0.7394f ,0.8706f ,0.7405f ,0.8536f ,0.7808f ,0.8802f ,0.7786f ,0.8666f ,0.7875f ,0.8787f ,0.7821f ,0.8667f ,0.7952f ,0.9076f ,0.8011f ,0.8823f ,0.7745f ,0.9003f ,0.7939f ,0.8518f ,0.7845f ,0.8549f ,0.7731f ,0.8049f ,0.7979f ,0.8609f ,0.8185f ,0.8054f ,0.8439f ,0.8655f ,0.8131f ,0.8741f ,0.786f ,0.7876f ,0.8107f ,0.8538f ,0.8058f ,0.8252f ,0.8096f ,0.8166f ,0.8589f ,0.7975f ,0.8767f ,0.8622f ,0.8568f ,0.8668f ,0.8669f ,0.8674f ,0.9208f ,0.8549f ,0.8792f ,0.7991f ,0.8835f ,0.8633f ,0.9139f ,0.8636f ,0.9513f ,0.84f ,0.9824f ,0.8358f ,0.8845f ,0.9021f ,0.888f ,0.931f ,0.8761f ,0.9036f ,0.8705f ,0.9018f ,0.8544f ,0.902f ,0.8538f ,0.9345f ,0.8173f ,0.9068f ,0.8156f ,0.9257f ,0.7753f ,0.9186f ,0.7832f ,0.9041f ,0.7338f ,0.8385f ,0.7279f ,0.8339f ,0.7208f ,0.8401f ,0.7397f ,0.7767f ,0.7338f ,0.7681f ,0.7338f ,0.7727f ,0.7192f ,0.8201f ,0.7171f ,0.8352f ,0.7139f ,0.8364f ,0.7127f ,0.8419f ,0.7175f ,0.832f ,0.7247f ,0.8312f ,0.7224f ,0.8292f ,0.7239f ,0.8169f ,0.7146f ,0.8334f ,0.7152f ,0.8309f ,0.753f ,0.7762f ,0.7452f ,0.772f ,0.7409f ,0.7703f ,0.756f ,0.7661f ,0.7502f ,0.7748f ,0.7102f ,0.837f ,0.7574f ,0.7798f ,0.7054f ,0.8378f ,0.7338f ,0.8253f ,0.7338f ,0.8299f ,0.7267f ,0.8275f ,0.7291f ,0.8283f ,0.7338f ,0.8254f ,0.7338f ,0.7682f ,0.7385f ,0.7711f ,0.7338f ,0.7628f ,0.7338f ,0.82f ,0.7437f ,0.7597f ,0.7429f ,0.774f ,0.7484f ,0.7629f ,0.7505f ,0.778f ,0.7116f ,0.8233f ,0.7622f ,0.7806f ,0.7576f ,0.779f ,0.763f ,0.7872f ,0.7046f ,0.8444f ,0.7572f ,0.7769f ,0.7524f ,0.7737f ,0.7104f ,0.8341f ,0.5511f ,0.8974f ,0.5402f ,0.8731f ,0.5264f ,0.883f ,0.5177f ,0.911f ,0.5145f ,0.8847f ,0.4862f ,0.8812f ,0.4862f ,0.91f ,0.5538f ,0.8129f ,0.5249f ,0.8282f ,0.5048f ,0.8225f ,0.4862f ,0.8219f ,0.5225f ,0.936f ,0.5615f ,0.9135f ,0.4862f ,0.9416f ,0.7132f ,0.8982f ,0.707f ,0.9147f ,0.6947f ,0.9327f ,0.6362f ,0.8647f ,0.6338f ,0.9045f ,0.6499f ,0.8433f ,0.7286f ,0.8745f ,0.7189f ,0.8755f ,0.7076f ,0.8768f ,0.7039f ,0.8593f ,0.6916f ,0.8787f ,0.7247f ,0.8546f ,0.709f ,0.8565f ,0.7314f ,0.8736f ,0.7292f ,0.8706f ,0.728f ,0.8536f ,0.69f ,0.8666f ,0.6878f ,0.8802f ,0.6865f ,0.8667f ,0.6811f ,0.8787f ,0.6675f ,0.8823f ,0.6734f ,0.9076f ,0.6941f ,0.9003f ,0.6841f ,0.8549f ,0.6747f ,0.8518f ,0.6955f ,0.8049f ,0.6707f ,0.8609f ,0.65f ,0.8054f ,0.6247f ,0.8655f ,0.6555f ,0.8741f ,0.6826f ,0.7876f ,0.6628f ,0.8252f ,0.6579f ,0.8538f ,0.659f ,0.8166f ,0.5919f ,0.8622f ,0.6097f ,0.7975f ,0.6017f ,0.8674f ,0.6119f ,0.8668f ,0.5894f ,0.7991f ,0.5477f ,0.8549f ,0.5851f ,0.8633f ,0.5547f ,0.8636f ,0.5173f ,0.8529f ,0.4862f ,0.8488f ,0.5841f ,0.9021f ,0.5806f ,0.931f ,0.5925f ,0.9036f ,0.5981f ,0.9018f ,0.6148f ,0.9345f ,0.6142f ,0.902f ,0.6513f ,0.9068f ,0.653f ,0.9257f ,0.6932f ,0.9186f ,0.6854f ,0.9041f ,0.7468f ,0.8401f ,0.7397f ,0.8339f ,0.7279f ,0.7767f ,0.7484f ,0.8201f ,0.7549f ,0.8419f ,0.7538f ,0.8364f ,0.7505f ,0.8352f ,0.7502f ,0.832f ,0.7452f ,0.8292f ,0.7429f ,0.8312f ,0.7437f ,0.8169f ,0.753f ,0.8334f ,0.7524f ,0.8309f ,0.7267f ,0.7703f ,0.7224f ,0.772f ,0.7146f ,0.7762f ,0.7175f ,0.7748f ,0.7116f ,0.7661f ,0.7574f ,0.837f ,0.7102f ,0.7798f ,0.7622f ,0.8378f ,0.7385f ,0.8283f ,0.7409f ,0.8275f ,0.7291f ,0.7711f ,0.7239f ,0.7597f ,0.7192f ,0.7629f ,0.7247f ,0.774f ,0.7171f ,0.778f ,0.756f ,0.8233f ,0.7046f ,0.7872f ,0.71f ,0.779f ,0.7054f ,0.7806f ,0.763f ,0.8444f ,0.7104f ,0.7769f ,0.7152f ,0.7737f ,0.7572f ,0.8341f ,0.7881f ,0.9479f ,0.7343f ,0.9577f ,0.8497f ,0.9637f ,0.9158f ,0.9539f ,0.7343f ,0.9872f ,0.9824f ,0.9663f ,0.6805f ,0.9479f ,0.6189f ,0.9637f ,0.5528f ,0.9539f ,0.4862f ,0.9793f ,0.4275f ,0.6313f ,0.4434f ,0.6401f ,0.4526f ,0.6369f ,0.431f ,0.6421f ,0.4397f ,0.644f ,0.4398f ,0.6453f ,0.4381f ,0.6647f ,0.4333f ,0.6605f ,0.4397f ,0.6604f ,0.4463f ,0.6598f ,0.4465f ,0.6514f ,0.424f ,0.6505f ,0.4275f ,0.657f ,0.4205f ,0.6684f ,0.4189f ,0.6379f ,0.4388f ,0.6288f ,0.4209f ,0.6237f ,0.3384f ,0.9887f ,0.2979f ,0.9448f ,0.2441f ,0.9417f ,0.2441f ,0.9723f ,0.445f ,0.6455f ,0.4531f ,0.6286f ,0.3384f ,0.9469f ,0.414f ,0.9365f ,0.4578f ,0.6379f ,0.417f ,0.6307f ,0.415f ,0.6242f ,0.2959f ,0.626f ,0.3051f ,0.6166f ,0.258f ,0.6076f ,0.2606f ,0.6259f ,0.2511f ,0.6816f ,0.2548f ,0.6653f ,0.2441f ,0.6653f ,0.2441f ,0.6816f ,0.2661f ,0.696f ,0.2636f ,0.664f ,0.3484f ,0.6888f ,0.3007f ,0.651f ,0.2881f ,0.7397f ,0.3623f ,0.7239f ,0.4164f ,0.6206f ,0.4307f ,0.6247f ,0.4116f ,0.6201f ,0.4088f ,0.6855f ,0.4123f ,0.7323f ,0.4518f ,0.7703f ,0.364f ,0.6372f ,0.2441f ,0.7326f ,0.2496f ,0.7705f ,0.2441f ,0.7109f ,0.2441f ,0.7705f ,0.2441f ,0.816f ,0.2441f ,0.8403f ,0.274f ,0.8322f ,0.2566f ,0.816f ,0.2949f ,0.763f ,0.3447f ,0.8549f ,0.3206f ,0.8292f ,0.4279f ,0.7939f ,0.4413f ,0.8544f ,0.3889f ,0.8456f ,0.3991f ,0.8726f ,0.4299f ,0.8825f ,0.3482f ,0.8386f ,0.4041f ,0.7613f ,0.3654f ,0.7582f ,0.3778f ,0.7978f ,0.3319f ,0.7987f ,0.3916f ,0.7984f ,0.2943f ,0.815f ,0.3252f ,0.8232f ,0.3846f ,0.8362f ,0.4052f ,0.8221f ,0.3485f ,0.831f ,0.309f ,0.8013f ,0.3985f ,0.8044f ,0.2937f ,0.8109f ,0.4204f ,0.8292f ,0.3447f ,0.8606f ,0.2972f ,0.8452f ,0.4715f ,0.8911f ,0.431f ,0.9594f ,0.4671f ,0.6302f ,0.4663f ,0.6332f ,0.3226f ,0.6487f ,0.3993f ,0.8753f ,0.2441f ,0.6554f ,0.2548f ,0.6554f ,0.2557f ,0.6351f ,0.4557f ,0.6477f ,0.1498f ,0.9887f ,0.1903f ,0.9448f ,0.1498f ,0.9469f ,0.0742f ,0.9365f ,0.2323f ,0.6076f ,0.1853f ,0.6166f ,0.1923f ,0.626f ,0.2275f ,0.6259f ,0.2371f ,0.6816f ,0.2334f ,0.6653f ,0.2246f ,0.664f ,0.2221f ,0.696f ,0.1875f ,0.651f ,0.1398f ,0.6888f ,0.1258f ,0.7239f ,0.2001f ,0.7397f ,0.0364f ,0.7703f ,0.0759f ,0.7323f ,0.0794f ,0.6855f ,0.1242f ,0.6372f ,0.2386f ,0.7705f ,0.2316f ,0.816f ,0.2142f ,0.8322f ,0.1933f ,0.763f ,0.1676f ,0.8292f ,0.1435f ,0.8549f ,0.0602f ,0.7939f ,0.0469f ,0.8544f ,0.0583f ,0.8825f ,0.0891f ,0.8726f ,0.0992f ,0.8456f ,0.14f ,0.8386f ,0.084f ,0.7613f ,0.1228f ,0.7582f ,0.1104f ,0.7978f ,0.1563f ,0.7987f ,0.0966f ,0.7984f ,0.163f ,0.8232f ,0.1939f ,0.815f ,0.083f ,0.8221f ,0.1036f ,0.8362f ,0.1397f ,0.831f ,0.1792f ,0.8013f ,0.0897f ,0.8044f ,0.1944f ,0.8109f ,0.0678f ,0.8292f ,0.1435f ,0.8606f ,0.191f ,0.8452f ,0.0166f ,0.8911f ,0.0646f ,0.9594f ,0.1656f ,0.6487f ,0.0889f ,0.8753f ,0.2325f ,0.6351f ,0.2334f ,0.6554f ,0.2548f ,0.6553f ,0.2441f ,0.6553f ,0.2334f ,0.6553f ,0.4168f ,0.6329f ,0.3796f ,0.63f ,0.3997f ,0.6541f ,0.4337f ,0.6769f ,0.4455f ,0.6497f ,0.4293f ,0.6072f });
  }
}
}
