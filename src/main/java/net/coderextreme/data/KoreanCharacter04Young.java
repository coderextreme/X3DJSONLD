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
public class KoreanCharacter04Young {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new KoreanCharacter04Young().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/KoreanCharacter04Young.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("KoreanCharacter04Young.x3d"))
        .addMeta(new meta().setName("creator").setContent("Jin Hoon Lee and Min Joo Lee"))
        .addMeta(new meta().setName("translator").setContent("Chul Hee Jung and Myeong Won Lee"))
        .addMeta(new meta().setName("created").setContent("31 March 2011"))
        .addMeta(new meta().setName("translated").setContent("1 November 2014"))
        .addMeta(new meta().setName("modified").setContent("23 December 2021"))
        .addMeta(new meta().setName("description").setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacter00ReadMe.txt"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharactersIllustrated.pdf"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter04Young.x3d"))
        .addMeta(new meta().setName("generator").setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"))
        .addMeta(new meta().setName("generator").setContent("Suwon University HAnim Editor"))
        .addMeta(new meta().setName("generator").setContent("Gnu Image Manipulation Program, http://www.gimp.org"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("KoreanCharacter04Young.x3d"))
        .addChild(new NavigationInfo().setSpeed(1.5000f))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,1f,0f}).setDescription("Young").setPosition(new float[] {0f,1f,3f}))
        .addChild(new HAnimHumanoid().setName("Young").setDEF("hanim_Young").setScale(new float[] {0.0225f,0.0225f,0.0225f}).setVersion("2.0")
          .addComments("original HAnimHumanoid info='\"authorName=Chul Hee Jung and Myeong Won Lee\" \"authorEmail=myeongwonlee@gmail.com\" \"creationDate=31 March 2011\" \"humanoidVersion=2.0\" \"gender=female\" \"height=1.5\"'")
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .addValue(new MetadataString().setName("authorName").setValue(new MFString0().getArray()))
            .addValue(new MetadataString().setName("authorEmail").setValue(new MFString1().getArray()))
            .addValue(new MetadataString().setName("creationDate").setValue(new MFString2().getArray()))
            .addValue(new MetadataString().setName("gender").setValue(new MFString3().getArray()))
            .addValue(new MetadataFloat().setName("height").setValue(new MFFloat4().getArray()))
            .addValue(new MetadataString().setName("humanoidVersion").setValue(new MFString5().getArray())))
          .addSkeleton(new HAnimJoint().setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new float[] {0f,31.540001f,-0.3172f}).setUlimit(new MFFloat6().getArray()).setLlimit(new MFFloat7().getArray())
            .addChild(new HAnimSegment().setName("sacrum").setDEF("hanim_sacrum")
              .addChild(new Transform().setTranslation(new float[] {0f,31.540001f,-0.3172f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                    .setTexture(new ImageTexture().setDEF("YoungTextureAtlas").setUrl(new MFString8().getArray())))
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt329().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt3210().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f12().getArray()))))))
            .addChild(new HAnimJoint().setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {3.504f,29.040001f,-0.4027f}).setUlimit(new MFFloat13().getArray()).setLlimit(new MFFloat14().getArray())
              .addChild(new HAnimSegment().setName("l_thigh").setDEF("hanim_l_thigh")
                .addChild(new Transform().setTranslation(new float[] {3.504f,29.040001f,-0.4027f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                      .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3215().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt3216().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f18().getArray()))))))
              .addChild(new HAnimJoint().setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {3.414f,14.95f,-0.4549f}).setUlimit(new MFFloat19().getArray()).setLlimit(new MFFloat20().getArray())
                .addChild(new HAnimSegment().setName("l_calf").setDEF("hanim_l_calf")
                  .addChild(new Transform().setTranslation(new float[] {3.414f,14.95f,-0.4549f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3221().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt3222().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f23().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f24().getArray()))))))
                .addChild(new HAnimJoint().setName("l_talocrural").setDEF("hanim_l_talocrural").setCenter(new float[] {3.18f,3.449f,-0.3088f}).setUlimit(new MFFloat25().getArray()).setLlimit(new MFFloat26().getArray())
                  .addChild(new HAnimSegment().setName("l_talus").setDEF("hanim_l_talus")
                    .addChild(new Transform().setTranslation(new float[] {3.18f,3.449f,-0.3088f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3227().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt3228().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f29().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f30().getArray()))))))
                  .addChild(new HAnimJoint().setName("l_metatarsophalangeal_2").setDEF("hanim_l_metatarsophalangeal_2").setCenter(new float[] {3.18f,3.189f,0.9724f}).setUlimit(new MFFloat31().getArray()).setLlimit(new MFFloat32().getArray())
                    .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_2").setDEF("hanim_l_tarsal_proximal_phalanx_2")
                      .addChild(new Transform().setTranslation(new float[] {3.18f,3.189f,0.9724f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3233().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt3234().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f35().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f36().getArray()))))))))))
            .addChild(new HAnimJoint().setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-3.504f,29.040001f,-0.4027f}).setUlimit(new MFFloat37().getArray()).setLlimit(new MFFloat38().getArray())
              .addChild(new HAnimSegment().setName("r_thigh").setDEF("hanim_r_thigh")
                .addChild(new Transform().setTranslation(new float[] {-3.504f,29.040001f,-0.4027f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                      .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3239().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt3240().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f42().getArray()))))))
              .addChild(new HAnimJoint().setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-3.414f,14.95f,-0.4549f}).setUlimit(new MFFloat43().getArray()).setLlimit(new MFFloat44().getArray())
                .addChild(new HAnimSegment().setName("r_calf").setDEF("hanim_r_calf")
                  .addChild(new Transform().setTranslation(new float[] {-3.414f,14.95f,-0.4549f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3245().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt3246().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f47().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f48().getArray()))))))
                .addChild(new HAnimJoint().setName("r_talocrural").setDEF("hanim_r_talocrural").setCenter(new float[] {-3.18f,3.449f,-0.3088f}).setUlimit(new MFFloat49().getArray()).setLlimit(new MFFloat50().getArray())
                  .addChild(new HAnimSegment().setName("r_talus").setDEF("hanim_r_talus")
                    .addChild(new Transform().setTranslation(new float[] {-3.18f,3.449f,-0.3088f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3251().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt3252().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f54().getArray()))))))
                  .addChild(new HAnimJoint().setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new float[] {-3.18f,3.189f,0.9724f}).setUlimit(new MFFloat55().getArray()).setLlimit(new MFFloat56().getArray())
                    .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2")
                      .addChild(new Transform().setTranslation(new float[] {-3.18f,3.189f,0.9724f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3257().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt3258().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f60().getArray()))))))))))
            .addChild(new HAnimJoint().setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0f,27.07f,-0.3172f}).setUlimit(new MFFloat61().getArray()).setLlimit(new MFFloat62().getArray())
              .addChild(new HAnimSegment().setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new Transform().setTranslation(new float[] {0f,27.07f,-0.3172f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                      .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3263().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt3264().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f65().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f66().getArray()))))))
              .addChild(new HAnimJoint().setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {5.441f,45.830002f,0.1786f}).setUlimit(new MFFloat67().getArray()).setLlimit(new MFFloat68().getArray())
                .addChild(new HAnimSegment().setName("l_upperarm").setDEF("hanim_l_upperarm")
                  .addChild(new Transform().setTranslation(new float[] {5.441f,45.830002f,0.1786f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3269().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt3270().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f72().getArray()))))))
                .addChild(new HAnimJoint().setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {6.823f,36.080002f,0.08607f}).setUlimit(new MFFloat73().getArray()).setLlimit(new MFFloat74().getArray())
                  .addChild(new HAnimSegment().setName("l_forearm").setDEF("hanim_l_forearm")
                    .addChild(new Transform().setTranslation(new float[] {6.823f,36.080002f,0.08607f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3275().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt3276().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f78().getArray()))))))
                  .addChild(new HAnimJoint().setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setCenter(new float[] {6.915f,28.41f,0.3752f}).setUlimit(new MFFloat79().getArray()).setLlimit(new MFFloat80().getArray())
                    .addChild(new HAnimSegment().setName("l_carpal").setDEF("hanim_l_carpal")
                      .addChild(new Transform().setTranslation(new float[] {6.915f,28.41f,0.3752f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3281().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt3282().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f83().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f84().getArray())))))))))
              .addChild(new HAnimJoint().setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-5.441f,45.830002f,0.1786f}).setUlimit(new MFFloat85().getArray()).setLlimit(new MFFloat86().getArray())
                .addChild(new HAnimSegment().setName("r_upperarm").setDEF("hanim_r_upperarm")
                  .addChild(new Transform().setTranslation(new float[] {-5.441f,45.830002f,0.1786f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3287().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt3288().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f89().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f90().getArray()))))))
                .addChild(new HAnimJoint().setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-6.823f,36.080002f,0.08607f}).setUlimit(new MFFloat91().getArray()).setLlimit(new MFFloat92().getArray())
                  .addChild(new HAnimSegment().setName("r_forearm").setDEF("hanim_r_forearm")
                    .addChild(new Transform().setTranslation(new float[] {-6.823f,36.080002f,0.08607f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3293().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt3294().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f95().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f96().getArray()))))))
                  .addChild(new HAnimJoint().setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setCenter(new float[] {-6.915f,28.41f,0.3752f}).setUlimit(new MFFloat97().getArray()).setLlimit(new MFFloat98().getArray())
                    .addChild(new HAnimSegment().setName("r_carpal").setDEF("hanim_r_carpal")
                      .addChild(new Transform().setTranslation(new float[] {-6.915f,28.41f,0.3752f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3299().getArray()).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt32100().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f101().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f102().getArray())))))))))
              .addChild(new HAnimJoint().setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0f,35.75f,-0.445f}).setUlimit(new MFFloat103().getArray()).setLlimit(new MFFloat104().getArray())
                .addChild(new HAnimSegment().setName("l5").setDEF("hanim_l5")
                  .addChild(new Transform().setTranslation(new float[] {0f,35.75f,-0.445f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32105().getArray().append(new MFInt32106().getArray())).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt32107().getArray().append(new MFInt32108().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f109().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f110().getArray()))))))
                .addChild(new HAnimJoint().setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0f,50.470001f,-0.1481f}).setUlimit(new MFFloat111().getArray()).setLlimit(new MFFloat112().getArray())
                  .addChild(new HAnimSegment().setName("skull").setDEF("hanim_skull")
                    .addChild(new Transform().setTranslation(new float[] {0f,50.470001f,-0.1481f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("YoungTextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32113().getArray().append(new MFInt32114().getArray())).setCreaseAngle(1.5700f).setTexCoordIndex(new MFInt32115().getArray().append(new MFInt32116().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f117().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f118().getArray()))))))))))
          .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint().setUSE("hanim_sacroiliac"))
          .addJoints(new HAnimJoint().setUSE("hanim_skullbase"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_hip"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_hip"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_radiocarpal"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_radiocarpal"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_talocrural"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_talocrural"))
          .addSegments(new HAnimSegment().setUSE("hanim_l5"))
          .addSegments(new HAnimSegment().setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegment().setUSE("hanim_sacrum"))
          .addSegments(new HAnimSegment().setUSE("hanim_skull"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_talus"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_talus"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_upperarm"))))      ;
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
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.5000f});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"2.0"});
  }
}
protected class MFFloat6 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat7 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFString8 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/Young.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Young.png"});
  }
}
protected class MFInt329 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFInt3210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFVec3f11 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.9084f,0.0235f,0.0000f,0.7867f,-0.4669f,-0.3773f,0.7867f,-0.4012f,-0.6534f,0.7867f,-0.3219f,-0.7545f,0.7867f,0.0235f,-0.6534f,0.7867f,0.3690f,-0.3773f,0.7867f,0.4482f,0.0000f,0.7867f,0.5139f,0.3773f,0.7867f,0.4482f,0.6534f,0.7867f,0.3690f,0.7545f,0.7867f,0.0235f,0.6534f,0.7867f,-0.3219f,0.3773f,0.7867f,-0.4012f,0.0000f,0.4542f,-0.7625f,-0.4879f,0.4542f,-0.6572f,-0.8451f,0.4542f,-0.3695f,-0.9758f,0.4542f,0.0235f,-0.8451f,0.4542f,0.4165f,-0.4879f,0.4542f,0.6023f,0.0000f,0.4542f,0.7076f,0.4879f,0.4542f,0.6023f,0.8451f,0.4542f,0.4165f,0.9758f,0.4542f,0.0235f,0.8451f,0.4542f,-0.3695f,0.4879f,0.4542f,-0.6572f,0.0000f,0.0000f,-0.8292f,-0.5634f,0.0000f,-0.7076f,-0.9758f,0.0000f,-0.3754f,-1.1270f,0.0000f,0.0235f,-0.9758f,0.0000f,0.4773f,-0.5634f,0.0000f,0.7076f,0.0000f,0.0000f,0.8292f,0.5634f,0.0000f,0.7076f,0.9758f,0.0000f,0.4773f,1.1270f,0.0000f,0.0235f,0.9758f,0.0000f,-0.3754f,0.5634f,0.0000f,-0.7076f,0.0000f,-0.4542f,-0.7076f,-0.4879f,-0.4542f,-0.6023f,-0.8451f,-0.4542f,-0.3146f,-0.9758f,-0.4542f,0.0235f,-0.8451f,-0.4542f,0.4165f,-0.4879f,-0.4542f,0.6023f,0.0000f,-0.4542f,0.7076f,0.4879f,-0.4542f,0.6023f,0.8451f,-0.4542f,0.4165f,0.9758f,-0.4542f,0.0235f,0.8451f,-0.4542f,-0.3146f,0.4879f,-0.4542f,-0.6023f,0.0000f,-0.7867f,-0.3754f,-0.2817f,-0.7867f,-0.3146f,-0.4879f,-0.7867f,-0.2034f,-0.5634f,-0.7867f,0.0235f,-0.4879f,-0.7867f,0.2504f,-0.2817f,-0.7867f,0.4165f,0.0000f,-0.7867f,0.4773f,0.2817f,-0.7867f,0.4165f,0.4879f,-0.7867f,0.2504f,0.5634f,-0.7867f,0.0235f,0.4879f,-0.7867f,-0.2034f,0.2817f,-0.7867f,-0.3146f,0.0000f,-0.9084f,0.0235f});
  }
}
protected class MFVec2f12 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.6211f,0.5754f,0.7851f,0.5720f,0.7614f,0.5720f,0.6907f,0.5698f,0.6200f,0.5698f,0.6158f,0.5702f,0.5451f,0.5702f,0.4167f,0.5698f,0.5451f,0.5702f,0.6158f,0.5702f,0.6200f,0.5698f,0.6907f,0.5698f,0.7614f,0.5720f,0.8036f,0.5346f,0.7761f,0.5346f,0.6989f,0.4838f,0.6219f,0.4428f,0.6154f,0.4438f,0.5492f,0.4639f,0.4166f,0.5346f,0.5492f,0.4639f,0.6154f,0.4438f,0.6219f,0.4428f,0.6989f,0.4838f,0.7761f,0.5346f,0.7912f,0.4044f,0.7635f,0.4044f,0.7042f,0.3925f,0.6194f,0.3907f,0.6148f,0.3907f,0.5450f,0.3974f,0.4163f,0.4938f,0.5450f,0.3974f,0.6148f,0.3907f,0.6194f,0.3907f,0.7042f,0.3925f,0.7635f,0.4044f,0.7950f,0.3772f,0.7662f,0.3772f,0.6945f,0.3645f,0.6236f,0.3695f,0.6160f,0.3695f,0.5438f,0.3780f,0.4160f,0.4530f,0.5438f,0.3780f,0.6160f,0.3695f,0.6236f,0.3695f,0.6945f,0.3645f,0.7662f,0.3772f,0.7887f,0.3451f,0.7635f,0.3451f,0.6980f,0.3508f,0.6262f,0.3508f,0.6297f,0.3503f,0.5389f,0.3503f,0.4181f,0.3884f,0.5389f,0.3503f,0.6297f,0.3503f,0.6262f,0.3508f,0.6980f,0.3508f,0.7635f,0.3451f,0.6237f,0.3398f});
  }
}
protected class MFFloat13 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat14 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,56,58,60,-1,56,60,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1});
  }
}
protected class MFInt3216 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,42,44,46,-1,42,46,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1});
  }
}
protected class MFVec3f17 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.6100f,2.4950f,-0.0096f,1.4490f,2.4950f,2.8200f,-1.1600f,2.4950f,3.5180f,-2.9680f,2.4950f,1.5600f,-2.9680f,2.4950f,-1.5800f,-1.1600f,2.4950f,-3.5370f,1.4490f,2.4950f,-2.8390f,2.6100f,-0.8104f,-0.0096f,1.4490f,-0.8104f,2.8190f,-1.1600f,-0.8104f,3.5180f,-2.9680f,-0.8104f,1.5600f,-2.9680f,-0.8104f,-1.5800f,-1.1600f,-0.8104f,-3.5370f,1.4490f,-0.8104f,-2.8390f,2.6100f,-3.3750f,-0.0096f,1.4490f,-3.3750f,2.8190f,-1.1600f,-3.3750f,3.5180f,-2.9680f,-3.3750f,1.5600f,-2.9680f,-3.3750f,-1.5800f,-1.1600f,-3.3750f,-3.5370f,1.4490f,-3.3750f,-2.8390f,2.9680f,-6.6800f,-0.0096f,1.6720f,-6.6800f,3.1480f,-1.2400f,-6.6800f,3.9280f,-2.9570f,-6.6800f,1.7430f,-2.9570f,-6.6800f,-1.7620f,-1.2400f,-6.6800f,-3.9470f,1.6720f,-6.6800f,-3.1670f,1.8920f,-5.1940f,-0.0096f,1.0010f,-5.1940f,2.1610f,-1.0010f,-5.1940f,2.6970f,-2.3210f,-5.1940f,1.1950f,-2.3210f,-5.1940f,-1.2140f,-1.0010f,-5.1940f,-2.7160f,1.0010f,-5.1940f,-2.1800f,1.9000f,-10.8900f,-0.0096f,1.0800f,-10.8900f,1.7140f,-0.7636f,-10.8900f,2.1400f,-2.2420f,-10.8900f,0.9472f,-2.2420f,-10.8900f,-0.9663f,-0.7636f,-10.8900f,-2.1590f,1.0800f,-10.8900f,-1.7340f,1.8070f,4.2490f,-0.0096f,0.9484f,4.2490f,2.0840f,-0.9820f,4.2490f,2.6010f,-2.5300f,4.2490f,1.1520f,-2.5300f,4.2490f,-1.1710f,-0.9820f,4.2490f,-2.6200f,0.9484f,4.2490f,-2.1030f,1.6240f,-14.1300f,-0.0096f,0.9076f,-14.1300f,1.6410f,-0.7021f,-14.1300f,2.0130f,-1.9930f,-14.1300f,0.9715f,-1.9930f,-14.1300f,-0.8451f,-0.7021f,-14.1300f,-1.8870f,0.9076f,-14.1300f,-1.5150f,0.5533f,-14.9900f,-0.0096f,0.2401f,-14.9900f,0.7943f,-0.4639f,-14.9900f,0.9569f,-1.0280f,-14.9900f,0.5013f,-1.0280f,-14.9900f,-0.3749f,-0.4639f,-14.9900f,-0.8305f,0.2401f,-14.9900f,-0.6679f});
  }
}
protected class MFVec2f18 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7190f,0.5576f,0.6284f,0.5576f,0.7414f,0.5576f,0.6787f,0.5576f,0.5781f,0.5576f,0.5154f,0.5576f,0.5378f,0.5576f,0.6284f,0.5029f,0.7509f,0.3997f,0.6284f,0.3997f,0.7509f,0.5029f,0.7811f,0.3997f,0.7811f,0.5029f,0.6964f,0.3997f,0.6964f,0.5029f,0.5604f,0.3997f,0.5604f,0.5029f,0.4756f,0.3997f,0.4756f,0.5029f,0.5059f,0.3997f,0.5059f,0.5029f,0.7509f,0.3197f,0.6284f,0.3197f,0.7811f,0.3197f,0.6964f,0.3197f,0.5604f,0.3197f,0.4756f,0.3197f,0.5059f,0.3197f,0.7651f,0.2166f,0.6284f,0.2166f,0.7989f,0.2166f,0.7043f,0.2166f,0.5525f,0.2166f,0.4579f,0.2166f,0.4917f,0.2166f,0.7224f,0.2630f,0.6284f,0.2630f,0.7456f,0.2630f,0.6805f,0.2630f,0.5762f,0.2630f,0.5112f,0.2630f,0.5344f,0.2630f,0.8705f,0.5452f,0.8705f,0.5383f,0.8705f,0.5369f,0.8705f,0.5408f,0.8705f,0.5483f,0.8705f,0.5522f,0.8705f,0.5509f,0.9170f,0.5452f,0.9170f,0.5266f,0.8900f,0.5304f,0.8900f,0.5452f,0.9170f,0.5220f,0.8900f,0.5268f,0.9170f,0.5349f,0.8900f,0.5370f,0.9170f,0.5555f,0.8900f,0.5534f,0.9170f,0.5684f,0.8900f,0.5636f,0.9170f,0.5638f,0.8900f,0.5600f,0.8746f,0.5310f,0.8746f,0.5452f,0.8746f,0.5279f,0.8746f,0.5368f,0.8746f,0.5524f,0.8746f,0.5613f,0.8746f,0.5581f});
  }
}
protected class MFFloat19 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat20 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.6335f,1.1420f,0.0206f,0.3202f,1.1420f,0.8245f,-0.3837f,1.1420f,0.9871f,-0.9483f,1.1420f,0.5315f,-0.9483f,1.1420f,-0.3447f,-0.3837f,1.1420f,-0.8003f,0.3202f,1.1420f,-0.6377f,2.0600f,-3.7780f,0.0206f,1.2870f,-2.9050f,1.7800f,1.0890f,-1.1470f,2.1330f,1.8670f,-1.3970f,0.0206f,-0.7150f,-2.9050f,2.2630f,-0.6583f,-1.1470f,2.5590f,-1.9870f,-3.7780f,1.1060f,-2.0600f,-1.3970f,0.8632f,-1.9870f,-4.4570f,-1.2050f,-2.0600f,-1.3970f,-0.8220f,-0.7150f,-4.4570f,-2.5590f,-0.6583f,-1.3970f,-2.0870f,1.2870f,-4.4570f,-2.0760f,1.0890f,-1.3970f,-1.6610f,0.9877f,0.2851f,1.6720f,1.7040f,0.2851f,0.0206f,-0.6220f,0.2851f,2.0430f,-1.9130f,0.2851f,1.0020f,-1.9130f,0.2851f,-0.8149f,-0.6220f,0.2851f,-1.8170f,0.9877f,0.2851f,-1.4450f,1.4170f,-11.1000f,0.0028f,0.8123f,-11.0900f,1.3800f,-0.5457f,-11.0900f,1.7200f,-1.6350f,-11.1000f,0.7670f,-1.6350f,-11.1100f,-0.8605f,-0.5457f,-11.1100f,-1.5350f,0.8123f,-11.1100f,-1.1950f,0.6234f,-12.5200f,0.0210f,0.3177f,-12.5200f,0.7175f,-0.3691f,-12.5200f,0.8896f,-0.9199f,-12.5200f,0.4076f,-0.9199f,-12.5300f,-0.4156f,-0.3691f,-12.5300f,-0.7569f,0.3177f,-12.5300f,-0.5849f});
  }
}
protected class MFVec2f24 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9309f,0.5848f,0.9190f,0.5848f,0.8921f,0.5848f,0.8706f,0.5848f,0.8706f,0.5848f,0.8921f,0.5848f,0.9190f,0.5848f,0.9845f,0.5321f,0.9550f,0.5475f,0.9491f,0.5599f,0.9788f,0.5571f,0.8787f,0.5475f,0.8825f,0.5599f,0.8302f,0.5321f,0.8291f,0.5571f,0.8302f,0.5200f,0.8291f,0.5571f,0.8787f,0.5200f,0.8825f,0.5571f,0.9550f,0.5200f,0.9491f,0.5571f,0.9444f,0.5755f,0.9717f,0.5755f,0.8831f,0.5755f,0.8339f,0.5755f,0.8339f,0.5755f,0.8831f,0.5755f,0.9444f,0.5755f,0.9679f,0.2444f,0.9449f,0.2445f,0.8931f,0.2445f,0.8516f,0.2444f,0.8516f,0.2442f,0.8931f,0.2442f,0.9449f,0.2442f,0.9372f,0.2243f,0.9255f,0.2244f,0.8993f,0.2244f,0.8783f,0.2243f,0.8783f,0.2243f,0.8993f,0.2243f,0.9255f,0.2243f});
  }
}
protected class MFFloat25 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat26 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.8503f,-0.0167f,-1.4920f,1.4430f,-0.0167f,0.3823f,0.0000f,-0.0167f,-1.4920f,1.2210f,0.6369f,0.3141f,0.7115f,0.6369f,-1.2980f,0.0000f,0.6369f,-1.2980f,0.0000f,0.6368f,1.3050f,-1.4430f,-0.0167f,0.3823f,-1.2210f,0.6369f,0.3141f,-0.7115f,0.6369f,-1.2980f,-0.8503f,-0.0167f,-1.4920f,0.0000f,-0.0167f,1.5530f,1.4760f,-0.2577f,1.2680f,-1.4760f,-0.2577f,1.2680f,1.2260f,-1.6760f,-2.5530f,1.2260f,-3.4360f,-1.4920f,0.0000f,-3.4360f,-1.4920f,0.9650f,-0.5229f,-1.8150f,0.0000f,-0.5229f,-1.8150f,-1.2260f,-1.6760f,-2.5530f,0.0000f,-1.6760f,-2.5530f,-0.9650f,-0.5229f,-1.8150f,-1.2260f,-3.4360f,-1.4920f,2.5480f,-1.6760f,0.3823f,1.8190f,-3.4360f,0.3823f,1.7800f,-0.5229f,0.3823f,-2.5480f,-1.6760f,0.3823f,-1.7800f,-0.5229f,0.3823f,-1.8190f,-3.4360f,0.3823f,0.0000f,-3.4360f,0.3823f,1.6190f,-3.3020f,1.2100f,2.2120f,-1.7090f,1.2100f,-2.2120f,-1.7090f,1.2100f,-1.6190f,-3.3020f,1.2100f,0.0000f,-3.3020f,1.2100f,1.3930f,-0.8117f,1.2480f,-1.3930f,-0.8117f,1.2480f,0.0000f,-0.5730f,1.5150f});
  }
}
protected class MFVec2f30 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3819f,0.1710f,0.4216f,0.1651f,0.3819f,0.1710f,0.4216f,0.1651f,0.3819f,0.1710f,0.3819f,0.1710f,0.4637f,0.1714f,0.4216f,0.1651f,0.4637f,0.1714f,0.4216f,0.1651f,0.3819f,0.1710f,0.3819f,0.1710f,0.3819f,0.1710f,0.3819f,0.1710f,0.4637f,0.1714f,0.4637f,0.1714f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.3836f,0.1404f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.4394f,0.1472f,0.4637f,0.1714f,0.4394f,0.1472f,0.3873f,0.0706f,0.3871f,0.0221f,0.3873f,0.0706f,0.3871f,0.0221f,0.3871f,0.0221f,0.3861f,0.1398f,0.3836f,0.1404f,0.3873f,0.0706f,0.3873f,0.0706f,0.3836f,0.1404f,0.3861f,0.1398f,0.3871f,0.0221f,0.3871f,0.0221f,0.3871f,0.0221f,0.4330f,0.0595f,0.4411f,0.0186f,0.4244f,0.1312f,0.4330f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.4330f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.4330f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f,0.4244f,0.1312f});
  }
}
protected class MFFloat31 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat32 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,25,-1,3,25,26,-1,0,3,26,-1,1,0,26,-1,26,10,1,-1,1,10,12,-1,12,9,1,-1,2,34,25,-1,25,4,2,-1,31,8,6,-1,32,31,6,-1,5,32,6,-1,7,11,32,-1,32,5,7,-1,7,9,12,-1,12,11,7,-1,2,8,31,-1,31,34,2,-1,15,16,17,-1,15,17,18,-1,15,18,19,-1,14,15,19,-1,14,19,13,-1,0,1,14,-1,14,13,0,-1,1,9,15,-1,15,14,1,-1,9,7,16,-1,16,15,9,-1,7,5,17,-1,17,16,7,-1,5,6,18,-1,18,17,5,-1,6,3,19,-1,19,18,6,-1,3,0,13,-1,13,19,3,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1,23,21,20,-1,20,24,23,-1,29,22,21,-1,21,23,29,-1,22,29,33,-1,20,21,26,-1,26,25,20,-1,26,21,22,-1,22,10,26,-1,10,22,33,-1,33,12,10,-1,34,24,20,-1,20,25,34,-1,23,24,28,-1,28,27,23,-1,29,23,27,-1,27,30,29,-1,30,33,29,-1,28,31,32,-1,32,27,28,-1,32,11,30,-1,30,27,32,-1,11,12,33,-1,33,30,11,-1,34,31,28,-1,28,24,34,-1});
  }
}
protected class MFInt3234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,19,-1,19,3,1,-1,2,21,12,-1,12,5,2,-1,15,10,7,-1,16,15,7,-1,6,16,7,-1,8,17,16,-1,16,6,8,-1,8,11,18,-1,18,17,8,-1,9,10,15,-1,15,20,9,-1,24,25,26,-1,24,26,27,-1,24,27,28,-1,23,24,28,-1,23,28,22,-1,0,1,23,-1,23,22,0,-1,1,3,24,-1,24,23,1,-1,11,8,25,-1,25,24,11,-1,8,6,26,-1,26,25,8,-1,6,7,27,-1,27,26,6,-1,7,4,28,-1,28,27,7,-1,4,0,22,-1,22,28,4,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1,30,32,31,-1,31,29,30,-1,33,34,32,-1,32,30,33,-1,34,33,35,-1,31,32,37,-1,37,36,31,-1,37,32,34,-1,34,38,37,-1,38,34,35,-1,35,39,38,-1,40,29,31,-1,31,36,40,-1,41,44,43,-1,43,42,41,-1,45,41,42,-1,42,46,45,-1,46,50,45,-1,43,47,48,-1,48,42,43,-1,48,49,46,-1,46,42,48,-1,49,51,50,-1,50,46,49,-1,52,47,43,-1,43,44,52,-1});
  }
}
protected class MFVec3f35 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.5480f,-1.4160f,-0.8988f,1.8190f,-3.1760f,-0.8988f,0.0000f,0.2435f,0.2718f,1.7800f,-0.2627f,-0.8989f,1.4760f,0.0025f,-0.0134f,-2.5480f,-1.4160f,-0.8988f,-1.7800f,-0.2627f,-0.8989f,-1.8190f,-3.1760f,-0.8988f,-1.4760f,0.0025f,-0.0134f,0.0000f,-3.1760f,-0.8988f,1.8630f,-3.1760f,0.8155f,-1.8630f,-3.1760f,0.8155f,0.0000f,-3.1760f,0.8155f,2.0940f,-1.4410f,-1.6990f,1.5240f,-2.5610f,-1.6990f,0.0000f,-2.5610f,-1.6990f,-1.5240f,-2.5610f,-1.6990f,-2.0940f,-1.4410f,-1.6990f,-1.5160f,-0.4945f,-1.6990f,1.5160f,-0.4945f,-1.6990f,1.5530f,-0.5642f,2.0690f,1.9290f,-1.9730f,3.6760f,1.9290f,-3.1760f,3.3500f,0.0000f,-1.9730f,4.8470f,0.0000f,-0.4757f,3.5050f,1.5140f,-0.2808f,1.0280f,2.3160f,-1.6250f,0.8155f,-1.9290f,-1.9730f,3.6760f,-1.5530f,-0.5642f,2.0690f,0.0000f,-3.1760f,4.5210f,-1.9290f,-3.1760f,3.3500f,-1.5140f,-0.2808f,1.0280f,-2.3160f,-1.6250f,0.8155f,0.0000f,-3.1760f,3.3500f,0.0000f,-0.0239f,1.4740f});
  }
}
protected class MFVec2f36 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4330f,0.0595f,0.4411f,0.0186f,0.4637f,0.1714f,0.4411f,0.0186f,0.4244f,0.1312f,0.4394f,0.1472f,0.4330f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4637f,0.1714f,0.4394f,0.1472f,0.4411f,0.0186f,0.4640f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4640f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f,0.4868f,0.1432f,0.4330f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.4330f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.5320f,0.0980f,0.5645f,0.0707f,0.4885f,0.1020f,0.5026f,0.0440f,0.5945f,0.0186f,0.5487f,0.0186f,0.5487f,0.0186f,0.4640f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4868f,0.1432f,0.5645f,0.0707f,0.5026f,0.0440f,0.4885f,0.1020f,0.5320f,0.0980f,0.5945f,0.0186f,0.5487f,0.0186f,0.4640f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.5487f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f});
  }
}
protected class MFFloat37 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat38 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3239 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,58,57,56,-1,60,58,56,-1,61,60,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1});
  }
}
protected class MFInt3240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,44,43,42,-1,46,44,42,-1,47,46,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1});
  }
}
protected class MFVec3f41 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.6100f,2.4950f,-0.0096f,-1.4490f,2.4950f,2.8190f,1.1600f,2.4950f,3.5180f,2.9680f,2.4950f,1.5600f,2.9680f,2.4950f,-1.5800f,1.1600f,2.4950f,-3.5370f,-1.4490f,2.4950f,-2.8390f,-2.6100f,-0.8104f,-0.0096f,-1.4490f,-0.8104f,2.8190f,1.1600f,-0.8104f,3.5180f,2.9680f,-0.8104f,1.5600f,2.9680f,-0.8104f,-1.5800f,1.1600f,-0.8104f,-3.5370f,-1.4490f,-0.8104f,-2.8390f,-2.6100f,-3.3750f,-0.0096f,-1.4490f,-3.3750f,2.8190f,1.1600f,-3.3750f,3.5180f,2.9680f,-3.3750f,1.5600f,2.9680f,-3.3750f,-1.5800f,1.1600f,-3.3750f,-3.5370f,-1.4490f,-3.3750f,-2.8390f,-2.9680f,-6.6800f,-0.0096f,-1.6720f,-6.6800f,3.1480f,1.2400f,-6.6800f,3.9280f,2.9570f,-6.6800f,1.7430f,2.9570f,-6.6800f,-1.7620f,1.2400f,-6.6800f,-3.9470f,-1.6720f,-6.6800f,-3.1670f,-1.8920f,-5.1940f,-0.0096f,-1.0010f,-5.1940f,2.1610f,1.0010f,-5.1940f,2.6970f,2.3210f,-5.1940f,1.1950f,2.3210f,-5.1940f,-1.2140f,1.0010f,-5.1940f,-2.7160f,-1.0010f,-5.1940f,-2.1800f,-1.9000f,-10.8900f,-0.0096f,-1.0800f,-10.8900f,1.7140f,0.7636f,-10.8900f,2.1400f,2.2420f,-10.8900f,0.9472f,2.2420f,-10.8900f,-0.9663f,0.7636f,-10.8900f,-2.1590f,-1.0800f,-10.8900f,-1.7340f,-1.8070f,4.2490f,-0.0096f,-0.9484f,4.2490f,2.0840f,0.9820f,4.2490f,2.6010f,2.5300f,4.2490f,1.1520f,2.5300f,4.2490f,-1.1710f,0.9820f,4.2490f,-2.6200f,-0.9484f,4.2490f,-2.1030f,-1.6240f,-14.1300f,-0.0096f,-0.9076f,-14.1300f,1.6410f,0.7021f,-14.1300f,2.0130f,1.9930f,-14.1300f,0.9715f,1.9930f,-14.1300f,-0.8451f,0.7021f,-14.1300f,-1.8870f,-0.9076f,-14.1300f,-1.5150f,-0.5533f,-14.9900f,-0.0096f,-0.2401f,-14.9900f,0.7943f,0.4639f,-14.9900f,0.9569f,1.0280f,-14.9900f,0.5013f,1.0280f,-14.9900f,-0.3749f,0.4639f,-14.9900f,-0.8305f,-0.2401f,-14.9900f,-0.6679f});
  }
}
protected class MFVec2f42 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7190f,0.5576f,0.6284f,0.5576f,0.7414f,0.5576f,0.6787f,0.5576f,0.5781f,0.5576f,0.5154f,0.5576f,0.5378f,0.5576f,0.6284f,0.5029f,0.7509f,0.3997f,0.6284f,0.3997f,0.7509f,0.5029f,0.7811f,0.3997f,0.7811f,0.5029f,0.6964f,0.3997f,0.6964f,0.5029f,0.5604f,0.3997f,0.5604f,0.5029f,0.4756f,0.3997f,0.4756f,0.5029f,0.5059f,0.3997f,0.5059f,0.5029f,0.7509f,0.3197f,0.6284f,0.3197f,0.7811f,0.3197f,0.6964f,0.3197f,0.5604f,0.3197f,0.4756f,0.3197f,0.5059f,0.3197f,0.7651f,0.2166f,0.6284f,0.2166f,0.7989f,0.2166f,0.7043f,0.2166f,0.5525f,0.2166f,0.4579f,0.2166f,0.4917f,0.2166f,0.7224f,0.2630f,0.6284f,0.2630f,0.7456f,0.2630f,0.6805f,0.2630f,0.5762f,0.2630f,0.5112f,0.2630f,0.5344f,0.2630f,0.8705f,0.5452f,0.8705f,0.5383f,0.8705f,0.5369f,0.8705f,0.5408f,0.8705f,0.5483f,0.8705f,0.5522f,0.8705f,0.5509f,0.9170f,0.5452f,0.9170f,0.5266f,0.8900f,0.5304f,0.8900f,0.5452f,0.9170f,0.5220f,0.8900f,0.5268f,0.9170f,0.5349f,0.8900f,0.5370f,0.9170f,0.5555f,0.8900f,0.5534f,0.9170f,0.5684f,0.8900f,0.5636f,0.9170f,0.5638f,0.8900f,0.5600f,0.8746f,0.5310f,0.8746f,0.5452f,0.8746f,0.5279f,0.8746f,0.5368f,0.8746f,0.5524f,0.8746f,0.5613f,0.8746f,0.5581f});
  }
}
protected class MFFloat43 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat44 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.6335f,1.1420f,0.0206f,-0.3202f,1.1420f,0.8245f,0.3837f,1.1420f,0.9871f,0.9483f,1.1420f,0.5315f,0.9483f,1.1420f,-0.3447f,0.3837f,1.1420f,-0.8003f,-0.3202f,1.1420f,-0.6377f,-2.0600f,-3.7780f,0.0206f,-1.2870f,-2.9050f,1.7800f,-1.0890f,-1.1470f,2.1330f,-1.8670f,-1.3970f,0.0206f,0.7150f,-2.9050f,2.2630f,0.6583f,-1.1470f,2.5590f,1.9870f,-3.7780f,1.1060f,2.0600f,-1.3970f,0.8632f,1.9870f,-4.4570f,-1.2050f,2.0600f,-1.3970f,-0.8220f,0.7150f,-4.4570f,-2.5590f,0.6583f,-1.3970f,-2.0870f,-1.2870f,-4.4570f,-2.0760f,-1.0890f,-1.3970f,-1.6610f,-0.9877f,0.2851f,1.6720f,-1.7040f,0.2851f,0.0206f,0.6220f,0.2851f,2.0430f,1.9130f,0.2851f,1.0020f,1.9130f,0.2851f,-0.8149f,0.6220f,0.2851f,-1.8170f,-0.9877f,0.2851f,-1.4450f,-1.4170f,-11.1000f,0.0028f,-0.8123f,-11.0900f,1.3800f,0.5457f,-11.0900f,1.7200f,1.6350f,-11.1000f,0.7670f,1.6350f,-11.1100f,-0.8605f,0.5457f,-11.1100f,-1.5350f,-0.8123f,-11.1100f,-1.1950f,-0.6234f,-12.5200f,0.0210f,-0.3177f,-12.5200f,0.7175f,0.3691f,-12.5200f,0.8896f,0.9199f,-12.5200f,0.4076f,0.9199f,-12.5300f,-0.4156f,0.3691f,-12.5300f,-0.7569f,-0.3177f,-12.5300f,-0.5849f});
  }
}
protected class MFVec2f48 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9309f,0.5848f,0.9190f,0.5848f,0.8921f,0.5848f,0.8706f,0.5848f,0.8706f,0.5848f,0.8921f,0.5848f,0.9190f,0.5848f,0.9845f,0.5321f,0.9550f,0.5475f,0.9491f,0.5599f,0.9788f,0.5571f,0.8787f,0.5475f,0.8825f,0.5599f,0.8302f,0.5321f,0.8291f,0.5571f,0.8302f,0.5200f,0.8291f,0.5571f,0.8787f,0.5200f,0.8825f,0.5571f,0.9550f,0.5200f,0.9491f,0.5571f,0.9444f,0.5755f,0.9717f,0.5755f,0.8831f,0.5755f,0.8339f,0.5755f,0.8339f,0.5755f,0.8831f,0.5755f,0.9444f,0.5755f,0.9679f,0.2444f,0.9449f,0.2445f,0.8931f,0.2445f,0.8516f,0.2444f,0.8516f,0.2442f,0.8931f,0.2442f,0.9449f,0.2442f,0.9372f,0.2243f,0.9255f,0.2244f,0.8993f,0.2244f,0.8783f,0.2243f,0.8783f,0.2243f,0.8993f,0.2243f,0.9255f,0.2243f});
  }
}
protected class MFFloat49 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat50 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.8503f,-0.0167f,-1.4920f,-1.4430f,-0.0167f,0.3823f,0.0000f,-0.0167f,-1.4920f,-1.2210f,0.6369f,0.3141f,-0.7115f,0.6369f,-1.2980f,0.0000f,0.6369f,-1.2980f,0.0000f,0.6368f,1.3050f,1.4430f,-0.0167f,0.3823f,1.2210f,0.6369f,0.3141f,0.7115f,0.6369f,-1.2980f,0.8503f,-0.0167f,-1.4920f,0.0000f,-0.0167f,1.5530f,-1.4760f,-0.2577f,1.2680f,1.4760f,-0.2577f,1.2680f,-1.2260f,-1.6760f,-2.5530f,-1.2260f,-3.4360f,-1.4920f,0.0000f,-3.4360f,-1.4920f,-0.9650f,-0.5229f,-1.8150f,0.0000f,-0.5229f,-1.8150f,1.2260f,-1.6760f,-2.5530f,0.0000f,-1.6760f,-2.5530f,0.9650f,-0.5229f,-1.8150f,1.2260f,-3.4360f,-1.4920f,-2.5480f,-1.6760f,0.3823f,-1.8190f,-3.4360f,0.3823f,-1.7800f,-0.5229f,0.3823f,2.5480f,-1.6760f,0.3823f,1.7800f,-0.5229f,0.3823f,1.8190f,-3.4360f,0.3823f,0.0000f,-3.4360f,0.3823f,-1.6190f,-3.3020f,1.2100f,-2.2120f,-1.7090f,1.2100f,2.2120f,-1.7090f,1.2100f,1.6190f,-3.3020f,1.2100f,0.0000f,-3.3020f,1.2100f,-1.3930f,-0.8117f,1.2480f,1.3930f,-0.8117f,1.2480f,0.0000f,-0.5730f,1.5150f});
  }
}
protected class MFVec2f54 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3819f,0.1710f,0.4216f,0.1651f,0.3819f,0.1710f,0.4216f,0.1651f,0.3819f,0.1710f,0.3819f,0.1710f,0.4637f,0.1714f,0.4216f,0.1651f,0.4637f,0.1714f,0.4216f,0.1651f,0.3819f,0.1710f,0.3819f,0.1710f,0.3819f,0.1710f,0.3819f,0.1710f,0.4637f,0.1714f,0.4637f,0.1714f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.3836f,0.1404f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.4394f,0.1472f,0.4637f,0.1714f,0.4394f,0.1472f,0.3873f,0.0706f,0.3871f,0.0221f,0.3873f,0.0706f,0.3871f,0.0221f,0.3871f,0.0221f,0.3861f,0.1398f,0.3836f,0.1404f,0.3873f,0.0706f,0.3873f,0.0706f,0.3836f,0.1404f,0.3861f,0.1398f,0.3871f,0.0221f,0.3871f,0.0221f,0.3871f,0.0221f,0.4330f,0.0595f,0.4411f,0.0186f,0.4244f,0.1312f,0.4330f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.4330f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.4330f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f,0.4244f,0.1312f});
  }
}
protected class MFFloat55 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat56 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3257 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {25,4,3,-1,26,25,3,-1,0,26,3,-1,1,10,26,-1,26,0,1,-1,1,9,12,-1,12,10,1,-1,2,4,25,-1,25,34,2,-1,6,8,31,-1,6,31,32,-1,5,6,32,-1,7,5,32,-1,32,11,7,-1,7,11,12,-1,12,9,7,-1,2,34,31,-1,31,8,2,-1,14,13,19,-1,17,16,15,-1,18,17,15,-1,19,18,15,-1,14,19,15,-1,0,13,14,-1,14,1,0,-1,1,14,15,-1,15,9,1,-1,9,15,16,-1,16,7,9,-1,7,16,17,-1,17,5,7,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,3,6,-1,3,19,13,-1,13,0,3,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1,23,24,20,-1,20,21,23,-1,29,23,21,-1,21,22,29,-1,22,33,29,-1,20,25,26,-1,26,21,20,-1,26,10,22,-1,22,21,26,-1,10,12,33,-1,33,22,10,-1,34,25,20,-1,20,24,34,-1,23,27,28,-1,28,24,23,-1,29,30,27,-1,27,23,29,-1,30,29,33,-1,28,27,32,-1,32,31,28,-1,32,27,30,-1,30,11,32,-1,11,30,33,-1,33,12,11,-1,34,24,28,-1,28,31,34,-1});
  }
}
protected class MFInt3258 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,19,-1,19,14,1,-1,2,5,12,-1,12,21,2,-1,7,10,15,-1,7,15,16,-1,6,7,16,-1,8,6,16,-1,16,17,8,-1,8,17,18,-1,18,11,8,-1,9,20,15,-1,15,10,9,-1,23,22,28,-1,26,25,24,-1,27,26,24,-1,28,27,24,-1,23,28,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,3,1,-1,11,24,25,-1,25,8,11,-1,8,25,26,-1,26,6,8,-1,6,26,27,-1,27,7,6,-1,7,27,28,-1,28,4,7,-1,4,28,22,-1,22,0,4,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1,30,29,31,-1,31,32,30,-1,33,30,32,-1,32,34,33,-1,34,35,33,-1,31,36,37,-1,37,32,31,-1,37,38,34,-1,34,32,37,-1,38,39,35,-1,35,34,38,-1,40,36,31,-1,31,29,40,-1,41,42,43,-1,43,44,41,-1,45,46,42,-1,42,41,45,-1,46,45,50,-1,43,42,48,-1,48,47,43,-1,48,42,46,-1,46,49,48,-1,49,46,50,-1,50,51,49,-1,52,44,43,-1,43,47,52,-1});
  }
}
protected class MFVec3f59 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.5480f,-1.4160f,-0.8988f,-1.8190f,-3.1760f,-0.8988f,0.0000f,0.2435f,0.2718f,-1.7800f,-0.2627f,-0.8989f,-1.4760f,0.0025f,-0.0134f,2.5480f,-1.4160f,-0.8988f,1.7800f,-0.2627f,-0.8989f,1.8190f,-3.1760f,-0.8988f,1.4760f,0.0025f,-0.0134f,0.0000f,-3.1760f,-0.8988f,-1.8630f,-3.1760f,0.8155f,1.8630f,-3.1760f,0.8155f,0.0000f,-3.1760f,0.8155f,-2.0940f,-1.4410f,-1.6990f,-1.5240f,-2.5610f,-1.6990f,0.0000f,-2.5610f,-1.6990f,1.5240f,-2.5610f,-1.6990f,2.0940f,-1.4410f,-1.6990f,1.5160f,-0.4945f,-1.6990f,-1.5160f,-0.4945f,-1.6990f,-1.5530f,-0.5642f,2.0690f,-1.9290f,-1.9730f,3.6760f,-1.9290f,-3.1760f,3.3500f,0.0000f,-1.9730f,4.8470f,0.0000f,-0.4757f,3.5050f,-1.5140f,-0.2808f,1.0280f,-2.3160f,-1.6250f,0.8155f,1.9290f,-1.9730f,3.6760f,1.5530f,-0.5642f,2.0690f,0.0000f,-3.1760f,4.5210f,1.9290f,-3.1760f,3.3500f,1.5140f,-0.2808f,1.0280f,2.3160f,-1.6250f,0.8155f,0.0000f,-3.1760f,3.3500f,0.0000f,-0.0239f,1.4740f});
  }
}
protected class MFVec2f60 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4330f,0.0595f,0.4411f,0.0186f,0.4637f,0.1714f,0.4411f,0.0186f,0.4244f,0.1312f,0.4394f,0.1472f,0.4330f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4637f,0.1714f,0.4394f,0.1472f,0.4411f,0.0186f,0.4640f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4640f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f,0.4868f,0.1432f,0.4330f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.4330f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.5320f,0.0980f,0.5645f,0.0707f,0.4885f,0.1020f,0.5026f,0.0440f,0.5945f,0.0186f,0.5487f,0.0186f,0.5487f,0.0186f,0.4640f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4868f,0.1432f,0.5645f,0.0707f,0.5026f,0.0440f,0.4885f,0.1020f,0.5320f,0.0980f,0.5945f,0.0186f,0.5487f,0.0186f,0.4640f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.5487f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f});
  }
}
protected class MFFloat61 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat62 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3263 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFInt3264 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFVec3f65 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,9.3690f,0.1256f,0.0000f,8.7190f,-2.4900f,-2.0120f,8.7190f,-2.1400f,-3.4860f,8.7190f,-1.7170f,-4.0250f,8.7190f,0.1256f,-3.4860f,8.7190f,1.9680f,-2.0120f,8.7190f,2.3910f,0.0000f,8.7190f,2.7410f,2.0120f,8.7190f,2.3910f,3.4860f,8.7190f,1.9680f,4.0250f,8.7190f,0.1256f,3.4860f,8.7190f,-1.7170f,2.0120f,8.7190f,-2.1400f,0.0000f,6.9460f,-4.0670f,-2.6030f,6.9460f,-3.5060f,-4.5080f,6.9460f,-1.9710f,-5.2050f,6.9460f,0.1256f,-4.5080f,6.9460f,2.2220f,-2.6030f,6.9460f,3.2130f,0.0000f,6.9460f,3.7750f,2.6030f,6.9460f,3.2130f,4.5080f,6.9460f,2.2220f,5.2050f,6.9460f,0.1256f,4.5080f,6.9460f,-1.9710f,2.6030f,6.9460f,-3.5060f,0.0000f,4.5230f,-4.4230f,-3.0050f,4.5230f,-3.7750f,-5.2050f,4.5230f,-2.0030f,-6.0110f,4.5230f,0.1256f,-5.2050f,4.5230f,2.5460f,-3.0050f,4.5230f,3.7750f,0.0000f,4.5230f,4.4230f,3.0050f,4.5230f,3.7750f,5.2050f,4.5230f,2.5460f,6.0110f,4.5230f,0.1256f,5.2050f,4.5230f,-2.0030f,3.0050f,4.5230f,-3.7750f,0.0000f,2.1000f,-3.7750f,-2.6030f,2.1000f,-3.2130f,-4.5080f,2.1000f,-1.6780f,-5.2050f,2.1000f,0.1256f,-4.5080f,2.1000f,2.2220f,-2.6030f,2.1000f,3.2130f,0.0000f,2.1000f,3.7750f,2.6030f,2.1000f,3.2130f,4.5080f,2.1000f,2.2220f,5.2050f,2.1000f,0.1255f,4.5080f,2.1000f,-1.6780f,2.6030f,2.1000f,-3.2130f,0.0000f,0.3265f,-2.0030f,-1.5030f,0.3265f,-1.6780f,-2.6030f,0.3265f,-1.0850f,-3.0050f,0.3265f,0.1255f,-2.6030f,0.3265f,1.3360f,-1.5030f,0.3265f,2.2220f,0.0000f,0.3265f,2.5460f,1.5030f,0.3265f,2.2220f,2.6030f,0.3265f,1.3360f,3.0050f,0.3265f,0.1255f,2.6030f,0.3265f,-1.0850f,1.5030f,0.3265f,-1.6780f,0.0000f,-0.3227f,0.1255f});
  }
}
protected class MFVec2f66 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.6211f,0.5754f,0.7851f,0.5720f,0.7614f,0.5720f,0.6907f,0.5698f,0.6200f,0.5698f,0.6158f,0.5702f,0.5451f,0.5702f,0.4167f,0.5698f,0.5451f,0.5702f,0.6158f,0.5702f,0.6200f,0.5698f,0.6907f,0.5698f,0.7614f,0.5720f,0.8036f,0.5346f,0.7761f,0.5346f,0.6989f,0.4838f,0.6219f,0.4428f,0.6154f,0.4438f,0.5492f,0.4639f,0.4166f,0.5346f,0.5492f,0.4639f,0.6154f,0.4438f,0.6219f,0.4428f,0.6989f,0.4838f,0.7761f,0.5346f,0.7912f,0.4044f,0.7635f,0.4044f,0.7042f,0.3925f,0.6194f,0.3907f,0.6148f,0.3907f,0.5450f,0.3974f,0.4163f,0.4938f,0.5450f,0.3974f,0.6148f,0.3907f,0.6194f,0.3907f,0.7042f,0.3925f,0.7635f,0.4044f,0.7950f,0.3772f,0.7662f,0.3772f,0.6945f,0.3645f,0.6236f,0.3695f,0.6160f,0.3695f,0.5438f,0.3780f,0.4160f,0.4530f,0.5438f,0.3780f,0.6160f,0.3695f,0.6236f,0.3695f,0.6945f,0.3645f,0.7662f,0.3772f,0.7887f,0.3451f,0.7635f,0.3451f,0.6980f,0.3508f,0.6262f,0.3508f,0.6297f,0.3503f,0.5389f,0.3503f,0.4181f,0.3884f,0.5389f,0.3503f,0.6297f,0.3503f,0.6262f,0.3508f,0.6980f,0.3508f,0.7635f,0.3451f,0.6237f,0.3398f});
  }
}
protected class MFFloat67 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat68 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3269 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1});
  }
}
protected class MFInt3270 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,0,1,-1,3,2,1,-1,61,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,54,35,36,-1,53,54,36,-1,37,53,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,56,55,-1,55,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,58,57,-1,57,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,60,59,-1,59,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1});
  }
}
protected class MFVec3f71 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.5920f,1.8170f,-1.4810f,2.6110f,1.8170f,0.0297f,1.4890f,1.8170f,1.4660f,-0.2232f,1.8170f,0.8423f,-0.1596f,1.8170f,-0.9787f,1.7940f,0.7023f,-2.0360f,3.2010f,0.7023f,0.0503f,1.6520f,0.7023f,2.0330f,-0.7128f,0.7023f,1.1730f,-0.6250f,0.7023f,-1.3420f,1.7940f,-1.5130f,-2.0360f,3.2010f,-1.5130f,0.0503f,1.6520f,-1.5130f,2.0330f,-0.7128f,-1.5130f,1.1730f,-0.6250f,-1.5130f,-1.3420f,1.8360f,-2.4610f,-2.1530f,3.3250f,-2.4610f,0.0546f,1.6860f,-2.4610f,2.1530f,-0.8158f,-2.4610f,1.2420f,-0.7229f,-2.4610f,-1.4190f,1.3690f,-0.8329f,-1.7090f,2.4450f,-0.8329f,-0.4004f,1.8880f,-0.8329f,1.4360f,0.4682f,-0.8329f,1.2620f,0.1476f,-0.8329f,-0.6818f,1.4310f,-5.9520f,-1.3830f,2.5480f,-5.9520f,-0.3332f,1.9700f,-5.9520f,1.1400f,0.4950f,-5.9520f,1.0000f,0.1620f,-5.9520f,-0.5588f,1.4660f,-9.5220f,-1.3320f,2.5410f,-9.5220f,-0.3218f,1.9850f,-9.5220f,1.0960f,0.5650f,-9.5220f,0.9618f,0.2445f,-9.5220f,-0.5390f,1.4220f,-10.0100f,-0.7920f,2.0530f,-10.0100f,-0.1998f,1.7260f,-10.0100f,0.6312f,0.8942f,-10.0100f,0.5525f,0.7063f,-10.0100f,-0.3271f});
  }
}
protected class MFVec2f72 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2986f,0.2114f,0.2726f,0.2114f,0.3201f,0.2114f,0.3415f,0.2114f,0.2466f,0.2114f,0.2979f,0.2417f,0.2726f,0.2417f,0.3197f,0.2417f,0.3418f,0.2417f,0.2473f,0.2417f,0.2979f,0.3018f,0.2726f,0.3018f,0.3197f,0.3018f,0.3418f,0.3018f,0.2473f,0.3018f,0.2978f,0.3276f,0.2726f,0.3276f,0.3197f,0.3276f,0.3419f,0.3276f,0.2474f,0.3276f,0.2932f,0.2834f,0.2689f,0.2834f,0.3160f,0.2834f,0.3322f,0.2834f,0.2450f,0.2834f,0.2251f,0.2114f,0.2255f,0.2417f,0.2255f,0.2417f,0.2255f,0.3018f,0.2255f,0.3018f,0.2255f,0.3276f,0.2255f,0.3276f,0.2159f,0.2834f,0.4315f,0.6736f,0.4420f,0.6736f,0.3947f,0.6736f,0.4041f,0.6736f,0.4180f,0.6736f,0.4296f,0.6167f,0.4409f,0.6167f,0.4415f,0.6485f,0.4303f,0.6485f,0.3965f,0.6167f,0.3953f,0.6485f,0.4047f,0.6167f,0.4053f,0.6485f,0.4189f,0.6167f,0.4180f,0.6485f,0.4415f,0.6706f,0.4306f,0.6706f,0.3950f,0.6706f,0.4051f,0.6706f,0.4182f,0.6706f,0.3746f,0.6736f,0.3851f,0.6736f,0.3840f,0.6167f,0.3845f,0.6485f,0.3845f,0.6485f,0.3846f,0.6706f,0.3846f,0.6706f,0.3851f,0.6736f,0.3481f,0.2114f});
  }
}
protected class MFFloat73 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat74 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3275 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,1,-1,3,1,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
  }
}
protected class MFInt3276 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,25,-1,3,25,26,-1,4,3,26,-1,0,1,6,-1,6,5,0,-1,27,2,7,-1,7,28,27,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,29,7,12,-1,12,30,29,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,31,12,17,-1,17,32,31,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,34,22,23,-1,33,34,23,-1,24,33,23,-1,21,20,15,-1,15,16,21,-1,22,36,35,-1,35,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
  }
}
protected class MFVec3f77 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1597f,0.4908f,-1.0150f,0.9881f,0.4908f,-0.2281f,0.5166f,0.4908f,0.9165f,-0.6033f,0.4908f,0.8366f,-0.8239f,0.4908f,-0.3574f,0.1063f,-0.5229f,-1.4330f,1.2770f,-0.5229f,-0.3764f,0.6107f,-0.5229f,1.4330f,-0.9720f,-0.5229f,1.3060f,-1.2840f,-0.5229f,-0.5807f,0.1170f,-2.8640f,-1.4160f,1.3670f,-2.8640f,-0.3724f,0.6839f,-2.3520f,1.4190f,-1.0060f,-2.3520f,1.2940f,-1.3670f,-2.8640f,-0.5747f,0.0931f,-7.4590f,-1.2670f,1.0050f,-7.4590f,-0.1128f,0.4859f,-7.4590f,1.3310f,-0.7465f,-7.4590f,1.2140f,-0.9892f,-7.4590f,-0.3022f,0.0539f,-8.0090f,-0.7805f,0.6765f,-8.0090f,0.0074f,0.3221f,-8.0090f,0.9190f,-0.5194f,-8.0090f,0.8391f,-0.6852f,-8.0090f,-0.1219f});
  }
}
protected class MFVec2f78 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4222f,0.6201f,0.4327f,0.6201f,0.3884f,0.6201f,0.3987f,0.6201f,0.4103f,0.6201f,0.4213f,0.6265f,0.4321f,0.6265f,0.3894f,0.6265f,0.3990f,0.6265f,0.4105f,0.6265f,0.4214f,0.6413f,0.4323f,0.6413f,0.3890f,0.6381f,0.3992f,0.6381f,0.4103f,0.6413f,0.4213f,0.6705f,0.4336f,0.6705f,0.3899f,0.6705f,0.3981f,0.6705f,0.4094f,0.6705f,0.4215f,0.6740f,0.4346f,0.6740f,0.3899f,0.6740f,0.3980f,0.6740f,0.4083f,0.6740f,0.3787f,0.6201f,0.3682f,0.6201f,0.3787f,0.6201f,0.3782f,0.6265f,0.3782f,0.6265f,0.3783f,0.6413f,0.3783f,0.6413f,0.3796f,0.6705f,0.3676f,0.6740f,0.3806f,0.6740f,0.3796f,0.6705f,0.3806f,0.6740f});
  }
}
protected class MFFloat79 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat80 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3281 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,0,-1,0,2,4,-1,6,7,3,-1,3,1,6,-1,1,0,5,-1,5,6,1,-1,8,9,5,-1,5,4,8,-1,10,11,7,-1,7,6,10,-1,9,10,6,-1,6,5,9,-1,12,13,9,-1,9,8,12,-1,14,15,11,-1,11,10,14,-1,13,14,10,-1,10,9,13,-1,4,2,16,-1,2,3,7,-1,7,16,2,-1,17,19,18,-1,18,20,17,-1,21,16,7,-1,7,11,21,-1,8,21,12,-1,12,21,11,-1,11,15,12,-1,13,12,15,-1,15,14,13,-1,8,4,19,-1,19,17,8,-1,4,16,18,-1,18,19,4,-1,16,21,20,-1,20,18,16,-1,21,8,17,-1,17,20,21,-1,22,27,23,-1,26,25,24,-1});
  }
}
protected class MFInt3282 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,6,5,-1,5,7,4,-1,2,3,1,-1,1,0,2,-1,14,16,15,-1,15,17,14,-1,8,9,6,-1,6,4,8,-1,38,40,39,-1,39,41,38,-1,18,19,36,-1,36,37,18,-1,10,11,9,-1,9,8,10,-1,42,43,40,-1,40,38,42,-1,20,21,19,-1,19,18,20,-1,22,24,23,-1,24,26,25,-1,25,23,24,-1,27,29,28,-1,28,30,27,-1,31,23,25,-1,25,32,31,-1,33,31,34,-1,34,31,32,-1,32,35,34,-1,20,34,35,-1,35,21,20,-1,8,4,12,-1,12,13,8,-1,22,23,28,-1,28,29,22,-1,23,31,30,-1,30,28,23,-1,31,33,27,-1,27,30,31,-1,14,24,26,-1,14,16,24,-1});
  }
}
protected class MFVec3f83 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.6237f,0.0984f,0.7030f,0.5903f,0.1133f,-1.1890f,-1.1010f,0.0200f,0.7856f,-1.1080f,0.0215f,-1.1310f,-1.2890f,-0.5207f,1.3030f,0.9805f,-0.3349f,1.2240f,0.9287f,-0.3062f,-1.7530f,-1.3910f,-0.5055f,-1.7490f,-1.1800f,-2.2020f,2.1230f,1.2630f,-2.0150f,1.8340f,1.2110f,-1.9860f,-2.1230f,-1.5050f,-2.2870f,-1.9810f,-0.9466f,-3.4660f,1.4930f,0.3369f,-3.6690f,1.5430f,0.2851f,-3.6400f,-1.8260f,-1.1350f,-3.4770f,-1.7050f,-1.3850f,-0.5072f,-0.1650f,-1.9030f,-2.2440f,1.7110f,-2.1870f,-0.8250f,0.0512f,-2.1540f,-0.8839f,1.6620f,-1.9080f,-2.2420f,0.1214f,-1.3940f,-2.2820f,-0.1776f,0.5903f,0.1133f,-1.1890f,-1.1080f,0.0215f,-1.1310f,-1.1010f,0.0200f,0.7856f,0.6237f,0.0984f,0.7030f,0.5903f,0.1133f,-1.1890f,-1.1010f,0.0200f,0.7856f});
  }
}
protected class MFVec2f84 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8107f,0.9924f,0.8122f,0.9033f,0.7694f,0.9912f,0.7683f,0.9026f,0.1329f,0.0347f,0.0307f,0.0051f,0.0134f,0.0353f,0.1366f,0.0058f,0.1249f,0.1081f,0.0147f,0.1170f,0.1349f,0.1856f,0.0462f,0.1842f,0.1559f,0.0454f,0.1480f,0.1033f,0.3244f,0.0096f,0.1758f,0.0039f,0.1759f,0.0110f,0.3241f,0.0033f,0.1730f,0.1764f,0.3074f,0.1757f,0.1732f,0.1519f,0.3074f,0.1513f,0.1756f,0.0320f,0.2159f,0.0368f,0.1791f,0.0165f,0.3169f,0.0458f,0.3158f,0.0193f,0.1720f,0.0594f,0.2087f,0.0476f,0.1736f,0.0504f,0.2073f,0.0640f,0.2362f,0.0821f,0.3267f,0.0796f,0.1717f,0.0822f,0.1726f,0.1297f,0.3077f,0.1289f,0.3074f,0.1865f,0.1742f,0.1840f,0.0061f,0.1086f,0.1366f,0.0368f,0.1241f,0.1189f,0.0168f,0.0309f,0.0211f,0.1882f,0.1400f,0.1857f});
  }
}
protected class MFFloat85 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat86 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3287 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1});
  }
}
protected class MFInt3288 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,61,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,54,-1,36,54,53,-1,37,36,53,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,55,-1,55,56,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,57,-1,57,58,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,59,-1,59,60,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1});
  }
}
protected class MFVec3f89 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1.5920f,1.8170f,-1.4810f,-2.6110f,1.8170f,0.0297f,-1.4890f,1.8170f,1.4660f,0.2232f,1.8170f,0.8423f,0.1596f,1.8170f,-0.9787f,-1.7940f,0.7023f,-2.0360f,-3.2010f,0.7023f,0.0503f,-1.6520f,0.7023f,2.0330f,0.7128f,0.7023f,1.1730f,0.6250f,0.7023f,-1.3420f,-1.7940f,-1.5130f,-2.0360f,-3.2010f,-1.5130f,0.0503f,-1.6520f,-1.5130f,2.0330f,0.7128f,-1.5130f,1.1730f,0.6250f,-1.5130f,-1.3420f,-1.8360f,-2.4610f,-2.1530f,-3.3250f,-2.4610f,0.0546f,-1.6860f,-2.4610f,2.1530f,0.8158f,-2.4610f,1.2420f,0.7229f,-2.4610f,-1.4190f,-1.3690f,-0.8329f,-1.7090f,-2.4450f,-0.8329f,-0.4004f,-1.8880f,-0.8329f,1.4360f,-0.4682f,-0.8329f,1.2620f,-0.1476f,-0.8329f,-0.6818f,-1.4310f,-5.9520f,-1.3830f,-2.5480f,-5.9520f,-0.3332f,-1.9700f,-5.9520f,1.1400f,-0.4950f,-5.9520f,1.0000f,-0.1620f,-5.9520f,-0.5588f,-1.4660f,-9.5220f,-1.3320f,-2.5410f,-9.5220f,-0.3218f,-1.9850f,-9.5220f,1.0960f,-0.5650f,-9.5220f,0.9618f,-0.2445f,-9.5220f,-0.5390f,-1.4220f,-10.0100f,-0.7920f,-2.0530f,-10.0100f,-0.1998f,-1.7260f,-10.0100f,0.6312f,-0.8942f,-10.0100f,0.5525f,-0.7063f,-10.0100f,-0.3271f});
  }
}
protected class MFVec2f90 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2986f,0.2114f,0.2726f,0.2114f,0.3201f,0.2114f,0.3415f,0.2114f,0.2466f,0.2114f,0.2979f,0.2417f,0.2726f,0.2417f,0.3197f,0.2417f,0.3418f,0.2417f,0.2473f,0.2417f,0.2979f,0.3018f,0.2726f,0.3018f,0.3197f,0.3018f,0.3418f,0.3018f,0.2473f,0.3018f,0.2978f,0.3276f,0.2726f,0.3276f,0.3197f,0.3276f,0.3419f,0.3276f,0.2474f,0.3276f,0.2932f,0.2834f,0.2689f,0.2834f,0.3160f,0.2834f,0.3322f,0.2834f,0.2450f,0.2834f,0.2251f,0.2114f,0.2255f,0.2417f,0.2255f,0.2417f,0.2255f,0.3018f,0.2255f,0.3018f,0.2255f,0.3276f,0.2255f,0.3276f,0.2159f,0.2834f,0.4315f,0.6736f,0.4420f,0.6736f,0.3947f,0.6736f,0.4041f,0.6736f,0.4180f,0.6736f,0.4296f,0.6167f,0.4409f,0.6167f,0.4415f,0.6485f,0.4303f,0.6485f,0.3965f,0.6167f,0.3953f,0.6485f,0.4047f,0.6167f,0.4053f,0.6485f,0.4189f,0.6167f,0.4180f,0.6485f,0.4415f,0.6706f,0.4306f,0.6706f,0.3950f,0.6706f,0.4051f,0.6706f,0.4182f,0.6706f,0.3746f,0.6736f,0.3851f,0.6736f,0.3840f,0.6167f,0.3845f,0.6485f,0.3845f,0.6485f,0.3846f,0.6706f,0.3846f,0.6706f,0.3851f,0.6736f,0.3481f,0.2114f});
  }
}
protected class MFFloat91 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat92 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3293 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,0,1,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
  }
}
protected class MFInt3294 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {25,2,3,-1,26,25,3,-1,4,26,3,-1,0,5,6,-1,6,1,0,-1,27,28,7,-1,7,2,27,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,29,30,12,-1,12,7,29,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,31,32,17,-1,17,12,31,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,34,-1,23,34,33,-1,24,23,33,-1,21,16,15,-1,15,20,21,-1,22,17,35,-1,35,36,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
  }
}
protected class MFVec3f95 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1597f,0.4908f,-1.0150f,-0.9881f,0.4908f,-0.2281f,-0.5166f,0.4908f,0.9165f,0.6033f,0.4908f,0.8366f,0.8239f,0.4908f,-0.3574f,-0.1063f,-0.5229f,-1.4330f,-1.2770f,-0.5229f,-0.3764f,-0.6107f,-0.5229f,1.4330f,0.9720f,-0.5229f,1.3060f,1.2840f,-0.5229f,-0.5807f,-0.1170f,-2.8640f,-1.4160f,-1.3670f,-2.8640f,-0.3724f,-0.6839f,-2.3520f,1.4190f,1.0060f,-2.3520f,1.2940f,1.3670f,-2.8640f,-0.5747f,-0.0931f,-7.4590f,-1.2670f,-1.0050f,-7.4590f,-0.1128f,-0.4859f,-7.4590f,1.3310f,0.7465f,-7.4590f,1.2140f,0.9892f,-7.4590f,-0.3022f,-0.0540f,-8.0090f,-0.7805f,-0.6765f,-8.0090f,0.0074f,-0.3221f,-8.0090f,0.9190f,0.5194f,-8.0090f,0.8391f,0.6852f,-8.0090f,-0.1219f});
  }
}
protected class MFVec2f96 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4222f,0.6201f,0.4327f,0.6201f,0.3884f,0.6201f,0.3987f,0.6201f,0.4103f,0.6201f,0.4213f,0.6265f,0.4321f,0.6265f,0.3894f,0.6265f,0.3990f,0.6265f,0.4105f,0.6265f,0.4214f,0.6413f,0.4323f,0.6413f,0.3890f,0.6381f,0.3992f,0.6381f,0.4103f,0.6413f,0.4213f,0.6705f,0.4336f,0.6705f,0.3899f,0.6705f,0.3981f,0.6705f,0.4094f,0.6705f,0.4215f,0.6740f,0.4346f,0.6740f,0.3899f,0.6740f,0.3980f,0.6740f,0.4083f,0.6740f,0.3787f,0.6201f,0.3682f,0.6201f,0.3787f,0.6201f,0.3782f,0.6265f,0.3782f,0.6265f,0.3783f,0.6413f,0.3783f,0.6413f,0.3796f,0.6705f,0.3676f,0.6740f,0.3806f,0.6740f,0.3796f,0.6705f,0.3806f,0.6740f});
  }
}
protected class MFFloat97 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat98 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3299 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,2,0,-1,0,5,4,-1,6,1,3,-1,3,7,6,-1,1,6,5,-1,5,0,1,-1,8,4,5,-1,5,9,8,-1,10,6,7,-1,7,11,10,-1,9,5,6,-1,6,10,9,-1,12,8,9,-1,9,13,12,-1,14,10,11,-1,11,15,14,-1,13,9,10,-1,10,14,13,-1,4,16,2,-1,2,16,7,-1,7,3,2,-1,17,20,18,-1,18,19,17,-1,21,11,7,-1,7,16,21,-1,8,12,21,-1,12,15,11,-1,11,21,12,-1,13,14,15,-1,15,12,13,-1,8,17,19,-1,19,4,8,-1,4,19,18,-1,18,16,4,-1,16,18,20,-1,20,21,16,-1,21,20,17,-1,17,8,21,-1,22,23,27,-1,26,24,25,-1});
  }
}
protected class MFInt32100 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,7,5,-1,5,6,4,-1,2,0,1,-1,1,3,2,-1,14,17,15,-1,15,16,14,-1,8,4,6,-1,6,9,8,-1,38,41,39,-1,39,40,38,-1,18,37,36,-1,36,19,18,-1,10,8,9,-1,9,11,10,-1,42,38,40,-1,40,43,42,-1,20,18,19,-1,19,21,20,-1,22,23,24,-1,24,23,25,-1,25,26,24,-1,27,30,28,-1,28,29,27,-1,31,32,25,-1,25,23,31,-1,33,34,31,-1,34,35,32,-1,32,31,34,-1,20,21,35,-1,35,34,20,-1,8,13,12,-1,12,4,8,-1,22,29,28,-1,28,23,22,-1,23,28,30,-1,30,31,23,-1,31,30,27,-1,27,33,31,-1,14,26,24,-1,14,24,16,-1});
  }
}
protected class MFVec3f101 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.6237f,0.0984f,0.7030f,-0.5903f,0.1133f,-1.1890f,1.1010f,0.0200f,0.7856f,1.1080f,0.0215f,-1.1310f,1.2890f,-0.5207f,1.3030f,-0.9805f,-0.3349f,1.2240f,-0.9287f,-0.3062f,-1.7530f,1.3910f,-0.5055f,-1.7490f,1.1800f,-2.2020f,2.1230f,-1.2630f,-2.0150f,1.8340f,-1.2110f,-1.9860f,-2.1230f,1.5050f,-2.2870f,-1.9810f,0.9466f,-3.4660f,1.4930f,-0.3369f,-3.6690f,1.5430f,-0.2851f,-3.6400f,-1.8260f,1.1350f,-3.4770f,-1.7050f,1.3850f,-0.5072f,-0.1650f,1.9030f,-2.2440f,1.7110f,2.1870f,-0.8250f,0.0512f,2.1540f,-0.8839f,1.6620f,1.9080f,-2.2420f,0.1214f,1.3940f,-2.2820f,-0.1776f,-0.5903f,0.1133f,-1.1890f,1.1080f,0.0215f,-1.1310f,1.1010f,0.0200f,0.7856f,-0.6237f,0.0984f,0.7030f,-0.5903f,0.1133f,-1.1890f,1.1010f,0.0200f,0.7856f});
  }
}
protected class MFVec2f102 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8107f,0.9924f,0.8122f,0.9033f,0.7694f,0.9912f,0.7683f,0.9026f,0.1329f,0.0347f,0.0307f,0.0051f,0.0134f,0.0353f,0.1366f,0.0058f,0.1249f,0.1081f,0.0147f,0.1170f,0.1349f,0.1856f,0.0462f,0.1842f,0.1559f,0.0454f,0.1480f,0.1033f,0.3244f,0.0096f,0.1758f,0.0039f,0.1759f,0.0110f,0.3241f,0.0033f,0.1730f,0.1764f,0.3074f,0.1757f,0.1732f,0.1519f,0.3074f,0.1513f,0.1756f,0.0320f,0.2159f,0.0368f,0.1791f,0.0165f,0.3169f,0.0458f,0.3158f,0.0193f,0.1720f,0.0594f,0.2087f,0.0476f,0.1736f,0.0504f,0.2073f,0.0640f,0.2362f,0.0821f,0.3267f,0.0796f,0.1717f,0.0822f,0.1726f,0.1297f,0.3077f,0.1289f,0.3074f,0.1865f,0.1742f,0.1840f,0.0061f,0.1086f,0.1366f,0.0368f,0.1241f,0.1189f,0.0168f,0.0309f,0.0211f,0.1882f,0.1400f,0.1857f});
  }
}
protected class MFFloat103 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat104 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32105 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,7,-1,7,5,3,-1,4,66,68,-1,68,8,4,-1,4,8,7,-1,1,0,9,-1,9,10,1,-1,0,2,11,-1,11,9,0,-1,15,71,73,-1,73,16,15,-1,14,15,16,-1,16,17,14,-1,71,15,8,-1,8,68,71,-1,15,14,7,-1,7,8,15,-1,73,72,69,-1,69,70,73,-1,16,73,70,-1,70,12,16,-1,16,12,13,-1,13,17,16,-1,21,20,22,-1,22,23,21,-1,20,14,17,-1,17,22,20,-1,20,21,6,-1,6,5,20,-1,14,20,5,-1,5,7,14,-1,23,22,18,-1,18,19,23,-1,22,17,13,-1,13,18,22,-1,2,6,11,-1,28,27,30,-1,30,31,28,-1,27,29,32,-1,32,30,27,-1,29,21,23,-1,23,32,29,-1,27,28,10,-1,10,9,27,-1,29,27,9,-1,9,11,29,-1,21,29,11,-1,11,6,21,-1,31,30,24,-1,24,25,31,-1,30,32,26,-1,26,24,30,-1,32,23,19,-1,19,26,32,-1,12,70,74,-1,74,33,12,-1,24,26,36,-1,36,35,24,-1,33,74,75,-1,75,37,33,-1,34,33,37,-1,37,38,34,-1,39,12,33,-1,33,34,39,-1,19,40,26,-1,26,40,41,-1,41,36,26,-1,39,34,41,-1,41,40,39,-1,35,36,43,-1,43,42,35,-1,36,41,44,-1,44,43,36,-1,41,34,38,-1,38,44,41,-1,37,75,76,-1,76,45,37,-1,38,37,45,-1,45,46,38,-1,42,43,48,-1,48,47,42,-1,44,38,46,-1,46,49,44,-1,45,76,77,-1,77,50,45,-1,46,45,50,-1,50,51,46,-1,47,48,53,-1,53,52,47,-1,48,49,54,-1,54,53,48,-1,49,46,51,-1,51,54,49,-1,50,77,78,-1,78,55,50,-1,51,50,55,-1,55,56,51,-1,52,53,58,-1,58,57,52,-1,53,54,59,-1,59,58,53,-1,54,51,56,-1,56,59,54,-1,19,18,60,-1,60,61,19,-1,18,13,62,-1,62,60,18,-1,13,39,63,-1,63,62,13,-1,40,19,61,-1,61,64,40,-1,39,40,64,-1,64,63,39,-1,2,3,5,-1,2,5,6,-1,13,12,39,-1,25,24,35,-1,70,69,74,-1,67,68,66,-1,66,65,67,-1,79,71,68,-1,68,67,79,-1,72,73,71,-1,71,79,72,-1,49,48,43,-1,43,44,49,-1,63,64,60,-1,60,62,63,-1,60,64,61,-1,86,83,82,-1,82,84,86,-1,141,140,83,-1,83,87,141,-1,83,86,87,-1,88,80,1,-1,1,10,88,-1,89,81,80,-1,80,88,89,-1,144,143,93,-1,93,94,144,-1,94,93,92,-1,92,95,94,-1,87,93,143,-1,143,141,87,-1,86,92,93,-1,93,87,86,-1,69,72,144,-1,144,142,69,-1,142,144,94,-1,94,90,142,-1,91,90,94,-1,94,95,91,-1,100,98,99,-1,99,101,100,-1,95,92,98,-1,98,100,95,-1,85,99,98,-1,98,84,85,-1,84,98,92,-1,92,86,84,-1,96,100,101,-1,101,97,96,-1,91,95,100,-1,100,96,91,-1,81,89,85,-1,106,104,28,-1,28,31,106,-1,107,105,104,-1,104,106,107,-1,101,99,105,-1,105,107,101,-1,10,28,104,-1,104,88,10,-1,88,104,105,-1,105,89,88,-1,89,105,99,-1,99,85,89,-1,102,106,31,-1,31,25,102,-1,103,107,106,-1,106,102,103,-1,97,101,107,-1,107,103,97,-1,145,142,90,-1,90,108,145,-1,111,103,102,-1,102,110,111,-1,146,145,108,-1,108,112,146,-1,112,108,109,-1,109,113,112,-1,108,90,114,-1,114,109,108,-1,97,103,115,-1,116,115,103,-1,103,111,116,-1,116,109,114,-1,114,115,116,-1,118,111,110,-1,110,117,118,-1,119,116,111,-1,111,118,119,-1,113,109,116,-1,116,119,113,-1,147,146,112,-1,112,120,147,-1,120,112,113,-1,113,121,120,-1,123,118,117,-1,117,122,123,-1});
  }
}
protected class MFInt32106 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {121,113,119,-1,119,124,121,-1,148,147,120,-1,120,125,148,-1,125,120,121,-1,121,126,125,-1,128,123,122,-1,122,127,128,-1,129,124,123,-1,123,128,129,-1,126,121,124,-1,124,129,126,-1,149,148,125,-1,125,130,149,-1,130,125,126,-1,126,131,130,-1,133,128,127,-1,127,132,133,-1,134,129,128,-1,128,133,134,-1,131,126,129,-1,129,134,131,-1,135,96,97,-1,97,136,135,-1,137,91,96,-1,96,135,137,-1,138,114,91,-1,91,137,138,-1,136,97,115,-1,115,139,136,-1,139,115,114,-1,114,138,139,-1,81,84,82,-1,81,85,84,-1,91,114,90,-1,25,110,102,-1,142,145,69,-1,140,141,67,-1,67,65,140,-1,141,143,79,-1,79,67,141,-1,143,144,72,-1,72,79,143,-1,118,123,124,-1,124,119,118,-1,135,139,138,-1,138,137,135,-1,135,136,139,-1,25,35,110,-1,117,110,35,-1,35,42,117,-1,47,122,117,-1,117,42,47,-1,127,122,47,-1,47,52,127,-1,132,127,52,-1,52,57,132,-1,69,145,74,-1,75,74,145,-1,145,146,75,-1,76,75,146,-1,146,147,76,-1,77,76,147,-1,147,148,77,-1,78,77,148,-1,148,149,78,-1,57,78,149,-1,149,132,57,-1,58,55,78,-1,78,57,58,-1,59,56,55,-1,55,58,59,-1,132,149,130,-1,130,133,132,-1,133,130,131,-1,131,134,133,-1,151,150,155,-1,155,156,151,-1,150,152,157,-1,157,155,150,-1,152,153,158,-1,158,157,152,-1,153,154,159,-1,159,158,153,-1,160,161,162,-1,162,163,160,-1,154,160,163,-1,163,159,154,-1,168,164,151,-1,151,156,168,-1,169,165,164,-1,164,168,169,-1,170,166,165,-1,165,169,170,-1,171,167,166,-1,166,170,171,-1,162,161,172,-1,172,173,162,-1,173,172,167,-1,167,171,173,-1});
  }
}
protected class MFInt32107 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,0,-1,0,1,2,-1,3,6,4,-1,4,5,3,-1,3,5,0,-1,20,21,18,-1,18,19,20,-1,21,23,22,-1,22,18,21,-1,26,27,24,-1,24,25,26,-1,29,26,25,-1,25,28,29,-1,27,26,30,-1,30,31,27,-1,26,29,32,-1,32,30,26,-1,24,35,33,-1,33,34,24,-1,25,24,34,-1,34,36,25,-1,25,36,37,-1,37,28,25,-1,40,41,38,-1,38,39,40,-1,41,29,28,-1,28,38,41,-1,41,40,42,-1,42,43,41,-1,29,41,43,-1,43,32,29,-1,39,38,44,-1,44,45,39,-1,38,28,37,-1,37,44,38,-1,23,42,22,-1,48,162,161,-1,161,47,48,-1,49,51,50,-1,50,46,49,-1,51,40,39,-1,39,50,51,-1,163,48,164,-1,164,181,163,-1,51,49,18,-1,18,22,51,-1,40,51,22,-1,22,42,40,-1,47,166,165,-1,165,53,47,-1,46,50,54,-1,54,52,46,-1,50,39,45,-1,45,54,50,-1,36,34,55,-1,55,56,36,-1,52,54,57,-1,57,58,52,-1,56,55,59,-1,59,60,56,-1,62,56,60,-1,60,61,62,-1,63,36,56,-1,56,62,63,-1,45,64,54,-1,54,64,65,-1,65,57,54,-1,63,62,65,-1,65,64,63,-1,58,57,66,-1,66,67,58,-1,57,65,68,-1,68,66,57,-1,65,62,61,-1,61,68,65,-1,60,59,69,-1,69,70,60,-1,61,60,70,-1,70,71,61,-1,67,66,72,-1,72,73,67,-1,68,61,71,-1,71,74,68,-1,70,69,75,-1,75,76,70,-1,71,70,76,-1,76,77,71,-1,73,72,78,-1,78,79,73,-1,72,74,80,-1,80,78,72,-1,74,71,77,-1,77,80,74,-1,76,75,81,-1,81,82,76,-1,77,76,82,-1,82,83,77,-1,79,78,84,-1,84,85,79,-1,78,80,86,-1,86,84,78,-1,80,77,83,-1,83,86,80,-1,45,44,87,-1,87,88,45,-1,44,37,89,-1,89,87,44,-1,37,63,90,-1,90,89,37,-1,64,45,88,-1,88,91,64,-1,63,64,91,-1,91,90,63,-1,7,2,1,-1,23,43,42,-1,37,36,63,-1,53,167,168,-1,34,33,55,-1,9,4,6,-1,6,8,9,-1,93,27,31,-1,31,92,93,-1,35,24,27,-1,27,93,35,-1,74,72,66,-1,66,68,74,-1,90,91,87,-1,87,89,90,-1,87,91,88,-1,10,13,11,-1,11,12,10,-1,14,16,13,-1,13,15,14,-1,13,10,15,-1,94,95,169,-1,169,170,94,-1,96,97,95,-1,95,94,96,-1,98,101,99,-1,99,100,98,-1,100,99,102,-1,102,103,100,-1,104,99,101,-1,101,105,104,-1,106,102,99,-1,99,104,106,-1,33,35,98,-1,98,107,33,-1,107,98,100,-1,100,108,107,-1,109,108,100,-1,100,103,109,-1,110,113,111,-1,111,112,110,-1,103,102,113,-1,113,110,103,-1,114,111,113,-1,113,115,114,-1,115,113,102,-1,102,106,115,-1,116,110,112,-1,112,117,116,-1,109,103,110,-1,110,116,109,-1,97,96,114,-1,118,119,48,-1,48,47,118,-1,120,121,119,-1,119,118,120,-1,112,111,121,-1,121,120,112,-1,171,48,119,-1,119,94,171,-1,94,119,121,-1,121,96,94,-1,96,121,111,-1,111,114,96,-1,122,118,47,-1,47,53,122,-1,123,120,118,-1,118,122,123,-1,117,112,120,-1,120,123,117,-1,124,107,108,-1,108,125,124,-1,126,123,122,-1,122,127,126,-1,128,124,125,-1,125,129,128,-1,129,125,130,-1,130,131,129,-1,125,108,132,-1,132,130,125,-1,117,123,133,-1,134,133,123,-1,123,126,134,-1,134,130,132,-1,132,133,134,-1,135,126,127,-1,127,136,135,-1,137,134,126,-1,126,135,137,-1,131,130,134,-1,134,137,131,-1,138,128,129,-1,129,139,138,-1,139,129,131,-1,131,140,139,-1,141,135,136,-1,136,142,141,-1});
  }
}
protected class MFInt32108 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,131,137,-1,137,143,140,-1,144,138,139,-1,139,145,144,-1,145,139,140,-1,140,146,145,-1,147,141,142,-1,142,148,147,-1,149,143,141,-1,141,147,149,-1,146,140,143,-1,143,149,146,-1,150,144,145,-1,145,151,150,-1,151,145,146,-1,146,152,151,-1,153,147,148,-1,148,154,153,-1,155,149,147,-1,147,153,155,-1,152,146,149,-1,149,155,152,-1,156,116,117,-1,117,157,156,-1,158,109,116,-1,116,156,158,-1,159,132,109,-1,109,158,159,-1,157,117,133,-1,133,160,157,-1,160,133,132,-1,132,159,160,-1,17,12,11,-1,97,114,115,-1,109,132,108,-1,53,127,122,-1,107,124,33,-1,16,14,9,-1,9,8,16,-1,105,101,93,-1,93,92,105,-1,101,98,35,-1,35,93,101,-1,135,141,143,-1,143,137,135,-1,156,160,159,-1,159,158,156,-1,156,157,160,-1,53,172,127,-1,136,127,173,-1,173,174,136,-1,176,142,136,-1,136,175,176,-1,148,142,177,-1,177,178,148,-1,154,148,179,-1,179,180,154,-1,33,124,55,-1,59,55,124,-1,124,128,59,-1,69,59,128,-1,128,138,69,-1,75,69,138,-1,138,144,75,-1,81,75,144,-1,144,150,81,-1,85,81,150,-1,150,182,85,-1,84,82,81,-1,81,85,84,-1,86,83,82,-1,82,84,86,-1,154,150,151,-1,151,153,154,-1,153,151,152,-1,152,155,153,-1,184,183,188,-1,188,189,184,-1,183,185,190,-1,190,188,183,-1,185,186,191,-1,191,190,185,-1,186,187,192,-1,192,191,186,-1,193,194,195,-1,195,196,193,-1,187,193,196,-1,196,192,187,-1,201,197,184,-1,184,189,201,-1,202,198,197,-1,197,201,202,-1,203,199,198,-1,198,202,203,-1,204,200,199,-1,199,203,204,-1,195,194,205,-1,205,206,195,-1,206,205,200,-1,200,204,206,-1});
  }
}
protected class MFVec3f109 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.6107f,12.5600f,-1.1130f,0.0000f,12.6100f,-1.1940f,1.2950f,12.7500f,-0.8021f,1.7770f,12.7300f,0.2480f,1.3870f,12.4700f,0.9786f,2.5690f,12.3400f,0.2936f,2.2910f,13.1300f,-1.2400f,2.8090f,11.5700f,1.3600f,1.9740f,11.3800f,2.8480f,0.8488f,13.1500f,-2.7790f,0.0000f,13.1300f,-2.9240f,1.7940f,13.1700f,-2.4810f,2.9230f,10.4500f,2.6180f,4.4830f,11.1600f,1.7730f,2.6280f,12.1400f,1.9220f,1.9790f,11.3800f,3.3680f,2.7600f,10.7300f,3.4380f,3.8960f,11.8700f,1.8560f,4.9380f,11.6900f,0.1642f,4.8230f,11.1000f,-1.2800f,3.0310f,13.0700f,0.3237f,3.4850f,12.3100f,-1.9630f,4.4720f,12.6100f,0.3237f,4.1030f,11.4800f,-1.5690f,1.5970f,8.2590f,-2.1420f,0.0000f,7.9910f,-2.2600f,3.7380f,9.1050f,-1.8010f,0.9095f,10.6400f,-3.9030f,0.0000f,10.6500f,-4.0210f,2.1060f,10.9800f,-3.4510f,1.4790f,7.6900f,-2.7740f,0.0000f,7.4060f,-2.8790f,3.6320f,9.0270f,-2.6730f,3.7660f,6.7560f,3.6900f,5.6010f,7.3140f,1.3600f,1.8860f,7.1530f,-2.0820f,3.7900f,7.2440f,-1.6290f,3.2570f,4.5100f,2.4400f,4.4790f,4.5430f,1.3270f,5.3740f,8.6360f,1.4720f,5.2040f,8.6270f,-0.2911f,4.8770f,7.2730f,-0.6872f,1.2510f,4.4130f,-1.9560f,3.1560f,4.4610f,-1.2640f,4.2250f,4.5050f,-0.2194f,3.2450f,2.7540f,2.4890f,4.4760f,2.7880f,1.3460f,1.1300f,2.4990f,-2.0850f,3.1610f,2.6740f,-1.2670f,4.2240f,2.7390f,-0.2643f,3.6830f,0.6999f,3.4820f,5.0770f,0.7315f,1.7580f,1.3400f,0.5620f,-3.2420f,3.4820f,0.5706f,-2.2360f,4.6800f,0.6632f,-0.6521f,3.3400f,-0.2471f,2.8280f,4.5540f,-0.2191f,1.4850f,1.4050f,-0.3523f,-2.3590f,3.1740f,-0.3325f,-1.6280f,4.2680f,-0.2911f,-0.3915f,6.5220f,11.4500f,0.1642f,6.1520f,10.7300f,-1.2800f,6.1690f,10.7800f,1.6740f,5.5520f,8.7710f,1.4720f,5.5460f,8.7640f,-0.2911f,0.0000f,12.2300f,1.5250f,0.6880f,12.2400f,1.4180f,0.0000f,10.3000f,3.4390f,1.2100f,10.7700f,3.2330f,0.0000f,9.3300f,3.3890f,1.5100f,9.9910f,3.2330f,1.2160f,10.7700f,3.6470f,0.0000f,9.6770f,3.8440f,1.4040f,10.2700f,3.8240f,1.3920f,7.2900f,3.5970f,1.1390f,4.4830f,2.8450f,1.1290f,2.5720f,2.9410f,1.4410f,0.6730f,4.0210f,1.4060f,-0.2812f,3.2130f,0.0000f,10.3500f,3.5790f,-0.6107f,12.5600f,-1.1130f,-1.2950f,12.7500f,-0.8021f,-1.7770f,12.7300f,0.2480f,-1.3870f,12.4700f,0.9786f,-2.5690f,12.3400f,0.2936f,-2.2910f,13.1300f,-1.2400f,-2.8090f,11.5700f,1.3600f,-1.9740f,11.3800f,2.8480f,-0.8488f,13.1500f,-2.7790f,-1.7940f,13.1700f,-2.4810f,-2.9230f,10.4500f,2.6180f,-4.4830f,11.1600f,1.7730f,-2.6280f,12.1400f,1.9220f,-1.9790f,11.3800f,3.3680f,-2.7600f,10.7300f,3.4380f,-3.8960f,11.8700f,1.8560f,-4.9380f,11.6900f,0.1642f,-4.8230f,11.1000f,-1.2800f,-3.0310f,13.0700f,0.3237f,-3.4850f,12.3100f,-1.9630f,-4.4720f,12.6100f,0.3237f,-4.1030f,11.4800f,-1.5690f,-1.5970f,8.2590f,-2.1420f,-3.7380f,9.1050f,-1.8010f,-0.9095f,10.6400f,-3.9030f,-2.1060f,10.9800f,-3.4510f,-1.4790f,7.6900f,-2.7740f,-3.6320f,9.0270f,-2.6730f,-3.7660f,6.7560f,3.6900f,-5.6010f,7.3140f,1.3600f,-1.8860f,7.1530f,-2.0820f,-3.7900f,7.2440f,-1.6290f,-3.2570f,4.5100f,2.4400f,-4.4790f,4.5430f,1.3270f,-5.3740f,8.6360f,1.4720f,-5.2040f,8.6270f,-0.2911f,-4.8770f,7.2730f,-0.6872f,-1.2510f,4.4130f,-1.9560f,-3.1560f,4.4610f,-1.2640f,-4.2250f,4.5050f,-0.2194f,-3.2450f,2.7540f,2.4890f,-4.4760f,2.7880f,1.3460f,-1.1300f,2.4990f,-2.0850f,-3.1610f,2.6740f,-1.2670f,-4.2240f,2.7390f,-0.2643f,-3.6830f,0.6999f,3.4820f,-5.0770f,0.7315f,1.7580f,-1.3400f,0.5620f,-3.2420f,-3.4820f,0.5706f,-2.2360f,-4.6800f,0.6632f,-0.6521f,-3.3400f,-0.2471f,2.8280f,-4.5540f,-0.2191f,1.4850f,-1.4050f,-0.3523f,-2.3590f,-3.1740f,-0.3325f,-1.6280f,-4.2680f,-0.2911f,-0.3915f,-6.5220f,11.4500f,0.1642f,-6.1520f,10.7300f,-1.2800f,-6.1690f,10.7800f,1.6740f,-5.5520f,8.7710f,1.4720f,-5.5460f,8.7640f,-0.2911f,-0.6880f,12.2400f,1.4180f,-1.2100f,10.7700f,3.2330f,-1.5100f,9.9910f,3.2330f,-1.2160f,10.7700f,3.6470f,-1.4040f,10.2700f,3.8240f,-1.3920f,7.2900f,3.5970f,-1.1390f,4.4830f,2.8450f,-1.1290f,2.5720f,2.9410f,-1.4410f,0.6730f,4.0210f,-1.4060f,-0.2812f,3.2130f,0.6107f,15.6800f,-1.1130f,0.0000f,15.6800f,-1.1940f,1.2950f,15.6800f,-0.8021f,1.7770f,15.6800f,0.2481f,1.3870f,15.6800f,0.9786f,0.6107f,11.9400f,-1.1130f,0.0000f,12.0100f,-1.1940f,1.2950f,12.2400f,-0.8021f,1.7770f,12.2100f,0.2480f,1.3870f,11.7900f,0.9786f,0.6881f,15.8300f,1.4180f,0.0000f,15.1900f,1.5250f,0.0000f,11.4200f,1.5250f,0.6881f,11.4300f,1.4180f,-0.6107f,15.6800f,-1.1130f,-1.2950f,15.6800f,-0.8021f,-1.7770f,15.6800f,0.2481f,-1.3870f,15.6800f,0.9786f,-0.6107f,11.9400f,-1.1130f,-1.2950f,12.2400f,-0.8021f,-1.7770f,12.2100f,0.2481f,-1.3870f,11.7900f,0.9786f,-0.6881f,15.8300f,1.4180f,-0.6880f,11.4300f,1.4180f});
  }
}
protected class MFVec2f110 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4134f,0.6454f,0.4115f,0.6346f,0.4055f,0.6342f,0.4025f,0.6415f,0.4012f,0.6643f,0.4070f,0.6604f,0.3972f,0.6460f,0.4018f,0.6236f,0.3919f,0.6471f,0.3919f,0.6664f,0.3705f,0.6454f,0.3784f,0.6342f,0.3723f,0.6346f,0.3814f,0.6415f,0.3827f,0.6643f,0.3769f,0.6604f,0.3867f,0.6460f,0.3821f,0.6236f,0.2661f,0.5914f,0.3505f,0.5919f,0.3554f,0.5911f,0.2505f,0.5754f,0.2410f,0.5920f,0.2112f,0.5805f,0.0763f,0.4945f,0.1025f,0.5076f,0.0865f,0.5614f,0.0652f,0.5465f,0.1412f,0.5207f,0.1108f,0.5655f,0.0786f,0.5849f,0.0516f,0.5759f,0.1073f,0.5839f,0.0639f,0.4488f,0.0877f,0.4617f,0.0525f,0.4715f,0.1185f,0.4741f,0.1474f,0.4856f,0.1724f,0.5255f,0.2089f,0.5196f,0.2133f,0.5560f,0.1645f,0.5709f,0.2067f,0.5908f,0.1632f,0.5887f,0.1708f,0.4854f,0.1963f,0.4863f,0.2708f,0.4736f,0.3470f,0.4316f,0.3616f,0.5328f,0.2733f,0.5359f,0.2380f,0.4930f,0.2490f,0.5451f,0.2638f,0.4568f,0.3214f,0.4203f,0.2252f,0.4828f,0.0420f,0.4060f,0.0909f,0.3980f,0.2183f,0.3850f,0.3504f,0.3844f,0.0206f,0.3452f,0.0903f,0.3446f,0.1491f,0.3449f,0.1525f,0.3869f,0.1538f,0.4251f,0.1784f,0.4249f,0.1911f,0.3858f,0.2175f,0.3427f,0.3608f,0.3469f,0.1838f,0.3438f,0.0177f,0.3051f,0.0982f,0.3020f,0.1487f,0.2975f,0.2175f,0.2944f,0.3621f,0.2922f,0.1849f,0.2961f,0.0190f,0.2349f,0.1011f,0.2410f,0.1445f,0.2419f,0.2369f,0.2375f,0.3561f,0.2404f,0.1927f,0.2400f,0.0206f,0.2122f,0.1067f,0.2154f,0.1463f,0.2162f,0.2270f,0.2131f,0.3536f,0.2151f,0.1879f,0.2143f,0.1715f,0.4655f,0.1797f,0.4646f,0.1569f,0.4642f,0.1544f,0.4288f,0.1782f,0.4286f,0.0346f,0.5664f,0.0399f,0.5407f,0.2661f,0.5914f,0.2505f,0.5754f,0.2410f,0.5920f,0.2112f,0.5805f,0.0763f,0.4945f,0.0865f,0.5614f,0.1025f,0.5076f,0.0652f,0.5465f,0.1108f,0.5655f,0.1412f,0.5207f,0.0786f,0.5849f,0.0516f,0.5759f,0.1073f,0.5839f,0.0877f,0.4617f,0.1185f,0.4741f,0.1474f,0.4857f,0.1724f,0.5255f,0.2133f,0.5560f,0.2089f,0.5196f,0.1645f,0.5709f,0.2067f,0.5908f,0.1632f,0.5887f,0.1708f,0.4854f,0.1963f,0.4863f,0.2708f,0.4736f,0.2733f,0.5359f,0.2380f,0.4930f,0.2490f,0.5451f,0.2638f,0.4568f,0.2252f,0.4828f,0.0420f,0.4060f,0.0909f,0.3980f,0.2183f,0.3850f,0.3504f,0.3844f,0.0206f,0.3452f,0.0903f,0.3446f,0.1525f,0.3869f,0.1491f,0.3449f,0.1538f,0.4251f,0.1784f,0.4249f,0.1911f,0.3858f,0.2175f,0.3427f,0.3608f,0.3469f,0.1838f,0.3438f,0.0177f,0.3051f,0.0982f,0.3020f,0.1487f,0.2975f,0.2175f,0.2944f,0.3621f,0.2922f,0.1849f,0.2961f,0.0190f,0.2349f,0.1011f,0.2410f,0.1445f,0.2419f,0.2369f,0.2375f,0.3561f,0.2404f,0.1927f,0.2400f,0.0206f,0.2122f,0.1067f,0.2154f,0.1463f,0.2162f,0.2270f,0.2131f,0.3536f,0.2151f,0.1879f,0.2143f,0.1715f,0.4655f,0.1797f,0.4646f,0.1569f,0.4642f,0.1544f,0.4288f,0.1782f,0.4286f,0.3477f,0.4310f,0.3623f,0.5333f,0.3623f,0.5333f,0.3505f,0.5919f,0.3223f,0.4192f,0.3477f,0.4310f,0.3223f,0.4192f,0.3518f,0.3851f,0.3554f,0.5911f,0.3505f,0.5919f,0.3505f,0.5919f,0.3518f,0.3851f,0.3518f,0.3851f,0.3629f,0.3439f,0.3629f,0.3439f,0.3633f,0.2922f,0.3633f,0.2922f,0.3553f,0.2398f,0.3553f,0.2398f,0.3555f,0.2151f,0.3511f,0.5932f,0.3536f,0.2151f,0.3995f,0.6721f,0.3906f,0.6721f,0.4094f,0.6721f,0.4164f,0.6721f,0.4107f,0.6721f,0.3995f,0.6285f,0.3906f,0.6293f,0.4094f,0.6320f,0.4164f,0.6316f,0.4107f,0.6267f,0.4006f,0.6738f,0.3906f,0.6664f,0.3906f,0.6224f,0.4006f,0.6225f,0.3818f,0.6721f,0.3719f,0.6721f,0.3649f,0.6721f,0.3706f,0.6721f,0.3818f,0.6285f,0.3719f,0.6320f,0.3649f,0.6316f,0.3706f,0.6267f,0.3807f,0.6738f,0.3807f,0.6225f});
  }
}
protected class MFFloat111 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat112 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32113 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,72,2,73,-1,73,74,72,-1,2,0,75,-1,75,73,2,-1,72,74,76,-1,76,3,72,-1,74,73,77,-1,77,78,74,-1,73,75,79,-1,79,77,73,-1,76,74,78,-1,78,80,76,-1,78,77,81,-1,81,16,78,-1,77,79,82,-1,82,81,77,-1,80,78,16,-1,16,14,80,-1,3,76,5,-1,76,80,83,-1,83,5,76,-1,80,14,12,-1,12,83,80,-1,75,84,85,-1,85,79,75,-1,79,85,86,-1,86,82,79,-1,85,84,87,-1,87,88,85,-1,86,85,88,-1,88,89,86,-1,0,87,84,-1,84,75,0,-1,81,82,91,-1,91,90,81,-1,82,86,92,-1,92,91,82,-1,86,89,93,-1,93,92,86,-1,90,91,94,-1,94,33,90,-1,91,92,95,-1,95,94,91,-1,92,93,96,-1,96,95,92,-1,179,185,4,-1,8,6,10,-1,10,11,8,-1,6,12,13,-1,13,10,6,-1,12,14,15,-1,15,13,12,-1,15,14,16,-1,16,17,15,-1,17,16,18,-1,18,19,17,-1,19,18,20,-1,20,21,19,-1,11,10,22,-1,22,23,11,-1,10,13,24,-1,24,22,10,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,21,27,19,-1,23,22,28,-1,28,29,23,-1,22,24,30,-1,30,28,22,-1,25,31,30,-1,30,24,25,-1,25,26,32,-1,32,31,25,-1,26,27,33,-1,33,32,26,-1,27,21,34,-1,34,33,27,-1,9,8,35,-1,35,36,9,-1,8,11,23,-1,23,35,8,-1,23,29,37,-1,37,35,23,-1,31,32,39,-1,39,40,31,-1,40,39,41,-1,41,42,40,-1,31,40,43,-1,32,44,39,-1,42,41,45,-1,45,46,42,-1,40,42,46,-1,46,43,40,-1,41,39,44,-1,44,45,41,-1,47,48,50,-1,50,49,47,-1,50,51,52,-1,52,49,50,-1,52,51,53,-1,53,54,52,-1,54,53,55,-1,55,56,54,-1,56,55,57,-1,57,58,56,-1,50,48,59,-1,59,60,50,-1,51,50,60,-1,60,61,51,-1,53,51,61,-1,61,62,53,-1,55,53,62,-1,62,63,55,-1,57,55,63,-1,63,64,57,-1,62,61,65,-1,65,66,62,-1,63,62,66,-1,66,67,63,-1,64,63,67,-1,67,68,64,-1,28,30,65,-1,67,66,45,-1,45,69,67,-1,68,67,69,-1,69,70,68,-1,30,31,43,-1,65,30,43,-1,43,46,65,-1,66,65,46,-1,46,45,66,-1,48,47,38,-1,38,37,48,-1,59,48,37,-1,37,29,59,-1,33,94,97,-1,97,71,33,-1,94,95,98,-1,98,97,94,-1,95,96,99,-1,99,98,95,-1,32,33,71,-1,71,44,32,-1,71,69,45,-1,45,44,71,-1,97,70,69,-1,69,71,97,-1,97,98,70,-1,83,12,6,-1,6,5,83,-1,21,20,81,-1,81,90,21,-1,34,21,90,-1,90,33,34,-1,1,100,0,-1,158,100,72,-1,72,159,158,-1,160,0,100,-1,100,158,160,-1,161,159,72,-1,72,3,161,-1,162,158,159,-1,159,163,162,-1,164,160,158,-1,158,162,164,-1,163,159,161,-1,161,165,163,-1,166,162,163,-1,163,110,166,-1,167,164,162,-1,162,166,167,-1,110,163,165,-1,165,108,110,-1,3,195,101,-1,101,161,3,-1,168,165,161,-1,161,101,168,-1,106,108,165,-1,165,168,106,-1,170,169,160,-1,160,164,170,-1,171,170,164,-1,164,167,171,-1,87,169,170,-1,170,88,87,-1,88,170,171,-1,171,89,88,-1,169,87,0,-1,0,160,169,-1,173,167,166,-1,166,172,173,-1,174,171,167,-1,167,173,174,-1,93,89,171,-1,171,174,93,-1,175,173,172,-1,172,127,175,-1,176,174,173,-1,173,175,176,-1,96,93,174,-1,174,176,96,-1,104,102,103,-1,103,105,104,-1,107,106,102,-1,102,104,107,-1});
  }
}
protected class MFInt32114 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {109,108,106,-1,106,107,109,-1,110,108,109,-1,109,111,110,-1,112,110,111,-1,111,113,112,-1,114,112,113,-1,113,115,114,-1,116,104,105,-1,105,117,116,-1,118,107,104,-1,104,116,118,-1,119,109,107,-1,107,118,119,-1,120,111,109,-1,109,119,120,-1,121,113,111,-1,111,120,121,-1,115,113,121,-1,122,116,117,-1,117,123,122,-1,124,118,116,-1,116,122,124,-1,124,125,119,-1,119,118,124,-1,126,120,119,-1,119,125,126,-1,127,121,120,-1,120,126,127,-1,128,115,121,-1,121,127,128,-1,129,103,9,-1,9,36,129,-1,117,105,103,-1,103,129,117,-1,130,123,117,-1,117,129,130,-1,131,126,125,-1,125,132,131,-1,133,131,132,-1,132,134,133,-1,125,135,132,-1,126,131,136,-1,137,133,134,-1,134,138,137,-1,138,134,132,-1,132,135,138,-1,136,131,133,-1,133,137,136,-1,140,139,47,-1,47,49,140,-1,52,141,140,-1,140,49,52,-1,142,141,52,-1,52,54,142,-1,143,142,54,-1,54,56,143,-1,144,143,56,-1,56,58,144,-1,145,139,140,-1,140,146,145,-1,146,140,141,-1,141,147,146,-1,147,141,142,-1,142,148,147,-1,148,142,143,-1,143,149,148,-1,149,143,144,-1,144,150,149,-1,148,152,151,-1,151,147,148,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,122,151,124,-1,137,152,153,-1,153,155,137,-1,155,153,154,-1,154,156,155,-1,124,135,125,-1,135,124,151,-1,151,138,135,-1,138,151,152,-1,152,137,138,-1,38,47,139,-1,139,130,38,-1,130,139,145,-1,145,123,130,-1,177,175,127,-1,127,157,177,-1,178,176,175,-1,175,177,178,-1,99,96,176,-1,176,178,99,-1,157,127,126,-1,126,136,157,-1,137,155,157,-1,157,136,137,-1,155,156,177,-1,177,157,155,-1,177,156,178,-1,102,106,168,-1,168,101,102,-1,166,114,115,-1,115,172,166,-1,172,115,128,-1,128,127,172,-1,182,187,188,-1,189,190,194,-1,191,192,193,-1,5,6,183,-1,183,195,5,-1,102,101,195,-1,195,183,102,-1,9,103,7,-1,7,8,9,-1,103,102,7,-1,8,7,6,-1,65,61,60,-1,60,28,65,-1,147,151,122,-1,122,146,147,-1,180,6,7,-1,7,184,180,-1,186,184,7,-1,7,102,186,-1,4,185,180,-1,180,184,4,-1,181,4,184,-1,184,186,181,-1,72,1,2,-1,72,100,1,-1,129,36,38,-1,38,130,129,-1,35,37,38,-1,38,36,35,-1,181,179,4,-1,123,145,146,-1,146,122,123,-1,60,59,29,-1,29,28,60,-1});
  }
}
protected class MFInt32115 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,5,2,3,-1,3,4,5,-1,2,1,6,-1,6,3,2,-1,5,4,7,-1,7,8,5,-1,4,3,9,-1,9,10,4,-1,3,6,11,-1,11,9,3,-1,7,4,10,-1,10,12,7,-1,10,9,13,-1,13,14,10,-1,9,11,15,-1,15,13,9,-1,12,10,14,-1,14,16,12,-1,8,7,17,-1,7,12,18,-1,18,17,7,-1,12,16,19,-1,19,18,12,-1,6,21,20,-1,20,11,6,-1,11,20,22,-1,22,15,11,-1,20,21,23,-1,23,24,20,-1,22,20,24,-1,24,25,22,-1,1,23,21,-1,21,6,1,-1,13,15,26,-1,26,27,13,-1,15,22,28,-1,28,26,15,-1,22,25,29,-1,29,28,22,-1,27,26,30,-1,30,31,27,-1,26,28,32,-1,32,30,26,-1,28,29,33,-1,33,32,28,-1,94,95,96,-1,99,100,97,-1,97,98,99,-1,100,102,101,-1,101,97,100,-1,102,104,103,-1,103,101,102,-1,103,104,105,-1,105,106,103,-1,106,105,107,-1,107,108,106,-1,108,107,109,-1,109,110,108,-1,98,97,111,-1,111,112,98,-1,97,101,113,-1,113,111,97,-1,101,103,114,-1,114,113,101,-1,103,106,115,-1,115,114,103,-1,106,108,116,-1,116,115,106,-1,110,116,108,-1,112,111,117,-1,117,118,112,-1,111,113,119,-1,119,117,111,-1,114,120,119,-1,119,113,114,-1,114,115,121,-1,121,120,114,-1,115,116,122,-1,122,121,115,-1,116,110,123,-1,123,122,116,-1,126,99,124,-1,124,125,126,-1,99,98,112,-1,112,124,99,-1,112,118,127,-1,127,124,112,-1,36,37,34,-1,34,35,36,-1,35,34,38,-1,38,39,35,-1,36,35,40,-1,37,41,34,-1,39,38,42,-1,42,43,39,-1,35,39,43,-1,43,40,35,-1,38,34,41,-1,41,42,38,-1,129,131,130,-1,130,128,129,-1,130,135,132,-1,132,128,130,-1,132,135,133,-1,133,134,132,-1,134,133,136,-1,136,137,134,-1,137,136,138,-1,138,139,137,-1,130,131,140,-1,140,141,130,-1,135,130,141,-1,141,142,135,-1,133,135,142,-1,142,143,133,-1,136,133,143,-1,143,144,136,-1,138,136,144,-1,144,145,138,-1,143,142,146,-1,146,147,143,-1,144,143,147,-1,147,148,144,-1,145,144,148,-1,148,149,145,-1,117,119,146,-1,148,147,150,-1,150,151,148,-1,149,148,151,-1,151,152,149,-1,44,36,40,-1,146,119,153,-1,153,154,146,-1,147,146,154,-1,154,150,147,-1,131,129,155,-1,155,127,131,-1,140,131,127,-1,127,118,140,-1,31,30,45,-1,45,46,31,-1,30,32,47,-1,47,45,30,-1,32,33,48,-1,48,47,32,-1,37,31,46,-1,46,41,37,-1,157,151,150,-1,150,156,157,-1,158,152,151,-1,151,157,158,-1,45,47,49,-1,18,19,50,-1,50,17,18,-1,110,109,159,-1,159,160,110,-1,123,110,160,-1,160,122,123,-1,0,51,1,-1,52,51,5,-1,5,53,52,-1,54,1,51,-1,51,52,54,-1,55,53,5,-1,5,8,55,-1,56,52,53,-1,53,57,56,-1,58,54,52,-1,52,56,58,-1,57,53,55,-1,55,59,57,-1,60,56,57,-1,57,61,60,-1,62,58,56,-1,56,60,62,-1,61,57,59,-1,59,63,61,-1,8,92,64,-1,64,55,8,-1,65,59,55,-1,55,64,65,-1,66,63,59,-1,59,65,66,-1,67,68,54,-1,54,58,67,-1,69,67,58,-1,58,62,69,-1,23,68,67,-1,67,24,23,-1,24,67,69,-1,69,25,24,-1,68,23,1,-1,1,54,68,-1,70,62,60,-1,60,71,70,-1,72,69,62,-1,62,70,72,-1,29,25,69,-1,69,72,29,-1,73,70,71,-1,71,74,73,-1,75,72,70,-1,70,73,75,-1,33,29,72,-1,72,75,33,-1,161,164,162,-1,162,163,161,-1,165,166,164,-1,164,161,165,-1});
  }
}
protected class MFInt32116 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {167,168,166,-1,166,165,167,-1,169,168,167,-1,167,170,169,-1,171,169,170,-1,170,172,171,-1,173,171,172,-1,172,174,173,-1,175,161,163,-1,163,176,175,-1,177,165,161,-1,161,175,177,-1,178,167,165,-1,165,177,178,-1,179,170,167,-1,167,178,179,-1,180,172,170,-1,170,179,180,-1,174,172,180,-1,181,175,176,-1,176,182,181,-1,183,177,175,-1,175,181,183,-1,183,184,178,-1,178,177,183,-1,185,179,178,-1,178,184,185,-1,186,180,179,-1,179,185,186,-1,187,174,180,-1,180,186,187,-1,188,162,126,-1,126,125,188,-1,176,163,162,-1,162,188,176,-1,189,182,176,-1,176,188,189,-1,76,79,77,-1,77,78,76,-1,80,76,78,-1,78,81,80,-1,77,82,78,-1,79,76,83,-1,84,80,81,-1,81,85,84,-1,85,81,78,-1,78,82,85,-1,83,76,80,-1,80,84,83,-1,190,191,129,-1,129,128,190,-1,132,193,190,-1,190,128,132,-1,192,193,132,-1,132,134,192,-1,194,192,134,-1,134,137,194,-1,195,194,137,-1,137,139,195,-1,196,191,190,-1,190,197,196,-1,197,190,193,-1,193,198,197,-1,198,193,192,-1,192,199,198,-1,199,192,194,-1,194,200,199,-1,200,194,195,-1,195,201,200,-1,199,203,202,-1,202,198,199,-1,203,199,200,-1,200,204,203,-1,204,200,201,-1,201,205,204,-1,181,202,183,-1,206,203,204,-1,204,207,206,-1,207,204,205,-1,205,208,207,-1,86,82,77,-1,210,183,202,-1,202,209,210,-1,209,202,203,-1,203,206,209,-1,155,129,191,-1,191,189,155,-1,189,191,196,-1,196,182,189,-1,87,73,74,-1,74,88,87,-1,89,75,73,-1,73,87,89,-1,48,33,75,-1,75,89,48,-1,88,74,79,-1,79,83,88,-1,206,207,211,-1,211,212,206,-1,207,208,213,-1,213,211,207,-1,87,90,89,-1,91,66,65,-1,65,64,91,-1,214,173,174,-1,174,215,214,-1,215,174,187,-1,187,186,215,-1,92,8,7,-1,7,17,92,-1,64,55,8,-1,17,50,93,-1,93,92,17,-1,91,64,92,-1,92,93,91,-1,126,162,216,-1,216,99,126,-1,162,164,216,-1,99,216,100,-1,146,142,141,-1,141,117,146,-1,198,202,181,-1,181,197,198,-1,218,100,216,-1,216,217,218,-1,219,217,216,-1,216,164,219,-1,96,95,218,-1,218,217,96,-1,220,96,217,-1,217,219,220,-1,5,0,2,-1,5,51,0,-1,188,125,155,-1,155,189,188,-1,124,127,155,-1,155,125,124,-1,220,94,96,-1,182,196,197,-1,197,181,182,-1,141,140,118,-1,118,117,141,-1});
  }
}
protected class MFVec3f117 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0166f,1.5910f,6.0240f,0.0166f,2.0160f,6.6390f,0.7299f,2.0160f,6.1100f,0.0209f,4.4870f,5.4540f,0.0165f,5.9700f,6.7940f,1.9210f,6.1930f,5.7580f,2.6950f,8.1510f,5.2080f,0.0166f,9.5100f,6.0440f,2.3000f,11.2400f,3.7360f,0.0166f,11.4600f,3.9820f,5.1640f,9.4070f,3.7790f,4.3070f,10.7900f,3.0330f,3.8200f,6.1320f,4.7630f,5.9060f,6.6260f,3.9370f,3.9300f,4.8430f,4.1250f,5.9950f,4.5990f,3.3610f,3.7740f,3.0040f,4.2120f,5.7380f,3.0550f,3.2080f,3.6530f,1.8160f,4.6470f,5.0750f,1.7160f,3.5730f,3.3730f,0.4292f,5.2560f,3.7300f,0.4456f,4.3030f,5.8180f,9.4070f,1.6390f,4.4260f,11.1700f,1.7030f,6.6930f,6.8530f,1.6030f,6.6900f,4.5990f,1.3700f,6.3250f,3.0550f,1.7550f,5.1360f,1.7160f,2.1060f,4.7560f,8.9510f,-1.0640f,3.2940f,10.6900f,-1.1620f,5.6240f,6.6370f,0.1137f,5.0420f,4.5990f,0.3258f,4.8440f,3.0550f,0.5342f,4.0610f,1.7200f,1.2330f,3.4400f,0.4830f,3.3080f,2.3060f,12.1500f,1.9220f,0.0166f,11.8700f,2.2560f,1.2530f,11.3500f,-0.9965f,0.0166f,11.2800f,-1.0360f,5.3680f,2.8230f,-0.2563f,5.5060f,4.8310f,-0.3854f,5.7090f,3.0840f,-1.0390f,5.9860f,4.5710f,-1.1650f,5.1640f,4.8310f,-0.3854f,4.5020f,2.8390f,-0.2487f,5.2850f,3.0810f,-1.0440f,5.5100f,4.5710f,-1.1650f,0.0166f,10.9800f,-2.8720f,0.8853f,10.9800f,-2.8280f,0.0166f,9.4310f,-4.6580f,1.4000f,9.4260f,-4.5960f,1.7640f,6.8150f,-5.6340f,0.0166f,6.8150f,-5.7240f,2.1880f,2.8540f,-5.7790f,0.0166f,2.8540f,-5.8770f,2.6400f,-0.9086f,-7.3890f,0.0166f,-0.9086f,-7.6050f,0.3370f,-0.2691f,-1.0130f,0.0166f,-0.2691f,-1.0800f,1.8060f,10.9800f,-2.6220f,2.9630f,9.4460f,-3.8600f,3.9070f,6.8150f,-4.5270f,4.1700f,2.8540f,-4.6090f,4.7810f,-0.9086f,-5.6340f,0.6963f,-0.2691f,-0.7539f,5.0770f,6.8150f,-2.0440f,5.1530f,2.8540f,-2.2440f,6.0340f,-0.9086f,-2.6560f,1.0610f,-0.2691f,-0.3770f,6.1580f,-0.9086f,-0.7305f,1.1690f,-0.2691f,0.2302f,4.0610f,1.7420f,0.1251f,0.0166f,2.9290f,5.4070f,1.7280f,1.9850f,5.9910f,1.2190f,3.0700f,5.2910f,1.5230f,1.2400f,6.0240f,1.5060f,4.8910f,5.4460f,2.8130f,1.9390f,5.6920f,2.9940f,3.0470f,4.8720f,2.2360f,1.0420f,5.7470f,3.0750f,4.9570f,5.1400f,3.6530f,1.8160f,4.6470f,2.8310f,0.8449f,4.9990f,2.9890f,6.1710f,5.4060f,0.8003f,0.7396f,5.8030f,1.2670f,0.2290f,5.3050f,1.5680f,-0.1326f,4.6930f,0.0166f,0.5157f,5.8030f,0.0166f,-0.1207f,5.5790f,0.0166f,-0.8641f,5.1430f,4.0500f,1.8200f,2.9050f,3.0990f,0.7520f,3.0120f,1.7430f,-0.1026f,3.5540f,0.0166f,-0.7393f,3.9940f,3.0990f,0.8508f,1.2730f,1.2220f,0.0724f,1.9170f,0.0166f,-0.3447f,1.9850f,3.0990f,0.8479f,0.3903f,0.5884f,-0.1912f,0.5953f,0.0166f,-0.5266f,0.6840f,-0.6968f,2.0160f,6.1100f,-1.8880f,6.1930f,5.7580f,-2.6620f,8.1510f,5.2080f,-2.2670f,11.2400f,3.7360f,-5.1310f,9.4070f,3.7790f,-4.2730f,10.7900f,3.0330f,-3.7870f,6.1320f,4.7630f,-5.8730f,6.6260f,3.9370f,-3.8970f,4.8430f,4.1250f,-5.9620f,4.5990f,3.3610f,-3.7410f,3.0040f,4.2120f,-5.7050f,3.0550f,3.2080f,-3.6200f,1.8160f,4.6470f,-5.0420f,1.7160f,3.5730f,-3.4290f,0.4292f,5.2560f,-3.7870f,0.4456f,4.3030f,-5.7850f,9.4070f,1.6390f,-4.3930f,11.1700f,1.7030f,-6.6600f,6.8530f,1.6030f,-6.6570f,4.5990f,1.3700f,-6.2920f,3.0550f,1.7550f,-5.1030f,1.7160f,2.1060f,-4.7220f,8.9510f,-1.0640f,-3.2610f,10.6900f,-1.1620f,-5.5910f,6.6370f,0.1137f,-5.0090f,4.5990f,0.3258f,-4.8110f,3.0550f,0.5342f,-4.0280f,1.7200f,1.2330f,-3.4970f,0.4830f,3.3080f,-2.2730f,12.1500f,1.9220f,-1.2190f,11.3500f,-0.9964f,-5.3350f,2.8230f,-0.2563f,-5.4730f,4.8310f,-0.3854f,-5.6760f,3.0840f,-1.0390f,-5.9530f,4.5710f,-1.1650f,-5.1310f,4.8310f,-0.3854f,-4.4690f,2.8390f,-0.2487f,-5.2520f,3.0810f,-1.0440f,-5.4770f,4.5710f,-1.1650f,-0.8522f,10.9800f,-2.8280f,-1.3670f,9.4260f,-4.5960f,-1.7310f,6.8150f,-5.6340f,-2.1550f,2.8540f,-5.7790f,-2.6070f,-0.9086f,-7.3890f,-0.3039f,-0.2691f,-1.0130f,-1.7730f,10.9800f,-2.6220f,-2.9290f,9.4460f,-3.8600f,-3.8730f,6.8150f,-4.5270f,-4.1370f,2.8540f,-4.6090f,-4.7480f,-0.9086f,-5.6340f,-0.6632f,-0.2691f,-0.7539f,-5.0440f,6.8150f,-2.0440f,-5.1200f,2.8540f,-2.2440f,-6.0010f,-0.9086f,-2.6560f,-1.0280f,-0.2691f,-0.3770f,-6.1240f,-0.9086f,-0.7305f,-1.1360f,-0.2691f,0.2302f,-4.0280f,1.7420f,0.1251f,-1.6950f,1.9850f,5.9910f,-1.1860f,3.0700f,5.2910f,-1.4900f,1.2400f,6.0240f,-1.4730f,4.8910f,5.4460f,-2.7790f,1.9390f,5.6920f,-2.9610f,3.0470f,4.8720f,-2.2030f,1.0420f,5.7470f,-3.0420f,4.9570f,5.1400f,-3.6200f,1.8160f,4.6470f,-2.7980f,0.8449f,4.9990f,-2.9560f,6.1710f,5.4060f,-0.7672f,0.7396f,5.8030f,-1.2340f,0.2290f,5.3050f,-1.5350f,-0.1326f,4.6930f,-4.0170f,1.8200f,2.9050f,-3.0660f,0.7520f,3.0120f,-1.7100f,-0.1026f,3.5540f,-3.0660f,0.8508f,1.2730f,-1.1890f,0.0724f,1.9170f,-3.0660f,0.8479f,0.3903f,-0.5553f,-0.1912f,0.5953f,0.0166f,4.8130f,6.0190f,2.2130f,7.2190f,5.7300f,-1.6640f,6.1750f,5.9560f,0.0252f,6.3220f,5.7580f,0.0251f,9.0220f,5.2080f,0.0177f,7.4550f,6.8600f,1.6840f,6.1750f,5.9560f,-2.1930f,7.2190f,5.7300f,0.0209f,4.4870f,5.4540f,1.5060f,4.8910f,5.4460f,1.5060f,4.8910f,5.4460f,1.9210f,6.1930f,5.7580f,-1.8880f,6.1930f,5.7580f,-1.4730f,4.8910f,5.4460f,0.0209f,4.4870f,5.4540f,0.0252f,6.3220f,5.7580f,0.0252f,6.3220f,5.7580f});
  }
}
protected class MFVec2f118 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2306f,0.7219f,0.2306f,0.7038f,0.2614f,0.7219f,0.3044f,0.7206f,0.2825f,0.7668f,0.2306f,0.7608f,0.2956f,0.6889f,0.2948f,0.8444f,0.2308f,0.8272f,0.3511f,0.7186f,0.3589f,0.7658f,0.3263f,0.6804f,0.3624f,0.8472f,0.3873f,0.7134f,0.3925f,0.7640f,0.3519f,0.6721f,0.3993f,0.8423f,0.3127f,0.8998f,0.3587f,0.8989f,0.3945f,0.8972f,0.2845f,0.6612f,0.2644f,0.6676f,0.2975f,0.6458f,0.2306f,0.6580f,0.2306f,0.6463f,0.2306f,0.6147f,0.3634f,0.6681f,0.4044f,0.7136f,0.3050f,0.6471f,0.2306f,0.6200f,0.3634f,0.6723f,0.4049f,0.7093f,0.2826f,0.6545f,0.2306f,0.6368f,0.4277f,0.7563f,0.4328f,0.8418f,0.4157f,0.8319f,0.4084f,0.7662f,0.4403f,0.7674f,0.4505f,0.8307f,0.4202f,0.8418f,0.3958f,0.7570f,0.4247f,0.7673f,0.4329f,0.8307f,0.4371f,0.9187f,0.3634f,0.6722f,0.4049f,0.7103f,0.2553f,0.6433f,0.2306f,0.6290f,0.2803f,0.6400f,0.3461f,0.9832f,0.1999f,0.7219f,0.1569f,0.7206f,0.1788f,0.7668f,0.1657f,0.6889f,0.1665f,0.8444f,0.1102f,0.7186f,0.1024f,0.7658f,0.1350f,0.6804f,0.0989f,0.8472f,0.0740f,0.7134f,0.0688f,0.7640f,0.1094f,0.6721f,0.0620f,0.8423f,0.1486f,0.8998f,0.1026f,0.8989f,0.0668f,0.8972f,0.1768f,0.6612f,0.1969f,0.6676f,0.1638f,0.6458f,0.0979f,0.6681f,0.0569f,0.7136f,0.1563f,0.6471f,0.0979f,0.6723f,0.0564f,0.7093f,0.1787f,0.6545f,0.0336f,0.7563f,0.0456f,0.8319f,0.0285f,0.8418f,0.0529f,0.7662f,0.0210f,0.7674f,0.0109f,0.8307f,0.0411f,0.8418f,0.0655f,0.7570f,0.0366f,0.7673f,0.0283f,0.8307f,0.0242f,0.9187f,0.0979f,0.6722f,0.0564f,0.7103f,0.2060f,0.6433f,0.1810f,0.6400f,0.1152f,0.9832f,0.2310f,0.9053f,0.2310f,1.0200f,0.5118f,0.6048f,0.5650f,0.6951f,0.5291f,0.7326f,0.6281f,0.9347f,0.6515f,0.9447f,0.6279f,0.9576f,0.5936f,0.9053f,0.6287f,0.8085f,0.5933f,0.8105f,0.7035f,0.7808f,0.6735f,0.7785f,0.6727f,0.7204f,0.6961f,0.7287f,0.6747f,0.6734f,0.6972f,0.6739f,0.6706f,0.6045f,0.7158f,0.6049f,0.7002f,0.9347f,0.6963f,0.9556f,0.7074f,0.8151f,0.7314f,0.7774f,0.7331f,0.7218f,0.7466f,0.6739f,0.7913f,0.9215f,0.7929f,0.9417f,0.7576f,0.8089f,0.7640f,0.7714f,0.7698f,0.7218f,0.7675f,0.6740f,0.7631f,0.6060f,0.6890f,0.9839f,0.6777f,0.9757f,0.6196f,0.9641f,0.7873f,0.9608f,0.9124f,0.9353f,0.8505f,0.9502f,0.9103f,0.9352f,0.8490f,0.9502f,0.9456f,0.8068f,0.8961f,0.7182f,0.9432f,0.7178f,0.8875f,0.8087f,0.9136f,0.6076f,0.9472f,0.6076f,0.8270f,0.6244f,0.8293f,0.6244f,0.8421f,0.9502f,0.8855f,0.9358f,0.8749f,0.8121f,0.8851f,0.7175f,0.8861f,0.6085f,0.8183f,0.6244f,0.8422f,0.8140f,0.8574f,0.7152f,0.8432f,0.6076f,0.8056f,0.6244f,0.8187f,0.7234f,0.8175f,0.6059f,0.7937f,0.6244f,0.7965f,0.7739f,0.8228f,0.7664f,0.7886f,0.9589f,0.8004f,0.7165f,0.7972f,0.6823f,0.7883f,0.6565f,0.6747f,0.6734f,0.7163f,0.6616f,0.6281f,0.9347f,0.6279f,0.9576f,0.6515f,0.9447f,0.5936f,0.9053f,0.6287f,0.8085f,0.5933f,0.8105f,0.7035f,0.7808f,0.6735f,0.7785f,0.6727f,0.7204f,0.6961f,0.7287f,0.6747f,0.6734f,0.6972f,0.6739f,0.6706f,0.6045f,0.7158f,0.6049f,0.7002f,0.9347f,0.6963f,0.9556f,0.7074f,0.8151f,0.7314f,0.7774f,0.7331f,0.7218f,0.7466f,0.6739f,0.7913f,0.9215f,0.7929f,0.9417f,0.7576f,0.8089f,0.7640f,0.7714f,0.7698f,0.7218f,0.7675f,0.6740f,0.7631f,0.6060f,0.6890f,0.9839f,0.7873f,0.9608f,0.9103f,0.9352f,0.8490f,0.9502f,0.8961f,0.7182f,0.8875f,0.8087f,0.9136f,0.6076f,0.8270f,0.6244f,0.8421f,0.9502f,0.8855f,0.9358f,0.8749f,0.8121f,0.8851f,0.7175f,0.8861f,0.6085f,0.8183f,0.6244f,0.8422f,0.8140f,0.8574f,0.7152f,0.8432f,0.6076f,0.8056f,0.6244f,0.8187f,0.7234f,0.8175f,0.6059f,0.7937f,0.6244f,0.8228f,0.7664f,0.7965f,0.7739f,0.7972f,0.6823f,0.8004f,0.7165f,0.7883f,0.6565f,0.6747f,0.6734f,0.7163f,0.6616f,0.5663f,0.9104f,0.5499f,0.8086f,0.5896f,0.7882f,0.5896f,0.7882f,0.5650f,0.6951f});
  }
}
}
