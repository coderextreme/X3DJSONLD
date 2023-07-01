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
public class KoreanCharacter05Ju {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new KoreanCharacter05Ju().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/KoreanCharacter05Ju.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("KoreanCharacter05Ju.x3d"))
        .addMeta(new meta().setName("creator").setContent("Jin Hoon Lee and Min Joo Lee"))
        .addMeta(new meta().setName("translator").setContent("Chul Hee Jung and Myeong Won Lee"))
        .addMeta(new meta().setName("created").setContent("31 March 2011"))
        .addMeta(new meta().setName("translated").setContent("1 November 2014"))
        .addMeta(new meta().setName("modified").setContent("23 December 2021"))
        .addMeta(new meta().setName("warning").setContent("HAnimJoint and HAnimSegment names upgraded to HAnim2 but graph topology has inconsistencies that do not match loa=1 specification hierarchy"))
        .addMeta(new meta().setName("description").setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacter00ReadMe.txt"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharactersIllustrated.pdf"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter05Ju.x3d"))
        .addMeta(new meta().setName("generator").setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"))
        .addMeta(new meta().setName("generator").setContent("Suwon University HAnim Editor"))
        .addMeta(new meta().setName("generator").setContent("Gnu Image Manipulation Program, http://www.gimp.org"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("KoreanCharacter05Ju.x3d"))
        .addChild(new NavigationInfo().setSpeed(1.5f))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,1f,0f}).setDescription("Ju").setPosition(new float[] {0f,1f,3f}))
        .addChild(new HAnimHumanoid().setName("Ju").setDEF("hanim_Ju").setScale(new float[] {0.0225f,0.0225f,0.0225f}).setVersion("2.0")
          .addComments("original HAnimHumanoid info='\"authorName=Chul Hee Jung and Myeong Won Lee\" \"authorEmail=myeongwonlee@gmail.com\" \"creationDate=31 March 2011\" \"humanoidVersion=2.0\" \"gender=female\" \"height=1.5\"'")
          .setMetadata(new MetadataSet("hanim_Ju").setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .setMetadata(new MetadataString().setName("authorName").setValue(new MFString0().getArray()))
            .setMetadata(new MetadataString().setName("authorEmail").setValue(new MFString1().getArray()))
            .setMetadata(new MetadataString().setName("creationDate").setValue(new MFString2().getArray()))
            .setMetadata(new MetadataString().setName("gender").setValue(new MFString3().getArray()))
            .addValue(new MetadataFloat().setName("height").setValue(new MFFloat4().getArray()))
            .setMetadata(new MetadataString().setName("humanoidVersion").setValue(new MFString5().getArray())))
          .addSkeleton(new HAnimJoint("hanim_Ju").setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new float[] {0f,36f,-0.008798f}).setUlimit(new MFFloat6().getArray()).setLlimit(new MFFloat7().getArray())
            .addChild(new HAnimSegment("hanim_humanoid_root").setName("sacrum").setDEF("hanim_sacrum")
              .addChild(new Transform("hanim_sacrum").setTranslation(new float[] {0f,36f,-0.008798f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                    .setTexture(new ImageTexture().setDEF("JuTextureAtlas").setUrl(new MFString8().getArray())))
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt329().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt3210().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f12().getArray()))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {3.22f,33.619999f,-0.2832f}).setUlimit(new MFFloat13().getArray()).setLlimit(new MFFloat14().getArray())
              .addChild(new HAnimSegment("hanim_l_hip").setName("l_thigh").setDEF("hanim_l_thigh")
                .addChild(new Transform("hanim_l_thigh").setTranslation(new float[] {3.22f,33.619999f,-0.2832f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                      .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3215().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt3216().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f18().getArray()))))))
              .addChild(new HAnimJoint("hanim_l_hip").setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {3.454f,18.67f,-0.02158f}).setUlimit(new MFFloat19().getArray()).setLlimit(new MFFloat20().getArray())
                .addChild(new HAnimSegment("hanim_l_knee").setName("l_calf").setDEF("hanim_l_calf")
                  .addChild(new Transform("hanim_l_calf").setTranslation(new float[] {3.454f,18.67f,-0.02158f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3221().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt3222().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f23().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f24().getArray()))))))
                .addChild(new HAnimJoint("hanim_l_knee").setName("l_talocrural").setDEF("hanim_l_talocrural").setCenter(new float[] {3.467f,3.522f,0.118f}).setUlimit(new MFFloat25().getArray()).setLlimit(new MFFloat26().getArray())
                  .addChild(new HAnimSegment("hanim_l_talocrural").setName("l_talus").setDEF("hanim_l_talus")
                    .addChild(new Transform("hanim_l_talus").setTranslation(new float[] {3.467f,3.522f,0.118f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3227().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt3228().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f29().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f30().getArray()))))))
                  .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_metatarsophalangeal_2").setDEF("hanim_l_metatarsophalangeal_2").setCenter(new float[] {3.467f,3.251f,1.465f}).setUlimit(new MFFloat31().getArray()).setLlimit(new MFFloat32().getArray())
                    .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setName("l_tarsal_proximal_phalanx_2").setDEF("hanim_l_tarsal_proximal_phalanx_2")
                      .addChild(new Transform("hanim_l_tarsal_proximal_phalanx_2").setTranslation(new float[] {3.467f,3.251f,1.465f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3233().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt3234().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f35().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f36().getArray()))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-3.22f,33.619999f,-0.2832f}).setUlimit(new MFFloat37().getArray()).setLlimit(new MFFloat38().getArray())
              .addChild(new HAnimSegment("hanim_r_hip").setName("r_thigh").setDEF("hanim_r_thigh")
                .addChild(new Transform("hanim_r_thigh").setTranslation(new float[] {-3.22f,33.619999f,-0.2832f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                      .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3239().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt3240().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f42().getArray()))))))
              .addChild(new HAnimJoint("hanim_r_hip").setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-3.454f,18.67f,-0.02158f}).setUlimit(new MFFloat43().getArray()).setLlimit(new MFFloat44().getArray())
                .addChild(new HAnimSegment("hanim_r_knee").setName("r_calf").setDEF("hanim_r_calf")
                  .addChild(new Transform("hanim_r_calf").setTranslation(new float[] {-3.454f,18.67f,-0.02158f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3245().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt3246().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f47().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f48().getArray()))))))
                .addChild(new HAnimJoint("hanim_r_knee").setName("r_talocrural").setDEF("hanim_r_talocrural").setCenter(new float[] {-3.679f,3.522f,0.118f}).setUlimit(new MFFloat49().getArray()).setLlimit(new MFFloat50().getArray())
                  .addChild(new HAnimSegment("hanim_r_talocrural").setName("r_talus").setDEF("hanim_r_talus")
                    .addChild(new Transform("hanim_r_talus").setTranslation(new float[] {-3.679f,3.522f,0.118f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3251().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt3252().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f54().getArray()))))))
                  .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new float[] {-3.679f,3.251f,1.465f}).setUlimit(new MFFloat55().getArray()).setLlimit(new MFFloat56().getArray())
                    .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2")
                      .addChild(new Transform("hanim_r_tarsal_proximal_phalanx_2").setTranslation(new float[] {-3.679f,3.251f,1.465f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3257().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt3258().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f60().getArray()))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0.000034f,31.26f,-0.008798f}).setUlimit(new MFFloat61().getArray()).setLlimit(new MFFloat62().getArray())
              .addChild(new HAnimSegment("hanim_sacroiliac").setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new Transform("hanim_pelvis").setTranslation(new float[] {0.000034f,31.26f,-0.008798f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                      .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3263().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt3264().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f65().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f66().getArray()))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {4.778f,51.029999f,-2.069f}).setUlimit(new MFFloat67().getArray()).setLlimit(new MFFloat68().getArray())
                .addChild(new HAnimSegment("hanim_l_shoulder").setName("l_upperarm").setDEF("hanim_l_upperarm")
                  .addChild(new Transform("hanim_l_upperarm").setTranslation(new float[] {4.778f,51.029999f,-2.069f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3269().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt3270().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f72().getArray()))))))
                .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {5.297f,40.119999f,-2.055f}).setUlimit(new MFFloat73().getArray()).setLlimit(new MFFloat74().getArray())
                  .addChild(new HAnimSegment("hanim_l_elbow").setName("l_forearm").setDEF("hanim_l_forearm")
                    .addChild(new Transform("hanim_l_forearm").setTranslation(new float[] {5.297f,40.119999f,-2.055f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3275().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt3276().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f78().getArray()))))))
                  .addChild(new HAnimJoint("hanim_l_elbow").setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setCenter(new float[] {5.07f,31.99f,-1.559f}).setUlimit(new MFFloat79().getArray()).setLlimit(new MFFloat80().getArray())
                    .addChild(new HAnimSegment("hanim_l_radiocarpal").setName("l_carpal").setDEF("hanim_l_carpal")
                      .addChild(new Transform("hanim_l_carpal").setTranslation(new float[] {5.07f,31.99f,-1.559f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3281().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt3282().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f83().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f84().getArray())))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-4.778f,51.029999f,-2.069f}).setUlimit(new MFFloat85().getArray()).setLlimit(new MFFloat86().getArray())
                .addChild(new HAnimSegment("hanim_r_shoulder").setName("r_upperarm").setDEF("hanim_r_upperarm")
                  .addChild(new Transform("hanim_r_upperarm").setTranslation(new float[] {-4.778f,51.029999f,-2.069f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3287().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt3288().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f89().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f90().getArray()))))))
                .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-5.297f,40.119999f,-2.055f}).setUlimit(new MFFloat91().getArray()).setLlimit(new MFFloat92().getArray())
                  .addChild(new HAnimSegment("hanim_r_elbow").setName("r_forearm").setDEF("hanim_r_forearm")
                    .addChild(new Transform("hanim_r_forearm").setTranslation(new float[] {-5.297f,40.119999f,-2.055f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3293().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt3294().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f95().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f96().getArray()))))))
                  .addChild(new HAnimJoint("hanim_r_elbow").setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setCenter(new float[] {-5.07f,31.99f,-1.559f}).setUlimit(new MFFloat97().getArray()).setLlimit(new MFFloat98().getArray())
                    .addChild(new HAnimSegment("hanim_r_radiocarpal").setName("r_carpal").setDEF("hanim_r_carpal")
                      .addChild(new Transform("hanim_r_carpal").setTranslation(new float[] {-5.07f,31.99f,-1.559f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3299().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt32100().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f101().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f102().getArray())))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0.000025f,39.84f,0.1163f}).setUlimit(new MFFloat103().getArray()).setLlimit(new MFFloat104().getArray())
                .addChild(new HAnimSegment("hanim_vl5").setName("l5").setDEF("hanim_l5")
                  .addChild(new Transform("hanim_l5").setTranslation(new float[] {0.000025f,39.84f,0.1163f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32105().getArray()).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt32106().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f107().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f108().getArray()))))))
                .addChild(new HAnimJoint("hanim_vl5").setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0.000025f,56.07f,-1.554f}).setUlimit(new MFFloat109().getArray()).setLlimit(new MFFloat110().getArray())
                  .addChild(new HAnimSegment("hanim_skullbase").setName("skull").setDEF("hanim_skull")
                    .addChild(new Transform("hanim_skull").setTranslation(new float[] {0.000025f,56.07f,-1.554f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JuTextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32111().getArray().append(new MFInt32112().getArray())).setCreaseAngle(1.57f).setTexCoordIndex(new MFInt32113().getArray().append(new MFInt32114().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f115().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f116().getArray()))))))))))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_sacroiliac"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_skullbase"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_vl5"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_l_hip"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_r_hip"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_l_radiocarpal"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_r_radiocarpal"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_l_talocrural"))
          .addJoints(new HAnimJoint("hanim_Ju").setUSE("hanim_r_talocrural"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_l5"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_sacrum"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_skull"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_l_carpal"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_r_carpal"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_l_talus"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_r_talus"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment("hanim_Ju").setUSE("hanim_r_upperarm"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Chul Hee Jung and Myeong Won Lee"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"myeongwonlee@gmail.com"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"31 March 2011"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"female"});
  }
}
protected class MFFloat4 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.5f});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"2.0"});
  }
}
protected class MFFloat6 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat7 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFString8 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/Ju.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Ju.png"});
  }
}
protected class MFInt329 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,0,-1,0,1,2,-1,4,5,3,-1,3,2,4,-1,6,7,5,-1,5,4,6,-1,8,9,7,-1,7,6,8,-1,10,11,9,-1,9,8,10,-1,12,13,11,-1,11,10,12,-1,14,15,13,-1,13,12,14,-1,16,17,15,-1,15,14,16,-1,18,19,17,-1,17,16,18,-1,20,21,19,-1,19,18,20,-1,22,23,21,-1,21,20,22,-1,1,0,23,-1,23,22,1,-1,25,2,1,-1,1,24,25,-1,26,4,2,-1,2,25,26,-1,27,6,4,-1,4,26,27,-1,28,8,6,-1,6,27,28,-1,29,10,8,-1,8,28,29,-1,30,12,10,-1,10,29,30,-1,31,14,12,-1,12,30,31,-1,32,16,14,-1,14,31,32,-1,33,18,16,-1,16,32,33,-1,34,20,18,-1,18,33,34,-1,35,22,20,-1,20,34,35,-1,24,1,22,-1,22,35,24,-1,37,25,24,-1,24,36,37,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,36,24,35,-1,35,47,36,-1,48,37,36,-1,48,38,37,-1,48,39,38,-1,48,40,39,-1,48,41,40,-1,48,42,41,-1,48,43,42,-1,48,44,43,-1,48,45,44,-1,48,46,45,-1,48,47,46,-1,48,36,47,-1,0,3,50,-1,50,49,0,-1,3,5,51,-1,51,50,3,-1,5,7,52,-1,52,51,5,-1,7,9,53,-1,53,52,7,-1,9,11,54,-1,54,53,9,-1,11,13,55,-1,55,54,11,-1,13,15,56,-1,56,55,13,-1,15,17,57,-1,57,56,15,-1,17,19,58,-1,58,57,17,-1,19,21,59,-1,59,58,19,-1,21,23,60,-1,60,59,21,-1,23,0,49,-1,49,60,23,-1,49,50,61,-1,50,51,61,-1,51,52,61,-1,52,53,61,-1,53,54,61,-1,54,55,61,-1,55,56,61,-1,56,57,61,-1,57,58,61,-1,58,59,61,-1,59,60,61,-1,60,49,61,-1});
  }
}
protected class MFInt3210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,0,-1,0,1,2,-1,4,5,3,-1,3,2,4,-1,6,7,5,-1,5,4,6,-1,8,9,7,-1,7,6,8,-1,10,11,9,-1,9,8,10,-1,12,13,11,-1,11,10,12,-1,14,15,13,-1,13,12,14,-1,16,17,15,-1,15,14,16,-1,18,19,17,-1,17,16,18,-1,20,21,19,-1,19,18,20,-1,22,23,21,-1,21,20,22,-1,1,0,23,-1,23,22,1,-1,25,2,1,-1,1,24,25,-1,26,4,2,-1,2,25,26,-1,27,6,4,-1,4,26,27,-1,28,8,6,-1,6,27,28,-1,29,10,8,-1,8,28,29,-1,30,12,10,-1,10,29,30,-1,31,14,12,-1,12,30,31,-1,32,16,14,-1,14,31,32,-1,33,18,16,-1,16,32,33,-1,34,20,18,-1,18,33,34,-1,35,22,20,-1,20,34,35,-1,24,1,22,-1,22,35,24,-1,37,25,24,-1,24,36,37,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,36,24,35,-1,35,47,36,-1,48,37,36,-1,48,38,37,-1,48,39,38,-1,48,40,39,-1,48,41,40,-1,48,42,41,-1,48,43,42,-1,48,44,43,-1,48,45,44,-1,48,46,45,-1,48,47,46,-1,48,36,47,-1,0,3,50,-1,50,49,0,-1,3,5,51,-1,51,50,3,-1,5,7,52,-1,52,51,5,-1,7,9,53,-1,53,52,7,-1,9,11,54,-1,54,53,9,-1,11,13,55,-1,55,54,11,-1,13,15,56,-1,56,55,13,-1,15,17,57,-1,57,56,15,-1,17,19,58,-1,58,57,17,-1,19,21,59,-1,59,58,19,-1,21,23,60,-1,60,59,21,-1,23,0,49,-1,49,60,23,-1,49,50,61,-1,50,51,61,-1,51,52,61,-1,52,53,61,-1,53,54,61,-1,54,55,61,-1,55,56,61,-1,56,57,61,-1,57,58,61,-1,58,59,61,-1,59,60,61,-1,60,49,61,-1});
  }
}
protected class MFVec3f11 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.4454f,-0.7459f,0f,0.0007f,-0.815f,-0.5564f,0.0003f,-0.695f,-0.4789f,0.4454f,-0.6425f,-0.9644f,-0.0008f,-0.4321f,-0.8298f,0.4454f,-0.3599f,-1.113f,-0.0019f,0.0252f,-0.958f,0.4454f,0.0246f,-0.967f,-0.0019f,0.4693f,-0.8331f,0.4454f,0.3868f,-0.5615f,-0.0019f,0.6928f,-0.4847f,0.4454f,0.5842f,0f,-0.0021f,0.815f,0f,0.4454f,0.7124f,0.5615f,-0.0023f,0.6928f,0.4843f,0.4454f,0.5843f,0.967f,-0.0023f,0.4693f,0.8333f,0.4454f,0.3864f,1.113f,-0.0021f,0.0254f,0.9579f,0.4454f,0.025f,0.9643f,-0.001f,-0.4322f,0.8295f,0.4454f,-0.3602f,0.5564f,0.0003f,-0.695f,0.4789f,0.4454f,-0.6425f,0f,-0.4517f,-0.6943f,-0.482f,-0.4521f,-0.5899f,-0.8344f,-0.4524f,-0.3056f,-0.9635f,-0.4517f,0.0254f,-0.8367f,-0.4526f,0.4089f,-0.4855f,-0.4549f,0.587f,0f,-0.4553f,0.6926f,0.4853f,-0.4539f,0.5876f,0.8372f,-0.4519f,0.4089f,0.9634f,-0.4519f,0.0254f,0.8348f,-0.4521f,-0.3053f,0.4817f,-0.4517f,-0.5903f,0f,-0.7806f,-0.3645f,-0.2802f,-0.7803f,-0.3039f,-0.481f,-0.7808f,-0.1965f,-0.5545f,-0.7803f,0.0248f,-0.4804f,-0.7802f,0.248f,-0.2774f,-0.7821f,0.4083f,0f,-0.783f,0.4674f,0.2758f,-0.7826f,0.4083f,0.4803f,-0.7808f,0.2466f,0.5547f,-0.7802f,0.0246f,0.4812f,-0.7814f,-0.1946f,0.2787f,-0.7807f,-0.3037f,0f,-0.8996f,0.0253f,-0.0001f,0.7482f,-0.476f,-0.3509f,0.7482f,-0.4061f,-0.5969f,0.7482f,-0.2229f,-0.6804f,0.7482f,0.0088f,-0.6042f,0.7482f,0.2133f,-0.3645f,0.7482f,0.3391f,-0.0001f,0.7482f,0.4284f,0.364f,0.7482f,0.3391f,0.6042f,0.7482f,0.213f,0.6802f,0.7482f,0.0091f,0.5965f,0.7482f,-0.2231f,0.3508f,0.7482f,-0.4061f,-0.0002f,0.8996f,-0.0243f});
  }
}
protected class MFVec2f12 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.995f,0.6227f,0.9911f,0.5634f,0.9445f,0.5634f,0.9587f,0.6143f,0.8611f,0.5667f,0.8645f,0.6158f,0.8296f,0.5725f,0.8297f,0.6181f,0.7843f,0.5725f,0.7986f,0.6221f,0.7343f,0.5716f,0.7402f,0.6181f,0.6899f,0.5733f,0.7033f,0.6238f,0.7343f,0.5716f,0.7402f,0.6181f,0.7843f,0.5724f,0.7986f,0.6221f,0.8296f,0.5725f,0.8297f,0.6181f,0.8611f,0.5667f,0.8646f,0.6158f,0.9445f,0.5634f,0.9587f,0.6143f,0.9874f,0.5161f,0.9409f,0.5169f,0.8667f,0.527f,0.8296f,0.5279f,0.7882f,0.5304f,0.7381f,0.5276f,0.6693f,0.5234f,0.738f,0.5277f,0.7882f,0.5305f,0.8296f,0.5279f,0.8666f,0.5271f,0.9409f,0.517f,0.9852f,0.4793f,0.8833f,0.4954f,0.8658f,0.4954f,0.8297f,0.4954f,0.7933f,0.4954f,0.7672f,0.4952f,0.6706f,0.4859f,0.7672f,0.4952f,0.7936f,0.4954f,0.8297f,0.4954f,0.8655f,0.4953f,0.8832f,0.4954f,0.8296f,0.4836f,0.995f,0.6227f,0.9587f,0.6143f,0.8645f,0.6158f,0.8297f,0.6181f,0.7986f,0.6221f,0.7402f,0.6181f,0.7033f,0.6238f,0.7402f,0.6181f,0.7986f,0.6221f,0.8297f,0.6181f,0.8646f,0.6158f,0.9587f,0.6143f,0.8402f,0.6186f});
  }
}
protected class MFFloat13 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat14 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {33,32,31,-1,31,30,29,-1,31,29,28,-1,33,31,28,-1,34,33,28,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,28,29,1,-1,1,0,28,-1,29,30,2,-1,2,1,29,-1,30,31,3,-1,3,2,30,-1,31,32,4,-1,4,3,31,-1,32,33,5,-1,5,4,32,-1,33,34,6,-1,6,5,33,-1,34,28,0,-1,0,6,34,-1,21,22,35,-1,35,36,21,-1,22,23,37,-1,37,35,22,-1,23,24,38,-1,38,37,23,-1,24,25,39,-1,39,38,24,-1,25,26,40,-1,40,39,25,-1,26,27,41,-1,41,40,26,-1,27,21,36,-1,36,41,27,-1,36,35,42,-1,42,43,36,-1,35,37,44,-1,44,42,35,-1,37,38,45,-1,45,44,37,-1,38,39,46,-1,46,45,38,-1,39,40,47,-1,47,46,39,-1,40,41,48,-1,48,47,40,-1,41,36,43,-1,43,48,41,-1,43,42,49,-1,42,44,49,-1,44,45,49,-1,45,46,49,-1,46,47,49,-1,47,48,49,-1,48,43,49,-1});
  }
}
protected class MFInt3216 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,29,28,35,-1,35,36,29,-1,28,30,37,-1,37,35,28,-1,30,31,38,-1,38,37,30,-1,31,32,39,-1,39,38,31,-1,32,33,40,-1,40,39,32,-1,33,34,41,-1,41,40,33,-1,34,29,36,-1,36,41,34,-1,36,35,42,-1,42,43,36,-1,35,37,44,-1,44,42,35,-1,37,38,45,-1,45,44,37,-1,38,39,46,-1,46,45,38,-1,39,40,47,-1,47,46,39,-1,40,41,48,-1,48,47,40,-1,41,36,43,-1,43,48,41,-1,43,42,49,-1,42,44,49,-1,44,45,49,-1,45,46,49,-1,46,47,49,-1,47,48,49,-1,48,43,49,-1});
  }
}
protected class MFVec3f17 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.617f,2.231f,0.2976f,1.527f,2.231f,2.592f,-0.9211f,2.231f,3.159f,-2.617f,2.231f,1.571f,-2.617f,2.231f,-1.571f,-0.9211f,2.231f,-3.159f,1.527f,2.231f,-2.29f,2.617f,-1.238f,0.2976f,1.527f,-1.238f,2.592f,-0.9211f,-1.238f,3.159f,-2.617f,-1.238f,1.571f,-2.617f,-1.238f,-0.9758f,-0.9211f,-1.238f,-3.009f,1.527f,-1.238f,-2.442f,2.617f,-6.593f,0.2976f,1.527f,-6.593f,2.58f,-0.9211f,-6.593f,3.147f,-2.617f,-6.593f,1.571f,-2.617f,-6.593f,-0.9758f,-0.9211f,-6.593f,-2.564f,1.527f,-6.593f,-1.997f,2.264f,-11.92f,0.2976f,1.321f,-11.92f,2.282f,-0.7969f,-11.92f,2.773f,-2.046f,-11.92f,1.399f,-2.046f,-11.92f,-0.8039f,-0.7969f,-11.92f,-2.177f,1.321f,-11.92f,-1.687f,1.864f,4.073f,0.2976f,1.058f,4.073f,1.995f,-0.7536f,4.073f,2.415f,-2.206f,4.073f,1.24f,-2.206f,4.073f,-0.6446f,-0.7536f,4.073f,-1.819f,1.058f,4.073f,-1.4f,1.033f,-14.67f,1.883f,1.786f,-14.67f,0.2976f,-0.6591f,-14.67f,2.275f,-1.657f,-14.67f,1.178f,-1.657f,-14.67f,-0.5825f,-0.6591f,-14.67f,-1.68f,1.033f,-14.67f,-1.288f,0.4256f,-15.99f,1.041f,0.7788f,-15.99f,0.2976f,-0.3682f,-15.99f,1.225f,-0.8362f,-15.99f,0.7104f,-0.8362f,-15.99f,-0.1152f,-0.3682f,-15.99f,-0.63f,0.4256f,-15.99f,-0.4463f,-0.1114f,-16.17f,0.2976f});
  }
}
protected class MFVec2f18 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7387f,0.5078f,0.7519f,0.5078f,0.7092f,0.5078f,0.6855f,0.5078f,0.6855f,0.5078f,0.7092f,0.5078f,0.7387f,0.5078f,0.7641f,0.4868f,0.7464f,0.4472f,0.7641f,0.4472f,0.7464f,0.4868f,0.7065f,0.4472f,0.7065f,0.4868f,0.6788f,0.4472f,0.6788f,0.4868f,0.6788f,0.4472f,0.6788f,0.4868f,0.7065f,0.4472f,0.7065f,0.4868f,0.7464f,0.4472f,0.7464f,0.4868f,0.7464f,0.3861f,0.7641f,0.3861f,0.7065f,0.3861f,0.6788f,0.3861f,0.6788f,0.3861f,0.7065f,0.3861f,0.7464f,0.3861f,0.743f,0.3252f,0.7584f,0.3252f,0.7085f,0.3252f,0.6882f,0.3252f,0.6882f,0.3252f,0.7085f,0.3252f,0.743f,0.3252f,0.7383f,0.2938f,0.7506f,0.2938f,0.7107f,0.2938f,0.6945f,0.2938f,0.6945f,0.2938f,0.7107f,0.2938f,0.7383f,0.2938f,0.7284f,0.2787f,0.7342f,0.2787f,0.7155f,0.2787f,0.7079f,0.2787f,0.7079f,0.2787f,0.7155f,0.2787f,0.7284f,0.2787f,0.7197f,0.2768f});
  }
}
protected class MFFloat19 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat20 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,2,1,0,-1,4,2,0,-1,5,4,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
protected class MFInt3222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,2,1,0,-1,4,2,0,-1,5,4,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
protected class MFVec3f23 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.7406f,0.9639f,0.0216f,0.4117f,0.9639f,0.8655f,-0.3272f,0.9639f,1.036f,-0.9197f,0.9639f,0.5579f,-0.9197f,0.9639f,-0.3619f,-0.3272f,0.9639f,-0.8401f,0.4117f,0.9639f,-0.6694f,2.238f,-4.201f,0.0216f,1.426f,-3.284f,1.868f,1.219f,-1.439f,2.239f,2.036f,-1.701f,0.0216f,-0.6748f,-3.284f,2.375f,-0.6153f,-1.439f,2.686f,-2.01f,-4.201f,1.161f,-2.086f,-1.701f,0.9061f,-2.01f,-4.913f,-1.265f,-2.086f,-1.701f,-0.8628f,-0.6748f,-4.913f,-2.686f,-0.6153f,-1.701f,-2.191f,1.426f,-4.913f,-2.179f,1.219f,-1.701f,-1.744f,1.112f,0.0646f,1.755f,1.864f,0.0646f,0.0216f,-0.5772f,0.0646f,2.145f,-1.932f,0.0646f,1.051f,-1.932f,0.0646f,-0.8553f,-0.5772f,0.0646f,-1.907f,1.112f,0.0646f,-1.517f,2.345f,-14.69f,-0.0151f,1.416f,-14.67f,2.102f,-0.6712f,-14.67f,2.624f,-2.345f,-14.69f,1.16f,-2.345f,-14.71f,-1.342f,-0.6712f,-14.71f,-2.38f,1.416f,-14.71f,-1.857f,0.73f,-16.18f,0.0221f,0.4092f,-16.17f,0.7532f,-0.3118f,-16.17f,0.9337f,-0.89f,-16.18f,0.4278f,-0.89f,-16.19f,-0.4362f,-0.3118f,-16.19f,-0.7945f,0.4092f,-16.19f,-0.614f});
  }
}
protected class MFVec2f24 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7637f,0.172f,0.755f,0.172f,0.7356f,0.172f,0.72f,0.172f,0.72f,0.172f,0.7356f,0.172f,0.755f,0.172f,0.8032f,0.2271f,0.7818f,0.2173f,0.7763f,0.1976f,0.7978f,0.2004f,0.7264f,0.2173f,0.728f,0.1976f,0.6912f,0.2271f,0.6892f,0.2004f,0.6912f,0.2347f,0.6892f,0.2004f,0.7264f,0.2347f,0.728f,0.2004f,0.7818f,0.2347f,0.7763f,0.2004f,0.7735f,0.1816f,0.7933f,0.1816f,0.729f,0.1816f,0.6933f,0.1816f,0.6933f,0.1816f,0.729f,0.1816f,0.7735f,0.1816f,0.806f,0.339f,0.7815f,0.3388f,0.7265f,0.3388f,0.6824f,0.339f,0.6824f,0.3392f,0.7265f,0.3392f,0.7815f,0.3392f,0.7634f,0.3549f,0.755f,0.3548f,0.736f,0.3548f,0.7207f,0.3549f,0.7207f,0.355f,0.736f,0.355f,0.755f,0.355f});
  }
}
protected class MFFloat25 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat26 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,11,12,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,18,2,0,-1,0,17,18,-1,0,1,25,-1,25,17,0,-1,25,1,12,-1,7,13,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,18,21,10,-1,10,2,18,-1,10,21,27,-1,27,7,10,-1,27,13,7,-1,12,11,37,-1,37,35,12,-1,11,13,36,-1,36,37,11,-1,20,18,17,-1,17,14,20,-1,23,14,17,-1,17,25,23,-1,16,20,14,-1,14,15,16,-1,24,15,14,-1,14,23,24,-1,15,24,29,-1,29,16,15,-1,20,19,21,-1,21,18,20,-1,26,27,21,-1,21,19,26,-1,16,22,19,-1,19,20,16,-1,28,26,19,-1,19,22,28,-1,22,16,29,-1,29,28,22,-1,36,32,33,-1,34,30,31,-1,33,34,31,-1,36,33,31,-1,36,31,35,-1,24,23,31,-1,31,30,24,-1,23,25,35,-1,35,31,23,-1,27,26,32,-1,32,36,27,-1,26,28,33,-1,33,32,26,-1,28,29,34,-1,34,33,28,-1,29,24,30,-1,30,34,29,-1,36,35,37,-1,12,35,25,-1,27,36,13,-1});
  }
}
protected class MFInt3228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,18,14,25,-1,25,24,18,-1,15,23,26,-1,26,25,15,-1,29,33,32,-1,32,27,29,-1,41,27,32,-1,32,43,41,-1,30,29,27,-1,27,28,30,-1,42,28,27,-1,27,41,42,-1,28,42,48,-1,48,31,28,-1,35,34,37,-1,37,36,35,-1,44,45,37,-1,37,34,44,-1,39,38,34,-1,34,35,39,-1,46,44,34,-1,34,38,46,-1,38,40,47,-1,47,46,38,-1,52,53,54,-1,55,49,50,-1,54,55,50,-1,52,54,50,-1,52,50,51,-1,42,41,50,-1,50,49,42,-1,41,43,51,-1,51,50,41,-1,45,44,53,-1,53,52,45,-1,44,46,54,-1,54,53,44,-1,46,47,55,-1,55,54,46,-1,48,42,49,-1,49,55,48,-1,52,51,56,-1,18,24,43,-1,22,52,23,-1});
  }
}
protected class MFVec3f29 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.8966f,-0.0174f,-1.568f,1.521f,-0.0174f,0.4019f,0f,-0.0174f,-1.568f,1.288f,0.6634f,0.3302f,0.7503f,0.6634f,-1.364f,0f,0.6634f,-1.364f,0f,0.6634f,1.372f,-1.521f,-0.0174f,0.4019f,-1.288f,0.6634f,0.3302f,-0.7503f,0.6634f,-1.364f,-0.8967f,-0.0174f,-1.568f,0f,-0.0174f,1.633f,1.556f,-0.2684f,1.333f,-1.556f,-0.2684f,1.333f,1.293f,-1.746f,-2.684f,1.293f,-3.579f,-1.568f,0f,-3.579f,-1.568f,1.018f,-0.5447f,-1.908f,0f,-0.5447f,-1.908f,-1.293f,-1.746f,-2.684f,0f,-1.746f,-2.684f,-1.018f,-0.5447f,-1.908f,-1.293f,-3.579f,-1.568f,2.687f,-1.746f,0.4019f,1.918f,-3.579f,0.4019f,1.877f,-0.5447f,0.4019f,-2.687f,-1.746f,0.4019f,-1.877f,-0.5447f,0.4019f,-1.918f,-3.579f,0.4019f,0f,-3.579f,0.4019f,1.708f,-3.439f,1.272f,2.332f,-1.78f,1.272f,-2.332f,-1.78f,1.272f,-1.708f,-3.439f,1.272f,0f,-3.439f,1.272f,1.469f,-0.8455f,1.311f,-1.469f,-0.8455f,1.311f,0f,-0.5969f,1.593f});
  }
}
protected class MFVec2f30 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4269f,0.4898f,0.4623f,0.4901f,0.4269f,0.4898f,0.4623f,0.4901f,0.4269f,0.4898f,0.4269f,0.4898f,0.4777f,0.4914f,0.4623f,0.4901f,0.4777f,0.4914f,0.4623f,0.4901f,0.4269f,0.4898f,0.4269f,0.4898f,0.4269f,0.4898f,0.4269f,0.4898f,0.4777f,0.4914f,0.4777f,0.4914f,0.4309f,0.4635f,0.4687f,0.4544f,0.4611f,0.4911f,0.4284f,0.4641f,0.4284f,0.4641f,0.4309f,0.4635f,0.4687f,0.4544f,0.4611f,0.4911f,0.4611f,0.4911f,0.4777f,0.4914f,0.4611f,0.4911f,0.4321f,0.4164f,0.4315f,0.3728f,0.4321f,0.4164f,0.4315f,0.3728f,0.4315f,0.3728f,0.4309f,0.4635f,0.4284f,0.4641f,0.4321f,0.4164f,0.4321f,0.4164f,0.4284f,0.4641f,0.4309f,0.4635f,0.4315f,0.3728f,0.4315f,0.3728f,0.4315f,0.3728f,0.4804f,0.417f,0.4726f,0.3714f,0.4687f,0.4544f,0.4804f,0.417f,0.4687f,0.4544f,0.4726f,0.3714f,0.4726f,0.3714f,0.4726f,0.3714f,0.4726f,0.3714f,0.4804f,0.417f,0.4687f,0.4544f,0.4687f,0.4544f,0.4804f,0.417f,0.4726f,0.3714f,0.4726f,0.3714f,0.4687f,0.4544f});
  }
}
protected class MFFloat31 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat32 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,25,-1,3,25,26,-1,0,3,26,-1,1,0,26,-1,26,10,1,-1,1,10,12,-1,12,9,1,-1,2,34,25,-1,25,4,2,-1,31,8,6,-1,32,31,6,-1,5,32,6,-1,7,11,32,-1,32,5,7,-1,7,9,12,-1,12,11,7,-1,2,8,31,-1,31,34,2,-1,15,16,17,-1,15,17,18,-1,15,18,19,-1,14,15,19,-1,14,19,13,-1,0,1,14,-1,14,13,0,-1,1,9,15,-1,15,14,1,-1,9,7,16,-1,16,15,9,-1,7,5,17,-1,17,16,7,-1,5,6,18,-1,18,17,5,-1,6,3,19,-1,19,18,6,-1,3,0,13,-1,13,19,3,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1,23,21,20,-1,20,24,23,-1,29,22,21,-1,21,23,29,-1,22,29,33,-1,20,21,26,-1,26,25,20,-1,26,21,22,-1,22,10,26,-1,10,22,33,-1,33,12,10,-1,34,24,20,-1,20,25,34,-1,23,24,28,-1,28,27,23,-1,29,23,27,-1,27,30,29,-1,30,33,29,-1,28,31,32,-1,32,27,28,-1,32,11,30,-1,30,27,32,-1,11,12,33,-1,33,30,11,-1,34,31,28,-1,28,24,34,-1});
  }
}
protected class MFInt3234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,18,-1,18,3,1,-1,2,20,12,-1,12,5,2,-1,12,10,7,-1,15,12,7,-1,6,15,7,-1,8,16,15,-1,15,6,8,-1,8,11,17,-1,17,16,8,-1,9,10,12,-1,12,19,9,-1,23,24,25,-1,23,25,26,-1,23,26,27,-1,22,23,27,-1,22,27,21,-1,0,1,22,-1,22,21,0,-1,1,3,23,-1,23,22,1,-1,11,8,24,-1,24,23,11,-1,8,6,25,-1,25,24,8,-1,6,7,26,-1,26,25,6,-1,7,4,27,-1,27,26,7,-1,4,0,21,-1,21,27,4,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1,29,30,12,-1,12,28,29,-1,31,32,30,-1,30,29,31,-1,32,31,33,-1,12,30,34,-1,34,12,12,-1,34,30,32,-1,32,35,34,-1,35,32,33,-1,33,36,35,-1,37,28,12,-1,12,12,37,-1,38,40,12,-1,12,39,38,-1,41,38,39,-1,39,42,41,-1,42,45,41,-1,12,12,43,-1,43,39,12,-1,43,44,42,-1,42,39,43,-1,44,46,45,-1,45,42,44,-1,47,12,12,-1,12,40,47,-1});
  }
}
protected class MFVec3f35 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.687f,-1.475f,-0.9449f,1.918f,-3.308f,-0.9449f,0f,0.2536f,0.2858f,1.877f,-0.2736f,-0.9449f,1.556f,0.0026f,-0.0141f,-2.687f,-1.475f,-0.9449f,-1.877f,-0.2736f,-0.9449f,-1.918f,-3.308f,-0.9449f,-1.556f,0.0026f,-0.0141f,0f,-3.308f,-0.9449f,1.965f,-3.308f,0.8573f,-1.965f,-3.308f,0.8573f,0f,-3.308f,0.8573f,2.208f,-1.501f,-1.786f,1.607f,-2.668f,-1.786f,0f,-2.668f,-1.786f,-1.607f,-2.668f,-1.786f,-2.208f,-1.501f,-1.786f,-1.599f,-0.5151f,-1.786f,1.599f,-0.5151f,-1.786f,1.638f,-0.5877f,2.175f,2.034f,-2.055f,3.865f,2.034f,-3.308f,3.522f,0f,-2.055f,5.096f,0f,-0.4955f,3.684f,1.597f,-0.2925f,1.08f,2.442f,-1.692f,0.8573f,-2.034f,-2.055f,3.865f,-1.638f,-0.5877f,2.175f,0f,-3.308f,4.753f,-2.034f,-3.308f,3.522f,-1.597f,-0.2925f,1.08f,-2.442f,-1.692f,0.8573f,0f,-3.308f,3.522f,0f,-0.0249f,1.55f});
  }
}
protected class MFVec2f36 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4804f,0.417f,0.4726f,0.3714f,0.4777f,0.4914f,0.4726f,0.3714f,0.4687f,0.4544f,0.4611f,0.4911f,0.4804f,0.417f,0.4687f,0.4544f,0.4726f,0.3714f,0.4777f,0.4914f,0.4611f,0.4911f,0.4726f,0.3714f,0.5184f,0.4692f,0.5392f,0.409f,0.5352f,0.3721f,0.5392f,0.409f,0.5352f,0.3721f,0.537f,0.3715f,0.537f,0.3715f,0.5123f,0.477f,0.5123f,0.477f,0.4804f,0.417f,0.4726f,0.3714f,0.4726f,0.3714f,0.4726f,0.3714f,0.4804f,0.417f,0.4687f,0.4544f,0.4687f,0.4544f,0.5785f,0.4537f,0.601f,0.4307f,0.5382f,0.4079f,0.6345f,0.3741f,0.5897f,0.3729f,0.5897f,0.3729f,0.5392f,0.409f,0.5352f,0.3721f,0.537f,0.3715f,0.5123f,0.477f,0.601f,0.4307f,0.5382f,0.4079f,0.5785f,0.4537f,0.6345f,0.3741f,0.5897f,0.3729f,0.5392f,0.409f,0.5352f,0.3721f,0.5897f,0.3729f,0.537f,0.3715f,0.5123f,0.477f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {29,30,31,-1,28,29,31,-1,31,32,33,-1,28,31,33,-1,34,28,33,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,28,0,1,-1,1,29,28,-1,29,1,2,-1,2,30,29,-1,30,2,3,-1,3,31,30,-1,31,3,4,-1,4,32,31,-1,32,4,5,-1,5,33,32,-1,33,5,6,-1,6,34,33,-1,34,6,0,-1,0,28,34,-1,21,36,35,-1,35,22,21,-1,22,35,37,-1,37,23,22,-1,23,37,38,-1,38,24,23,-1,24,38,39,-1,39,25,24,-1,25,39,40,-1,40,26,25,-1,26,40,41,-1,41,27,26,-1,27,41,36,-1,36,21,27,-1,36,43,42,-1,42,35,36,-1,35,42,44,-1,44,37,35,-1,37,44,45,-1,45,38,37,-1,38,45,46,-1,46,39,38,-1,39,46,47,-1,47,40,39,-1,40,47,48,-1,48,41,40,-1,41,48,43,-1,43,36,41,-1,43,49,42,-1,42,49,44,-1,44,49,45,-1,45,49,46,-1,46,49,47,-1,47,49,48,-1,48,49,43,-1});
  }
}
protected class MFInt3240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,29,36,35,-1,35,28,29,-1,28,35,37,-1,37,30,28,-1,30,37,38,-1,38,31,30,-1,31,38,39,-1,39,32,31,-1,32,39,40,-1,40,33,32,-1,33,40,41,-1,41,34,33,-1,34,41,36,-1,36,29,34,-1,36,43,42,-1,42,35,36,-1,35,42,44,-1,44,37,35,-1,37,44,45,-1,45,38,37,-1,38,45,46,-1,46,39,38,-1,39,46,47,-1,47,40,39,-1,40,47,48,-1,48,41,40,-1,41,48,43,-1,43,36,41,-1,43,49,42,-1,42,49,44,-1,44,49,45,-1,45,49,46,-1,46,49,47,-1,47,49,48,-1,48,49,43,-1});
  }
}
protected class MFVec3f41 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.617f,2.231f,0.2976f,-1.527f,2.231f,2.592f,0.9211f,2.231f,3.159f,2.617f,2.231f,1.571f,2.617f,2.231f,-1.571f,0.9211f,2.231f,-3.159f,-1.527f,2.231f,-2.29f,-2.617f,-1.238f,0.2976f,-1.527f,-1.238f,2.592f,0.9211f,-1.238f,3.159f,2.617f,-1.238f,1.571f,2.617f,-1.238f,-0.9758f,0.9211f,-1.238f,-3.009f,-1.527f,-1.238f,-2.442f,-2.617f,-6.593f,0.2976f,-1.527f,-6.593f,2.58f,0.9211f,-6.593f,3.147f,2.617f,-6.593f,1.571f,2.617f,-6.593f,-0.9758f,0.9211f,-6.593f,-2.564f,-1.527f,-6.593f,-1.997f,-2.264f,-11.92f,0.2976f,-1.321f,-11.92f,2.282f,0.7969f,-11.92f,2.773f,2.046f,-11.92f,1.399f,2.046f,-11.92f,-0.8039f,0.7969f,-11.92f,-2.177f,-1.321f,-11.92f,-1.687f,-1.864f,4.073f,0.2976f,-1.058f,4.073f,1.995f,0.7536f,4.073f,2.415f,2.206f,4.073f,1.24f,2.206f,4.073f,-0.6446f,0.7536f,4.073f,-1.819f,-1.058f,4.073f,-1.4f,-1.033f,-14.67f,1.883f,-1.786f,-14.67f,0.2976f,0.6591f,-14.67f,2.275f,1.657f,-14.67f,1.178f,1.657f,-14.67f,-0.5825f,0.6591f,-14.67f,-1.68f,-1.033f,-14.67f,-1.288f,-0.4256f,-15.99f,1.041f,-0.7788f,-15.99f,0.2976f,0.3682f,-15.99f,1.225f,0.8362f,-15.99f,0.7104f,0.8362f,-15.99f,-0.1152f,0.3682f,-15.99f,-0.63f,-0.4256f,-15.99f,-0.4463f,0.1114f,-16.17f,0.2976f});
  }
}
protected class MFVec2f42 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7387f,0.5078f,0.7519f,0.5078f,0.7092f,0.5078f,0.6855f,0.5078f,0.6855f,0.5078f,0.7092f,0.5078f,0.7387f,0.5078f,0.7641f,0.4868f,0.7464f,0.4472f,0.7641f,0.4472f,0.7464f,0.4868f,0.7065f,0.4472f,0.7065f,0.4868f,0.6788f,0.4472f,0.6788f,0.4868f,0.6788f,0.4472f,0.6788f,0.4868f,0.7065f,0.4472f,0.7065f,0.4868f,0.7464f,0.4472f,0.7464f,0.4868f,0.7464f,0.3861f,0.7641f,0.3861f,0.7065f,0.3861f,0.6788f,0.3861f,0.6788f,0.3861f,0.7065f,0.3861f,0.7464f,0.3861f,0.743f,0.3252f,0.7584f,0.3252f,0.7085f,0.3252f,0.6882f,0.3252f,0.6882f,0.3252f,0.7085f,0.3252f,0.743f,0.3252f,0.7383f,0.2938f,0.7506f,0.2938f,0.7107f,0.2938f,0.6945f,0.2938f,0.6945f,0.2938f,0.7107f,0.2938f,0.7383f,0.2938f,0.7284f,0.2787f,0.7342f,0.2787f,0.7155f,0.2787f,0.7079f,0.2787f,0.7079f,0.2787f,0.7155f,0.2787f,0.7284f,0.2787f,0.7197f,0.2768f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,0,2,4,-1,0,4,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
protected class MFInt3246 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,0,2,4,-1,0,4,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
protected class MFVec3f47 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.7406f,0.9639f,0.0216f,-0.4117f,0.9639f,0.8655f,0.3272f,0.9639f,1.036f,0.9197f,0.9639f,0.5579f,0.9197f,0.9639f,-0.3619f,0.3272f,0.9639f,-0.8401f,-0.4117f,0.9639f,-0.6694f,-2.238f,-4.201f,0.0216f,-1.426f,-3.284f,1.868f,-1.219f,-1.439f,2.239f,-2.036f,-1.701f,0.0216f,0.6748f,-3.284f,2.375f,0.6153f,-1.439f,2.686f,2.01f,-4.201f,1.161f,2.086f,-1.701f,0.9061f,2.01f,-4.913f,-1.265f,2.086f,-1.701f,-0.8628f,0.6748f,-4.913f,-2.686f,0.6153f,-1.701f,-2.191f,-1.426f,-4.913f,-2.179f,-1.219f,-1.701f,-1.744f,-1.112f,0.0646f,1.755f,-1.864f,0.0646f,0.0216f,0.5772f,0.0646f,2.145f,1.932f,0.0646f,1.051f,1.932f,0.0646f,-0.8553f,0.5772f,0.0646f,-1.907f,-1.112f,0.0646f,-1.517f,-2.345f,-14.69f,-0.0151f,-1.416f,-14.67f,2.102f,0.6712f,-14.67f,2.624f,2.345f,-14.69f,1.16f,2.345f,-14.71f,-1.342f,0.6712f,-14.71f,-2.38f,-1.416f,-14.71f,-1.857f,-0.73f,-16.18f,0.0221f,-0.4092f,-16.17f,0.7532f,0.3118f,-16.17f,0.9337f,0.89f,-16.18f,0.4278f,0.89f,-16.19f,-0.4362f,0.3118f,-16.19f,-0.7945f,-0.4092f,-16.19f,-0.614f});
  }
}
protected class MFVec2f48 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7637f,0.172f,0.755f,0.172f,0.7356f,0.172f,0.72f,0.172f,0.72f,0.172f,0.7356f,0.172f,0.755f,0.172f,0.8032f,0.2271f,0.7818f,0.2173f,0.7763f,0.1976f,0.7978f,0.2004f,0.7264f,0.2173f,0.728f,0.1976f,0.6912f,0.2271f,0.6892f,0.2004f,0.6912f,0.2347f,0.6892f,0.2004f,0.7264f,0.2347f,0.728f,0.2004f,0.7818f,0.2347f,0.7763f,0.2004f,0.7735f,0.1816f,0.7933f,0.1816f,0.729f,0.1816f,0.6933f,0.1816f,0.6933f,0.1816f,0.729f,0.1816f,0.7735f,0.1816f,0.806f,0.339f,0.7815f,0.3388f,0.7265f,0.3388f,0.6824f,0.339f,0.6824f,0.3392f,0.7265f,0.3392f,0.7815f,0.3392f,0.7634f,0.3549f,0.755f,0.3548f,0.736f,0.3548f,0.7207f,0.3549f,0.7207f,0.355f,0.736f,0.355f,0.755f,0.355f});
  }
}
protected class MFFloat49 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat50 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3251 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,12,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,18,17,0,-1,0,2,18,-1,0,17,25,-1,25,1,0,-1,25,12,1,-1,7,11,13,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,18,2,10,-1,10,21,18,-1,10,7,27,-1,27,21,10,-1,27,7,13,-1,12,35,37,-1,37,11,12,-1,11,37,36,-1,36,13,11,-1,20,14,17,-1,17,18,20,-1,23,25,17,-1,17,14,23,-1,16,15,14,-1,14,20,16,-1,24,23,14,-1,14,15,24,-1,15,16,29,-1,29,24,15,-1,20,18,21,-1,21,19,20,-1,26,19,21,-1,21,27,26,-1,16,20,19,-1,19,22,16,-1,28,22,19,-1,19,26,28,-1,22,28,29,-1,29,16,22,-1,36,35,31,-1,31,30,34,-1,31,34,33,-1,36,31,33,-1,36,33,32,-1,24,30,31,-1,31,23,24,-1,23,31,35,-1,35,25,23,-1,27,36,32,-1,32,26,27,-1,26,32,33,-1,33,28,26,-1,28,33,34,-1,34,29,28,-1,29,34,30,-1,30,24,29,-1,36,37,35,-1,12,25,35,-1,27,13,36,-1});
  }
}
protected class MFInt3252 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,18,24,25,-1,25,14,18,-1,15,25,26,-1,26,23,15,-1,29,27,32,-1,32,33,29,-1,41,43,32,-1,32,27,41,-1,30,28,27,-1,27,29,30,-1,42,41,27,-1,27,28,42,-1,28,31,48,-1,48,42,28,-1,35,36,37,-1,37,34,35,-1,44,34,37,-1,37,45,44,-1,39,35,34,-1,34,38,39,-1,46,38,34,-1,34,44,46,-1,38,46,47,-1,47,40,38,-1,52,51,50,-1,50,49,55,-1,50,55,54,-1,52,50,54,-1,52,54,53,-1,42,49,50,-1,50,41,42,-1,41,50,51,-1,51,43,41,-1,45,52,53,-1,53,44,45,-1,44,53,54,-1,54,46,44,-1,46,54,55,-1,55,47,46,-1,48,55,49,-1,49,42,48,-1,52,56,51,-1,18,43,24,-1,22,23,52,-1});
  }
}
protected class MFVec3f53 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.8966f,-0.0174f,-1.568f,-1.521f,-0.0174f,0.4019f,0f,-0.0174f,-1.568f,-1.288f,0.6634f,0.3302f,-0.7503f,0.6634f,-1.364f,0f,0.6634f,-1.364f,0f,0.6634f,1.372f,1.521f,-0.0174f,0.4019f,1.288f,0.6634f,0.3302f,0.7503f,0.6634f,-1.364f,0.8967f,-0.0174f,-1.568f,0f,-0.0174f,1.633f,-1.556f,-0.2684f,1.333f,1.556f,-0.2684f,1.333f,-1.293f,-1.746f,-2.684f,-1.293f,-3.579f,-1.568f,0f,-3.579f,-1.568f,-1.018f,-0.5447f,-1.908f,0f,-0.5447f,-1.908f,1.293f,-1.746f,-2.684f,0f,-1.746f,-2.684f,1.018f,-0.5447f,-1.908f,1.293f,-3.579f,-1.568f,-2.687f,-1.746f,0.4019f,-1.918f,-3.579f,0.4019f,-1.877f,-0.5447f,0.4019f,2.687f,-1.746f,0.4019f,1.877f,-0.5447f,0.4019f,1.918f,-3.579f,0.4019f,0f,-3.579f,0.4019f,-1.708f,-3.439f,1.272f,-2.332f,-1.78f,1.272f,2.332f,-1.78f,1.272f,1.708f,-3.439f,1.272f,0f,-3.439f,1.272f,-1.469f,-0.8455f,1.311f,1.469f,-0.8455f,1.311f,0f,-0.5969f,1.593f});
  }
}
protected class MFVec2f54 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4269f,0.4898f,0.4623f,0.4901f,0.4269f,0.4898f,0.4623f,0.4901f,0.4269f,0.4898f,0.4269f,0.4898f,0.4777f,0.4914f,0.4623f,0.4901f,0.4777f,0.4914f,0.4623f,0.4901f,0.4269f,0.4898f,0.4269f,0.4898f,0.4269f,0.4898f,0.4269f,0.4898f,0.4777f,0.4914f,0.4777f,0.4914f,0.4309f,0.4635f,0.4687f,0.4544f,0.4611f,0.4911f,0.4284f,0.4641f,0.4284f,0.4641f,0.4309f,0.4635f,0.4687f,0.4544f,0.4611f,0.4911f,0.4611f,0.4911f,0.4777f,0.4914f,0.4611f,0.4911f,0.4321f,0.4164f,0.4315f,0.3728f,0.4321f,0.4164f,0.4315f,0.3728f,0.4315f,0.3728f,0.4309f,0.4635f,0.4284f,0.4641f,0.4321f,0.4164f,0.4321f,0.4164f,0.4284f,0.4641f,0.4309f,0.4635f,0.4315f,0.3728f,0.4315f,0.3728f,0.4315f,0.3728f,0.4804f,0.417f,0.4726f,0.3714f,0.4687f,0.4544f,0.4804f,0.417f,0.4687f,0.4544f,0.4726f,0.3714f,0.4726f,0.3714f,0.4726f,0.3714f,0.4726f,0.3714f,0.4804f,0.417f,0.4687f,0.4544f,0.4687f,0.4544f,0.4804f,0.417f,0.4726f,0.3714f,0.4726f,0.3714f,0.4687f,0.4544f});
  }
}
protected class MFFloat55 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat56 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3257 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {25,4,3,-1,26,25,3,-1,0,26,3,-1,1,10,26,-1,26,0,1,-1,1,9,12,-1,12,10,1,-1,2,4,25,-1,25,34,2,-1,6,8,31,-1,6,31,32,-1,5,6,32,-1,7,5,32,-1,32,11,7,-1,7,11,12,-1,12,9,7,-1,2,34,31,-1,31,8,2,-1,14,13,19,-1,17,16,15,-1,18,17,15,-1,19,18,15,-1,14,19,15,-1,0,13,14,-1,14,1,0,-1,1,14,15,-1,15,9,1,-1,9,15,16,-1,16,7,9,-1,7,16,17,-1,17,5,7,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,3,6,-1,3,19,13,-1,13,0,3,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1,23,24,20,-1,20,21,23,-1,29,23,21,-1,21,22,29,-1,22,33,29,-1,20,25,26,-1,26,21,20,-1,26,10,22,-1,22,21,26,-1,10,12,33,-1,33,22,10,-1,34,25,20,-1,20,24,34,-1,23,27,28,-1,28,24,23,-1,29,30,27,-1,27,23,29,-1,30,29,33,-1,28,27,32,-1,32,31,28,-1,32,27,30,-1,30,11,32,-1,11,30,33,-1,33,12,11,-1,34,24,28,-1,28,31,34,-1});
  }
}
protected class MFInt3258 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,18,-1,18,14,1,-1,2,5,12,-1,12,20,2,-1,7,10,12,-1,7,12,15,-1,6,7,15,-1,8,6,15,-1,15,16,8,-1,8,16,17,-1,17,11,8,-1,9,19,12,-1,12,10,9,-1,22,21,27,-1,25,24,23,-1,26,25,23,-1,27,26,23,-1,22,27,23,-1,0,21,22,-1,22,1,0,-1,1,22,23,-1,23,3,1,-1,11,23,24,-1,24,8,11,-1,8,24,25,-1,25,6,8,-1,6,25,26,-1,26,7,6,-1,7,26,27,-1,27,4,7,-1,4,27,21,-1,21,0,4,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1,29,28,12,-1,12,30,29,-1,31,29,30,-1,30,32,31,-1,32,33,31,-1,12,12,34,-1,34,30,12,-1,34,35,32,-1,32,30,34,-1,35,36,33,-1,33,32,35,-1,37,12,12,-1,12,28,37,-1,38,39,12,-1,12,40,38,-1,41,42,39,-1,39,38,41,-1,42,41,45,-1,12,39,43,-1,43,12,12,-1,43,39,42,-1,42,44,43,-1,44,42,45,-1,45,46,44,-1,47,40,12,-1,12,12,47,-1});
  }
}
protected class MFVec3f59 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.687f,-1.475f,-0.9449f,-1.918f,-3.308f,-0.9449f,0f,0.2536f,0.2858f,-1.877f,-0.2736f,-0.9449f,-1.556f,0.0026f,-0.0141f,2.687f,-1.475f,-0.9449f,1.877f,-0.2736f,-0.9449f,1.918f,-3.308f,-0.9449f,1.556f,0.0026f,-0.0141f,0f,-3.308f,-0.9449f,-1.965f,-3.308f,0.8573f,1.965f,-3.308f,0.8573f,0f,-3.308f,0.8573f,-2.208f,-1.501f,-1.786f,-1.607f,-2.668f,-1.786f,0f,-2.668f,-1.786f,1.607f,-2.668f,-1.786f,2.208f,-1.501f,-1.786f,1.599f,-0.5151f,-1.786f,-1.599f,-0.5151f,-1.786f,-1.638f,-0.5877f,2.175f,-2.034f,-2.055f,3.865f,-2.034f,-3.308f,3.522f,0f,-2.055f,5.096f,0f,-0.4955f,3.684f,-1.597f,-0.2925f,1.08f,-2.442f,-1.692f,0.8573f,2.034f,-2.055f,3.865f,1.638f,-0.5877f,2.175f,0f,-3.308f,4.753f,2.034f,-3.308f,3.522f,1.597f,-0.2925f,1.08f,2.442f,-1.692f,0.8573f,0f,-3.308f,3.522f,0f,-0.0249f,1.55f});
  }
}
protected class MFVec2f60 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4804f,0.417f,0.4726f,0.3714f,0.4777f,0.4914f,0.4726f,0.3714f,0.4687f,0.4544f,0.4611f,0.4911f,0.4804f,0.417f,0.4687f,0.4544f,0.4726f,0.3714f,0.4777f,0.4914f,0.4611f,0.4911f,0.4726f,0.3714f,0.5246f,0.4611f,0.5392f,0.409f,0.5352f,0.3721f,0.5392f,0.409f,0.5352f,0.3721f,0.537f,0.3715f,0.537f,0.3715f,0.5123f,0.477f,0.5123f,0.477f,0.4804f,0.417f,0.4726f,0.3714f,0.4726f,0.3714f,0.4726f,0.3714f,0.4804f,0.417f,0.4687f,0.4544f,0.4687f,0.4544f,0.5785f,0.4537f,0.601f,0.4307f,0.5382f,0.4079f,0.6345f,0.3741f,0.5897f,0.3729f,0.5897f,0.3729f,0.5392f,0.409f,0.5352f,0.3721f,0.537f,0.3715f,0.5123f,0.477f,0.601f,0.4307f,0.5382f,0.4079f,0.5785f,0.4537f,0.6345f,0.3741f,0.5897f,0.3729f,0.5392f,0.409f,0.5352f,0.3721f,0.5897f,0.3729f,0.537f,0.3715f,0.5123f,0.477f});
  }
}
protected class MFFloat61 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat62 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3263 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,63,62,-1,62,25,26,-1,27,64,63,-1,63,26,27,-1,28,65,64,-1,64,27,28,-1,29,66,65,-1,65,28,29,-1,30,67,66,-1,66,29,30,-1,31,68,67,-1,67,30,31,-1,32,69,68,-1,68,31,32,-1,33,70,69,-1,69,32,33,-1,34,71,70,-1,70,33,34,-1,35,72,71,-1,71,34,35,-1,36,73,72,-1,72,35,36,-1,25,62,73,-1,73,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1,62,63,14,-1,14,13,62,-1,63,64,15,-1,15,14,63,-1,64,65,16,-1,16,15,64,-1,65,66,17,-1,17,16,65,-1,66,67,18,-1,18,17,66,-1,67,68,19,-1,19,18,67,-1,68,69,20,-1,20,19,68,-1,69,70,21,-1,21,20,69,-1,70,71,22,-1,22,21,70,-1,71,72,23,-1,23,22,71,-1,72,73,24,-1,24,23,72,-1,73,62,13,-1,13,24,73,-1});
  }
}
protected class MFInt3264 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,39,40,37,-1,37,38,39,-1,41,42,40,-1,40,39,41,-1,43,44,42,-1,42,41,43,-1,45,46,44,-1,44,43,45,-1,47,48,46,-1,46,45,47,-1,49,50,48,-1,48,47,49,-1,51,52,50,-1,50,49,51,-1,53,54,52,-1,52,51,53,-1,55,56,54,-1,54,53,55,-1,57,58,56,-1,56,55,57,-1,59,60,58,-1,58,57,59,-1,38,37,60,-1,60,59,38,-1,62,39,38,-1,38,61,62,-1,63,41,39,-1,39,62,63,-1,64,43,41,-1,41,63,64,-1,65,45,43,-1,43,64,65,-1,66,47,45,-1,45,65,66,-1,67,49,47,-1,47,66,67,-1,68,51,49,-1,49,67,68,-1,69,53,51,-1,51,68,69,-1,70,55,53,-1,53,69,70,-1,71,57,55,-1,55,70,71,-1,72,59,57,-1,57,71,72,-1,61,38,59,-1,59,72,61,-1,74,62,61,-1,61,73,74,-1,75,63,62,-1,62,74,75,-1,76,64,63,-1,63,75,76,-1,77,65,64,-1,64,76,77,-1,78,66,65,-1,65,77,78,-1,79,67,66,-1,66,78,79,-1,80,68,67,-1,67,79,80,-1,81,69,68,-1,68,80,81,-1,82,70,69,-1,69,81,82,-1,83,71,70,-1,70,82,83,-1,84,72,71,-1,71,83,84,-1,73,61,72,-1,72,84,73,-1,85,74,73,-1,85,75,74,-1,85,76,75,-1,85,77,76,-1,85,78,77,-1,85,79,78,-1,85,80,79,-1,85,81,80,-1,85,82,81,-1,85,83,82,-1,85,84,83,-1,85,73,84,-1,25,26,14,-1,14,13,25,-1,26,27,15,-1,15,14,26,-1,27,28,16,-1,16,15,27,-1,28,29,17,-1,17,16,28,-1,29,30,18,-1,18,17,29,-1,30,31,19,-1,19,18,30,-1,31,32,20,-1,20,19,31,-1,32,33,21,-1,21,20,32,-1,33,34,22,-1,22,21,33,-1,34,35,23,-1,23,22,34,-1,35,36,24,-1,24,23,35,-1,36,25,13,-1,13,24,36,-1});
  }
}
protected class MFVec3f65 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,10.03f,0.1297f,0f,9.057f,-2.567f,-2.075f,9.057f,-2.206f,-3.594f,9.057f,-1.77f,-4.15f,9.057f,0.1297f,-3.594f,9.057f,2.03f,-2.075f,9.057f,2.465f,0f,9.057f,2.827f,2.075f,9.057f,2.465f,3.594f,9.057f,2.03f,4.15f,9.057f,0.1297f,3.594f,9.057f,-1.77f,2.075f,9.057f,-2.206f,0f,6.725f,-4.193f,-2.684f,7.001f,-3.614f,-4.648f,7.228f,-2.032f,-5.367f,7.228f,0.1297f,-4.648f,7.4f,2.189f,-2.684f,7.228f,3.313f,0f,7.024f,4.004f,2.684f,7.228f,3.313f,4.648f,7.4f,2.189f,5.367f,7.228f,0.1297f,4.648f,7.228f,-2.032f,2.684f,7.001f,-3.614f,0f,4.745f,-4.3f,-2.936f,4.743f,-3.667f,-5.089f,4.738f,-2.28f,-5.874f,4.731f,0.133f,-5.102f,4.731f,2.476f,-2.963f,4.731f,3.656f,0f,4.73f,4.3f,2.963f,4.73f,3.656f,5.102f,4.73f,2.476f,5.874f,4.731f,0.134f,5.088f,4.737f,-2.281f,2.936f,4.743f,-3.667f,0f,2.358f,-3.663f,-2.543f,2.356f,-3.113f,-4.402f,2.355f,-1.613f,-5.084f,2.358f,0.134f,-4.415f,2.354f,2.157f,-2.562f,2.341f,3.097f,0f,2.339f,3.654f,2.56f,2.347f,3.101f,4.417f,2.357f,2.158f,5.083f,2.357f,0.1338f,4.404f,2.356f,-1.611f,2.542f,2.358f,-3.115f,0f,0.6228f,-1.923f,-1.478f,0.6244f,-1.603f,-2.538f,0.622f,-1.037f,-2.926f,0.6243f,0.1308f,-2.535f,0.6248f,1.308f,-1.464f,0.6148f,2.154f,0f,0.6102f,2.466f,1.455f,0.6123f,2.154f,2.534f,0.6219f,1.301f,2.927f,0.6248f,0.1297f,2.539f,0.6184f,-1.027f,1.471f,0.6221f,-1.602f,0f,-0.0048f,0.1335f,0f,6.687f,-3.936f,-2.527f,6.96f,-3.39f,-4.378f,7.174f,-1.899f,-5.055f,7.161f,0.1297f,-4.396f,7.33f,2.041f,-2.558f,7.161f,3.082f,0f,6.834f,3.759f,2.555f,7.163f,3.083f,4.397f,7.332f,2.039f,5.054f,7.163f,0.1318f,4.376f,7.176f,-1.9f,2.527f,6.96f,-3.39f});
  }
}
protected class MFVec2f66 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2061f,0.2498f,0.2067f,0.1822f,0.1471f,0.1822f,0.1035f,0.1822f,0.0875f,0.1822f,0.1035f,0.1822f,0.1471f,0.1822f,0.2067f,0.1822f,0.2663f,0.1822f,0.31f,0.1822f,0.3259f,0.1822f,0.31f,0.1822f,0.2663f,0.1822f,0.208f,0.1494f,0.1373f,0.1495f,0.0855f,0.1495f,0.0666f,0.1495f,0.0855f,0.1496f,0.1373f,0.1495f,0.208f,0.1495f,0.2788f,0.1495f,0.3305f,0.1496f,0.3495f,0.1495f,0.3305f,0.1495f,0.2788f,0.1495f,0.208f,0.1494f,0.1414f,0.1495f,0.0926f,0.1495f,0.0748f,0.1495f,0.0922f,0.1495f,0.1406f,0.1495f,0.208f,0.1495f,0.2754f,0.1495f,0.3239f,0.1495f,0.3412f,0.1495f,0.3234f,0.1495f,0.2746f,0.1495f,0.995f,0.6227f,0.9911f,0.5634f,0.9445f,0.5634f,0.9587f,0.6143f,0.8611f,0.5667f,0.8645f,0.6158f,0.8296f,0.5725f,0.8297f,0.6181f,0.7843f,0.5725f,0.7986f,0.6221f,0.7343f,0.5716f,0.7402f,0.6181f,0.6899f,0.5733f,0.7033f,0.6238f,0.7343f,0.5716f,0.7402f,0.6181f,0.7843f,0.5724f,0.7986f,0.6221f,0.8296f,0.5725f,0.8297f,0.6181f,0.8611f,0.5667f,0.8646f,0.6158f,0.9445f,0.5634f,0.9587f,0.6143f,0.9874f,0.5161f,0.9409f,0.5169f,0.8667f,0.527f,0.8296f,0.5279f,0.7882f,0.5304f,0.7381f,0.5276f,0.6693f,0.5234f,0.738f,0.5277f,0.7882f,0.5305f,0.8296f,0.5279f,0.8666f,0.5271f,0.9409f,0.517f,0.9852f,0.4793f,0.8833f,0.4954f,0.8658f,0.4954f,0.8297f,0.4954f,0.7933f,0.4954f,0.7672f,0.4952f,0.6706f,0.4859f,0.7672f,0.4952f,0.7936f,0.4954f,0.8297f,0.4954f,0.8655f,0.4953f,0.8832f,0.4954f,0.8296f,0.4836f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1});
  }
}
protected class MFInt3270 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,0,53,-1,3,2,53,-1,54,3,53,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,34,35,36,-1,33,34,36,-1,37,33,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,40,39,-1,39,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,48,40,-1,40,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,34,48,-1,48,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1});
  }
}
protected class MFVec3f71 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.7458f,1.679f,-1.189f,1.565f,1.679f,0.0238f,0.6631f,1.679f,1.177f,-0.714f,1.679f,0.6762f,-0.6628f,1.679f,-0.7857f,0.9082f,0.4486f,-1.634f,2.04f,0.4486f,0.0404f,0.794f,0.4486f,1.632f,-1.108f,0.4486f,0.9413f,-1.037f,0.4486f,-1.078f,0.9397f,-2.611f,-1.634f,2.071f,-2.611f,0.0404f,0.8254f,-2.611f,1.632f,-1.076f,-2.611f,0.9413f,-1.006f,-2.611f,-1.078f,0.9738f,-3.656f,-1.728f,2.171f,-3.656f,0.0439f,0.8529f,-3.656f,1.728f,-1.159f,-3.656f,0.9971f,-1.084f,-3.656f,-1.139f,0.598f,-1.86f,-1.372f,1.463f,-1.86f,-0.3215f,1.015f,-1.86f,1.153f,-0.1265f,-1.86f,1.013f,-0.3843f,-1.86f,-0.5473f,0.6162f,-6.896f,-1.11f,1.515f,-6.896f,-0.2675f,1.049f,-6.896f,0.9149f,-0.1364f,-6.896f,0.8029f,-0.4042f,-6.896f,-0.4486f,0.6445f,-10.84f,-1.07f,1.509f,-10.84f,-0.2583f,1.062f,-10.84f,0.88f,-0.0801f,-10.84f,0.7722f,-0.3379f,-10.84f,-0.4327f,0.6093f,-11.37f,-0.6358f,1.116f,-11.37f,-0.1604f,0.8538f,-11.37f,0.5067f,0.1847f,-11.37f,0.4436f,0.0336f,-11.37f,-0.2626f});
  }
}
protected class MFVec2f72 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2661f,0.1332f,0.3717f,0.1332f,0.1245f,0.1332f,0.0067f,0.1321f,0.2119f,0.1332f,0.2707f,0.1099f,0.3728f,0.1099f,0.1275f,0.1099f,0.0049f,0.1088f,0.2167f,0.1099f,0.271f,0.0284f,0.3751f,0.0284f,0.1295f,0.0284f,0.0061f,0.0273f,0.2178f,0.0284f,0.2716f,0.0086f,0.3751f,0.0086f,0.1299f,0.0086f,0.0058f,0.0075f,0.2184f,0.0086f,0.2836f,0.0426f,0.3685f,0.0426f,0.1368f,0.0426f,0.0085f,0.0415f,0.2198f,0.0426f,0.0067f,0.1343f,0.0084f,0.111f,0.0084f,0.111f,0.0073f,0.0295f,0.0073f,0.0295f,0.0076f,0.0097f,0.0076f,0.0097f,0.0065f,0.0437f,0.6285f,0.3174f,0.6285f,0.3316f,0.6285f,0.3312f,0.6285f,0.3167f,0.6285f,0.3082f,0.5864f,0.3116f,0.5864f,0.3376f,0.6087f,0.339f,0.6087f,0.3139f,0.5864f,0.3394f,0.6087f,0.3383f,0.5864f,0.3146f,0.6087f,0.3128f,0.5864f,0.2974f,0.6087f,0.2977f,0.6261f,0.339f,0.6261f,0.3148f,0.6261f,0.3383f,0.6261f,0.3137f,0.6261f,0.2992f,0.0441f,0.1287f,-0.1162f,0.128f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,1,-1,3,1,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
  }
}
protected class MFInt3276 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,0,-1,3,0,1,-1,4,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,11,16,-1,16,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,16,-1,16,15,21,-1,22,21,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,16,20,-1});
  }
}
protected class MFVec3f77 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1284f,0.6566f,-0.794f,0.7947f,0.6566f,-0.1619f,0.4154f,0.6566f,0.757f,-0.4852f,0.6566f,0.6929f,-0.6626f,0.6566f,-0.2657f,0.0855f,-0.4623f,-1.129f,1.027f,-0.4623f,-0.281f,0.4911f,-0.4623f,1.171f,-0.7817f,-0.4623f,1.07f,-1.032f,-0.4623f,-0.445f,0.0941f,-3.046f,-1.116f,1.1f,-3.046f,-0.2777f,0.55f,-2.481f,1.16f,-0.8091f,-2.481f,1.06f,-1.1f,-3.046f,-0.4401f,0.084f,-8.01f,-1.171f,1.025f,-7.982f,-0.1359f,0.3907f,-8.118f,1.09f,-0.6003f,-8.118f,0.9957f,-0.9132f,-8.109f,-0.2244f,0.0434f,-8.725f,-0.6054f,0.5441f,-8.725f,0.0272f,0.2591f,-8.725f,0.759f,-0.4177f,-8.725f,0.6949f,-0.551f,-8.725f,-0.0767f});
  }
}
protected class MFVec2f78 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.5159f,0.3385f,0.5159f,0.3244f,0.5159f,0.3332f,0.5159f,0.3157f,0.5159f,0.3103f,0.521f,0.3428f,0.521f,0.3229f,0.521f,0.3355f,0.521f,0.3108f,0.521f,0.3029f,0.5327f,0.3442f,0.5327f,0.3231f,0.5302f,0.3366f,0.5302f,0.3103f,0.5327f,0.3016f,0.5558f,0.339f,0.5558f,0.323f,0.5558f,0.3334f,0.5558f,0.3141f,0.5558f,0.3079f,0.5585f,0.3232f,0.5585f,0.3341f,0.5585f,0.3302f,0.5585f,0.317f,0.5585f,0.3129f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,0,-1,0,2,4,-1,6,7,3,-1,3,1,6,-1,1,0,5,-1,5,6,1,-1,8,9,5,-1,5,4,8,-1,10,11,7,-1,7,6,10,-1,9,10,6,-1,6,5,9,-1,12,13,9,-1,9,8,12,-1,14,15,11,-1,11,10,14,-1,13,14,10,-1,10,9,13,-1,4,2,16,-1,2,3,7,-1,7,16,2,-1,17,19,18,-1,18,20,17,-1,21,16,7,-1,7,11,21,-1,8,21,12,-1,12,21,11,-1,11,15,12,-1,13,12,15,-1,15,14,13,-1,8,4,19,-1,19,17,8,-1,4,16,18,-1,18,19,4,-1,16,21,20,-1,20,18,16,-1,21,8,17,-1,17,20,21,-1,3,2,0,-1,0,1,3,-1});
  }
}
protected class MFInt3282 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,1,3,0,-1,36,38,37,-1,37,39,36,-1,28,30,29,-1,29,31,28,-1,4,5,2,-1,2,0,4,-1,40,41,38,-1,38,36,40,-1,32,33,31,-1,31,29,32,-1,6,7,5,-1,5,4,6,-1,42,43,41,-1,41,40,42,-1,34,35,33,-1,33,32,34,-1,10,12,11,-1,12,14,13,-1,13,11,12,-1,15,17,16,-1,16,18,15,-1,19,11,13,-1,13,20,19,-1,21,19,22,-1,22,19,20,-1,20,23,22,-1,24,22,23,-1,23,25,24,-1,4,0,8,-1,8,9,4,-1,10,11,16,-1,16,17,10,-1,11,19,18,-1,18,16,11,-1,19,21,15,-1,15,18,19,-1,14,12,26,-1,26,27,14,-1});
  }
}
protected class MFVec3f83 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.8732f,0.4437f,0.6298f,0.8463f,0.4584f,-1.065f,-0.5135f,0.3661f,0.7037f,-0.5196f,0.3675f,-1.013f,-0.6654f,-0.1688f,1.167f,1.16f,0.015f,1.096f,1.119f,0.0434f,-1.571f,-0.747f,-0.1537f,-1.566f,-0.5777f,-1.832f,1.902f,1.387f,-1.647f,1.643f,1.345f,-1.619f,-1.902f,-0.8391f,-1.916f,-1.775f,-0.3897f,-3.083f,1.338f,0.6425f,-3.283f,1.382f,0.6009f,-3.255f,-1.636f,-0.5412f,-3.094f,-1.527f,-0.742f,-0.1555f,-0.1478f,-1.159f,-1.873f,1.533f,-1.387f,-0.4699f,0.0458f,-1.361f,-0.5281f,1.488f,-1.163f,-1.872f,0.1088f,-0.7494f,-1.912f,-0.1591f});
  }
}
protected class MFVec2f84 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4675f,0.2229f,0.4534f,0.3224f,0.4709f,0.3268f,0.4579f,0.2308f,0.5552f,0.233f,0.5504f,0.3288f,0.6215f,0.2576f,0.6159f,0.3282f,0.478f,0.1884f,0.5527f,0.2007f,0.4618f,0.1862f,0.4629f,0.1191f,0.4583f,0.192f,0.4802f,0.0435f,0.4672f,0.0405f,0.5177f,0.1794f,0.4789f,0.1246f,0.4811f,0.1812f,0.515f,0.132f,0.538f,0.1232f,0.5459f,0.0341f,0.5348f,0.1824f,0.6006f,0.1887f,0.5977f,0.0452f,0.6323f,0.1888f,0.629f,0.0403f,0.4501f,0.1899f,0.4535f,0.0388f,0.5577f,0.3108f,0.5496f,0.3395f,0.5573f,0.3333f,0.5503f,0.3041f,0.5263f,0.3468f,0.527f,0.2997f,0.5106f,0.3433f,0.5113f,0.3032f,0.4584f,0.3225f,0.4544f,0.2224f,0.4607f,0.2253f,0.4525f,0.325f,0.5365f,0.3334f,0.5532f,0.2053f,0.6323f,0.3251f,0.6179f,0.2145f});
  }
}
protected class MFFloat85 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat86 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3287 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1});
  }
}
protected class MFInt3288 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {53,0,2,-1,53,2,3,-1,54,53,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,34,-1,36,34,33,-1,37,36,33,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,39,-1,39,40,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,40,-1,40,48,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,48,-1,48,34,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1});
  }
}
protected class MFVec3f89 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.7458f,1.679f,-1.189f,-1.565f,1.679f,0.0238f,-0.6631f,1.679f,1.177f,0.714f,1.679f,0.6762f,0.6628f,1.679f,-0.7857f,-0.9082f,0.4486f,-1.634f,-2.04f,0.4486f,0.0404f,-0.794f,0.4486f,1.632f,1.108f,0.4486f,0.9413f,1.037f,0.4486f,-1.078f,-0.9397f,-2.611f,-1.634f,-2.071f,-2.611f,0.0404f,-0.8254f,-2.611f,1.632f,1.076f,-2.611f,0.9413f,1.006f,-2.611f,-1.078f,-0.9738f,-3.656f,-1.728f,-2.171f,-3.656f,0.0439f,-0.8529f,-3.656f,1.728f,1.159f,-3.656f,0.9971f,1.084f,-3.656f,-1.139f,-0.598f,-1.86f,-1.372f,-1.463f,-1.86f,-0.3215f,-1.015f,-1.86f,1.153f,0.1265f,-1.86f,1.013f,0.3843f,-1.86f,-0.5473f,-0.6162f,-6.896f,-1.11f,-1.515f,-6.896f,-0.2675f,-1.049f,-6.896f,0.9149f,0.1364f,-6.896f,0.8029f,0.4042f,-6.896f,-0.4486f,-0.6445f,-10.84f,-1.07f,-1.509f,-10.84f,-0.2583f,-1.062f,-10.84f,0.88f,0.0801f,-10.84f,0.7722f,0.3379f,-10.84f,-0.4327f,-0.6093f,-11.37f,-0.6358f,-1.116f,-11.37f,-0.1604f,-0.8538f,-11.37f,0.5067f,-0.1847f,-11.37f,0.4436f,-0.0336f,-11.37f,-0.2626f});
  }
}
protected class MFVec2f90 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2661f,0.1332f,0.3717f,0.1332f,0.1245f,0.1332f,0.0067f,0.1321f,0.2119f,0.1332f,0.2707f,0.1099f,0.3728f,0.1099f,0.1275f,0.1099f,0.0049f,0.1088f,0.2167f,0.1099f,0.271f,0.0284f,0.3751f,0.0284f,0.1295f,0.0284f,0.0061f,0.0273f,0.2178f,0.0284f,0.2716f,0.0086f,0.3751f,0.0086f,0.1299f,0.0086f,0.0058f,0.0075f,0.2184f,0.0086f,0.2836f,0.0426f,0.3685f,0.0426f,0.1368f,0.0426f,0.0085f,0.0415f,0.2198f,0.0426f,0.0067f,0.1343f,0.0084f,0.111f,0.0084f,0.111f,0.0073f,0.0295f,0.0073f,0.0295f,0.0076f,0.0097f,0.0076f,0.0097f,0.0065f,0.0437f,0.6285f,0.3174f,0.6285f,0.3316f,0.6285f,0.3312f,0.6285f,0.3167f,0.6285f,0.3082f,0.5864f,0.3116f,0.5864f,0.3376f,0.6087f,0.339f,0.6087f,0.3139f,0.5864f,0.3394f,0.6087f,0.3383f,0.5864f,0.3146f,0.6087f,0.3128f,0.5864f,0.2974f,0.6087f,0.2977f,0.6261f,0.339f,0.6261f,0.3148f,0.6261f,0.3383f,0.6261f,0.3137f,0.6261f,0.2992f,0.0441f,0.1287f,-0.1162f,0.128f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,0,1,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
  }
}
protected class MFInt3294 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,1,0,3,-1,4,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,16,-1,16,11,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,15,16,-1,16,20,21,-1,22,17,15,-1,15,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,16,19,-1,19,24,20,-1});
  }
}
protected class MFVec3f95 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1284f,0.6566f,-0.794f,-0.7947f,0.6566f,-0.1619f,-0.4154f,0.6566f,0.757f,0.4852f,0.6566f,0.6929f,0.6626f,0.6566f,-0.2657f,-0.0855f,-0.4623f,-1.129f,-1.027f,-0.4623f,-0.281f,-0.4911f,-0.4623f,1.171f,0.7817f,-0.4623f,1.07f,1.032f,-0.4623f,-0.445f,-0.0941f,-3.046f,-1.116f,-1.1f,-3.046f,-0.2777f,-0.55f,-2.481f,1.16f,0.8091f,-2.481f,1.06f,1.1f,-3.046f,-0.4401f,-0.084f,-8.01f,-1.171f,-1.025f,-7.982f,-0.1359f,-0.3907f,-8.118f,1.09f,0.6003f,-8.118f,0.9957f,0.9132f,-8.109f,-0.2244f,-0.0434f,-8.725f,-0.6054f,-0.5441f,-8.725f,0.0272f,-0.2591f,-8.725f,0.759f,0.4177f,-8.725f,0.6949f,0.551f,-8.725f,-0.0767f});
  }
}
protected class MFVec2f96 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.5159f,0.3385f,0.5159f,0.3244f,0.5159f,0.3332f,0.5159f,0.3157f,0.5159f,0.3103f,0.521f,0.3428f,0.521f,0.3229f,0.521f,0.3355f,0.521f,0.3108f,0.521f,0.3029f,0.5327f,0.3442f,0.5327f,0.3231f,0.5302f,0.3366f,0.5302f,0.3103f,0.5327f,0.3016f,0.5558f,0.339f,0.5558f,0.323f,0.5558f,0.3334f,0.5558f,0.3141f,0.5558f,0.3079f,0.5585f,0.3232f,0.5585f,0.3341f,0.5585f,0.3302f,0.5585f,0.317f,0.5585f,0.3129f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,2,0,-1,0,5,4,-1,6,1,3,-1,3,7,6,-1,1,6,5,-1,5,0,1,-1,8,4,5,-1,5,9,8,-1,10,6,7,-1,7,11,10,-1,9,5,6,-1,6,10,9,-1,12,8,9,-1,9,13,12,-1,14,10,11,-1,11,15,14,-1,13,9,10,-1,10,14,13,-1,4,16,2,-1,2,16,7,-1,7,3,2,-1,17,20,18,-1,18,19,17,-1,21,11,7,-1,7,16,21,-1,8,12,21,-1,12,15,11,-1,11,21,12,-1,13,14,15,-1,15,12,13,-1,8,17,19,-1,19,4,8,-1,4,19,18,-1,18,16,4,-1,16,18,20,-1,20,21,16,-1,21,20,17,-1,17,8,21,-1,3,1,0,-1,0,2,3,-1});
  }
}
protected class MFInt32100 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,1,-1,1,2,0,-1,36,39,37,-1,37,38,36,-1,28,31,29,-1,29,30,28,-1,4,0,2,-1,2,5,4,-1,40,36,38,-1,38,41,40,-1,32,29,31,-1,31,33,32,-1,6,4,5,-1,5,7,6,-1,42,40,41,-1,41,43,42,-1,34,32,33,-1,33,35,34,-1,10,11,12,-1,12,11,13,-1,13,14,12,-1,15,18,16,-1,16,17,15,-1,19,20,13,-1,13,11,19,-1,21,22,19,-1,22,23,20,-1,20,19,22,-1,24,25,23,-1,23,22,24,-1,4,9,8,-1,8,0,4,-1,10,17,16,-1,16,11,10,-1,11,16,18,-1,18,19,11,-1,19,18,15,-1,15,21,19,-1,14,27,26,-1,26,12,14,-1});
  }
}
protected class MFVec3f101 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.8732f,0.4437f,0.6298f,-0.8463f,0.4584f,-1.065f,0.5135f,0.3661f,0.7037f,0.5196f,0.3675f,-1.013f,0.6654f,-0.1688f,1.167f,-1.16f,0.015f,1.096f,-1.119f,0.0434f,-1.571f,0.747f,-0.1537f,-1.566f,0.5777f,-1.832f,1.902f,-1.387f,-1.647f,1.643f,-1.345f,-1.619f,-1.902f,0.8391f,-1.916f,-1.775f,0.3897f,-3.083f,1.338f,-0.6425f,-3.283f,1.382f,-0.6009f,-3.255f,-1.636f,0.5412f,-3.094f,-1.527f,0.742f,-0.1555f,-0.1478f,1.159f,-1.873f,1.533f,1.387f,-0.4699f,0.0458f,1.361f,-0.5281f,1.488f,1.163f,-1.872f,0.1088f,0.7494f,-1.912f,-0.1591f});
  }
}
protected class MFVec2f102 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4675f,0.2229f,0.4534f,0.3224f,0.4709f,0.3268f,0.4579f,0.2308f,0.5552f,0.233f,0.5504f,0.3288f,0.6215f,0.2576f,0.6159f,0.3282f,0.478f,0.1884f,0.5527f,0.2007f,0.4618f,0.1862f,0.4629f,0.1191f,0.4583f,0.192f,0.4802f,0.0435f,0.4672f,0.0405f,0.5177f,0.1794f,0.4789f,0.1246f,0.4811f,0.1812f,0.515f,0.132f,0.538f,0.1232f,0.5459f,0.0341f,0.5348f,0.1824f,0.6006f,0.1887f,0.5977f,0.0452f,0.6323f,0.1888f,0.629f,0.0403f,0.4501f,0.1899f,0.4535f,0.0388f,0.5577f,0.3108f,0.5496f,0.3395f,0.5573f,0.3333f,0.5503f,0.3041f,0.5263f,0.3468f,0.527f,0.2997f,0.5106f,0.3433f,0.5113f,0.3032f,0.4584f,0.3225f,0.4544f,0.2224f,0.4607f,0.2253f,0.4525f,0.325f,0.5365f,0.3334f,0.5532f,0.2053f,0.6323f,0.3251f,0.6179f,0.2145f});
  }
}
protected class MFFloat103 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat104 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32105 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,10,11,-1,11,9,7,-1,33,10,7,-1,34,10,33,-1,7,9,13,-1,13,12,7,-1,12,33,7,-1,11,8,9,-1,8,13,9,-1,33,12,0,-1,14,17,1,-1,14,1,0,-1,17,2,1,-1,16,42,17,-1,42,2,17,-1,42,16,15,-1,15,4,42,-1,11,16,8,-1,11,15,16,-1,11,6,15,-1,6,11,10,-1,34,6,10,-1,19,6,5,-1,22,16,17,-1,17,23,22,-1,23,17,14,-1,14,21,23,-1,23,21,20,-1,20,22,23,-1,13,21,14,-1,21,13,20,-1,8,20,13,-1,6,19,15,-1,18,15,19,-1,18,4,15,-1,52,4,18,-1,14,0,12,-1,13,14,12,-1,5,6,34,-1,3,5,34,-1,19,5,24,-1,24,25,19,-1,18,19,25,-1,25,26,18,-1,52,18,26,-1,26,27,52,-1,5,3,28,-1,28,24,5,-1,16,22,20,-1,20,8,16,-1,31,30,29,-1,29,32,31,-1,33,31,32,-1,34,33,32,-1,31,36,35,-1,35,30,31,-1,36,31,33,-1,29,30,37,-1,37,30,35,-1,33,0,36,-1,38,40,39,-1,38,0,40,-1,39,40,2,-1,41,39,42,-1,42,39,2,-1,42,4,43,-1,43,41,42,-1,29,37,41,-1,29,41,43,-1,29,43,44,-1,44,32,29,-1,34,32,44,-1,45,46,44,-1,48,47,39,-1,39,41,48,-1,47,49,38,-1,38,39,47,-1,47,48,50,-1,50,49,47,-1,35,38,49,-1,49,50,35,-1,37,35,50,-1,44,43,45,-1,51,45,43,-1,51,43,4,-1,52,51,4,-1,38,36,0,-1,35,36,38,-1,46,34,44,-1,3,34,46,-1,45,54,53,-1,53,46,45,-1,51,55,54,-1,54,45,51,-1,52,27,55,-1,55,51,52,-1,46,53,28,-1,28,3,46,-1,41,37,50,-1,50,48,41,-1,68,69,58,-1,58,56,68,-1,56,58,59,-1,59,57,56,-1,69,60,61,-1,61,58,69,-1,58,61,62,-1,62,59,58,-1,59,62,75,-1,75,72,59,-1,60,76,63,-1,63,61,60,-1,61,63,64,-1,64,62,61,-1,66,63,76,-1,76,65,66,-1,67,64,63,-1,63,66,67,-1,64,67,80,-1,80,78,64,-1,68,71,70,-1,70,69,68,-1,71,73,72,-1,72,70,71,-1,73,57,59,-1,59,72,73,-1,69,70,74,-1,74,60,69,-1,70,72,75,-1,75,74,70,-1,60,74,77,-1,77,76,60,-1,74,75,78,-1,78,77,74,-1,75,62,64,-1,64,78,75,-1,79,65,76,-1,76,77,79,-1,80,79,77,-1,77,78,80,-1,57,73,71,-1,57,71,68,-1,56,57,68,-1,80,67,66,-1,79,80,66,-1,65,79,66,-1});
  }
}
protected class MFInt32106 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,0,-1,0,1,2,-1,4,3,2,-1,5,3,4,-1,2,1,6,-1,6,7,2,-1,7,4,2,-1,0,8,1,-1,8,6,1,-1,4,7,9,-1,10,11,12,-1,10,12,9,-1,11,13,12,-1,14,15,11,-1,15,13,11,-1,15,14,16,-1,16,17,15,-1,0,14,8,-1,0,16,14,-1,0,18,16,-1,18,0,3,-1,5,18,3,-1,19,18,20,-1,22,14,11,-1,11,21,22,-1,21,11,10,-1,10,23,21,-1,21,23,24,-1,24,22,21,-1,6,23,10,-1,23,6,24,-1,8,24,6,-1,18,19,16,-1,25,16,19,-1,25,17,16,-1,26,17,25,-1,10,9,7,-1,6,10,7,-1,20,18,5,-1,27,20,5,-1,19,20,28,-1,28,29,19,-1,25,19,29,-1,29,30,25,-1,26,25,30,-1,30,31,26,-1,20,27,32,-1,32,28,20,-1,14,22,24,-1,24,8,14,-1,35,34,33,-1,33,36,35,-1,37,35,36,-1,38,37,36,-1,35,40,39,-1,39,34,35,-1,40,35,37,-1,33,34,41,-1,41,34,39,-1,37,42,40,-1,43,45,44,-1,43,42,45,-1,44,45,46,-1,47,44,48,-1,48,44,46,-1,48,50,49,-1,49,47,48,-1,33,41,47,-1,33,47,49,-1,33,49,51,-1,51,36,33,-1,38,36,51,-1,52,53,51,-1,55,54,44,-1,44,47,55,-1,54,56,43,-1,43,44,54,-1,54,55,57,-1,57,56,54,-1,39,43,56,-1,56,57,39,-1,41,39,57,-1,51,49,52,-1,58,52,49,-1,58,49,50,-1,59,58,50,-1,43,40,42,-1,39,40,43,-1,53,38,51,-1,60,38,53,-1,52,62,61,-1,61,53,52,-1,58,63,62,-1,62,52,58,-1,59,64,63,-1,63,58,59,-1,53,61,65,-1,65,60,53,-1,47,41,57,-1,57,55,47,-1,67,70,69,-1,69,66,67,-1,66,69,71,-1,71,68,66,-1,70,73,72,-1,72,69,70,-1,69,72,74,-1,74,71,69,-1,71,74,89,-1,89,85,71,-1,73,76,75,-1,75,72,73,-1,72,75,77,-1,77,74,72,-1,79,75,76,-1,76,78,79,-1,80,77,75,-1,75,79,80,-1,77,80,95,-1,95,92,77,-1,81,84,83,-1,83,82,81,-1,84,86,85,-1,85,83,84,-1,86,68,71,-1,71,85,86,-1,82,83,88,-1,88,87,82,-1,83,85,89,-1,89,88,83,-1,87,88,91,-1,91,90,87,-1,88,89,92,-1,92,91,88,-1,89,74,77,-1,77,92,89,-1,94,93,90,-1,90,91,94,-1,95,94,91,-1,91,92,95,-1,68,86,84,-1,68,84,81,-1,66,68,81,-1,95,80,79,-1,94,95,79,-1,78,94,79,-1});
  }
}
protected class MFVec3f107 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,13.41f,-0.7672f,1.02f,13.85f,-2.25f,0f,13.51f,-3.769f,0f,0.8188f,3.156f,0f,3.563f,-3.333f,3.661f,0.1281f,2.243f,3.621f,3.118f,2.023f,2.814f,9.08f,2.9f,4.406f,8.825f,0.0214f,4.314f,8.846f,1.719f,2.299f,6.538f,2.734f,4.032f,6.41f,1.262f,2.29f,10.91f,1.179f,3.407f,10.95f,0.0607f,2.621f,13.27f,-1.246f,3.715f,3.086f,-1.788f,4.067f,8.723f,-3.836f,2.341f,13.3f,-3.687f,4.289f,0.3935f,-1.658f,4.734f,0.1406f,-0.1384f,5.652f,10.72f,-0.9836f,4.811f,12.9f,-1.603f,5.345f,10.47f,-3.647f,4.811f,12.9f,-3.594f,2.517f,-1.669f,1.502f,3.255f,-1.66f,-0.1346f,2.948f,-1.486f,-1.868f,0f,-1.281f,-2.313f,0f,-1.194f,2.304f,-4.032f,6.41f,1.262f,-4.314f,8.846f,1.719f,-2.814f,9.08f,2.9f,-2.299f,6.538f,2.734f,0f,9.136f,2.246f,0f,4.716f,3.226f,-3.407f,10.95f,0.0607f,-2.29f,10.91f,1.179f,-4.406f,8.825f,0.0214f,-2.621f,13.27f,-1.246f,-2.341f,13.3f,-3.687f,-1.02f,13.85f,-2.25f,-4.067f,8.723f,-3.836f,0f,8.074f,-4.277f,-3.715f,3.086f,-1.788f,-3.621f,3.118f,2.023f,-4.734f,0.1406f,-0.1384f,-3.661f,0.1281f,2.243f,-4.811f,12.9f,-3.594f,-5.345f,10.47f,-3.647f,-4.811f,12.9f,-1.603f,-5.652f,10.72f,-0.9836f,-4.289f,0.3935f,-1.658f,0f,0.6918f,-2.992f,-2.517f,-1.669f,1.502f,-3.255f,-1.66f,-0.1346f,-2.948f,-1.486f,-1.868f,0.8892f,12.94f,-2.608f,0.516f,12.73f,-1.431f,1.146f,13.39f,-2.694f,0.6275f,13.06f,-0.8358f,0f,14.57f,-3.544f,1.236f,14.38f,-2.522f,0.6992f,13.84f,-0.7186f,1.176f,16.23f,-2.013f,0.5348f,16f,-0.4293f,0f,16.62f,-2.52f,0.6489f,16.47f,-1.739f,0.3707f,16.31f,-0.8024f,0f,13.08f,-3.382f,0f,13.59f,-3.731f,-1.146f,13.39f,-2.694f,-0.8893f,12.94f,-2.608f,-0.6275f,13.06f,-0.8358f,-0.516f,12.73f,-1.431f,-1.236f,14.38f,-2.522f,-0.6992f,13.84f,-0.7186f,0f,16.47f,-3.285f,-1.176f,16.23f,-2.013f,-0.5348f,16f,-0.4293f,-0.6489f,16.47f,-1.739f,-0.3708f,16.31f,-0.8024f});
  }
}
protected class MFVec2f108 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2049f,0.3383f,0.2002f,0.3958f,0.136f,0.3803f,0.1281f,0.3329f,0.0546f,0.3857f,0.0447f,0.2768f,0.1678f,0.4532f,0.1416f,0.4193f,0.2035f,0.3953f,0.0762f,0.5156f,0.1396f,0.5164f,0.1296f,0.5174f,0.0824f,0.5324f,0.0762f,0.5185f,0.1914f,0.3925f,0.0546f,0.383f,0.2122f,0.2712f,0.0453f,0.2902f,0.2088f,0.2721f,0.2379f,0.2057f,0.1995f,0.2053f,0.2239f,0.5518f,0.2203f,0.4727f,0.2239f,0.5518f,0.2313f,0.4794f,0.2219f,0.2126f,0.0439f,0.2148f,0.0439f,0.2182f,0.1625f,0.1691f,0.1889f,0.1693f,0.1779f,0.1741f,0.0675f,0.1679f,0.0675f,0.1702f,0.2049f,0.3383f,0.2002f,0.3958f,0.136f,0.3803f,0.1281f,0.3329f,0.0546f,0.3857f,0.0447f,0.2768f,0.1678f,0.4532f,0.1416f,0.4193f,0.2035f,0.3953f,0.0762f,0.5156f,0.1396f,0.5164f,0.1296f,0.5174f,0.0824f,0.5324f,0.0762f,0.5185f,0.1914f,0.3925f,0.0546f,0.383f,0.2122f,0.2712f,0.0453f,0.2902f,0.2088f,0.2721f,0.2379f,0.2057f,0.1995f,0.2053f,0.2239f,0.5518f,0.2203f,0.4727f,0.2239f,0.5518f,0.2313f,0.4794f,0.2219f,0.2126f,0.0439f,0.2148f,0.0439f,0.2182f,0.1625f,0.1691f,0.1889f,0.1693f,0.1779f,0.1741f,0.0675f,0.1679f,0.0675f,0.1702f,0.5159f,0.3385f,0.5159f,0.3244f,0.5159f,0.3332f,0.521f,0.3428f,0.521f,0.3229f,0.521f,0.3355f,0.5327f,0.3442f,0.5327f,0.3231f,0.5302f,0.3366f,0.5558f,0.339f,0.5558f,0.323f,0.5558f,0.3334f,0.5585f,0.3232f,0.5585f,0.3341f,0.5585f,0.3302f,0.5159f,0.3244f,0.521f,0.3229f,0.521f,0.3428f,0.5159f,0.3385f,0.521f,0.3355f,0.5159f,0.3332f,0.5327f,0.3231f,0.5327f,0.3442f,0.5302f,0.3366f,0.5558f,0.323f,0.5558f,0.339f,0.5558f,0.3334f,0.5585f,0.3232f,0.5585f,0.3341f,0.5585f,0.3302f});
  }
}
protected class MFFloat109 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat110 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32111 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {66,67,10,-1,10,9,66,-1,67,66,0,-1,0,1,67,-1,9,10,8,-1,8,119,9,-1,2,11,5,-1,6,11,2,-1,69,12,68,-1,10,67,68,-1,68,12,10,-1,10,12,7,-1,7,8,10,-1,71,72,7,-1,7,12,71,-1,70,12,69,-1,70,71,12,-1,72,73,13,-1,13,7,72,-1,73,72,3,-1,3,4,73,-1,73,74,13,-1,66,9,149,-1,149,153,66,-1,119,149,9,-1,149,119,16,-1,16,15,149,-1,74,14,18,-1,18,13,74,-1,19,17,18,-1,18,14,19,-1,22,25,27,-1,27,21,22,-1,26,25,16,-1,27,25,26,-1,18,17,26,-1,22,23,28,-1,28,25,22,-1,25,28,15,-1,15,16,25,-1,65,153,149,-1,149,24,65,-1,15,24,149,-1,15,28,24,-1,28,23,24,-1,38,37,36,-1,36,34,38,-1,29,161,16,-1,16,119,29,-1,30,29,119,-1,119,164,30,-1,29,30,31,-1,18,161,13,-1,18,26,161,-1,17,27,26,-1,13,161,7,-1,7,161,8,-1,147,130,119,-1,160,161,130,-1,119,130,161,-1,161,131,119,-1,164,119,131,-1,131,132,164,-1,150,132,131,-1,32,33,26,-1,26,16,35,-1,32,26,35,-1,33,34,161,-1,161,26,33,-1,16,161,34,-1,34,36,35,-1,16,34,35,-1,37,35,36,-1,34,33,38,-1,37,38,33,-1,33,32,37,-1,35,37,32,-1,20,21,27,-1,41,20,27,-1,43,41,27,-1,43,27,44,-1,17,46,45,-1,17,45,39,-1,17,39,44,-1,17,44,27,-1,20,41,152,-1,39,43,44,-1,151,45,46,-1,52,47,39,-1,39,45,52,-1,51,49,41,-1,41,43,51,-1,49,50,152,-1,152,41,49,-1,47,51,43,-1,43,39,47,-1,48,52,45,-1,45,151,48,-1,58,53,47,-1,47,52,58,-1,57,55,49,-1,49,51,57,-1,53,57,51,-1,51,47,53,-1,55,56,50,-1,50,49,55,-1,54,58,52,-1,52,48,54,-1,64,59,53,-1,53,58,64,-1,63,61,55,-1,55,57,63,-1,59,63,57,-1,57,53,59,-1,61,62,56,-1,56,55,61,-1,60,64,58,-1,58,54,60,-1,65,148,153,-1,0,66,153,-1,153,148,0,-1,5,68,67,-1,67,1,5,-1,11,69,68,-1,68,5,11,-1,6,70,69,-1,69,11,6,-1,3,71,70,-1,70,6,3,-1,71,3,72,-1,14,74,73,-1,73,4,14,-1,75,78,77,-1,77,76,75,-1,0,77,78,-1,78,1,0,-1,79,75,76,-1,76,136,79,-1,2,5,80,-1,6,2,80,-1,81,83,82,-1,83,78,75,-1,75,82,83,-1,84,82,75,-1,75,79,84,-1,84,88,85,-1,85,82,84,-1,86,81,82,-1,86,82,85,-1,87,89,88,-1,88,84,87,-1,3,88,89,-1,89,4,3,-1,89,87,90,-1,163,76,77,-1,77,156,163,-1,136,76,163,-1,92,136,163,-1,163,93,92,-1,94,91,90,-1,90,87,94,-1,94,17,19,-1,19,91,94,-1,95,96,22,-1,22,21,95,-1,97,92,96,-1,95,97,96,-1,94,97,17,-1,98,23,22,-1,22,96,98,-1,93,98,96,-1,96,92,93,-1,163,156,65,-1,65,24,163,-1,93,163,24,-1,93,24,98,-1,98,24,23,-1,101,110,100,-1,100,99,101,-1,92,103,102,-1,102,136,92,-1,136,102,104,-1,104,165,136,-1,102,105,104,-1,94,87,103,-1,94,103,97,-1,17,97,95,-1,139,165,134,-1,87,84,103,-1,84,79,103,-1,154,139,135,-1,162,135,103,-1,139,103,135,-1,103,139,137,-1,165,137,136,-1,137,165,138,-1,157,137,138,-1,165,139,155,-1,107,92,97,-1,108,107,97,-1,108,97,109,-1,103,99,109,-1,109,97,103,-1,107,101,99,-1,92,107,99,-1,92,99,103,-1,110,101,107,-1,99,100,109,-1,109,100,110,-1,110,108,109,-1});
  }
}
protected class MFInt32112 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {107,108,110,-1,111,106,95,-1,95,21,20,-1,95,20,152,-1,111,95,152,-1,17,95,106,-1,17,106,112,-1,17,112,151,-1,17,151,46,-1,140,141,42,-1,112,106,111,-1,142,143,40,-1,65,156,148,-1,156,77,0,-1,0,148,156,-1,78,83,5,-1,5,1,78,-1,83,81,80,-1,80,5,83,-1,81,86,6,-1,6,80,81,-1,86,85,3,-1,3,6,86,-1,85,88,3,-1,89,90,91,-1,91,4,89,-1,112,113,48,-1,48,151,112,-1,152,50,114,-1,114,111,152,-1,111,114,113,-1,113,112,111,-1,113,115,54,-1,54,48,113,-1,50,56,116,-1,116,114,50,-1,114,116,115,-1,115,113,114,-1,115,117,60,-1,60,54,115,-1,56,62,118,-1,118,116,56,-1,116,118,117,-1,117,115,116,-1,122,125,158,-1,158,121,122,-1,120,121,158,-1,158,124,120,-1,122,123,119,-1,119,125,122,-1,129,127,126,-1,126,159,129,-1,126,120,124,-1,124,159,126,-1,128,127,129,-1,129,139,128,-1,124,144,146,-1,146,159,124,-1,144,124,158,-1,158,145,144,-1,125,133,145,-1,145,158,125,-1,159,146,155,-1,155,129,159,-1,155,139,129,-1,133,125,119,-1,4,19,14,-1,4,91,19,-1,167,168,169,-1,169,170,171,-1,167,169,171,-1,171,172,173,-1,171,173,166,-1,167,171,166,-1,166,59,64,-1,64,167,166,-1,64,60,168,-1,168,167,64,-1,60,117,169,-1,169,168,60,-1,117,118,170,-1,170,169,117,-1,118,62,171,-1,171,170,118,-1,62,61,172,-1,172,171,62,-1,61,63,173,-1,173,172,61,-1,63,59,166,-1,166,173,63,-1});
  }
}
protected class MFInt32113 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {55,58,53,-1,53,54,55,-1,58,55,56,-1,56,57,58,-1,54,53,59,-1,59,60,54,-1,61,62,63,-1,64,62,61,-1,65,66,67,-1,53,58,67,-1,67,66,53,-1,53,66,68,-1,68,59,53,-1,69,72,68,-1,68,66,69,-1,70,66,65,-1,70,69,66,-1,72,75,71,-1,71,68,72,-1,75,72,73,-1,73,74,75,-1,75,76,71,-1,30,1,4,-1,4,29,30,-1,2,4,1,-1,136,137,134,-1,134,135,136,-1,157,160,158,-1,158,159,157,-1,161,162,158,-1,158,160,161,-1,165,166,163,-1,163,164,165,-1,167,166,168,-1,163,166,167,-1,158,162,167,-1,165,171,170,-1,170,166,165,-1,166,170,172,-1,172,168,166,-1,139,145,136,-1,136,138,139,-1,135,138,136,-1,172,170,173,-1,170,171,173,-1,78,83,79,-1,79,77,78,-1,140,141,134,-1,134,137,140,-1,143,140,137,-1,137,142,143,-1,140,143,144,-1,158,174,159,-1,158,167,174,-1,162,163,167,-1,71,80,68,-1,68,80,59,-1,59,81,60,-1,59,80,81,-1,137,134,141,-1,141,140,137,-1,142,137,140,-1,140,143,142,-1,144,143,140,-1,177,178,167,-1,167,168,176,-1,177,167,176,-1,178,179,174,-1,174,167,178,-1,81,80,77,-1,77,79,82,-1,81,77,82,-1,83,82,79,-1,77,84,78,-1,83,78,84,-1,84,85,83,-1,82,83,85,-1,169,164,163,-1,181,169,163,-1,180,181,163,-1,180,163,175,-1,162,186,182,-1,162,182,183,-1,162,183,175,-1,162,175,163,-1,169,181,184,-1,183,180,175,-1,185,182,186,-1,16,13,6,-1,6,9,16,-1,17,15,8,-1,8,7,17,-1,14,20,11,-1,11,5,14,-1,13,17,7,-1,7,6,13,-1,18,19,12,-1,12,10,18,-1,24,21,13,-1,13,16,24,-1,25,23,15,-1,15,17,25,-1,21,25,17,-1,17,13,21,-1,22,28,20,-1,20,14,22,-1,26,27,19,-1,19,18,26,-1,207,208,205,-1,205,206,207,-1,211,212,209,-1,209,210,211,-1,208,211,210,-1,210,205,208,-1,212,214,213,-1,213,209,212,-1,216,207,206,-1,206,215,216,-1,139,146,145,-1,0,30,29,-1,29,3,0,-1,63,67,58,-1,58,57,63,-1,62,65,67,-1,67,63,62,-1,64,70,65,-1,65,62,64,-1,73,69,70,-1,70,64,73,-1,69,73,72,-1,86,76,75,-1,75,74,86,-1,87,90,88,-1,88,89,87,-1,56,88,90,-1,90,57,56,-1,91,87,89,-1,89,92,91,-1,61,63,93,-1,64,61,93,-1,94,95,96,-1,95,90,87,-1,87,96,95,-1,97,96,87,-1,87,91,97,-1,97,101,98,-1,98,96,97,-1,99,94,96,-1,99,96,98,-1,100,102,101,-1,101,97,100,-1,73,101,102,-1,102,74,73,-1,102,100,103,-1,35,31,32,-1,32,36,35,-1,34,31,35,-1,147,150,148,-1,148,149,147,-1,189,190,187,-1,187,188,189,-1,189,162,161,-1,161,190,189,-1,191,192,165,-1,165,164,191,-1,193,194,192,-1,191,193,192,-1,189,193,162,-1,195,171,165,-1,165,192,195,-1,196,195,192,-1,192,194,196,-1,148,156,139,-1,139,138,148,-1,149,148,138,-1,196,173,195,-1,195,173,171,-1,105,110,106,-1,106,104,105,-1,147,152,151,-1,151,150,147,-1,150,151,153,-1,153,154,150,-1,151,155,153,-1,189,188,197,-1,189,197,193,-1,162,193,191,-1,38,39,37,-1,100,97,107,-1,97,91,107,-1,91,92,108,-1,91,108,107,-1,150,152,147,-1,152,150,151,-1,154,151,150,-1,151,154,153,-1,155,151,153,-1,154,150,148,-1,199,194,193,-1,200,199,193,-1,200,193,201,-1,197,202,201,-1,201,193,197,-1,109,105,104,-1,108,109,104,-1,108,104,107,-1,110,105,109,-1,104,106,111,-1,111,106,110,-1,110,112,111,-1});
  }
}
protected class MFInt32114 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {109,112,110,-1,203,198,191,-1,191,164,169,-1,191,169,184,-1,203,191,184,-1,162,191,198,-1,162,198,204,-1,162,204,185,-1,162,185,186,-1,169,181,184,-1,204,198,203,-1,182,186,185,-1,139,156,146,-1,36,32,33,-1,33,40,36,-1,90,95,63,-1,63,57,90,-1,95,94,93,-1,93,63,95,-1,94,99,64,-1,64,93,94,-1,99,98,73,-1,73,64,99,-1,98,101,73,-1,102,103,113,-1,113,74,102,-1,41,44,43,-1,43,42,41,-1,45,48,47,-1,47,46,45,-1,46,47,44,-1,44,41,46,-1,44,50,49,-1,49,43,44,-1,48,52,51,-1,51,47,48,-1,47,51,50,-1,50,44,47,-1,217,218,216,-1,216,215,217,-1,213,214,219,-1,219,220,213,-1,220,219,218,-1,218,217,220,-1,117,118,115,-1,115,116,117,-1,120,116,115,-1,115,119,120,-1,117,122,121,-1,121,118,117,-1,125,126,123,-1,123,124,125,-1,123,120,119,-1,119,124,123,-1,128,126,125,-1,125,127,128,-1,119,130,129,-1,129,124,119,-1,130,119,115,-1,115,131,130,-1,118,132,131,-1,131,115,118,-1,124,129,133,-1,133,125,124,-1,133,127,125,-1,132,118,121,-1,74,114,86,-1,74,113,114,-1,222,223,224,-1,224,225,226,-1,222,224,226,-1,226,227,228,-1,226,228,221,-1,222,226,221,-1,221,208,207,-1,207,222,221,-1,207,216,223,-1,223,222,207,-1,216,218,224,-1,224,223,216,-1,218,219,225,-1,225,224,218,-1,219,214,226,-1,226,225,219,-1,214,212,227,-1,227,226,214,-1,212,211,228,-1,228,227,212,-1,211,208,221,-1,221,228,211,-1});
  }
}
protected class MFVec3f115 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,6.248f,3.861f,0f,3.604f,3.332f,0f,1.678f,4.132f,0f,-1.06f,2.132f,0f,-0.6113f,0.4257f,0f,2.508f,3.48f,0f,1.056f,3.569f,3.122f,1.031f,1.087f,3.864f,3.37f,0.8051f,3.096f,6.185f,2.785f,2.962f,3.586f,2.468f,0.6641f,1.54f,3.44f,2.605f,1.26f,2.524f,3.041f,1.031f,-0.4007f,1.088f,-0.0485f,-0.7313f,3.008f,9.038f,-0.4634f,4.599f,7.193f,-1.764f,0f,0.878f,-3.276f,1.883f,1.069f,-2.26f,0f,0.1453f,-2.244f,0f,2.477f,-5.252f,0f,3.279f,-5.606f,0f,8.131f,-5.026f,0f,9.834f,-2.714f,0f,10.08f,0.3393f,2.985f,7.677f,-4.117f,3.321f,2.779f,-2.866f,2.485f,2.748f,-4.523f,2.609f,9.148f,-2.623f,3.922f,0.9315f,0.1364f,3.294f,1.489f,2.328f,2.942f,-0.3907f,1.64f,4.119f,4.301f,-2.311f,3.711f,3.021f,-2.417f,3.874f,2.792f,-1.643f,4.338f,5.172f,-1.863f,4.171f,4.342f,-1.796f,4.413f,4.651f,-2.881f,4.005f,2.883f,-2.59f,0.4904f,1.513f,-4.362f,-0.2841f,1.361f,-4.319f,0.2529f,1.879f,-4.875f,-0.2529f,1.879f,-4.875f,0.4533f,1.752f,-4.772f,0.9863f,1.737f,-4.557f,0.2841f,1.361f,-4.319f,0f,1.064f,-3.769f,0.4904f,1.313f,-4.729f,-0.2841f,1.093f,-4.661f,0.2529f,1.691f,-5.12f,-0.2529f,1.691f,-5.12f,0.4533f,1.524f,-4.947f,0.2841f,1.093f,-4.661f,0.3923f,1.387f,-4.921f,-0.2512f,1.186f,-4.739f,0.2427f,1.709f,-5.058f,-0.2427f,1.709f,-5.058f,0.3975f,1.636f,-5.002f,0.2512f,1.291f,-4.92f,0.8498f,0.4808f,-5.345f,-0.4084f,0.2239f,-5.621f,0.4082f,1.526f,-5.625f,-0.2698f,1.635f,-6.083f,0.8735f,0.8532f,-5.488f,0.414f,0.3346f,-5.233f,0f,9.598f,1.657f,1.799f,6.211f,3.236f,1.607f,3.596f,2.915f,1.383f,1.845f,2.973f,1.393f,1.434f,3.096f,1.392f,1.165f,3.011f,1.525f,-0.0858f,2.343f,1.629f,-0.2382f,1.67f,1.191f,0.0201f,0.2184f,1.805f,0.3477f,-0.61f,-2.962f,3.586f,2.468f,-3.096f,6.185f,2.785f,-1.799f,6.211f,3.236f,-1.607f,3.596f,2.915f,-3.864f,3.37f,0.8051f,-0.6641f,1.54f,3.44f,-1.393f,1.434f,3.096f,-2.605f,1.26f,2.524f,-1.383f,1.845f,2.973f,-3.122f,1.031f,1.087f,-1.525f,-0.0858f,2.343f,-1.392f,1.165f,3.011f,-3.041f,1.031f,-0.4007f,-1.629f,-0.2382f,1.67f,-1.191f,0.0201f,0.2184f,-1.805f,0.3477f,-0.61f,-1.088f,-0.0485f,-0.7313f,-4.599f,6.495f,-1.764f,-3.008f,9.038f,-0.4634f,-1.883f,1.069f,-2.26f,-2.485f,2.748f,-4.523f,-2.985f,7.677f,-4.117f,-3.321f,2.779f,-2.866f,-2.609f,9.148f,-2.623f,-3.874f,2.792f,-1.643f,-4.005f,2.883f,-2.59f,-4.171f,4.342f,-1.796f,-3.924f,0.7167f,0.1364f,-3.703f,1.852f,-1.574f,-3.294f,1.526f,2.328f,-2.944f,-0.6055f,1.64f,-0.9863f,1.737f,-4.557f,-4.338f,5.172f,-1.863f,-4.119f,4.301f,-2.311f,-3.711f,3.021f,-2.417f,-4.413f,4.651f,-2.881f,-0.4533f,1.752f,-4.772f,-0.4904f,1.513f,-4.362f,-0.4904f,1.313f,-4.729f,-0.4533f,1.524f,-4.947f,-0.3923f,1.387f,-4.921f,-0.3975f,1.636f,-5.002f,-0.861f,0.4917f,-5.679f,-0.8735f,1.084f,-5.873f,4.42f,6.072f,0.8408f,0f,4.078f,5.465f,2.609f,4.238f,4.383f,4.491f,4.519f,2.859f,4.812f,4.641f,0.25f,0f,7.281f,4.847f,4.089f,6.811f,2.657f,-2.609f,4.238f,4.383f,-4.491f,4.519f,2.859f,-4.812f,4.641f,0.25f,-4.089f,6.811f,2.657f,4.599f,7.193f,-1.764f,3.922f,0.9315f,0.1364f,3.294f,1.489f,2.328f,3.051f,8.417f,1.903f,-3.051f,8.417f,1.903f,-4.599f,6.495f,-1.764f,-4.573f,6.071f,0.8593f,-3.924f,0.7167f,0.1364f,-3.294f,1.526f,2.328f,-4.573f,6.071f,0.8593f,0f,2.477f,-5.252f,0.2529f,1.879f,-4.875f,0.2841f,1.361f,-4.319f,0f,1.064f,-3.769f,0f,8.876f,2.944f,1.401f,8.728f,2.443f,-1.401f,8.728f,2.443f,3.864f,3.37f,0.8051f,0f,8.876f,2.944f,3.051f,8.417f,1.903f,2.942f,-0.3907f,1.64f,-0.2841f,1.361f,-4.319f,-0.2529f,1.879f,-4.875f,1.401f,8.728f,2.443f,-3.864f,3.37f,0.8051f,-3.051f,8.417f,1.903f,-1.401f,8.728f,2.443f,-2.944f,-0.6055f,1.64f,2.16f,7.239f,4.144f,-2.16f,7.239f,4.144f,3.864f,3.37f,0.8051f,3.703f,2.55f,-1.574f,-3.864f,3.37f,0.8051f,-3.051f,8.417f,1.903f,3.887f,6.402f,2.215f,-3.887f,5.704f,2.215f,0.0275f,0.6889f,-6.368f,0.0275f,0.6889f,-6.368f,0.0275f,0.6889f,-6.368f,0.0275f,0.6889f,-6.368f,0.0275f,0.6889f,-6.368f,0.0275f,0.6889f,-6.368f,0.0275f,0.6889f,-6.368f,0.0275f,0.6889f,-6.368f});
  }
}
protected class MFVec2f116 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0199f,0.7411f,0.304f,0.7353f,0.4514f,0.7245f,0.0199f,0.9847f,0.3019f,0.9545f,0.315f,0.9067f,0.2582f,0.5588f,0.2318f,0.8287f,0.315f,0.9067f,0.3537f,0.4343f,0.5009f,0.4343f,0.5516f,0.8015f,0.4488f,0.3265f,0.2582f,0.5588f,0.315f,0.9067f,0.315f,0.9067f,0.3537f,0.4343f,0.2318f,0.8287f,0.5009f,0.4343f,0.4488f,0.3265f,0.5516f,0.8015f,0.2582f,0.5588f,0.315f,0.9067f,0.315f,0.9067f,0.3537f,0.4343f,0.2318f,0.8287f,0.5009f,0.4343f,0.4488f,0.3265f,0.5516f,0.8015f,0.1984f,0.9656f,0.185f,0.7377f,0.304f,0.7353f,0.185f,0.7377f,0.0199f,0.7411f,0.4514f,0.7245f,0.3019f,0.9545f,0.1984f,0.9656f,0.0634f,0.8794f,0.0815f,0.8144f,0.0592f,0.7948f,0.0199f,0.9847f,0.2582f,0.5588f,0.3537f,0.4343f,0.3537f,0.4343f,0.2582f,0.5588f,0.315f,0.9067f,0.2318f,0.8287f,0.2318f,0.8287f,0.315f,0.9067f,0.3537f,0.4343f,0.2582f,0.5588f,0.2318f,0.8287f,0.315f,0.9067f,0.4022f,0.8072f,0.4092f,0.9332f,0.3423f,0.9345f,0.2496f,0.9363f,0.2496f,0.808f,0.3324f,0.8076f,0.4487f,0.7966f,0.4853f,0.9277f,0.2496f,0.7146f,0.2838f,0.7079f,0.2496f,0.7548f,0.2496f,0.6844f,0.3214f,0.7028f,0.3839f,0.6943f,0.3208f,0.7227f,0.4105f,0.6832f,0.3282f,0.629f,0.3213f,0.6897f,0.4063f,0.6832f,0.3336f,0.6217f,0.2485f,0.6026f,0.2485f,0.6244f,0.3109f,0.6342f,0.3426f,0.6501f,0.4492f,0.7686f,0.456f,0.773f,0.4645f,0.8438f,0.4405f,0.723f,0.4866f,0.9483f,0.4732f,0.8841f,0.477f,0.8588f,0.4408f,0.7797f,0.4619f,0.8418f,0.3056f,0.6309f,0.0969f,0.8072f,0.1568f,0.9345f,0.09f,0.9332f,0.1668f,0.8076f,0.0504f,0.7966f,0.0139f,0.9277f,0.2154f,0.7079f,0.1778f,0.7028f,0.1783f,0.7227f,0.1153f,0.6943f,0.0887f,0.6832f,0.171f,0.629f,0.1778f,0.6897f,0.0928f,0.6832f,0.1656f,0.6217f,0.1882f,0.6342f,0.1566f,0.6501f,0.0499f,0.7686f,0.0346f,0.8438f,0.0432f,0.773f,0.0587f,0.723f,0.0125f,0.9483f,0.026f,0.8841f,0.0222f,0.8588f,0.0583f,0.7797f,0.0373f,0.8418f,0.1935f,0.6309f,0.2496f,0.6403f,0.5986f,0.9248f,0.6012f,0.8499f,0.689f,0.8561f,0.6892f,0.9241f,0.5242f,0.9216f,0.5225f,0.8475f,0.7915f,0.897f,0.8075f,0.8685f,0.6012f,0.8499f,0.5986f,0.9248f,0.6892f,0.9241f,0.689f,0.8561f,0.7915f,0.897f,0.8075f,0.8685f,0.6078f,0.9826f,0.5191f,0.9846f,0.6077f,0.9826f,0.7007f,0.9832f,0.7008f,0.9832f,0.9771f,0.7722f,0.9707f,0.8593f,0.8581f,0.8585f,0.8839f,0.7747f,0.9591f,0.9681f,0.9f,0.9681f,0.9199f,0.6984f,0.9684f,0.7206f,0.8499f,0.7752f,0.8458f,0.7262f,0.8298f,0.6747f,0.865f,0.9347f,0.8697f,0.9696f,0.9771f,0.7722f,0.8581f,0.8585f,0.9707f,0.8593f,0.8839f,0.7747f,0.9199f,0.6984f,0.9684f,0.7206f,0.8458f,0.7262f,0.8499f,0.7752f,0.8298f,0.6747f,0.865f,0.9347f,0.5498f,0.7202f,0.5638f,0.7169f,0.5718f,0.7409f,0.5371f,0.7082f,0.5326f,0.6846f,0.5382f,0.6801f,0.5866f,0.6942f,0.5873f,0.668f,0.6438f,0.6775f,0.6181f,0.7065f,0.5894f,0.7192f,0.6547f,0.751f,0.5605f,0.6719f,0.679f,0.7289f,0.7191f,0.6946f,0.7036f,0.762f,0.7595f,0.76f,0.592f,0.7489f,0.5625f,0.6941f,0.638f,0.7485f,0.6245f,0.7448f,0.6138f,0.7412f,0.6107f,0.7461f,0.5568f,0.6838f,0.5564f,0.6793f,0.5495f,0.6819f,0.5528f,0.6851f,0.5564f,0.6793f,0.5495f,0.6819f,0.5416f,0.6788f,0.5498f,0.7202f,0.5718f,0.7409f,0.5638f,0.7169f,0.5371f,0.7082f,0.5866f,0.6942f,0.6181f,0.7065f,0.5894f,0.7191f,0.6547f,0.751f,0.679f,0.7289f,0.7036f,0.7619f,0.592f,0.7489f,0.5625f,0.6941f,0.638f,0.7485f,0.6245f,0.7448f,0.6138f,0.7412f,0.6107f,0.7461f,0.5568f,0.6838f,0.5528f,0.6851f,0.9104f,0.746f,0.9034f,0.7467f,0.9112f,0.7728f,0.9336f,0.7719f,0.903f,0.7463f,0.9106f,0.7457f,0.9342f,0.7713f,0.9112f,0.7717f,0.8789f,0.7463f,0.8707f,0.7717f,0.8785f,0.7467f,0.8707f,0.7728f,0.8715f,0.746f,0.8483f,0.7719f,0.8477f,0.7713f,0.8713f,0.7457f,0.9336f,0.7719f,0.9112f,0.7728f,0.8707f,0.7728f,0.8483f,0.7719f,0.8477f,0.7713f,0.8707f,0.7717f,0.9112f,0.7717f,0.9342f,0.7713f});
  }
}
}
