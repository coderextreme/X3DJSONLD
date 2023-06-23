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
public class JinLOA4Canonical101 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new JinLOA4Canonical101().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/JinLOA4Canonical101.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("JinLOA4.x3d"))
        .addMeta(new meta().setName("creator").setContent("Jin Hoon Lee and Min Joo Lee"))
        .addMeta(new meta().setName("translator").setContent("Chul Hee Jung and Myeong Won Lee"))
        .addMeta(new meta().setName("created").setContent("31 March 2011"))
        .addMeta(new meta().setName("translated").setContent("1 November 2014"))
        .addMeta(new meta().setName("modified").setContent("13 March 2021"))
        .addMeta(new meta().setName("description").setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacter00ReadMe.txt"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharactersIllustrated.pdf"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA4.x3d"))
        .addMeta(new meta().setName("generator").setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"))
        .addMeta(new meta().setName("generator").setContent("Suwon HAnim Converter"))
        .addMeta(new meta().setName("generator").setContent("Gnu Image Manipulation Program, http://www.gimp.org"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("JinLOA4.x3d"))
        .addChild(new NavigationInfo().setSpeed(1.5f))
        .addChild(new HAnimHumanoid().setName("JinLOA4").setDEF("hanim_JinLOA4").setLoa(4).setScale(new float[] {1f,1f,1f}).setVersion("2.0")
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .addValue(new MetadataString().setName("authorName").setValue(new MFString0().getArray()))
            .addValue(new MetadataString().setName("authorEmail").setValue(new MFString1().getArray()))
            .addValue(new MetadataString().setName("creationDate").setValue(new MFString2().getArray()))
            .addValue(new MetadataString().setName("gender").setValue(new MFString3().getArray()))
            .addValue(new MetadataFloat().setName("height").setValue(new MFFloat4().getArray()))
            .addValue(new MetadataString().setName("humanoidVersion").setValue(new MFString5().getArray())))
          .addSkeleton(new HAnimJoint().setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new float[] {-0.3778f,1443.0222f,-10.8044f}).setUlimit(new MFFloat6().getArray()).setLlimit(new MFFloat7().getArray())
            .addChild(new HAnimSegment().setName("sacrum").setDEF("hanim_sacrum")
              .addChild(new Transform().setTranslation(new float[] {-0.3778f,1443.0222f,-10.8044f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                    .setTexture(new ImageTexture().setDEF("JinLOA4TextureAtlas").setUrl(new MFString8().getArray())))
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt329().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3210().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f12().getArray()))))))
            .addChild(new HAnimJoint().setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {-0.3778f,1208.3556f,-10.8044f}).setUlimit(new MFFloat13().getArray()).setLlimit(new MFFloat14().getArray())
              .addChild(new HAnimSegment().setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new Transform().setTranslation(new float[] {-0.3778f,1208.3556f,-10.8044f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3215().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3216().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f18().getArray()))))))
              .addChild(new HAnimJoint().setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {186.6f,1444.3556f,-15.6f}).setUlimit(new MFFloat19().getArray()).setLlimit(new MFFloat20().getArray())
                .addChild(new HAnimSegment().setName("l_thigh").setDEF("hanim_l_thigh")
                  .addChild(new Transform().setTranslation(new float[] {186.6f,1444.3556f,-15.6f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3221().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3222().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f23().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f24().getArray()))))))
                .addChild(new HAnimJoint().setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {182.5556f,619.0222f,-17.7511f}).setUlimit(new MFFloat25().getArray()).setLlimit(new MFFloat26().getArray())
                  .addChild(new HAnimSegment().setName("l_calf").setDEF("hanim_l_calf")
                    .addChild(new Transform().setTranslation(new float[] {182.5556f,619.0222f,-17.7511f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3227().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3228().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f29().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f30().getArray()))))))
                  .addChild(new HAnimJoint().setName("l_talocrural").setDEF("hanim_l_talocrural").setCenter(new float[] {175.0889f,0f,0f}).setUlimit(new MFFloat31().getArray()).setLlimit(new MFFloat32().getArray())
                    .addChild(new HAnimSegment().setName("l_talus").setDEF("hanim_l_talus")
                      .addChild(new Transform().setTranslation(new float[] {175.0889f,0f,0f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3233().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3234().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f35().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f36().getArray()))))))
                    .addChild(new HAnimJoint().setName("l_talocalcaneonavicular").setDEF("hanim_l_talocalcaneonavicular").setCenter(new float[] {154.2889f,-115.6444f,30.2533f}).setUlimit(new MFFloat37().getArray()).setLlimit(new MFFloat38().getArray())
                      .addChild(new HAnimSegment().setName("l_navicular").setDEF("hanim_l_navicular")
                        .addChild(new Transform().setTranslation(new float[] {154.2889f,-115.6444f,30.2533f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3239().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3240().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f42().getArray()))))))
                      .addChild(new HAnimJoint().setName("l_cuneonavicular_1").setDEF("hanim_l_cuneonavicular_1").setCenter(new float[] {132.6889f,-125.1111f,56.9733f}).setUlimit(new MFFloat43().getArray()).setLlimit(new MFFloat44().getArray())
                        .addChild(new HAnimSegment().setName("l_cuneiform_1").setDEF("hanim_l_cuneiform_1")
                          .addChild(new Transform().setTranslation(new float[] {132.6889f,-125.1111f,56.9733f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3245().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3246().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f47().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f48().getArray()))))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_1").setDEF("hanim_l_tarsometatarsal_1").setCenter(new float[] {127.2667f,-142.6222f,107.9333f}).setUlimit(new MFFloat49().getArray()).setLlimit(new MFFloat50().getArray())
                          .addChild(new HAnimSegment().setName("l_metatarsal_1").setDEF("hanim_l_metatarsal_1")
                            .addChild(new Transform().setTranslation(new float[] {127.2667f,-142.6222f,107.9333f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3251().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3252().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f54().getArray()))))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_1").setDEF("hanim_l_metatarsophalangeal_1").setCenter(new float[] {122.3333f,-160.04f,205.5778f}).setUlimit(new MFFloat55().getArray()).setLlimit(new MFFloat56().getArray())
                            .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_1").setDEF("hanim_l_tarsal_proximal_phalanx_1")
                              .addChild(new Transform().setTranslation(new float[] {122.3333f,-160.04f,205.5778f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3257().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3258().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f60().getArray()))))))
                            .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_1").setDEF("hanim_l_tarsal_distal_interphalangeal_1").setCenter(new float[] {122.3333f,-164.56f,248.4222f}).setUlimit(new MFFloat61().getArray()).setLlimit(new MFFloat62().getArray())
                              .addChild(new HAnimSegment().setName("l_tarsal_distal_phalanx_1").setDEF("hanim_l_tarsal_distal_phalanx_1")
                                .addChild(new Transform().setTranslation(new float[] {122.3333f,-164.56f,248.4222f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3263().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3264().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f65().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f66().getArray()))))))))))
                      .addChild(new HAnimJoint().setName("l_cuneonavicular_2").setDEF("hanim_l_cuneonavicular_2").setCenter(new float[] {160.4667f,-122.3111f,62.9689f}).setUlimit(new MFFloat67().getArray()).setLlimit(new MFFloat68().getArray())
                        .addChild(new HAnimSegment().setName("l_cuneiform_2").setDEF("hanim_l_cuneiform_2")
                          .addChild(new Transform().setTranslation(new float[] {160.4667f,-122.3111f,62.9689f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3269().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3270().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f72().getArray()))))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_2").setDEF("hanim_l_tarsometatarsal_2").setCenter(new float[] {158.0222f,-136.9778f,101.7556f}).setUlimit(new MFFloat73().getArray()).setLlimit(new MFFloat74().getArray())
                          .addChild(new HAnimSegment().setName("l_metatarsal_2").setDEF("hanim_l_metatarsal_2")
                            .addChild(new Transform().setTranslation(new float[] {158.0222f,-136.9778f,101.7556f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3275().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3276().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f78().getArray()))))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_2").setDEF("hanim_l_metatarsophalangeal_2").setCenter(new float[] {162.6444f,-158.9511f,213.8889f}).setUlimit(new MFFloat79().getArray()).setLlimit(new MFFloat80().getArray())
                            .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_2").setDEF("hanim_l_tarsal_proximal_phalanx_2")
                              .addChild(new Transform().setTranslation(new float[] {162.6444f,-158.9511f,213.8889f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3281().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3282().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f83().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f84().getArray()))))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_2").setDEF("hanim_l_tarsal_proximal_interphalangeal_2").setCenter(new float[] {166.1556f,-163.5511f,245.8444f}).setUlimit(new MFFloat85().getArray()).setLlimit(new MFFloat86().getArray())
                              .addChild(new HAnimSegment().setName("l_tarsal_middle_phalanx_2").setDEF("hanim_l_tarsal_middle_phalanx_2")
                                .addChild(new Transform().setTranslation(new float[] {166.1556f,-163.5511f,245.8444f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3287().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3288().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f89().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f90().getArray()))))))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setCenter(new float[] {166.1556f,-169.1244f,264.4667f}).setUlimit(new MFFloat91().getArray()).setLlimit(new MFFloat92().getArray())
                                .addChild(new HAnimSegment().setName("l_tarsal_distal_phalanx_2").setDEF("hanim_l_tarsal_distal_phalanx_2")
                                  .addChild(new Transform().setTranslation(new float[] {166.1556f,-169.1244f,264.4667f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3293().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3294().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f95().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f96().getArray())))))))))))
                      .addChild(new HAnimJoint().setName("l_cuneonavicular_3").setDEF("hanim_l_cuneonavicular_3").setCenter(new float[] {183.2667f,-122.5778f,59.7911f}).setUlimit(new MFFloat97().getArray()).setLlimit(new MFFloat98().getArray())
                        .addChild(new HAnimSegment().setName("l_cuneiform_3").setDEF("hanim_l_cuneiform_3")
                          .addChild(new Transform().setTranslation(new float[] {183.2667f,-122.5778f,59.7911f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3299().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32100().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f101().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f102().getArray()))))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_3").setDEF("hanim_l_tarsometatarsal_3").setCenter(new float[] {186.4667f,-136.9778f,98.4667f}).setUlimit(new MFFloat103().getArray()).setLlimit(new MFFloat104().getArray())
                          .addChild(new HAnimSegment().setName("l_metatarsal_3").setDEF("hanim_l_metatarsal_3")
                            .addChild(new Transform().setTranslation(new float[] {186.4667f,-136.9778f,98.4667f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32105().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32106().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f107().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f108().getArray()))))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_3").setDEF("hanim_l_metatarsophalangeal_3").setCenter(new float[] {190.2f,-158.7911f,209.1333f}).setUlimit(new MFFloat109().getArray()).setLlimit(new MFFloat110().getArray())
                            .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_3").setDEF("hanim_l_tarsal_proximal_phalanx_3")
                              .addChild(new Transform().setTranslation(new float[] {190.2f,-158.7911f,209.1333f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32111().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32112().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f113().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f114().getArray()))))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_3").setDEF("hanim_l_tarsal_proximal_interphalangeal_3").setCenter(new float[] {194.9111f,-164.9822f,238.8667f}).setUlimit(new MFFloat115().getArray()).setLlimit(new MFFloat116().getArray())
                              .addChild(new HAnimSegment().setName("l_tarsal_middle_phalanx_3").setDEF("hanim_l_tarsal_middle_phalanx_3")
                                .addChild(new Transform().setTranslation(new float[] {194.9111f,-164.9822f,238.8667f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32117().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32118().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f119().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f120().getArray()))))))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_3").setDEF("hanim_l_tarsal_distal_interphalangeal_3").setCenter(new float[] {197.9778f,-169.1244f,257.0889f}).setUlimit(new MFFloat121().getArray()).setLlimit(new MFFloat122().getArray())
                                .addChild(new HAnimSegment().setName("l_tarsal_distal_phalanx_3").setDEF("hanim_l_tarsal_distal_phalanx_3")
                                  .addChild(new Transform().setTranslation(new float[] {197.9778f,-169.1244f,257.0889f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32123().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32124().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f125().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f126().getArray()))))))))))))
                    .addChild(new HAnimJoint().setName("l_calcaneocuboid").setDEF("hanim_l_calcaneocuboid").setCenter(new float[] {175.6222f,-74f,-30.6444f}).setUlimit(new MFFloat127().getArray()).setLlimit(new MFFloat128().getArray())
                      .addChild(new HAnimSegment().setName("l_calcaneus").setDEF("hanim_l_calcaneus")
                        .addChild(new Transform().setTranslation(new float[] {175.6222f,-74f,-30.6444f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32129().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32130().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f131().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f132().getArray()))))))
                      .addChild(new HAnimJoint().setName("l_transversetarsal").setDEF("hanim_l_transversetarsal").setCenter(new float[] {218.1556f,-118.8444f,24.7711f}).setUlimit(new MFFloat133().getArray()).setLlimit(new MFFloat134().getArray())
                        .addChild(new HAnimSegment().setName("l_cuboid").setDEF("hanim_l_cuboid")
                          .addChild(new Transform().setTranslation(new float[] {218.1556f,-118.8444f,24.7711f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32135().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32136().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f137().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f138().getArray()))))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_4").setDEF("hanim_l_tarsometatarsal_4").setCenter(new float[] {209.9778f,-140.0444f,96.5556f}).setUlimit(new MFFloat139().getArray()).setLlimit(new MFFloat140().getArray())
                          .addChild(new HAnimSegment().setName("l_metatarsal_4").setDEF("hanim_l_metatarsal_4")
                            .addChild(new Transform().setTranslation(new float[] {209.9778f,-140.0444f,96.5556f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32141().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32142().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f143().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f144().getArray()))))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_4").setDEF("hanim_l_metatarsophalangeal_4").setCenter(new float[] {216.6444f,-160.1822f,200.7333f}).setUlimit(new MFFloat145().getArray()).setLlimit(new MFFloat146().getArray())
                            .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_4").setDEF("hanim_l_tarsal_proximal_phalanx_4")
                              .addChild(new Transform().setTranslation(new float[] {216.6444f,-160.1822f,200.7333f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32147().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32148().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f149().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f150().getArray()))))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_4").setDEF("hanim_l_tarsal_proximal_interphalangeal_4").setCenter(new float[] {225.1333f,-164.3467f,230.6444f}).setUlimit(new MFFloat151().getArray()).setLlimit(new MFFloat152().getArray())
                              .addChild(new HAnimSegment().setName("l_tarsal_middle_phalanx_4").setDEF("hanim_l_tarsal_middle_phalanx_4")
                                .addChild(new Transform().setTranslation(new float[] {225.1333f,-164.3467f,230.6444f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32153().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32154().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f155().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f156().getArray()))))))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_4").setDEF("hanim_l_tarsal_distal_interphalangeal_4").setCenter(new float[] {228.1111f,-170.0267f,245.2222f}).setUlimit(new MFFloat157().getArray()).setLlimit(new MFFloat158().getArray())
                                .addChild(new HAnimSegment().setName("l_tarsal_distal_phalanx_4").setDEF("hanim_l_tarsal_distal_phalanx_4")
                                  .addChild(new Transform().setTranslation(new float[] {228.1111f,-170.0267f,245.2222f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32159().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32160().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f161().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f162().getArray()))))))))))
                        .addChild(new HAnimJoint().setName("l_tarsometatarsal_5").setDEF("hanim_l_tarsometatarsal_5").setCenter(new float[] {238.2889f,-147.16f,89.2667f}).setUlimit(new MFFloat163().getArray()).setLlimit(new MFFloat164().getArray())
                          .addChild(new HAnimSegment().setName("l_metatarsal_5").setDEF("hanim_l_metatarsal_5")
                            .addChild(new Transform().setTranslation(new float[] {238.2889f,-147.16f,89.2667f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32165().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32166().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f167().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f168().getArray()))))))
                          .addChild(new HAnimJoint().setName("l_metatarsophalangeal_5").setDEF("hanim_l_metatarsophalangeal_5").setCenter(new float[] {244.6889f,-161.5289f,191.6222f}).setUlimit(new MFFloat169().getArray()).setLlimit(new MFFloat170().getArray())
                            .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_5").setDEF("hanim_l_tarsal_proximal_phalanx_5")
                              .addChild(new Transform().setTranslation(new float[] {244.6889f,-161.5289f,191.6222f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32171().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32172().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f173().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f174().getArray()))))))
                            .addChild(new HAnimJoint().setName("l_tarsal_proximal_interphalangeal_5").setDEF("hanim_l_tarsal_proximal_interphalangeal_5").setCenter(new float[] {249.2667f,-167.0889f,206.6f}).setUlimit(new MFFloat175().getArray()).setLlimit(new MFFloat176().getArray())
                              .addChild(new HAnimSegment().setName("l_tarsal_middle_phalanx_5").setDEF("hanim_l_tarsal_middle_phalanx_5")
                                .addChild(new Transform().setTranslation(new float[] {249.2667f,-167.0889f,206.6f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32177().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32178().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f179().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f180().getArray()))))))
                              .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_5").setDEF("hanim_l_tarsal_distal_interphalangeal_5").setCenter(new float[] {251.0444f,-171.6178f,221.8889f}).setUlimit(new MFFloat181().getArray()).setLlimit(new MFFloat182().getArray())
                                .addChild(new HAnimSegment().setName("l_tarsal_distal_phalanx_5").setDEF("hanim_l_tarsal_distal_phalanx_5")
                                  .addChild(new Transform().setTranslation(new float[] {251.0444f,-171.6178f,221.8889f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32183().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32184().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f185().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f186().getArray())))))))))))))))
              .addChild(new HAnimJoint().setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-187.3556f,1444.3556f,-15.6f}).setUlimit(new MFFloat187().getArray()).setLlimit(new MFFloat188().getArray())
                .addChild(new HAnimSegment().setName("r_thigh").setDEF("hanim_r_thigh")
                  .addChild(new Transform().setTranslation(new float[] {-187.3556f,1444.3556f,-15.6f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32189().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32190().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f191().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f192().getArray()))))))
                .addChild(new HAnimJoint().setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-183.3111f,619.0222f,-17.7511f}).setUlimit(new MFFloat193().getArray()).setLlimit(new MFFloat194().getArray())
                  .addChild(new HAnimSegment().setName("r_calf").setDEF("hanim_r_calf")
                    .addChild(new Transform().setTranslation(new float[] {-183.3111f,619.0222f,-17.7511f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32195().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32196().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f197().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f198().getArray()))))))
                  .addChild(new HAnimJoint().setName("r_talocrural").setDEF("hanim_r_talocrural").setCenter(new float[] {-175.0889f,0f,0f}).setUlimit(new MFFloat199().getArray()).setLlimit(new MFFloat200().getArray())
                    .addChild(new HAnimSegment().setName("r_talus").setDEF("hanim_r_talus")
                      .addChild(new Transform().setTranslation(new float[] {-175.0889f,0f,0f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32201().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32202().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f203().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f204().getArray()))))))
                    .addChild(new HAnimJoint().setName("r_talocalcaneonavicular").setDEF("hanim_r_talocalcaneonavicular").setCenter(new float[] {-154.3333f,-115.6444f,30.2533f}).setUlimit(new MFFloat205().getArray()).setLlimit(new MFFloat206().getArray())
                      .addChild(new HAnimSegment().setName("r_navicular").setDEF("hanim_r_navicular")
                        .addChild(new Transform().setTranslation(new float[] {-154.3333f,-115.6444f,30.2533f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32207().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32208().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f209().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f210().getArray()))))))
                      .addChild(new HAnimJoint().setName("r_cuneonavicular_1").setDEF("hanim_r_cuneonavicular_1").setCenter(new float[] {-132.6889f,-125.1111f,56.9733f}).setUlimit(new MFFloat211().getArray()).setLlimit(new MFFloat212().getArray())
                        .addChild(new HAnimSegment().setName("r_cuneiform_1").setDEF("hanim_r_cuneiform_1")
                          .addChild(new Transform().setTranslation(new float[] {-132.6889f,-125.1111f,56.9733f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32213().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32214().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f215().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f216().getArray()))))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_1").setDEF("hanim_r_tarsometatarsal_1").setCenter(new float[] {-127.3111f,-142.6222f,107.9333f}).setUlimit(new MFFloat217().getArray()).setLlimit(new MFFloat218().getArray())
                          .addChild(new HAnimSegment().setName("r_metatarsal_1").setDEF("hanim_r_metatarsal_1")
                            .addChild(new Transform().setTranslation(new float[] {-127.3111f,-142.6222f,107.9333f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32219().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32220().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f221().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f222().getArray()))))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_1").setDEF("hanim_r_metatarsophalangeal_1").setCenter(new float[] {-122.3778f,-160.04f,205.5778f}).setUlimit(new MFFloat223().getArray()).setLlimit(new MFFloat224().getArray())
                            .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_1").setDEF("hanim_r_tarsal_proximal_phalanx_1")
                              .addChild(new Transform().setTranslation(new float[] {-122.3778f,-160.04f,205.5778f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32225().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32226().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f227().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f228().getArray()))))))
                            .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_1").setDEF("hanim_r_tarsal_distal_interphalangeal_1").setCenter(new float[] {-122.3333f,-164.56f,248.4222f}).setUlimit(new MFFloat229().getArray()).setLlimit(new MFFloat230().getArray())
                              .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_1").setDEF("hanim_r_tarsal_distal_phalanx_1")
                                .addChild(new Transform().setTranslation(new float[] {-122.3333f,-164.56f,248.4222f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32231().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32232().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f233().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f234().getArray()))))))))))
                      .addChild(new HAnimJoint().setName("r_cuneonavicular_2").setDEF("hanim_r_cuneonavicular_2").setCenter(new float[] {-160.4667f,-122.3111f,62.9689f}).setUlimit(new MFFloat235().getArray()).setLlimit(new MFFloat236().getArray())
                        .addChild(new HAnimSegment().setName("r_cuneiform_2").setDEF("hanim_r_cuneiform_2")
                          .addChild(new Transform().setTranslation(new float[] {-160.4667f,-122.3111f,62.9689f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32237().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32238().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f239().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f240().getArray()))))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_2").setDEF("hanim_r_tarsometatarsal_2").setCenter(new float[] {-158.0667f,-136.9778f,101.7556f}).setUlimit(new MFFloat241().getArray()).setLlimit(new MFFloat242().getArray())
                          .addChild(new HAnimSegment().setName("r_metatarsal_2").setDEF("hanim_r_metatarsal_2")
                            .addChild(new Transform().setTranslation(new float[] {-158.0667f,-136.9778f,101.7556f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32243().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32244().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f245().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f246().getArray()))))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new float[] {-162.6444f,-158.9511f,213.8889f}).setUlimit(new MFFloat247().getArray()).setLlimit(new MFFloat248().getArray())
                            .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2")
                              .addChild(new Transform().setTranslation(new float[] {-162.6444f,-158.9511f,213.8889f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32249().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32250().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f251().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f252().getArray()))))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_2").setDEF("hanim_r_tarsal_proximal_interphalangeal_2").setCenter(new float[] {-166.1556f,-163.5511f,245.8444f}).setUlimit(new MFFloat253().getArray()).setLlimit(new MFFloat254().getArray())
                              .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_2").setDEF("hanim_r_tarsal_middle_phalanx_2")
                                .addChild(new Transform().setTranslation(new float[] {-166.1556f,-163.5511f,245.8444f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32255().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32256().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f257().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f258().getArray()))))))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setCenter(new float[] {-166.1556f,-169.1244f,264.4667f}).setUlimit(new MFFloat259().getArray()).setLlimit(new MFFloat260().getArray())
                                .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_2").setDEF("hanim_r_tarsal_distal_phalanx_2")
                                  .addChild(new Transform().setTranslation(new float[] {-166.1556f,-169.1244f,264.4667f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32261().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32262().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f263().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f264().getArray())))))))))))
                      .addChild(new HAnimJoint().setName("r_cuneonavicular_3").setDEF("hanim_r_cuneonavicular_3").setCenter(new float[] {-183.3111f,-122.5778f,59.7911f}).setUlimit(new MFFloat265().getArray()).setLlimit(new MFFloat266().getArray())
                        .addChild(new HAnimSegment().setName("r_cuneiform_3").setDEF("hanim_r_cuneiform_3")
                          .addChild(new Transform().setTranslation(new float[] {-183.3111f,-122.5778f,59.7911f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32267().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32268().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f269().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f270().getArray()))))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_3").setDEF("hanim_r_tarsometatarsal_3").setCenter(new float[] {-186.5111f,-136.9778f,98.4667f}).setUlimit(new MFFloat271().getArray()).setLlimit(new MFFloat272().getArray())
                          .addChild(new HAnimSegment().setName("r_metatarsal_3").setDEF("hanim_r_metatarsal_3")
                            .addChild(new Transform().setTranslation(new float[] {-186.5111f,-136.9778f,98.4667f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32273().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32274().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f275().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f276().getArray()))))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_3").setDEF("hanim_r_metatarsophalangeal_3").setCenter(new float[] {-190.2f,-158.7911f,209.1333f}).setUlimit(new MFFloat277().getArray()).setLlimit(new MFFloat278().getArray())
                            .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_3").setDEF("hanim_r_tarsal_proximal_phalanx_3")
                              .addChild(new Transform().setTranslation(new float[] {-190.2f,-158.7911f,209.1333f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32279().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32280().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f281().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f282().getArray()))))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_3").setDEF("hanim_r_tarsal_proximal_interphalangeal_3").setCenter(new float[] {-194.9556f,-164.9822f,238.8667f}).setUlimit(new MFFloat283().getArray()).setLlimit(new MFFloat284().getArray())
                              .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_3").setDEF("hanim_r_tarsal_middle_phalanx_3")
                                .addChild(new Transform().setTranslation(new float[] {-194.9556f,-164.9822f,238.8667f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32285().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32286().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f287().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f288().getArray()))))))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_3").setDEF("hanim_r_tarsal_distal_interphalangeal_3").setCenter(new float[] {-197.9778f,-169.1244f,257.0889f}).setUlimit(new MFFloat289().getArray()).setLlimit(new MFFloat290().getArray())
                                .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_3").setDEF("hanim_r_tarsal_distal_phalanx_3")
                                  .addChild(new Transform().setTranslation(new float[] {-197.9778f,-169.1244f,257.0889f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32291().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32292().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f293().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f294().getArray()))))))))))))
                    .addChild(new HAnimJoint().setName("r_calcaneocuboid").setDEF("hanim_r_calcaneocuboid").setCenter(new float[] {-175.6222f,-74f,-30.6444f}).setUlimit(new MFFloat295().getArray()).setLlimit(new MFFloat296().getArray())
                      .addChild(new HAnimSegment().setName("r_calcaneus").setDEF("hanim_r_calcaneus")
                        .addChild(new Transform().setTranslation(new float[] {-175.6222f,-74f,-30.6444f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32297().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32298().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f299().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f300().getArray()))))))
                      .addChild(new HAnimJoint().setName("r_transversetarsal").setDEF("hanim_r_transversetarsal").setCenter(new float[] {-218.2f,-118.8444f,24.7711f}).setUlimit(new MFFloat301().getArray()).setLlimit(new MFFloat302().getArray())
                        .addChild(new HAnimSegment().setName("r_cuboid").setDEF("hanim_r_cuboid")
                          .addChild(new Transform().setTranslation(new float[] {-218.2f,-118.8444f,24.7711f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32303().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32304().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f305().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f306().getArray()))))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_4").setDEF("hanim_r_tarsometatarsal_4").setCenter(new float[] {-210.0222f,-140.0444f,96.5556f}).setUlimit(new MFFloat307().getArray()).setLlimit(new MFFloat308().getArray())
                          .addChild(new HAnimSegment().setName("r_metatarsal_4").setDEF("hanim_r_metatarsal_4")
                            .addChild(new Transform().setTranslation(new float[] {-210.0222f,-140.0444f,96.5556f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32309().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32310().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f311().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f312().getArray()))))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_4").setDEF("hanim_r_metatarsophalangeal_4").setCenter(new float[] {-216.6889f,-160.1822f,200.7333f}).setUlimit(new MFFloat313().getArray()).setLlimit(new MFFloat314().getArray())
                            .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_4").setDEF("hanim_r_tarsal_proximal_phalanx_4")
                              .addChild(new Transform().setTranslation(new float[] {-216.6889f,-160.1822f,200.7333f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32315().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32316().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f317().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f318().getArray()))))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_4").setDEF("hanim_r_tarsal_proximal_interphalangeal_4").setCenter(new float[] {-225.1333f,-164.3467f,230.6444f}).setUlimit(new MFFloat319().getArray()).setLlimit(new MFFloat320().getArray())
                              .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_4").setDEF("hanim_r_tarsal_middle_phalanx_4")
                                .addChild(new Transform().setTranslation(new float[] {-225.1333f,-164.3467f,230.6444f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32321().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32322().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f323().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f324().getArray()))))))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_4").setDEF("hanim_r_tarsal_distal_interphalangeal_4").setCenter(new float[] {-228.1556f,-170.0267f,245.2222f}).setUlimit(new MFFloat325().getArray()).setLlimit(new MFFloat326().getArray())
                                .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_4").setDEF("hanim_r_tarsal_distal_phalanx_4")
                                  .addChild(new Transform().setTranslation(new float[] {-228.1556f,-170.0267f,245.2222f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32327().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32328().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f329().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f330().getArray()))))))))))
                        .addChild(new HAnimJoint().setName("r_tarsometatarsal_5").setDEF("hanim_r_tarsometatarsal_5").setCenter(new float[] {-238.2889f,-147.16f,89.2667f}).setUlimit(new MFFloat331().getArray()).setLlimit(new MFFloat332().getArray())
                          .addChild(new HAnimSegment().setName("r_metatarsal_5").setDEF("hanim_r_metatarsal_5")
                            .addChild(new Transform().setTranslation(new float[] {-238.2889f,-147.16f,89.2667f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32333().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32334().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f335().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f336().getArray()))))))
                          .addChild(new HAnimJoint().setName("r_metatarsophalangeal_5").setDEF("hanim_r_metatarsophalangeal_5").setCenter(new float[] {-244.6889f,-161.5289f,191.6222f}).setUlimit(new MFFloat337().getArray()).setLlimit(new MFFloat338().getArray())
                            .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_5").setDEF("hanim_r_tarsal_proximal_phalanx_5")
                              .addChild(new Transform().setTranslation(new float[] {-244.6889f,-161.5289f,191.6222f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32339().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32340().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f341().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f342().getArray()))))))
                            .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_5").setDEF("hanim_r_tarsal_proximal_interphalangeal_5").setCenter(new float[] {-249.2667f,-167.0889f,206.6f}).setUlimit(new MFFloat343().getArray()).setLlimit(new MFFloat344().getArray())
                              .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_5").setDEF("hanim_r_tarsal_middle_phalanx_5")
                                .addChild(new Transform().setTranslation(new float[] {-249.2667f,-167.0889f,206.6f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32345().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32346().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f347().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f348().getArray()))))))
                              .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_5").setDEF("hanim_r_tarsal_distal_interphalangeal_5").setCenter(new float[] {-251.0889f,-171.6178f,221.8889f}).setUlimit(new MFFloat349().getArray()).setLlimit(new MFFloat350().getArray())
                                .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_5").setDEF("hanim_r_tarsal_distal_phalanx_5")
                                  .addChild(new Transform().setTranslation(new float[] {-251.0889f,-171.6178f,221.8889f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32351().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32352().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f353().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f354().getArray())))))))))))))))
              .addChild(new HAnimJoint().setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {-0.3778f,1639.4667f,-6.5422f}).setUlimit(new MFFloat355().getArray()).setLlimit(new MFFloat356().getArray())
                .addChild(new HAnimSegment().setName("l5").setDEF("hanim_l5")
                  .addChild(new Transform().setTranslation(new float[] {-0.3778f,1639.4667f,-6.5422f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32357().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32358().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f359().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f360().getArray()))))))
                .addChild(new HAnimJoint().setName("vl4").setDEF("hanim_vl4").setCenter(new float[] {-0.3778f,1687.4666f,-6.5422f}).setUlimit(new MFFloat361().getArray()).setLlimit(new MFFloat362().getArray())
                  .addChild(new HAnimSegment().setName("l4").setDEF("hanim_l4")
                    .addChild(new Transform().setTranslation(new float[] {-0.3778f,1687.4666f,-6.5422f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32363().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32364().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f365().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f366().getArray()))))))
                  .addChild(new HAnimJoint().setName("vl3").setDEF("hanim_vl3").setCenter(new float[] {-0.3778f,1719.4667f,-6.5422f}).setUlimit(new MFFloat367().getArray()).setLlimit(new MFFloat368().getArray())
                    .addChild(new HAnimSegment().setName("l3").setDEF("hanim_l3")
                      .addChild(new Transform().setTranslation(new float[] {-0.3778f,1719.4667f,-6.5422f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32369().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32370().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f371().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f372().getArray()))))))
                    .addChild(new HAnimJoint().setName("vl2").setDEF("hanim_vl2").setCenter(new float[] {-0.3778f,1751.9111f,-6.5422f}).setUlimit(new MFFloat373().getArray()).setLlimit(new MFFloat374().getArray())
                      .addChild(new HAnimSegment().setName("l2").setDEF("hanim_l2")
                        .addChild(new Transform().setTranslation(new float[] {-0.3778f,1751.9111f,-6.5422f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32375().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32376().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f377().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f378().getArray()))))))
                      .addChild(new HAnimJoint().setName("vl1").setDEF("hanim_vl1").setCenter(new float[] {-0.3778f,1786.1333f,-6.5422f}).setUlimit(new MFFloat379().getArray()).setLlimit(new MFFloat380().getArray())
                        .addChild(new HAnimSegment().setName("l1").setDEF("hanim_l1")
                          .addChild(new Transform().setTranslation(new float[] {-0.3778f,1786.1333f,-6.5422f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32381().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32382().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f383().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f384().getArray()))))))
                        .addChild(new HAnimJoint().setName("vt12").setDEF("hanim_vt12").setCenter(new float[] {-0.3778f,1832.3556f,-6.5422f}).setUlimit(new MFFloat385().getArray()).setLlimit(new MFFloat386().getArray())
                          .addChild(new HAnimSegment().setName("t12").setDEF("hanim_t12")
                            .addChild(new Transform().setTranslation(new float[] {-0.3778f,1832.3556f,-6.5422f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32387().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32388().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f389().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f390().getArray()))))))
                          .addChild(new HAnimJoint().setName("vt11").setDEF("hanim_vt11").setCenter(new float[] {-0.3778f,1879.0222f,-6.5422f}).setUlimit(new MFFloat391().getArray()).setLlimit(new MFFloat392().getArray())
                            .addChild(new HAnimSegment().setName("t11").setDEF("hanim_t11")
                              .addChild(new Transform().setTranslation(new float[] {-0.3778f,1879.0222f,-6.5422f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32393().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32394().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f395().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f396().getArray()))))))
                            .addChild(new HAnimJoint().setName("vt10").setDEF("hanim_vt10").setCenter(new float[] {-0.3778f,1912.8f,-6.5867f}).setUlimit(new MFFloat397().getArray()).setLlimit(new MFFloat398().getArray())
                              .addChild(new HAnimSegment().setName("t10").setDEF("hanim_t10")
                                .addChild(new Transform().setTranslation(new float[] {-0.3778f,1912.8f,-6.5867f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32399().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32400().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f401().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f402().getArray()))))))
                              .addChild(new HAnimJoint().setName("vt9").setDEF("hanim_vt9").setCenter(new float[] {-0.3778f,1941.6889f,-6.5422f}).setUlimit(new MFFloat403().getArray()).setLlimit(new MFFloat404().getArray())
                                .addChild(new HAnimSegment().setName("t9").setDEF("hanim_t9")
                                  .addChild(new Transform().setTranslation(new float[] {-0.3778f,1941.6889f,-6.5422f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32405().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32406().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f407().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f408().getArray()))))))
                                .addChild(new HAnimJoint().setName("vt8").setDEF("hanim_vt8").setCenter(new float[] {-0.3778f,1970.5779f,-6.5422f}).setUlimit(new MFFloat409().getArray()).setLlimit(new MFFloat410().getArray())
                                  .addChild(new HAnimSegment().setName("t8").setDEF("hanim_t8")
                                    .addChild(new Transform().setTranslation(new float[] {-0.3778f,1970.5779f,-6.5422f})
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32411().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32412().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f413().getArray()))
                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f414().getArray()))))))
                                  .addChild(new HAnimJoint().setName("vt7").setDEF("hanim_vt7").setCenter(new float[] {-0.3778f,2001.6888f,-6.5422f}).setUlimit(new MFFloat415().getArray()).setLlimit(new MFFloat416().getArray())
                                    .addChild(new HAnimSegment().setName("t7").setDEF("hanim_t7")
                                      .addChild(new Transform().setTranslation(new float[] {-0.3778f,2001.6888f,-6.5422f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32417().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32418().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f419().getArray()))
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f420().getArray()))))))
                                    .addChild(new HAnimJoint().setName("vt6").setDEF("hanim_vt6").setCenter(new float[] {-0.3778f,2027.0221f,-6.5422f}).setUlimit(new MFFloat421().getArray()).setLlimit(new MFFloat422().getArray())
                                      .addChild(new HAnimSegment().setName("t6").setDEF("hanim_t6")
                                        .addChild(new Transform().setTranslation(new float[] {-0.3778f,2027.0221f,-6.5422f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32423().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32424().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f425().getArray()))
                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f426().getArray()))))))
                                      .addChild(new HAnimJoint().setName("vt5").setDEF("hanim_vt5").setCenter(new float[] {-0.3778f,2057.6889f,-6.5422f}).setUlimit(new MFFloat427().getArray()).setLlimit(new MFFloat428().getArray())
                                        .addChild(new HAnimSegment().setName("t5").setDEF("hanim_t5")
                                          .addChild(new Transform().setTranslation(new float[] {-0.3778f,2057.6889f,-6.5422f})
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32429().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32430().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f431().getArray()))
                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f432().getArray()))))))
                                        .addChild(new HAnimJoint().setName("vt4").setDEF("hanim_vt4").setCenter(new float[] {-0.3778f,2087.9112f,-6.5422f}).setUlimit(new MFFloat433().getArray()).setLlimit(new MFFloat434().getArray())
                                          .addChild(new HAnimSegment().setName("t4").setDEF("hanim_t4")
                                            .addChild(new Transform().setTranslation(new float[] {-0.3778f,2087.9112f,-6.5422f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32435().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32436().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f437().getArray()))
                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f438().getArray()))))))
                                          .addChild(new HAnimJoint().setName("vt3").setDEF("hanim_vt3").setCenter(new float[] {-0.3778f,2124.3556f,-6.5422f}).setUlimit(new MFFloat439().getArray()).setLlimit(new MFFloat440().getArray())
                                            .addChild(new HAnimSegment().setName("t3").setDEF("hanim_t3")
                                              .addChild(new Transform().setTranslation(new float[] {-0.3778f,2124.3556f,-6.5422f})
                                                .addChild(new Shape()
                                                  .setAppearance(new Appearance()
                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32441().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32442().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f443().getArray()))
                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f444().getArray()))))))
                                            .addChild(new HAnimJoint().setName("vt2").setDEF("hanim_vt2").setCenter(new float[] {-0.3778f,2173.2444f,-6.5867f}).setUlimit(new MFFloat445().getArray()).setLlimit(new MFFloat446().getArray())
                                              .addChild(new HAnimSegment().setName("t2").setDEF("hanim_t2")
                                                .addChild(new Transform().setTranslation(new float[] {-0.3778f,2173.2444f,-6.5867f})
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32447().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32448().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f449().getArray()))
                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f450().getArray()))))))
                                              .addChild(new HAnimJoint().setName("vt1").setDEF("hanim_vt1").setCenter(new float[] {-0.3778f,2220.3556f,-6.5422f}).setUlimit(new MFFloat451().getArray()).setLlimit(new MFFloat452().getArray())
                                                .addChild(new HAnimSegment().setName("t1").setDEF("hanim_t1")
                                                  .addChild(new Transform().setTranslation(new float[] {-0.3778f,2220.3556f,-6.5422f})
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32453().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32454().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f455().getArray()))
                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f456().getArray()))))))
                                                .addChild(new HAnimJoint().setName("vc7").setDEF("hanim_vc7").setCenter(new float[] {-0.3778f,2271.4666f,-9.1111f}).setUlimit(new MFFloat457().getArray()).setLlimit(new MFFloat458().getArray())
                                                  .addChild(new HAnimSegment().setName("c7").setDEF("hanim_c7")
                                                    .addChild(new Transform().setTranslation(new float[] {-0.3778f,2271.4666f,-9.1111f})
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32459().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32460().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f461().getArray()))
                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f462().getArray()))))))
                                                  .addChild(new HAnimJoint().setName("vc6").setDEF("hanim_vc6").setCenter(new float[] {-0.3778f,2295.4666f,-9.1111f}).setUlimit(new MFFloat463().getArray()).setLlimit(new MFFloat464().getArray())
                                                    .addChild(new HAnimSegment().setName("c6").setDEF("hanim_c6")
                                                      .addChild(new Transform().setTranslation(new float[] {-0.3778f,2295.4666f,-9.1111f})
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32465().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32466().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f467().getArray()))
                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f468().getArray()))))))
                                                    .addChild(new HAnimJoint().setName("vc5").setDEF("hanim_vc5").setCenter(new float[] {-0.3778f,2319.9111f,-9.1111f}).setUlimit(new MFFloat469().getArray()).setLlimit(new MFFloat470().getArray())
                                                      .addChild(new HAnimSegment().setName("c5").setDEF("hanim_c5")
                                                        .addChild(new Transform().setTranslation(new float[] {-0.3778f,2319.9111f,-9.1111f})
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32471().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32472().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f473().getArray()))
                                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f474().getArray()))))))
                                                      .addChild(new HAnimJoint().setName("vc4").setDEF("hanim_vc4").setCenter(new float[] {-0.3778f,2344.3556f,-9.1111f}).setUlimit(new MFFloat475().getArray()).setLlimit(new MFFloat476().getArray())
                                                        .addChild(new HAnimSegment().setName("c4").setDEF("hanim_c4")
                                                          .addChild(new Transform().setTranslation(new float[] {-0.3778f,2344.3556f,-9.1111f})
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32477().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32478().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f479().getArray()))
                                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f480().getArray()))))))
                                                        .addChild(new HAnimJoint().setName("vc3").setDEF("hanim_vc3").setCenter(new float[] {-0.3778f,2369.6889f,-9.1111f}).setUlimit(new MFFloat481().getArray()).setLlimit(new MFFloat482().getArray())
                                                          .addChild(new HAnimSegment().setName("c3").setDEF("hanim_c3")
                                                            .addChild(new Transform().setTranslation(new float[] {-0.3778f,2369.6889f,-9.1111f})
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32483().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32484().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f485().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f486().getArray()))))))
                                                          .addChild(new HAnimJoint().setName("vc2").setDEF("hanim_vc2").setCenter(new float[] {-0.3778f,2392.8001f,-9.1111f}).setUlimit(new MFFloat487().getArray()).setLlimit(new MFFloat488().getArray())
                                                            .addChild(new HAnimSegment().setName("c2").setDEF("hanim_c2")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.3778f,2392.8001f,-9.1111f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32489().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32490().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f491().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f492().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("vc1").setDEF("hanim_vc1").setCenter(new float[] {-0.3778f,2415.911f,-9.1111f}).setUlimit(new MFFloat493().getArray()).setLlimit(new MFFloat494().getArray())
                                                              .addChild(new HAnimSegment().setName("c1").setDEF("hanim_c1")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.3778f,2415.911f,-9.1111f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32495().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32496().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f497().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f498().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {-0.3778f,2404.3556f,-9.8578f}).setUlimit(new MFFloat499().getArray()).setLlimit(new MFFloat500().getArray())
                                                                .addChild(new HAnimSegment().setName("skull").setDEF("hanim_skull")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.3778f,2404.3556f,-9.8578f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32501().getArray().append(new MFInt32502().getArray()).append(new MFInt32503().getArray())).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32504().getArray().append(new MFInt32505().getArray()).append(new MFInt32506().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f507().getArray().append(new MFVec3f508().getArray())))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f509().getArray().append(new MFVec2f510().getArray())))))))
                                                                .addChild(new HAnimJoint().setName("l_eyelid_joint").setDEF("hanim_l_eyelid_joint").setCenter(new float[] {99.4f,2624.8f,85.7111f}).setUlimit(new MFFloat511().getArray()).setLlimit(new MFFloat512().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_eyelid").setDEF("hanim_l_eyelid")
                                                                    .addChild(new Transform().setTranslation(new float[] {99.4f,2624.8f,85.7111f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32513().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32514().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f515().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f516().getArray())))))))
                                                                .addChild(new HAnimJoint().setName("r_eyelid_joint").setDEF("hanim_r_eyelid_joint").setCenter(new float[] {-100.1556f,2624.8f,85.7111f}).setUlimit(new MFFloat517().getArray()).setLlimit(new MFFloat518().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_eyelid").setDEF("hanim_r_eyelid")
                                                                    .addChild(new Transform().setTranslation(new float[] {-100.1556f,2624.8f,85.7111f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32519().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32520().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f521().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f522().getArray())))))))
                                                                .addChild(new HAnimJoint().setName("l_eyeball_joint").setDEF("hanim_l_eyeball_joint").setCenter(new float[] {94.6889f,2586.5777f,184.6889f}).setUlimit(new MFFloat523().getArray()).setLlimit(new MFFloat524().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_eyeball").setDEF("hanim_l_eyeball")
                                                                    .addChild(new Transform().setTranslation(new float[] {94.6889f,2586.5777f,184.6889f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32525().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32526().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f527().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f528().getArray())))))))
                                                                .addChild(new HAnimJoint().setName("r_eyeball_joint").setDEF("hanim_r_eyeball_joint").setCenter(new float[] {-95.4444f,2586.5777f,184.6889f}).setUlimit(new MFFloat529().getArray()).setLlimit(new MFFloat530().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_eyeball").setDEF("hanim_r_eyeball")
                                                                    .addChild(new Transform().setTranslation(new float[] {-95.4444f,2586.5777f,184.6889f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32531().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32532().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f533().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f534().getArray())))))))
                                                                .addChild(new HAnimJoint().setName("l_eyebrow_joint").setDEF("hanim_l_eyebrow_joint").setCenter(new float[] {42.5822f,2604.3556f,231.8889f}).setUlimit(new MFFloat535().getArray()).setLlimit(new MFFloat536().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_eyebrow").setDEF("hanim_l_eyebrow")
                                                                    .addChild(new Transform().setTranslation(new float[] {42.5822f,2604.3556f,231.8889f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32537().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32538().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f539().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f540().getArray())))))))
                                                                .addChild(new HAnimJoint().setName("r_eyebrow_joint").setDEF("hanim_r_eyebrow_joint").setCenter(new float[] {-43.3378f,2604.3556f,231.8889f}).setUlimit(new MFFloat541().getArray()).setLlimit(new MFFloat542().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_eyebrow").setDEF("hanim_r_eyebrow")
                                                                    .addChild(new Transform().setTranslation(new float[] {-43.3378f,2604.3556f,231.8889f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32543().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32544().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f545().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f546().getArray())))))))
                                                                .addChild(new HAnimJoint().setName("temporomandibular").setDEF("hanim_temporomandibular").setCenter(new float[] {-0.3778f,2404.7999f,51.0222f}).setUlimit(new MFFloat547().getArray()).setLlimit(new MFFloat548().getArray())
                                                                  .addChild(new HAnimSegment().setName("jaw").setDEF("hanim_jaw")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.3778f,2404.7999f,51.0222f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32549().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32550().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f551().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f552().getArray())))))))))))))))
                                                .addChild(new HAnimJoint().setName("l_acromioclavicular").setDEF("hanim_l_acromioclavicular").setCenter(new float[] {75.6222f,2199.0223f,-6.5867f}).setUlimit(new MFFloat553().getArray()).setLlimit(new MFFloat554().getArray())
                                                  .addChild(new HAnimSegment().setName("l_clavicle").setDEF("hanim_l_clavicle")
                                                    .addChild(new Transform().setTranslation(new float[] {75.6222f,2199.0223f,-6.5867f})
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32555().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32556().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f557().getArray()))
                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f558().getArray()))))))
                                                  .addChild(new HAnimJoint().setName("l_sternoclavicular").setDEF("hanim_l_sternoclavicular").setCenter(new float[] {242.4667f,2165.6889f,-4.8311f}).setUlimit(new MFFloat559().getArray()).setLlimit(new MFFloat560().getArray())
                                                    .addChild(new HAnimSegment().setName("l_scapula").setDEF("hanim_l_scapula")
                                                      .addChild(new Transform().setTranslation(new float[] {242.4667f,2165.6889f,-4.8311f})
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32561().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32562().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f563().getArray()))
                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f564().getArray()))))))
                                                    .addChild(new HAnimJoint().setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {325.6667f,2139.4667f,14.1911f}).setUlimit(new MFFloat565().getArray()).setLlimit(new MFFloat566().getArray())
                                                      .addChild(new HAnimSegment().setName("l_upperarm").setDEF("hanim_l_upperarm")
                                                        .addChild(new Transform().setTranslation(new float[] {325.6667f,2139.4667f,14.1911f})
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32567().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32568().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f569().getArray()))
                                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f570().getArray()))))))
                                                      .addChild(new HAnimJoint().setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {359.3111f,1646.1333f,9.5244f}).setUlimit(new MFFloat571().getArray()).setLlimit(new MFFloat572().getArray())
                                                        .addChild(new HAnimSegment().setName("l_forearm").setDEF("hanim_l_forearm")
                                                          .addChild(new Transform().setTranslation(new float[] {359.3111f,1646.1333f,9.5244f})
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32573().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32574().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f575().getArray()))
                                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f576().getArray()))))))
                                                        .addChild(new HAnimJoint().setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setCenter(new float[] {359f,1242.1333f,10.72f}).setUlimit(new MFFloat577().getArray()).setLlimit(new MFFloat578().getArray())
                                                          .addChild(new HAnimSegment().setName("l_carpal").setDEF("hanim_l_carpal")
                                                            .addChild(new Transform().setTranslation(new float[] {359f,1242.1333f,10.72f})
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32579().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32580().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f581().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f582().getArray()))))))
                                                          .addChild(new HAnimJoint().setName("l_midcarpal_1").setDEF("hanim_l_midcarpal_1").setCenter(new float[] {357.7111f,1206.1333f,58.8222f}).setUlimit(new MFFloat583().getArray()).setLlimit(new MFFloat584().getArray())
                                                            .addChild(new HAnimSegment().setName("l_trapezium").setDEF("hanim_l_trapezium")
                                                              .addChild(new Transform().setTranslation(new float[] {357.7111f,1206.1333f,58.8222f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32585().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32586().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f587().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f588().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("l_carpometacarpal_1").setDEF("hanim_l_carpometacarpal_1").setCenter(new float[] {356.1556f,1179.4667f,71.9778f}).setUlimit(new MFFloat589().getArray()).setLlimit(new MFFloat590().getArray())
                                                              .addChild(new HAnimSegment().setName("l_metacarpal_1").setDEF("hanim_l_metacarpal_1")
                                                                .addChild(new Transform().setTranslation(new float[] {356.1556f,1179.4667f,71.9778f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32591().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32592().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f593().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f594().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("l_metacarpophalangeal_1").setDEF("hanim_l_metacarpophalangeal_1").setCenter(new float[] {357.2222f,1140.3556f,91.3111f}).setUlimit(new MFFloat595().getArray()).setLlimit(new MFFloat596().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_1").setDEF("hanim_l_carpal_proximal_phalanx_1")
                                                                  .addChild(new Transform().setTranslation(new float[] {357.2222f,1140.3556f,91.3111f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32597().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32598().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f599().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f600().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("l_carpal_interphalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setCenter(new float[] {360.4222f,1103.4667f,118.7333f}).setUlimit(new MFFloat601().getArray()).setLlimit(new MFFloat602().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_1").setDEF("hanim_l_carpal_distal_phalanx_1")
                                                                    .addChild(new Transform().setTranslation(new float[] {360.4222f,1103.4667f,118.7333f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32603().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32604().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f605().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f606().getArray()))))))))))
                                                          .addChild(new HAnimJoint().setName("l_midcarpal_2").setDEF("hanim_l_midcarpal_2").setCenter(new float[] {357.7111f,1207.9111f,37.2711f}).setUlimit(new MFFloat607().getArray()).setLlimit(new MFFloat608().getArray())
                                                            .addChild(new HAnimSegment().setName("l_trapezoid").setDEF("hanim_l_trapezoid")
                                                              .addChild(new Transform().setTranslation(new float[] {357.7111f,1207.9111f,37.2711f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32609().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32610().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f611().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f612().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("l_carpometacarpal_2").setDEF("hanim_l_carpometacarpal_2").setCenter(new float[] {357.7111f,1169.6888f,39.8622f}).setUlimit(new MFFloat613().getArray()).setLlimit(new MFFloat614().getArray())
                                                              .addChild(new HAnimSegment().setName("l_metacarpal_2").setDEF("hanim_l_metacarpal_2")
                                                                .addChild(new Transform().setTranslation(new float[] {357.7111f,1169.6888f,39.8622f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32615().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32616().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f617().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f618().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("l_metacarpophalangeal_2").setDEF("hanim_l_metacarpophalangeal_2").setCenter(new float[] {362.5556f,1070.1333f,50.4222f}).setUlimit(new MFFloat619().getArray()).setLlimit(new MFFloat620().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_2").setDEF("hanim_l_carpal_proximal_phalanx_2")
                                                                  .addChild(new Transform().setTranslation(new float[] {362.5556f,1070.1333f,50.4222f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32621().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32622().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f623().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f624().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setCenter(new float[] {358.5556f,1010.1333f,48.6622f}).setUlimit(new MFFloat625().getArray()).setLlimit(new MFFloat626().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_2").setDEF("hanim_l_carpal_middle_phalanx_2")
                                                                    .addChild(new Transform().setTranslation(new float[] {358.5556f,1010.1333f,48.6622f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32627().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32628().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f629().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f630().getArray()))))))
                                                                  .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setCenter(new float[] {356.5111f,960.3556f,47.0844f}).setUlimit(new MFFloat631().getArray()).setLlimit(new MFFloat632().getArray())
                                                                    .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_2").setDEF("hanim_l_carpal_distal_phalanx_2")
                                                                      .addChild(new Transform().setTranslation(new float[] {356.5111f,960.3556f,47.0844f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32633().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32634().getArray())
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f635().getArray()))
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f636().getArray())))))))))))
                                                          .addChild(new HAnimJoint().setName("l_midcarpal_3").setDEF("hanim_l_midcarpal_3").setCenter(new float[] {357.3111f,1211.0222f,11.1689f}).setUlimit(new MFFloat637().getArray()).setLlimit(new MFFloat638().getArray())
                                                            .addChild(new HAnimSegment().setName("l_capitate").setDEF("hanim_l_capitate")
                                                              .addChild(new Transform().setTranslation(new float[] {357.3111f,1211.0222f,11.1689f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32639().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32640().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f641().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f642().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("l_carpometacarpal_3").setDEF("hanim_l_carpometacarpal_3").setCenter(new float[] {357.3111f,1166.1333f,8.2933f}).setUlimit(new MFFloat643().getArray()).setLlimit(new MFFloat644().getArray())
                                                              .addChild(new HAnimSegment().setName("l_metacarpal_3").setDEF("hanim_l_metacarpal_3")
                                                                .addChild(new Transform().setTranslation(new float[] {357.3111f,1166.1333f,8.2933f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32645().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32646().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f647().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f648().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("l_metacarpophalangeal_3").setDEF("hanim_l_metacarpophalangeal_3").setCenter(new float[] {362.4667f,1065.6888f,12.9067f}).setUlimit(new MFFloat649().getArray()).setLlimit(new MFFloat650().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_3").setDEF("hanim_l_carpal_proximal_phalanx_3")
                                                                  .addChild(new Transform().setTranslation(new float[] {362.4667f,1065.6888f,12.9067f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32651().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32652().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f653().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f654().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setCenter(new float[] {358.5556f,1003.0222f,13.6578f}).setUlimit(new MFFloat655().getArray()).setLlimit(new MFFloat656().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_3").setDEF("hanim_l_carpal_middle_phalanx_3")
                                                                    .addChild(new Transform().setTranslation(new float[] {358.5556f,1003.0222f,13.6578f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32657().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32658().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f659().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f660().getArray()))))))
                                                                  .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setCenter(new float[] {356.5111f,947.9111f,13.2178f}).setUlimit(new MFFloat661().getArray()).setLlimit(new MFFloat662().getArray())
                                                                    .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_3").setDEF("hanim_l_carpal_distal_phalanx_3")
                                                                      .addChild(new Transform().setTranslation(new float[] {356.5111f,947.9111f,13.2178f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32663().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32664().getArray())
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f665().getArray()))
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f666().getArray())))))))))))
                                                          .addChild(new HAnimJoint().setName("l_midcarpal_4_5").setDEF("hanim_l_midcarpal_4_5").setCenter(new float[] {357.3111f,1205.6889f,-30.2f}).setUlimit(new MFFloat667().getArray()).setLlimit(new MFFloat668().getArray())
                                                            .addChild(new HAnimSegment().setName("l_hamate").setDEF("hanim_l_hamate")
                                                              .addChild(new Transform().setTranslation(new float[] {357.3111f,1205.6889f,-30.2f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32669().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32670().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f671().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f672().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("l_carpometacarpal_4").setDEF("hanim_l_carpometacarpal_4").setCenter(new float[] {357.3111f,1167.0222f,-18.7022f}).setUlimit(new MFFloat673().getArray()).setLlimit(new MFFloat674().getArray())
                                                              .addChild(new HAnimSegment().setName("l_metacarpal_4").setDEF("hanim_l_metacarpal_4")
                                                                .addChild(new Transform().setTranslation(new float[] {357.3111f,1167.0222f,-18.7022f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32675().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32676().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f677().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f678().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("l_metacarpophalangeal_4").setDEF("hanim_l_metacarpophalangeal_4").setCenter(new float[] {362.4667f,1063.9111f,-21.7067f}).setUlimit(new MFFloat679().getArray()).setLlimit(new MFFloat680().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_4").setDEF("hanim_l_carpal_proximal_phalanx_4")
                                                                  .addChild(new Transform().setTranslation(new float[] {362.4667f,1063.9111f,-21.7067f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32681().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32682().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f683().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f684().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setCenter(new float[] {358.5556f,1009.6888f,-20.1378f}).setUlimit(new MFFloat685().getArray()).setLlimit(new MFFloat686().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_4").setDEF("hanim_l_carpal_middle_phalanx_4")
                                                                    .addChild(new Transform().setTranslation(new float[] {358.5556f,1009.6888f,-20.1378f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32687().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32688().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f689().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f690().getArray()))))))
                                                                  .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setCenter(new float[] {356.5111f,958.5777f,-18.4222f}).setUlimit(new MFFloat691().getArray()).setLlimit(new MFFloat692().getArray())
                                                                    .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_4").setDEF("hanim_l_carpal_distal_phalanx_4")
                                                                      .addChild(new Transform().setTranslation(new float[] {356.5111f,958.5777f,-18.4222f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32693().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32694().getArray())
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f695().getArray()))
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f696().getArray())))))))))))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_5").setDEF("hanim_l_carpometacarpal_5").setCenter(new float[] {358.4222f,1171.0222f,-44.1111f}).setUlimit(new MFFloat697().getArray()).setLlimit(new MFFloat698().getArray())
                                                            .addChild(new HAnimSegment().setName("l_metacarpal_5").setDEF("hanim_l_metacarpal_5")
                                                              .addChild(new Transform().setTranslation(new float[] {358.4222f,1171.0222f,-44.1111f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32699().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32700().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f701().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f702().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_5").setDEF("hanim_l_metacarpophalangeal_5").setCenter(new float[] {361.7556f,1071.9112f,-52.5556f}).setUlimit(new MFFloat703().getArray()).setLlimit(new MFFloat704().getArray())
                                                              .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_5").setDEF("hanim_l_carpal_proximal_phalanx_5")
                                                                .addChild(new Transform().setTranslation(new float[] {361.7556f,1071.9112f,-52.5556f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32705().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32706().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f707().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f708().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_5").setCenter(new float[] {358.4667f,1038.1333f,-52.7333f}).setUlimit(new MFFloat709().getArray()).setLlimit(new MFFloat710().getArray())
                                                                .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_5").setDEF("hanim_l_carpal_middle_phalanx_5")
                                                                  .addChild(new Transform().setTranslation(new float[] {358.4667f,1038.1333f,-52.7333f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32711().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32712().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f713().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f714().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_5").setDEF("hanim_l_carpal_distal_interphalangeal_5").setCenter(new float[] {356.7778f,1001.2444f,-52.3778f}).setUlimit(new MFFloat715().getArray()).setLlimit(new MFFloat716().getArray())
                                                                  .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_5").setDEF("hanim_l_carpal_distal_phalanx_5")
                                                                    .addChild(new Transform().setTranslation(new float[] {356.7778f,1001.2444f,-52.3778f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32717().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32718().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f719().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f720().getArray())))))))))))))))
                                                .addChild(new HAnimJoint().setName("r_acromioclavicular").setDEF("hanim_r_acromioclavicular").setCenter(new float[] {-76.3778f,2199.0223f,-6.5867f}).setUlimit(new MFFloat721().getArray()).setLlimit(new MFFloat722().getArray())
                                                  .addChild(new HAnimSegment().setName("r_clavicle").setDEF("hanim_r_clavicle")
                                                    .addChild(new Transform().setTranslation(new float[] {-76.3778f,2199.0223f,-6.5867f})
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32723().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32724().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f725().getArray()))
                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f726().getArray()))))))
                                                  .addChild(new HAnimJoint().setName("r_sternoclavicular").setDEF("hanim_r_sternoclavicular").setCenter(new float[] {-243.2222f,2165.6889f,-4.8311f}).setUlimit(new MFFloat727().getArray()).setLlimit(new MFFloat728().getArray())
                                                    .addChild(new HAnimSegment().setName("r_scapula").setDEF("hanim_r_scapula")
                                                      .addChild(new Transform().setTranslation(new float[] {-243.2222f,2165.6889f,-4.8311f})
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32729().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32730().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f731().getArray()))
                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f732().getArray()))))))
                                                    .addChild(new HAnimJoint().setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-325.7111f,2139.4667f,14.1911f}).setUlimit(new MFFloat733().getArray()).setLlimit(new MFFloat734().getArray())
                                                      .addChild(new HAnimSegment().setName("r_upperarm").setDEF("hanim_r_upperarm")
                                                        .addChild(new Transform().setTranslation(new float[] {-325.7111f,2139.4667f,14.1911f})
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                              .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32735().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32736().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f737().getArray()))
                                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f738().getArray()))))))
                                                      .addChild(new HAnimJoint().setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-359.3556f,1646.1333f,9.5244f}).setUlimit(new MFFloat739().getArray()).setLlimit(new MFFloat740().getArray())
                                                        .addChild(new HAnimSegment().setName("r_forearm").setDEF("hanim_r_forearm")
                                                          .addChild(new Transform().setTranslation(new float[] {-359.3556f,1646.1333f,9.5244f})
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32741().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32742().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f743().getArray()))
                                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f744().getArray()))))))
                                                        .addChild(new HAnimJoint().setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setCenter(new float[] {-359.0444f,1242.1333f,10.7244f}).setUlimit(new MFFloat745().getArray()).setLlimit(new MFFloat746().getArray())
                                                          .addChild(new HAnimSegment().setName("r_carpal").setDEF("hanim_r_carpal")
                                                            .addChild(new Transform().setTranslation(new float[] {-359.0444f,1242.1333f,10.7244f})
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32747().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32748().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f749().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f750().getArray()))))))
                                                          .addChild(new HAnimJoint().setName("r_midcarpal_1").setDEF("hanim_r_midcarpal_1").setCenter(new float[] {-357.8444f,1206.1333f,58.8222f}).setUlimit(new MFFloat751().getArray()).setLlimit(new MFFloat752().getArray())
                                                            .addChild(new HAnimSegment().setName("r_trapezium").setDEF("hanim_r_trapezium")
                                                              .addChild(new Transform().setTranslation(new float[] {-357.8444f,1206.1333f,58.8222f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32753().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32754().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f755().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f756().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("r_carpometacarpal_1").setDEF("hanim_r_carpometacarpal_1").setCenter(new float[] {-356.2f,1179.4667f,71.9778f}).setUlimit(new MFFloat757().getArray()).setLlimit(new MFFloat758().getArray())
                                                              .addChild(new HAnimSegment().setName("r_metacarpal_1").setDEF("hanim_r_metacarpal_1")
                                                                .addChild(new Transform().setTranslation(new float[] {-356.2f,1179.4667f,71.9778f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32759().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32760().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f761().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f762().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("r_metacarpophalangeal_1").setDEF("hanim_r_metacarpophalangeal_1").setCenter(new float[] {-357.2222f,1140.3556f,91.3111f}).setUlimit(new MFFloat763().getArray()).setLlimit(new MFFloat764().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_1").setDEF("hanim_r_carpal_proximal_phalanx_1")
                                                                  .addChild(new Transform().setTranslation(new float[] {-357.2222f,1140.3556f,91.3111f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32765().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32766().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f767().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f768().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("r_carpal_interphalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setCenter(new float[] {-360.4222f,1103.4667f,118.7333f}).setUlimit(new MFFloat769().getArray()).setLlimit(new MFFloat770().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_1").setDEF("hanim_r_carpal_distal_phalanx_1")
                                                                    .addChild(new Transform().setTranslation(new float[] {-360.4222f,1103.4667f,118.7333f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32771().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32772().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f773().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f774().getArray()))))))))))
                                                          .addChild(new HAnimJoint().setName("r_midcarpal_2").setDEF("hanim_r_midcarpal_2").setCenter(new float[] {-357.8444f,1207.9111f,37.2711f}).setUlimit(new MFFloat775().getArray()).setLlimit(new MFFloat776().getArray())
                                                            .addChild(new HAnimSegment().setName("r_trapezoid").setDEF("hanim_r_trapezoid")
                                                              .addChild(new Transform().setTranslation(new float[] {-357.8444f,1207.9111f,37.2711f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32777().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32778().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f779().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f780().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("r_carpometacarpal_2").setDEF("hanim_r_carpometacarpal_2").setCenter(new float[] {-357.7111f,1169.6888f,39.8622f}).setUlimit(new MFFloat781().getArray()).setLlimit(new MFFloat782().getArray())
                                                              .addChild(new HAnimSegment().setName("r_metacarpal_2").setDEF("hanim_r_metacarpal_2")
                                                                .addChild(new Transform().setTranslation(new float[] {-357.7111f,1169.6888f,39.8622f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32783().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32784().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f785().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f786().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("r_metacarpophalangeal_2").setDEF("hanim_r_metacarpophalangeal_2").setCenter(new float[] {-362.5556f,1070.1333f,50.4222f}).setUlimit(new MFFloat787().getArray()).setLlimit(new MFFloat788().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_2").setDEF("hanim_r_carpal_proximal_phalanx_2")
                                                                  .addChild(new Transform().setTranslation(new float[] {-362.5556f,1070.1333f,50.4222f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32789().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32790().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f791().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f792().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-358.5556f,1010.1333f,48.6622f}).setUlimit(new MFFloat793().getArray()).setLlimit(new MFFloat794().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_2").setDEF("hanim_r_carpal_middle_phalanx_2")
                                                                    .addChild(new Transform().setTranslation(new float[] {-358.5556f,1010.1333f,48.6622f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32795().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32796().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f797().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f798().getArray()))))))
                                                                  .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setCenter(new float[] {-356.5111f,960.3556f,47.0844f}).setUlimit(new MFFloat799().getArray()).setLlimit(new MFFloat800().getArray())
                                                                    .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_2").setDEF("hanim_r_carpal_distal_phalanx_2")
                                                                      .addChild(new Transform().setTranslation(new float[] {-356.5111f,960.3556f,47.0844f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32801().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32802().getArray())
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f803().getArray()))
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f804().getArray())))))))))))
                                                          .addChild(new HAnimJoint().setName("r_midcarpal_3").setDEF("hanim_r_midcarpal_3").setCenter(new float[] {-357.3556f,1211.0222f,11.1689f}).setUlimit(new MFFloat805().getArray()).setLlimit(new MFFloat806().getArray())
                                                            .addChild(new HAnimSegment().setName("r_capitate").setDEF("hanim_r_capitate")
                                                              .addChild(new Transform().setTranslation(new float[] {-357.3556f,1211.0222f,11.1689f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32807().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32808().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f809().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f810().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("r_carpometacarpal_3").setDEF("hanim_r_carpometacarpal_3").setCenter(new float[] {-357.3556f,1166.1333f,8.2933f}).setUlimit(new MFFloat811().getArray()).setLlimit(new MFFloat812().getArray())
                                                              .addChild(new HAnimSegment().setName("r_metacarpal_3").setDEF("hanim_r_metacarpal_3")
                                                                .addChild(new Transform().setTranslation(new float[] {-357.3556f,1166.1333f,8.2933f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32813().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32814().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f815().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f816().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("r_metacarpophalangeal_3").setDEF("hanim_r_metacarpophalangeal_3").setCenter(new float[] {-362.4667f,1065.6888f,12.9067f}).setUlimit(new MFFloat817().getArray()).setLlimit(new MFFloat818().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_3").setDEF("hanim_r_carpal_proximal_phalanx_3")
                                                                  .addChild(new Transform().setTranslation(new float[] {-362.4667f,1065.6888f,12.9067f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32819().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32820().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f821().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f822().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-358.5556f,1003.0222f,13.6578f}).setUlimit(new MFFloat823().getArray()).setLlimit(new MFFloat824().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_3").setDEF("hanim_r_carpal_middle_phalanx_3")
                                                                    .addChild(new Transform().setTranslation(new float[] {-358.5556f,1003.0222f,13.6578f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32825().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32826().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f827().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f828().getArray()))))))
                                                                  .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setCenter(new float[] {-356.5111f,947.9111f,13.2178f}).setUlimit(new MFFloat829().getArray()).setLlimit(new MFFloat830().getArray())
                                                                    .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_3").setDEF("hanim_r_carpal_distal_phalanx_3")
                                                                      .addChild(new Transform().setTranslation(new float[] {-356.5111f,947.9111f,13.2178f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32831().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32832().getArray())
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f833().getArray()))
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f834().getArray())))))))))))
                                                          .addChild(new HAnimJoint().setName("r_midcarpal_4_5").setDEF("hanim_r_midcarpal_4_5").setCenter(new float[] {-357.3556f,1205.6889f,-30.2f}).setUlimit(new MFFloat835().getArray()).setLlimit(new MFFloat836().getArray())
                                                            .addChild(new HAnimSegment().setName("r_hamate").setDEF("hanim_r_hamate")
                                                              .addChild(new Transform().setTranslation(new float[] {-357.3556f,1205.6889f,-30.2f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32837().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32838().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f839().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f840().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("r_carpometacarpal_4").setDEF("hanim_r_carpometacarpal_4").setCenter(new float[] {-357.3556f,1167.0222f,-18.7022f}).setUlimit(new MFFloat841().getArray()).setLlimit(new MFFloat842().getArray())
                                                              .addChild(new HAnimSegment().setName("r_metacarpal_4").setDEF("hanim_r_metacarpal_4")
                                                                .addChild(new Transform().setTranslation(new float[] {-357.3556f,1167.0222f,-18.7022f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32843().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32844().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f845().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f846().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("r_metacarpophalangeal_4").setDEF("hanim_r_metacarpophalangeal_4").setCenter(new float[] {-362.4667f,1063.9111f,-21.7067f}).setUlimit(new MFFloat847().getArray()).setLlimit(new MFFloat848().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_4").setDEF("hanim_r_carpal_proximal_phalanx_4")
                                                                  .addChild(new Transform().setTranslation(new float[] {-362.4667f,1063.9111f,-21.7067f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32849().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32850().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f851().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f852().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setCenter(new float[] {-358.5556f,1009.6888f,-20.1378f}).setUlimit(new MFFloat853().getArray()).setLlimit(new MFFloat854().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_4").setDEF("hanim_r_carpal_middle_phalanx_4")
                                                                    .addChild(new Transform().setTranslation(new float[] {-358.5556f,1009.6888f,-20.1378f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32855().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32856().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f857().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f858().getArray()))))))
                                                                  .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setCenter(new float[] {-356.5111f,958.5777f,-18.4222f}).setUlimit(new MFFloat859().getArray()).setLlimit(new MFFloat860().getArray())
                                                                    .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_4").setDEF("hanim_r_carpal_distal_phalanx_4")
                                                                      .addChild(new Transform().setTranslation(new float[] {-356.5111f,958.5777f,-18.4222f})
                                                                        .addChild(new Shape()
                                                                          .setAppearance(new Appearance()
                                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                            .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32861().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32862().getArray())
                                                                            .setCoord(new Coordinate().setPoint(new MFVec3f863().getArray()))
                                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f864().getArray())))))))))))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_5").setDEF("hanim_r_carpometacarpal_5").setCenter(new float[] {-358.4222f,1171.0222f,-44.1111f}).setUlimit(new MFFloat865().getArray()).setLlimit(new MFFloat866().getArray())
                                                            .addChild(new HAnimSegment().setName("r_metacarpal_5").setDEF("hanim_r_metacarpal_5")
                                                              .addChild(new Transform().setTranslation(new float[] {-358.4222f,1171.0222f,-44.1111f})
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32867().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32868().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f869().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f870().getArray()))))))
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_5").setDEF("hanim_r_metacarpophalangeal_5").setCenter(new float[] {-361.8f,1071.9112f,-52.5556f}).setUlimit(new MFFloat871().getArray()).setLlimit(new MFFloat872().getArray())
                                                              .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_5").setDEF("hanim_r_carpal_proximal_phalanx_5")
                                                                .addChild(new Transform().setTranslation(new float[] {-361.8f,1071.9112f,-52.5556f})
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32873().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32874().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f875().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f876().getArray()))))))
                                                              .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_5").setCenter(new float[] {-358.5111f,1038.1333f,-52.7333f}).setUlimit(new MFFloat877().getArray()).setLlimit(new MFFloat878().getArray())
                                                                .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_5").setDEF("hanim_r_carpal_middle_phalanx_5")
                                                                  .addChild(new Transform().setTranslation(new float[] {-358.5111f,1038.1333f,-52.7333f})
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32879().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32880().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f881().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f882().getArray()))))))
                                                                .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_5").setDEF("hanim_r_carpal_distal_interphalangeal_5").setCenter(new float[] {-356.8222f,1001.2444f,-52.3778f}).setUlimit(new MFFloat883().getArray()).setLlimit(new MFFloat884().getArray())
                                                                  .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_5").setDEF("hanim_r_carpal_distal_phalanx_5")
                                                                    .addChild(new Transform().setTranslation(new float[] {-356.8222f,1001.2444f,-52.3778f})
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f,0.588f,0.588f}))
                                                                          .setTexture(new ImageTexture().setUSE("JinLOA4TextureAtlas")))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32885().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32886().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f887().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f888().getArray()))))))))))))))))))))))))))))))))))
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
          .addJoints(new HAnimJoint().setUSE("hanim_l_calcaneocuboid"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_calcaneocuboid"))
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
          .addJoints(new HAnimJoint().setUSE("hanim_l_cuneonavicular_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_cuneonavicular_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_cuneonavicular_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_3"))
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
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_4_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_4_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_radiocarpal"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_radiocarpal"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_sternoclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_sternoclavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_talocalcaneonavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_talocalcaneonavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_talocrural"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_talocrural"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_transversetarsal"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_transversetarsal"))
          .addSegments(new HAnimSegment().setUSE("hanim_sacrum"))
          .addSegments(new HAnimSegment().setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegment().setUSE("hanim_l5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l1"))
          .addSegments(new HAnimSegment().setUSE("hanim_t12"))
          .addSegments(new HAnimSegment().setUSE("hanim_t11"))
          .addSegments(new HAnimSegment().setUSE("hanim_t10"))
          .addSegments(new HAnimSegment().setUSE("hanim_t9"))
          .addSegments(new HAnimSegment().setUSE("hanim_t8"))
          .addSegments(new HAnimSegment().setUSE("hanim_t7"))
          .addSegments(new HAnimSegment().setUSE("hanim_t6"))
          .addSegments(new HAnimSegment().setUSE("hanim_t5"))
          .addSegments(new HAnimSegment().setUSE("hanim_t4"))
          .addSegments(new HAnimSegment().setUSE("hanim_t3"))
          .addSegments(new HAnimSegment().setUSE("hanim_t2"))
          .addSegments(new HAnimSegment().setUSE("hanim_t1"))
          .addSegments(new HAnimSegment().setUSE("hanim_c7"))
          .addSegments(new HAnimSegment().setUSE("hanim_c6"))
          .addSegments(new HAnimSegment().setUSE("hanim_c5"))
          .addSegments(new HAnimSegment().setUSE("hanim_c4"))
          .addSegments(new HAnimSegment().setUSE("hanim_c3"))
          .addSegments(new HAnimSegment().setUSE("hanim_c2"))
          .addSegments(new HAnimSegment().setUSE("hanim_c1"))
          .addSegments(new HAnimSegment().setUSE("hanim_skull"))
          .addSegments(new HAnimSegment().setUSE("hanim_jaw"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_calcaneus"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_calcaneus"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_capitate"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_capitate"))
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
          .addSegments(new HAnimSegment().setUSE("hanim_l_cuboid"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuboid"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_cuneiform_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuneiform_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_cuneiform_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuneiform_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_cuneiform_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuneiform_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_eyeball"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_eyeball"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_eyebrow"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_eyebrow"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_eyelid"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_eyelid"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_hamate"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_hamate"))
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
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_navicular"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_navicular"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_scapula"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_scapula"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_talus"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_talus"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_distal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_distal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_distal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_distal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_middle_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_middle_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_middle_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_middle_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_trapezium"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_trapezium"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_trapezoid"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_trapezoid"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_upperarm"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Jin Hoon Lee and Min Joo Lee, Chul Hee Jung and Myeong Won Lee"});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/Jin.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png"});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.3778f,-141.7333f,21.8578f,-0.3778f,-147.9867f,-3.4178f,-19.8222f,-147.9867f,-0.0311f,-34.0578f,-147.9867f,4.0533f,-39.2667f,-147.9867f,21.8578f,-34.0578f,-147.9867f,39.6622f,-19.8222f,-147.9867f,43.7467f,-0.3778f,-147.9867f,47.1333f,19.0667f,-147.9867f,43.7467f,33.3022f,-147.9867f,39.6622f,38.5111f,-147.9867f,21.8578f,33.3022f,-147.9867f,4.0533f,19.0667f,-147.9867f,-0.0311f,-0.3778f,-165.1244f,-18.6533f,-25.5244f,-165.1244f,-13.2267f,-43.9333f,-165.1244f,1.6f,-50.6889f,-165.1244f,21.8578f,-43.9333f,-165.1244f,42.1111f,-25.5244f,-165.1244f,51.6889f,-0.3778f,-165.1244f,57.1156f,24.7689f,-165.1244f,51.6889f,43.1778f,-165.1244f,42.1111f,49.9333f,-165.1244f,21.8578f,43.1778f,-165.1244f,1.6f,24.7689f,-165.1244f,-13.2267f,-0.3778f,-188.5333f,-22.0933f,-29.4178f,-188.5333f,-15.8267f,-50.6889f,-188.5333f,1.2978f,-58.4667f,-188.5333f,21.8578f,-50.6889f,-188.5333f,45.2489f,-29.4178f,-188.5333f,57.1156f,-0.3778f,-188.5333f,63.3822f,28.6622f,-188.5333f,57.1156f,49.9333f,-188.5333f,45.2489f,57.7111f,-188.5333f,21.8578f,49.9333f,-188.5333f,1.2978f,28.6622f,-188.5333f,-15.8267f,-0.3778f,-211.9422f,-15.8267f,-25.5244f,-211.9422f,-10.4f,-43.9333f,-211.9422f,4.4311f,-50.6889f,-211.9422f,21.8578f,-43.9333f,-211.9422f,42.1111f,-25.5244f,-211.9422f,51.6889f,-0.3778f,-211.9422f,57.1156f,24.7689f,-211.9422f,51.6889f,43.1778f,-211.9422f,42.1111f,49.9333f,-211.9422f,21.8578f,43.1778f,-211.9422f,4.4311f,24.7689f,-211.9422f,-10.4f,-0.3778f,-229.08f,1.2978f,-14.8978f,-229.08f,4.4311f,-25.5244f,-229.08f,10.1644f,-29.4178f,-229.08f,21.8578f,-25.5244f,-229.08f,33.5511f,-14.8978f,-229.08f,42.1111f,-0.3778f,-229.08f,45.2489f,14.1422f,-229.08f,42.1111f,24.7689f,-229.08f,33.5511f,28.6622f,-229.08f,21.8578f,24.7689f,-229.08f,10.1644f,14.1422f,-229.08f,4.4311f,-0.3778f,-235.3333f,21.8578f});
  }
}
protected class MFVec2f12 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.6211f,0.5754f,0.7851f,0.572f,0.7614f,0.572f,0.6907f,0.5698f,0.62f,0.5698f,0.6158f,0.5702f,0.5451f,0.5702f,0.4167f,0.5698f,0.5451f,0.5702f,0.6158f,0.5702f,0.62f,0.5698f,0.6907f,0.5698f,0.7614f,0.572f,0.8036f,0.5346f,0.7761f,0.5346f,0.6989f,0.4838f,0.6219f,0.4428f,0.6154f,0.4438f,0.5492f,0.4639f,0.4166f,0.5346f,0.5492f,0.4639f,0.6154f,0.4438f,0.6219f,0.4428f,0.6989f,0.4838f,0.7761f,0.5346f,0.7912f,0.4044f,0.7635f,0.4044f,0.7042f,0.3925f,0.6194f,0.3907f,0.6148f,0.3907f,0.545f,0.3974f,0.4163f,0.4938f,0.545f,0.3974f,0.6148f,0.3907f,0.6194f,0.3907f,0.7042f,0.3925f,0.7635f,0.4044f,0.795f,0.3772f,0.7662f,0.3772f,0.6945f,0.3645f,0.6236f,0.3695f,0.616f,0.3695f,0.5438f,0.378f,0.416f,0.453f,0.5438f,0.378f,0.616f,0.3695f,0.6236f,0.3695f,0.6945f,0.3645f,0.7662f,0.3772f,0.7887f,0.3451f,0.7635f,0.3451f,0.698f,0.3508f,0.6262f,0.3508f,0.6297f,0.3503f,0.5389f,0.3503f,0.4181f,0.3884f,0.5389f,0.3503f,0.6297f,0.3503f,0.6262f,0.3508f,0.698f,0.3508f,0.7635f,0.3451f,0.6237f,0.3398f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFInt3216 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFVec3f17 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.3778f,291.0222f,26.9733f,-0.3778f,258.5778f,-104.9111f,-101.8444f,258.5778f,-87.2667f,-176.1111f,258.5778f,-65.9333f,-203.3111f,258.5778f,26.9733f,-176.1111f,258.5778f,119.8889f,-101.8444f,258.5778f,141.1778f,-0.3778f,258.5778f,158.8667f,101.0889f,258.5778f,141.1778f,175.3556f,258.5778f,119.8889f,202.5556f,258.5778f,26.9733f,175.3556f,258.5778f,-65.9333f,101.0889f,258.5778f,-87.2667f,-0.3778f,169.0222f,-184.4222f,-131.6222f,169.0222f,-156.1111f,-227.6667f,169.0222f,-78.7333f,-262.8222f,169.0222f,26.9733f,-227.6667f,169.0222f,132.6889f,-131.6222f,169.0222f,182.6444f,-0.3778f,169.0222f,210.9556f,130.8667f,169.0222f,182.6444f,226.9111f,169.0222f,132.6889f,262.0667f,169.0222f,26.9733f,226.9111f,169.0222f,-78.7333f,130.8667f,169.0222f,-156.1111f,-0.3778f,46.8889f,-202.3778f,-151.8889f,46.8889f,-169.6667f,-262.8222f,46.8889f,-80.3333f,-303.4444f,46.8889f,26.9733f,-262.8222f,46.8889f,149.0444f,-151.8889f,46.8889f,210.9556f,-0.3778f,46.8889f,243.6667f,151.1333f,46.8889f,210.9556f,262.0667f,46.8889f,149.0444f,302.6889f,46.8889f,26.9733f,262.0667f,46.8889f,-80.3333f,151.1333f,46.8889f,-169.6667f,-0.3778f,-75.2889f,-169.6667f,-131.6222f,-75.2889f,-141.3556f,-227.6667f,-75.2889f,-63.9778f,-262.8222f,-75.2889f,26.9733f,-227.6667f,-75.2889f,132.6889f,-131.6222f,-75.2889f,182.6444f,-0.3778f,-75.2889f,210.9556f,130.8667f,-75.2889f,182.6444f,226.9111f,-75.2889f,132.6889f,262.0667f,-75.2889f,26.9733f,226.9111f,-75.2889f,-63.9778f,130.8667f,-75.2889f,-141.3556f,-0.3778f,-164.7022f,-80.3333f,-76.1556f,-164.7022f,-63.9778f,-131.6222f,-164.7022f,-34.0667f,-151.8889f,-164.7022f,26.9733f,-131.6222f,-164.7022f,88.0222f,-76.1556f,-164.7022f,132.6889f,-0.3778f,-164.7022f,149.0444f,75.4f,-164.7022f,132.6889f,130.8667f,-164.7022f,88.0222f,151.1333f,-164.7022f,26.9733f,130.8667f,-164.7022f,-34.0667f,75.4f,-164.7022f,-63.9778f,-0.3778f,-197.4356f,26.9733f});
  }
}
protected class MFVec2f18 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.6211f,0.5754f,0.7851f,0.572f,0.7614f,0.572f,0.6907f,0.5698f,0.62f,0.5698f,0.6158f,0.5702f,0.5451f,0.5702f,0.4167f,0.5698f,0.5451f,0.5702f,0.6158f,0.5702f,0.62f,0.5698f,0.6907f,0.5698f,0.7614f,0.572f,0.8036f,0.5346f,0.7761f,0.5346f,0.6989f,0.4838f,0.6219f,0.4428f,0.6154f,0.4438f,0.5492f,0.4639f,0.4166f,0.5346f,0.5492f,0.4639f,0.6154f,0.4438f,0.6219f,0.4428f,0.6989f,0.4838f,0.7761f,0.5346f,0.7912f,0.4044f,0.7635f,0.4044f,0.7042f,0.3925f,0.6194f,0.3907f,0.6148f,0.3907f,0.545f,0.3974f,0.4163f,0.4938f,0.545f,0.3974f,0.6148f,0.3907f,0.6194f,0.3907f,0.7042f,0.3925f,0.7635f,0.4044f,0.795f,0.3772f,0.7662f,0.3772f,0.6945f,0.3645f,0.6236f,0.3695f,0.616f,0.3695f,0.5438f,0.378f,0.416f,0.453f,0.5438f,0.378f,0.616f,0.3695f,0.6236f,0.3695f,0.6945f,0.3645f,0.7662f,0.3772f,0.7887f,0.3451f,0.7635f,0.3451f,0.698f,0.3508f,0.6262f,0.3508f,0.6297f,0.3503f,0.5389f,0.3503f,0.4181f,0.3884f,0.5389f,0.3503f,0.6297f,0.3503f,0.6262f,0.3508f,0.698f,0.3508f,0.7635f,0.3451f,0.6237f,0.3398f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1});
  }
}
protected class MFInt3222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1});
  }
}
protected class MFVec3f23 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {131.1778f,-191.6711f,20.6444f,72.6444f,-191.6711f,163.2667f,-58.8667f,-191.6711f,198.5111f,-150.0222f,-191.6711f,99.8f,-150.0222f,-191.6711f,-58.5111f,-58.8667f,-191.6711f,-157.2222f,72.6444f,-191.6711f,-121.9778f,131.1778f,-358.3111f,20.6444f,72.6444f,-358.3111f,163.2667f,-58.8667f,-358.3111f,198.5111f,-150.0222f,-358.3111f,99.8f,-150.0222f,-358.3111f,-58.5111f,-58.8667f,-358.3111f,-157.2222f,72.6444f,-358.3111f,-121.9778f,131.1778f,-647.2f,20.6444f,72.6444f,-647.2f,163.2667f,-58.8667f,-647.2f,198.5111f,-150.0222f,-647.2f,99.8f,-150.0222f,-647.2f,-58.5111f,-58.8667f,-647.2f,-157.2222f,72.6444f,-647.2f,-121.9778f,149.2667f,-941.4222f,20.6444f,83.9333f,-941.4222f,179.8444f,-62.9111f,-941.4222f,219.1778f,-149.4889f,-941.4222f,109f,-149.4889f,-941.4222f,-67.7111f,-62.9111f,-941.4222f,-177.8889f,83.9333f,-941.4222f,-138.5556f,95f,-579.3778f,20.6444f,50.1111f,-579.3778f,130.0667f,-50.8222f,-579.3778f,157.0889f,-117.4f,-579.3778f,81.3556f,-117.4f,-579.3778f,-40.0667f,-50.8222f,-579.3778f,-115.8f,50.1111f,-579.3778f,-88.7778f,95.4444f,-866.3111f,20.6444f,54.0667f,-866.3111f,107.5778f,-38.8756f,-866.3111f,129.0444f,-113.4f,-866.3111f,68.8667f,-113.4f,-866.3111f,-27.5778f,-38.8756f,-866.3111f,-87.7556f,54.0667f,-866.3111f,-66.2889f,90.7778f,-103.2f,20.6444f,47.4444f,-103.2f,126.2f,-49.8889f,-103.2f,152.2444f,-127.9333f,-103.2f,79.2222f,-127.9333f,-103.2f,-37.9333f,-49.8889f,-103.2f,-110.9556f,47.4444f,-103.2f,-84.9111f,81.4889f,-1029.8667f,20.6444f,45.4f,-1029.8667f,103.8889f,-35.7778f,-1029.8667f,122.6444f,-100.8667f,-1029.8667f,70.1111f,-100.8667f,-1029.8667f,-21.48f,-35.7778f,-1029.8667f,-74.0222f,45.4f,-1029.8667f,-55.2667f,27.52f,-1073.4222f,20.6444f,11.7244f,-1073.4222f,61.1778f,-23.7644f,-1073.4222f,69.3556f,-52.2444f,-1073.4222f,46.4044f,-52.2444f,-1073.4222f,2.2222f,-23.7644f,-1073.4222f,-20.7467f,11.7244f,-1073.4222f,-12.5511f});
  }
}
protected class MFVec2f24 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.719f,0.5576f,0.6284f,0.5576f,0.7414f,0.5576f,0.6787f,0.5576f,0.5781f,0.5576f,0.5154f,0.5576f,0.5378f,0.5576f,0.6284f,0.5029f,0.7509f,0.3997f,0.6284f,0.3997f,0.7509f,0.5029f,0.7811f,0.3997f,0.7811f,0.5029f,0.6964f,0.3997f,0.6964f,0.5029f,0.5604f,0.3997f,0.5604f,0.5029f,0.4756f,0.3997f,0.4756f,0.5029f,0.5059f,0.3997f,0.5059f,0.5029f,0.7509f,0.3197f,0.6284f,0.3197f,0.7811f,0.3197f,0.6964f,0.3197f,0.5604f,0.3197f,0.4756f,0.3197f,0.5059f,0.3197f,0.7651f,0.2166f,0.6284f,0.2166f,0.7989f,0.2166f,0.7043f,0.2166f,0.5525f,0.2166f,0.4579f,0.2166f,0.4917f,0.2166f,0.7224f,0.263f,0.6284f,0.263f,0.7456f,0.263f,0.6805f,0.263f,0.5762f,0.263f,0.5112f,0.263f,0.5344f,0.263f,0.8705f,0.5452f,0.8705f,0.5383f,0.8705f,0.5369f,0.8705f,0.5408f,0.8705f,0.5483f,0.8705f,0.5522f,0.8705f,0.5509f,0.917f,0.5452f,0.917f,0.5266f,0.89f,0.5304f,0.89f,0.5452f,0.917f,0.522f,0.89f,0.5268f,0.917f,0.5349f,0.89f,0.537f,0.917f,0.5555f,0.89f,0.5534f,0.917f,0.5684f,0.89f,0.5636f,0.917f,0.5638f,0.89f,0.56f,0.8746f,0.531f,0.8746f,0.5452f,0.8746f,0.5279f,0.8746f,0.5368f,0.8746f,0.5524f,0.8746f,0.5613f,0.8746f,0.5581f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
protected class MFInt3228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
protected class MFVec3f29 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {31.56f,-145.4756f,21.6844f,15.7644f,-145.4756f,62.2178f,-19.7244f,-145.4756f,70.4222f,-48.2f,-145.4756f,47.4444f,-48.2f,-145.4756f,3.2622f,-19.7244f,-145.4756f,-19.7067f,15.7644f,-145.4756f,-11.5111f,103.4889f,-393.5556f,21.6844f,64.5111f,-349.5111f,110.3778f,54.5556f,-260.8889f,128.2f,93.7556f,-273.5111f,21.6844f,-36.4267f,-349.5111f,134.7333f,-33.5689f,-260.8889f,149.6667f,-100.5556f,-393.5556f,76.4222f,-104.2444f,-273.5111f,64.1689f,-100.5556f,-427.7778f,-40.1556f,-104.2444f,-273.5111f,-20.8f,-36.4267f,-427.7778f,-108.3778f,-33.5689f,-273.5111f,-84.6f,64.5111f,-427.7778f,-84.0222f,54.5556f,-273.5111f,-63.1333f,49.4444f,-188.6756f,104.9111f,85.5333f,-188.6756f,21.6844f,-31.7378f,-188.6756f,123.6667f,-96.8222f,-188.6756f,71.1333f,-96.8222f,-188.6756f,-20.44f,-31.7378f,-188.6756f,-70.9556f,49.4444f,-188.6756f,-52.2444f,71.0444f,-762.7556f,20.7867f,40.5822f,-762.3111f,90.2f,-27.8889f,-762.3111f,107.3556f,-82.7778f,-762.7556f,59.3156f,-82.7778f,-763.6444f,-22.7422f,-27.8889f,-763.6444f,-56.7778f,40.5822f,-763.6444f,-39.6222f,31.0533f,-834.3111f,21.7067f,15.64f,-834.3111f,56.8222f,-18.9911f,-834.3111f,65.4889f,-46.7778f,-834.3111f,41.1956f,-46.7778f,-834.7556f,-0.3067f,-18.9911f,-834.7556f,-17.52f,15.64f,-834.7556f,-8.8444f});
  }
}
protected class MFVec2f30 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9309f,0.5848f,0.919f,0.5848f,0.8921f,0.5848f,0.8706f,0.5848f,0.8706f,0.5848f,0.8921f,0.5848f,0.919f,0.5848f,0.9845f,0.5321f,0.955f,0.5475f,0.9491f,0.5599f,0.9788f,0.5571f,0.8787f,0.5475f,0.8825f,0.5599f,0.8302f,0.5321f,0.8291f,0.5571f,0.8302f,0.52f,0.8291f,0.5571f,0.8787f,0.52f,0.8825f,0.5571f,0.955f,0.52f,0.9491f,0.5571f,0.9444f,0.5755f,0.9717f,0.5755f,0.8831f,0.5755f,0.8339f,0.5755f,0.8339f,0.5755f,0.8831f,0.5755f,0.9444f,0.5755f,0.9632f,0.3942f,0.9402f,0.3943f,0.8884f,0.3943f,0.8469f,0.3942f,0.8469f,0.3941f,0.8884f,0.3941f,0.9402f,0.3941f,0.9325f,0.3742f,0.9208f,0.3742f,0.8947f,0.3742f,0.8737f,0.3742f,0.8737f,0.3741f,0.8947f,0.3741f,0.9208f,0.3741f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,34,21,-1,21,15,13,-1,9,20,21,-1,21,34,9,-1,0,2,14,-1,14,15,0,-1,30,3,16,-1,16,33,30,-1,3,4,25,-1,25,16,3,-1,22,5,18,-1,18,17,22,-1,5,6,29,-1,29,18,5,-1,6,27,19,-1,7,1,21,-1,21,20,7,-1,1,0,15,-1,15,21,1,-1,15,14,32,-1,32,13,15,-1,33,16,12,-1,12,11,33,-1,25,23,12,-1,12,16,25,-1,17,18,10,-1,10,24,17,-1,18,29,28,-1,28,10,18,-1,19,27,26,-1,26,8,19,-1,4,22,17,-1,17,25,4,-1,25,17,24,-1,24,23,25,-1,20,9,26,-1,26,27,20,-1,6,7,20,-1,20,27,6,-1,29,19,8,-1,8,28,29,-1,6,19,29,-1,1,31,0,-1,0,31,2,-1,31,3,30,-1,3,31,4,-1,4,31,22,-1,22,31,5,-1,5,31,6,-1,6,31,7,-1,7,31,1,-1,2,31,30,-1,14,2,30,-1,30,33,14,-1,32,14,33,-1,33,11,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,26,35,36,-1,36,8,26,-1,8,36,37,-1,37,28,8,-1,28,37,38,-1,38,10,28,-1,10,38,39,-1,39,24,10,-1,24,39,40,-1,40,23,24,-1,23,40,41,-1,41,12,23,-1,12,41,42,-1,42,11,12,-1,11,42,43,-1,43,32,11,-1,32,43,44,-1,44,13,32,-1,13,44,45,-1,45,34,13,-1,34,45,46,-1,46,9,34,-1,9,46,35,-1,35,26,9,-1});
  }
}
protected class MFInt3234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,34,27,-1,27,12,5,-1,7,28,27,-1,27,34,7,-1,9,10,11,-1,11,12,9,-1,30,13,14,-1,14,33,30,-1,13,15,16,-1,16,14,13,-1,17,18,19,-1,19,20,17,-1,18,21,22,-1,22,19,18,-1,21,23,24,-1,25,26,27,-1,27,28,25,-1,26,9,12,-1,12,27,26,-1,12,11,32,-1,32,5,12,-1,33,14,4,-1,4,3,33,-1,16,8,4,-1,4,14,16,-1,20,19,2,-1,2,6,20,-1,19,22,29,-1,29,2,19,-1,24,23,1,-1,1,0,24,-1,15,17,20,-1,20,16,15,-1,16,20,6,-1,6,8,16,-1,28,7,1,-1,1,23,28,-1,21,25,28,-1,28,23,21,-1,22,24,0,-1,0,29,22,-1,21,24,22,-1,26,31,9,-1,9,31,10,-1,31,13,30,-1,13,31,15,-1,15,31,17,-1,17,31,18,-1,18,31,21,-1,21,31,25,-1,25,31,26,-1,10,31,30,-1,11,10,30,-1,30,33,11,-1,32,11,33,-1,33,3,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,1,35,36,-1,36,0,1,-1,0,36,37,-1,37,29,0,-1,29,37,38,-1,38,2,29,-1,2,38,39,-1,39,6,2,-1,6,39,40,-1,40,8,6,-1,8,40,41,-1,41,4,8,-1,4,41,42,-1,42,3,4,-1,3,42,43,-1,43,32,3,-1,32,43,44,-1,44,5,32,-1,5,44,45,-1,45,34,5,-1,34,45,46,-1,46,7,34,-1,7,46,35,-1,35,1,7,-1});
  }
}
protected class MFVec3f35 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-37.68f,-189.3067f,-32.1556f,-51.2222f,-194.5956f,8.0711f,-16.1644f,-186.32f,-50.8667f,38.3333f,-188.5378f,-32.0667f,49.6222f,-192.5244f,-2.8667f,33.2444f,-191.6578f,45.6267f,-2.7333f,-189.8756f,57.5422f,-34.1067f,-192.4311f,45.7244f,-3.6311f,-237.0222f,64.6311f,-45.9333f,-246.6667f,45.0756f,39.4222f,-250f,46.2844f,11.2756f,-254.3556f,-63.3556f,45.5778f,-248.5778f,-40.2444f,-45.6667f,-248.5778f,-42.2f,-15.72f,-211.2667f,-54.1111f,-41.3511f,-211.9378f,-35.3556f,34.9822f,-210.1422f,-34.6444f,57.8444f,-233.2889f,17.1822f,31.4978f,-217.4044f,46.4089f,-1.4178f,-211.6844f,58.9244f,-36.4267f,-214.0533f,46.4711f,-56.6444f,-217.4222f,3.6889f,49.1778f,-193.3467f,18.3911f,51.8889f,-261.9556f,-8.8089f,51.0889f,-262.2667f,14.2667f,58.7778f,-231.2533f,-5.4622f,-23.4711f,-241.7778f,58.3822f,-17.2356f,-212.84f,54.9422f,17.6889f,-243.4222f,58.9867f,16.7289f,-214.5156f,54.9111f,10.2578f,-186.0533f,-50.8222f,-2.0222f,-173.6f,6.3867f,-13.4f,-254.2222f,-63.5778f,8.9689f,-210.6844f,-53.9778f,-59.5333f,-259.0667f,3.4978f,-19.7733f,-278.5333f,50.44f,-4.8089f,-273.1556f,55.0044f,11.3644f,-279.8667f,50.8311f,28.1244f,-286.5333f,41.1156f,37.9467f,-299.3778f,14.1067f,38.6711f,-298.6667f,-6.3956f,33.6933f,-283.2889f,-32.3778f,5.7733f,-289.5556f,-51f,-10.8f,-289.8222f,-51.1333f,-36.8089f,-284.3556f,-33.9333f,-48.8222f,-296.8889f,5.5156f,-37.3244f,-283.8667f,40.1778f});
  }
}
protected class MFVec2f36 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.227f,0.1089f,0.2217f,0.1285f,0.2533f,0.0835f,0.273f,0.1232f,0.2824f,0.0941f,0.2433f,0.1632f,0.2685f,0.0797f,0.2165f,0.148f,0.2759f,0.0832f,0.2428f,0.156f,0.2563f,0.142f,0.2584f,0.1419f,0.2431f,0.1588f,0.2715f,0.1062f,0.2761f,0.1011f,0.2698f,0.09f,0.2775f,0.078f,0.2629f,0.0863f,0.248f,0.0935f,0.2498f,0.0895f,0.2702f,0.0748f,0.2296f,0.1148f,0.2397f,0.101f,0.2249f,0.1266f,0.2295f,0.1126f,0.2207f,0.1406f,0.2252f,0.1591f,0.2245f,0.1634f,0.2202f,0.1406f,0.2407f,0.0951f,0.2662f,0.1249f,0.2599f,0.1313f,0.2623f,0.1418f,0.2691f,0.1232f,0.2231f,0.166f,0.2217f,0.1285f,0.227f,0.1089f,0.2407f,0.0951f,0.2533f,0.0835f,0.2685f,0.0797f,0.2759f,0.0832f,0.2824f,0.0941f,0.273f,0.1232f,0.2623f,0.1418f,0.2433f,0.1632f,0.2231f,0.166f,0.2165f,0.148f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1});
  }
}
protected class MFInt3240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1});
  }
}
protected class MFVec3f41 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {39.4978f,-152.7778f,50.8133f,-30.9378f,-234.4889f,39.7111f,-36.88f,-188.3689f,38.8578f,-24.48f,-250.5778f,45.9733f,38.1244f,-253.8667f,51f,17.2711f,-135.9111f,49.28f,-30.4756f,-158.9556f,43.6356f,-5.6533f,-141.7778f,52.5511f,16.8133f,-254.5333f,49.2311f,-6.5156f,-254.2667f,52.8489f,17.1333f,-121.3778f,34.3778f,-25.16f,-131.0222f,14.8222f,-2.7067f,-126.1333f,28.1289f,38.4489f,-127.8222f,28.7333f,-28.2533f,-254.1333f,14.6178f,39.1778f,-255.6889f,14.08f,6.3822f,-255.6444f,16.8756f,-34.5467f,-235.8222f,13.4711f,-40.2533f,-189.1244f,13.3022f,-27.3867f,-232.3156f,55.7644f,-33.12f,-198.6133f,54.9333f,-27.3733f,-178.4444f,59.6222f,-4.8578f,-166.6044f,68.2444f,14.9378f,-162.7867f,64.5689f,33.2578f,-173.3022f,65.6222f,31.9778f,-244.3556f,65.8f,15.5022f,-244.7556f,64.6667f,-7.2711f,-244.5778f,68.3778f,-22.2711f,-242.2222f,61.8578f,18.9511f,-129.5556f,7.5378f,1.8f,-133.6444f,1.6178f,-15.1822f,-137.2f,-11.0178f,-28.4356f,-188.0222f,-11.7422f,-23.0978f,-231.9111f,-11.3778f,-19.3333f,-243.1556f,-9.9022f,8.7556f,-244.3556f,-8.2889f,31.7911f,-244.2222f,-12.0667f,31.1067f,-132.8444f,1.2133f,56.7333f,-159.9733f,41.1778f,55.8889f,-148.8267f,25.1156f,50.2444f,-139.3778f,7.5067f,50.8667f,-239.0667f,-4.3778f,56.5111f,-247.5111f,14.8933f,55.6667f,-245.8222f,44.12f,52.1556f,-248.6222f,57.9467f,53.2222f,-176.9733f,57.7644f});
  }
}
protected class MFVec2f42 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2314f,0.0879f,0.21f,0.1541f,0.2053f,0.1595f,0.2104f,0.1443f,0.2271f,0.0958f,0.2224f,0.1067f,0.2032f,0.149f,0.2132f,0.1285f,0.2197f,0.1123f,0.2163f,0.1174f,0.227f,0.1089f,0.2165f,0.148f,0.2217f,0.1285f,0.2407f,0.0951f,0.2178f,0.1526f,0.2363f,0.0929f,0.2213f,0.1179f,0.2171f,0.1588f,0.2129f,0.1643f,0.21f,0.1541f,0.2053f,0.1595f,0.2032f,0.149f,0.2132f,0.1285f,0.2224f,0.1067f,0.2314f,0.0879f,0.2271f,0.0958f,0.2197f,0.1123f,0.2163f,0.1174f,0.2104f,0.1443f,0.227f,0.1089f,0.2217f,0.1285f,0.2165f,0.148f,0.2129f,0.1643f,0.2171f,0.1588f,0.2178f,0.1526f,0.2213f,0.1179f,0.2363f,0.0929f,0.2407f,0.0951f,0.2314f,0.0879f,0.2407f,0.0951f,0.2407f,0.0951f,0.2363f,0.0929f,0.2363f,0.0929f,0.2271f,0.0958f,0.2271f,0.0958f,0.2314f,0.0879f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,12,4,-1,1,0,6,-1,6,7,1,-1,10,12,0,-1,0,1,10,-1,1,2,11,-1,11,10,1,-1,8,3,2,-1,2,5,8,-1,11,2,13,-1,12,15,4,-1,9,6,0,-1,0,4,9,-1,1,7,5,-1,5,2,1,-1,3,14,13,-1,13,2,3,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,3,16,17,-1,17,14,3,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,4,15,-1,4,19,20,-1,20,9,4,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1});
  }
}
protected class MFInt3246 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,12,1,-1,2,0,6,-1,6,7,2,-1,10,12,0,-1,0,2,10,-1,2,3,11,-1,11,10,2,-1,8,4,3,-1,3,5,8,-1,11,3,13,-1,12,15,1,-1,9,6,0,-1,0,1,9,-1,2,7,5,-1,5,3,2,-1,4,14,13,-1,13,3,4,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,4,16,17,-1,17,14,4,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,1,15,-1,1,19,20,-1,20,9,1,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,4,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1});
  }
}
protected class MFVec3f47 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.3467f,-237.8222f,39.5467f,-12.1244f,-222.7111f,40.7156f,-14.1556f,-177.3867f,38.2622f,13.0356f,-147.9022f,41.9778f,12.9022f,-243.9556f,41.5022f,-21.0622f,-180.5911f,68.5111f,-13.7689f,-237.7333f,69.8889f,-23.4044f,-221.96f,66.7778f,10.4622f,-163.8933f,73.4f,10.5778f,-244.2222f,74.0222f,-9.3022f,-224.9822f,12.9867f,-15.2444f,-178.8711f,12.1378f,-2.84f,-241.1111f,19.2489f,-8.84f,-149.4622f,16.9111f,15.9822f,-132.2667f,25.8267f,15.12f,-244.8f,26.1289f,24.5422f,-152.5333f,39.9422f,26.1244f,-145.3733f,32.5778f,25.3644f,-238.9333f,32.8178f,24.04f,-238.4f,42.5778f,22.1111f,-238.6222f,69.6222f,21.9911f,-167.3556f,69.0444f,-11.1511f,-232.1778f,85.9778f,-19.0089f,-220.8133f,83.2222f,-16.9289f,-188.0978f,84.8667f,10.6978f,-175.2044f,89.4889f,17.28f,-177.0044f,86.3333f,17.3911f,-233.8667f,86.8222f,9.8978f,-237.1556f,90.0667f});
  }
}
protected class MFVec2f48 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2027f,0.1355f,0.2132f,0.1171f,0.1958f,0.1447f,0.1899f,0.1499f,0.2047f,0.1286f,0.1825f,0.1473f,0.1858f,0.1369f,0.1864f,0.1452f,0.1953f,0.1244f,0.2059f,0.1148f,0.21f,0.1541f,0.2053f,0.1595f,0.2104f,0.1443f,0.2032f,0.149f,0.2132f,0.1285f,0.2163f,0.1174f,0.2047f,0.1286f,0.2132f,0.1285f,0.2163f,0.1174f,0.2132f,0.1171f,0.2059f,0.1148f,0.1953f,0.1244f,0.1858f,0.1369f,0.1864f,0.1452f,0.1825f,0.1473f,0.1953f,0.1244f,0.1953f,0.1244f,0.2059f,0.1148f,0.2059f,0.1148f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,11,14,-1,5,7,2,-1,2,0,5,-1,1,10,9,-1,9,2,1,-1,15,8,20,-1,20,23,15,-1,3,4,19,-1,19,21,3,-1,13,4,10,-1,10,18,13,-1,12,1,6,-1,6,16,12,-1,6,1,2,-1,2,7,6,-1,5,0,14,-1,14,17,5,-1,10,4,3,-1,3,9,10,-1,9,11,0,-1,0,2,9,-1,10,1,12,-1,12,18,10,-1,8,11,9,-1,9,3,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,3,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,29,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1});
  }
}
protected class MFInt3252 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,11,14,-1,5,7,2,-1,2,1,5,-1,3,10,9,-1,9,2,3,-1,15,8,20,-1,20,23,15,-1,0,4,19,-1,19,21,0,-1,13,4,10,-1,10,18,13,-1,12,3,6,-1,6,16,12,-1,6,3,2,-1,2,7,6,-1,5,1,14,-1,14,17,5,-1,10,4,0,-1,0,9,10,-1,9,11,1,-1,1,2,9,-1,10,3,12,-1,12,18,10,-1,8,11,9,-1,9,0,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,0,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,14,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1});
  }
}
protected class MFVec3f53 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-25.3556f,-230.6756f,82.1556f,-28.0133f,-178.1333f,95.3556f,-34.1422f,-212.4f,93.0444f,-22.1111f,-204.1822f,28.6222f,-18.6444f,-164.4667f,34.4844f,-23.6267f,-227.0978f,117.3111f,-24.0889f,-184.8711f,118.7778f,-28.0533f,-212.4f,121.9778f,-13.2178f,-220.1733f,31.8533f,-32.0267f,-208.8533f,67.5333f,-25.7422f,-172.5644f,71.8f,-24.0178f,-229.9378f,64.6267f,16.5156f,-172.1556f,93f,14.7067f,-153.5511f,40.5733f,16.6978f,-230.6756f,88.5111f,13.16f,-226.9022f,35.6756f,19.9644f,-181.1422f,118.1111f,20.04f,-227.1111f,116.4667f,14.9867f,-162.8311f,68.0222f,-15.6667f,-163.0844f,17.5244f,-8.3733f,-220.2178f,18.9111f,-18.0089f,-204.4533f,15.8222f,15.8578f,-146.3911f,22.4267f,15.9733f,-226.7244f,23.0444f,26.8933f,-171.0711f,64.68f,26.8133f,-161.7689f,37.1733f,26.64f,-159.2578f,30.7556f,27.0444f,-218.1422f,31.2489f,25.2844f,-218.1956f,35.6533f,28.6622f,-221.9244f,87.8889f,30.9467f,-219.4f,107.6667f,30.9422f,-187.2444f,108.8222f,28.36f,-180.3733f,89.6222f,-16.1467f,-222.1289f,127.3111f,-19.8311f,-211.0178f,131.1333f,-16.5333f,-190.2044f,128.5111f,20.08f,-187.3867f,127.9333f,29.2044f,-192f,120.2444f,29.2089f,-216.3067f,119.2667f,20.1467f,-222.1378f,126.5556f,-1.1867f,-201.8f,5.7467f,4.5156f,-211.2756f,8.1022f,21.3511f,-215.7067f,9.3778f,25.1289f,-212.48f,12.9689f,24.7867f,-163.8489f,12.5733f,21.5511f,-158.8f,7.9733f,0.5778f,-169.6489f,7.3733f});
  }
}
protected class MFVec2f54 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.177f,0.1457f,0.1567f,0.1378f,0.1506f,0.1431f,0.1539f,0.1386f,0.1751f,0.1447f,0.1523f,0.1336f,0.1493f,0.1348f,0.1463f,0.1377f,0.1689f,0.1382f,0.1638f,0.1444f,0.1645f,0.1416f,0.1607f,0.138f,0.1731f,0.1071f,0.1859f,0.1202f,0.175f,0.1048f,0.1985f,0.1126f,0.1682f,0.1025f,0.1699f,0.1017f,0.1795f,0.1136f,0.1825f,0.1473f,0.1858f,0.1369f,0.1864f,0.1452f,0.1953f,0.1244f,0.2059f,0.1148f,0.1795f,0.1136f,0.1859f,0.1202f,0.1953f,0.1244f,0.2059f,0.1148f,0.1985f,0.1126f,0.175f,0.1048f,0.1699f,0.1017f,0.1682f,0.1025f,0.1731f,0.1071f,0.1523f,0.1336f,0.1463f,0.1377f,0.1493f,0.1348f,0.1682f,0.1025f,0.1682f,0.1025f,0.1699f,0.1017f,0.1699f,0.1017f,0.1864f,0.1452f,0.1858f,0.1369f,0.2059f,0.1148f,0.2059f,0.1148f,0.1953f,0.1244f,0.1953f,0.1244f,0.1825f,0.1473f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,16,17,-1,17,10,9,-1,11,8,2,-1,2,1,11,-1,7,3,2,-1,2,8,7,-1,7,13,4,-1,4,3,7,-1,12,5,4,-1,4,13,12,-1,5,12,0,-1,0,6,5,-1,0,11,1,-1,1,6,0,-1,14,15,19,-1,19,20,14,-1,14,10,17,-1,17,15,14,-1,9,21,18,-1,18,16,9,-1,7,8,9,-1,9,10,7,-1,8,11,21,-1,21,9,8,-1,12,13,14,-1,14,20,12,-1,13,7,10,-1,10,14,13,-1,11,22,21,-1,0,12,23,-1,23,24,0,-1,11,0,24,-1,24,22,11,-1,23,12,20,-1,37,42,41,-1,41,40,39,-1,37,41,39,-1,38,37,39,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,27,26,25,-1,28,27,25,-1,28,25,29,-1,35,31,30,-1,30,36,35,-1,17,25,26,-1,26,15,17,-1,15,26,27,-1,27,19,15,-1,19,27,28,-1,28,18,19,-1,18,28,29,-1,29,16,18,-1,16,29,25,-1,25,17,16,-1,19,30,31,-1,31,20,19,-1,20,31,32,-1,32,23,20,-1,23,32,33,-1,33,24,23,-1,24,33,34,-1,34,22,24,-1,22,34,35,-1,35,21,22,-1,21,35,36,-1,36,18,21,-1,18,36,30,-1,30,19,18,-1,2,37,38,-1,38,1,2,-1,1,38,39,-1,39,6,1,-1,6,39,40,-1,40,5,6,-1,5,40,41,-1,41,4,5,-1,4,41,42,-1,42,3,4,-1,3,42,37,-1,37,2,3,-1});
  }
}
protected class MFInt3258 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,28,29,-1,29,1,2,-1,11,13,4,-1,4,5,11,-1,10,6,4,-1,4,13,10,-1,10,12,7,-1,7,6,10,-1,14,8,7,-1,7,12,14,-1,8,14,3,-1,3,9,8,-1,3,11,5,-1,5,9,3,-1,0,27,31,-1,31,33,0,-1,0,1,29,-1,29,27,0,-1,2,35,30,-1,30,28,2,-1,15,16,17,-1,17,18,15,-1,16,19,34,-1,34,17,16,-1,20,21,22,-1,22,32,20,-1,21,23,24,-1,24,22,21,-1,19,36,34,-1,25,20,37,-1,37,39,25,-1,19,26,38,-1,38,36,19,-1,37,20,32,-1,52,57,56,-1,56,55,54,-1,52,56,54,-1,53,52,54,-1,50,49,48,-1,50,48,47,-1,46,50,47,-1,42,41,40,-1,43,42,40,-1,43,40,44,-1,50,46,45,-1,45,51,50,-1,29,40,41,-1,41,27,29,-1,27,41,42,-1,42,31,27,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,28,30,-1,28,44,40,-1,40,29,28,-1,31,45,46,-1,46,33,31,-1,32,46,47,-1,47,37,32,-1,37,47,48,-1,48,39,37,-1,38,48,49,-1,49,36,38,-1,36,49,50,-1,50,34,36,-1,35,50,51,-1,51,30,35,-1,30,51,45,-1,45,31,30,-1,4,52,53,-1,53,5,4,-1,5,53,54,-1,54,9,5,-1,9,54,55,-1,55,8,9,-1,8,55,56,-1,56,7,8,-1,7,56,57,-1,57,6,7,-1,6,57,52,-1,52,4,6,-1});
  }
}
protected class MFVec3f59 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {21.9467f,-187.6178f,43.8667f,22.1511f,-173.4711f,63.8533f,-23.6622f,-172.7733f,64.4533f,-26.2578f,-193.9644f,64.9022f,-22.7111f,-213.3289f,63.1067f,22.6711f,-213.3289f,63.2222f,25.4711f,-194.4844f,64.4089f,-22.7733f,-192.8133f,44.0889f,-20.3556f,-168.1422f,39.5867f,-17.6f,-169.1867f,31.3333f,-21.1867f,-194.9956f,33.3333f,19.3422f,-168.9244f,40.9733f,19.1689f,-209.0489f,41.6222f,-19.6311f,-209.0089f,40.9111f,-16.5956f,-208.1556f,30.2533f,-18.6933f,-209.6933f,19.6933f,-19.1556f,-167.4622f,21.1378f,-23.1244f,-194.9956f,24.3289f,24.8978f,-163.7378f,20.4844f,24.9733f,-209.7022f,18.8222f,24.6356f,-208.1422f,32.0044f,24.6933f,-168.5556f,31.9378f,24.8267f,-173.0711f,40.68f,25.5022f,-200.6622f,41.2933f,24.9156f,-186.2889f,43.3022f,-18.0622f,-194.1778f,13.44f,-15.2489f,-203.7422f,9.0844f,18.7467f,-203.7644f,8.8044f,18.6889f,-169.4489f,10.0622f,-14.96f,-172.28f,10.1111f,33.24f,-200.3067f,19.1822f,33.0444f,-199.4f,26.8222f,33.5467f,-195.0667f,32.2044f,33.2044f,-186.7333f,33.3689f,33.1556f,-179.0756f,31.8489f,33.0756f,-176.4622f,26.7822f,33.1956f,-173.6667f,20.1467f,-18.3956f,-178.9778f,74.5556f,17.1956f,-179.52f,74.0222f,19.6089f,-194.7644f,74.7333f,17.68f,-207.7067f,73.6667f,-17.7333f,-207.7022f,73.4889f,-20.2356f,-194.04f,75.1333f});
  }
}
protected class MFVec2f60 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.148f,0.1294f,0.142f,0.1322f,0.1446f,0.131f,0.1613f,0.0957f,0.1341f,0.1263f,0.1554f,0.0919f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f,0.1392f,0.1292f,0.16f,0.0958f,0.1443f,0.128f,0.1415f,0.1284f,0.1616f,0.0962f,0.1346f,0.0953f,0.1273f,0.0961f,0.126f,0.0891f,0.1339f,0.0889f,0.1175f,0.0992f,0.228f,0.0809f,0.2186f,0.0857f,0.2172f,0.0848f,0.2097f,0.0859f,0.2098f,0.0901f,0.2285f,0.0738f,0.1152f,0.1058f,0.1523f,0.1336f,0.1493f,0.1348f,0.1463f,0.1377f,0.1682f,0.1025f,0.1699f,0.1017f,0.2293f,0.0837f,0.1648f,0.0986f,0.112f,0.093f,0.1632f,0.098f,0.113f,0.0993f,0.2302f,0.0796f,0.1153f,0.1053f,0.2293f,0.0736f,0.1463f,0.1377f,0.1523f,0.1336f,0.1699f,0.1017f,0.1682f,0.1025f,0.1493f,0.1348f,0.1699f,0.1017f,0.1648f,0.0986f,0.2302f,0.0796f,0.2293f,0.0736f,0.113f,0.0993f,0.112f,0.093f,0.1682f,0.1025f,0.1341f,0.1263f,0.1554f,0.0919f,0.1559f,0.0889f,0.1571f,0.0927f,0.1363f,0.1268f,0.1317f,0.1272f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,5,-1,5,2,3,-1,1,2,5,-1,5,0,1,-1,1,0,6,-1,6,7,1,-1,8,2,1,-1,1,7,8,-1,3,2,8,-1,8,9,3,-1,10,4,3,-1,3,9,10,-1,11,5,4,-1,4,10,11,-1,0,5,11,-1,11,6,0,-1,7,6,12,-1,12,13,7,-1,14,8,7,-1,7,13,14,-1,9,8,14,-1,14,15,9,-1,16,10,9,-1,9,15,16,-1,17,11,10,-1,10,16,17,-1,6,11,17,-1,17,12,6,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,18,19,-1,19,13,12,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,22,-1,22,16,15,-1,16,22,23,-1,23,17,16,-1,17,23,18,-1,18,12,17,-1});
  }
}
protected class MFInt3264 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,13,14,15,-1,15,12,13,-1,8,3,5,-1,5,6,8,-1,0,3,8,-1,8,9,0,-1,10,1,0,-1,0,9,10,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,7,4,-1,12,15,16,-1,16,18,12,-1,20,8,6,-1,6,19,20,-1,9,8,20,-1,20,21,9,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,7,11,23,-1,23,17,7,-1,24,29,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,16,24,25,-1,25,18,16,-1,19,25,26,-1,26,20,19,-1,20,26,27,-1,27,21,20,-1,21,27,28,-1,28,22,21,-1,22,28,29,-1,29,23,22,-1,23,29,24,-1,24,17,23,-1});
  }
}
protected class MFVec3f65 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.9111f,-176.4356f,53.7778f,-16.1333f,-175.8578f,54.7156f,-15.8444f,-192.4133f,61.0578f,-15.5644f,-205.9822f,52.6933f,14.4667f,-205.9822f,51.5289f,15.2933f,-192.4133f,60.2711f,20.7022f,-172.9511f,38.6489f,-23.1511f,-172.24f,38.6267f,-25.5778f,-190.56f,40.3333f,-22.72f,-208.1778f,38.3511f,20.5422f,-208.1111f,38.88f,24.3689f,-196.0533f,40.3956f,22.1689f,-168.9511f,21.0089f,-23.6489f,-168.2533f,21.6133f,-26.2444f,-189.4489f,22.0622f,-22.6933f,-208.8133f,20.2667f,22.6844f,-208.8133f,20.3822f,25.4889f,-189.9644f,21.5689f,16.9644f,-174.6489f,10.1289f,-18.4267f,-174.1111f,10.6489f,-20.2489f,-189.0489f,11.24f,-17.7689f,-202.6f,9.5956f,17.4444f,-202.6044f,9.7911f,19.3556f,-189.7778f,10.84f});
  }
}
protected class MFVec2f66 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1287f,0.113f,0.1423f,0.0921f,0.1396f,0.0889f,0.1257f,0.1107f,0.1415f,0.0903f,0.1274f,0.1123f,0.1297f,0.1214f,0.15f,0.0896f,0.1273f,0.1223f,0.1313f,0.1227f,0.1521f,0.0901f,0.1498f,0.0859f,0.0527f,0.151f,0.0282f,0.1325f,0.0446f,0.0894f,0.0746f,0.0899f,0.1016f,0.0977f,0.1554f,0.0919f,0.0779f,0.162f,0.1341f,0.1263f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f,0.1554f,0.0919f,0.0779f,0.162f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,8,9,-1,9,4,1,-1,5,0,2,-1,2,7,5,-1,4,6,3,-1,3,1,4,-1,10,0,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,1,3,-1,1,19,20,-1,20,8,1,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,0,10,-1,0,22,23,-1,23,2,0,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1});
  }
}
protected class MFInt3270 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,8,9,-1,9,4,0,-1,5,1,2,-1,2,7,5,-1,4,6,3,-1,3,0,4,-1,10,1,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,0,3,-1,0,19,20,-1,20,8,0,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,1,10,-1,1,22,23,-1,23,2,1,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1});
  }
}
protected class MFVec3f71 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.3689f,-247.0667f,34.2711f,11.2667f,-141.0222f,32.6756f,10.2844f,-247.7333f,54.7689f,12.4667f,-155.3733f,55.3911f,-14.7422f,-150.72f,35.9822f,-14.8756f,-246.7556f,35.5067f,-17.3156f,-166.7111f,67.4f,-17.2f,-247.0222f,68.0222f,11.1289f,-129.2444f,16.56f,-11.7956f,-135.1111f,19.8311f,10.6711f,-247.8222f,16.5156f,-12.6578f,-247.6f,20.1333f,-22.32f,-159.8711f,24.1733f,-24.3289f,-165.8711f,31.7733f,-26.6622f,-177.9022f,60.9867f,-26.5244f,-235.8222f,61.5378f,-24.7689f,-235.6444f,34.32f,-23.1378f,-236.0889f,24.4133f,25.6622f,-163.3511f,50.6f,24.48f,-152.0267f,29.9022f,24.3956f,-146.3422f,20.9289f,24.0889f,-237.1111f,20.8844f,23.7156f,-236.6222f,34.0444f,23.5644f,-237.0667f,50.0267f,-11.6978f,-175.3067f,81.2667f,16.2844f,-164.4667f,68.7333f,20.52f,-169.6578f,67.2667f,18.7556f,-231.6089f,66.7778f,12.3467f,-239.0667f,69.0444f,-12.2089f,-238.4444f,82.8667f,-16.1111f,-231.4311f,80.2f,-16.2222f,-183.2578f,79.7556f,9.3867f,-135.4667f,4.2444f,-9.6133f,-140.3111f,7.2044f,-17.7422f,-161.6978f,10.36f,-18.5111f,-233.2f,10.5822f,-12.1333f,-241.8222f,7.9956f,9.0356f,-242f,4.6089f,17.7911f,-233.4667f,7.4667f,18.0711f,-149.0578f,7.5067f});
  }
}
protected class MFVec2f72 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2179f,0.1044f,0.2186f,0.1086f,0.2128f,0.1035f,0.2098f,0.0996f,0.2047f,0.1286f,0.2132f,0.1171f,0.1953f,0.1244f,0.2059f,0.1148f,0.2224f,0.1067f,0.2132f,0.1285f,0.2197f,0.1123f,0.2163f,0.1174f,0.2132f,0.1285f,0.2047f,0.1286f,0.1953f,0.1244f,0.1953f,0.1244f,0.2132f,0.1171f,0.2163f,0.1174f,0.2098f,0.0996f,0.2179f,0.1044f,0.2224f,0.1067f,0.2224f,0.1067f,0.2186f,0.1086f,0.2128f,0.1035f,0.1953f,0.1244f,0.2098f,0.0996f,0.2098f,0.0996f,0.2128f,0.1035f,0.2098f,0.0996f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.2224f,0.1067f,0.2132f,0.1285f,0.2132f,0.1285f,0.2163f,0.1174f,0.2132f,0.1285f,0.2224f,0.1067f,0.2224f,0.1067f,0.2224f,0.1067f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,15,7,-1,7,4,12,-1,0,8,9,-1,9,2,0,-1,1,10,11,-1,11,3,1,-1,5,0,2,-1,2,6,5,-1,8,1,3,-1,3,9,8,-1,14,13,12,-1,12,4,14,-1,18,17,13,-1,13,14,18,-1,42,39,38,-1,38,43,42,-1,46,51,50,-1,50,47,46,-1,29,35,34,-1,34,30,29,-1,19,26,25,-1,25,20,19,-1,28,27,26,-1,26,19,28,-1,21,24,23,-1,23,22,21,-1,37,36,35,-1,35,29,37,-1,30,34,31,-1,20,25,24,-1,24,21,20,-1,31,34,33,-1,33,32,31,-1,3,19,20,-1,20,9,3,-1,9,20,21,-1,21,2,9,-1,2,21,22,-1,22,6,2,-1,42,41,40,-1,40,39,42,-1,7,23,24,-1,24,4,7,-1,4,24,25,-1,25,16,4,-1,16,25,26,-1,26,14,16,-1,14,26,27,-1,27,18,14,-1,50,49,48,-1,48,47,50,-1,11,28,19,-1,19,3,11,-1,0,29,30,-1,30,8,0,-1,8,30,31,-1,31,1,8,-1,1,31,32,-1,32,10,1,-1,46,53,52,-1,52,51,46,-1,17,33,34,-1,34,13,17,-1,13,34,35,-1,35,12,13,-1,12,35,36,-1,36,15,12,-1,38,45,44,-1,44,43,38,-1,5,37,29,-1,29,0,5,-1,15,38,39,-1,39,7,15,-1,7,39,40,-1,40,23,7,-1,23,40,41,-1,41,22,23,-1,22,41,42,-1,42,6,22,-1,6,42,43,-1,43,5,6,-1,5,43,44,-1,44,37,5,-1,37,44,45,-1,45,36,37,-1,36,45,38,-1,38,15,36,-1,10,46,47,-1,47,11,10,-1,11,47,48,-1,48,28,11,-1,28,48,49,-1,49,27,28,-1,27,49,50,-1,50,18,27,-1,18,50,51,-1,51,17,18,-1,17,51,52,-1,52,33,17,-1,33,52,53,-1,53,32,33,-1,32,53,46,-1,46,10,32,-1});
  }
}
protected class MFInt3276 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,10,-1,10,0,1,-1,2,11,12,-1,12,3,2,-1,5,15,16,-1,16,6,5,-1,8,2,3,-1,3,9,8,-1,11,5,6,-1,6,12,11,-1,4,13,1,-1,1,0,4,-1,17,14,13,-1,13,4,17,-1,45,42,41,-1,41,46,45,-1,49,54,53,-1,53,50,49,-1,32,38,37,-1,37,33,32,-1,22,29,28,-1,28,23,22,-1,31,30,29,-1,29,22,31,-1,24,27,26,-1,26,25,24,-1,40,39,38,-1,38,32,40,-1,33,21,34,-1,23,28,27,-1,27,24,23,-1,34,37,36,-1,36,35,34,-1,6,22,23,-1,23,12,6,-1,12,23,24,-1,24,3,12,-1,3,24,25,-1,25,9,3,-1,45,44,43,-1,43,42,45,-1,10,26,27,-1,27,0,10,-1,20,27,28,-1,28,18,20,-1,18,28,29,-1,29,19,18,-1,4,29,30,-1,30,17,4,-1,53,52,51,-1,51,50,53,-1,16,31,22,-1,22,6,16,-1,2,32,33,-1,33,11,2,-1,11,33,34,-1,34,5,11,-1,5,34,35,-1,35,15,5,-1,49,56,55,-1,55,54,49,-1,14,36,37,-1,37,13,14,-1,13,37,38,-1,38,1,13,-1,1,38,39,-1,39,7,1,-1,41,48,47,-1,47,46,41,-1,8,40,32,-1,32,2,8,-1,7,41,42,-1,42,10,7,-1,10,42,43,-1,43,26,10,-1,26,43,44,-1,44,25,26,-1,25,44,45,-1,45,9,25,-1,9,45,46,-1,46,8,9,-1,8,46,47,-1,47,40,8,-1,40,47,48,-1,48,39,40,-1,39,48,41,-1,41,7,39,-1,15,49,50,-1,50,16,15,-1,16,50,51,-1,51,31,16,-1,31,51,52,-1,52,30,31,-1,30,52,53,-1,53,17,30,-1,17,53,54,-1,54,14,17,-1,14,54,55,-1,55,36,14,-1,36,55,56,-1,56,35,36,-1,35,56,49,-1,49,15,35,-1});
  }
}
protected class MFVec3f77 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {16.3333f,-177.3733f,96.6f,14.5422f,-154.0489f,44.6356f,-14.24f,-177.8267f,99.1778f,-16.0489f,-159.2222f,46.7511f,-14.0578f,-236.3556f,94.6889f,16.84f,-186.2133f,121.0444f,-10.7911f,-186.8133f,124.2889f,-10.7156f,-232.7822f,122.6444f,14.96f,-165.6844f,70.4222f,-15.7689f,-168.5022f,74.2f,14.8844f,-140.7111f,16.5911f,-14.8978f,-152.0622f,28.6044f,14.2622f,-236.3556f,92.1556f,12.4f,-233.5111f,41.44f,-17.5956f,-232.5733f,41.8533f,16.7378f,-232.7289f,119.4444f,-17.5956f,-232.5733f,41.8533f,12.7022f,-233.0667f,15.9689f,-14.7822f,-232.3911f,29.2222f,-26.8089f,-166.6667f,44.4311f,-26.7289f,-175.9644f,71.9333f,-25.2356f,-185.2711f,96.9111f,-22.56f,-192.3289f,116.6444f,-22.5511f,-225.7422f,115.4f,-24.9644f,-228.36f,94.8667f,-28.4044f,-224.6444f,42.8222f,-28.3111f,-224.6267f,42.3867f,-26.4667f,-224.5644f,37.4533f,-26.8444f,-163.7289f,36.9467f,26.3956f,-182.7911f,94.2444f,25.0267f,-171.0178f,67.8444f,24.6667f,-159.3556f,41.9867f,24.9067f,-149.7689f,21.8089f,23.0889f,-227.84f,21.28f,22.8222f,-228.1956f,41.3333f,24.64f,-230.9822f,91.6222f,26.7822f,-228.0578f,113.7111f,26.7111f,-190.32f,115.0444f,16.3067f,-226.9956f,128.0222f,-8.9644f,-227.0578f,131.4f,-16.7911f,-222.4089f,130.6f,-16.8f,-196.9822f,131.4889f,-9.1511f,-193.4044f,132.5111f,16.4711f,-192.8356f,129.1778f,21.9467f,-195.12f,126.9111f,22.0044f,-224.3467f,125.8889f,9.56f,-147.6578f,0.2311f,-16.4711f,-157.8f,12.3022f,-25.8311f,-166.8356f,18.6f,-25.4889f,-220.7333f,19.0578f,-17.6711f,-225.9644f,13.5778f,7.2489f,-226.5911f,0.64f,13.1378f,-223.6133f,3.6889f,14.7867f,-152.8133f,4.1644f});
  }
}
protected class MFVec2f78 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.175f,0.1048f,0.1833f,0.0898f,0.1856f,0.0872f,0.1731f,0.1071f,0.1985f,0.1126f,0.2017f,0.0948f,0.1859f,0.1202f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.1699f,0.1017f,0.1937f,0.091f,0.1795f,0.1136f,0.2068f,0.0986f,0.2128f,0.1035f,0.2098f,0.0996f,0.1953f,0.1244f,0.2059f,0.1148f,0.1795f,0.1136f,0.1859f,0.1202f,0.1731f,0.1071f,0.2017f,0.0948f,0.1859f,0.1202f,0.1795f,0.1136f,0.1731f,0.1071f,0.1682f,0.1025f,0.1682f,0.1025f,0.1731f,0.1071f,0.1795f,0.1136f,0.1859f,0.1202f,0.1953f,0.1244f,0.1953f,0.1244f,0.1856f,0.0872f,0.1937f,0.091f,0.2017f,0.0948f,0.2098f,0.0996f,0.2098f,0.0996f,0.2017f,0.0948f,0.1856f,0.0872f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.1682f,0.1025f,0.1682f,0.1025f,0.1682f,0.1025f,0.1682f,0.1025f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.2098f,0.0996f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,6,20,-1,20,18,8,-1,14,11,19,-1,19,21,14,-1,6,1,20,-1,19,11,15,-1,0,2,3,-1,3,14,0,-1,12,8,16,-1,16,17,12,-1,15,11,12,-1,12,17,15,-1,6,3,2,-1,2,1,6,-1,0,14,21,-1,16,8,18,-1,3,6,5,-1,5,4,3,-1,6,8,7,-1,7,5,6,-1,10,9,12,-1,12,11,10,-1,14,13,10,-1,10,11,14,-1,13,14,3,-1,3,4,13,-1,8,12,9,-1,9,7,8,-1,19,23,24,-1,24,21,19,-1,22,18,20,-1,20,25,22,-1,31,30,36,-1,31,36,35,-1,34,31,35,-1,5,7,9,-1,9,10,13,-1,5,9,13,-1,4,5,13,-1,29,28,27,-1,27,26,29,-1,37,43,42,-1,42,41,37,-1,31,34,33,-1,33,32,31,-1,41,40,39,-1,41,39,38,-1,37,41,38,-1,25,26,27,-1,27,22,25,-1,22,27,28,-1,28,23,22,-1,23,28,29,-1,29,24,23,-1,24,29,26,-1,26,25,24,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,23,19,-1,23,32,33,-1,33,22,23,-1,22,33,34,-1,34,18,22,-1,18,34,35,-1,35,16,18,-1,16,35,36,-1,36,17,16,-1,17,36,30,-1,30,15,17,-1,21,37,38,-1,38,0,21,-1,0,38,39,-1,39,2,0,-1,2,39,40,-1,40,1,2,-1,1,40,41,-1,41,20,1,-1,20,41,42,-1,42,25,20,-1,25,42,43,-1,43,24,25,-1,24,43,37,-1,37,21,24,-1});
  }
}
protected class MFInt3282 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,30,-1,30,24,1,-1,3,2,25,-1,25,31,3,-1,0,4,30,-1,25,2,26,-1,9,10,5,-1,5,3,9,-1,7,1,27,-1,27,28,7,-1,26,2,8,-1,8,29,26,-1,0,6,11,-1,11,4,0,-1,9,3,31,-1,27,1,24,-1,12,15,14,-1,14,13,12,-1,15,17,16,-1,16,14,15,-1,19,18,21,-1,21,20,19,-1,23,22,19,-1,19,20,23,-1,22,23,12,-1,12,13,22,-1,17,21,18,-1,18,16,17,-1,35,37,38,-1,38,34,35,-1,36,32,33,-1,33,39,36,-1,45,44,50,-1,45,50,49,-1,48,45,49,-1,14,16,18,-1,18,19,22,-1,14,18,22,-1,13,14,22,-1,43,42,41,-1,41,40,43,-1,51,57,56,-1,56,55,51,-1,45,48,47,-1,47,46,45,-1,55,54,53,-1,55,53,52,-1,51,55,52,-1,39,40,41,-1,41,36,39,-1,36,41,42,-1,42,37,36,-1,37,42,43,-1,43,38,37,-1,38,43,40,-1,40,39,38,-1,26,44,45,-1,45,25,26,-1,35,45,46,-1,46,37,35,-1,37,46,47,-1,47,36,37,-1,36,47,48,-1,48,32,36,-1,24,48,49,-1,49,27,24,-1,27,49,50,-1,50,28,27,-1,29,50,44,-1,44,26,29,-1,31,51,52,-1,52,9,31,-1,9,52,53,-1,53,10,9,-1,11,53,54,-1,54,4,11,-1,4,54,55,-1,55,30,4,-1,33,55,56,-1,56,39,33,-1,39,56,57,-1,57,38,39,-1,38,57,51,-1,51,34,38,-1});
  }
}
protected class MFVec3f83 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-15.4578f,-174.16f,32.3778f,-14.7822f,-201.7511f,32.9911f,-15.3689f,-187.3778f,35f,-12.7244f,-190.28f,34.9867f,-11.1511f,-196.6667f,54.7733f,-9.1422f,-212.84f,54.0311f,-11.0844f,-208.2489f,32.7244f,11.6756f,-212.5956f,51.2933f,9.9022f,-208.5467f,30.2133f,14.2667f,-194.2933f,52.0133f,11.8222f,-172.8578f,51.4044f,10.0178f,-169.9467f,29.9467f,12.9689f,-191.8667f,31.8933f,-9.4444f,-172.28f,53.9956f,-10.3867f,-170.2089f,32.1956f,14.6089f,-174.0756f,28.4311f,14.6711f,-202.4356f,28.6978f,14.8933f,-188.4533f,31.1289f,12.7067f,-209.3244f,19.7111f,13.1111f,-169.9244f,18.8578f,-15.6489f,-209.2267f,23.7067f,-15.5911f,-169.6444f,23.6356f,12.1422f,-210.7378f,7.3333f,12.24f,-164.2267f,8.92f,-15.3867f,-164.8267f,12.1822f,-15.3111f,-210.7911f,10.52f,-11.3689f,-205.1067f,-0.9956f,5.6f,-205.0711f,-2.9511f,5.6756f,-169.2356f,-1.7333f,-11.4267f,-169.6089f,0.2978f,22.9156f,-177.4622f,20.0533f,21.9022f,-174.1956f,12.4889f,21.5422f,-172.2267f,9.0622f,21.5422f,-205.5067f,7.92f,21.5022f,-204.8533f,13.6444f,22.9956f,-199.8489f,20.16f,23.1156f,-188.5378f,22.1378f,-25f,-174.2133f,18.7378f,-25.0133f,-177.5333f,25.1689f,-24.9822f,-187.56f,27.16f,-24.4089f,-199.1378f,25.5378f,-25.1378f,-204.4711f,18.9156f,-24.8267f,-205.1822f,12.9422f,-24.8978f,-172.2711f,14.1333f});
  }
}
protected class MFVec2f84 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2327f,0.0796f,0.2439f,0.0803f,0.2062f,0.05f,0.2147f,0.0491f,0.2302f,0.0796f,0.2205f,0.0532f,0.2301f,0.0734f,0.2486f,0.0743f,0.2013f,0.0552f,0.2187f,0.0481f,0.221f,0.0541f,0.2293f,0.0736f,0.1746f,0.075f,0.1709f,0.0678f,0.1706f,0.0686f,0.1745f,0.076f,0.1824f,0.0523f,0.1886f,0.0572f,0.183f,0.0511f,0.1834f,0.0508f,0.1882f,0.0556f,0.1885f,0.0566f,0.1716f,0.0676f,0.1748f,0.0736f,0.2444f,0.0847f,0.2027f,0.042f,0.2022f,0.0485f,0.2464f,0.0799f,0.2486f,0.0741f,0.2011f,0.0554f,0.2293f,0.0837f,0.2177f,0.0418f,0.1769f,0.0796f,0.1648f,0.0986f,0.1632f,0.098f,0.1766f,0.0777f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.1699f,0.1017f,0.1699f,0.1017f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.2022f,0.0485f,0.2027f,0.042f,0.1811f,0.0824f,0.1801f,0.0847f,0.1769f,0.0796f,0.2464f,0.0799f,0.2486f,0.0741f,0.1632f,0.098f,0.2187f,0.0481f,0.221f,0.0541f,0.2302f,0.0796f,0.2293f,0.0837f,0.1699f,0.1017f,0.1682f,0.1025f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,6,-1,6,7,0,-1,2,0,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,1,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1});
  }
}
protected class MFInt3288 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,5,6,-1,6,12,14,-1,8,1,7,-1,7,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,7,1,-1,5,24,25,-1,25,6,5,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1});
  }
}
protected class MFVec3f89 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-14.5244f,-209.3822f,40.6f,-15.7867f,-192.8756f,41.1733f,13.08f,-209.3822f,37.5422f,15.0311f,-192.8756f,37.4978f,12.7689f,-179.8444f,37.6f,-13.3911f,-178.8267f,40.7422f,-14.6622f,-192.0711f,22.8222f,-12.6578f,-208.2444f,22.08f,8.16f,-207.9956f,19.3422f,10.7556f,-189.6978f,20.0622f,8.3111f,-168.2578f,19.4533f,-12.96f,-167.6844f,22.0444f,-12.5022f,-191.9733f,12.5289f,-10.9111f,-204.88f,11.8356f,4.1156f,-204.6978f,9.7733f,6.2711f,-189.6444f,10.5467f,4.1867f,-171.4978f,9.8933f,-11.0533f,-171.0844f,11.7778f,-7.6489f,-202.7689f,46.52f,-8.3644f,-193.2133f,46.9956f,-7.0978f,-185.7289f,46.6622f,7.9467f,-186.3156f,44.8311f,9.1333f,-193.0889f,44.8844f,7.9867f,-202.7689f,44.8711f});
  }
}
protected class MFVec2f90 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f,0.0949f,0.0775f,0.1651f,0.0639f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1291f,0.0918f,0.1834f,0.0508f,0.1554f,0.0532f,0.1716f,0.0676f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1554f,0.0532f,0.1653f,0.0654f,0.1636f,0.063f,0.1651f,0.0639f,0.0949f,0.0775f,0.1792f,0.0409f,0.1795f,0.0453f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,7,-1,7,6,0,-1,3,0,6,-1,6,8,3,-1,9,2,3,-1,3,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1});
  }
}
protected class MFInt3294 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,9,-1,9,8,0,-1,3,0,8,-1,8,10,3,-1,11,2,3,-1,3,10,11,-1,4,2,11,-1,11,12,4,-1,14,7,6,-1,6,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1});
  }
}
protected class MFVec3f95 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-9.8356f,-200.32f,35.1378f,-9.6267f,-189.7778f,39.2044f,12.5689f,-189.7778f,36.5156f,9.72f,-200.32f,32.4933f,11.2178f,-178.8222f,33.8578f,-9.2f,-178.2533f,36.8489f,-14.5244f,-203.8133f,21.9556f,-15.7867f,-187.3022f,22.5333f,13.08f,-203.8133f,18.9022f,15.0311f,-187.3022f,18.8578f,12.7689f,-174.2711f,18.96f,-13.3911f,-173.2533f,22.0978f,-11.7644f,-187.4889f,13.6889f,-10.9156f,-198.7822f,13.1911f,7.7111f,-198.7822f,11.1911f,9.0578f,-187.3956f,11.1911f,7.6044f,-179.0578f,11.1733f,-10.2178f,-178.3644f,13.3333f});
  }
}
protected class MFVec2f96 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f,0.0579f,0.1638f,0.0538f,0.174f,0.0396f,0.1747f,0.0423f,0.1756f,0.0403f,0.1632f,0.0573f,0.066f,0.0493f,0.0915f,0.0082f,0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.0949f,0.0775f,0.1293f,0.0261f,0.1651f,0.0639f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,7,9,-1,9,8,4,-1,20,25,24,-1,24,21,20,-1,12,11,10,-1,10,13,12,-1,18,17,14,-1,14,19,18,-1,15,14,17,-1,17,16,15,-1,0,10,11,-1,11,4,0,-1,4,11,12,-1,12,7,4,-1,7,12,13,-1,13,1,7,-1,24,23,22,-1,22,21,24,-1,3,14,15,-1,15,6,3,-1,20,27,26,-1,26,25,20,-1,5,16,17,-1,17,2,5,-1,2,17,18,-1,18,9,2,-1,9,18,19,-1,19,8,9,-1,8,19,14,-1,14,3,8,-1,6,20,21,-1,21,0,6,-1,0,21,22,-1,22,10,0,-1,10,22,23,-1,23,13,10,-1,13,23,24,-1,24,1,13,-1,1,24,25,-1,25,5,1,-1,5,25,26,-1,26,16,5,-1,16,26,27,-1,27,15,16,-1,15,27,20,-1,20,6,15,-1});
  }
}
protected class MFInt32100 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,11,10,-1,10,8,4,-1,22,27,26,-1,26,23,22,-1,14,13,12,-1,12,15,14,-1,20,19,16,-1,16,21,20,-1,17,16,19,-1,19,18,17,-1,0,12,13,-1,13,4,0,-1,4,13,14,-1,14,11,4,-1,7,14,15,-1,15,1,7,-1,26,25,24,-1,24,23,26,-1,3,16,17,-1,17,6,3,-1,22,29,28,-1,28,27,22,-1,5,18,19,-1,19,2,5,-1,2,19,20,-1,20,9,2,-1,10,20,21,-1,21,8,10,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,0,6,-1,0,23,24,-1,24,12,0,-1,12,24,25,-1,25,15,12,-1,15,25,26,-1,26,1,15,-1,1,26,27,-1,27,5,1,-1,5,27,28,-1,28,18,5,-1,18,28,29,-1,29,17,18,-1,17,29,22,-1,22,6,17,-1});
  }
}
protected class MFVec3f101 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.5822f,-161.28f,59.84f,10.3244f,-248.0889f,59.4978f,-12.4622f,-246.8444f,37.4533f,-11.5644f,-140.7556f,35.8578f,10.5244f,-145.8489f,21.2756f,-12.5467f,-247.4667f,57.9467f,-10.3644f,-155.1244f,58.5733f,9.1511f,-246.9333f,21.4622f,-11.7022f,-128.9778f,19.7422f,-12.16f,-247.6f,19.6933f,24.2933f,-170.8444f,53.5733f,21.8044f,-160.6267f,26.1956f,20.7644f,-242.0444f,26.3467f,21.2756f,-242.8f,53.28f,-21.6311f,-144.5556f,33.3644f,-20.5422f,-157.5956f,54.0044f,-22.6044f,-242.5333f,53.4356f,-22.4f,-242.0444f,37.5778f,-22.1333f,-242.5778f,24.5511f,-21.76f,-138.1333f,24.5911f,-10.5689f,-167.8267f,74.3333f,12.2622f,-172.9911f,75.7111f,20.0178f,-180.3422f,71.4889f,17.2489f,-238.3111f,71.2222f,9.4889f,-241.2f,75.6222f,-11.64f,-240.7111f,73.9333f,-18.3156f,-237.8222f,70.9556f,-16.4178f,-169.0933f,71.4889f});
  }
}
protected class MFVec2f102 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2226f,0.0828f,0.2197f,0.0903f,0.2186f,0.1086f,0.2179f,0.1044f,0.2314f,0.0879f,0.2128f,0.1035f,0.2098f,0.0996f,0.2271f,0.0958f,0.2224f,0.1067f,0.2197f,0.1123f,0.2224f,0.1067f,0.2314f,0.0879f,0.2226f,0.0828f,0.2314f,0.0879f,0.2314f,0.0879f,0.2197f,0.0903f,0.2179f,0.1044f,0.2098f,0.0996f,0.2098f,0.0996f,0.2186f,0.1086f,0.2197f,0.1123f,0.2224f,0.1067f,0.2098f,0.0996f,0.2226f,0.0828f,0.2226f,0.0828f,0.2197f,0.0903f,0.2226f,0.0828f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,3,13,-1,13,12,15,-1,10,2,0,-1,0,7,10,-1,9,6,14,-1,14,1,9,-1,3,10,7,-1,7,13,3,-1,12,16,5,-1,5,15,12,-1,6,9,17,-1,17,8,6,-1,17,4,11,-1,11,8,17,-1,27,31,28,-1,34,33,32,-1,32,35,34,-1,28,31,30,-1,30,29,28,-1,35,32,31,-1,31,27,35,-1,23,20,24,-1,22,21,20,-1,20,23,22,-1,25,19,18,-1,18,26,25,-1,24,20,19,-1,19,25,24,-1,1,18,19,-1,19,9,1,-1,9,19,20,-1,20,17,9,-1,17,20,21,-1,21,4,17,-1,48,47,46,-1,46,45,48,-1,5,22,23,-1,23,15,5,-1,15,23,24,-1,24,3,15,-1,3,24,25,-1,25,10,3,-1,10,25,26,-1,26,2,10,-1,40,39,38,-1,38,37,40,-1,13,27,28,-1,28,12,13,-1,12,28,29,-1,29,16,12,-1,44,51,50,-1,50,49,44,-1,11,30,31,-1,31,8,11,-1,8,31,32,-1,32,6,8,-1,6,32,33,-1,33,14,6,-1,36,43,42,-1,42,41,36,-1,0,34,35,-1,35,7,0,-1,7,35,27,-1,27,13,7,-1,37,36,41,-1,41,40,37,-1,48,45,44,-1,44,49,48,-1,14,36,37,-1,37,1,14,-1,1,37,38,-1,38,18,1,-1,18,38,39,-1,39,26,18,-1,26,39,40,-1,40,2,26,-1,2,40,41,-1,41,0,2,-1,0,41,42,-1,42,34,0,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,14,33,-1,16,44,45,-1,45,5,16,-1,5,45,46,-1,46,22,5,-1,22,46,47,-1,47,21,22,-1,21,47,48,-1,48,4,21,-1,4,48,49,-1,49,11,4,-1,11,49,50,-1,50,30,11,-1,30,50,51,-1,51,29,30,-1,29,51,44,-1,44,16,29,-1});
  }
}
protected class MFInt32106 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {25,3,16,-1,16,7,25,-1,12,2,0,-1,0,9,12,-1,22,18,20,-1,20,1,22,-1,13,23,19,-1,19,17,13,-1,15,26,5,-1,5,24,15,-1,8,11,28,-1,28,21,8,-1,14,4,6,-1,6,10,14,-1,43,27,45,-1,54,53,51,-1,51,55,54,-1,46,50,48,-1,48,47,46,-1,56,52,49,-1,49,44,56,-1,36,28,38,-1,35,34,33,-1,33,37,35,-1,40,30,29,-1,29,42,40,-1,39,32,31,-1,31,41,39,-1,1,29,30,-1,30,22,1,-1,11,31,32,-1,32,28,11,-1,14,33,34,-1,34,4,14,-1,70,69,68,-1,68,67,70,-1,5,35,37,-1,37,24,5,-1,25,36,38,-1,38,3,25,-1,13,39,41,-1,41,23,13,-1,12,40,42,-1,42,2,12,-1,62,61,60,-1,60,58,62,-1,16,43,45,-1,45,7,16,-1,15,46,47,-1,47,26,15,-1,66,74,73,-1,73,71,66,-1,6,48,50,-1,50,10,6,-1,21,49,52,-1,52,8,21,-1,18,51,53,-1,53,20,18,-1,57,65,64,-1,64,63,57,-1,0,54,55,-1,55,9,0,-1,19,56,44,-1,44,17,19,-1,59,57,63,-1,63,62,59,-1,70,67,66,-1,66,72,70,-1,20,57,59,-1,59,1,20,-1,1,58,60,-1,60,29,1,-1,29,60,61,-1,61,42,29,-1,42,61,62,-1,62,2,42,-1,2,62,63,-1,63,0,2,-1,0,63,64,-1,64,54,0,-1,54,64,65,-1,65,53,54,-1,53,65,57,-1,57,20,53,-1,26,66,67,-1,67,5,26,-1,5,67,68,-1,68,35,5,-1,35,68,69,-1,69,34,35,-1,34,69,70,-1,70,4,34,-1,4,70,72,-1,72,6,4,-1,6,71,73,-1,73,48,6,-1,48,73,74,-1,74,47,48,-1,47,74,66,-1,66,26,47,-1});
  }
}
protected class MFVec3f107 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {15.24f,-188.1422f,117.9333f,-11.7156f,-232.7289f,122.7333f,-11.6133f,-186.2133f,124.3333f,-13.4933f,-165.6844f,73.7111f,-15.7511f,-233.0667f,19.2578f,-13.5689f,-140.7111f,19.8844f,10.1111f,-236.3556f,91.6222f,12.8844f,-178.9956f,95.5778f,9.32f,-234.4f,40.9067f,-14.1911f,-236.3556f,95.4444f,-12.12f,-177.3733f,99.8889f,7.1244f,-233.6889f,20.8089f,11.0311f,-157.4133f,43.9422f,11.4622f,-168.2044f,69.7556f,15.4222f,-232.76f,116.0667f,-13.9111f,-154.0489f,47.9289f,10.3822f,-146.8756f,21.1511f,-16.0533f,-233.5111f,44.7289f,-20.6222f,-228.6844f,118.7778f,-22.8356f,-231.76f,95.5333f,-24.6578f,-228.9689f,45.1467f,-24.3867f,-228.5911f,23.9111f,-22.4889f,-147.3956f,24.4622f,-22.7511f,-157.8f,46.3556f,-22.3778f,-169.4578f,72.2f,-21.0089f,-181.2133f,98.5556f,-20.6533f,-189.0311f,120.1111f,20.3822f,-173.6178f,64.1022f,19.9067f,-162.7822f,38.1867f,19.6578f,-155.8667f,23.2f,16.8133f,-228.4978f,22.9244f,18.6133f,-229.0222f,37.5956f,19.2978f,-230.9556f,87.8f,23.7333f,-228.1067f,107.2222f,23.36f,-192.0844f,108.7333f,21.6756f,-184.4178f,89.9778f,17.5778f,-227.32f,124.0667f,-7.9956f,-227.2978f,130.5111f,-12.96f,-225.5022f,130.5556f,-12.9867f,-193.5333f,131.6222f,-8.3511f,-192.5867f,131.6667f,17.1689f,-194.3689f,125.6222f,22.5111f,-196.4711f,123.6667f,22.8133f,-224.8533f,122.4667f,7.8222f,-150.96f,10.1644f,-13.2444f,-145.5333f,8.5067f,-18.8133f,-149.8178f,11.7156f,-20.5867f,-225.6267f,11.2044f,-15.1067f,-228.4756f,8.2489f,5.7733f,-229.0267f,9.9822f,12.1422f,-225.6178f,11.3689f,14.8044f,-157.7067f,11.6222f});
  }
}
protected class MFVec2f108 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.195f,0.0629f,0.1801f,0.0847f,0.1811f,0.0824f,0.1937f,0.091f,0.2128f,0.1035f,0.2098f,0.0996f,0.2197f,0.0903f,0.2138f,0.0778f,0.1989f,0.0701f,0.1984f,0.068f,0.2129f,0.0844f,0.1833f,0.0898f,0.1856f,0.0872f,0.1937f,0.091f,0.2068f,0.0986f,0.2138f,0.0778f,0.2061f,0.0729f,0.2061f,0.0729f,0.1989f,0.0701f,0.1984f,0.068f,0.1952f,0.0651f,0.2129f,0.0844f,0.1833f,0.0898f,0.1856f,0.0872f,0.2017f,0.0948f,0.2017f,0.0948f,0.2226f,0.0828f,0.2138f,0.0778f,0.1937f,0.091f,0.1811f,0.0824f,0.1856f,0.0872f,0.1856f,0.0872f,0.1937f,0.091f,0.2017f,0.0948f,0.2098f,0.0996f,0.2098f,0.0996f,0.2017f,0.0948f,0.2017f,0.0948f,0.1937f,0.091f,0.1937f,0.091f,0.1856f,0.0872f,0.1856f,0.0872f,0.1811f,0.0824f,0.2061f,0.0729f,0.2061f,0.0729f,0.2138f,0.0778f,0.2138f,0.0778f,0.2226f,0.0828f,0.2226f,0.0828f,0.2138f,0.0778f,0.2138f,0.0778f,0.1984f,0.068f,0.1984f,0.068f,0.195f,0.0629f,0.195f,0.0629f,0.1984f,0.068f,0.1984f,0.068f,0.195f,0.0629f,0.1811f,0.0824f,0.1801f,0.0847f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.2226f,0.0828f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f,0.2226f,0.0828f,0.2197f,0.0903f,0.2226f,0.0828f,0.2226f,0.0828f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,7,1,-1,1,0,13,-1,7,9,2,-1,2,1,7,-1,4,3,14,-1,14,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,13,-1,13,0,5,-1,23,19,15,-1,15,17,23,-1,16,20,24,-1,24,18,16,-1,9,7,19,-1,19,23,9,-1,8,6,24,-1,24,20,8,-1,7,11,19,-1,24,6,21,-1,10,12,13,-1,13,8,10,-1,14,9,25,-1,25,22,14,-1,21,6,14,-1,14,22,21,-1,7,13,12,-1,12,11,7,-1,10,8,20,-1,25,9,23,-1,9,14,3,-1,3,2,9,-1,1,2,3,-1,3,4,5,-1,1,3,5,-1,0,1,5,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,41,37,43,-1,43,42,41,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,41,40,39,-1,37,41,39,-1,37,39,38,-1,15,26,27,-1,27,17,15,-1,17,27,28,-1,28,18,17,-1,18,28,29,-1,29,16,18,-1,16,29,26,-1,26,15,16,-1,17,30,31,-1,31,23,17,-1,23,31,32,-1,32,25,23,-1,25,32,33,-1,33,22,25,-1,22,33,34,-1,34,21,22,-1,21,34,35,-1,35,24,21,-1,24,35,36,-1,36,18,24,-1,18,36,30,-1,30,17,18,-1,20,37,38,-1,38,10,20,-1,10,38,39,-1,39,12,10,-1,12,39,40,-1,40,11,12,-1,11,40,41,-1,41,19,11,-1,19,41,42,-1,42,15,19,-1,15,42,43,-1,43,16,15,-1,16,43,37,-1,37,20,16,-1});
  }
}
protected class MFInt32112 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {22,7,0,-1,0,1,22,-1,7,9,2,-1,2,0,7,-1,4,3,23,-1,23,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,22,-1,22,1,5,-1,36,29,24,-1,24,26,36,-1,25,31,38,-1,38,27,25,-1,11,10,28,-1,28,35,11,-1,13,12,37,-1,37,30,13,-1,10,15,28,-1,37,12,32,-1,14,20,16,-1,16,13,14,-1,18,11,39,-1,39,33,18,-1,32,12,19,-1,19,34,32,-1,10,17,21,-1,21,15,10,-1,14,13,30,-1,39,11,35,-1,9,23,3,-1,3,2,9,-1,0,2,3,-1,3,4,5,-1,0,3,5,-1,1,0,5,-1,49,48,47,-1,49,47,46,-1,45,49,46,-1,55,51,57,-1,57,56,55,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,55,54,53,-1,51,55,53,-1,51,53,52,-1,24,40,41,-1,41,26,24,-1,26,41,42,-1,42,27,26,-1,27,42,43,-1,43,25,27,-1,25,43,40,-1,40,24,25,-1,26,44,45,-1,45,36,26,-1,35,45,46,-1,46,39,35,-1,39,46,47,-1,47,33,39,-1,34,47,48,-1,48,32,34,-1,32,48,49,-1,49,37,32,-1,38,49,50,-1,50,27,38,-1,27,50,44,-1,44,26,27,-1,30,51,52,-1,52,14,30,-1,14,52,53,-1,53,20,14,-1,21,53,54,-1,54,15,21,-1,15,54,55,-1,55,28,15,-1,29,55,56,-1,56,24,29,-1,24,56,57,-1,57,25,24,-1,25,57,51,-1,51,31,25,-1});
  }
}
protected class MFVec3f113 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-7.4622f,-194.4533f,53.3244f,-5.1911f,-212.68f,51.9778f,12.7244f,-212.4f,48.0311f,15.6533f,-194.4533f,47.6444f,13.7511f,-175.88f,47.7378f,-5.4178f,-175.3067f,52.2267f,9.8756f,-171.5067f,28.0133f,-7.8756f,-209.4533f,32.88f,-7.8578f,-170.9022f,32.4667f,9.1378f,-209.7422f,28.0933f,-12.9467f,-174.2356f,33.2f,-12.8844f,-202.5956f,33.4711f,-12.6622f,-188.6133f,35.8978f,-10.1289f,-191.4711f,36.0267f,12.88f,-192.9511f,30.6356f,-15.4133f,-210.8978f,12.1022f,-15.3156f,-164.3867f,13.6933f,11.7244f,-210.9289f,5.44f,11.5422f,-166.3156f,7.2978f,-14.8489f,-209.4844f,24.4844f,-14.4444f,-170.0844f,23.6267f,14.3511f,-173.8311f,26.88f,14.68f,-188.9689f,29.8044f,12.8489f,-209.4267f,17.3289f,12.3689f,-171.0444f,16.2622f,14.1467f,-207.8133f,26.96f,-12.44f,-204.9378f,0.7244f,3.7956f,-204.9556f,-3.3156f,3.6667f,-171.1378f,-1.8756f,-12.3733f,-169.9822f,1.8889f,20.6044f,-200.3289f,8.0089f,21.1644f,-199.5778f,13.9333f,21.8133f,-198.7733f,18.7378f,22.0756f,-189.3822f,20.1556f,21.9111f,-181.8356f,18.6978f,20.9244f,-180.4444f,13.4044f,20.5111f,-178.0889f,8.9378f,-22.5156f,-174.0133f,20.6f,-21.4133f,-177.3156f,28.2311f,-21.2f,-188.6222f,30.3556f,-21.3467f,-199.9067f,28.3867f,-22.88f,-205.16f,21.5422f,-23.0667f,-206.0356f,13.8933f,-23.0311f,-170.8578f,15.0978f});
  }
}
protected class MFVec2f114 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1706f,0.0686f,0.1709f,0.0678f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1716f,0.0676f,0.1882f,0.0556f,0.1745f,0.076f,0.1748f,0.0736f,0.1886f,0.0572f,0.2327f,0.0796f,0.2439f,0.0803f,0.2076f,0.0485f,0.2162f,0.0476f,0.2201f,0.0466f,0.2302f,0.0796f,0.2219f,0.0517f,0.2301f,0.0734f,0.2486f,0.0743f,0.2027f,0.0537f,0.2224f,0.0526f,0.2293f,0.0736f,0.1746f,0.075f,0.1885f,0.0566f,0.1801f,0.0847f,0.1811f,0.0824f,0.1952f,0.0651f,0.195f,0.0629f,0.2293f,0.0837f,0.1769f,0.0796f,0.2191f,0.0403f,0.1766f,0.0777f,0.2037f,0.047f,0.2486f,0.0741f,0.2026f,0.0539f,0.2444f,0.0847f,0.1915f,0.0602f,0.2041f,0.0405f,0.1915f,0.0578f,0.2464f,0.0799f,0.1801f,0.0847f,0.1952f,0.0651f,0.195f,0.0629f,0.1811f,0.0824f,0.1952f,0.0651f,0.1915f,0.0602f,0.2464f,0.0799f,0.2486f,0.0741f,0.2037f,0.047f,0.2041f,0.0405f,0.195f,0.0629f,0.1766f,0.0777f,0.2201f,0.0466f,0.2224f,0.0526f,0.2302f,0.0796f,0.2293f,0.0837f,0.1801f,0.0847f,0.1811f,0.0824f});
  }
}
protected class MFFloat115 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat116 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32117 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1});
  }
}
protected class MFInt32118 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,6,7,-1,7,12,14,-1,8,1,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1});
  }
}
protected class MFVec3f119 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-12.1067f,-191.44f,41.8667f,-10.5733f,-207.9511f,40.8089f,15.4844f,-207.9511f,35.3733f,17.4489f,-191.44f,35.2889f,15.4444f,-178.4089f,35.5289f,-10.0578f,-177.3956f,40.44f,-12.2f,-188.2622f,23.5556f,-9.9289f,-206.4889f,22.2089f,7.9867f,-206.2089f,18.2622f,10.92f,-188.2622f,17.8711f,9.0133f,-169.6889f,17.9689f,-10.1556f,-169.1156f,22.4533f,-10.3378f,-188.2089f,15.3111f,-8.6267f,-202.2667f,14.1022f,2.3289f,-202.0978f,11.8089f,4.6267f,-188.1244f,11.5644f,3.1289f,-173.7289f,11.56f,-8.7867f,-173.3689f,14.32f,-3.3289f,-201.2933f,46.0533f,-4.1644f,-191.6267f,46.9733f,-3.1822f,-184.2578f,45.7867f,11.2222f,-184.8311f,43.24f,12.2711f,-191.5511f,43.1911f,11.0844f,-201.2933f,43.0978f});
  }
}
protected class MFVec2f120 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1651f,0.0639f,0.1293f,0.0261f,0.0949f,0.0775f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1291f,0.0918f,0.1834f,0.0508f,0.1554f,0.0532f,0.1716f,0.0676f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1554f,0.0532f,0.1653f,0.0654f,0.1636f,0.063f,0.1651f,0.0639f,0.0949f,0.0775f,0.1792f,0.0409f,0.1795f,0.0453f});
  }
}
protected class MFFloat121 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat122 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32123 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1});
  }
}
protected class MFInt32124 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,8,-1,8,9,0,-1,1,0,9,-1,9,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,8,3,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,8,15,-1});
  }
}
protected class MFVec3f125 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-7.2756f,-189.7778f,37.6133f,-7.7556f,-200.32f,33.8578f,9.0711f,-200.32f,30.08f,11.84f,-189.7778f,33.6178f,10.4711f,-178.8222f,31.2444f,-7.0756f,-178.2533f,35.4f,-15.1556f,-187.3022f,23.68f,-13.6222f,-203.8133f,22.6222f,12.4356f,-203.8133f,17.1867f,14.4f,-187.3022f,17.1022f,12.3956f,-174.2711f,17.3422f,-13.1067f,-173.2533f,22.2533f,-11.9689f,-187.4622f,14.5022f,-10.96f,-198.8356f,13.5467f,6.3644f,-198.8356f,9.9733f,7.7467f,-187.4044f,10.0222f,6.4578f,-179.1067f,10.1156f,-10.72f,-178.4222f,13.2533f});
  }
}
protected class MFVec2f126 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f,0.0579f,0.1747f,0.0423f,0.174f,0.0396f,0.1638f,0.0538f,0.1756f,0.0403f,0.1632f,0.0573f,0.0915f,0.0082f,0.066f,0.0493f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.0949f,0.0775f,0.1293f,0.0261f,0.1651f,0.0639f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1});
  }
}
protected class MFInt32130 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1});
  }
}
protected class MFVec3f131 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {44f,-299.3333f,-18.1956f,14.9289f,-299.3333f,-39.1333f,14.6667f,-280.7111f,-47.6667f,48.8222f,-280.7111f,-24.6444f,-38.1644f,-299.3333f,-19.7689f,-54.3778f,-299.2889f,36.1333f,-57.4444f,-280.7111f,35.1467f,-43.5556f,-280.7111f,-26.3333f,55f,-299.2889f,36.1333f,58.6f,-280.7111f,35.1467f,14.6622f,-240.4889f,-53.0444f,51.8f,-238.8889f,-29.7111f,-63.4f,-232.5867f,35.6489f,-46.9111f,-241.0222f,-31.4f,62.5556f,-237.4222f,35.6489f,12.7244f,-209.1733f,-44.0667f,48.4222f,-209.6667f,-20.4889f,-46.5556f,-210.3022f,-22.5067f,-9.8711f,-299.3333f,-39.4444f,-10.3422f,-280.7111f,-47.9333f,-10.6667f,-241.0222f,-53.3111f,-12.3467f,-209.3511f,-44.3333f,13.0178f,-299.2889f,36.1333f,-19.2311f,-299.2889f,36.1333f,57.3111f,-296.2222f,70.5556f,62.6444f,-280.4f,69.6667f,61.7111f,-238.9333f,69.1333f,-49.5333f,-295.7778f,75.4889f,17.88f,-297.3333f,74.9556f,-14.9111f,-297.2889f,77.7556f,-55.8444f,-277.4667f,74.3333f,-61.5333f,-230.7689f,74.2f,-46.4667f,-172.6756f,75.7111f,38.8844f,-176.0089f,76.9111f,10.7378f,-180.3467f,-32.7333f,45.0444f,-174.5733f,-9.6356f,-46.2f,-174.5733f,-11.5733f,51.3556f,-187.9467f,21.8222f,50.5556f,-188.28f,44.8978f,-13.9378f,-180.24f,-32.9556f,-60.0667f,-185.0622f,34.1244f,8.4756f,-155.8533f,-18.5511f,37.0178f,-150f,0.6089f,42.2044f,-163.4889f,26.9733f,41.5022f,-163.9156f,47.1778f,32.8444f,-151.9956f,71.0889f,-38.2667f,-149.16f,70.0667f,-48.7778f,-161.3556f,38.2933f,-36.8267f,-150.6044f,-1.0133f,-10.1156f,-155.96f,-18.6978f,55.9778f,-277.3333f,84.3333f,52.5556f,-286.5778f,84.1556f,18.0978f,-287.3778f,88.3333f,-14.3422f,-287.3333f,91.1333f,-44.0222f,-286.2222f,88.6889f,-48.5111f,-274.2222f,88.4222f,-53.9333f,-233.4222f,88.4667f,-40.6267f,-186.6f,89.6222f,34.2844f,-189.2933f,91f,55.0889f,-241.6444f,83.7556f});
  }
}
protected class MFVec2f132 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2845f,0.0964f,0.2768f,0.1211f,0.2792f,0.1228f,0.2886f,0.0939f,0.2493f,0.1586f,0.2252f,0.161f,0.2241f,0.1634f,0.2489f,0.1638f,0.2727f,0.0786f,0.2746f,0.076f,0.2809f,0.1238f,0.2914f,0.0926f,0.2206f,0.1691f,0.249f,0.1672f,0.2762f,0.0729f,0.2769f,0.1234f,0.2869f,0.0933f,0.2461f,0.1652f,0.2661f,0.1399f,0.2685f,0.1417f,0.27f,0.1429f,0.2661f,0.1424f,0.24f,0.098f,0.2266f,0.1229f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2178f,0.1526f,0.2363f,0.0929f,0.2213f,0.1179f,0.2171f,0.1588f,0.2129f,0.1643f,0.2165f,0.148f,0.2533f,0.0835f,0.273f,0.1232f,0.2824f,0.0941f,0.2433f,0.1632f,0.2759f,0.0832f,0.2685f,0.0797f,0.2623f,0.1418f,0.2231f,0.166f,0.273f,0.1232f,0.2824f,0.0941f,0.2759f,0.0832f,0.2685f,0.0797f,0.2533f,0.0835f,0.2165f,0.148f,0.2231f,0.166f,0.2433f,0.1632f,0.2623f,0.1418f,0.2665f,0.0671f,0.2628f,0.0703f,0.2363f,0.0929f,0.2213f,0.1179f,0.2178f,0.1526f,0.2171f,0.1588f,0.2129f,0.1643f,0.2165f,0.148f,0.2533f,0.0835f,0.2664f,0.0668f});
  }
}
protected class MFFloat133 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat134 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32135 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,16,-1,16,17,1,-1,3,0,5,-1,5,8,3,-1,6,1,2,-1,2,7,6,-1,2,10,4,-1,18,10,2,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,2,-1,2,4,9,-1,8,15,14,-1,14,3,8,-1,3,19,16,-1,16,0,3,-1,14,19,3,-1,1,17,18,-1,18,2,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1});
  }
}
protected class MFInt32136 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,16,-1,16,17,1,-1,2,0,5,-1,5,8,2,-1,6,1,3,-1,3,7,6,-1,3,10,4,-1,18,10,3,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,3,-1,3,4,9,-1,8,15,14,-1,14,2,8,-1,2,19,16,-1,16,0,2,-1,14,19,2,-1,1,17,18,-1,18,3,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1});
  }
}
protected class MFVec3f137 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {17.0756f,-248.3111f,49.5422f,24.1244f,-235.2889f,41.4f,18.3111f,-195.6f,47.1911f,-9.8f,-250.3556f,56.1733f,-1.2978f,-165.4622f,53.5422f,27.1778f,-250.2667f,81.0889f,34.3511f,-235.8222f,77.5333f,27.5778f,-199.84f,81.3556f,1.9822f,-252.4444f,88.0667f,3.4267f,-179.2356f,88.7778f,-3.6711f,-131.1556f,21.5111f,-25.4f,-124.5778f,34.2133f,-24.3556f,-149.5644f,56.2933f,-21.2978f,-164.9956f,94.8667f,-25.7289f,-250.6667f,56.48f,-24.5556f,-251.7778f,94.5111f,14.7556f,-251.3778f,15.1333f,20.0933f,-235.5556f,14.2711f,19.1644f,-194.0933f,13.72f,-24.6756f,-252.4889f,19.5644f,-44.56f,-144.7867f,41.2533f,-43.68f,-156.6444f,51.7378f,-41.0756f,-170.6311f,86.7333f,-43.9644f,-242.5333f,86.4667f,-44.7067f,-241.6444f,56.9911f,-43.7467f,-242.9778f,30.0044f,-17.0978f,-136.1333f,0.8756f,-31.2667f,-131.8222f,10.4578f,-45.0444f,-146.3156f,15.4889f,-44.2889f,-236.1778f,5.1956f,-30.7022f,-242.9778f,-2.5333f,1.7378f,-242.1333f,-4.8933f,4.88f,-232.7822f,-5.4667f,3.96f,-194.08f,-6.1644f,24.2889f,-248.5333f,100.4222f,3.84f,-250.2667f,106.1111f,-20.7467f,-249.6889f,113.0889f,-33.9911f,-237.3778f,107.5333f,-31.5778f,-177.2578f,107.7556f,-20.3778f,-181.1556f,113.8444f,0.9467f,-193.3156f,107.8f,22.3644f,-211.2711f,101.1778f,27.9733f,-240.8444f,97.7556f});
  }
}
protected class MFVec2f138 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2528f,0.0622f,0.2585f,0.0581f,0.2383f,0.0796f,0.2566f,0.0607f,0.243f,0.0749f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2292f,0.0691f,0.2342f,0.0682f,0.2533f,0.0835f,0.2407f,0.0951f,0.2314f,0.0879f,0.2226f,0.0828f,0.2271f,0.0958f,0.2197f,0.0903f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2363f,0.0929f,0.2407f,0.0951f,0.2314f,0.0879f,0.2226f,0.0828f,0.2197f,0.0903f,0.2271f,0.0958f,0.2363f,0.0929f,0.2533f,0.0835f,0.2407f,0.0951f,0.2407f,0.0951f,0.2363f,0.0929f,0.2363f,0.0929f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2469f,0.052f,0.2292f,0.0691f,0.2197f,0.0903f,0.2197f,0.0903f,0.2226f,0.0828f,0.2226f,0.0828f,0.2342f,0.0682f,0.2484f,0.051f,0.2512f,0.047f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,16,17,-1,17,13,11,-1,10,14,16,-1,16,11,10,-1,5,7,3,-1,3,1,5,-1,0,4,6,-1,6,2,0,-1,14,10,12,-1,12,15,14,-1,7,4,0,-1,0,3,7,-1,8,9,5,-1,5,1,8,-1,40,37,36,-1,36,41,40,-1,48,45,44,-1,44,49,48,-1,27,31,28,-1,28,31,30,-1,30,29,28,-1,34,33,32,-1,32,35,34,-1,35,32,31,-1,31,27,35,-1,18,24,19,-1,26,25,24,-1,24,18,26,-1,20,23,22,-1,22,21,20,-1,19,24,23,-1,23,20,19,-1,5,18,19,-1,19,7,5,-1,7,19,20,-1,20,4,7,-1,4,20,21,-1,21,6,4,-1,40,39,38,-1,38,37,40,-1,15,22,23,-1,23,14,15,-1,14,23,24,-1,24,16,14,-1,16,24,25,-1,25,17,16,-1,44,51,50,-1,50,49,44,-1,9,26,18,-1,18,5,9,-1,3,27,28,-1,28,1,3,-1,1,28,29,-1,29,8,1,-1,48,47,46,-1,46,45,48,-1,13,30,31,-1,31,11,13,-1,11,31,32,-1,32,10,11,-1,10,32,33,-1,33,12,10,-1,36,43,42,-1,42,41,36,-1,2,34,35,-1,35,0,2,-1,0,35,27,-1,27,3,0,-1,12,36,37,-1,37,15,12,-1,15,37,38,-1,38,22,15,-1,22,38,39,-1,39,21,22,-1,21,39,40,-1,40,6,21,-1,6,40,41,-1,41,2,6,-1,2,41,42,-1,42,34,2,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,12,33,-1,17,44,45,-1,45,13,17,-1,13,45,46,-1,46,30,13,-1,30,46,47,-1,47,29,30,-1,29,47,48,-1,48,8,29,-1,8,48,49,-1,49,9,8,-1,9,49,50,-1,50,26,9,-1,26,50,51,-1,51,25,26,-1,25,51,44,-1,44,17,25,-1});
  }
}
protected class MFInt32142 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,16,17,-1,17,13,5,-1,2,7,16,-1,16,5,2,-1,9,12,6,-1,6,1,9,-1,0,8,11,-1,11,4,0,-1,7,2,3,-1,3,10,7,-1,12,8,0,-1,0,6,12,-1,14,15,9,-1,9,1,14,-1,42,39,38,-1,38,43,42,-1,50,47,46,-1,46,51,50,-1,29,18,30,-1,30,33,32,-1,32,31,30,-1,36,35,34,-1,34,37,36,-1,37,34,33,-1,33,29,37,-1,20,19,21,-1,28,27,26,-1,26,20,28,-1,22,25,24,-1,24,23,22,-1,21,26,25,-1,25,22,21,-1,9,20,21,-1,21,12,9,-1,12,21,22,-1,22,8,12,-1,8,22,23,-1,23,11,8,-1,42,41,40,-1,40,39,42,-1,10,24,25,-1,25,7,10,-1,7,25,26,-1,26,16,7,-1,16,26,27,-1,27,17,16,-1,46,53,52,-1,52,51,46,-1,15,28,20,-1,20,9,15,-1,6,29,30,-1,30,1,6,-1,1,30,31,-1,31,14,1,-1,50,49,48,-1,48,47,50,-1,13,32,33,-1,33,5,13,-1,5,33,34,-1,34,2,5,-1,2,34,35,-1,35,3,2,-1,38,45,44,-1,44,43,38,-1,4,36,37,-1,37,0,4,-1,0,37,29,-1,29,6,0,-1,3,38,39,-1,39,10,3,-1,10,39,40,-1,40,24,10,-1,24,40,41,-1,41,23,24,-1,23,41,42,-1,42,11,23,-1,11,42,43,-1,43,4,11,-1,4,43,44,-1,44,36,4,-1,36,44,45,-1,45,35,36,-1,35,45,38,-1,38,3,35,-1,17,46,47,-1,47,13,17,-1,13,47,48,-1,48,32,13,-1,32,48,49,-1,49,31,32,-1,31,49,50,-1,50,14,31,-1,14,50,51,-1,51,15,14,-1,15,51,52,-1,52,28,15,-1,28,52,53,-1,53,27,28,-1,27,53,46,-1,46,17,27,-1});
  }
}
protected class MFVec3f143 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {18.7333f,-179.5022f,92.1111f,14.7822f,-167.3289f,39.3244f,17.8889f,-187.9156f,113.0444f,17.5022f,-173.5689f,65.8f,-10.6222f,-175.92f,97.4889f,-12.48f,-154.3333f,45.8489f,-8.2667f,-185.0667f,119.8444f,-12.0444f,-165.1244f,71.6667f,11.5956f,-158.04f,16.96f,-13.1289f,-143.7778f,23.0533f,14.5911f,-233.2889f,83.3111f,12.8311f,-232.2844f,36.1289f,19.3244f,-227.8622f,111.1333f,10.1511f,-231.2667f,16.2578f,-13.3956f,-233.2889f,93.5333f,-8.0844f,-229.68f,117.9778f,-14.1911f,-231.3111f,42.8089f,-16.3867f,-230.6f,22.7156f,-23.5956f,-161.2844f,43.48f,-23.1022f,-172.1333f,69.4444f,-21.8667f,-182.9422f,95.3111f,-20.4533f,-189.9911f,112.6444f,-20.0044f,-222.4578f,111.2222f,-24.0756f,-225f,93.8889f,-24.7156f,-223.0756f,43.9067f,-26.3511f,-222.6267f,31.4844f,-23.68f,-155.8667f,31.7333f,27.4044f,-181.7644f,59.4933f,24.68f,-175.96f,33.2667f,22.4489f,-170.16f,18.4311f,21.3022f,-224.7556f,17.8667f,23.32f,-225.4356f,31.9689f,25.0178f,-226.32f,77.2667f,29.2178f,-222.24f,99.6222f,27.5911f,-193.2933f,101.0889f,28.6356f,-187.1067f,84.6889f,19.7733f,-221.8178f,119.6222f,-5.5067f,-223.4889f,126.7333f,-13.2356f,-219.1956f,126.1556f,-13.5867f,-194.8311f,127.2222f,-6.16f,-192.2178f,127.9333f,18.1422f,-194.7911f,121.2222f,24.1289f,-197.8178f,115.5333f,25.3333f,-218.7911f,114.4667f,-18.4533f,-223.9244f,6.7867f,5.4933f,-224.5244f,0.9378f,11.8489f,-220.52f,1.0044f,12.8489f,-172.88f,1.4978f,4.6133f,-163.3911f,1.68f,-16.6444f,-151.1867f,6.5822f,-22.4578f,-158.6133f,12.6578f,-24.8711f,-218.7911f,12.4267f});
  }
}
protected class MFVec2f144 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2117f,0.0481f,0.2254f,0.0615f,0.2142f,0.0508f,0.2102f,0.0461f,0.2083f,0.0443f,0.2202f,0.0585f,0.2186f,0.0548f,0.1989f,0.0701f,0.1984f,0.068f,0.2138f,0.0778f,0.1952f,0.0651f,0.195f,0.0629f,0.2061f,0.0729f,0.2292f,0.0691f,0.2342f,0.0682f,0.2226f,0.0828f,0.2129f,0.0844f,0.2197f,0.0903f,0.2254f,0.0615f,0.2061f,0.0729f,0.2138f,0.0778f,0.2061f,0.0729f,0.1984f,0.068f,0.195f,0.0629f,0.195f,0.0629f,0.1984f,0.068f,0.2061f,0.0729f,0.2226f,0.0828f,0.2226f,0.0828f,0.2186f,0.0548f,0.2254f,0.0615f,0.2342f,0.0682f,0.2342f,0.0682f,0.2254f,0.0615f,0.2117f,0.0481f,0.2083f,0.0443f,0.2083f,0.0443f,0.2117f,0.0481f,0.2083f,0.0443f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.2083f,0.0443f,0.2083f,0.0443f,0.2083f,0.0443f,0.2226f,0.0828f,0.2342f,0.0682f,0.2342f,0.0682f,0.2342f,0.0682f,0.2342f,0.0682f,0.2226f,0.0828f,0.2226f,0.0828f,0.2226f,0.0828f});
  }
}
protected class MFFloat145 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat146 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32147 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,10,1,-1,1,2,13,-1,10,8,3,-1,3,1,10,-1,3,8,0,-1,0,4,3,-1,0,9,5,-1,5,4,0,-1,7,6,5,-1,5,9,7,-1,6,7,13,-1,13,2,6,-1,22,14,18,-1,18,17,22,-1,20,15,21,-1,21,19,20,-1,9,21,15,-1,15,7,9,-1,10,16,14,-1,8,10,14,-1,14,22,8,-1,21,9,23,-1,11,12,13,-1,13,7,11,-1,0,8,24,-1,24,25,0,-1,16,10,13,-1,13,12,16,-1,23,9,0,-1,0,25,23,-1,11,7,15,-1,24,8,22,-1,35,34,33,-1,31,35,33,-1,31,33,32,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,37,40,39,-1,39,38,37,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,37,43,42,-1,40,37,42,-1,40,42,41,-1,18,26,27,-1,27,17,18,-1,17,27,28,-1,28,19,17,-1,19,28,29,-1,29,20,19,-1,20,29,26,-1,26,18,20,-1,17,30,31,-1,31,22,17,-1,22,31,32,-1,32,24,22,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,23,25,-1,23,34,35,-1,35,21,23,-1,21,35,36,-1,36,19,21,-1,19,36,30,-1,30,17,19,-1,14,37,38,-1,38,18,14,-1,18,38,39,-1,39,20,18,-1,20,39,40,-1,40,15,20,-1,15,40,41,-1,41,11,15,-1,11,41,42,-1,42,12,11,-1,12,42,43,-1,43,16,12,-1,16,43,37,-1,37,14,16,-1});
  }
}
protected class MFInt32148 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {27,10,1,-1,1,2,27,-1,10,11,3,-1,3,1,10,-1,3,11,0,-1,0,4,3,-1,0,12,5,-1,5,4,0,-1,9,6,5,-1,5,12,9,-1,6,9,27,-1,27,2,6,-1,35,7,29,-1,29,28,35,-1,31,8,33,-1,33,30,31,-1,15,32,16,-1,16,14,15,-1,17,18,13,-1,19,17,13,-1,13,34,19,-1,32,15,36,-1,20,21,22,-1,22,14,20,-1,23,19,37,-1,37,38,23,-1,18,17,25,-1,25,24,18,-1,36,15,26,-1,26,39,36,-1,20,14,16,-1,37,19,34,-1,49,48,47,-1,45,49,47,-1,45,47,46,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,51,54,53,-1,53,52,51,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,51,57,56,-1,54,51,56,-1,54,56,55,-1,29,40,41,-1,41,28,29,-1,28,41,42,-1,42,30,28,-1,30,42,43,-1,43,31,30,-1,31,43,40,-1,40,29,31,-1,28,44,45,-1,45,35,28,-1,34,45,46,-1,46,37,34,-1,37,46,47,-1,47,38,37,-1,39,47,48,-1,48,36,39,-1,36,48,49,-1,49,32,36,-1,33,49,50,-1,50,30,33,-1,30,50,44,-1,44,28,30,-1,7,51,52,-1,52,29,7,-1,29,52,53,-1,53,31,29,-1,31,53,54,-1,54,8,31,-1,16,54,55,-1,55,20,16,-1,20,55,56,-1,56,21,20,-1,24,56,57,-1,57,18,24,-1,18,57,51,-1,51,13,18,-1});
  }
}
protected class MFVec3f149 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.1911f,-191.0667f,29.0133f,-2.7111f,-211.0178f,52.5067f,-5.2533f,-193.0622f,52.9689f,15.68f,-212.1422f,47.9822f,17.7467f,-193.0622f,47.2933f,16.1156f,-174.4267f,48.2311f,-3.5778f,-172.4756f,52.7911f,-7.8f,-171.1244f,34.6222f,11.3733f,-207.4756f,27.36f,11.6622f,-172.6489f,27.4f,-7.76f,-207.2489f,33.9422f,-12.1156f,-172.44f,35.2667f,-11.7867f,-187.5778f,38.1911f,-9.2089f,-191.4133f,37.8578f,-13.6178f,-208.0356f,25.7156f,-14.0978f,-169.6533f,24.6489f,-12.32f,-206.4222f,35.3467f,12.6667f,-207.72f,6.9778f,-14.7422f,-209.5378f,13.8267f,11.2267f,-167.7733f,8.8756f,-14.9244f,-164.9244f,15.6844f,13.32f,-172.5822f,15.1289f,13.32f,-205.4356f,15.1822f,15.24f,-174.2356f,25.3733f,15.2978f,-206.9333f,25.6089f,15.8978f,-192.2844f,27.5289f,-12.3911f,-203.48f,1.9378f,4.6089f,-202.3511f,-2.2889f,3.52f,-172.1289f,-0.8667f,-12.5244f,-170.3778f,3.3289f,22.3556f,-201.3333f,6.8311f,22.1333f,-200.5378f,9.8089f,24.8089f,-201.5511f,16.8178f,25.1689f,-192.1556f,18.0667f,24.5511f,-178.2533f,16.3378f,21.9644f,-176.9556f,8.2489f,21.1689f,-176.7244f,8.0578f,-23.0667f,-203.1378f,23.3644f,-23.6444f,-203.8889f,17.4044f,-23.7556f,-173.0622f,18.6889f,-23.6178f,-174.3867f,21.2133f,-22.1244f,-176.5333f,29.3822f,-21.92f,-187.72f,31.5511f,-22.3467f,-202.1333f,29.3733f});
  }
}
protected class MFVec2f150 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2033f,0.0375f,0.1866f,0.0487f,0.186f,0.0472f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.1873f,0.048f,0.1915f,0.0602f,0.1915f,0.0578f,0.1897f,0.0535f,0.1888f,0.0569f,0.2031f,0.037f,0.2012f,0.0381f,0.2444f,0.0847f,0.2208f,0.06f,0.2111f,0.0557f,0.2254f,0.054f,0.2483f,0.0809f,0.2464f,0.0799f,0.2587f,0.0865f,0.225f,0.0604f,0.2239f,0.0673f,0.2238f,0.0671f,0.267f,0.0845f,0.2486f,0.0741f,0.2486f,0.074f,0.2049f,0.059f,0.1896f,0.055f,0.2102f,0.0461f,0.1952f,0.0651f,0.2083f,0.0443f,0.195f,0.0629f,0.2109f,0.0476f,0.2048f,0.0404f,0.2576f,0.0911f,0.2063f,0.0414f,0.2083f,0.0537f,0.2612f,0.0869f,0.2671f,0.0842f,0.2047f,0.0593f,0.1952f,0.0651f,0.2102f,0.0461f,0.2083f,0.0443f,0.195f,0.0629f,0.2102f,0.0461f,0.2063f,0.0414f,0.2612f,0.0869f,0.2671f,0.0842f,0.2083f,0.0537f,0.2109f,0.0476f,0.2083f,0.0443f,0.2444f,0.0847f,0.1952f,0.0651f,0.195f,0.0629f,0.1915f,0.0578f,0.225f,0.0604f,0.2239f,0.0673f,0.2464f,0.0799f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,7,-1,7,6,0,-1,2,0,6,-1,6,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1});
  }
}
protected class MFInt32154 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,9,-1,9,8,0,-1,2,0,8,-1,8,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1});
  }
}
protected class MFVec3f155 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-10.24f,-208.7556f,37.8622f,-12.3956f,-192.0756f,38.9067f,12.2756f,-208.7556f,32.8622f,14.68f,-192.0756f,33.0578f,13.0222f,-180.8311f,32.12f,-10.3689f,-179.6711f,38.1067f,-11.1778f,-206.8533f,22.5911f,-13.7244f,-188.8978f,23.0489f,7.2089f,-207.9778f,18.0622f,9.2756f,-188.8978f,17.3778f,7.6444f,-170.2622f,18.3111f,-12.0489f,-168.3111f,22.8711f,-11.4133f,-188.7022f,13.08f,-9.4489f,-202.4578f,12.7867f,1.12f,-203.1067f,10.16f,2.6533f,-188.8089f,9.5733f,1.4133f,-174.4f,10.3911f,-10.1467f,-173.2533f,12.9733f,-3.1422f,-202.0622f,43.0311f,-4.3644f,-192.1422f,43.9067f,-3.48f,-186.5511f,43.4133f,8.8667f,-187.1644f,41.3111f,9.6044f,-191.9867f,41.0222f,8.08f,-202.0622f,40.5822f});
  }
}
protected class MFVec2f156 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1822f,0.0458f,0.1809f,0.0434f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.1816f,0.0411f,0.1287f,0.0243f,0.0943f,0.0785f,0.1866f,0.0487f,0.186f,0.0472f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.1322f,0.09f,0.157f,0.0552f,0.1873f,0.048f,0.186f,0.0472f,0.1866f,0.0487f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.157f,0.0552f,0.1822f,0.0458f,0.1809f,0.0434f,0.1816f,0.0411f,0.0943f,0.0785f,0.1948f,0.024f,0.1953f,0.0282f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,7,-1,7,6,0,-1,1,0,6,-1,6,8,1,-1,9,2,1,-1,1,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,3,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1});
  }
}
protected class MFInt32160 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,9,-1,9,8,0,-1,1,0,8,-1,8,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,3,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1});
  }
}
protected class MFVec3f161 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-7.16f,-199.28f,32.1244f,6.7244f,-199.28f,28.8133f,8.1289f,-187.8222f,32.5733f,-7.8933f,-187.8222f,35.68f,6.7822f,-180.0978f,29.6622f,-6.8089f,-179.4267f,32.8667f,-13.2444f,-203.0756f,23.28f,-15.4f,-186.3956f,24.3244f,9.2711f,-203.0756f,18.28f,11.6756f,-186.3956f,18.4756f,10.0178f,-175.1556f,17.5378f,-13.3733f,-173.9911f,23.5244f,-12.3067f,-186.5333f,15.1022f,-10.8533f,-198.1422f,14.1867f,3.1911f,-198.1422f,11.0978f,4.9378f,-186.4178f,11.4756f,3.8756f,-179.9867f,10.4356f,-11.1378f,-179.24f,14.5333f});
  }
}
protected class MFVec2f162 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1831f,0.0355f,0.1904f,0.0263f,0.1901f,0.0243f,0.1819f,0.0351f,0.1913f,0.0249f,0.182f,0.0368f,0.088f,0.0133f,0.0677f,0.0461f,0.1822f,0.0458f,0.1809f,0.0434f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.0943f,0.0785f,0.1287f,0.0243f,0.1816f,0.0411f,0.1809f,0.0434f,0.1822f,0.0458f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.1287f,0.0243f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,23,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1});
  }
}
protected class MFInt32166 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,11,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1});
  }
}
protected class MFVec3f167 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.3156f,-226.1467f,71.4889f,25.9689f,-207.8711f,84.7778f,19.7556f,-179.8044f,89.8f,13.7022f,-223.2711f,37.3111f,21.4044f,-207.8711f,38.4133f,13.7956f,-174.4222f,40.1822f,15.68f,-222.1022f,109.8444f,22.9022f,-207.8711f,108.0222f,18.7511f,-185.72f,109.9333f,17.3067f,-177.1156f,67.2222f,23.6889f,-207.8711f,61.5867f,-13.6978f,-226.1467f,90.6444f,-9.5511f,-172.3822f,99.4444f,-13.5067f,-160.2089f,46.6222f,-8.96f,-220.7422f,118.4222f,-10.4f,-180.7956f,120.3333f,-15.4578f,-225.1644f,43.4222f,-10.7867f,-166.4533f,73.0889f,7.0578f,-221.9644f,16.5644f,14.2311f,-207.4933f,13.0444f,7.4578f,-171.52f,16.8267f,-18.1378f,-224.1467f,23.5511f,-16.6933f,-150.92f,24.2533f,-24.2356f,-217.4267f,90.8667f,-25.9022f,-216.4667f,44.6533f,-27.5378f,-215.8578f,32.8044f,-26.5333f,-162.8622f,33.32f,-24.8133f,-167.7511f,45.08f,-22.1156f,-174.1422f,72.2444f,-20.84f,-179.9333f,97.8889f,-21.9556f,-185.8844f,112.7333f,-20.2311f,-213.4356f,111.4f,-23.36f,-218.8356f,9.9244f,-1.9867f,-217.0133f,4.7956f,3.1022f,-206.5156f,1.8756f,-2.9733f,-174.0711f,5.3956f,-23.36f,-156.9911f,10.3111f,-29.0844f,-164.9022f,17.1111f,-29.9911f,-212.9111f,16.6444f,16.6622f,-209.1022f,116.2889f,11.8444f,-217.6f,117.4444f,-8.6133f,-216.5956f,125.7556f,-16.76f,-211.9111f,120.8667f,-18.0844f,-193.3956f,121.9333f,-10.8089f,-190.4533f,127.1778f,13.5289f,-194.1689f,117.6667f});
  }
}
protected class MFVec2f168 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2299f,0.0317f,0.2316f,0.0247f,0.2265f,0.0269f,0.241f,0.0419f,0.244f,0.0359f,0.2401f,0.0413f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2333f,0.0341f,0.2378f,0.0303f,0.2142f,0.0508f,0.2117f,0.0481f,0.2254f,0.0615f,0.2102f,0.0461f,0.2083f,0.0443f,0.2202f,0.0585f,0.2186f,0.0548f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2292f,0.0691f,0.2342f,0.0682f,0.2142f,0.0508f,0.2202f,0.0585f,0.2292f,0.0691f,0.2342f,0.0682f,0.2254f,0.0615f,0.2186f,0.0548f,0.2117f,0.0481f,0.2083f,0.0443f,0.2102f,0.0461f,0.2292f,0.0691f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2342f,0.0682f,0.2342f,0.0682f,0.2292f,0.0691f,0.226f,0.0221f,0.2245f,0.0286f,0.2102f,0.0461f,0.2102f,0.0461f,0.2083f,0.0443f,0.2083f,0.0443f,0.2232f,0.0245f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,10,11,-1,11,3,2,-1,0,12,14,-1,14,5,0,-1,2,6,13,-1,13,10,2,-1,0,3,11,-1,11,12,0,-1,15,16,0,-1,0,5,15,-1,17,1,2,-1,2,3,17,-1,16,17,3,-1,3,0,16,-1,2,1,4,-1,4,6,2,-1,6,4,8,-1,7,9,18,-1,18,15,7,-1,8,4,18,-1,18,9,8,-1,7,15,5,-1,1,17,20,-1,20,19,1,-1,17,16,21,-1,21,20,17,-1,16,15,22,-1,22,21,16,-1,22,15,18,-1,18,23,22,-1,23,18,4,-1,4,24,23,-1,24,4,1,-1,1,19,24,-1,27,26,25,-1,28,27,25,-1,29,28,25,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,19,20,24,-1,30,33,32,-1,32,31,30,-1,30,36,35,-1,33,30,35,-1,33,35,34,-1,10,25,26,-1,26,11,10,-1,11,26,27,-1,27,12,11,-1,12,27,28,-1,28,14,12,-1,14,28,29,-1,29,13,14,-1,13,29,25,-1,25,10,13,-1,6,30,31,-1,31,13,6,-1,13,31,32,-1,32,14,13,-1,14,32,33,-1,33,5,14,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,9,7,-1,9,35,36,-1,36,8,9,-1,8,36,30,-1,30,6,8,-1});
  }
}
protected class MFInt32172 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,23,24,-1,24,1,0,-1,3,25,27,-1,27,2,3,-1,0,4,26,-1,26,23,0,-1,3,1,24,-1,24,25,3,-1,5,6,7,-1,7,8,5,-1,9,10,11,-1,11,12,9,-1,6,13,14,-1,14,7,6,-1,11,10,17,-1,17,15,11,-1,15,17,18,-1,16,19,20,-1,20,5,16,-1,18,17,22,-1,22,21,18,-1,16,5,8,-1,31,30,35,-1,35,34,31,-1,30,29,36,-1,36,35,30,-1,29,28,37,-1,37,36,29,-1,37,28,33,-1,33,38,37,-1,38,33,32,-1,32,39,38,-1,39,32,31,-1,31,34,39,-1,42,41,40,-1,43,42,40,-1,44,43,40,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,34,35,39,-1,45,48,47,-1,47,46,45,-1,45,51,50,-1,48,45,50,-1,48,50,49,-1,23,40,41,-1,41,24,23,-1,24,41,42,-1,42,25,24,-1,25,42,43,-1,43,27,25,-1,27,43,44,-1,44,26,27,-1,26,44,40,-1,40,23,26,-1,4,45,46,-1,46,26,4,-1,26,46,47,-1,47,27,26,-1,27,47,48,-1,48,2,27,-1,8,48,49,-1,49,16,8,-1,16,49,50,-1,50,19,16,-1,21,50,51,-1,51,18,21,-1,18,51,45,-1,45,15,18,-1});
  }
}
protected class MFVec3f173 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.8044f,-176.5911f,17.4222f,9.4578f,-210.0356f,28.2356f,9.5378f,-206.5289f,16.3333f,14.6356f,-193.5022f,17.0756f,-8.4844f,-205.4267f,33.3244f,-14.6933f,-171.2356f,24.2133f,-14.6933f,-204.0889f,24.2711f,-12.7733f,-172.8889f,34.4622f,-12.7156f,-205.5867f,34.6978f,-12.12f,-190.9378f,36.6178f,9.2933f,-207.7333f,7.48f,16.5156f,-193.5022f,5.6489f,12.3644f,-171.3511f,7.5733f,-15.3467f,-206.3733f,16.0667f,-16.7867f,-166.4267f,17.9644f,-8.6533f,-172.4533f,33.36f,10.8444f,-175.6889f,28.2089f,13.5022f,-192.4667f,29.4489f,-10.0844f,-190.56f,36.4444f,10.9956f,-210.64f,33.8311f,14.68f,-194.4222f,34.1778f,12.3689f,-178.6978f,33.7822f,-8.04f,-176.0089f,38.3378f,-9.3111f,-192.9778f,40.4578f,-6.92f,-207.1956f,38.2f,2.9022f,-201.64f,-1.3511f,7.6267f,-192.3511f,-2.5156f,4.5289f,-175.9111f,-1.1289f,-13.9111f,-172.72f,5.2489f,-12.9111f,-200.7422f,3.8933f,-22.5378f,-199.56f,22.7467f,-22.3556f,-200.8222f,17.8356f,-23.4622f,-173.9467f,19.1244f,-22.5867f,-175.9244f,21.9333f,-21.2222f,-177.1644f,30.1467f,-20.5156f,-190.6444f,31.7733f,-20.9644f,-200.6f,30.48f});
  }
}
protected class MFVec2f174 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2192f,0.0256f,0.2205f,0.0195f,0.2048f,0.0404f,0.2199f,0.022f,0.2063f,0.0414f,0.2047f,0.0523f,0.1956f,0.0462f,0.1979f,0.0386f,0.2109f,0.0476f,0.277f,0.1031f,0.2673f,0.0987f,0.263f,0.1f,0.2744f,0.109f,0.1892f,0.0439f,0.1911f,0.0375f,0.2576f,0.0911f,0.2083f,0.0537f,0.263f,0.0893f,0.2612f,0.0869f,0.2047f,0.0593f,0.2048f,0.0593f,0.2671f,0.0842f,0.2673f,0.0839f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2102f,0.0461f,0.2083f,0.0443f,0.2039f,0.0358f,0.2152f,0.0224f,0.2154f,0.0203f,0.2126f,0.0258f,0.2034f,0.0366f,0.2033f,0.0375f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2083f,0.0443f,0.2102f,0.0461f,0.2576f,0.0911f,0.2102f,0.0461f,0.2083f,0.0443f,0.2048f,0.0404f,0.2083f,0.0537f,0.2047f,0.0593f,0.2612f,0.0869f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,7,1,-1,1,0,6,-1,7,8,2,-1,2,1,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,0,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1});
  }
}
protected class MFInt32178 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,7,0,-1,0,1,6,-1,7,8,2,-1,2,0,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,1,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1});
  }
}
protected class MFVec3f179 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {10.3244f,-206.6178f,33.1022f,13.4178f,-194.3867f,32.5644f,11.6578f,-180.8222f,33.0311f,-10.6756f,-179.5067f,37.4311f,-12.2844f,-194.5511f,38.4089f,-8.8f,-206.4044f,36.88f,6.4f,-205.08f,18.8533f,10.0844f,-188.8622f,19.2f,7.7689f,-173.1378f,18.8044f,-12.6356f,-170.4489f,23.36f,-13.9111f,-187.4222f,25.48f,-11.5156f,-201.6356f,23.2222f,1.3733f,-199.7689f,13.2489f,3.9822f,-188.6844f,13.8578f,2.2356f,-177.2267f,13.3244f,-10.2889f,-175.5822f,15.9244f,-11.0267f,-187.2f,17.9156f,-9.3556f,-197.7111f,15.8356f,8.2f,-194.0267f,40.4844f,6.6933f,-199.9511f,40.72f,-2.6133f,-199.8444f,42.3956f,-4.2711f,-193.9556f,43.4933f,-3.5556f,-186.5422f,42.6667f,7.3111f,-187.1822f,40.7244f});
  }
}
protected class MFVec2f180 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2109f,0.0133f,0.2102f,0.0181f,0.2093f,0.0169f,0.1959f,0.0354f,0.1986f,0.0324f,0.1989f,0.0342f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2109f,0.0133f,0.2102f,0.0181f,0.1989f,0.0342f,0.1986f,0.0324f,0.1959f,0.0354f,0.2093f,0.0169f});
  }
}
protected class MFFloat181 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat182 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32183 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,4,-1,4,1,2,-1,0,1,4,-1,4,5,0,-1,7,1,0,-1,0,6,7,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,10,4,3,-1,3,9,10,-1,5,4,10,-1,10,11,5,-1,0,5,11,-1,11,6,0,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1});
  }
}
protected class MFInt32184 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,9,0,5,-1,5,8,9,-1,1,0,9,-1,9,10,1,-1,12,6,7,-1,7,11,12,-1,14,3,2,-1,2,13,14,-1,4,3,14,-1,14,15,4,-1,5,4,15,-1,15,8,5,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,11,18,19,-1,19,12,11,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,16,-1,16,8,15,-1});
  }
}
protected class MFVec3f185 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {5.1556f,-201.8578f,29.5911f,9.2756f,-190.32f,33.5067f,7.0889f,-180.2178f,31.0756f,-5.7022f,-179.4978f,33.8489f,-5.5022f,-189.9956f,36.3156f,-5.9467f,-201.8578f,31.6178f,8.5378f,-202.0889f,17.8222f,11.6311f,-189.8578f,17.2844f,9.8756f,-176.2933f,17.7511f,-12.4622f,-174.9778f,22.1511f,-14.0711f,-190.0222f,23.1289f,-10.5867f,-201.8756f,21.6f,3.0311f,-197.0133f,10.5333f,4.9333f,-189.5111f,10.2178f,3.8267f,-180.9867f,10.5156f,-9.9067f,-180.1778f,13.0756f,-10.8444f,-189.4978f,13.9422f,-8.7289f,-196.88f,12.7333f});
  }
}
protected class MFVec2f186 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2048f,0.0135f,0.2053f,0.0142f,0.1964f,0.026f,0.1976f,0.0232f,0.1977f,0.0271f,0.2052f,0.017f,0.0639f,0.0523f,0.0903f,0.0107f,0.2102f,0.0181f,0.2109f,0.0133f,0.2093f,0.0169f,0.1317f,0.0215f,0.0951f,0.0836f,0.1959f,0.0354f,0.1986f,0.0324f,0.1989f,0.0342f,0.2102f,0.0181f,0.2109f,0.0133f,0.2093f,0.0169f,0.0951f,0.0836f,0.1986f,0.0324f,0.1989f,0.0342f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1});
  }
}
protected class MFInt32190 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1});
  }
}
protected class MFVec3f191 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-131.9333f,-191.6711f,20.6444f,-73.4f,-191.6711f,163.2667f,58.1111f,-191.6711f,198.5111f,149.2667f,-191.6711f,99.8f,149.2667f,-191.6711f,-58.5111f,58.1111f,-191.6711f,-157.2222f,-73.4f,-191.6711f,-121.9778f,-131.9333f,-358.3111f,20.6444f,-73.4f,-358.3111f,163.2667f,58.1111f,-358.3111f,198.5111f,149.2667f,-358.3111f,99.8f,149.2667f,-358.3111f,-58.5111f,58.1111f,-358.3111f,-157.2222f,-73.4f,-358.3111f,-121.9778f,-131.9333f,-647.2f,20.6444f,-73.4f,-647.2f,163.2667f,58.1111f,-647.2f,198.5111f,149.2667f,-647.2f,99.8f,149.2667f,-647.2f,-58.5111f,58.1111f,-647.2f,-157.2222f,-73.4f,-647.2f,-121.9778f,-150.0222f,-941.4222f,20.6444f,-84.6889f,-941.4222f,179.8444f,62.1556f,-941.4222f,219.1778f,148.7333f,-941.4222f,109f,148.7333f,-941.4222f,-67.7111f,62.1556f,-941.4222f,-177.8889f,-84.6889f,-941.4222f,-138.5556f,-95.7556f,-579.3778f,20.6444f,-50.8667f,-579.3778f,130.0667f,50.0667f,-579.3778f,157.0889f,116.6444f,-579.3778f,81.3556f,116.6444f,-579.3778f,-40.0667f,50.0667f,-579.3778f,-115.8f,-50.8667f,-579.3778f,-88.7778f,-96.2f,-866.3111f,20.6444f,-54.8222f,-866.3111f,107.5778f,38.12f,-866.3111f,129.0444f,112.6444f,-866.3111f,68.8667f,112.6444f,-866.3111f,-27.5778f,38.12f,-866.3111f,-87.7556f,-54.8222f,-866.3111f,-66.2889f,-91.5333f,-103.2f,20.6444f,-48.2f,-103.2f,126.2f,49.1333f,-103.2f,152.2444f,127.1778f,-103.2f,79.2222f,127.1778f,-103.2f,-37.9333f,49.1333f,-103.2f,-110.9556f,-48.2f,-103.2f,-84.9111f,-82.2444f,-1029.8667f,20.6444f,-46.1556f,-1029.8667f,103.8889f,35.0222f,-1029.8667f,122.6444f,100.1111f,-1029.8667f,70.1111f,100.1111f,-1029.8667f,-21.48f,35.0222f,-1029.8667f,-74.0222f,-46.1556f,-1029.8667f,-55.2667f,-28.2756f,-1073.4222f,20.6444f,-12.48f,-1073.4222f,61.1778f,23.0089f,-1073.4222f,69.3556f,51.4889f,-1073.4222f,46.4044f,51.4889f,-1073.4222f,2.2222f,23.0089f,-1073.4222f,-20.7467f,-12.48f,-1073.4222f,-12.5511f});
  }
}
protected class MFVec2f192 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.719f,0.5576f,0.6284f,0.5576f,0.7414f,0.5576f,0.6787f,0.5576f,0.5781f,0.5576f,0.5154f,0.5576f,0.5378f,0.5576f,0.6284f,0.5029f,0.7509f,0.3997f,0.6284f,0.3997f,0.7509f,0.5029f,0.7811f,0.3997f,0.7811f,0.5029f,0.6964f,0.3997f,0.6964f,0.5029f,0.5604f,0.3997f,0.5604f,0.5029f,0.4756f,0.3997f,0.4756f,0.5029f,0.5059f,0.3997f,0.5059f,0.5029f,0.7509f,0.3197f,0.6284f,0.3197f,0.7811f,0.3197f,0.6964f,0.3197f,0.5604f,0.3197f,0.4756f,0.3197f,0.5059f,0.3197f,0.7651f,0.2166f,0.6284f,0.2166f,0.7989f,0.2166f,0.7043f,0.2166f,0.5525f,0.2166f,0.4579f,0.2166f,0.4917f,0.2166f,0.7224f,0.263f,0.6284f,0.263f,0.7456f,0.263f,0.6805f,0.263f,0.5762f,0.263f,0.5112f,0.263f,0.5344f,0.263f,0.8705f,0.5452f,0.8705f,0.5383f,0.8705f,0.5369f,0.8705f,0.5408f,0.8705f,0.5483f,0.8705f,0.5522f,0.8705f,0.5509f,0.917f,0.5452f,0.917f,0.5266f,0.89f,0.5304f,0.89f,0.5452f,0.917f,0.522f,0.89f,0.5268f,0.917f,0.5349f,0.89f,0.537f,0.917f,0.5555f,0.89f,0.5534f,0.917f,0.5684f,0.89f,0.5636f,0.917f,0.5638f,0.89f,0.56f,0.8746f,0.531f,0.8746f,0.5452f,0.8746f,0.5279f,0.8746f,0.5368f,0.8746f,0.5524f,0.8746f,0.5613f,0.8746f,0.5581f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
protected class MFInt32196 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
protected class MFVec3f197 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-32.3156f,-145.4756f,21.6844f,-16.52f,-145.4756f,62.2178f,18.9689f,-145.4756f,70.4222f,47.4444f,-145.4756f,47.4444f,47.4444f,-145.4756f,3.2622f,18.9689f,-145.4756f,-19.7067f,-16.52f,-145.4756f,-11.5111f,-104.2444f,-393.5556f,21.6844f,-65.2667f,-349.5111f,110.3778f,-55.3111f,-260.8889f,128.2f,-94.5111f,-273.5111f,21.6844f,35.6711f,-349.5111f,134.7333f,32.8133f,-260.8889f,149.6667f,99.8f,-393.5556f,76.4222f,103.4889f,-273.5111f,64.1689f,99.8f,-427.7778f,-40.1556f,103.4889f,-273.5111f,-20.8f,35.6711f,-427.7778f,-108.3778f,32.8133f,-273.5111f,-84.6f,-65.2667f,-427.7778f,-84.0222f,-55.3111f,-273.5111f,-63.1333f,-50.2f,-188.6756f,104.9111f,-86.2889f,-188.6756f,21.6844f,30.9822f,-188.6756f,123.6667f,96.0667f,-188.6756f,71.1333f,96.0667f,-188.6756f,-20.44f,30.9822f,-188.6756f,-70.9556f,-50.2f,-188.6756f,-52.2444f,-71.8f,-762.7556f,20.7867f,-41.3378f,-762.3111f,90.2f,27.1333f,-762.3111f,107.3556f,82.0222f,-762.7556f,59.3156f,82.0222f,-763.6444f,-22.7422f,27.1333f,-763.6444f,-56.7778f,-41.3378f,-763.6444f,-39.6222f,-31.8089f,-834.3111f,21.7067f,-16.3956f,-834.3111f,56.8222f,18.2356f,-834.3111f,65.4889f,46.0222f,-834.3111f,41.1956f,46.0222f,-834.7556f,-0.3067f,18.2356f,-834.7556f,-17.52f,-16.3956f,-834.7556f,-8.8444f});
  }
}
protected class MFVec2f198 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9309f,0.5848f,0.919f,0.5848f,0.8921f,0.5848f,0.8706f,0.5848f,0.8706f,0.5848f,0.8921f,0.5848f,0.919f,0.5848f,0.9845f,0.5321f,0.955f,0.5475f,0.9491f,0.5599f,0.9788f,0.5571f,0.8787f,0.5475f,0.8825f,0.5599f,0.8302f,0.5321f,0.8291f,0.5571f,0.8302f,0.52f,0.8291f,0.5571f,0.8787f,0.52f,0.8825f,0.5571f,0.955f,0.52f,0.9491f,0.5571f,0.9444f,0.5755f,0.9717f,0.5755f,0.8831f,0.5755f,0.8339f,0.5755f,0.8339f,0.5755f,0.8831f,0.5755f,0.9444f,0.5755f,0.9632f,0.3942f,0.9402f,0.3943f,0.8884f,0.3943f,0.8469f,0.3942f,0.8469f,0.3941f,0.8884f,0.3941f,0.9402f,0.3941f,0.9325f,0.3742f,0.9208f,0.3742f,0.8947f,0.3742f,0.8737f,0.3742f,0.8737f,0.3741f,0.8947f,0.3741f,0.9208f,0.3741f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,15,21,-1,21,34,13,-1,9,34,21,-1,21,20,9,-1,0,15,14,-1,14,2,0,-1,30,33,16,-1,16,3,30,-1,3,16,25,-1,25,4,3,-1,22,17,18,-1,18,5,22,-1,5,18,29,-1,29,6,5,-1,6,19,27,-1,7,20,21,-1,21,1,7,-1,1,21,15,-1,15,0,1,-1,15,13,32,-1,32,14,15,-1,33,11,12,-1,12,16,33,-1,25,16,12,-1,12,23,25,-1,17,24,10,-1,10,18,17,-1,18,10,28,-1,28,29,18,-1,19,8,26,-1,26,27,19,-1,4,25,17,-1,17,22,4,-1,25,23,24,-1,24,17,25,-1,20,27,26,-1,26,9,20,-1,6,27,20,-1,20,7,6,-1,29,28,8,-1,8,19,29,-1,6,29,19,-1,1,0,31,-1,0,2,31,-1,31,30,3,-1,3,4,31,-1,4,22,31,-1,22,5,31,-1,5,6,31,-1,6,7,31,-1,7,1,31,-1,2,30,31,-1,14,33,30,-1,30,2,14,-1,32,11,33,-1,33,14,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,26,8,36,-1,36,35,26,-1,8,28,37,-1,37,36,8,-1,28,10,38,-1,38,37,28,-1,10,24,39,-1,39,38,10,-1,24,23,40,-1,40,39,24,-1,23,12,41,-1,41,40,23,-1,12,11,42,-1,42,41,12,-1,11,32,43,-1,43,42,11,-1,32,13,44,-1,44,43,32,-1,13,34,45,-1,45,44,13,-1,34,9,46,-1,46,45,34,-1,9,26,35,-1,35,46,9,-1});
  }
}
protected class MFInt32202 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,12,27,-1,27,34,5,-1,7,34,27,-1,27,28,7,-1,9,12,11,-1,11,10,9,-1,30,33,14,-1,14,13,30,-1,13,14,16,-1,16,15,13,-1,17,20,19,-1,19,18,17,-1,18,19,22,-1,22,21,18,-1,21,24,23,-1,25,28,27,-1,27,26,25,-1,26,27,12,-1,12,9,26,-1,12,5,32,-1,32,11,12,-1,33,3,4,-1,4,14,33,-1,16,14,4,-1,4,8,16,-1,20,6,2,-1,2,19,20,-1,19,2,29,-1,29,22,19,-1,24,0,1,-1,1,23,24,-1,15,16,20,-1,20,17,15,-1,16,8,6,-1,6,20,16,-1,28,23,1,-1,1,7,28,-1,21,23,28,-1,28,25,21,-1,22,29,0,-1,0,24,22,-1,21,22,24,-1,26,9,31,-1,9,10,31,-1,31,30,13,-1,13,15,31,-1,15,17,31,-1,17,18,31,-1,18,21,31,-1,21,25,31,-1,25,26,31,-1,10,30,31,-1,11,33,30,-1,30,10,11,-1,32,3,33,-1,33,11,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,1,0,36,-1,36,35,1,-1,0,29,37,-1,37,36,0,-1,29,2,38,-1,38,37,29,-1,2,6,39,-1,39,38,2,-1,6,8,40,-1,40,39,6,-1,8,4,41,-1,41,40,8,-1,4,3,42,-1,42,41,4,-1,3,32,43,-1,43,42,3,-1,32,5,44,-1,44,43,32,-1,5,34,45,-1,45,44,5,-1,34,7,46,-1,46,45,34,-1,7,1,35,-1,35,46,7,-1});
  }
}
protected class MFVec3f203 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {36.9244f,-189.3067f,-32.1556f,50.4667f,-194.5956f,8.0711f,15.4089f,-186.32f,-50.8667f,-39.0889f,-188.5378f,-32.0667f,-50.3778f,-192.5244f,-2.8667f,-34f,-191.6578f,45.6267f,1.9778f,-189.8756f,57.5422f,33.3511f,-192.4311f,45.7244f,2.8756f,-237.0222f,64.6311f,45.1778f,-246.6667f,45.0756f,-40.1778f,-250f,46.2844f,-12.0311f,-254.3556f,-63.3556f,-46.3333f,-248.5778f,-40.2444f,44.9111f,-248.5778f,-42.2f,14.9644f,-211.2667f,-54.1111f,40.5956f,-211.9378f,-35.3556f,-35.7378f,-210.1422f,-34.6444f,-58.6f,-233.2889f,17.1822f,-32.2533f,-217.4044f,46.4089f,0.6622f,-211.6844f,58.9244f,35.6711f,-214.0533f,46.4711f,55.8889f,-217.4222f,3.6889f,-49.9333f,-193.3467f,18.3911f,-52.6444f,-261.9556f,-8.8089f,-51.8444f,-262.2667f,14.2667f,-59.5333f,-231.2533f,-5.4622f,22.7156f,-241.7778f,58.3822f,16.48f,-212.84f,54.9422f,-18.4444f,-243.4222f,58.9867f,-17.4844f,-214.5156f,54.9111f,-11.0133f,-186.0533f,-50.8222f,1.2667f,-173.6f,6.3867f,12.6444f,-254.2222f,-63.5778f,-9.7244f,-210.6844f,-53.9778f,58.7778f,-259.0667f,3.4978f,19.0178f,-278.5333f,50.44f,4.0533f,-273.1556f,55.0044f,-12.12f,-279.8667f,50.8311f,-28.88f,-286.5333f,41.1156f,-38.7022f,-299.3778f,14.1067f,-39.4267f,-298.6667f,-6.3956f,-34.4489f,-283.2889f,-32.3778f,-6.5289f,-289.5556f,-51f,10.0444f,-289.8222f,-51.1333f,36.0533f,-284.3556f,-33.9333f,48.0667f,-296.8889f,5.5156f,36.5689f,-283.8667f,40.1778f});
  }
}
protected class MFVec2f204 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.227f,0.1089f,0.2217f,0.1285f,0.2533f,0.0835f,0.273f,0.1232f,0.2824f,0.0941f,0.2433f,0.1632f,0.2685f,0.0797f,0.2165f,0.148f,0.2759f,0.0832f,0.2428f,0.156f,0.2563f,0.142f,0.2584f,0.1419f,0.2431f,0.1588f,0.2715f,0.1062f,0.2761f,0.1011f,0.2698f,0.09f,0.2775f,0.078f,0.2629f,0.0863f,0.248f,0.0935f,0.2498f,0.0895f,0.2702f,0.0748f,0.2296f,0.1148f,0.2397f,0.101f,0.2249f,0.1266f,0.2295f,0.1126f,0.2207f,0.1406f,0.2252f,0.1591f,0.2245f,0.1634f,0.2202f,0.1406f,0.2407f,0.0951f,0.2662f,0.1249f,0.2599f,0.1313f,0.2623f,0.1418f,0.2691f,0.1232f,0.2231f,0.166f,0.2217f,0.1285f,0.227f,0.1089f,0.2407f,0.0951f,0.2533f,0.0835f,0.2685f,0.0797f,0.2759f,0.0832f,0.2824f,0.0941f,0.273f,0.1232f,0.2623f,0.1418f,0.2433f,0.1632f,0.2231f,0.166f,0.2165f,0.148f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1});
  }
}
protected class MFInt32208 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1});
  }
}
protected class MFVec3f209 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-40.2533f,-152.7778f,50.8133f,30.1822f,-234.4889f,39.7111f,36.1244f,-188.3689f,38.8578f,23.7244f,-250.5778f,45.9733f,-38.88f,-253.8667f,51f,-18.0267f,-135.9111f,49.28f,29.72f,-158.9556f,43.6356f,4.8978f,-141.7778f,52.5511f,-17.5689f,-254.5333f,49.2311f,5.76f,-254.2667f,52.8489f,-17.8889f,-121.3778f,34.3778f,24.4044f,-131.0222f,14.8222f,1.9511f,-126.1333f,28.1289f,-39.2044f,-127.8222f,28.7333f,27.4978f,-254.1333f,14.6178f,-39.9333f,-255.6889f,14.08f,-7.1378f,-255.6444f,16.8756f,33.7911f,-235.8222f,13.4711f,39.4978f,-189.1244f,13.3022f,26.6311f,-232.3156f,55.7644f,32.3644f,-198.6133f,54.9333f,26.6178f,-178.4444f,59.6222f,4.1022f,-166.6044f,68.2444f,-15.6933f,-162.7867f,64.5689f,-34.0133f,-173.3022f,65.6222f,-32.7333f,-244.3556f,65.8f,-16.2578f,-244.7556f,64.6667f,6.5156f,-244.5778f,68.3778f,21.5156f,-242.2222f,61.8578f,-19.7067f,-129.5556f,7.5378f,-2.5556f,-133.6444f,1.6178f,14.4267f,-137.2f,-11.0178f,27.68f,-188.0222f,-11.7422f,22.3422f,-231.9111f,-11.3778f,18.5778f,-243.1556f,-9.9022f,-9.5111f,-244.3556f,-8.2889f,-32.5467f,-244.2222f,-12.0667f,-31.8622f,-132.8444f,1.2133f,-57.4889f,-159.9733f,41.1778f,-56.6444f,-148.8267f,25.1156f,-51f,-139.3778f,7.5067f,-51.6222f,-239.0667f,-4.3778f,-57.2667f,-247.5111f,14.8933f,-56.4222f,-245.8222f,44.12f,-52.9111f,-248.6222f,57.9467f,-53.9778f,-176.9733f,57.7644f});
  }
}
protected class MFVec2f210 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2314f,0.0879f,0.21f,0.1541f,0.2053f,0.1595f,0.2104f,0.1443f,0.2271f,0.0958f,0.2224f,0.1067f,0.2032f,0.149f,0.2132f,0.1285f,0.2197f,0.1123f,0.2163f,0.1174f,0.227f,0.1089f,0.2165f,0.148f,0.2217f,0.1285f,0.2407f,0.0951f,0.2178f,0.1526f,0.2363f,0.0929f,0.2213f,0.1179f,0.2171f,0.1588f,0.2129f,0.1643f,0.21f,0.1541f,0.2053f,0.1595f,0.2032f,0.149f,0.2132f,0.1285f,0.2224f,0.1067f,0.2314f,0.0879f,0.2271f,0.0958f,0.2197f,0.1123f,0.2163f,0.1174f,0.2104f,0.1443f,0.227f,0.1089f,0.2217f,0.1285f,0.2165f,0.148f,0.2129f,0.1643f,0.2171f,0.1588f,0.2178f,0.1526f,0.2213f,0.1179f,0.2363f,0.0929f,0.2407f,0.0951f,0.2314f,0.0879f,0.2407f,0.0951f,0.2407f,0.0951f,0.2363f,0.0929f,0.2363f,0.0929f,0.2271f,0.0958f,0.2271f,0.0958f,0.2314f,0.0879f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,4,12,-1,1,7,6,-1,6,0,1,-1,10,1,0,-1,0,12,10,-1,1,10,11,-1,11,2,1,-1,8,5,2,-1,2,3,8,-1,11,13,2,-1,12,4,15,-1,9,4,0,-1,0,6,9,-1,1,2,5,-1,5,7,1,-1,3,2,13,-1,13,14,3,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,3,14,17,-1,17,16,3,-1,14,15,18,-1,18,17,14,-1,15,4,19,-1,19,18,15,-1,4,9,20,-1,20,19,4,-1,28,25,26,-1,26,27,28,-1,8,3,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1});
  }
}
protected class MFInt32214 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,12,-1,2,7,6,-1,6,0,2,-1,10,2,0,-1,0,12,10,-1,2,10,11,-1,11,3,2,-1,8,5,3,-1,3,4,8,-1,11,13,3,-1,12,1,15,-1,9,1,0,-1,0,6,9,-1,2,3,5,-1,5,7,2,-1,4,3,13,-1,13,14,4,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,4,14,17,-1,17,16,4,-1,14,15,18,-1,18,17,14,-1,15,1,19,-1,19,18,15,-1,1,9,20,-1,20,19,1,-1,28,25,26,-1,26,27,28,-1,8,4,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1});
  }
}
protected class MFVec3f215 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.4089f,-237.8222f,39.5467f,11.3689f,-222.7111f,40.7156f,13.4f,-177.3867f,38.2622f,-13.7911f,-147.9022f,41.9778f,-13.6578f,-243.9556f,41.5022f,20.3067f,-180.5911f,68.5111f,13.0133f,-237.7333f,69.8889f,22.6489f,-221.96f,66.7778f,-11.2178f,-163.8933f,73.4f,-11.3333f,-244.2222f,74.0222f,8.5467f,-224.9822f,12.9867f,14.4889f,-178.8711f,12.1378f,2.0844f,-241.1111f,19.2489f,8.0844f,-149.4622f,16.9111f,-16.7378f,-132.2667f,25.8267f,-15.8756f,-244.8f,26.1289f,-25.2978f,-152.5333f,39.9422f,-26.88f,-145.3733f,32.5778f,-26.12f,-238.9333f,32.8178f,-24.7956f,-238.4f,42.5778f,-22.8667f,-238.6222f,69.6222f,-22.7467f,-167.3556f,69.0444f,10.3956f,-232.1778f,85.9778f,18.2533f,-220.8133f,83.2222f,16.1733f,-188.0978f,84.8667f,-11.4533f,-175.2044f,89.4889f,-18.0356f,-177.0044f,86.3333f,-18.1467f,-233.8667f,86.8222f,-10.6533f,-237.1556f,90.0667f});
  }
}
protected class MFVec2f216 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2027f,0.1355f,0.2132f,0.1171f,0.1958f,0.1447f,0.1899f,0.1499f,0.2047f,0.1286f,0.1825f,0.1473f,0.1858f,0.1369f,0.1864f,0.1452f,0.1953f,0.1244f,0.2059f,0.1148f,0.21f,0.1541f,0.2053f,0.1595f,0.2104f,0.1443f,0.2032f,0.149f,0.2132f,0.1285f,0.2163f,0.1174f,0.2047f,0.1286f,0.2132f,0.1285f,0.2163f,0.1174f,0.2132f,0.1171f,0.2059f,0.1148f,0.1953f,0.1244f,0.1858f,0.1369f,0.1864f,0.1452f,0.1825f,0.1473f,0.1953f,0.1244f,0.1953f,0.1244f,0.2059f,0.1148f,0.2059f,0.1148f});
  }
}
protected class MFFloat217 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat218 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32219 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,14,11,-1,5,0,2,-1,2,7,5,-1,1,2,9,-1,9,10,1,-1,15,23,20,-1,20,8,15,-1,3,21,19,-1,19,4,3,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,1,12,-1,6,7,2,-1,2,1,6,-1,5,17,14,-1,14,0,5,-1,10,9,3,-1,3,4,10,-1,9,2,0,-1,0,11,9,-1,10,18,12,-1,12,1,10,-1,8,3,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,3,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,29,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1});
  }
}
protected class MFInt32220 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,11,-1,5,1,2,-1,2,7,5,-1,3,2,9,-1,9,10,3,-1,15,23,20,-1,20,8,15,-1,0,21,19,-1,19,4,0,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,3,12,-1,6,7,2,-1,2,3,6,-1,5,17,14,-1,14,1,5,-1,10,9,0,-1,0,4,10,-1,9,2,1,-1,1,11,9,-1,10,18,12,-1,12,3,10,-1,8,0,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,0,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,14,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1});
  }
}
protected class MFVec3f221 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {24.6f,-230.6756f,82.1556f,27.2578f,-178.1333f,95.3556f,33.3867f,-212.4f,93.0444f,21.3556f,-204.1822f,28.6222f,17.8889f,-164.4667f,34.4844f,22.8711f,-227.0978f,117.3111f,23.3333f,-184.8711f,118.7778f,27.2978f,-212.4f,121.9778f,12.4622f,-220.1733f,31.8533f,31.2711f,-208.8533f,67.5333f,24.9867f,-172.5644f,71.8f,23.2622f,-229.9378f,64.6267f,-17.2711f,-172.1556f,93f,-15.4622f,-153.5511f,40.5733f,-17.4533f,-230.6756f,88.5111f,-13.9156f,-226.9022f,35.6756f,-20.72f,-181.1422f,118.1111f,-20.7956f,-227.1111f,116.4667f,-15.7422f,-162.8311f,68.0222f,14.9111f,-163.0844f,17.5244f,7.6178f,-220.2178f,18.9111f,17.2533f,-204.4533f,15.8222f,-16.6133f,-146.3911f,22.4267f,-16.7289f,-226.7244f,23.0444f,-27.6489f,-171.0711f,64.68f,-27.5689f,-161.7689f,37.1733f,-27.3956f,-159.2578f,30.7556f,-27.8f,-218.1422f,31.2489f,-26.04f,-218.1956f,35.6533f,-29.4178f,-221.9244f,87.8889f,-31.7022f,-219.4f,107.6667f,-31.6978f,-187.2444f,108.8222f,-29.1156f,-180.3733f,89.6222f,15.3911f,-222.1289f,127.3111f,19.0756f,-211.0178f,131.1333f,15.7778f,-190.2044f,128.5111f,-20.8356f,-187.3867f,127.9333f,-29.96f,-192f,120.2444f,-29.9644f,-216.3067f,119.2667f,-20.9022f,-222.1378f,126.5556f,0.4311f,-201.8f,5.7467f,-5.2711f,-211.2756f,8.1022f,-22.1067f,-215.7067f,9.3778f,-25.8844f,-212.48f,12.9689f,-25.5422f,-163.8489f,12.5733f,-22.3067f,-158.8f,7.9733f,-1.3333f,-169.6489f,7.3733f});
  }
}
protected class MFVec2f222 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.177f,0.1457f,0.1567f,0.1378f,0.1506f,0.1431f,0.1539f,0.1386f,0.1751f,0.1447f,0.1523f,0.1336f,0.1493f,0.1348f,0.1463f,0.1377f,0.1689f,0.1382f,0.1638f,0.1444f,0.1645f,0.1416f,0.1607f,0.138f,0.1731f,0.1071f,0.1859f,0.1202f,0.175f,0.1048f,0.1985f,0.1126f,0.1682f,0.1025f,0.1699f,0.1017f,0.1795f,0.1136f,0.1825f,0.1473f,0.1858f,0.1369f,0.1864f,0.1452f,0.1953f,0.1244f,0.2059f,0.1148f,0.1795f,0.1136f,0.1859f,0.1202f,0.1953f,0.1244f,0.2059f,0.1148f,0.1985f,0.1126f,0.175f,0.1048f,0.1699f,0.1017f,0.1682f,0.1025f,0.1731f,0.1071f,0.1523f,0.1336f,0.1463f,0.1377f,0.1493f,0.1348f,0.1682f,0.1025f,0.1682f,0.1025f,0.1699f,0.1017f,0.1699f,0.1017f,0.1864f,0.1452f,0.1858f,0.1369f,0.2059f,0.1148f,0.2059f,0.1148f,0.1953f,0.1244f,0.1953f,0.1244f,0.1825f,0.1473f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,10,17,-1,17,16,9,-1,11,1,2,-1,2,8,11,-1,7,8,2,-1,2,3,7,-1,7,3,4,-1,4,13,7,-1,12,13,4,-1,4,5,12,-1,5,6,0,-1,0,12,5,-1,0,6,1,-1,1,11,0,-1,14,20,19,-1,19,15,14,-1,14,15,17,-1,17,10,14,-1,9,16,18,-1,18,21,9,-1,7,10,9,-1,9,8,7,-1,8,9,21,-1,21,11,8,-1,12,20,14,-1,14,13,12,-1,13,14,10,-1,10,7,13,-1,11,21,22,-1,0,24,23,-1,23,12,0,-1,11,22,24,-1,24,0,11,-1,23,20,12,-1,39,40,41,-1,41,42,37,-1,39,41,37,-1,38,39,37,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,28,29,25,-1,25,26,27,-1,28,25,27,-1,35,36,30,-1,30,31,35,-1,17,15,26,-1,26,25,17,-1,15,19,27,-1,27,26,15,-1,19,18,28,-1,28,27,19,-1,18,16,29,-1,29,28,18,-1,16,17,25,-1,25,29,16,-1,19,20,31,-1,31,30,19,-1,20,23,32,-1,32,31,20,-1,23,24,33,-1,33,32,23,-1,24,22,34,-1,34,33,24,-1,22,21,35,-1,35,34,22,-1,21,18,36,-1,36,35,21,-1,18,19,30,-1,30,36,18,-1,2,1,38,-1,38,37,2,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,4,41,-1,41,40,5,-1,4,3,42,-1,42,41,4,-1,3,2,37,-1,37,42,3,-1});
  }
}
protected class MFInt32226 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,29,-1,29,28,2,-1,11,5,4,-1,4,13,11,-1,10,13,4,-1,4,6,10,-1,10,6,7,-1,7,12,10,-1,14,12,7,-1,7,8,14,-1,8,9,3,-1,3,14,8,-1,3,9,5,-1,5,11,3,-1,0,33,31,-1,31,27,0,-1,0,27,29,-1,29,1,0,-1,2,28,30,-1,30,35,2,-1,15,18,17,-1,17,16,15,-1,16,17,34,-1,34,19,16,-1,20,32,22,-1,22,21,20,-1,21,22,24,-1,24,23,21,-1,19,34,36,-1,25,39,37,-1,37,20,25,-1,19,36,38,-1,38,26,19,-1,37,32,20,-1,54,55,56,-1,56,57,52,-1,54,56,52,-1,53,54,52,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,43,44,40,-1,40,41,42,-1,43,40,42,-1,50,51,45,-1,45,46,50,-1,29,27,41,-1,41,40,29,-1,27,31,42,-1,42,41,27,-1,31,30,43,-1,43,42,31,-1,30,28,44,-1,44,43,30,-1,28,29,40,-1,40,44,28,-1,31,33,46,-1,46,45,31,-1,32,37,47,-1,47,46,32,-1,37,39,48,-1,48,47,37,-1,38,36,49,-1,49,48,38,-1,36,34,50,-1,50,49,36,-1,35,30,51,-1,51,50,35,-1,30,31,45,-1,45,51,30,-1,4,5,53,-1,53,52,4,-1,5,9,54,-1,54,53,5,-1,9,8,55,-1,55,54,9,-1,8,7,56,-1,56,55,8,-1,7,6,57,-1,57,56,7,-1,6,4,52,-1,52,57,6,-1});
  }
}
protected class MFVec3f227 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-22.7022f,-187.6178f,43.8667f,-22.9067f,-173.4711f,63.8533f,22.9067f,-172.7733f,64.4533f,25.5022f,-193.9644f,64.9022f,21.9556f,-213.3289f,63.1067f,-23.4267f,-213.3289f,63.2222f,-26.2267f,-194.4844f,64.4089f,22.0178f,-192.8133f,44.0889f,19.6f,-168.1422f,39.5867f,16.8444f,-169.1867f,31.3333f,20.4311f,-194.9956f,33.3333f,-20.0978f,-168.9244f,40.9733f,-19.9244f,-209.0489f,41.6222f,18.8756f,-209.0089f,40.9111f,15.84f,-208.1556f,30.2533f,17.9378f,-209.6933f,19.6933f,18.4f,-167.4622f,21.1378f,22.3689f,-194.9956f,24.3289f,-25.6533f,-163.7378f,20.4844f,-25.7289f,-209.7022f,18.8222f,-25.3911f,-208.1422f,32.0044f,-25.4489f,-168.5556f,31.9378f,-25.5822f,-173.0711f,40.68f,-26.2578f,-200.6622f,41.2933f,-25.6711f,-186.2889f,43.3022f,17.3067f,-194.1778f,13.44f,14.4933f,-203.7422f,9.0844f,-19.5022f,-203.7644f,8.8044f,-19.4444f,-169.4489f,10.0622f,14.2044f,-172.28f,10.1111f,-33.9956f,-200.3067f,19.1822f,-33.8f,-199.4f,26.8222f,-34.3022f,-195.0667f,32.2044f,-33.96f,-186.7333f,33.3689f,-33.9111f,-179.0756f,31.8489f,-33.8311f,-176.4622f,26.7822f,-33.9511f,-173.6667f,20.1467f,17.64f,-178.9778f,74.5556f,-17.9511f,-179.52f,74.0222f,-20.3644f,-194.7644f,74.7333f,-18.4356f,-207.7067f,73.6667f,16.9778f,-207.7022f,73.4889f,19.48f,-194.04f,75.1333f});
  }
}
protected class MFVec2f228 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.148f,0.1294f,0.142f,0.1322f,0.1446f,0.131f,0.1613f,0.0957f,0.1341f,0.1263f,0.1554f,0.0919f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f,0.1392f,0.1292f,0.16f,0.0958f,0.1443f,0.128f,0.1415f,0.1284f,0.1616f,0.0962f,0.1346f,0.0953f,0.1273f,0.0961f,0.126f,0.0891f,0.1339f,0.0889f,0.1175f,0.0992f,0.228f,0.0809f,0.2186f,0.0857f,0.2172f,0.0848f,0.2097f,0.0859f,0.2098f,0.0901f,0.2285f,0.0738f,0.1152f,0.1058f,0.1523f,0.1336f,0.1493f,0.1348f,0.1463f,0.1377f,0.1682f,0.1025f,0.1699f,0.1017f,0.2293f,0.0837f,0.1648f,0.0986f,0.112f,0.093f,0.1632f,0.098f,0.113f,0.0993f,0.2302f,0.0796f,0.1153f,0.1053f,0.2293f,0.0736f,0.1463f,0.1377f,0.1523f,0.1336f,0.1699f,0.1017f,0.1682f,0.1025f,0.1493f,0.1348f,0.1699f,0.1017f,0.1648f,0.0986f,0.2302f,0.0796f,0.2293f,0.0736f,0.113f,0.0993f,0.112f,0.093f,0.1682f,0.1025f,0.1341f,0.1263f,0.1554f,0.0919f,0.1559f,0.0889f,0.1571f,0.0927f,0.1363f,0.1268f,0.1317f,0.1272f});
  }
}
protected class MFFloat229 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat230 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32231 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,5,-1,5,4,3,-1,1,0,5,-1,5,2,1,-1,1,7,6,-1,6,0,1,-1,8,7,1,-1,1,2,8,-1,3,9,8,-1,8,2,3,-1,10,9,3,-1,3,4,10,-1,11,10,4,-1,4,5,11,-1,0,6,11,-1,11,5,0,-1,7,13,12,-1,12,6,7,-1,14,13,7,-1,7,8,14,-1,9,15,14,-1,14,8,9,-1,16,15,9,-1,9,10,16,-1,17,16,10,-1,10,11,17,-1,6,12,17,-1,17,11,6,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,12,13,19,-1,19,18,12,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,16,22,-1,22,21,15,-1,16,17,23,-1,23,22,16,-1,17,12,18,-1,18,23,17,-1});
  }
}
protected class MFInt32232 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,13,12,15,-1,15,14,13,-1,8,6,5,-1,5,3,8,-1,0,9,8,-1,8,3,0,-1,10,9,0,-1,0,1,10,-1,11,10,1,-1,1,2,11,-1,4,7,11,-1,11,2,4,-1,12,18,16,-1,16,15,12,-1,20,19,6,-1,6,8,20,-1,9,21,20,-1,20,8,9,-1,22,21,9,-1,9,10,22,-1,23,22,10,-1,10,11,23,-1,7,17,23,-1,23,11,7,-1,26,27,28,-1,28,29,24,-1,26,28,24,-1,25,26,24,-1,16,18,25,-1,25,24,16,-1,19,20,26,-1,26,25,19,-1,20,21,27,-1,27,26,20,-1,21,22,28,-1,28,27,21,-1,22,23,29,-1,29,28,22,-1,23,17,24,-1,24,29,23,-1});
  }
}
protected class MFVec3f233 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-15.6667f,-176.4356f,53.7778f,15.3778f,-175.8578f,54.7156f,15.0889f,-192.4133f,61.0578f,14.8089f,-205.9822f,52.6933f,-15.2222f,-205.9822f,51.5289f,-16.0489f,-192.4133f,60.2711f,-21.4578f,-172.9511f,38.6489f,22.3956f,-172.24f,38.6267f,24.8222f,-190.56f,40.3333f,21.9644f,-208.1778f,38.3511f,-21.2978f,-208.1111f,38.88f,-25.1244f,-196.0533f,40.3956f,-22.9244f,-168.9511f,21.0089f,22.8933f,-168.2533f,21.6133f,25.4889f,-189.4489f,22.0622f,21.9378f,-208.8133f,20.2667f,-23.44f,-208.8133f,20.3822f,-26.2444f,-189.9644f,21.5689f,-17.72f,-174.6489f,10.1289f,17.6711f,-174.1111f,10.6489f,19.4933f,-189.0489f,11.24f,17.0133f,-202.6f,9.5956f,-18.2f,-202.6044f,9.7911f,-20.1111f,-189.7778f,10.84f});
  }
}
protected class MFVec2f234 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1287f,0.113f,0.1423f,0.0921f,0.1396f,0.0889f,0.1257f,0.1107f,0.1415f,0.0903f,0.1274f,0.1123f,0.1297f,0.1214f,0.15f,0.0896f,0.1273f,0.1223f,0.1313f,0.1227f,0.1521f,0.0901f,0.1498f,0.0859f,0.0527f,0.151f,0.0282f,0.1325f,0.0446f,0.0894f,0.0746f,0.0899f,0.1016f,0.0977f,0.1554f,0.0919f,0.0779f,0.162f,0.1341f,0.1263f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f,0.1554f,0.0919f,0.0779f,0.162f,0.1317f,0.1272f,0.1363f,0.1268f,0.1571f,0.0927f,0.1559f,0.0889f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,4,9,-1,9,8,1,-1,5,7,2,-1,2,0,5,-1,4,1,3,-1,3,6,4,-1,10,11,5,-1,5,0,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,1,19,-1,19,18,3,-1,1,8,20,-1,20,19,1,-1,32,37,38,-1,38,39,32,-1,10,0,22,-1,22,21,10,-1,0,2,23,-1,23,22,0,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1});
  }
}
protected class MFInt32238 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,4,9,-1,9,8,0,-1,5,7,2,-1,2,1,5,-1,4,0,3,-1,3,6,4,-1,10,11,5,-1,5,1,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,0,19,-1,19,18,3,-1,0,8,20,-1,20,19,0,-1,32,37,38,-1,38,39,32,-1,10,1,22,-1,22,21,10,-1,1,2,23,-1,23,22,1,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1});
  }
}
protected class MFVec3f239 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-11.1244f,-247.0667f,34.2711f,-12.0222f,-141.0222f,32.6756f,-11.04f,-247.7333f,54.7689f,-13.2222f,-155.3733f,55.3911f,13.9867f,-150.72f,35.9822f,14.12f,-246.7556f,35.5067f,16.56f,-166.7111f,67.4f,16.4444f,-247.0222f,68.0222f,-11.8844f,-129.2444f,16.56f,11.04f,-135.1111f,19.8311f,-11.4267f,-247.8222f,16.5156f,11.9022f,-247.6f,20.1333f,21.5644f,-159.8711f,24.1733f,23.5733f,-165.8711f,31.7733f,25.9067f,-177.9022f,60.9867f,25.7689f,-235.8222f,61.5378f,24.0133f,-235.6444f,34.32f,22.3822f,-236.0889f,24.4133f,-26.4178f,-163.3511f,50.6f,-25.2356f,-152.0267f,29.9022f,-25.1511f,-146.3422f,20.9289f,-24.8444f,-237.1111f,20.8844f,-24.4711f,-236.6222f,34.0444f,-24.32f,-237.0667f,50.0267f,10.9422f,-175.3067f,81.2667f,-17.04f,-164.4667f,68.7333f,-21.2756f,-169.6578f,67.2667f,-19.5111f,-231.6089f,66.7778f,-13.1022f,-239.0667f,69.0444f,11.4533f,-238.4444f,82.8667f,15.3556f,-231.4311f,80.2f,15.4667f,-183.2578f,79.7556f,-10.1422f,-135.4667f,4.2444f,8.8578f,-140.3111f,7.2044f,16.9867f,-161.6978f,10.36f,17.7556f,-233.2f,10.5822f,11.3778f,-241.8222f,7.9956f,-9.7911f,-242f,4.6089f,-18.5467f,-233.4667f,7.4667f,-18.8267f,-149.0578f,7.5067f});
  }
}
protected class MFVec2f240 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2179f,0.1044f,0.2186f,0.1086f,0.2128f,0.1035f,0.2098f,0.0996f,0.2047f,0.1286f,0.2132f,0.1171f,0.1953f,0.1244f,0.2059f,0.1148f,0.2224f,0.1067f,0.2132f,0.1285f,0.2197f,0.1123f,0.2163f,0.1174f,0.2132f,0.1285f,0.2047f,0.1286f,0.1953f,0.1244f,0.1953f,0.1244f,0.2132f,0.1171f,0.2163f,0.1174f,0.2098f,0.0996f,0.2179f,0.1044f,0.2224f,0.1067f,0.2224f,0.1067f,0.2186f,0.1086f,0.2128f,0.1035f,0.1953f,0.1244f,0.2098f,0.0996f,0.2098f,0.0996f,0.2128f,0.1035f,0.2098f,0.0996f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.2224f,0.1067f,0.2132f,0.1285f,0.2132f,0.1285f,0.2163f,0.1174f,0.2132f,0.1285f,0.2224f,0.1067f,0.2224f,0.1067f,0.2224f,0.1067f});
  }
}
protected class MFFloat241 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat242 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32243 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,4,7,-1,7,15,12,-1,0,2,9,-1,9,8,0,-1,1,3,11,-1,11,10,1,-1,5,6,2,-1,2,0,5,-1,8,9,3,-1,3,1,8,-1,14,4,12,-1,12,13,14,-1,18,14,13,-1,13,17,18,-1,42,43,38,-1,38,39,42,-1,46,47,50,-1,50,51,46,-1,29,30,34,-1,34,35,29,-1,19,20,25,-1,25,26,19,-1,28,19,26,-1,26,27,28,-1,21,22,23,-1,23,24,21,-1,37,29,35,-1,35,36,37,-1,30,31,34,-1,20,21,24,-1,24,25,20,-1,31,32,33,-1,33,34,31,-1,3,9,20,-1,20,19,3,-1,9,2,21,-1,21,20,9,-1,2,6,22,-1,22,21,2,-1,42,39,40,-1,40,41,42,-1,7,4,24,-1,24,23,7,-1,4,16,25,-1,25,24,4,-1,16,14,26,-1,26,25,16,-1,14,18,27,-1,27,26,14,-1,50,47,48,-1,48,49,50,-1,11,3,19,-1,19,28,11,-1,0,8,30,-1,30,29,0,-1,8,1,31,-1,31,30,8,-1,1,10,32,-1,32,31,1,-1,46,51,52,-1,52,53,46,-1,17,13,34,-1,34,33,17,-1,13,12,35,-1,35,34,13,-1,12,15,36,-1,36,35,12,-1,38,43,44,-1,44,45,38,-1,5,0,29,-1,29,37,5,-1,15,7,39,-1,39,38,15,-1,7,23,40,-1,40,39,7,-1,23,22,41,-1,41,40,23,-1,22,6,42,-1,42,41,22,-1,6,5,43,-1,43,42,6,-1,5,37,44,-1,44,43,5,-1,37,36,45,-1,45,44,37,-1,36,15,38,-1,38,45,36,-1,10,11,47,-1,47,46,10,-1,11,28,48,-1,48,47,11,-1,28,27,49,-1,49,48,28,-1,27,18,50,-1,50,49,27,-1,18,17,51,-1,51,50,18,-1,17,33,52,-1,52,51,17,-1,33,32,53,-1,53,52,33,-1,32,10,46,-1,46,53,32,-1});
  }
}
protected class MFInt32244 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,10,-1,10,7,1,-1,2,3,12,-1,12,11,2,-1,5,6,16,-1,16,15,5,-1,8,9,3,-1,3,2,8,-1,11,12,6,-1,6,5,11,-1,4,0,1,-1,1,13,4,-1,17,4,13,-1,13,14,17,-1,45,46,41,-1,41,42,45,-1,49,50,53,-1,53,54,49,-1,32,33,37,-1,37,38,32,-1,22,23,28,-1,28,29,22,-1,31,22,29,-1,29,30,31,-1,24,25,26,-1,26,27,24,-1,40,32,38,-1,38,39,40,-1,33,34,21,-1,23,24,27,-1,27,28,23,-1,34,35,36,-1,36,37,34,-1,6,12,23,-1,23,22,6,-1,12,3,24,-1,24,23,12,-1,3,9,25,-1,25,24,3,-1,45,42,43,-1,43,44,45,-1,10,0,27,-1,27,26,10,-1,20,18,28,-1,28,27,20,-1,18,19,29,-1,29,28,18,-1,4,17,30,-1,30,29,4,-1,53,50,51,-1,51,52,53,-1,16,6,22,-1,22,31,16,-1,2,11,33,-1,33,32,2,-1,11,5,34,-1,34,33,11,-1,5,15,35,-1,35,34,5,-1,49,54,55,-1,55,56,49,-1,14,13,37,-1,37,36,14,-1,13,1,38,-1,38,37,13,-1,1,7,39,-1,39,38,1,-1,41,46,47,-1,47,48,41,-1,8,2,32,-1,32,40,8,-1,7,10,42,-1,42,41,7,-1,10,26,43,-1,43,42,10,-1,26,25,44,-1,44,43,26,-1,25,9,45,-1,45,44,25,-1,9,8,46,-1,46,45,9,-1,8,40,47,-1,47,46,8,-1,40,39,48,-1,48,47,40,-1,39,7,41,-1,41,48,39,-1,15,16,50,-1,50,49,15,-1,16,31,51,-1,51,50,16,-1,31,30,52,-1,52,51,31,-1,30,17,53,-1,53,52,30,-1,17,14,54,-1,54,53,17,-1,14,36,55,-1,55,54,14,-1,36,35,56,-1,56,55,36,-1,35,15,49,-1,49,56,35,-1});
  }
}
protected class MFVec3f245 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-17.0889f,-177.3733f,96.6f,-15.2978f,-154.0489f,44.6356f,13.4844f,-177.8267f,99.1778f,15.2933f,-159.2222f,46.7511f,13.3022f,-236.3556f,94.6889f,-17.5956f,-186.2133f,121.0444f,10.0356f,-186.8133f,124.2889f,9.96f,-232.7822f,122.6444f,-15.7156f,-165.6844f,70.4222f,15.0133f,-168.5022f,74.2f,-15.64f,-140.7111f,16.5911f,14.1422f,-152.0622f,28.6044f,-15.0178f,-236.3556f,92.1556f,-13.1556f,-233.5111f,41.44f,16.84f,-232.5733f,41.8533f,-17.4933f,-232.7289f,119.4444f,16.84f,-232.5733f,41.8533f,-13.4578f,-233.0667f,15.9689f,14.0267f,-232.3911f,29.2222f,26.0533f,-166.6667f,44.4311f,25.9733f,-175.9644f,71.9333f,24.48f,-185.2711f,96.9111f,21.8044f,-192.3289f,116.6444f,21.7956f,-225.7422f,115.4f,24.2089f,-228.36f,94.8667f,27.6489f,-224.6444f,42.8222f,27.5556f,-224.6267f,42.3867f,25.7111f,-224.5644f,37.4533f,26.0889f,-163.7289f,36.9467f,-27.1511f,-182.7911f,94.2444f,-25.7822f,-171.0178f,67.8444f,-25.4222f,-159.3556f,41.9867f,-25.6622f,-149.7689f,21.8089f,-23.8444f,-227.84f,21.28f,-23.5778f,-228.1956f,41.3333f,-25.3956f,-230.9822f,91.6222f,-27.5378f,-228.0578f,113.7111f,-27.4667f,-190.32f,115.0444f,-17.0622f,-226.9956f,128.0222f,8.2089f,-227.0578f,131.4f,16.0356f,-222.4089f,130.6f,16.0444f,-196.9822f,131.4889f,8.3956f,-193.4044f,132.5111f,-17.2267f,-192.8356f,129.1778f,-22.7022f,-195.12f,126.9111f,-22.76f,-224.3467f,125.8889f,-10.3156f,-147.6578f,0.2311f,15.7156f,-157.8f,12.3022f,25.0756f,-166.8356f,18.6f,24.7333f,-220.7333f,19.0578f,16.9156f,-225.9644f,13.5778f,-8.0044f,-226.5911f,0.64f,-13.8933f,-223.6133f,3.6889f,-15.5422f,-152.8133f,4.1644f});
  }
}
protected class MFVec2f246 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.175f,0.1048f,0.1833f,0.0898f,0.1856f,0.0872f,0.1731f,0.1071f,0.1985f,0.1126f,0.2017f,0.0948f,0.1859f,0.1202f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.1699f,0.1017f,0.1937f,0.091f,0.1795f,0.1136f,0.2068f,0.0986f,0.2128f,0.1035f,0.2098f,0.0996f,0.1953f,0.1244f,0.2059f,0.1148f,0.1795f,0.1136f,0.1859f,0.1202f,0.1731f,0.1071f,0.2017f,0.0948f,0.1859f,0.1202f,0.1795f,0.1136f,0.1731f,0.1071f,0.1682f,0.1025f,0.1682f,0.1025f,0.1731f,0.1071f,0.1795f,0.1136f,0.1859f,0.1202f,0.1953f,0.1244f,0.1953f,0.1244f,0.1856f,0.0872f,0.1937f,0.091f,0.2017f,0.0948f,0.2098f,0.0996f,0.2098f,0.0996f,0.2017f,0.0948f,0.1856f,0.0872f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.1682f,0.1025f,0.1682f,0.1025f,0.1682f,0.1025f,0.1682f,0.1025f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.2098f,0.0996f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.1953f,0.1244f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,18,20,-1,20,6,8,-1,14,21,19,-1,19,11,14,-1,6,20,1,-1,19,15,11,-1,0,14,3,-1,3,2,0,-1,12,17,16,-1,16,8,12,-1,15,17,12,-1,12,11,15,-1,6,1,2,-1,2,3,6,-1,0,21,14,-1,16,18,8,-1,3,4,5,-1,5,6,3,-1,6,5,7,-1,7,8,6,-1,10,11,12,-1,12,9,10,-1,14,11,10,-1,10,13,14,-1,13,4,3,-1,3,14,13,-1,8,7,9,-1,9,12,8,-1,19,21,24,-1,24,23,19,-1,22,25,20,-1,20,18,22,-1,36,30,31,-1,35,36,31,-1,34,35,31,-1,13,10,9,-1,9,7,5,-1,13,9,5,-1,4,13,5,-1,29,26,27,-1,27,28,29,-1,37,41,42,-1,42,43,37,-1,31,32,33,-1,33,34,31,-1,39,40,41,-1,38,39,41,-1,37,38,41,-1,25,22,27,-1,27,26,25,-1,22,23,28,-1,28,27,22,-1,23,24,29,-1,29,28,23,-1,24,25,26,-1,26,29,24,-1,15,19,31,-1,31,30,15,-1,19,23,32,-1,32,31,19,-1,23,22,33,-1,33,32,23,-1,22,18,34,-1,34,33,22,-1,18,16,35,-1,35,34,18,-1,16,17,36,-1,36,35,16,-1,17,15,30,-1,30,36,17,-1,21,0,38,-1,38,37,21,-1,0,2,39,-1,39,38,0,-1,2,1,40,-1,40,39,2,-1,1,20,41,-1,41,40,1,-1,20,25,42,-1,42,41,20,-1,25,24,43,-1,43,42,25,-1,24,21,37,-1,37,43,24,-1});
  }
}
protected class MFInt32250 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,24,30,-1,30,0,1,-1,3,31,25,-1,25,2,3,-1,0,30,4,-1,25,26,2,-1,9,3,5,-1,5,10,9,-1,7,28,27,-1,27,1,7,-1,26,29,8,-1,8,2,26,-1,0,4,11,-1,11,6,0,-1,9,31,3,-1,27,24,1,-1,12,13,14,-1,14,15,12,-1,15,14,16,-1,16,17,15,-1,19,20,21,-1,21,18,19,-1,23,20,19,-1,19,22,23,-1,22,13,12,-1,12,23,22,-1,17,16,18,-1,18,21,17,-1,35,34,38,-1,38,37,35,-1,36,39,33,-1,33,32,36,-1,50,44,45,-1,49,50,45,-1,48,49,45,-1,22,19,18,-1,18,16,14,-1,22,18,14,-1,13,22,14,-1,43,40,41,-1,41,42,43,-1,51,55,56,-1,56,57,51,-1,45,46,47,-1,47,48,45,-1,53,54,55,-1,52,53,55,-1,51,52,55,-1,39,36,41,-1,41,40,39,-1,36,37,42,-1,42,41,36,-1,37,38,43,-1,43,42,37,-1,38,39,40,-1,40,43,38,-1,26,25,45,-1,45,44,26,-1,35,37,46,-1,46,45,35,-1,37,36,47,-1,47,46,37,-1,36,32,48,-1,48,47,36,-1,24,27,49,-1,49,48,24,-1,27,28,50,-1,50,49,27,-1,29,26,44,-1,44,50,29,-1,31,9,52,-1,52,51,31,-1,9,10,53,-1,53,52,9,-1,11,4,54,-1,54,53,11,-1,4,30,55,-1,55,54,4,-1,33,39,56,-1,56,55,33,-1,39,38,57,-1,57,56,39,-1,38,34,51,-1,51,57,38,-1});
  }
}
protected class MFVec3f251 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.7022f,-174.16f,32.3778f,14.0267f,-201.7511f,32.9911f,14.6133f,-187.3778f,35f,11.9689f,-190.28f,34.9867f,10.3956f,-196.6667f,54.7733f,8.3867f,-212.84f,54.0311f,10.3289f,-208.2489f,32.7244f,-12.4311f,-212.5956f,51.2933f,-10.6578f,-208.5467f,30.2133f,-15.0222f,-194.2933f,52.0133f,-12.5778f,-172.8578f,51.4044f,-10.7733f,-169.9467f,29.9467f,-13.7244f,-191.8667f,31.8933f,8.6889f,-172.28f,53.9956f,9.6311f,-170.2089f,32.1956f,-15.3644f,-174.0756f,28.4311f,-15.4267f,-202.4356f,28.6978f,-15.6489f,-188.4533f,31.1289f,-13.4622f,-209.3244f,19.7111f,-13.8667f,-169.9244f,18.8578f,14.8933f,-209.2267f,23.7067f,14.8356f,-169.6444f,23.6356f,-12.8978f,-210.7378f,7.3333f,-12.9956f,-164.2267f,8.92f,14.6311f,-164.8267f,12.1822f,14.5556f,-210.7911f,10.52f,10.6133f,-205.1067f,-0.9956f,-6.3556f,-205.0711f,-2.9511f,-6.4311f,-169.2356f,-1.7333f,10.6711f,-169.6089f,0.2978f,-23.6711f,-177.4622f,20.0533f,-22.6578f,-174.1956f,12.4889f,-22.2978f,-172.2267f,9.0622f,-22.2978f,-205.5067f,7.92f,-22.2578f,-204.8533f,13.6444f,-23.7511f,-199.8489f,20.16f,-23.8711f,-188.5378f,22.1378f,24.2444f,-174.2133f,18.7378f,24.2578f,-177.5333f,25.1689f,24.2267f,-187.56f,27.16f,23.6533f,-199.1378f,25.5378f,24.3822f,-204.4711f,18.9156f,24.0711f,-205.1822f,12.9422f,24.1422f,-172.2711f,14.1333f});
  }
}
protected class MFVec2f252 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2327f,0.0796f,0.2439f,0.0803f,0.2062f,0.05f,0.2147f,0.0491f,0.2302f,0.0796f,0.2205f,0.0532f,0.2301f,0.0734f,0.2486f,0.0743f,0.2013f,0.0552f,0.2187f,0.0481f,0.221f,0.0541f,0.2293f,0.0736f,0.1746f,0.075f,0.1709f,0.0678f,0.1706f,0.0686f,0.1745f,0.076f,0.1824f,0.0523f,0.1886f,0.0572f,0.183f,0.0511f,0.1834f,0.0508f,0.1882f,0.0556f,0.1885f,0.0566f,0.1716f,0.0676f,0.1748f,0.0736f,0.2444f,0.0847f,0.2027f,0.042f,0.2022f,0.0485f,0.2464f,0.0799f,0.2486f,0.0741f,0.2011f,0.0554f,0.2293f,0.0837f,0.2177f,0.0418f,0.1769f,0.0796f,0.1648f,0.0986f,0.1632f,0.098f,0.1766f,0.0777f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.1699f,0.1017f,0.1699f,0.1017f,0.1801f,0.0847f,0.1811f,0.0824f,0.1682f,0.1025f,0.2022f,0.0485f,0.2027f,0.042f,0.1811f,0.0824f,0.1801f,0.0847f,0.1769f,0.0796f,0.2464f,0.0799f,0.2486f,0.0741f,0.1632f,0.098f,0.2187f,0.0481f,0.221f,0.0541f,0.2302f,0.0796f,0.2293f,0.0837f,0.1699f,0.1017f,0.1682f,0.1025f});
  }
}
protected class MFFloat253 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat254 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32255 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,7,6,-1,6,1,0,-1,2,8,7,-1,7,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,1,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1});
  }
}
protected class MFInt32256 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,6,-1,6,5,14,-1,8,15,7,-1,7,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,7,24,-1,24,23,1,-1,5,6,25,-1,25,24,5,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1});
  }
}
protected class MFVec3f257 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.7689f,-209.3822f,40.6f,15.0311f,-192.8756f,41.1733f,-13.8356f,-209.3822f,37.5422f,-15.7867f,-192.8756f,37.4978f,-13.5244f,-179.8444f,37.6f,12.6356f,-178.8267f,40.7422f,13.9067f,-192.0711f,22.8222f,11.9022f,-208.2444f,22.08f,-8.9156f,-207.9956f,19.3422f,-11.5111f,-189.6978f,20.0622f,-9.0667f,-168.2578f,19.4533f,12.2044f,-167.6844f,22.0444f,11.7467f,-191.9733f,12.5289f,10.1556f,-204.88f,11.8356f,-4.8711f,-204.6978f,9.7733f,-7.0267f,-189.6444f,10.5467f,-4.9422f,-171.4978f,9.8933f,10.2978f,-171.0844f,11.7778f,6.8933f,-202.7689f,46.52f,7.6089f,-193.2133f,46.9956f,6.3422f,-185.7289f,46.6622f,-8.7022f,-186.3156f,44.8311f,-9.8889f,-193.0889f,44.8844f,-8.7422f,-202.7689f,44.8711f});
  }
}
protected class MFVec2f258 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f,0.0949f,0.0775f,0.1651f,0.0639f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1291f,0.0918f,0.1834f,0.0508f,0.1554f,0.0532f,0.1716f,0.0676f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1554f,0.0532f,0.1653f,0.0654f,0.1636f,0.063f,0.1651f,0.0639f,0.0949f,0.0775f,0.1792f,0.0409f,0.1795f,0.0453f});
  }
}
protected class MFFloat259 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat260 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32261 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,6,7,-1,7,1,0,-1,3,8,6,-1,6,0,3,-1,9,8,3,-1,3,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1});
  }
}
protected class MFInt32262 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,8,9,-1,9,1,0,-1,3,10,8,-1,8,0,3,-1,11,10,3,-1,3,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,6,-1,6,7,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1});
  }
}
protected class MFVec3f263 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.08f,-200.32f,35.1378f,8.8711f,-189.7778f,39.2044f,-13.3244f,-189.7778f,36.5156f,-10.4756f,-200.32f,32.4933f,-11.9733f,-178.8222f,33.8578f,8.4444f,-178.2533f,36.8489f,13.7689f,-203.8133f,21.9556f,15.0311f,-187.3022f,22.5333f,-13.8356f,-203.8133f,18.9022f,-15.7867f,-187.3022f,18.8578f,-13.5244f,-174.2711f,18.96f,12.6356f,-173.2533f,22.0978f,11.0089f,-187.4889f,13.6889f,10.16f,-198.7822f,13.1911f,-8.4667f,-198.7822f,11.1911f,-9.8133f,-187.3956f,11.1911f,-8.36f,-179.0578f,11.1733f,9.4622f,-178.3644f,13.3333f});
  }
}
protected class MFVec2f264 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f,0.0579f,0.1638f,0.0538f,0.174f,0.0396f,0.1747f,0.0423f,0.1756f,0.0403f,0.1632f,0.0573f,0.066f,0.0493f,0.0915f,0.0082f,0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.0949f,0.0775f,0.1293f,0.0261f,0.1651f,0.0639f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f});
  }
}
protected class MFFloat265 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat266 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32267 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,9,-1,9,7,4,-1,20,21,24,-1,24,25,20,-1,12,13,10,-1,10,11,12,-1,18,19,14,-1,14,17,18,-1,15,16,17,-1,17,14,15,-1,0,4,11,-1,11,10,0,-1,4,7,12,-1,12,11,4,-1,7,1,13,-1,13,12,7,-1,24,21,22,-1,22,23,24,-1,3,6,15,-1,15,14,3,-1,20,25,26,-1,26,27,20,-1,5,2,17,-1,17,16,5,-1,2,9,18,-1,18,17,2,-1,9,8,19,-1,19,18,9,-1,8,3,14,-1,14,19,8,-1,6,0,21,-1,21,20,6,-1,0,10,22,-1,22,21,0,-1,10,13,23,-1,23,22,10,-1,13,1,24,-1,24,23,13,-1,1,5,25,-1,25,24,1,-1,5,16,26,-1,26,25,5,-1,16,15,27,-1,27,26,16,-1,15,6,20,-1,20,27,15,-1});
  }
}
protected class MFInt32268 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,10,-1,10,11,4,-1,22,23,26,-1,26,27,22,-1,14,15,12,-1,12,13,14,-1,20,21,16,-1,16,19,20,-1,17,18,19,-1,19,16,17,-1,0,4,13,-1,13,12,0,-1,4,11,14,-1,14,13,4,-1,7,1,15,-1,15,14,7,-1,26,23,24,-1,24,25,26,-1,3,6,17,-1,17,16,3,-1,22,27,28,-1,28,29,22,-1,5,2,19,-1,19,18,5,-1,2,9,20,-1,20,19,2,-1,10,8,21,-1,21,20,10,-1,8,3,16,-1,16,21,8,-1,6,0,23,-1,23,22,6,-1,0,12,24,-1,24,23,0,-1,12,15,25,-1,25,24,12,-1,15,1,26,-1,26,25,15,-1,1,5,27,-1,27,26,1,-1,5,18,28,-1,28,27,5,-1,18,17,29,-1,29,28,18,-1,17,6,22,-1,22,29,17,-1});
  }
}
protected class MFVec3f269 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-14.3378f,-161.28f,59.84f,-11.08f,-248.0889f,59.4978f,11.7067f,-246.8444f,37.4533f,10.8089f,-140.7556f,35.8578f,-11.28f,-145.8489f,21.2756f,11.7911f,-247.4667f,57.9467f,9.6089f,-155.1244f,58.5733f,-9.9067f,-246.9333f,21.4622f,10.9467f,-128.9778f,19.7422f,11.4044f,-247.6f,19.6933f,-25.0489f,-170.8444f,53.5733f,-22.56f,-160.6267f,26.1956f,-21.52f,-242.0444f,26.3467f,-22.0311f,-242.8f,53.28f,20.8756f,-144.5556f,33.3644f,19.7867f,-157.5956f,54.0044f,21.8489f,-242.5333f,53.4356f,21.6444f,-242.0444f,37.5778f,21.3778f,-242.5778f,24.5511f,21.0044f,-138.1333f,24.5911f,9.8133f,-167.8267f,74.3333f,-13.0178f,-172.9911f,75.7111f,-20.7733f,-180.3422f,71.4889f,-18.0044f,-238.3111f,71.2222f,-10.2444f,-241.2f,75.6222f,10.8844f,-240.7111f,73.9333f,17.56f,-237.8222f,70.9556f,15.6622f,-169.0933f,71.4889f});
  }
}
protected class MFVec2f270 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2226f,0.0828f,0.2197f,0.0903f,0.2186f,0.1086f,0.2179f,0.1044f,0.2314f,0.0879f,0.2128f,0.1035f,0.2098f,0.0996f,0.2271f,0.0958f,0.2224f,0.1067f,0.2197f,0.1123f,0.2224f,0.1067f,0.2314f,0.0879f,0.2226f,0.0828f,0.2314f,0.0879f,0.2314f,0.0879f,0.2197f,0.0903f,0.2179f,0.1044f,0.2098f,0.0996f,0.2098f,0.0996f,0.2186f,0.1086f,0.2197f,0.1123f,0.2224f,0.1067f,0.2098f,0.0996f,0.2226f,0.0828f,0.2226f,0.0828f,0.2197f,0.0903f,0.2226f,0.0828f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f});
  }
}
protected class MFFloat271 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat272 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32273 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,12,13,-1,13,3,15,-1,10,7,0,-1,0,2,10,-1,9,1,14,-1,14,6,9,-1,3,13,7,-1,7,10,3,-1,12,15,5,-1,5,16,12,-1,6,8,17,-1,17,9,6,-1,17,8,11,-1,11,4,17,-1,27,28,31,-1,34,35,32,-1,32,33,34,-1,28,29,30,-1,30,31,28,-1,35,27,31,-1,31,32,35,-1,23,24,20,-1,22,23,20,-1,20,21,22,-1,25,26,18,-1,18,19,25,-1,24,25,19,-1,19,20,24,-1,1,9,19,-1,19,18,1,-1,9,17,20,-1,20,19,9,-1,17,4,21,-1,21,20,17,-1,48,45,46,-1,46,47,48,-1,5,15,23,-1,23,22,5,-1,15,3,24,-1,24,23,15,-1,3,10,25,-1,25,24,3,-1,10,2,26,-1,26,25,10,-1,40,37,38,-1,38,39,40,-1,13,12,28,-1,28,27,13,-1,12,16,29,-1,29,28,12,-1,44,49,50,-1,50,51,44,-1,11,8,31,-1,31,30,11,-1,8,6,32,-1,32,31,8,-1,6,14,33,-1,33,32,6,-1,36,41,42,-1,42,43,36,-1,0,7,35,-1,35,34,0,-1,7,13,27,-1,27,35,7,-1,37,40,41,-1,41,36,37,-1,48,49,44,-1,44,45,48,-1,14,1,37,-1,37,36,14,-1,1,18,38,-1,38,37,1,-1,18,26,39,-1,39,38,18,-1,26,2,40,-1,40,39,26,-1,2,0,41,-1,41,40,2,-1,0,34,42,-1,42,41,0,-1,34,33,43,-1,43,42,34,-1,33,14,36,-1,36,43,33,-1,16,5,45,-1,45,44,16,-1,5,22,46,-1,46,45,5,-1,22,21,47,-1,47,46,22,-1,21,4,48,-1,48,47,21,-1,4,11,49,-1,49,48,4,-1,11,30,50,-1,50,49,11,-1,30,29,51,-1,51,50,30,-1,29,16,44,-1,44,51,29,-1});
  }
}
protected class MFInt32274 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {25,7,16,-1,16,3,25,-1,12,9,0,-1,0,2,12,-1,22,1,20,-1,20,18,22,-1,13,17,19,-1,19,23,13,-1,15,24,5,-1,5,26,15,-1,8,21,28,-1,28,11,8,-1,14,10,6,-1,6,4,14,-1,43,45,27,-1,54,55,51,-1,51,53,54,-1,46,47,48,-1,48,50,46,-1,56,44,49,-1,49,52,56,-1,36,38,28,-1,35,37,33,-1,33,34,35,-1,40,42,29,-1,29,30,40,-1,39,41,31,-1,31,32,39,-1,1,22,30,-1,30,29,1,-1,11,28,32,-1,32,31,11,-1,14,4,34,-1,34,33,14,-1,70,67,68,-1,68,69,70,-1,5,24,37,-1,37,35,5,-1,25,3,38,-1,38,36,25,-1,13,23,41,-1,41,39,13,-1,12,2,42,-1,42,40,12,-1,62,58,60,-1,60,61,62,-1,16,7,45,-1,45,43,16,-1,15,26,47,-1,47,46,15,-1,66,71,73,-1,73,74,66,-1,6,10,50,-1,50,48,6,-1,21,8,52,-1,52,49,21,-1,18,20,53,-1,53,51,18,-1,57,63,64,-1,64,65,57,-1,0,9,55,-1,55,54,0,-1,19,17,44,-1,44,56,19,-1,59,62,63,-1,63,57,59,-1,70,72,66,-1,66,67,70,-1,20,1,59,-1,59,57,20,-1,1,29,60,-1,60,58,1,-1,29,42,61,-1,61,60,29,-1,42,2,62,-1,62,61,42,-1,2,0,63,-1,63,62,2,-1,0,54,64,-1,64,63,0,-1,54,53,65,-1,65,64,54,-1,53,20,57,-1,57,65,53,-1,26,5,67,-1,67,66,26,-1,5,35,68,-1,68,67,5,-1,35,34,69,-1,69,68,35,-1,34,4,70,-1,70,69,34,-1,4,6,72,-1,72,70,4,-1,6,48,73,-1,73,71,6,-1,48,47,74,-1,74,73,48,-1,47,26,66,-1,66,74,47,-1});
  }
}
protected class MFVec3f275 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-15.9956f,-188.1422f,117.9333f,10.96f,-232.7289f,122.7333f,10.8578f,-186.2133f,124.3333f,12.7378f,-165.6844f,73.7111f,14.9956f,-233.0667f,19.2578f,12.8133f,-140.7111f,19.8844f,-10.8667f,-236.3556f,91.6222f,-13.64f,-178.9956f,95.5778f,-10.0756f,-234.4f,40.9067f,13.4356f,-236.3556f,95.4444f,11.3644f,-177.3733f,99.8889f,-7.88f,-233.6889f,20.8089f,-11.7867f,-157.4133f,43.9422f,-12.2178f,-168.2044f,69.7556f,-16.1778f,-232.76f,116.0667f,13.1556f,-154.0489f,47.9289f,-11.1378f,-146.8756f,21.1511f,15.2978f,-233.5111f,44.7289f,19.8667f,-228.6844f,118.7778f,22.08f,-231.76f,95.5333f,23.9022f,-228.9689f,45.1467f,23.6311f,-228.5911f,23.9111f,21.7333f,-147.3956f,24.4622f,21.9956f,-157.8f,46.3556f,21.6222f,-169.4578f,72.2f,20.2533f,-181.2133f,98.5556f,19.8978f,-189.0311f,120.1111f,-21.1378f,-173.6178f,64.1022f,-20.6622f,-162.7822f,38.1867f,-20.4133f,-155.8667f,23.2f,-17.5689f,-228.4978f,22.9244f,-19.3689f,-229.0222f,37.5956f,-20.0533f,-230.9556f,87.8f,-24.4889f,-228.1067f,107.2222f,-24.1156f,-192.0844f,108.7333f,-22.4311f,-184.4178f,89.9778f,-18.3333f,-227.32f,124.0667f,7.24f,-227.2978f,130.5111f,12.2044f,-225.5022f,130.5556f,12.2311f,-193.5333f,131.6222f,7.5956f,-192.5867f,131.6667f,-17.9244f,-194.3689f,125.6222f,-23.2667f,-196.4711f,123.6667f,-23.5689f,-224.8533f,122.4667f,-8.5778f,-150.96f,10.1644f,12.4889f,-145.5333f,8.5067f,18.0578f,-149.8178f,11.7156f,19.8311f,-225.6267f,11.2044f,14.3511f,-228.4756f,8.2489f,-6.5289f,-229.0267f,9.9822f,-12.8978f,-225.6178f,11.3689f,-15.56f,-157.7067f,11.6222f});
  }
}
protected class MFVec2f276 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.195f,0.0629f,0.1801f,0.0847f,0.1811f,0.0824f,0.1937f,0.091f,0.2128f,0.1035f,0.2098f,0.0996f,0.2197f,0.0903f,0.2138f,0.0778f,0.1989f,0.0701f,0.1984f,0.068f,0.2129f,0.0844f,0.1833f,0.0898f,0.1856f,0.0872f,0.1937f,0.091f,0.2068f,0.0986f,0.2138f,0.0778f,0.2061f,0.0729f,0.2061f,0.0729f,0.1989f,0.0701f,0.1984f,0.068f,0.1952f,0.0651f,0.2129f,0.0844f,0.1833f,0.0898f,0.1856f,0.0872f,0.2017f,0.0948f,0.2017f,0.0948f,0.2226f,0.0828f,0.2138f,0.0778f,0.1937f,0.091f,0.1811f,0.0824f,0.1856f,0.0872f,0.1856f,0.0872f,0.1937f,0.091f,0.2017f,0.0948f,0.2098f,0.0996f,0.2098f,0.0996f,0.2017f,0.0948f,0.2017f,0.0948f,0.1937f,0.091f,0.1937f,0.091f,0.1856f,0.0872f,0.1856f,0.0872f,0.1811f,0.0824f,0.2061f,0.0729f,0.2061f,0.0729f,0.2138f,0.0778f,0.2138f,0.0778f,0.2226f,0.0828f,0.2226f,0.0828f,0.2138f,0.0778f,0.2138f,0.0778f,0.1984f,0.068f,0.1984f,0.068f,0.195f,0.0629f,0.195f,0.0629f,0.1984f,0.068f,0.1984f,0.068f,0.195f,0.0629f,0.1811f,0.0824f,0.1801f,0.0847f,0.1811f,0.0824f,0.1811f,0.0824f,0.1811f,0.0824f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.2226f,0.0828f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f,0.2098f,0.0996f,0.2226f,0.0828f,0.2197f,0.0903f,0.2226f,0.0828f,0.2226f,0.0828f});
  }
}
protected class MFFloat277 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat278 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32279 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,0,1,-1,1,7,13,-1,7,1,2,-1,2,9,7,-1,4,6,14,-1,14,3,4,-1,8,6,4,-1,4,5,8,-1,5,0,13,-1,13,8,5,-1,23,17,15,-1,15,19,23,-1,16,18,24,-1,24,20,16,-1,9,23,19,-1,19,7,9,-1,8,20,24,-1,24,6,8,-1,7,19,11,-1,24,21,6,-1,10,8,13,-1,13,12,10,-1,14,22,25,-1,25,9,14,-1,21,22,14,-1,14,6,21,-1,7,11,12,-1,12,13,7,-1,10,20,8,-1,25,23,9,-1,9,2,3,-1,3,14,9,-1,5,4,3,-1,3,2,1,-1,5,3,1,-1,0,5,1,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,41,42,43,-1,43,37,41,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,15,17,27,-1,27,26,15,-1,17,18,28,-1,28,27,17,-1,18,16,29,-1,29,28,18,-1,16,15,26,-1,26,29,16,-1,17,23,31,-1,31,30,17,-1,23,25,32,-1,32,31,23,-1,25,22,33,-1,33,32,25,-1,22,21,34,-1,34,33,22,-1,21,24,35,-1,35,34,21,-1,24,18,36,-1,36,35,24,-1,18,17,30,-1,30,36,18,-1,20,10,38,-1,38,37,20,-1,10,12,39,-1,39,38,10,-1,12,11,40,-1,40,39,12,-1,11,19,41,-1,41,40,11,-1,19,15,42,-1,42,41,19,-1,15,16,43,-1,43,42,15,-1,16,20,37,-1,37,43,16,-1});
  }
}
protected class MFInt32280 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {22,1,0,-1,0,7,22,-1,7,0,2,-1,2,9,7,-1,4,6,23,-1,23,3,4,-1,8,6,4,-1,4,5,8,-1,5,1,22,-1,22,8,5,-1,36,26,24,-1,24,29,36,-1,25,27,38,-1,38,31,25,-1,11,35,28,-1,28,10,11,-1,13,30,37,-1,37,12,13,-1,10,28,15,-1,37,32,12,-1,14,13,16,-1,16,20,14,-1,18,33,39,-1,39,11,18,-1,32,34,19,-1,19,12,32,-1,10,15,21,-1,21,17,10,-1,14,30,13,-1,39,35,11,-1,9,2,3,-1,3,23,9,-1,5,4,3,-1,3,2,0,-1,5,3,0,-1,1,5,0,-1,47,48,49,-1,46,47,49,-1,45,46,49,-1,55,56,57,-1,57,51,55,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,24,26,41,-1,41,40,24,-1,26,27,42,-1,42,41,26,-1,27,25,43,-1,43,42,27,-1,25,24,40,-1,40,43,25,-1,26,36,45,-1,45,44,26,-1,35,39,46,-1,46,45,35,-1,39,33,47,-1,47,46,39,-1,34,32,48,-1,48,47,34,-1,32,37,49,-1,49,48,32,-1,38,27,50,-1,50,49,38,-1,27,26,44,-1,44,50,27,-1,30,14,52,-1,52,51,30,-1,14,20,53,-1,53,52,14,-1,21,15,54,-1,54,53,21,-1,15,28,55,-1,55,54,15,-1,29,24,56,-1,56,55,29,-1,24,25,57,-1,57,56,24,-1,25,31,51,-1,51,57,25,-1});
  }
}
protected class MFVec3f281 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.7067f,-194.4533f,53.3244f,4.4356f,-212.68f,51.9778f,-13.48f,-212.4f,48.0311f,-16.4089f,-194.4533f,47.6444f,-14.5067f,-175.88f,47.7378f,4.6622f,-175.3067f,52.2267f,-10.6311f,-171.5067f,28.0133f,7.12f,-209.4533f,32.88f,7.1022f,-170.9022f,32.4667f,-9.8933f,-209.7422f,28.0933f,12.1911f,-174.2356f,33.2f,12.1289f,-202.5956f,33.4711f,11.9067f,-188.6133f,35.8978f,9.3733f,-191.4711f,36.0267f,-13.6356f,-192.9511f,30.6356f,14.6578f,-210.8978f,12.1022f,14.56f,-164.3867f,13.6933f,-12.48f,-210.9289f,5.44f,-12.2978f,-166.3156f,7.2978f,14.0933f,-209.4844f,24.4844f,13.6889f,-170.0844f,23.6267f,-15.1067f,-173.8311f,26.88f,-15.4356f,-188.9689f,29.8044f,-13.6044f,-209.4267f,17.3289f,-13.1244f,-171.0444f,16.2622f,-14.9022f,-207.8133f,26.96f,11.6844f,-204.9378f,0.7244f,-4.5511f,-204.9556f,-3.3156f,-4.4222f,-171.1378f,-1.8756f,11.6178f,-169.9822f,1.8889f,-21.36f,-200.3289f,8.0089f,-21.92f,-199.5778f,13.9333f,-22.5689f,-198.7733f,18.7378f,-22.8311f,-189.3822f,20.1556f,-22.6667f,-181.8356f,18.6978f,-21.68f,-180.4444f,13.4044f,-21.2667f,-178.0889f,8.9378f,21.76f,-174.0133f,20.6f,20.6578f,-177.3156f,28.2311f,20.4444f,-188.6222f,30.3556f,20.5911f,-199.9067f,28.3867f,22.1244f,-205.16f,21.5422f,22.3111f,-206.0356f,13.8933f,22.2756f,-170.8578f,15.0978f});
  }
}
protected class MFVec2f282 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1706f,0.0686f,0.1709f,0.0678f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1716f,0.0676f,0.1882f,0.0556f,0.1745f,0.076f,0.1748f,0.0736f,0.1886f,0.0572f,0.2327f,0.0796f,0.2439f,0.0803f,0.2076f,0.0485f,0.2162f,0.0476f,0.2201f,0.0466f,0.2302f,0.0796f,0.2219f,0.0517f,0.2301f,0.0734f,0.2486f,0.0743f,0.2027f,0.0537f,0.2224f,0.0526f,0.2293f,0.0736f,0.1746f,0.075f,0.1885f,0.0566f,0.1801f,0.0847f,0.1811f,0.0824f,0.1952f,0.0651f,0.195f,0.0629f,0.2293f,0.0837f,0.1769f,0.0796f,0.2191f,0.0403f,0.1766f,0.0777f,0.2037f,0.047f,0.2486f,0.0741f,0.2026f,0.0539f,0.2444f,0.0847f,0.1915f,0.0602f,0.2041f,0.0405f,0.1915f,0.0578f,0.2464f,0.0799f,0.1801f,0.0847f,0.1952f,0.0651f,0.195f,0.0629f,0.1811f,0.0824f,0.1952f,0.0651f,0.1915f,0.0602f,0.2464f,0.0799f,0.2486f,0.0741f,0.2037f,0.047f,0.2041f,0.0405f,0.195f,0.0629f,0.1766f,0.0777f,0.2201f,0.0466f,0.2224f,0.0526f,0.2302f,0.0796f,0.2293f,0.0837f,0.1801f,0.0847f,0.1811f,0.0824f});
  }
}
protected class MFFloat283 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat284 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32285 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1});
  }
}
protected class MFInt32286 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,7,-1,7,6,14,-1,8,15,5,-1,5,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1});
  }
}
protected class MFVec3f287 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {11.3511f,-191.44f,41.8667f,9.8178f,-207.9511f,40.8089f,-16.24f,-207.9511f,35.3733f,-18.2044f,-191.44f,35.2889f,-16.2f,-178.4089f,35.5289f,9.3022f,-177.3956f,40.44f,11.4444f,-188.2622f,23.5556f,9.1733f,-206.4889f,22.2089f,-8.7422f,-206.2089f,18.2622f,-11.6756f,-188.2622f,17.8711f,-9.7689f,-169.6889f,17.9689f,9.4f,-169.1156f,22.4533f,9.5822f,-188.2089f,15.3111f,7.8711f,-202.2667f,14.1022f,-3.0844f,-202.0978f,11.8089f,-5.3822f,-188.1244f,11.5644f,-3.8844f,-173.7289f,11.56f,8.0311f,-173.3689f,14.32f,2.5733f,-201.2933f,46.0533f,3.4089f,-191.6267f,46.9733f,2.4267f,-184.2578f,45.7867f,-11.9778f,-184.8311f,43.24f,-13.0267f,-191.5511f,43.1911f,-11.84f,-201.2933f,43.0978f});
  }
}
protected class MFVec2f288 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f,0.0654f,0.1636f,0.063f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1651f,0.0639f,0.1293f,0.0261f,0.0949f,0.0775f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1291f,0.0918f,0.1834f,0.0508f,0.1554f,0.0532f,0.1716f,0.0676f,0.1709f,0.0678f,0.1706f,0.0686f,0.1824f,0.0523f,0.183f,0.0511f,0.1834f,0.0508f,0.1554f,0.0532f,0.1653f,0.0654f,0.1636f,0.063f,0.1651f,0.0639f,0.0949f,0.0775f,0.1792f,0.0409f,0.1795f,0.0453f});
  }
}
protected class MFFloat289 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat290 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32291 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1});
  }
}
protected class MFInt32292 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,9,8,-1,8,3,0,-1,1,10,9,-1,9,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,8,15,5,-1,5,3,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,8,16,-1,16,21,15,-1});
  }
}
protected class MFVec3f293 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.52f,-189.7778f,37.6133f,7f,-200.32f,33.8578f,-9.8267f,-200.32f,30.08f,-12.5956f,-189.7778f,33.6178f,-11.2267f,-178.8222f,31.2444f,6.32f,-178.2533f,35.4f,14.4f,-187.3022f,23.68f,12.8667f,-203.8133f,22.6222f,-13.1911f,-203.8133f,17.1867f,-15.1556f,-187.3022f,17.1022f,-13.1511f,-174.2711f,17.3422f,12.3511f,-173.2533f,22.2533f,11.2133f,-187.4622f,14.5022f,10.2044f,-198.8356f,13.5467f,-7.12f,-198.8356f,9.9733f,-8.5022f,-187.4044f,10.0222f,-7.2133f,-179.1067f,10.1156f,9.9644f,-178.4222f,13.2533f});
  }
}
protected class MFVec2f294 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f,0.0579f,0.1747f,0.0423f,0.174f,0.0396f,0.1638f,0.0538f,0.1756f,0.0403f,0.1632f,0.0573f,0.0915f,0.0082f,0.066f,0.0493f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.0949f,0.0775f,0.1293f,0.0261f,0.1651f,0.0639f,0.1636f,0.063f,0.1653f,0.0654f,0.1795f,0.0453f,0.1792f,0.0409f,0.1786f,0.0451f,0.1293f,0.0261f});
  }
}
protected class MFFloat295 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat296 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32297 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1});
  }
}
protected class MFInt32298 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1});
  }
}
protected class MFVec3f299 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-44.7556f,-299.3333f,-18.1956f,-15.6844f,-299.3333f,-39.1333f,-15.4222f,-280.7111f,-47.6667f,-49.5778f,-280.7111f,-24.6444f,37.4089f,-299.3333f,-19.7689f,53.6222f,-299.2889f,36.1289f,56.6889f,-280.7111f,35.1467f,42.8f,-280.7111f,-26.3333f,-55.7556f,-299.2889f,36.1333f,-59.3556f,-280.7111f,35.1467f,-15.4178f,-240.4889f,-53.0444f,-52.5556f,-238.8889f,-29.7111f,62.6444f,-232.5867f,35.6489f,46.1556f,-241.0222f,-31.4f,-63.3111f,-237.4222f,35.6489f,-13.48f,-209.1733f,-44.0667f,-49.1778f,-209.6667f,-20.4889f,45.8f,-210.3022f,-22.5067f,9.1156f,-299.3333f,-39.4444f,9.5867f,-280.7111f,-47.9333f,9.9111f,-241.0222f,-53.3111f,11.5911f,-209.3511f,-44.3333f,-13.7733f,-299.2889f,36.1333f,18.4756f,-299.2889f,36.1333f,-58.0667f,-296.2222f,70.5556f,-63.4f,-280.4f,69.6667f,-62.4667f,-238.9333f,69.1333f,48.7778f,-295.7778f,75.4889f,-18.6356f,-297.3333f,74.9556f,14.1556f,-297.2889f,77.7556f,55.0889f,-277.4667f,74.3333f,60.7778f,-230.7689f,74.2f,45.7111f,-172.6756f,75.7111f,-39.64f,-176.0089f,76.9111f,-11.4933f,-180.3467f,-32.7333f,-45.8f,-174.5733f,-9.6356f,45.4444f,-174.5733f,-11.5733f,-52.1111f,-187.9467f,21.8222f,-51.3111f,-188.28f,44.8978f,13.1822f,-180.24f,-32.9556f,59.3111f,-185.0622f,34.1244f,-9.2311f,-155.8533f,-18.5511f,-37.7733f,-150f,0.6089f,-42.96f,-163.4889f,26.9733f,-42.2578f,-163.9156f,47.1778f,-33.6f,-151.9956f,71.0889f,37.5111f,-149.16f,70.0667f,48.0222f,-161.3556f,38.2933f,36.0711f,-150.6044f,-1.0133f,9.36f,-155.96f,-18.6978f,-56.7333f,-277.3333f,84.3333f,-53.3111f,-286.5778f,84.1556f,-18.8533f,-287.3778f,88.3333f,13.5867f,-287.3333f,91.1333f,43.2667f,-286.2222f,88.6889f,47.7556f,-274.2222f,88.4222f,53.1778f,-233.4222f,88.4667f,39.8711f,-186.6f,89.6222f,-35.04f,-189.2933f,91f,-55.8444f,-241.6444f,83.7556f});
  }
}
protected class MFVec2f300 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2845f,0.0964f,0.2768f,0.1211f,0.2792f,0.1228f,0.2886f,0.0939f,0.2493f,0.1586f,0.2252f,0.161f,0.2241f,0.1634f,0.2489f,0.1638f,0.2727f,0.0786f,0.2746f,0.076f,0.2809f,0.1238f,0.2914f,0.0926f,0.2206f,0.1691f,0.249f,0.1672f,0.2762f,0.0729f,0.2769f,0.1234f,0.2869f,0.0933f,0.2461f,0.1652f,0.2661f,0.1399f,0.2685f,0.1417f,0.27f,0.1429f,0.2661f,0.1424f,0.24f,0.098f,0.2266f,0.1229f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2178f,0.1526f,0.2363f,0.0929f,0.2213f,0.1179f,0.2171f,0.1588f,0.2129f,0.1643f,0.2165f,0.148f,0.2533f,0.0835f,0.273f,0.1232f,0.2824f,0.0941f,0.2433f,0.1632f,0.2759f,0.0832f,0.2685f,0.0797f,0.2623f,0.1418f,0.2231f,0.166f,0.273f,0.1232f,0.2824f,0.0941f,0.2759f,0.0832f,0.2685f,0.0797f,0.2533f,0.0835f,0.2165f,0.148f,0.2231f,0.166f,0.2433f,0.1632f,0.2623f,0.1418f,0.2665f,0.0671f,0.2628f,0.0703f,0.2363f,0.0929f,0.2213f,0.1179f,0.2178f,0.1526f,0.2171f,0.1588f,0.2129f,0.1643f,0.2165f,0.148f,0.2533f,0.0835f,0.2664f,0.0668f});
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
protected class MFInt32303 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,17,16,-1,16,0,1,-1,3,8,5,-1,5,0,3,-1,6,7,2,-1,2,1,6,-1,2,4,10,-1,18,2,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,2,-1,2,7,9,-1,8,3,14,-1,14,15,8,-1,3,0,16,-1,16,19,3,-1,14,3,19,-1,1,2,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1});
  }
}
protected class MFInt32304 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,17,16,-1,16,0,1,-1,2,8,5,-1,5,0,2,-1,6,7,3,-1,3,1,6,-1,3,4,10,-1,18,3,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,3,-1,3,7,9,-1,8,2,14,-1,14,15,8,-1,2,0,16,-1,16,19,2,-1,14,2,19,-1,1,3,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1});
  }
}
protected class MFVec3f305 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-17.8311f,-248.3111f,49.5422f,-24.88f,-235.2889f,41.4f,-19.0667f,-195.6f,47.1911f,9.0444f,-250.3556f,56.1733f,0.5422f,-165.4622f,53.5422f,-27.9333f,-250.2667f,81.0889f,-35.1067f,-235.8222f,77.5333f,-28.3333f,-199.84f,81.3556f,-2.7378f,-252.4444f,88.0667f,-4.1822f,-179.2356f,88.7778f,2.9156f,-131.1556f,21.5111f,24.6444f,-124.5778f,34.2133f,23.6f,-149.5644f,56.2933f,20.5422f,-164.9956f,94.8667f,24.9733f,-250.6667f,56.48f,23.8f,-251.7778f,94.5111f,-15.5111f,-251.3778f,15.1333f,-20.8489f,-235.5556f,14.2711f,-19.92f,-194.0933f,13.72f,23.92f,-252.4889f,19.5644f,43.8044f,-144.7867f,41.2533f,42.9244f,-156.6444f,51.7378f,40.32f,-170.6311f,86.7333f,43.2089f,-242.5333f,86.4667f,43.9511f,-241.6444f,56.9911f,42.9911f,-242.9778f,30.0044f,16.3422f,-136.1333f,0.8756f,30.5111f,-131.8222f,10.4578f,44.2889f,-146.3156f,15.4889f,43.5333f,-236.1778f,5.1956f,29.9467f,-242.9778f,-2.5333f,-2.4933f,-242.1333f,-4.8933f,-5.6356f,-232.7822f,-5.4667f,-4.7156f,-194.08f,-6.1644f,-25.0444f,-248.5333f,100.4222f,-4.5956f,-250.2667f,106.1111f,19.9911f,-249.6889f,113.0889f,33.2356f,-237.3778f,107.5333f,30.8222f,-177.2578f,107.7556f,19.6222f,-181.1556f,113.8444f,-1.7022f,-193.3156f,107.8f,-23.12f,-211.2711f,101.1778f,-28.7289f,-240.8444f,97.7556f});
  }
}
protected class MFVec2f306 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2528f,0.0622f,0.2585f,0.0581f,0.2383f,0.0796f,0.2566f,0.0607f,0.243f,0.0749f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2292f,0.0691f,0.2342f,0.0682f,0.2533f,0.0835f,0.2407f,0.0951f,0.2314f,0.0879f,0.2226f,0.0828f,0.2271f,0.0958f,0.2197f,0.0903f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2363f,0.0929f,0.2407f,0.0951f,0.2314f,0.0879f,0.2226f,0.0828f,0.2197f,0.0903f,0.2271f,0.0958f,0.2363f,0.0929f,0.2533f,0.0835f,0.2407f,0.0951f,0.2407f,0.0951f,0.2363f,0.0929f,0.2363f,0.0929f,0.2628f,0.0703f,0.2665f,0.0671f,0.2664f,0.0668f,0.2469f,0.052f,0.2292f,0.0691f,0.2197f,0.0903f,0.2197f,0.0903f,0.2226f,0.0828f,0.2226f,0.0828f,0.2342f,0.0682f,0.2484f,0.051f,0.2512f,0.047f});
  }
}
protected class MFFloat307 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat308 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32309 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,13,17,-1,17,16,11,-1,10,11,16,-1,16,14,10,-1,5,1,3,-1,3,7,5,-1,0,2,6,-1,6,4,0,-1,14,15,12,-1,12,10,14,-1,7,3,0,-1,0,4,7,-1,8,1,5,-1,5,9,8,-1,40,41,36,-1,36,37,40,-1,48,49,44,-1,44,45,48,-1,27,28,31,-1,28,29,30,-1,30,31,28,-1,34,35,32,-1,32,33,34,-1,35,27,31,-1,31,32,35,-1,18,19,24,-1,26,18,24,-1,24,25,26,-1,20,21,22,-1,22,23,20,-1,19,20,23,-1,23,24,19,-1,5,7,19,-1,19,18,5,-1,7,4,20,-1,20,19,7,-1,4,6,21,-1,21,20,4,-1,40,37,38,-1,38,39,40,-1,15,14,23,-1,23,22,15,-1,14,16,24,-1,24,23,14,-1,16,17,25,-1,25,24,16,-1,44,49,50,-1,50,51,44,-1,9,5,18,-1,18,26,9,-1,3,1,28,-1,28,27,3,-1,1,8,29,-1,29,28,1,-1,48,45,46,-1,46,47,48,-1,13,11,31,-1,31,30,13,-1,11,10,32,-1,32,31,11,-1,10,12,33,-1,33,32,10,-1,36,41,42,-1,42,43,36,-1,2,0,35,-1,35,34,2,-1,0,3,27,-1,27,35,0,-1,12,15,37,-1,37,36,12,-1,15,22,38,-1,38,37,15,-1,22,21,39,-1,39,38,22,-1,21,6,40,-1,40,39,21,-1,6,2,41,-1,41,40,6,-1,2,34,42,-1,42,41,2,-1,34,33,43,-1,43,42,34,-1,33,12,36,-1,36,43,33,-1,17,13,45,-1,45,44,17,-1,13,30,46,-1,46,45,13,-1,30,29,47,-1,47,46,30,-1,29,8,48,-1,48,47,29,-1,8,9,49,-1,49,48,8,-1,9,26,50,-1,50,49,9,-1,26,25,51,-1,51,50,26,-1,25,17,44,-1,44,51,25,-1});
  }
}
protected class MFInt32310 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,13,17,-1,17,16,5,-1,2,5,16,-1,16,7,2,-1,9,1,6,-1,6,12,9,-1,0,4,11,-1,11,8,0,-1,7,10,3,-1,3,2,7,-1,12,6,0,-1,0,8,12,-1,14,1,9,-1,9,15,14,-1,42,43,38,-1,38,39,42,-1,50,51,46,-1,46,47,50,-1,29,30,18,-1,30,31,32,-1,32,33,30,-1,36,37,34,-1,34,35,36,-1,37,29,33,-1,33,34,37,-1,20,21,19,-1,28,20,26,-1,26,27,28,-1,22,23,24,-1,24,25,22,-1,21,22,25,-1,25,26,21,-1,9,12,21,-1,21,20,9,-1,12,8,22,-1,22,21,12,-1,8,11,23,-1,23,22,8,-1,42,39,40,-1,40,41,42,-1,10,7,25,-1,25,24,10,-1,7,16,26,-1,26,25,7,-1,16,17,27,-1,27,26,16,-1,46,51,52,-1,52,53,46,-1,15,9,20,-1,20,28,15,-1,6,1,30,-1,30,29,6,-1,1,14,31,-1,31,30,1,-1,50,47,48,-1,48,49,50,-1,13,5,33,-1,33,32,13,-1,5,2,34,-1,34,33,5,-1,2,3,35,-1,35,34,2,-1,38,43,44,-1,44,45,38,-1,4,0,37,-1,37,36,4,-1,0,6,29,-1,29,37,0,-1,3,10,39,-1,39,38,3,-1,10,24,40,-1,40,39,10,-1,24,23,41,-1,41,40,24,-1,23,11,42,-1,42,41,23,-1,11,4,43,-1,43,42,11,-1,4,36,44,-1,44,43,4,-1,36,35,45,-1,45,44,36,-1,35,3,38,-1,38,45,35,-1,17,13,47,-1,47,46,17,-1,13,32,48,-1,48,47,13,-1,32,31,49,-1,49,48,32,-1,31,14,50,-1,50,49,31,-1,14,15,51,-1,51,50,14,-1,15,28,52,-1,52,51,15,-1,28,27,53,-1,53,52,28,-1,27,17,46,-1,46,53,27,-1});
  }
}
protected class MFVec3f311 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-19.4889f,-179.5022f,92.1111f,-15.5378f,-167.3289f,39.3244f,-18.6444f,-187.9156f,113.0444f,-18.2578f,-173.5689f,65.8f,9.8667f,-175.92f,97.4889f,11.7244f,-154.3333f,45.8489f,7.5111f,-185.0667f,119.8444f,11.2889f,-165.1244f,71.6667f,-12.3511f,-158.04f,16.96f,12.3733f,-143.7778f,23.0578f,-15.3467f,-233.2889f,83.3111f,-13.5867f,-232.2844f,36.1289f,-20.08f,-227.8622f,111.1333f,-10.9067f,-231.2667f,16.2578f,12.64f,-233.2889f,93.5333f,7.3289f,-229.68f,117.9778f,13.4356f,-231.3111f,42.8089f,15.6311f,-230.6f,22.7156f,22.84f,-161.2844f,43.48f,22.3467f,-172.1333f,69.4444f,21.1111f,-182.9422f,95.3111f,19.6978f,-189.9911f,112.6444f,19.2489f,-222.4578f,111.2222f,23.32f,-225f,93.8889f,23.96f,-223.0756f,43.9067f,25.5956f,-222.6267f,31.4844f,22.9244f,-155.8667f,31.7333f,-28.16f,-181.7644f,59.4933f,-25.4356f,-175.96f,33.2667f,-23.2044f,-170.16f,18.4311f,-22.0578f,-224.7556f,17.8667f,-24.0756f,-225.4356f,31.9689f,-25.7733f,-226.32f,77.2667f,-29.9733f,-222.24f,99.6222f,-28.3467f,-193.2933f,101.0889f,-29.3911f,-187.1067f,84.6889f,-20.5289f,-221.8178f,119.6222f,4.7511f,-223.4889f,126.7333f,12.48f,-219.1956f,126.1556f,12.8311f,-194.8311f,127.2222f,5.4044f,-192.2178f,127.9333f,-18.8978f,-194.7911f,121.2222f,-24.8844f,-197.8178f,115.5333f,-26.0889f,-218.7911f,114.4667f,17.6978f,-223.9244f,6.7867f,-6.2489f,-224.5244f,0.9378f,-12.6044f,-220.52f,1.0044f,-13.6044f,-172.88f,1.4978f,-5.3689f,-163.3911f,1.68f,15.8889f,-151.1867f,6.5822f,21.7022f,-158.6133f,12.6578f,24.1156f,-218.7911f,12.4267f});
  }
}
protected class MFVec2f312 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2117f,0.0481f,0.2254f,0.0615f,0.2142f,0.0508f,0.2102f,0.0461f,0.2083f,0.0443f,0.2202f,0.0585f,0.2186f,0.0548f,0.1989f,0.0701f,0.1984f,0.068f,0.2138f,0.0778f,0.1952f,0.0651f,0.195f,0.0629f,0.2061f,0.0729f,0.2292f,0.0691f,0.2342f,0.0682f,0.2226f,0.0828f,0.2129f,0.0844f,0.2197f,0.0903f,0.2254f,0.0615f,0.2061f,0.0729f,0.2138f,0.0778f,0.2061f,0.0729f,0.1984f,0.068f,0.195f,0.0629f,0.195f,0.0629f,0.1984f,0.068f,0.2061f,0.0729f,0.2226f,0.0828f,0.2226f,0.0828f,0.2186f,0.0548f,0.2254f,0.0615f,0.2342f,0.0682f,0.2342f,0.0682f,0.2254f,0.0615f,0.2117f,0.0481f,0.2083f,0.0443f,0.2083f,0.0443f,0.2117f,0.0481f,0.2083f,0.0443f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.195f,0.0629f,0.2083f,0.0443f,0.2083f,0.0443f,0.2083f,0.0443f,0.2226f,0.0828f,0.2342f,0.0682f,0.2342f,0.0682f,0.2342f,0.0682f,0.2342f,0.0682f,0.2226f,0.0828f,0.2226f,0.0828f,0.2226f,0.0828f});
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
protected class MFInt32315 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,2,1,-1,1,10,13,-1,10,1,3,-1,3,8,10,-1,3,4,0,-1,0,8,3,-1,0,4,5,-1,5,9,0,-1,7,9,5,-1,5,6,7,-1,6,2,13,-1,13,7,6,-1,22,17,18,-1,18,14,22,-1,20,19,21,-1,21,15,20,-1,9,7,15,-1,15,21,9,-1,10,14,16,-1,8,22,14,-1,14,10,8,-1,21,23,9,-1,11,7,13,-1,13,12,11,-1,0,25,24,-1,24,8,0,-1,16,12,13,-1,13,10,16,-1,23,25,0,-1,0,9,23,-1,11,15,7,-1,24,22,8,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,37,38,39,-1,39,40,37,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,40,41,42,-1,42,43,37,-1,40,42,37,-1,18,17,27,-1,27,26,18,-1,17,19,28,-1,28,27,17,-1,19,20,29,-1,29,28,19,-1,20,18,26,-1,26,29,20,-1,17,22,31,-1,31,30,17,-1,22,24,32,-1,32,31,22,-1,24,25,33,-1,33,32,24,-1,25,23,34,-1,34,33,25,-1,23,21,35,-1,35,34,23,-1,21,19,36,-1,36,35,21,-1,19,17,30,-1,30,36,19,-1,14,18,38,-1,38,37,14,-1,18,20,39,-1,39,38,18,-1,20,15,40,-1,40,39,20,-1,15,11,41,-1,41,40,15,-1,11,12,42,-1,42,41,11,-1,12,16,43,-1,43,42,12,-1,16,14,37,-1,37,43,16,-1});
  }
}
protected class MFInt32316 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {27,2,1,-1,1,10,27,-1,10,1,3,-1,3,11,10,-1,3,4,0,-1,0,11,3,-1,0,4,5,-1,5,12,0,-1,9,12,5,-1,5,6,9,-1,6,2,27,-1,27,9,6,-1,35,28,29,-1,29,7,35,-1,31,30,33,-1,33,8,31,-1,15,14,16,-1,16,32,15,-1,17,13,18,-1,19,34,13,-1,13,17,19,-1,32,36,15,-1,20,14,22,-1,22,21,20,-1,23,38,37,-1,37,19,23,-1,18,24,25,-1,25,17,18,-1,36,39,26,-1,26,15,36,-1,20,16,14,-1,37,34,19,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,51,52,53,-1,53,54,51,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,54,55,56,-1,56,57,51,-1,54,56,51,-1,29,28,41,-1,41,40,29,-1,28,30,42,-1,42,41,28,-1,30,31,43,-1,43,42,30,-1,31,29,40,-1,40,43,31,-1,28,35,45,-1,45,44,28,-1,34,37,46,-1,46,45,34,-1,37,38,47,-1,47,46,37,-1,39,36,48,-1,48,47,39,-1,36,32,49,-1,49,48,36,-1,33,30,50,-1,50,49,33,-1,30,28,44,-1,44,50,30,-1,7,29,52,-1,52,51,7,-1,29,31,53,-1,53,52,29,-1,31,8,54,-1,54,53,31,-1,16,20,55,-1,55,54,16,-1,20,21,56,-1,56,55,20,-1,24,18,57,-1,57,56,24,-1,18,13,51,-1,51,57,18,-1});
  }
}
protected class MFVec3f317 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-14.9467f,-191.0667f,29.0133f,1.9556f,-211.0178f,52.5067f,4.4978f,-193.0622f,52.9689f,-16.4356f,-212.1422f,47.9822f,-18.5022f,-193.0622f,47.2933f,-16.8711f,-174.4267f,48.2311f,2.8222f,-172.4756f,52.7911f,7.0444f,-171.1244f,34.6222f,-12.1289f,-207.4756f,27.36f,-12.4178f,-172.6489f,27.4f,7.0044f,-207.2489f,33.9422f,11.36f,-172.44f,35.2667f,11.0311f,-187.5778f,38.1911f,8.4533f,-191.4133f,37.8578f,12.8622f,-208.0356f,25.7156f,13.3422f,-169.6533f,24.6489f,11.5644f,-206.4222f,35.3467f,-13.4222f,-207.72f,6.9778f,13.9867f,-209.5378f,13.8267f,-11.9822f,-167.7733f,8.8756f,14.1689f,-164.9244f,15.6844f,-14.0756f,-172.5822f,15.1289f,-14.0756f,-205.4356f,15.1822f,-15.9956f,-174.2356f,25.3733f,-16.0533f,-206.9333f,25.6089f,-16.6533f,-192.2844f,27.5289f,11.6356f,-203.48f,1.9378f,-5.3644f,-202.3511f,-2.2889f,-4.2756f,-172.1289f,-0.8667f,11.7689f,-170.3778f,3.3289f,-23.1111f,-201.3333f,6.8311f,-22.8889f,-200.5378f,9.8089f,-25.5644f,-201.5511f,16.8178f,-25.9244f,-192.1556f,18.0667f,-25.3067f,-178.2533f,16.3378f,-22.72f,-176.9556f,8.2489f,-21.9244f,-176.7244f,8.0578f,22.3111f,-203.1378f,23.3644f,22.8889f,-203.8889f,17.4044f,23f,-173.0622f,18.6889f,22.8622f,-174.3867f,21.2133f,21.3689f,-176.5333f,29.3822f,21.1644f,-187.72f,31.5511f,21.5911f,-202.1333f,29.3733f});
  }
}
protected class MFVec2f318 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2033f,0.0375f,0.1866f,0.0487f,0.186f,0.0472f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.1873f,0.048f,0.1915f,0.0602f,0.1915f,0.0578f,0.1897f,0.0535f,0.1888f,0.0569f,0.2031f,0.037f,0.2012f,0.0381f,0.2444f,0.0847f,0.2208f,0.06f,0.2111f,0.0557f,0.2254f,0.054f,0.2483f,0.0809f,0.2464f,0.0799f,0.2587f,0.0865f,0.225f,0.0604f,0.2239f,0.0673f,0.2238f,0.0671f,0.267f,0.0845f,0.2486f,0.0741f,0.2486f,0.074f,0.2049f,0.059f,0.1896f,0.055f,0.2102f,0.0461f,0.1952f,0.0651f,0.2083f,0.0443f,0.195f,0.0629f,0.2109f,0.0476f,0.2048f,0.0404f,0.2576f,0.0911f,0.2063f,0.0414f,0.2083f,0.0537f,0.2612f,0.0869f,0.2671f,0.0842f,0.2047f,0.0593f,0.1952f,0.0651f,0.2102f,0.0461f,0.2083f,0.0443f,0.195f,0.0629f,0.2102f,0.0461f,0.2063f,0.0414f,0.2612f,0.0869f,0.2671f,0.0842f,0.2083f,0.0537f,0.2109f,0.0476f,0.2083f,0.0443f,0.2444f,0.0847f,0.1952f,0.0651f,0.195f,0.0629f,0.1915f,0.0578f,0.225f,0.0604f,0.2239f,0.0673f,0.2464f,0.0799f});
  }
}
protected class MFFloat319 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat320 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32321 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,6,7,-1,7,1,0,-1,2,8,6,-1,6,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1});
  }
}
protected class MFInt32322 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,8,9,-1,9,1,0,-1,2,10,8,-1,8,0,2,-1,11,10,2,-1,2,3,11,-1,4,12,11,-1,11,3,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1});
  }
}
protected class MFVec3f323 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.4844f,-208.7556f,37.8622f,11.64f,-192.0756f,38.9067f,-13.0311f,-208.7556f,32.8622f,-15.4356f,-192.0756f,33.0578f,-13.7778f,-180.8311f,32.12f,9.6133f,-179.6711f,38.1067f,10.4222f,-206.8533f,22.5911f,12.9689f,-188.8978f,23.0489f,-7.9644f,-207.9778f,18.0622f,-10.0311f,-188.8978f,17.3778f,-8.4f,-170.2622f,18.3111f,11.2933f,-168.3111f,22.8711f,10.6578f,-188.7022f,13.08f,8.6933f,-202.4578f,12.7867f,-1.8756f,-203.1067f,10.16f,-3.4089f,-188.8089f,9.5733f,-2.1689f,-174.4f,10.3911f,9.3911f,-173.2533f,12.9733f,2.3867f,-202.0622f,43.0311f,3.6089f,-192.1422f,43.9067f,2.7244f,-186.5511f,43.4133f,-9.6222f,-187.1644f,41.3111f,-10.36f,-191.9867f,41.0222f,-8.8356f,-202.0622f,40.5822f});
  }
}
protected class MFVec2f324 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1822f,0.0458f,0.1809f,0.0434f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.1816f,0.0411f,0.1287f,0.0243f,0.0943f,0.0785f,0.1866f,0.0487f,0.186f,0.0472f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.1322f,0.09f,0.157f,0.0552f,0.1873f,0.048f,0.186f,0.0472f,0.1866f,0.0487f,0.1969f,0.0343f,0.1963f,0.0328f,0.1973f,0.0341f,0.157f,0.0552f,0.1822f,0.0458f,0.1809f,0.0434f,0.1816f,0.0411f,0.0943f,0.0785f,0.1948f,0.024f,0.1953f,0.0282f});
  }
}
protected class MFFloat325 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat326 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32327 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,6,7,-1,7,3,0,-1,1,8,6,-1,6,0,1,-1,9,8,1,-1,1,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,3,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1});
  }
}
protected class MFInt32328 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,8,9,-1,9,3,0,-1,1,10,8,-1,8,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,3,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1});
  }
}
protected class MFVec3f329 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.4044f,-199.28f,32.1244f,-7.48f,-199.28f,28.8133f,-8.8844f,-187.8222f,32.5733f,7.1378f,-187.8222f,35.68f,-7.5378f,-180.0978f,29.6622f,6.0533f,-179.4267f,32.8667f,12.4889f,-203.0756f,23.28f,14.6444f,-186.3956f,24.3244f,-10.0267f,-203.0756f,18.28f,-12.4311f,-186.3956f,18.4756f,-10.7733f,-175.1556f,17.5378f,12.6178f,-173.9911f,23.5244f,11.5511f,-186.5333f,15.1022f,10.0978f,-198.1422f,14.1867f,-3.9467f,-198.1422f,11.0978f,-5.6933f,-186.4178f,11.4756f,-4.6311f,-179.9867f,10.4356f,10.3822f,-179.24f,14.5333f});
  }
}
protected class MFVec2f330 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1831f,0.0355f,0.1904f,0.0263f,0.1901f,0.0243f,0.1819f,0.0351f,0.1913f,0.0249f,0.182f,0.0368f,0.088f,0.0133f,0.0677f,0.0461f,0.1822f,0.0458f,0.1809f,0.0434f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.0943f,0.0785f,0.1287f,0.0243f,0.1816f,0.0411f,0.1809f,0.0434f,0.1822f,0.0458f,0.1953f,0.0282f,0.1948f,0.024f,0.1933f,0.0293f,0.1287f,0.0243f});
  }
}
protected class MFFloat331 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat332 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32333 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,23,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1});
  }
}
protected class MFInt32334 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,11,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1});
  }
}
protected class MFVec3f335 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-15.0711f,-226.1467f,71.4889f,-26.7244f,-207.8711f,84.7778f,-20.5111f,-179.8044f,89.8f,-14.4578f,-223.2711f,37.3111f,-22.16f,-207.8711f,38.4133f,-14.5511f,-174.4222f,40.1822f,-16.4356f,-222.1022f,109.8444f,-23.6578f,-207.8711f,108.0222f,-19.5067f,-185.72f,109.9333f,-18.0622f,-177.1156f,67.2222f,-24.4444f,-207.8711f,61.5867f,12.9422f,-226.1467f,90.6444f,8.7956f,-172.3822f,99.4444f,12.7511f,-160.2089f,46.6222f,8.2044f,-220.7422f,118.4222f,9.6444f,-180.7956f,120.3333f,14.7022f,-225.1644f,43.4222f,10.0311f,-166.4533f,73.0889f,-7.8133f,-221.9644f,16.5644f,-14.9867f,-207.4933f,13.0444f,-8.2133f,-171.52f,16.8267f,17.3822f,-224.1467f,23.5511f,15.9378f,-150.92f,24.2533f,23.48f,-217.4267f,90.8667f,25.1467f,-216.4667f,44.6533f,26.7822f,-215.8578f,32.8044f,25.7778f,-162.8622f,33.32f,24.0578f,-167.7511f,45.08f,21.36f,-174.1422f,72.2444f,20.0844f,-179.9333f,97.8889f,21.2f,-185.8844f,112.7333f,19.4756f,-213.4356f,111.4f,22.6044f,-218.8356f,9.9244f,1.2311f,-217.0133f,4.7956f,-3.8578f,-206.5156f,1.8756f,2.2178f,-174.0711f,5.3956f,22.6044f,-156.9911f,10.3111f,28.3289f,-164.9022f,17.1111f,29.2356f,-212.9111f,16.6444f,-17.4178f,-209.1022f,116.2889f,-12.6f,-217.6f,117.4444f,7.8578f,-216.5956f,125.7556f,16.0044f,-211.9111f,120.8667f,17.3289f,-193.3956f,121.9333f,10.0533f,-190.4533f,127.1778f,-14.2844f,-194.1689f,117.6667f});
  }
}
protected class MFVec2f336 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2299f,0.0317f,0.2316f,0.0247f,0.2265f,0.0269f,0.241f,0.0419f,0.244f,0.0359f,0.2401f,0.0413f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2333f,0.0341f,0.2378f,0.0303f,0.2142f,0.0508f,0.2117f,0.0481f,0.2254f,0.0615f,0.2102f,0.0461f,0.2083f,0.0443f,0.2202f,0.0585f,0.2186f,0.0548f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2292f,0.0691f,0.2342f,0.0682f,0.2142f,0.0508f,0.2202f,0.0585f,0.2292f,0.0691f,0.2342f,0.0682f,0.2254f,0.0615f,0.2186f,0.0548f,0.2117f,0.0481f,0.2083f,0.0443f,0.2102f,0.0461f,0.2292f,0.0691f,0.2469f,0.052f,0.2512f,0.047f,0.2484f,0.051f,0.2342f,0.0682f,0.2342f,0.0682f,0.2292f,0.0691f,0.226f,0.0221f,0.2245f,0.0286f,0.2102f,0.0461f,0.2102f,0.0461f,0.2083f,0.0443f,0.2083f,0.0443f,0.2232f,0.0245f});
  }
}
protected class MFFloat337 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat338 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32339 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,11,-1,11,10,2,-1,0,5,14,-1,14,12,0,-1,2,10,13,-1,13,6,2,-1,0,12,11,-1,11,3,0,-1,15,5,0,-1,0,16,15,-1,17,3,2,-1,2,1,17,-1,16,0,3,-1,3,17,16,-1,2,6,4,-1,4,1,2,-1,6,8,4,-1,7,15,18,-1,18,9,7,-1,8,9,18,-1,18,4,8,-1,7,5,15,-1,1,19,20,-1,20,17,1,-1,17,20,21,-1,21,16,17,-1,16,21,22,-1,22,15,16,-1,22,23,18,-1,18,15,22,-1,23,24,4,-1,4,18,23,-1,24,19,1,-1,1,4,24,-1,25,26,27,-1,25,27,28,-1,29,25,28,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,19,24,20,-1,30,31,32,-1,32,33,30,-1,33,34,35,-1,35,36,30,-1,33,35,30,-1,10,11,26,-1,26,25,10,-1,11,12,27,-1,27,26,11,-1,12,14,28,-1,28,27,12,-1,14,13,29,-1,29,28,14,-1,13,10,25,-1,25,29,13,-1,6,13,31,-1,31,30,6,-1,13,14,32,-1,32,31,13,-1,14,5,33,-1,33,32,14,-1,5,7,34,-1,34,33,5,-1,7,9,35,-1,35,34,7,-1,9,8,36,-1,36,35,9,-1,8,6,30,-1,30,36,8,-1});
  }
}
protected class MFInt32340 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,24,-1,24,23,0,-1,3,2,27,-1,27,25,3,-1,0,23,26,-1,26,4,0,-1,3,25,24,-1,24,1,3,-1,5,8,7,-1,7,6,5,-1,9,12,11,-1,11,10,9,-1,6,7,14,-1,14,13,6,-1,11,15,17,-1,17,10,11,-1,15,18,17,-1,16,5,20,-1,20,19,16,-1,18,21,22,-1,22,17,18,-1,16,8,5,-1,31,34,35,-1,35,30,31,-1,30,35,36,-1,36,29,30,-1,29,36,37,-1,37,28,29,-1,37,38,33,-1,33,28,37,-1,38,39,32,-1,32,33,38,-1,39,34,31,-1,31,32,39,-1,40,41,42,-1,40,42,43,-1,44,40,43,-1,39,38,37,-1,37,36,35,-1,39,37,35,-1,34,39,35,-1,45,46,47,-1,47,48,45,-1,48,49,50,-1,50,51,45,-1,48,50,45,-1,23,24,41,-1,41,40,23,-1,24,25,42,-1,42,41,24,-1,25,27,43,-1,43,42,25,-1,27,26,44,-1,44,43,27,-1,26,23,40,-1,40,44,26,-1,4,26,46,-1,46,45,4,-1,26,27,47,-1,47,46,26,-1,27,2,48,-1,48,47,27,-1,8,16,49,-1,49,48,8,-1,16,19,50,-1,50,49,16,-1,21,18,51,-1,51,50,21,-1,18,15,45,-1,45,51,18,-1});
  }
}
protected class MFVec3f341 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-12.56f,-176.5911f,17.4222f,-10.2133f,-210.0356f,28.2356f,-10.2933f,-206.5289f,16.3333f,-15.3911f,-193.5022f,17.0756f,7.7289f,-205.4267f,33.3244f,13.9378f,-171.2356f,24.2133f,13.9378f,-204.0889f,24.2711f,12.0178f,-172.8889f,34.4622f,11.96f,-205.5867f,34.6978f,11.3644f,-190.9378f,36.6178f,-10.0489f,-207.7333f,7.48f,-17.2711f,-193.5022f,5.6489f,-13.12f,-171.3511f,7.5733f,14.5911f,-206.3733f,16.0667f,16.0311f,-166.4267f,17.9644f,7.8978f,-172.4533f,33.36f,-11.6f,-175.6889f,28.2089f,-14.2578f,-192.4667f,29.4489f,9.3289f,-190.56f,36.4444f,-11.7511f,-210.64f,33.8311f,-15.4356f,-194.4222f,34.1778f,-13.1244f,-178.6978f,33.7822f,7.2844f,-176.0089f,38.3378f,8.5556f,-192.9778f,40.4578f,6.1644f,-207.1956f,38.2f,-3.6578f,-201.64f,-1.3511f,-8.3822f,-192.3511f,-2.5156f,-5.2844f,-175.9111f,-1.1289f,13.1556f,-172.72f,5.2489f,12.1556f,-200.7422f,3.8933f,21.7822f,-199.56f,22.7467f,21.6f,-200.8222f,17.8356f,22.7067f,-173.9467f,19.1244f,21.8311f,-175.9244f,21.9333f,20.4667f,-177.1644f,30.1467f,19.76f,-190.6444f,31.7733f,20.2089f,-200.6f,30.48f});
  }
}
protected class MFVec2f342 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2192f,0.0256f,0.2205f,0.0195f,0.2048f,0.0404f,0.2199f,0.022f,0.2063f,0.0414f,0.2047f,0.0523f,0.1956f,0.0462f,0.1979f,0.0386f,0.2109f,0.0476f,0.277f,0.1031f,0.2673f,0.0987f,0.263f,0.1f,0.2744f,0.109f,0.1892f,0.0439f,0.1911f,0.0375f,0.2576f,0.0911f,0.2083f,0.0537f,0.263f,0.0893f,0.2612f,0.0869f,0.2047f,0.0593f,0.2048f,0.0593f,0.2671f,0.0842f,0.2673f,0.0839f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2102f,0.0461f,0.2083f,0.0443f,0.2039f,0.0358f,0.2152f,0.0224f,0.2154f,0.0203f,0.2126f,0.0258f,0.2034f,0.0366f,0.2033f,0.0375f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2245f,0.0286f,0.226f,0.0221f,0.2232f,0.0245f,0.2083f,0.0443f,0.2102f,0.0461f,0.2576f,0.0911f,0.2102f,0.0461f,0.2083f,0.0443f,0.2048f,0.0404f,0.2083f,0.0537f,0.2047f,0.0593f,0.2612f,0.0869f});
  }
}
protected class MFFloat343 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat344 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32345 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,0,1,-1,1,7,6,-1,7,1,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,0,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1});
  }
}
protected class MFInt32346 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,1,0,-1,0,7,6,-1,7,0,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,1,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1});
  }
}
protected class MFVec3f347 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-11.08f,-206.6178f,33.1022f,-14.1733f,-194.3867f,32.5644f,-12.4133f,-180.8222f,33.0311f,9.92f,-179.5067f,37.4311f,11.5289f,-194.5511f,38.4089f,8.0444f,-206.4044f,36.88f,-7.1556f,-205.08f,18.8533f,-10.84f,-188.8622f,19.2f,-8.5244f,-173.1378f,18.8044f,11.88f,-170.4489f,23.36f,13.1556f,-187.4222f,25.48f,10.76f,-201.6356f,23.2222f,-2.1289f,-199.7689f,13.2489f,-4.7378f,-188.6844f,13.8578f,-2.9911f,-177.2267f,13.3244f,9.5333f,-175.5822f,15.9244f,10.2711f,-187.2f,17.9156f,8.6f,-197.7111f,15.8356f,-8.9556f,-194.0267f,40.4844f,-7.4489f,-199.9511f,40.72f,1.8578f,-199.8444f,42.3956f,3.5156f,-193.9556f,43.4933f,2.8f,-186.5422f,42.6667f,-8.0667f,-187.1822f,40.7244f});
  }
}
protected class MFVec2f348 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2109f,0.0133f,0.2102f,0.0181f,0.2093f,0.0169f,0.1959f,0.0354f,0.1986f,0.0324f,0.1989f,0.0342f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2114f,0.0219f,0.2132f,0.0168f,0.2123f,0.0196f,0.1999f,0.0356f,0.201f,0.0349f,0.2011f,0.0354f,0.2109f,0.0133f,0.2102f,0.0181f,0.1989f,0.0342f,0.1986f,0.0324f,0.1959f,0.0354f,0.2093f,0.0169f});
  }
}
protected class MFFloat349 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat350 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32351 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,4,-1,4,3,2,-1,0,5,4,-1,4,1,0,-1,7,6,0,-1,0,1,7,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,10,9,3,-1,3,4,10,-1,5,11,10,-1,10,4,5,-1,0,6,11,-1,11,5,0,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1});
  }
}
protected class MFInt32352 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,9,8,5,-1,5,0,9,-1,1,10,9,-1,9,0,1,-1,12,11,7,-1,7,6,12,-1,14,13,2,-1,2,3,14,-1,4,15,14,-1,14,3,4,-1,5,8,15,-1,15,4,5,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,11,12,19,-1,19,18,11,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,8,16,-1,16,21,15,-1});
  }
}
protected class MFVec3f353 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-5.9111f,-201.8578f,29.5911f,-10.0311f,-190.32f,33.5067f,-7.8444f,-180.2178f,31.0756f,4.9467f,-179.4978f,33.8489f,4.7467f,-189.9956f,36.3156f,5.1911f,-201.8578f,31.6178f,-9.2933f,-202.0889f,17.8222f,-12.3867f,-189.8578f,17.2844f,-10.6311f,-176.2933f,17.7511f,11.7067f,-174.9778f,22.1511f,13.3156f,-190.0222f,23.1289f,9.8311f,-201.8756f,21.6f,-3.7867f,-197.0133f,10.5333f,-5.6889f,-189.5111f,10.2178f,-4.5822f,-180.9867f,10.5156f,9.1511f,-180.1778f,13.0756f,10.0889f,-189.4978f,13.9422f,7.9733f,-196.88f,12.7333f});
  }
}
protected class MFVec2f354 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2048f,0.0135f,0.2053f,0.0142f,0.1964f,0.026f,0.1976f,0.0232f,0.1977f,0.0271f,0.2052f,0.017f,0.0639f,0.0523f,0.0903f,0.0107f,0.2102f,0.0181f,0.2109f,0.0133f,0.2093f,0.0169f,0.1317f,0.0215f,0.0951f,0.0836f,0.1959f,0.0354f,0.1986f,0.0324f,0.1989f,0.0342f,0.2102f,0.0181f,0.2109f,0.0133f,0.2093f,0.0169f,0.0951f,0.0836f,0.1986f,0.0324f,0.1989f,0.0342f});
  }
}
protected class MFFloat355 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat356 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32357 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,10,11,-1,11,5,0,-1,1,0,5,-1,5,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,2,7,26,-1,26,27,2,-1,8,5,11,-1,11,7,8,-1,9,6,5,-1,5,8,9,-1,11,10,13,-1,13,12,11,-1,7,11,12,-1,12,26,7,-1,16,15,14,-1,14,17,16,-1,19,18,15,-1,15,16,19,-1,22,21,20,-1,20,23,22,-1,23,20,24,-1,24,25,23,-1,25,24,18,-1,18,19,25,-1,22,27,26,-1,26,21,22,-1,20,21,14,-1,14,15,20,-1,24,20,15,-1,15,18,24,-1,14,12,13,-1,13,17,14,-1,21,26,12,-1,12,14,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,10,0,29,-1,29,28,10,-1,0,1,30,-1,30,29,0,-1,1,4,31,-1,31,30,1,-1,4,3,32,-1,32,31,4,-1,3,2,33,-1,33,32,3,-1,2,27,34,-1,34,33,2,-1,27,22,35,-1,35,34,27,-1,22,23,36,-1,36,35,22,-1,23,25,37,-1,37,36,23,-1,25,19,38,-1,38,37,25,-1,19,16,39,-1,39,38,19,-1,16,17,40,-1,40,39,16,-1,17,13,41,-1,41,40,17,-1,13,10,28,-1,28,41,13,-1});
  }
}
protected class MFInt32358 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,4,3,9,-1,9,10,4,-1,3,5,11,-1,11,9,3,-1,5,2,8,-1,8,11,5,-1,12,13,15,-1,15,14,12,-1,9,7,6,-1,6,10,9,-1,11,8,7,-1,7,9,11,-1,6,0,17,-1,17,18,6,-1,10,6,18,-1,18,16,10,-1,21,20,19,-1,19,22,21,-1,24,23,20,-1,20,21,24,-1,27,26,25,-1,25,28,27,-1,28,25,29,-1,29,30,28,-1,30,29,23,-1,23,24,30,-1,31,34,33,-1,33,32,31,-1,25,26,19,-1,19,20,25,-1,29,25,20,-1,20,23,29,-1,19,35,36,-1,36,22,19,-1,26,37,35,-1,35,19,26,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,43,46,50,-1,39,43,50,-1,39,50,51,-1,39,51,38,-1,0,1,39,-1,39,38,0,-1,1,2,40,-1,40,39,1,-1,2,5,41,-1,41,40,2,-1,5,3,42,-1,42,41,5,-1,3,4,43,-1,43,42,3,-1,12,14,44,-1,44,43,12,-1,34,31,45,-1,45,44,34,-1,27,28,46,-1,46,45,27,-1,28,30,47,-1,47,46,28,-1,30,24,48,-1,48,47,30,-1,24,21,49,-1,49,48,24,-1,21,22,50,-1,50,49,21,-1,22,36,51,-1,51,50,22,-1,17,0,38,-1,38,51,17,-1});
  }
}
protected class MFVec3f359 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {185.3111f,-139.0222f,185.5778f,255.6222f,-137.4222f,98.6f,67.1778f,-145.9778f,-153.4889f,175.1778f,-145.5467f,-102.7333f,235.5778f,-140.8889f,-22.8978f,168.0222f,-186.7733f,152.6f,229.2222f,-185.3644f,84.8667f,70.4222f,-192.08f,-108.9556f,159.6222f,-191.08f,-72.1111f,214.7778f,-188.9911f,-9.76f,72.2889f,-140.4f,212.7333f,70.5111f,-188.4933f,171.9778f,-0.3778f,-188.4933f,171.9778f,-0.3778f,-140.4f,212.7333f,-71.2667f,-188.4933f,171.9778f,-168.7778f,-186.7733f,152.6f,-186.0667f,-139.0222f,185.5778f,-73.0444f,-140.4f,212.7333f,-229.9778f,-185.3644f,84.8667f,-256.3778f,-137.4222f,98.6f,-160.3778f,-191.08f,-72.1111f,-71.1778f,-192.08f,-108.9556f,-67.9333f,-145.9778f,-153.4889f,-175.9333f,-145.5467f,-102.7333f,-215.5333f,-188.9911f,-9.76f,-236.3333f,-140.8889f,-22.8978f,-0.3778f,-192.08f,-108.9556f,-0.3778f,-145.9778f,-153.4889f,71.1333f,-123.0667f,202.8222f,179.7556f,-123.0667f,176.7333f,245.1333f,-123.0667f,95.8444f,226.2f,-123.0667f,-18.88f,168.7778f,-123.0667f,-91.7111f,64.9556f,-123.0667f,-140.5111f,-0.3778f,-123.0667f,-140.5111f,-65.7111f,-123.0667f,-140.5111f,-169.5333f,-123.0667f,-91.7111f,-226.9556f,-123.0667f,-18.88f,-245.8889f,-123.0667f,95.8444f,-180.5111f,-123.0667f,176.7333f,-71.8889f,-123.0667f,202.8222f,-0.3778f,-123.0667f,202.8222f});
  }
}
protected class MFVec2f360 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.2369f,0.2375f,0.3561f,0.2404f,0.1927f,0.24f,0.0206f,0.2122f,0.1067f,0.2154f,0.1463f,0.2162f,0.227f,0.2131f,0.3536f,0.2151f,0.1879f,0.2143f,0.3553f,0.2398f,0.3555f,0.2151f,0.3557f,0.2401f,0.3545f,0.2151f,0.3536f,0.2151f,0.019f,0.2349f,0.0206f,0.2122f,0.0206f,0.2122f,0.1067f,0.2154f,0.1011f,0.241f,0.019f,0.2349f,0.1463f,0.2162f,0.1445f,0.2419f,0.227f,0.2131f,0.3536f,0.2151f,0.3561f,0.2404f,0.2369f,0.2375f,0.1879f,0.2143f,0.1927f,0.24f,0.3553f,0.2398f,0.3555f,0.2151f,0.3545f,0.2151f,0.3557f,0.2401f,0.0206f,0.2122f,0.019f,0.2349f,0.3536f,0.2151f,0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.1927f,0.24f,0.2369f,0.2375f,0.3561f,0.2404f,0.3557f,0.2401f,0.3553f,0.2398f,0.2369f,0.2375f,0.1927f,0.24f,0.1445f,0.2419f,0.1011f,0.241f,0.019f,0.2349f,0.019f,0.2349f});
  }
}
protected class MFFloat361 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat362 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32363 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,6,0,-1,0,3,11,-1,7,1,0,-1,0,6,7,-1,9,8,2,-1,2,4,9,-1,10,9,4,-1,4,5,10,-1,10,5,1,-1,1,7,10,-1,25,11,3,-1,3,26,25,-1,2,8,12,-1,12,27,2,-1,13,16,15,-1,15,14,13,-1,17,14,15,-1,15,18,17,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,23,17,18,-1,18,24,23,-1,25,26,16,-1,16,13,25,-1,21,27,12,-1,12,20,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,2,33,-1,33,32,4,-1,2,27,34,-1,34,33,2,-1,27,21,35,-1,35,34,27,-1,21,22,36,-1,36,35,21,-1,22,24,37,-1,37,36,22,-1,24,18,38,-1,38,37,24,-1,18,15,39,-1,39,38,18,-1,15,16,40,-1,40,39,15,-1,16,26,41,-1,41,40,16,-1,26,3,28,-1,28,41,26,-1,6,11,43,-1,43,42,6,-1,11,25,44,-1,44,43,11,-1,25,13,45,-1,45,44,25,-1,13,14,46,-1,46,45,13,-1,14,17,47,-1,47,46,14,-1,17,23,48,-1,48,47,17,-1,23,19,49,-1,49,48,23,-1,19,20,50,-1,50,49,19,-1,20,12,51,-1,51,50,20,-1,12,8,52,-1,52,51,12,-1,8,9,53,-1,53,52,8,-1,9,10,54,-1,54,53,9,-1,10,7,55,-1,55,54,10,-1,7,6,42,-1,42,55,7,-1});
  }
}
protected class MFInt32364 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,9,0,-1,0,4,15,-1,10,1,0,-1,0,9,10,-1,13,12,2,-1,2,5,13,-1,14,13,5,-1,5,6,14,-1,14,6,1,-1,1,10,14,-1,17,15,4,-1,4,7,17,-1,3,11,16,-1,16,8,3,-1,18,21,20,-1,20,19,18,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,29,27,-1,27,24,28,-1,28,22,23,-1,23,29,28,-1,30,31,21,-1,21,18,30,-1,32,35,34,-1,34,33,32,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,2,41,-1,41,40,5,-1,3,8,42,-1,42,41,3,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,7,4,36,-1,36,49,7,-1,9,15,51,-1,51,50,9,-1,15,17,52,-1,52,51,15,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,16,11,60,-1,60,59,16,-1,12,13,61,-1,61,60,12,-1,13,14,62,-1,62,61,13,-1,14,10,63,-1,63,62,14,-1,10,9,50,-1,50,63,10,-1});
  }
}
protected class MFVec3f365 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {178.5556f,-155.3556f,170.2f,246.5556f,-154.56f,92.4222f,63.7556f,-158.8311f,-133.7111f,67.1333f,-156.0356f,194.8222f,169.8444f,-158.6178f,-86.6444f,228.4222f,-156.28f,-16.8f,185.3111f,-187.0756f,185.5778f,255.6222f,-185.48f,98.6f,67.1778f,-194.0267f,-153.4889f,175.1778f,-193.5911f,-102.7333f,235.5778f,-188.92f,-22.8978f,72.2889f,-188.4311f,212.7333f,-0.3778f,-194.0267f,-153.4889f,-73.0444f,-188.4311f,212.7333f,-186.0667f,-187.0756f,185.5778f,-179.3111f,-155.3556f,170.2f,-67.8889f,-156.0356f,194.8222f,-256.3778f,-185.48f,98.6f,-247.3111f,-154.56f,92.4222f,-175.9333f,-193.5911f,-102.7333f,-67.9333f,-194.0267f,-153.4889f,-64.5111f,-158.8311f,-133.7111f,-170.6f,-158.6178f,-86.6444f,-236.3333f,-188.92f,-22.8978f,-229.1778f,-156.28f,-16.8f,-0.3778f,-188.4311f,212.7333f,-0.3778f,-156.0356f,194.8222f,-0.3778f,-158.8311f,-133.7111f,65.9778f,-141.3778f,184.0222f,172.7333f,-141.3778f,160.4222f,235.0444f,-141.3778f,89.1333f,218.2f,-141.3778f,-12.1067f,163.1778f,-141.3778f,-77.7556f,61.4889f,-141.3778f,-122.9111f,-0.3778f,-141.3778f,-122.9111f,-62.2444f,-141.3778f,-122.9111f,-163.9333f,-141.3778f,-77.7556f,-218.9556f,-141.3778f,-12.1067f,-235.8f,-141.3778f,89.1333f,-173.4889f,-141.3778f,160.4222f,-66.7333f,-141.3778f,184.0222f,-0.3778f,-141.3778f,184.0222f,171.0444f,-209.0222f,169.4889f,67.7556f,-209.0222f,194.2889f,-0.3778f,-209.0222f,194.2889f,-68.5111f,-209.0222f,194.2889f,-171.8f,-209.0222f,169.4889f,-233.7556f,-209.0222f,92.8222f,-215.8f,-209.0222f,-16.04f,-161.2222f,-209.0222f,-88.1556f,-62.5111f,-209.0222f,-134.5556f,-0.3778f,-209.0222f,-134.5556f,61.7556f,-209.0222f,-134.5556f,160.4667f,-209.0222f,-88.1556f,215.0444f,-209.0222f,-16.04f,233f,-209.0222f,92.8222f});
  }
}
protected class MFVec2f366 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1026f,0.2616f,0.1481f,0.2604f,0.3503f,0.2575f,0.3578f,0.2568f,0.0179f,0.2574f,0.2289f,0.2559f,0.1884f,0.2584f,0.0186f,0.2582f,0.3542f,0.2515f,0.1011f,0.241f,0.1445f,0.2419f,0.3553f,0.2398f,0.3561f,0.2404f,0.2369f,0.2375f,0.1927f,0.24f,0.019f,0.2349f,0.3557f,0.2401f,0.019f,0.2349f,0.019f,0.2349f,0.1011f,0.241f,0.1026f,0.2616f,0.0179f,0.2574f,0.1445f,0.2419f,0.1481f,0.2604f,0.2369f,0.2375f,0.3561f,0.2404f,0.3503f,0.2575f,0.2289f,0.2559f,0.1927f,0.24f,0.1884f,0.2584f,0.019f,0.2349f,0.0186f,0.2582f,0.3578f,0.2568f,0.3553f,0.2398f,0.3557f,0.2401f,0.3542f,0.2515f,0.0179f,0.2574f,0.1026f,0.2616f,0.1481f,0.2604f,0.1884f,0.2584f,0.2289f,0.2559f,0.3503f,0.2575f,0.3542f,0.2515f,0.3578f,0.2568f,0.2289f,0.2559f,0.1884f,0.2584f,0.1481f,0.2604f,0.1026f,0.2616f,0.0179f,0.2574f,0.0186f,0.2582f,0.1011f,0.241f,0.019f,0.2349f,0.019f,0.2349f,0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.1927f,0.24f,0.2369f,0.2375f,0.3561f,0.2404f,0.3557f,0.2401f,0.3553f,0.2398f,0.2369f,0.2375f,0.1927f,0.24f,0.1445f,0.2419f});
  }
}
protected class MFFloat367 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat368 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32369 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,8,15,-1,15,16,1,-1,0,4,9,-1,9,6,0,-1,7,5,0,-1,0,6,7,-1,1,2,10,-1,10,8,1,-1,2,3,11,-1,11,10,2,-1,11,3,5,-1,5,7,11,-1,4,27,12,-1,12,9,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,17,18,-1,18,22,21,-1,13,14,24,-1,24,23,13,-1,23,24,26,-1,26,25,23,-1,26,21,22,-1,22,25,26,-1,19,20,12,-1,12,27,19,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,4,0,29,-1,29,28,4,-1,0,5,30,-1,30,29,0,-1,5,3,31,-1,31,30,5,-1,3,2,32,-1,32,31,3,-1,2,1,33,-1,33,32,2,-1,1,16,34,-1,34,33,1,-1,16,13,35,-1,35,34,16,-1,13,23,36,-1,36,35,13,-1,23,25,37,-1,37,36,23,-1,25,22,38,-1,38,37,25,-1,22,18,39,-1,39,38,22,-1,18,19,40,-1,40,39,18,-1,19,27,41,-1,41,40,19,-1,27,4,28,-1,28,41,27,-1,6,9,43,-1,43,42,6,-1,9,12,44,-1,44,43,9,-1,12,20,45,-1,45,44,12,-1,20,17,46,-1,46,45,20,-1,17,21,47,-1,47,46,17,-1,21,26,48,-1,48,47,21,-1,26,24,49,-1,49,48,26,-1,24,14,50,-1,50,49,24,-1,14,15,51,-1,51,50,14,-1,15,8,52,-1,52,51,15,-1,8,10,53,-1,53,52,8,-1,10,11,54,-1,54,53,10,-1,11,7,55,-1,55,54,11,-1,7,6,42,-1,42,55,7,-1});
  }
}
protected class MFInt32370 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,11,17,-1,17,7,4,-1,0,1,13,-1,13,9,0,-1,10,2,0,-1,0,9,10,-1,3,5,14,-1,14,12,3,-1,5,6,15,-1,15,14,5,-1,15,6,2,-1,2,10,15,-1,1,8,16,-1,16,13,1,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,1,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,16,52,-1,52,51,13,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,17,11,60,-1,60,59,17,-1,12,14,61,-1,61,60,12,-1,14,15,62,-1,62,61,14,-1,15,10,63,-1,63,62,15,-1,10,9,50,-1,50,63,10,-1});
  }
}
protected class MFVec3f371 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {171.8f,-155.9467f,154.8667f,60.3778f,-155.9467f,-113.9333f,164.5111f,-155.9467f,-70.5111f,221.2667f,-155.9467f,-10.7067f,62.0222f,-155.9467f,176.9556f,237.5333f,-155.9467f,86.2f,178.5556f,-187.6622f,170.2f,246.5556f,-186.8667f,92.4222f,63.7556f,-191.1378f,-133.7111f,67.1333f,-188.3422f,194.8222f,169.8444f,-190.9244f,-86.6444f,228.4222f,-188.5867f,-16.8f,-0.3778f,-188.3422f,194.8222f,-61.1333f,-155.9467f,-113.9333f,-64.5111f,-191.1378f,-133.7111f,-0.3778f,-191.1378f,-133.7111f,-0.3778f,-155.9467f,-113.9333f,-179.3111f,-187.6622f,170.2f,-172.5556f,-155.9467f,154.8667f,-62.7778f,-155.9467f,176.9556f,-67.8889f,-188.3422f,194.8222f,-247.3111f,-186.8667f,92.4222f,-238.2889f,-155.9467f,86.2f,-165.2667f,-155.9467f,-70.5111f,-170.6f,-190.9244f,-86.6444f,-222.0222f,-155.9467f,-10.7067f,-229.1778f,-188.5867f,-16.8f,-0.3778f,-155.9467f,176.9556f,60.3333f,-139.1111f,166.6889f,165.2222f,-139.1111f,145.5778f,225.3111f,-139.1111f,82.7778f,210.3778f,-139.1111f,-6.1511f,157.4f,-139.1111f,-62.0222f,57.8889f,-139.1111f,-103.5333f,-0.3778f,-139.1111f,-103.5333f,-58.6444f,-139.1111f,-103.5333f,-158.1556f,-139.1111f,-62.0222f,-211.1333f,-139.1111f,-6.1511f,-226.0667f,-139.1111f,82.7778f,-165.9778f,-139.1111f,145.5778f,-61.0889f,-139.1111f,166.6889f,-0.3778f,-139.1111f,166.6889f,171.6222f,-203.6933f,160.7778f,65.3111f,-203.6933f,184.2889f,-0.3778f,-203.6933f,184.2889f,-66.0667f,-203.6933f,184.2889f,-172.3778f,-203.6933f,160.7778f,-235.0444f,-203.6933f,89.0889f,-218.1556f,-203.6933f,-12.4489f,-163.0889f,-203.6933f,-78.0667f,-61.8889f,-203.6933f,-123.0444f,-0.3778f,-203.6933f,-123.0444f,61.1333f,-203.6933f,-123.0444f,162.3333f,-203.6933f,-78.0667f,217.4f,-203.6933f,-12.4489f,234.2889f,-203.6933f,89.0889f});
  }
}
protected class MFVec2f372 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1041f,0.2822f,0.0168f,0.2798f,0.1518f,0.2789f,0.3444f,0.2746f,0.3604f,0.2737f,0.221f,0.2742f,0.1842f,0.2768f,0.3527f,0.263f,0.0181f,0.2816f,0.1026f,0.2616f,0.1481f,0.2604f,0.3578f,0.2568f,0.3503f,0.2575f,0.0179f,0.2574f,0.2289f,0.2559f,0.1884f,0.2584f,0.0186f,0.2582f,0.3542f,0.2515f,0.3604f,0.2737f,0.3578f,0.2568f,0.3542f,0.2515f,0.3527f,0.263f,0.1026f,0.2616f,0.1041f,0.2822f,0.0168f,0.2798f,0.0179f,0.2574f,0.1481f,0.2604f,0.1518f,0.2789f,0.3503f,0.2575f,0.3444f,0.2746f,0.221f,0.2742f,0.2289f,0.2559f,0.1842f,0.2768f,0.1884f,0.2584f,0.0181f,0.2816f,0.0186f,0.2582f,0.0168f,0.2798f,0.1041f,0.2822f,0.1518f,0.2789f,0.1842f,0.2768f,0.221f,0.2742f,0.3444f,0.2746f,0.3527f,0.263f,0.3604f,0.2737f,0.221f,0.2742f,0.1842f,0.2768f,0.1518f,0.2789f,0.1041f,0.2822f,0.0168f,0.2798f,0.0181f,0.2816f,0.1026f,0.2616f,0.0179f,0.2574f,0.0186f,0.2582f,0.0179f,0.2574f,0.1026f,0.2616f,0.1481f,0.2604f,0.1884f,0.2584f,0.2289f,0.2559f,0.3503f,0.2575f,0.3542f,0.2515f,0.3578f,0.2568f,0.2289f,0.2559f,0.1884f,0.2584f,0.1481f,0.2604f});
  }
}
protected class MFFloat373 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat374 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32375 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,7,14,-1,14,15,3,-1,0,5,10,-1,10,6,0,-1,11,2,0,-1,0,6,11,-1,3,4,8,-1,8,7,3,-1,4,1,9,-1,9,8,4,-1,9,1,2,-1,2,11,9,-1,5,26,27,-1,27,10,5,-1,12,15,14,-1,14,13,12,-1,17,16,19,-1,19,18,17,-1,20,16,17,-1,17,21,20,-1,12,13,23,-1,23,22,12,-1,22,23,25,-1,25,24,22,-1,25,20,21,-1,21,24,25,-1,18,19,27,-1,27,26,18,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,5,0,29,-1,29,28,5,-1,0,2,30,-1,30,29,0,-1,2,1,31,-1,31,30,2,-1,1,4,32,-1,32,31,1,-1,4,3,33,-1,33,32,4,-1,3,15,34,-1,34,33,3,-1,15,12,35,-1,35,34,15,-1,12,22,36,-1,36,35,12,-1,22,24,37,-1,37,36,22,-1,24,21,38,-1,38,37,24,-1,21,17,39,-1,39,38,21,-1,17,18,40,-1,40,39,17,-1,18,26,41,-1,41,40,18,-1,26,5,28,-1,28,41,26,-1,6,10,43,-1,43,42,6,-1,10,27,44,-1,44,43,10,-1,27,19,45,-1,45,44,27,-1,19,16,46,-1,46,45,19,-1,16,20,47,-1,47,46,16,-1,20,25,48,-1,48,47,20,-1,25,23,49,-1,49,48,25,-1,23,13,50,-1,50,49,23,-1,13,14,51,-1,51,50,13,-1,14,7,52,-1,52,51,14,-1,7,8,53,-1,53,52,7,-1,8,9,54,-1,54,53,8,-1,9,11,55,-1,55,54,9,-1,11,6,42,-1,42,55,11,-1});
  }
}
protected class MFInt32376 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,10,16,-1,16,7,6,-1,1,0,14,-1,14,9,1,-1,15,2,1,-1,1,9,15,-1,4,3,12,-1,12,11,4,-1,3,5,13,-1,13,12,3,-1,13,5,2,-1,2,15,13,-1,0,8,17,-1,17,14,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,0,1,37,-1,37,36,0,-1,1,2,38,-1,38,37,1,-1,2,5,39,-1,39,38,2,-1,5,3,40,-1,40,39,5,-1,3,4,41,-1,41,40,3,-1,6,7,42,-1,42,41,6,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,0,36,-1,36,49,8,-1,9,14,51,-1,51,50,9,-1,14,17,52,-1,52,51,14,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,16,10,60,-1,60,59,16,-1,11,12,61,-1,61,60,11,-1,12,13,62,-1,62,61,12,-1,13,15,63,-1,63,62,13,-1,15,9,50,-1,50,63,15,-1});
  }
}
protected class MFVec3f377 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {164.5111f,-154f,138.3333f,213.7556f,-154f,-4.3111f,227.5333f,-154f,79.3556f,57.0889f,-154f,-94.6889f,159.3111f,-154f,-54.7333f,56.5556f,-154f,158.0667f,171.8f,-188.2533f,154.8667f,60.3778f,-188.2533f,-113.9333f,164.5111f,-188.2533f,-70.5111f,221.2667f,-188.2533f,-10.7067f,62.0222f,-188.2533f,176.9556f,237.5333f,-188.2533f,86.2f,-57.8444f,-154f,-94.6889f,-61.1333f,-188.2533f,-113.9333f,-0.3778f,-188.2533f,-113.9333f,-0.3778f,-154f,-94.6889f,-172.5556f,-188.2533f,154.8667f,-165.2667f,-154f,138.3333f,-57.3111f,-154f,158.0667f,-62.7778f,-188.2533f,176.9556f,-238.2889f,-188.2533f,86.2f,-228.2889f,-154f,79.3556f,-160.0667f,-154f,-54.7333f,-165.2667f,-188.2533f,-70.5111f,-214.5111f,-154f,-4.3111f,-222.0222f,-188.2533f,-10.7067f,-0.3778f,-154f,158.0667f,-0.3778f,-188.2533f,176.9556f,55.6667f,-133.8222f,148.2889f,159.8889f,-133.8222f,129.1778f,217f,-133.8222f,75.8f,204.6f,-133.8222f,0.6f,153.9778f,-133.8222f,-46.2889f,55.2222f,-133.8222f,-84.9111f,-0.3778f,-133.8222f,-84.9111f,-55.9778f,-133.8222f,-84.9111f,-154.7333f,-133.8222f,-46.2889f,-205.3556f,-133.8222f,0.6f,-217.7556f,-133.8222f,75.8f,-160.6444f,-133.8222f,129.1778f,-56.4222f,-133.8222f,148.2889f,-0.3778f,-133.8222f,148.2889f,170.8667f,-205.1333f,148.5111f,62.5111f,-205.1333f,170.2889f,-0.3778f,-205.1333f,170.2889f,-63.2667f,-205.1333f,170.2889f,-171.6222f,-205.1333f,148.5111f,-233.2667f,-205.1333f,84.1111f,-217.9333f,-205.1333f,-7.1511f,-163.4f,-205.1333f,-64.6444f,-60.5556f,-205.1333f,-107.5333f,-0.3778f,-205.1333f,-107.5333f,59.8f,-205.1333f,-107.5333f,162.6444f,-205.1333f,-64.6444f,217.1778f,-205.1333f,-7.1511f,232.5111f,-205.1333f,84.1111f});
  }
}
protected class MFVec2f378 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0177f,0.3051f,0.0982f,0.302f,0.1487f,0.2975f,0.2175f,0.2944f,0.3621f,0.2922f,0.1849f,0.2961f,0.3633f,0.2922f,0.3627f,0.2922f,0.0177f,0.3051f,0.1055f,0.2814f,0.3697f,0.2711f,0.3605f,0.2757f,0.2204f,0.275f,0.1853f,0.2768f,0.024f,0.2813f,0.1448f,0.2785f,0.3603f,0.2745f,0.0155f,0.2778f,0.3633f,0.2922f,0.3697f,0.2711f,0.3603f,0.2745f,0.3627f,0.2922f,0.1055f,0.2814f,0.0982f,0.302f,0.0177f,0.3051f,0.024f,0.2813f,0.1448f,0.2785f,0.1487f,0.2975f,0.3605f,0.2757f,0.3621f,0.2922f,0.2175f,0.2944f,0.2204f,0.275f,0.1849f,0.2961f,0.1853f,0.2768f,0.0177f,0.3051f,0.0155f,0.2778f,0.0177f,0.3051f,0.0982f,0.302f,0.1487f,0.2975f,0.1849f,0.2961f,0.2175f,0.2944f,0.3621f,0.2922f,0.3627f,0.2922f,0.3633f,0.2922f,0.2175f,0.2944f,0.1849f,0.2961f,0.1487f,0.2975f,0.0982f,0.302f,0.0177f,0.3051f,0.0177f,0.3051f,0.1055f,0.2814f,0.024f,0.2813f,0.0155f,0.2778f,0.024f,0.2813f,0.1055f,0.2814f,0.1448f,0.2785f,0.1853f,0.2768f,0.2204f,0.275f,0.3605f,0.2757f,0.3603f,0.2745f,0.3697f,0.2711f,0.2204f,0.275f,0.1853f,0.2768f,0.1448f,0.2785f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,0,1,-1,1,14,7,-1,11,2,0,-1,0,7,11,-1,13,12,3,-1,3,4,13,-1,8,5,2,-1,2,11,8,-1,14,1,6,-1,6,9,14,-1,8,13,4,-1,4,5,8,-1,12,10,27,-1,27,3,12,-1,16,15,18,-1,18,17,16,-1,19,16,17,-1,17,20,19,-1,21,24,23,-1,23,22,21,-1,25,19,20,-1,20,26,25,-1,15,9,6,-1,6,18,15,-1,25,26,24,-1,24,21,25,-1,22,23,27,-1,27,10,22,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,1,0,29,-1,29,28,1,-1,0,2,30,-1,30,29,0,-1,2,5,31,-1,31,30,2,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,27,34,-1,34,33,3,-1,27,23,35,-1,35,34,27,-1,23,24,36,-1,36,35,23,-1,24,26,37,-1,37,36,24,-1,26,20,38,-1,38,37,26,-1,20,17,39,-1,39,38,20,-1,17,18,40,-1,40,39,17,-1,18,6,41,-1,41,40,18,-1,6,1,28,-1,28,41,6,-1,7,14,43,-1,43,42,7,-1,14,9,44,-1,44,43,14,-1,9,15,45,-1,45,44,9,-1,15,16,46,-1,46,45,15,-1,16,19,47,-1,47,46,16,-1,19,25,48,-1,48,47,19,-1,25,21,49,-1,49,48,25,-1,21,22,50,-1,50,49,21,-1,22,10,51,-1,51,50,22,-1,10,12,52,-1,52,51,10,-1,12,13,53,-1,53,52,12,-1,13,8,54,-1,54,53,13,-1,8,11,55,-1,55,54,8,-1,11,7,42,-1,42,55,11,-1});
  }
}
protected class MFInt32382 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,17,9,-1,13,2,0,-1,0,9,13,-1,16,15,3,-1,3,5,16,-1,10,6,2,-1,2,13,10,-1,17,1,8,-1,8,11,17,-1,10,16,5,-1,5,6,10,-1,14,12,7,-1,7,4,14,-1,19,18,21,-1,21,20,19,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,22,23,-1,23,29,28,-1,18,30,31,-1,31,21,18,-1,28,29,27,-1,27,24,28,-1,33,32,35,-1,35,34,33,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,8,1,36,-1,36,49,8,-1,9,17,51,-1,51,50,9,-1,17,11,52,-1,52,51,17,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,12,14,60,-1,60,59,12,-1,15,16,61,-1,61,60,15,-1,16,10,62,-1,62,61,16,-1,10,13,63,-1,63,62,10,-1,13,9,50,-1,50,63,13,-1});
  }
}
protected class MFVec3f383 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {164.1556f,-141.6f,135.6667f,56.7778f,-141.6f,155.7556f,226.4667f,-141.6f,78.1556f,60.2f,-141.6f,-91.7556f,159.0889f,-141.6f,-54.2889f,213.1778f,-141.6f,-2.7156f,-0.3778f,-141.6f,155.7556f,164.5111f,-187.9644f,138.3333f,213.7556f,-187.9644f,-4.3111f,-0.3778f,-187.9644f,158.0667f,-0.3778f,-187.9644f,-94.6889f,227.5333f,-187.9644f,79.3556f,57.0889f,-187.9644f,-94.6889f,159.3111f,-187.9644f,-54.7333f,56.5556f,-187.9644f,158.0667f,-57.3111f,-187.9644f,158.0667f,-165.2667f,-187.9644f,138.3333f,-164.9111f,-141.6f,135.6667f,-57.5333f,-141.6f,155.7556f,-228.2889f,-187.9644f,79.3556f,-227.2222f,-141.6f,78.1556f,-160.0667f,-187.9644f,-54.7333f,-57.8444f,-187.9644f,-94.6889f,-60.9556f,-141.6f,-91.7556f,-159.8444f,-141.6f,-54.2889f,-214.5111f,-187.9644f,-4.3111f,-213.9333f,-141.6f,-2.7156f,-0.3778f,-141.6f,-91.7556f,55.8889f,-121.8667f,145.9778f,159.5778f,-121.8667f,126.5556f,215.9333f,-121.8667f,74.5111f,204.0667f,-121.8667f,2.1156f,153.8f,-121.8667f,-45.8444f,58.4222f,-121.8667f,-81.9333f,-0.3778f,-121.8667f,-81.9778f,-59.1778f,-121.8667f,-81.9333f,-154.5556f,-121.8667f,-45.8444f,-204.8222f,-121.8667f,2.1156f,-216.6889f,-121.8667f,74.5111f,-160.3333f,-121.8667f,126.5556f,-56.6444f,-121.8667f,145.9778f,-0.3778f,-121.8667f,145.9778f,159.8889f,-204.8089f,129.1778f,55.6667f,-204.8089f,148.2889f,-0.3778f,-204.8089f,148.2889f,-56.4222f,-204.8089f,148.2889f,-160.6444f,-204.8089f,129.1778f,-217.7556f,-204.8089f,75.8f,-205.3556f,-204.8089f,0.6f,-154.7333f,-204.8089f,-46.2889f,-55.9778f,-204.8089f,-84.9111f,-0.3778f,-204.8089f,-84.9111f,55.2222f,-204.8089f,-84.9111f,153.9778f,-204.8089f,-46.2889f,204.6f,-204.8089f,0.6f,217f,-204.8089f,75.8f});
  }
}
protected class MFVec2f384 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0943f,0.3233f,0.0192f,0.3251f,0.1489f,0.3212f,0.3615f,0.3195f,0.3631f,0.318f,0.2175f,0.3185f,0.1844f,0.32f,0.3623f,0.3188f,0.0192f,0.3251f,0.0982f,0.302f,0.1849f,0.2961f,0.0177f,0.3051f,0.3627f,0.2922f,0.1487f,0.2975f,0.3633f,0.2922f,0.3621f,0.2922f,0.2175f,0.2944f,0.0177f,0.3051f,0.0177f,0.3051f,0.0982f,0.302f,0.0943f,0.3233f,0.0192f,0.3251f,0.1487f,0.2975f,0.1489f,0.3212f,0.2175f,0.2944f,0.3621f,0.2922f,0.3615f,0.3195f,0.2175f,0.3185f,0.1849f,0.2961f,0.1844f,0.32f,0.0177f,0.3051f,0.0192f,0.3251f,0.3631f,0.318f,0.3633f,0.2922f,0.3627f,0.2922f,0.3623f,0.3188f,0.0192f,0.3251f,0.0943f,0.3233f,0.1489f,0.3212f,0.1844f,0.32f,0.2175f,0.3185f,0.3615f,0.3195f,0.3623f,0.3188f,0.3631f,0.318f,0.2175f,0.3185f,0.1844f,0.32f,0.1489f,0.3212f,0.0943f,0.3233f,0.0192f,0.3251f,0.0192f,0.3251f,0.0982f,0.302f,0.0177f,0.3051f,0.0177f,0.3051f,0.0177f,0.3051f,0.0982f,0.302f,0.1487f,0.2975f,0.1849f,0.2961f,0.2175f,0.2944f,0.3621f,0.2922f,0.3627f,0.2922f,0.3633f,0.2922f,0.2175f,0.2944f,0.1849f,0.2961f,0.1487f,0.2975f});
  }
}
protected class MFFloat385 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat386 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32387 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,11,-1,11,10,4,-1,17,3,9,-1,9,20,17,-1,6,0,2,-1,2,7,6,-1,8,1,0,-1,0,6,8,-1,3,4,10,-1,10,9,3,-1,5,1,8,-1,8,11,5,-1,2,27,12,-1,12,7,2,-1,13,16,15,-1,15,14,13,-1,17,20,19,-1,19,18,17,-1,21,24,23,-1,23,22,21,-1,25,21,22,-1,22,26,25,-1,18,19,16,-1,16,13,18,-1,14,15,25,-1,25,26,14,-1,23,24,12,-1,12,27,23,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,2,0,29,-1,29,28,2,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,17,34,-1,34,33,3,-1,17,18,35,-1,35,34,17,-1,18,13,36,-1,36,35,18,-1,13,14,37,-1,37,36,13,-1,14,26,38,-1,38,37,14,-1,26,22,39,-1,39,38,26,-1,22,23,40,-1,40,39,22,-1,23,27,41,-1,41,40,23,-1,27,2,28,-1,28,41,27,-1,6,7,43,-1,43,42,6,-1,7,12,44,-1,44,43,7,-1,12,24,45,-1,45,44,12,-1,24,21,46,-1,46,45,24,-1,21,25,47,-1,47,46,21,-1,25,15,48,-1,48,47,25,-1,15,16,49,-1,49,48,15,-1,16,19,50,-1,50,49,16,-1,19,20,51,-1,51,50,19,-1,20,9,52,-1,52,51,20,-1,9,10,53,-1,53,52,9,-1,10,11,54,-1,54,53,10,-1,11,8,55,-1,55,54,11,-1,8,6,42,-1,42,55,8,-1});
  }
}
protected class MFInt32388 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,15,-1,15,14,5,-1,7,4,12,-1,12,16,7,-1,9,0,2,-1,2,10,9,-1,11,1,0,-1,0,9,11,-1,3,5,14,-1,14,13,3,-1,6,1,11,-1,11,15,6,-1,2,8,17,-1,17,10,2,-1,18,21,20,-1,20,19,18,-1,22,25,24,-1,24,23,22,-1,26,29,28,-1,28,27,26,-1,30,26,27,-1,27,31,30,-1,33,32,21,-1,21,18,33,-1,19,20,30,-1,30,31,19,-1,28,29,35,-1,35,34,28,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,2,0,37,-1,37,36,2,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,22,23,43,-1,43,42,22,-1,33,18,44,-1,44,43,33,-1,18,19,45,-1,45,44,18,-1,19,31,46,-1,46,45,19,-1,31,27,47,-1,47,46,31,-1,27,28,48,-1,48,47,27,-1,28,34,49,-1,49,48,28,-1,8,2,36,-1,36,49,8,-1,9,10,51,-1,51,50,9,-1,10,17,52,-1,52,51,10,-1,35,29,53,-1,53,52,35,-1,29,26,54,-1,54,53,29,-1,26,30,55,-1,55,54,26,-1,30,20,56,-1,56,55,30,-1,20,21,57,-1,57,56,20,-1,21,32,58,-1,58,57,21,-1,24,25,59,-1,59,58,24,-1,16,12,60,-1,60,59,16,-1,13,14,61,-1,61,60,13,-1,14,15,62,-1,62,61,14,-1,15,11,63,-1,63,62,15,-1,11,9,50,-1,50,63,11,-1});
  }
}
protected class MFVec3f389 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {163.8444f,-141.6889f,133.0444f,225.4444f,-141.6889f,76.9111f,57.0444f,-141.6889f,153.4444f,63.3556f,-141.6889f,-88.8222f,158.9111f,-141.6889f,-53.8889f,212.6444f,-141.6889f,-1.12f,164.1556f,-188.0711f,135.6667f,56.7778f,-188.0711f,155.7556f,226.4667f,-188.0711f,78.1556f,60.2f,-188.0711f,-91.7556f,159.0889f,-188.0711f,-54.2889f,213.1778f,-188.0711f,-2.7156f,-0.3778f,-188.0711f,155.7556f,-159.6667f,-141.6889f,-53.8889f,-213.4f,-141.6889f,-1.12f,-213.9333f,-188.0711f,-2.7156f,-159.8444f,-188.0711f,-54.2889f,-0.3778f,-141.6889f,-88.8667f,-64.1111f,-141.6889f,-88.8222f,-60.9556f,-188.0711f,-91.7556f,-0.3778f,-188.0711f,-91.7556f,-164.9111f,-188.0711f,135.6667f,-164.6f,-141.6889f,133.0444f,-57.8f,-141.6889f,153.4444f,-57.5333f,-188.0711f,155.7556f,-227.2222f,-188.0711f,78.1556f,-226.2f,-141.6889f,76.9111f,-0.3778f,-141.6889f,153.4444f,56.3333f,-124f,146.1111f,160.4222f,-124f,126.2f,217.5778f,-124f,74.1556f,205.8f,-124f,2.44f,154.9111f,-124f,-47.5333f,62.0667f,-124f,-81.4889f,-0.3778f,-124f,-81.4889f,-62.8222f,-124f,-81.4889f,-155.6667f,-124f,-47.5333f,-206.5556f,-124f,2.44f,-218.3333f,-124f,74.1556f,-161.1778f,-124f,126.2f,-57.0889f,-124f,146.1111f,-0.3778f,-124f,146.1111f,160.7333f,-209.36f,128.8667f,56.1111f,-209.36f,148.4222f,-0.3778f,-209.36f,148.4222f,-56.8667f,-209.36f,148.4222f,-161.4889f,-209.36f,128.8667f,-219.3556f,-209.36f,75.4444f,-207.0889f,-209.36f,0.9022f,-155.8889f,-209.36f,-47.9778f,-59.6222f,-209.36f,-84.4222f,-0.3778f,-209.36f,-84.4222f,58.8667f,-209.36f,-84.4222f,155.1333f,-209.36f,-47.9778f,206.3333f,-209.36f,0.9022f,218.6f,-209.36f,75.4444f});
  }
}
protected class MFVec2f390 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0903f,0.3446f,0.1491f,0.3449f,0.0206f,0.3452f,0.3608f,0.3469f,0.3629f,0.3439f,0.2175f,0.3427f,0.1838f,0.3438f,0.3619f,0.3454f,0.0206f,0.3452f,0.0943f,0.3233f,0.0192f,0.3251f,0.1489f,0.3212f,0.3631f,0.318f,0.3615f,0.3195f,0.2175f,0.3185f,0.1844f,0.32f,0.3623f,0.3188f,0.0192f,0.3251f,0.2175f,0.3427f,0.1838f,0.3438f,0.1844f,0.32f,0.2175f,0.3185f,0.3619f,0.3454f,0.3629f,0.3439f,0.3631f,0.318f,0.3623f,0.3188f,0.0943f,0.3233f,0.0903f,0.3446f,0.0206f,0.3452f,0.0192f,0.3251f,0.1489f,0.3212f,0.1491f,0.3449f,0.3615f,0.3195f,0.3608f,0.3469f,0.0206f,0.3452f,0.0192f,0.3251f,0.0206f,0.3452f,0.0903f,0.3446f,0.1491f,0.3449f,0.1838f,0.3438f,0.2175f,0.3427f,0.3608f,0.3469f,0.3619f,0.3454f,0.3629f,0.3439f,0.2175f,0.3427f,0.1838f,0.3438f,0.1491f,0.3449f,0.0903f,0.3446f,0.0206f,0.3452f,0.0206f,0.3452f,0.0943f,0.3233f,0.0192f,0.3251f,0.0192f,0.3251f,0.0192f,0.3251f,0.0943f,0.3233f,0.1489f,0.3212f,0.1844f,0.32f,0.2175f,0.3185f,0.3615f,0.3195f,0.3623f,0.3188f,0.3631f,0.318f,0.2175f,0.3185f,0.1844f,0.32f,0.1489f,0.3212f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,10,-1,10,12,4,-1,5,4,12,-1,12,13,5,-1,5,13,9,-1,9,1,5,-1,6,11,14,-1,14,7,6,-1,7,2,0,-1,0,6,7,-1,11,6,0,-1,0,8,11,-1,3,28,29,-1,29,10,3,-1,8,0,1,-1,1,9,8,-1,15,18,17,-1,17,16,15,-1,19,20,18,-1,18,15,19,-1,19,21,22,-1,22,20,19,-1,23,7,14,-1,14,24,23,-1,7,23,25,-1,25,26,7,-1,24,27,25,-1,25,23,24,-1,16,17,29,-1,29,28,16,-1,27,22,21,-1,21,25,27,-1,32,33,34,-1,31,32,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,34,38,42,-1,31,34,42,-1,31,42,43,-1,31,43,30,-1,45,46,47,-1,47,48,49,-1,49,50,51,-1,47,49,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,47,51,55,-1,55,56,57,-1,47,55,57,-1,45,47,57,-1,45,57,44,-1,0,2,31,-1,31,30,0,-1,2,7,32,-1,32,31,2,-1,7,26,33,-1,33,32,7,-1,26,25,34,-1,34,33,26,-1,25,21,35,-1,35,34,25,-1,21,19,36,-1,36,35,21,-1,19,15,37,-1,37,36,19,-1,15,16,38,-1,38,37,15,-1,16,28,39,-1,39,38,16,-1,28,3,40,-1,40,39,28,-1,3,4,41,-1,41,40,3,-1,4,5,42,-1,42,41,4,-1,5,1,43,-1,43,42,5,-1,1,0,30,-1,30,43,1,-1,12,10,45,-1,45,44,12,-1,10,29,46,-1,46,45,10,-1,29,17,47,-1,47,46,29,-1,17,18,48,-1,48,47,17,-1,18,20,49,-1,49,48,18,-1,20,22,50,-1,50,49,20,-1,22,27,51,-1,51,50,22,-1,27,24,52,-1,52,51,27,-1,24,14,53,-1,53,52,24,-1,14,11,54,-1,54,53,14,-1,11,8,55,-1,55,54,11,-1,8,9,56,-1,56,55,8,-1,9,13,57,-1,57,56,9,-1,13,12,44,-1,44,57,13,-1});
  }
}
protected class MFInt32394 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,5,14,-1,14,16,6,-1,7,6,16,-1,16,17,7,-1,7,17,12,-1,12,3,7,-1,8,15,18,-1,18,10,8,-1,10,0,1,-1,1,8,10,-1,15,8,2,-1,2,11,15,-1,4,9,19,-1,19,13,4,-1,11,2,3,-1,3,12,11,-1,20,23,22,-1,22,21,20,-1,24,25,23,-1,23,20,24,-1,24,26,27,-1,27,25,24,-1,29,28,31,-1,31,30,29,-1,28,29,32,-1,32,33,28,-1,30,35,34,-1,34,29,30,-1,37,36,39,-1,39,38,37,-1,35,27,26,-1,26,34,35,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,44,48,52,-1,41,44,52,-1,41,52,53,-1,41,53,40,-1,55,56,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,61,62,63,-1,63,64,65,-1,61,63,65,-1,57,61,65,-1,65,66,67,-1,57,65,67,-1,55,57,67,-1,55,67,54,-1,1,0,41,-1,41,40,1,-1,0,10,42,-1,42,41,0,-1,28,33,43,-1,43,42,28,-1,33,32,44,-1,44,43,33,-1,34,26,45,-1,45,44,34,-1,26,24,46,-1,46,45,26,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,37,38,49,-1,49,48,37,-1,9,4,50,-1,50,49,9,-1,5,6,51,-1,51,50,5,-1,6,7,52,-1,52,51,6,-1,7,3,53,-1,53,52,7,-1,3,2,40,-1,40,53,3,-1,16,14,55,-1,55,54,16,-1,13,19,56,-1,56,55,13,-1,39,36,57,-1,57,56,39,-1,22,23,58,-1,58,57,22,-1,23,25,59,-1,59,58,23,-1,25,27,60,-1,60,59,25,-1,27,35,61,-1,61,60,27,-1,35,30,62,-1,62,61,35,-1,30,31,63,-1,63,62,30,-1,18,15,64,-1,64,63,18,-1,15,11,65,-1,65,64,15,-1,11,12,66,-1,66,65,11,-1,12,17,67,-1,67,66,12,-1,17,16,54,-1,54,67,17,-1});
  }
}
protected class MFVec3f395 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {163.8444f,-188.0978f,133.0444f,225.4444f,-188.0978f,76.9111f,57.0444f,-188.0978f,153.4444f,63.3556f,-188.0978f,-88.8222f,158.9111f,-188.0978f,-53.8889f,212.6444f,-188.0978f,-1.12f,57.0444f,-188.0978f,153.4444f,-0.3778f,-188.0978f,153.4444f,171.1778f,-154.0444f,151.1333f,237.8889f,-154.0444f,77.3556f,70.2f,-154.0444f,-90.3778f,60.0667f,-154.0444f,162.5111f,166.3778f,-154.0444f,-58.2889f,220.5111f,-154.0444f,-6.1867f,-0.3778f,-154.0444f,162.5111f,-159.6667f,-188.0978f,-53.8889f,-64.1111f,-188.0978f,-88.8222f,-70.9556f,-154.0444f,-90.3778f,-167.1333f,-154.0444f,-58.2889f,-213.4f,-188.0978f,-1.12f,-221.2667f,-154.0444f,-6.1867f,-226.2f,-188.0978f,76.9111f,-238.6444f,-154.0444f,77.3556f,-57.8f,-188.0978f,153.4444f,-60.8222f,-154.0444f,162.5111f,-164.6f,-188.0978f,133.0444f,-57.8f,-188.0978f,153.4444f,-171.9333f,-154.0444f,151.1333f,-0.3778f,-188.0978f,-88.8667f,-0.3778f,-154.0444f,-90.7333f,159.5778f,-209.7378f,124.5556f,56.1556f,-209.7378f,144.3333f,-0.3778f,-209.7378f,144.3333f,-56.9111f,-209.7378f,144.3333f,-160.3333f,-209.7378f,124.5556f,-216.4222f,-209.7378f,73.4889f,-204.9111f,-209.7378f,3.2933f,-154.6889f,-209.7378f,-45.9778f,-62.5111f,-209.7378f,-79.7111f,-0.3778f,-209.7378f,-79.7556f,61.7556f,-209.7378f,-79.7111f,153.9333f,-209.7378f,-45.9778f,204.1556f,-209.7378f,3.2933f,215.6667f,-209.7378f,73.4889f,161.5333f,-139.6889f,-50.2889f,68.7333f,-139.6889f,-81.3111f,-0.3778f,-139.6889f,-81.6667f,-69.4889f,-139.6889f,-81.3111f,-162.2889f,-139.6889f,-50.2889f,-212.9111f,-139.6889f,-1.5733f,-228.8222f,-139.6889f,74.6889f,-167.4889f,-139.6889f,142.4222f,-60.3778f,-139.6889f,153.4f,-0.3778f,-139.6889f,153.4f,59.6222f,-139.6889f,153.4f,166.7333f,-139.6889f,142.4222f,228.0667f,-139.6889f,74.6889f,212.1556f,-139.6889f,-1.5733f});
  }
}
protected class MFVec2f396 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0206f,0.3452f,0.0903f,0.3446f,0.0903f,0.3446f,0.1491f,0.3449f,0.3629f,0.3439f,0.3608f,0.3469f,0.2175f,0.3427f,0.1838f,0.3438f,0.0206f,0.3452f,0.3619f,0.3454f,0.0206f,0.3452f,0.089f,0.3604f,0.1508f,0.3559f,0.3623f,0.3532f,0.3588f,0.3561f,0.0232f,0.3561f,0.2188f,0.3538f,0.1874f,0.3541f,0.0232f,0.3546f,0.3608f,0.3537f,0.2175f,0.3427f,0.3608f,0.3469f,0.3588f,0.3561f,0.2188f,0.3538f,0.1838f,0.3438f,0.1874f,0.3541f,0.1491f,0.3449f,0.1508f,0.3559f,0.0206f,0.3452f,0.0206f,0.3452f,0.0232f,0.3561f,0.0232f,0.3546f,0.0903f,0.3446f,0.0206f,0.3452f,0.0903f,0.3446f,0.089f,0.3604f,0.3623f,0.3532f,0.3629f,0.3439f,0.3619f,0.3454f,0.3608f,0.3537f,0.0903f,0.3446f,0.0206f,0.3452f,0.0206f,0.3452f,0.0206f,0.3452f,0.0903f,0.3446f,0.1491f,0.3449f,0.1838f,0.3438f,0.2175f,0.3427f,0.3608f,0.3469f,0.3619f,0.3454f,0.3629f,0.3439f,0.2175f,0.3427f,0.1838f,0.3438f,0.1491f,0.3449f,0.2188f,0.3538f,0.3588f,0.3561f,0.3608f,0.3537f,0.3623f,0.3532f,0.2188f,0.3538f,0.1874f,0.3541f,0.1508f,0.3559f,0.089f,0.3604f,0.0232f,0.3561f,0.0232f,0.3546f,0.0232f,0.3561f,0.089f,0.3604f,0.1508f,0.3559f,0.1874f,0.3541f});
  }
}
protected class MFFloat397 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat398 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32399 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,7,4,-1,4,2,11,-1,7,8,5,-1,5,4,7,-1,8,10,1,-1,1,5,8,-1,3,6,12,-1,12,23,3,-1,6,3,0,-1,0,9,6,-1,2,26,27,-1,27,11,2,-1,0,1,10,-1,10,9,0,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,17,18,20,-1,20,19,17,-1,21,23,12,-1,12,22,21,-1,22,25,24,-1,24,21,22,-1,13,14,27,-1,27,26,13,-1,24,25,19,-1,19,20,24,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,2,4,29,-1,29,28,2,-1,4,5,30,-1,30,29,4,-1,5,1,31,-1,31,30,5,-1,1,0,32,-1,32,31,1,-1,0,3,33,-1,33,32,0,-1,3,23,34,-1,34,33,3,-1,23,21,35,-1,35,34,23,-1,21,24,36,-1,36,35,21,-1,24,20,37,-1,37,36,24,-1,20,18,38,-1,38,37,20,-1,18,16,39,-1,39,38,18,-1,16,13,40,-1,40,39,16,-1,13,26,41,-1,41,40,13,-1,26,2,28,-1,28,41,26,-1,6,9,43,-1,43,42,6,-1,9,10,44,-1,44,43,9,-1,10,8,45,-1,45,44,10,-1,8,7,46,-1,46,45,8,-1,7,11,47,-1,47,46,7,-1,11,27,48,-1,48,47,11,-1,27,14,49,-1,49,48,27,-1,14,15,50,-1,50,49,14,-1,15,17,51,-1,51,50,15,-1,17,19,52,-1,52,51,17,-1,19,25,53,-1,53,52,19,-1,25,22,54,-1,54,53,25,-1,22,12,55,-1,55,54,22,-1,12,6,42,-1,42,55,12,-1});
  }
}
protected class MFInt32400 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,10,5,-1,5,2,15,-1,10,11,6,-1,6,5,10,-1,11,14,1,-1,1,6,11,-1,4,9,17,-1,17,7,4,-1,9,4,0,-1,0,13,9,-1,3,8,12,-1,12,16,3,-1,0,1,14,-1,14,13,0,-1,19,18,21,-1,21,20,19,-1,20,21,23,-1,23,22,20,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,27,31,30,-1,30,26,27,-1,33,32,35,-1,35,34,33,-1,30,31,24,-1,24,25,30,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,2,5,37,-1,37,36,2,-1,5,6,38,-1,38,37,5,-1,6,1,39,-1,39,38,6,-1,1,0,40,-1,40,39,1,-1,0,4,41,-1,41,40,0,-1,4,7,42,-1,42,41,4,-1,29,26,43,-1,43,42,29,-1,26,30,44,-1,44,43,26,-1,30,25,45,-1,45,44,30,-1,25,23,46,-1,46,45,25,-1,23,21,47,-1,47,46,23,-1,21,18,48,-1,48,47,21,-1,33,34,49,-1,49,48,33,-1,8,3,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,14,52,-1,52,51,13,-1,14,11,53,-1,53,52,14,-1,11,10,54,-1,54,53,11,-1,10,15,55,-1,55,54,10,-1,16,12,56,-1,56,55,16,-1,35,32,57,-1,57,56,35,-1,19,20,58,-1,58,57,19,-1,20,22,59,-1,59,58,20,-1,22,24,60,-1,60,59,22,-1,24,31,61,-1,61,60,24,-1,31,27,62,-1,62,61,31,-1,27,28,63,-1,63,62,27,-1,17,9,50,-1,50,63,17,-1});
  }
}
protected class MFVec3f401 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {171.1778f,-188.0089f,151.1333f,237.8889f,-188.0089f,77.3556f,70.2f,-188.0089f,-90.3778f,60.0667f,-188.0089f,162.5111f,166.3778f,-188.0089f,-58.2889f,220.5111f,-188.0089f,-6.1867f,62.6444f,-159.2756f,170.0667f,172.6f,-159.2756f,-62.0222f,227.2222f,-159.2756f,-10.4311f,176.8222f,-159.2756f,165.4889f,248.5556f,-159.2756f,77.7556f,75.9333f,-159.2756f,-91.7111f,-0.3778f,-159.2756f,170.1111f,-70.9556f,-188.0089f,-90.3778f,-76.6889f,-159.2756f,-91.7111f,-173.3556f,-159.2756f,-62.0222f,-167.1333f,-188.0089f,-58.2889f,-227.9778f,-159.2756f,-10.4311f,-221.2667f,-188.0089f,-6.1867f,-249.3111f,-159.2756f,77.7556f,-238.6444f,-188.0089f,77.3556f,-60.8222f,-188.0089f,162.5111f,-63.4f,-159.2756f,170.0667f,-0.3778f,-188.0089f,162.5111f,-171.9333f,-188.0089f,151.1333f,-177.5778f,-159.2756f,165.4889f,-0.3778f,-188.0089f,-90.7333f,-0.3778f,-159.2756f,-92.3778f,68.8667f,-201.8489f,-82.2889f,162.0667f,-201.8489f,-51.1778f,213.0889f,-201.8489f,-2.0844f,229.1333f,-201.8489f,75f,167.2222f,-201.8489f,143.4f,59.6667f,-201.8489f,154.4222f,-0.3778f,-201.8489f,154.4222f,-60.4222f,-201.8489f,154.4222f,-167.9778f,-201.8489f,143.4f,-229.8889f,-201.8489f,75f,-213.8444f,-201.8489f,-2.0844f,-162.8222f,-201.8489f,-51.1778f,-69.6222f,-201.8489f,-82.2889f,-0.3778f,-201.8489f,-82.6444f,62.5111f,-146.8978f,161.9778f,172.8667f,-146.8978f,157.5333f,239.7111f,-146.8978f,75.7556f,219.8889f,-146.8978f,-6.1911f,168.4222f,-146.8978f,-54.8222f,74.6889f,-146.8978f,-83.6222f,-0.3778f,-146.8978f,-84.2889f,-75.4444f,-146.8978f,-83.6222f,-169.1778f,-146.8978f,-54.8222f,-220.6444f,-146.8978f,-6.1911f,-240.4667f,-146.8978f,75.7556f,-173.6222f,-146.8978f,157.5333f,-63.2667f,-146.8978f,161.9778f,-0.3778f,-146.8978f,161.9778f});
  }
}
protected class MFVec2f402 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.089f,0.3604f,0.1508f,0.3559f,0.3588f,0.3561f,0.3623f,0.3532f,0.0232f,0.3561f,0.2188f,0.3538f,0.1874f,0.3541f,0.0232f,0.3546f,0.3608f,0.3537f,0.0245f,0.3617f,0.2207f,0.3633f,0.1922f,0.3628f,0.3616f,0.3609f,0.0859f,0.3657f,0.1489f,0.3665f,0.3589f,0.3648f,0.3617f,0.3609f,0.0254f,0.3626f,0.3588f,0.3561f,0.3589f,0.3648f,0.2207f,0.3633f,0.2188f,0.3538f,0.1922f,0.3628f,0.1874f,0.3541f,0.1489f,0.3665f,0.1508f,0.3559f,0.0232f,0.3561f,0.0245f,0.3617f,0.0254f,0.3626f,0.0232f,0.3546f,0.089f,0.3604f,0.0859f,0.3657f,0.3617f,0.3609f,0.3623f,0.3532f,0.3608f,0.3537f,0.3616f,0.3609f,0.3623f,0.3532f,0.2188f,0.3538f,0.1874f,0.3541f,0.1508f,0.3559f,0.089f,0.3604f,0.0232f,0.3561f,0.0232f,0.3546f,0.0232f,0.3561f,0.089f,0.3604f,0.1508f,0.3559f,0.1874f,0.3541f,0.2188f,0.3538f,0.3588f,0.3561f,0.3608f,0.3537f,0.0245f,0.3617f,0.0859f,0.3657f,0.1489f,0.3665f,0.1922f,0.3628f,0.2207f,0.3633f,0.3589f,0.3648f,0.3616f,0.3609f,0.3617f,0.3609f,0.2207f,0.3633f,0.1922f,0.3628f,0.1489f,0.3665f,0.0859f,0.3657f,0.0245f,0.3617f,0.0254f,0.3626f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,0,3,-1,3,10,7,-1,5,20,21,-1,21,12,5,-1,3,4,11,-1,11,10,3,-1,12,8,1,-1,1,5,12,-1,8,9,2,-1,2,1,8,-1,9,11,4,-1,4,2,9,-1,0,7,13,-1,13,6,0,-1,14,17,16,-1,16,15,14,-1,19,18,21,-1,21,20,19,-1,16,17,23,-1,23,22,16,-1,18,19,25,-1,25,24,18,-1,24,25,27,-1,27,26,24,-1,26,27,22,-1,22,23,26,-1,15,6,13,-1,13,14,15,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,47,48,49,-1,47,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,47,50,54,-1,43,47,54,-1,43,54,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,6,30,-1,30,29,0,-1,6,15,31,-1,31,30,6,-1,15,16,32,-1,32,31,15,-1,16,22,33,-1,33,32,16,-1,22,27,34,-1,34,33,22,-1,27,25,35,-1,35,34,27,-1,25,19,36,-1,36,35,25,-1,19,20,37,-1,37,36,19,-1,20,5,38,-1,38,37,20,-1,5,1,39,-1,39,38,5,-1,1,2,40,-1,40,39,1,-1,2,4,41,-1,41,40,2,-1,4,3,28,-1,28,41,4,-1,8,12,43,-1,43,42,8,-1,12,21,44,-1,44,43,12,-1,21,18,45,-1,45,44,21,-1,18,24,46,-1,46,45,18,-1,24,26,47,-1,47,46,24,-1,26,23,48,-1,48,47,26,-1,23,17,49,-1,49,48,23,-1,17,14,50,-1,50,49,17,-1,14,13,51,-1,51,50,14,-1,13,7,52,-1,52,51,13,-1,7,10,53,-1,53,52,7,-1,10,11,54,-1,54,53,10,-1,11,9,55,-1,55,54,11,-1,9,8,42,-1,42,55,9,-1});
  }
}
protected class MFInt32406 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,4,-1,4,12,9,-1,7,3,17,-1,17,15,7,-1,4,5,13,-1,13,12,4,-1,14,10,1,-1,1,6,14,-1,10,11,2,-1,2,1,10,-1,11,13,5,-1,5,2,11,-1,0,9,16,-1,16,8,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,55,56,57,-1,55,57,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,55,58,62,-1,51,55,62,-1,51,62,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,8,38,-1,38,37,0,-1,35,19,39,-1,39,38,35,-1,19,20,40,-1,40,39,19,-1,20,26,41,-1,41,40,20,-1,26,33,42,-1,42,41,26,-1,33,31,43,-1,43,42,33,-1,31,28,44,-1,44,43,31,-1,23,24,45,-1,45,44,23,-1,3,7,46,-1,46,45,3,-1,6,1,47,-1,47,46,6,-1,1,2,48,-1,48,47,1,-1,2,5,49,-1,49,48,2,-1,5,4,36,-1,36,49,5,-1,10,14,51,-1,51,50,10,-1,15,17,52,-1,52,51,15,-1,25,22,53,-1,53,52,25,-1,29,30,54,-1,54,53,29,-1,30,32,55,-1,55,54,30,-1,32,27,56,-1,56,55,32,-1,27,21,57,-1,57,56,27,-1,21,18,58,-1,58,57,21,-1,18,34,59,-1,59,58,18,-1,16,9,60,-1,60,59,16,-1,9,12,61,-1,61,60,9,-1,12,13,62,-1,62,61,12,-1,13,11,63,-1,63,62,13,-1,11,10,50,-1,50,63,11,-1});
  }
}
protected class MFVec3f407 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {62.6444f,-188.2711f,170.0667f,172.6f,-188.2711f,-62.0222f,227.2222f,-188.2711f,-10.4311f,176.8222f,-188.2711f,165.4889f,248.5556f,-188.2711f,77.7556f,75.9333f,-188.2711f,-91.7111f,-0.3778f,-188.2711f,170.1111f,65.2222f,-159.5378f,177.6667f,178.8667f,-159.5378f,-65.7111f,233.8889f,-159.5378f,-14.6756f,182.5111f,-159.5378f,179.8444f,259.1778f,-159.5378f,78.2f,81.6222f,-159.5378f,-93.0444f,-0.3778f,-159.5378f,177.6667f,-65.9778f,-159.5378f,177.6667f,-63.4f,-188.2711f,170.0667f,-177.5778f,-188.2711f,165.4889f,-183.2667f,-159.5378f,179.8444f,-82.3778f,-159.5378f,-93.0444f,-76.6889f,-188.2711f,-91.7111f,-0.3778f,-188.2711f,-92.3778f,-0.3778f,-159.5378f,-94.0222f,-249.3111f,-188.2711f,77.7556f,-259.9333f,-159.5378f,78.2f,-179.6222f,-159.5378f,-65.7111f,-173.3556f,-188.2711f,-62.0222f,-234.6444f,-159.5378f,-14.6756f,-227.9778f,-188.2711f,-10.4311f,172.7333f,-201.1467f,157.2667f,62.5111f,-201.1467f,161.6667f,-0.3778f,-201.1467f,161.6667f,-63.2667f,-201.1467f,161.6667f,-173.4889f,-201.1467f,157.2667f,-240.1556f,-201.1467f,75.7111f,-220.3778f,-201.1467f,-6.0311f,-169f,-201.1467f,-54.5556f,-75.4f,-201.1467f,-83.3111f,-0.3778f,-201.1467f,-83.9778f,74.6444f,-201.1467f,-83.3111f,168.2444f,-201.1467f,-54.5556f,219.6222f,-201.1467f,-6.0311f,239.4f,-201.1467f,75.7111f,174.6f,-145.2267f,-58.2f,80.4222f,-145.2267f,-84.6444f,-0.3778f,-145.2267f,-85.6222f,-81.1778f,-145.2267f,-84.6444f,-175.3556f,-145.2267f,-58.2f,-227.1778f,-145.2267f,-10.1467f,-250.7333f,-145.2267f,76.4222f,-179.1333f,-145.2267f,171.3556f,-66.0667f,-145.2267f,169.2667f,-0.3778f,-145.2267f,169.2667f,65.3111f,-145.2267f,169.2667f,178.3778f,-145.2267f,171.3556f,249.9778f,-145.2267f,76.4222f,226.4222f,-145.2267f,-10.1467f});
  }
}
protected class MFVec2f408 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0245f,0.3617f,0.2207f,0.3633f,0.1922f,0.3628f,0.3616f,0.3609f,0.0859f,0.3657f,0.1489f,0.3665f,0.3589f,0.3648f,0.3617f,0.3609f,0.0254f,0.3626f,0.0258f,0.3672f,0.2227f,0.3728f,0.1969f,0.3716f,0.0826f,0.3711f,0.1469f,0.377f,0.3589f,0.3735f,0.3612f,0.3687f,0.0276f,0.3706f,0.3625f,0.3682f,0.0258f,0.3672f,0.0245f,0.3617f,0.0859f,0.3657f,0.0826f,0.3711f,0.3612f,0.3687f,0.3617f,0.3609f,0.3616f,0.3609f,0.3625f,0.3682f,0.1489f,0.3665f,0.1469f,0.377f,0.3589f,0.3648f,0.3589f,0.3735f,0.2227f,0.3728f,0.2207f,0.3633f,0.1969f,0.3716f,0.1922f,0.3628f,0.0276f,0.3706f,0.0254f,0.3626f,0.0859f,0.3657f,0.0245f,0.3617f,0.0254f,0.3626f,0.0245f,0.3617f,0.0859f,0.3657f,0.1489f,0.3665f,0.1922f,0.3628f,0.2207f,0.3633f,0.3589f,0.3648f,0.3616f,0.3609f,0.3617f,0.3609f,0.2207f,0.3633f,0.1922f,0.3628f,0.1489f,0.3665f,0.2227f,0.3728f,0.3589f,0.3735f,0.3625f,0.3682f,0.3612f,0.3687f,0.2227f,0.3728f,0.1969f,0.3716f,0.1469f,0.377f,0.0826f,0.3711f,0.0258f,0.3672f,0.0276f,0.3706f,0.0258f,0.3672f,0.0826f,0.3711f,0.1469f,0.377f,0.1969f,0.3716f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,0,9,-1,9,3,4,-1,11,19,20,-1,20,6,11,-1,9,10,5,-1,5,3,9,-1,6,7,1,-1,1,11,6,-1,7,8,2,-1,2,1,7,-1,8,5,10,-1,10,2,8,-1,0,4,12,-1,12,27,0,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,15,16,22,-1,22,21,15,-1,17,18,24,-1,24,23,17,-1,23,24,26,-1,26,25,23,-1,25,26,21,-1,21,22,25,-1,14,27,12,-1,12,13,14,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,43,44,45,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,49,50,51,-1,51,52,53,-1,49,51,53,-1,45,49,53,-1,53,54,55,-1,45,53,55,-1,43,45,55,-1,43,55,42,-1,11,1,29,-1,29,28,11,-1,1,2,30,-1,30,29,1,-1,2,10,31,-1,31,30,2,-1,10,9,32,-1,32,31,10,-1,9,0,33,-1,33,32,9,-1,0,27,34,-1,34,33,0,-1,27,14,35,-1,35,34,27,-1,14,15,36,-1,36,35,14,-1,15,21,37,-1,37,36,15,-1,21,26,38,-1,38,37,21,-1,26,24,39,-1,39,38,26,-1,24,18,40,-1,40,39,24,-1,18,19,41,-1,41,40,18,-1,19,11,28,-1,28,41,19,-1,12,4,43,-1,43,42,12,-1,4,3,44,-1,44,43,4,-1,3,5,45,-1,45,44,3,-1,5,8,46,-1,46,45,5,-1,8,7,47,-1,47,46,8,-1,7,6,48,-1,48,47,7,-1,6,20,49,-1,49,48,6,-1,20,17,50,-1,50,49,20,-1,17,23,51,-1,51,50,17,-1,23,25,52,-1,52,51,23,-1,25,22,53,-1,53,52,25,-1,22,16,54,-1,54,53,22,-1,16,13,55,-1,55,54,16,-1,13,12,42,-1,42,55,13,-1});
  }
}
protected class MFInt32412 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,9,-1,9,0,1,-1,11,13,8,-1,8,5,11,-1,9,10,3,-1,3,0,9,-1,4,6,16,-1,16,12,4,-1,6,7,17,-1,17,16,6,-1,7,3,10,-1,10,17,7,-1,14,1,2,-1,2,15,14,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,51,52,53,-1,53,54,55,-1,55,56,57,-1,53,55,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,53,57,61,-1,61,62,63,-1,53,61,63,-1,51,53,63,-1,51,63,50,-1,12,16,37,-1,37,36,12,-1,16,17,38,-1,38,37,16,-1,17,10,39,-1,39,38,17,-1,10,9,40,-1,40,39,10,-1,9,14,41,-1,41,40,9,-1,14,15,42,-1,42,41,14,-1,35,19,43,-1,43,42,35,-1,19,20,44,-1,44,43,19,-1,20,26,45,-1,45,44,20,-1,26,33,46,-1,46,45,26,-1,33,31,47,-1,47,46,33,-1,31,28,48,-1,48,47,31,-1,23,24,49,-1,49,48,23,-1,13,11,36,-1,36,49,13,-1,2,1,51,-1,51,50,2,-1,1,0,52,-1,52,51,1,-1,0,3,53,-1,53,52,0,-1,3,7,54,-1,54,53,3,-1,7,6,55,-1,55,54,7,-1,6,4,56,-1,56,55,6,-1,5,8,57,-1,57,56,5,-1,25,22,58,-1,58,57,25,-1,29,30,59,-1,59,58,29,-1,30,32,60,-1,60,59,30,-1,32,27,61,-1,61,60,32,-1,27,21,62,-1,62,61,27,-1,21,18,63,-1,63,62,21,-1,18,34,50,-1,50,63,18,-1});
  }
}
protected class MFVec3f413 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {65.2222f,-188.5289f,177.6667f,178.8667f,-188.5289f,-65.7111f,233.8889f,-188.5289f,-14.6756f,187.8f,-157.7067f,193.8889f,67.9778f,-157.7067f,185.6667f,271.3556f,-156.3333f,78.6889f,87.9333f,-156.3333f,-94.5556f,185.7556f,-156.3333f,-69.8889f,241.4889f,-156.3333f,-19.3822f,182.5111f,-188.5289f,179.8444f,259.1778f,-188.5289f,78.2f,81.6222f,-188.5289f,-93.0444f,-0.3778f,-157.7067f,185.6667f,-68.7333f,-157.7067f,185.6667f,-65.9778f,-188.5289f,177.6667f,-183.2667f,-188.5289f,179.8444f,-188.5556f,-157.7067f,193.8889f,-88.6889f,-156.3333f,-94.5556f,-82.3778f,-188.5289f,-93.0444f,-0.3778f,-188.5289f,-94.0222f,-0.3778f,-156.3333f,-95.8889f,-259.9333f,-188.5289f,78.2f,-272.1111f,-156.3333f,78.6889f,-186.5111f,-156.3333f,-69.8889f,-179.6222f,-188.5289f,-65.7111f,-242.2444f,-156.3333f,-19.3822f,-234.6444f,-188.5289f,-14.6756f,-0.3778f,-188.5289f,177.6667f,80.5111f,-201.8356f,-85.1333f,174.8667f,-201.8356f,-58.6444f,226.8667f,-201.8356f,-10.4089f,250.5556f,-201.8356f,76.5111f,178.6f,-201.8356f,171.8889f,65.3111f,-201.8356f,169.7556f,-0.3778f,-201.8356f,169.7556f,-66.0667f,-201.8356f,169.7556f,-179.3556f,-201.8356f,171.8889f,-251.3111f,-201.8356f,76.5111f,-227.6222f,-201.8356f,-10.4089f,-175.6222f,-201.8356f,-58.6444f,-81.2667f,-201.8356f,-85.1333f,-0.3778f,-201.8356f,-86.1111f,-0.3778f,-142.4889f,177.7556f,68.2444f,-142.4889f,177.7111f,183.9778f,-142.4889f,185.6667f,262.6f,-142.4889f,77.2222f,234.5556f,-142.4889f,-14.9867f,181.9333f,-142.4889f,-62.6889f,86.8667f,-142.4889f,-86.6444f,-0.3778f,-142.4889f,-87.9778f,-87.6222f,-142.4889f,-86.6444f,-182.6889f,-142.4889f,-62.6889f,-235.3111f,-142.4889f,-14.9867f,-263.3556f,-142.4889f,77.2222f,-184.7333f,-142.4889f,185.6667f,-69f,-142.4889f,177.7111f});
  }
}
protected class MFVec2f414 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0908f,0.3999f,0.0325f,0.3879f,0.0306f,0.3835f,0.1568f,0.3845f,0.3535f,0.3812f,0.3589f,0.3783f,0.2214f,0.3832f,0.1952f,0.3809f,0.3561f,0.3769f,0.0802f,0.3883f,0.1575f,0.3746f,0.3637f,0.3704f,0.356f,0.3713f,0.3581f,0.3683f,0.0256f,0.3731f,0.0261f,0.363f,0.2218f,0.3729f,0.1941f,0.3712f,0.0325f,0.3879f,0.0256f,0.3731f,0.0802f,0.3883f,0.0908f,0.3999f,0.3589f,0.3783f,0.3637f,0.3704f,0.3581f,0.3683f,0.3561f,0.3769f,0.1575f,0.3746f,0.1568f,0.3845f,0.356f,0.3713f,0.3535f,0.3812f,0.2214f,0.3832f,0.2218f,0.3729f,0.1952f,0.3809f,0.1941f,0.3712f,0.0306f,0.3835f,0.0261f,0.363f,0.3637f,0.3704f,0.2218f,0.3729f,0.1941f,0.3712f,0.1575f,0.3746f,0.0802f,0.3883f,0.0256f,0.3731f,0.0261f,0.363f,0.0256f,0.3731f,0.0802f,0.3883f,0.1575f,0.3746f,0.1941f,0.3712f,0.2218f,0.3729f,0.356f,0.3713f,0.3581f,0.3683f,0.0306f,0.3835f,0.0325f,0.3879f,0.0908f,0.3999f,0.1568f,0.3845f,0.1952f,0.3809f,0.2214f,0.3832f,0.3535f,0.3812f,0.3561f,0.3769f,0.3589f,0.3783f,0.2214f,0.3832f,0.1952f,0.3809f,0.1568f,0.3845f,0.0908f,0.3999f,0.0325f,0.3879f});
  }
}
protected class MFFloat415 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat416 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32417 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,6,-1,6,8,0,-1,9,18,19,-1,19,1,9,-1,7,5,22,-1,22,23,7,-1,1,3,10,-1,10,9,1,-1,3,4,11,-1,11,10,3,-1,4,0,8,-1,8,11,4,-1,5,7,6,-1,6,2,5,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,20,23,22,-1,22,21,20,-1,16,17,25,-1,25,24,16,-1,24,25,27,-1,27,26,24,-1,26,27,12,-1,12,13,26,-1,21,14,15,-1,15,20,21,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,54,55,42,-1,46,54,42,-1,44,46,42,-1,43,44,42,-1,1,19,29,-1,29,28,1,-1,19,16,30,-1,30,29,19,-1,16,24,31,-1,31,30,16,-1,24,26,32,-1,32,31,24,-1,26,13,33,-1,33,32,26,-1,13,14,34,-1,34,33,13,-1,14,21,35,-1,35,34,14,-1,21,22,36,-1,36,35,21,-1,22,5,37,-1,37,36,22,-1,5,2,38,-1,38,37,5,-1,2,0,39,-1,39,38,2,-1,0,4,40,-1,40,39,0,-1,4,3,41,-1,41,40,4,-1,3,1,28,-1,28,41,3,-1,7,23,43,-1,43,42,7,-1,23,20,44,-1,44,43,23,-1,20,15,45,-1,45,44,20,-1,15,12,46,-1,46,45,15,-1,12,27,47,-1,47,46,12,-1,27,25,48,-1,48,47,27,-1,25,17,49,-1,49,48,25,-1,17,18,50,-1,50,49,17,-1,18,9,51,-1,51,50,18,-1,9,10,52,-1,52,51,9,-1,10,11,53,-1,53,52,10,-1,11,8,54,-1,54,53,11,-1,8,6,55,-1,55,54,8,-1,6,7,42,-1,42,55,6,-1});
  }
}
protected class MFInt32418 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,8,9,-1,9,11,3,-1,13,16,6,-1,6,5,13,-1,10,0,7,-1,7,17,10,-1,2,1,14,-1,14,12,2,-1,1,4,15,-1,15,14,1,-1,4,3,11,-1,11,15,4,-1,0,10,9,-1,9,8,0,-1,19,18,21,-1,21,20,19,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,31,30,33,-1,33,32,31,-1,32,33,35,-1,35,34,32,-1,34,35,18,-1,18,19,34,-1,27,20,21,-1,21,26,27,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,62,63,50,-1,54,62,50,-1,52,54,50,-1,51,52,50,-1,5,6,37,-1,37,36,5,-1,25,22,38,-1,38,37,25,-1,31,32,39,-1,39,38,31,-1,32,34,40,-1,40,39,32,-1,34,19,41,-1,41,40,34,-1,19,20,42,-1,42,41,19,-1,20,27,43,-1,43,42,20,-1,27,28,44,-1,44,43,27,-1,7,0,45,-1,45,44,7,-1,0,8,46,-1,46,45,0,-1,8,3,47,-1,47,46,8,-1,3,4,48,-1,48,47,3,-1,4,1,49,-1,49,48,4,-1,1,2,36,-1,36,49,1,-1,10,17,51,-1,51,50,10,-1,29,26,52,-1,52,51,29,-1,26,21,53,-1,53,52,26,-1,21,18,54,-1,54,53,21,-1,18,35,55,-1,55,54,18,-1,35,33,56,-1,56,55,35,-1,33,30,57,-1,57,56,33,-1,23,24,58,-1,58,57,23,-1,16,13,59,-1,59,58,16,-1,12,14,60,-1,60,59,12,-1,14,15,61,-1,61,60,14,-1,15,11,62,-1,62,61,15,-1,11,9,63,-1,63,62,11,-1,9,10,50,-1,50,63,9,-1});
  }
}
protected class MFVec3f419 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {278.9556f,-162.6711f,79.2667f,91.2667f,-162.6711f,-95.7111f,181.8889f,-162.6711f,186.3778f,190.2889f,-162.6711f,-72.9111f,247.2667f,-162.6711f,-21.6489f,70.0667f,-162.6711f,190.5111f,187.8f,-188.5067f,193.8889f,67.9778f,-188.5067f,185.6667f,271.3556f,-187.1333f,78.6889f,87.9333f,-187.1333f,-94.5556f,185.7556f,-187.1333f,-69.8889f,241.4889f,-187.1333f,-19.3822f,-272.1111f,-187.1333f,78.6889f,-279.7111f,-162.6711f,79.2667f,-182.6444f,-162.6711f,186.3778f,-188.5556f,-188.5067f,193.8889f,-92.0222f,-162.6711f,-95.7111f,-88.6889f,-187.1333f,-94.5556f,-0.3778f,-187.1333f,-95.8889f,-0.3778f,-162.6711f,-97.8f,-68.7333f,-188.5067f,185.6667f,-70.8222f,-162.6711f,190.5111f,-0.3778f,-162.6711f,190.6889f,-0.3778f,-188.5067f,185.6667f,-191.0444f,-162.6711f,-72.9111f,-186.5111f,-187.1333f,-69.8889f,-248.0222f,-162.6711f,-21.6489f,-242.2444f,-187.1333f,-19.3822f,90.0667f,-147.3822f,-86.2889f,-0.3778f,-147.3822f,-88.3778f,-90.8222f,-147.3822f,-86.2889f,-186.5556f,-147.3822f,-64.2889f,-239.8f,-147.3822f,-16.36f,-269.0889f,-147.3822f,76.9556f,-178.3333f,-147.3822f,177.0889f,-70.6444f,-147.3822f,181.0444f,-0.3778f,-147.3822f,181.2667f,69.8889f,-147.3822f,181.0444f,177.5778f,-147.3822f,177.0889f,268.3333f,-147.3822f,76.9556f,239.0444f,-147.3822f,-16.36f,185.8f,-147.3822f,-64.2889f,67.3556f,-204.9333f,172.7333f,-0.3778f,-204.9333f,172.7333f,-68.1111f,-204.9333f,172.7333f,-181.4444f,-204.9333f,180.3778f,-258.0667f,-204.9333f,76.1111f,-230.7333f,-204.9333f,-12.5289f,-179.4444f,-204.9333f,-58.4222f,-86.2f,-204.9333f,-81.6222f,-0.3778f,-204.9333f,-82.9111f,85.4444f,-204.9333f,-81.6222f,178.6889f,-204.9333f,-58.4222f,229.9778f,-204.9333f,-12.5289f,257.3111f,-204.9333f,76.1111f,180.6889f,-204.9333f,180.3778f});
  }
}
protected class MFVec2f420 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0437f,0.4075f,0.2185f,0.3912f,0.3484f,0.3944f,0.1518f,0.3905f,0.1902f,0.3894f,0.3503f,0.3879f,0.3505f,0.3886f,0.0427f,0.408f,0.0961f,0.4138f,0.0908f,0.3999f,0.0325f,0.3879f,0.1568f,0.3845f,0.3535f,0.3812f,0.3589f,0.3783f,0.2214f,0.3832f,0.1952f,0.3809f,0.3561f,0.3769f,0.0306f,0.3835f,0.1568f,0.3845f,0.1518f,0.3905f,0.0961f,0.4138f,0.0908f,0.3999f,0.3503f,0.3879f,0.3589f,0.3783f,0.3561f,0.3769f,0.3505f,0.3886f,0.0325f,0.3879f,0.0437f,0.4075f,0.0427f,0.408f,0.0306f,0.3835f,0.3535f,0.3812f,0.3484f,0.3944f,0.2185f,0.3912f,0.2214f,0.3832f,0.1902f,0.3894f,0.1952f,0.3809f,0.3484f,0.3944f,0.3505f,0.3886f,0.3503f,0.3879f,0.2185f,0.3912f,0.1902f,0.3894f,0.1518f,0.3905f,0.0961f,0.4138f,0.0437f,0.4075f,0.0427f,0.408f,0.0437f,0.4075f,0.0961f,0.4138f,0.1518f,0.3905f,0.1902f,0.3894f,0.2185f,0.3912f,0.0325f,0.3879f,0.0306f,0.3835f,0.0325f,0.3879f,0.0908f,0.3999f,0.1568f,0.3845f,0.1952f,0.3809f,0.2214f,0.3832f,0.3535f,0.3812f,0.3561f,0.3769f,0.3589f,0.3783f,0.2214f,0.3832f,0.1952f,0.3809f,0.1568f,0.3845f,0.0908f,0.3999f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,9,5,-1,5,3,12,-1,2,1,6,-1,6,11,2,-1,0,7,23,-1,23,24,0,-1,25,8,12,-1,12,3,25,-1,9,6,1,-1,1,5,9,-1,11,10,4,-1,4,2,11,-1,4,10,7,-1,7,0,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,24,23,-1,23,22,21,-1,25,16,13,-1,13,8,25,-1,14,15,19,-1,19,20,14,-1,17,18,27,-1,27,26,17,-1,27,21,22,-1,22,26,27,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,5,29,-1,29,28,3,-1,5,1,30,-1,30,29,5,-1,1,2,31,-1,31,30,1,-1,2,4,32,-1,32,31,2,-1,4,0,33,-1,33,32,4,-1,0,24,34,-1,34,33,0,-1,24,21,35,-1,35,34,24,-1,21,27,36,-1,36,35,21,-1,27,18,37,-1,37,36,27,-1,18,19,38,-1,38,37,18,-1,19,15,39,-1,39,38,19,-1,15,16,40,-1,40,39,15,-1,16,25,41,-1,41,40,16,-1,25,3,28,-1,28,41,25,-1,23,7,43,-1,43,42,23,-1,7,10,44,-1,44,43,7,-1,10,11,45,-1,45,44,10,-1,11,6,46,-1,46,45,11,-1,6,9,47,-1,47,46,6,-1,9,12,48,-1,48,47,9,-1,12,8,49,-1,49,48,12,-1,8,13,50,-1,50,49,8,-1,13,14,51,-1,51,50,13,-1,14,20,52,-1,52,51,14,-1,20,17,53,-1,53,52,20,-1,17,26,54,-1,54,53,17,-1,26,22,55,-1,55,54,26,-1,22,23,42,-1,42,55,22,-1});
  }
}
protected class MFInt32424 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,13,8,-1,8,4,17,-1,3,2,9,-1,9,16,3,-1,1,10,14,-1,14,5,1,-1,6,12,17,-1,17,4,6,-1,13,9,2,-1,2,8,13,-1,16,15,7,-1,7,3,16,-1,7,15,11,-1,11,0,7,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,30,21,18,-1,18,31,30,-1,19,20,24,-1,24,25,19,-1,22,23,33,-1,33,32,22,-1,33,35,34,-1,34,32,33,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,4,8,37,-1,37,36,4,-1,8,2,38,-1,38,37,8,-1,2,3,39,-1,39,38,2,-1,3,7,40,-1,40,39,3,-1,7,0,41,-1,41,40,7,-1,1,5,42,-1,42,41,1,-1,29,26,43,-1,43,42,29,-1,35,33,44,-1,44,43,35,-1,33,23,45,-1,45,44,33,-1,23,24,46,-1,46,45,23,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,21,30,49,-1,49,48,21,-1,6,4,36,-1,36,49,6,-1,14,10,51,-1,51,50,14,-1,11,15,52,-1,52,51,11,-1,15,16,53,-1,53,52,15,-1,16,9,54,-1,54,53,16,-1,9,13,55,-1,55,54,9,-1,13,17,56,-1,56,55,13,-1,17,12,57,-1,57,56,17,-1,31,18,58,-1,58,57,31,-1,18,19,59,-1,59,58,18,-1,19,25,60,-1,60,59,19,-1,25,22,61,-1,61,60,25,-1,22,32,62,-1,62,61,22,-1,32,34,63,-1,63,62,32,-1,27,28,50,-1,50,63,27,-1});
  }
}
protected class MFVec3f425 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {85.7111f,-157.8844f,-96.8667f,274.8222f,-157.88f,81.7111f,254.6444f,-157.88f,-13.1956f,71.4f,-157.88f,186.3778f,189.5333f,-157.88f,-75.7556f,174.9556f,-157.88f,177.5333f,278.9556f,-188.3511f,79.2667f,91.2667f,-188.3511f,-95.7111f,-0.3778f,-188.3511f,190.6889f,181.8889f,-188.3511f,186.3778f,190.2889f,-188.3511f,-72.9111f,247.2667f,-188.3511f,-21.6489f,70.0667f,-188.3511f,190.5111f,-70.8222f,-188.3511f,190.5111f,-182.6444f,-188.3511f,186.3778f,-175.7111f,-157.88f,177.5333f,-72.1556f,-157.88f,186.3778f,-248.0222f,-188.3511f,-21.6489f,-255.4f,-157.88f,-13.1956f,-275.5778f,-157.88f,81.7111f,-279.7111f,-188.3511f,79.2667f,-86.4667f,-157.8844f,-96.8667f,-92.0222f,-188.3511f,-95.7111f,-0.3778f,-188.3511f,-97.8f,-0.3778f,-157.8844f,-100.9111f,-0.3778f,-157.88f,187.5778f,-191.0444f,-188.3511f,-72.9111f,-190.2889f,-157.88f,-75.7556f,70.8667f,-142.6222f,175.7111f,170.2889f,-142.6222f,167.2222f,263.1333f,-142.6222f,78.1111f,244.8667f,-142.6222f,-7.7689f,184.3778f,-142.6222f,-65.8889f,84.3778f,-142.6222f,-86.2444f,-0.3778f,-142.6222f,-90.2f,-85.1333f,-142.6222f,-86.2444f,-185.1333f,-142.6222f,-65.8889f,-245.6222f,-142.6222f,-7.7689f,-263.8889f,-142.6222f,78.1111f,-171.0444f,-142.6222f,167.2222f,-71.6222f,-142.6222f,175.7111f,-0.3778f,-142.6222f,176.9111f,-0.3778f,-198.8133f,-87.1333f,89.9333f,-198.8133f,-85.0444f,185.2222f,-198.8133f,-63.1333f,237.9333f,-198.8133f,-15.6578f,266.9556f,-198.8133f,76.6444f,177f,-198.8133f,175.8444f,69.8889f,-198.8133f,179.8f,-0.3778f,-198.8133f,180.0222f,-70.6444f,-198.8133f,179.8f,-177.7556f,-198.8133f,175.8444f,-267.7111f,-198.8133f,76.6444f,-238.6889f,-198.8133f,-15.6578f,-185.9778f,-198.8133f,-63.1333f,-90.6889f,-198.8133f,-85.0444f});
  }
}
protected class MFVec2f426 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3061f,0.4256f,0.3364f,0.4029f,0.1528f,0.4078f,0.1843f,0.4071f,0.055f,0.4216f,0.3325f,0.4068f,0.0482f,0.4185f,0.221f,0.4256f,0.1008f,0.4259f,0.1518f,0.3905f,0.3506f,0.3865f,0.3484f,0.3944f,0.0427f,0.408f,0.0961f,0.4138f,0.3437f,0.3934f,0.2185f,0.3912f,0.1902f,0.3894f,0.0437f,0.4075f,0.0437f,0.4075f,0.0961f,0.4138f,0.1008f,0.4259f,0.055f,0.4216f,0.1902f,0.3894f,0.1843f,0.4071f,0.1528f,0.4078f,0.1518f,0.3905f,0.3364f,0.4029f,0.3506f,0.3865f,0.3437f,0.3934f,0.3325f,0.4068f,0.0482f,0.4185f,0.0427f,0.408f,0.2185f,0.3912f,0.221f,0.4256f,0.3484f,0.3944f,0.3061f,0.4256f,0.055f,0.4216f,0.1008f,0.4259f,0.1528f,0.4078f,0.1843f,0.4071f,0.221f,0.4256f,0.3061f,0.4256f,0.3325f,0.4068f,0.3364f,0.4029f,0.221f,0.4256f,0.1843f,0.4071f,0.1528f,0.4078f,0.1008f,0.4259f,0.055f,0.4216f,0.0482f,0.4185f,0.3437f,0.3934f,0.3506f,0.3865f,0.2185f,0.3912f,0.1902f,0.3894f,0.1518f,0.3905f,0.0961f,0.4138f,0.0437f,0.4075f,0.0427f,0.408f,0.0437f,0.4075f,0.0961f,0.4138f,0.1518f,0.3905f,0.1902f,0.3894f,0.2185f,0.3912f,0.3484f,0.3944f});
  }
}
protected class MFFloat427 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat428 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32429 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,6,16,-1,16,13,0,-1,17,10,9,-1,9,3,17,-1,12,7,5,-1,5,2,12,-1,8,11,4,-1,4,1,8,-1,4,11,6,-1,6,0,4,-1,2,3,9,-1,9,12,2,-1,1,5,7,-1,7,8,1,-1,14,13,16,-1,16,15,14,-1,17,19,18,-1,18,10,17,-1,21,20,23,-1,23,22,21,-1,25,24,27,-1,27,26,25,-1,27,14,15,-1,15,26,27,-1,20,21,18,-1,18,19,20,-1,24,25,22,-1,22,23,24,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,2,29,-1,29,28,3,-1,2,5,30,-1,30,29,2,-1,5,1,31,-1,31,30,5,-1,1,4,32,-1,32,31,1,-1,4,0,33,-1,33,32,4,-1,0,13,34,-1,34,33,0,-1,13,14,35,-1,35,34,13,-1,14,27,36,-1,36,35,14,-1,27,24,37,-1,37,36,27,-1,24,23,38,-1,38,37,24,-1,23,20,39,-1,39,38,23,-1,20,19,40,-1,40,39,20,-1,19,17,41,-1,41,40,19,-1,17,3,28,-1,28,41,17,-1,12,9,43,-1,43,42,12,-1,9,10,44,-1,44,43,9,-1,10,18,45,-1,45,44,10,-1,18,21,46,-1,46,45,18,-1,21,22,47,-1,47,46,21,-1,22,25,48,-1,48,47,22,-1,25,26,49,-1,49,48,25,-1,26,15,50,-1,50,49,26,-1,15,16,51,-1,51,50,15,-1,16,6,52,-1,52,51,16,-1,6,11,53,-1,53,52,6,-1,11,8,54,-1,54,53,11,-1,8,7,55,-1,55,54,8,-1,7,12,42,-1,42,55,7,-1});
  }
}
protected class MFInt32430 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,10,14,-1,14,2,5,-1,8,15,13,-1,13,7,8,-1,17,11,3,-1,3,6,17,-1,12,16,0,-1,0,4,12,-1,0,16,9,-1,9,1,0,-1,6,7,13,-1,13,17,6,-1,4,3,11,-1,11,12,4,-1,19,18,21,-1,21,20,19,-1,22,25,24,-1,24,23,22,-1,27,26,29,-1,29,28,27,-1,31,30,33,-1,33,32,31,-1,33,35,34,-1,34,32,33,-1,26,27,24,-1,24,25,26,-1,30,31,28,-1,28,29,30,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,7,6,37,-1,37,36,7,-1,6,3,38,-1,38,37,6,-1,3,4,39,-1,39,38,3,-1,4,0,40,-1,40,39,4,-1,0,1,41,-1,41,40,0,-1,5,2,42,-1,42,41,5,-1,18,19,43,-1,43,42,18,-1,35,33,44,-1,44,43,35,-1,33,30,45,-1,45,44,33,-1,30,29,46,-1,46,45,30,-1,29,26,47,-1,47,46,29,-1,26,25,48,-1,48,47,26,-1,25,22,49,-1,49,48,25,-1,8,7,36,-1,36,49,8,-1,17,13,51,-1,51,50,17,-1,13,15,52,-1,52,51,13,-1,23,24,53,-1,53,52,23,-1,24,27,54,-1,54,53,24,-1,27,28,55,-1,55,54,27,-1,28,31,56,-1,56,55,28,-1,31,32,57,-1,57,56,31,-1,32,34,58,-1,58,57,32,-1,20,21,59,-1,59,58,20,-1,14,10,60,-1,60,59,14,-1,9,16,61,-1,61,60,9,-1,16,12,62,-1,62,61,16,-1,12,11,63,-1,63,62,12,-1,11,17,50,-1,50,63,11,-1});
  }
}
protected class MFVec3f431 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {80.1111f,-158.0667f,-98.0222f,261.9778f,-158.0622f,-4.7467f,167.9778f,-158.0622f,168.6889f,72.7778f,-158.0622f,182.2889f,188.7778f,-158.0622f,-78.6f,270.6444f,-158.0622f,84.1556f,85.7111f,-188.5333f,-96.8667f,274.8222f,-188.5289f,81.7111f,254.6444f,-188.5289f,-13.1956f,71.4f,-188.5289f,186.3778f,-0.3778f,-188.5289f,187.5778f,189.5333f,-188.5289f,-75.7556f,174.9556f,-188.5289f,177.5333f,-0.3778f,-158.0667f,-103.9778f,-80.8667f,-158.0667f,-98.0222f,-86.4667f,-188.5333f,-96.8667f,-0.3778f,-188.5333f,-100.9111f,-0.3778f,-158.0622f,184.5111f,-72.1556f,-188.5289f,186.3778f,-73.5333f,-158.0622f,182.2889f,-168.7333f,-158.0622f,168.6889f,-175.7111f,-188.5289f,177.5333f,-275.5778f,-188.5289f,81.7111f,-271.4f,-158.0622f,84.1556f,-262.7333f,-158.0622f,-4.7467f,-255.4f,-188.5289f,-13.1956f,-190.2889f,-188.5289f,-75.7556f,-189.5333f,-158.0622f,-78.6f,71.6667f,-141.7778f,169.7556f,162.7333f,-141.7778f,156.7333f,257.4889f,-141.7778f,78.6889f,249.8889f,-141.7778f,0.9244f,182.6444f,-141.7778f,-66.9111f,78.5556f,-141.7778f,-85.5333f,-0.3778f,-141.7778f,-91.3556f,-79.3111f,-141.7778f,-85.5333f,-183.4f,-141.7778f,-66.9111f,-250.6444f,-141.7778f,0.9244f,-258.2444f,-141.7778f,78.6889f,-163.4889f,-141.7778f,156.7333f,-72.4222f,-141.7778f,169.7556f,-0.3778f,-141.7778f,171.9333f,169.4444f,-203.4044f,165.3556f,70.7778f,-203.4044f,173.8444f,-0.3778f,-203.4044f,175.0444f,-71.5333f,-203.4044f,173.8444f,-170.2f,-203.4044f,165.3556f,-261.8f,-203.4044f,77.4889f,-243.8889f,-203.4044f,-6.8089f,-184.2f,-203.4044f,-64.1556f,-84.9111f,-203.4089f,-84.3778f,-0.3778f,-203.4089f,-88.2889f,84.1556f,-203.4089f,-84.3778f,183.4444f,-203.4044f,-64.1556f,243.1333f,-203.4044f,-6.8089f,261.0444f,-203.4044f,77.4889f});
  }
}
protected class MFVec2f432 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2236f,0.46f,0.2638f,0.4568f,0.3214f,0.4203f,0.1538f,0.4251f,0.1784f,0.4249f,0.3223f,0.4192f,0.1055f,0.438f,0.0663f,0.4356f,0.0537f,0.4289f,0.3061f,0.4256f,0.3364f,0.4029f,0.1528f,0.4078f,0.1843f,0.4071f,0.055f,0.4216f,0.3325f,0.4068f,0.0482f,0.4185f,0.221f,0.4256f,0.1008f,0.4259f,0.3214f,0.4203f,0.3223f,0.4192f,0.3364f,0.4029f,0.3325f,0.4068f,0.0537f,0.4289f,0.0482f,0.4185f,0.055f,0.4216f,0.0663f,0.4356f,0.1055f,0.438f,0.1008f,0.4259f,0.1528f,0.4078f,0.1538f,0.4251f,0.1784f,0.4249f,0.1843f,0.4071f,0.221f,0.4256f,0.2236f,0.46f,0.3061f,0.4256f,0.2638f,0.4568f,0.0663f,0.4356f,0.1055f,0.438f,0.1538f,0.4251f,0.1784f,0.4249f,0.2236f,0.46f,0.2638f,0.4568f,0.3214f,0.4203f,0.3223f,0.4192f,0.2236f,0.46f,0.1784f,0.4249f,0.1538f,0.4251f,0.1055f,0.438f,0.0663f,0.4356f,0.0537f,0.4289f,0.1008f,0.4259f,0.055f,0.4216f,0.0482f,0.4185f,0.055f,0.4216f,0.1008f,0.4259f,0.1528f,0.4078f,0.1843f,0.4071f,0.221f,0.4256f,0.3061f,0.4256f,0.3325f,0.4068f,0.3364f,0.4029f,0.221f,0.4256f,0.1843f,0.4071f,0.1528f,0.4078f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,9,-1,9,12,2,-1,3,0,10,-1,10,9,3,-1,7,20,21,-1,21,4,7,-1,11,7,4,-1,4,5,11,-1,25,26,10,-1,10,0,25,-1,6,11,5,-1,11,6,1,-1,1,8,11,-1,2,12,8,-1,8,1,2,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,25,17,18,-1,18,26,25,-1,27,24,23,-1,23,29,28,-1,28,27,23,-1,14,28,29,-1,29,13,14,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,31,34,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,31,38,42,-1,42,43,44,-1,31,42,44,-1,31,44,45,-1,31,45,30,-1,48,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,46,-1,54,58,46,-1,50,54,46,-1,48,50,46,-1,47,48,46,-1,3,2,31,-1,31,30,3,-1,2,1,32,-1,32,31,2,-1,1,6,33,-1,33,32,1,-1,6,5,34,-1,34,33,6,-1,5,4,35,-1,35,34,5,-1,4,21,36,-1,36,35,4,-1,21,22,37,-1,37,36,21,-1,22,24,38,-1,38,37,22,-1,24,27,39,-1,39,38,24,-1,27,28,40,-1,40,39,27,-1,28,14,41,-1,41,40,28,-1,14,15,42,-1,42,41,14,-1,15,17,43,-1,43,42,15,-1,17,25,44,-1,44,43,17,-1,25,0,45,-1,45,44,25,-1,0,3,30,-1,30,45,0,-1,9,10,47,-1,47,46,9,-1,10,26,48,-1,48,47,10,-1,26,18,49,-1,49,48,26,-1,18,16,50,-1,50,49,18,-1,16,13,51,-1,51,50,16,-1,13,29,52,-1,52,51,13,-1,29,23,53,-1,53,52,29,-1,23,19,54,-1,54,53,23,-1,19,20,55,-1,55,54,19,-1,20,7,56,-1,56,55,20,-1,7,11,57,-1,57,56,7,-1,11,8,58,-1,58,57,11,-1,8,12,59,-1,59,58,8,-1,12,9,46,-1,46,59,12,-1});
  }
}
protected class MFInt32436 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,14,-1,14,18,3,-1,4,1,15,-1,15,14,4,-1,10,17,7,-1,7,6,10,-1,16,11,5,-1,5,8,16,-1,0,19,15,-1,15,1,0,-1,9,16,8,-1,16,9,2,-1,2,12,16,-1,3,18,13,-1,13,2,3,-1,21,20,23,-1,23,22,21,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,30,33,32,-1,32,31,30,-1,34,24,25,-1,25,35,34,-1,36,33,30,-1,30,38,37,-1,37,36,30,-1,21,37,39,-1,39,20,21,-1,41,42,43,-1,41,43,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,41,48,52,-1,52,53,54,-1,41,52,54,-1,41,54,55,-1,41,55,40,-1,58,59,60,-1,60,61,62,-1,62,63,64,-1,60,62,64,-1,64,65,66,-1,66,67,68,-1,64,66,68,-1,68,69,56,-1,64,68,56,-1,60,64,56,-1,58,60,56,-1,57,58,56,-1,4,3,41,-1,41,40,4,-1,3,2,42,-1,42,41,3,-1,2,9,43,-1,43,42,2,-1,9,8,44,-1,44,43,9,-1,8,5,45,-1,45,44,8,-1,6,7,46,-1,46,45,6,-1,28,29,47,-1,47,46,28,-1,32,33,48,-1,48,47,32,-1,33,36,49,-1,49,48,33,-1,36,37,50,-1,50,49,36,-1,37,21,51,-1,51,50,37,-1,21,22,52,-1,52,51,21,-1,22,24,53,-1,53,52,22,-1,24,34,54,-1,54,53,24,-1,0,1,55,-1,55,54,0,-1,1,4,40,-1,40,55,1,-1,14,15,57,-1,57,56,14,-1,15,19,58,-1,58,57,15,-1,35,25,59,-1,59,58,35,-1,25,23,60,-1,60,59,25,-1,23,20,61,-1,61,60,23,-1,20,39,62,-1,62,61,20,-1,38,30,63,-1,63,62,38,-1,30,31,64,-1,64,63,30,-1,26,27,65,-1,65,64,26,-1,17,10,66,-1,66,65,17,-1,11,16,67,-1,67,66,11,-1,16,12,68,-1,68,67,16,-1,13,18,69,-1,69,68,13,-1,18,14,56,-1,56,69,18,-1});
  }
}
protected class MFVec3f437 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {74.3333f,-152f,177.4444f,256.2889f,-150.8f,-19.5467f,258.5111f,-153.4489f,88.2444f,158.9556f,-148.4356f,157.2222f,80.1111f,-150.8f,-90.6889f,190.0222f,-150.8f,-73.0444f,204.8222f,-150.8f,-71.4444f,80.1111f,-187.9644f,-98.0222f,261.9778f,-187.96f,-4.7467f,167.9778f,-187.96f,168.6889f,72.7778f,-187.96f,182.2889f,188.7778f,-187.96f,-78.6f,270.6444f,-187.96f,84.1556f,-271.4f,-187.96f,84.1556f,-259.2667f,-153.4489f,88.2444f,-159.7111f,-148.4356f,157.2222f,-168.7333f,-187.96f,168.6889f,-75.0889f,-152f,177.4444f,-73.5333f,-187.96f,182.2889f,-80.8667f,-187.9644f,-98.0222f,-0.3778f,-187.9644f,-103.9778f,-0.3778f,-150.8f,-96.6444f,-80.8667f,-150.8f,-90.6889f,-189.5333f,-187.96f,-78.6f,-190.7778f,-150.8f,-73.0444f,-0.3778f,-152f,181.3556f,-0.3778f,-187.96f,184.5111f,-205.5778f,-150.8f,-71.4444f,-257.0444f,-150.8f,-19.5467f,-262.7333f,-187.96f,-4.7467f,153.4444f,-127.4222f,144.8667f,245.0889f,-127.4222f,81.4f,243.1333f,-127.4222f,-13.9689f,198.7333f,-127.4222f,-58.7778f,188.2444f,-127.4222f,-59.8889f,78.5556f,-127.4222f,-77.5333f,-0.3778f,-127.4222f,-83.3556f,-79.3111f,-127.4222f,-77.5333f,-189f,-127.4222f,-59.8889f,-199.4889f,-127.4222f,-58.7778f,-243.8889f,-127.4222f,-13.9689f,-245.8444f,-127.4222f,81.4f,-154.2f,-127.4222f,144.8667f,-73.1778f,-127.4222f,164.2444f,-0.3778f,-127.4222f,168.0667f,72.4222f,-127.4222f,164.2444f,162.4222f,-202.8533f,156.0667f,71.6222f,-202.8533f,169.0444f,-0.3778f,-202.8533f,171.2222f,-72.3778f,-202.8533f,169.0444f,-163.1778f,-202.8533f,156.0667f,-257.5333f,-202.8533f,78.3778f,-249.9778f,-202.8533f,1.24f,-183.0889f,-202.8533f,-66.2444f,-79.2222f,-202.8533f,-84.8222f,-0.3778f,-202.8533f,-90.6889f,78.4667f,-202.8533f,-84.8222f,182.3333f,-202.8533f,-66.2444f,249.2222f,-202.8533f,1.24f,256.7778f,-202.8533f,78.3778f});
  }
}
protected class MFVec2f438 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0639f,0.4488f,0.0777f,0.4495f,0.1846f,0.4438f,0.1504f,0.4433f,0.1107f,0.4532f,0.2633f,0.457f,0.3222f,0.4193f,0.3214f,0.4203f,0.2198f,0.4731f,0.2144f,0.4674f,0.3223f,0.4192f,0.2638f,0.4568f,0.1784f,0.4249f,0.1784f,0.4249f,0.1055f,0.438f,0.0663f,0.4356f,0.2236f,0.46f,0.3214f,0.4203f,0.1538f,0.4251f,0.0537f,0.4289f,0.1538f,0.4251f,0.1504f,0.4433f,0.1107f,0.4532f,0.1055f,0.438f,0.0777f,0.4495f,0.0663f,0.4356f,0.3223f,0.4192f,0.3214f,0.4203f,0.3214f,0.4203f,0.3222f,0.4193f,0.2236f,0.46f,0.2638f,0.4568f,0.2633f,0.457f,0.2198f,0.4731f,0.0639f,0.4488f,0.0537f,0.4289f,0.2144f,0.4674f,0.1846f,0.4438f,0.1784f,0.4249f,0.1784f,0.4249f,0.1107f,0.4532f,0.1504f,0.4433f,0.1846f,0.4438f,0.2144f,0.4674f,0.2198f,0.4731f,0.2633f,0.457f,0.3214f,0.4203f,0.3222f,0.4193f,0.2198f,0.4731f,0.2144f,0.4674f,0.1846f,0.4438f,0.1504f,0.4433f,0.1107f,0.4532f,0.0777f,0.4495f,0.0639f,0.4488f,0.0777f,0.4495f,0.1055f,0.438f,0.0663f,0.4356f,0.0537f,0.4289f,0.0663f,0.4356f,0.1055f,0.438f,0.1538f,0.4251f,0.1784f,0.4249f,0.2236f,0.46f,0.2638f,0.4568f,0.3214f,0.4203f,0.3223f,0.4192f,0.2236f,0.46f,0.1784f,0.4249f,0.1538f,0.4251f});
  }
}
protected class MFFloat439 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat440 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32441 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,15,0,-1,0,7,16,-1,0,15,8,-1,1,5,11,-1,11,10,1,-1,18,6,12,-1,12,17,18,-1,14,13,2,-1,2,3,14,-1,9,14,3,-1,3,4,9,-1,11,5,0,-1,0,8,11,-1,13,12,6,-1,6,2,13,-1,49,16,7,-1,7,0,5,-1,1,10,9,-1,9,4,1,-1,3,2,20,-1,20,19,3,-1,2,6,21,-1,21,20,2,-1,6,18,53,-1,53,21,6,-1,7,5,23,-1,23,22,7,-1,5,1,24,-1,24,23,5,-1,1,4,25,-1,25,24,1,-1,4,3,19,-1,19,25,4,-1,10,11,27,-1,27,26,10,-1,11,8,28,-1,28,27,11,-1,8,15,29,-1,29,28,8,-1,17,12,30,-1,30,62,17,-1,12,13,31,-1,31,30,12,-1,13,14,32,-1,32,31,13,-1,14,9,33,-1,33,32,14,-1,9,10,26,-1,26,33,9,-1,16,35,34,-1,34,15,16,-1,34,36,15,-1,38,37,40,-1,40,39,38,-1,18,17,42,-1,42,41,18,-1,44,43,46,-1,46,45,44,-1,48,47,43,-1,43,44,48,-1,40,36,34,-1,34,39,40,-1,45,46,41,-1,41,42,45,-1,49,35,16,-1,35,39,34,-1,38,47,48,-1,48,37,38,-1,43,51,50,-1,50,46,43,-1,46,50,52,-1,52,41,46,-1,41,52,53,-1,53,18,41,-1,35,55,54,-1,54,39,35,-1,39,54,56,-1,56,38,39,-1,38,56,57,-1,57,47,38,-1,47,57,51,-1,51,43,47,-1,37,59,58,-1,58,40,37,-1,40,58,60,-1,60,36,40,-1,36,60,29,-1,29,15,36,-1,17,62,61,-1,61,42,17,-1,42,61,63,-1,63,45,42,-1,45,63,64,-1,64,44,45,-1,44,64,65,-1,65,48,44,-1,48,65,59,-1,59,37,48,-1,27,28,29,-1,29,60,58,-1,58,59,65,-1,29,58,65,-1,65,64,63,-1,63,61,62,-1,65,63,62,-1,62,30,31,-1,31,32,33,-1,62,31,33,-1,65,62,33,-1,29,65,33,-1,27,29,33,-1,27,33,26,-1});
  }
}
protected class MFInt32442 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,12,1,-1,1,0,2,-1,1,12,13,-1,4,8,16,-1,16,15,4,-1,11,10,17,-1,17,19,11,-1,21,20,5,-1,5,6,21,-1,14,21,6,-1,6,7,14,-1,16,8,1,-1,1,13,16,-1,20,18,9,-1,9,5,20,-1,3,2,0,-1,0,1,8,-1,4,15,14,-1,14,7,4,-1,6,5,23,-1,23,22,6,-1,5,9,24,-1,24,23,5,-1,10,11,25,-1,25,24,10,-1,0,8,27,-1,27,26,0,-1,8,4,28,-1,28,27,8,-1,4,7,29,-1,29,28,4,-1,7,6,22,-1,22,29,7,-1,15,16,31,-1,31,30,15,-1,16,13,32,-1,32,31,16,-1,13,12,33,-1,33,32,13,-1,19,17,35,-1,35,34,19,-1,18,20,36,-1,36,35,18,-1,20,21,37,-1,37,36,20,-1,21,14,38,-1,38,37,21,-1,14,15,30,-1,30,38,14,-1,42,41,40,-1,40,39,42,-1,40,43,39,-1,45,44,47,-1,47,46,45,-1,49,48,51,-1,51,50,49,-1,53,52,55,-1,55,54,53,-1,57,56,52,-1,52,53,57,-1,47,43,40,-1,40,46,47,-1,54,55,59,-1,59,58,54,-1,60,41,42,-1,41,46,40,-1,45,56,57,-1,57,44,45,-1,52,62,61,-1,61,55,52,-1,55,61,63,-1,63,59,55,-1,50,63,64,-1,64,49,50,-1,41,66,65,-1,65,46,41,-1,46,65,67,-1,67,45,46,-1,45,67,68,-1,68,56,45,-1,56,68,62,-1,62,52,56,-1,44,70,69,-1,69,47,44,-1,47,69,71,-1,71,43,47,-1,43,71,72,-1,72,39,43,-1,48,74,73,-1,73,51,48,-1,58,73,75,-1,75,54,58,-1,54,75,76,-1,76,53,54,-1,53,76,77,-1,77,57,53,-1,57,77,70,-1,70,44,57,-1,31,32,33,-1,33,71,69,-1,69,70,77,-1,33,69,77,-1,77,76,75,-1,75,73,74,-1,77,75,74,-1,74,35,36,-1,36,37,38,-1,74,36,38,-1,77,74,38,-1,33,77,38,-1,31,33,38,-1,31,38,30,-1});
  }
}
protected class MFVec3f443 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {75.7556f,-155.4889f,173f,238.6444f,-133.3333f,94.9556f,191.8f,-133.3333f,-65f,228.1111f,-133.3333f,-61.0889f,248.0222f,-133.3333f,-41f,147.1778f,-133.3333f,142.2444f,80.1111f,-133.3333f,-80.0667f,70.4222f,-141.2444f,202.7778f,74.3333f,-188.4444f,177.4444f,256.2889f,-187.2444f,-19.5467f,258.5111f,-189.8933f,88.2444f,158.9556f,-184.88f,157.2222f,80.1111f,-187.2444f,-90.6889f,190.0222f,-187.2444f,-73.0444f,204.8222f,-187.2444f,-71.4444f,-0.3778f,-188.4444f,181.3556f,-0.3778f,-171.3156f,203.8f,-0.3778f,-187.2444f,-96.6444f,-0.3778f,-133.3333f,-86.0222f,222.6444f,-114.4f,-49.7111f,190.3778f,-114.4f,-53.1778f,78.8667f,-114.4f,-68.2444f,67.2222f,-114.4f,190.1556f,140.7333f,-114.4f,132.2f,227.2222f,-114.4f,87.4889f,235.8f,-114.4f,-36.4667f,251.5778f,-208.0889f,83.2222f,157.1778f,-208.0889f,148.6f,74.1111f,-208.0889f,168.4667f,-0.3778f,-208.0889f,172.3333f,80.3778f,-208.0889f,-81.0889f,192.2889f,-208.0889f,-63.0889f,203.4444f,-208.0889f,-61.8889f,249.5333f,-208.0889f,-15.4178f,-76.5111f,-155.4889f,173f,-71.1778f,-141.2444f,202.7778f,-75.0889f,-188.4444f,177.4444f,-259.2667f,-189.8933f,88.2444f,-239.4f,-133.3333f,94.9556f,-147.9333f,-133.3333f,142.2444f,-159.7111f,-184.88f,157.2222f,-80.8667f,-133.3333f,-80.0667f,-80.8667f,-187.2444f,-90.6889f,-228.8667f,-133.3333f,-61.0889f,-205.5778f,-187.2444f,-71.4444f,-190.7778f,-187.2444f,-73.0444f,-192.5556f,-133.3333f,-65f,-248.7778f,-133.3333f,-41f,-257.0444f,-187.2444f,-19.5467f,-0.3778f,-137.4222f,190.4222f,-191.1333f,-114.4f,-53.1778f,-223.4f,-114.4f,-49.7111f,-79.6222f,-114.4f,-68.2444f,-0.3778f,-114.4f,-74.1111f,-141.4889f,-114.4f,132.2f,-67.9778f,-114.4f,190.1556f,-227.9778f,-114.4f,87.4889f,-236.5556f,-114.4f,-36.4667f,-157.9333f,-208.0889f,148.6f,-252.3333f,-208.0889f,83.2222f,-74.8667f,-208.0889f,168.4667f,-81.1333f,-208.0889f,-81.0889f,-0.3778f,-208.0889f,-87.0444f,-193.0444f,-208.0889f,-63.0889f,-204.2f,-208.0889f,-61.8889f,-250.2889f,-208.0889f,-15.4178f});
  }
}
protected class MFVec2f444 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0763f,0.4945f,0.0877f,0.4617f,0.0525f,0.4715f,0.0399f,0.5407f,0.1491f,0.4682f,0.2169f,0.492f,0.2035f,0.4795f,0.1915f,0.4696f,0.1178f,0.4708f,0.2635f,0.4569f,0.3223f,0.4193f,0.3214f,0.4203f,0.0639f,0.4488f,0.0777f,0.4495f,0.1846f,0.4438f,0.1504f,0.4433f,0.1107f,0.4532f,0.3222f,0.4193f,0.2633f,0.457f,0.3214f,0.4203f,0.2198f,0.4731f,0.2144f,0.4674f,0.2035f,0.4795f,0.2169f,0.492f,0.2635f,0.4569f,0.3214f,0.4203f,0.0763f,0.4945f,0.1178f,0.4708f,0.1491f,0.4682f,0.1915f,0.4696f,0.1504f,0.4433f,0.1107f,0.4532f,0.0777f,0.4495f,0.0639f,0.4488f,0.3214f,0.4203f,0.3222f,0.4193f,0.2198f,0.4731f,0.2144f,0.4674f,0.1846f,0.4438f,0.0639f,0.4488f,0.0877f,0.4617f,0.0763f,0.4945f,0.0525f,0.4715f,0.0777f,0.4495f,0.1504f,0.4433f,0.1491f,0.4682f,0.1178f,0.4708f,0.1107f,0.4532f,0.3214f,0.4203f,0.3214f,0.4203f,0.3223f,0.4193f,0.3222f,0.4193f,0.2035f,0.4795f,0.2144f,0.4674f,0.2198f,0.4731f,0.2169f,0.492f,0.1915f,0.4696f,0.1846f,0.4438f,0.2633f,0.457f,0.2635f,0.4569f,0.0399f,0.5407f,0.2169f,0.492f,0.2035f,0.4795f,0.2635f,0.4569f,0.3214f,0.4203f,0.1178f,0.4708f,0.0763f,0.4945f,0.1491f,0.4682f,0.1915f,0.4696f,0.1107f,0.4532f,0.1504f,0.4433f,0.0777f,0.4495f,0.0639f,0.4488f,0.3222f,0.4193f,0.3214f,0.4203f,0.2198f,0.4731f,0.2144f,0.4674f,0.1846f,0.4438f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,5,12,-1,7,2,19,-1,19,0,7,-1,0,11,7,-1,2,7,5,-1,5,1,2,-1,17,0,19,-1,0,17,6,-1,6,11,0,-1,20,2,1,-1,1,4,20,-1,2,20,19,-1,10,9,15,-1,15,14,10,-1,9,16,15,-1,8,10,14,-1,14,18,8,-1,13,6,17,-1,3,8,18,-1,18,21,3,-1,51,4,1,-1,1,12,51,-1,6,13,16,-1,16,9,6,-1,6,9,23,-1,23,22,6,-1,9,10,24,-1,24,23,9,-1,10,8,25,-1,25,24,10,-1,8,3,56,-1,56,25,8,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,13,29,-1,29,28,16,-1,13,17,30,-1,30,29,13,-1,17,19,31,-1,31,30,17,-1,19,20,63,-1,63,31,19,-1,21,18,32,-1,32,65,21,-1,18,14,26,-1,26,32,18,-1,33,35,34,-1,38,37,36,-1,36,39,38,-1,37,38,40,-1,39,33,34,-1,34,38,39,-1,41,36,37,-1,37,40,42,-1,42,41,37,-1,20,4,33,-1,33,39,20,-1,39,36,20,-1,43,46,45,-1,45,44,43,-1,44,45,47,-1,49,48,46,-1,46,43,49,-1,50,41,42,-1,3,21,48,-1,48,49,3,-1,51,35,33,-1,33,4,51,-1,42,44,47,-1,47,50,42,-1,42,53,52,-1,52,44,42,-1,44,52,54,-1,54,43,44,-1,43,54,55,-1,55,49,43,-1,49,55,56,-1,56,3,49,-1,46,58,57,-1,57,45,46,-1,45,57,59,-1,59,47,45,-1,47,59,60,-1,60,50,47,-1,50,60,61,-1,61,41,50,-1,41,61,62,-1,62,36,41,-1,36,62,63,-1,63,20,36,-1,21,65,64,-1,64,48,21,-1,48,64,58,-1,58,46,48,-1,28,29,30,-1,31,63,62,-1,30,31,62,-1,62,61,60,-1,60,59,57,-1,62,60,57,-1,62,57,58,-1,58,64,65,-1,65,32,26,-1,58,65,26,-1,62,58,26,-1,30,62,26,-1,28,30,26,-1,27,28,26,-1});
  }
}
protected class MFInt32448 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,16,-1,4,5,26,-1,26,3,4,-1,3,15,4,-1,5,4,6,-1,6,7,5,-1,22,3,26,-1,3,22,8,-1,8,15,3,-1,27,5,7,-1,7,10,27,-1,5,27,26,-1,14,9,20,-1,20,19,14,-1,9,21,20,-1,13,14,19,-1,19,23,13,-1,18,8,22,-1,11,12,24,-1,24,25,11,-1,17,2,0,-1,0,16,17,-1,8,18,21,-1,21,9,8,-1,8,9,29,-1,29,28,8,-1,9,14,30,-1,30,29,9,-1,14,13,31,-1,31,30,14,-1,12,11,32,-1,32,31,12,-1,19,20,34,-1,34,33,19,-1,20,21,35,-1,35,34,20,-1,21,18,36,-1,36,35,21,-1,18,22,37,-1,37,36,18,-1,22,26,38,-1,38,37,22,-1,26,27,39,-1,39,38,26,-1,25,24,41,-1,41,40,25,-1,23,19,33,-1,33,41,23,-1,42,44,43,-1,47,46,45,-1,45,48,47,-1,46,47,49,-1,48,51,50,-1,50,47,48,-1,52,45,46,-1,46,49,53,-1,53,52,46,-1,55,54,51,-1,51,48,55,-1,48,45,55,-1,56,59,58,-1,58,57,56,-1,57,58,60,-1,62,61,59,-1,59,56,62,-1,63,52,53,-1,65,64,67,-1,67,66,65,-1,68,44,42,-1,42,69,68,-1,53,57,60,-1,60,63,53,-1,53,71,70,-1,70,57,53,-1,57,70,72,-1,72,56,57,-1,56,72,73,-1,73,62,56,-1,66,73,74,-1,74,65,66,-1,59,76,75,-1,75,58,59,-1,58,75,77,-1,77,60,58,-1,60,77,78,-1,78,63,60,-1,63,78,79,-1,79,52,63,-1,52,79,80,-1,80,45,52,-1,45,80,81,-1,81,55,45,-1,64,83,82,-1,82,67,64,-1,61,82,76,-1,76,59,61,-1,35,36,37,-1,38,39,80,-1,37,38,80,-1,80,79,78,-1,78,77,75,-1,80,78,75,-1,80,75,76,-1,76,82,83,-1,83,41,33,-1,76,83,33,-1,80,76,33,-1,37,80,33,-1,35,37,33,-1,34,35,33,-1});
  }
}
protected class MFVec3f449 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {138.7778f,-167.0978f,183.3111f,60.6444f,-164.8267f,173f,60.9556f,-164.8267f,193.8444f,-0.3778f,-148.3911f,-79.3556f,-0.3778f,-188.8489f,183.3556f,90.4222f,-141.1111f,157.9333f,225.6667f,-145.3422f,99.3556f,99.4f,-134.1778f,179.8f,80.1111f,-148.3911f,-73.4f,242.8222f,-148.2178f,-54.5556f,192.9111f,-148.2667f,-59.9333f,168.7333f,-136.9333f,141.6667f,52.1556f,-141.1111f,143.5333f,238.6444f,-182.2f,94.9556f,191.8f,-182.2f,-65f,228.1111f,-182.2f,-61.0889f,248.0222f,-182.2f,-41f,147.1778f,-182.2f,142.2444f,80.1111f,-182.2f,-80.0667f,70.4222f,-190.1333f,202.7778f,-0.3778f,-186.2756f,190.4222f,-0.3778f,-182.2f,-86.0222f,216.6889f,-129.7333f,76.9111f,220.5556f,-132.0444f,-41.5778f,191.8444f,-132.0444f,-52.2889f,79.2222f,-132.1778f,-64.3333f,190.6444f,-208.6267f,-55.5778f,223.7556f,-208.6267f,-52.0222f,238.2444f,-208.6267f,-37.4f,229.5333f,-208.6267f,89f,142.0222f,-208.6267f,134.2f,67.8444f,-208.6267f,152.0222f,79.1333f,-208.6267f,-70.6444f,-61.4f,-164.8267f,173f,-91.1778f,-141.1111f,157.9333f,-52.9111f,-141.1111f,143.5333f,-71.1778f,-190.1333f,202.7778f,-139.5333f,-167.0978f,183.3111f,-100.1556f,-134.1778f,179.8f,-61.7111f,-164.8267f,193.8444f,-169.4889f,-136.9333f,141.6667f,-147.9333f,-182.2f,142.2444f,-226.4222f,-145.3422f,99.3556f,-193.6667f,-148.2667f,-59.9333f,-243.5778f,-148.2178f,-54.5556f,-228.8667f,-182.2f,-61.0889f,-192.5556f,-182.2f,-65f,-248.7778f,-182.2f,-41f,-80.8667f,-182.2f,-80.0667f,-80.8667f,-148.3911f,-73.4f,-239.4f,-182.2f,94.9556f,-0.3778f,-141.1111f,136.0222f,-221.3111f,-132.0444f,-41.5778f,-217.4444f,-129.7333f,76.9111f,-192.6f,-132.0444f,-52.2889f,-79.9778f,-132.1778f,-64.3333f,-0.3778f,-132.1778f,-69.5778f,-224.5111f,-208.6267f,-52.0222f,-191.4f,-208.6267f,-55.5778f,-239f,-208.6267f,-37.4f,-230.2889f,-208.6267f,89f,-142.7778f,-208.6267f,134.2f,-68.6f,-208.6267f,152.0222f,-0.3778f,-208.6267f,180.7778f,-79.8889f,-208.6267f,-70.6444f,-0.3778f,-208.6267f,-76.5111f});
  }
}
protected class MFVec2f450 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4473f,0.6921f,0.4449f,0.6914f,0.4513f,0.6918f,0.1025f,0.5076f,0.0865f,0.5614f,0.0652f,0.5465f,0.0786f,0.5849f,0.0516f,0.5759f,0.1474f,0.4856f,0.1963f,0.4863f,0.0346f,0.5664f,0.3214f,0.4203f,0.3223f,0.4192f,0.2638f,0.4568f,0.2146f,0.5039f,0.1227f,0.5144f,0.4468f,0.6898f,0.4495f,0.6881f,0.1491f,0.4682f,0.2169f,0.492f,0.2035f,0.4795f,0.1915f,0.4696f,0.1178f,0.4708f,0.2635f,0.4569f,0.3223f,0.4193f,0.3214f,0.4203f,0.0763f,0.4945f,0.0399f,0.5407f,0.1474f,0.4856f,0.1963f,0.4863f,0.2146f,0.5039f,0.2638f,0.4568f,0.3214f,0.4203f,0.2169f,0.492f,0.2035f,0.4795f,0.1915f,0.4696f,0.1491f,0.4682f,0.1178f,0.4708f,0.0763f,0.4945f,0.0399f,0.5407f,0.3214f,0.4203f,0.3223f,0.4193f,0.4473f,0.6921f,0.4449f,0.6914f,0.4468f,0.6898f,0.0763f,0.4945f,0.1025f,0.5076f,0.0865f,0.5614f,0.0652f,0.5465f,0.1227f,0.5144f,0.0786f,0.5849f,0.0516f,0.5759f,0.1178f,0.4708f,0.1474f,0.4856f,0.0346f,0.5664f,0.0399f,0.5407f,0.2146f,0.5039f,0.1963f,0.4863f,0.2035f,0.4795f,0.2169f,0.492f,0.1915f,0.4696f,0.2635f,0.4569f,0.2638f,0.4568f,0.1491f,0.4682f,0.3214f,0.4203f,0.3214f,0.4203f,0.3223f,0.4192f,0.3223f,0.4193f,0.4495f,0.6881f,0.4513f,0.6918f,0.1963f,0.4863f,0.1474f,0.4856f,0.2146f,0.5039f,0.2638f,0.4568f,0.3214f,0.4203f,0.2035f,0.4795f,0.2169f,0.492f,0.1915f,0.4696f,0.1491f,0.4682f,0.1178f,0.4708f,0.0763f,0.4945f,0.0399f,0.5407f,0.3223f,0.4193f,0.3214f,0.4203f});
  }
}
protected class MFFloat451 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat452 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32453 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,5,3,-1,3,2,1,-1,5,6,3,-1,7,27,3,-1,3,6,7,-1,0,1,2,-1,43,11,10,-1,10,4,43,-1,5,1,12,-1,1,0,12,-1,35,26,12,-1,43,4,12,-1,4,5,12,-1,72,28,9,-1,9,28,27,-1,27,7,9,-1,5,4,10,-1,10,6,5,-1,29,72,8,-1,26,35,14,-1,14,49,26,-1,35,0,15,-1,15,14,35,-1,17,16,18,-1,18,19,17,-1,16,27,28,-1,28,18,16,-1,13,2,16,-1,27,16,2,-1,2,3,27,-1,19,18,29,-1,29,8,19,-1,18,28,72,-1,72,29,18,-1,0,13,15,-1,21,20,23,-1,23,61,21,-1,20,22,24,-1,24,23,20,-1,22,17,19,-1,19,24,22,-1,20,21,49,-1,49,14,20,-1,22,20,14,-1,14,15,22,-1,15,17,22,-1,61,23,30,-1,30,25,61,-1,23,24,33,-1,33,30,23,-1,24,19,8,-1,8,33,24,-1,0,2,13,-1,15,13,17,-1,16,17,13,-1,68,69,32,-1,32,31,68,-1,30,33,32,-1,33,8,34,-1,33,34,31,-1,31,32,33,-1,32,69,25,-1,25,30,32,-1,12,0,35,-1,37,36,58,-1,58,38,37,-1,38,58,39,-1,40,39,58,-1,58,41,40,-1,51,36,37,-1,43,42,44,-1,44,11,43,-1,38,12,37,-1,37,12,51,-1,45,12,26,-1,43,12,42,-1,42,12,38,-1,73,47,56,-1,47,40,41,-1,41,56,47,-1,38,39,44,-1,44,42,38,-1,46,59,73,-1,26,49,48,-1,48,45,26,-1,45,48,50,-1,50,51,45,-1,54,53,52,-1,52,55,54,-1,55,52,56,-1,56,41,55,-1,57,55,36,-1,41,58,36,-1,36,55,41,-1,53,59,46,-1,46,52,53,-1,52,46,73,-1,73,56,52,-1,51,50,57,-1,21,61,60,-1,60,62,21,-1,62,60,63,-1,63,64,62,-1,64,63,53,-1,53,54,64,-1,62,48,49,-1,49,21,62,-1,64,50,48,-1,48,62,64,-1,50,64,54,-1,61,25,65,-1,65,60,61,-1,60,65,66,-1,66,63,60,-1,63,66,59,-1,59,53,63,-1,51,57,36,-1,50,54,57,-1,55,57,54,-1,68,67,70,-1,70,69,68,-1,65,70,66,-1,66,71,59,-1,66,70,67,-1,67,71,66,-1,70,65,25,-1,25,69,70,-1,12,45,51,-1,81,82,83,-1,81,83,84,-1,81,84,85,-1,85,86,87,-1,81,85,87,-1,88,89,90,-1,88,90,91,-1,87,88,91,-1,91,74,75,-1,91,75,76,-1,87,91,76,-1,87,76,77,-1,81,87,77,-1,81,77,78,-1,81,78,79,-1,81,79,80,-1,7,6,75,-1,75,74,7,-1,6,10,76,-1,76,75,6,-1,10,11,77,-1,77,76,10,-1,11,44,78,-1,78,77,11,-1,44,39,79,-1,79,78,44,-1,39,40,80,-1,80,79,39,-1,40,47,81,-1,81,80,40,-1,47,73,82,-1,82,81,47,-1,73,59,83,-1,83,82,73,-1,59,71,84,-1,84,83,59,-1,71,67,85,-1,85,84,71,-1,67,68,86,-1,86,85,67,-1,68,31,87,-1,87,86,68,-1,31,34,88,-1,88,87,31,-1,34,8,89,-1,89,88,34,-1,8,72,90,-1,90,89,8,-1,72,9,91,-1,91,90,72,-1,9,7,74,-1,74,91,9,-1});
  }
}
protected class MFInt32454 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,0,-1,0,16,14,-1,15,19,0,-1,21,10,11,-1,11,18,21,-1,5,2,1,-1,6,25,24,-1,24,4,6,-1,3,2,13,-1,2,5,13,-1,66,7,13,-1,6,4,17,-1,4,15,17,-1,20,9,23,-1,23,9,10,-1,10,21,23,-1,15,4,24,-1,24,19,15,-1,12,20,22,-1,48,47,26,-1,26,27,48,-1,47,49,28,-1,28,26,47,-1,31,32,29,-1,29,30,31,-1,32,53,54,-1,54,29,32,-1,33,50,32,-1,53,32,50,-1,50,51,53,-1,30,29,55,-1,55,56,30,-1,29,54,52,-1,52,55,29,-1,49,33,28,-1,36,41,40,-1,40,35,36,-1,37,39,38,-1,38,34,37,-1,39,31,30,-1,30,38,39,-1,42,36,43,-1,43,45,42,-1,39,37,26,-1,26,28,39,-1,28,31,39,-1,35,44,57,-1,57,46,35,-1,34,38,65,-1,65,58,34,-1,38,30,56,-1,56,65,38,-1,49,50,33,-1,28,33,31,-1,32,31,33,-1,62,63,64,-1,64,61,62,-1,57,65,64,-1,65,56,60,-1,65,60,61,-1,61,64,65,-1,64,63,59,-1,59,57,64,-1,13,8,66,-1,69,68,67,-1,67,70,69,-1,70,67,71,-1,74,73,72,-1,72,75,74,-1,76,78,77,-1,80,79,82,-1,82,81,80,-1,83,84,77,-1,77,84,76,-1,85,84,86,-1,80,87,79,-1,79,87,70,-1,132,90,89,-1,90,74,75,-1,75,89,90,-1,70,71,82,-1,82,79,70,-1,88,91,132,-1,94,93,92,-1,92,95,94,-1,95,92,96,-1,96,97,95,-1,100,99,98,-1,98,101,100,-1,101,98,102,-1,102,103,101,-1,104,101,105,-1,103,106,105,-1,105,101,103,-1,99,108,107,-1,107,98,99,-1,98,107,109,-1,109,102,98,-1,97,96,104,-1,112,111,110,-1,110,113,112,-1,116,115,114,-1,114,117,116,-1,117,114,99,-1,99,100,117,-1,120,119,118,-1,118,112,120,-1,117,96,92,-1,92,116,117,-1,96,117,100,-1,111,122,121,-1,121,123,111,-1,115,125,124,-1,124,114,115,-1,114,124,108,-1,108,99,114,-1,97,104,105,-1,96,100,104,-1,101,104,100,-1,127,126,129,-1,129,128,127,-1,121,129,124,-1,124,130,108,-1,124,129,126,-1,126,130,124,-1,129,121,131,-1,131,128,129,-1,84,85,133,-1,141,142,143,-1,141,143,144,-1,141,144,145,-1,145,146,147,-1,141,145,147,-1,148,149,150,-1,148,150,151,-1,147,148,151,-1,151,134,135,-1,151,135,136,-1,147,151,136,-1,147,136,137,-1,141,147,137,-1,141,137,138,-1,141,138,139,-1,141,139,140,-1,21,18,135,-1,135,134,21,-1,19,24,136,-1,136,135,19,-1,24,25,137,-1,137,136,24,-1,81,82,138,-1,138,137,81,-1,82,71,139,-1,139,138,82,-1,73,74,140,-1,140,139,73,-1,74,90,141,-1,141,140,74,-1,90,132,142,-1,142,141,90,-1,132,91,143,-1,143,142,132,-1,108,130,144,-1,144,143,108,-1,130,126,145,-1,145,144,130,-1,126,127,146,-1,146,145,126,-1,62,61,147,-1,147,146,62,-1,61,60,148,-1,148,147,61,-1,60,56,149,-1,149,148,60,-1,22,20,150,-1,150,149,22,-1,20,23,151,-1,151,150,20,-1,23,21,134,-1,134,151,23,-1});
  }
}
protected class MFVec3f455 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {64.9556f,-112.5333f,-30.4667f,89.2222f,-113.5111f,22.4844f,129.1333f,-133.3333f,24.7822f,141.2667f,-171.8489f,78.5556f,34.3156f,-138.4f,81.4444f,69.5333f,-126.8f,59.32f,90.4222f,-188.3333f,157.9333f,99.4f,-181.4044f,179.8f,242.8222f,-195.4356f,-54.5556f,168.7333f,-184.16f,141.6667f,52.1556f,-188.3333f,143.5333f,-0.3778f,-188.3333f,136.0222f,-0.3778f,-129.2889f,18.3022f,115.1333f,-93.3333f,-52.5111f,42.4178f,-92.2667f,-130.1111f,90.0667f,-91.0667f,-115.1333f,152.4667f,-96.2222f,26.2978f,175.3111f,-134.5333f,-89f,225.0889f,-119.6444f,26.2978f,206.5111f,-176.36f,-69.1333f,45.4889f,-218.9467f,-186.7778f,-0.3778f,-218.5511f,-192.7778f,105.8444f,-201.7822f,-163.9778f,74.1556f,-367.5556f,-129.8889f,182.7333f,-300.1778f,-124.7778f,-0.3778f,-345.5111f,-103.9778f,-0.3778f,-121.0222f,-50.9111f,132.1556f,-143.2f,106.9111f,196.0667f,-156.6044f,103.5333f,248.6f,-165.8711f,18.2578f,80.1111f,-338.8889f,-98.0222f,80.1111f,-195.6089f,-73.4f,81.0889f,-296.2667f,-80.8222f,188.1111f,-296.2667f,-80.8222f,187.4f,-195.4356f,-54.5556f,30.4133f,-122f,-46.1556f,-129.8889f,-133.3333f,24.7822f,-89.9778f,-113.5111f,22.4844f,-70.2889f,-126.8f,59.32f,-91.1778f,-188.3333f,157.9333f,-100.1556f,-181.4044f,179.8f,-132.9111f,-143.2f,106.9111f,-35.0711f,-138.4f,81.4444f,-0.3778f,-138.8f,86.8667f,-52.9111f,-188.3333f,143.5333f,-31.1689f,-122f,-46.1556f,-249.3556f,-165.8711f,18.2578f,-169.4889f,-184.16f,141.6667f,-43.1733f,-92.2667f,-130.1111f,-0.3778f,-93.2889f,-137.4444f,-90.8222f,-91.0667f,-115.1333f,-65.7111f,-112.5333f,-30.4667f,-225.8444f,-119.6444f,26.2978f,-207.2667f,-176.36f,-69.1333f,-176.0667f,-134.5333f,-89f,-153.2222f,-96.2222f,26.2978f,-196.8222f,-156.6044f,103.5333f,-115.8889f,-93.3333f,-52.5111f,-142.0222f,-171.8489f,78.5556f,-243.5778f,-195.4356f,-54.5556f,-74.9111f,-367.5556f,-129.8889f,-0.3778f,-381.8667f,-135.1778f,-46.2444f,-218.9467f,-186.7778f,-183.4889f,-300.1778f,-124.7778f,-106.6f,-201.7822f,-163.9778f,-80.8667f,-338.8889f,-98.0222f,-188.8667f,-296.2667f,-80.8222f,-80.8667f,-195.6089f,-73.4f,-0.3778f,-195.6089f,-79.3556f,-0.3778f,-296.2667f,-80.8222f,-81.8444f,-296.2667f,-80.8222f,-188.1556f,-195.4356f,-54.5556f,225.6667f,-192.56f,99.3556f,-226.4222f,-192.56f,99.3556f,103.4889f,-208.1867f,173.8889f,96.6f,-208.1867f,162.0667f,54.2f,-208.1867f,142.2444f,-0.3778f,-208.1867f,134.4222f,-54.9556f,-208.1867f,142.2444f,-97.3556f,-208.1867f,162.0667f,-104.2444f,-208.1867f,173.8889f,-165.0889f,-208.1867f,138.5556f,-218.7333f,-208.1867f,97.7111f,-234.5111f,-208.1867f,-46.4667f,-187.4444f,-208.1867f,-46.4667f,-79.8889f,-208.1867f,-65.3556f,-0.3778f,-208.1867f,-71.2667f,79.1333f,-208.1867f,-65.3556f,186.6889f,-208.1867f,-46.4667f,233.7556f,-208.1867f,-46.4667f,217.9778f,-208.1867f,97.7111f,164.3333f,-208.1867f,138.5556f});
  }
}
protected class MFVec2f456 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4416f,0.6747f,0.4535f,0.6485f,0.4483f,0.6438f,0.4499f,0.6371f,0.4594f,0.6763f,0.4399f,0.6472f,0.4645f,0.6783f,0.4385f,0.6236f,0.4279f,0.6258f,0.1412f,0.5207f,0.1108f,0.5655f,0.1073f,0.5839f,0.1708f,0.4854f,0.4376f,0.6345f,0.4528f,0.6648f,0.4548f,0.6714f,0.4459f,0.6652f,0.4669f,0.6678f,0.0786f,0.5849f,0.4476f,0.6884f,0.1474f,0.4856f,0.0865f,0.5614f,0.1963f,0.4863f,0.1227f,0.5144f,0.4539f,0.6879f,0.4621f,0.6889f,0.2661f,0.5914f,0.3505f,0.5919f,0.241f,0.592f,0.1724f,0.5255f,0.2089f,0.5196f,0.2133f,0.556f,0.1645f,0.5709f,0.2067f,0.5908f,0.2708f,0.4736f,0.347f,0.4317f,0.3616f,0.5328f,0.2733f,0.5359f,0.238f,0.493f,0.249f,0.5451f,0.3477f,0.431f,0.3623f,0.5333f,0.3623f,0.5333f,0.3505f,0.5919f,0.3477f,0.431f,0.3511f,0.5932f,0.3206f,0.4193f,0.2505f,0.5754f,0.3554f,0.5911f,0.2112f,0.5805f,0.1632f,0.5887f,0.1073f,0.5839f,0.1474f,0.4856f,0.1108f,0.5655f,0.1412f,0.5207f,0.1708f,0.4854f,0.1963f,0.4863f,0.3223f,0.4192f,0.2638f,0.4568f,0.3206f,0.4193f,0.1963f,0.4863f,0.1963f,0.4863f,0.1963f,0.4863f,0.2252f,0.4828f,0.2252f,0.4828f,0.2252f,0.4828f,0.4337f,0.6239f,0.4689f,0.6806f,0.4689f,0.6702f,0.4627f,0.667f,0.4583f,0.6722f,0.4578f,0.6906f,0.1073f,0.5839f,0.0786f,0.5849f,0.0865f,0.5614f,0.1108f,0.5655f,0.4514f,0.6379f,0.4463f,0.6454f,0.4498f,0.6514f,0.4521f,0.6748f,0.4466f,0.6744f,0.4444f,0.685f,0.4523f,0.6875f,0.4395f,0.6457f,0.4393f,0.633f,0.4295f,0.6275f,0.4284f,0.6322f,0.4488f,0.6639f,0.1708f,0.4854f,0.1412f,0.5207f,0.1227f,0.5144f,0.1963f,0.4863f,0.2661f,0.5914f,0.3505f,0.5919f,0.3554f,0.5911f,0.2505f,0.5754f,0.241f,0.592f,0.2112f,0.5805f,0.1724f,0.5255f,0.2089f,0.5196f,0.2133f,0.556f,0.1645f,0.5709f,0.1412f,0.5207f,0.1108f,0.5655f,0.2067f,0.5908f,0.1632f,0.5887f,0.1073f,0.5839f,0.1708f,0.4854f,0.1963f,0.4863f,0.1474f,0.4856f,0.3477f,0.431f,0.347f,0.4317f,0.3616f,0.5328f,0.3623f,0.5333f,0.238f,0.493f,0.2708f,0.4736f,0.2733f,0.5359f,0.249f,0.5451f,0.3505f,0.5919f,0.3511f,0.5932f,0.3623f,0.5333f,0.3223f,0.4192f,0.3206f,0.4193f,0.3477f,0.431f,0.2252f,0.4828f,0.2638f,0.4568f,0.1963f,0.4863f,0.1963f,0.4863f,0.2252f,0.4828f,0.2252f,0.4828f,0.1963f,0.4863f,0.3206f,0.4193f,0.1474f,0.4856f,0.4323f,0.622f,0.0865f,0.5614f,0.0786f,0.5849f,0.4539f,0.6879f,0.4621f,0.6889f,0.4523f,0.6875f,0.4578f,0.6906f,0.0865f,0.5614f,0.1227f,0.5144f,0.1474f,0.4856f,0.1474f,0.4856f,0.1227f,0.5144f,0.1963f,0.4863f,0.1963f,0.4863f,0.1963f,0.4863f,0.1963f,0.4863f,0.1999f,0.4849f,0.1421f,0.507f,0.1227f,0.5144f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1});
  }
}
protected class MFInt32460 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1});
  }
}
protected class MFVec3f461 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.4844f,-183.7733f,-29.3111f,-0.3778f,-181.0044f,-32.4667f,50.2444f,-180.7289f,-17.1511f,69.0444f,-181.9822f,23.8844f,53.8f,-189.64f,52.4311f,-0.3778f,-204.3467f,73.7556f,26.5111f,-203.8667f,69.5778f,-24.24f,-183.7733f,-29.3111f,-51f,-180.7333f,-17.1511f,-69.8f,-181.9822f,23.8844f,-54.5556f,-189.64f,52.4356f,-27.2667f,-203.8667f,69.5778f,-0.3778f,-220.1333f,-25.0444f,21.5911f,-220.5467f,-22.24f,44.0222f,-222.0711f,-11.9333f,59.2667f,-226.9689f,21.2444f,47.4444f,-230.1867f,43.0356f,23.3022f,-232.3378f,57.6222f,-0.3778f,-232.8756f,61.2622f,-24.0578f,-232.3378f,57.6222f,-48.2f,-230.1867f,43.0356f,-60.0222f,-226.9689f,21.2489f,-44.7778f,-222.0711f,-11.9333f,-22.3467f,-220.5467f,-22.24f,23.4844f,-164.7244f,-29.3111f,50.2444f,-164.7244f,-17.1511f,69.0444f,-164.7244f,23.8844f,53.8f,-164.7244f,52.4356f,-0.3778f,-164.7244f,73.7556f,-27.2667f,-164.7244f,69.5778f,-51f,-164.7244f,-17.1511f,-69.8f,-164.7244f,23.8844f,-0.3778f,-164.7244f,-32.4667f,26.5111f,-164.7244f,69.5778f,-24.24f,-164.7244f,-29.3111f,-54.5556f,-164.7244f,52.4356f,21.6089f,-155.9333f,-20.9022f,-0.3778f,-155.9333f,-23.8f,-22.3644f,-155.9333f,-20.9022f,-45.1778f,-155.9333f,-10.5378f,-60.8667f,-155.9333f,23.7111f,-48.8667f,-155.9333f,46.1333f,-24.6533f,-155.9333f,61.3644f,-0.3778f,-155.9333f,65.1333f,23.8978f,-155.9333f,61.3644f,48.1111f,-155.9333f,46.1333f,60.1111f,-155.9333f,23.7067f,44.4222f,-155.9333f,-10.5378f});
  }
}
protected class MFVec2f462 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6285f,0.3906f,0.6293f,0.4094f,0.632f,0.4164f,0.6316f,0.4107f,0.6267f,0.3906f,0.6224f,0.4006f,0.6225f,0.3818f,0.6285f,0.3719f,0.632f,0.3649f,0.6316f,0.3706f,0.6267f,0.3807f,0.6225f,0.3906f,0.6293f,0.3995f,0.6285f,0.4094f,0.632f,0.4164f,0.6316f,0.4107f,0.6267f,0.4006f,0.6225f,0.3906f,0.6224f,0.3807f,0.6225f,0.3706f,0.6267f,0.3649f,0.6316f,0.3719f,0.632f,0.3818f,0.6285f,0.3995f,0.6534f,0.4094f,0.6549f,0.4164f,0.6547f,0.4107f,0.6527f,0.3906f,0.6475f,0.3807f,0.6518f,0.3719f,0.6549f,0.3649f,0.6547f,0.3906f,0.6538f,0.4006f,0.6518f,0.3818f,0.6534f,0.3706f,0.6527f,0.3995f,0.6534f,0.3906f,0.6538f,0.3818f,0.6534f,0.3719f,0.6549f,0.3649f,0.6547f,0.3706f,0.6527f,0.3807f,0.6518f,0.3906f,0.6475f,0.4006f,0.6518f,0.4107f,0.6527f,0.4164f,0.6547f,0.4094f,0.6549f});
  }
}
protected class MFFloat463 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat464 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32465 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFInt32466 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFVec3f467 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.4844f,-163.7289f,-29.3111f,50.2444f,-163.7289f,-17.1511f,69.0444f,-163.7289f,23.8844f,53.8f,-163.7289f,52.4356f,-0.3778f,-163.7289f,73.7556f,-27.2667f,-163.7289f,69.5778f,-51f,-163.7289f,-17.1511f,-69.8f,-163.7289f,23.8844f,-0.3778f,-163.7289f,-32.4667f,26.5111f,-163.7289f,69.5778f,-24.24f,-163.7289f,-29.3111f,-54.5556f,-163.7289f,52.4356f,23.4844f,-188.3644f,-29.3111f,50.2444f,-188.3644f,-17.1511f,69.0444f,-188.3644f,23.8844f,53.8f,-188.3644f,52.4356f,-0.3778f,-188.3644f,73.7556f,-27.2667f,-188.3644f,69.5778f,-51f,-188.3644f,-17.1511f,-69.8f,-188.3644f,23.8844f,-0.3778f,-188.3644f,-32.4667f,26.5111f,-188.3644f,69.5778f,-24.24f,-188.3644f,-29.3111f,-54.5556f,-188.3644f,52.4356f,21.6089f,-154.9333f,-20.9022f,-0.3778f,-154.9333f,-23.8f,-22.3644f,-154.9333f,-20.9022f,-45.1778f,-154.9333f,-10.5378f,-60.8667f,-154.9333f,23.7111f,-48.8667f,-154.9333f,46.1333f,-24.6533f,-154.9333f,61.3644f,-0.3778f,-154.9333f,65.1333f,23.8978f,-154.9333f,61.3644f,48.1111f,-154.9333f,46.1333f,60.1111f,-154.9333f,23.7111f,44.4222f,-154.9333f,-10.5378f,-0.3778f,-199f,-23.8f,21.6089f,-199f,-20.9022f,44.4222f,-199f,-10.5378f,60.1111f,-199f,23.7067f,48.1111f,-199f,46.1333f,23.8978f,-199f,61.3644f,-0.3778f,-199f,65.1333f,-24.6533f,-199f,61.3644f,-48.8667f,-199f,46.1333f,-60.8667f,-199f,23.7111f,-45.1778f,-199f,-10.5378f,-22.3644f,-199f,-20.9022f});
  }
}
protected class MFVec2f468 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6565f,0.4094f,0.6578f,0.4164f,0.6576f,0.4107f,0.6559f,0.3906f,0.6507f,0.3807f,0.6555f,0.3719f,0.6578f,0.3649f,0.6576f,0.3906f,0.6568f,0.4006f,0.6555f,0.3818f,0.6565f,0.3706f,0.6559f,0.3995f,0.6534f,0.4094f,0.6549f,0.4164f,0.6547f,0.4107f,0.6527f,0.3906f,0.6475f,0.3807f,0.6518f,0.3719f,0.6549f,0.3649f,0.6547f,0.3906f,0.6538f,0.4006f,0.6518f,0.3818f,0.6534f,0.3706f,0.6527f,0.3995f,0.6565f,0.3906f,0.6568f,0.3818f,0.6565f,0.3719f,0.6578f,0.3649f,0.6576f,0.3706f,0.6559f,0.3807f,0.6555f,0.3906f,0.6507f,0.4006f,0.6555f,0.4107f,0.6559f,0.4164f,0.6576f,0.4094f,0.6578f,0.3906f,0.6538f,0.3995f,0.6534f,0.4094f,0.6549f,0.4164f,0.6547f,0.4107f,0.6527f,0.4006f,0.6518f,0.3906f,0.6475f,0.3807f,0.6518f,0.3706f,0.6527f,0.3649f,0.6547f,0.3719f,0.6549f,0.3818f,0.6534f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFInt32472 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFVec3f473 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.4844f,-164.2844f,-29.3111f,50.2444f,-164.2844f,-17.1511f,69.0444f,-164.2844f,23.8844f,53.8f,-164.2844f,52.4356f,-0.3778f,-164.2844f,73.7556f,-27.2667f,-164.2844f,69.5778f,-51f,-164.2844f,-17.1511f,-69.8f,-164.2844f,23.8844f,-0.3778f,-164.2844f,-32.4667f,26.5111f,-164.2844f,69.5778f,-24.24f,-164.2844f,-29.3111f,-54.5556f,-164.2844f,52.4356f,23.4844f,-188.48f,-29.3111f,50.2444f,-188.48f,-17.1511f,69.0444f,-188.48f,23.8844f,53.8f,-188.48f,52.4356f,-0.3778f,-188.48f,73.7556f,-27.2667f,-188.48f,69.5778f,-51f,-188.48f,-17.1511f,-69.8f,-188.48f,23.8844f,-0.3778f,-188.48f,-32.4667f,26.5111f,-188.48f,69.5778f,-24.24f,-188.48f,-29.3111f,-54.5556f,-188.48f,52.4356f,21.6089f,-155.4933f,-20.9022f,-0.3778f,-155.4933f,-23.8f,-22.3644f,-155.4933f,-20.9022f,-45.1778f,-155.4933f,-10.5378f,-60.8667f,-155.4933f,23.7111f,-48.8667f,-155.4933f,46.1333f,-24.6533f,-155.4933f,61.3644f,-0.3778f,-155.4933f,65.1333f,23.8978f,-155.4933f,61.3644f,48.1111f,-155.4933f,46.1333f,60.1111f,-155.4933f,23.7111f,44.4222f,-155.4933f,-10.5378f,-0.3778f,-198.6756f,-23.8f,21.6089f,-198.6756f,-20.9022f,44.4222f,-198.6756f,-10.5378f,60.1111f,-198.6756f,23.7111f,48.1111f,-198.6756f,46.1333f,23.8978f,-198.6756f,61.3644f,-0.3778f,-198.6756f,65.1333f,-24.6533f,-198.6756f,61.3644f,-48.8667f,-198.6756f,46.1333f,-60.8667f,-198.6756f,23.7111f,-45.1778f,-198.6756f,-10.5378f,-22.3644f,-198.6756f,-20.9022f});
  }
}
protected class MFVec2f474 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6596f,0.4094f,0.6606f,0.4164f,0.6605f,0.4107f,0.6591f,0.3906f,0.6538f,0.3807f,0.6592f,0.3719f,0.6606f,0.3649f,0.6605f,0.3906f,0.6599f,0.4006f,0.6592f,0.3818f,0.6596f,0.3706f,0.6591f,0.3995f,0.6565f,0.4094f,0.6578f,0.4164f,0.6576f,0.4107f,0.6559f,0.3906f,0.6507f,0.3807f,0.6555f,0.3719f,0.6578f,0.3649f,0.6576f,0.3906f,0.6568f,0.4006f,0.6555f,0.3818f,0.6565f,0.3706f,0.6559f,0.3995f,0.6596f,0.3906f,0.6599f,0.3818f,0.6596f,0.3719f,0.6606f,0.3649f,0.6605f,0.3706f,0.6591f,0.3807f,0.6592f,0.3906f,0.6538f,0.4006f,0.6592f,0.4107f,0.6591f,0.4164f,0.6605f,0.4094f,0.6606f,0.3906f,0.6568f,0.3995f,0.6565f,0.4094f,0.6578f,0.4164f,0.6576f,0.4107f,0.6559f,0.4006f,0.6555f,0.3906f,0.6507f,0.3807f,0.6555f,0.3706f,0.6559f,0.3649f,0.6576f,0.3719f,0.6578f,0.3818f,0.6565f});
  }
}
protected class MFFloat475 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat476 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32477 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFInt32478 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFVec3f479 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.4844f,-162.8622f,-29.3111f,50.2444f,-162.8622f,-17.1511f,69.0444f,-162.8622f,23.8844f,53.8f,-162.8622f,52.4356f,-0.3778f,-162.8622f,73.7556f,-27.2667f,-162.8622f,69.5778f,-51f,-162.8622f,-17.1511f,-69.8f,-162.8622f,23.8844f,-0.3778f,-162.8622f,-32.4667f,26.5111f,-162.8622f,69.5778f,-24.24f,-162.8622f,-29.3111f,-54.5556f,-162.8622f,52.4356f,23.4844f,-188.4578f,-29.3111f,50.2444f,-188.4578f,-17.1511f,69.0444f,-188.4578f,23.8844f,53.8f,-188.4578f,52.4356f,-0.3778f,-188.4578f,73.7556f,-27.2667f,-188.4578f,69.5778f,-51f,-188.4578f,-17.1511f,-69.8f,-188.4578f,23.8844f,-0.3778f,-188.4578f,-32.4667f,26.5111f,-188.4578f,69.5778f,-24.24f,-188.4578f,-29.3111f,-54.5556f,-188.4578f,52.4356f,21.6089f,-154.0711f,-20.9022f,-0.3778f,-154.0711f,-23.8f,-22.3644f,-154.0711f,-20.9022f,-45.1778f,-154.0711f,-10.5378f,-60.8667f,-154.0711f,23.7111f,-48.8667f,-154.0711f,46.1333f,-24.6533f,-154.0711f,61.3644f,-0.3778f,-154.0711f,65.1333f,23.8978f,-154.0711f,61.3644f,48.1111f,-154.0711f,46.1333f,60.1111f,-154.0711f,23.7111f,44.4222f,-154.0711f,-10.5378f,-0.3778f,-199.1467f,-23.8f,21.6089f,-199.1467f,-20.9022f,44.4222f,-199.1467f,-10.5378f,60.1111f,-199.1467f,23.7111f,48.1111f,-199.1467f,46.1333f,23.8978f,-199.1467f,61.3644f,-0.3778f,-199.1467f,65.1333f,-24.6533f,-199.1467f,61.3644f,-48.8667f,-199.1467f,46.1333f,-60.8667f,-199.1467f,23.7111f,-45.1778f,-199.1467f,-10.5378f,-22.3644f,-199.1467f,-20.9022f});
  }
}
protected class MFVec2f480 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6628f,0.4094f,0.6635f,0.4164f,0.6634f,0.4107f,0.6624f,0.3906f,0.657f,0.3807f,0.6628f,0.3719f,0.6635f,0.3649f,0.6634f,0.3906f,0.6629f,0.4006f,0.6628f,0.3818f,0.6628f,0.3706f,0.6624f,0.3995f,0.6596f,0.4094f,0.6606f,0.4164f,0.6605f,0.4107f,0.6591f,0.3906f,0.6538f,0.3807f,0.6592f,0.3719f,0.6606f,0.3649f,0.6605f,0.3906f,0.6599f,0.4006f,0.6592f,0.3818f,0.6596f,0.3706f,0.6591f,0.3995f,0.6628f,0.3906f,0.6629f,0.3818f,0.6628f,0.3719f,0.6635f,0.3649f,0.6634f,0.3706f,0.6624f,0.3807f,0.6628f,0.3906f,0.657f,0.4006f,0.6628f,0.4107f,0.6624f,0.4164f,0.6634f,0.4094f,0.6635f,0.3906f,0.6599f,0.3995f,0.6596f,0.4094f,0.6606f,0.4164f,0.6605f,0.4107f,0.6591f,0.4006f,0.6592f,0.3906f,0.6538f,0.3807f,0.6592f,0.3706f,0.6591f,0.3649f,0.6605f,0.3719f,0.6606f,0.3818f,0.6596f});
  }
}
protected class MFFloat481 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat482 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32483 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFInt32484 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFVec3f485 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.4844f,-165.6356f,-29.3111f,50.2444f,-165.6356f,-17.1511f,69.0444f,-165.6356f,23.8844f,53.8f,-165.6356f,52.4356f,-0.3778f,-165.6356f,73.7556f,-27.2667f,-165.6356f,69.5778f,-51f,-165.6356f,-17.1511f,-69.8f,-165.6356f,23.8844f,-0.3778f,-165.6356f,-32.4667f,26.5111f,-165.6356f,69.5778f,-24.24f,-165.6356f,-29.3111f,-54.5556f,-165.6356f,52.4356f,23.4844f,-188.4667f,-29.3111f,50.2444f,-188.4667f,-17.1511f,69.0444f,-188.4667f,23.8844f,53.8f,-188.4667f,52.4356f,-0.3778f,-188.4667f,73.7556f,-27.2667f,-188.4667f,69.5778f,-51f,-188.4667f,-17.1511f,-69.8f,-188.4667f,23.8844f,-0.3778f,-188.4667f,-32.4667f,26.5111f,-188.4667f,69.5778f,-24.24f,-188.4667f,-29.3111f,-54.5556f,-188.4667f,52.4356f,21.6089f,-156.8089f,-20.9022f,-0.3778f,-156.8089f,-23.8f,-22.3644f,-156.8089f,-20.9022f,-45.1778f,-156.8089f,-10.5378f,-60.8667f,-156.8089f,23.7111f,-48.8667f,-156.8089f,46.1333f,-24.6533f,-156.8089f,61.3644f,-0.3778f,-156.8089f,65.1333f,23.8978f,-156.8089f,61.3644f,48.1111f,-156.8089f,46.1333f,60.1111f,-156.8089f,23.7111f,44.4222f,-156.8089f,-10.5378f,-0.3778f,-199.1911f,-23.8f,21.6089f,-199.1911f,-20.9022f,44.4222f,-199.1911f,-10.5378f,60.1111f,-199.1911f,23.7111f,48.1111f,-199.1911f,46.1333f,23.8978f,-199.1911f,61.3644f,-0.3778f,-199.1911f,65.1333f,-24.6533f,-199.1911f,61.3644f,-48.8667f,-199.1911f,46.1333f,-60.8667f,-199.1911f,23.7111f,-45.1778f,-199.1911f,-10.5378f,-22.3644f,-199.1911f,-20.9022f});
  }
}
protected class MFVec2f486 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6659f,0.4094f,0.6664f,0.4164f,0.6663f,0.4107f,0.6656f,0.3906f,0.6601f,0.3807f,0.6665f,0.3719f,0.6664f,0.3649f,0.6663f,0.3906f,0.666f,0.4006f,0.6665f,0.3818f,0.6659f,0.3706f,0.6656f,0.3995f,0.6628f,0.4094f,0.6635f,0.4164f,0.6634f,0.4107f,0.6624f,0.3906f,0.657f,0.3807f,0.6628f,0.3719f,0.6635f,0.3649f,0.6634f,0.3906f,0.6629f,0.4006f,0.6628f,0.3818f,0.6628f,0.3706f,0.6624f,0.3995f,0.6659f,0.3906f,0.666f,0.3818f,0.6659f,0.3719f,0.6664f,0.3649f,0.6663f,0.3706f,0.6656f,0.3807f,0.6665f,0.3906f,0.6601f,0.4006f,0.6665f,0.4107f,0.6656f,0.4164f,0.6663f,0.4094f,0.6664f,0.3906f,0.6629f,0.3995f,0.6628f,0.4094f,0.6635f,0.4164f,0.6634f,0.4107f,0.6624f,0.4006f,0.6628f,0.3906f,0.657f,0.3807f,0.6628f,0.3706f,0.6624f,0.3649f,0.6634f,0.3719f,0.6635f,0.3818f,0.6628f});
  }
}
protected class MFFloat487 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat488 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32489 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1});
  }
}
protected class MFInt32490 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1});
  }
}
protected class MFVec3f491 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.4844f,-165.3511f,-29.3111f,-0.3778f,-165.3511f,-32.4667f,50.2444f,-165.3511f,-17.1511f,69.0444f,-165.3511f,23.8889f,53.8f,-165.3511f,52.4356f,26.5111f,-165.3511f,69.5778f,-0.3778f,-165.3511f,73.7556f,-24.24f,-165.3511f,-29.3111f,-51f,-165.3511f,-17.1511f,-69.8f,-165.3511f,23.8844f,-54.5556f,-165.3511f,52.4356f,-27.2667f,-165.3511f,69.5778f,20.9467f,-154.7956f,-20.4533f,-0.3778f,-154.7956f,-23.28f,-21.7022f,-154.7956f,-20.4533f,-44.1289f,-154.7956f,-10.2578f,-59.6222f,-154.7956f,23.5778f,-47.6667f,-154.7956f,46.0044f,-24.0089f,-154.7956f,60.8756f,-0.3778f,-154.7956f,64.5422f,23.2533f,-154.7956f,60.8756f,46.9111f,-154.7956f,46.0044f,58.8667f,-154.7956f,23.5778f,43.3733f,-154.7956f,-10.2578f,23.4844f,-188.4533f,-29.3111f,50.2444f,-188.4533f,-17.1511f,69.0444f,-188.4533f,23.8889f,53.8f,-188.4533f,52.4356f,-0.3778f,-188.4533f,73.7556f,-27.2667f,-188.4533f,69.5778f,-51f,-188.4533f,-17.1511f,-69.8f,-188.4533f,23.8844f,-0.3778f,-188.4533f,-32.4667f,26.5111f,-188.4533f,69.5778f,-24.24f,-188.4533f,-29.3111f,-54.5556f,-188.4533f,52.4356f,-0.3778f,-198.0711f,-23.8f,21.6089f,-198.0711f,-20.9022f,44.4222f,-198.0711f,-10.5378f,60.1111f,-198.0711f,23.7111f,48.1111f,-198.0711f,46.1333f,23.8978f,-198.0711f,61.3644f,-0.3778f,-198.0711f,65.1333f,-24.6533f,-198.0711f,61.3644f,-48.8667f,-198.0711f,46.1333f,-60.8667f,-198.0711f,23.7111f,-45.1778f,-198.0711f,-10.5378f,-22.3644f,-198.0711f,-20.9022f});
  }
}
protected class MFVec2f492 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.6721f,0.3906f,0.6721f,0.4094f,0.6721f,0.4164f,0.6721f,0.4107f,0.6721f,0.4006f,0.6738f,0.3906f,0.6664f,0.3818f,0.6721f,0.3719f,0.6721f,0.3649f,0.6721f,0.3706f,0.6721f,0.3807f,0.6738f,0.3995f,0.6721f,0.3906f,0.6721f,0.3818f,0.6721f,0.3719f,0.6721f,0.3649f,0.6721f,0.3706f,0.6721f,0.3807f,0.6738f,0.3906f,0.6664f,0.4006f,0.6738f,0.4107f,0.6721f,0.4164f,0.6721f,0.4094f,0.6721f,0.3995f,0.669f,0.4094f,0.6692f,0.4164f,0.6692f,0.4107f,0.6689f,0.3906f,0.6632f,0.3807f,0.6702f,0.3719f,0.6692f,0.3649f,0.6692f,0.3906f,0.669f,0.4006f,0.6702f,0.3818f,0.669f,0.3706f,0.6689f,0.3906f,0.669f,0.3995f,0.669f,0.4094f,0.6692f,0.4164f,0.6692f,0.4107f,0.6689f,0.4006f,0.6702f,0.3906f,0.6632f,0.3807f,0.6702f,0.3706f,0.6689f,0.3649f,0.6692f,0.3719f,0.6692f,0.3818f,0.669f});
  }
}
protected class MFFloat493 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat494 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32495 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFInt32496 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
protected class MFVec3f497 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.4844f,-163.0933f,-29.3111f,50.2444f,-163.0933f,-17.1511f,69.0444f,-163.0933f,23.8889f,53.8f,-163.0933f,52.4356f,-0.3778f,-163.0933f,73.7556f,-27.2667f,-163.0933f,69.5778f,-51f,-163.0933f,-17.1511f,-69.8f,-163.0933f,23.8844f,-0.3778f,-163.0933f,-32.4667f,26.5111f,-163.0933f,69.5778f,-24.24f,-163.0933f,-29.3111f,-54.5556f,-163.0933f,52.4356f,23.4844f,-188.4356f,-29.3111f,50.2444f,-188.4356f,-17.1511f,69.0444f,-188.4356f,23.8844f,53.8f,-188.4356f,52.4356f,-0.3778f,-188.4356f,73.7556f,-27.2667f,-188.4356f,69.5778f,-51f,-188.4356f,-17.1511f,-69.8f,-188.4356f,23.8844f,-0.3778f,-188.4356f,-32.4667f,26.5111f,-188.4356f,69.5778f,-24.24f,-188.4356f,-29.3111f,-54.5556f,-188.4356f,52.4356f,21.6089f,-154.2978f,-20.9022f,-0.3778f,-154.2978f,-23.8f,-22.3644f,-154.2978f,-20.9022f,-45.1778f,-154.2978f,-10.5378f,-60.8667f,-154.2978f,23.7111f,-48.8667f,-154.2978f,46.1333f,-24.6533f,-154.2978f,61.3644f,-0.3778f,-154.2978f,65.1333f,23.8978f,-154.2978f,61.3644f,48.1111f,-154.2978f,46.1333f,60.1111f,-154.2978f,23.7111f,44.4222f,-154.2978f,-10.5378f,-0.3778f,-197.7689f,-23.8f,21.6089f,-197.7689f,-20.9022f,44.4222f,-197.7689f,-10.5378f,60.1111f,-197.7689f,23.7111f,48.1111f,-197.7689f,46.1333f,23.8978f,-197.7689f,61.3644f,-0.3778f,-197.7689f,65.1333f,-24.6533f,-197.7689f,61.3644f,-48.8667f,-197.7689f,46.1333f,-60.8667f,-197.7689f,23.7111f,-45.1778f,-197.7689f,-10.5378f,-22.3644f,-197.7689f,-20.9022f});
  }
}
protected class MFVec2f498 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f,0.669f,0.4094f,0.6692f,0.4164f,0.6692f,0.4107f,0.6689f,0.3906f,0.6632f,0.3807f,0.6702f,0.3719f,0.6692f,0.3649f,0.6692f,0.3906f,0.669f,0.4006f,0.6702f,0.3818f,0.669f,0.3706f,0.6689f,0.3995f,0.6659f,0.4094f,0.6664f,0.4164f,0.6663f,0.4107f,0.6656f,0.3906f,0.6601f,0.3807f,0.6665f,0.3719f,0.6664f,0.3649f,0.6663f,0.3906f,0.666f,0.4006f,0.6665f,0.3818f,0.6659f,0.3706f,0.6656f,0.3995f,0.669f,0.3906f,0.669f,0.3818f,0.669f,0.3719f,0.6692f,0.3649f,0.6692f,0.3706f,0.6689f,0.3807f,0.6702f,0.3906f,0.6632f,0.4006f,0.6702f,0.4107f,0.6689f,0.4164f,0.6692f,0.4094f,0.6692f,0.3906f,0.666f,0.3995f,0.6659f,0.4094f,0.6664f,0.4164f,0.6663f,0.4107f,0.6656f,0.4006f,0.6665f,0.3906f,0.6601f,0.3807f,0.6665f,0.3706f,0.6656f,0.3649f,0.6663f,0.3719f,0.6664f,0.3818f,0.6659f});
  }
}
protected class MFFloat499 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat500 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32501 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {51,38,41,-1,41,43,51,-1,43,52,171,-1,171,151,43,-1,49,42,41,-1,41,38,49,-1,44,186,171,-1,171,52,44,-1,78,76,51,-1,51,43,78,-1,189,78,43,-1,43,151,189,-1,9,172,13,-1,13,10,9,-1,73,193,9,-1,9,10,73,-1,11,50,27,-1,16,13,172,-1,13,67,14,-1,68,15,14,-1,7,6,67,-1,13,16,67,-1,7,67,16,-1,16,172,173,-1,7,16,136,-1,7,136,130,-1,131,132,173,-1,68,19,18,-1,18,15,68,-1,20,32,18,-1,17,8,32,-1,15,66,13,-1,13,14,15,-1,32,23,24,-1,24,17,32,-1,21,24,23,-1,21,22,24,-1,24,22,17,-1,27,25,11,-1,25,31,11,-1,22,28,17,-1,27,30,29,-1,12,26,29,-1,26,27,29,-1,27,28,30,-1,30,28,22,-1,6,14,67,-1,1,34,31,-1,34,36,35,-1,34,35,31,-1,34,1,36,-1,49,37,1,-1,1,40,49,-1,39,37,49,-1,49,38,39,-1,37,39,1,-1,42,49,40,-1,40,0,42,-1,44,52,0,-1,186,44,0,-1,0,149,186,-1,51,76,45,-1,45,76,77,-1,53,45,77,-1,1,39,45,-1,45,53,1,-1,45,39,38,-1,38,51,45,-1,53,77,46,-1,77,74,33,-1,33,46,77,-1,1,53,46,-1,46,36,1,-1,46,33,35,-1,35,36,46,-1,74,50,33,-1,8,17,47,-1,11,31,50,-1,35,33,50,-1,31,35,50,-1,50,74,75,-1,47,75,8,-1,27,50,28,-1,28,50,47,-1,28,47,17,-1,75,73,48,-1,48,73,10,-1,66,48,10,-1,10,13,66,-1,75,66,8,-1,66,75,48,-1,8,66,18,-1,18,32,8,-1,15,18,66,-1,47,50,75,-1,41,52,43,-1,42,0,41,-1,0,52,41,-1,0,54,149,-1,244,245,54,-1,0,56,54,-1,0,40,55,-1,55,57,0,-1,3,57,55,-1,0,57,56,-1,3,62,5,-1,5,62,58,-1,3,64,62,-1,2,61,62,-1,62,64,2,-1,3,60,64,-1,55,40,59,-1,64,60,59,-1,64,59,135,-1,149,54,245,-1,5,57,3,-1,54,5,244,-1,152,63,61,-1,153,63,152,-1,63,5,58,-1,153,244,63,-1,244,5,63,-1,58,61,63,-1,58,62,61,-1,56,5,54,-1,56,57,5,-1,60,3,55,-1,60,55,59,-1,1,133,135,-1,59,40,1,-1,59,1,135,-1,65,135,133,-1,2,65,133,-1,2,64,65,-1,64,135,65,-1,73,75,69,-1,263,193,73,-1,73,69,263,-1,69,75,74,-1,74,71,69,-1,71,74,77,-1,77,72,71,-1,69,71,266,-1,266,263,69,-1,72,70,266,-1,266,71,72,-1,78,72,77,-1,77,76,78,-1,189,70,72,-1,72,78,189,-1,138,123,113,-1,79,122,123,-1,122,79,80,-1,137,124,81,-1,137,81,82,-1,137,82,83,-1,83,79,137,-1,79,83,80,-1,84,116,122,-1,124,84,122,-1,84,119,116,-1,123,122,113,-1,113,122,109,-1,115,138,113,-1,113,114,115,-1,117,286,158,-1,158,112,117,-1,122,116,109,-1,79,123,133,-1,133,123,138,-1,133,137,79,-1,129,138,115,-1,110,117,112,-1,111,117,110,-1,2,133,138,-1,109,85,113,-1,86,113,85,-1,107,294,160,-1,160,126,107,-1,107,126,125,-1,125,108,107,-1,125,127,87,-1,87,108,125,-1,108,87,103,-1,103,104,108,-1,114,301,154,-1,154,115,114,-1,302,114,86,-1,86,159,302,-1,114,113,86,-1,116,105,109,-1,109,105,87,-1,85,88,86,-1,109,87,85,-1,104,174,305,-1,305,108,104,-1,305,175,108,-1,105,103,87,-1,307,91,170,-1,170,150,307,-1,174,104,95,-1,95,162,174,-1,311,150,170,-1,170,177,311,-1,116,90,105,-1,89,90,116,-1,94,168,167,-1,167,93,94,-1,105,90,96,-1,97,95,104,-1});
  }
}
protected class MFInt32502 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {104,103,97,-1,120,121,95,-1,95,97,120,-1,105,96,97,-1,97,103,105,-1,120,97,96,-1,96,98,120,-1,121,100,95,-1,163,91,162,-1,93,170,99,-1,98,96,90,-1,90,101,98,-1,99,163,100,-1,110,112,92,-1,101,90,89,-1,89,106,101,-1,92,112,165,-1,165,177,170,-1,175,294,107,-1,107,108,175,-1,119,89,116,-1,118,111,119,-1,118,117,111,-1,152,138,129,-1,2,138,61,-1,61,138,152,-1,87,127,88,-1,88,85,87,-1,124,119,84,-1,119,111,164,-1,111,166,164,-1,111,110,166,-1,92,166,110,-1,133,4,137,-1,133,134,4,-1,160,176,128,-1,128,126,160,-1,126,128,127,-1,127,125,126,-1,80,81,124,-1,124,122,80,-1,82,81,80,-1,80,83,82,-1,129,115,154,-1,154,152,129,-1,94,140,139,-1,139,102,94,-1,93,141,140,-1,140,94,93,-1,99,142,141,-1,141,93,99,-1,100,143,142,-1,142,99,100,-1,121,144,143,-1,143,100,121,-1,120,145,144,-1,144,121,120,-1,98,146,145,-1,145,120,98,-1,101,147,146,-1,146,98,101,-1,106,148,147,-1,147,101,106,-1,106,102,139,-1,139,148,106,-1,114,302,301,-1,88,127,155,-1,155,157,88,-1,127,161,156,-1,156,155,127,-1,352,353,156,-1,156,161,352,-1,156,353,354,-1,155,156,354,-1,155,354,157,-1,127,128,161,-1,161,128,176,-1,176,352,161,-1,168,94,102,-1,102,169,168,-1,170,93,167,-1,169,102,106,-1,106,164,169,-1,170,91,99,-1,99,91,163,-1,100,163,162,-1,162,95,100,-1,91,307,174,-1,174,162,91,-1,164,106,89,-1,164,89,119,-1,165,170,167,-1,92,165,167,-1,167,168,92,-1,166,92,168,-1,168,169,166,-1,164,166,169,-1,165,112,177,-1,177,112,158,-1,158,311,177,-1,180,179,178,-1,178,181,180,-1,179,151,171,-1,171,182,179,-1,183,181,178,-1,178,184,183,-1,185,182,171,-1,171,186,185,-1,187,179,180,-1,180,188,187,-1,189,151,179,-1,179,187,189,-1,9,191,190,-1,190,172,9,-1,192,191,9,-1,9,193,192,-1,194,196,195,-1,197,172,190,-1,190,199,198,-1,200,199,201,-1,202,198,203,-1,190,198,197,-1,202,197,198,-1,197,173,172,-1,202,204,197,-1,202,205,204,-1,206,173,207,-1,200,201,208,-1,208,209,200,-1,210,208,211,-1,212,211,213,-1,201,199,190,-1,190,214,201,-1,211,212,215,-1,215,216,211,-1,217,216,215,-1,217,215,218,-1,215,212,218,-1,196,194,219,-1,219,194,220,-1,218,212,221,-1,196,223,222,-1,224,223,225,-1,225,223,196,-1,196,222,221,-1,222,218,221,-1,203,198,199,-1,226,220,227,-1,227,229,228,-1,227,220,229,-1,227,228,226,-1,183,230,226,-1,226,231,183,-1,232,181,183,-1,183,231,232,-1,231,226,232,-1,184,233,230,-1,230,183,184,-1,185,233,182,-1,186,149,233,-1,233,185,186,-1,180,234,188,-1,234,235,188,-1,236,235,234,-1,226,236,234,-1,234,232,226,-1,234,180,181,-1,181,232,234,-1,236,237,235,-1,235,237,238,-1,238,239,235,-1,226,228,237,-1,237,236,226,-1,237,228,229,-1,229,238,237,-1,239,238,195,-1,213,240,212,-1,194,195,220,-1,229,195,238,-1,220,195,229,-1,195,241,239,-1,240,213,241,-1,196,221,195,-1,221,240,195,-1,221,212,240,-1,241,242,192,-1,242,191,192,-1,214,190,191,-1,191,242,214,-1,241,213,214,-1,214,242,241,-1,213,211,208,-1,208,214,213,-1,201,214,208,-1,240,241,195,-1,178,179,182,-1,184,178,233,-1,233,178,182,-1,233,149,243,-1,244,243,245,-1,233,243,246,-1,233,248,247,-1,247,230,233,-1,249,247,248,-1,233,246,248,-1,249,251,250,-1,251,252,250,-1,249,250,253,-1,254,253,250,-1,250,255,254,-1});
  }
}
protected class MFInt32503 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {249,253,256,-1,247,257,230,-1,253,257,256,-1,253,258,257,-1,149,245,243,-1,251,249,248,-1,243,244,251,-1,152,255,259,-1,153,152,259,-1,259,252,251,-1,153,259,244,-1,244,259,251,-1,252,259,255,-1,252,255,250,-1,246,243,251,-1,246,251,248,-1,256,247,249,-1,256,257,247,-1,226,258,260,-1,257,226,230,-1,257,258,226,-1,261,260,258,-1,254,260,261,-1,254,261,253,-1,253,261,258,-1,192,262,241,-1,263,262,192,-1,192,193,263,-1,262,264,239,-1,239,241,262,-1,264,265,235,-1,235,239,264,-1,262,263,266,-1,266,264,262,-1,265,264,266,-1,266,70,265,-1,187,188,235,-1,235,265,187,-1,189,187,265,-1,265,70,189,-1,267,269,268,-1,270,268,271,-1,271,272,270,-1,273,275,274,-1,273,276,275,-1,273,270,277,-1,277,276,273,-1,270,272,277,-1,278,271,279,-1,274,271,278,-1,278,279,280,-1,268,269,271,-1,269,281,271,-1,283,282,269,-1,269,267,283,-1,285,284,158,-1,158,286,285,-1,271,281,279,-1,270,260,268,-1,260,267,268,-1,260,270,273,-1,287,283,267,-1,288,284,285,-1,289,288,285,-1,254,267,260,-1,281,269,290,-1,291,290,269,-1,293,292,160,-1,160,294,293,-1,293,296,295,-1,295,292,293,-1,295,296,297,-1,297,298,295,-1,296,300,299,-1,299,297,296,-1,282,283,154,-1,154,301,282,-1,302,159,291,-1,291,282,302,-1,282,291,269,-1,279,281,303,-1,281,297,303,-1,290,291,304,-1,281,290,297,-1,300,296,305,-1,305,174,300,-1,305,296,175,-1,303,297,299,-1,307,150,306,-1,306,308,307,-1,174,310,309,-1,309,300,174,-1,311,312,306,-1,306,150,311,-1,279,303,313,-1,314,279,313,-1,315,318,317,-1,317,316,315,-1,303,319,313,-1,320,299,300,-1,300,309,320,-1,321,320,309,-1,309,322,321,-1,303,299,320,-1,320,319,303,-1,321,323,319,-1,319,320,321,-1,322,309,324,-1,325,310,308,-1,318,326,306,-1,323,327,313,-1,313,319,323,-1,326,324,325,-1,288,328,284,-1,327,329,314,-1,314,313,327,-1,328,330,284,-1,330,306,312,-1,175,293,294,-1,293,175,296,-1,280,279,314,-1,331,280,289,-1,331,289,285,-1,152,287,267,-1,254,255,267,-1,255,152,267,-1,297,290,304,-1,304,298,297,-1,274,278,280,-1,280,332,289,-1,289,332,333,-1,289,333,288,-1,328,288,333,-1,260,273,334,-1,260,334,335,-1,160,292,336,-1,336,176,160,-1,292,295,298,-1,298,336,292,-1,272,271,274,-1,274,275,272,-1,276,277,272,-1,272,275,276,-1,287,152,154,-1,154,283,287,-1,315,337,339,-1,339,338,315,-1,318,315,338,-1,338,340,318,-1,326,318,340,-1,340,341,326,-1,324,326,341,-1,341,342,324,-1,322,324,342,-1,342,343,322,-1,321,322,343,-1,343,344,321,-1,323,321,344,-1,344,345,323,-1,327,323,345,-1,345,346,327,-1,329,327,346,-1,346,347,329,-1,329,347,339,-1,339,337,329,-1,282,301,302,-1,304,349,348,-1,348,298,304,-1,298,348,351,-1,351,350,298,-1,352,350,351,-1,351,353,352,-1,348,349,354,-1,354,353,351,-1,348,354,351,-1,298,350,336,-1,350,352,176,-1,176,336,350,-1,316,355,337,-1,337,315,316,-1,306,317,318,-1,355,332,329,-1,329,337,355,-1,306,326,308,-1,326,325,308,-1,324,309,310,-1,310,325,324,-1,308,310,174,-1,174,307,308,-1,332,314,329,-1,332,280,314,-1,330,317,306,-1,328,316,317,-1,317,330,328,-1,333,355,316,-1,316,328,333,-1,332,355,333,-1,330,312,284,-1,312,311,158,-1,158,284,312,-1});
  }
}
protected class MFInt32504 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,18,69,117,-1,118,19,18,-1,18,117,118,-1,117,69,67,-1,67,119,117,-1,119,67,63,-1,63,120,119,-1,117,119,121,-1,121,118,117,-1,120,122,121,-1,121,119,120,-1,11,120,63,-1,63,12,11,-1,13,122,120,-1,120,11,13,-1,125,124,123,-1,127,126,124,-1,126,127,128,-1,131,130,129,-1,131,129,132,-1,131,132,133,-1,133,127,131,-1,127,133,128,-1,135,134,126,-1,130,135,126,-1,135,136,134,-1,124,126,123,-1,123,126,137,-1,138,125,123,-1,123,139,138,-1,140,143,142,-1,142,141,140,-1,126,134,137,-1,127,124,144,-1,144,124,125,-1,144,131,127,-1,145,125,138,-1,146,140,141,-1,147,140,146,-1,148,144,125,-1,137,149,123,-1,150,123,149,-1,153,156,155,-1,155,154,153,-1,153,154,158,-1,158,157,153,-1,158,160,159,-1,159,157,158,-1,157,159,162,-1,162,161,157,-1,139,215,164,-1,164,138,139,-1,163,139,150,-1,150,165,163,-1,139,123,150,-1,168,167,166,-1,166,167,159,-1,169,151,152,-1,166,159,169,-1,161,172,170,-1,170,157,161,-1,170,171,157,-1,167,162,159,-1,173,176,236,-1,236,174,173,-1,172,161,177,-1,177,233,172,-1,241,174,236,-1,236,240,241,-1,168,180,167,-1,181,180,168,-1,183,238,237,-1,237,231,183,-1,167,180,186,-1,187,177,161,-1});
  }
}
protected class MFInt32505 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {161,162,187,-1,188,189,177,-1,177,187,188,-1,167,186,187,-1,187,162,167,-1,188,187,186,-1,186,190,188,-1,189,192,177,-1,234,176,233,-1,231,175,191,-1,190,186,180,-1,180,193,190,-1,191,234,192,-1,146,141,195,-1,193,180,181,-1,181,194,193,-1,195,141,196,-1,196,240,236,-1,171,156,153,-1,153,157,171,-1,197,181,168,-1,198,147,242,-1,198,140,147,-1,199,125,145,-1,148,125,200,-1,200,125,199,-1,159,160,151,-1,151,169,159,-1,130,136,135,-1,242,147,184,-1,147,201,184,-1,147,146,201,-1,195,201,146,-1,144,202,131,-1,144,148,202,-1,155,204,203,-1,203,154,155,-1,154,203,160,-1,160,158,154,-1,205,208,207,-1,207,206,205,-1,209,208,205,-1,205,210,209,-1,213,214,211,-1,211,212,213,-1,191,191,192,-1,192,192,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,192,192,191,-1,191,191,192,-1,189,189,192,-1,192,192,189,-1,188,188,189,-1,189,189,188,-1,190,190,188,-1,188,188,190,-1,193,193,190,-1,190,190,193,-1,194,194,193,-1,193,193,194,-1,194,232,232,-1,232,194,194,-1,139,163,215,-1,222,223,217,-1,217,216,222,-1,223,229,218,-1,218,217,223,-1,228,219,218,-1,218,229,228,-1,218,219,221,-1,217,218,221,-1,217,221,220,-1,224,225,226,-1,226,225,227,-1,227,230,226,-1,238,183,232,-1,232,239,238,-1,175,231,237,-1,239,232,194,-1,194,178,239,-1,175,176,191,-1,191,176,234,-1,192,234,233,-1,233,177,192,-1,176,173,172,-1,172,233,176,-1,178,194,181,-1,184,235,242,-1,196,236,179,-1,195,196,179,-1,179,182,195,-1,201,195,182,-1,182,185,201,-1,184,201,185,-1,196,141,240,-1,240,141,142,-1,142,241,240,-1,245,244,243,-1,243,246,245,-1,244,248,247,-1,247,249,244,-1,250,246,243,-1,243,251,250,-1,252,249,247,-1,247,253,252,-1,254,244,245,-1,245,255,254,-1,256,248,244,-1,244,254,256,-1,259,258,257,-1,257,260,259,-1,261,258,259,-1,259,262,261,-1,263,265,264,-1,266,260,257,-1,257,268,267,-1,269,268,270,-1,271,267,272,-1,257,267,266,-1,271,266,267,-1,273,274,260,-1,271,275,266,-1,276,273,275,-1,276,274,273,-1,269,270,277,-1,277,278,269,-1,279,277,280,-1,281,280,282,-1,270,268,257,-1,257,283,270,-1,280,281,284,-1,284,285,280,-1,286,285,284,-1,286,284,287,-1,284,281,287,-1,265,263,288,-1,288,263,289,-1,287,281,290,-1,265,292,291,-1,293,292,294,-1,294,292,265,-1,265,291,290,-1,291,287,290,-1,272,267,268,-1,295,289,296,-1,296,298,297,-1,296,289,298,-1,296,297,295,-1,250,299,295,-1,295,300,250,-1,302,301,250,-1,250,300,302,-1,300,295,302,-1,251,303,299,-1,299,250,251,-1,252,303,249,-1,253,304,303,-1,303,252,253,-1,245,305,255,-1,305,306,255,-1,307,306,305,-1,295,307,305,-1,305,302,295,-1,305,245,301,-1,301,302,305,-1,307,308,306,-1,306,308,309,-1,309,310,306,-1,295,297,308,-1,308,307,295,-1,308,297,298,-1,298,309,308,-1,310,309,264,-1,282,311,281,-1,263,264,289,-1,298,264,309,-1,289,264,298,-1,264,312,310,-1,311,282,312,-1,265,290,264,-1,290,311,264,-1,290,281,311,-1,312,313,261,-1,313,258,261,-1,283,257,258,-1,258,313,283,-1,312,282,314,-1,314,313,312,-1,282,280,277,-1,277,314,282,-1,270,314,277,-1,311,312,264,-1,243,244,249,-1,251,243,303,-1,303,243,249,-1,315,317,316,-1,318,320,319,-1,315,316,321,-1,315,323,322,-1,322,324,315,-1,325,322,323,-1,315,321,323,-1,325,327,326,-1,327,328,326,-1,325,326,329,-1,332,331,330,-1,330,333,332,-1});
  }
}
protected class MFInt32506 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {334,331,335,-1,322,336,324,-1,331,337,335,-1,329,338,336,-1,317,339,316,-1,327,325,323,-1,316,340,327,-1,341,343,342,-1,344,346,345,-1,342,328,327,-1,347,342,340,-1,340,342,327,-1,348,345,333,-1,348,333,330,-1,349,320,350,-1,349,350,351,-1,352,322,325,-1,352,336,322,-1,353,355,354,-1,336,356,324,-1,336,338,356,-1,357,354,355,-1,358,354,357,-1,332,359,329,-1,329,359,338,-1,261,360,312,-1,361,360,261,-1,261,262,361,-1,360,362,310,-1,310,312,360,-1,362,363,306,-1,306,310,362,-1,360,361,364,-1,364,362,360,-1,363,362,364,-1,364,365,363,-1,254,255,306,-1,306,363,254,-1,256,254,363,-1,363,365,256,-1,366,368,367,-1,369,367,370,-1,370,371,369,-1,372,374,373,-1,372,375,374,-1,372,369,376,-1,376,375,372,-1,369,371,376,-1,377,370,378,-1,373,370,377,-1,377,378,379,-1,367,368,370,-1,368,380,370,-1,382,381,368,-1,368,366,382,-1,385,384,383,-1,383,386,385,-1,370,380,378,-1,369,387,367,-1,387,366,367,-1,387,369,372,-1,388,382,366,-1,389,384,385,-1,390,389,385,-1,391,366,387,-1,380,368,392,-1,393,392,368,-1,396,395,394,-1,394,397,396,-1,396,399,398,-1,398,395,396,-1,398,399,400,-1,400,401,398,-1,399,403,402,-1,402,400,399,-1,381,382,405,-1,405,404,381,-1,406,407,393,-1,393,381,406,-1,381,393,368,-1,408,410,409,-1,410,400,409,-1,411,413,412,-1,410,411,400,-1,403,399,414,-1,414,415,403,-1,414,399,416,-1,409,400,402,-1,419,418,417,-1,417,420,419,-1,415,422,421,-1,421,403,415,-1,423,424,417,-1,417,418,423,-1,408,409,425,-1,426,408,425,-1,427,430,429,-1,429,428,427,-1,409,431,425,-1,432,402,403,-1,403,421,432,-1,433,432,421,-1,421,434,433,-1,409,402,432,-1,432,431,409,-1,433,435,431,-1,431,432,433,-1,434,421,436,-1,437,422,420,-1,430,439,438,-1,435,440,425,-1,425,431,435,-1,439,436,437,-1,389,441,384,-1,440,442,426,-1,426,425,440,-1,441,443,384,-1,443,417,424,-1,416,396,397,-1,396,416,399,-1,444,408,426,-1,445,446,390,-1,445,390,385,-1,447,388,366,-1,391,448,366,-1,448,447,366,-1,400,411,412,-1,412,401,400,-1,373,377,379,-1,446,449,390,-1,390,449,450,-1,390,450,389,-1,441,389,450,-1,387,372,451,-1,387,451,391,-1,394,395,452,-1,452,453,394,-1,395,398,401,-1,401,452,395,-1,456,455,454,-1,454,457,456,-1,459,458,456,-1,456,457,459,-1,462,461,460,-1,460,463,462,-1,439,436,436,-1,436,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,436,439,439,-1,439,436,436,-1,434,436,436,-1,436,434,434,-1,433,434,434,-1,434,433,433,-1,435,433,433,-1,433,435,435,-1,440,435,435,-1,435,440,440,-1,442,440,440,-1,440,442,442,-1,442,442,464,-1,464,464,442,-1,381,404,406,-1,465,468,467,-1,467,466,465,-1,466,467,470,-1,470,469,466,-1,471,469,470,-1,470,472,471,-1,467,474,473,-1,473,472,470,-1,467,473,470,-1,475,477,476,-1,477,479,478,-1,478,476,477,-1,428,480,464,-1,464,427,428,-1,438,429,430,-1,480,481,442,-1,442,464,480,-1,438,439,420,-1,439,437,420,-1,436,421,422,-1,422,437,436,-1,420,422,415,-1,415,419,420,-1,481,426,442,-1,449,446,482,-1,443,483,417,-1,441,484,483,-1,483,443,441,-1,450,485,484,-1,484,441,450,-1,449,485,450,-1,443,424,384,-1,424,423,383,-1,383,384,424,-1});
  }
}
protected class MFVec3f507 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {115f,-52.7556f,-295.4889f,258.2889f,-14.5333f,-78.8667f,164.6f,-134.0889f,-81.1333f,144.5556f,-123.9556f,-168.3333f,251.0889f,-73.0222f,-67.4889f,80.5111f,-131.2444f,-208.8667f,106.0667f,31.4667f,302.6889f,34.1156f,29.7778f,326.5556f,195.5333f,220.4889f,183.8889f,-0.3778f,311.4667f,271.7556f,98.5111f,295.4667f,256.3778f,264.6f,7.6444f,72.4222f,179.2222f,-151.2756f,177.2222f,87.2667f,238.1778f,303.1778f,112.3778f,122.6222f,303.4f,163.8f,106.9778f,255.6222f,19.5111f,137.7333f,347.8444f,214.8667f,86.4889f,173.1333f,172.3333f,104.4889f,240.6889f,163.2222f,42.3111f,242.9111f,169.6667f,33.7333f,227.9333f,145.5778f,-78.6667f,220.2f,201.5333f,-5.2444f,176.1556f,171.1333f,-16.9333f,214.6f,202.9556f,-20f,198.6889f,224.7333f,-135.9556f,76.0667f,215.7556f,-111.6444f,125.9778f,233.2222f,-68.7556f,110.6f,246.2444f,57.3333f,141.2667f,229f,-98.0889f,141.6222f,241.4889f,-16.1778f,148.9556f,271.2222f,6.5333f,32.3511f,180.1556f,72.2667f,208.2444f,266.6f,160.6222f,-4.4089f,311.6667f,-114.7111f,-20.0533f,291.5333f,27.2444f,-11.8356f,280.7778f,19.9556f,-48.2444f,276.5111f,-151.6311f,-132.2889f,220.8222f,49.8667f,-231.4889f,280.7778f,18.4f,-110.4667f,187f,-36.2222f,-207.4f,156.1556f,70.0444f,-297.8444f,151.8f,-105.8667f,-302.8222f,109.8f,163.6889f,-279.6667f,85.2667f,-100.4889f,-374.4667f,247.8f,153.2889f,-102.9111f,259.7556f,152.9333f,-58.1111f,229.8889f,188.1778f,114.1556f,134.6444f,291.0222f,218.1556f,227.3111f,-53.7778f,-215.0889f,251.3556f,169.7333f,59.5511f,209.4444f,163.6889f,-213.0444f,109.8f,70.1333f,-311.9333f,248.2889f,150.5778f,-74.5111f,51.7556f,-107.1111f,-251.0889f,176.4222f,-85.2444f,-185.5778f,129.2667f,-229.8f,-304.2444f,147.3111f,-96.0889f,-218.0667f,87.0889f,-257.9111f,-202.1556f,209.0889f,-79.9111f,-133.8889f,196.0667f,-201.5289f,-178.3333f,62.3333f,-163.9067f,-134.2f,100.7333f,-149.3911f,-146.6f,41.4311f,-156.9644f,-181f,169.3111f,-111.6889f,-118.8667f,206.9111f,-105.6f,-43.1778f,162.1556f,219.8222f,241.0889f,68.9111f,134.4f,332.1111f,123.6667f,35.5111f,288.0667f,109.8f,371.4667f,118.0222f,-0.3778f,379.0222f,-115.9333f,109.8f,389.6889f,-5.6f,109.8f,365.6889f,-115.9333f,109.8f,335.9111f,183.5333f,210.2f,306.1333f,-5.6f,203.2222f,282.1333f,104.7778f,211.8889f,226.6667f,-168.4222f,206.3333f,297.6889f,-99.1778f,109.8f,281.6889f,-240.3778f,223.5333f,-95.7778f,32.3511f,237.4444f,-87.6889f,32.0578f,247.4f,33.3778f,42.32f,255.5778f,3.1556f,-9.0844f,251.7111f,-49.9111f,-9.9511f,204.8222f,-14.3556f,108.6889f,111.0444f,-179.1022f,174.7333f,55.2667f,-219.8089f,187.4444f,96.5556f,-131.2f,229.6667f,47.7556f,-197.7111f,222.0222f,177.6667f,-0.7111f,173.9778f,170.4222f,-33.6f,175.0444f,11.2444f,-13.0222f,279.4444f,90.4222f,37.8667f,278.5556f,70.6889f,-0.7556f,261.9333f,96.2889f,8f,255.8444f,46.7778f,-62.2667f,253.5333f,148.2889f,-63.8222f,197.8444f,117.2667f,-66.3111f,219.8f,136.6f,-29.3778f,207.5778f,46.0222f,-15.8667f,263.0444f,59.8889f,-26.6667f,253.5778f,143.0444f,-23.7778f,203.3556f,134.2f,14.4444f,228.7778f,109.4889f,-98.6222f,230.5111f,40.4844f,-83.9111f,259.8444f,155.8444f,-90.8f,182.0222f,163.4f,-0.7556f,193.5778f,6.1022f,-137.8222f,285.8444f,20.0311f,-124.4444f,267.2667f,152.6444f,-134.3111f,162.9111f,87.2667f,108.6222f,277.0444f,157.4444f,98.9333f,227.7556f,49.6222f,106.6222f,297.2667f,124.0222f,-175.3733f,108.6889f,63.5333f,-223.1956f,150.4222f,92.8667f,-191.2978f,37.9511f,192.6f,-55.4667f,131.0444f,87.2667f,263.9111f,256.1111f,169.8f,170.6222f,201.8889f,210.9111f,56.7556f,152.6444f,123.8444f,-29.9556f,220.5111f,81.1778f,-29.1111f,243.3556f,180.6889f,-107.9556f,86.8222f,180.6444f,-120.2222f,9.4889f,212.8667f,7.6444f,72.4222f,17.7511f,-154.2622f,275.4444f,9.5956f,-153.0267f,280.3333f,52.2444f,-166.2622f,238.2f,9.5956f,-162.28f,267.0889f,92.5556f,-192.7244f,-51.7556f,19.5111f,137.7333f,347.8444f,34.1156f,29.7778f,326.5556f,19.5111f,137.7333f,347.8444f,210.0222f,-86.5333f,-0.6f,164.6f,-134.0889f,-81.1333f,251.0889f,-73.0222f,-67.4889f,22.4222f,109.1556f,337.0444f,224.2444f,6.5333f,32.3511f,157.8889f,-140.4889f,-48.4222f,92.5111f,8.4444f,185.0444f,71.6667f,5.0667f,203.8889f,58.8222f,-1.7778f,208.0667f,47.1778f,-13.8667f,209.2667f,55.3556f,-22.4444f,204.1556f,66.9111f,-24.5333f,197.8889f,90.0667f,-25.9556f,183.2222f,97.4889f,-26.4444f,174.2f,100.7778f,-22.4444f,170.7778f,110.6889f,-5.5111f,162.0222f,-0.3778f,-66.8444f,-314.9556f,-0.3778f,-2.2222f,294.4222f,-0.3778f,163.6889f,-305.8889f,-0.3778f,-182.4222f,-139f,-0.3778f,-230.4667f,-270.0222f,-0.3778f,-216.7511f,88.7333f,25.4267f,-170.0089f,190.1111f,5.3467f,-169.6578f,198.9556f,24.36f,-198.3511f,178.4222f,-0.3778f,103.7778f,310.8222f,-0.3778f,-246.2667f,211f,-0.3778f,-153.0267f,280.3333f,9.0978f,-163.1422f,259.0889f,25.96f,-33.4222f,268.7333f,40.6933f,-21.2889f,263.8f,170.4222f,38.6667f,202.5556f,49.0444f,24.1778f,291.3111f,144.5556f,45.3333f,234.6889f,58.6f,12.4444f,281.0444f,92.4667f,22.9333f,269.4889f,140.5556f,31.4667f,233.2667f,28.3333f,0.8889f,292.2889f,-0.3778f,56.7556f,-333.3556f,-0.3778f,244.3556f,325.4889f,-0.3778f,146.9333f,349.7556f,-0.3778f,-55.2889f,281.6222f,-0.3778f,-110.6222f,323.3556f,-0.3778f,-162.28f,267.0889f,32.6267f,22.2667f,293.3111f,-156.9111f,70.0444f,-297.8444f,-110.5556f,163.6889f,-279.6667f,-210.2f,163.6889f,-213.0444f,-221.5778f,49.8667f,-231.4889f,-110.5556f,70.1333f,-311.9333f,-228.0667f,-53.7778f,-215.0889f,-152.5556f,-105.8667f,-302.8222f,-86.0222f,-100.4889f,-374.4667f,-0.3778f,-21.7333f,-355.0889f,-110.5556f,281.6889f,-240.3778f,-212.6444f,226.6667f,-168.4222f,-0.3778f,296.3556f,-248.8667f,-88.0222f,238.1778f,303.1778f,-99.2667f,295.4667f,256.3778f,-110.5556f,335.9111f,183.5333f,-0.3778f,353.2444f,201.4889f,-265.3556f,7.6444f,72.4222f,-252.1111f,169.7333f,59.5511f,-233.9778f,-68.7556f,110.6f,-20.2667f,137.7333f,347.8444f,-69.6667f,134.4f,332.1111f,-113.1333f,122.6222f,303.4f,-124.4222f,35.5111f,288.0667f,-164.5556f,106.9778f,255.6222f,-34.8711f,29.7778f,326.5556f,-106.8222f,31.4667f,302.6889f,-23.1778f,109.1556f,337.0444f,-20.2667f,137.7333f,347.8444f,-34.8711f,29.7778f,326.5556f,-20.2667f,137.7333f,347.8444f,-173.0889f,104.4889f,240.6889f,-163.9778f,42.3111f,242.9111f,-170.4222f,33.7333f,227.9333f,-180.9111f,72.2667f,208.2444f,-215.6222f,86.4889f,173.1333f,-196.2889f,220.4889f,183.8889f,-162.9111f,219.8222f,241.0889f,-203.7111f,-20f,198.6889f,-171.8889f,-16.9333f,214.6f,-146.3333f,-78.6667f,220.2f,-202.2889f,-5.2444f,176.1556f,-225.4889f,-135.9556f,76.0667f,-271.9778f,6.5333f,32.3511f,-247f,57.3333f,141.2667f,-242.2444f,-16.1778f,148.9556f,-229.7556f,-98.0889f,141.6222f,-179.9778f,-151.2756f,177.2222f,-216.5111f,-111.6444f,125.9778f,-259.0444f,-14.5333f,-78.8667f,-312.4222f,-114.7111f,-20.0533f,-281.5333f,19.9556f,-48.2444f,-292.2889f,27.2444f,-11.8356f,-187.7556f,-36.2222f,-207.4f,-277.2667f,-151.6311f,-132.2889f,-281.5333f,18.4f,-110.4667f,-115.7556f,-52.7556f,-295.4889f,-248.5556f,153.2889f,-102.9111f,-207.0889f,297.6889f,-99.1778f,-249.0444f,150.5778f,-74.5111f,-260.5111f,152.9333f,-58.1111f,-267.3556f,160.6222f,-4.4089f,-210.9556f,306.1333f,-5.6f,-230.6444f,188.1778f,114.1556f,-203.9778f,282.1333f,104.7778f,-135.4f,291.0222f,218.1556f,-52.5111f,-107.1111f,-251.0889f,-0.3778f,-142.5333f,-247.4f,-0.3778f,-183.08f,-347.4f,-130.0222f,-229.8f,-304.2444f,-177.1778f,-85.2444f,-185.5778f,-148.0667f,-96.0889f,-218.0667f,-145.3111f,-123.9556f,-168.3333f,-101.4889f,-149.3911f,-146.6f,-81.2667f,-131.2444f,-208.8667f,-87.8444f,-257.9111f,-202.1556f,-170.0667f,-111.6889f,-118.8667f,-165.3556f,-134.0889f,-81.1333f,-63.0889f,-163.9067f,-134.2f,-196.8222f,-201.5289f,-178.3333f,-209.8444f,-79.9111f,-133.8889f,-251.8444f,-73.0222f,-67.4889f,-42.1867f,-156.9644f,-181f,-210.7778f,-86.5333f,-0.6f,-207.6667f,-105.6f,-43.1778f,-110.5556f,371.4667f,118.0222f,-0.3778f,384.3556f,118.0222f,-110.5556f,389.6889f,-5.6f,-110.5556f,365.6889f,-115.9333f,-0.3778f,402.5778f,-5.6f,-158.6444f,-140.4889f,-48.4222f,-181.4f,-120.2222f,9.4889f,-124.7778f,-175.3733f,108.6889f,-224.2889f,-95.7778f,32.3511f,-181.4444f,-107.9556f,86.8222f,-238.2f,-87.6889f,32.0578f,-225f,6.5333f,32.3511f,-213.6222f,7.6444f,72.4222f,-248.1556f,33.3778f,42.32f,-256.3333f,3.1556f,-9.0844f,-252.4667f,-49.9111f,-9.9511f,-205.5778f,-14.3556f,108.6889f,-193.3556f,-55.4667f,131.0444f});
  }
}
protected class MFVec3f508 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-211.6667f,56.7556f,152.6444f,-153.4f,-134.3111f,162.9111f,-64.2889f,-223.1956f,150.4222f,-93.6222f,-191.2978f,37.9511f,-50.3778f,106.6222f,297.2667f,-88.0222f,263.9111f,256.1111f,-0.3778f,248.6667f,278.4222f,-93.3111f,-192.7244f,-51.7556f,-88.0222f,108.6222f,277.0444f,-158.2f,98.9333f,227.7556f,-111.8f,-179.1022f,174.7333f,-56.0222f,-219.8089f,187.4444f,-10.3511f,-153.0267f,280.3333f,-6.8578f,-137.8222f,285.8444f,-0.3778f,-137.8222f,285.8889f,-18.5067f,-154.2622f,275.4444f,-20.7867f,-124.4444f,267.2667f,-97.3111f,-131.2f,229.6667f,-53f,-166.2622f,238.2f,-110.2444f,-98.6222f,230.5111f,-41.24f,-83.9111f,259.8444f,-0.3778f,-235.8667f,154.3778f,-0.3778f,-243.2f,179.5333f,-156.6f,-90.8f,182.0222f,-48.5111f,-197.7111f,222.0222f,-0.3778f,-90.4889f,307.1333f,-29.0889f,0.8889f,292.2889f,-0.3778f,-13.0222f,279.4444f,-12f,-13.0222f,279.4444f,-47.5333f,-62.2667f,253.5333f,-26.7156f,-33.4222f,268.7333f,-0.3778f,21.6889f,298.1111f,-33.3822f,22.2667f,293.3111f,-171.1778f,-33.6f,175.0444f,-178.4222f,-0.7111f,173.9778f,-97.0444f,8f,255.8444f,-93.2222f,22.9333f,269.4889f,-59.3556f,12.4444f,281.0444f,-71.4444f,-0.7556f,261.9333f,-149.0444f,-63.8222f,197.8444f,-118.0222f,-66.3111f,219.8f,-124.6f,-29.9556f,220.5111f,-81.9333f,-29.1111f,243.3556f,-137.3556f,-29.3778f,207.5778f,-60.6444f,-26.6667f,253.5778f,-41.4489f,-21.2889f,263.8f,-46.7778f,-15.8667f,263.0444f,-143.8f,-23.7778f,203.3556f,-91.1778f,37.8667f,278.5556f,-164.1556f,-0.7556f,193.5778f,-49.8f,24.1778f,291.3111f,-170.5556f,170.6222f,201.8889f,-171.1778f,38.6667f,202.5556f,-145.3111f,45.3333f,234.6889f,-251.8444f,-73.0222f,-67.4889f,-165.3556f,-134.0889f,-81.1333f,-10.3511f,-162.28f,267.0889f,-134.9556f,14.4444f,228.7778f,-72.4222f,5.0667f,203.8889f,-93.2667f,8.4444f,185.0444f,-59.5778f,-1.7778f,208.0667f,-47.9333f,-13.8667f,209.2667f,-56.1111f,-22.4444f,204.1556f,-67.6667f,-24.5333f,197.8889f,-90.8222f,-25.9556f,183.2222f,-98.2444f,-26.4444f,174.2f,-101.5333f,-22.4444f,170.7778f,-111.4444f,-5.5111f,162.0222f,-26.1822f,-170.0089f,190.1111f,-25.1156f,-198.3511f,178.4222f,-9.8533f,-163.1422f,259.0889f,-6.1022f,-169.6578f,198.9556f,-0.3778f,-163.0978f,259.2222f,-0.3778f,-169.3956f,198.6889f,-0.3778f,-200.1422f,166.6889f,-141.3111f,31.4667f,233.2667f});
  }
}
protected class MFVec2f509 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9175f,0.8974f,0.9509f,0.8981f,0.9421f,0.8701f,0.924f,0.8702f,0.9824f,0.8971f,0.9824f,0.8682f,0.9541f,0.8718f,0.9147f,0.8129f,0.9437f,0.8153f,0.9638f,0.8095f,0.9824f,0.809f,0.9461f,0.923f,0.9071f,0.9135f,0.9824f,0.9287f,0.7343f,0.9169f,0.7616f,0.9147f,0.7553f,0.8982f,0.7343f,0.8968f,0.7739f,0.9327f,0.7343f,0.9365f,0.8187f,0.8433f,0.8348f,0.9045f,0.8324f,0.8647f,0.74f,0.8745f,0.761f,0.8768f,0.7497f,0.8755f,0.777f,0.8787f,0.7647f,0.8593f,0.7596f,0.8565f,0.7438f,0.8546f,0.7343f,0.8756f,0.7372f,0.8736f,0.7394f,0.8706f,0.7405f,0.8536f,0.7808f,0.8802f,0.7786f,0.8666f,0.7875f,0.8787f,0.7821f,0.8667f,0.7952f,0.9076f,0.8011f,0.8823f,0.7745f,0.9003f,0.7939f,0.8518f,0.7845f,0.8549f,0.7731f,0.8049f,0.7979f,0.8609f,0.8185f,0.8054f,0.8439f,0.8655f,0.8131f,0.8741f,0.786f,0.7876f,0.8107f,0.8538f,0.8058f,0.8252f,0.8096f,0.8166f,0.8589f,0.7975f,0.8767f,0.8622f,0.8568f,0.8668f,0.8669f,0.8674f,0.9208f,0.8549f,0.8792f,0.7991f,0.8835f,0.8633f,0.9139f,0.8636f,0.9513f,0.84f,0.9824f,0.8358f,0.8845f,0.9021f,0.888f,0.931f,0.8761f,0.9036f,0.8705f,0.9018f,0.8544f,0.902f,0.8538f,0.9345f,0.8173f,0.9068f,0.8156f,0.9257f,0.7753f,0.9186f,0.7832f,0.9041f,0.7338f,0.8385f,0.7279f,0.8339f,0.7208f,0.8401f,0.7397f,0.7767f,0.7338f,0.7681f,0.7338f,0.7727f,0.7192f,0.8201f,0.7171f,0.8352f,0.7139f,0.8364f,0.7127f,0.8419f,0.7175f,0.832f,0.7247f,0.8312f,0.7224f,0.8292f,0.7239f,0.8169f,0.7146f,0.8334f,0.7152f,0.8309f,0.753f,0.7762f,0.7452f,0.772f,0.7409f,0.7703f,0.756f,0.7661f,0.7502f,0.7748f,0.7102f,0.837f,0.7574f,0.7798f,0.7054f,0.8378f,0.7338f,0.8253f,0.7338f,0.8299f,0.7267f,0.8275f,0.7291f,0.8283f,0.7338f,0.8254f,0.7338f,0.7682f,0.7385f,0.7711f,0.7338f,0.7628f,0.7338f,0.82f,0.7437f,0.7597f,0.7429f,0.774f,0.7484f,0.7629f,0.7505f,0.778f,0.7116f,0.8233f,0.7622f,0.7806f,0.7576f,0.779f,0.763f,0.7872f,0.7046f,0.8444f,0.7572f,0.7769f,0.7524f,0.7737f,0.7104f,0.8341f,0.7881f,0.9479f,0.7343f,0.9577f,0.8497f,0.9637f,0.9158f,0.9539f,0.7343f,0.9872f,0.9824f,0.9663f,0.4263f,0.6263f,0.4421f,0.6351f,0.4514f,0.6319f,0.4298f,0.637f,0.4385f,0.639f,0.4385f,0.6403f,0.4369f,0.6596f,0.4321f,0.6555f,0.4385f,0.6553f,0.4451f,0.6548f,0.4452f,0.6463f,0.4227f,0.6454f,0.4263f,0.652f,0.4193f,0.6633f,0.4176f,0.6328f,0.4376f,0.6237f,0.4196f,0.6187f,0.3384f,0.9887f,0.2934f,0.905f,0.2441f,0.9417f,0.2441f,0.9723f,0.4437f,0.6405f,0.4519f,0.6235f,0.3367f,0.9059f,0.4034f,0.9073f,0.4566f,0.6329f,0.4157f,0.6257f,0.4137f,0.6192f,0.2959f,0.626f,0.3051f,0.6166f,0.2511f,0.6816f,0.2548f,0.6653f,0.2441f,0.6653f,0.2441f,0.6816f,0.2661f,0.696f,0.2636f,0.664f,0.3484f,0.6888f,0.3007f,0.651f,0.2881f,0.7397f,0.3623f,0.7239f,0.4151f,0.6155f,0.4295f,0.6197f,0.4116f,0.6201f,0.4088f,0.6855f,0.4123f,0.7323f,0.4518f,0.7703f,0.364f,0.6372f,0.2441f,0.7326f,0.2441f,0.7109f,0.2441f,0.7705f,0.2441f,0.816f,0.2466f,0.8272f,0.2826f,0.8198f,0.263f,0.8101f,0.3011f,0.7644f,0.4294f,0.848f,0.295f,0.8569f,0.4229f,0.7906f,0.445f,0.8342f,0.3273f,0.8725f,0.3401f,0.8443f,0.4194f,0.891f,0.3844f,0.8819f,0.3962f,0.7639f,0.3654f,0.758f,0.3664f,0.7923f,0.3312f,0.7931f,0.3858f,0.7947f,0.2864f,0.8094f,0.3065f,0.7969f,0.4051f,0.8004f,0.4267f,0.8291f,0.3243f,0.8795f,0.293f,0.8645f,0.4715f,0.8911f,0.431f,0.9594f,0.4658f,0.6252f,0.465f,0.6281f,0.3862f,0.8876f,0.4544f,0.6426f,0.2548f,0.6553f,0.2441f,0.6553f,0.4156f,0.6279f,0.3783f,0.625f,0.3984f,0.649f,0.4325f,0.6718f,0.4443f,0.6446f,0.428f,0.6022f,0.4445f,0.6357f,0.4021f,0.656f,0.4052f,0.6271f,0.4253f,0.6199f,0.4215f,0.6174f,0.6418f,0.6585f,0.6441f,0.671f,0.6214f,0.6731f,0.616f,0.6731f,0.6418f,0.6585f,0.623f,0.6494f,0.6418f,0.6585f,0.6441f,0.671f,0.3003f,0.6509f,0.2548f,0.6558f,0.2549f,0.6531f,0.2441f,0.6558f,0.616f,0.6731f,0.6214f,0.6731f,0.2441f,0.6529f,0.314f,0.8296f,0.3898f,0.85f,0.2746f,0.7881f,0.2889f,0.7981f,0.4442f,0.8857f,0.2745f,0.8415f,0.3079f,0.8417f,0.3393f,0.8544f,0.3891f,0.8542f,0.2699f,0.8521f,0.246f,0.853f,0.4715f,0.8911f,0.9421f,0.8701f,0.9509f,0.8981f,0.9175f,0.8974f,0.924f,0.8702f,0.9824f,0.8682f,0.9824f,0.8971f,0.9541f,0.8718f,0.9147f,0.8129f,0.9437f,0.8153f,0.9638f,0.8095f,0.9824f,0.809f,0.9461f,0.923f,0.9071f,0.9135f,0.9824f,0.9287f,0.7553f,0.8982f,0.7616f,0.9147f,0.7343f,0.9169f,0.7343f,0.8968f,0.7739f,0.9327f,0.7343f,0.9365f,0.8324f,0.8647f,0.8348f,0.9045f,0.8187f,0.8433f,0.74f,0.8745f,0.7497f,0.8755f,0.761f,0.8768f,0.7647f,0.8593f,0.777f,0.8787f,0.7438f,0.8546f,0.7596f,0.8565f,0.7372f,0.8736f,0.7343f,0.8756f,0.7394f,0.8706f,0.7405f,0.8536f,0.7808f,0.8802f,0.7786f,0.8666f,0.7821f,0.8667f,0.7875f,0.8787f,0.8011f,0.8823f,0.7952f,0.9076f,0.7745f,0.9003f,0.7939f,0.8518f,0.7845f,0.8549f,0.7731f,0.8049f,0.7979f,0.8609f,0.8185f,0.8054f,0.8439f,0.8655f,0.8131f,0.8741f,0.8107f,0.8538f,0.8058f,0.8252f,0.786f,0.7876f,0.8096f,0.8166f,0.8767f,0.8622f,0.8589f,0.7975f,0.8669f,0.8674f,0.8568f,0.8668f,0.9208f,0.8549f,0.8792f,0.7991f,0.9139f,0.8636f,0.8835f,0.8633f,0.9513f,0.84f,0.9824f,0.8358f,0.8845f,0.9021f,0.888f,0.931f,0.8761f,0.9036f,0.8705f,0.9018f,0.8544f,0.902f,0.8538f,0.9345f,0.8173f,0.9068f,0.8156f,0.9257f,0.7753f,0.9186f,0.7832f,0.9041f,0.7208f,0.8401f,0.7279f,0.8339f,0.7338f,0.8385f,0.7338f,0.7727f,0.7338f,0.7681f,0.7397f,0.7767f,0.7192f,0.8201f,0.7139f,0.8364f,0.7171f,0.8352f,0.7127f,0.8419f,0.7175f,0.832f,0.7224f,0.8292f,0.7247f,0.8312f,0.7239f,0.8169f,0.7146f,0.8334f,0.7452f,0.772f,0.753f,0.7762f,0.7152f,0.8309f,0.7409f,0.7703f,0.7502f,0.7748f,0.756f,0.7661f,0.7102f,0.837f,0.7574f,0.7798f,0.7054f,0.8378f,0.7338f,0.8253f,0.7338f,0.8299f,0.7338f,0.8254f,0.7291f,0.8283f,0.7267f,0.8275f,0.7338f,0.7628f,0.7385f,0.7711f,0.7338f,0.7682f,0.7338f,0.82f,0.7437f,0.7597f,0.7484f,0.7629f,0.7429f,0.774f,0.7505f,0.778f,0.7116f,0.8233f,0.763f,0.7872f,0.7576f,0.779f,0.7622f,0.7806f,0.7046f,0.8444f,0.7572f,0.7769f,0.7524f,0.7737f,0.7104f,0.8341f,0.7881f,0.9479f,0.7343f,0.9577f,0.8497f,0.9637f,0.9158f,0.9539f,0.7343f,0.9872f,0.9824f,0.9663f,0.4514f,0.6319f,0.4421f,0.6351f,0.4263f,0.6263f,0.4385f,0.639f,0.4298f,0.637f,0.4385f,0.6403f,0.4385f,0.6553f,0.4321f,0.6555f,0.4369f,0.6596f,0.4451f,0.6548f,0.4452f,0.6463f,0.4263f,0.652f,0.4227f,0.6454f,0.4193f,0.6633f,0.4176f,0.6328f,0.4196f,0.6187f,0.4376f,0.6237f,0.2441f,0.9417f,0.2934f,0.905f,0.3384f,0.9887f,0.2441f,0.9723f,0.4437f,0.6405f,0.4519f,0.6235f,0.3367f,0.9059f,0.4034f,0.9073f,0.4566f,0.6329f,0.4157f,0.6257f,0.4137f,0.6192f,0.2441f,0.6653f,0.2548f,0.6653f,0.2511f,0.6816f,0.2441f,0.6816f,0.2636f,0.664f,0.2661f,0.696f,0.3484f,0.6888f,0.3007f,0.651f,0.3623f,0.7239f,0.2881f,0.7397f,0.4215f,0.6174f,0.4295f,0.6197f,0.4151f,0.6155f,0.4116f,0.6201f,0.4518f,0.7703f,0.4123f,0.7323f,0.4088f,0.6855f,0.364f,0.6372f,0.2959f,0.626f,0.3051f,0.6166f,0.2441f,0.7326f,0.2441f,0.7705f,0.2441f,0.7109f,0.2745f,0.8415f,0.2466f,0.8272f,0.2441f,0.816f});
  }
}
protected class MFVec2f510 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.263f,0.8101f,0.3011f,0.7644f,0.2746f,0.7881f,0.246f,0.853f,0.2699f,0.8521f,0.4229f,0.7906f,0.445f,0.8342f,0.3401f,0.8443f,0.3393f,0.8544f,0.3079f,0.8417f,0.314f,0.8296f,0.3962f,0.7639f,0.3654f,0.758f,0.3664f,0.7923f,0.3312f,0.7931f,0.3858f,0.7947f,0.3065f,0.7969f,0.2889f,0.7981f,0.2826f,0.8198f,0.2864f,0.8094f,0.4051f,0.8004f,0.3243f,0.8795f,0.4267f,0.8291f,0.293f,0.8645f,0.4715f,0.8911f,0.431f,0.9594f,0.4715f,0.8911f,0.4658f,0.6252f,0.465f,0.6281f,0.4194f,0.891f,0.3862f,0.8876f,0.4544f,0.6426f,0.2548f,0.6553f,0.2441f,0.6553f,0.3984f,0.649f,0.3783f,0.625f,0.4156f,0.6279f,0.4325f,0.6718f,0.428f,0.6022f,0.4443f,0.6446f,0.4445f,0.6357f,0.4021f,0.656f,0.4052f,0.6271f,0.4253f,0.6199f,0.3898f,0.85f,0.6418f,0.6585f,0.6441f,0.671f,0.6441f,0.671f,0.6418f,0.6585f,0.6214f,0.6731f,0.6214f,0.6731f,0.616f,0.6731f,0.616f,0.6731f,0.623f,0.6494f,0.6418f,0.6585f,0.3003f,0.6509f,0.2548f,0.6558f,0.2549f,0.6531f,0.2441f,0.6558f,0.2441f,0.6529f,0.3891f,0.8542f,0.4294f,0.848f,0.4442f,0.8857f,0.295f,0.8569f,0.3273f,0.8725f,0.3844f,0.8819f});
  }
}
protected class MFFloat511 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat512 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32513 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,25,-1,25,24,0,-1,2,26,25,-1,25,1,2,-1,2,3,8,-1,8,26,2,-1,10,27,9,-1,9,4,10,-1,10,0,24,-1,24,27,10,-1,1,0,12,-1,12,13,1,-1,2,1,13,-1,13,14,2,-1,3,2,14,-1,14,15,3,-1,10,4,16,-1,16,22,10,-1,5,6,18,-1,18,17,5,-1,6,7,19,-1,19,18,6,-1,7,8,20,-1,20,19,7,-1,9,11,23,-1,23,21,9,-1,8,3,15,-1,15,20,8,-1,4,9,21,-1,21,16,4,-1,0,10,22,-1,22,12,0,-1,11,5,17,-1,17,23,11,-1,6,5,24,-1,24,25,6,-1,7,6,25,-1,25,26,7,-1,5,11,27,-1,27,24,5,-1,27,11,9,-1,8,7,26,-1});
  }
}
protected class MFInt32514 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,4,6,7,-1,7,5,4,-1,9,10,11,-1,11,8,9,-1,9,0,3,-1,3,10,9,-1,1,0,12,-1,12,13,1,-1,4,1,13,-1,13,14,4,-1,6,4,14,-1,14,15,6,-1,9,8,16,-1,16,17,9,-1,18,19,20,-1,20,21,18,-1,19,22,23,-1,23,20,19,-1,22,7,24,-1,24,23,22,-1,11,25,26,-1,26,27,11,-1,7,6,15,-1,15,24,7,-1,8,11,27,-1,27,16,8,-1,0,9,17,-1,17,12,0,-1,25,18,21,-1,21,26,25,-1,19,18,3,-1,3,2,19,-1,22,19,2,-1,2,5,22,-1,18,25,10,-1,10,3,18,-1,10,25,11,-1,7,22,5,-1});
  }
}
protected class MFVec3f515 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {34.3422f,-146.4933f,128.3333f,-4.4489f,-134.2667f,155.5333f,-31.2178f,-140.0444f,166.0667f,-53.7556f,-156.7289f,171.8444f,63.6222f,-178.3511f,104.1556f,24.7378f,-195.8667f,144.6889f,-1.7822f,-187.8578f,160.4222f,-25.0711f,-178.04f,168.2444f,-40.9244f,-169.2489f,170.5111f,54.6444f,-186.3689f,113.0889f,49.6222f,-161.7778f,116.2444f,37.3822f,-196.44f,131f,28.8356f,-151.0889f,121f,-7.9689f,-144.9822f,144.4667f,-31.68f,-149.36f,154.3778f,-54.3333f,-159.6533f,166.7778f,61.0444f,-179.2756f,102.5556f,23.2f,-198.0222f,141.8889f,-3.0889f,-190.92f,154.9111f,-26.6311f,-180.5956f,163.9333f,-41.8711f,-171.7956f,166.1111f,54.1111f,-188.0578f,109.5778f,44.5556f,-165.1067f,111.8889f,35.3822f,-197.6178f,129.3111f,30.9156f,-173.9156f,136.1556f,-2.9689f,-160.7333f,160.3778f,-26.7911f,-162.0222f,167.8f,43.6622f,-180.2f,124.4222f});
  }
}
protected class MFVec2f516 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3562f,0.7836f,0.3424f,0.7815f,0.3432f,0.7614f,0.3553f,0.7628f,0.3328f,0.7723f,0.3344f,0.7557f,0.3248f,0.7567f,0.3294f,0.7475f,0.3666f,0.7703f,0.3614f,0.7771f,0.3598f,0.7618f,0.364f,0.76f,0.3542f,0.784f,0.3411f,0.7782f,0.3327f,0.7703f,0.3246f,0.7567f,0.3657f,0.7703f,0.3598f,0.7771f,0.3534f,0.7431f,0.3436f,0.742f,0.3428f,0.7423f,0.3522f,0.7429f,0.335f,0.743f,0.3345f,0.743f,0.3291f,0.7475f,0.3576f,0.7438f,0.3566f,0.7438f,0.3632f,0.7603f});
  }
}
protected class MFFloat517 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat518 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32519 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,24,25,-1,25,1,0,-1,2,1,25,-1,25,26,2,-1,2,26,8,-1,8,3,2,-1,10,4,9,-1,9,27,10,-1,10,27,24,-1,24,0,10,-1,1,13,12,-1,12,0,1,-1,2,14,13,-1,13,1,2,-1,3,15,14,-1,14,2,3,-1,10,22,16,-1,16,4,10,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,9,21,23,-1,23,11,9,-1,8,20,15,-1,15,3,8,-1,4,16,21,-1,21,9,4,-1,0,12,22,-1,22,10,0,-1,11,23,17,-1,17,5,11,-1,6,25,24,-1,24,5,6,-1,7,26,25,-1,25,6,7,-1,5,24,27,-1,27,11,5,-1,27,9,11,-1,8,26,7,-1});
  }
}
protected class MFInt32520 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,4,5,7,-1,7,6,4,-1,9,8,11,-1,11,10,9,-1,9,10,3,-1,3,0,9,-1,1,13,12,-1,12,0,1,-1,4,14,13,-1,13,1,4,-1,6,15,14,-1,14,4,6,-1,9,17,16,-1,16,8,9,-1,18,21,20,-1,20,19,18,-1,19,20,23,-1,23,22,19,-1,22,23,24,-1,24,7,22,-1,11,27,26,-1,26,25,11,-1,7,24,15,-1,15,6,7,-1,8,16,27,-1,27,11,8,-1,0,12,17,-1,17,9,0,-1,25,26,21,-1,21,18,25,-1,19,2,3,-1,3,18,19,-1,22,5,2,-1,2,19,22,-1,18,3,10,-1,10,25,18,-1,10,11,25,-1,7,5,22,-1});
  }
}
protected class MFVec3f521 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-35.0978f,-146.4933f,128.3333f,3.6933f,-134.2667f,155.5333f,30.4622f,-140.0444f,166.0667f,53f,-156.7289f,171.8444f,-64.3778f,-178.3511f,104.1556f,-25.4933f,-195.8667f,144.6889f,1.0267f,-187.8578f,160.4222f,24.3156f,-178.04f,168.2444f,40.1689f,-169.2489f,170.5111f,-55.4f,-186.3689f,113.0889f,-50.3778f,-161.7778f,116.2444f,-38.1378f,-196.44f,131f,-29.5911f,-151.0889f,121f,7.2133f,-144.9822f,144.4667f,30.9244f,-149.36f,154.3778f,53.5778f,-159.6533f,166.7778f,-61.8f,-179.2756f,102.5556f,-23.9556f,-198.0222f,141.8889f,2.3333f,-190.92f,154.9111f,25.8756f,-180.5956f,163.9333f,41.1156f,-171.7956f,166.1111f,-54.8667f,-188.0578f,109.5778f,-45.3111f,-165.1067f,111.8889f,-36.1378f,-197.6178f,129.3111f,-31.6711f,-173.9156f,136.1556f,2.2133f,-160.7333f,160.3778f,26.0356f,-162.0222f,167.8f,-44.4178f,-180.2f,124.4222f});
  }
}
protected class MFVec2f522 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3562f,0.7836f,0.3424f,0.7815f,0.3432f,0.7614f,0.3553f,0.7628f,0.3328f,0.7723f,0.3344f,0.7557f,0.3248f,0.7567f,0.3294f,0.7475f,0.3666f,0.7703f,0.3614f,0.7771f,0.3598f,0.7618f,0.364f,0.76f,0.3542f,0.784f,0.3411f,0.7782f,0.3327f,0.7703f,0.3246f,0.7567f,0.3657f,0.7703f,0.3598f,0.7771f,0.3534f,0.7431f,0.3436f,0.742f,0.3428f,0.7423f,0.3522f,0.7429f,0.335f,0.743f,0.3345f,0.743f,0.3291f,0.7475f,0.3576f,0.7438f,0.3566f,0.7438f,0.3632f,0.7603f});
  }
}
protected class MFFloat523 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat524 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32525 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,6,16,-1,16,11,1,-1,0,1,11,-1,11,10,0,-1,8,9,19,-1,19,18,8,-1,2,8,18,-1,18,12,2,-1,3,0,10,-1,10,13,3,-1,9,4,14,-1,14,19,9,-1,5,2,12,-1,12,15,5,-1,4,3,13,-1,13,14,4,-1,6,7,17,-1,17,16,6,-1,7,5,15,-1,15,17,7,-1,11,16,21,-1,21,20,11,-1,16,17,22,-1,22,21,16,-1,17,15,23,-1,23,22,17,-1,15,12,24,-1,24,23,15,-1,12,18,25,-1,25,24,12,-1,18,19,26,-1,26,25,18,-1,19,14,27,-1,27,26,19,-1,14,13,28,-1,28,27,14,-1,13,10,29,-1,29,28,13,-1,10,11,20,-1,20,29,10,-1,6,1,30,-1,1,0,30,-1,0,3,30,-1,3,4,30,-1,4,9,30,-1,9,8,30,-1,8,2,30,-1,2,5,30,-1,5,7,30,-1,7,6,30,-1});
  }
}
protected class MFInt32526 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,9,13,-1,13,14,4,-1,3,4,14,-1,14,15,3,-1,11,12,16,-1,16,17,11,-1,5,11,17,-1,17,18,5,-1,6,3,15,-1,15,6,6,-1,12,7,19,-1,19,16,12,-1,8,5,18,-1,18,20,8,-1,7,6,21,-1,21,19,7,-1,9,10,22,-1,22,13,9,-1,10,8,20,-1,20,22,10,-1,14,13,24,-1,24,23,14,-1,13,22,25,-1,25,24,13,-1,22,20,26,-1,26,25,22,-1,20,18,27,-1,27,26,20,-1,18,17,28,-1,28,27,18,-1,17,16,29,-1,29,28,17,-1,16,19,30,-1,30,29,16,-1,19,21,31,-1,31,30,19,-1,6,15,32,-1,32,31,6,-1,15,14,23,-1,23,32,15,-1,36,1,40,-1,1,0,40,-1,0,33,40,-1,33,34,40,-1,34,39,40,-1,39,38,40,-1,38,2,40,-1,2,35,40,-1,35,37,40,-1,37,36,40,-1});
  }
}
protected class MFVec3f527 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-25.7733f,-182.72f,66.0667f,-0.0889f,-173.9778f,60.2133f,40.7511f,-211.3778f,12.3867f,-50.4667f,-197.8356f,66.8667f,-36.48f,-208.6533f,57.5822f,47.2222f,-205.7556f,8.2622f,38.0933f,-167.5333f,33.5911f,67.6667f,-182.7111f,-1.2889f,27.8311f,-211.9333f,25.2f,-15.0667f,-211.1067f,47.5733f,-40.6978f,-175.0311f,50.0089f,-12.9156f,-161.7067f,40.8356f,35.4222f,-221.16f,-6.1022f,-68.7333f,-197.2444f,51.88f,-52.7778f,-218.3244f,41.5778f,43.1067f,-211.6667f,-10.8311f,33.7822f,-154.7289f,15.0756f,63.5778f,-178.8089f,-19.6489f,20.8489f,-222.3378f,7.1111f,-28.2178f,-221.8444f,30.8578f,-18.9733f,-168.0756f,22.9067f,23.6267f,-162.5378f,0.9644f,47.2222f,-179.56f,-25.6667f,34.7067f,-200.7244f,-18.6311f,26.8533f,-207.0044f,-14.2356f,14.9156f,-207.9156f,-3.1111f,-34.2889f,-206.6044f,18.9022f,-55.4889f,-203.1422f,26.76f,-63.2222f,-195.4933f,28.5956f,-43.6533f,-179.2267f,29.9244f,12.5644f,-192.4978f,45.8711f});
  }
}
protected class MFVec2f528 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3217f,0.8278f,0.3482f,0.8386f,0.3916f,0.7984f,0.3206f,0.8292f,0.3482f,0.8386f,0.3916f,0.7984f,0.2977f,0.8092f,0.309f,0.8013f,0.3985f,0.8044f,0.3868f,0.8428f,0.4182f,0.8265f,0.3778f,0.7978f,0.3319f,0.7987f,0.3868f,0.8428f,0.3482f,0.8386f,0.3206f,0.8292f,0.3319f,0.7987f,0.3778f,0.7978f,0.3916f,0.7984f,0.309f,0.8013f,0.3985f,0.8029f,0.2977f,0.8092f,0.4182f,0.8263f,0.3482f,0.8386f,0.3868f,0.8428f,0.4182f,0.8265f,0.3985f,0.8044f,0.3916f,0.7984f,0.3778f,0.7978f,0.3319f,0.7987f,0.309f,0.8013f,0.2977f,0.8092f,0.3206f,0.8292f,0.2978f,0.8092f,0.309f,0.8013f,0.3985f,0.8044f,0.3868f,0.8428f,0.4182f,0.8265f,0.3778f,0.7978f,0.3319f,0.7986f,0.3567f,0.819f});
  }
}
protected class MFFloat529 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat530 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32531 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,11,16,-1,16,6,1,-1,0,10,11,-1,11,1,0,-1,8,18,19,-1,19,9,8,-1,2,12,18,-1,18,8,2,-1,3,13,10,-1,10,0,3,-1,9,19,14,-1,14,4,9,-1,5,15,12,-1,12,2,5,-1,4,14,13,-1,13,3,4,-1,6,16,17,-1,17,7,6,-1,7,17,15,-1,15,5,7,-1,11,20,21,-1,21,16,11,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,15,17,-1,15,23,24,-1,24,12,15,-1,12,24,25,-1,25,18,12,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,14,19,-1,14,27,28,-1,28,13,14,-1,13,28,29,-1,29,10,13,-1,10,29,20,-1,20,11,10,-1,6,30,1,-1,1,30,0,-1,0,30,3,-1,3,30,4,-1,4,30,9,-1,9,30,8,-1,8,30,2,-1,2,30,5,-1,5,30,7,-1,7,30,6,-1});
  }
}
protected class MFInt32532 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,14,13,-1,13,9,4,-1,3,15,14,-1,14,4,3,-1,11,17,16,-1,16,12,11,-1,5,18,17,-1,17,11,5,-1,6,6,15,-1,15,3,6,-1,12,16,19,-1,19,7,12,-1,8,20,18,-1,18,5,8,-1,7,19,21,-1,21,6,7,-1,9,13,22,-1,22,10,9,-1,10,22,20,-1,20,8,10,-1,14,23,24,-1,24,13,14,-1,13,24,25,-1,25,22,13,-1,22,25,26,-1,26,20,22,-1,20,26,27,-1,27,18,20,-1,18,27,28,-1,28,17,18,-1,17,28,29,-1,29,16,17,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,21,19,-1,6,31,32,-1,32,15,6,-1,15,32,23,-1,23,14,15,-1,36,40,1,-1,1,40,0,-1,0,40,33,-1,33,40,34,-1,34,40,39,-1,39,40,38,-1,38,40,2,-1,2,40,35,-1,35,40,37,-1,37,40,36,-1});
  }
}
protected class MFVec3f533 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.0178f,-182.72f,66.0667f,-0.6667f,-173.9778f,60.2133f,-41.5067f,-211.3778f,12.3867f,49.7111f,-197.8356f,66.8667f,35.7244f,-208.6533f,57.5822f,-47.9778f,-205.7556f,8.2622f,-38.8489f,-167.5333f,33.5911f,-68.4222f,-182.7111f,-1.2889f,-28.5867f,-211.9333f,25.2f,14.3111f,-211.1067f,47.5733f,39.9422f,-175.0311f,50.0089f,12.16f,-161.7067f,40.8356f,-36.1778f,-221.16f,-6.1022f,67.9778f,-197.2444f,51.88f,52.0222f,-218.3244f,41.5778f,-43.8622f,-211.6667f,-10.8311f,-34.5378f,-154.7289f,15.0711f,-64.3333f,-178.8089f,-19.6489f,-21.6044f,-222.3378f,7.1111f,27.4622f,-221.8444f,30.8578f,18.2178f,-168.0756f,22.9067f,-24.3822f,-162.5378f,0.9644f,-47.9778f,-179.56f,-25.6667f,-35.4622f,-200.7244f,-18.6311f,-27.6089f,-207.0044f,-14.2356f,-15.6711f,-207.9156f,-3.1111f,33.5333f,-206.6044f,18.9022f,54.7333f,-203.1422f,26.76f,62.4667f,-195.4933f,28.5956f,42.8978f,-179.2267f,29.9244f,-13.32f,-192.4978f,45.8711f});
  }
}
protected class MFVec2f534 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3217f,0.8278f,0.3482f,0.8386f,0.3916f,0.7984f,0.3206f,0.8292f,0.3482f,0.8386f,0.3916f,0.7984f,0.2977f,0.8092f,0.309f,0.8013f,0.3985f,0.8044f,0.3868f,0.8428f,0.4182f,0.8265f,0.3778f,0.7978f,0.3319f,0.7987f,0.3868f,0.8428f,0.3482f,0.8386f,0.3206f,0.8292f,0.3319f,0.7987f,0.3778f,0.7978f,0.3916f,0.7984f,0.309f,0.8013f,0.3985f,0.8029f,0.2977f,0.8092f,0.4182f,0.8263f,0.3482f,0.8386f,0.3868f,0.8428f,0.4182f,0.8265f,0.3985f,0.8044f,0.3916f,0.7984f,0.3778f,0.7978f,0.3319f,0.7987f,0.309f,0.8013f,0.2977f,0.8092f,0.3206f,0.8292f,0.2978f,0.8092f,0.309f,0.8013f,0.3985f,0.8044f,0.3868f,0.8428f,0.4182f,0.8265f,0.3778f,0.7978f,0.3319f,0.7986f,0.3567f,0.819f});
  }
}
protected class MFFloat535 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat536 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32537 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,20,21,-1,21,7,2,-1,4,3,8,-1,8,10,4,-1,3,2,7,-1,7,8,3,-1,2,1,5,-1,5,20,2,-1,4,6,3,-1,3,6,1,-1,1,2,3,-1,5,1,12,-1,12,14,5,-1,0,5,14,-1,14,11,0,-1,6,4,13,-1,13,15,6,-1,1,6,15,-1,15,12,1,-1,8,7,16,-1,16,17,8,-1,21,22,16,-1,16,7,21,-1,9,0,11,-1,11,18,9,-1,4,10,19,-1,19,13,4,-1,10,8,17,-1,17,19,10,-1,20,0,9,-1,9,21,20,-1,5,0,20,-1,21,9,18,-1,18,22,21,-1});
  }
}
protected class MFInt32538 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,20,21,-1,21,7,0,-1,3,1,8,-1,8,10,3,-1,1,0,7,-1,7,8,1,-1,0,4,5,-1,5,20,0,-1,3,6,1,-1,1,6,4,-1,4,0,1,-1,5,4,11,-1,11,12,5,-1,2,5,12,-1,12,14,2,-1,6,3,15,-1,15,16,6,-1,4,6,16,-1,16,11,4,-1,8,7,13,-1,13,17,8,-1,21,22,13,-1,13,7,21,-1,9,2,14,-1,14,18,9,-1,3,10,19,-1,19,15,3,-1,10,8,17,-1,17,19,10,-1,20,2,9,-1,9,21,20,-1,5,2,20,-1,21,9,18,-1,18,22,21,-1});
  }
}
protected class MFVec3f539 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-14.68f,-198.7467f,51.9467f,47.7556f,-161.9822f,37.5156f,48.3333f,-169.7556f,35.0356f,100.8667f,-160.4978f,-5.6622f,128.0222f,-159.1911f,-38.1111f,6.24f,-175.68f,50.2756f,101.8889f,-154.4622f,-6.3111f,49.2667f,-177.1822f,29.64f,97.7556f,-168.52f,-7.8844f,-11.68f,-201.6756f,46.7156f,127.2667f,-163.2356f,-39.0444f,-12.7067f,-198.1333f,40.5378f,47.5778f,-162.9111f,28.3067f,124.3778f,-159.3422f,-40.9556f,7.4489f,-176.5467f,39.8978f,100.4667f,-155.6667f,-11.84f,49f,-177.76f,21.08f,96.0667f,-169.2444f,-13.2978f,-9.4178f,-201.2f,35.7511f,123.1778f,-164.3467f,-41.8444f,11.9289f,-183.0933f,45.4933f,16.4578f,-188.5644f,39.2844f,14.6844f,-190.3733f,29.7689f});
  }
}
protected class MFVec2f540 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.344f,0.8611f,0.3991f,0.8726f,0.2757f,0.8301f,0.4299f,0.8749f,0.3424f,0.8703f,0.297f,0.8558f,0.4f,0.8788f,0.3445f,0.8554f,0.397f,0.8649f,0.2794f,0.8281f,0.4294f,0.8703f,0.3456f,0.8724f,0.3008f,0.857f,0.3469f,0.8565f,0.2795f,0.829f,0.4293f,0.8745f,0.3996f,0.8793f,0.3963f,0.8659f,0.2847f,0.831f,0.4284f,0.8697f,0.3046f,0.8466f,0.3082f,0.8407f,0.3105f,0.8417f});
  }
}
protected class MFFloat541 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat542 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32543 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,7,21,-1,21,20,2,-1,4,10,8,-1,8,3,4,-1,3,8,7,-1,7,2,3,-1,2,20,5,-1,5,1,2,-1,4,3,6,-1,3,2,1,-1,1,6,3,-1,5,14,12,-1,12,1,5,-1,0,11,14,-1,14,5,0,-1,6,15,13,-1,13,4,6,-1,1,12,15,-1,15,6,1,-1,8,17,16,-1,16,7,8,-1,21,7,16,-1,16,22,21,-1,9,18,11,-1,11,0,9,-1,4,13,19,-1,19,10,4,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,0,20,-1,5,20,0,-1,21,22,18,-1,18,9,21,-1});
  }
}
protected class MFInt32544 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,7,21,-1,21,20,0,-1,3,10,8,-1,8,1,3,-1,1,8,7,-1,7,0,1,-1,0,20,5,-1,5,4,0,-1,3,1,6,-1,1,0,4,-1,4,6,1,-1,5,12,11,-1,11,4,5,-1,2,14,12,-1,12,5,2,-1,6,16,15,-1,15,3,6,-1,4,11,16,-1,16,6,4,-1,8,17,13,-1,13,7,8,-1,21,7,13,-1,13,22,21,-1,9,18,14,-1,14,2,9,-1,3,15,19,-1,19,10,3,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,2,20,-1,5,20,2,-1,21,22,18,-1,18,9,21,-1});
  }
}
protected class MFVec3f545 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.9244f,-198.7467f,51.9467f,-48.5111f,-161.9822f,37.5156f,-49.0889f,-169.7556f,35.0356f,-101.6222f,-160.4978f,-5.6622f,-128.7778f,-159.1911f,-38.1111f,-6.9956f,-175.68f,50.2756f,-102.6444f,-154.4622f,-6.3111f,-50.0222f,-177.1822f,29.64f,-98.5111f,-168.52f,-7.8844f,10.9244f,-201.6756f,46.7156f,-128.0222f,-163.2356f,-39.0444f,11.9511f,-198.1333f,40.5378f,-48.3333f,-162.9111f,28.3067f,-125.1333f,-159.3422f,-40.9556f,-8.2044f,-176.5467f,39.8978f,-101.2222f,-155.6667f,-11.84f,-49.7556f,-177.76f,21.08f,-96.8222f,-169.2444f,-13.2978f,8.6622f,-201.2f,35.7511f,-123.9333f,-164.3467f,-41.8444f,-12.6844f,-183.0933f,45.4933f,-17.2133f,-188.5644f,39.2844f,-15.44f,-190.3733f,29.7689f});
  }
}
protected class MFVec2f546 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.344f,0.8611f,0.3991f,0.8726f,0.2757f,0.8301f,0.4299f,0.8749f,0.3424f,0.8703f,0.297f,0.8558f,0.4f,0.8788f,0.3445f,0.8554f,0.397f,0.8649f,0.2794f,0.8281f,0.4294f,0.8703f,0.3456f,0.8724f,0.3008f,0.857f,0.3469f,0.8565f,0.2795f,0.829f,0.4293f,0.8745f,0.3996f,0.8793f,0.3963f,0.8659f,0.2847f,0.831f,0.4284f,0.8697f,0.3046f,0.8466f,0.3082f,0.8407f,0.3105f,0.8417f});
  }
}
protected class MFFloat547 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat548 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32549 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,12,-1,13,3,15,-1,3,13,4,-1,4,13,12,-1,4,12,2,-1,1,0,18,-1,18,9,1,-1,4,2,10,-1,10,6,8,-1,4,10,8,-1,3,7,24,-1,24,15,3,-1,4,8,7,-1,7,3,4,-1,5,26,24,-1,24,7,5,-1,8,6,5,-1,5,7,8,-1,0,1,2,-1,2,1,9,-1,9,10,2,-1,0,12,11,-1,13,15,14,-1,14,16,13,-1,16,12,13,-1,16,11,12,-1,17,19,18,-1,18,0,17,-1,22,21,20,-1,16,22,20,-1,16,20,11,-1,14,15,24,-1,24,23,14,-1,16,14,23,-1,23,22,16,-1,25,23,24,-1,24,26,25,-1,22,23,25,-1,25,21,22,-1,0,11,17,-1,11,20,19,-1,19,17,11,-1});
  }
}
protected class MFInt32550 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,4,5,6,-1,5,4,7,-1,7,4,3,-1,7,3,2,-1,1,0,0,-1,0,8,1,-1,7,2,2,-1,2,9,16,-1,7,2,16,-1,5,13,14,-1,14,6,5,-1,7,15,13,-1,13,5,7,-1,11,12,17,-1,17,10,11,-1,18,19,11,-1,11,10,18,-1,0,20,2,-1,2,20,21,-1,21,2,2,-1,0,22,2,-1,23,25,24,-1,24,26,23,-1,26,22,23,-1,26,2,22,-1,27,28,0,-1,0,0,27,-1,30,29,2,-1,26,30,2,-1,26,2,2,-1,24,25,32,-1,32,31,24,-1,26,24,31,-1,31,33,26,-1,35,34,37,-1,37,36,35,-1,38,34,35,-1,35,39,38,-1,0,2,40,-1,2,2,41,-1,41,40,2,-1});
  }
}
protected class MFVec3f551 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.3778f,-247.0667f,150.1556f,55.2667f,-220.6267f,126.5556f,47.7556f,-198.5289f,161.2667f,9.5956f,-163.1467f,198.7333f,52.2444f,-167.1333f,177.6222f,9.5956f,-142.4f,82.2889f,47.3111f,-137.8667f,80.1111f,9.5956f,-160.3733f,175.4444f,48.0667f,-159.8311f,160.3778f,85.4f,-182.4222f,52.0622f,88.1111f,-156.6044f,64.1511f,-48.5111f,-198.5289f,161.2667f,-0.3778f,-198.7333f,179.9778f,-0.3778f,-182.0489f,198.9556f,-10.3511f,-163.1467f,198.7333f,-0.3778f,-163.1467f,198.7333f,-53f,-167.1333f,177.6222f,-56.0222f,-220.6267f,126.5556f,-0.3778f,-201.52f,61.1022f,-86.1556f,-182.4222f,52.0622f,-88.8667f,-156.6044f,64.1511f,-48.0667f,-137.8667f,80.1111f,-48.8222f,-159.8311f,160.3778f,-10.3511f,-160.3733f,175.4444f,-0.3778f,-160.3733f,175.4444f,-10.3511f,-142.4f,82.2889f,-0.3778f,-146.9378f,83.9333f});
  }
}
protected class MFVec2f552 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2448f,0.6067f,0.3051f,0.6166f,0.2959f,0.6259f,0.2442f,0.6234f,0.2438f,0.6465f,0.2546f,0.6556f,0.2439f,0.6556f,0.3007f,0.651f,0.3051f,0.6166f,0.3007f,0.651f,0.6104f,0.6278f,0.6104f,0.661f,0.6021f,0.661f,0.2546f,0.6556f,0.2439f,0.6556f,0.3007f,0.651f,0.3007f,0.651f,0.6021f,0.6278f,0.6425f,0.6334f,0.6294f,0.6619f,0.3051f,0.6166f,0.3051f,0.6166f,0.2442f,0.6234f,0.2438f,0.6465f,0.2546f,0.6556f,0.2439f,0.6556f,0.3007f,0.651f,0.3051f,0.6166f,0.3051f,0.6166f,0.3007f,0.651f,0.3007f,0.651f,0.2546f,0.6556f,0.2439f,0.6556f,0.3007f,0.651f,0.6104f,0.6278f,0.6104f,0.661f,0.6021f,0.661f,0.6021f,0.6278f,0.6425f,0.6334f,0.6294f,0.6619f,0.3051f,0.6166f,0.3051f,0.6166f});
  }
}
protected class MFFloat553 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat554 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32555 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1});
  }
}
protected class MFInt32556 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1});
  }
}
protected class MFVec3f557 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {221.4f,-183.9111f,-17.7733f,225.0889f,-166.3422f,22.7333f,208.7778f,-181f,73.8889f,205.4444f,-269.3778f,69.7111f,203.4444f,-261.7778f,15.0978f,149.6667f,-171.2711f,99.3556f,172.5556f,-144.5778f,18.2578f,185.9778f,-299.2f,-4.7467f,194.6444f,-299.2f,84.1556f,166.7778f,-174.1422f,-54.5556f,-5.8756f,-160.48f,12.2756f,-5.8756f,-175.1689f,-21.2489f,-5.8756f,-251.5556f,9.1911f,-5.8756f,-250.4f,48.4844f,-5.8756f,-177.04f,56.9956f});
  }
}
protected class MFVec2f558 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1911f,0.4797f,0.171f,0.4832f,0.1497f,0.4806f,0.1519f,0.4334f,0.1831f,0.4416f,0.1474f,0.4856f,0.1708f,0.4854f,0.1784f,0.4249f,0.1538f,0.4251f,0.1963f,0.4863f,0.19f,0.5091f,0.1847f,0.499f,0.172f,0.4382f,0.1568f,0.4457f,0.1409f,0.4926f});
  }
}
protected class MFFloat559 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat560 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32561 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,9,6,-1,6,2,3,-1,7,5,1,-1,1,8,7,-1,6,8,0,-1,0,2,6,-1,0,8,1,-1,9,7,8,-1,8,6,9,-1,4,5,11,-1,11,10,4,-1,5,7,12,-1,12,11,5,-1,7,9,13,-1,13,12,7,-1,9,3,14,-1,14,13,9,-1,3,4,10,-1,10,14,3,-1,10,11,15,-1,11,12,15,-1,12,13,15,-1,13,14,15,-1,14,10,15,-1});
  }
}
protected class MFInt32562 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,8,6,-1,6,2,3,-1,9,5,1,-1,1,7,9,-1,6,7,0,-1,0,2,6,-1,0,7,1,-1,12,13,11,-1,11,10,12,-1,4,5,15,-1,15,14,4,-1,5,9,16,-1,16,15,5,-1,13,12,17,-1,17,16,13,-1,8,3,18,-1,18,17,8,-1,3,4,14,-1,14,18,3,-1,14,15,19,-1,15,16,19,-1,16,17,19,-1,17,18,19,-1,18,14,19,-1});
  }
}
protected class MFVec3f563 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {85.6222f,-123.3778f,16.5022f,66.9556f,-159.68f,-56.3333f,67.8f,-156.9556f,92.6f,-17.1867f,-137.9111f,97.6222f,5.7289f,-111.2f,16.5022f,-0.04f,-140.8f,-56.2889f,36.6933f,-258.4f,82.4222f,19.1378f,-265.8667f,-6.5067f,36.4f,-258.7556f,-6.4578f,27.8089f,-265.8667f,82.3778f,-55.3556f,-126f,17.48f,-69.1333f,-150.6889f,-30.1111f,-33.8222f,-259.7778f,-0.44f,-33.76f,-259.4222f,72.2f,-67.4889f,-142.5778f,78.2444f,-71.0444f,-189.3556f,26.6489f});
  }
}
protected class MFVec2f564 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1715f,0.4655f,0.1797f,0.4646f,0.1569f,0.4642f,0.1474f,0.4856f,0.1708f,0.4854f,0.1963f,0.4863f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1703f,0.4865f,0.1895f,0.487f,0.1761f,0.4271f,0.1552f,0.4287f,0.1491f,0.4835f,0.1671f,0.4618f});
  }
}
protected class MFFloat565 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat566 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32567 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,40,-1,40,41,26,-1,27,26,41,-1,41,42,27,-1,28,27,42,-1,42,43,28,-1,29,28,43,-1,43,44,29,-1,25,29,44,-1,44,40,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1});
  }
}
protected class MFInt32568 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,0,1,-1,3,2,1,-1,55,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,49,35,36,-1,48,49,36,-1,37,48,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,38,39,56,-1,56,57,38,-1,40,50,58,-1,58,59,40,-1,41,40,59,-1,59,60,41,-1,42,41,60,-1,60,61,42,-1,39,42,61,-1,61,56,39,-1,43,44,39,-1,39,38,43,-1,45,52,51,-1,51,40,45,-1,46,45,40,-1,40,41,46,-1,47,46,41,-1,41,42,47,-1,44,47,42,-1,42,39,44,-1,34,33,44,-1,44,43,34,-1,35,54,53,-1,53,45,35,-1,36,35,45,-1,45,46,36,-1,37,36,46,-1,46,47,37,-1,33,37,47,-1,47,44,33,-1});
  }
}
protected class MFVec3f569 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {51.3556f,-110f,-54.0222f,102.7333f,-110.4889f,22.1422f,46.1556f,-109.9556f,94.5556f,-40.1556f,-109.2f,63.1156f,-36.9511f,-109.2444f,-28.6889f,61.0444f,-166.3244f,-82.0222f,131.9778f,-166.9556f,23.1778f,53.8889f,-166.2622f,123.1778f,-65.3556f,-165.2f,79.7556f,-60.9111f,-165.24f,-47.0444f,60.0667f,-278.0444f,-82.0222f,131f,-278.6667f,23.1778f,52.8667f,-277.9556f,123.1778f,-66.3333f,-276.8889f,79.7556f,-61.8889f,-276.9333f,-47.0444f,61.7556f,-325.8222f,-87.8889f,136.8222f,-326.4889f,23.3956f,54.2f,-325.7333f,129.1778f,-71.9333f,-324.6222f,83.2667f,-67.2667f,-324.6667f,-50.9111f,38.9333f,-243.5556f,-65.5333f,93.1778f,-244f,0.4533f,65.0889f,-243.7778f,93.0444f,-6.4889f,-243.1556f,84.2889f,-22.6489f,-242.9778f,-13.7289f,39.7422f,-501.6444f,-49.0889f,96.0667f,-502.1333f,3.8444f,66.9111f,-501.9111f,78.1111f,-7.4356f,-501.2444f,71.0889f,-24.2222f,-501.0667f,-7.5333f,39.9156f,-681.8667f,-46.5111f,94.1556f,-682.3111f,4.4178f,66.0667f,-681.8667f,75.8889f,-5.5067f,-681.4222f,69.1333f,-21.6711f,-680.9778f,-6.5333f,37.4889f,-706.3111f,-19.2889f,69.2667f,-706.3111f,10.5689f,52.8222f,-706.3111f,52.4667f,10.8711f,-705.8667f,48.5022f,1.3956f,-705.8667f,4.1511f,38.9333f,-243.5556f,-65.5333f,93.1778f,-244f,0.4533f,65.0889f,-243.7778f,93.0444f,-6.4889f,-243.1556f,84.2889f,-22.6489f,-242.9778f,-13.7289f});
  }
}
protected class MFVec2f570 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2986f,0.2114f,0.2726f,0.2114f,0.3201f,0.2114f,0.3415f,0.2114f,0.2466f,0.2114f,0.2979f,0.2417f,0.2726f,0.2417f,0.3197f,0.2417f,0.3418f,0.2417f,0.2473f,0.2417f,0.2979f,0.3018f,0.2726f,0.3018f,0.3197f,0.3018f,0.3418f,0.3018f,0.2473f,0.3018f,0.2978f,0.3276f,0.2726f,0.3276f,0.3197f,0.3276f,0.3419f,0.3276f,0.2474f,0.3276f,0.2932f,0.2834f,0.2689f,0.2834f,0.316f,0.2834f,0.3322f,0.2834f,0.245f,0.2834f,0.2251f,0.2114f,0.2255f,0.2417f,0.2255f,0.2417f,0.2255f,0.3018f,0.2255f,0.3018f,0.2255f,0.3276f,0.2255f,0.3276f,0.2159f,0.2834f,0.9467f,0.4943f,0.9572f,0.4943f,0.9099f,0.4943f,0.9193f,0.4943f,0.9332f,0.4943f,0.9567f,0.4691f,0.9455f,0.4691f,0.9105f,0.4691f,0.9205f,0.4691f,0.9332f,0.4691f,0.9567f,0.4913f,0.9458f,0.4913f,0.9102f,0.4913f,0.9203f,0.4913f,0.9334f,0.4913f,0.8898f,0.4943f,0.9003f,0.4943f,0.8997f,0.4691f,0.8997f,0.4691f,0.8998f,0.4913f,0.8998f,0.4913f,0.9003f,0.4943f,0.3481f,0.2114f,0.9448f,0.4374f,0.9561f,0.4374f,0.8991f,0.4374f,0.9117f,0.4374f,0.9198f,0.4374f,0.9341f,0.4374f});
  }
}
protected class MFFloat571 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat572 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32573 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
  }
}
protected class MFInt32574 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,4,-1,1,2,4,-1,0,1,4,-1,4,3,5,-1,5,6,4,-1,3,2,7,-1,7,5,3,-1,2,1,8,-1,8,7,2,-1,1,0,9,-1,9,8,1,-1,0,4,6,-1,6,9,0,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,11,16,-1,16,19,14,-1,22,23,24,-1,21,22,24,-1,20,21,24,-1,22,21,16,-1,16,15,22,-1,23,22,15,-1,15,17,23,-1,24,23,17,-1,17,18,24,-1,20,24,18,-1,18,19,20,-1,21,20,19,-1,19,16,21,-1});
  }
}
protected class MFVec3f575 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {9.1778f,-174.9911f,-30.5556f,50.9556f,-175.3511f,9.1422f,27.1733f,-175.1422f,66.8667f,-29.2889f,-174.6578f,62.8267f,-40.4133f,-174.5644f,2.6267f,6.0311f,-226.08f,-51.5778f,65.0444f,-226.5822f,1.6622f,31.4622f,-226.2933f,92.8667f,-48.3333f,-225.6089f,86.5111f,-64.0667f,-225.4756f,-8.6356f,5.5244f,-344.0889f,-50.7778f,68.5556f,-344.6667f,1.8667f,34.3333f,-318.5333f,92.2f,-50.8667f,-317.8222f,85.8889f,-69.3111f,-343.4667f,-8.3289f,2.2533f,-575.7778f,-43.2222f,48.2f,-576.1778f,14.96f,22.0533f,-575.9111f,87.7556f,-40.0756f,-575.3778f,81.8444f,-52.3333f,-575.2889f,5.4089f,0.0311f,-603.4667f,-18.7111f,31.4178f,-603.7333f,21.0178f,13.5556f,-603.6f,67f,-28.8756f,-603.2444f,62.9511f,-37.2311f,-603.1556f,14.4978f});
  }
}
protected class MFVec2f576 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8857f,0.572f,0.9344f,0.572f,0.9377f,0.5719f,0.8909f,0.5718f,0.8588f,0.5719f,0.8849f,0.5578f,0.8418f,0.558f,0.9588f,0.5579f,0.9536f,0.5581f,0.8765f,0.5581f,0.885f,0.5257f,0.8424f,0.5258f,0.9582f,0.5328f,0.9531f,0.533f,0.8768f,0.526f,0.8957f,0.4625f,0.8485f,0.4627f,0.9546f,0.4626f,0.9498f,0.4628f,0.8879f,0.4628f,0.8953f,0.4552f,0.8684f,0.4551f,0.9006f,0.455f,0.9378f,0.4551f,0.9345f,0.4552f});
  }
}
protected class MFFloat577 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat578 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32579 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,12,-1,12,11,0,-1,1,2,13,-1,13,12,1,-1,2,17,10,-1,10,13,2,-1,3,4,8,-1,8,16,3,-1,5,19,21,-1,21,20,5,-1,6,14,15,-1,15,18,6,-1,6,7,9,-1,9,14,6,-1,7,0,11,-1,11,9,7,-1,15,19,5,-1,5,18,15,-1,10,17,3,-1,3,16,10,-1,4,20,21,-1,21,8,4,-1,0,22,1,-1,1,22,2,-1,2,22,17,-1,17,22,3,-1,3,22,4,-1,4,22,20,-1,20,22,5,-1,5,22,18,-1,18,22,6,-1,6,22,7,-1,7,22,0,-1,16,23,24,-1,24,10,16,-1,10,24,25,-1,25,13,10,-1,13,25,26,-1,26,12,13,-1,12,26,27,-1,27,11,12,-1,11,27,28,-1,28,9,11,-1,9,28,29,-1,29,14,9,-1,14,29,30,-1,30,15,14,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,21,19,-1,21,32,33,-1,33,8,21,-1,8,33,23,-1,23,16,8,-1,23,34,24,-1,24,34,25,-1,25,34,26,-1,26,34,27,-1,27,34,28,-1,28,34,29,-1,29,34,30,-1,30,34,31,-1,31,34,32,-1,32,34,33,-1,33,34,23,-1});
  }
}
protected class MFInt32580 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,0,3,2,-1,1,5,4,-1,4,0,1,-1,5,6,7,-1,7,4,5,-1,10,9,8,-1,8,11,10,-1,12,15,38,-1,38,37,12,-1,17,16,19,-1,19,18,17,-1,17,21,20,-1,20,16,17,-1,21,35,36,-1,36,20,21,-1,19,15,12,-1,12,18,19,-1,7,6,10,-1,10,11,7,-1,9,13,14,-1,14,8,9,-1,2,22,1,-1,1,22,5,-1,5,22,6,-1,6,22,10,-1,10,22,9,-1,9,22,13,-1,37,39,12,-1,12,39,18,-1,18,39,17,-1,17,39,21,-1,21,39,35,-1,11,24,23,-1,23,7,11,-1,7,23,25,-1,25,4,7,-1,4,25,26,-1,26,0,4,-1,0,26,27,-1,27,3,0,-1,36,40,28,-1,28,20,36,-1,20,28,29,-1,29,16,20,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,15,19,-1,15,31,41,-1,41,38,15,-1,14,32,33,-1,33,8,14,-1,8,33,24,-1,24,11,8,-1,24,34,23,-1,23,34,25,-1,25,34,26,-1,26,34,27,-1,40,42,28,-1,28,42,29,-1,29,42,30,-1,30,42,31,-1,31,42,41,-1,32,34,33,-1,33,34,24,-1});
  }
}
protected class MFVec3f581 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.8133f,-183.6222f,-24.2444f,22.3244f,-184.2444f,-14.4667f,29.88f,-183.8711f,11.2222f,23.9556f,-183.16f,52.5467f,12.8578f,-183.28f,69.6222f,-26.8622f,-183.8178f,53.2667f,-30.2178f,-184.4533f,11.0133f,-19.9289f,-184.64f,-14.04f,16.2844f,-223.64f,79.8889f,-21.1644f,-226.2756f,-23.4178f,28.6311f,-219.6222f,35.1244f,1.7378f,-225.5111f,-36.5111f,25.3467f,-226.2622f,-23.3956f,30f,-218.7733f,6.0578f,-28.2844f,-218.7778f,6.12f,-28.6044f,-219.6178f,35.5289f,23.5556f,-224.5156f,58.8089f,29.4933f,-183.9733f,30.8933f,-30.2267f,-184.1378f,31.24f,-25.7333f,-224.52f,58.8622f,-13.7111f,-183.4889f,68.6889f,-14.6489f,-223.6667f,78.3778f,2.2622f,-174.1644f,20.2622f,17.6267f,-237.4222f,57.6356f,22.52f,-232.4978f,34.9556f,23.8533f,-231.6356f,3.6889f,19.6356f,-239.0667f,-25f,1.3956f,-239.2444f,-32.1556f,-15.7333f,-239.0667f,-25.2667f,-22.1822f,-231.64f,4.0178f,-22.4978f,-232.4889f,35.8f,-22.1911f,-237.4222f,57.7956f,-10.9867f,-236.6222f,73.8444f,7.7244f,-236.6222f,75f,-2.1156f,-244.9333f,17.3778f});
  }
}
protected class MFVec2f582 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7729f,0.0334f,0.7695f,0.0151f,0.7598f,0.0161f,0.7624f,0.0345f,0.791f,0.0281f,0.7896f,0.0131f,0.8111f,0.0113f,0.813f,0.0266f,0.8476f,0.0256f,0.8461f,0.0079f,0.8312f,0.0091f,0.8327f,0.0273f,0.9162f,0.2899f,0.8453f,0.0081f,0.8466f,0.0257f,0.9122f,0.2724f,0.9531f,0.2644f,0.9573f,0.2786f,0.936f,0.2844f,0.9315f,0.2698f,0.9706f,0.2558f,0.9766f,0.2733f,0.8032f,0.0047f,0.8134f,0.033f,0.8325f,0.0338f,0.792f,0.0345f,0.7756f,0.0396f,0.7675f,0.0404f,0.9666f,0.2503f,0.9509f,0.2584f,0.9297f,0.2636f,0.9113f,0.266f,0.8439f,0.0324f,0.8447f,0.0323f,0.8081f,0.0397f,0.986f,0.2708f,0.9803f,0.2531f,0.9032f,0.2936f,0.8989f,0.2764f,0.9452f,0.2896f,0.9743f,0.2482f,0.9004f,0.2693f,0.9343f,0.2559f});
  }
}
protected class MFFloat583 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat584 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32585 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,5,3,-1,3,0,6,-1,5,8,2,-1,2,3,5,-1,1,4,7,-1,2,8,7,-1,7,4,2,-1,14,17,16,-1,16,15,14,-1,9,13,10,-1,10,13,12,-1,12,11,10,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,2,4,-1,2,11,12,-1,12,3,2,-1,3,12,13,-1,13,0,3,-1,6,14,15,-1,15,5,6,-1,5,15,16,-1,16,8,5,-1,8,16,17,-1,17,7,8,-1,20,21,22,-1,22,23,24,-1,24,25,18,-1,22,24,18,-1,20,22,18,-1,19,20,18,-1,6,0,19,-1,19,18,6,-1,0,13,20,-1,20,19,0,-1,13,9,21,-1,21,20,13,-1,9,1,22,-1,22,21,9,-1,1,7,23,-1,23,22,1,-1,7,17,24,-1,24,23,7,-1,17,14,25,-1,25,24,17,-1,14,6,18,-1,18,25,14,-1});
  }
}
protected class MFInt32586 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,7,8,6,-1,18,19,6,-1,6,8,18,-1,21,12,23,-1,23,22,21,-1,9,10,15,-1,15,10,17,-1,17,16,15,-1,7,20,24,-1,24,8,7,-1,8,24,25,-1,25,18,8,-1,4,16,17,-1,17,2,4,-1,2,17,10,-1,10,1,2,-1,0,11,13,-1,13,3,0,-1,3,13,14,-1,14,5,3,-1,19,23,12,-1,12,6,19,-1,28,29,30,-1,30,31,32,-1,32,33,26,-1,30,32,26,-1,28,30,26,-1,27,28,26,-1,0,1,27,-1,27,26,0,-1,1,10,28,-1,28,27,1,-1,10,9,29,-1,29,28,10,-1,20,7,30,-1,30,29,20,-1,7,6,31,-1,31,30,7,-1,6,12,32,-1,32,31,6,-1,12,21,33,-1,33,32,12,-1,11,0,26,-1,26,33,11,-1});
  }
}
protected class MFVec3f587 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {30.9689f,-223.2089f,16.2133f,-28.7733f,-223.2089f,16.2133f,-18.1067f,-210.64f,47.7244f,19.5467f,-210.68f,50.8f,-23f,-215.4267f,37.1378f,17.5911f,-187.9156f,31.7956f,24.8667f,-188.7911f,10.7111f,-24.4267f,-188.7956f,10.76f,-13.3422f,-187.9422f,30.2711f,-21.9733f,-230.9689f,18.5822f,-23.3333f,-230.0711f,31.3244f,-15.8578f,-221.3511f,47.2489f,15.6667f,-217.9244f,50.2311f,24.8222f,-231.5378f,17.6222f,18.5822f,-175.24f,8.3333f,8.8222f,-174.6222f,25.4356f,-9.4311f,-174.6356f,24.3067f,-20.48f,-175.3289f,8.4889f,22.3022f,-190.0978f,7.4044f,28.1511f,-223.0933f,12.6622f,23.4711f,-229.4356f,13.7244f,-20.7378f,-228.8889f,14.68f,-26f,-222.9244f,12.6178f,-21.8222f,-189.8489f,7.4f,-18.4889f,-178.4667f,5.4889f,16.8711f,-178.3867f,5.3422f});
  }
}
protected class MFVec2f588 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8327f,0.0273f,0.8381f,0.0441f,0.8625f,0.0344f,0.8476f,0.0256f,0.8625f,0.0359f,0.8466f,0.0257f,0.9122f,0.2724f,0.904f,0.2568f,0.8948f,0.2599f,0.8401f,0.0478f,0.8395f,0.0482f,0.8319f,0.0206f,0.9141f,0.2788f,0.844f,0.0192f,0.8432f,0.0193f,0.8491f,0.0466f,0.8611f,0.0409f,0.8611f,0.0397f,0.8814f,0.2691f,0.8989f,0.2764f,0.9014f,0.2535f,0.9142f,0.2789f,0.9026f,0.2823f,0.9033f,0.2821f,0.8928f,0.2563f,0.8819f,0.264f,0.8327f,0.0273f,0.8381f,0.0441f,0.8395f,0.0482f,0.8401f,0.0478f,0.904f,0.2568f,0.9122f,0.2724f,0.9141f,0.2788f,0.9142f,0.2789f});
  }
}
protected class MFFloat589 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat590 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32591 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,9,-1,9,8,1,-1,8,10,0,-1,0,1,8,-1,2,3,6,-1,6,9,2,-1,0,10,7,-1,7,4,0,-1,5,6,3,-1,22,21,25,-1,22,25,24,-1,23,22,24,-1,19,18,17,-1,17,20,19,-1,13,12,11,-1,11,14,13,-1,14,11,16,-1,16,15,14,-1,3,11,12,-1,12,5,3,-1,5,12,13,-1,13,4,5,-1,4,13,14,-1,14,0,4,-1,0,14,15,-1,15,1,0,-1,1,15,16,-1,16,2,1,-1,2,16,11,-1,11,3,2,-1,7,17,18,-1,18,4,7,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,6,5,-1,6,20,17,-1,17,7,6,-1,10,21,22,-1,22,7,10,-1,7,22,23,-1,23,6,7,-1,6,23,24,-1,24,9,6,-1,9,24,25,-1,25,8,9,-1,8,25,21,-1,21,10,8,-1});
  }
}
protected class MFInt32592 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,27,4,28,-1,28,26,27,-1,3,6,7,-1,7,2,3,-1,28,4,30,-1,30,29,28,-1,10,7,6,-1,15,14,13,-1,15,13,12,-1,11,15,12,-1,16,19,18,-1,18,17,16,-1,20,23,22,-1,22,21,20,-1,21,22,25,-1,25,24,21,-1,6,22,23,-1,23,10,6,-1,10,23,20,-1,20,8,10,-1,8,20,21,-1,21,5,8,-1,5,21,24,-1,24,0,5,-1,0,24,25,-1,25,3,0,-1,3,25,22,-1,22,6,3,-1,30,34,35,-1,35,29,30,-1,8,19,16,-1,16,10,8,-1,10,16,17,-1,17,7,10,-1,7,17,18,-1,18,9,7,-1,4,32,33,-1,33,30,4,-1,9,15,11,-1,11,7,9,-1,7,11,12,-1,12,2,7,-1,2,12,13,-1,13,1,2,-1,27,31,32,-1,32,4,27,-1});
  }
}
protected class MFVec3f593 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-25.9378f,-224.6178f,37.2178f,-13.8f,-215.8267f,49.28f,16.5733f,-210.8044f,53.7022f,31.4444f,-228.7156f,27.6711f,-16.6444f,-243.8667f,16.9156f,36.0044f,-232.8356f,19.3644f,32.5022f,-196.4978f,3.0489f,-27.2356f,-196.4978f,3.0489f,-16.5733f,-183.9289f,34.5644f,21.0844f,-183.9689f,37.6356f,-21.4622f,-188.7156f,23.9733f,16.2089f,-240.9333f,33.9867f,15.3156f,-243.8222f,30.5689f,-11.2444f,-246.9333f,26.1556f,-20.4667f,-240.9333f,37.1156f,-9.7289f,-230.9778f,49.88f,8.8044f,-225.5333f,55.9378f,-19.1511f,-199.7022f,-3.5467f,-11.12f,-245.0222f,8.2844f,26.7689f,-235.2889f,9.2933f,25.56f,-199.7111f,-3.56f,-17.8089f,-184.8578f,19.7778f,-22.8222f,-189.2711f,8.3067f,22.56f,-190.2711f,8.7067f,16.32f,-180.9022f,32.12f,-8.3867f,-180.8933f,30.2f});
  }
}
protected class MFVec2f594 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8819f,0.0483f,0.8625f,0.0359f,0.8625f,0.0344f,0.8786f,0.0507f,0.8948f,0.2599f,0.867f,0.0598f,0.857f,0.0621f,0.8381f,0.0441f,0.8533f,0.0697f,0.8381f,0.0441f,0.8503f,0.0646f,0.8419f,0.0407f,0.8588f,0.0334f,0.8588f,0.0347f,0.8467f,0.0405f,0.8415f,0.0402f,0.8445f,0.0658f,0.8331f,0.0451f,0.8331f,0.0451f,0.8468f,0.0705f,0.8593f,0.0711f,0.8712f,0.0644f,0.8626f,0.068f,0.8607f,0.0696f,0.877f,0.0609f,0.8798f,0.0581f,0.8632f,0.2548f,0.8814f,0.2691f,0.8729f,0.2464f,0.8847f,0.2342f,0.904f,0.2568f,0.8853f,0.2697f,0.8962f,0.2618f,0.9014f,0.2613f,0.9088f,0.2549f,0.8909f,0.2323f});
  }
}
protected class MFFloat595 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat596 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32597 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,0,6,-1,7,13,14,-1,14,3,7,-1,5,10,17,-1,17,0,5,-1,4,9,10,-1,10,5,4,-1,3,14,9,-1,9,4,3,-1,0,17,19,-1,19,1,0,-1,1,19,13,-1,13,7,1,-1,1,2,0,-1,0,2,8,-1,8,6,0,-1,9,12,11,-1,11,10,9,-1,13,16,15,-1,15,14,13,-1,10,11,18,-1,18,17,10,-1,19,20,16,-1,16,13,19,-1,17,18,20,-1,20,19,17,-1,14,15,12,-1,12,9,14,-1,15,16,20,-1,20,12,15,-1,11,12,20,-1,20,18,11,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,8,21,22,-1,22,6,8,-1,6,22,23,-1,23,5,6,-1,5,23,24,-1,24,4,5,-1,4,24,25,-1,25,3,4,-1,3,25,26,-1,26,7,3,-1,27,32,31,-1,31,30,27,-1,7,27,28,-1,28,1,7,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,8,2,-1,8,30,31,-1,31,21,8,-1,21,31,32,-1,32,26,21,-1,26,32,27,-1,27,7,26,-1});
  }
}
protected class MFInt32598 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,36,35,34,-1,34,33,36,-1,0,8,7,-1,7,2,0,-1,10,9,8,-1,8,0,10,-1,33,34,37,-1,37,38,33,-1,2,7,12,-1,12,11,2,-1,39,40,35,-1,35,36,39,-1,11,13,2,-1,2,13,14,-1,14,1,2,-1,9,16,15,-1,15,8,9,-1,5,18,17,-1,17,4,5,-1,8,15,19,-1,19,7,8,-1,12,20,18,-1,18,5,12,-1,7,19,20,-1,20,12,7,-1,4,17,16,-1,16,9,4,-1,17,18,20,-1,20,16,17,-1,15,16,20,-1,20,19,15,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,14,21,22,-1,22,1,14,-1,1,22,23,-1,23,0,1,-1,0,23,24,-1,24,10,0,-1,10,24,25,-1,25,3,10,-1,33,41,42,-1,42,36,33,-1,27,32,31,-1,31,30,27,-1,6,27,28,-1,28,11,6,-1,11,28,29,-1,29,13,11,-1,13,29,30,-1,30,14,13,-1,14,30,31,-1,31,21,14,-1,21,31,32,-1,32,26,21,-1,42,44,43,-1,43,36,42,-1});
  }
}
protected class MFVec3f599 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {28.4222f,-195.52f,12.5733f,9.4667f,-209.4044f,4.08f,32.0356f,-204.1511f,3.8933f,-26.9956f,-185.5378f,17.8889f,-14.8578f,-176.7467f,29.9511f,15.5111f,-171.7244f,34.3733f,30.3822f,-189.6356f,8.3422f,-17.7022f,-204.7911f,-2.4133f,34.9467f,-193.7556f,0.0356f,-9.8622f,-215.9156f,56.4578f,13.4044f,-206.4356f,53.4622f,8.3067f,-225.8533f,62.5067f,-5.2844f,-231.16f,60.3156f,-11.4578f,-239.6889f,30.3911f,-23.0933f,-225.5111f,48.56f,-16.76f,-232.1333f,52.3378f,-8.8133f,-243.0667f,37.6667f,23.6178f,-224f,33.0267f,17.5911f,-238.6222f,45.2356f,5.6044f,-238.1333f,29.0978f,4.2222f,-244.2667f,42.6133f,19.0444f,-183.8489f,-4.7778f,19.3067f,-181.1911f,-1.68f,6.8178f,-167.2578f,19.96f,-9.9956f,-170.8444f,17.5378f,-16.6711f,-177.76f,6.5556f,-11.0622f,-185.6267f,-5.7289f,-13.3511f,-206.0044f,-13.0356f,7.1422f,-210.9733f,-8.7244f,25.8844f,-206.1422f,-8.5378f,28.0178f,-199.6933f,-10.8756f,17.8933f,-192.2844f,-14.9867f,-8.08f,-194.2311f,-17.1511f});
  }
}
protected class MFVec2f600 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8786f,0.0507f,0.857f,0.0621f,0.8601f,0.0649f,0.867f,0.0598f,0.8887f,0.0786f,0.8747f,0.0865f,0.8533f,0.0697f,0.876f,0.0783f,0.893f,0.0688f,0.8992f,0.0702f,0.8819f,0.0483f,0.8561f,0.0728f,0.8736f,0.0851f,0.8532f,0.0697f,0.8503f,0.0646f,0.8986f,0.0785f,0.897f,0.0809f,0.8914f,0.0813f,0.8802f,0.0861f,0.8841f,0.0856f,0.8821f,0.0883f,0.8487f,0.0595f,0.8509f,0.0581f,0.8683f,0.0489f,0.868f,0.0507f,0.8608f,0.0544f,0.8505f,0.0603f,0.8455f,0.0706f,0.8468f,0.073f,0.8455f,0.0707f,0.8437f,0.0676f,0.8416f,0.0639f,0.8422f,0.0648f,0.8729f,0.2464f,0.8482f,0.2317f,0.8612f,0.2211f,0.8847f,0.2342f,0.8433f,0.2381f,0.8632f,0.2548f,0.8814f,0.2316f,0.8625f,0.2222f,0.8799f,0.2506f,0.8891f,0.243f,0.8922f,0.232f,0.8964f,0.2371f});
  }
}
protected class MFFloat601 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat602 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32603 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,11,28,-1,28,29,0,-1,32,1,17,-1,17,2,32,-1,4,17,1,-1,1,3,4,-1,11,5,31,-1,31,28,11,-1,29,32,2,-1,2,0,29,-1,4,3,31,-1,31,5,4,-1,23,1,32,-1,24,31,3,-1,24,3,1,-1,1,23,24,-1,4,8,7,-1,7,6,4,-1,5,11,10,-1,10,9,5,-1,4,5,9,-1,9,8,4,-1,10,12,14,-1,14,13,10,-1,2,17,16,-1,16,15,2,-1,0,2,15,-1,15,12,0,-1,8,9,18,-1,18,7,8,-1,18,9,10,-1,10,13,18,-1,6,19,21,-1,21,20,6,-1,22,14,21,-1,21,19,22,-1,17,6,20,-1,20,16,17,-1,6,17,4,-1,11,0,12,-1,12,10,11,-1,13,14,22,-1,6,7,18,-1,18,19,6,-1,18,13,22,-1,22,19,18,-1,16,20,21,-1,21,15,16,-1,21,14,12,-1,12,15,21,-1,24,23,26,-1,26,25,24,-1,28,27,30,-1,30,29,28,-1,27,25,26,-1,26,30,27,-1,24,25,27,-1,27,31,24,-1,32,30,26,-1,26,23,32,-1,30,32,29,-1,28,31,27,-1});
  }
}
protected class MFInt32604 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,34,-1,34,33,3,-1,4,7,6,-1,6,5,4,-1,9,6,7,-1,7,8,9,-1,2,38,37,-1,37,34,2,-1,33,35,36,-1,36,3,33,-1,9,8,10,-1,10,11,9,-1,12,7,4,-1,13,10,8,-1,13,8,7,-1,7,12,13,-1,9,16,15,-1,15,14,9,-1,38,2,18,-1,18,39,38,-1,9,11,17,-1,17,16,9,-1,18,19,21,-1,21,20,18,-1,5,6,23,-1,23,22,5,-1,3,36,40,-1,40,19,3,-1,16,17,24,-1,24,15,16,-1,41,39,18,-1,18,20,41,-1,14,25,27,-1,27,26,14,-1,28,21,43,-1,43,42,28,-1,6,14,26,-1,26,23,6,-1,14,6,9,-1,2,3,19,-1,19,18,2,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,41,20,28,-1,28,42,41,-1,23,26,27,-1,27,22,23,-1,43,21,19,-1,19,40,43,-1,13,12,30,-1,30,29,13,-1,1,31,32,-1,32,0,1,-1,31,29,30,-1,30,32,31,-1,13,29,31,-1,31,10,13,-1,4,32,30,-1,30,12,4,-1,32,4,0,-1,1,10,31,-1});
  }
}
protected class MFVec3f605 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-15.2089f,-223.6267f,19.6756f,17.4044f,-200.7822f,16.4889f,-0.0667f,-223.9733f,20.2844f,7.6133f,-184.8844f,35.7733f,3.7511f,-206.7156f,46.3956f,-13.68f,-206.1556f,45.9467f,4.7467f,-228.9289f,47.4844f,2.6089f,-225.7733f,50.7733f,-0.8222f,-220.1022f,52.8622f,-13.3733f,-221.1244f,53.6222f,-22.2622f,-223.4222f,45.16f,-24.0267f,-211.9156f,36.8356f,-15.1244f,-234.5333f,29.2711f,-19.2089f,-230.1244f,44.8978f,-15.2222f,-235.3778f,36.8711f,-2.0978f,-235.6889f,31.0578f,6.88f,-230.6933f,37.8622f,12.4756f,-218.4444f,29.4578f,-9.6044f,-230.6711f,51.3822f,-6.6178f,-235.1111f,46.8044f,6.3556f,-230.44f,43.4356f,-4.4267f,-237.4667f,40.9511f,-16.9644f,-233.3778f,41.2178f,20.4222f,-186.8533f,5.6133f,10.2089f,-169.2889f,26.0489f,-1.32f,-168.3733f,19.4978f,9.64f,-185.6356f,0.1156f,-19.7822f,-172.6711f,13.6133f,-26.2889f,-188.3644f,21.1467f,-14.6533f,-202.56f,2.9778f,-8.8222f,-189.9333f,-5.7644f,-13.0533f,-178.7689f,29.0444f,2.4089f,-201.0044f,1.6844f});
  }
}
protected class MFVec2f606 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8747f,0.0865f,0.8887f,0.0786f,0.8299f,0.2203f,0.8424f,0.2111f,0.8736f,0.0851f,0.8939f,0.0989f,0.8978f,0.0975f,0.8834f,0.0852f,0.8992f,0.0766f,0.9092f,0.0888f,0.8992f,0.0702f,0.9115f,0.0859f,0.876f,0.0783f,0.893f,0.0688f,0.9109f,0.102f,0.9135f,0.0996f,0.9144f,0.0973f,0.9172f,0.0962f,0.8241f,0.2146f,0.8338f,0.2074f,0.8247f,0.2116f,0.8291f,0.2083f,0.9028f,0.1054f,0.9046f,0.1032f,0.9153f,0.1012f,0.9125f,0.1038f,0.9081f,0.1033f,0.9082f,0.1057f,0.8266f,0.2097f,0.8885f,0.0681f,0.8723f,0.0776f,0.8843f,0.0701f,0.8696f,0.0781f,0.8612f,0.2211f,0.8482f,0.2317f,0.8625f,0.2222f,0.8417f,0.2109f,0.8433f,0.2381f,0.8245f,0.2237f,0.8192f,0.2167f,0.8322f,0.2071f,0.8195f,0.2131f,0.8224f,0.2103f,0.8256f,0.2083f});
  }
}
protected class MFFloat607 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat608 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32609 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,12,1,-1,1,2,14,-1,0,13,15,-1,15,3,0,-1,11,10,9,-1,9,8,11,-1,4,5,17,-1,17,16,4,-1,18,6,7,-1,7,19,18,-1,0,4,16,-1,16,13,0,-1,12,17,5,-1,5,1,12,-1,1,5,4,-1,4,0,1,-1,2,6,18,-1,18,14,2,-1,15,19,7,-1,7,3,15,-1,3,7,6,-1,6,2,3,-1,3,8,9,-1,9,0,3,-1,0,9,10,-1,10,1,0,-1,1,10,11,-1,11,2,1,-1,2,11,8,-1,8,3,2,-1,22,23,24,-1,24,25,26,-1,26,27,20,-1,24,26,20,-1,22,24,20,-1,21,22,20,-1,12,14,21,-1,21,20,12,-1,14,18,22,-1,22,21,14,-1,18,19,23,-1,23,22,18,-1,19,15,24,-1,24,23,19,-1,15,13,25,-1,25,24,15,-1,13,16,26,-1,26,25,13,-1,16,17,27,-1,27,26,16,-1,17,12,20,-1,20,27,17,-1});
  }
}
protected class MFInt32610 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {21,19,1,-1,1,0,21,-1,12,20,22,-1,22,13,12,-1,5,4,7,-1,7,6,5,-1,8,9,25,-1,25,23,8,-1,26,17,18,-1,18,28,26,-1,12,16,24,-1,24,20,12,-1,19,25,9,-1,9,1,19,-1,1,9,8,-1,8,2,1,-1,0,10,27,-1,27,21,0,-1,22,28,18,-1,18,13,22,-1,3,11,10,-1,10,0,3,-1,13,14,15,-1,15,12,13,-1,2,7,4,-1,4,1,2,-1,1,4,5,-1,5,0,1,-1,0,5,6,-1,6,3,0,-1,31,32,33,-1,33,34,35,-1,35,36,29,-1,33,35,29,-1,31,33,29,-1,30,31,29,-1,19,21,30,-1,30,29,19,-1,21,27,31,-1,31,30,21,-1,26,28,32,-1,32,31,26,-1,28,22,33,-1,33,32,28,-1,22,20,34,-1,34,33,22,-1,20,24,35,-1,35,34,20,-1,23,25,36,-1,36,35,23,-1,25,19,29,-1,29,36,25,-1});
  }
}
protected class MFVec3f611 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-28.6356f,-230.2178f,10.3911f,34.3822f,-230.2178f,10.3911f,29.9422f,-185.7378f,8.5733f,-27.2978f,-185.7378f,8.9822f,-23.5067f,-237.6f,10.6133f,27.64f,-237.6f,10.6133f,22.4089f,-172.0311f,7.6356f,-20.7244f,-172.0178f,7.9111f,-23.7956f,-188.7467f,5.4356f,-26.5733f,-226.8267f,7.1156f,30.2756f,-226.8267f,7.1422f,26.4711f,-188.7467f,5.0489f,30.9689f,-225.0489f,37.7644f,-28.7733f,-225.0489f,37.7644f,24.8667f,-190.6311f,32.2622f,-24.4267f,-190.6356f,32.3111f,-21.9733f,-232.8089f,40.1333f,24.8222f,-233.3778f,39.1733f,18.5822f,-177.08f,29.8844f,-20.48f,-177.1689f,30.0444f,26.8844f,-222.0622f,40.2533f,21.6f,-192.2622f,35.4889f,16.16f,-180.5244f,33.4311f,-17.6711f,-180.6f,33.5644f,-21.0844f,-192.2622f,35.5333f,-24.8489f,-222.0622f,40.2533f,-18.9644f,-228.7822f,42.3022f,21.5644f,-229.2756f,41.4756f});
  }
}
protected class MFVec2f612 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.813f,0.0266f,0.8136f,0.0488f,0.8136f,0.0488f,0.8133f,0.0266f,0.8111f,0.0474f,0.8105f,0.0283f,0.8108f,0.0283f,0.8111f,0.0474f,0.8141f,0.0525f,0.8141f,0.0525f,0.8123f,0.0198f,0.8125f,0.0198f,0.9273f,0.2479f,0.9315f,0.2698f,0.9337f,0.2676f,0.9301f,0.2489f,0.9262f,0.2444f,0.9337f,0.2762f,0.9335f,0.2763f,0.8381f,0.0441f,0.904f,0.2568f,0.8327f,0.0273f,0.9122f,0.2724f,0.8401f,0.0478f,0.9014f,0.2535f,0.8395f,0.0482f,0.9142f,0.2789f,0.8319f,0.0206f,0.9141f,0.2788f,0.8381f,0.0441f,0.8327f,0.0273f,0.8319f,0.0206f,0.9141f,0.2788f,0.9122f,0.2724f,0.904f,0.2568f,0.9014f,0.2535f,0.8395f,0.0482f});
  }
}
protected class MFFloat613 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat614 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32615 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,8,-1,8,1,0,-1,5,7,3,-1,3,0,5,-1,10,2,4,-1,4,6,10,-1,2,1,8,-1,8,4,2,-1,14,11,6,-1,6,4,14,-1,8,3,17,-1,17,16,8,-1,9,7,12,-1,12,13,9,-1,15,4,8,-1,8,16,15,-1,15,14,4,-1,9,18,17,-1,17,3,9,-1,9,13,18,-1,25,31,30,-1,25,30,27,-1,26,25,27,-1,22,21,20,-1,20,19,22,-1,41,40,39,-1,39,38,41,-1,32,37,36,-1,33,32,36,-1,34,33,36,-1,35,34,36,-1,23,22,19,-1,19,24,23,-1,6,19,20,-1,20,10,6,-1,30,29,28,-1,28,27,30,-1,5,21,22,-1,22,7,5,-1,7,22,23,-1,23,12,7,-1,12,23,24,-1,24,11,12,-1,11,24,19,-1,19,6,11,-1,1,25,26,-1,26,0,1,-1,0,26,27,-1,27,5,0,-1,5,27,28,-1,28,21,5,-1,21,28,29,-1,29,20,21,-1,20,29,30,-1,30,10,20,-1,10,30,31,-1,31,2,10,-1,2,31,25,-1,25,1,2,-1,16,32,33,-1,33,15,16,-1,15,33,34,-1,34,14,15,-1,14,34,35,-1,35,13,14,-1,13,35,36,-1,36,18,13,-1,18,36,37,-1,37,17,18,-1,17,37,32,-1,32,16,17,-1,14,38,39,-1,39,11,14,-1,11,39,40,-1,40,12,11,-1,12,40,41,-1,41,13,12,-1,13,41,38,-1,38,14,13,-1,9,3,7,-1});
  }
}
protected class MFInt32616 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,1,-1,1,0,3,-1,5,4,2,-1,2,3,5,-1,44,46,8,-1,8,45,44,-1,46,42,43,-1,43,8,46,-1,47,48,45,-1,45,8,47,-1,1,2,13,-1,13,12,1,-1,16,4,15,-1,15,14,16,-1,50,8,43,-1,43,49,50,-1,50,47,8,-1,16,18,13,-1,13,2,16,-1,16,14,18,-1,23,22,21,-1,23,21,20,-1,19,23,20,-1,25,24,27,-1,27,26,25,-1,29,28,31,-1,31,30,29,-1,35,34,33,-1,36,35,33,-1,37,36,33,-1,32,37,33,-1,38,25,26,-1,26,39,38,-1,7,26,27,-1,27,6,7,-1,21,41,40,-1,40,20,21,-1,5,24,25,-1,25,4,5,-1,4,25,38,-1,38,15,4,-1,15,38,39,-1,39,11,15,-1,48,56,51,-1,51,45,48,-1,0,23,19,-1,19,3,0,-1,3,19,20,-1,20,5,3,-1,5,20,40,-1,40,24,5,-1,24,40,41,-1,41,27,24,-1,27,41,21,-1,21,6,27,-1,6,21,22,-1,22,9,6,-1,9,22,23,-1,23,0,9,-1,12,35,36,-1,36,17,12,-1,50,54,55,-1,55,47,50,-1,10,37,32,-1,32,14,10,-1,14,32,33,-1,33,18,14,-1,18,33,34,-1,34,13,18,-1,13,34,35,-1,35,12,13,-1,47,52,53,-1,53,48,47,-1,11,31,28,-1,28,15,11,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,10,14,-1,16,2,4,-1});
  }
}
protected class MFVec3f617 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.5556f,-284.6222f,42.9156f,2.5511f,-284.3556f,49.0933f,-16.32f,-284.6222f,42.9867f,26.8756f,-247.5111f,44.3333f,-21.4533f,-247.4667f,44.7867f,26.3911f,-286.6222f,12.2844f,-24.1289f,-246.0889f,10.8133f,31.48f,-246.0889f,10.8133f,3.5822f,-252.0444f,52.4089f,38.0444f,-225.48f,42.8089f,-17.7733f,-286.6222f,12.2844f,-28.6356f,-191.9511f,7.8f,34.3822f,-191.9511f,7.8f,30.9689f,-186.7867f,35.1733f,-28.7733f,-186.7867f,35.1733f,-18.1778f,-234.1778f,49.04f,8.9911f,-238.7556f,55.5333f,31.56f,-233.5111f,55.3467f,34.4711f,-223.1244f,51.4889f,-19.0756f,-246.1778f,5.4889f,-13.3467f,-285.6889f,8.9378f,22.1467f,-285.6889f,8.9378f,26.3867f,-246.4889f,5.5111f,29.08f,-192.2178f,2.7467f,-24.6756f,-192.2178f,2.7467f,2.6133f,-292.3111f,46.3867f,17.2089f,-292.4444f,41.6044f,20f,-293.6f,13.4622f,20.1467f,-289.4667f,10.1911f,-11.3156f,-289.4667f,10.1911f,-14.3511f,-293.6f,13.4844f,-13.1733f,-292.4444f,41.7644f,6.6267f,-230.3556f,60.6889f,-13.1956f,-226.6f,55.5378f,-21.2222f,-185.8978f,43.2889f,25.7689f,-185.8889f,43.2711f,24.1867f,-219.1556f,56.8622f,23.6667f,-226.7689f,59.8222f,-22.8667f,-182.7556f,29.7022f,-24.0889f,-186.2622f,12.0222f,27.7822f,-186.2622f,12.0222f,25.4622f,-182.7556f,29.7022f});
  }
}
protected class MFVec2f618 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8514f,0.0953f,0.8526f,0.0788f,0.846f,0.0768f,0.8466f,0.0958f,0.8195f,0.0808f,0.8225f,0.0994f,0.8225f,0.0994f,0.8195f,0.0808f,0.8903f,0.2261f,0.8467f,0.0958f,0.8381f,0.0441f,0.8136f,0.0488f,0.8561f,0.0728f,0.8532f,0.0697f,0.8381f,0.0441f,0.8136f,0.0488f,0.8436f,0.0662f,0.8533f,0.0697f,0.8503f,0.0646f,0.8461f,0.0998f,0.8248f,0.1027f,0.8248f,0.1027f,0.8462f,0.0997f,0.8498f,0.0994f,0.8184f,0.0977f,0.8157f,0.0811f,0.8157f,0.0809f,0.8184f,0.0977f,0.8165f,0.0457f,0.8341f,0.0424f,0.8341f,0.0424f,0.8165f,0.0457f,0.844f,0.0417f,0.8554f,0.0622f,0.8575f,0.0659f,0.8594f,0.0677f,0.8574f,0.0658f,0.844f,0.0417f,0.8099f,0.0493f,0.8099f,0.0493f,0.82f,0.101f,0.82f,0.101f,0.8821f,0.2087f,0.8838f,0.2252f,0.9098f,0.1997f,0.916f,0.2175f,0.8866f,0.2074f,0.904f,0.2568f,0.9273f,0.2479f,0.8814f,0.2316f,0.8847f,0.2342f,0.9197f,0.2166f,0.9083f,0.2577f,0.925f,0.2515f,0.8813f,0.2388f,0.8986f,0.2602f,0.931f,0.2468f});
  }
}
protected class MFFloat619 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat620 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32621 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,18,-1,18,19,4,-1,5,6,21,-1,21,18,5,-1,7,8,20,-1,20,25,7,-1,8,4,19,-1,19,20,8,-1,6,22,21,-1,1,10,8,-1,8,7,1,-1,6,5,11,-1,11,2,6,-1,5,4,0,-1,0,11,5,-1,4,8,10,-1,10,0,4,-1,1,7,9,-1,9,3,1,-1,9,6,2,-1,2,3,9,-1,9,7,23,-1,23,24,9,-1,6,9,24,-1,24,22,6,-1,23,7,25,-1,0,17,15,-1,15,11,0,-1,1,12,14,-1,14,10,1,-1,11,15,13,-1,13,2,11,-1,3,16,12,-1,12,1,3,-1,2,13,16,-1,16,3,2,-1,10,14,17,-1,17,0,10,-1,14,12,16,-1,16,17,14,-1,15,17,16,-1,16,13,15,-1,28,27,26,-1,29,28,26,-1,30,29,26,-1,18,26,27,-1,27,19,18,-1,19,27,28,-1,28,20,19,-1,20,28,29,-1,29,25,20,-1,36,35,34,-1,36,34,33,-1,33,32,31,-1,33,31,37,-1,36,33,37,-1,21,30,26,-1,26,18,21,-1,24,31,32,-1,32,22,24,-1,22,32,33,-1,33,21,22,-1,21,33,34,-1,34,30,21,-1,30,34,35,-1,35,29,30,-1,29,35,36,-1,36,25,29,-1,25,36,37,-1,37,23,25,-1,23,37,31,-1,31,24,23,-1});
  }
}
protected class MFInt32622 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,6,9,41,-1,41,40,6,-1,9,38,39,-1,39,41,9,-1,5,10,4,-1,11,12,9,-1,9,6,11,-1,5,3,14,-1,14,13,5,-1,3,0,15,-1,15,14,3,-1,38,9,12,-1,12,42,38,-1,11,6,44,-1,44,43,11,-1,17,5,13,-1,13,16,17,-1,44,6,46,-1,46,45,44,-1,5,17,18,-1,18,10,5,-1,46,6,40,-1,15,21,20,-1,20,14,15,-1,11,23,22,-1,22,12,11,-1,14,20,24,-1,24,13,14,-1,43,48,23,-1,23,11,43,-1,13,24,25,-1,25,16,13,-1,12,22,47,-1,47,42,12,-1,22,23,48,-1,48,47,22,-1,20,21,25,-1,25,24,20,-1,29,28,27,-1,30,29,27,-1,26,30,27,-1,2,27,28,-1,28,1,2,-1,1,28,29,-1,29,8,1,-1,8,29,30,-1,30,7,8,-1,31,37,36,-1,31,36,35,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,4,26,27,-1,27,2,4,-1,18,33,34,-1,34,10,18,-1,10,34,35,-1,35,4,10,-1,4,35,36,-1,36,26,4,-1,26,36,37,-1,37,30,26,-1,30,37,31,-1,31,7,30,-1,7,31,32,-1,32,19,7,-1,19,32,33,-1,33,18,19,-1});
  }
}
protected class MFVec3f623 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-5.5289f,-249.5111f,34.56f,-23.3156f,-248.1333f,6.5467f,14.2844f,-243.4667f,6.5911f,-5.5289f,-249.1556f,1.8f,-2.9911f,-195.2f,37.4667f,16.7244f,-195.4978f,31.7022f,18.9022f,-196.9111f,6.3333f,-21.1511f,-196.9111f,6.3556f,-21.1511f,-195.4978f,31.7022f,-2.9911f,-203.2089f,2.6f,-23.3156f,-248.3556f,29.2311f,14.2844f,-243.7333f,29.28f,-20f,-255.6f,7.9778f,7.1733f,-259.2889f,6.6356f,-20f,-255.8222f,27.6756f,7.1733f,-259.5111f,29f,-5.5778f,-260.6667f,6.5822f,-5.5778f,-260.8889f,29.3911f,18.6933f,-184.8356f,32.3556f,-2.3067f,-184.5867f,38.5333f,-21.1822f,-184.8356f,32.4267f,21.5333f,-186.8533f,1.7244f,17.7911f,-197.0578f,1.7867f,-21.1511f,-197.0578f,1.7867f,-2.9911f,-203.2711f,2.0489f,-22.6311f,-186.8533f,1.7244f,12.1333f,-173.1822f,28.2889f,-2.9422f,-172.5422f,34.8267f,-17.3911f,-173.1644f,28.3956f,-17.9956f,-174f,2.7733f,14.7556f,-173.9956f,2.8267f,-2.9467f,-201.3467f,0.7556f,16.32f,-195.24f,0.4311f,19.8578f,-186.1156f,0.4311f,13.5689f,-174.3378f,-0.3556f,-16.6f,-174.3422f,-0.4044f,-20.7244f,-186.1689f,0.4356f,-19.4311f,-195.3644f,0.4356f});
  }
}
protected class MFVec2f624 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8511f,0.1006f,0.8514f,0.0953f,0.8466f,0.0958f,0.8466f,0.1011f,0.8225f,0.0994f,0.8283f,0.1035f,0.9023f,0.1969f,0.8225f,0.0994f,0.8467f,0.0958f,0.8857f,0.2021f,0.8231f,0.1042f,0.8931f,0.1724f,0.8782f,0.1769f,0.8338f,0.1268f,0.8493f,0.125f,0.8543f,0.1273f,0.8302f,0.1302f,0.8258f,0.1072f,0.8236f,0.1075f,0.8231f,0.1042f,0.8504f,0.1328f,0.8508f,0.1334f,0.8781f,0.1731f,0.8909f,0.1692f,0.8352f,0.1346f,0.8353f,0.1353f,0.8228f,0.0929f,0.844f,0.0896f,0.8482f,0.0889f,0.8441f,0.0896f,0.8228f,0.0929f,0.8203f,0.0995f,0.8207f,0.1038f,0.8212f,0.1068f,0.8207f,0.1037f,0.8203f,0.0995f,0.8206f,0.0933f,0.8205f,0.0933f,0.8815f,0.2034f,0.8821f,0.2087f,0.9098f,0.1997f,0.8866f,0.2074f,0.8737f,0.1777f,0.8969f,0.1707f,0.9052f,0.1925f,0.9074f,0.1918f,0.9084f,0.195f,0.876f,0.171f,0.891f,0.1665f});
  }
}
protected class MFFloat625 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat626 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32627 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
protected class MFInt32628 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
protected class MFVec3f629 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.12f,-238.6222f,4.6f,-19.2533f,-238.1333f,29.5778f,12.6711f,-233.1556f,29.9956f,16.7022f,-197.3956f,30.8978f,16.7022f,-197.16f,8.2089f,-19.2933f,-188.0356f,8.3022f,18.3022f,-183.3956f,8.3511f,-19.2933f,-188.2711f,30.9911f,18.3022f,-183.6267f,31.0356f,-11.1067f,-179.4444f,8.3911f,-11.1067f,-179.68f,31.0756f,7.4489f,-180.1467f,31.0711f,7.4489f,-179.9111f,8.3867f,-1.5111f,-189.0756f,3.5556f,-1.5111f,-189.44f,36.32f,-4.1067f,-238.9778f,34.9022f,7.12f,-248.6667f,28.9822f,-3.7111f,-250.3111f,29.3467f,-19.2622f,-237.9111f,9.3467f,-16.2133f,-245.5111f,27.7556f,-16.2178f,-245.3333f,11.04f,12.6622f,-232.9244f,8.9733f,7.1111f,-248.4444f,9.7956f,-3.72f,-250.1333f,9.7467f});
  }
}
protected class MFVec2f630 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8782f,0.1769f,0.8543f,0.1273f,0.8574f,0.1518f,0.8703f,0.1535f,0.8493f,0.125f,0.8504f,0.1318f,0.8846f,0.1491f,0.8931f,0.1724f,0.8349f,0.1336f,0.8379f,0.1515f,0.8533f,0.1496f,0.8338f,0.1268f,0.8302f,0.1302f,0.8351f,0.1545f,0.849f,0.1233f,0.8336f,0.1251f,0.849f,0.123f,0.8335f,0.1249f,0.8539f,0.1573f,0.8543f,0.1579f,0.8703f,0.1496f,0.8822f,0.146f,0.8398f,0.159f,0.8399f,0.1597f,0.8737f,0.1777f,0.8664f,0.1541f,0.8969f,0.1707f,0.8878f,0.1476f,0.8796f,0.181f,0.8945f,0.1764f,0.8684f,0.1475f,0.8822f,0.1433f});
  }
}
protected class MFFloat631 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat632 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32633 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
protected class MFInt32634 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
protected class MFVec3f635 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.6311f,-194.9778f,31.4578f,13.6222f,-194.7467f,10.4311f,10.3867f,-211f,30.3511f,10.3778f,-210.7867f,11.0356f,-16.1422f,-209.6044f,31.2222f,-4.0089f,-210.5067f,34.8756f,-16.1511f,-209.3689f,10.24f,-4.0222f,-210.1911f,6.4578f,5.5422f,-223.1511f,29.2889f,5.5378f,-222.96f,11.7867f,-16.2667f,-222.3333f,29.0889f,-5.6933f,-223.6978f,32.9067f,-16.2756f,-222.1467f,12.3333f,-5.7067f,-223.4222f,8.2578f,6.9867f,-226.8933f,20.4533f,-14.6533f,-226.8756f,20.4622f,-5.7333f,-229.6267f,20.4311f,6.8f,-226.1333f,25.2978f,-14.8356f,-225.8711f,16.4133f,-5.16f,-228.3244f,26.8622f,6.8f,-226.0889f,15.8978f,-14.8356f,-225.9244f,24.76f,-5.1556f,-228.4178f,14.4622f,-17.2267f,-188.4f,31.1556f,14.6889f,-183.1956f,10.5511f,14.6978f,-183.4311f,31.5733f,5.4533f,-179.7333f,30.8533f,5.4444f,-179.5156f,11.3778f,-10.48f,-179.6311f,30.8622f,-17.2356f,-188.1778f,10.92f,-10.4844f,-179.4178f,11.3822f,-1.9911f,-189.2311f,36.4711f,-2.0044f,-188.8933f,6.1733f});
  }
}
protected class MFVec2f636 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8542f,0.1553f,0.8574f,0.1518f,0.8533f,0.1496f,0.8379f,0.1515f,0.8351f,0.1545f,0.8388f,0.1572f,0.8414f,0.1663f,0.8547f,0.1647f,0.8578f,0.1639f,0.8665f,0.142f,0.8703f,0.1535f,0.8804f,0.1378f,0.8846f,0.1491f,0.8382f,0.1663f,0.8495f,0.1759f,0.8523f,0.1752f,0.8544f,0.1737f,0.8566f,0.1736f,0.8658f,0.1324f,0.8753f,0.1296f,0.8677f,0.1303f,0.8725f,0.1289f,0.842f,0.1753f,0.8441f,0.175f,0.8533f,0.1759f,0.8496f,0.1769f,0.8467f,0.1759f,0.846f,0.1768f,0.87f,0.1292f,0.8525f,0.1477f,0.8382f,0.1495f,0.8525f,0.1475f,0.8381f,0.1492f,0.8664f,0.1541f,0.8878f,0.1476f,0.8639f,0.1422f,0.8827f,0.1365f,0.8634f,0.1325f,0.8774f,0.1283f,0.8662f,0.1297f,0.8697f,0.1281f,0.8732f,0.1275f,0.872f,0.1575f,0.8858f,0.1533f});
  }
}
protected class MFFloat637 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat638 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32639 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,4,-1,4,1,5,-1,7,0,3,-1,3,2,7,-1,8,11,10,-1,10,9,8,-1,12,15,14,-1,14,13,12,-1,1,8,9,-1,9,5,1,-1,5,9,10,-1,10,7,5,-1,7,10,11,-1,11,0,7,-1,0,11,8,-1,8,1,0,-1,6,12,13,-1,13,4,6,-1,4,13,14,-1,14,3,4,-1,3,14,15,-1,15,2,3,-1,2,15,12,-1,12,6,2,-1,22,21,20,-1,20,23,22,-1,18,17,16,-1,16,19,18,-1,5,16,17,-1,17,6,5,-1,6,17,18,-1,18,2,6,-1,2,18,19,-1,19,7,2,-1,7,19,16,-1,16,5,7,-1,0,20,21,-1,21,3,0,-1,3,21,22,-1,22,4,3,-1,4,22,23,-1,23,1,4,-1,1,23,20,-1,20,0,1,-1});
  }
}
protected class MFInt32640 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {24,0,26,-1,26,25,24,-1,4,7,6,-1,6,5,4,-1,8,11,10,-1,10,9,8,-1,12,32,31,-1,31,30,12,-1,25,28,29,-1,29,24,25,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,7,4,-1,7,11,8,-1,8,2,7,-1,0,12,30,-1,30,26,0,-1,3,13,14,-1,14,6,3,-1,6,14,15,-1,15,5,6,-1,27,32,12,-1,12,0,27,-1,17,16,19,-1,19,18,17,-1,35,20,37,-1,37,36,35,-1,24,37,20,-1,20,0,24,-1,0,20,35,-1,35,27,0,-1,5,21,22,-1,22,4,5,-1,4,22,23,-1,23,1,4,-1,7,19,16,-1,16,6,7,-1,6,16,17,-1,17,3,6,-1,26,33,34,-1,34,25,26,-1,2,18,19,-1,19,7,2,-1});
  }
}
protected class MFVec3f641 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {34.9244f,-233.2444f,5.9511f,-29.1778f,-233.1556f,5.9467f,30.3111f,-188.5556f,34.6756f,31.68f,-187.7067f,5.6133f,-26.6089f,-187.7111f,5.6711f,-28.2622f,-233.0222f,36.4889f,-26.9244f,-188.5511f,35.0844f,34.7556f,-233.0222f,36.4889f,-24.5333f,-240.1778f,5.5822f,-23.9467f,-240.6222f,36.9289f,28.2044f,-240.6222f,36.9289f,28.3156f,-240.2667f,5.5867f,-20.3733f,-174.8222f,34.0444f,-20.16f,-174.4578f,8.4533f,24.9422f,-174.4533f,8.4133f,24.0444f,-174.8267f,33.7644f,-26.3867f,-230.2533f,41.5022f,-23.5822f,-191.8133f,39.8356f,27.0711f,-191.8178f,39.4489f,30.9111f,-230.2533f,41.5244f,30.9244f,-229.9156f,1.7778f,28.1378f,-190.7867f,0.6978f,-23.1644f,-190.7911f,0.7556f,-27.0133f,-229.8222f,1.7689f});
  }
}
protected class MFVec2f642 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9315f,0.2698f,0.8136f,0.0488f,0.7924f,0.0507f,0.7911f,0.0281f,0.8136f,0.0488f,0.813f,0.0266f,0.791f,0.0281f,0.7924f,0.0508f,0.7924f,0.0543f,0.8143f,0.0526f,0.8143f,0.0526f,0.7924f,0.0543f,0.9335f,0.2763f,0.7903f,0.0215f,0.7903f,0.0215f,0.8123f,0.0198f,0.7875f,0.03f,0.7875f,0.03f,0.7887f,0.0494f,0.7887f,0.0495f,0.9277f,0.2691f,0.8167f,0.0279f,0.8173f,0.0471f,0.8173f,0.0471f,0.9273f,0.2479f,0.9479f,0.2423f,0.9531f,0.2644f,0.9318f,0.2697f,0.9473f,0.2389f,0.926f,0.2443f,0.955f,0.2707f,0.9551f,0.2707f,0.9337f,0.2763f,0.9563f,0.262f,0.9518f,0.243f,0.928f,0.269f,0.924f,0.2502f,0.9241f,0.2502f});
  }
}
protected class MFFloat643 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat644 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32645 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,8,6,-1,6,3,0,-1,10,5,1,-1,1,7,10,-1,2,9,7,-1,7,1,2,-1,8,0,4,-1,4,11,8,-1,14,13,12,-1,12,15,14,-1,34,33,32,-1,32,35,34,-1,25,24,29,-1,29,28,25,-1,17,20,19,-1,19,18,17,-1,25,28,27,-1,27,26,25,-1,20,17,16,-1,16,21,20,-1,6,12,13,-1,13,3,6,-1,24,31,30,-1,30,29,24,-1,2,14,15,-1,15,9,2,-1,16,23,22,-1,22,21,16,-1,9,16,17,-1,17,7,9,-1,7,17,18,-1,18,10,7,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,8,11,-1,8,20,21,-1,21,6,8,-1,6,21,22,-1,22,12,6,-1,12,22,23,-1,23,15,12,-1,15,23,16,-1,16,9,15,-1,3,24,25,-1,25,0,3,-1,0,25,26,-1,26,4,0,-1,4,26,27,-1,27,5,4,-1,5,27,28,-1,28,1,5,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,14,2,-1,14,30,31,-1,31,13,14,-1,13,31,24,-1,24,3,13,-1,10,32,33,-1,33,5,10,-1,5,33,34,-1,34,4,5,-1,4,34,35,-1,35,11,4,-1,11,35,32,-1,32,10,11,-1});
  }
}
protected class MFInt32646 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,0,3,2,-1,39,38,37,-1,37,36,39,-1,40,41,36,-1,36,37,40,-1,1,2,11,-1,11,10,1,-1,12,15,14,-1,14,13,12,-1,43,46,45,-1,45,44,43,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,14,15,-1,15,3,0,-1,23,33,32,-1,32,22,23,-1,8,12,13,-1,13,9,8,-1,31,35,34,-1,34,30,31,-1,9,31,24,-1,24,4,9,-1,36,48,49,-1,49,39,36,-1,7,25,26,-1,26,10,7,-1,10,26,27,-1,27,1,10,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,14,0,-1,14,34,35,-1,35,13,14,-1,13,35,31,-1,31,9,13,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,11,2,-1,42,52,53,-1,53,38,42,-1,38,53,47,-1,47,37,38,-1,5,21,22,-1,22,8,5,-1,8,22,32,-1,32,12,8,-1,12,32,33,-1,33,15,12,-1,15,33,23,-1,23,3,15,-1,39,45,46,-1,46,38,39,-1,6,19,16,-1,16,11,6,-1,11,16,17,-1,17,10,11,-1,10,17,18,-1,18,7,10,-1});
  }
}
protected class MFVec3f647 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {32.2667f,-240.6667f,9.1289f,-23.4889f,-240.6667f,9.1289f,-17.5911f,-282.5333f,8.0444f,26.7511f,-282.5333f,8.0444f,34.9244f,-188.6756f,8.8267f,-29.1778f,-188.5689f,8.8222f,26.76f,-283.1556f,43.8489f,-23.76f,-242.6222f,42.3778f,31.8533f,-242.6222f,42.3778f,-17.4044f,-283.1556f,43.8489f,-28.2622f,-188.4578f,39.3689f,34.7556f,-188.4578f,39.3689f,23.2533f,-290.0444f,42.4933f,23.2489f,-290.2667f,10.2933f,-13.7244f,-290.2667f,10.2933f,-13.5644f,-290.0444f,42.4933f,-12.92f,-281.9111f,46.8667f,-19.2089f,-242.1778f,49.2044f,-24.8933f,-187.5511f,46.1067f,29.9778f,-187.5511f,46.1067f,27.2622f,-242.4444f,49.2178f,22.5956f,-281.9556f,46.8667f,20.2178f,-286.3111f,46.0667f,-10.52f,-286.3111f,46.0667f,22.3244f,-280.9778f,3.9689f,27.2667f,-240.8889f,3.4222f,29.6889f,-188.1867f,3.4578f,-25.0489f,-188.0978f,3.4533f,-18.56f,-240.6222f,3.4133f,-12.88f,-280.9333f,3.9644f,-10.4533f,-286.1778f,5.3511f,19.92f,-286.1778f,5.3511f,-24.2667f,-183.6933f,33.3867f,-24.8222f,-183.7378f,13.2444f,29f,-183.8356f,13.2489f,28.8933f,-183.68f,33.3867f});
  }
}
protected class MFVec2f648 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8225f,0.0994f,0.8195f,0.0808f,0.7938f,0.0824f,0.7939f,0.1016f,0.8195f,0.0808f,0.7938f,0.0824f,0.7924f,0.0507f,0.8136f,0.0488f,0.7939f,0.1016f,0.8225f,0.0994f,0.8136f,0.0488f,0.7924f,0.0508f,0.7964f,0.1053f,0.8205f,0.103f,0.8205f,0.103f,0.7964f,0.1053f,0.796f,0.0481f,0.809f,0.0468f,0.809f,0.0469f,0.796f,0.048f,0.7888f,0.0827f,0.7888f,0.0826f,0.7886f,0.1011f,0.7887f,0.1011f,0.8243f,0.0799f,0.8186f,0.0479f,0.8186f,0.0479f,0.8243f,0.0801f,0.7878f,0.051f,0.7878f,0.0509f,0.8275f,0.0984f,0.8275f,0.0983f,0.7902f,0.1036f,0.7902f,0.1036f,0.8264f,0.1006f,0.8264f,0.1006f,0.916f,0.2175f,0.941f,0.2114f,0.9479f,0.2423f,0.9273f,0.2479f,0.9376f,0.1925f,0.9098f,0.1997f,0.9479f,0.2423f,0.9448f,0.2456f,0.9323f,0.249f,0.9323f,0.249f,0.9448f,0.2456f,0.9459f,0.2103f,0.9115f,0.2191f,0.9226f,0.2496f,0.9226f,0.2496f,0.9114f,0.219f,0.9524f,0.2413f,0.9524f,0.2414f});
  }
}
protected class MFFloat649 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat650 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32651 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,26,-1,26,21,3,-1,5,6,27,-1,27,25,5,-1,4,23,26,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,24,-1,24,22,7,-1,4,7,22,-1,22,23,4,-1,24,5,25,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,21,18,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,20,19,-1,19,6,16,-1,3,18,20,-1,20,16,3,-1,19,27,6,-1,31,30,29,-1,29,28,31,-1,26,28,29,-1,29,21,26,-1,38,37,36,-1,38,36,35,-1,35,34,33,-1,35,33,32,-1,38,35,32,-1,27,30,31,-1,31,25,27,-1,44,43,42,-1,44,42,41,-1,41,40,39,-1,44,41,39,-1,44,39,45,-1,18,32,33,-1,33,20,18,-1,20,33,34,-1,34,19,20,-1,19,34,35,-1,35,27,19,-1,27,35,36,-1,36,30,27,-1,30,36,37,-1,37,29,30,-1,29,37,38,-1,38,21,29,-1,21,38,32,-1,32,18,21,-1,22,39,40,-1,40,23,22,-1,23,40,41,-1,41,26,23,-1,26,41,42,-1,42,28,26,-1,28,42,43,-1,43,31,28,-1,31,43,44,-1,44,25,31,-1,25,44,45,-1,45,24,25,-1,24,45,39,-1,39,22,24,-1});
  }
}
protected class MFInt32652 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1});
  }
}
protected class MFVec3f653 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-23.2178f,-251.2444f,10.7733f,14.3778f,-246.0444f,10.64f,-5.4356f,-252.5333f,5.2222f,17.8844f,-192.8178f,34.5644f,17.8844f,-192.5556f,8.8711f,-21.0578f,-192.5556f,8.8711f,-21.0578f,-192.8178f,34.5644f,-2.8978f,-199.1111f,4.3822f,-19.9067f,-259.6f,12.5022f,7.2667f,-263.7333f,11.3022f,-19.9067f,-259.3333f,30.5511f,7.2667f,-263.4667f,32.0267f,-5.48f,-265.2889f,11.3067f,-5.48f,-265.0222f,32.4711f,-23.2178f,-250.9333f,31.8133f,-5.4356f,-252.0889f,38f,-2.8978f,-199.1422f,38.9822f,14.3778f,-245.7333f,31.68f,17.8844f,-192.8622f,39.3022f,-21.0578f,-192.8622f,39.3022f,-2.8978f,-199.0756f,39.56f,21.6267f,-182.6578f,39.2356f,-2.8978f,-199.0089f,3.8044f,17.8844f,-192.9022f,3.9422f,-21.0578f,-192.9022f,3.9422f,-22.7289f,-182.0356f,3.4267f,21.6178f,-182.0356f,3.4267f,-22.5378f,-182.6578f,39.2356f,14.4267f,-170.0667f,4.5911f,14.4356f,-170f,37.1644f,-18.1467f,-170f,37.1644f,-18.3111f,-170.0667f,4.5911f,16.9067f,-190.7822f,40.6889f,-2.8578f,-197.0489f,40.8844f,-19.9378f,-190.8444f,40.6889f,-21.3067f,-181.7822f,40.6489f,-17.2311f,-169.8356f,40.6133f,13.6578f,-169.8356f,40.6133f,20.6489f,-181.7733f,40.6489f,-2.8489f,-196.7511f,2.52f,16.1156f,-191.2222f,2.0622f,19.5689f,-181.9911f,1.7644f,13.0978f,-170.2222f,1.7378f,-16.6889f,-170.2222f,1.7378f,-20.4711f,-181.9733f,1.7644f,-19.0311f,-191.3467f,2.0622f});
  }
}
protected class MFVec2f654 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8168f,0.105f,0.8225f,0.0994f,0.7939f,0.1016f,0.7996f,0.1065f,0.9311f,0.1887f,0.7939f,0.1016f,0.8225f,0.0994f,0.9145f,0.1932f,0.794f,0.107f,0.9232f,0.1611f,0.908f,0.1649f,0.8025f,0.1324f,0.818f,0.1313f,0.7986f,0.1359f,0.7957f,0.11f,0.7939f,0.1101f,0.794f,0.107f,0.8228f,0.1342f,0.8186f,0.1401f,0.819f,0.1409f,0.9081f,0.1606f,0.921f,0.1574f,0.8033f,0.1412f,0.8033f,0.142f,0.8231f,0.1042f,0.8212f,0.1078f,0.8231f,0.1042f,0.8236f,0.1075f,0.7948f,0.0956f,0.8206f,0.0932f,0.8206f,0.0932f,0.7948f,0.0956f,0.8249f,0.0987f,0.8253f,0.1032f,0.8258f,0.1063f,0.8253f,0.1032f,0.8249f,0.0987f,0.823f,0.0929f,0.823f,0.0929f,0.7917f,0.1017f,0.7916f,0.1064f,0.7918f,0.1091f,0.7916f,0.1063f,0.7917f,0.1017f,0.7927f,0.0957f,0.7927f,0.0957f,0.9376f,0.1925f,0.9098f,0.1997f,0.927f,0.1595f,0.9344f,0.1846f,0.9361f,0.1842f,0.9366f,0.1872f,0.9035f,0.1654f,0.9061f,0.1582f,0.9213f,0.1544f,0.9096f,0.1911f,0.9084f,0.195f,0.9074f,0.1918f});
  }
}
protected class MFFloat655 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat656 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32657 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
protected class MFInt32658 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
protected class MFVec3f659 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.6756f,-243.8222f,6.08f,-18.8356f,-242.5778f,31.0267f,13.0711f,-237.0667f,31.2756f,16.7022f,-198.4489f,31.3333f,16.7022f,-198.7289f,10.2933f,-19.2933f,-188.4978f,10.0267f,18.3022f,-183.2933f,9.8889f,-19.2933f,-188.2178f,31.0667f,18.3022f,-183.0089f,30.9289f,-11.1067f,-178.8667f,9.7733f,-11.1067f,-178.5822f,30.8133f,7.4489f,-179.1067f,30.8267f,7.4489f,-179.3911f,9.7867f,-1.5111f,-189.8089f,4.4711f,-1.5111f,-189.3689f,37.2533f,-3.6889f,-243.4222f,36.3956f,7.5911f,-254.4889f,30.8711f,-3.28f,-255.0667f,31.1867f,-18.8267f,-242.8444f,10.7822f,-15.76f,-250.8889f,29.4978f,-15.7511f,-251.1111f,12.7778f,13.08f,-237.3333f,10.2444f,7.6f,-254.7556f,11.6756f,-3.2267f,-256.5778f,11.68f});
  }
}
protected class MFVec2f660 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.908f,0.1649f,0.8228f,0.1342f,0.8238f,0.1612f,0.9018f,0.1387f,0.818f,0.1313f,0.8186f,0.139f,0.9163f,0.135f,0.9232f,0.1611f,0.8031f,0.1401f,0.8044f,0.1596f,0.8199f,0.1584f,0.8025f,0.1324f,0.7986f,0.1359f,0.8014f,0.1628f,0.8179f,0.1294f,0.8023f,0.1305f,0.8179f,0.1291f,0.8023f,0.1302f,0.8199f,0.1671f,0.8202f,0.1672f,0.902f,0.1343f,0.914f,0.1313f,0.8058f,0.1681f,0.8058f,0.1689f,0.9035f,0.1654f,0.8978f,0.139f,0.927f,0.1595f,0.9196f,0.1336f,0.9092f,0.1696f,0.9243f,0.1658f,0.9003f,0.1324f,0.9142f,0.1283f});
  }
}
protected class MFFloat661 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat662 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32663 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
protected class MFInt32664 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
protected class MFVec3f665 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.3467f,-194.7378f,32.0578f,13.3556f,-195.0222f,11.0178f,10.8267f,-210.5289f,31.8578f,10.8444f,-210.9911f,12.0711f,-15.6844f,-209.4844f,32.6978f,-3.5689f,-210.0622f,36.0756f,-15.6667f,-209.9822f,11.2044f,-3.5422f,-210.72f,7.4044f,5.2533f,-225.5333f,30.8489f,5.2711f,-225.9689f,13.0889f,-15.7067f,-225.0756f,30.6178f,-5.1867f,-225.0178f,34.0044f,-15.6933f,-225.4933f,13.6133f,-5.1644f,-225.5956f,9.9778f,6.6711f,-228.5333f,21.9733f,-14.1244f,-228.6489f,21.9644f,-5.2356f,-230.5911f,22f,6.4844f,-227.8222f,26.8667f,-14.2978f,-228.0533f,17.84f,-4.6578f,-229.4311f,28.4933f,6.4933f,-228.0978f,17.3289f,-14.3067f,-227.8178f,26.3067f,-4.64f,-229.9067f,15.92f,-16.8089f,-187.2889f,31.4667f,15.1067f,-182.0756f,10.6844f,15.0978f,-181.7956f,31.72f,5.8356f,-177.6444f,30.8444f,5.8444f,-177.9022f,11.36f,-10.0978f,-177.4844f,30.8311f,-16.8f,-187.5556f,11.2222f,-10.0889f,-177.7467f,11.3422f,-1.5733f,-188.12f,36.8311f,-1.56f,-188.5289f,6.5156f});
  }
}
protected class MFVec2f666 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8204f,0.1649f,0.8238f,0.1612f,0.8199f,0.1584f,0.8044f,0.1596f,0.8014f,0.1628f,0.8049f,0.166f,0.807f,0.1802f,0.8204f,0.1792f,0.8232f,0.1783f,0.8982f,0.1238f,0.9018f,0.1387f,0.9123f,0.1202f,0.9163f,0.135f,0.8038f,0.18f,0.8141f,0.1881f,0.8169f,0.1876f,0.8192f,0.1861f,0.8213f,0.1861f,0.8983f,0.1142f,0.9079f,0.1117f,0.9004f,0.112f,0.9052f,0.1108f,0.8067f,0.1872f,0.8088f,0.1869f,0.8179f,0.1883f,0.8142f,0.1891f,0.8114f,0.188f,0.8106f,0.1889f,0.9027f,0.111f,0.8192f,0.1563f,0.8048f,0.1573f,0.8192f,0.156f,0.8048f,0.1571f,0.8978f,0.139f,0.9196f,0.1336f,0.8956f,0.1239f,0.9147f,0.119f,0.8959f,0.1141f,0.9101f,0.1105f,0.8989f,0.1113f,0.9025f,0.1098f,0.906f,0.1094f,0.9033f,0.1433f,0.9173f,0.1398f});
  }
}
protected class MFFloat667 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat668 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32669 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,7,4,-1,4,3,6,-1,7,8,9,-1,9,0,7,-1,11,5,1,-1,1,2,11,-1,5,6,3,-1,3,1,5,-1,2,10,11,-1,4,7,0,-1,17,16,15,-1,17,15,14,-1,13,17,14,-1,20,22,21,-1,27,26,25,-1,25,24,27,-1,17,13,12,-1,12,18,17,-1,23,22,20,-1,20,19,23,-1,9,12,13,-1,13,0,9,-1,0,13,14,-1,14,4,0,-1,4,14,15,-1,15,3,4,-1,3,15,16,-1,16,1,3,-1,1,16,17,-1,17,2,1,-1,2,17,18,-1,18,10,2,-1,10,18,12,-1,12,9,10,-1,11,19,20,-1,20,5,11,-1,5,20,21,-1,21,6,5,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,8,7,-1,8,23,19,-1,19,11,8,-1,8,24,25,-1,25,9,8,-1,9,25,26,-1,26,10,9,-1,10,26,27,-1,27,11,10,-1,11,27,24,-1,24,8,11,-1});
  }
}
protected class MFInt32670 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,3,6,5,-1,5,4,3,-1,7,10,9,-1,9,8,7,-1,10,28,29,-1,29,9,10,-1,8,11,7,-1,2,3,4,-1,16,15,14,-1,16,14,13,-1,12,16,13,-1,35,37,36,-1,23,22,39,-1,39,38,23,-1,16,12,25,-1,25,24,16,-1,26,19,17,-1,17,27,26,-1,5,25,12,-1,12,4,5,-1,4,12,13,-1,13,2,4,-1,2,13,14,-1,14,1,2,-1,29,32,33,-1,33,9,29,-1,9,33,34,-1,34,8,9,-1,8,34,40,-1,40,11,8,-1,11,40,41,-1,41,30,11,-1,7,43,35,-1,35,10,7,-1,10,35,36,-1,36,28,10,-1,0,18,19,-1,19,3,0,-1,3,19,26,-1,26,6,3,-1,31,42,43,-1,43,7,31,-1,6,20,21,-1,21,5,6,-1,30,39,22,-1,22,11,30,-1,11,22,23,-1,23,7,11,-1,7,23,38,-1,38,31,7,-1});
  }
}
protected class MFVec3f671 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {33.28f,-225.6356f,16.9244f,-20.6622f,-221.76f,-3.2044f,-27.3067f,-225.6089f,16.9156f,3.1867f,-219.8311f,-9.2311f,25.3733f,-221.9111f,-3.1556f,-19.4844f,-190.0267f,17.5067f,3.4178f,-189.2622f,4.4267f,27.0222f,-190.0133f,17.5289f,31.68f,-182.5244f,46.9822f,34.9244f,-228.0667f,47.32f,-29.1778f,-227.96f,47.3156f,-26.6089f,-182.5289f,47.04f,28f,-235.2f,47.1556f,26.7378f,-233.7333f,16.7156f,19.9244f,-230.5911f,-0.4533f,2.84f,-228.7956f,-5.0978f,-15.2978f,-230.4978f,-0.3067f,-20.9867f,-233.7333f,16.7467f,-23.9067f,-235.1111f,47.1511f,-18.5822f,-169.32f,49.8178f,-13.6489f,-176.5422f,20.1111f,3.0844f,-175.88f,10.6578f,20.9644f,-176.5778f,20.3511f,24.2222f,-169.2933f,49.7733f,27.5556f,-186.3511f,50.4844f,30.2667f,-224.4133f,50.4756f,-26.3244f,-224.32f,50.4711f,-22.5867f,-186.3556f,50.5378f});
  }
}
protected class MFVec2f672 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7624f,0.0345f,0.7525f,0.0502f,0.7571f,0.0508f,0.7729f,0.0334f,0.7734f,0.0512f,0.7924f,0.0508f,0.791f,0.0281f,0.9531f,0.2644f,0.9665f,0.2386f,0.9827f,0.2362f,0.9706f,0.2558f,0.9479f,0.2423f,0.7736f,0.0553f,0.7595f,0.0549f,0.7559f,0.0544f,0.7596f,0.0549f,0.7736f,0.0553f,0.7721f,0.0268f,0.7644f,0.0276f,0.7723f,0.0268f,0.7938f,0.0298f,0.795f,0.0487f,0.9457f,0.2448f,0.9501f,0.2632f,0.7926f,0.0543f,0.7926f,0.0544f,0.7903f,0.0215f,0.7903f,0.0215f,0.9803f,0.2531f,0.9874f,0.236f,0.9479f,0.2423f,0.9532f,0.2644f,0.9832f,0.2324f,0.9795f,0.2325f,0.9656f,0.2346f,0.9721f,0.2624f,0.9795f,0.2602f,0.9719f,0.2625f,0.9502f,0.2632f,0.9457f,0.2447f,0.9471f,0.2389f,0.9471f,0.2388f,0.9551f,0.2707f,0.955f,0.2707f});
  }
}
protected class MFFloat673 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat674 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32675 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,2,0,-1,0,6,9,-1,6,0,4,-1,4,10,6,-1,7,1,3,-1,3,8,7,-1,7,11,5,-1,5,1,7,-1,12,15,14,-1,14,13,12,-1,34,33,32,-1,32,35,34,-1,17,16,21,-1,21,20,17,-1,29,24,31,-1,31,30,29,-1,17,20,19,-1,19,18,17,-1,24,29,28,-1,28,25,24,-1,9,12,13,-1,13,2,9,-1,16,23,22,-1,22,21,16,-1,3,14,15,-1,15,8,3,-1,28,27,26,-1,26,25,28,-1,2,16,17,-1,17,0,2,-1,0,17,18,-1,18,4,0,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,1,5,-1,1,20,21,-1,21,3,1,-1,3,21,22,-1,22,14,3,-1,14,22,23,-1,23,13,14,-1,13,23,16,-1,16,2,13,-1,6,24,25,-1,25,9,6,-1,9,25,26,-1,26,12,9,-1,12,26,27,-1,27,15,12,-1,15,27,28,-1,28,8,15,-1,8,28,29,-1,29,7,8,-1,7,29,30,-1,30,11,7,-1,11,30,31,-1,31,10,11,-1,10,31,24,-1,24,6,10,-1,4,32,33,-1,33,10,4,-1,10,33,34,-1,34,11,10,-1,11,34,35,-1,35,5,11,-1,5,35,32,-1,32,4,5,-1});
  }
}
protected class MFInt32676 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,1,2,5,-1,5,4,1,-1,38,9,40,-1,40,39,38,-1,38,42,41,-1,41,9,38,-1,12,15,14,-1,14,13,12,-1,16,45,44,-1,44,43,16,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,12,13,-1,13,3,0,-1,23,33,32,-1,32,22,23,-1,8,14,15,-1,15,7,8,-1,31,35,34,-1,34,30,31,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,5,2,-1,37,52,53,-1,53,41,37,-1,41,53,46,-1,46,9,41,-1,9,46,47,-1,47,40,9,-1,8,22,32,-1,32,14,8,-1,14,32,33,-1,33,13,14,-1,13,33,23,-1,23,3,13,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,12,0,-1,12,34,35,-1,35,15,12,-1,15,35,31,-1,31,7,15,-1,7,31,24,-1,24,6,7,-1,38,48,49,-1,49,42,38,-1,11,25,26,-1,26,4,11,-1,4,26,27,-1,27,1,4,-1,5,18,19,-1,19,4,5,-1,36,45,16,-1,16,42,36,-1,42,16,43,-1,43,41,42,-1,10,17,18,-1,18,5,10,-1});
  }
}
protected class MFVec3f677 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {29.4044f,-237.8222f,3.7111f,-22.6089f,-237.8222f,3.7111f,25.64f,-279.7778f,3.6667f,-17.4978f,-279.8667f,3.6711f,33.28f,-186.8667f,5.4267f,-27.3067f,-186.8444f,5.4133f,32.2667f,-241.2889f,36.1244f,-23.4889f,-241.2889f,36.1244f,-17.5911f,-283.1556f,35.04f,26.7511f,-283.1556f,35.04f,34.9244f,-189.3022f,35.8222f,-29.1778f,-189.1956f,35.8178f,22.9244f,-291.1111f,33.0889f,21.7111f,-289.0222f,5.8844f,-13.44f,-289.1111f,5.8978f,-13.52f,-291.1111f,33.0889f,21.3733f,-278.8f,-0.2578f,25.0844f,-237.1111f,-1.7378f,28.72f,-185.8044f,0.8489f,-22.4044f,-185.7822f,0.84f,-18.3156f,-236.9333f,-1.7289f,-13.2578f,-278.8f,-0.2533f,-10.4889f,-285.4667f,0.3244f,18.72f,-285.4222f,0.3111f,27.6444f,-241.7778f,42.1689f,22.8089f,-281.2889f,39.1333f,19.7689f,-287.1111f,37.7511f,-10.4489f,-287.1111f,37.7511f,-13.4133f,-281.2889f,39.1333f,-18.96f,-241.6f,42.1644f,-25.3378f,-189.4444f,41.2667f,30.04f,-189.5333f,41.2711f,27.6933f,-182.56f,8.6533f,28.6089f,-183.9333f,32.0667f,-24f,-183.8356f,32.0667f,-21.8844f,-182.5467f,8.6444f});
  }
}
protected class MFVec2f678 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7939f,0.1016f,0.7938f,0.0824f,0.7694f,0.0827f,0.766f,0.1014f,0.7924f,0.0508f,0.7734f,0.0512f,0.7938f,0.0824f,0.7939f,0.1016f,0.766f,0.1015f,0.965f,0.2069f,0.7734f,0.0512f,0.7924f,0.0507f,0.7909f,0.1057f,0.7677f,0.1056f,0.7677f,0.1057f,0.7909f,0.1057f,0.9517f,0.2441f,0.7765f,0.0488f,0.7765f,0.0488f,0.789f,0.0484f,0.7643f,0.0825f,0.7643f,0.0824f,0.7614f,0.1009f,0.7614f,0.1009f,0.7991f,0.0823f,0.7971f,0.0505f,0.7971f,0.0505f,0.7991f,0.0824f,0.7688f,0.0511f,0.7688f,0.0511f,0.7994f,0.1003f,0.7994f,0.1003f,0.7625f,0.1038f,0.7625f,0.1038f,0.7972f,0.1034f,0.7972f,0.1034f,0.9479f,0.2423f,0.9665f,0.2385f,0.941f,0.2114f,0.9376f,0.1925f,0.9651f,0.1878f,0.9665f,0.2386f,0.9479f,0.2423f,0.9639f,0.2415f,0.9639f,0.2415f,0.9517f,0.244f,0.9701f,0.2063f,0.9698f,0.1875f,0.9358f,0.2124f,0.9433f,0.2434f,0.9433f,0.2434f,0.9358f,0.2123f,0.9711f,0.2379f,0.9711f,0.2379f});
  }
}
protected class MFFloat679 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat680 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32681 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,22,-1,22,23,3,-1,5,6,31,-1,31,32,5,-1,4,44,22,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,45,-1,45,43,7,-1,4,7,43,-1,43,44,4,-1,45,5,32,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,23,40,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,41,42,-1,42,6,16,-1,3,40,41,-1,41,16,3,-1,42,31,6,-1,21,20,19,-1,19,18,21,-1,22,18,19,-1,19,23,22,-1,24,30,29,-1,24,29,28,-1,28,27,26,-1,28,26,25,-1,24,28,25,-1,31,20,21,-1,21,32,31,-1,33,39,38,-1,33,38,37,-1,37,36,35,-1,33,37,35,-1,33,35,34,-1,40,25,26,-1,26,41,40,-1,41,26,27,-1,27,42,41,-1,42,27,28,-1,28,31,42,-1,31,28,29,-1,29,20,31,-1,20,29,30,-1,30,19,20,-1,19,30,24,-1,24,23,19,-1,23,24,25,-1,25,40,23,-1,43,35,36,-1,36,44,43,-1,44,36,37,-1,37,22,44,-1,22,37,38,-1,38,18,22,-1,18,38,39,-1,39,21,18,-1,21,39,33,-1,33,32,21,-1,32,33,34,-1,34,45,32,-1,45,34,35,-1,35,43,45,-1});
  }
}
protected class MFInt32682 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1});
  }
}
protected class MFVec3f683 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-23.2133f,-241.8667f,11.8756f,14.3822f,-237.1556f,11.72f,-5.4311f,-243.1111f,6.52f,17.8889f,-190.2889f,33.8311f,17.8933f,-188.3289f,11.6267f,-21.0533f,-188.3289f,11.6267f,-21.0533f,-190.2889f,33.8311f,-2.8933f,-192.9778f,6.0489f,-19.9022f,-249.4667f,13.2978f,7.2756f,-253.2889f,12.1244f,-19.9022f,-249.0222f,31.0756f,7.2756f,-252.7111f,32.5378f,-5.4756f,-254.7111f,12.1333f,-5.4756f,-254.1333f,32.9778f,-23.2133f,-241.3778f,32.2f,-5.4311f,-242.3556f,38.1778f,-2.8933f,-196.88f,37.6933f,14.3822f,-236.6667f,32.0444f,14.4311f,-165.3244f,7.4622f,14.44f,-168.0178f,37.2489f,-18.1422f,-168.0178f,37.2489f,-18.3067f,-165.3244f,7.4622f,20.5111f,-176.5867f,6.6667f,21.6222f,-179.9422f,38.0444f,20.6533f,-179.3778f,40.1156f,16.9111f,-188.3511f,40.2889f,-2.8533f,-194.6711f,39.7156f,-19.9333f,-188.4178f,40.2933f,-21.3022f,-179.3867f,40.12f,-17.2267f,-167.9822f,40.7022f,13.6622f,-167.9822f,40.7022f,-22.7244f,-179.9422f,38.0444f,-22.6311f,-176.6578f,6.6756f,-20.4667f,-175.2578f,4.3689f,-19.0267f,-185.7511f,4.0222f,-2.84f,-190.92f,5.16f,16.12f,-185.6222f,4.0089f,19.5733f,-175.2756f,4.3689f,13.1067f,-165.0444f,5.4178f,-16.68f,-165.0444f,5.4178f,17.8889f,-190.8133f,38.5556f,-2.8933f,-196.9156f,38.4178f,-21.0533f,-190.8133f,38.5556f,-3.0267f,-192.9067f,5.5511f,17.3689f,-187.9644f,5.9956f,-21.0533f,-187.9644f,5.9956f});
  }
}
protected class MFVec2f684 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7878f,0.1071f,0.7939f,0.1016f,0.766f,0.1014f,0.7709f,0.1068f,0.9594f,0.1833f,0.766f,0.1015f,0.7939f,0.1016f,0.9426f,0.186f,0.7648f,0.1066f,0.9545f,0.1568f,0.9398f,0.1599f,0.771f,0.1315f,0.7861f,0.131f,0.767f,0.1345f,0.7667f,0.1094f,0.7644f,0.1092f,0.7648f,0.1066f,0.7904f,0.1338f,0.786f,0.139f,0.7863f,0.1397f,0.9402f,0.1559f,0.9531f,0.1532f,0.7709f,0.1396f,0.7709f,0.1403f,0.794f,0.107f,0.7917f,0.1102f,0.794f,0.107f,0.7939f,0.1101f,0.7675f,0.0958f,0.7934f,0.0956f,0.7934f,0.0956f,0.7675f,0.0958f,0.7967f,0.1011f,0.7964f,0.1056f,0.7964f,0.1088f,0.7964f,0.1057f,0.7967f,0.1011f,0.7958f,0.0955f,0.7958f,0.0955f,0.7633f,0.1008f,0.7625f,0.1056f,0.7622f,0.1084f,0.7625f,0.1055f,0.7633f,0.1008f,0.765f,0.0957f,0.765f,0.0957f,0.9651f,0.1878f,0.9376f,0.1925f,0.9583f,0.1554f,0.963f,0.1801f,0.9654f,0.1799f,0.9654f,0.1826f,0.9354f,0.1602f,0.9385f,0.1536f,0.9536f,0.1504f,0.9383f,0.1837f,0.9366f,0.1872f,0.9361f,0.1842f});
  }
}
protected class MFFloat685 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat686 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32687 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
protected class MFInt32688 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
protected class MFVec3f689 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.0356f,-240.6667f,7.3822f,-19.1956f,-239.4222f,31f,12.7289f,-234.3556f,31.2133f,16.7022f,-196.6133f,30.8489f,16.7022f,-197.0444f,10.9289f,-19.2933f,-187.7867f,10.3067f,18.3022f,-183.0533f,10.1556f,-19.2933f,-187.2933f,30.6311f,18.3022f,-182.56f,30.4756f,-11.1067f,-178.9867f,10.2978f,-11.1067f,-178.5556f,30.2178f,7.4489f,-179.0311f,30.2356f,7.4489f,-179.4622f,10.3156f,-1.5111f,-189.04f,4.9511f,-1.5111f,-188.2711f,36.6133f,-4.0533f,-240.1333f,36.0889f,7.1867f,-250.2222f,30.9156f,-3.6844f,-250.7556f,31.2133f,-19.1822f,-239.7778f,11.8311f,-16.1467f,-247.0222f,29.5911f,-16.1378f,-247.2889f,13.76f,12.7422f,-234.7556f,11.2978f,7.2f,-250.5333f,12.7378f,-3.6311f,-252.2222f,12.7511f});
  }
}
protected class MFVec2f690 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9398f,0.1599f,0.7904f,0.1338f,0.7888f,0.1598f,0.9363f,0.1341f,0.7861f,0.131f,0.7859f,0.138f,0.9502f,0.1313f,0.9545f,0.1568f,0.7712f,0.1385f,0.7707f,0.1575f,0.7854f,0.1571f,0.771f,0.1315f,0.767f,0.1345f,0.7676f,0.1604f,0.786f,0.1292f,0.7713f,0.1297f,0.786f,0.129f,0.7713f,0.1294f,0.7847f,0.165f,0.7849f,0.1652f,0.9369f,0.1301f,0.9483f,0.1278f,0.7712f,0.1654f,0.7712f,0.1661f,0.9354f,0.1602f,0.9325f,0.1343f,0.9583f,0.1554f,0.9533f,0.1301f,0.9406f,0.1642f,0.9551f,0.1612f,0.9355f,0.1283f,0.9488f,0.1251f});
  }
}
protected class MFFloat691 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat692 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32693 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
protected class MFInt32694 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
protected class MFVec3f695 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.6933f,-194.9022f,29.8844f,13.7067f,-195.2844f,9.9644f,10.4756f,-211.6133f,29.2844f,10.4844f,-211.9511f,10.9956f,-16.0533f,-210.1378f,30.0222f,-3.9289f,-210.9689f,33.5333f,-16.04f,-210.5067f,10.1556f,-3.9111f,-211.4667f,6.6222f,5.6711f,-224.7911f,28.2089f,5.68f,-225.08f,12.5378f,-16.1378f,-224.0178f,27.9778f,-5.5733f,-225.2267f,31.4622f,-16.1289f,-224.2933f,12.9689f,-5.5556f,-225.6356f,9.3867f,7.12f,-228.6667f,20.4578f,-14.52f,-228.6622f,20.4444f,-5.6044f,-231.3244f,20.5378f,6.9289f,-227.7956f,24.7644f,-14.6978f,-227.7956f,16.7822f,-5.0356f,-229.8889f,26.24f,6.9378f,-228.0089f,16.3467f,-14.7067f,-227.6178f,24.2533f,-5.0178f,-230.3156f,15.1467f,-17.1689f,-188.1956f,29.2844f,14.7689f,-183.5111f,9.5867f,14.7556f,-183.1333f,29.5022f,5.5067f,-179.3822f,28.6533f,5.52f,-179.7333f,10.2044f,-10.4267f,-179.2711f,28.64f,-17.1556f,-188.56f,10.12f,-10.4133f,-179.6222f,10.1867f,-1.9378f,-188.8933f,34.3689f,-1.92f,-189.44f,5.6711f});
  }
}
protected class MFVec2f696 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7853f,0.163f,0.7888f,0.1598f,0.7854f,0.1571f,0.7707f,0.1575f,0.7676f,0.1604f,0.7706f,0.1634f,0.7714f,0.1739f,0.7841f,0.1736f,0.787f,0.1731f,0.9344f,0.121f,0.9363f,0.1341f,0.9479f,0.1182f,0.9502f,0.1313f,0.7684f,0.1736f,0.7774f,0.1846f,0.7801f,0.1842f,0.7824f,0.1828f,0.7844f,0.1829f,0.9351f,0.111f,0.9443f,0.1091f,0.9372f,0.109f,0.9418f,0.1081f,0.7705f,0.1833f,0.7725f,0.1831f,0.781f,0.1849f,0.7774f,0.1856f,0.7748f,0.1843f,0.774f,0.1852f,0.9395f,0.1081f,0.7849f,0.1552f,0.7712f,0.1555f,0.7849f,0.1549f,0.7712f,0.1553f,0.9325f,0.1343f,0.9533f,0.1301f,0.9319f,0.1209f,0.9502f,0.1172f,0.9329f,0.1108f,0.9464f,0.108f,0.9358f,0.1082f,0.9393f,0.1069f,0.9427f,0.1067f,0.9372f,0.1384f,0.9506f,0.1357f});
  }
}
protected class MFFloat697 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat698 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32699 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,3,0,-1,0,9,11,-1,5,4,1,-1,1,2,5,-1,3,5,2,-1,2,0,3,-1,9,0,8,-1,8,13,9,-1,2,1,6,-1,6,7,2,-1,6,1,10,-1,10,14,6,-1,1,4,12,-1,12,10,1,-1,0,2,7,-1,7,8,0,-1,25,20,27,-1,27,26,25,-1,18,17,16,-1,19,18,16,-1,15,19,16,-1,32,31,30,-1,32,30,29,-1,28,32,29,-1,11,15,16,-1,16,3,11,-1,3,16,17,-1,17,5,3,-1,5,17,18,-1,18,4,5,-1,4,18,19,-1,19,12,4,-1,24,23,22,-1,22,21,24,-1,20,25,24,-1,24,21,20,-1,9,20,21,-1,21,11,9,-1,11,21,22,-1,22,15,11,-1,15,22,23,-1,23,19,15,-1,19,23,24,-1,24,12,19,-1,12,24,25,-1,25,10,12,-1,10,25,26,-1,26,14,10,-1,14,26,27,-1,27,13,14,-1,13,27,20,-1,20,9,13,-1,14,28,29,-1,29,6,14,-1,6,29,30,-1,30,7,6,-1,7,30,31,-1,31,8,7,-1,8,31,32,-1,32,13,8,-1,13,32,28,-1,28,14,13,-1});
  }
}
protected class MFInt32700 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,33,35,6,-1,6,34,33,-1,3,4,5,-1,5,2,3,-1,1,2,9,-1,9,8,1,-1,34,6,11,-1,11,37,34,-1,11,6,38,-1,38,12,11,-1,6,35,39,-1,39,38,6,-1,2,5,10,-1,10,9,2,-1,40,42,41,-1,41,16,40,-1,22,21,20,-1,23,22,20,-1,19,23,20,-1,45,44,43,-1,45,43,25,-1,24,45,25,-1,0,19,20,-1,20,3,0,-1,3,20,21,-1,21,4,3,-1,4,21,22,-1,22,7,4,-1,7,22,23,-1,23,14,7,-1,29,32,31,-1,31,30,29,-1,18,15,29,-1,29,30,18,-1,1,18,30,-1,30,0,1,-1,0,30,31,-1,31,19,0,-1,19,31,32,-1,32,23,19,-1,23,32,29,-1,29,14,23,-1,14,29,15,-1,15,13,14,-1,38,40,16,-1,16,12,38,-1,12,16,41,-1,41,36,12,-1,8,17,18,-1,18,1,8,-1,12,24,25,-1,25,11,12,-1,11,25,43,-1,43,37,11,-1,10,26,27,-1,27,9,10,-1,9,27,28,-1,28,8,9,-1,36,45,24,-1,24,12,36,-1});
  }
}
protected class MFVec3f701 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {23.7867f,-238.0889f,3.4178f,-20.7067f,-238.0889f,3.4222f,1.36f,-235.4222f,-3.2444f,21.8578f,-278.9778f,1.8667f,-18.0489f,-278.9778f,1.8667f,0.4844f,-277.8667f,-3.8978f,-21.7378f,-187.2489f,10.7156f,2.1067f,-185.3156f,4.6889f,24.2933f,-187.3956f,10.76f,28.3244f,-242.0444f,29.1289f,-23.6889f,-242.0444f,29.1289f,24.56f,-284.0444f,29.0844f,-18.5778f,-284.0889f,29.0889f,32.2f,-191.12f,30.8444f,-28.3867f,-191.0933f,30.8311f,17.6133f,-292.4889f,25.9556f,14.36f,-287.4222f,6.5378f,0.5467f,-286.5333f,2.4578f,-11.9822f,-287.3778f,6.3422f,-12.36f,-292.5333f,25.9689f,24.0044f,-242.7556f,35.2267f,20.3244f,-284f,33.2489f,15.2178f,-290.2667f,32.0533f,-9.8311f,-290.3111f,32.0667f,-14.36f,-284.0889f,33.2222f,-19.3956f,-242.5778f,35.2356f,-23.4844f,-191.7467f,35.48f,27.64f,-191.7689f,35.4889f,-19.8489f,-185.1067f,26.8222f,-16.2889f,-183.2044f,15.3467f,2.1244f,-181.4356f,10.5067f,19.24f,-183.2933f,15.1511f,23.5511f,-185.1022f,26.8311f});
  }
}
protected class MFVec2f702 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.766f,0.1014f,0.7694f,0.0827f,0.748f,0.0813f,0.7455f,0.0995f,0.7415f,0.0989f,0.7435f,0.0798f,0.9864f,0.2045f,0.7455f,0.0995f,0.7734f,0.0512f,0.7571f,0.0508f,0.7525f,0.0502f,0.9827f,0.2362f,0.9665f,0.2386f,0.7694f,0.0827f,0.766f,0.1015f,0.774f,0.0829f,0.9619f,0.2395f,0.7782f,0.0512f,0.774f,0.083f,0.7619f,0.1052f,0.7474f,0.1039f,0.7446f,0.1034f,0.7473f,0.1038f,0.7619f,0.1052f,0.9712f,0.2404f,0.9799f,0.239f,0.7566f,0.0479f,0.7602f,0.0485f,0.7691f,0.0486f,0.771f,0.1015f,0.771f,0.1014f,0.768f,0.1042f,0.768f,0.1042f,0.9897f,0.1861f,0.991f,0.2053f,0.9856f,0.1862f,0.9665f,0.2385f,0.9874f,0.236f,0.965f,0.2069f,0.9651f,0.1878f,0.9604f,0.2075f,0.9619f,0.2395f,0.9604f,0.2074f,0.9836f,0.239f,0.98f,0.239f,0.9712f,0.2404f});
  }
}
protected class MFFloat703 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat704 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32705 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10,8,6,-1,6,11,10,-1,0,3,5,-1,5,9,0,-1,11,6,4,-1,4,1,11,-1,2,7,3,-1,3,0,2,-1,1,4,7,-1,7,2,1,-1,9,5,8,-1,8,10,9,-1,5,3,7,-1,7,8,5,-1,6,8,7,-1,7,4,6,-1,17,13,1,-1,1,2,17,-1,14,15,26,-1,26,25,14,-1,0,9,15,-1,15,14,0,-1,13,12,11,-1,11,1,13,-1,2,0,14,-1,14,17,2,-1,12,34,36,-1,9,10,16,-1,16,15,9,-1,16,10,11,-1,11,12,16,-1,16,35,37,-1,37,15,16,-1,12,36,35,-1,35,16,12,-1,37,26,15,-1,12,13,23,-1,23,34,12,-1,13,17,24,-1,24,23,13,-1,17,14,25,-1,25,24,17,-1,19,20,21,-1,19,21,22,-1,18,19,22,-1,23,24,20,-1,20,19,23,-1,24,25,21,-1,21,20,24,-1,25,26,22,-1,22,21,25,-1,29,30,31,-1,28,29,31,-1,27,28,31,-1,27,31,32,-1,27,32,33,-1,34,23,19,-1,19,18,34,-1,35,36,30,-1,30,29,35,-1,36,34,31,-1,31,30,36,-1,34,18,32,-1,32,31,34,-1,18,22,33,-1,33,32,18,-1,22,26,27,-1,27,33,22,-1,26,37,28,-1,28,27,26,-1,37,35,29,-1,29,28,37,-1});
  }
}
protected class MFInt32706 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,7,6,-1,6,5,4,-1,1,2,9,-1,9,8,1,-1,40,41,7,-1,7,4,40,-1,8,9,11,-1,11,10,8,-1,5,6,39,-1,39,38,5,-1,6,7,41,-1,41,39,6,-1,2,3,11,-1,11,9,2,-1,12,13,8,-1,8,10,12,-1,14,17,44,-1,44,43,14,-1,4,5,17,-1,17,14,4,-1,13,18,1,-1,1,8,13,-1,40,4,14,-1,14,42,40,-1,18,20,19,-1,5,38,45,-1,45,17,5,-1,21,0,1,-1,1,18,21,-1,45,47,46,-1,46,17,45,-1,18,19,23,-1,23,21,18,-1,46,44,17,-1,18,13,24,-1,24,20,18,-1,13,12,25,-1,25,24,13,-1,42,14,43,-1,43,48,42,-1,30,29,28,-1,30,28,27,-1,26,30,27,-1,24,25,29,-1,29,30,24,-1,25,15,28,-1,28,29,25,-1,15,16,27,-1,27,28,15,-1,36,35,34,-1,37,36,34,-1,31,37,34,-1,31,34,33,-1,31,33,32,-1,20,24,30,-1,30,26,20,-1,23,19,35,-1,35,36,23,-1,19,20,34,-1,34,35,19,-1,20,26,33,-1,33,34,20,-1,26,27,32,-1,32,33,26,-1,27,16,31,-1,31,32,27,-1,16,22,37,-1,37,31,16,-1,22,23,36,-1,36,37,22,-1});
  }
}
protected class MFVec3f707 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-21.0089f,-221.8444f,11.8444f,14.0756f,-217.9289f,11.1378f,-5.8222f,-222.5422f,6.6711f,-17.3511f,-227.8311f,13.0267f,7.2889f,-230.7822f,11.72f,-17.3333f,-228.1244f,28.2f,7.32f,-231.16f,29.3556f,-5.7644f,-231.84f,11.6489f,-5.7644f,-232.0844f,28.3067f,-20.9911f,-222.2356f,29.7733f,-4.7556f,-223.3067f,35.4089f,14.0978f,-218.1644f,29.9067f,16.8933f,-195.32f,32.0578f,16.5289f,-190.0311f,10.7422f,-20.1156f,-190.0311f,10.7422f,-20.2311f,-195.32f,32.0578f,-2.4756f,-201.2f,35.9422f,-2.8844f,-188.7333f,5.2178f,14.0578f,-173.0844f,37.2889f,11.0622f,-168.2889f,14.0489f,-3.7511f,-167.4622f,9.1467f,-17.7778f,-168.3067f,14.3022f,-17.9333f,-173.1378f,37.5422f,18.4889f,-179.9111f,10.3022f,-2.8844f,-178.8089f,4.5378f,-21.4178f,-179.9111f,10.3022f,-21.9467f,-185.0444f,37.5244f,-20.5289f,-184.0578f,39.7556f,-19.2622f,-194.7156f,38.7911f,-1.9867f,-199.4444f,37.2f,15.6622f,-194.5911f,38.8533f,19.1111f,-183.9511f,39.48f,12.9467f,-173.3822f,39.0133f,-16.5244f,-173.4311f,39.2489f,21.1911f,-184.9778f,37.5156f,-2.3422f,-201.2933f,36.4f,18.0489f,-196.3511f,36.84f,-20.3689f,-196.3511f,36.84f});
  }
}
protected class MFVec2f708 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7578f,0.1276f,0.7543f,0.1247f,0.753f,0.131f,0.7531f,0.1316f,0.9854f,0.1598f,0.9725f,0.1615f,0.9734f,0.1584f,0.9844f,0.1569f,0.7413f,0.123f,0.7403f,0.1293f,0.7378f,0.1249f,0.7401f,0.1299f,0.7405f,0.104f,0.7443f,0.1047f,0.9859f,0.1809f,0.7455f,0.0995f,0.766f,0.1015f,0.9713f,0.1822f,0.7589f,0.1059f,0.7648f,0.1066f,0.766f,0.1014f,0.7622f,0.1091f,0.7648f,0.1066f,0.7644f,0.1092f,0.7455f,0.0995f,0.7415f,0.0989f,0.7664f,0.0954f,0.7667f,0.0954f,0.7485f,0.0932f,0.7449f,0.0928f,0.7484f,0.0932f,0.7683f,0.1016f,0.7686f,0.0957f,0.7683f,0.0956f,0.7679f,0.1015f,0.7671f,0.1055f,0.7666f,0.1084f,0.7674f,0.1056f,0.9687f,0.1615f,0.9723f,0.1564f,0.9888f,0.1589f,0.9852f,0.1547f,0.9898f,0.1809f,0.9856f,0.1862f,0.9651f,0.1878f,0.9675f,0.1796f,0.9654f,0.1826f,0.9654f,0.1799f,0.9897f,0.1861f});
  }
}
protected class MFFloat709 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat710 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32711 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
protected class MFInt32712 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
protected class MFVec3f713 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.6711f,-225.4311f,7.7156f,-18.4444f,-223.8133f,30.0044f,12.2978f,-220.3822f,30.2222f,16.12f,-195.2489f,29.7156f,16.0844f,-194.8622f,11.7867f,-17.7111f,-187.9156f,12.04f,17.3778f,-184f,11.3244f,-17.6933f,-188.3067f,29.9689f,17.3956f,-184.2356f,30.0978f,-10.2222f,-181.2311f,11.44f,-10.2044f,-181.4667f,30.2089f,6.3467f,-182.1333f,30.1956f,6.3289f,-181.9022f,11.4267f,-2.52f,-188.6133f,6.8667f,-1.4578f,-189.3822f,35.6089f,-3.6711f,-224.5644f,34.9511f,8.1689f,-232.8356f,29.8978f,1.8178f,-233.6889f,30.1911f,-18.4444f,-224.3911f,12.0444f,-16.08f,-229.8133f,28.6222f,-15.1556f,-230.2044f,14.0978f,12.3556f,-220.9822f,11.5378f,8.2178f,-233.3333f,13.0933f,1.9467f,-234f,13.1067f});
  }
}
protected class MFVec2f714 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9725f,0.1615f,0.7578f,0.1276f,0.7541f,0.1444f,0.9727f,0.1441f,0.7543f,0.1247f,0.7533f,0.1302f,0.9851f,0.1424f,0.9854f,0.1598f,0.7404f,0.1285f,0.7384f,0.1404f,0.7513f,0.1418f,0.7413f,0.123f,0.7378f,0.1249f,0.7355f,0.1424f,0.7545f,0.1231f,0.7416f,0.1216f,0.7546f,0.1229f,0.7417f,0.1214f,0.7496f,0.1479f,0.7498f,0.1481f,0.9738f,0.1409f,0.9839f,0.1396f,0.738f,0.1467f,0.7381f,0.1469f,0.9687f,0.1616f,0.9694f,0.1441f,0.9888f,0.1589f,0.988f,0.1416f,0.9725f,0.165f,0.9854f,0.1633f,0.9728f,0.1395f,0.9846f,0.1375f});
  }
}
protected class MFFloat715 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat716 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32717 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
protected class MFInt32718 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
protected class MFVec3f719 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {13.6756f,-192.8f,30.1956f,13.7244f,-193.3511f,11.6933f,12.3733f,-209.7644f,29.8f,12.48f,-210.2889f,12.4578f,-16.2f,-210.4756f,30.5022f,-2.3067f,-210.2089f,33.8267f,-16.0844f,-211.0444f,11.6622f,-2.1511f,-210.9867f,8.3111f,10.08f,-222.8311f,28.9956f,10.1956f,-223.2933f,13.8044f,-16.5644f,-224.2756f,28.7778f,-3.4889f,-224.1333f,32.1511f,-16.4489f,-224.7156f,14.2311f,-3.32f,-224.7778f,10.7511f,11.0978f,-225.8044f,21.4756f,-13.7244f,-227.8267f,21.4622f,-2.5822f,-229.0178f,21.5467f,10.7022f,-225.0844f,25.6489f,-14.0756f,-227.2311f,17.9156f,-2.0711f,-227.7644f,27.08f,10.7778f,-225.3778f,17.4933f,-14.1378f,-226.9822f,25.1556f,-1.9467f,-228.2622f,16.3244f,-16.6444f,-187.0089f,29.6267f,14.1511f,-184.1689f,11.1556f,14.0933f,-183.5733f,29.8444f,4.8622f,-180.5422f,29.0267f,4.8622f,-181.0978f,11.7644f,-10.6044f,-180.1689f,29.0133f,-16.6444f,-187.5867f,11.6667f,-10.6044f,-180.7244f,11.7511f,-1.8f,-187.7511f,34.5689f,-1.8f,-188.6178f,7.3378f});
  }
}
protected class MFVec2f720 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7505f,0.1465f,0.7541f,0.1444f,0.7513f,0.1418f,0.7384f,0.1404f,0.7355f,0.1424f,0.7377f,0.1451f,0.7372f,0.1554f,0.7483f,0.1563f,0.7507f,0.1564f,0.9726f,0.1318f,0.9727f,0.1441f,0.9847f,0.1302f,0.9851f,0.1424f,0.7347f,0.1548f,0.7409f,0.1641f,0.7434f,0.1641f,0.7455f,0.1632f,0.7469f,0.164f,0.9746f,0.124f,0.9828f,0.1229f,0.9766f,0.1225f,0.9807f,0.1219f,0.7351f,0.1625f,0.7369f,0.1626f,0.7443f,0.165f,0.7408f,0.1649f,0.7387f,0.1637f,0.7379f,0.1643f,0.9788f,0.1219f,0.7512f,0.1402f,0.7392f,0.1389f,0.7512f,0.14f,0.7393f,0.1388f,0.9694f,0.1441f,0.988f,0.1416f,0.9705f,0.1317f,0.9868f,0.1295f,0.9727f,0.1237f,0.9848f,0.1221f,0.9756f,0.1218f,0.9787f,0.1209f,0.9817f,0.1209f,0.973f,0.1475f,0.9849f,0.146f});
  }
}
protected class MFFloat721 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat722 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32723 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1});
  }
}
protected class MFInt32724 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1});
  }
}
protected class MFVec3f725 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-222.1556f,-183.9111f,-17.7733f,-225.8444f,-166.3422f,22.7333f,-209.5333f,-181f,73.8889f,-206.2f,-269.3778f,69.7111f,-204.2f,-261.7778f,15.0978f,-150.4222f,-171.2711f,99.3556f,-173.3111f,-144.5778f,18.2578f,-186.7333f,-299.2f,-4.7467f,-195.4f,-299.2f,84.1556f,-167.5333f,-174.1422f,-54.5556f,5.12f,-160.48f,12.2756f,5.12f,-175.1689f,-21.2489f,5.12f,-251.5556f,9.1911f,5.12f,-250.4f,48.4844f,5.12f,-177.04f,56.9956f});
  }
}
protected class MFVec2f726 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1911f,0.4797f,0.171f,0.4832f,0.1497f,0.4806f,0.1519f,0.4334f,0.1831f,0.4416f,0.1474f,0.4856f,0.1708f,0.4854f,0.1784f,0.4249f,0.1538f,0.4251f,0.1963f,0.4863f,0.19f,0.5091f,0.1847f,0.499f,0.172f,0.4382f,0.1568f,0.4457f,0.1409f,0.4926f});
  }
}
protected class MFFloat727 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat728 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32729 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,9,3,-1,7,8,1,-1,1,5,7,-1,6,2,0,-1,0,8,6,-1,0,1,8,-1,9,6,8,-1,8,7,9,-1,4,10,11,-1,11,5,4,-1,5,11,12,-1,12,7,5,-1,7,12,13,-1,13,9,7,-1,9,13,14,-1,14,3,9,-1,3,14,10,-1,10,4,3,-1,10,15,11,-1,11,15,12,-1,12,15,13,-1,13,15,14,-1,14,15,10,-1});
  }
}
protected class MFInt32730 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,8,3,-1,9,7,1,-1,1,5,9,-1,6,2,0,-1,0,7,6,-1,0,1,7,-1,12,10,11,-1,11,13,12,-1,4,14,15,-1,15,5,4,-1,5,15,16,-1,16,9,5,-1,13,16,17,-1,17,12,13,-1,8,17,18,-1,18,3,8,-1,3,18,14,-1,14,4,3,-1,14,19,15,-1,15,19,16,-1,16,19,17,-1,17,19,18,-1,18,19,14,-1});
  }
}
protected class MFVec3f731 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-86.3778f,-123.3778f,16.5022f,-67.7111f,-159.68f,-56.3333f,-68.5556f,-156.9556f,92.6f,16.4311f,-137.9111f,97.6222f,-6.4844f,-111.2f,16.5022f,-0.7156f,-140.8f,-56.2889f,-37.4489f,-258.4f,82.4222f,-19.8933f,-265.8667f,-6.5067f,-37.1556f,-258.7556f,-6.4578f,-28.5644f,-265.8667f,82.3778f,54.6f,-126f,17.48f,68.3778f,-150.6889f,-30.1111f,33.0667f,-259.7778f,-0.44f,33.0044f,-259.4222f,72.2f,66.7333f,-142.5778f,78.2444f,70.2889f,-189.3556f,26.6489f});
  }
}
protected class MFVec2f732 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1715f,0.4655f,0.1797f,0.4646f,0.1569f,0.4642f,0.1474f,0.4856f,0.1708f,0.4854f,0.1963f,0.4863f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1544f,0.4288f,0.1782f,0.4286f,0.1538f,0.4251f,0.1784f,0.4249f,0.1703f,0.4865f,0.1895f,0.487f,0.1761f,0.4271f,0.1552f,0.4287f,0.1491f,0.4835f,0.1671f,0.4618f});
  }
}
protected class MFFloat733 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat734 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32735 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,41,40,-1,40,25,26,-1,27,42,41,-1,41,26,27,-1,28,43,42,-1,42,27,28,-1,29,44,43,-1,43,28,29,-1,25,40,44,-1,44,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1});
  }
}
protected class MFInt32736 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,55,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,49,-1,36,49,48,-1,37,36,48,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,38,57,56,-1,56,39,38,-1,40,59,58,-1,58,50,40,-1,41,60,59,-1,59,40,41,-1,42,61,60,-1,60,41,42,-1,39,56,61,-1,61,42,39,-1,43,38,39,-1,39,44,43,-1,45,40,51,-1,51,52,45,-1,46,41,40,-1,40,45,46,-1,47,42,41,-1,41,46,47,-1,44,39,42,-1,42,47,44,-1,34,43,44,-1,44,33,34,-1,35,45,53,-1,53,54,35,-1,36,46,45,-1,45,35,36,-1,37,47,46,-1,46,36,37,-1,33,44,47,-1,47,37,33,-1});
  }
}
protected class MFVec3f737 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-52.1111f,-110f,-54.0222f,-103.4889f,-110.4889f,22.1422f,-46.9111f,-109.9556f,94.5556f,39.4f,-109.2f,63.1156f,36.1956f,-109.2444f,-28.6889f,-61.8f,-166.3244f,-82.0222f,-132.7333f,-166.9556f,23.1778f,-54.6444f,-166.2622f,123.1778f,64.6f,-165.2f,79.7556f,60.1556f,-165.24f,-47.0444f,-60.8222f,-278.0444f,-82.0222f,-131.7556f,-278.6667f,23.1778f,-53.6222f,-277.9556f,123.1778f,65.5778f,-276.8889f,79.7556f,61.1333f,-276.9333f,-47.0444f,-62.5111f,-325.8222f,-87.8889f,-137.5778f,-326.4889f,23.3956f,-54.9556f,-325.7333f,129.1778f,71.1778f,-324.6222f,83.2667f,66.5111f,-324.6667f,-50.9111f,-39.6889f,-243.5556f,-65.5333f,-93.9333f,-244f,0.4533f,-65.8444f,-243.7778f,93.0444f,5.7333f,-243.1556f,84.2889f,21.8933f,-242.9778f,-13.7289f,-40.4978f,-501.6444f,-49.0889f,-96.8222f,-502.1333f,3.8444f,-67.6667f,-501.9111f,78.1111f,6.68f,-501.2444f,71.0889f,23.4667f,-501.0667f,-7.5333f,-40.6711f,-681.8667f,-46.5111f,-94.9111f,-682.3111f,4.4178f,-66.8222f,-681.8667f,75.8889f,4.7511f,-681.4222f,69.1333f,20.9156f,-680.9778f,-6.5333f,-38.2444f,-706.3111f,-19.2889f,-70.0222f,-706.3111f,10.5689f,-53.5778f,-706.3111f,52.4667f,-11.6267f,-705.8667f,48.5022f,-2.1511f,-705.8667f,4.1511f,-39.6889f,-243.5556f,-65.5333f,-93.9333f,-244f,0.4533f,-65.8444f,-243.7778f,93.0444f,5.7333f,-243.1556f,84.2889f,21.8933f,-242.9778f,-13.7289f});
  }
}
protected class MFVec2f738 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2986f,0.2114f,0.2726f,0.2114f,0.3201f,0.2114f,0.3415f,0.2114f,0.2466f,0.2114f,0.2979f,0.2417f,0.2726f,0.2417f,0.3197f,0.2417f,0.3418f,0.2417f,0.2473f,0.2417f,0.2979f,0.3018f,0.2726f,0.3018f,0.3197f,0.3018f,0.3418f,0.3018f,0.2473f,0.3018f,0.2978f,0.3276f,0.2726f,0.3276f,0.3197f,0.3276f,0.3419f,0.3276f,0.2474f,0.3276f,0.2932f,0.2834f,0.2689f,0.2834f,0.316f,0.2834f,0.3322f,0.2834f,0.245f,0.2834f,0.2251f,0.2114f,0.2255f,0.2417f,0.2255f,0.2417f,0.2255f,0.3018f,0.2255f,0.3018f,0.2255f,0.3276f,0.2255f,0.3276f,0.2159f,0.2834f,0.9467f,0.4943f,0.9572f,0.4943f,0.9099f,0.4943f,0.9193f,0.4943f,0.9332f,0.4943f,0.9567f,0.4691f,0.9455f,0.4691f,0.9105f,0.4691f,0.9205f,0.4691f,0.9332f,0.4691f,0.9567f,0.4913f,0.9458f,0.4913f,0.9102f,0.4913f,0.9203f,0.4913f,0.9334f,0.4913f,0.8898f,0.4943f,0.9003f,0.4943f,0.8997f,0.4691f,0.8997f,0.4691f,0.8998f,0.4913f,0.8998f,0.4913f,0.9003f,0.4943f,0.3481f,0.2114f,0.9448f,0.4374f,0.9561f,0.4374f,0.8991f,0.4374f,0.9117f,0.4374f,0.9198f,0.4374f,0.9341f,0.4374f});
  }
}
protected class MFFloat739 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat740 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32741 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
  }
}
protected class MFInt32742 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,4,2,1,-1,0,4,1,-1,4,6,5,-1,5,3,4,-1,3,5,7,-1,7,2,3,-1,2,7,8,-1,8,1,2,-1,1,8,9,-1,9,0,1,-1,0,9,6,-1,6,4,0,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,16,-1,16,11,14,-1,24,23,22,-1,24,22,21,-1,20,24,21,-1,22,15,16,-1,16,21,22,-1,23,17,15,-1,15,22,23,-1,24,18,17,-1,17,23,24,-1,20,19,18,-1,18,24,20,-1,21,16,19,-1,19,20,21,-1});
  }
}
protected class MFVec3f743 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-9.9333f,-174.9911f,-30.5556f,-51.7111f,-175.3511f,9.1422f,-27.9289f,-175.1422f,66.8667f,28.5333f,-174.6578f,62.8267f,39.6578f,-174.5644f,2.6267f,-6.7867f,-226.08f,-51.5778f,-65.8f,-226.5822f,1.6622f,-32.2178f,-226.2933f,92.8667f,47.5778f,-225.6089f,86.5111f,63.3111f,-225.4756f,-8.6356f,-6.28f,-344.0889f,-50.7778f,-69.3111f,-344.6667f,1.8667f,-35.0889f,-318.5333f,92.2f,50.1111f,-317.8222f,85.8889f,68.5556f,-343.4667f,-8.3289f,-3.0089f,-575.7778f,-43.2222f,-48.9556f,-576.1778f,14.96f,-22.8089f,-575.9111f,87.7556f,39.32f,-575.3778f,81.8444f,51.5778f,-575.2889f,5.4089f,-0.7867f,-603.4667f,-18.7111f,-32.1733f,-603.7333f,21.0178f,-14.3111f,-603.6f,67f,28.12f,-603.2444f,62.9511f,36.4756f,-603.1556f,14.4978f});
  }
}
protected class MFVec2f744 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8857f,0.572f,0.9344f,0.572f,0.9377f,0.5719f,0.8909f,0.5718f,0.8588f,0.5719f,0.8849f,0.5578f,0.8418f,0.558f,0.9588f,0.5579f,0.9536f,0.5581f,0.8765f,0.5581f,0.885f,0.5257f,0.8424f,0.5258f,0.9582f,0.5328f,0.9531f,0.533f,0.8768f,0.526f,0.8957f,0.4625f,0.8485f,0.4627f,0.9546f,0.4626f,0.9498f,0.4628f,0.8879f,0.4628f,0.8953f,0.4552f,0.8684f,0.4551f,0.9006f,0.455f,0.9378f,0.4551f,0.9345f,0.4552f});
  }
}
protected class MFFloat745 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat746 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32747 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,11,12,-1,12,1,0,-1,1,12,13,-1,13,2,1,-1,2,13,10,-1,10,17,2,-1,3,16,8,-1,8,4,3,-1,5,20,21,-1,21,19,5,-1,6,18,15,-1,15,14,6,-1,6,14,9,-1,9,7,6,-1,7,9,11,-1,11,0,7,-1,15,18,5,-1,5,19,15,-1,10,16,3,-1,3,17,10,-1,4,8,21,-1,21,20,4,-1,0,1,22,-1,1,2,22,-1,2,17,22,-1,17,3,22,-1,3,4,22,-1,4,20,22,-1,20,5,22,-1,5,18,22,-1,18,6,22,-1,6,7,22,-1,7,0,22,-1,16,10,24,-1,24,23,16,-1,10,13,25,-1,25,24,10,-1,13,12,26,-1,26,25,13,-1,12,11,27,-1,27,26,12,-1,11,9,28,-1,28,27,11,-1,9,14,29,-1,29,28,9,-1,14,15,30,-1,30,29,14,-1,15,19,31,-1,31,30,15,-1,19,21,32,-1,32,31,19,-1,21,8,33,-1,33,32,21,-1,8,16,23,-1,23,33,8,-1,23,24,34,-1,24,25,34,-1,25,26,34,-1,26,27,34,-1,27,28,34,-1,28,29,34,-1,29,30,34,-1,30,31,34,-1,31,32,34,-1,32,33,34,-1,33,23,34,-1});
  }
}
protected class MFInt32748 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,0,-1,0,1,2,-1,1,0,4,-1,4,5,1,-1,5,4,7,-1,7,6,5,-1,10,11,8,-1,8,9,10,-1,12,37,38,-1,38,15,12,-1,17,18,19,-1,19,16,17,-1,17,16,20,-1,20,21,17,-1,21,20,36,-1,36,35,21,-1,19,18,12,-1,12,15,19,-1,7,11,10,-1,10,6,7,-1,9,8,14,-1,14,13,9,-1,2,1,22,-1,1,5,22,-1,5,6,22,-1,6,10,22,-1,10,9,22,-1,9,13,22,-1,37,12,39,-1,12,18,39,-1,18,17,39,-1,17,21,39,-1,21,35,39,-1,11,7,23,-1,23,24,11,-1,7,4,25,-1,25,23,7,-1,4,0,26,-1,26,25,4,-1,0,3,27,-1,27,26,0,-1,36,20,28,-1,28,40,36,-1,20,16,29,-1,29,28,20,-1,16,19,30,-1,30,29,16,-1,19,15,31,-1,31,30,19,-1,15,38,41,-1,41,31,15,-1,14,8,33,-1,33,32,14,-1,8,11,24,-1,24,33,8,-1,24,23,34,-1,23,25,34,-1,25,26,34,-1,26,27,34,-1,40,28,42,-1,28,29,42,-1,29,30,42,-1,30,31,42,-1,31,41,42,-1,32,33,34,-1,33,24,34,-1});
  }
}
protected class MFVec3f749 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-3.5689f,-183.6222f,-24.2444f,-23.08f,-184.2444f,-14.4667f,-30.6356f,-183.8711f,11.2222f,-24.7111f,-183.16f,52.5467f,-13.6133f,-183.28f,69.6222f,26.1067f,-183.8178f,53.2667f,29.4622f,-184.4533f,11.0133f,19.1733f,-184.64f,-14.04f,-17.04f,-223.64f,79.8889f,20.4089f,-226.2756f,-23.4178f,-29.3867f,-219.6222f,35.1244f,-2.4933f,-225.5111f,-36.5111f,-26.1022f,-226.2622f,-23.3956f,-30.7556f,-218.7733f,6.0578f,27.5289f,-218.7778f,6.12f,27.8489f,-219.6178f,35.5289f,-24.3111f,-224.5156f,58.8089f,-30.2489f,-183.9733f,30.8933f,29.4711f,-184.1378f,31.24f,24.9778f,-224.52f,58.8622f,12.9556f,-183.4889f,68.6889f,13.8933f,-223.6667f,78.3778f,-3.0178f,-174.1644f,20.2622f,-18.3822f,-237.4222f,57.6356f,-23.2756f,-232.4978f,34.9556f,-24.6089f,-231.6356f,3.6889f,-20.3911f,-239.0667f,-25f,-2.1511f,-239.2444f,-32.1556f,14.9778f,-239.0667f,-25.2667f,21.4267f,-231.64f,4.0178f,21.7422f,-232.4889f,35.8f,21.4356f,-237.4222f,57.7956f,10.2311f,-236.6222f,73.8444f,-8.48f,-236.6222f,75f,1.36f,-244.9333f,17.3778f});
  }
}
protected class MFVec2f750 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7729f,0.0334f,0.7695f,0.0151f,0.7598f,0.0161f,0.7624f,0.0345f,0.791f,0.0281f,0.7896f,0.0131f,0.8111f,0.0113f,0.813f,0.0266f,0.8476f,0.0256f,0.8461f,0.0079f,0.8312f,0.0091f,0.8327f,0.0273f,0.9162f,0.2899f,0.8453f,0.0081f,0.8466f,0.0257f,0.9122f,0.2724f,0.9531f,0.2644f,0.9573f,0.2786f,0.936f,0.2844f,0.9315f,0.2698f,0.9706f,0.2558f,0.9766f,0.2733f,0.8032f,0.0047f,0.8134f,0.033f,0.8325f,0.0338f,0.792f,0.0345f,0.7756f,0.0396f,0.7675f,0.0404f,0.9666f,0.2503f,0.9509f,0.2584f,0.9297f,0.2636f,0.9113f,0.266f,0.8439f,0.0324f,0.8447f,0.0323f,0.8081f,0.0397f,0.986f,0.2708f,0.9803f,0.2531f,0.9032f,0.2936f,0.8989f,0.2764f,0.9452f,0.2896f,0.9743f,0.2482f,0.9004f,0.2693f,0.9343f,0.2559f});
  }
}
protected class MFFloat751 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat752 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32753 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,0,3,-1,3,5,6,-1,5,3,2,-1,2,8,5,-1,1,7,4,-1,2,7,8,-1,7,2,4,-1,14,15,16,-1,16,17,14,-1,9,10,13,-1,10,11,12,-1,12,13,10,-1,1,4,10,-1,10,9,1,-1,4,2,11,-1,11,10,4,-1,2,3,12,-1,12,11,2,-1,3,0,13,-1,13,12,3,-1,6,5,15,-1,15,14,6,-1,5,8,16,-1,16,15,5,-1,8,7,17,-1,17,16,8,-1,18,25,24,-1,24,23,22,-1,18,24,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,6,18,19,-1,19,0,6,-1,0,19,20,-1,20,13,0,-1,13,20,21,-1,21,9,13,-1,9,21,22,-1,22,1,9,-1,1,22,23,-1,23,7,1,-1,7,23,24,-1,24,17,7,-1,17,24,25,-1,25,14,17,-1,14,25,18,-1,18,6,14,-1});
  }
}
protected class MFInt32754 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,7,6,8,-1,18,6,19,-1,6,18,8,-1,21,22,23,-1,23,12,21,-1,9,15,10,-1,15,16,17,-1,17,10,15,-1,7,8,24,-1,24,20,7,-1,8,18,25,-1,25,24,8,-1,4,2,17,-1,17,16,4,-1,2,1,10,-1,10,17,2,-1,0,3,13,-1,13,11,0,-1,3,5,14,-1,14,13,3,-1,19,6,12,-1,12,23,19,-1,26,33,32,-1,32,31,30,-1,26,32,30,-1,30,29,28,-1,26,30,28,-1,27,26,28,-1,0,26,27,-1,27,1,0,-1,1,27,28,-1,28,10,1,-1,10,28,29,-1,29,9,10,-1,20,29,30,-1,30,7,20,-1,7,30,31,-1,31,6,7,-1,6,31,32,-1,32,12,6,-1,12,32,33,-1,33,21,12,-1,11,33,26,-1,26,0,11,-1});
  }
}
protected class MFVec3f755 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-31.7244f,-223.2089f,16.2133f,28.0178f,-223.2089f,16.2133f,17.3511f,-210.64f,47.7244f,-20.3022f,-210.68f,50.8f,22.2444f,-215.4267f,37.1378f,-18.3467f,-187.9156f,31.7956f,-25.6222f,-188.7911f,10.7111f,23.6711f,-188.7956f,10.76f,12.5867f,-187.9422f,30.2711f,21.2178f,-230.9689f,18.5822f,22.5778f,-230.0711f,31.3244f,15.1022f,-221.3511f,47.2489f,-16.4222f,-217.9244f,50.2311f,-25.5778f,-231.5378f,17.6222f,-19.3378f,-175.24f,8.3333f,-9.5778f,-174.6222f,25.4356f,8.6756f,-174.6356f,24.3067f,19.7244f,-175.3289f,8.4889f,-23.0578f,-190.0978f,7.4044f,-28.9067f,-223.0933f,12.6622f,-24.2267f,-229.4356f,13.7244f,19.9822f,-228.8889f,14.68f,25.2444f,-222.9244f,12.6178f,21.0667f,-189.8489f,7.4f,17.7333f,-178.4667f,5.4889f,-17.6267f,-178.3867f,5.3422f});
  }
}
protected class MFVec2f756 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8327f,0.0273f,0.8381f,0.0441f,0.8625f,0.0344f,0.8476f,0.0256f,0.8625f,0.0359f,0.8466f,0.0257f,0.9122f,0.2724f,0.904f,0.2568f,0.8948f,0.2599f,0.8401f,0.0478f,0.8395f,0.0482f,0.8319f,0.0206f,0.9141f,0.2788f,0.844f,0.0192f,0.8432f,0.0193f,0.8491f,0.0466f,0.8611f,0.0409f,0.8611f,0.0397f,0.8814f,0.2691f,0.8989f,0.2764f,0.9014f,0.2535f,0.9142f,0.2789f,0.9026f,0.2823f,0.9033f,0.2821f,0.8928f,0.2563f,0.8819f,0.264f,0.8327f,0.0273f,0.8381f,0.0441f,0.8395f,0.0482f,0.8401f,0.0478f,0.904f,0.2568f,0.9122f,0.2724f,0.9141f,0.2788f,0.9142f,0.2789f});
  }
}
protected class MFFloat757 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat758 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32759 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,8,9,-1,9,2,1,-1,8,1,0,-1,0,10,8,-1,2,9,6,-1,6,3,2,-1,0,4,7,-1,7,10,0,-1,5,3,6,-1,25,21,22,-1,24,25,22,-1,23,24,22,-1,19,20,17,-1,17,18,19,-1,13,14,11,-1,11,12,13,-1,14,15,16,-1,16,11,14,-1,3,5,12,-1,12,11,3,-1,5,4,13,-1,13,12,5,-1,4,0,14,-1,14,13,4,-1,0,1,15,-1,15,14,0,-1,1,2,16,-1,16,15,1,-1,2,3,11,-1,11,16,2,-1,7,4,18,-1,18,17,7,-1,4,5,19,-1,19,18,4,-1,5,6,20,-1,20,19,5,-1,6,7,17,-1,17,20,6,-1,10,7,22,-1,22,21,10,-1,7,6,23,-1,23,22,7,-1,6,9,24,-1,24,23,6,-1,9,8,25,-1,25,24,9,-1,8,10,21,-1,21,25,8,-1});
  }
}
protected class MFInt32760 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,27,26,28,-1,28,4,27,-1,3,2,7,-1,7,6,3,-1,28,29,30,-1,30,4,28,-1,10,6,7,-1,13,14,15,-1,12,13,15,-1,11,12,15,-1,16,17,18,-1,18,19,16,-1,20,21,22,-1,22,23,20,-1,21,24,25,-1,25,22,21,-1,6,10,23,-1,23,22,6,-1,10,8,20,-1,20,23,10,-1,8,5,21,-1,21,20,8,-1,5,0,24,-1,24,21,5,-1,0,3,25,-1,25,24,0,-1,3,6,22,-1,22,25,3,-1,30,29,35,-1,35,34,30,-1,8,10,16,-1,16,19,8,-1,10,7,17,-1,17,16,10,-1,7,9,18,-1,18,17,7,-1,4,30,33,-1,33,32,4,-1,9,7,11,-1,11,15,9,-1,7,2,12,-1,12,11,7,-1,2,1,13,-1,13,12,2,-1,27,4,32,-1,32,31,27,-1});
  }
}
protected class MFVec3f761 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25.1822f,-224.6178f,37.2178f,13.0444f,-215.8267f,49.28f,-17.3289f,-210.8044f,53.7022f,-32.2f,-228.7156f,27.6711f,15.8889f,-243.8667f,16.9156f,-36.76f,-232.8356f,19.3644f,-33.2578f,-196.4978f,3.0489f,26.48f,-196.4978f,3.0489f,15.8178f,-183.9289f,34.5644f,-21.84f,-183.9689f,37.6356f,20.7067f,-188.7156f,23.9733f,-16.9644f,-240.9333f,33.9867f,-16.0711f,-243.8222f,30.5689f,10.4889f,-246.9333f,26.1556f,19.7111f,-240.9333f,37.1156f,8.9733f,-230.9778f,49.88f,-9.56f,-225.5333f,55.9378f,18.3956f,-199.7022f,-3.5467f,10.3644f,-245.0222f,8.2844f,-27.5244f,-235.2889f,9.2933f,-26.3156f,-199.7111f,-3.56f,17.0533f,-184.8578f,19.7778f,22.0667f,-189.2711f,8.3067f,-23.3156f,-190.2711f,8.7067f,-17.0756f,-180.9022f,32.12f,7.6311f,-180.8933f,30.2f});
  }
}
protected class MFVec2f762 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8819f,0.0483f,0.8625f,0.0359f,0.8625f,0.0344f,0.8786f,0.0507f,0.8948f,0.2599f,0.867f,0.0598f,0.857f,0.0621f,0.8381f,0.0441f,0.8533f,0.0697f,0.8381f,0.0441f,0.8503f,0.0646f,0.8419f,0.0407f,0.8588f,0.0334f,0.8588f,0.0347f,0.8467f,0.0405f,0.8415f,0.0402f,0.8445f,0.0658f,0.8331f,0.0451f,0.8331f,0.0451f,0.8468f,0.0705f,0.8593f,0.0711f,0.8712f,0.0644f,0.8626f,0.068f,0.8607f,0.0696f,0.877f,0.0609f,0.8798f,0.0581f,0.8632f,0.2548f,0.8814f,0.2691f,0.8729f,0.2464f,0.8847f,0.2342f,0.904f,0.2568f,0.8853f,0.2697f,0.8962f,0.2618f,0.9014f,0.2613f,0.9088f,0.2549f,0.8909f,0.2323f});
  }
}
protected class MFFloat763 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat764 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32765 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,0,-1,7,3,14,-1,14,13,7,-1,5,0,17,-1,17,10,5,-1,4,5,10,-1,10,9,4,-1,3,4,9,-1,9,14,3,-1,0,1,19,-1,19,17,0,-1,1,7,13,-1,13,19,1,-1,1,0,2,-1,0,6,8,-1,8,2,0,-1,9,10,11,-1,11,12,9,-1,13,14,15,-1,15,16,13,-1,10,17,18,-1,18,11,10,-1,19,13,16,-1,16,20,19,-1,17,19,20,-1,20,18,17,-1,14,9,12,-1,12,15,14,-1,15,12,20,-1,20,16,15,-1,11,18,20,-1,20,12,11,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,8,6,22,-1,22,21,8,-1,6,5,23,-1,23,22,6,-1,5,4,24,-1,24,23,5,-1,4,3,25,-1,25,24,4,-1,3,7,26,-1,26,25,3,-1,27,30,31,-1,31,32,27,-1,7,1,28,-1,28,27,7,-1,1,2,29,-1,29,28,1,-1,2,8,30,-1,30,29,2,-1,8,21,31,-1,31,30,8,-1,21,26,32,-1,32,31,21,-1,26,7,27,-1,27,32,26,-1});
  }
}
protected class MFInt32766 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,36,33,34,-1,34,35,36,-1,0,2,7,-1,7,8,0,-1,10,0,8,-1,8,9,10,-1,33,38,37,-1,37,34,33,-1,2,11,12,-1,12,7,2,-1,39,36,35,-1,35,40,39,-1,11,2,13,-1,2,1,14,-1,14,13,2,-1,9,8,15,-1,15,16,9,-1,5,4,17,-1,17,18,5,-1,8,7,19,-1,19,15,8,-1,12,5,18,-1,18,20,12,-1,7,12,20,-1,20,19,7,-1,4,9,16,-1,16,17,4,-1,17,16,20,-1,20,18,17,-1,15,19,20,-1,20,16,15,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,14,1,22,-1,22,21,14,-1,1,0,23,-1,23,22,1,-1,0,10,24,-1,24,23,0,-1,10,3,25,-1,25,24,10,-1,33,36,42,-1,42,41,33,-1,27,30,31,-1,31,32,27,-1,6,11,28,-1,28,27,6,-1,11,13,29,-1,29,28,11,-1,13,14,30,-1,30,29,13,-1,14,21,31,-1,31,30,14,-1,21,26,32,-1,32,31,21,-1,42,36,43,-1,43,44,42,-1});
  }
}
protected class MFVec3f767 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-29.1778f,-195.52f,12.5733f,-10.2222f,-209.4044f,4.08f,-32.7911f,-204.1511f,3.8933f,26.24f,-185.5378f,17.8889f,14.1022f,-176.7467f,29.9511f,-16.2667f,-171.7244f,34.3733f,-31.1378f,-189.6356f,8.3422f,16.9467f,-204.7911f,-2.4133f,-35.7022f,-193.7556f,0.0356f,9.1067f,-215.9156f,56.4578f,-14.16f,-206.4356f,53.4622f,-9.0622f,-225.8533f,62.5067f,4.5289f,-231.16f,60.3156f,10.7022f,-239.6889f,30.3911f,22.3378f,-225.5111f,48.56f,16.0044f,-232.1333f,52.3378f,8.0578f,-243.0667f,37.6667f,-24.3733f,-224f,33.0267f,-18.3467f,-238.6222f,45.2356f,-6.36f,-238.1333f,29.0978f,-4.9778f,-244.2667f,42.6133f,-19.8f,-183.8489f,-4.7778f,-20.0622f,-181.1911f,-1.68f,-7.5733f,-167.2578f,19.96f,9.24f,-170.8444f,17.5378f,15.9156f,-177.76f,6.5556f,10.3067f,-185.6267f,-5.7289f,12.5956f,-206.0044f,-13.0356f,-7.8978f,-210.9733f,-8.7244f,-26.64f,-206.1422f,-8.5378f,-28.7733f,-199.6933f,-10.8756f,-18.6489f,-192.2844f,-14.9867f,7.3244f,-194.2311f,-17.1511f});
  }
}
protected class MFVec2f768 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8786f,0.0507f,0.857f,0.0621f,0.8601f,0.0649f,0.867f,0.0598f,0.8887f,0.0786f,0.8747f,0.0865f,0.8533f,0.0697f,0.876f,0.0783f,0.893f,0.0688f,0.8992f,0.0702f,0.8819f,0.0483f,0.8561f,0.0728f,0.8736f,0.0851f,0.8532f,0.0697f,0.8503f,0.0646f,0.8986f,0.0785f,0.897f,0.0809f,0.8914f,0.0813f,0.8802f,0.0861f,0.8841f,0.0856f,0.8821f,0.0883f,0.8487f,0.0595f,0.8509f,0.0581f,0.8683f,0.0489f,0.868f,0.0507f,0.8608f,0.0544f,0.8505f,0.0603f,0.8455f,0.0706f,0.8468f,0.073f,0.8455f,0.0707f,0.8437f,0.0676f,0.8416f,0.0639f,0.8422f,0.0648f,0.8729f,0.2464f,0.8482f,0.2317f,0.8612f,0.2211f,0.8847f,0.2342f,0.8433f,0.2381f,0.8632f,0.2548f,0.8814f,0.2316f,0.8625f,0.2222f,0.8799f,0.2506f,0.8891f,0.243f,0.8922f,0.232f,0.8922f,0.232f});
  }
}
protected class MFFloat769 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat770 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32771 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,29,28,-1,28,11,0,-1,32,2,17,-1,17,1,32,-1,4,3,1,-1,1,17,4,-1,11,28,31,-1,31,5,11,-1,29,0,2,-1,2,32,29,-1,4,5,31,-1,31,3,4,-1,23,32,1,-1,24,3,31,-1,24,23,1,-1,1,3,24,-1,4,6,7,-1,7,8,4,-1,5,9,10,-1,10,11,5,-1,4,8,9,-1,9,5,4,-1,10,13,14,-1,14,12,10,-1,2,15,16,-1,16,17,2,-1,0,12,15,-1,15,2,0,-1,8,7,18,-1,18,9,8,-1,18,13,10,-1,10,9,18,-1,6,20,21,-1,21,19,6,-1,22,19,21,-1,21,14,22,-1,17,16,20,-1,20,6,17,-1,6,4,17,-1,11,10,12,-1,12,0,11,-1,13,22,14,-1,6,19,18,-1,18,7,6,-1,18,19,22,-1,22,13,18,-1,16,15,21,-1,21,20,16,-1,21,15,12,-1,12,14,21,-1,24,25,26,-1,26,23,24,-1,28,29,30,-1,30,27,28,-1,27,30,26,-1,26,25,27,-1,24,31,27,-1,27,25,24,-1,32,23,26,-1,26,30,32,-1,30,29,32,-1,28,27,31,-1});
  }
}
protected class MFInt32772 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,33,34,-1,34,2,3,-1,4,5,6,-1,6,7,4,-1,9,8,7,-1,7,6,9,-1,2,34,37,-1,37,38,2,-1,33,3,36,-1,36,35,33,-1,9,11,10,-1,10,8,9,-1,12,4,7,-1,13,8,10,-1,13,12,7,-1,7,8,13,-1,9,14,15,-1,15,16,9,-1,38,39,18,-1,18,2,38,-1,9,16,17,-1,17,11,9,-1,18,20,21,-1,21,19,18,-1,5,22,23,-1,23,6,5,-1,3,19,40,-1,40,36,3,-1,16,15,24,-1,24,17,16,-1,41,20,18,-1,18,39,41,-1,14,26,27,-1,27,25,14,-1,28,42,43,-1,43,21,28,-1,6,23,26,-1,26,14,6,-1,14,9,6,-1,2,18,19,-1,19,3,2,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,41,42,28,-1,28,20,41,-1,23,22,27,-1,27,26,23,-1,43,40,19,-1,19,21,43,-1,13,29,30,-1,30,12,13,-1,1,0,32,-1,32,31,1,-1,31,32,30,-1,30,29,31,-1,13,10,31,-1,31,29,13,-1,4,12,30,-1,30,32,4,-1,32,0,4,-1,1,31,10,-1});
  }
}
protected class MFVec3f773 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {14.4533f,-223.6267f,19.6756f,-18.16f,-200.7822f,16.4889f,-0.6889f,-223.9733f,20.2844f,-8.3689f,-184.8844f,35.7733f,-4.5067f,-206.7156f,46.3956f,12.9244f,-206.1556f,45.9467f,-5.5022f,-228.9289f,47.4844f,-3.3644f,-225.7733f,50.7733f,0.0667f,-220.1022f,52.8622f,12.6178f,-221.1244f,53.6222f,21.5067f,-223.4222f,45.16f,23.2711f,-211.9156f,36.8356f,14.3689f,-234.5333f,29.2711f,18.4533f,-230.1244f,44.8978f,14.4667f,-235.3778f,36.8711f,1.3422f,-235.6889f,31.0578f,-7.6356f,-230.6933f,37.8622f,-13.2311f,-218.4444f,29.4578f,8.8489f,-230.6711f,51.3822f,5.8622f,-235.1111f,46.8044f,-7.1111f,-230.44f,43.4356f,3.6711f,-237.4667f,40.9511f,16.2089f,-233.3778f,41.2178f,-21.1778f,-186.8533f,5.6133f,-10.9644f,-169.2889f,26.0489f,0.5644f,-168.3733f,19.4978f,-10.3956f,-185.6356f,0.1156f,19.0267f,-172.6711f,13.6133f,25.5333f,-188.3644f,21.1467f,13.8978f,-202.56f,2.9778f,8.0667f,-189.9333f,-5.7644f,12.2978f,-178.7689f,29.0444f,-3.1644f,-201.0044f,1.6844f});
  }
}
protected class MFVec2f774 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8747f,0.0865f,0.8887f,0.0786f,0.8299f,0.2203f,0.8424f,0.2111f,0.8736f,0.0851f,0.8939f,0.0989f,0.8978f,0.0975f,0.8834f,0.0852f,0.8992f,0.0766f,0.9092f,0.0888f,0.8992f,0.0702f,0.9115f,0.0859f,0.876f,0.0783f,0.893f,0.0688f,0.9109f,0.102f,0.9135f,0.0996f,0.9144f,0.0973f,0.9172f,0.0962f,0.8241f,0.2146f,0.8338f,0.2074f,0.8247f,0.2116f,0.8291f,0.2083f,0.9028f,0.1054f,0.9046f,0.1032f,0.9153f,0.1012f,0.9125f,0.1038f,0.9081f,0.1033f,0.9082f,0.1057f,0.8266f,0.2097f,0.8885f,0.0681f,0.8723f,0.0776f,0.8843f,0.0701f,0.8696f,0.0781f,0.8612f,0.2211f,0.8482f,0.2317f,0.8625f,0.2222f,0.8417f,0.2109f,0.8433f,0.2381f,0.8245f,0.2237f,0.8192f,0.2167f,0.8322f,0.2071f,0.8195f,0.2131f,0.8224f,0.2103f,0.8256f,0.2083f});
  }
}
protected class MFFloat775 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat776 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32777 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,2,1,-1,1,12,14,-1,0,3,15,-1,15,13,0,-1,11,8,9,-1,9,10,11,-1,4,16,17,-1,17,5,4,-1,18,19,7,-1,7,6,18,-1,0,13,16,-1,16,4,0,-1,12,1,5,-1,5,17,12,-1,1,0,4,-1,4,5,1,-1,2,14,18,-1,18,6,2,-1,15,3,7,-1,7,19,15,-1,3,2,6,-1,6,7,3,-1,3,0,9,-1,9,8,3,-1,0,1,10,-1,10,9,0,-1,1,2,11,-1,11,10,1,-1,2,3,8,-1,8,11,2,-1,20,27,26,-1,26,25,24,-1,20,26,24,-1,24,23,22,-1,20,24,22,-1,21,20,22,-1,12,20,21,-1,21,14,12,-1,14,21,22,-1,22,18,14,-1,18,22,23,-1,23,19,18,-1,19,23,24,-1,24,15,19,-1,15,24,25,-1,25,13,15,-1,13,25,26,-1,26,16,13,-1,16,26,27,-1,27,17,16,-1,17,27,20,-1,20,12,17,-1});
  }
}
protected class MFInt32778 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {21,0,1,-1,1,19,21,-1,12,13,22,-1,22,20,12,-1,5,6,7,-1,7,4,5,-1,8,23,25,-1,25,9,8,-1,26,28,18,-1,18,17,26,-1,12,20,24,-1,24,16,12,-1,19,1,9,-1,9,25,19,-1,1,2,8,-1,8,9,1,-1,0,21,27,-1,27,10,0,-1,22,13,18,-1,18,28,22,-1,3,0,10,-1,10,11,3,-1,13,12,15,-1,15,14,13,-1,2,1,4,-1,4,7,2,-1,1,0,5,-1,5,4,1,-1,0,3,6,-1,6,5,0,-1,29,36,35,-1,35,34,33,-1,29,35,33,-1,33,32,31,-1,29,33,31,-1,30,29,31,-1,19,29,30,-1,30,21,19,-1,21,30,31,-1,31,27,21,-1,26,31,32,-1,32,28,26,-1,28,32,33,-1,33,22,28,-1,22,33,34,-1,34,20,22,-1,20,34,35,-1,35,24,20,-1,23,35,36,-1,36,25,23,-1,25,36,29,-1,29,19,25,-1});
  }
}
protected class MFVec3f779 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {27.88f,-230.2178f,10.3911f,-35.1378f,-230.2178f,10.3911f,-30.6978f,-185.7378f,8.5733f,26.5422f,-185.7378f,8.9822f,22.7511f,-237.6f,10.6133f,-28.3956f,-237.6f,10.6133f,-23.1644f,-172.0311f,7.6356f,19.9689f,-172.0178f,7.9111f,23.04f,-188.7467f,5.4356f,25.8178f,-226.8267f,7.1156f,-31.0311f,-226.8267f,7.1422f,-27.2267f,-188.7467f,5.0489f,-31.7244f,-225.0489f,37.7644f,28.0178f,-225.0489f,37.7644f,-25.6222f,-190.6311f,32.2622f,23.6711f,-190.6356f,32.3111f,21.2178f,-232.8089f,40.1333f,-25.5778f,-233.3778f,39.1733f,-19.3378f,-177.08f,29.8844f,19.7244f,-177.1689f,30.0444f,-27.64f,-222.0622f,40.2533f,-22.3556f,-192.2622f,35.4889f,-16.9156f,-180.5244f,33.4311f,16.9156f,-180.6f,33.5644f,20.3289f,-192.2622f,35.5333f,24.0933f,-222.0622f,40.2533f,18.2089f,-228.7822f,42.3022f,-22.32f,-229.2756f,41.4756f});
  }
}
protected class MFVec2f780 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.813f,0.0266f,0.8136f,0.0488f,0.8136f,0.0488f,0.8133f,0.0266f,0.8111f,0.0474f,0.8105f,0.0283f,0.8108f,0.0283f,0.8111f,0.0474f,0.8141f,0.0525f,0.8141f,0.0525f,0.8123f,0.0198f,0.8125f,0.0198f,0.9273f,0.2479f,0.9315f,0.2698f,0.9337f,0.2676f,0.9301f,0.2489f,0.9262f,0.2444f,0.9337f,0.2762f,0.9335f,0.2763f,0.8381f,0.0441f,0.904f,0.2568f,0.8327f,0.0273f,0.9122f,0.2724f,0.8401f,0.0478f,0.9014f,0.2535f,0.8395f,0.0482f,0.9142f,0.2789f,0.8319f,0.0206f,0.9141f,0.2788f,0.8381f,0.0441f,0.8327f,0.0273f,0.8319f,0.0206f,0.9141f,0.2788f,0.9122f,0.2724f,0.904f,0.2568f,0.9014f,0.2535f,0.8395f,0.0482f});
  }
}
protected class MFFloat781 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat782 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32783 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,8,-1,8,3,0,-1,5,0,3,-1,3,7,5,-1,10,6,4,-1,4,2,10,-1,2,4,8,-1,8,1,2,-1,14,4,6,-1,6,11,14,-1,8,16,17,-1,17,3,8,-1,9,13,12,-1,12,7,9,-1,15,16,8,-1,8,4,15,-1,15,4,14,-1,9,3,17,-1,17,18,9,-1,9,18,13,-1,30,31,25,-1,27,30,25,-1,26,27,25,-1,22,19,20,-1,20,21,22,-1,41,38,39,-1,39,40,41,-1,36,37,32,-1,36,32,33,-1,36,33,34,-1,35,36,34,-1,23,24,19,-1,19,22,23,-1,6,10,20,-1,20,19,6,-1,30,27,28,-1,28,29,30,-1,5,7,22,-1,22,21,5,-1,7,12,23,-1,23,22,7,-1,12,11,24,-1,24,23,12,-1,11,6,19,-1,19,24,11,-1,1,0,26,-1,26,25,1,-1,0,5,27,-1,27,26,0,-1,5,21,28,-1,28,27,5,-1,21,20,29,-1,29,28,21,-1,20,10,30,-1,30,29,20,-1,10,2,31,-1,31,30,10,-1,2,1,25,-1,25,31,2,-1,16,15,33,-1,33,32,16,-1,15,14,34,-1,34,33,15,-1,14,13,35,-1,35,34,14,-1,13,18,36,-1,36,35,13,-1,18,17,37,-1,37,36,18,-1,17,16,32,-1,32,37,17,-1,14,11,39,-1,39,38,14,-1,11,12,40,-1,40,39,11,-1,12,13,41,-1,41,40,12,-1,13,14,38,-1,38,41,13,-1,9,7,3,-1});
  }
}
protected class MFInt32784 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,1,-1,1,2,3,-1,5,3,2,-1,2,4,5,-1,44,45,8,-1,8,46,44,-1,46,8,43,-1,43,42,46,-1,47,8,45,-1,45,48,47,-1,1,12,13,-1,13,2,1,-1,16,14,15,-1,15,4,16,-1,50,49,43,-1,43,8,50,-1,50,8,47,-1,16,2,13,-1,13,18,16,-1,16,18,14,-1,21,22,23,-1,20,21,23,-1,19,20,23,-1,25,26,27,-1,27,24,25,-1,29,30,31,-1,31,28,29,-1,33,34,35,-1,33,35,36,-1,33,36,37,-1,32,33,37,-1,38,39,26,-1,26,25,38,-1,7,6,27,-1,27,26,7,-1,21,20,40,-1,40,41,21,-1,5,4,25,-1,25,24,5,-1,4,15,38,-1,38,25,4,-1,15,11,39,-1,39,38,15,-1,48,45,51,-1,51,56,48,-1,0,3,19,-1,19,23,0,-1,3,5,20,-1,20,19,3,-1,5,24,40,-1,40,20,5,-1,24,27,41,-1,41,40,24,-1,27,6,21,-1,21,41,27,-1,6,9,22,-1,22,21,6,-1,9,0,23,-1,23,22,9,-1,12,17,36,-1,36,35,12,-1,50,47,55,-1,55,54,50,-1,10,14,32,-1,32,37,10,-1,14,18,33,-1,33,32,14,-1,18,13,34,-1,34,33,18,-1,13,12,35,-1,35,34,13,-1,47,48,53,-1,53,52,47,-1,11,15,28,-1,28,31,11,-1,15,14,29,-1,29,28,15,-1,14,10,30,-1,30,29,14,-1,16,4,2,-1});
  }
}
protected class MFVec3f785 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-24.3111f,-284.6222f,42.9156f,-3.3067f,-284.3556f,49.0933f,15.5644f,-284.6222f,42.9867f,-27.6311f,-247.5111f,44.3333f,20.6978f,-247.4667f,44.7867f,-27.1467f,-286.6222f,12.2844f,23.3733f,-246.0889f,10.8133f,-32.2356f,-246.0889f,10.8133f,-4.3378f,-252.0444f,52.4089f,-38.8f,-225.48f,42.8089f,17.0178f,-286.6222f,12.2844f,27.88f,-191.9511f,7.8f,-35.1378f,-191.9511f,7.8f,-31.7244f,-186.7867f,35.1733f,28.0178f,-186.7867f,35.1733f,17.4222f,-234.1778f,49.04f,-9.7467f,-238.7556f,55.5333f,-32.3156f,-233.5111f,55.3467f,-35.2267f,-223.1244f,51.4889f,18.32f,-246.1778f,5.4889f,12.5911f,-285.6889f,8.9378f,-22.9022f,-285.6889f,8.9378f,-27.1422f,-246.4889f,5.5111f,-29.8356f,-192.2178f,2.7467f,23.92f,-192.2178f,2.7467f,-3.3689f,-292.3111f,46.3867f,-17.9644f,-292.4444f,41.6044f,-20.7556f,-293.6f,13.4622f,-20.9022f,-289.4667f,10.1911f,10.56f,-289.4667f,10.1911f,13.5956f,-293.6f,13.4844f,12.4178f,-292.4444f,41.7644f,-7.3822f,-230.3556f,60.6889f,12.44f,-226.6f,55.5378f,20.4667f,-185.8978f,43.2889f,-26.5244f,-185.8889f,43.2711f,-24.9422f,-219.1556f,56.8622f,-24.4222f,-226.7689f,59.8222f,22.1111f,-182.7556f,29.7022f,23.3333f,-186.2622f,12.0222f,-28.5378f,-186.2622f,12.0222f,-26.2178f,-182.7556f,29.7022f});
  }
}
protected class MFVec2f786 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8514f,0.0953f,0.8526f,0.0788f,0.846f,0.0768f,0.8466f,0.0958f,0.8195f,0.0808f,0.8225f,0.0994f,0.8225f,0.0994f,0.8195f,0.0808f,0.8903f,0.2261f,0.8467f,0.0958f,0.8381f,0.0441f,0.8136f,0.0488f,0.8561f,0.0728f,0.8532f,0.0697f,0.8381f,0.0441f,0.8136f,0.0488f,0.8436f,0.0662f,0.8533f,0.0697f,0.8503f,0.0646f,0.8461f,0.0998f,0.8248f,0.1027f,0.8248f,0.1027f,0.8462f,0.0997f,0.8498f,0.0994f,0.8184f,0.0977f,0.8157f,0.0811f,0.8157f,0.0809f,0.8184f,0.0977f,0.8165f,0.0457f,0.8341f,0.0424f,0.8341f,0.0424f,0.8165f,0.0457f,0.844f,0.0417f,0.8554f,0.0622f,0.8575f,0.0659f,0.8594f,0.0677f,0.8574f,0.0658f,0.844f,0.0417f,0.8099f,0.0493f,0.8099f,0.0493f,0.82f,0.101f,0.82f,0.101f,0.8821f,0.2087f,0.8838f,0.2252f,0.9098f,0.1997f,0.916f,0.2175f,0.8866f,0.2074f,0.904f,0.2568f,0.9273f,0.2479f,0.8814f,0.2316f,0.8847f,0.2342f,0.9197f,0.2166f,0.9083f,0.2577f,0.925f,0.2515f,0.8813f,0.2388f,0.8986f,0.2602f,0.931f,0.2468f});
  }
}
protected class MFFloat787 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat788 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32789 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,19,18,-1,18,5,4,-1,5,18,21,-1,21,6,5,-1,7,25,20,-1,20,8,7,-1,8,20,19,-1,19,4,8,-1,6,21,22,-1,1,7,8,-1,8,10,1,-1,6,2,11,-1,11,5,6,-1,5,11,0,-1,0,4,5,-1,4,0,10,-1,10,8,4,-1,1,3,9,-1,9,7,1,-1,9,3,2,-1,2,6,9,-1,9,24,23,-1,23,7,9,-1,6,22,24,-1,24,9,6,-1,23,25,7,-1,0,11,15,-1,15,17,0,-1,1,10,14,-1,14,12,1,-1,11,2,13,-1,13,15,11,-1,3,1,12,-1,12,16,3,-1,2,3,16,-1,16,13,2,-1,10,0,17,-1,17,14,10,-1,14,17,16,-1,16,12,14,-1,15,13,16,-1,16,17,15,-1,26,27,28,-1,26,28,29,-1,30,26,29,-1,18,19,27,-1,27,26,18,-1,19,20,28,-1,28,27,19,-1,20,25,29,-1,29,28,20,-1,31,32,33,-1,37,31,33,-1,36,37,33,-1,36,33,34,-1,36,34,35,-1,21,18,26,-1,26,30,21,-1,24,22,32,-1,32,31,24,-1,22,21,33,-1,33,32,22,-1,21,30,34,-1,34,33,21,-1,30,29,35,-1,35,34,30,-1,29,25,36,-1,36,35,29,-1,25,23,37,-1,37,36,25,-1,23,24,31,-1,31,37,23,-1});
  }
}
protected class MFInt32790 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,6,40,41,-1,41,9,6,-1,9,41,39,-1,39,38,9,-1,5,4,10,-1,11,6,9,-1,9,12,11,-1,5,13,14,-1,14,3,5,-1,3,14,15,-1,15,0,3,-1,38,42,12,-1,12,9,38,-1,11,43,44,-1,44,6,11,-1,17,16,13,-1,13,5,17,-1,44,45,46,-1,46,6,44,-1,5,10,18,-1,18,17,5,-1,46,40,6,-1,15,14,20,-1,20,21,15,-1,11,12,22,-1,22,23,11,-1,14,13,24,-1,24,20,14,-1,43,11,23,-1,23,48,43,-1,13,16,25,-1,25,24,13,-1,12,42,47,-1,47,22,12,-1,22,47,48,-1,48,23,22,-1,20,24,25,-1,25,21,20,-1,27,28,29,-1,27,29,30,-1,26,27,30,-1,2,1,28,-1,28,27,2,-1,1,8,29,-1,29,28,1,-1,8,7,30,-1,30,29,8,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,31,35,36,-1,31,36,37,-1,4,2,27,-1,27,26,4,-1,18,10,34,-1,34,33,18,-1,10,4,35,-1,35,34,10,-1,4,26,36,-1,36,35,4,-1,26,30,37,-1,37,36,26,-1,30,7,31,-1,31,37,30,-1,7,19,32,-1,32,31,7,-1,19,18,33,-1,33,32,19,-1});
  }
}
protected class MFVec3f791 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.7733f,-249.5111f,34.56f,22.56f,-248.1333f,6.5467f,-15.04f,-243.4667f,6.5911f,4.7733f,-249.1556f,1.8f,2.2356f,-195.2f,37.4667f,-17.48f,-195.4978f,31.7022f,-19.6578f,-196.9111f,6.3333f,20.3956f,-196.9111f,6.3556f,20.3956f,-195.4978f,31.7022f,2.2356f,-203.2089f,2.6f,22.56f,-248.3556f,29.2311f,-15.04f,-243.7333f,29.28f,19.2444f,-255.6f,7.9778f,-7.9289f,-259.2889f,6.6356f,19.2444f,-255.8222f,27.6756f,-7.9289f,-259.5111f,29f,4.8222f,-260.6667f,6.5822f,4.8222f,-260.8889f,29.3911f,-19.4489f,-184.8356f,32.3556f,1.5511f,-184.5867f,38.5333f,20.4267f,-184.8356f,32.4267f,-22.2889f,-186.8533f,1.7244f,-18.5467f,-197.0578f,1.7867f,20.3956f,-197.0578f,1.7867f,2.2356f,-203.2711f,2.0489f,21.8756f,-186.8533f,1.7244f,-12.8889f,-173.1822f,28.2889f,2.1867f,-172.5422f,34.8267f,16.6356f,-173.1644f,28.3956f,17.24f,-174f,2.7733f,-15.5111f,-173.9956f,2.8267f,2.1911f,-201.3467f,0.7556f,-17.0756f,-195.24f,0.4311f,-20.6133f,-186.1156f,0.4311f,-14.3244f,-174.3378f,-0.3556f,15.8444f,-174.3422f,-0.4044f,19.9689f,-186.1689f,0.4356f,18.6756f,-195.3644f,0.4356f});
  }
}
protected class MFVec2f792 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8511f,0.1006f,0.8514f,0.0953f,0.8466f,0.0958f,0.8466f,0.1011f,0.8225f,0.0994f,0.8283f,0.1035f,0.9023f,0.1969f,0.8225f,0.0994f,0.8467f,0.0958f,0.8857f,0.2021f,0.8231f,0.1042f,0.8931f,0.1724f,0.8782f,0.1769f,0.8338f,0.1268f,0.8493f,0.125f,0.8543f,0.1273f,0.8302f,0.1302f,0.8258f,0.1072f,0.8236f,0.1075f,0.8231f,0.1042f,0.8504f,0.1328f,0.8508f,0.1334f,0.8781f,0.1731f,0.8909f,0.1692f,0.8352f,0.1346f,0.8353f,0.1353f,0.8228f,0.0929f,0.844f,0.0896f,0.8482f,0.0889f,0.8441f,0.0896f,0.8228f,0.0929f,0.8203f,0.0995f,0.8207f,0.1038f,0.8212f,0.1068f,0.8207f,0.1037f,0.8203f,0.0995f,0.8206f,0.0933f,0.8205f,0.0933f,0.8815f,0.2034f,0.8821f,0.2087f,0.9098f,0.1997f,0.8866f,0.2074f,0.8737f,0.1777f,0.8969f,0.1707f,0.9052f,0.1925f,0.9074f,0.1918f,0.9084f,0.195f,0.876f,0.171f,0.891f,0.1665f});
  }
}
protected class MFFloat793 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat794 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32795 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
protected class MFInt32796 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
protected class MFVec3f797 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.3644f,-238.6222f,4.5956f,18.4978f,-238.1333f,29.5778f,-13.4267f,-233.1556f,29.9956f,-17.4578f,-197.3956f,30.8978f,-17.4578f,-197.16f,8.2089f,18.5378f,-188.0356f,8.3022f,-19.0578f,-183.3956f,8.3511f,18.5378f,-188.2711f,30.9911f,-19.0578f,-183.6267f,31.0356f,10.3511f,-179.4444f,8.3911f,10.3511f,-179.68f,31.0756f,-8.2044f,-180.1467f,31.0711f,-8.2044f,-179.9111f,8.3867f,0.7556f,-189.0756f,3.5556f,0.7556f,-189.44f,36.32f,3.3511f,-238.9778f,34.9022f,-7.8756f,-248.6667f,28.9822f,2.9556f,-250.3111f,29.3467f,18.5067f,-237.9111f,9.3467f,15.4578f,-245.5111f,27.7556f,15.4622f,-245.3333f,11.04f,-13.4178f,-232.9244f,8.9733f,-7.8667f,-248.4444f,9.7956f,2.9644f,-250.1333f,9.7467f});
  }
}
protected class MFVec2f798 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8782f,0.1769f,0.8543f,0.1273f,0.8574f,0.1518f,0.8703f,0.1535f,0.8493f,0.125f,0.8504f,0.1318f,0.8846f,0.1491f,0.8931f,0.1724f,0.8349f,0.1336f,0.8379f,0.1515f,0.8533f,0.1496f,0.8338f,0.1268f,0.8302f,0.1302f,0.8351f,0.1545f,0.849f,0.1233f,0.8336f,0.1251f,0.849f,0.123f,0.8335f,0.1249f,0.8539f,0.1573f,0.8543f,0.1579f,0.8703f,0.1496f,0.8822f,0.146f,0.8398f,0.159f,0.8399f,0.1597f,0.8737f,0.1777f,0.8664f,0.1541f,0.8969f,0.1707f,0.8878f,0.1476f,0.8796f,0.181f,0.8945f,0.1764f,0.8684f,0.1475f,0.8822f,0.1433f});
  }
}
protected class MFFloat799 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat800 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32801 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
protected class MFInt32802 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
protected class MFVec3f803 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-14.3867f,-194.9778f,31.4578f,-14.3778f,-194.7467f,10.4311f,-11.1422f,-211f,30.3511f,-11.1333f,-210.7867f,11.0356f,15.3867f,-209.6044f,31.2222f,3.2533f,-210.5067f,34.8756f,15.3956f,-209.3689f,10.24f,3.2667f,-210.1911f,6.4578f,-6.2978f,-223.1511f,29.2889f,-6.2933f,-222.96f,11.7867f,15.5111f,-222.3333f,29.0889f,4.9378f,-223.6978f,32.9067f,15.52f,-222.1467f,12.3333f,4.9511f,-223.4222f,8.2578f,-7.7422f,-226.8933f,20.4533f,13.8978f,-226.8756f,20.4622f,4.9778f,-229.6267f,20.4311f,-7.5556f,-226.1333f,25.2978f,14.08f,-225.8711f,16.4133f,4.4044f,-228.3244f,26.8622f,-7.5556f,-226.0889f,15.8978f,14.08f,-225.9244f,24.76f,4.4f,-228.4178f,14.4622f,16.4711f,-188.4f,31.1556f,-15.4444f,-183.1956f,10.5511f,-15.4533f,-183.4311f,31.5733f,-6.2089f,-179.7333f,30.8533f,-6.2f,-179.5156f,11.3778f,9.7244f,-179.6311f,30.8622f,16.48f,-188.1778f,10.92f,9.7289f,-179.4178f,11.3822f,1.2356f,-189.2311f,36.4711f,1.2489f,-188.8933f,6.1733f});
  }
}
protected class MFVec2f804 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8542f,0.1553f,0.8574f,0.1518f,0.8533f,0.1496f,0.8379f,0.1515f,0.8351f,0.1545f,0.8388f,0.1572f,0.8414f,0.1663f,0.8547f,0.1647f,0.8578f,0.1639f,0.8665f,0.142f,0.8703f,0.1535f,0.8804f,0.1378f,0.8846f,0.1491f,0.8382f,0.1663f,0.8495f,0.1759f,0.8523f,0.1752f,0.8544f,0.1737f,0.8566f,0.1736f,0.8658f,0.1324f,0.8753f,0.1296f,0.8677f,0.1303f,0.8725f,0.1289f,0.842f,0.1753f,0.8441f,0.175f,0.8533f,0.1759f,0.8496f,0.1769f,0.8467f,0.1759f,0.846f,0.1768f,0.87f,0.1292f,0.8525f,0.1477f,0.8382f,0.1495f,0.8525f,0.1475f,0.8381f,0.1492f,0.8664f,0.1541f,0.8878f,0.1476f,0.8639f,0.1422f,0.8827f,0.1365f,0.8634f,0.1325f,0.8774f,0.1283f,0.8662f,0.1297f,0.8697f,0.1281f,0.8732f,0.1275f,0.872f,0.1575f,0.8858f,0.1533f});
  }
}
protected class MFFloat805 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat806 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32807 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,4,-1,4,6,5,-1,7,2,3,-1,3,0,7,-1,8,9,10,-1,10,11,8,-1,12,13,14,-1,14,15,12,-1,1,5,9,-1,9,8,1,-1,5,7,10,-1,10,9,5,-1,7,0,11,-1,11,10,7,-1,0,1,8,-1,8,11,0,-1,6,4,13,-1,13,12,6,-1,4,3,14,-1,14,13,4,-1,3,2,15,-1,15,14,3,-1,2,6,12,-1,12,15,2,-1,22,23,20,-1,20,21,22,-1,18,19,16,-1,16,17,18,-1,5,6,17,-1,17,16,5,-1,6,2,18,-1,18,17,6,-1,2,7,19,-1,19,18,2,-1,7,5,16,-1,16,19,7,-1,0,3,21,-1,21,20,0,-1,3,4,22,-1,22,21,3,-1,4,1,23,-1,23,22,4,-1,1,0,20,-1,20,23,1,-1});
  }
}
protected class MFInt32808 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {24,25,26,-1,26,0,24,-1,4,5,6,-1,6,7,4,-1,8,9,10,-1,10,11,8,-1,12,30,31,-1,31,32,12,-1,25,24,29,-1,29,28,25,-1,1,4,10,-1,10,9,1,-1,4,7,11,-1,11,10,4,-1,7,2,8,-1,8,11,7,-1,0,26,30,-1,30,12,0,-1,3,6,14,-1,14,13,3,-1,6,5,15,-1,15,14,6,-1,27,0,12,-1,12,32,27,-1,17,18,19,-1,19,16,17,-1,35,36,37,-1,37,20,35,-1,24,0,20,-1,20,37,24,-1,0,27,35,-1,35,20,0,-1,5,4,22,-1,22,21,5,-1,4,1,23,-1,23,22,4,-1,7,6,16,-1,16,19,7,-1,6,3,17,-1,17,16,6,-1,26,25,34,-1,34,33,26,-1,2,7,19,-1,19,18,2,-1});
  }
}
protected class MFVec3f809 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-35.68f,-233.2444f,5.9511f,28.4222f,-233.1556f,5.9467f,-31.0667f,-188.5556f,34.6756f,-32.4356f,-187.7067f,5.6133f,25.8533f,-187.7111f,5.6711f,27.5067f,-233.0222f,36.4889f,26.1689f,-188.5511f,35.0844f,-35.5111f,-233.0222f,36.4889f,23.7778f,-240.1778f,5.5822f,23.1911f,-240.6222f,36.9289f,-28.96f,-240.6222f,36.9289f,-29.0711f,-240.2667f,5.5867f,19.6178f,-174.8222f,34.0444f,19.4044f,-174.4578f,8.4533f,-25.6978f,-174.4533f,8.4133f,-24.8f,-174.8267f,33.7644f,25.6311f,-230.2533f,41.5022f,22.8267f,-191.8178f,39.8356f,-27.8267f,-191.8178f,39.4489f,-31.6667f,-230.2533f,41.5244f,-31.68f,-229.9156f,1.7778f,-28.8933f,-190.7867f,0.6978f,22.4089f,-190.7911f,0.7556f,26.2578f,-229.8222f,1.7689f});
  }
}
protected class MFVec2f810 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9315f,0.2698f,0.8136f,0.0488f,0.7924f,0.0507f,0.7911f,0.0281f,0.8136f,0.0488f,0.813f,0.0266f,0.791f,0.0281f,0.7924f,0.0508f,0.7924f,0.0543f,0.8143f,0.0526f,0.8143f,0.0526f,0.7924f,0.0543f,0.9335f,0.2763f,0.7903f,0.0215f,0.7903f,0.0215f,0.8123f,0.0198f,0.7875f,0.03f,0.7875f,0.03f,0.7887f,0.0494f,0.7887f,0.0495f,0.9277f,0.2691f,0.8167f,0.0279f,0.8173f,0.0471f,0.8173f,0.0471f,0.9273f,0.2479f,0.9479f,0.2423f,0.9531f,0.2644f,0.9318f,0.2697f,0.9473f,0.2389f,0.926f,0.2443f,0.955f,0.2707f,0.9551f,0.2707f,0.9337f,0.2763f,0.9563f,0.262f,0.9518f,0.243f,0.928f,0.269f,0.924f,0.2502f,0.9241f,0.2502f});
  }
}
protected class MFFloat811 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat812 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32813 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,6,-1,6,8,0,-1,10,7,1,-1,1,5,10,-1,2,1,7,-1,7,9,2,-1,8,11,4,-1,4,0,8,-1,14,15,12,-1,12,13,14,-1,34,35,32,-1,32,33,34,-1,25,28,29,-1,29,24,25,-1,17,18,19,-1,19,20,17,-1,25,26,27,-1,27,28,25,-1,20,21,16,-1,16,17,20,-1,6,3,13,-1,13,12,6,-1,24,29,30,-1,30,31,24,-1,2,9,15,-1,15,14,2,-1,16,21,22,-1,22,23,16,-1,9,7,17,-1,17,16,9,-1,7,10,18,-1,18,17,7,-1,10,11,19,-1,19,18,10,-1,11,8,20,-1,20,19,11,-1,8,6,21,-1,21,20,8,-1,6,12,22,-1,22,21,6,-1,12,15,23,-1,23,22,12,-1,15,9,16,-1,16,23,15,-1,3,0,25,-1,25,24,3,-1,0,4,26,-1,26,25,0,-1,4,5,27,-1,27,26,4,-1,5,1,28,-1,28,27,5,-1,1,2,29,-1,29,28,1,-1,2,14,30,-1,30,29,2,-1,14,13,31,-1,31,30,14,-1,13,3,24,-1,24,31,13,-1,10,5,33,-1,33,32,10,-1,5,4,34,-1,34,33,5,-1,4,11,35,-1,35,34,4,-1,11,10,32,-1,32,35,11,-1});
  }
}
protected class MFInt32814 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,0,-1,0,1,2,-1,39,36,37,-1,37,38,39,-1,40,37,36,-1,36,41,40,-1,1,10,11,-1,11,2,1,-1,12,13,14,-1,14,15,12,-1,43,44,45,-1,45,46,43,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,15,-1,15,14,0,-1,23,22,32,-1,32,33,23,-1,8,9,13,-1,13,12,8,-1,31,30,34,-1,34,35,31,-1,9,4,24,-1,24,31,9,-1,36,39,49,-1,49,48,36,-1,7,10,26,-1,26,25,7,-1,10,1,27,-1,27,26,10,-1,1,0,30,-1,30,27,1,-1,0,14,34,-1,34,30,0,-1,14,13,35,-1,35,34,14,-1,13,9,31,-1,31,35,13,-1,3,2,20,-1,20,23,3,-1,2,11,28,-1,28,20,2,-1,42,38,53,-1,53,52,42,-1,38,37,47,-1,47,53,38,-1,5,8,22,-1,22,21,5,-1,8,12,32,-1,32,22,8,-1,12,15,33,-1,33,32,12,-1,15,3,23,-1,23,33,15,-1,39,38,46,-1,46,45,39,-1,6,11,16,-1,16,19,6,-1,11,10,17,-1,17,16,11,-1,10,7,18,-1,18,17,10,-1});
  }
}
protected class MFVec3f815 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-33.0222f,-240.6667f,9.1289f,22.7333f,-240.6667f,9.1289f,16.8356f,-282.5333f,8.0444f,-27.5067f,-282.5333f,8.0444f,-35.68f,-188.6756f,8.8267f,28.4222f,-188.5689f,8.8222f,-27.5156f,-283.1556f,43.8489f,23.0044f,-242.6222f,42.3778f,-32.6089f,-242.6222f,42.3778f,16.6489f,-283.1556f,43.8489f,27.5067f,-188.4578f,39.3689f,-35.5111f,-188.4578f,39.3689f,-24.0089f,-290.0444f,42.4933f,-24.0044f,-290.2667f,10.2933f,12.9689f,-290.2667f,10.2933f,12.8089f,-290.0444f,42.4933f,12.1644f,-281.9111f,46.8667f,18.4533f,-242.1778f,49.2044f,24.1378f,-187.5511f,46.1067f,-30.7333f,-187.5511f,46.1067f,-28.0178f,-242.4444f,49.2178f,-23.3511f,-281.9556f,46.8667f,-20.9733f,-286.3111f,46.0667f,9.7644f,-286.3111f,46.0667f,-23.08f,-280.9778f,3.9689f,-28.0222f,-240.8889f,3.4222f,-30.4444f,-188.1867f,3.4578f,24.2933f,-188.0978f,3.4533f,17.8044f,-240.6222f,3.4133f,12.1244f,-280.9333f,3.9644f,9.6978f,-286.1778f,5.3511f,-20.6756f,-286.1778f,5.3511f,23.5111f,-183.6933f,33.3867f,24.0667f,-183.7378f,13.2444f,-29.7556f,-183.8356f,13.2489f,-29.6489f,-183.68f,33.3867f});
  }
}
protected class MFVec2f816 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8225f,0.0994f,0.8195f,0.0808f,0.7938f,0.0824f,0.7939f,0.1016f,0.8195f,0.0808f,0.7938f,0.0824f,0.7924f,0.0507f,0.8136f,0.0488f,0.7939f,0.1016f,0.8225f,0.0994f,0.8136f,0.0488f,0.7924f,0.0508f,0.7964f,0.1053f,0.8205f,0.103f,0.8205f,0.103f,0.7964f,0.1053f,0.796f,0.0481f,0.809f,0.0468f,0.809f,0.0469f,0.796f,0.048f,0.7888f,0.0827f,0.7888f,0.0826f,0.7886f,0.1011f,0.7887f,0.1011f,0.8243f,0.0799f,0.8186f,0.0479f,0.8186f,0.0479f,0.8243f,0.0801f,0.7878f,0.051f,0.7878f,0.0509f,0.8275f,0.0984f,0.8275f,0.0983f,0.7902f,0.1036f,0.7902f,0.1036f,0.8264f,0.1006f,0.8264f,0.1006f,0.916f,0.2175f,0.941f,0.2114f,0.9479f,0.2423f,0.9273f,0.2479f,0.9376f,0.1925f,0.9098f,0.1997f,0.9479f,0.2423f,0.9448f,0.2456f,0.9323f,0.249f,0.9323f,0.249f,0.9448f,0.2456f,0.9459f,0.2103f,0.9115f,0.2191f,0.9226f,0.2496f,0.9226f,0.2496f,0.9114f,0.219f,0.9524f,0.2413f,0.9524f,0.2414f});
  }
}
protected class MFFloat817 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat818 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32819 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,21,26,-1,26,4,3,-1,5,25,27,-1,27,6,5,-1,4,26,23,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,22,24,-1,24,5,7,-1,4,23,22,-1,22,7,4,-1,24,25,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,18,21,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,19,-1,19,20,16,-1,3,16,20,-1,20,18,3,-1,19,6,27,-1,31,28,29,-1,29,30,31,-1,26,21,29,-1,29,28,26,-1,33,34,35,-1,32,33,35,-1,38,32,35,-1,38,35,36,-1,38,36,37,-1,27,25,31,-1,31,30,27,-1,44,45,39,-1,39,40,41,-1,44,39,41,-1,44,41,42,-1,44,42,43,-1,18,20,33,-1,33,32,18,-1,20,19,34,-1,34,33,20,-1,19,27,35,-1,35,34,19,-1,27,30,36,-1,36,35,27,-1,30,29,37,-1,37,36,30,-1,29,21,38,-1,38,37,29,-1,21,18,32,-1,32,38,21,-1,22,23,40,-1,40,39,22,-1,23,26,41,-1,41,40,23,-1,26,28,42,-1,42,41,26,-1,28,31,43,-1,43,42,28,-1,31,25,44,-1,44,43,31,-1,25,24,45,-1,45,44,25,-1,24,22,39,-1,39,45,24,-1});
  }
}
protected class MFInt32820 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1});
  }
}
protected class MFVec3f821 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.4622f,-251.2444f,10.7733f,-15.1333f,-246.0444f,10.64f,4.68f,-252.5333f,5.2222f,-18.64f,-192.8178f,34.5644f,-18.64f,-192.5556f,8.8711f,20.3022f,-192.5556f,8.8711f,20.3022f,-192.8178f,34.5644f,2.1422f,-199.1111f,4.3822f,19.1511f,-259.6f,12.5022f,-8.0222f,-263.7333f,11.3022f,19.1511f,-259.3333f,30.5511f,-8.0222f,-263.4667f,32.0267f,4.7244f,-265.2889f,11.3067f,4.7244f,-265.0222f,32.4711f,22.4622f,-250.9333f,31.8133f,4.68f,-252.0889f,38f,2.1422f,-199.1422f,38.9822f,-15.1333f,-245.7333f,31.68f,-18.64f,-192.8622f,39.3022f,20.3022f,-192.8622f,39.3022f,2.1422f,-199.0756f,39.56f,-22.3822f,-182.6578f,39.2356f,2.1422f,-199.0089f,3.8044f,-18.64f,-192.9022f,3.9422f,20.3022f,-192.9022f,3.9422f,21.9733f,-182.0356f,3.4267f,-22.3733f,-182.0356f,3.4267f,21.7822f,-182.6578f,39.2356f,-15.1822f,-170.0667f,4.5911f,-15.1911f,-170f,37.1644f,17.3911f,-170f,37.1644f,17.5556f,-170.0667f,4.5911f,-17.6622f,-190.7822f,40.6889f,2.1022f,-197.0489f,40.8844f,19.1822f,-190.8444f,40.6889f,20.5511f,-181.7822f,40.6489f,16.4756f,-169.8356f,40.6133f,-14.4133f,-169.8356f,40.6133f,-21.4044f,-181.7733f,40.6489f,2.0933f,-196.7511f,2.52f,-16.8711f,-191.2222f,2.0622f,-20.3244f,-181.9911f,1.7644f,-13.8533f,-170.2222f,1.7378f,15.9333f,-170.2222f,1.7378f,19.7156f,-181.9733f,1.7644f,18.2756f,-191.3467f,2.0622f});
  }
}
protected class MFVec2f822 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8168f,0.105f,0.8225f,0.0994f,0.7939f,0.1016f,0.7996f,0.1065f,0.9311f,0.1887f,0.7939f,0.1016f,0.8225f,0.0994f,0.9145f,0.1932f,0.794f,0.107f,0.9232f,0.1611f,0.908f,0.1649f,0.8025f,0.1324f,0.818f,0.1313f,0.7986f,0.1359f,0.7957f,0.11f,0.7939f,0.1101f,0.794f,0.107f,0.8228f,0.1342f,0.8186f,0.1401f,0.819f,0.1409f,0.9081f,0.1606f,0.921f,0.1574f,0.8033f,0.1412f,0.8033f,0.142f,0.8231f,0.1042f,0.8212f,0.1078f,0.8231f,0.1042f,0.8236f,0.1075f,0.7948f,0.0956f,0.8206f,0.0932f,0.8206f,0.0932f,0.7948f,0.0956f,0.8249f,0.0987f,0.8253f,0.1032f,0.8258f,0.1063f,0.8253f,0.1032f,0.8249f,0.0987f,0.823f,0.0929f,0.823f,0.0929f,0.7917f,0.1017f,0.7916f,0.1064f,0.7918f,0.1091f,0.7916f,0.1063f,0.7917f,0.1017f,0.7927f,0.0957f,0.7927f,0.0957f,0.9376f,0.1925f,0.9098f,0.1997f,0.927f,0.1595f,0.9344f,0.1846f,0.9361f,0.1842f,0.9366f,0.1872f,0.9035f,0.1654f,0.9061f,0.1582f,0.9213f,0.1544f,0.9096f,0.1911f,0.9084f,0.195f,0.9074f,0.1918f});
  }
}
protected class MFFloat823 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat824 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32825 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
protected class MFInt32826 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
protected class MFVec3f827 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.92f,-243.8222f,6.08f,18.08f,-242.5778f,31.0267f,-13.8267f,-237.0667f,31.2756f,-17.4578f,-198.4489f,31.3333f,-17.4578f,-198.7289f,10.2933f,18.5378f,-188.4978f,10.0267f,-19.0578f,-183.2933f,9.8889f,18.5378f,-188.2178f,31.0667f,-19.0578f,-183.0089f,30.9289f,10.3511f,-178.8667f,9.7733f,10.3511f,-178.5822f,30.8133f,-8.2044f,-179.1067f,30.8267f,-8.2044f,-179.3911f,9.7867f,0.7556f,-189.8089f,4.4711f,0.7556f,-189.3689f,37.2533f,2.9333f,-243.4222f,36.3956f,-8.3467f,-254.4889f,30.8711f,2.5244f,-255.0667f,31.1867f,18.0711f,-242.8444f,10.7822f,15.0044f,-250.8889f,29.4978f,14.9956f,-251.1111f,12.7778f,-13.8356f,-237.3333f,10.2444f,-8.3556f,-254.7556f,11.6756f,2.4711f,-256.5778f,11.68f});
  }
}
protected class MFVec2f828 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.908f,0.1649f,0.8228f,0.1342f,0.8238f,0.1612f,0.9018f,0.1387f,0.818f,0.1313f,0.8186f,0.139f,0.9163f,0.135f,0.9232f,0.1611f,0.8031f,0.1401f,0.8044f,0.1596f,0.8199f,0.1584f,0.8025f,0.1324f,0.7986f,0.1359f,0.8014f,0.1628f,0.8179f,0.1294f,0.8023f,0.1305f,0.8179f,0.1291f,0.8023f,0.1302f,0.8199f,0.1671f,0.8202f,0.1672f,0.902f,0.1343f,0.914f,0.1313f,0.8058f,0.1681f,0.8058f,0.1689f,0.9035f,0.1654f,0.8978f,0.139f,0.927f,0.1595f,0.9196f,0.1336f,0.9092f,0.1696f,0.9243f,0.1658f,0.9003f,0.1324f,0.9142f,0.1283f});
  }
}
protected class MFFloat829 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat830 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32831 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
protected class MFInt32832 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
protected class MFVec3f833 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-14.1022f,-194.7378f,32.0578f,-14.1111f,-195.0222f,11.0178f,-11.5822f,-210.5289f,31.8578f,-11.6f,-210.9911f,12.0711f,14.9289f,-209.4844f,32.6978f,2.8133f,-210.0622f,36.0756f,14.9111f,-209.9822f,11.2044f,2.7867f,-210.72f,7.4044f,-6.0089f,-225.5333f,30.8489f,-6.0267f,-225.9689f,13.0889f,14.9511f,-225.0756f,30.6178f,4.4311f,-225.0178f,34.0044f,14.9378f,-225.4933f,13.6133f,4.4089f,-225.5956f,9.9778f,-7.4267f,-228.5333f,21.9733f,13.3689f,-228.6489f,21.9644f,4.48f,-230.5911f,22f,-7.24f,-227.8222f,26.8667f,13.5422f,-228.0533f,17.84f,3.9022f,-229.4311f,28.4933f,-7.2489f,-228.0978f,17.3289f,13.5511f,-227.8178f,26.3067f,3.8844f,-229.9067f,15.92f,16.0533f,-187.2889f,31.4667f,-15.8622f,-182.0756f,10.6844f,-15.8533f,-181.7956f,31.72f,-6.5911f,-177.6444f,30.8444f,-6.6f,-177.9022f,11.36f,9.3422f,-177.4844f,30.8311f,16.0444f,-187.5556f,11.2222f,9.3333f,-177.7467f,11.3422f,0.8178f,-188.12f,36.8311f,0.8044f,-188.5289f,6.5156f});
  }
}
protected class MFVec2f834 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8204f,0.1649f,0.8238f,0.1612f,0.8199f,0.1584f,0.8044f,0.1596f,0.8014f,0.1628f,0.8049f,0.166f,0.807f,0.1802f,0.8204f,0.1792f,0.8232f,0.1783f,0.8982f,0.1238f,0.9018f,0.1387f,0.9123f,0.1202f,0.9163f,0.135f,0.8038f,0.18f,0.8141f,0.1881f,0.8169f,0.1876f,0.8192f,0.1861f,0.8213f,0.1861f,0.8983f,0.1142f,0.9079f,0.1117f,0.9004f,0.112f,0.9052f,0.1108f,0.8067f,0.1872f,0.8088f,0.1869f,0.8179f,0.1883f,0.8142f,0.1891f,0.8114f,0.188f,0.8106f,0.1889f,0.9027f,0.111f,0.8192f,0.1563f,0.8048f,0.1573f,0.8192f,0.156f,0.8048f,0.1571f,0.8978f,0.139f,0.9196f,0.1336f,0.8956f,0.1239f,0.9147f,0.119f,0.8959f,0.1141f,0.9101f,0.1105f,0.8989f,0.1113f,0.9025f,0.1098f,0.906f,0.1094f,0.9033f,0.1433f,0.9173f,0.1398f});
  }
}
protected class MFFloat835 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat836 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32837 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,3,4,-1,4,7,6,-1,7,0,9,-1,9,8,7,-1,11,2,1,-1,1,5,11,-1,5,1,3,-1,3,6,5,-1,2,11,10,-1,4,0,7,-1,15,16,17,-1,14,15,17,-1,13,14,17,-1,20,21,22,-1,27,24,25,-1,25,26,27,-1,17,18,12,-1,12,13,17,-1,23,19,20,-1,20,22,23,-1,9,0,13,-1,13,12,9,-1,0,4,14,-1,14,13,0,-1,4,3,15,-1,15,14,4,-1,3,1,16,-1,16,15,3,-1,1,2,17,-1,17,16,1,-1,2,10,18,-1,18,17,2,-1,10,9,12,-1,12,18,10,-1,11,5,20,-1,20,19,11,-1,5,6,21,-1,21,20,5,-1,6,7,22,-1,22,21,6,-1,7,8,23,-1,23,22,7,-1,8,11,19,-1,19,23,8,-1,8,9,25,-1,25,24,8,-1,9,10,26,-1,26,25,9,-1,10,11,27,-1,27,26,10,-1,11,8,24,-1,24,27,11,-1});
  }
}
protected class MFInt32838 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,3,4,5,-1,5,6,3,-1,7,8,9,-1,9,10,7,-1,10,9,29,-1,29,28,10,-1,8,7,11,-1,2,4,3,-1,14,15,16,-1,13,14,16,-1,12,13,16,-1,35,36,37,-1,23,38,39,-1,39,22,23,-1,16,24,25,-1,25,12,16,-1,26,27,17,-1,17,19,26,-1,5,4,12,-1,12,25,5,-1,4,2,13,-1,13,12,4,-1,2,1,14,-1,14,13,2,-1,29,9,33,-1,33,32,29,-1,9,8,34,-1,34,33,9,-1,8,11,40,-1,40,34,8,-1,11,30,41,-1,41,40,11,-1,7,10,35,-1,35,43,7,-1,10,28,36,-1,36,35,10,-1,0,3,19,-1,19,18,0,-1,3,6,26,-1,26,19,3,-1,31,7,43,-1,43,42,31,-1,6,5,21,-1,21,20,6,-1,30,11,22,-1,22,39,30,-1,11,7,23,-1,23,22,11,-1,7,31,38,-1,38,23,7,-1});
  }
}
protected class MFVec3f839 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-34.0356f,-225.6356f,16.9244f,19.9067f,-221.76f,-3.2044f,26.5511f,-225.6089f,16.9156f,-3.9422f,-219.8311f,-9.2311f,-26.1289f,-221.9111f,-3.1556f,18.7289f,-190.0267f,17.5067f,-4.1733f,-189.2622f,4.4267f,-27.7778f,-190.0133f,17.5289f,-32.4356f,-182.5244f,46.9822f,-35.68f,-228.0667f,47.32f,28.4222f,-227.96f,47.3156f,25.8533f,-182.5289f,47.04f,-28.7556f,-235.2f,47.1556f,-27.4933f,-233.7333f,16.7156f,-20.68f,-230.5911f,-0.4533f,-3.5956f,-228.7956f,-5.0978f,14.5422f,-230.4978f,-0.3067f,20.2311f,-233.7333f,16.7467f,23.1511f,-235.1111f,47.1511f,17.8267f,-169.32f,49.8178f,12.8933f,-176.5422f,20.1111f,-3.84f,-175.88f,10.6578f,-21.72f,-176.5778f,20.3511f,-24.9778f,-169.2933f,49.7733f,-28.3111f,-186.3511f,50.4844f,-31.0222f,-224.4133f,50.4756f,25.5689f,-224.32f,50.4711f,21.8311f,-186.3556f,50.5378f});
  }
}
protected class MFVec2f840 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7624f,0.0345f,0.7525f,0.0502f,0.7571f,0.0508f,0.7729f,0.0334f,0.7734f,0.0512f,0.7924f,0.0508f,0.791f,0.0281f,0.9531f,0.2644f,0.9665f,0.2386f,0.9827f,0.2362f,0.9706f,0.2558f,0.9479f,0.2423f,0.7736f,0.0553f,0.7595f,0.0549f,0.7559f,0.0544f,0.7596f,0.0549f,0.7736f,0.0553f,0.7721f,0.0268f,0.7644f,0.0276f,0.7723f,0.0268f,0.7938f,0.0298f,0.795f,0.0487f,0.9457f,0.2448f,0.9501f,0.2632f,0.7926f,0.0543f,0.7926f,0.0544f,0.7903f,0.0215f,0.7903f,0.0215f,0.9803f,0.2531f,0.9874f,0.236f,0.9479f,0.2423f,0.9532f,0.2644f,0.9832f,0.2324f,0.9795f,0.2325f,0.9656f,0.2346f,0.9721f,0.2624f,0.9795f,0.2602f,0.9719f,0.2625f,0.9502f,0.2632f,0.9457f,0.2447f,0.9471f,0.2389f,0.9471f,0.2388f,0.9551f,0.2707f,0.955f,0.2707f});
  }
}
protected class MFFloat841 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat842 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32843 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,0,-1,0,2,9,-1,6,10,4,-1,4,0,6,-1,7,8,3,-1,3,1,7,-1,7,1,5,-1,5,11,7,-1,12,13,14,-1,14,15,12,-1,34,35,32,-1,32,33,34,-1,17,20,21,-1,21,16,17,-1,29,30,31,-1,31,24,29,-1,17,18,19,-1,19,20,17,-1,24,25,28,-1,28,29,24,-1,9,2,13,-1,13,12,9,-1,16,21,22,-1,22,23,16,-1,3,8,15,-1,15,14,3,-1,28,25,26,-1,26,27,28,-1,2,0,17,-1,17,16,2,-1,0,4,18,-1,18,17,0,-1,4,5,19,-1,19,18,4,-1,5,1,20,-1,20,19,5,-1,1,3,21,-1,21,20,1,-1,3,14,22,-1,22,21,3,-1,14,13,23,-1,23,22,14,-1,13,2,16,-1,16,23,13,-1,6,9,25,-1,25,24,6,-1,9,12,26,-1,26,25,9,-1,12,15,27,-1,27,26,12,-1,15,8,28,-1,28,27,15,-1,8,7,29,-1,29,28,8,-1,7,11,30,-1,30,29,7,-1,11,10,31,-1,31,30,11,-1,10,6,24,-1,24,31,10,-1,4,10,33,-1,33,32,4,-1,10,11,34,-1,34,33,10,-1,11,5,35,-1,35,34,11,-1,5,4,32,-1,32,35,5,-1});
  }
}
protected class MFInt32844 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,1,4,5,-1,5,2,1,-1,38,39,40,-1,40,9,38,-1,38,9,41,-1,41,42,38,-1,12,13,14,-1,14,15,12,-1,16,43,44,-1,44,45,16,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,13,-1,13,12,0,-1,23,22,32,-1,32,33,23,-1,8,7,15,-1,15,14,8,-1,31,30,34,-1,34,35,31,-1,3,2,20,-1,20,23,3,-1,2,5,28,-1,28,20,2,-1,37,41,53,-1,53,52,37,-1,41,9,46,-1,46,53,41,-1,9,40,47,-1,47,46,9,-1,8,14,32,-1,32,22,8,-1,14,13,33,-1,33,32,14,-1,13,3,23,-1,23,33,13,-1,1,0,30,-1,30,27,1,-1,0,12,34,-1,34,30,0,-1,12,15,35,-1,35,34,12,-1,15,7,31,-1,31,35,15,-1,7,6,24,-1,24,31,7,-1,38,42,49,-1,49,48,38,-1,11,4,26,-1,26,25,11,-1,4,1,27,-1,27,26,4,-1,5,4,19,-1,19,18,5,-1,36,42,16,-1,16,45,36,-1,42,41,43,-1,43,16,42,-1,10,5,18,-1,18,17,10,-1});
  }
}
protected class MFVec3f845 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-30.16f,-237.8222f,3.7111f,21.8533f,-237.8222f,3.7111f,-26.3956f,-279.7778f,3.6667f,16.7422f,-279.8667f,3.6711f,-34.0356f,-186.8667f,5.4267f,26.5511f,-186.8444f,5.4133f,-33.0222f,-241.2889f,36.1244f,22.7333f,-241.2889f,36.1244f,16.8356f,-283.1556f,35.04f,-27.5067f,-283.1556f,35.04f,-35.68f,-189.3022f,35.8222f,28.4222f,-189.1956f,35.8178f,-23.68f,-291.1111f,33.0889f,-22.4667f,-289.0222f,5.8844f,12.6844f,-289.1111f,5.8978f,12.7644f,-291.1111f,33.0889f,-22.1289f,-278.8f,-0.2578f,-25.84f,-237.1111f,-1.7378f,-29.4756f,-185.8044f,0.8489f,21.6489f,-185.7822f,0.84f,17.56f,-236.9333f,-1.7289f,12.5022f,-278.8f,-0.2533f,9.7333f,-285.4667f,0.3244f,-19.4756f,-285.4222f,0.3111f,-28.4f,-241.7778f,42.1689f,-23.5644f,-281.2889f,39.1333f,-20.5244f,-287.1111f,37.7511f,9.6933f,-287.1111f,37.7511f,12.6578f,-281.2889f,39.1333f,18.2044f,-241.6f,42.1644f,24.5822f,-189.4444f,41.2667f,-30.7956f,-189.5333f,41.2711f,-28.4489f,-182.56f,8.6533f,-29.3644f,-183.9333f,32.0667f,23.2444f,-183.8356f,32.0667f,21.1289f,-182.5467f,8.6444f});
  }
}
protected class MFVec2f846 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7939f,0.1016f,0.7938f,0.0824f,0.7694f,0.0827f,0.766f,0.1014f,0.7924f,0.0508f,0.7734f,0.0512f,0.7938f,0.0824f,0.7939f,0.1016f,0.766f,0.1015f,0.965f,0.2069f,0.7734f,0.0512f,0.7924f,0.0507f,0.7909f,0.1057f,0.7677f,0.1056f,0.7677f,0.1057f,0.7909f,0.1057f,0.9517f,0.2441f,0.7765f,0.0488f,0.7765f,0.0488f,0.789f,0.0484f,0.7643f,0.0825f,0.7643f,0.0824f,0.7614f,0.1009f,0.7614f,0.1009f,0.7991f,0.0823f,0.7971f,0.0505f,0.7971f,0.0505f,0.7991f,0.0824f,0.7688f,0.0511f,0.7688f,0.0511f,0.7994f,0.1003f,0.7994f,0.1003f,0.7625f,0.1038f,0.7625f,0.1038f,0.7972f,0.1034f,0.7972f,0.1034f,0.9479f,0.2423f,0.9665f,0.2385f,0.941f,0.2114f,0.9376f,0.1925f,0.9651f,0.1878f,0.9665f,0.2386f,0.9479f,0.2423f,0.9639f,0.2415f,0.9639f,0.2415f,0.9517f,0.244f,0.9701f,0.2063f,0.9698f,0.1875f,0.9358f,0.2124f,0.9433f,0.2434f,0.9433f,0.2434f,0.9358f,0.2123f,0.9711f,0.2379f,0.9711f,0.2379f});
  }
}
protected class MFFloat847 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat848 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32849 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,23,22,-1,22,4,3,-1,5,32,31,-1,31,6,5,-1,4,22,44,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,43,45,-1,45,5,7,-1,4,44,43,-1,43,7,4,-1,45,32,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,40,23,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,42,-1,42,41,16,-1,3,16,41,-1,41,40,3,-1,42,6,31,-1,21,18,19,-1,19,20,21,-1,22,23,19,-1,19,18,22,-1,26,27,28,-1,25,26,28,-1,24,25,28,-1,24,28,29,-1,24,29,30,-1,31,32,21,-1,21,20,31,-1,33,34,35,-1,35,36,37,-1,33,35,37,-1,33,37,38,-1,33,38,39,-1,40,41,26,-1,26,25,40,-1,41,42,27,-1,27,26,41,-1,42,31,28,-1,28,27,42,-1,31,20,29,-1,29,28,31,-1,20,19,30,-1,30,29,20,-1,19,23,24,-1,24,30,19,-1,23,40,25,-1,25,24,23,-1,43,44,36,-1,36,35,43,-1,44,22,37,-1,37,36,44,-1,22,18,38,-1,38,37,22,-1,18,21,39,-1,39,38,18,-1,21,32,33,-1,33,39,21,-1,32,45,34,-1,34,33,32,-1,45,43,35,-1,35,34,45,-1});
  }
}
protected class MFInt32850 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1});
  }
}
protected class MFVec3f851 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {22.4578f,-241.8667f,11.8756f,-15.1378f,-237.1556f,11.72f,4.6756f,-243.1111f,6.52f,-18.6444f,-190.2889f,33.8311f,-18.6489f,-188.3289f,11.6267f,20.2978f,-188.3289f,11.6267f,20.2978f,-190.2889f,33.8311f,2.1378f,-192.9778f,6.0489f,19.1467f,-249.4667f,13.2978f,-8.0311f,-253.2889f,12.1244f,19.1467f,-249.0222f,31.0756f,-8.0311f,-252.7111f,32.5378f,4.72f,-254.7111f,12.1333f,4.72f,-254.1333f,32.9778f,22.4578f,-241.3778f,32.2f,4.6756f,-242.3556f,38.1778f,2.1378f,-196.88f,37.6933f,-15.1378f,-236.6667f,32.0444f,-15.1867f,-165.3244f,7.4622f,-15.1956f,-168.0178f,37.2489f,17.3867f,-168.0178f,37.2489f,17.5511f,-165.3244f,7.4622f,-21.2667f,-176.5867f,6.6667f,-22.3778f,-179.9422f,38.0444f,-21.4089f,-179.3778f,40.1156f,-17.6667f,-188.3511f,40.2889f,2.0978f,-194.6711f,39.7156f,19.1778f,-188.4178f,40.2933f,20.5467f,-179.3867f,40.12f,16.4711f,-167.9822f,40.7022f,-14.4178f,-167.9822f,40.7022f,21.9689f,-179.9422f,38.0444f,21.8756f,-176.6578f,6.6756f,19.7111f,-175.2578f,4.3689f,18.2711f,-185.7511f,4.0222f,2.0844f,-190.92f,5.16f,-16.8756f,-185.6222f,4.0089f,-20.3289f,-175.2756f,4.3689f,-13.8622f,-165.0444f,5.4178f,15.9244f,-165.0444f,5.4178f,-18.6444f,-190.8133f,38.5556f,2.1378f,-196.9156f,38.4178f,20.2978f,-190.8133f,38.5556f,2.2711f,-192.9067f,5.5511f,-18.1244f,-187.9644f,5.9956f,20.2978f,-187.9644f,5.9956f});
  }
}
protected class MFVec2f852 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7878f,0.1071f,0.7939f,0.1016f,0.766f,0.1014f,0.7709f,0.1068f,0.9594f,0.1833f,0.766f,0.1015f,0.7939f,0.1016f,0.9426f,0.186f,0.7648f,0.1066f,0.9545f,0.1568f,0.9398f,0.1599f,0.771f,0.1315f,0.7861f,0.131f,0.767f,0.1345f,0.7667f,0.1094f,0.7644f,0.1092f,0.7648f,0.1066f,0.7904f,0.1338f,0.786f,0.139f,0.7863f,0.1397f,0.9402f,0.1559f,0.9531f,0.1532f,0.7709f,0.1396f,0.7709f,0.1403f,0.794f,0.107f,0.7917f,0.1102f,0.794f,0.107f,0.7939f,0.1101f,0.7675f,0.0958f,0.7934f,0.0956f,0.7934f,0.0956f,0.7675f,0.0958f,0.7967f,0.1011f,0.7964f,0.1056f,0.7964f,0.1088f,0.7964f,0.1057f,0.7967f,0.1011f,0.7958f,0.0955f,0.7958f,0.0955f,0.7633f,0.1008f,0.7625f,0.1056f,0.7622f,0.1084f,0.7625f,0.1055f,0.7633f,0.1008f,0.765f,0.0957f,0.765f,0.0957f,0.9651f,0.1878f,0.9376f,0.1925f,0.9583f,0.1554f,0.963f,0.1801f,0.9654f,0.1799f,0.9654f,0.1826f,0.9354f,0.1602f,0.9385f,0.1536f,0.9536f,0.1504f,0.9383f,0.1837f,0.9366f,0.1872f,0.9361f,0.1842f});
  }
}
protected class MFFloat853 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat854 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32855 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
protected class MFInt32856 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
protected class MFVec3f857 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.28f,-240.6667f,7.3822f,18.44f,-239.4222f,31f,-13.4844f,-234.3556f,31.2133f,-17.4578f,-196.6133f,30.8489f,-17.4578f,-197.0444f,10.9289f,18.5378f,-187.7867f,10.3067f,-19.0578f,-183.0533f,10.1556f,18.5378f,-187.2933f,30.6311f,-19.0578f,-182.56f,30.4756f,10.3511f,-178.9867f,10.2978f,10.3511f,-178.5556f,30.2178f,-8.2044f,-179.0311f,30.2356f,-8.2044f,-179.4622f,10.3156f,0.7556f,-189.04f,4.9511f,0.7556f,-188.2711f,36.6133f,3.2978f,-240.1333f,36.0889f,-7.9422f,-250.2222f,30.9156f,2.9289f,-250.7556f,31.2133f,18.4267f,-239.7778f,11.8311f,15.3911f,-247.0222f,29.5911f,15.3822f,-247.2889f,13.76f,-13.4978f,-234.7556f,11.2978f,-7.9556f,-250.5333f,12.7378f,2.8756f,-252.2222f,12.7511f});
  }
}
protected class MFVec2f858 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9398f,0.1599f,0.7904f,0.1338f,0.7888f,0.1598f,0.9363f,0.1341f,0.7861f,0.131f,0.7859f,0.138f,0.9502f,0.1313f,0.9545f,0.1568f,0.7712f,0.1385f,0.7707f,0.1575f,0.7854f,0.1571f,0.771f,0.1315f,0.767f,0.1345f,0.7676f,0.1604f,0.786f,0.1292f,0.7713f,0.1297f,0.786f,0.129f,0.7713f,0.1294f,0.7847f,0.165f,0.7849f,0.1652f,0.9369f,0.1301f,0.9483f,0.1278f,0.7712f,0.1654f,0.7712f,0.1661f,0.9354f,0.1602f,0.9325f,0.1343f,0.9583f,0.1554f,0.9533f,0.1301f,0.9406f,0.1642f,0.9551f,0.1612f,0.9355f,0.1283f,0.9488f,0.1251f});
  }
}
protected class MFFloat859 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat860 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32861 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
protected class MFInt32862 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
protected class MFVec3f863 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-14.4489f,-194.9022f,29.8844f,-14.4622f,-195.2844f,9.9644f,-11.2311f,-211.6133f,29.2844f,-11.24f,-211.9511f,10.9956f,15.2978f,-210.1378f,30.0222f,3.1733f,-210.9689f,33.5333f,15.2844f,-210.5067f,10.1556f,3.1556f,-211.4667f,6.6222f,-6.4267f,-224.7911f,28.2089f,-6.4356f,-225.08f,12.5378f,15.3822f,-224.0178f,27.9778f,4.8178f,-225.2267f,31.4622f,15.3733f,-224.2933f,12.9689f,4.8f,-225.6356f,9.3867f,-7.8756f,-228.6667f,20.4578f,13.7644f,-228.6622f,20.4444f,4.8489f,-231.3244f,20.5378f,-7.6844f,-227.7956f,24.7644f,13.9422f,-227.7956f,16.7822f,4.28f,-229.8889f,26.24f,-7.6933f,-228.0089f,16.3467f,13.9511f,-227.6178f,24.2533f,4.2622f,-230.3156f,15.1467f,16.4133f,-188.1956f,29.2844f,-15.5244f,-183.5111f,9.5867f,-15.5111f,-183.1333f,29.5022f,-6.2622f,-179.3822f,28.6533f,-6.2756f,-179.7333f,10.2044f,9.6711f,-179.2711f,28.64f,16.4f,-188.56f,10.12f,9.6578f,-179.6222f,10.1867f,1.1822f,-188.8933f,34.3689f,1.1644f,-189.44f,5.6711f});
  }
}
protected class MFVec2f864 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7853f,0.163f,0.7888f,0.1598f,0.7854f,0.1571f,0.7707f,0.1575f,0.7676f,0.1604f,0.7706f,0.1634f,0.7714f,0.1739f,0.7841f,0.1736f,0.787f,0.1731f,0.9344f,0.121f,0.9363f,0.1341f,0.9479f,0.1182f,0.9502f,0.1313f,0.7684f,0.1736f,0.7774f,0.1846f,0.7801f,0.1842f,0.7824f,0.1828f,0.7844f,0.1829f,0.9351f,0.111f,0.9443f,0.1091f,0.9372f,0.109f,0.9418f,0.1081f,0.7705f,0.1833f,0.7725f,0.1831f,0.781f,0.1849f,0.7774f,0.1856f,0.7748f,0.1843f,0.774f,0.1852f,0.9395f,0.1081f,0.7849f,0.1552f,0.7712f,0.1555f,0.7849f,0.1549f,0.7712f,0.1553f,0.9325f,0.1343f,0.9533f,0.1301f,0.9319f,0.1209f,0.9502f,0.1172f,0.9329f,0.1108f,0.9464f,0.108f,0.9358f,0.1082f,0.9393f,0.1069f,0.9427f,0.1067f,0.9372f,0.1384f,0.9506f,0.1357f});
  }
}
protected class MFFloat865 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat866 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32867 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,9,0,-1,0,3,11,-1,5,2,1,-1,1,4,5,-1,3,0,2,-1,2,5,3,-1,9,13,8,-1,8,0,9,-1,2,7,6,-1,6,1,2,-1,6,14,10,-1,10,1,6,-1,1,10,12,-1,12,4,1,-1,0,8,7,-1,7,2,0,-1,25,26,27,-1,27,20,25,-1,16,17,18,-1,16,18,19,-1,15,16,19,-1,30,31,32,-1,29,30,32,-1,28,29,32,-1,11,3,16,-1,16,15,11,-1,3,5,17,-1,17,16,3,-1,5,4,18,-1,18,17,5,-1,4,12,19,-1,19,18,4,-1,24,21,22,-1,22,23,24,-1,20,21,24,-1,24,25,20,-1,9,11,21,-1,21,20,9,-1,11,15,22,-1,22,21,11,-1,15,19,23,-1,23,22,15,-1,19,12,24,-1,24,23,19,-1,12,10,25,-1,25,24,12,-1,10,14,26,-1,26,25,10,-1,14,13,27,-1,27,26,14,-1,13,9,20,-1,20,27,13,-1,14,6,29,-1,29,28,14,-1,6,7,30,-1,30,29,6,-1,7,8,31,-1,31,30,7,-1,8,13,32,-1,32,31,8,-1,13,14,28,-1,28,32,13,-1});
  }
}
protected class MFInt32868 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,33,34,6,-1,6,35,33,-1,3,2,5,-1,5,4,3,-1,1,8,9,-1,9,2,1,-1,34,37,11,-1,11,6,34,-1,11,12,38,-1,38,6,11,-1,6,38,39,-1,39,35,6,-1,2,9,10,-1,10,5,2,-1,40,16,41,-1,41,42,40,-1,20,21,22,-1,20,22,23,-1,19,20,23,-1,43,44,45,-1,25,43,45,-1,24,25,45,-1,0,3,20,-1,20,19,0,-1,3,4,21,-1,21,20,3,-1,4,7,22,-1,22,21,4,-1,7,14,23,-1,23,22,7,-1,29,30,31,-1,31,32,29,-1,18,30,29,-1,29,15,18,-1,1,0,30,-1,30,18,1,-1,0,19,31,-1,31,30,0,-1,19,23,32,-1,32,31,19,-1,23,14,29,-1,29,32,23,-1,14,13,15,-1,15,29,14,-1,38,12,16,-1,16,40,38,-1,12,36,41,-1,41,16,12,-1,8,1,18,-1,18,17,8,-1,12,11,25,-1,25,24,12,-1,11,37,43,-1,43,25,11,-1,10,9,27,-1,27,26,10,-1,9,8,28,-1,28,27,9,-1,36,12,24,-1,24,45,36,-1});
  }
}
protected class MFVec3f869 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-24.5422f,-238.0889f,3.4178f,19.9511f,-238.0889f,3.4222f,-2.1156f,-235.4222f,-3.2444f,-22.6133f,-278.9778f,1.8667f,17.2933f,-278.9778f,1.8667f,-1.24f,-277.8667f,-3.8978f,20.9822f,-187.2489f,10.7156f,-2.8622f,-185.3156f,4.6889f,-25.0489f,-187.3956f,10.76f,-29.08f,-242.0444f,29.1289f,22.9333f,-242.0444f,29.1289f,-25.3156f,-284.0444f,29.0844f,17.8222f,-284.0889f,29.0889f,-32.9556f,-191.12f,30.8444f,27.6311f,-191.0933f,30.8311f,-18.3689f,-292.4889f,25.9556f,-15.1156f,-287.4222f,6.5378f,-1.3022f,-286.5333f,2.4578f,11.2267f,-287.3778f,6.3422f,11.6044f,-292.5333f,25.9689f,-24.76f,-242.7556f,35.2267f,-21.08f,-284f,33.2489f,-15.9733f,-290.2667f,32.0533f,9.0756f,-290.3111f,32.0667f,13.6044f,-284.0889f,33.2222f,18.64f,-242.5778f,35.2356f,22.7289f,-191.7467f,35.48f,-28.3956f,-191.7689f,35.4889f,19.0933f,-185.1067f,26.8222f,15.5333f,-183.2044f,15.3467f,-2.88f,-181.4356f,10.5067f,-19.9956f,-183.2933f,15.1511f,-24.3067f,-185.1022f,26.8311f});
  }
}
protected class MFVec2f870 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.766f,0.1014f,0.7694f,0.0827f,0.748f,0.0813f,0.7455f,0.0995f,0.7415f,0.0989f,0.7435f,0.0798f,0.9864f,0.2045f,0.7455f,0.0995f,0.7734f,0.0512f,0.7571f,0.0508f,0.7525f,0.0502f,0.9827f,0.2362f,0.9665f,0.2386f,0.7694f,0.0827f,0.766f,0.1015f,0.774f,0.0829f,0.9619f,0.2395f,0.7782f,0.0512f,0.774f,0.083f,0.7619f,0.1052f,0.7474f,0.1039f,0.7446f,0.1034f,0.7473f,0.1038f,0.7619f,0.1052f,0.9712f,0.2404f,0.9799f,0.239f,0.7566f,0.0479f,0.7602f,0.0485f,0.7691f,0.0486f,0.771f,0.1015f,0.771f,0.1014f,0.768f,0.1042f,0.768f,0.1042f,0.9897f,0.1861f,0.991f,0.2053f,0.9856f,0.1862f,0.9665f,0.2385f,0.9874f,0.236f,0.965f,0.2069f,0.9651f,0.1878f,0.9604f,0.2075f,0.9619f,0.2395f,0.9604f,0.2074f,0.9836f,0.239f,0.98f,0.239f,0.9712f,0.2404f});
  }
}
protected class MFFloat871 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat872 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32873 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10,11,6,-1,6,8,10,-1,0,9,5,-1,5,3,0,-1,11,1,4,-1,4,6,11,-1,2,0,3,-1,3,7,2,-1,1,2,7,-1,7,4,1,-1,9,10,8,-1,8,5,9,-1,5,8,7,-1,7,3,5,-1,6,4,7,-1,7,8,6,-1,17,2,1,-1,1,13,17,-1,14,25,26,-1,26,15,14,-1,0,14,15,-1,15,9,0,-1,13,1,11,-1,11,12,13,-1,2,17,14,-1,14,0,2,-1,12,36,34,-1,9,15,16,-1,16,10,9,-1,16,12,11,-1,11,10,16,-1,16,15,37,-1,37,35,16,-1,12,16,35,-1,35,36,12,-1,37,15,26,-1,12,34,23,-1,23,13,12,-1,13,23,24,-1,24,17,13,-1,17,24,25,-1,25,14,17,-1,21,20,19,-1,22,21,19,-1,18,22,19,-1,23,19,20,-1,20,24,23,-1,24,20,21,-1,21,25,24,-1,25,21,22,-1,22,26,25,-1,27,33,32,-1,27,32,31,-1,31,30,29,-1,31,29,28,-1,27,31,28,-1,34,18,19,-1,19,23,34,-1,35,29,30,-1,30,36,35,-1,36,30,31,-1,31,34,36,-1,34,31,32,-1,32,18,34,-1,18,32,33,-1,33,22,18,-1,22,33,27,-1,27,26,22,-1,26,27,28,-1,28,37,26,-1,37,28,29,-1,29,35,37,-1});
  }
}
protected class MFInt32874 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,5,6,-1,6,7,4,-1,1,8,9,-1,9,2,1,-1,40,4,7,-1,7,41,40,-1,8,10,11,-1,11,9,8,-1,5,38,39,-1,39,6,5,-1,6,39,41,-1,41,7,6,-1,2,9,11,-1,11,3,2,-1,12,10,8,-1,8,13,12,-1,14,43,44,-1,44,17,14,-1,4,14,17,-1,17,5,4,-1,13,8,1,-1,1,18,13,-1,40,42,14,-1,14,4,40,-1,18,19,20,-1,5,17,45,-1,45,38,5,-1,21,18,1,-1,1,0,21,-1,45,17,46,-1,46,47,45,-1,18,21,23,-1,23,19,18,-1,46,17,44,-1,18,20,24,-1,24,13,18,-1,13,24,25,-1,25,12,13,-1,42,48,43,-1,43,14,42,-1,28,29,30,-1,27,28,30,-1,26,27,30,-1,24,30,29,-1,29,25,24,-1,25,29,28,-1,28,15,25,-1,15,28,27,-1,27,16,15,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,34,36,37,-1,31,34,37,-1,20,26,30,-1,30,24,20,-1,23,36,35,-1,35,19,23,-1,19,35,34,-1,34,20,19,-1,20,34,33,-1,33,26,20,-1,26,33,32,-1,32,27,26,-1,27,32,31,-1,31,16,27,-1,16,31,37,-1,37,22,16,-1,22,37,36,-1,36,23,22,-1});
  }
}
protected class MFVec3f875 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20.2533f,-221.8444f,11.8444f,-14.8311f,-217.9289f,11.1378f,5.0667f,-222.5422f,6.6711f,16.5956f,-227.8311f,13.0267f,-8.0444f,-230.7822f,11.72f,16.5778f,-228.1244f,28.2f,-8.0756f,-231.16f,29.3556f,5.0089f,-231.84f,11.6489f,5.0089f,-232.0844f,28.3067f,20.2356f,-222.2356f,29.7733f,4f,-223.3067f,35.4089f,-14.8533f,-218.1644f,29.9067f,-17.6489f,-195.32f,32.0578f,-17.2844f,-190.0311f,10.7422f,19.36f,-190.0311f,10.7422f,19.4756f,-195.32f,32.0578f,1.72f,-201.2f,35.9422f,2.1289f,-188.7333f,5.2178f,-14.8133f,-173.0844f,37.2889f,-11.8178f,-168.2889f,14.0489f,2.9956f,-167.4622f,9.1467f,17.0222f,-168.3067f,14.3022f,17.1778f,-173.1378f,37.5422f,-19.2444f,-179.9111f,10.3022f,2.1289f,-178.8089f,4.5378f,20.6622f,-179.9111f,10.3022f,21.1911f,-185.0444f,37.5244f,19.7733f,-184.0578f,39.7556f,18.5067f,-194.7156f,38.7911f,1.2311f,-199.4444f,37.2f,-16.4178f,-194.5911f,38.8533f,-19.8667f,-183.9511f,39.48f,-13.7022f,-173.3822f,39.0133f,15.7689f,-173.4311f,39.2489f,-21.9467f,-184.9778f,37.5156f,1.5867f,-201.2933f,36.4f,-18.8044f,-196.3511f,36.84f,19.6133f,-196.3511f,36.84f});
  }
}
protected class MFVec2f876 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7578f,0.1276f,0.7543f,0.1247f,0.753f,0.131f,0.7531f,0.1316f,0.9854f,0.1598f,0.9725f,0.1615f,0.9734f,0.1584f,0.9844f,0.1569f,0.7413f,0.123f,0.7403f,0.1293f,0.7378f,0.1249f,0.7401f,0.1299f,0.7405f,0.104f,0.7443f,0.1047f,0.9859f,0.1809f,0.7455f,0.0995f,0.766f,0.1015f,0.9713f,0.1822f,0.7589f,0.1059f,0.7648f,0.1066f,0.766f,0.1014f,0.7622f,0.1091f,0.7648f,0.1066f,0.7644f,0.1092f,0.7455f,0.0995f,0.7415f,0.0989f,0.7664f,0.0954f,0.7667f,0.0954f,0.7485f,0.0932f,0.7449f,0.0928f,0.7484f,0.0932f,0.7683f,0.1016f,0.7686f,0.0957f,0.7683f,0.0956f,0.7679f,0.1015f,0.7671f,0.1055f,0.7666f,0.1084f,0.7674f,0.1056f,0.9687f,0.1615f,0.9723f,0.1564f,0.9888f,0.1589f,0.9852f,0.1547f,0.9898f,0.1809f,0.9856f,0.1862f,0.9651f,0.1878f,0.9675f,0.1796f,0.9654f,0.1826f,0.9654f,0.1799f,0.9897f,0.1861f});
  }
}
protected class MFFloat877 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat878 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32879 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
protected class MFInt32880 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
protected class MFVec3f881 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.9156f,-225.4311f,7.7156f,17.6889f,-223.8133f,30.0044f,-13.0533f,-220.3822f,30.2222f,-16.8756f,-195.2489f,29.7156f,-16.84f,-194.8622f,11.7867f,16.9556f,-187.9156f,12.04f,-18.1333f,-184f,11.3244f,16.9378f,-188.3067f,29.9689f,-18.1511f,-184.2356f,30.0978f,9.4667f,-181.2311f,11.44f,9.4489f,-181.4667f,30.2089f,-7.1022f,-182.1333f,30.1956f,-7.0844f,-181.9022f,11.4267f,1.7644f,-188.6133f,6.8667f,0.7022f,-189.3822f,35.6089f,2.9156f,-224.5644f,34.9511f,-8.9244f,-232.8356f,29.8978f,-2.5733f,-233.6889f,30.1911f,17.6889f,-224.3911f,12.0444f,15.3244f,-229.8133f,28.6222f,14.4f,-230.2044f,14.0978f,-13.1111f,-220.9822f,11.5378f,-8.9733f,-233.3333f,13.0933f,-2.7022f,-234f,13.1067f});
  }
}
protected class MFVec2f882 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9725f,0.1615f,0.7578f,0.1276f,0.7541f,0.1444f,0.9727f,0.1441f,0.7543f,0.1247f,0.7533f,0.1302f,0.9851f,0.1424f,0.9854f,0.1598f,0.7404f,0.1285f,0.7384f,0.1404f,0.7513f,0.1418f,0.7413f,0.123f,0.7378f,0.1249f,0.7355f,0.1424f,0.7545f,0.1231f,0.7416f,0.1216f,0.7546f,0.1229f,0.7417f,0.1214f,0.7496f,0.1479f,0.7498f,0.1481f,0.9738f,0.1409f,0.9839f,0.1396f,0.738f,0.1467f,0.7381f,0.1469f,0.9687f,0.1616f,0.9694f,0.1441f,0.9888f,0.1589f,0.988f,0.1416f,0.9725f,0.165f,0.9854f,0.1633f,0.9728f,0.1395f,0.9846f,0.1375f});
  }
}
protected class MFFloat883 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat884 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32885 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
protected class MFInt32886 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
protected class MFVec3f887 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-14.4311f,-192.8f,30.1956f,-14.48f,-193.3511f,11.6933f,-13.1289f,-209.7644f,29.8f,-13.2356f,-210.2889f,12.4578f,15.4444f,-210.4756f,30.5022f,1.5511f,-210.2089f,33.8267f,15.3289f,-211.0444f,11.6622f,1.3956f,-210.9867f,8.3111f,-10.8356f,-222.8311f,28.9956f,-10.9511f,-223.2933f,13.8044f,15.8089f,-224.2756f,28.7778f,2.7333f,-224.1333f,32.1511f,15.6933f,-224.7156f,14.2311f,2.5644f,-224.7778f,10.7511f,-11.8533f,-225.8044f,21.4756f,12.9689f,-227.8267f,21.4622f,1.8267f,-229.0178f,21.5467f,-11.4578f,-225.0844f,25.6489f,13.32f,-227.2311f,17.9156f,1.3156f,-227.7644f,27.08f,-11.5333f,-225.3778f,17.4933f,13.3822f,-226.9822f,25.1556f,1.1911f,-228.2622f,16.3244f,15.8889f,-187.0089f,29.6267f,-14.9067f,-184.1689f,11.1556f,-14.8489f,-183.5733f,29.8444f,-5.6178f,-180.5422f,29.0267f,-5.6178f,-181.0978f,11.7644f,9.8489f,-180.1689f,29.0133f,15.8889f,-187.5867f,11.6667f,9.8489f,-180.7244f,11.7511f,1.0444f,-187.7511f,34.5689f,1.0444f,-188.6178f,7.3378f});
  }
}
protected class MFVec2f888 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7505f,0.1465f,0.7541f,0.1444f,0.7513f,0.1418f,0.7384f,0.1404f,0.7355f,0.1424f,0.7377f,0.1451f,0.7372f,0.1554f,0.7483f,0.1563f,0.7507f,0.1564f,0.9726f,0.1318f,0.9727f,0.1441f,0.9847f,0.1302f,0.9851f,0.1424f,0.7347f,0.1548f,0.7409f,0.1641f,0.7434f,0.1641f,0.7455f,0.1632f,0.7469f,0.164f,0.9746f,0.124f,0.9828f,0.1229f,0.9766f,0.1225f,0.9807f,0.1219f,0.7351f,0.1625f,0.7369f,0.1626f,0.7443f,0.165f,0.7408f,0.1649f,0.7387f,0.1637f,0.7379f,0.1643f,0.9788f,0.1219f,0.7512f,0.1402f,0.7392f,0.1389f,0.7512f,0.14f,0.7393f,0.1388f,0.9694f,0.1441f,0.988f,0.1416f,0.9705f,0.1317f,0.9868f,0.1295f,0.9727f,0.1237f,0.9848f,0.1221f,0.9756f,0.1218f,0.9787f,0.1209f,0.9817f,0.1209f,0.973f,0.1475f,0.9849f,0.146f});
  }
}
}
