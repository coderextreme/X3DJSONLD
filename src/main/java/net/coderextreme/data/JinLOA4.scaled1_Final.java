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
public class JinLOA4$scaled1_Final implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new JinLOA4$scaled1_Final().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/JinLOA4.scaled1_Final.new.java.x3d");
    model.toFileJSON("../data/JinLOA4.scaled1_Final.new.java.x3dj");
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
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("JinLOA4.x3d")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Jin Hoon Lee and Min Joo Lee")))
        .addMeta(new meta().setName(new SFString("translator")).setContent(new SFString("Chul Hee Jung and Myeong Won Lee")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("31 March 2011")))
        .addMeta(new meta().setName(new SFString("translated")).setContent(new SFString("1 November 2014")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("27 January 2023")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Articulated 3D game character designed with a general graphics tool")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("KoreanCharacter00ReadMe.txt")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("KoreanCharacterHumanMotion_Infotech2014_140706.pdf")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("KoreanCharactersIllustrated.pdf")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA4.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Suwon HAnim Converter")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Gnu Image Manipulation Program, http://www.gimp.org")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("license.html"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle(new SFString("JinLOA4.x3d")))
        .addChild(new NavigationInfo().setSpeed(1.5f ))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f ,1f ,0f }).setDescription(new SFString("JinLOA4")).setPosition(new float[] {0f ,1f ,3f }))
        .addChild(new HAnimHumanoid().setName(new SFString("JinLOA4")).setDEF(new SFString("hanim_JinLOA4")).setLoa(4).setVersion(new SFString("2.0"))
          .setMetadata(new MetadataSet().setName(new SFString("HAnimHumanoid.info")).setReference(new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"))
            .setMetadata(new MetadataString().setName(new SFString("authorName")).setValue(new MFString0().getArray()))
            .setMetadata(new MetadataString().setName(new SFString("authorEmail")).setValue(new MFString1().getArray()))
            .setMetadata(new MetadataString().setName(new SFString("creationDate")).setValue(new MFString2().getArray()))
            .setMetadata(new MetadataString().setName(new SFString("gender")).setValue(new MFString3().getArray()))
            .addValue(new MetadataFloat().setName(new SFString("height")).setValue(new MFFloat4().getArray()))
            .setMetadata(new MetadataString().setName(new SFString("humanoidVersion")).setValue(new MFString5().getArray())))
          .addSkeleton(new HAnimJoint("hanim_JinLOA4").setName(new SFString("humanoid_root")).setDEF(new SFString("hanim_humanoid_root")).setCenter(new float[] {0f ,0.825975f ,-0.015921f }).setUlimit(new MFFloat6().getArray()).setLlimit(new MFFloat7().getArray())
            .addChild(new HAnimSegment("hanim_humanoid_root").setName(new SFString("sacrum")).setDEF(new SFString("hanim_sacrum"))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                  .setTexture(new ImageTexture().setDEF(new SFString("JinLOA4TextureAtlas")).setUrl(new MFString8().getArray())))
                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt329().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3210().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray()))
                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f12().getArray())))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName(new SFString("sacroiliac")).setDEF(new SFString("hanim_sacroiliac")).setCenter(new float[] {0f ,0.707175f ,-0.015921f }).setUlimit(new MFFloat13().getArray()).setLlimit(new MFFloat14().getArray())
              .addChild(new HAnimSegment("hanim_sacroiliac").setName(new SFString("pelvis")).setDEF(new SFString("hanim_pelvis"))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3215().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3216().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f18().getArray())))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName(new SFString("l_hip")).setDEF(new SFString("hanim_l_hip")).setCenter(new float[] {0.094657496f ,0.8266501f ,-0.018348752f }).setUlimit(new MFFloat19().getArray()).setLlimit(new MFFloat20().getArray())
                .addChild(new HAnimSegment("hanim_l_hip").setName(new SFString("l_thigh")).setDEF(new SFString("hanim_l_thigh"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3221().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3222().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f23().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f24().getArray())))))
                .addChild(new HAnimJoint("hanim_l_hip").setName(new SFString("l_knee")).setDEF(new SFString("hanim_l_knee")).setCenter(new float[] {0.09261001f ,0.408825f ,-0.01943775f }).setUlimit(new MFFloat25().getArray()).setLlimit(new MFFloat26().getArray())
                  .addChild(new HAnimSegment("hanim_l_knee").setName(new SFString("l_calf")).setDEF(new SFString("hanim_l_calf"))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3227().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3228().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f29().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f30().getArray())))))
                  .addChild(new HAnimJoint("hanim_l_knee").setName(new SFString("l_talocrural")).setDEF(new SFString("hanim_l_talocrural")).setCenter(new float[] {0.08883f ,0.09544501f ,-0.010451251f }).setUlimit(new MFFloat31().getArray()).setLlimit(new MFFloat32().getArray())
                    .addChild(new HAnimSegment("hanim_l_talocrural").setName(new SFString("l_talus")).setDEF(new SFString("hanim_l_talus"))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                          .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3233().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3234().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f35().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f36().getArray())))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName(new SFString("l_talocalcaneonavicular")).setDEF(new SFString("hanim_l_talocalcaneonavicular")).setCenter(new float[] {0.07830001f ,0.036900003f ,0.0048645f }).setUlimit(new MFFloat37().getArray()).setLlimit(new MFFloat38().getArray())
                      .addChild(new HAnimSegment("hanim_l_talocalcaneonavicular").setName(new SFString("l_navicular")).setDEF(new SFString("hanim_l_navicular"))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                            .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3239().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3240().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f42().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName(new SFString("l_cuneonavicular_1")).setDEF(new SFString("hanim_l_cuneonavicular_1")).setCenter(new float[] {0.067365f ,0.032107502f ,0.018391501f }).setUlimit(new MFFloat43().getArray()).setLlimit(new MFFloat44().getArray())
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_1").setName(new SFString("l_cuneiform_1")).setDEF(new SFString("hanim_l_cuneiform_1"))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                              .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3245().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3246().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f47().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f48().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_1").setName(new SFString("l_tarsometatarsal_1")).setDEF(new SFString("hanim_l_tarsometatarsal_1")).setCenter(new float[] {0.06462f ,0.023242502f ,0.04419f }).setUlimit(new MFFloat49().getArray()).setLlimit(new MFFloat50().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_1").setName(new SFString("l_metatarsal_1")).setDEF(new SFString("hanim_l_metatarsal_1"))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3251().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3252().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f54().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_1").setName(new SFString("l_metatarsophalangeal_1")).setDEF(new SFString("hanim_l_metatarsophalangeal_1")).setCenter(new float[] {0.0621225f ,0.014424751f ,0.0936225f }).setUlimit(new MFFloat55().getArray()).setLlimit(new MFFloat56().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_1").setName(new SFString("l_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_1"))
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3257().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3258().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f60().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_1").setName(new SFString("l_tarsal_distal_interphalangeal_1")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_1")).setCenter(new float[] {0.0621225f ,0.0121365f ,0.1153125f }).setUlimit(new MFFloat61().getArray()).setLlimit(new MFFloat62().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_1").setName(new SFString("l_tarsal_distal_phalanx_1")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_1"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3263().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3264().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f65().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f66().getArray())))))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName(new SFString("l_cuneonavicular_2")).setDEF(new SFString("hanim_l_cuneonavicular_2")).setCenter(new float[] {0.0814275f ,0.033525f ,0.02142675f }).setUlimit(new MFFloat67().getArray()).setLlimit(new MFFloat68().getArray())
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_2").setName(new SFString("l_cuneiform_2")).setDEF(new SFString("hanim_l_cuneiform_2"))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                              .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3269().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3270().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f72().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_2").setName(new SFString("l_tarsometatarsal_2")).setDEF(new SFString("hanim_l_tarsometatarsal_2")).setCenter(new float[] {0.08019f ,0.0261f ,0.041062504f }).setUlimit(new MFFloat73().getArray()).setLlimit(new MFFloat74().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_2").setName(new SFString("l_metatarsal_2")).setDEF(new SFString("hanim_l_metatarsal_2"))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3275().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3276().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f78().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setName(new SFString("l_metatarsophalangeal_2")).setDEF(new SFString("hanim_l_metatarsophalangeal_2")).setCenter(new float[] {0.08253f ,0.014976f ,0.097830005f }).setUlimit(new MFFloat79().getArray()).setLlimit(new MFFloat80().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setName(new SFString("l_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_2"))
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3281().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3282().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f83().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f84().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName(new SFString("l_tarsal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_2")).setCenter(new float[] {0.0843075f ,0.012647251f ,0.1140075f }).setUlimit(new MFFloat85().getArray()).setLlimit(new MFFloat86().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_2").setName(new SFString("l_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_2"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3287().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3288().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f89().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f90().getArray())))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_2").setName(new SFString("l_tarsal_distal_interphalangeal_2")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_2")).setCenter(new float[] {0.0843075f ,0.00982575f ,0.123435006f }).setUlimit(new MFFloat91().getArray()).setLlimit(new MFFloat92().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_2").setName(new SFString("l_tarsal_distal_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_2"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3293().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3294().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f95().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f96().getArray()))))))))))
                      .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName(new SFString("l_cuneonavicular_3")).setDEF(new SFString("hanim_l_cuneonavicular_3")).setCenter(new float[] {0.092970006f ,0.03339f ,0.019818f }).setUlimit(new MFFloat97().getArray()).setLlimit(new MFFloat98().getArray())
                        .addChild(new HAnimSegment("hanim_l_cuneonavicular_3").setName(new SFString("l_cuneiform_3")).setDEF(new SFString("hanim_l_cuneiform_3"))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                              .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3299().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32100().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f101().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f102().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_cuneonavicular_3").setName(new SFString("l_tarsometatarsal_3")).setDEF(new SFString("hanim_l_tarsometatarsal_3")).setCenter(new float[] {0.09459f ,0.0261f ,0.039397504f }).setUlimit(new MFFloat103().getArray()).setLlimit(new MFFloat104().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_3").setName(new SFString("l_metatarsal_3")).setDEF(new SFString("hanim_l_metatarsal_3"))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32105().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32106().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f107().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f108().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_3").setName(new SFString("l_metatarsophalangeal_3")).setDEF(new SFString("hanim_l_metatarsophalangeal_3")).setCenter(new float[] {0.096480004f ,0.015057f ,0.09542251f }).setUlimit(new MFFloat109().getArray()).setLlimit(new MFFloat110().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_3").setName(new SFString("l_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_3"))
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32111().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32112().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f113().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f114().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_3").setName(new SFString("l_tarsal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_3")).setCenter(new float[] {0.098865f ,0.011922751f ,0.110475f }).setUlimit(new MFFloat115().getArray()).setLlimit(new MFFloat116().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_3").setName(new SFString("l_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_3"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32117().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32118().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f119().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f120().getArray())))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_3").setName(new SFString("l_tarsal_distal_interphalangeal_3")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_3")).setCenter(new float[] {0.1004175f ,0.00982575f ,0.11970001f }).setUlimit(new MFFloat121().getArray()).setLlimit(new MFFloat122().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_3").setName(new SFString("l_tarsal_distal_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_3"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32123().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32124().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f125().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f126().getArray())))))))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName(new SFString("l_calcaneocuboid")).setDEF(new SFString("hanim_l_calcaneocuboid")).setCenter(new float[] {0.0891f ,0.0579825f ,-0.025965001f }).setUlimit(new MFFloat127().getArray()).setLlimit(new MFFloat128().getArray())
                      .addChild(new HAnimSegment("hanim_l_calcaneocuboid").setName(new SFString("l_calcaneus")).setDEF(new SFString("hanim_l_calcaneus"))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                            .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32129().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32130().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f131().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f132().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_calcaneocuboid").setName(new SFString("l_transversetarsal")).setDEF(new SFString("hanim_l_transversetarsal")).setCenter(new float[] {0.1106325f ,0.03528f ,0.002089125f }).setUlimit(new MFFloat133().getArray()).setLlimit(new MFFloat134().getArray())
                        .addChild(new HAnimSegment("hanim_l_transversetarsal").setName(new SFString("l_cuboid")).setDEF(new SFString("hanim_l_cuboid"))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                              .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32135().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32136().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f137().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f138().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName(new SFString("l_tarsometatarsal_4")).setDEF(new SFString("hanim_l_tarsometatarsal_4")).setCenter(new float[] {0.1064925f ,0.0245475f ,0.03843f }).setUlimit(new MFFloat139().getArray()).setLlimit(new MFFloat140().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_4").setName(new SFString("l_metatarsal_4")).setDEF(new SFString("hanim_l_metatarsal_4"))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32141().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32142().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f143().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f144().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_4").setName(new SFString("l_metatarsophalangeal_4")).setDEF(new SFString("hanim_l_metatarsophalangeal_4")).setCenter(new float[] {0.109867506f ,0.01435275f ,0.091170006f }).setUlimit(new MFFloat145().getArray()).setLlimit(new MFFloat146().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_4").setName(new SFString("l_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_4"))
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32147().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32148().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f149().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f150().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_4").setName(new SFString("l_tarsal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_4")).setCenter(new float[] {0.114165f ,0.0122445f ,0.1063125f }).setUlimit(new MFFloat151().getArray()).setLlimit(new MFFloat152().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_4").setName(new SFString("l_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_4"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32153().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32154().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f155().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f156().getArray())))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_4").setName(new SFString("l_tarsal_distal_interphalangeal_4")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_4")).setCenter(new float[] {0.1156725f ,0.009369f ,0.11369251f }).setUlimit(new MFFloat157().getArray()).setLlimit(new MFFloat158().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_4").setName(new SFString("l_tarsal_distal_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_4"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32159().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32160().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f161().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f162().getArray())))))))))
                        .addChild(new HAnimJoint("hanim_l_transversetarsal").setName(new SFString("l_tarsometatarsal_5")).setDEF(new SFString("hanim_l_tarsometatarsal_5")).setCenter(new float[] {0.120825f ,0.020945251f ,0.03474f }).setUlimit(new MFFloat163().getArray()).setLlimit(new MFFloat164().getArray())
                          .addChild(new HAnimSegment("hanim_l_tarsometatarsal_5").setName(new SFString("l_metatarsal_5")).setDEF(new SFString("hanim_l_metatarsal_5"))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32165().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32166().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f167().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f168().getArray())))))
                          .addChild(new HAnimJoint("hanim_l_tarsometatarsal_5").setName(new SFString("l_metatarsophalangeal_5")).setDEF(new SFString("hanim_l_metatarsophalangeal_5")).setCenter(new float[] {0.124065004f ,0.013671f ,0.0865575f }).setUlimit(new MFFloat169().getArray()).setLlimit(new MFFloat170().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_5").setName(new SFString("l_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_5"))
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32171().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32172().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f173().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f174().getArray())))))
                            .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_5").setName(new SFString("l_tarsal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_l_tarsal_proximal_interphalangeal_5")).setCenter(new float[] {0.1263825f ,0.01085625f ,0.09414f }).setUlimit(new MFFloat175().getArray()).setLlimit(new MFFloat176().getArray())
                              .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_5").setName(new SFString("l_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_5"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32177().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32178().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f179().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f180().getArray())))))
                              .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_5").setName(new SFString("l_tarsal_distal_interphalangeal_5")).setDEF(new SFString("hanim_l_tarsal_distal_interphalangeal_5")).setCenter(new float[] {0.1272825f ,0.008563501f ,0.10188f }).setUlimit(new MFFloat181().getArray()).setLlimit(new MFFloat182().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_5").setName(new SFString("l_tarsal_distal_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_5"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32183().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32184().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f185().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f186().getArray()))))))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName(new SFString("r_hip")).setDEF(new SFString("hanim_r_hip")).setCenter(new float[] {-0.094657496f ,0.8266501f ,-0.018348752f }).setUlimit(new MFFloat187().getArray()).setLlimit(new MFFloat188().getArray())
                .addChild(new HAnimSegment("hanim_r_hip").setName(new SFString("r_thigh")).setDEF(new SFString("hanim_r_thigh"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32189().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32190().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f191().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f192().getArray())))))
                .addChild(new HAnimJoint("hanim_r_hip").setName(new SFString("r_knee")).setDEF(new SFString("hanim_r_knee")).setCenter(new float[] {-0.09261001f ,0.408825f ,-0.01943775f }).setUlimit(new MFFloat193().getArray()).setLlimit(new MFFloat194().getArray())
                  .addChild(new HAnimSegment("hanim_r_knee").setName(new SFString("r_calf")).setDEF(new SFString("hanim_r_calf"))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32195().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32196().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f197().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f198().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_knee").setName(new SFString("r_talocrural")).setDEF(new SFString("hanim_r_talocrural")).setCenter(new float[] {-0.088447504f ,0.09544501f ,-0.010451251f }).setUlimit(new MFFloat199().getArray()).setLlimit(new MFFloat200().getArray())
                    .addChild(new HAnimSegment("hanim_r_talocrural").setName(new SFString("r_talus")).setDEF(new SFString("hanim_r_talus"))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                          .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32201().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32202().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f203().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f204().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName(new SFString("r_talocalcaneonavicular")).setDEF(new SFString("hanim_r_talocalcaneonavicular")).setCenter(new float[] {-0.07794f ,0.036900003f ,0.0048645f }).setUlimit(new MFFloat205().getArray()).setLlimit(new MFFloat206().getArray())
                      .addChild(new HAnimSegment("hanim_r_talocalcaneonavicular").setName(new SFString("r_navicular")).setDEF(new SFString("hanim_r_navicular"))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                            .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32207().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32208().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f209().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f210().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName(new SFString("r_cuneonavicular_1")).setDEF(new SFString("hanim_r_cuneonavicular_1")).setCenter(new float[] {-0.0669825f ,0.032107502f ,0.018391501f }).setUlimit(new MFFloat211().getArray()).setLlimit(new MFFloat212().getArray())
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_1").setName(new SFString("r_cuneiform_1")).setDEF(new SFString("hanim_r_cuneiform_1"))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                              .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32213().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32214().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f215().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f216().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setName(new SFString("r_tarsometatarsal_1")).setDEF(new SFString("hanim_r_tarsometatarsal_1")).setCenter(new float[] {-0.06426f ,0.023242502f ,0.04419f }).setUlimit(new MFFloat217().getArray()).setLlimit(new MFFloat218().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_1").setName(new SFString("r_metatarsal_1")).setDEF(new SFString("hanim_r_metatarsal_1"))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32219().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32220().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f221().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f222().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setName(new SFString("r_metatarsophalangeal_1")).setDEF(new SFString("hanim_r_metatarsophalangeal_1")).setCenter(new float[] {-0.0617625f ,0.014424751f ,0.0936225f }).setUlimit(new MFFloat223().getArray()).setLlimit(new MFFloat224().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_1").setName(new SFString("r_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_1"))
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32225().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32226().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f227().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f228().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setName(new SFString("r_tarsal_distal_interphalangeal_1")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_1")).setCenter(new float[] {-0.06174f ,0.0121365f ,0.1153125f }).setUlimit(new MFFloat229().getArray()).setLlimit(new MFFloat230().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_1").setName(new SFString("r_tarsal_distal_phalanx_1")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_1"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32231().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32232().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f233().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f234().getArray())))))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName(new SFString("r_cuneonavicular_2")).setDEF(new SFString("hanim_r_cuneonavicular_2")).setCenter(new float[] {-0.081045f ,0.033525f ,0.02142675f }).setUlimit(new MFFloat235().getArray()).setLlimit(new MFFloat236().getArray())
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_2").setName(new SFString("r_cuneiform_2")).setDEF(new SFString("hanim_r_cuneiform_2"))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                              .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32237().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32238().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f239().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f240().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setName(new SFString("r_tarsometatarsal_2")).setDEF(new SFString("hanim_r_tarsometatarsal_2")).setCenter(new float[] {-0.079830006f ,0.0261f ,0.041062504f }).setUlimit(new MFFloat241().getArray()).setLlimit(new MFFloat242().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_2").setName(new SFString("r_metatarsal_2")).setDEF(new SFString("hanim_r_metatarsal_2"))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32243().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32244().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f245().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f246().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName(new SFString("r_metatarsophalangeal_2")).setDEF(new SFString("hanim_r_metatarsophalangeal_2")).setCenter(new float[] {-0.0821475f ,0.014976f ,0.097830005f }).setUlimit(new MFFloat247().getArray()).setLlimit(new MFFloat248().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setName(new SFString("r_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_2"))
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32249().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32250().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f251().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f252().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName(new SFString("r_tarsal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_2")).setCenter(new float[] {-0.083925f ,0.012647251f ,0.1140075f }).setUlimit(new MFFloat253().getArray()).setLlimit(new MFFloat254().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_2").setName(new SFString("r_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_2"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32255().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32256().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f257().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f258().getArray())))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setName(new SFString("r_tarsal_distal_interphalangeal_2")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_2")).setCenter(new float[] {-0.083925f ,0.00982575f ,0.123435006f }).setUlimit(new MFFloat259().getArray()).setLlimit(new MFFloat260().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_2").setName(new SFString("r_tarsal_distal_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_2"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32261().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32262().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f263().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f264().getArray()))))))))))
                      .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName(new SFString("r_cuneonavicular_3")).setDEF(new SFString("hanim_r_cuneonavicular_3")).setCenter(new float[] {-0.09261001f ,0.03339f ,0.019818f }).setUlimit(new MFFloat265().getArray()).setLlimit(new MFFloat266().getArray())
                        .addChild(new HAnimSegment("hanim_r_cuneonavicular_3").setName(new SFString("r_cuneiform_3")).setDEF(new SFString("hanim_r_cuneiform_3"))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                              .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32267().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32268().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f269().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f270().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setName(new SFString("r_tarsometatarsal_3")).setDEF(new SFString("hanim_r_tarsometatarsal_3")).setCenter(new float[] {-0.09423001f ,0.0261f ,0.039397504f }).setUlimit(new MFFloat271().getArray()).setLlimit(new MFFloat272().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_3").setName(new SFString("r_metatarsal_3")).setDEF(new SFString("hanim_r_metatarsal_3"))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32273().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32274().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f275().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f276().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setName(new SFString("r_metatarsophalangeal_3")).setDEF(new SFString("hanim_r_metatarsophalangeal_3")).setCenter(new float[] {-0.0960975f ,0.015057f ,0.09542251f }).setUlimit(new MFFloat277().getArray()).setLlimit(new MFFloat278().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_3").setName(new SFString("r_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_3"))
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32279().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32280().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f281().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f282().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setName(new SFString("r_tarsal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_3")).setCenter(new float[] {-0.098505f ,0.011922751f ,0.110475f }).setUlimit(new MFFloat283().getArray()).setLlimit(new MFFloat284().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_3").setName(new SFString("r_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_3"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32285().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32286().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f287().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f288().getArray())))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setName(new SFString("r_tarsal_distal_interphalangeal_3")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_3")).setCenter(new float[] {-0.100035004f ,0.00982575f ,0.11970001f }).setUlimit(new MFFloat289().getArray()).setLlimit(new MFFloat290().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_3").setName(new SFString("r_tarsal_distal_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_3"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32291().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32292().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f293().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f294().getArray())))))))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName(new SFString("r_calcaneocuboid")).setDEF(new SFString("hanim_r_calcaneocuboid")).setCenter(new float[] {-0.088717505f ,0.0579825f ,-0.025965001f }).setUlimit(new MFFloat295().getArray()).setLlimit(new MFFloat296().getArray())
                      .addChild(new HAnimSegment("hanim_r_calcaneocuboid").setName(new SFString("r_calcaneus")).setDEF(new SFString("hanim_r_calcaneus"))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                            .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32297().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32298().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f299().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f300().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setName(new SFString("r_transversetarsal")).setDEF(new SFString("hanim_r_transversetarsal")).setCenter(new float[] {-0.110272504f ,0.03528f ,0.002089125f }).setUlimit(new MFFloat301().getArray()).setLlimit(new MFFloat302().getArray())
                        .addChild(new HAnimSegment("hanim_r_transversetarsal").setName(new SFString("r_cuboid")).setDEF(new SFString("hanim_r_cuboid"))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                              .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32303().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32304().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f305().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f306().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName(new SFString("r_tarsometatarsal_4")).setDEF(new SFString("hanim_r_tarsometatarsal_4")).setCenter(new float[] {-0.10613251f ,0.0245475f ,0.03843f }).setUlimit(new MFFloat307().getArray()).setLlimit(new MFFloat308().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_4").setName(new SFString("r_metatarsal_4")).setDEF(new SFString("hanim_r_metatarsal_4"))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32309().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32310().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f311().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f312().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setName(new SFString("r_metatarsophalangeal_4")).setDEF(new SFString("hanim_r_metatarsophalangeal_4")).setCenter(new float[] {-0.10950751f ,0.01435275f ,0.091170006f }).setUlimit(new MFFloat313().getArray()).setLlimit(new MFFloat314().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_4").setName(new SFString("r_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_4"))
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32315().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32316().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f317().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f318().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setName(new SFString("r_tarsal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_4")).setCenter(new float[] {-0.11378251f ,0.0122445f ,0.1063125f }).setUlimit(new MFFloat319().getArray()).setLlimit(new MFFloat320().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_4").setName(new SFString("r_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_4"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32321().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32322().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f323().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f324().getArray())))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setName(new SFString("r_tarsal_distal_interphalangeal_4")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_4")).setCenter(new float[] {-0.1153125f ,0.009369f ,0.11369251f }).setUlimit(new MFFloat325().getArray()).setLlimit(new MFFloat326().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_4").setName(new SFString("r_tarsal_distal_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_4"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32327().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32328().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f329().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f330().getArray())))))))))
                        .addChild(new HAnimJoint("hanim_r_transversetarsal").setName(new SFString("r_tarsometatarsal_5")).setDEF(new SFString("hanim_r_tarsometatarsal_5")).setCenter(new float[] {-0.12044251f ,0.020945251f ,0.03474f }).setUlimit(new MFFloat331().getArray()).setLlimit(new MFFloat332().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsometatarsal_5").setName(new SFString("r_metatarsal_5")).setDEF(new SFString("hanim_r_metatarsal_5"))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32333().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32334().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f335().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f336().getArray())))))
                          .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setName(new SFString("r_metatarsophalangeal_5")).setDEF(new SFString("hanim_r_metatarsophalangeal_5")).setCenter(new float[] {-0.12368251f ,0.013671f ,0.0865575f }).setUlimit(new MFFloat337().getArray()).setLlimit(new MFFloat338().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_5").setName(new SFString("r_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_5"))
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32339().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32340().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f341().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f342().getArray())))))
                            .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setName(new SFString("r_tarsal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_5")).setCenter(new float[] {-0.126f ,0.01085625f ,0.09414f }).setUlimit(new MFFloat343().getArray()).setLlimit(new MFFloat344().getArray())
                              .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_5").setName(new SFString("r_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_5"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32345().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32346().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f347().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f348().getArray())))))
                              .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5").setName(new SFString("r_tarsal_distal_interphalangeal_5")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_5")).setCenter(new float[] {-0.1269225f ,0.008563501f ,0.10188f }).setUlimit(new MFFloat349().getArray()).setLlimit(new MFFloat350().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_5").setName(new SFString("r_tarsal_distal_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_5"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32351().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32352().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f353().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f354().getArray()))))))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName(new SFString("vl5")).setDEF(new SFString("hanim_vl5")).setCenter(new float[] {0f ,0.92542505f ,-0.013763251f }).setUlimit(new MFFloat355().getArray()).setLlimit(new MFFloat356().getArray())
                .addChild(new HAnimSegment("hanim_vl5").setName(new SFString("l5")).setDEF(new SFString("hanim_l5"))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32357().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32358().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f359().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f360().getArray())))))
                .addChild(new HAnimJoint("hanim_vl5").setName(new SFString("vl4")).setDEF(new SFString("hanim_vl4")).setCenter(new float[] {0f ,0.94972503f ,-0.013763251f }).setUlimit(new MFFloat361().getArray()).setLlimit(new MFFloat362().getArray())
                  .addChild(new HAnimSegment("hanim_vl4").setName(new SFString("l4")).setDEF(new SFString("hanim_l4"))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32363().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32364().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f365().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f366().getArray())))))
                  .addChild(new HAnimJoint("hanim_vl4").setName(new SFString("vl3")).setDEF(new SFString("hanim_vl3")).setCenter(new float[] {0f ,0.96592504f ,-0.013763251f }).setUlimit(new MFFloat367().getArray()).setLlimit(new MFFloat368().getArray())
                    .addChild(new HAnimSegment("hanim_vl3").setName(new SFString("l3")).setDEF(new SFString("hanim_l3"))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                          .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32369().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32370().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f371().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f372().getArray())))))
                    .addChild(new HAnimJoint("hanim_vl3").setName(new SFString("vl2")).setDEF(new SFString("hanim_vl2")).setCenter(new float[] {0f ,0.98235005f ,-0.013763251f }).setUlimit(new MFFloat373().getArray()).setLlimit(new MFFloat374().getArray())
                      .addChild(new HAnimSegment("hanim_vl2").setName(new SFString("l2")).setDEF(new SFString("hanim_l2"))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                            .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32375().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32376().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f377().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f378().getArray())))))
                      .addChild(new HAnimJoint("hanim_vl2").setName(new SFString("vl1")).setDEF(new SFString("hanim_vl1")).setCenter(new float[] {0f ,0.99967504f ,-0.013763251f }).setUlimit(new MFFloat379().getArray()).setLlimit(new MFFloat380().getArray())
                        .addChild(new HAnimSegment("hanim_vl1").setName(new SFString("l1")).setDEF(new SFString("hanim_l1"))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                              .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32381().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32382().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f383().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f384().getArray())))))
                        .addChild(new HAnimJoint("hanim_vl1").setName(new SFString("vt12")).setDEF(new SFString("hanim_vt12")).setCenter(new float[] {0f ,1.0230751f ,-0.013763251f }).setUlimit(new MFFloat385().getArray()).setLlimit(new MFFloat386().getArray())
                          .addChild(new HAnimSegment("hanim_vt12").setName(new SFString("t12")).setDEF(new SFString("hanim_t12"))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32387().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32388().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f389().getArray()))
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f390().getArray())))))
                          .addChild(new HAnimJoint("hanim_vt12").setName(new SFString("vt11")).setDEF(new SFString("hanim_vt11")).setCenter(new float[] {0f ,1.0467f ,-0.013763251f }).setUlimit(new MFFloat391().getArray()).setLlimit(new MFFloat392().getArray())
                            .addChild(new HAnimSegment("hanim_vt11").setName(new SFString("t11")).setDEF(new SFString("hanim_t11"))
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32393().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32394().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f395().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f396().getArray())))))
                            .addChild(new HAnimJoint("hanim_vt11").setName(new SFString("vt10")).setDEF(new SFString("hanim_vt10")).setCenter(new float[] {0f ,1.0638f ,-0.013785751f }).setUlimit(new MFFloat397().getArray()).setLlimit(new MFFloat398().getArray())
                              .addChild(new HAnimSegment("hanim_vt10").setName(new SFString("t10")).setDEF(new SFString("hanim_t10"))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32399().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32400().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f401().getArray()))
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f402().getArray())))))
                              .addChild(new HAnimJoint("hanim_vt10").setName(new SFString("vt9")).setDEF(new SFString("hanim_vt9")).setCenter(new float[] {0f ,1.078425f ,-0.013763251f }).setUlimit(new MFFloat403().getArray()).setLlimit(new MFFloat404().getArray())
                                .addChild(new HAnimSegment("hanim_vt9").setName(new SFString("t9")).setDEF(new SFString("hanim_t9"))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32405().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32406().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f407().getArray()))
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f408().getArray())))))
                                .addChild(new HAnimJoint("hanim_vt9").setName(new SFString("vt8")).setDEF(new SFString("hanim_vt8")).setCenter(new float[] {0f ,1.0930501f ,-0.013763251f }).setUlimit(new MFFloat409().getArray()).setLlimit(new MFFloat410().getArray())
                                  .addChild(new HAnimSegment("hanim_vt8").setName(new SFString("t8")).setDEF(new SFString("hanim_t8"))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32411().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32412().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f413().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f414().getArray())))))
                                  .addChild(new HAnimJoint("hanim_vt8").setName(new SFString("vt7")).setDEF(new SFString("hanim_vt7")).setCenter(new float[] {0f ,1.1088f ,-0.013763251f }).setUlimit(new MFFloat415().getArray()).setLlimit(new MFFloat416().getArray())
                                    .addChild(new HAnimSegment("hanim_vt7").setName(new SFString("t7")).setDEF(new SFString("hanim_t7"))
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                          .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32417().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32418().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f419().getArray()))
                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f420().getArray())))))
                                    .addChild(new HAnimJoint("hanim_vt7").setName(new SFString("vt6")).setDEF(new SFString("hanim_vt6")).setCenter(new float[] {0f ,1.1216251f ,-0.013763251f }).setUlimit(new MFFloat421().getArray()).setLlimit(new MFFloat422().getArray())
                                      .addChild(new HAnimSegment("hanim_vt6").setName(new SFString("t6")).setDEF(new SFString("hanim_t6"))
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                            .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32423().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32424().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f425().getArray()))
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f426().getArray())))))
                                      .addChild(new HAnimJoint("hanim_vt6").setName(new SFString("vt5")).setDEF(new SFString("hanim_vt5")).setCenter(new float[] {0f ,1.13715f ,-0.013763251f }).setUlimit(new MFFloat427().getArray()).setLlimit(new MFFloat428().getArray())
                                        .addChild(new HAnimSegment("hanim_vt5").setName(new SFString("t5")).setDEF(new SFString("hanim_t5"))
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                              .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32429().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32430().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f431().getArray()))
                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f432().getArray())))))
                                        .addChild(new HAnimJoint("hanim_vt5").setName(new SFString("vt4")).setDEF(new SFString("hanim_vt4")).setCenter(new float[] {0f ,1.1524501f ,-0.013763251f }).setUlimit(new MFFloat433().getArray()).setLlimit(new MFFloat434().getArray())
                                          .addChild(new HAnimSegment("hanim_vt4").setName(new SFString("t4")).setDEF(new SFString("hanim_t4"))
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32435().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32436().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f437().getArray()))
                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f438().getArray())))))
                                          .addChild(new HAnimJoint("hanim_vt4").setName(new SFString("vt3")).setDEF(new SFString("hanim_vt3")).setCenter(new float[] {0f ,1.1709001f ,-0.013763251f }).setUlimit(new MFFloat439().getArray()).setLlimit(new MFFloat440().getArray())
                                            .addChild(new HAnimSegment("hanim_vt3").setName(new SFString("t3")).setDEF(new SFString("hanim_t3"))
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32441().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32442().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f443().getArray()))
                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f444().getArray())))))
                                            .addChild(new HAnimJoint("hanim_vt3").setName(new SFString("vt2")).setDEF(new SFString("hanim_vt2")).setCenter(new float[] {0f ,1.19565f ,-0.013785751f }).setUlimit(new MFFloat445().getArray()).setLlimit(new MFFloat446().getArray())
                                              .addChild(new HAnimSegment("hanim_vt2").setName(new SFString("t2")).setDEF(new SFString("hanim_t2"))
                                                .addChild(new Shape()
                                                  .setAppearance(new Appearance()
                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32447().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32448().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f449().getArray()))
                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f450().getArray())))))
                                              .addChild(new HAnimJoint("hanim_vt2").setName(new SFString("vt1")).setDEF(new SFString("hanim_vt1")).setCenter(new float[] {0f ,1.2195001f ,-0.013763251f }).setUlimit(new MFFloat451().getArray()).setLlimit(new MFFloat452().getArray())
                                                .addChild(new HAnimSegment("hanim_vt1").setName(new SFString("t1")).setDEF(new SFString("hanim_t1"))
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32453().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32454().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f455().getArray()))
                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f456().getArray())))))
                                                .addChild(new HAnimJoint("hanim_vt1").setName(new SFString("vc7")).setDEF(new SFString("hanim_vc7")).setCenter(new float[] {0f ,1.245375f ,-0.015063751f }).setUlimit(new MFFloat457().getArray()).setLlimit(new MFFloat458().getArray())
                                                  .addChild(new HAnimSegment("hanim_vc7").setName(new SFString("c7")).setDEF(new SFString("hanim_c7"))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32459().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32460().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f461().getArray()))
                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f462().getArray())))))
                                                  .addChild(new HAnimJoint("hanim_vc7").setName(new SFString("vc6")).setDEF(new SFString("hanim_vc6")).setCenter(new float[] {0f ,1.2575251f ,-0.015063751f }).setUlimit(new MFFloat463().getArray()).setLlimit(new MFFloat464().getArray())
                                                    .addChild(new HAnimSegment("hanim_vc6").setName(new SFString("c6")).setDEF(new SFString("hanim_c6"))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                          .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32465().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32466().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f467().getArray()))
                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f468().getArray())))))
                                                    .addChild(new HAnimJoint("hanim_vc6").setName(new SFString("vc5")).setDEF(new SFString("hanim_vc5")).setCenter(new float[] {0f ,1.2699f ,-0.015063751f }).setUlimit(new MFFloat469().getArray()).setLlimit(new MFFloat470().getArray())
                                                      .addChild(new HAnimSegment("hanim_vc5").setName(new SFString("c5")).setDEF(new SFString("hanim_c5"))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                            .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32471().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32472().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f473().getArray()))
                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f474().getArray())))))
                                                      .addChild(new HAnimJoint("hanim_vc5").setName(new SFString("vc4")).setDEF(new SFString("hanim_vc4")).setCenter(new float[] {0f ,1.2822751f ,-0.015063751f }).setUlimit(new MFFloat475().getArray()).setLlimit(new MFFloat476().getArray())
                                                        .addChild(new HAnimSegment("hanim_vc4").setName(new SFString("c4")).setDEF(new SFString("hanim_c4"))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                              .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32477().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32478().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f479().getArray()))
                                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f480().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_vc4").setName(new SFString("vc3")).setDEF(new SFString("hanim_vc3")).setCenter(new float[] {0f ,1.2951001f ,-0.015063751f }).setUlimit(new MFFloat481().getArray()).setLlimit(new MFFloat482().getArray())
                                                          .addChild(new HAnimSegment("hanim_vc3").setName(new SFString("c3")).setDEF(new SFString("hanim_c3"))
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32483().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32484().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f485().getArray()))
                                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f486().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_vc3").setName(new SFString("vc2")).setDEF(new SFString("hanim_vc2")).setCenter(new float[] {0f ,1.3068001f ,-0.015063751f }).setUlimit(new MFFloat487().getArray()).setLlimit(new MFFloat488().getArray())
                                                            .addChild(new HAnimSegment("hanim_vc2").setName(new SFString("c2")).setDEF(new SFString("hanim_c2"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32489().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32490().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f491().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f492().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_vc2").setName(new SFString("vc1")).setDEF(new SFString("hanim_vc1")).setCenter(new float[] {0f ,1.3185f ,-0.015063751f }).setUlimit(new MFFloat493().getArray()).setLlimit(new MFFloat494().getArray())
                                                              .addChild(new HAnimSegment("hanim_vc1").setName(new SFString("c1")).setDEF(new SFString("hanim_c1"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32495().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32496().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f497().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f498().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_vc1").setName(new SFString("skullbase")).setDEF(new SFString("hanim_skullbase")).setCenter(new float[] {0f ,1.3126501f ,-0.01544175f }).setUlimit(new MFFloat499().getArray()).setLlimit(new MFFloat500().getArray())
                                                                .addChild(new HAnimSegment("hanim_skullbase").setName(new SFString("skull")).setDEF(new SFString("hanim_skull"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32501().getArray().append(new MFInt32502().getArray()).append(new MFInt32503().getArray())).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32504().getArray().append(new MFInt32505().getArray()).append(new MFInt32506().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f507().getArray().append(new MFVec3f508().getArray())))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f509().getArray().append(new MFVec2f510().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("l_eyelid_joint")).setDEF(new SFString("hanim_l_eyelid_joint")).setCenter(new float[] {0.0505125f ,1.42425f ,0.03294f }).setUlimit(new MFFloat511().getArray()).setLlimit(new MFFloat512().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_eyelid_joint").setName(new SFString("l_eyelid")).setDEF(new SFString("hanim_l_eyelid"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32513().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32514().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f515().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f516().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("r_eyelid_joint")).setDEF(new SFString("hanim_r_eyelid_joint")).setCenter(new float[] {-0.0505125f ,1.42425f ,0.03294f }).setUlimit(new MFFloat517().getArray()).setLlimit(new MFFloat518().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_eyelid_joint").setName(new SFString("r_eyelid")).setDEF(new SFString("hanim_r_eyelid"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32519().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32520().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f521().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f522().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("l_eyeball_joint")).setDEF(new SFString("hanim_l_eyeball_joint")).setCenter(new float[] {0.048127502f ,1.4049001f ,0.0830475f }).setUlimit(new MFFloat523().getArray()).setLlimit(new MFFloat524().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_eyeball_joint").setName(new SFString("l_eyeball")).setDEF(new SFString("hanim_l_eyeball"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32525().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32526().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f527().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f528().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("r_eyeball_joint")).setDEF(new SFString("hanim_r_eyeball_joint")).setCenter(new float[] {-0.048127502f ,1.4049001f ,0.0830475f }).setUlimit(new MFFloat529().getArray()).setLlimit(new MFFloat530().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_eyeball_joint").setName(new SFString("r_eyeball")).setDEF(new SFString("hanim_r_eyeball"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32531().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32532().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f533().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f534().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("l_eyebrow_joint")).setDEF(new SFString("hanim_l_eyebrow_joint")).setCenter(new float[] {0.021748502f ,1.4139f ,0.1069425f }).setUlimit(new MFFloat535().getArray()).setLlimit(new MFFloat536().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_eyebrow_joint").setName(new SFString("l_eyebrow")).setDEF(new SFString("hanim_l_eyebrow"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32537().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32538().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f539().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f540().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("r_eyebrow_joint")).setDEF(new SFString("hanim_r_eyebrow_joint")).setCenter(new float[] {-0.021748502f ,1.4139f ,0.1069425f }).setUlimit(new MFFloat541().getArray()).setLlimit(new MFFloat542().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_eyebrow_joint").setName(new SFString("r_eyebrow")).setDEF(new SFString("hanim_r_eyebrow"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32543().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32544().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f545().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f546().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("temporomandibular")).setDEF(new SFString("hanim_temporomandibular")).setCenter(new float[] {0f ,1.312875f ,0.015378751f }).setUlimit(new MFFloat547().getArray()).setLlimit(new MFFloat548().getArray())
                                                                  .addChild(new HAnimSegment("hanim_temporomandibular").setName(new SFString("jaw")).setDEF(new SFString("hanim_jaw"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32549().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32550().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f551().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f552().getArray()))))))))))))))
                                                .addChild(new HAnimJoint("hanim_vt1").setName(new SFString("l_sternoclavicular")).setDEF(new SFString("hanim_l_sternoclavicular")).setCenter(new float[] {0.038475003f ,1.2087001f ,-0.013785751f }).setUlimit(new MFFloat553().getArray()).setLlimit(new MFFloat554().getArray())
                                                  .addChild(new HAnimSegment("hanim_l_sternoclavicular").setName(new SFString("l_clavicle")).setDEF(new SFString("hanim_l_clavicle"))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32555().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32556().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f557().getArray()))
                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f558().getArray())))))
                                                  .addChild(new HAnimJoint("hanim_l_sternoclavicular").setName(new SFString("l_acromioclavicular")).setDEF(new SFString("hanim_l_acromioclavicular")).setCenter(new float[] {0.12294001f ,1.191825f ,-0.012897001f }).setUlimit(new MFFloat559().getArray()).setLlimit(new MFFloat560().getArray())
                                                    .addChild(new HAnimSegment("hanim_l_acromioclavicular").setName(new SFString("l_scapula")).setDEF(new SFString("hanim_l_scapula"))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                          .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32561().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32562().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f563().getArray()))
                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f564().getArray())))))
                                                    .addChild(new HAnimJoint("hanim_l_acromioclavicular").setName(new SFString("l_shoulder")).setDEF(new SFString("hanim_l_shoulder")).setCenter(new float[] {0.16506f ,1.1785501f ,-0.0032670002f }).setUlimit(new MFFloat565().getArray()).setLlimit(new MFFloat566().getArray())
                                                      .addChild(new HAnimSegment("hanim_l_shoulder").setName(new SFString("l_upperarm")).setDEF(new SFString("hanim_l_upperarm"))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                            .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32567().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32568().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f569().getArray()))
                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f570().getArray())))))
                                                      .addChild(new HAnimJoint("hanim_l_shoulder").setName(new SFString("l_elbow")).setDEF(new SFString("hanim_l_elbow")).setCenter(new float[] {0.18209252f ,0.9288f ,-0.0056295004f }).setUlimit(new MFFloat571().getArray()).setLlimit(new MFFloat572().getArray())
                                                        .addChild(new HAnimSegment("hanim_l_elbow").setName(new SFString("l_forearm")).setDEF(new SFString("hanim_l_forearm"))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                              .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32573().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32574().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f575().getArray()))
                                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f576().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_l_elbow").setName(new SFString("l_radiocarpal")).setDEF(new SFString("hanim_l_radiocarpal")).setCenter(new float[] {0.18193501f ,0.724275f ,-0.00502425f }).setUlimit(new MFFloat577().getArray()).setLlimit(new MFFloat578().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_radiocarpal").setName(new SFString("l_carpal")).setDEF(new SFString("hanim_l_carpal"))
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32579().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32580().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f581().getArray()))
                                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f582().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_1")).setDEF(new SFString("hanim_l_midcarpal_1")).setCenter(new float[] {0.1812825f ,0.70605004f ,0.0193275f }).setUlimit(new MFFloat583().getArray()).setLlimit(new MFFloat584().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_midcarpal_1").setName(new SFString("l_trapezium")).setDEF(new SFString("hanim_l_trapezium"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32585().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32586().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f587().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f588().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_midcarpal_1").setName(new SFString("l_carpometacarpal_1")).setDEF(new SFString("hanim_l_carpometacarpal_1")).setCenter(new float[] {0.18049501f ,0.69255006f ,0.0259875f }).setUlimit(new MFFloat589().getArray()).setLlimit(new MFFloat590().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_carpometacarpal_1").setName(new SFString("l_metacarpal_1")).setDEF(new SFString("hanim_l_metacarpal_1"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32591().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32592().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f593().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f594().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setName(new SFString("l_metacarpophalangeal_1")).setDEF(new SFString("hanim_l_metacarpophalangeal_1")).setCenter(new float[] {0.181035f ,0.67275f ,0.035775002f }).setUlimit(new MFFloat595().getArray()).setLlimit(new MFFloat596().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_1").setName(new SFString("l_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_1"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32597().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32598().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f599().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f600().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setName(new SFString("l_carpal_interphalangeal_1")).setDEF(new SFString("hanim_l_carpal_interphalangeal_1")).setCenter(new float[] {0.182655f ,0.654075f ,0.0496575f }).setUlimit(new MFFloat601().getArray()).setLlimit(new MFFloat602().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_interphalangeal_1").setName(new SFString("l_carpal_distal_phalanx_1")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_1"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32603().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32604().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f605().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f606().getArray())))))))))
                                                          .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_2")).setDEF(new SFString("hanim_l_midcarpal_2")).setCenter(new float[] {0.1812825f ,0.70695f ,0.008417251f }).setUlimit(new MFFloat607().getArray()).setLlimit(new MFFloat608().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_midcarpal_2").setName(new SFString("l_trapezoid")).setDEF(new SFString("hanim_l_trapezoid"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32609().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32610().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f611().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f612().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_midcarpal_2").setName(new SFString("l_carpometacarpal_2")).setDEF(new SFString("hanim_l_carpometacarpal_2")).setCenter(new float[] {0.1812825f ,0.6876f ,0.009729f }).setUlimit(new MFFloat613().getArray()).setLlimit(new MFFloat614().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_carpometacarpal_2").setName(new SFString("l_metacarpal_2")).setDEF(new SFString("hanim_l_metacarpal_2"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32615().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32616().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f617().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f618().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setName(new SFString("l_metacarpophalangeal_2")).setDEF(new SFString("hanim_l_metacarpophalangeal_2")).setCenter(new float[] {0.18373501f ,0.6372f ,0.015075001f }).setUlimit(new MFFloat619().getArray()).setLlimit(new MFFloat620().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_2").setName(new SFString("l_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_2"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32621().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32622().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f623().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f624().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setName(new SFString("l_carpal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_2")).setCenter(new float[] {0.18171f ,0.606825f ,0.014184001f }).setUlimit(new MFFloat625().getArray()).setLlimit(new MFFloat626().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_2").setName(new SFString("l_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_2"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32627().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32628().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f629().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f630().getArray())))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setName(new SFString("l_carpal_distal_interphalangeal_2")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_2")).setCenter(new float[] {0.180675f ,0.58162504f ,0.013385251f }).setUlimit(new MFFloat631().getArray()).setLlimit(new MFFloat632().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_2").setName(new SFString("l_carpal_distal_phalanx_2")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_2"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                          .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32633().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32634().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f635().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f636().getArray()))))))))))
                                                          .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_3")).setDEF(new SFString("hanim_l_midcarpal_3")).setCenter(new float[] {0.18108001f ,0.708525f ,-0.0047970004f }).setUlimit(new MFFloat637().getArray()).setLlimit(new MFFloat638().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_midcarpal_3").setName(new SFString("l_capitate")).setDEF(new SFString("hanim_l_capitate"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32639().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32640().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f641().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f642().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_midcarpal_3").setName(new SFString("l_carpometacarpal_3")).setDEF(new SFString("hanim_l_carpometacarpal_3")).setCenter(new float[] {0.18108001f ,0.6858f ,-0.0062527503f }).setUlimit(new MFFloat643().getArray()).setLlimit(new MFFloat644().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_carpometacarpal_3").setName(new SFString("l_metacarpal_3")).setDEF(new SFString("hanim_l_metacarpal_3"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32645().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32646().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f647().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f648().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setName(new SFString("l_metacarpophalangeal_3")).setDEF(new SFString("hanim_l_metacarpophalangeal_3")).setCenter(new float[] {0.18369f ,0.63495f ,-0.00391725f }).setUlimit(new MFFloat649().getArray()).setLlimit(new MFFloat650().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_3").setName(new SFString("l_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_3"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32651().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32652().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f653().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f654().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setName(new SFString("l_carpal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_3")).setCenter(new float[] {0.18171f ,0.603225f ,-0.003537f }).setUlimit(new MFFloat655().getArray()).setLlimit(new MFFloat656().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_3").setName(new SFString("l_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_3"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32657().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32658().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f659().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f660().getArray())))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setName(new SFString("l_carpal_distal_interphalangeal_3")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_3")).setCenter(new float[] {0.180675f ,0.575325f ,-0.0037597502f }).setUlimit(new MFFloat661().getArray()).setLlimit(new MFFloat662().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_3").setName(new SFString("l_carpal_distal_phalanx_3")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_3"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                          .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32663().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32664().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f665().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f666().getArray()))))))))))
                                                          .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_midcarpal_4_5")).setDEF(new SFString("hanim_l_midcarpal_4_5")).setCenter(new float[] {0.18108001f ,0.70582503f ,-0.025740001f }).setUlimit(new MFFloat667().getArray()).setLlimit(new MFFloat668().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_midcarpal_4_5").setName(new SFString("l_hamate")).setDEF(new SFString("hanim_l_hamate"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32669().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32670().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f671().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f672().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName(new SFString("l_carpometacarpal_4")).setDEF(new SFString("hanim_l_carpometacarpal_4")).setCenter(new float[] {0.18108001f ,0.68625003f ,-0.01991925f }).setUlimit(new MFFloat673().getArray()).setLlimit(new MFFloat674().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_carpometacarpal_4").setName(new SFString("l_metacarpal_4")).setDEF(new SFString("hanim_l_metacarpal_4"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32675().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32676().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f677().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f678().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setName(new SFString("l_metacarpophalangeal_4")).setDEF(new SFString("hanim_l_metacarpophalangeal_4")).setCenter(new float[] {0.18369f ,0.63405f ,-0.02144025f }).setUlimit(new MFFloat679().getArray()).setLlimit(new MFFloat680().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_4").setName(new SFString("l_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_4"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32681().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32682().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f683().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f684().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setName(new SFString("l_carpal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_4")).setCenter(new float[] {0.18171f ,0.6066f ,-0.020646f }).setUlimit(new MFFloat685().getArray()).setLlimit(new MFFloat686().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_4").setName(new SFString("l_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_4"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32687().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32688().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f689().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f690().getArray())))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setName(new SFString("l_carpal_distal_interphalangeal_4")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_4")).setCenter(new float[] {0.180675f ,0.580725f ,-0.019777501f }).setUlimit(new MFFloat691().getArray()).setLlimit(new MFFloat692().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_4").setName(new SFString("l_carpal_distal_phalanx_4")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_4"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                          .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32693().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32694().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f695().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f696().getArray()))))))))))
                                                          .addChild(new HAnimJoint("hanim_l_radiocarpal").setName(new SFString("l_carpometacarpal_5")).setDEF(new SFString("hanim_l_carpometacarpal_5")).setCenter(new float[] {0.1816425f ,0.68827504f ,-0.032782502f }).setUlimit(new MFFloat697().getArray()).setLlimit(new MFFloat698().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpometacarpal_5").setName(new SFString("l_metacarpal_5")).setDEF(new SFString("hanim_l_metacarpal_5"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32699().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32700().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f701().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f702().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setName(new SFString("l_metacarpophalangeal_5")).setDEF(new SFString("hanim_l_metacarpophalangeal_5")).setCenter(new float[] {0.18333f ,0.6381f ,-0.0370575f }).setUlimit(new MFFloat703().getArray()).setLlimit(new MFFloat704().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_5").setName(new SFString("l_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_5"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32705().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32706().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f707().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f708().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setName(new SFString("l_carpal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_l_carpal_proximal_interphalangeal_5")).setCenter(new float[] {0.18166502f ,0.62100005f ,-0.037147503f }).setUlimit(new MFFloat709().getArray()).setLlimit(new MFFloat710().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_5").setName(new SFString("l_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_5"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32711().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32712().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f713().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f714().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setName(new SFString("l_carpal_distal_interphalangeal_5")).setDEF(new SFString("hanim_l_carpal_distal_interphalangeal_5")).setCenter(new float[] {0.18081002f ,0.602325f ,-0.0369675f }).setUlimit(new MFFloat715().getArray()).setLlimit(new MFFloat716().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_5").setName(new SFString("l_carpal_distal_phalanx_5")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_5"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32717().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32718().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f719().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f720().getArray()))))))))))))))
                                                .addChild(new HAnimJoint("hanim_vt1").setName(new SFString("r_sternoclavicular")).setDEF(new SFString("hanim_r_sternoclavicular")).setCenter(new float[] {-0.038475003f ,1.2087001f ,-0.013785751f }).setUlimit(new MFFloat721().getArray()).setLlimit(new MFFloat722().getArray())
                                                  .addChild(new HAnimSegment("hanim_r_sternoclavicular").setName(new SFString("r_clavicle")).setDEF(new SFString("hanim_r_clavicle"))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32723().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32724().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f725().getArray()))
                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f726().getArray())))))
                                                  .addChild(new HAnimJoint("hanim_r_sternoclavicular").setName(new SFString("r_acromioclavicular")).setDEF(new SFString("hanim_r_acromioclavicular")).setCenter(new float[] {-0.12294001f ,1.191825f ,-0.012897001f }).setUlimit(new MFFloat727().getArray()).setLlimit(new MFFloat728().getArray())
                                                    .addChild(new HAnimSegment("hanim_r_acromioclavicular").setName(new SFString("r_scapula")).setDEF(new SFString("hanim_r_scapula"))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                          .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32729().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32730().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f731().getArray()))
                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f732().getArray())))))
                                                    .addChild(new HAnimJoint("hanim_r_acromioclavicular").setName(new SFString("r_shoulder")).setDEF(new SFString("hanim_r_shoulder")).setCenter(new float[] {-0.16470002f ,1.1785501f ,-0.0032670002f }).setUlimit(new MFFloat733().getArray()).setLlimit(new MFFloat734().getArray())
                                                      .addChild(new HAnimSegment("hanim_r_shoulder").setName(new SFString("r_upperarm")).setDEF(new SFString("hanim_r_upperarm"))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                            .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32735().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32736().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f737().getArray()))
                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f738().getArray())))))
                                                      .addChild(new HAnimJoint("hanim_r_shoulder").setName(new SFString("r_elbow")).setDEF(new SFString("hanim_r_elbow")).setCenter(new float[] {-0.1817325f ,0.9288f ,-0.0056295004f }).setUlimit(new MFFloat739().getArray()).setLlimit(new MFFloat740().getArray())
                                                        .addChild(new HAnimSegment("hanim_r_elbow").setName(new SFString("r_forearm")).setDEF(new SFString("hanim_r_forearm"))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                              .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32741().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32742().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f743().getArray()))
                                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f744().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_r_elbow").setName(new SFString("r_radiocarpal")).setDEF(new SFString("hanim_r_radiocarpal")).setCenter(new float[] {-0.181575f ,0.724275f ,-0.005022f }).setUlimit(new MFFloat745().getArray()).setLlimit(new MFFloat746().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_radiocarpal").setName(new SFString("r_carpal")).setDEF(new SFString("hanim_r_carpal"))
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32747().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32748().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f749().getArray()))
                                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f750().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_1")).setDEF(new SFString("hanim_r_midcarpal_1")).setCenter(new float[] {-0.18096751f ,0.70605004f ,0.0193275f }).setUlimit(new MFFloat751().getArray()).setLlimit(new MFFloat752().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_midcarpal_1").setName(new SFString("r_trapezium")).setDEF(new SFString("hanim_r_trapezium"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32753().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32754().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f755().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f756().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_midcarpal_1").setName(new SFString("r_carpometacarpal_1")).setDEF(new SFString("hanim_r_carpometacarpal_1")).setCenter(new float[] {-0.180135f ,0.69255006f ,0.0259875f }).setUlimit(new MFFloat757().getArray()).setLlimit(new MFFloat758().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_carpometacarpal_1").setName(new SFString("r_metacarpal_1")).setDEF(new SFString("hanim_r_metacarpal_1"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32759().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32760().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f761().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f762().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setName(new SFString("r_metacarpophalangeal_1")).setDEF(new SFString("hanim_r_metacarpophalangeal_1")).setCenter(new float[] {-0.18065251f ,0.67275f ,0.035775002f }).setUlimit(new MFFloat763().getArray()).setLlimit(new MFFloat764().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_1").setName(new SFString("r_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_1"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32765().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32766().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f767().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f768().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setName(new SFString("r_carpal_interphalangeal_1")).setDEF(new SFString("hanim_r_carpal_interphalangeal_1")).setCenter(new float[] {-0.18227251f ,0.654075f ,0.0496575f }).setUlimit(new MFFloat769().getArray()).setLlimit(new MFFloat770().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_interphalangeal_1").setName(new SFString("r_carpal_distal_phalanx_1")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_1"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32771().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32772().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f773().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f774().getArray())))))))))
                                                          .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_2")).setDEF(new SFString("hanim_r_midcarpal_2")).setCenter(new float[] {-0.18096751f ,0.70695f ,0.008417251f }).setUlimit(new MFFloat775().getArray()).setLlimit(new MFFloat776().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_midcarpal_2").setName(new SFString("r_trapezoid")).setDEF(new SFString("hanim_r_trapezoid"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32777().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32778().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f779().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f780().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_midcarpal_2").setName(new SFString("r_carpometacarpal_2")).setDEF(new SFString("hanim_r_carpometacarpal_2")).setCenter(new float[] {-0.18090001f ,0.6876f ,0.009729f }).setUlimit(new MFFloat781().getArray()).setLlimit(new MFFloat782().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_carpometacarpal_2").setName(new SFString("r_metacarpal_2")).setDEF(new SFString("hanim_r_metacarpal_2"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32783().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32784().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f785().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f786().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setName(new SFString("r_metacarpophalangeal_2")).setDEF(new SFString("hanim_r_metacarpophalangeal_2")).setCenter(new float[] {-0.18335252f ,0.6372f ,0.015075001f }).setUlimit(new MFFloat787().getArray()).setLlimit(new MFFloat788().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_2").setName(new SFString("r_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_2"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32789().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32790().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f791().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f792().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setName(new SFString("r_carpal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_2")).setCenter(new float[] {-0.1813275f ,0.606825f ,0.014184001f }).setUlimit(new MFFloat793().getArray()).setLlimit(new MFFloat794().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_2").setName(new SFString("r_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_2"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32795().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32796().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f797().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f798().getArray())))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setName(new SFString("r_carpal_distal_interphalangeal_2")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_2")).setCenter(new float[] {-0.1802925f ,0.58162504f ,0.013385251f }).setUlimit(new MFFloat799().getArray()).setLlimit(new MFFloat800().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_2").setName(new SFString("r_carpal_distal_phalanx_2")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_2"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                          .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32801().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32802().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f803().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f804().getArray()))))))))))
                                                          .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_3")).setDEF(new SFString("hanim_r_midcarpal_3")).setCenter(new float[] {-0.18072f ,0.708525f ,-0.0047970004f }).setUlimit(new MFFloat805().getArray()).setLlimit(new MFFloat806().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_midcarpal_3").setName(new SFString("r_capitate")).setDEF(new SFString("hanim_r_capitate"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32807().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32808().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f809().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f810().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_midcarpal_3").setName(new SFString("r_carpometacarpal_3")).setDEF(new SFString("hanim_r_carpometacarpal_3")).setCenter(new float[] {-0.18072f ,0.6858f ,-0.0062527503f }).setUlimit(new MFFloat811().getArray()).setLlimit(new MFFloat812().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_carpometacarpal_3").setName(new SFString("r_metacarpal_3")).setDEF(new SFString("hanim_r_metacarpal_3"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32813().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32814().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f815().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f816().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setName(new SFString("r_metacarpophalangeal_3")).setDEF(new SFString("hanim_r_metacarpophalangeal_3")).setCenter(new float[] {-0.18330751f ,0.63495f ,-0.00391725f }).setUlimit(new MFFloat817().getArray()).setLlimit(new MFFloat818().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_3").setName(new SFString("r_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_3"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32819().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32820().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f821().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f822().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setName(new SFString("r_carpal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_3")).setCenter(new float[] {-0.1813275f ,0.603225f ,-0.003537f }).setUlimit(new MFFloat823().getArray()).setLlimit(new MFFloat824().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_3").setName(new SFString("r_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_3"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32825().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32826().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f827().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f828().getArray())))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setName(new SFString("r_carpal_distal_interphalangeal_3")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_3")).setCenter(new float[] {-0.1802925f ,0.575325f ,-0.0037597502f }).setUlimit(new MFFloat829().getArray()).setLlimit(new MFFloat830().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_3").setName(new SFString("r_carpal_distal_phalanx_3")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_3"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                          .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32831().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32832().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f833().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f834().getArray()))))))))))
                                                          .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_4_5")).setDEF(new SFString("hanim_r_midcarpal_4_5")).setCenter(new float[] {-0.18072f ,0.70582503f ,-0.025740001f }).setUlimit(new MFFloat835().getArray()).setLlimit(new MFFloat836().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_midcarpal_4_5").setName(new SFString("r_hamate")).setDEF(new SFString("hanim_r_hamate"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32837().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32838().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f839().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f840().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName(new SFString("r_carpometacarpal_4")).setDEF(new SFString("hanim_r_carpometacarpal_4")).setCenter(new float[] {-0.18072f ,0.68625003f ,-0.01991925f }).setUlimit(new MFFloat841().getArray()).setLlimit(new MFFloat842().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_carpometacarpal_4").setName(new SFString("r_metacarpal_4")).setDEF(new SFString("hanim_r_metacarpal_4"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32843().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32844().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f845().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f846().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setName(new SFString("r_metacarpophalangeal_4")).setDEF(new SFString("hanim_r_metacarpophalangeal_4")).setCenter(new float[] {-0.18330751f ,0.63405f ,-0.02144025f }).setUlimit(new MFFloat847().getArray()).setLlimit(new MFFloat848().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_4").setName(new SFString("r_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_4"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32849().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32850().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f851().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f852().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setName(new SFString("r_carpal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_4")).setCenter(new float[] {-0.1813275f ,0.6066f ,-0.020646f }).setUlimit(new MFFloat853().getArray()).setLlimit(new MFFloat854().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_4").setName(new SFString("r_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_4"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32855().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32856().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f857().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f858().getArray())))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setName(new SFString("r_carpal_distal_interphalangeal_4")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_4")).setCenter(new float[] {-0.1802925f ,0.580725f ,-0.019777501f }).setUlimit(new MFFloat859().getArray()).setLlimit(new MFFloat860().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_4").setName(new SFString("r_carpal_distal_phalanx_4")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_4"))
                                                                      .addChild(new Shape()
                                                                        .setAppearance(new Appearance()
                                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                          .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32861().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32862().getArray())
                                                                          .setCoord(new Coordinate().setPoint(new MFVec3f863().getArray()))
                                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f864().getArray()))))))))))
                                                          .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_carpometacarpal_5")).setDEF(new SFString("hanim_r_carpometacarpal_5")).setCenter(new float[] {-0.18126f ,0.68827504f ,-0.032782502f }).setUlimit(new MFFloat865().getArray()).setLlimit(new MFFloat866().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpometacarpal_5").setName(new SFString("r_metacarpal_5")).setDEF(new SFString("hanim_r_metacarpal_5"))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32867().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32868().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f869().getArray()))
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f870().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setName(new SFString("r_metacarpophalangeal_5")).setDEF(new SFString("hanim_r_metacarpophalangeal_5")).setCenter(new float[] {-0.18297f ,0.6381f ,-0.0370575f }).setUlimit(new MFFloat871().getArray()).setLlimit(new MFFloat872().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_5").setName(new SFString("r_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_5"))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32873().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32874().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f875().getArray()))
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f876().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setName(new SFString("r_carpal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_5")).setCenter(new float[] {-0.18130499f ,0.62100005f ,-0.037147503f }).setUlimit(new MFFloat877().getArray()).setLlimit(new MFFloat878().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_5").setName(new SFString("r_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_5"))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32879().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32880().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f881().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f882().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setName(new SFString("r_carpal_distal_interphalangeal_5")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_5")).setCenter(new float[] {-0.18045002f ,0.602325f ,-0.0369675f }).setUlimit(new MFFloat883().getArray()).setLlimit(new MFFloat884().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_5").setName(new SFString("r_carpal_distal_phalanx_5")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_5"))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE(new SFString("JinLOA4TextureAtlas"))))
                                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32885().getArray()).setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32886().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f887().getArray()))
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f888().getArray())))))))))))))))))))))))))))))))))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_humanoid_root")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_sacroiliac")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vl5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vl4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vl3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vl2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vl1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vt12")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vt11")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vt10")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vt9")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vt8")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vt7")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vt6")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vt5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vt4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vt3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vt2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vt1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vc7")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vc6")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vc5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vc4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vc3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vc2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_vc1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_skullbase")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_temporomandibular")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_acromioclavicular")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_acromioclavicular")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_calcaneocuboid")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_calcaneocuboid")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_carpal_distal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_carpal_distal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_carpal_distal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_carpal_distal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_carpal_interphalangeal_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_carpal_interphalangeal_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_carpal_proximal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_carpal_proximal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_carpal_proximal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_carpal_proximal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_carpometacarpal_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_carpometacarpal_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_carpometacarpal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_carpometacarpal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_carpometacarpal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_carpometacarpal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_carpometacarpal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_carpometacarpal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_carpometacarpal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_carpometacarpal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_cuneonavicular_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_cuneonavicular_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_cuneonavicular_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_cuneonavicular_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_cuneonavicular_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_cuneonavicular_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_elbow")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_elbow")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_eyeball_joint")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_eyeball_joint")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_eyebrow_joint")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_eyebrow_joint")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_eyelid_joint")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_eyelid_joint")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_hip")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_hip")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_knee")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_knee")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_metacarpophalangeal_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_metacarpophalangeal_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_metacarpophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_metacarpophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_metacarpophalangeal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_metacarpophalangeal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_metacarpophalangeal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_metacarpophalangeal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_metacarpophalangeal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_metacarpophalangeal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_metatarsophalangeal_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_metatarsophalangeal_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_metatarsophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_metatarsophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_metatarsophalangeal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_metatarsophalangeal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_metatarsophalangeal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_metatarsophalangeal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_metatarsophalangeal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_metatarsophalangeal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_midcarpal_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_midcarpal_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_midcarpal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_midcarpal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_midcarpal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_midcarpal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_midcarpal_4_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_midcarpal_4_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_radiocarpal")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_radiocarpal")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_shoulder")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_shoulder")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_sternoclavicular")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_sternoclavicular")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_talocalcaneonavicular")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_talocalcaneonavicular")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_talocrural")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_talocrural")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_tarsal_distal_interphalangeal_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_tarsal_distal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_tarsal_distal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_tarsal_distal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_tarsal_distal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_tarsal_proximal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_tarsal_proximal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_tarsal_proximal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_tarsal_proximal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_tarsometatarsal_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_tarsometatarsal_1")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_tarsometatarsal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_tarsometatarsal_2")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_tarsometatarsal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_tarsometatarsal_3")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_tarsometatarsal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_tarsometatarsal_4")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_tarsometatarsal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_tarsometatarsal_5")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_l_transversetarsal")))
          .addJoints(new HAnimJoint("hanim_JinLOA4").setUSE(new SFString("hanim_r_transversetarsal"))))
        .addChild(new Group().setDEF(new SFString("StopAnimation")))
        .addChild(new Group().setDEF(new SFString("StandAnimation")))
        .addChild(new Group().setDEF(new SFString("PitchesAnimation")))
        .addChild(new Group().setDEF(new SFString("YawsAnimation")))
        .addChild(new Group().setDEF(new SFString("RollsAnimation")))
        .addChild(new Group().setDEF(new SFString("WalkAnimation")))
        .addChild(new Group().setDEF(new SFString("RunAnimation")))
        .addChild(new Group().setDEF(new SFString("JumpAnimation")))
        .addChild(new Group().setDEF(new SFString("KickAnimation"))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Jin Hoon Lee and Min Joo Lee, Chul Hee Jung and Myeong Won Lee"});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"female"});
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/Jin.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png"});
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.8496675f ,-0.01530675f ,0f ,0.84650177f ,-0.028102502f ,-0.00984375f ,0.84650177f ,-0.026388f ,-0.017050501f ,0.84650177f ,-0.02432025f ,-0.0196875f ,0.84650177f ,-0.01530675f ,-0.017050501f ,0.84650177f ,-0.0062932507f ,-0.00984375f ,0.84650177f ,-0.0042255f ,0f ,0.84650177f ,-0.0025109998f ,0.00984375f ,0.84650177f ,-0.0042255f ,0.017050501f ,0.84650177f ,-0.0062932507f ,0.0196875f ,0.84650177f ,-0.01530675f ,0.017050501f ,0.84650177f ,-0.02432025f ,0.00984375f ,0.84650177f ,-0.026388f ,0f ,0.8378258f ,-0.0358155f ,-0.012730501f ,0.8378258f ,-0.03306825f ,-0.02205f ,0.8378258f ,-0.025562251f ,-0.02547f ,0.8378258f ,-0.01530675f ,-0.02205f ,0.8378258f ,-0.0050534997f ,-0.012730501f ,0.8378258f ,-0.00020475045f ,0f ,0.8378258f ,0.0025424995f ,0.012730501f ,0.8378258f ,-0.00020475045f ,0.02205f ,0.8378258f ,-0.0050534997f ,0.02547f ,0.8378258f ,-0.01530675f ,0.02205f ,0.8378258f ,-0.025562251f ,0.012730501f ,0.8378258f ,-0.03306825f ,0f ,0.825975f ,-0.037557002f ,-0.014701501f ,0.825975f ,-0.0343845f ,-0.02547f ,0.825975f ,-0.02571525f ,-0.029407501f ,0.825975f ,-0.01530675f ,-0.02547f ,0.825975f ,-0.0034649998f ,-0.014701501f ,0.825975f ,0.0025424995f ,0f ,0.825975f ,0.0057150004f ,0.014701501f ,0.825975f ,0.0025424995f ,0.02547f ,0.825975f ,-0.0034649998f ,0.029407501f ,0.825975f ,-0.01530675f ,0.02547f ,0.825975f ,-0.02571525f ,0.014701501f ,0.825975f ,-0.0343845f ,0f ,0.8141243f ,-0.0343845f ,-0.012730501f ,0.8141243f ,-0.03163725f ,-0.02205f ,0.8141243f ,-0.024129001f ,-0.02547f ,0.8141243f ,-0.01530675f ,-0.02205f ,0.8141243f ,-0.0050534997f ,-0.012730501f ,0.8141243f ,-0.00020475045f ,0f ,0.8141243f ,0.0025424995f ,0.012730501f ,0.8141243f ,-0.00020475045f ,0.02205f ,0.8141243f ,-0.0050534997f ,0.02547f ,0.8141243f ,-0.01530675f ,0.02205f ,0.8141243f ,-0.024129001f ,0.012730501f ,0.8141243f ,-0.03163725f ,0f ,0.80544823f ,-0.02571525f ,-0.0073507503f ,0.80544823f ,-0.024129001f ,-0.012730501f ,0.80544823f ,-0.021226501f ,-0.014701501f ,0.80544823f ,-0.01530675f ,-0.012730501f ,0.80544823f ,-0.009387f ,-0.0073507503f ,0.80544823f ,-0.0050534997f ,0f ,0.80544823f ,-0.0034649998f ,0.0073507503f ,0.80544823f ,-0.0050534997f ,0.012730501f ,0.80544823f ,-0.009387f ,0.014701501f ,0.80544823f ,-0.01530675f ,0.012730501f ,0.80544823f ,-0.021226501f ,0.0073507503f ,0.80544823f ,-0.024129001f ,0f ,0.8022825f ,-0.01530675f });
  }
}
private class MFVec2f12 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.6211f ,0.5754f ,0.7851f ,0.572f ,0.7614f ,0.572f ,0.6907f ,0.5698f ,0.62f ,0.5698f ,0.6158f ,0.5702f ,0.5451f ,0.5702f ,0.4167f ,0.5698f ,0.5451f ,0.5702f ,0.6158f ,0.5702f ,0.62f ,0.5698f ,0.6907f ,0.5698f ,0.7614f ,0.572f ,0.8036f ,0.5346f ,0.7761f ,0.5346f ,0.6989f ,0.4838f ,0.6219f ,0.4428f ,0.6154f ,0.4438f ,0.5492f ,0.4639f ,0.4166f ,0.5346f ,0.5492f ,0.4639f ,0.6154f ,0.4438f ,0.6219f ,0.4428f ,0.6989f ,0.4838f ,0.7761f ,0.5346f ,0.7912f ,0.4044f ,0.7635f ,0.4044f ,0.7042f ,0.3925f ,0.6194f ,0.3907f ,0.6148f ,0.3907f ,0.545f ,0.3974f ,0.4163f ,0.4938f ,0.545f ,0.3974f ,0.6148f ,0.3907f ,0.6194f ,0.3907f ,0.7042f ,0.3925f ,0.7635f ,0.4044f ,0.795f ,0.3772f ,0.7662f ,0.3772f ,0.6945f ,0.3645f ,0.6236f ,0.3695f ,0.616f ,0.3695f ,0.5438f ,0.378f ,0.416f ,0.453f ,0.5438f ,0.378f ,0.616f ,0.3695f ,0.6236f ,0.3695f ,0.6945f ,0.3645f ,0.7662f ,0.3772f ,0.7887f ,0.3451f ,0.7635f ,0.3451f ,0.698f ,0.3508f ,0.6262f ,0.3508f ,0.6297f ,0.3503f ,0.5389f ,0.3503f ,0.4181f ,0.3884f ,0.5389f ,0.3503f ,0.6297f ,0.3503f ,0.6262f ,0.3508f ,0.698f ,0.3508f ,0.7635f ,0.3451f ,0.6237f ,0.3398f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFVec3f17 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.94995004f ,-0.012717f ,0f ,0.933525f ,-0.0794835f ,-0.051367503f ,0.933525f ,-0.070551f ,-0.088965006f ,0.933525f ,-0.059751f ,-0.102735005f ,0.933525f ,-0.012717f ,-0.088965006f ,0.933525f ,0.0343215f ,-0.051367503f ,0.933525f ,0.045098998f ,0f ,0.933525f ,0.054054f ,0.051367503f ,0.933525f ,0.045098998f ,0.088965006f ,0.933525f ,0.0343215f ,0.102735005f ,0.933525f ,-0.012717f ,0.088965006f ,0.933525f ,-0.059751f ,0.051367503f ,0.933525f ,-0.070551f ,0f ,0.8881875f ,-0.119736f ,-0.066442505f ,0.8881875f ,-0.105403505f ,-0.115065f ,0.8881875f ,-0.066231005f ,-0.13286251f ,0.8881875f ,-0.012717f ,-0.115065f ,0.8881875f ,0.0408015f ,-0.066442505f ,0.8881875f ,0.0660915f ,0f ,0.8881875f ,0.080424f ,0.066442505f ,0.8881875f ,0.0660915f ,0.115065f ,0.8881875f ,0.0408015f ,0.13286251f ,0.8881875f ,-0.012717f ,0.115065f ,0.8881875f ,-0.066231005f ,0.066442505f ,0.8881875f ,-0.105403505f ,0f ,0.82635754f ,-0.128826f ,-0.0767025f ,0.82635754f ,-0.112266004f ,-0.13286251f ,0.82635754f ,-0.067041f ,-0.1534275f ,0.82635754f ,-0.012717f ,-0.13286251f ,0.82635754f ,0.0490815f ,-0.0767025f ,0.82635754f ,0.080424f ,0f ,0.82635754f ,0.09698401f ,0.0767025f ,0.82635754f ,0.080424f ,0.13286251f ,0.82635754f ,0.0490815f ,0.1534275f ,0.82635754f ,-0.012717f ,0.13286251f ,0.82635754f ,-0.067041f ,0.0767025f ,0.82635754f ,-0.112266004f ,0f ,0.764505f ,-0.112266004f ,-0.066442505f ,0.764505f ,-0.0979335f ,-0.115065f ,0.764505f ,-0.058761004f ,-0.13286251f ,0.764505f ,-0.012717f ,-0.115065f ,0.764505f ,0.0408015f ,-0.066442505f ,0.764505f ,0.0660915f ,0f ,0.764505f ,0.080424f ,0.066442505f ,0.764505f ,0.0660915f ,0.115065f ,0.764505f ,0.0408015f ,0.13286251f ,0.764505f ,-0.012717f ,0.115065f ,0.764505f ,-0.058761004f ,0.066442505f ,0.764505f ,-0.0979335f ,0f ,0.71923953f ,-0.067041f ,-0.038362503f ,0.71923953f ,-0.058761004f ,-0.066442505f ,0.71923953f ,-0.0436185f ,-0.0767025f ,0.71923953f ,-0.012717f ,-0.066442505f ,0.71923953f ,0.018189002f ,-0.038362503f ,0.71923953f ,0.0408015f ,0f ,0.71923953f ,0.0490815f ,0.038362503f ,0.71923953f ,0.0408015f ,0.066442505f ,0.71923953f ,0.018189002f ,0.0767025f ,0.71923953f ,-0.012717f ,0.066442505f ,0.71923953f ,-0.0436185f ,0.038362503f ,0.71923953f ,-0.058761004f ,0f ,0.7026683f ,-0.012717f });
  }
}
private class MFVec2f18 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.6211f ,0.5754f ,0.7851f ,0.572f ,0.7614f ,0.572f ,0.6907f ,0.5698f ,0.62f ,0.5698f ,0.6158f ,0.5702f ,0.5451f ,0.5702f ,0.4167f ,0.5698f ,0.5451f ,0.5702f ,0.6158f ,0.5702f ,0.62f ,0.5698f ,0.6907f ,0.5698f ,0.7614f ,0.572f ,0.8036f ,0.5346f ,0.7761f ,0.5346f ,0.6989f ,0.4838f ,0.6219f ,0.4428f ,0.6154f ,0.4438f ,0.5492f ,0.4639f ,0.4166f ,0.5346f ,0.5492f ,0.4639f ,0.6154f ,0.4438f ,0.6219f ,0.4428f ,0.6989f ,0.4838f ,0.7761f ,0.5346f ,0.7912f ,0.4044f ,0.7635f ,0.4044f ,0.7042f ,0.3925f ,0.6194f ,0.3907f ,0.6148f ,0.3907f ,0.545f ,0.3974f ,0.4163f ,0.4938f ,0.545f ,0.3974f ,0.6148f ,0.3907f ,0.6194f ,0.3907f ,0.7042f ,0.3925f ,0.7635f ,0.4044f ,0.795f ,0.3772f ,0.7662f ,0.3772f ,0.6945f ,0.3645f ,0.6236f ,0.3695f ,0.616f ,0.3695f ,0.5438f ,0.378f ,0.416f ,0.453f ,0.5438f ,0.378f ,0.616f ,0.3695f ,0.6236f ,0.3695f ,0.6945f ,0.3645f ,0.7662f ,0.3772f ,0.7887f ,0.3451f ,0.7635f ,0.3451f ,0.698f ,0.3508f ,0.6262f ,0.3508f ,0.6297f ,0.3503f ,0.5389f ,0.3503f ,0.4181f ,0.3884f ,0.5389f ,0.3503f ,0.6297f ,0.3503f ,0.6262f ,0.3508f ,0.698f ,0.3508f ,0.7635f ,0.3451f ,0.6237f ,0.3398f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1});
  }
}
private class MFInt3222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1});
  }
}
private class MFVec3f23 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1612575f ,0.82506156f ,-0.018348752f ,0.131625f ,0.82506156f ,0.053853754f ,0.065047495f ,0.82506156f ,0.07169625f ,0.018899994f ,0.82506156f ,0.021723751f ,0.018899994f ,0.82506156f ,-0.058421254f ,0.065047495f ,0.82506156f ,-0.10839375f ,0.131625f ,0.82506156f ,-0.09055126f ,0.1612575f ,0.74070007f ,-0.018348752f ,0.131625f ,0.74070007f ,0.053853754f ,0.065047495f ,0.74070007f ,0.07169625f ,0.018899994f ,0.74070007f ,0.021723751f ,0.018899994f ,0.74070007f ,-0.058421254f ,0.065047495f ,0.74070007f ,-0.10839375f ,0.131625f ,0.74070007f ,-0.09055126f ,0.1612575f ,0.59445006f ,-0.018348752f ,0.131625f ,0.59445006f ,0.053853754f ,0.065047495f ,0.59445006f ,0.07169625f ,0.018899994f ,0.59445006f ,0.021723751f ,0.018899994f ,0.59445006f ,-0.058421254f ,0.065047495f ,0.59445006f ,-0.10839375f ,0.131625f ,0.59445006f ,-0.09055126f ,0.170415f ,0.44550005f ,-0.018348752f ,0.13734f ,0.44550005f ,0.06224625f ,0.063f ,0.44550005f ,0.08215875f ,0.019169996f ,0.44550005f ,0.02638125f ,0.019169996f ,0.44550005f ,-0.06307875f ,0.063f ,0.44550005f ,-0.11885626f ,0.13734f ,0.44550005f ,-0.098943755f ,0.1429425f ,0.6287851f ,-0.018348752f ,0.1202175f ,0.6287851f ,0.03704625f ,0.06912f ,0.6287851f ,0.05072625f ,0.035414997f ,0.6287851f ,0.012386251f ,0.035414997f ,0.6287851f ,-0.049083754f ,0.06912f ,0.6287851f ,-0.08742375f ,0.1202175f ,0.6287851f ,-0.07374375f ,0.1431675f ,0.48352507f ,-0.018348752f ,0.12222f ,0.48352507f ,0.02566125f ,0.075168f ,0.48352507f ,0.036528748f ,0.03744f ,0.48352507f ,0.0060637505f ,0.03744f ,0.48352507f ,-0.04276125f ,0.075168f ,0.48352507f ,-0.07322625f ,0.12222f ,0.48352507f ,-0.062358752f ,0.140805f ,0.8698501f ,-0.018348752f ,0.1188675f ,0.8698501f ,0.03508875f ,0.0695925f ,0.8698501f ,0.04827375f ,0.0300825f ,0.8698501f ,0.011306249f ,0.0300825f ,0.8698501f ,-0.04800375f ,0.0695925f ,0.8698501f ,-0.08497126f ,0.1188675f ,0.8698501f ,-0.071786255f ,0.1361025f ,0.40072504f ,-0.018348752f ,0.1178325f ,0.40072504f ,0.023793751f ,0.07673625f ,0.40072504f ,0.03328875f ,0.043785f ,0.40072504f ,0.0066937506f ,0.043785f ,0.40072504f ,-0.039674252f ,0.07673625f ,0.40072504f ,-0.06627376f ,0.1178325f ,0.40072504f ,-0.05677875f ,0.10878075f ,0.37867504f ,-0.018348752f ,0.10078425f ,0.37867504f ,0.0021712496f ,0.082818f ,0.37867504f ,0.006311249f ,0.068399996f ,0.37867504f ,-0.0053077512f ,0.068399996f ,0.37867504f ,-0.027675001f ,0.082818f ,0.37867504f ,-0.039303f ,0.10078425f ,0.37867504f ,-0.035154004f });
  }
}
private class MFVec2f24 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.719f ,0.5576f ,0.6284f ,0.5576f ,0.7414f ,0.5576f ,0.6787f ,0.5576f ,0.5781f ,0.5576f ,0.5154f ,0.5576f ,0.5378f ,0.5576f ,0.6284f ,0.5029f ,0.7509f ,0.3997f ,0.6284f ,0.3997f ,0.7509f ,0.5029f ,0.7811f ,0.3997f ,0.7811f ,0.5029f ,0.6964f ,0.3997f ,0.6964f ,0.5029f ,0.5604f ,0.3997f ,0.5604f ,0.5029f ,0.4756f ,0.3997f ,0.4756f ,0.5029f ,0.5059f ,0.3997f ,0.5059f ,0.5029f ,0.7509f ,0.3197f ,0.6284f ,0.3197f ,0.7811f ,0.3197f ,0.6964f ,0.3197f ,0.5604f ,0.3197f ,0.4756f ,0.3197f ,0.5059f ,0.3197f ,0.7651f ,0.2166f ,0.6284f ,0.2166f ,0.7989f ,0.2166f ,0.7043f ,0.2166f ,0.5525f ,0.2166f ,0.4579f ,0.2166f ,0.4917f ,0.2166f ,0.7224f ,0.263f ,0.6284f ,0.263f ,0.7456f ,0.263f ,0.6805f ,0.263f ,0.5762f ,0.263f ,0.5112f ,0.263f ,0.5344f ,0.263f ,0.8705f ,0.5452f ,0.8705f ,0.5383f ,0.8705f ,0.5369f ,0.8705f ,0.5408f ,0.8705f ,0.5483f ,0.8705f ,0.5522f ,0.8705f ,0.5509f ,0.917f ,0.5452f ,0.917f ,0.5266f ,0.89f ,0.5304f ,0.89f ,0.5452f ,0.917f ,0.522f ,0.89f ,0.5268f ,0.917f ,0.5349f ,0.89f ,0.537f ,0.917f ,0.5555f ,0.89f ,0.5534f ,0.917f ,0.5684f ,0.89f ,0.5636f ,0.917f ,0.5638f ,0.89f ,0.56f ,0.8746f ,0.531f ,0.8746f ,0.5452f ,0.8746f ,0.5279f ,0.8746f ,0.5368f ,0.8746f ,0.5524f ,0.8746f ,0.5613f ,0.8746f ,0.5581f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
private class MFVec3f29 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.10877851f ,0.43062302f ,-0.018911252f ,0.10078201f ,0.43062302f ,0.0016087501f ,0.08281576f ,0.43062302f ,0.00576225f ,0.06840001f ,0.43062302f ,-0.0058702505f ,0.06840001f ,0.43062302f ,-0.028237501f ,0.08281576f ,0.43062302f ,-0.0398655f ,0.10078201f ,0.43062302f ,-0.0357165f ,0.1451925f ,0.30503252f ,-0.018911252f ,0.12546001f ,0.32733002f ,0.025989752f ,0.12042001f ,0.372195f ,0.035012253f ,0.140265f ,0.36580503f ,-0.018911252f ,0.07436026f ,0.32733002f ,0.038319748f ,0.075807005f ,0.372195f ,0.045879755f ,0.041895006f ,0.30503252f ,0.00879975f ,0.040027507f ,0.36580503f ,0.0025965006f ,0.041895006f ,0.2877075f ,-0.05021775f ,0.040027507f ,0.36580503f ,-0.040419f ,0.07436026f ,0.2877075f ,-0.08475526f ,0.075807005f ,0.36580503f ,-0.072717756f ,0.12546001f ,0.2877075f ,-0.07242525f ,0.12042001f ,0.36580503f ,-0.061850253f ,0.11783251f ,0.408753f ,0.02322225f ,0.13610251f ,0.408753f ,-0.018911252f ,0.07673401f ,0.408753f ,0.032717254f ,0.043785006f ,0.408753f ,0.006122251f ,0.043785006f ,0.408753f ,-0.040236752f ,0.07673401f ,0.408753f ,-0.065810256f ,0.11783251f ,0.408753f ,-0.05633775f ,0.1287675f ,0.11812501f ,-0.01936575f ,0.11334601f ,0.11835001f ,0.015774751f ,0.078682505f ,0.11835001f ,0.02445975f ,0.050895005f ,0.11812501f ,0.00013950035f ,0.050895005f ,0.117675014f ,-0.04140225f ,0.078682505f ,0.117675014f ,-0.058632754f ,0.11334601f ,0.117675014f ,-0.04994775f ,0.108522005f ,0.08190001f ,-0.018900001f ,0.100719005f ,0.08190001f ,-0.00112275f ,0.08318701f ,0.08190001f ,0.0032647487f ,0.069120005f ,0.08190001f ,-0.009033751f ,0.069120005f ,0.08167501f ,-0.030044252f ,0.08318701f ,0.08167501f ,-0.0387585f ,0.100719005f ,0.08167501f ,-0.034366503f });
  }
}
private class MFVec2f30 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9309f ,0.5848f ,0.919f ,0.5848f ,0.8921f ,0.5848f ,0.8706f ,0.5848f ,0.8706f ,0.5848f ,0.8921f ,0.5848f ,0.919f ,0.5848f ,0.9845f ,0.5321f ,0.955f ,0.5475f ,0.9491f ,0.5599f ,0.9788f ,0.5571f ,0.8787f ,0.5475f ,0.8825f ,0.5599f ,0.8302f ,0.5321f ,0.8291f ,0.5571f ,0.8302f ,0.52f ,0.8291f ,0.5571f ,0.8787f ,0.52f ,0.8825f ,0.5571f ,0.955f ,0.52f ,0.9491f ,0.5571f ,0.9444f ,0.5755f ,0.9717f ,0.5755f ,0.8831f ,0.5755f ,0.8339f ,0.5755f ,0.8339f ,0.5755f ,0.8831f ,0.5755f ,0.9444f ,0.5755f ,0.9632f ,0.3942f ,0.9402f ,0.3943f ,0.8884f ,0.3943f ,0.8469f ,0.3942f ,0.8469f ,0.3941f ,0.8884f ,0.3941f ,0.9402f ,0.3941f ,0.9325f ,0.3742f ,0.9208f ,0.3742f ,0.8947f ,0.3742f ,0.8737f ,0.3742f ,0.8737f ,0.3741f ,0.8947f ,0.3741f ,0.9208f ,0.3741f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,34,21,-1,21,15,13,-1,9,20,21,-1,21,34,9,-1,0,2,14,-1,14,15,0,-1,30,3,16,-1,16,33,30,-1,3,4,25,-1,25,16,3,-1,22,5,18,-1,18,17,22,-1,5,6,29,-1,29,18,5,-1,6,27,19,-1,7,1,21,-1,21,20,7,-1,1,0,15,-1,15,21,1,-1,15,14,32,-1,32,13,15,-1,33,16,12,-1,12,11,33,-1,25,23,12,-1,12,16,25,-1,17,18,10,-1,10,24,17,-1,18,29,28,-1,28,10,18,-1,19,27,26,-1,26,8,19,-1,4,22,17,-1,17,25,4,-1,25,17,24,-1,24,23,25,-1,20,9,26,-1,26,27,20,-1,6,7,20,-1,20,27,6,-1,29,19,8,-1,8,28,29,-1,6,19,29,-1,1,31,0,-1,0,31,2,-1,31,3,30,-1,3,31,4,-1,4,31,22,-1,22,31,5,-1,5,31,6,-1,6,31,7,-1,7,31,1,-1,2,31,30,-1,14,2,30,-1,30,33,14,-1,32,14,33,-1,33,11,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,26,35,36,-1,36,8,26,-1,8,36,37,-1,37,28,8,-1,28,37,38,-1,38,10,28,-1,10,38,39,-1,39,24,10,-1,24,39,40,-1,40,23,24,-1,23,40,41,-1,41,12,23,-1,12,41,42,-1,42,11,12,-1,11,42,43,-1,43,32,11,-1,32,43,44,-1,44,13,32,-1,13,44,45,-1,45,34,13,-1,34,45,46,-1,46,9,34,-1,9,46,35,-1,35,26,9,-1});
  }
}
private class MFInt3234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,34,27,-1,27,12,5,-1,7,28,27,-1,27,34,7,-1,9,10,11,-1,11,12,9,-1,30,13,14,-1,14,33,30,-1,13,15,16,-1,16,14,13,-1,17,18,19,-1,19,20,17,-1,18,21,22,-1,22,19,18,-1,21,23,24,-1,25,26,27,-1,27,28,25,-1,26,9,12,-1,12,27,26,-1,12,11,32,-1,32,5,12,-1,33,14,4,-1,4,3,33,-1,16,8,4,-1,4,14,16,-1,20,19,2,-1,2,6,20,-1,19,22,29,-1,29,2,19,-1,24,23,1,-1,1,0,24,-1,15,17,20,-1,20,16,15,-1,16,20,6,-1,6,8,16,-1,28,7,1,-1,1,23,28,-1,21,25,28,-1,28,23,21,-1,22,24,0,-1,0,29,22,-1,21,24,22,-1,26,31,9,-1,9,31,10,-1,31,13,30,-1,13,31,15,-1,15,31,17,-1,17,31,18,-1,18,31,21,-1,21,31,25,-1,25,31,26,-1,10,31,30,-1,11,10,30,-1,30,33,11,-1,32,11,33,-1,33,3,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,1,35,36,-1,36,0,1,-1,0,36,37,-1,37,29,0,-1,29,37,38,-1,38,2,29,-1,2,38,39,-1,39,6,2,-1,6,39,40,-1,40,8,6,-1,8,40,41,-1,41,4,8,-1,4,41,42,-1,42,3,4,-1,3,42,43,-1,43,32,3,-1,32,43,44,-1,44,5,32,-1,5,44,45,-1,45,34,5,-1,34,45,46,-1,46,7,34,-1,7,46,35,-1,35,1,7,-1});
  }
}
private class MFVec3f35 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.06994575f ,0.09505351f ,-0.03718125f ,0.06309f ,0.09237601f ,-0.0168165f ,0.080838f ,0.09656551f ,-0.04665375f ,0.1084275f ,0.09544276f ,-0.037136253f ,0.1141425f ,0.09342451f ,-0.022353752f ,0.105851255f ,0.09386326f ,0.0021959997f ,0.0876375f ,0.09476551f ,0.008228251f ,0.07175475f ,0.09347176f ,0.0022455f ,0.087183f ,0.070897505f ,0.011817001f ,0.065767504f ,0.066015005f ,0.0019170004f ,0.108978756f ,0.06432751f ,0.002529f ,0.094729505f ,0.062122505f ,-0.05297625f ,0.112095006f ,0.0650475f ,-0.041276254f ,0.0659025f ,0.0650475f ,-0.042266253f ,0.081063f ,0.08393626f ,-0.048296254f ,0.06808725f ,0.083596505f ,-0.038801253f ,0.106731005f ,0.084505506f ,-0.038441252f ,0.118305005f ,0.07278751f ,-0.012204001f ,0.104967006f ,0.080829f ,0.0025919997f ,0.0883035f ,0.08372475f ,0.008928f ,0.07058025f ,0.08252551f ,0.0026234996f ,0.060345f ,0.08082001f ,-0.019035f ,0.11391751f ,0.09300826f ,-0.011592001f ,0.11529f ,0.058275007f ,-0.025362002f ,0.114885f ,0.058117505f ,-0.013680001f ,0.118777506f ,0.073818006f ,-0.02366775f ,0.077139005f ,0.068490006f ,0.0086535f ,0.08029575f ,0.083139755f ,0.0069120005f ,0.09797625f ,0.06765751f ,0.0089595f ,0.09749025f ,0.082291506f ,0.006896251f ,0.09421425f ,0.096700504f ,-0.046631254f ,0.0879975f ,0.10300501f ,-0.017669251f ,0.082237504f ,0.062190004f ,-0.05308875f ,0.09356175f ,0.084231004f ,-0.048228752f ,0.0588825f ,0.059737504f ,-0.019131752f ,0.079011f ,0.0498825f ,0.0046327505f ,0.08658675f ,0.052605003f ,0.0069435006f ,0.0947745f ,0.0492075f ,0.0048307497f ,0.10325925f ,0.045832507f ,-0.000087750486f ,0.10823175f ,0.039330006f ,-0.013761001f ,0.1085985f ,0.039690007f ,-0.024140252f ,0.106078506f ,0.047475006f ,-0.03729375f ,0.091944f ,0.044302505f ,-0.046721254f ,0.083553754f ,0.044167504f ,-0.046788752f ,0.07038675f ,0.046935007f ,-0.03808125f ,0.064305f ,0.040590003f ,-0.018110251f ,0.07012575f ,0.047182504f ,-0.00056250015f });
  }
}
private class MFVec2f36 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.227f ,0.1089f ,0.2217f ,0.1285f ,0.2533f ,0.0835f ,0.273f ,0.1232f ,0.2824f ,0.0941f ,0.2433f ,0.1632f ,0.2685f ,0.0797f ,0.2165f ,0.148f ,0.2759f ,0.0832f ,0.2428f ,0.156f ,0.2563f ,0.142f ,0.2584f ,0.1419f ,0.2431f ,0.1588f ,0.2715f ,0.1062f ,0.2761f ,0.1011f ,0.2698f ,0.09f ,0.2775f ,0.078f ,0.2629f ,0.0863f ,0.248f ,0.0935f ,0.2498f ,0.0895f ,0.2702f ,0.0748f ,0.2296f ,0.1148f ,0.2397f ,0.101f ,0.2249f ,0.1266f ,0.2295f ,0.1126f ,0.2207f ,0.1406f ,0.2252f ,0.1591f ,0.2245f ,0.1634f ,0.2202f ,0.1406f ,0.2407f ,0.0951f ,0.2662f ,0.1249f ,0.2599f ,0.1313f ,0.2623f ,0.1418f ,0.2691f ,0.1232f ,0.2231f ,0.166f ,0.2217f ,0.1285f ,0.227f ,0.1089f ,0.2407f ,0.0951f ,0.2533f ,0.0835f ,0.2685f ,0.0797f ,0.2759f ,0.0832f ,0.2824f ,0.0941f ,0.273f ,0.1232f ,0.2623f ,0.1418f ,0.2433f ,0.1632f ,0.2231f ,0.166f ,0.2165f ,0.148f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1});
  }
}
private class MFVec3f41 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.098487005f ,0.05500125f ,0.0201375f ,0.062829f ,0.013634999f ,0.014517f ,0.059820753f ,0.03698325f ,0.014085f ,0.06609825f ,0.0054899994f ,0.01768725f ,0.09779175f ,0.003824999f ,0.020232001f ,0.08723475f ,0.063540004f ,0.01936125f ,0.063063f ,0.05187375f ,0.016503751f ,0.07562926f ,0.06057f ,0.02101725f ,0.087003f ,0.0034874994f ,0.0193365f ,0.07519276f ,0.0036225005f ,0.021168001f ,0.087165006f ,0.070897505f ,0.011817f ,0.065754004f ,0.066015005f ,0.001917f ,0.077121004f ,0.068490006f ,0.0086535f ,0.097956f ,0.06763501f ,0.0089595f ,0.064188f ,0.0036900009f ,0.0018135f ,0.09832501f ,0.002902499f ,0.00154125f ,0.08172225f ,0.002925f ,0.0029565f ,0.061002f ,0.01296f ,0.0012329998f ,0.058113f ,0.03660075f ,0.0011475f ,0.06462675f ,0.014735251f ,0.022644f ,0.061724253f ,0.031797f ,0.022223251f ,0.0646335f ,0.042007502f ,0.024597f ,0.076032005f ,0.0480015f ,0.028962001f ,0.086053506f ,0.049934253f ,0.027101252f ,0.095328f ,0.04461075f ,0.0276345f ,0.094680004f ,0.008639999f ,0.027724503f ,0.08633926f ,0.0084375f ,0.02715075f ,0.07481025f ,0.0085275f ,0.029029502f ,0.0672165f ,0.009720001f ,0.025728751f ,0.08808526f ,0.0667575f ,-0.0017707502f ,0.07940251f ,0.064687505f ,-0.00476775f ,0.07080525f ,0.062887505f ,-0.011164501f ,0.06409575f ,0.03715875f ,-0.011531251f ,0.066798f ,0.01494f ,-0.01134675f ,0.068703756f ,0.0092475f ,-0.010599751f ,0.082923755f ,0.008639999f ,-0.009783001f ,0.0945855f ,0.008707499f ,-0.0116955f ,0.094239004f ,0.065092504f ,-0.0049725007f ,0.107212506f ,0.051358502f ,0.015259501f ,0.10678501f ,0.0570015f ,0.0071280003f ,0.10392751f ,0.061785f ,-0.0017865001f ,0.1042425f ,0.011317501f ,-0.007803001f ,0.1071f ,0.0070424993f ,0.001953f ,0.1066725f ,0.007897499f ,0.016749f ,0.104895f ,0.00648f ,0.02374875f ,0.10543501f ,0.04275225f ,0.0236565f });
  }
}
private class MFVec2f42 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2314f ,0.0879f ,0.21f ,0.1541f ,0.2053f ,0.1595f ,0.2104f ,0.1443f ,0.2271f ,0.0958f ,0.2224f ,0.1067f ,0.2032f ,0.149f ,0.2132f ,0.1285f ,0.2197f ,0.1123f ,0.2163f ,0.1174f ,0.227f ,0.1089f ,0.2165f ,0.148f ,0.2217f ,0.1285f ,0.2407f ,0.0951f ,0.2178f ,0.1526f ,0.2363f ,0.0929f ,0.2213f ,0.1179f ,0.2171f ,0.1588f ,0.2129f ,0.1643f ,0.21f ,0.1541f ,0.2053f ,0.1595f ,0.2032f ,0.149f ,0.2132f ,0.1285f ,0.2224f ,0.1067f ,0.2314f ,0.0879f ,0.2271f ,0.0958f ,0.2197f ,0.1123f ,0.2163f ,0.1174f ,0.2104f ,0.1443f ,0.227f ,0.1089f ,0.2217f ,0.1285f ,0.2165f ,0.148f ,0.2129f ,0.1643f ,0.2171f ,0.1588f ,0.2178f ,0.1526f ,0.2213f ,0.1179f ,0.2363f ,0.0929f ,0.2407f ,0.0951f ,0.2314f ,0.0879f ,0.2407f ,0.0951f ,0.2407f ,0.0951f ,0.2363f ,0.0929f ,0.2363f ,0.0929f ,0.2271f ,0.0958f ,0.2271f ,0.0958f ,0.2314f ,0.0879f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,12,4,-1,1,0,6,-1,6,7,1,-1,10,12,0,-1,0,1,10,-1,1,2,11,-1,11,10,1,-1,8,3,2,-1,2,5,8,-1,11,2,13,-1,12,15,4,-1,9,6,0,-1,0,4,9,-1,1,7,5,-1,5,2,1,-1,3,14,13,-1,13,2,3,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,3,16,17,-1,17,14,3,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,4,15,-1,4,19,20,-1,20,9,4,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1});
  }
}
private class MFInt3246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,12,1,-1,2,0,6,-1,6,7,2,-1,10,12,0,-1,0,2,10,-1,2,3,11,-1,11,10,2,-1,8,4,3,-1,3,5,8,-1,11,3,13,-1,12,15,1,-1,9,6,0,-1,0,1,9,-1,2,7,5,-1,5,3,2,-1,4,14,13,-1,13,3,4,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,4,16,17,-1,17,14,4,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,1,15,-1,1,19,20,-1,20,9,1,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,4,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1});
  }
}
private class MFVec3f47 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.06738075f ,0.007155002f ,0.027960751f ,0.06141825f ,0.014805002f ,0.0285525f ,0.060390003f ,0.0377505f ,0.0273105f ,0.0741555f ,0.052677f ,0.0291915f ,0.074088f ,0.0040500015f ,0.02895075f ,0.0568935f ,0.036128253f ,0.042624f ,0.060585752f ,0.0072000013f ,0.0433215f ,0.05570775f ,0.015185252f ,0.0417465f ,0.07285275f ,0.044581503f ,0.045099f ,0.072911255f ,0.0039150007f ,0.045414f ,0.062847f ,0.013655252f ,0.01451475f ,0.05983875f ,0.036999002f ,0.014085f ,0.0661185f ,0.0054900018f ,0.017685f ,0.063081004f ,0.051887255f ,0.0165015f ,0.07564725f ,0.060592502f ,0.021015f ,0.07521075f ,0.0036225005f ,0.021168001f ,0.07998075f ,0.0503325f ,0.028161f ,0.08078175f ,0.053957254f ,0.02443275f ,0.080397f ,0.0065925024f ,0.02455425f ,0.0797265f ,0.0068625016f ,0.02949525f ,0.07875f ,0.006750002f ,0.0431865f ,0.078689255f ,0.042828754f ,0.042894002f ,0.061911f ,0.010012502f ,0.051466502f ,0.057933003f ,0.01576575f ,0.0500715f ,0.058986f ,0.032328002f ,0.050904002f ,0.072972f ,0.03885525f ,0.053244002f ,0.07630425f ,0.037944004f ,0.0516465f ,0.0763605f ,0.009157502f ,0.051894f ,0.072567f ,0.0074925018f ,0.0535365f });
  }
}
private class MFVec2f48 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2027f ,0.1355f ,0.2132f ,0.1171f ,0.1958f ,0.1447f ,0.1899f ,0.1499f ,0.2047f ,0.1286f ,0.1825f ,0.1473f ,0.1858f ,0.1369f ,0.1864f ,0.1452f ,0.1953f ,0.1244f ,0.2059f ,0.1148f ,0.21f ,0.1541f ,0.2053f ,0.1595f ,0.2104f ,0.1443f ,0.2032f ,0.149f ,0.2132f ,0.1285f ,0.2163f ,0.1174f ,0.2047f ,0.1286f ,0.2132f ,0.1285f ,0.2163f ,0.1174f ,0.2132f ,0.1171f ,0.2059f ,0.1148f ,0.1953f ,0.1244f ,0.1858f ,0.1369f ,0.1864f ,0.1452f ,0.1825f ,0.1473f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.2059f ,0.1148f ,0.2059f ,0.1148f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,11,14,-1,5,7,2,-1,2,0,5,-1,1,10,9,-1,9,2,1,-1,15,8,20,-1,20,23,15,-1,3,4,19,-1,19,21,3,-1,13,4,10,-1,10,18,13,-1,12,1,6,-1,6,16,12,-1,6,1,2,-1,2,7,6,-1,5,0,14,-1,14,17,5,-1,10,4,3,-1,3,9,10,-1,9,11,0,-1,0,2,9,-1,10,1,12,-1,12,18,10,-1,8,11,9,-1,9,3,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,3,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,29,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1});
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,11,14,-1,5,7,2,-1,2,1,5,-1,3,10,9,-1,9,2,3,-1,15,8,20,-1,20,23,15,-1,0,4,19,-1,19,21,0,-1,13,4,10,-1,10,18,13,-1,12,3,6,-1,6,16,12,-1,6,3,2,-1,2,7,6,-1,5,1,14,-1,14,17,5,-1,10,4,0,-1,0,9,10,-1,9,11,1,-1,1,2,9,-1,10,3,12,-1,12,18,10,-1,8,11,9,-1,9,0,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,0,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,14,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1});
  }
}
private class MFVec3f53 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.051975f ,0.0019080002f ,0.075330004f ,0.0506295f ,0.0285075f ,0.082012504f ,0.04752675f ,0.01116f ,0.0808425f ,0.053617503f ,0.01532025f ,0.048228752f ,0.055372503f ,0.03542625f ,0.0511965f ,0.05285025f ,0.0037192504f ,0.093127504f ,0.05261625f ,0.0250965f ,0.09387f ,0.050609253f ,0.01116f ,0.09549f ,0.05811975f ,0.0072247502f ,0.0498645f ,0.04859775f ,0.012955501f ,0.0679275f ,0.05177925f ,0.031326752f ,0.0700875f ,0.05265225f ,0.0022815005f ,0.066456005f ,0.07317226f ,0.03153375f ,0.08082f ,0.072256505f ,0.04095225f ,0.054279003f ,0.0732645f ,0.0019080002f ,0.0785475f ,0.0714735f ,0.0038182493f ,0.051799502f ,0.074918255f ,0.02698425f ,0.0935325f ,0.0749565f ,0.0037125007f ,0.092700005f ,0.07239825f ,0.03625425f ,0.068175f ,0.05688f ,0.036126003f ,0.0426105f ,0.06057225f ,0.0072022504f ,0.0433125f ,0.055694252f ,0.015183f ,0.04174875f ,0.07283925f ,0.044577003f ,0.04509225f ,0.072897755f ,0.0039082495f ,0.045405f ,0.078426f ,0.03208275f ,0.066483006f ,0.0783855f ,0.036792f ,0.05255775f ,0.07829776f ,0.03806325f ,0.04930875f ,0.0785025f ,0.008253001f ,0.0495585f ,0.077611506f ,0.008226f ,0.05178825f ,0.0793215f ,0.006338251f ,0.078232504f ,0.080478005f ,0.0076162494f ,0.088245004f ,0.080475755f ,0.023895001f ,0.08883f ,0.079168506f ,0.0273735f ,0.079110004f ,0.056637f ,0.0062347497f ,0.09819f ,0.05477175f ,0.011859749f ,0.10012501f ,0.05644125f ,0.022396501f ,0.09879751f ,0.07497675f ,0.023823f ,0.098505005f ,0.079596005f ,0.0214875f ,0.0946125f ,0.079598255f ,0.00918225f ,0.09411751f ,0.0750105f ,0.00623025f ,0.097807504f ,0.064210504f ,0.01652625f ,0.036648f ,0.067097254f ,0.011729251f ,0.0378405f ,0.07562026f ,0.009486f ,0.03848625f ,0.07753275f ,0.0111195f ,0.04030425f ,0.077359505f ,0.035739f ,0.040104f ,0.0757215f ,0.038295f ,0.037775252f ,0.065103754f ,0.03280275f ,0.037471503f });
  }
}
private class MFVec2f54 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.177f ,0.1457f ,0.1567f ,0.1378f ,0.1506f ,0.1431f ,0.1539f ,0.1386f ,0.1751f ,0.1447f ,0.1523f ,0.1336f ,0.1493f ,0.1348f ,0.1463f ,0.1377f ,0.1689f ,0.1382f ,0.1638f ,0.1444f ,0.1645f ,0.1416f ,0.1607f ,0.138f ,0.1731f ,0.1071f ,0.1859f ,0.1202f ,0.175f ,0.1048f ,0.1985f ,0.1126f ,0.1682f ,0.1025f ,0.1699f ,0.1017f ,0.1795f ,0.1136f ,0.1825f ,0.1473f ,0.1858f ,0.1369f ,0.1864f ,0.1452f ,0.1953f ,0.1244f ,0.2059f ,0.1148f ,0.1795f ,0.1136f ,0.1859f ,0.1202f ,0.1953f ,0.1244f ,0.2059f ,0.1148f ,0.1985f ,0.1126f ,0.175f ,0.1048f ,0.1699f ,0.1017f ,0.1682f ,0.1025f ,0.1731f ,0.1071f ,0.1523f ,0.1336f ,0.1463f ,0.1377f ,0.1493f ,0.1348f ,0.1682f ,0.1025f ,0.1682f ,0.1025f ,0.1699f ,0.1017f ,0.1699f ,0.1017f ,0.1864f ,0.1452f ,0.1858f ,0.1369f ,0.2059f ,0.1148f ,0.2059f ,0.1148f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.1825f ,0.1473f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,16,17,-1,17,10,9,-1,11,8,2,-1,2,1,11,-1,7,3,2,-1,2,8,7,-1,7,13,4,-1,4,3,7,-1,12,5,4,-1,4,13,12,-1,5,12,0,-1,0,6,5,-1,0,11,1,-1,1,6,0,-1,14,15,19,-1,19,20,14,-1,14,10,17,-1,17,15,14,-1,9,21,18,-1,18,16,9,-1,7,8,9,-1,9,10,7,-1,8,11,21,-1,21,9,8,-1,12,13,14,-1,14,20,12,-1,13,7,10,-1,10,14,13,-1,11,22,21,-1,0,12,23,-1,23,24,0,-1,11,0,24,-1,24,22,11,-1,23,12,20,-1,37,42,41,-1,41,40,39,-1,37,41,39,-1,38,37,39,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,27,26,25,-1,28,27,25,-1,28,25,29,-1,35,31,30,-1,30,36,35,-1,17,25,26,-1,26,15,17,-1,15,26,27,-1,27,19,15,-1,19,27,28,-1,28,18,19,-1,18,28,29,-1,29,16,18,-1,16,29,25,-1,25,17,16,-1,19,30,31,-1,31,20,19,-1,20,31,32,-1,32,23,20,-1,23,32,33,-1,33,24,23,-1,24,33,34,-1,34,22,24,-1,22,34,35,-1,35,21,22,-1,21,35,36,-1,36,18,21,-1,18,36,30,-1,30,19,18,-1,2,37,38,-1,38,1,2,-1,1,38,39,-1,39,6,1,-1,6,39,40,-1,40,5,6,-1,5,40,41,-1,41,4,5,-1,4,41,42,-1,42,3,4,-1,3,42,37,-1,37,2,3,-1});
  }
}
private class MFInt3258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,28,29,-1,29,1,2,-1,11,13,4,-1,4,5,11,-1,10,6,4,-1,4,13,10,-1,10,12,7,-1,7,6,10,-1,14,8,7,-1,7,12,14,-1,8,14,3,-1,3,9,8,-1,3,11,5,-1,5,9,3,-1,0,27,31,-1,31,33,0,-1,0,1,29,-1,29,27,0,-1,2,35,30,-1,30,28,2,-1,15,16,17,-1,17,18,15,-1,16,19,34,-1,34,17,16,-1,20,21,22,-1,22,32,20,-1,21,23,24,-1,24,22,21,-1,19,36,34,-1,25,20,37,-1,37,39,25,-1,19,26,38,-1,38,36,19,-1,37,20,32,-1,52,57,56,-1,56,55,54,-1,52,56,54,-1,53,52,54,-1,50,49,48,-1,50,48,47,-1,46,50,47,-1,42,41,40,-1,43,42,40,-1,43,40,44,-1,50,46,45,-1,45,51,50,-1,29,40,41,-1,41,27,29,-1,27,41,42,-1,42,31,27,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,28,30,-1,28,44,40,-1,40,29,28,-1,31,45,46,-1,46,33,31,-1,32,46,47,-1,47,37,32,-1,37,47,48,-1,48,39,37,-1,38,48,49,-1,49,36,38,-1,36,49,50,-1,50,34,36,-1,35,50,51,-1,51,30,35,-1,30,51,45,-1,45,31,30,-1,4,52,53,-1,53,5,4,-1,5,53,54,-1,54,9,5,-1,9,54,55,-1,55,8,9,-1,8,55,56,-1,56,7,8,-1,7,56,57,-1,57,6,7,-1,6,57,52,-1,52,4,6,-1});
  }
}
private class MFVec3f59 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.07342425f ,0.01488825f ,0.10537875f ,0.07352775f ,0.02205f ,0.115497f ,0.05033475f ,0.022403251f ,0.11580075f ,0.04902075f ,0.011675251f ,0.116028f ,0.05081625f ,0.0018719996f ,0.115119f ,0.073791f ,0.0018719996f ,0.1151775f ,0.0752085f ,0.011412f ,0.11577825f ,0.05078475f ,0.012258001f ,0.10549125f ,0.05200875f ,0.02474775f ,0.103212f ,0.05340375f ,0.024219f ,0.09903375f ,0.051588f ,0.01115325f ,0.10004625f ,0.07210575f ,0.02435175f ,0.103914f ,0.072018f ,0.0040387497f ,0.104242496f ,0.0523755f ,0.004059f ,0.1038825f ,0.053912252f ,0.004491f ,0.098487f ,0.05285025f ,0.0037125f ,0.093141f ,0.05261625f ,0.025092f ,0.09387225f ,0.050607f ,0.01115325f ,0.09548775f ,0.07491825f ,0.026977502f ,0.093541496f ,0.0749565f ,0.0037079998f ,0.0927f ,0.0747855f ,0.00449775f ,0.0993735f ,0.07481475f ,0.0245385f ,0.099339746f ,0.074882254f ,0.0222525f ,0.1037655f ,0.07522425f ,0.008284501f ,0.104076f ,0.07492725f ,0.015561f ,0.105093f ,0.05316975f ,0.01156725f ,0.089975245f ,0.054594f ,0.00672525f ,0.087770246f ,0.07180425f ,0.006714f ,0.0876285f ,0.071775004f ,0.02408625f ,0.08826525f ,0.05474025f ,0.022653f ,0.08829f ,0.0791415f ,0.0084645f ,0.092882246f ,0.0790425f ,0.0089235f ,0.09675f ,0.07929675f ,0.011117251f ,0.09947475f ,0.079123504f ,0.015336f ,0.10006425f ,0.07909875f ,0.01921275f ,0.09929475f ,0.07905825f ,0.02053575f ,0.09672975f ,0.079119004f ,0.021951001f ,0.0933705f ,0.053001f ,0.01926225f ,0.120915f ,0.071019f ,0.01898775f ,0.120645f ,0.07224075f ,0.01127025f ,0.121005f ,0.07126425f ,0.00471825f ,0.120464996f ,0.05333625f ,0.0047204997f ,0.120375f ,0.0520695f ,0.011637f ,0.1212075f });
  }
}
private class MFVec2f60 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.148f ,0.1294f ,0.142f ,0.1322f ,0.1446f ,0.131f ,0.1613f ,0.0957f ,0.1341f ,0.1263f ,0.1554f ,0.0919f ,0.1317f ,0.1272f ,0.1363f ,0.1268f ,0.1571f ,0.0927f ,0.1559f ,0.0889f ,0.1392f ,0.1292f ,0.16f ,0.0958f ,0.1443f ,0.128f ,0.1415f ,0.1284f ,0.1616f ,0.0962f ,0.1346f ,0.0953f ,0.1273f ,0.0961f ,0.126f ,0.0891f ,0.1339f ,0.0889f ,0.1175f ,0.0992f ,0.228f ,0.0809f ,0.2186f ,0.0857f ,0.2172f ,0.0848f ,0.2097f ,0.0859f ,0.2098f ,0.0901f ,0.2285f ,0.0738f ,0.1152f ,0.1058f ,0.1523f ,0.1336f ,0.1493f ,0.1348f ,0.1463f ,0.1377f ,0.1682f ,0.1025f ,0.1699f ,0.1017f ,0.2293f ,0.0837f ,0.1648f ,0.0986f ,0.112f ,0.093f ,0.1632f ,0.098f ,0.113f ,0.0993f ,0.2302f ,0.0796f ,0.1153f ,0.1053f ,0.2293f ,0.0736f ,0.1463f ,0.1377f ,0.1523f ,0.1336f ,0.1699f ,0.1017f ,0.1682f ,0.1025f ,0.1493f ,0.1348f ,0.1699f ,0.1017f ,0.1648f ,0.0986f ,0.2302f ,0.0796f ,0.2293f ,0.0736f ,0.113f ,0.0993f ,0.112f ,0.093f ,0.1682f ,0.1025f ,0.1341f ,0.1263f ,0.1554f ,0.0919f ,0.1559f ,0.0889f ,0.1571f ,0.0927f ,0.1363f ,0.1268f ,0.1317f ,0.1272f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,5,-1,5,2,3,-1,1,2,5,-1,5,0,1,-1,1,0,6,-1,6,7,1,-1,8,2,1,-1,1,7,8,-1,3,2,8,-1,8,9,3,-1,10,4,3,-1,3,9,10,-1,11,5,4,-1,4,10,11,-1,0,5,11,-1,11,6,0,-1,7,6,12,-1,12,13,7,-1,14,8,7,-1,7,13,14,-1,9,8,14,-1,14,15,9,-1,16,10,9,-1,9,15,16,-1,17,11,10,-1,10,16,17,-1,6,11,17,-1,17,12,6,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,18,19,-1,19,13,12,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,22,-1,22,16,15,-1,16,22,23,-1,23,17,16,-1,17,23,18,-1,18,12,17,-1});
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,13,14,15,-1,15,12,13,-1,8,3,5,-1,5,6,8,-1,0,3,8,-1,8,9,0,-1,10,1,0,-1,0,9,10,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,7,4,-1,12,15,16,-1,16,18,12,-1,20,8,6,-1,6,19,20,-1,9,8,20,-1,20,21,9,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,7,11,23,-1,23,17,7,-1,24,29,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,16,24,25,-1,25,18,16,-1,19,25,26,-1,26,20,19,-1,20,26,27,-1,27,21,20,-1,21,27,28,-1,28,22,21,-1,22,28,29,-1,29,23,22,-1,23,29,24,-1,24,17,23,-1});
  }
}
private class MFVec3f65 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0698625f ,0.018261f ,0.13208626f ,0.05414625f ,0.018553501f ,0.132561f ,0.0542925f ,0.01017225f ,0.13577175f ,0.05443425f ,0.0033029998f ,0.13153726f ,0.0696375f ,0.0033029998f ,0.13094775f ,0.070056f ,0.01017225f ,0.1353735f ,0.07279425f ,0.020025f ,0.12442725f ,0.0505935f ,0.020385f ,0.124416f ,0.049365f ,0.0111105f ,0.12528001f ,0.050811753f ,0.0021914996f ,0.124276504f ,0.07271325f ,0.0022252498f ,0.124544255f ,0.0746505f ,0.0083294995f ,0.12531151f ,0.07353675f ,0.02205f ,0.11549701f ,0.0503415f ,0.02240325f ,0.115803f ,0.0490275f ,0.011673f ,0.11603025f ,0.05082525f ,0.0018697499f ,0.11512125f ,0.07379775f ,0.0018697499f ,0.115179755f ,0.0752175f ,0.011412f ,0.1157805f ,0.070902f ,0.019165501f ,0.109989f ,0.05298525f ,0.01943775f ,0.11025225f ,0.05206275f ,0.0118755f ,0.11055151f ,0.05331825f ,0.00501525f ,0.109719f ,0.071145f ,0.0050129998f ,0.109818004f ,0.0721125f ,0.0115065f ,0.11034901f });
  }
}
private class MFVec2f66 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1287f ,0.113f ,0.1423f ,0.0921f ,0.1396f ,0.0889f ,0.1257f ,0.1107f ,0.1415f ,0.0903f ,0.1274f ,0.1123f ,0.1297f ,0.1214f ,0.15f ,0.0896f ,0.1273f ,0.1223f ,0.1313f ,0.1227f ,0.1521f ,0.0901f ,0.1498f ,0.0859f ,0.0527f ,0.151f ,0.0282f ,0.1325f ,0.0446f ,0.0894f ,0.0746f ,0.0899f ,0.1016f ,0.0977f ,0.1554f ,0.0919f ,0.0779f ,0.162f ,0.1341f ,0.1263f ,0.1317f ,0.1272f ,0.1363f ,0.1268f ,0.1571f ,0.0927f ,0.1559f ,0.0889f ,0.1554f ,0.0919f ,0.0779f ,0.162f ,0.1317f ,0.1272f ,0.1363f ,0.1268f ,0.1571f ,0.0927f ,0.1559f ,0.0889f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,8,9,-1,9,4,1,-1,5,0,2,-1,2,7,5,-1,4,6,3,-1,3,1,4,-1,10,0,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,1,3,-1,1,19,20,-1,20,8,1,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,0,10,-1,0,22,23,-1,23,2,0,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1});
  }
}
private class MFInt3270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,8,9,-1,9,4,0,-1,5,1,2,-1,2,7,5,-1,4,6,3,-1,3,0,4,-1,10,1,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,0,3,-1,0,19,20,-1,20,8,0,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,1,10,-1,1,22,23,-1,23,2,1,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1});
  }
}
private class MFVec3f71 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.086868f ,0.0038924997f ,0.028325252f ,0.0873225f ,0.057577502f ,0.027517501f ,0.08682525f ,0.003555f ,0.03870225f ,0.08793f ,0.05031225f ,0.039017253f ,0.0741555f ,0.052668f ,0.029191501f ,0.074088f ,0.0040500015f ,0.02895075f ,0.07285275f ,0.044572502f ,0.04509675f ,0.072911255f ,0.0039150007f ,0.04541175f ,0.08725275f ,0.063540004f ,0.019359002f ,0.07564725f ,0.06057f ,0.021015001f ,0.087021f ,0.0035100006f ,0.019336501f ,0.07521075f ,0.0036225005f ,0.021168001f ,0.07031925f ,0.048035253f ,0.02321325f ,0.06930225f ,0.04499775f ,0.02706075f ,0.068121f ,0.038907003f ,0.04185f ,0.06819075f ,0.009585001f ,0.042129003f ,0.0690795f ,0.009675002f ,0.028350001f ,0.06990525f ,0.00945f ,0.02333475f ,0.09461025f ,0.046273503f ,0.036591753f ,0.094011754f ,0.0520065f ,0.0261135f ,0.093969f ,0.05488425f ,0.021570751f ,0.093813755f ,0.008932499f ,0.02154825f ,0.093624756f ,0.00918f ,0.028210502f ,0.09354825f ,0.008955f ,0.0363015f ,0.07569675f ,0.040221002f ,0.05211675f ,0.08986276f ,0.045708753f ,0.04577175f ,0.092007f ,0.04308075f ,0.045029253f ,0.09111375f ,0.011718f ,0.044781752f ,0.08786925f ,0.007942501f ,0.045929253f ,0.075438f ,0.0082575f ,0.052926753f ,0.0734625f ,0.0118080005f ,0.051576752f ,0.07340625f ,0.03619575f ,0.051351752f ,0.08637075f ,0.060390003f ,0.013124251f ,0.076752f ,0.057937503f ,0.014622751f ,0.07263675f ,0.0471105f ,0.016220251f ,0.072247505f ,0.0109125f ,0.016332751f ,0.07547625f ,0.0065475004f ,0.015023251f ,0.086193f ,0.0064575016f ,0.01330875f ,0.0906255f ,0.0107774995f ,0.0147555005f ,0.09076725f ,0.053509504f ,0.014775751f });
  }
}
private class MFVec2f72 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2179f ,0.1044f ,0.2186f ,0.1086f ,0.2128f ,0.1035f ,0.2098f ,0.0996f ,0.2047f ,0.1286f ,0.2132f ,0.1171f ,0.1953f ,0.1244f ,0.2059f ,0.1148f ,0.2224f ,0.1067f ,0.2132f ,0.1285f ,0.2197f ,0.1123f ,0.2163f ,0.1174f ,0.2132f ,0.1285f ,0.2047f ,0.1286f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.2132f ,0.1171f ,0.2163f ,0.1174f ,0.2098f ,0.0996f ,0.2179f ,0.1044f ,0.2224f ,0.1067f ,0.2224f ,0.1067f ,0.2186f ,0.1086f ,0.2128f ,0.1035f ,0.1953f ,0.1244f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2128f ,0.1035f ,0.2098f ,0.0996f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.2224f ,0.1067f ,0.2132f ,0.1285f ,0.2132f ,0.1285f ,0.2163f ,0.1174f ,0.2132f ,0.1285f ,0.2224f ,0.1067f ,0.2224f ,0.1067f ,0.2224f ,0.1067f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,15,7,-1,7,4,12,-1,0,8,9,-1,9,2,0,-1,1,10,11,-1,11,3,1,-1,5,0,2,-1,2,6,5,-1,8,1,3,-1,3,9,8,-1,14,13,12,-1,12,4,14,-1,18,17,13,-1,13,14,18,-1,42,39,38,-1,38,43,42,-1,46,51,50,-1,50,47,46,-1,29,35,34,-1,34,30,29,-1,19,26,25,-1,25,20,19,-1,28,27,26,-1,26,19,28,-1,21,24,23,-1,23,22,21,-1,37,36,35,-1,35,29,37,-1,30,34,31,-1,20,25,24,-1,24,21,20,-1,31,34,33,-1,33,32,31,-1,3,19,20,-1,20,9,3,-1,9,20,21,-1,21,2,9,-1,2,21,22,-1,22,6,2,-1,42,41,40,-1,40,39,42,-1,7,23,24,-1,24,4,7,-1,4,24,25,-1,25,16,4,-1,16,25,26,-1,26,14,16,-1,14,26,27,-1,27,18,14,-1,50,49,48,-1,48,47,50,-1,11,28,19,-1,19,3,11,-1,0,29,30,-1,30,8,0,-1,8,30,31,-1,31,1,8,-1,1,31,32,-1,32,10,1,-1,46,53,52,-1,52,51,46,-1,17,33,34,-1,34,13,17,-1,13,34,35,-1,35,12,13,-1,12,35,36,-1,36,15,12,-1,38,45,44,-1,44,43,38,-1,5,37,29,-1,29,0,5,-1,15,38,39,-1,39,7,15,-1,7,39,40,-1,40,23,7,-1,23,40,41,-1,41,22,23,-1,22,41,42,-1,42,6,22,-1,6,42,43,-1,43,5,6,-1,5,43,44,-1,44,37,5,-1,37,44,45,-1,45,36,37,-1,36,45,38,-1,38,15,36,-1,10,46,47,-1,47,11,10,-1,11,47,48,-1,48,28,11,-1,28,48,49,-1,49,27,28,-1,27,49,50,-1,50,18,27,-1,18,50,51,-1,51,17,18,-1,17,51,52,-1,52,33,17,-1,33,52,53,-1,53,32,33,-1,32,53,46,-1,46,10,32,-1});
  }
}
private class MFInt3276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,10,-1,10,0,1,-1,2,11,12,-1,12,3,2,-1,5,15,16,-1,16,6,5,-1,8,2,3,-1,3,9,8,-1,11,5,6,-1,6,12,11,-1,4,13,1,-1,1,0,4,-1,17,14,13,-1,13,4,17,-1,45,42,41,-1,41,46,45,-1,49,54,53,-1,53,50,49,-1,32,38,37,-1,37,33,32,-1,22,29,28,-1,28,23,22,-1,31,30,29,-1,29,22,31,-1,24,27,26,-1,26,25,24,-1,40,39,38,-1,38,32,40,-1,33,21,34,-1,23,28,27,-1,27,24,23,-1,34,37,36,-1,36,35,34,-1,6,22,23,-1,23,12,6,-1,12,23,24,-1,24,3,12,-1,3,24,25,-1,25,9,3,-1,45,44,43,-1,43,42,45,-1,10,26,27,-1,27,0,10,-1,20,27,28,-1,28,18,20,-1,18,28,29,-1,29,19,18,-1,4,29,30,-1,30,17,4,-1,53,52,51,-1,51,50,53,-1,16,31,22,-1,22,6,16,-1,2,32,33,-1,33,11,2,-1,11,33,34,-1,34,5,11,-1,5,34,35,-1,35,15,5,-1,49,56,55,-1,55,54,49,-1,14,36,37,-1,37,13,14,-1,13,37,38,-1,38,1,13,-1,1,38,39,-1,39,7,1,-1,41,48,47,-1,47,46,41,-1,8,40,32,-1,32,2,8,-1,7,41,42,-1,42,10,7,-1,10,42,43,-1,43,26,10,-1,26,43,44,-1,44,25,26,-1,25,44,45,-1,45,9,25,-1,9,45,46,-1,46,8,9,-1,8,46,47,-1,47,40,8,-1,40,47,48,-1,48,39,40,-1,39,48,41,-1,41,7,39,-1,15,49,50,-1,50,16,15,-1,16,50,51,-1,51,31,16,-1,31,51,52,-1,52,30,31,-1,30,52,53,-1,53,17,30,-1,17,53,54,-1,54,14,17,-1,14,54,55,-1,55,36,14,-1,36,55,56,-1,56,35,36,-1,35,56,49,-1,49,15,35,-1});
  }
}
private class MFVec3f77 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.08865f ,0.03174975f ,0.079515f ,0.08774325f ,0.043557752f ,0.053208005f ,0.07317225f ,0.03152025f ,0.08082f ,0.0722565f ,0.04093875f ,0.054279003f ,0.0732645f ,0.0018899998f ,0.07854751f ,0.088906504f ,0.0272745f ,0.09189001f ,0.07491825f ,0.02697075f ,0.0935325f ,0.0749565f ,0.0036989998f ,0.092700005f ,0.08795475f ,0.037667252f ,0.066262506f ,0.07239825f ,0.036240753f ,0.068175f ,0.0879165f ,0.05031f ,0.039010502f ,0.07283925f ,0.044563502f ,0.045092255f ,0.0876015f ,0.0018899998f ,0.077265f ,0.08665875f ,0.0033300002f ,0.051590253f ,0.0714735f ,0.0038047498f ,0.051799502f ,0.08885475f ,0.0037259988f ,0.09108f ,0.0714735f ,0.0038047498f ,0.051799502f ,0.08681175f ,0.003555f ,0.038695503f ,0.07289775f ,0.0038969992f ,0.045405004f ,0.06680925f ,0.03717f ,0.053104505f ,0.06684975f ,0.032463f ,0.0670275f ,0.06760575f ,0.0277515f ,0.0796725f ,0.06896025f ,0.0241785f ,0.08966251f ,0.06896475f ,0.0072629997f ,0.0890325f ,0.067743f ,0.00593775f ,0.0786375f ,0.0660015f ,0.007818749f ,0.052290004f ,0.06604875f ,0.0078277495f ,0.052069504f ,0.0669825f ,0.00785925f ,0.049572002f ,0.06679125f ,0.03865725f ,0.049315505f ,0.093744f ,0.029007f ,0.07832251f ,0.093051f ,0.03496725f ,0.06495751f ,0.09286875f ,0.04087125f ,0.051867004f ,0.09299025f ,0.0457245f ,0.041652f ,0.09207f ,0.0062009995f ,0.041384254f ,0.091935f ,0.006020999f ,0.051536255f ,0.09285525f ,0.0046102493f ,0.07699501f ,0.09393975f ,0.0060907495f ,0.08817751f ,0.09390375f ,0.0251955f ,0.08885251f ,0.0886365f ,0.0066284994f ,0.0954225f ,0.075843f ,0.0065969992f ,0.097132504f ,0.07188075f ,0.0089505f ,0.096727505f ,0.07187625f ,0.02182275f ,0.097177505f ,0.0757485f ,0.023634f ,0.097695f ,0.08871975f ,0.023922f ,0.0960075f ,0.09149175f ,0.0227655f ,0.09486f ,0.091521f ,0.0079695f ,0.09434251f ,0.085221f ,0.046793252f ,0.030728253f ,0.07204275f ,0.04165875f ,0.036839254f ,0.067304246f ,0.0370845f ,0.040027503f ,0.0674775f ,0.009798749f ,0.040259253f ,0.07143525f ,0.0071505f ,0.037485003f ,0.084051f ,0.0068332497f ,0.030935252f ,0.08703225f ,0.008340749f ,0.032478753f ,0.087867f ,0.04418325f ,0.032719504f });
  }
}
private class MFVec2f78 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.175f ,0.1048f ,0.1833f ,0.0898f ,0.1856f ,0.0872f ,0.1731f ,0.1071f ,0.1985f ,0.1126f ,0.2017f ,0.0948f ,0.1859f ,0.1202f ,0.1801f ,0.0847f ,0.1811f ,0.0824f ,0.1682f ,0.1025f ,0.1699f ,0.1017f ,0.1937f ,0.091f ,0.1795f ,0.1136f ,0.2068f ,0.0986f ,0.2128f ,0.1035f ,0.2098f ,0.0996f ,0.1953f ,0.1244f ,0.2059f ,0.1148f ,0.1795f ,0.1136f ,0.1859f ,0.1202f ,0.1731f ,0.1071f ,0.2017f ,0.0948f ,0.1859f ,0.1202f ,0.1795f ,0.1136f ,0.1731f ,0.1071f ,0.1682f ,0.1025f ,0.1682f ,0.1025f ,0.1731f ,0.1071f ,0.1795f ,0.1136f ,0.1859f ,0.1202f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.1856f ,0.0872f ,0.1937f ,0.091f ,0.2017f ,0.0948f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2017f ,0.0948f ,0.1856f ,0.0872f ,0.1811f ,0.0824f ,0.1811f ,0.0824f ,0.1811f ,0.0824f ,0.1682f ,0.1025f ,0.1682f ,0.1025f ,0.1682f ,0.1025f ,0.1682f ,0.1025f ,0.1811f ,0.0824f ,0.1811f ,0.0824f ,0.1811f ,0.0824f ,0.2098f ,0.0996f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2098f ,0.0996f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,6,20,-1,20,18,8,-1,14,11,19,-1,19,21,14,-1,6,1,20,-1,19,11,15,-1,0,2,3,-1,3,14,0,-1,12,8,16,-1,16,17,12,-1,15,11,12,-1,12,17,15,-1,6,3,2,-1,2,1,6,-1,0,14,21,-1,16,8,18,-1,3,6,5,-1,5,4,3,-1,6,8,7,-1,7,5,6,-1,10,9,12,-1,12,11,10,-1,14,13,10,-1,10,11,14,-1,13,14,3,-1,3,4,13,-1,8,12,9,-1,9,7,8,-1,19,23,24,-1,24,21,19,-1,22,18,20,-1,20,25,22,-1,31,30,36,-1,31,36,35,-1,34,31,35,-1,5,7,9,-1,9,10,13,-1,5,9,13,-1,4,5,13,-1,29,28,27,-1,27,26,29,-1,37,43,42,-1,42,41,37,-1,31,34,33,-1,33,32,31,-1,41,40,39,-1,41,39,38,-1,37,41,38,-1,25,26,27,-1,27,22,25,-1,22,27,28,-1,28,23,22,-1,23,28,29,-1,29,24,23,-1,24,29,26,-1,26,25,24,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,23,19,-1,23,32,33,-1,33,22,23,-1,22,33,34,-1,34,18,22,-1,18,34,35,-1,35,16,18,-1,16,35,36,-1,36,17,16,-1,17,36,30,-1,30,15,17,-1,21,37,38,-1,38,0,21,-1,0,38,39,-1,39,2,0,-1,2,39,40,-1,40,1,2,-1,1,40,41,-1,41,20,1,-1,20,41,42,-1,42,25,20,-1,25,42,43,-1,43,24,25,-1,24,43,37,-1,37,21,24,-1});
  }
}
private class MFInt3282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,30,-1,30,24,1,-1,3,2,25,-1,25,31,3,-1,0,4,30,-1,25,2,26,-1,9,10,5,-1,5,3,9,-1,7,1,27,-1,27,28,7,-1,26,2,8,-1,8,29,26,-1,0,6,11,-1,11,4,0,-1,9,3,31,-1,27,1,24,-1,12,15,14,-1,14,13,12,-1,15,17,16,-1,16,14,15,-1,19,18,21,-1,21,20,19,-1,23,22,19,-1,19,20,23,-1,22,23,12,-1,12,13,22,-1,17,21,18,-1,18,16,17,-1,35,37,38,-1,38,34,35,-1,36,32,33,-1,33,39,36,-1,45,44,50,-1,45,50,49,-1,48,45,49,-1,14,16,18,-1,18,19,22,-1,14,18,22,-1,13,14,22,-1,43,42,41,-1,41,40,43,-1,51,57,56,-1,56,55,51,-1,45,48,47,-1,47,46,45,-1,55,54,53,-1,55,53,52,-1,51,55,52,-1,39,40,41,-1,41,36,39,-1,36,41,42,-1,42,37,36,-1,37,42,43,-1,43,38,37,-1,38,43,40,-1,40,39,38,-1,26,44,45,-1,45,25,26,-1,35,45,46,-1,46,37,35,-1,37,46,47,-1,47,36,37,-1,36,47,48,-1,48,32,36,-1,24,48,49,-1,49,27,24,-1,27,49,50,-1,50,28,27,-1,29,50,44,-1,44,26,29,-1,31,51,52,-1,52,9,31,-1,9,52,53,-1,53,10,9,-1,11,53,54,-1,54,4,11,-1,4,54,55,-1,55,30,4,-1,33,55,56,-1,56,39,33,-1,39,56,57,-1,57,38,39,-1,38,57,51,-1,51,34,38,-1});
  }
}
private class MFVec3f83 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.074895754f ,0.0222525f ,0.10377f ,0.07523775f ,0.008284501f ,0.104080506f ,0.074940756f ,0.015561f ,0.1050975f ,0.076279506f ,0.014091751f ,0.10509075f ,0.077076f ,0.0108585f ,0.11510775f ,0.078093f ,0.0026707507f ,0.114732005f ,0.077109754f ,0.004995f ,0.10394551f ,0.088632f ,0.0027944997f ,0.113346f ,0.08773425f ,0.00484425f ,0.10267425f ,0.08994375f ,0.012060001f ,0.11371051f ,0.088706255f ,0.022911752f ,0.113402255f ,0.087792754f ,0.0243855f ,0.102539256f ,0.08928675f ,0.013288501f ,0.10352475f ,0.07794f ,0.02320425f ,0.114714004f ,0.077463f ,0.02425275f ,0.10367776f ,0.090117f ,0.022295251f ,0.101772f ,0.0901485f ,0.007938f ,0.10190701f ,0.090261005f ,0.015016501f ,0.103137754f ,0.089154005f ,0.0044505005f ,0.097357504f ,0.089358754f ,0.024396751f ,0.096925505f ,0.074799f ,0.0045f ,0.099380255f ,0.07482825f ,0.024538502f ,0.09934425f ,0.08886825f ,0.0037350003f ,0.09109125f ,0.088917755f ,0.02728125f ,0.09189451f ,0.074931756f ,0.026977502f ,0.093546f ,0.07497f ,0.0037079998f ,0.092704505f ,0.07696575f ,0.0065857503f ,0.08687475f ,0.085556254f ,0.0066037504f ,0.08588476f ,0.085594505f ,0.024745502f ,0.086501256f ,0.076936506f ,0.0245565f ,0.0875295f ,0.09432226f ,0.02058075f ,0.09753075f ,0.093809254f ,0.022234501f ,0.09370126f ,0.093627006f ,0.023231251f ,0.0919665f ,0.093627006f ,0.00638325f ,0.091388255f ,0.093606755f ,0.0067140004f ,0.094286256f ,0.09436275f ,0.0092475f ,0.097584754f ,0.0944235f ,0.01497375f ,0.09858601f ,0.070065f ,0.022225501f ,0.09686475f ,0.07005825f ,0.02054475f ,0.10012051f ,0.070074f ,0.015468751f ,0.1011285f ,0.07036425f ,0.0096075f ,0.100307256f ,0.069995254f ,0.0069075003f ,0.096954755f ,0.07015275f ,0.0065475004f ,0.09393076f ,0.07011675f ,0.02320875f ,0.09453376f });
  }
}
private class MFVec2f84 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2327f ,0.0796f ,0.2439f ,0.0803f ,0.2062f ,0.05f ,0.2147f ,0.0491f ,0.2302f ,0.0796f ,0.2205f ,0.0532f ,0.2301f ,0.0734f ,0.2486f ,0.0743f ,0.2013f ,0.0552f ,0.2187f ,0.0481f ,0.221f ,0.0541f ,0.2293f ,0.0736f ,0.1746f ,0.075f ,0.1709f ,0.0678f ,0.1706f ,0.0686f ,0.1745f ,0.076f ,0.1824f ,0.0523f ,0.1886f ,0.0572f ,0.183f ,0.0511f ,0.1834f ,0.0508f ,0.1882f ,0.0556f ,0.1885f ,0.0566f ,0.1716f ,0.0676f ,0.1748f ,0.0736f ,0.2444f ,0.0847f ,0.2027f ,0.042f ,0.2022f ,0.0485f ,0.2464f ,0.0799f ,0.2486f ,0.0741f ,0.2011f ,0.0554f ,0.2293f ,0.0837f ,0.2177f ,0.0418f ,0.1769f ,0.0796f ,0.1648f ,0.0986f ,0.1632f ,0.098f ,0.1766f ,0.0777f ,0.1801f ,0.0847f ,0.1811f ,0.0824f ,0.1682f ,0.1025f ,0.1699f ,0.1017f ,0.1699f ,0.1017f ,0.1801f ,0.0847f ,0.1811f ,0.0824f ,0.1682f ,0.1025f ,0.2022f ,0.0485f ,0.2027f ,0.042f ,0.1811f ,0.0824f ,0.1801f ,0.0847f ,0.1769f ,0.0796f ,0.2464f ,0.0799f ,0.2486f ,0.0741f ,0.1632f ,0.098f ,0.2187f ,0.0481f ,0.221f ,0.0541f ,0.2302f ,0.0796f ,0.2293f ,0.0837f ,0.1699f ,0.1017f ,0.1682f ,0.1025f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,6,-1,6,7,0,-1,2,0,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,1,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1});
  }
}
private class MFInt3288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,5,6,-1,6,12,14,-1,8,1,7,-1,7,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,7,1,-1,5,24,25,-1,25,6,5,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1});
  }
}
private class MFVec3f89 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.077145755f ,0.0020925f ,0.124110006f ,0.07650675f ,0.010449001f ,0.12440025f ,0.091120504f ,0.0020925f ,0.122562006f ,0.09210826f ,0.010449001f ,0.122539505f ,0.090963006f ,0.017046f ,0.12259125f ,0.0777195f ,0.017561251f ,0.124182f ,0.077076f ,0.01085625f ,0.11511f ,0.07809075f ,0.0026684997f ,0.114734255f ,0.08862975f ,0.0027944997f ,0.11334825f ,0.08994375f ,0.0120577505f ,0.11371275f ,0.088706255f ,0.022911752f ,0.113404505f ,0.07793775f ,0.023202f ,0.114716254f ,0.0781695f ,0.01090575f ,0.109899f ,0.078975f ,0.00437175f ,0.109548f ,0.08658225f ,0.004464f ,0.108504005f ,0.0876735f ,0.01208475f ,0.1088955f ,0.08661825f ,0.0212715f ,0.10856475f ,0.078903005f ,0.02148075f ,0.10951875f ,0.0806265f ,0.0054404996f ,0.12710701f ,0.080264255f ,0.0102780005f ,0.12734775f ,0.080905505f ,0.014067001f ,0.127179f ,0.088521756f ,0.01377f ,0.12625201f ,0.089122504f ,0.010341001f ,0.126279f ,0.088542f ,0.0054404996f ,0.12627225f });
  }
}
private class MFVec2f90 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f ,0.0654f ,0.1636f ,0.063f ,0.1795f ,0.0453f ,0.1792f ,0.0409f ,0.1786f ,0.0451f ,0.1293f ,0.0261f ,0.0949f ,0.0775f ,0.1651f ,0.0639f ,0.1709f ,0.0678f ,0.1706f ,0.0686f ,0.1824f ,0.0523f ,0.183f ,0.0511f ,0.1291f ,0.0918f ,0.1834f ,0.0508f ,0.1554f ,0.0532f ,0.1716f ,0.0676f ,0.1709f ,0.0678f ,0.1706f ,0.0686f ,0.1824f ,0.0523f ,0.183f ,0.0511f ,0.1834f ,0.0508f ,0.1554f ,0.0532f ,0.1653f ,0.0654f ,0.1636f ,0.063f ,0.1651f ,0.0639f ,0.0949f ,0.0775f ,0.1792f ,0.0409f ,0.1795f ,0.0453f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,7,-1,7,6,0,-1,3,0,6,-1,6,8,3,-1,9,2,3,-1,3,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1});
  }
}
private class MFInt3294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,9,-1,9,8,0,-1,3,0,8,-1,8,10,3,-1,11,2,3,-1,3,10,11,-1,4,2,11,-1,11,12,4,-1,14,7,6,-1,6,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1});
  }
}
private class MFVec3f95 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0795195f ,0.00385875f ,0.13077226f ,0.07962525f ,0.00919575f ,0.132831f ,0.09086175f ,0.00919575f ,0.13146976f ,0.08941951f ,0.00385875f ,0.12943351f ,0.09017775f ,0.014742f ,0.13012426f ,0.079841256f ,0.01503f ,0.13163851f ,0.077145755f ,0.0020902497f ,0.124098755f ,0.07650675f ,0.010449f ,0.12439126f ,0.091120504f ,0.0020902497f ,0.122553006f ,0.09210826f ,0.010449f ,0.122530505f ,0.090963006f ,0.017046f ,0.12258226f ,0.0777195f ,0.017561251f ,0.12417076f ,0.078543f ,0.0103545f ,0.11991376f ,0.07897275f ,0.0046372497f ,0.119661756f ,0.0884025f ,0.0046372497f ,0.11864926f ,0.08908425f ,0.01040175f ,0.11864926f ,0.0883485f ,0.014622751f ,0.11864026f ,0.079326004f ,0.01497375f ,0.11973376f });
  }
}
private class MFVec2f96 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f ,0.0579f ,0.1638f ,0.0538f ,0.174f ,0.0396f ,0.1747f ,0.0423f ,0.1756f ,0.0403f ,0.1632f ,0.0573f ,0.066f ,0.0493f ,0.0915f ,0.0082f ,0.1653f ,0.0654f ,0.1636f ,0.063f ,0.1795f ,0.0453f ,0.1792f ,0.0409f ,0.1786f ,0.0451f ,0.0949f ,0.0775f ,0.1293f ,0.0261f ,0.1651f ,0.0639f ,0.1636f ,0.063f ,0.1653f ,0.0654f ,0.1795f ,0.0453f ,0.1792f ,0.0409f ,0.1786f ,0.0451f ,0.1293f ,0.0261f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,7,9,-1,9,8,4,-1,20,25,24,-1,24,21,20,-1,12,11,10,-1,10,13,12,-1,18,17,14,-1,14,19,18,-1,15,14,17,-1,17,16,15,-1,0,10,11,-1,11,4,0,-1,4,11,12,-1,12,7,4,-1,7,12,13,-1,13,1,7,-1,24,23,22,-1,22,21,24,-1,3,14,15,-1,15,6,3,-1,20,27,26,-1,26,25,20,-1,5,16,17,-1,17,2,5,-1,2,17,18,-1,18,9,2,-1,9,18,19,-1,19,8,9,-1,8,19,14,-1,14,3,8,-1,6,20,21,-1,21,0,6,-1,0,21,22,-1,22,10,0,-1,10,22,23,-1,23,13,10,-1,13,23,24,-1,24,1,13,-1,1,24,25,-1,25,5,1,-1,5,25,26,-1,26,16,5,-1,16,26,27,-1,27,15,16,-1,15,27,20,-1,20,6,15,-1});
  }
}
private class MFInt32100 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,11,10,-1,10,8,4,-1,22,27,26,-1,26,23,22,-1,14,13,12,-1,12,15,14,-1,20,19,16,-1,16,21,20,-1,17,16,19,-1,19,18,17,-1,0,12,13,-1,13,4,0,-1,4,13,14,-1,14,11,4,-1,7,14,15,-1,15,1,7,-1,26,25,24,-1,24,23,26,-1,3,16,17,-1,17,6,3,-1,22,29,28,-1,28,27,22,-1,5,18,19,-1,19,2,5,-1,2,19,20,-1,20,9,2,-1,10,20,21,-1,21,8,10,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,0,6,-1,0,23,24,-1,24,12,0,-1,12,24,25,-1,25,15,12,-1,15,25,26,-1,26,1,15,-1,1,26,27,-1,27,5,1,-1,5,27,28,-1,28,18,5,-1,18,28,29,-1,29,17,18,-1,17,29,22,-1,22,6,17,-1});
  }
}
private class MFVec3f101 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.100037254f ,0.047187f ,0.03966075f ,0.098388f ,0.0032399986f ,0.0394875f ,0.08685225f ,0.0038699985f ,0.0283275f ,0.08730675f ,0.057577502f ,0.027519751f ,0.098489255f ,0.054999f ,0.020137502f ,0.0868095f ,0.003555f ,0.03870225f ,0.08791425f ,0.05030325f ,0.039019503f ,0.097794004f ,0.003824999f ,0.020232001f ,0.087237f ,0.063540004f ,0.01936125f ,0.08700525f ,0.0034874994f ,0.019336501f ,0.10545976f ,0.042345002f ,0.03648825f ,0.10419975f ,0.04751775f ,0.022628251f ,0.10367326f ,0.0062999995f ,0.02270475f ,0.103932f ,0.0059175007f ,0.036339752f ,0.0822105f ,0.05565375f ,0.0262575f ,0.08276175f ,0.04905225f ,0.0367065f ,0.08171775f ,0.0060524987f ,0.0364185f ,0.081821255f ,0.0062999995f ,0.0283905f ,0.08195625f ,0.0060300003f ,0.021795752f ,0.08214525f ,0.058905f ,0.021816f ,0.087810755f ,0.04387275f ,0.046998f ,0.099369004f ,0.04125825f ,0.047695503f ,0.10329525f ,0.03753675f ,0.045558f ,0.10189351f ,0.0081899995f ,0.045423f ,0.097965f ,0.006727501f ,0.0476505f ,0.0872685f ,0.006974999f ,0.046795502f ,0.083889f ,0.0084375f ,0.045288f ,0.08484975f ,0.043231502f ,0.045558f });
  }
}
private class MFVec2f102 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2226f ,0.0828f ,0.2197f ,0.0903f ,0.2186f ,0.1086f ,0.2179f ,0.1044f ,0.2314f ,0.0879f ,0.2128f ,0.1035f ,0.2098f ,0.0996f ,0.2271f ,0.0958f ,0.2224f ,0.1067f ,0.2197f ,0.1123f ,0.2224f ,0.1067f ,0.2314f ,0.0879f ,0.2226f ,0.0828f ,0.2314f ,0.0879f ,0.2314f ,0.0879f ,0.2197f ,0.0903f ,0.2179f ,0.1044f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2186f ,0.1086f ,0.2197f ,0.1123f ,0.2224f ,0.1067f ,0.2098f ,0.0996f ,0.2226f ,0.0828f ,0.2226f ,0.0828f ,0.2197f ,0.0903f ,0.2226f ,0.0828f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2098f ,0.0996f });
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,3,13,-1,13,12,15,-1,10,2,0,-1,0,7,10,-1,9,6,14,-1,14,1,9,-1,3,10,7,-1,7,13,3,-1,12,16,5,-1,5,15,12,-1,6,9,17,-1,17,8,6,-1,17,4,11,-1,11,8,17,-1,27,31,28,-1,34,33,32,-1,32,35,34,-1,28,31,30,-1,30,29,28,-1,35,32,31,-1,31,27,35,-1,23,20,24,-1,22,21,20,-1,20,23,22,-1,25,19,18,-1,18,26,25,-1,24,20,19,-1,19,25,24,-1,1,18,19,-1,19,9,1,-1,9,19,20,-1,20,17,9,-1,17,20,21,-1,21,4,17,-1,48,47,46,-1,46,45,48,-1,5,22,23,-1,23,15,5,-1,15,23,24,-1,24,3,15,-1,3,24,25,-1,25,10,3,-1,10,25,26,-1,26,2,10,-1,40,39,38,-1,38,37,40,-1,13,27,28,-1,28,12,13,-1,12,28,29,-1,29,16,12,-1,44,51,50,-1,50,49,44,-1,11,30,31,-1,31,8,11,-1,8,31,32,-1,32,6,8,-1,6,32,33,-1,33,14,6,-1,36,43,42,-1,42,41,36,-1,0,34,35,-1,35,7,0,-1,7,35,27,-1,27,13,7,-1,37,36,41,-1,41,40,37,-1,48,45,44,-1,44,49,48,-1,14,36,37,-1,37,1,14,-1,1,37,38,-1,38,18,1,-1,18,38,39,-1,39,26,18,-1,26,39,40,-1,40,2,26,-1,2,40,41,-1,41,0,2,-1,0,41,42,-1,42,34,0,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,14,33,-1,16,44,45,-1,45,5,16,-1,5,45,46,-1,46,22,5,-1,22,46,47,-1,47,21,22,-1,21,47,48,-1,48,4,21,-1,4,48,49,-1,49,11,4,-1,11,49,50,-1,50,30,11,-1,30,50,51,-1,51,29,30,-1,29,51,44,-1,44,16,29,-1});
  }
}
private class MFInt32106 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {25,3,16,-1,16,7,25,-1,12,2,0,-1,0,9,12,-1,22,18,20,-1,20,1,22,-1,13,23,19,-1,19,17,13,-1,15,26,5,-1,5,24,15,-1,8,11,28,-1,28,21,8,-1,14,4,6,-1,6,10,14,-1,43,27,45,-1,54,53,51,-1,51,55,54,-1,46,50,48,-1,48,47,46,-1,56,52,49,-1,49,44,56,-1,36,28,38,-1,35,34,33,-1,33,37,35,-1,40,30,29,-1,29,42,40,-1,39,32,31,-1,31,41,39,-1,1,29,30,-1,30,22,1,-1,11,31,32,-1,32,28,11,-1,14,33,34,-1,34,4,14,-1,70,69,68,-1,68,67,70,-1,5,35,37,-1,37,24,5,-1,25,36,38,-1,38,3,25,-1,13,39,41,-1,41,23,13,-1,12,40,42,-1,42,2,12,-1,62,61,60,-1,60,58,62,-1,16,43,45,-1,45,7,16,-1,15,46,47,-1,47,26,15,-1,66,74,73,-1,73,71,66,-1,6,48,50,-1,50,10,6,-1,21,49,52,-1,52,8,21,-1,18,51,53,-1,53,20,18,-1,57,65,64,-1,64,63,57,-1,0,54,55,-1,55,9,0,-1,19,56,44,-1,44,17,19,-1,59,57,63,-1,63,62,59,-1,70,67,66,-1,66,72,70,-1,20,57,59,-1,59,1,20,-1,1,58,60,-1,60,29,1,-1,29,60,61,-1,61,42,29,-1,42,61,62,-1,62,2,42,-1,2,62,63,-1,63,0,2,-1,0,63,64,-1,64,54,0,-1,54,64,65,-1,65,53,54,-1,53,65,57,-1,57,20,53,-1,26,66,67,-1,67,5,26,-1,5,67,68,-1,68,35,5,-1,35,68,69,-1,69,34,35,-1,34,69,70,-1,70,4,34,-1,4,70,72,-1,72,6,4,-1,6,71,73,-1,73,48,6,-1,48,73,74,-1,74,47,48,-1,47,74,66,-1,66,26,47,-1});
  }
}
private class MFVec3f107 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.102496505f ,0.026298f ,0.08865f ,0.08885025f ,0.0037259988f ,0.09108f ,0.088902004f ,0.0272745f ,0.09189f ,0.08795025f ,0.037667252f ,0.066262506f ,0.08680725f ,0.003555f ,0.038695503f ,0.087912f ,0.05031f ,0.039012752f ,0.09990001f ,0.0018899998f ,0.075330004f ,0.101304f ,0.0309285f ,0.077332504f ,0.0994995f ,0.0028800005f ,0.049655255f ,0.087597005f ,0.0018899998f ,0.077265f ,0.0886455f ,0.03174975f ,0.079515f ,0.098388f ,0.0032399986f ,0.039480753f ,0.10036575f ,0.0418545f ,0.051192004f ,0.10058401f ,0.0363915f ,0.064260006f ,0.10258876f ,0.003710249f ,0.08770501f ,0.08773875f ,0.043557752f ,0.053210255f ,0.100037254f ,0.04718925f ,0.039654f ,0.08665425f ,0.0033300002f ,0.051590253f ,0.08434125f ,0.0057734996f ,0.0890775f ,0.08322075f ,0.0042164996f ,0.07731f ,0.08229826f ,0.0056294994f ,0.051801752f ,0.0824355f ,0.0058207493f ,0.041051254f ,0.083396256f ,0.046926f ,0.04133025f ,0.0832635f ,0.04165875f ,0.052413754f ,0.0834525f ,0.035757f ,0.0654975f ,0.0841455f ,0.02980575f ,0.07884f ,0.0843255f ,0.025848f ,0.0897525f ,0.10509975f ,0.033651f ,0.061398003f ,0.104859f ,0.0391365f ,0.048278254f ,0.104733005f ,0.0426375f ,0.040691253f ,0.103293f ,0.005867999f ,0.04055175f ,0.10420425f ,0.005602499f ,0.047979f ,0.10455076f ,0.004623749f ,0.07339501f ,0.10679626f ,0.0060659996f ,0.0832275f ,0.10660725f ,0.02430225f ,0.0839925f ,0.1057545f ,0.028183501f ,0.074497506f ,0.10368001f ,0.00646425f ,0.091755f ,0.090733506f ,0.0064754994f ,0.0950175f ,0.08822025f ,0.0073845f ,0.09504001f ,0.08820675f ,0.02356875f ,0.095580004f ,0.09055351f ,0.024048f ,0.095602505f ,0.10347301f ,0.02314575f ,0.09254251f ,0.1061775f ,0.0220815f ,0.0915525f ,0.10633051f ,0.0077129994f ,0.090945005f ,0.098741256f ,0.045121502f ,0.034092f ,0.088076256f ,0.04786875f ,0.033252753f ,0.085257f ,0.045699753f ,0.03487725f ,0.08435925f ,0.0073215f ,0.0346185f ,0.087133504f ,0.0058792494f ,0.033122253f ,0.097704f ,0.0056002503f ,0.033999752f ,0.100928254f ,0.0073259994f ,0.034701753f ,0.102276005f ,0.041706f ,0.034830004f });
  }
}
private class MFVec2f108 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.195f ,0.0629f ,0.1801f ,0.0847f ,0.1811f ,0.0824f ,0.1937f ,0.091f ,0.2128f ,0.1035f ,0.2098f ,0.0996f ,0.2197f ,0.0903f ,0.2138f ,0.0778f ,0.1989f ,0.0701f ,0.1984f ,0.068f ,0.2129f ,0.0844f ,0.1833f ,0.0898f ,0.1856f ,0.0872f ,0.1937f ,0.091f ,0.2068f ,0.0986f ,0.2138f ,0.0778f ,0.2061f ,0.0729f ,0.2061f ,0.0729f ,0.1989f ,0.0701f ,0.1984f ,0.068f ,0.1952f ,0.0651f ,0.2129f ,0.0844f ,0.1833f ,0.0898f ,0.1856f ,0.0872f ,0.2017f ,0.0948f ,0.2017f ,0.0948f ,0.2226f ,0.0828f ,0.2138f ,0.0778f ,0.1937f ,0.091f ,0.1811f ,0.0824f ,0.1856f ,0.0872f ,0.1856f ,0.0872f ,0.1937f ,0.091f ,0.2017f ,0.0948f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2017f ,0.0948f ,0.2017f ,0.0948f ,0.1937f ,0.091f ,0.1937f ,0.091f ,0.1856f ,0.0872f ,0.1856f ,0.0872f ,0.1811f ,0.0824f ,0.2061f ,0.0729f ,0.2061f ,0.0729f ,0.2138f ,0.0778f ,0.2138f ,0.0778f ,0.2226f ,0.0828f ,0.2226f ,0.0828f ,0.2138f ,0.0778f ,0.2138f ,0.0778f ,0.1984f ,0.068f ,0.1984f ,0.068f ,0.195f ,0.0629f ,0.195f ,0.0629f ,0.1984f ,0.068f ,0.1984f ,0.068f ,0.195f ,0.0629f ,0.1811f ,0.0824f ,0.1801f ,0.0847f ,0.1811f ,0.0824f ,0.1811f ,0.0824f ,0.1811f ,0.0824f ,0.195f ,0.0629f ,0.195f ,0.0629f ,0.195f ,0.0629f ,0.2226f ,0.0828f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2226f ,0.0828f ,0.2197f ,0.0903f ,0.2226f ,0.0828f ,0.2226f ,0.0828f });
  }
}
private class MFFloat109 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat110 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32111 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,7,1,-1,1,0,13,-1,7,9,2,-1,2,1,7,-1,4,3,14,-1,14,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,13,-1,13,0,5,-1,23,19,15,-1,15,17,23,-1,16,20,24,-1,24,18,16,-1,9,7,19,-1,19,23,9,-1,8,6,24,-1,24,20,8,-1,7,11,19,-1,24,6,21,-1,10,12,13,-1,13,8,10,-1,14,9,25,-1,25,22,14,-1,21,6,14,-1,14,22,21,-1,7,13,12,-1,12,11,7,-1,10,8,20,-1,25,9,23,-1,9,14,3,-1,3,2,9,-1,1,2,3,-1,3,4,5,-1,1,3,5,-1,0,1,5,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,41,37,43,-1,43,42,41,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,41,40,39,-1,37,41,39,-1,37,39,38,-1,15,26,27,-1,27,17,15,-1,17,27,28,-1,28,18,17,-1,18,28,29,-1,29,16,18,-1,16,29,26,-1,26,15,16,-1,17,30,31,-1,31,23,17,-1,23,31,32,-1,32,25,23,-1,25,32,33,-1,33,22,25,-1,22,33,34,-1,34,21,22,-1,21,34,35,-1,35,24,21,-1,24,35,36,-1,36,18,24,-1,18,36,30,-1,30,17,18,-1,20,37,38,-1,38,10,20,-1,10,38,39,-1,39,12,10,-1,12,39,40,-1,40,11,12,-1,11,40,41,-1,41,19,11,-1,19,41,42,-1,42,15,19,-1,15,42,43,-1,43,16,15,-1,16,43,37,-1,37,20,16,-1});
  }
}
private class MFInt32112 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {22,7,0,-1,0,1,22,-1,7,9,2,-1,2,0,7,-1,4,3,23,-1,23,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,22,-1,22,1,5,-1,36,29,24,-1,24,26,36,-1,25,31,38,-1,38,27,25,-1,11,10,28,-1,28,35,11,-1,13,12,37,-1,37,30,13,-1,10,15,28,-1,37,12,32,-1,14,20,16,-1,16,13,14,-1,18,11,39,-1,39,33,18,-1,32,12,19,-1,19,34,32,-1,10,17,21,-1,21,15,10,-1,14,13,30,-1,39,11,35,-1,9,23,3,-1,3,2,9,-1,0,2,3,-1,3,4,5,-1,0,3,5,-1,1,0,5,-1,49,48,47,-1,49,47,46,-1,45,49,46,-1,55,51,57,-1,57,56,55,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,55,54,53,-1,51,55,53,-1,51,53,52,-1,24,40,41,-1,41,26,24,-1,26,41,42,-1,42,27,26,-1,27,42,43,-1,43,25,27,-1,25,43,40,-1,40,24,25,-1,26,44,45,-1,45,36,26,-1,35,45,46,-1,46,39,35,-1,39,46,47,-1,47,33,39,-1,34,47,48,-1,48,32,34,-1,32,48,49,-1,49,37,32,-1,38,49,50,-1,50,27,38,-1,27,50,44,-1,44,26,27,-1,30,51,52,-1,52,14,30,-1,14,52,53,-1,53,20,14,-1,21,53,54,-1,54,15,21,-1,15,54,55,-1,55,28,15,-1,29,55,56,-1,56,24,29,-1,24,56,57,-1,57,25,24,-1,25,57,51,-1,51,31,25,-1});
  }
}
private class MFVec3f113 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0928935f ,0.012060001f ,0.11196676f ,0.094043255f ,0.0028327508f ,0.11128501f ,0.103113f ,0.0029745002f ,0.10928701f ,0.10459576f ,0.012060001f ,0.10909126f ,0.103632756f ,0.021462752f ,0.10913851f ,0.09392851f ,0.021753f ,0.111411005f ,0.10167076f ,0.023676751f ,0.099153005f ,0.092684254f ,0.0044662505f ,0.101616755f ,0.092693254f ,0.02398275f ,0.101407506f ,0.10129726f ,0.0043200003f ,0.099193506f ,0.09011701f ,0.022295251f ,0.10177876f ,0.09014851f ,0.007938f ,0.10191601f ,0.090261005f ,0.015016501f ,0.10314451f ,0.0915435f ,0.013569751f ,0.10320976f ,0.103191756f ,0.012820501f ,0.10048051f ,0.08886825f ,0.0037350003f ,0.09109801f ,0.088917755f ,0.02728125f ,0.09190351f ,0.10260676f ,0.0037192504f ,0.08772526f ,0.102514505f ,0.026304752f ,0.08866576f ,0.089154005f ,0.0044505005f ,0.097366504f ,0.089358754f ,0.024396751f ,0.096932255f ,0.10393651f ,0.0225f ,0.09857926f ,0.10410301f ,0.0148365f ,0.100059755f ,0.103176005f ,0.0044797505f ,0.09374401f ,0.102933004f ,0.023910752f ,0.09320401f ,0.103833005f ,0.0052965f ,0.09861976f ,0.09037351f ,0.0067522503f ,0.085338004f ,0.09859276f ,0.00674325f ,0.08329276f ,0.098527506f ,0.023863502f ,0.084021755f ,0.09040726f ,0.024448501f ,0.08592751f ,0.10710226f ,0.009085501f ,0.08902576f ,0.107385755f ,0.00946575f ,0.092025004f ,0.10771426f ,0.009873001f ,0.09445726f ,0.107847005f ,0.014627251f ,0.095175005f ,0.10776376f ,0.018447751f ,0.09443701f ,0.10726426f ,0.019152f ,0.09175726f ,0.10705501f ,0.020344501f ,0.08949601f ,0.08527276f ,0.022407752f ,0.095400006f ,0.085830756f ,0.020736001f ,0.09926326f ,0.08593876f ,0.015012001f ,0.10033876f ,0.08586451f ,0.00929925f ,0.09934201f ,0.08508825f ,0.00663975f ,0.09587701f ,0.08499376f ,0.0061965007f ,0.09200476f ,0.08501176f ,0.024005251f ,0.09261451f });
  }
}
private class MFVec2f114 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1706f ,0.0686f ,0.1709f ,0.0678f ,0.1824f ,0.0523f ,0.183f ,0.0511f ,0.1834f ,0.0508f ,0.1716f ,0.0676f ,0.1882f ,0.0556f ,0.1745f ,0.076f ,0.1748f ,0.0736f ,0.1886f ,0.0572f ,0.2327f ,0.0796f ,0.2439f ,0.0803f ,0.2076f ,0.0485f ,0.2162f ,0.0476f ,0.2201f ,0.0466f ,0.2302f ,0.0796f ,0.2219f ,0.0517f ,0.2301f ,0.0734f ,0.2486f ,0.0743f ,0.2027f ,0.0537f ,0.2224f ,0.0526f ,0.2293f ,0.0736f ,0.1746f ,0.075f ,0.1885f ,0.0566f ,0.1801f ,0.0847f ,0.1811f ,0.0824f ,0.1952f ,0.0651f ,0.195f ,0.0629f ,0.2293f ,0.0837f ,0.1769f ,0.0796f ,0.2191f ,0.0403f ,0.1766f ,0.0777f ,0.2037f ,0.047f ,0.2486f ,0.0741f ,0.2026f ,0.0539f ,0.2444f ,0.0847f ,0.1915f ,0.0602f ,0.2041f ,0.0405f ,0.1915f ,0.0578f ,0.2464f ,0.0799f ,0.1801f ,0.0847f ,0.1952f ,0.0651f ,0.195f ,0.0629f ,0.1811f ,0.0824f ,0.1952f ,0.0651f ,0.1915f ,0.0602f ,0.2464f ,0.0799f ,0.2486f ,0.0741f ,0.2037f ,0.047f ,0.2041f ,0.0405f ,0.195f ,0.0629f ,0.1766f ,0.0777f ,0.2201f ,0.0466f ,0.2224f ,0.0526f ,0.2302f ,0.0796f ,0.2293f ,0.0837f ,0.1801f ,0.0847f ,0.1811f ,0.0824f });
  }
}
private class MFFloat115 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat116 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32117 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1});
  }
}
private class MFInt32118 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,6,7,-1,7,12,14,-1,8,1,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1});
  }
}
private class MFVec3f119 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.092927255f ,0.010451251f ,0.12121875f ,0.09370351f ,0.0020925007f ,0.12068325f ,0.10689525f ,0.0020925007f ,0.1179315f ,0.10788976f ,0.010451251f ,0.11788875f ,0.106875f ,0.01704825f ,0.11801025f ,0.0939645f ,0.017561251f ,0.120496504f ,0.09288f ,0.012060001f ,0.11194875f ,0.094029754f ,0.00283275f ,0.111267f ,0.1030995f ,0.0029745002f ,0.109269f ,0.10458451f ,0.012060001f ,0.109071f ,0.103619255f ,0.021462752f ,0.1091205f ,0.09391501f ,0.021753f ,0.111390755f ,0.093822755f ,0.0120870005f ,0.107775f ,0.094689004f ,0.0049702507f ,0.107163f ,0.10023525f ,0.0050557503f ,0.106002f ,0.101398505f ,0.012129751f ,0.10587825f ,0.10064025f ,0.0194175f ,0.105876f ,0.094608f ,0.01959975f ,0.10727325f ,0.097371005f ,0.005463001f ,0.12333825f ,0.096948005f ,0.01035675f ,0.123804f ,0.09744526f ,0.01408725f ,0.12320325f ,0.104737505f ,0.013797001f ,0.121914f ,0.10526851f ,0.010395001f ,0.12188925f ,0.10466775f ,0.005463001f ,0.121842004f });
  }
}
private class MFVec2f120 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f ,0.0654f ,0.1636f ,0.063f ,0.1795f ,0.0453f ,0.1792f ,0.0409f ,0.1786f ,0.0451f ,0.1651f ,0.0639f ,0.1293f ,0.0261f ,0.0949f ,0.0775f ,0.1709f ,0.0678f ,0.1706f ,0.0686f ,0.1824f ,0.0523f ,0.183f ,0.0511f ,0.1291f ,0.0918f ,0.1834f ,0.0508f ,0.1554f ,0.0532f ,0.1716f ,0.0676f ,0.1709f ,0.0678f ,0.1706f ,0.0686f ,0.1824f ,0.0523f ,0.183f ,0.0511f ,0.1834f ,0.0508f ,0.1554f ,0.0532f ,0.1653f ,0.0654f ,0.1636f ,0.063f ,0.1651f ,0.0639f ,0.0949f ,0.0775f ,0.1792f ,0.0409f ,0.1795f ,0.0453f });
  }
}
private class MFFloat121 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat122 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32123 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1});
  }
}
private class MFInt32124 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,8,-1,8,9,0,-1,1,0,9,-1,9,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,8,3,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,8,15,-1});
  }
}
private class MFVec3f125 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0969255f ,0.00919575f ,0.1282905f ,0.0966825f ,0.00385875f ,0.12638927f ,0.105201f ,0.00385875f ,0.12447676f ,0.10660275f ,0.00919575f ,0.12626776f ,0.10590975f ,0.014742f ,0.12506627f ,0.09702675f ,0.01503f ,0.12717001f ,0.09293625f ,0.010449f ,0.12123676f ,0.0937125f ,0.0020902497f ,0.12070126f ,0.10690425f ,0.0020902497f ,0.11794951f ,0.10789875f ,0.010449f ,0.11790676f ,0.106884f ,0.017046f ,0.11802826f ,0.0939735f ,0.017561251f ,0.12051451f ,0.0945495f ,0.010368f ,0.11659051f ,0.09506025f ,0.00461025f ,0.116106756f ,0.10383075f ,0.00461025f ,0.114297755f ,0.1045305f ,0.01039725f ,0.114322506f ,0.103878f ,0.014598f ,0.11436976f ,0.09518175f ,0.0149445f ,0.11595826f });
  }
}
private class MFVec2f126 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f ,0.0579f ,0.1747f ,0.0423f ,0.174f ,0.0396f ,0.1638f ,0.0538f ,0.1756f ,0.0403f ,0.1632f ,0.0573f ,0.0915f ,0.0082f ,0.066f ,0.0493f ,0.1636f ,0.063f ,0.1653f ,0.0654f ,0.1795f ,0.0453f ,0.1792f ,0.0409f ,0.1786f ,0.0451f ,0.0949f ,0.0775f ,0.1293f ,0.0261f ,0.1651f ,0.0639f ,0.1636f ,0.063f ,0.1653f ,0.0654f ,0.1795f ,0.0453f ,0.1792f ,0.0409f ,0.1786f ,0.0451f ,0.1293f ,0.0261f });
  }
}
private class MFFloat127 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat128 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32129 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1});
  }
}
private class MFInt32130 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1});
  }
}
private class MFVec3f131 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.11156625f ,0.0018899972f ,-0.045627754f ,0.096849f ,0.0018899972f ,-0.056227505f ,0.096716255f ,0.011317501f ,-0.0605475f ,0.1140075f ,0.011317501f ,-0.048892505f ,0.0699705f ,0.0018899972f ,-0.046424255f ,0.061762504f ,0.0019124956f ,-0.018123752f ,0.06021f ,0.011317501f ,-0.018623251f ,0.06724125f ,0.011317501f ,-0.049747504f ,0.117135f ,0.0019124956f ,-0.018123752f ,0.118957505f ,0.011317501f ,-0.018623251f ,0.096714005f ,0.03168f ,-0.06327f ,0.11551501f ,0.03249f ,-0.051457502f ,0.057195004f ,0.0356805f ,-0.018369002f ,0.065542504f ,0.031409997f ,-0.052312505f ,0.120960005f ,0.0332325f ,-0.018369002f ,0.095733f ,0.0475335f ,-0.058725003f ,0.113805f ,0.04728375f ,-0.046788752f ,0.0657225f ,0.046962f ,-0.047810253f ,0.084294006f ,0.0018899972f ,-0.056385003f ,0.084055506f ,0.011317501f ,-0.0606825f ,0.08389126f ,0.031409997f ,-0.06340501f ,0.08304075f ,0.047443498f ,-0.058860004f ,0.09588151f ,0.0019124956f ,-0.018123752f ,0.079555504f ,0.0019124956f ,-0.018123752f ,0.118305005f ,0.0034649957f ,-0.0006975004f ,0.121005006f ,0.0114750005f ,-0.0011475f ,0.120532505f ,0.0324675f ,-0.001417502f ,0.064215004f ,0.0036899955f ,0.0017999983f ,0.09834301f ,0.002902499f ,0.0015299992f ,0.0817425f ,0.0029249974f ,0.0029474983f ,0.06102f ,0.01296f ,0.0012149978f ,0.058140002f ,0.03660075f ,0.0011475f ,0.065767504f ,0.0660105f ,0.0019124983f ,0.108976506f ,0.064323f ,0.0025199999f ,0.094727255f ,0.062127f ,-0.0529875f ,0.112095006f ,0.06504975f ,-0.04129425f ,0.0659025f ,0.06504975f ,-0.042275254f ,0.11529001f ,0.0582795f ,-0.025368752f ,0.114885f ,0.05811075f ,-0.013686751f ,0.082235254f ,0.062181f ,-0.0531f ,0.0588825f ,0.05973975f ,-0.019140752f ,0.093582004f ,0.07452675f ,-0.045807753f ,0.108031504f ,0.07749f ,-0.036108002f ,0.11065725f ,0.07066125f ,-0.022761002f ,0.110301755f ,0.07044525f ,-0.0125325015f ,0.10591876f ,0.07647975f ,-0.00042750122f ,0.06991875f ,0.07791525f ,-0.00094500126f ,0.0645975f ,0.07174125f ,-0.017030252f ,0.070647754f ,0.077184f ,-0.036929253f ,0.08417025f ,0.07447275f ,-0.045882f ,0.117630005f ,0.013027498f ,0.0062774983f ,0.11589751f ,0.008347496f ,0.0061874995f ,0.09845325f ,0.007942499f ,0.0083025f ,0.082030505f ,0.007964997f ,0.009719999f ,0.067005f ,0.0085275f ,0.0084825f ,0.06473251f ,0.014602499f ,0.008347499f ,0.0619875f ,0.0352575f ,0.00837f ,0.06872401f ,0.05896125f ,0.008955f ,0.10664775f ,0.05759775f ,0.009652498f ,0.117180005f ,0.031094998f ,0.0059849983f });
  }
}
private class MFVec2f132 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2845f ,0.0964f ,0.2768f ,0.1211f ,0.2792f ,0.1228f ,0.2886f ,0.0939f ,0.2493f ,0.1586f ,0.2252f ,0.161f ,0.2241f ,0.1634f ,0.2489f ,0.1638f ,0.2727f ,0.0786f ,0.2746f ,0.076f ,0.2809f ,0.1238f ,0.2914f ,0.0926f ,0.2206f ,0.1691f ,0.249f ,0.1672f ,0.2762f ,0.0729f ,0.2769f ,0.1234f ,0.2869f ,0.0933f ,0.2461f ,0.1652f ,0.2661f ,0.1399f ,0.2685f ,0.1417f ,0.27f ,0.1429f ,0.2661f ,0.1424f ,0.24f ,0.098f ,0.2266f ,0.1229f ,0.2628f ,0.0703f ,0.2665f ,0.0671f ,0.2664f ,0.0668f ,0.2178f ,0.1526f ,0.2363f ,0.0929f ,0.2213f ,0.1179f ,0.2171f ,0.1588f ,0.2129f ,0.1643f ,0.2165f ,0.148f ,0.2533f ,0.0835f ,0.273f ,0.1232f ,0.2824f ,0.0941f ,0.2433f ,0.1632f ,0.2759f ,0.0832f ,0.2685f ,0.0797f ,0.2623f ,0.1418f ,0.2231f ,0.166f ,0.273f ,0.1232f ,0.2824f ,0.0941f ,0.2759f ,0.0832f ,0.2685f ,0.0797f ,0.2533f ,0.0835f ,0.2165f ,0.148f ,0.2231f ,0.166f ,0.2433f ,0.1632f ,0.2623f ,0.1418f ,0.2665f ,0.0671f ,0.2628f ,0.0703f ,0.2363f ,0.0929f ,0.2213f ,0.1179f ,0.2178f ,0.1526f ,0.2171f ,0.1588f ,0.2129f ,0.1643f ,0.2165f ,0.148f ,0.2533f ,0.0835f ,0.2664f ,0.0668f });
  }
}
private class MFFloat133 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat134 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32135 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,16,-1,16,17,1,-1,3,0,5,-1,5,8,3,-1,6,1,2,-1,2,7,6,-1,2,10,4,-1,18,10,2,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,2,-1,2,4,9,-1,8,15,14,-1,14,3,8,-1,3,19,16,-1,16,0,3,-1,14,19,3,-1,1,17,18,-1,18,2,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1});
  }
}
private class MFInt32136 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,16,-1,16,17,1,-1,2,0,5,-1,5,8,2,-1,6,1,3,-1,3,7,6,-1,3,10,4,-1,18,10,3,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,3,-1,3,4,9,-1,8,15,14,-1,14,2,8,-1,2,19,16,-1,16,0,2,-1,14,19,2,-1,1,17,18,-1,18,3,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1});
  }
}
private class MFVec3f137 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.11946825f ,0.0050174985f ,0.016718626f ,0.12303675f ,0.0116099985f ,0.012596626f ,0.12009375f ,0.0317025f ,0.015528375f ,0.1058625f ,0.0039824983f ,0.020075625f ,0.11016675f ,0.04695975f ,0.018743625f ,0.1245825f ,0.004027498f ,0.032689128f ,0.128214f ,0.01134f ,0.030889126f ,0.124785f ,0.029556f ,0.03282413f ,0.11182725f ,0.002925f ,0.036221627f ,0.1125585f ,0.039987f ,0.036581628f ,0.10896525f ,0.0643275f ,0.0025278751f ,0.097965f ,0.0676575f ,0.008958375f ,0.09849375f ,0.055008f ,0.020136375f ,0.10004175f ,0.047196f ,0.039664127f ,0.0977985f ,0.003824999f ,0.020230876f ,0.0983925f ,0.0032624998f ,0.039484125f ,0.11829375f ,0.0034649984f ,-0.000700875f ,0.120996f ,0.0114750005f ,-0.001137375f ,0.12052575f ,0.03246525f ,-0.001416375f ,0.09833175f ,0.002902499f ,0.0015423751f ,0.08826525f ,0.05742675f ,0.012522375f ,0.08871075f ,0.05142375f ,0.017830126f ,0.09002925f ,0.044343002f ,0.035546627f ,0.08856675f ,0.007942499f ,0.035411626f ,0.088191f ,0.008392498f ,0.020489626f ,0.088677f ,0.007717499f ,0.0068276254f ,0.102168f ,0.061807502f ,-0.007918875f ,0.094995f ,0.063990004f ,-0.0030678753f ,0.08802f ,0.05665275f ,-0.000520875f ,0.0884025f ,0.011159999f ,-0.0057318755f ,0.09528075f ,0.007717499f ,-0.009644625f ,0.1117035f ,0.008145f ,-0.010839375f ,0.11329425f ,0.012879f ,-0.011129625f ,0.1128285f ,0.032472f ,-0.011482876f ,0.12312f ,0.004904999f ,0.042476624f ,0.11276775f ,0.004027498f ,0.045356628f ,0.10032075f ,0.004319998f ,0.048889127f ,0.09361575f ,0.0105525f ,0.04607663f ,0.0948375f ,0.04098825f ,0.04618913f ,0.1005075f ,0.039015f ,0.049271625f ,0.111303f ,0.032859f ,0.046211626f ,0.12214575f ,0.023769f ,0.042859126f ,0.12498525f ,0.008797498f ,0.041126627f });
  }
}
private class MFVec2f138 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2528f ,0.0622f ,0.2585f ,0.0581f ,0.2383f ,0.0796f ,0.2566f ,0.0607f ,0.243f ,0.0749f ,0.2469f ,0.052f ,0.2512f ,0.047f ,0.2484f ,0.051f ,0.2292f ,0.0691f ,0.2342f ,0.0682f ,0.2533f ,0.0835f ,0.2407f ,0.0951f ,0.2314f ,0.0879f ,0.2226f ,0.0828f ,0.2271f ,0.0958f ,0.2197f ,0.0903f ,0.2628f ,0.0703f ,0.2665f ,0.0671f ,0.2664f ,0.0668f ,0.2363f ,0.0929f ,0.2407f ,0.0951f ,0.2314f ,0.0879f ,0.2226f ,0.0828f ,0.2197f ,0.0903f ,0.2271f ,0.0958f ,0.2363f ,0.0929f ,0.2533f ,0.0835f ,0.2407f ,0.0951f ,0.2407f ,0.0951f ,0.2363f ,0.0929f ,0.2363f ,0.0929f ,0.2628f ,0.0703f ,0.2665f ,0.0671f ,0.2664f ,0.0668f ,0.2469f ,0.052f ,0.2292f ,0.0691f ,0.2197f ,0.0903f ,0.2197f ,0.0903f ,0.2226f ,0.0828f ,0.2226f ,0.0828f ,0.2342f ,0.0682f ,0.2484f ,0.051f ,0.2512f ,0.047f });
  }
}
private class MFFloat139 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat140 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32141 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,16,17,-1,17,13,11,-1,10,14,16,-1,16,11,10,-1,5,7,3,-1,3,1,5,-1,0,4,6,-1,6,2,0,-1,14,10,12,-1,12,15,14,-1,7,4,0,-1,0,3,7,-1,8,9,5,-1,5,1,8,-1,40,37,36,-1,36,41,40,-1,48,45,44,-1,44,49,48,-1,27,31,28,-1,28,31,30,-1,30,29,28,-1,34,33,32,-1,32,35,34,-1,35,32,31,-1,31,27,35,-1,18,24,19,-1,26,25,24,-1,24,18,26,-1,20,23,22,-1,22,21,20,-1,19,24,23,-1,23,20,19,-1,5,18,19,-1,19,7,5,-1,7,19,20,-1,20,4,7,-1,4,20,21,-1,21,6,4,-1,40,39,38,-1,38,37,40,-1,15,22,23,-1,23,14,15,-1,14,23,24,-1,24,16,14,-1,16,24,25,-1,25,17,16,-1,44,51,50,-1,50,49,44,-1,9,26,18,-1,18,5,9,-1,3,27,28,-1,28,1,3,-1,1,28,29,-1,29,8,1,-1,48,47,46,-1,46,45,48,-1,13,30,31,-1,31,11,13,-1,11,31,32,-1,32,10,11,-1,10,32,33,-1,33,12,10,-1,36,43,42,-1,42,41,36,-1,2,34,35,-1,35,0,2,-1,0,35,27,-1,27,3,0,-1,12,36,37,-1,37,15,12,-1,15,37,38,-1,38,22,15,-1,22,38,39,-1,39,21,22,-1,21,39,40,-1,40,6,21,-1,6,40,41,-1,41,2,6,-1,2,41,42,-1,42,34,2,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,12,33,-1,17,44,45,-1,45,13,17,-1,13,45,46,-1,46,30,13,-1,30,46,47,-1,47,29,30,-1,29,47,48,-1,48,8,29,-1,8,48,49,-1,49,9,8,-1,9,49,50,-1,50,26,9,-1,26,50,51,-1,51,25,26,-1,25,51,44,-1,44,17,25,-1});
  }
}
private class MFInt32142 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,16,17,-1,17,13,5,-1,2,7,16,-1,16,5,2,-1,9,12,6,-1,6,1,9,-1,0,8,11,-1,11,4,0,-1,7,2,3,-1,3,10,7,-1,12,8,0,-1,0,6,12,-1,14,15,9,-1,9,1,14,-1,42,39,38,-1,38,43,42,-1,50,47,46,-1,46,51,50,-1,29,18,30,-1,30,33,32,-1,32,31,30,-1,36,35,34,-1,34,37,36,-1,37,34,33,-1,33,29,37,-1,20,19,21,-1,28,27,26,-1,26,20,28,-1,22,25,24,-1,24,23,22,-1,21,26,25,-1,25,22,21,-1,9,20,21,-1,21,12,9,-1,12,21,22,-1,22,8,12,-1,8,22,23,-1,23,11,8,-1,42,41,40,-1,40,39,42,-1,10,24,25,-1,25,7,10,-1,7,25,26,-1,26,16,7,-1,16,26,27,-1,27,17,16,-1,46,53,52,-1,52,51,46,-1,15,28,20,-1,20,9,15,-1,6,29,30,-1,30,1,6,-1,1,30,31,-1,31,14,1,-1,50,49,48,-1,48,47,50,-1,13,32,33,-1,33,5,13,-1,5,33,34,-1,34,2,5,-1,2,34,35,-1,35,3,2,-1,38,45,44,-1,44,43,38,-1,4,36,37,-1,37,0,4,-1,0,37,29,-1,29,6,0,-1,3,38,39,-1,39,10,3,-1,10,39,40,-1,40,24,10,-1,24,40,41,-1,41,23,24,-1,23,41,42,-1,42,11,23,-1,11,42,43,-1,43,4,11,-1,4,43,44,-1,44,36,4,-1,36,44,45,-1,45,35,36,-1,35,45,38,-1,38,3,35,-1,17,46,47,-1,47,13,17,-1,13,47,48,-1,48,32,13,-1,32,48,49,-1,49,31,32,-1,31,49,50,-1,50,14,31,-1,14,50,51,-1,51,15,14,-1,15,51,52,-1,52,28,15,-1,28,52,53,-1,53,27,28,-1,27,53,46,-1,46,17,27,-1});
  }
}
private class MFVec3f143 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1161675f ,0.0291195f ,0.07461f ,0.11416725f ,0.03528225f ,0.04788675f ,0.11574f ,0.02486025f ,0.0852075f ,0.11554425f ,0.03212325f ,0.061290003f ,0.10130625f ,0.030933f ,0.077332504f ,0.10036575f ,0.04186125f ,0.05118975f ,0.10249875f ,0.0263025f ,0.08865f ,0.10058625f ,0.03639825f ,0.06426f ,0.112554f ,0.03998475f ,0.03656475f ,0.10003725f ,0.047205f ,0.0396495f ,0.1140705f ,0.0018899998f ,0.070155f ,0.1131795f ,0.0023984998f ,0.046269f ,0.11646675f ,0.0046372497f ,0.084240004f ,0.11182275f ,0.0029137495f ,0.03620925f ,0.09990225f ,0.0018899998f ,0.075330004f ,0.102591f ,0.0037169987f ,0.087705f ,0.0994995f ,0.0028912497f ,0.04965075f ,0.098388f ,0.0032512492f ,0.0394785f ,0.0947385f ,0.03834225f ,0.0499905f ,0.09498825f ,0.03285f ,0.063135006f ,0.09561375f ,0.027378f ,0.07623f ,0.09632925f ,0.0238095f ,0.085005f ,0.0965565f ,0.007373249f ,0.084285006f ,0.0944955f ,0.006086249f ,0.07551f ,0.0941715f ,0.0070605f ,0.0502065f ,0.0933435f ,0.00728775f ,0.04391775f ,0.09469575f ,0.041085f ,0.04404375f ,0.12055725f ,0.02797425f ,0.05809725f ,0.119178f ,0.030912751f ,0.04482f ,0.1180485f ,0.033849f ,0.0373095f ,0.117468f ,0.0062099993f ,0.03702375f ,0.118489504f ,0.00586575f ,0.044163f ,0.119349f ,0.0054179993f ,0.067095004f ,0.12147525f ,0.007483499f ,0.0784125f ,0.12065175f ,0.02213775f ,0.079155f ,0.121180505f ,0.02526975f ,0.0708525f ,0.116694f ,0.0076972493f ,0.0885375f ,0.103896f ,0.00685125f ,0.0921375f ,0.09998325f ,0.0090247495f ,0.091845006f ,0.0998055f ,0.02135925f ,0.092385f ,0.10356525f ,0.02268225f ,0.092745006f ,0.11586825f ,0.0213795f ,0.089347504f ,0.118899f ,0.01984725f ,0.086467505f ,0.11950875f ,0.009229499f ,0.0859275f ,0.097341746f ,0.0066307494f ,0.0314145f ,0.10946475f ,0.0063269986f ,0.0284535f ,0.11268225f ,0.00835425f ,0.02848725f ,0.1131885f ,0.032472f ,0.028737f ,0.10901925f ,0.03727575f ,0.02882925f ,0.0982575f ,0.043454252f ,0.031311f ,0.0953145f ,0.0396945f ,0.03438675f ,0.09409275f ,0.009229499f ,0.03426975f });
  }
}
private class MFVec2f144 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2117f ,0.0481f ,0.2254f ,0.0615f ,0.2142f ,0.0508f ,0.2102f ,0.0461f ,0.2083f ,0.0443f ,0.2202f ,0.0585f ,0.2186f ,0.0548f ,0.1989f ,0.0701f ,0.1984f ,0.068f ,0.2138f ,0.0778f ,0.1952f ,0.0651f ,0.195f ,0.0629f ,0.2061f ,0.0729f ,0.2292f ,0.0691f ,0.2342f ,0.0682f ,0.2226f ,0.0828f ,0.2129f ,0.0844f ,0.2197f ,0.0903f ,0.2254f ,0.0615f ,0.2061f ,0.0729f ,0.2138f ,0.0778f ,0.2061f ,0.0729f ,0.1984f ,0.068f ,0.195f ,0.0629f ,0.195f ,0.0629f ,0.1984f ,0.068f ,0.2061f ,0.0729f ,0.2226f ,0.0828f ,0.2226f ,0.0828f ,0.2186f ,0.0548f ,0.2254f ,0.0615f ,0.2342f ,0.0682f ,0.2342f ,0.0682f ,0.2254f ,0.0615f ,0.2117f ,0.0481f ,0.2083f ,0.0443f ,0.2083f ,0.0443f ,0.2117f ,0.0481f ,0.2083f ,0.0443f ,0.195f ,0.0629f ,0.195f ,0.0629f ,0.195f ,0.0629f ,0.195f ,0.0629f ,0.2083f ,0.0443f ,0.2083f ,0.0443f ,0.2083f ,0.0443f ,0.2226f ,0.0828f ,0.2342f ,0.0682f ,0.2342f ,0.0682f ,0.2342f ,0.0682f ,0.2342f ,0.0682f ,0.2226f ,0.0828f ,0.2226f ,0.0828f ,0.2226f ,0.0828f });
  }
}
private class MFFloat145 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat146 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32147 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,10,1,-1,1,2,13,-1,10,8,3,-1,3,1,10,-1,3,8,0,-1,0,4,3,-1,0,9,5,-1,5,4,0,-1,7,6,5,-1,5,9,7,-1,6,7,13,-1,13,2,6,-1,22,14,18,-1,18,17,22,-1,20,15,21,-1,21,19,20,-1,9,21,15,-1,15,7,9,-1,10,16,14,-1,8,10,14,-1,14,22,8,-1,21,9,23,-1,11,12,13,-1,13,7,11,-1,0,8,24,-1,24,25,0,-1,16,10,13,-1,13,12,16,-1,23,9,0,-1,0,25,23,-1,11,7,15,-1,24,8,22,-1,35,34,33,-1,31,35,33,-1,31,33,32,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,37,40,39,-1,39,38,37,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,37,43,42,-1,40,37,42,-1,40,42,41,-1,18,26,27,-1,27,17,18,-1,17,27,28,-1,28,19,17,-1,19,28,29,-1,29,20,19,-1,20,29,26,-1,26,18,20,-1,17,30,31,-1,31,22,17,-1,22,31,32,-1,32,24,22,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,23,25,-1,23,34,35,-1,35,21,23,-1,21,35,36,-1,36,19,21,-1,19,36,30,-1,30,17,19,-1,14,37,38,-1,38,18,14,-1,18,38,39,-1,39,20,18,-1,20,39,40,-1,40,15,20,-1,15,40,41,-1,41,11,15,-1,11,41,42,-1,42,12,11,-1,12,42,43,-1,43,16,12,-1,16,43,37,-1,37,14,16,-1});
  }
}
private class MFInt32148 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {27,10,1,-1,1,2,27,-1,10,11,3,-1,3,1,10,-1,3,11,0,-1,0,4,3,-1,0,12,5,-1,5,4,0,-1,9,6,5,-1,5,12,9,-1,6,9,27,-1,27,2,6,-1,35,7,29,-1,29,28,35,-1,31,8,33,-1,33,30,31,-1,15,32,16,-1,16,14,15,-1,17,18,13,-1,19,17,13,-1,13,34,19,-1,32,15,36,-1,20,21,22,-1,22,14,20,-1,23,19,37,-1,37,38,23,-1,18,17,25,-1,25,24,18,-1,36,15,26,-1,26,39,36,-1,20,14,16,-1,37,19,34,-1,49,48,47,-1,45,49,47,-1,45,47,46,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,51,54,53,-1,53,52,51,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,51,57,56,-1,54,51,56,-1,54,56,55,-1,29,40,41,-1,41,28,29,-1,28,41,42,-1,42,30,28,-1,30,42,43,-1,43,31,30,-1,31,43,40,-1,40,29,31,-1,28,44,45,-1,45,35,28,-1,34,45,46,-1,46,37,34,-1,37,46,47,-1,47,38,37,-1,39,47,48,-1,48,36,39,-1,36,48,49,-1,49,32,36,-1,33,49,50,-1,50,30,33,-1,30,50,44,-1,44,28,30,-1,7,51,52,-1,52,29,7,-1,29,52,53,-1,53,31,29,-1,31,53,54,-1,54,8,31,-1,16,54,55,-1,55,20,16,-1,20,55,56,-1,56,21,20,-1,24,56,57,-1,57,18,24,-1,18,57,51,-1,51,13,18,-1});
  }
}
private class MFVec3f149 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.117243f ,0.013070251f ,0.095406756f ,0.10868625f ,0.0029699993f ,0.10730025f ,0.107399255f ,0.012060001f ,0.10753425f ,0.11799675f ,0.00240075f ,0.10500976f ,0.119043f ,0.012060001f ,0.104661f ,0.11821725f ,0.02149425f ,0.105135754f ,0.1082475f ,0.022482f ,0.10744426f ,0.10611f ,0.023166f ,0.098246254f ,0.115816504f ,0.0047632502f ,0.09456976f ,0.11596275f ,0.022394251f ,0.09459001f ,0.10613025f ,0.0048780004f ,0.09790201f ,0.10392525f ,0.0225f ,0.09857251f ,0.10409175f ,0.0148365f ,0.100053005f ,0.105396755f ,0.012894751f ,0.09988426f ,0.103164755f ,0.00447975f ,0.09373725f ,0.102921754f ,0.023910752f ,0.09319726f ,0.103821754f ,0.0052965f ,0.098613f ,0.11647125f ,0.0046395003f ,0.084251255f ,0.1025955f ,0.0037192497f ,0.0877185f ,0.11574225f ,0.0248625f ,0.08521201f ,0.102503255f ,0.026304752f ,0.088659f ,0.116802f ,0.022428f ,0.08837775f ,0.116802f ,0.0057960004f ,0.08840475f ,0.117774f ,0.021591f ,0.093564f ,0.11780325f ,0.00503775f ,0.09368326f ,0.118107006f ,0.012453751f ,0.09465525f ,0.10378575f ,0.0067860004f ,0.08169975f ,0.112392f ,0.0073575f ,0.079560004f ,0.111840755f ,0.0226575f ,0.080280006f ,0.10371825f ,0.023544f ,0.082404f ,0.12137625f ,0.00787275f ,0.084177f ,0.12126375f ,0.0082755005f ,0.08568451f ,0.12261825f ,0.0077625f ,0.08923276f ,0.1228005f ,0.012519f ,0.08986501f ,0.12248775f ,0.019557001f ,0.08898976f ,0.121178254f ,0.020214f ,0.084894754f ,0.120775506f ,0.020331f ,0.08479801f ,0.09838125f ,0.00695925f ,0.09254701f ,0.09808875f ,0.0065790005f ,0.08952975f ,0.098032504f ,0.022185002f ,0.09018f ,0.09810225f ,0.021514501f ,0.09145801f ,0.09885825f ,0.02042775f ,0.095593505f ,0.09896175f ,0.014764501f ,0.096691504f ,0.09874575f ,0.0074677505f ,0.095589004f });
  }
}
private class MFVec2f150 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2033f ,0.0375f ,0.1866f ,0.0487f ,0.186f ,0.0472f ,0.1969f ,0.0343f ,0.1963f ,0.0328f ,0.1973f ,0.0341f ,0.1873f ,0.048f ,0.1915f ,0.0602f ,0.1915f ,0.0578f ,0.1897f ,0.0535f ,0.1888f ,0.0569f ,0.2031f ,0.037f ,0.2012f ,0.0381f ,0.2444f ,0.0847f ,0.2208f ,0.06f ,0.2111f ,0.0557f ,0.2254f ,0.054f ,0.2483f ,0.0809f ,0.2464f ,0.0799f ,0.2587f ,0.0865f ,0.225f ,0.0604f ,0.2239f ,0.0673f ,0.2238f ,0.0671f ,0.267f ,0.0845f ,0.2486f ,0.0741f ,0.2486f ,0.074f ,0.2049f ,0.059f ,0.1896f ,0.055f ,0.2102f ,0.0461f ,0.1952f ,0.0651f ,0.2083f ,0.0443f ,0.195f ,0.0629f ,0.2109f ,0.0476f ,0.2048f ,0.0404f ,0.2576f ,0.0911f ,0.2063f ,0.0414f ,0.2083f ,0.0537f ,0.2612f ,0.0869f ,0.2671f ,0.0842f ,0.2047f ,0.0593f ,0.1952f ,0.0651f ,0.2102f ,0.0461f ,0.2083f ,0.0443f ,0.195f ,0.0629f ,0.2102f ,0.0461f ,0.2063f ,0.0414f ,0.2612f ,0.0869f ,0.2671f ,0.0842f ,0.2083f ,0.0537f ,0.2109f ,0.0476f ,0.2083f ,0.0443f ,0.2444f ,0.0847f ,0.1952f ,0.0651f ,0.195f ,0.0629f ,0.1915f ,0.0578f ,0.225f ,0.0604f ,0.2239f ,0.0673f ,0.2464f ,0.0799f });
  }
}
private class MFFloat151 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat152 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32153 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,7,-1,7,6,0,-1,2,0,6,-1,6,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1});
  }
}
private class MFInt32154 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,9,-1,9,8,0,-1,2,0,8,-1,8,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1});
  }
}
private class MFVec3f155 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.109172255f ,0.002007f ,0.115029f ,0.108081006f ,0.010451251f ,0.11555775f ,0.12057075f ,0.002007f ,0.112497754f ,0.121788f ,0.010451251f ,0.11259675f ,0.120948754f ,0.01614375f ,0.112122f ,0.109107f ,0.016731001f ,0.115152754f ,0.108697504f ,0.00297f ,0.107298f ,0.10740825f ,0.012060001f ,0.10752975f ,0.11800575f ,0.00240075f ,0.10500525f ,0.119052f ,0.012060001f ,0.10465875f ,0.11822625f ,0.02149425f ,0.10513125f ,0.108256504f ,0.022482002f ,0.10743975f ,0.10857825f ,0.012159f ,0.102483004f ,0.10957275f ,0.00519525f ,0.1023345f ,0.11492325f ,0.0048667504f ,0.10100475f ,0.1156995f ,0.012105f ,0.100707754f ,0.11507175f ,0.019399501f ,0.10112175f ,0.1092195f ,0.01998f ,0.102429f ,0.1127655f ,0.0053955005f ,0.117645755f ,0.11214675f ,0.0104175005f ,0.118089005f ,0.1125945f ,0.013248f ,0.117839254f ,0.118845f ,0.0129375f ,0.116775006f ,0.1192185f ,0.01049625f ,0.11662875f ,0.11844675f ,0.0053955005f ,0.116406f });
  }
}
private class MFVec2f156 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1822f ,0.0458f ,0.1809f ,0.0434f ,0.1953f ,0.0282f ,0.1948f ,0.024f ,0.1933f ,0.0293f ,0.1816f ,0.0411f ,0.1287f ,0.0243f ,0.0943f ,0.0785f ,0.1866f ,0.0487f ,0.186f ,0.0472f ,0.1969f ,0.0343f ,0.1963f ,0.0328f ,0.1973f ,0.0341f ,0.1322f ,0.09f ,0.157f ,0.0552f ,0.1873f ,0.048f ,0.186f ,0.0472f ,0.1866f ,0.0487f ,0.1969f ,0.0343f ,0.1963f ,0.0328f ,0.1973f ,0.0341f ,0.157f ,0.0552f ,0.1822f ,0.0458f ,0.1809f ,0.0434f ,0.1816f ,0.0411f ,0.0943f ,0.0785f ,0.1948f ,0.024f ,0.1953f ,0.0282f });
  }
}
private class MFFloat157 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat158 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32159 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,7,-1,7,6,0,-1,1,0,6,-1,6,8,1,-1,9,2,1,-1,1,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,3,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1});
  }
}
private class MFInt32160 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,9,-1,9,8,0,-1,1,0,8,-1,8,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,3,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1});
  }
}
private class MFVec3f161 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.112239f ,0.0039284998f ,0.11950425f ,0.119268f ,0.0039284998f ,0.117828004f ,0.119979f ,0.009729f ,0.1197315f ,0.11186775f ,0.009729f ,0.12130425f ,0.11929725f ,0.0136395f ,0.11825775f ,0.11241675f ,0.013979251f ,0.119880006f ,0.10915875f ,0.002007f ,0.11502676f ,0.1080675f ,0.01045125f ,0.1155555f ,0.12055725f ,0.002007f ,0.112495504f ,0.1217745f ,0.01045125f ,0.1125945f ,0.12093525f ,0.0161415f ,0.11211976f ,0.1090935f ,0.016731f ,0.115150504f ,0.1096335f ,0.0103815f ,0.11088675f ,0.11036925f ,0.0045045f ,0.11042325f ,0.11747925f ,0.0045045f ,0.1088595f ,0.1183635f ,0.01044f ,0.10905075f ,0.11782575f ,0.01369575f ,0.108524255f ,0.11022525f ,0.01407375f ,0.11059875f });
  }
}
private class MFVec2f162 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1831f ,0.0355f ,0.1904f ,0.0263f ,0.1901f ,0.0243f ,0.1819f ,0.0351f ,0.1913f ,0.0249f ,0.182f ,0.0368f ,0.088f ,0.0133f ,0.0677f ,0.0461f ,0.1822f ,0.0458f ,0.1809f ,0.0434f ,0.1953f ,0.0282f ,0.1948f ,0.024f ,0.1933f ,0.0293f ,0.0943f ,0.0785f ,0.1287f ,0.0243f ,0.1816f ,0.0411f ,0.1809f ,0.0434f ,0.1822f ,0.0458f ,0.1953f ,0.0282f ,0.1948f ,0.024f ,0.1933f ,0.0293f ,0.1287f ,0.0243f });
  }
}
private class MFFloat163 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat164 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32165 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,23,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1});
  }
}
private class MFInt32166 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,11,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1});
  }
}
private class MFVec3f167 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1282635f ,0.0019034995f ,0.060480006f ,0.134163f ,0.0111555f ,0.0672075f ,0.1310175f ,0.02536425f ,0.06975f ,0.12795301f ,0.0033592496f ,0.043177504f ,0.13185225f ,0.0111555f ,0.043735504f ,0.12800026f ,0.028089f ,0.044631f ,0.12895425f ,0.003951f ,0.0798975f ,0.1326105f ,0.0111555f ,0.078975f ,0.130509f ,0.0223695f ,0.0799425f ,0.12977776f ,0.0267255f ,0.05832f ,0.13300875f ,0.0111555f ,0.055467002f ,0.114081755f ,0.0019034995f ,0.0701775f ,0.116181f ,0.029121751f ,0.0746325f ,0.1141785f ,0.0352845f ,0.04789125f ,0.11648025f ,0.0046395003f ,0.084240004f ,0.11575125f ,0.0248625f ,0.08520751f ,0.113190755f ,0.00240075f ,0.046271253f ,0.1155555f ,0.032123253f ,0.061290003f ,0.12458925f ,0.0040207496f ,0.032674503f ,0.12822075f ,0.01134675f ,0.030892503f ,0.12479175f ,0.02955825f ,0.032807253f ,0.111834005f ,0.0029159999f ,0.0362115f ,0.11256525f ,0.039987f ,0.036567003f ,0.108747f ,0.0063179997f ,0.07029001f ,0.10790325f ,0.006804f ,0.046894502f ,0.10707525f ,0.00711225f ,0.040896002f ,0.107583754f ,0.03394125f ,0.041157003f ,0.1084545f ,0.03146625f ,0.0471105f ,0.109820254f ,0.028230751f ,0.060862504f ,0.110466f ,0.025299f ,0.07384501f ,0.10990125f ,0.022286251f ,0.081360005f ,0.11077425f ,0.0083385f ,0.080685005f ,0.109190255f ,0.0056047495f ,0.029313002f ,0.1200105f ,0.0065272497f ,0.026716502f ,0.12258675f ,0.01184175f ,0.025238251f ,0.119511f ,0.02826675f ,0.027020251f ,0.109190255f ,0.0369135f ,0.02950875f ,0.10629225f ,0.032908503f ,0.03295125f ,0.105833255f ,0.008603999f ,0.032715f ,0.1294515f ,0.01053225f ,0.083160006f ,0.1270125f ,0.00623025f ,0.083745f ,0.11665575f ,0.00673875f ,0.0879525f ,0.1125315f ,0.00911025f ,0.08547751f ,0.111861f ,0.01848375f ,0.086017504f ,0.11554425f ,0.01997325f ,0.088672504f ,0.12786525f ,0.01809225f ,0.08385751f });
  }
}
private class MFVec2f168 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2299f ,0.0317f ,0.2316f ,0.0247f ,0.2265f ,0.0269f ,0.241f ,0.0419f ,0.244f ,0.0359f ,0.2401f ,0.0413f ,0.2245f ,0.0286f ,0.226f ,0.0221f ,0.2232f ,0.0245f ,0.2333f ,0.0341f ,0.2378f ,0.0303f ,0.2142f ,0.0508f ,0.2117f ,0.0481f ,0.2254f ,0.0615f ,0.2102f ,0.0461f ,0.2083f ,0.0443f ,0.2202f ,0.0585f ,0.2186f ,0.0548f ,0.2469f ,0.052f ,0.2512f ,0.047f ,0.2484f ,0.051f ,0.2292f ,0.0691f ,0.2342f ,0.0682f ,0.2142f ,0.0508f ,0.2202f ,0.0585f ,0.2292f ,0.0691f ,0.2342f ,0.0682f ,0.2254f ,0.0615f ,0.2186f ,0.0548f ,0.2117f ,0.0481f ,0.2083f ,0.0443f ,0.2102f ,0.0461f ,0.2292f ,0.0691f ,0.2469f ,0.052f ,0.2512f ,0.047f ,0.2484f ,0.051f ,0.2342f ,0.0682f ,0.2342f ,0.0682f ,0.2292f ,0.0691f ,0.226f ,0.0221f ,0.2245f ,0.0286f ,0.2102f ,0.0461f ,0.2102f ,0.0461f ,0.2083f ,0.0443f ,0.2083f ,0.0443f ,0.2232f ,0.0245f });
  }
}
private class MFFloat169 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat170 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32171 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,10,11,-1,11,3,2,-1,0,12,14,-1,14,5,0,-1,2,6,13,-1,13,10,2,-1,0,3,11,-1,11,12,0,-1,15,16,0,-1,0,5,15,-1,17,1,2,-1,2,3,17,-1,16,17,3,-1,3,0,16,-1,2,1,4,-1,4,6,2,-1,6,4,8,-1,7,9,18,-1,18,15,7,-1,8,4,18,-1,18,9,8,-1,7,15,5,-1,1,17,20,-1,20,19,1,-1,17,16,21,-1,21,20,17,-1,16,15,22,-1,22,21,16,-1,22,15,18,-1,18,23,22,-1,23,18,4,-1,4,24,23,-1,24,4,1,-1,1,19,24,-1,27,26,25,-1,28,27,25,-1,29,28,25,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,19,20,24,-1,30,33,32,-1,32,31,30,-1,30,36,35,-1,33,30,35,-1,33,35,34,-1,10,25,26,-1,26,11,10,-1,11,26,27,-1,27,12,11,-1,12,27,28,-1,28,14,12,-1,14,28,29,-1,29,13,14,-1,13,29,25,-1,25,10,13,-1,6,30,31,-1,31,13,6,-1,13,31,32,-1,32,14,13,-1,14,32,33,-1,33,5,14,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,9,7,-1,9,35,36,-1,36,8,9,-1,8,36,30,-1,30,6,8,-1});
  }
}
private class MFInt32172 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,23,24,-1,24,1,0,-1,3,25,27,-1,27,2,3,-1,0,4,26,-1,26,23,0,-1,3,1,24,-1,24,25,3,-1,5,6,7,-1,7,8,5,-1,9,10,11,-1,11,12,9,-1,6,13,14,-1,14,7,6,-1,11,10,17,-1,17,15,11,-1,15,17,18,-1,16,19,20,-1,20,5,16,-1,18,17,22,-1,22,21,18,-1,16,5,8,-1,31,30,35,-1,35,34,31,-1,30,29,36,-1,36,35,30,-1,29,28,37,-1,37,36,29,-1,37,28,33,-1,33,38,37,-1,38,33,32,-1,32,39,38,-1,39,32,31,-1,31,34,39,-1,42,41,40,-1,43,42,40,-1,44,43,40,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,34,35,39,-1,45,48,47,-1,47,46,45,-1,45,51,50,-1,48,45,50,-1,48,50,49,-1,23,40,41,-1,41,24,23,-1,24,41,42,-1,42,25,24,-1,25,42,43,-1,43,27,25,-1,27,43,44,-1,44,26,27,-1,26,44,40,-1,40,23,26,-1,4,45,46,-1,46,26,4,-1,26,46,47,-1,47,27,26,-1,27,47,48,-1,48,2,27,-1,8,48,49,-1,49,16,8,-1,16,49,50,-1,50,19,16,-1,21,50,51,-1,51,18,21,-1,18,51,45,-1,45,15,18,-1});
  }
}
private class MFVec3f173 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.13023226f ,0.01971675f ,0.08492625f ,0.12904425f ,0.0027854997f ,0.0904005f ,0.12908475f ,0.004560749f ,0.084375f ,0.1316655f ,0.0111555f ,0.08475075f ,0.119961f ,0.0051187496f ,0.09297675f ,0.11681775f ,0.022428f ,0.08836425f ,0.11681775f ,0.005796f ,0.0883935f ,0.11778975f ,0.021591f ,0.09355275f ,0.117819004f ,0.005037749f ,0.093672f ,0.11812051f ,0.01245375f ,0.094644f ,0.128961f ,0.003950999f ,0.079893f ,0.13261725f ,0.0111555f ,0.078966f ,0.13051575f ,0.0223695f ,0.07994025f ,0.116487004f ,0.0046395f ,0.084240004f ,0.115758f ,0.0248625f ,0.08520075f ,0.119875506f ,0.0218115f ,0.09299475f ,0.12974626f ,0.020173501f ,0.090387f ,0.13109176f ,0.01167975f ,0.09101475f ,0.119151f ,0.012645f ,0.09455625f ,0.12982276f ,0.0024795f ,0.09323325f ,0.131688f ,0.01068975f ,0.09340875f ,0.130518f ,0.01865025f ,0.0932085f ,0.120186f ,0.0200115f ,0.09551475f ,0.1195425f ,0.011421f ,0.096588f ,0.120753005f ,0.0042232494f ,0.095445f ,0.12572551f ,0.0070357495f ,0.07542225f ,0.12811725f ,0.01173825f ,0.07483275f ,0.126549f ,0.020061001f ,0.07553475f ,0.117213756f ,0.021676501f ,0.0787635f ,0.11772f ,0.00749025f ,0.07807725f ,0.1128465f ,0.00808875f ,0.08762175f ,0.112938754f ,0.00744975f ,0.0851355f ,0.1123785f ,0.021055501f ,0.085788004f ,0.11282175f ,0.02005425f ,0.08721f ,0.1135125f ,0.0194265f ,0.091368005f ,0.113870256f ,0.01260225f ,0.0921915f ,0.113643005f ,0.00756225f ,0.09153675f });
  }
}
private class MFVec2f174 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2192f ,0.0256f ,0.2205f ,0.0195f ,0.2048f ,0.0404f ,0.2199f ,0.022f ,0.2063f ,0.0414f ,0.2047f ,0.0523f ,0.1956f ,0.0462f ,0.1979f ,0.0386f ,0.2109f ,0.0476f ,0.277f ,0.1031f ,0.2673f ,0.0987f ,0.263f ,0.1f ,0.2744f ,0.109f ,0.1892f ,0.0439f ,0.1911f ,0.0375f ,0.2576f ,0.0911f ,0.2083f ,0.0537f ,0.263f ,0.0893f ,0.2612f ,0.0869f ,0.2047f ,0.0593f ,0.2048f ,0.0593f ,0.2671f ,0.0842f ,0.2673f ,0.0839f ,0.2245f ,0.0286f ,0.226f ,0.0221f ,0.2232f ,0.0245f ,0.2102f ,0.0461f ,0.2083f ,0.0443f ,0.2039f ,0.0358f ,0.2152f ,0.0224f ,0.2154f ,0.0203f ,0.2126f ,0.0258f ,0.2034f ,0.0366f ,0.2033f ,0.0375f ,0.2114f ,0.0219f ,0.2132f ,0.0168f ,0.2123f ,0.0196f ,0.1999f ,0.0356f ,0.201f ,0.0349f ,0.2011f ,0.0354f ,0.2245f ,0.0286f ,0.226f ,0.0221f ,0.2232f ,0.0245f ,0.2083f ,0.0443f ,0.2102f ,0.0461f ,0.2576f ,0.0911f ,0.2102f ,0.0461f ,0.2083f ,0.0443f ,0.2048f ,0.0404f ,0.2083f ,0.0537f ,0.2047f ,0.0593f ,0.2612f ,0.0869f });
  }
}
private class MFFloat175 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat176 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32177 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,7,1,-1,1,0,6,-1,7,8,2,-1,2,1,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,0,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1});
  }
}
private class MFInt32178 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,7,0,-1,0,1,6,-1,7,8,2,-1,2,0,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,1,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1});
  }
}
private class MFVec3f179 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1318005f ,0.001701f ,0.10044675f ,0.13336651f ,0.007893f ,0.1001745f ,0.13247551f ,0.014760001f ,0.10041075f ,0.121169254f ,0.015426001f ,0.10263825f ,0.12035476f ,0.0078097503f ,0.103133254f ,0.122118756f ,0.0018089998f ,0.10235926f ,0.12981376f ,0.0024795f ,0.09323326f ,0.13167901f ,0.01068975f ,0.093408756f ,0.13050675f ,0.01865025f ,0.09320851f ,0.12017701f ,0.0200115f ,0.09551475f ,0.11953126f ,0.0114187505f ,0.096588f ,0.120744005f ,0.0042232494f ,0.09544501f ,0.12726901f ,0.0051682503f ,0.090396f ,0.12858976f ,0.0107797505f ,0.090704255f ,0.12770551f ,0.01658025f ,0.09043425f ,0.12136501f ,0.01741275f ,0.0917505f ,0.120991506f ,0.011531251f ,0.09275851f ,0.121837504f ,0.0062100003f ,0.0917055f ,0.13072501f ,0.00807525f ,0.104184f ,0.12996225f ,0.0050759995f ,0.104303256f ,0.12525076f ,0.00513f ,0.105151504f ,0.12441151f ,0.00811125f ,0.10570726f ,0.124773756f ,0.0118642505f ,0.10528875f ,0.13027501f ,0.01154025f ,0.104305506f });
  }
}
private class MFVec2f180 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2109f ,0.0133f ,0.2102f ,0.0181f ,0.2093f ,0.0169f ,0.1959f ,0.0354f ,0.1986f ,0.0324f ,0.1989f ,0.0342f ,0.2114f ,0.0219f ,0.2132f ,0.0168f ,0.2123f ,0.0196f ,0.1999f ,0.0356f ,0.201f ,0.0349f ,0.2011f ,0.0354f ,0.2114f ,0.0219f ,0.2132f ,0.0168f ,0.2123f ,0.0196f ,0.1999f ,0.0356f ,0.201f ,0.0349f ,0.2011f ,0.0354f ,0.2109f ,0.0133f ,0.2102f ,0.0181f ,0.1989f ,0.0342f ,0.1986f ,0.0324f ,0.1959f ,0.0354f ,0.2093f ,0.0169f });
  }
}
private class MFFloat181 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat182 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32183 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,4,-1,4,1,2,-1,0,1,4,-1,4,5,0,-1,7,1,0,-1,0,6,7,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,10,4,3,-1,3,9,10,-1,5,4,10,-1,10,11,5,-1,0,5,11,-1,11,6,0,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1});
  }
}
private class MFInt32184 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,9,0,5,-1,5,8,9,-1,1,0,9,-1,9,10,1,-1,12,6,7,-1,7,11,12,-1,14,3,2,-1,2,13,14,-1,4,3,14,-1,14,15,4,-1,5,4,15,-1,15,8,5,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,11,18,19,-1,19,12,11,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,16,-1,16,8,15,-1});
  }
}
private class MFVec3f185 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.13008375f ,0.001818f ,0.10640925f ,0.1321695f ,0.0076590003f ,0.1083915f ,0.13106251f ,0.01277325f ,0.107160755f ,0.12458701f ,0.01313775f ,0.10856475f ,0.12468825f ,0.00782325f ,0.109813504f ,0.12446325f ,0.001818f ,0.10743525f ,0.131796f ,0.001701f ,0.10045125f ,0.13336201f ,0.007893001f ,0.100179f ,0.13247326f ,0.014760001f ,0.10041525f ,0.121164754f ,0.015426001f ,0.10264275f ,0.12035026f ,0.0078097503f ,0.103137754f ,0.122114256f ,0.0018090005f ,0.10236375f ,0.12900826f ,0.0042705005f ,0.09676125f ,0.12997125f ,0.0080685f ,0.0966015f ,0.12941101f ,0.012384f ,0.09675225f ,0.12245851f ,0.012793501f ,0.09804825f ,0.12198376f ,0.00807525f ,0.098487005f ,0.12305476f ,0.004338f ,0.097875f });
  }
}
private class MFVec2f186 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2048f ,0.0135f ,0.2053f ,0.0142f ,0.1964f ,0.026f ,0.1976f ,0.0232f ,0.1977f ,0.0271f ,0.2052f ,0.017f ,0.0639f ,0.0523f ,0.0903f ,0.0107f ,0.2102f ,0.0181f ,0.2109f ,0.0133f ,0.2093f ,0.0169f ,0.1317f ,0.0215f ,0.0951f ,0.0836f ,0.1959f ,0.0354f ,0.1986f ,0.0324f ,0.1989f ,0.0342f ,0.2102f ,0.0181f ,0.2109f ,0.0133f ,0.2093f ,0.0169f ,0.0951f ,0.0836f ,0.1986f ,0.0324f ,0.1989f ,0.0342f });
  }
}
private class MFFloat187 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat188 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32189 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1});
  }
}
private class MFInt32190 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1});
  }
}
private class MFVec3f191 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1612575f ,0.82506156f ,-0.018348752f ,-0.131625f ,0.82506156f ,0.053853754f ,-0.065047495f ,0.82506156f ,0.07169625f ,-0.018899994f ,0.82506156f ,0.021723751f ,-0.018899994f ,0.82506156f ,-0.058421254f ,-0.065047495f ,0.82506156f ,-0.10839375f ,-0.131625f ,0.82506156f ,-0.09055126f ,-0.1612575f ,0.74070007f ,-0.018348752f ,-0.131625f ,0.74070007f ,0.053853754f ,-0.065047495f ,0.74070007f ,0.07169625f ,-0.018899994f ,0.74070007f ,0.021723751f ,-0.018899994f ,0.74070007f ,-0.058421254f ,-0.065047495f ,0.74070007f ,-0.10839375f ,-0.131625f ,0.74070007f ,-0.09055126f ,-0.1612575f ,0.59445006f ,-0.018348752f ,-0.131625f ,0.59445006f ,0.053853754f ,-0.065047495f ,0.59445006f ,0.07169625f ,-0.018899994f ,0.59445006f ,0.021723751f ,-0.018899994f ,0.59445006f ,-0.058421254f ,-0.065047495f ,0.59445006f ,-0.10839375f ,-0.131625f ,0.59445006f ,-0.09055126f ,-0.170415f ,0.44550005f ,-0.018348752f ,-0.13734f ,0.44550005f ,0.06224625f ,-0.063f ,0.44550005f ,0.08215875f ,-0.019169996f ,0.44550005f ,0.02638125f ,-0.019169996f ,0.44550005f ,-0.06307875f ,-0.063f ,0.44550005f ,-0.11885626f ,-0.13734f ,0.44550005f ,-0.098943755f ,-0.1429425f ,0.6287851f ,-0.018348752f ,-0.1202175f ,0.6287851f ,0.03704625f ,-0.06912f ,0.6287851f ,0.05072625f ,-0.035414997f ,0.6287851f ,0.012386251f ,-0.035414997f ,0.6287851f ,-0.049083754f ,-0.06912f ,0.6287851f ,-0.08742375f ,-0.1202175f ,0.6287851f ,-0.07374375f ,-0.1431675f ,0.48352507f ,-0.018348752f ,-0.12222f ,0.48352507f ,0.02566125f ,-0.075168f ,0.48352507f ,0.036528748f ,-0.03744f ,0.48352507f ,0.0060637505f ,-0.03744f ,0.48352507f ,-0.04276125f ,-0.075168f ,0.48352507f ,-0.07322625f ,-0.12222f ,0.48352507f ,-0.062358752f ,-0.140805f ,0.8698501f ,-0.018348752f ,-0.1188675f ,0.8698501f ,0.03508875f ,-0.0695925f ,0.8698501f ,0.04827375f ,-0.0300825f ,0.8698501f ,0.011306249f ,-0.0300825f ,0.8698501f ,-0.04800375f ,-0.0695925f ,0.8698501f ,-0.08497126f ,-0.1188675f ,0.8698501f ,-0.071786255f ,-0.1361025f ,0.40072504f ,-0.018348752f ,-0.1178325f ,0.40072504f ,0.023793751f ,-0.07673625f ,0.40072504f ,0.03328875f ,-0.043785f ,0.40072504f ,0.0066937506f ,-0.043785f ,0.40072504f ,-0.039674252f ,-0.07673625f ,0.40072504f ,-0.06627376f ,-0.1178325f ,0.40072504f ,-0.05677875f ,-0.10878075f ,0.37867504f ,-0.018348752f ,-0.10078425f ,0.37867504f ,0.0021712496f ,-0.082818f ,0.37867504f ,0.006311249f ,-0.068399996f ,0.37867504f ,-0.0053077512f ,-0.068399996f ,0.37867504f ,-0.027675001f ,-0.082818f ,0.37867504f ,-0.039303f ,-0.10078425f ,0.37867504f ,-0.035154004f });
  }
}
private class MFVec2f192 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.719f ,0.5576f ,0.6284f ,0.5576f ,0.7414f ,0.5576f ,0.6787f ,0.5576f ,0.5781f ,0.5576f ,0.5154f ,0.5576f ,0.5378f ,0.5576f ,0.6284f ,0.5029f ,0.7509f ,0.3997f ,0.6284f ,0.3997f ,0.7509f ,0.5029f ,0.7811f ,0.3997f ,0.7811f ,0.5029f ,0.6964f ,0.3997f ,0.6964f ,0.5029f ,0.5604f ,0.3997f ,0.5604f ,0.5029f ,0.4756f ,0.3997f ,0.4756f ,0.5029f ,0.5059f ,0.3997f ,0.5059f ,0.5029f ,0.7509f ,0.3197f ,0.6284f ,0.3197f ,0.7811f ,0.3197f ,0.6964f ,0.3197f ,0.5604f ,0.3197f ,0.4756f ,0.3197f ,0.5059f ,0.3197f ,0.7651f ,0.2166f ,0.6284f ,0.2166f ,0.7989f ,0.2166f ,0.7043f ,0.2166f ,0.5525f ,0.2166f ,0.4579f ,0.2166f ,0.4917f ,0.2166f ,0.7224f ,0.263f ,0.6284f ,0.263f ,0.7456f ,0.263f ,0.6805f ,0.263f ,0.5762f ,0.263f ,0.5112f ,0.263f ,0.5344f ,0.263f ,0.8705f ,0.5452f ,0.8705f ,0.5383f ,0.8705f ,0.5369f ,0.8705f ,0.5408f ,0.8705f ,0.5483f ,0.8705f ,0.5522f ,0.8705f ,0.5509f ,0.917f ,0.5452f ,0.917f ,0.5266f ,0.89f ,0.5304f ,0.89f ,0.5452f ,0.917f ,0.522f ,0.89f ,0.5268f ,0.917f ,0.5349f ,0.89f ,0.537f ,0.917f ,0.5555f ,0.89f ,0.5534f ,0.917f ,0.5684f ,0.89f ,0.5636f ,0.917f ,0.5638f ,0.89f ,0.56f ,0.8746f ,0.531f ,0.8746f ,0.5452f ,0.8746f ,0.5279f ,0.8746f ,0.5368f ,0.8746f ,0.5524f ,0.8746f ,0.5613f ,0.8746f ,0.5581f });
  }
}
private class MFFloat193 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat194 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32195 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
private class MFInt32196 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
private class MFVec3f197 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10877851f ,0.43062302f ,-0.018911252f ,-0.10078201f ,0.43062302f ,0.0016087501f ,-0.08281576f ,0.43062302f ,0.00576225f ,-0.06840001f ,0.43062302f ,-0.0058702505f ,-0.06840001f ,0.43062302f ,-0.028237501f ,-0.08281576f ,0.43062302f ,-0.0398655f ,-0.10078201f ,0.43062302f ,-0.0357165f ,-0.1451925f ,0.30503252f ,-0.018911252f ,-0.12546001f ,0.32733002f ,0.025989752f ,-0.12042001f ,0.372195f ,0.035012253f ,-0.140265f ,0.36580503f ,-0.018911252f ,-0.07436026f ,0.32733002f ,0.038319748f ,-0.075807005f ,0.372195f ,0.045879755f ,-0.041895006f ,0.30503252f ,0.00879975f ,-0.040027507f ,0.36580503f ,0.0025965006f ,-0.041895006f ,0.2877075f ,-0.05021775f ,-0.040027507f ,0.36580503f ,-0.040419f ,-0.07436026f ,0.2877075f ,-0.08475526f ,-0.075807005f ,0.36580503f ,-0.072717756f ,-0.12546001f ,0.2877075f ,-0.07242525f ,-0.12042001f ,0.36580503f ,-0.061850253f ,-0.11783251f ,0.408753f ,0.02322225f ,-0.13610251f ,0.408753f ,-0.018911252f ,-0.07673401f ,0.408753f ,0.032717254f ,-0.043785006f ,0.408753f ,0.006122251f ,-0.043785006f ,0.408753f ,-0.040236752f ,-0.07673401f ,0.408753f ,-0.065810256f ,-0.11783251f ,0.408753f ,-0.05633775f ,-0.1287675f ,0.11812501f ,-0.01936575f ,-0.11334601f ,0.11835001f ,0.015774751f ,-0.078682505f ,0.11835001f ,0.02445975f ,-0.050895005f ,0.11812501f ,0.00013950035f ,-0.050895005f ,0.117675014f ,-0.04140225f ,-0.078682505f ,0.117675014f ,-0.058632754f ,-0.11334601f ,0.117675014f ,-0.04994775f ,-0.108522005f ,0.08190001f ,-0.018900001f ,-0.100719005f ,0.08190001f ,-0.00112275f ,-0.08318701f ,0.08190001f ,0.0032647487f ,-0.069120005f ,0.08190001f ,-0.009033751f ,-0.069120005f ,0.08167501f ,-0.030044252f ,-0.08318701f ,0.08167501f ,-0.0387585f ,-0.100719005f ,0.08167501f ,-0.034366503f });
  }
}
private class MFVec2f198 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9309f ,0.5848f ,0.919f ,0.5848f ,0.8921f ,0.5848f ,0.8706f ,0.5848f ,0.8706f ,0.5848f ,0.8921f ,0.5848f ,0.919f ,0.5848f ,0.9845f ,0.5321f ,0.955f ,0.5475f ,0.9491f ,0.5599f ,0.9788f ,0.5571f ,0.8787f ,0.5475f ,0.8825f ,0.5599f ,0.8302f ,0.5321f ,0.8291f ,0.5571f ,0.8302f ,0.52f ,0.8291f ,0.5571f ,0.8787f ,0.52f ,0.8825f ,0.5571f ,0.955f ,0.52f ,0.9491f ,0.5571f ,0.9444f ,0.5755f ,0.9717f ,0.5755f ,0.8831f ,0.5755f ,0.8339f ,0.5755f ,0.8339f ,0.5755f ,0.8831f ,0.5755f ,0.9444f ,0.5755f ,0.9632f ,0.3942f ,0.9402f ,0.3943f ,0.8884f ,0.3943f ,0.8469f ,0.3942f ,0.8469f ,0.3941f ,0.8884f ,0.3941f ,0.9402f ,0.3941f ,0.9325f ,0.3742f ,0.9208f ,0.3742f ,0.8947f ,0.3742f ,0.8737f ,0.3742f ,0.8737f ,0.3741f ,0.8947f ,0.3741f ,0.9208f ,0.3741f });
  }
}
private class MFFloat199 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat200 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32201 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,15,21,-1,21,34,13,-1,9,34,21,-1,21,20,9,-1,0,15,14,-1,14,2,0,-1,30,33,16,-1,16,3,30,-1,3,16,25,-1,25,4,3,-1,22,17,18,-1,18,5,22,-1,5,18,29,-1,29,6,5,-1,6,19,27,-1,7,20,21,-1,21,1,7,-1,1,21,15,-1,15,0,1,-1,15,13,32,-1,32,14,15,-1,33,11,12,-1,12,16,33,-1,25,16,12,-1,12,23,25,-1,17,24,10,-1,10,18,17,-1,18,10,28,-1,28,29,18,-1,19,8,26,-1,26,27,19,-1,4,25,17,-1,17,22,4,-1,25,23,24,-1,24,17,25,-1,20,27,26,-1,26,9,20,-1,6,27,20,-1,20,7,6,-1,29,28,8,-1,8,19,29,-1,6,29,19,-1,1,0,31,-1,0,2,31,-1,31,30,3,-1,3,4,31,-1,4,22,31,-1,22,5,31,-1,5,6,31,-1,6,7,31,-1,7,1,31,-1,2,30,31,-1,14,33,30,-1,30,2,14,-1,32,11,33,-1,33,14,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,26,8,36,-1,36,35,26,-1,8,28,37,-1,37,36,8,-1,28,10,38,-1,38,37,28,-1,10,24,39,-1,39,38,10,-1,24,23,40,-1,40,39,24,-1,23,12,41,-1,41,40,23,-1,12,11,42,-1,42,41,12,-1,11,32,43,-1,43,42,11,-1,32,13,44,-1,44,43,32,-1,13,34,45,-1,45,44,13,-1,34,9,46,-1,46,45,34,-1,9,26,35,-1,35,46,9,-1});
  }
}
private class MFInt32202 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,12,27,-1,27,34,5,-1,7,34,27,-1,27,28,7,-1,9,12,11,-1,11,10,9,-1,30,33,14,-1,14,13,30,-1,13,14,16,-1,16,15,13,-1,17,20,19,-1,19,18,17,-1,18,19,22,-1,22,21,18,-1,21,24,23,-1,25,28,27,-1,27,26,25,-1,26,27,12,-1,12,9,26,-1,12,5,32,-1,32,11,12,-1,33,3,4,-1,4,14,33,-1,16,14,4,-1,4,8,16,-1,20,6,2,-1,2,19,20,-1,19,2,29,-1,29,22,19,-1,24,0,1,-1,1,23,24,-1,15,16,20,-1,20,17,15,-1,16,8,6,-1,6,20,16,-1,28,23,1,-1,1,7,28,-1,21,23,28,-1,28,25,21,-1,22,29,0,-1,0,24,22,-1,21,22,24,-1,26,9,31,-1,9,10,31,-1,31,30,13,-1,13,15,31,-1,15,17,31,-1,17,18,31,-1,18,21,31,-1,21,25,31,-1,25,26,31,-1,10,30,31,-1,11,33,30,-1,30,10,11,-1,32,3,33,-1,33,11,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,1,0,36,-1,36,35,1,-1,0,29,37,-1,37,36,0,-1,29,2,38,-1,38,37,29,-1,2,6,39,-1,39,38,2,-1,6,8,40,-1,40,39,6,-1,8,4,41,-1,41,40,8,-1,4,3,42,-1,42,41,4,-1,3,32,43,-1,43,42,3,-1,32,5,44,-1,44,43,32,-1,5,34,45,-1,45,44,5,-1,34,7,46,-1,46,45,34,-1,7,1,35,-1,35,46,7,-1});
  }
}
private class MFVec3f203 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.069563255f ,0.09505351f ,-0.03718125f ,-0.0627075f ,0.09237601f ,-0.0168165f ,-0.080455504f ,0.09656551f ,-0.04665375f ,-0.108045004f ,0.09544276f ,-0.037136253f ,-0.11376f ,0.09342451f ,-0.022353752f ,-0.10546876f ,0.09386326f ,0.0021959997f ,-0.087255f ,0.09476551f ,0.008228251f ,-0.071372256f ,0.09347176f ,0.0022455f ,-0.0868005f ,0.070897505f ,0.011817001f ,-0.06538501f ,0.066015005f ,0.0019170004f ,-0.10859626f ,0.06432751f ,0.002529f ,-0.094347f ,0.062122505f ,-0.05297625f ,-0.11171251f ,0.0650475f ,-0.041276254f ,-0.06552f ,0.0650475f ,-0.042266253f ,-0.080680504f ,0.08393626f ,-0.048296254f ,-0.06770475f ,0.083596505f ,-0.038801253f ,-0.10634851f ,0.084505506f ,-0.038441252f ,-0.1179225f ,0.07278751f ,-0.012204001f ,-0.1045845f ,0.080829f ,0.0025919997f ,-0.087921f ,0.08372475f ,0.008928f ,-0.07019775f ,0.08252551f ,0.0026234996f ,-0.0599625f ,0.08082001f ,-0.019035f ,-0.113535f ,0.09300826f ,-0.011592001f ,-0.1149075f ,0.058275007f ,-0.025362002f ,-0.114502504f ,0.058117505f ,-0.013680001f ,-0.118395f ,0.073818006f ,-0.02366775f ,-0.07675651f ,0.068490006f ,0.0086535f ,-0.07991325f ,0.083139755f ,0.0069120005f ,-0.097593755f ,0.06765751f ,0.0089595f ,-0.09710775f ,0.082291506f ,0.006896251f ,-0.093831755f ,0.096700504f ,-0.046631254f ,-0.087615006f ,0.10300501f ,-0.017669251f ,-0.08185501f ,0.062190004f ,-0.05308875f ,-0.093179256f ,0.084231004f ,-0.048228752f ,-0.058500003f ,0.059737504f ,-0.019131752f ,-0.0786285f ,0.0498825f ,0.0046327505f ,-0.08620425f ,0.052605003f ,0.0069435006f ,-0.094392f ,0.0492075f ,0.0048307497f ,-0.10287675f ,0.045832507f ,-0.000087750486f ,-0.107849255f ,0.039330006f ,-0.013761001f ,-0.108216f ,0.039690007f ,-0.024140252f ,-0.10569601f ,0.047475006f ,-0.03729375f ,-0.0915615f ,0.044302505f ,-0.046721254f ,-0.083171256f ,0.044167504f ,-0.046788752f ,-0.070004255f ,0.046935007f ,-0.03808125f ,-0.0639225f ,0.040590003f ,-0.018110251f ,-0.06974325f ,0.047182504f ,-0.00056250015f });
  }
}
private class MFVec2f204 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.227f ,0.1089f ,0.2217f ,0.1285f ,0.2533f ,0.0835f ,0.273f ,0.1232f ,0.2824f ,0.0941f ,0.2433f ,0.1632f ,0.2685f ,0.0797f ,0.2165f ,0.148f ,0.2759f ,0.0832f ,0.2428f ,0.156f ,0.2563f ,0.142f ,0.2584f ,0.1419f ,0.2431f ,0.1588f ,0.2715f ,0.1062f ,0.2761f ,0.1011f ,0.2698f ,0.09f ,0.2775f ,0.078f ,0.2629f ,0.0863f ,0.248f ,0.0935f ,0.2498f ,0.0895f ,0.2702f ,0.0748f ,0.2296f ,0.1148f ,0.2397f ,0.101f ,0.2249f ,0.1266f ,0.2295f ,0.1126f ,0.2207f ,0.1406f ,0.2252f ,0.1591f ,0.2245f ,0.1634f ,0.2202f ,0.1406f ,0.2407f ,0.0951f ,0.2662f ,0.1249f ,0.2599f ,0.1313f ,0.2623f ,0.1418f ,0.2691f ,0.1232f ,0.2231f ,0.166f ,0.2217f ,0.1285f ,0.227f ,0.1089f ,0.2407f ,0.0951f ,0.2533f ,0.0835f ,0.2685f ,0.0797f ,0.2759f ,0.0832f ,0.2824f ,0.0941f ,0.273f ,0.1232f ,0.2623f ,0.1418f ,0.2433f ,0.1632f ,0.2231f ,0.166f ,0.2165f ,0.148f });
  }
}
private class MFFloat205 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat206 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32207 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1});
  }
}
private class MFInt32208 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1});
  }
}
private class MFVec3f209 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.098127f ,0.05500125f ,0.0201375f ,-0.062469f ,0.013634999f ,0.014517f ,-0.05946075f ,0.03698325f ,0.014085f ,-0.06573825f ,0.0054899994f ,0.01768725f ,-0.09743176f ,0.003824999f ,0.020232001f ,-0.08687475f ,0.063540004f ,0.01936125f ,-0.062703f ,0.05187375f ,0.016503751f ,-0.07526925f ,0.06057f ,0.02101725f ,-0.086643f ,0.0034874994f ,0.0193365f ,-0.07483275f ,0.0036225005f ,0.021168001f ,-0.086805f ,0.070897505f ,0.011817f ,-0.065394f ,0.066015005f ,0.001917f ,-0.076761f ,0.068490006f ,0.0086535f ,-0.097596005f ,0.06763501f ,0.0089595f ,-0.063828f ,0.0036900009f ,0.0018135f ,-0.097965f ,0.002902499f ,0.00154125f ,-0.081362255f ,0.002925f ,0.0029565f ,-0.060642f ,0.01296f ,0.0012329998f ,-0.057753f ,0.03660075f ,0.0011475f ,-0.064266756f ,0.014735251f ,0.022644f ,-0.061364252f ,0.031797f ,0.022223251f ,-0.0642735f ,0.042007502f ,0.024597f ,-0.075672f ,0.0480015f ,0.028962001f ,-0.0856935f ,0.049934253f ,0.027101252f ,-0.094968006f ,0.04461075f ,0.0276345f ,-0.09432001f ,0.008639999f ,0.027724503f ,-0.08597925f ,0.0084375f ,0.02715075f ,-0.074450254f ,0.0085275f ,0.029029502f ,-0.0668565f ,0.009720001f ,0.025728751f ,-0.08772525f ,0.0667575f ,-0.0017707502f ,-0.0790425f ,0.064687505f ,-0.00476775f ,-0.070445254f ,0.062887505f ,-0.011164501f ,-0.06373575f ,0.03715875f ,-0.011531251f ,-0.066438004f ,0.01494f ,-0.01134675f ,-0.06834375f ,0.0092475f ,-0.010599751f ,-0.08256375f ,0.008639999f ,-0.009783001f ,-0.0942255f ,0.008707499f ,-0.0116955f ,-0.09387901f ,0.065092504f ,-0.0049725007f ,-0.1068525f ,0.051358502f ,0.015259501f ,-0.106425f ,0.0570015f ,0.0071280003f ,-0.1035675f ,0.061785f ,-0.0017865001f ,-0.10388251f ,0.011317501f ,-0.007803001f ,-0.106740005f ,0.0070424993f ,0.001953f ,-0.106312506f ,0.007897499f ,0.016749f ,-0.104535006f ,0.00648f ,0.02374875f ,-0.105075f ,0.04275225f ,0.0236565f });
  }
}
private class MFVec2f210 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2314f ,0.0879f ,0.21f ,0.1541f ,0.2053f ,0.1595f ,0.2104f ,0.1443f ,0.2271f ,0.0958f ,0.2224f ,0.1067f ,0.2032f ,0.149f ,0.2132f ,0.1285f ,0.2197f ,0.1123f ,0.2163f ,0.1174f ,0.227f ,0.1089f ,0.2165f ,0.148f ,0.2217f ,0.1285f ,0.2407f ,0.0951f ,0.2178f ,0.1526f ,0.2363f ,0.0929f ,0.2213f ,0.1179f ,0.2171f ,0.1588f ,0.2129f ,0.1643f ,0.21f ,0.1541f ,0.2053f ,0.1595f ,0.2032f ,0.149f ,0.2132f ,0.1285f ,0.2224f ,0.1067f ,0.2314f ,0.0879f ,0.2271f ,0.0958f ,0.2197f ,0.1123f ,0.2163f ,0.1174f ,0.2104f ,0.1443f ,0.227f ,0.1089f ,0.2217f ,0.1285f ,0.2165f ,0.148f ,0.2129f ,0.1643f ,0.2171f ,0.1588f ,0.2178f ,0.1526f ,0.2213f ,0.1179f ,0.2363f ,0.0929f ,0.2407f ,0.0951f ,0.2314f ,0.0879f ,0.2407f ,0.0951f ,0.2407f ,0.0951f ,0.2363f ,0.0929f ,0.2363f ,0.0929f ,0.2271f ,0.0958f ,0.2271f ,0.0958f ,0.2314f ,0.0879f });
  }
}
private class MFFloat211 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat212 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,4,12,-1,1,7,6,-1,6,0,1,-1,10,1,0,-1,0,12,10,-1,1,10,11,-1,11,2,1,-1,8,5,2,-1,2,3,8,-1,11,13,2,-1,12,4,15,-1,9,4,0,-1,0,6,9,-1,1,2,5,-1,5,7,1,-1,3,2,13,-1,13,14,3,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,3,14,17,-1,17,16,3,-1,14,15,18,-1,18,17,14,-1,15,4,19,-1,19,18,15,-1,4,9,20,-1,20,19,4,-1,28,25,26,-1,26,27,28,-1,8,3,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1});
  }
}
private class MFInt32214 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,12,-1,2,7,6,-1,6,0,2,-1,10,2,0,-1,0,12,10,-1,2,10,11,-1,11,3,2,-1,8,5,3,-1,3,4,8,-1,11,13,3,-1,12,1,15,-1,9,1,0,-1,0,6,9,-1,2,3,5,-1,5,7,2,-1,4,3,13,-1,13,14,4,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,4,14,17,-1,17,16,4,-1,14,15,18,-1,18,17,14,-1,15,1,19,-1,19,18,15,-1,1,9,20,-1,20,19,1,-1,28,25,26,-1,26,27,28,-1,8,4,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1});
  }
}
private class MFVec3f215 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.06699825f ,0.007155002f ,0.027960751f ,-0.061035752f ,0.014805002f ,0.0285525f ,-0.0600075f ,0.0377505f ,0.0273105f ,-0.073773004f ,0.052677f ,0.0291915f ,-0.0737055f ,0.0040500015f ,0.02895075f ,-0.056511004f ,0.036128253f ,0.042624f ,-0.060203254f ,0.0072000013f ,0.0433215f ,-0.05532525f ,0.015185252f ,0.0417465f ,-0.072470255f ,0.044581503f ,0.045099f ,-0.07252875f ,0.0039150007f ,0.045414f ,-0.0624645f ,0.013655252f ,0.01451475f ,-0.05945625f ,0.036999002f ,0.014085f ,-0.065736f ,0.0054900018f ,0.017685f ,-0.062698506f ,0.051887255f ,0.0165015f ,-0.07526475f ,0.060592502f ,0.021015f ,-0.07482825f ,0.0036225005f ,0.021168001f ,-0.079598255f ,0.0503325f ,0.028161f ,-0.08039925f ,0.053957254f ,0.02443275f ,-0.080014504f ,0.0065925024f ,0.02455425f ,-0.079344004f ,0.0068625016f ,0.02949525f ,-0.0783675f ,0.006750002f ,0.0431865f ,-0.07830676f ,0.042828754f ,0.042894002f ,-0.061528504f ,0.010012502f ,0.051466502f ,-0.0575505f ,0.01576575f ,0.0500715f ,-0.058603503f ,0.032328002f ,0.050904002f ,-0.0725895f ,0.03885525f ,0.053244002f ,-0.07592175f ,0.037944004f ,0.0516465f ,-0.075978f ,0.009157502f ,0.051894f ,-0.0721845f ,0.0074925018f ,0.0535365f });
  }
}
private class MFVec2f216 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2027f ,0.1355f ,0.2132f ,0.1171f ,0.1958f ,0.1447f ,0.1899f ,0.1499f ,0.2047f ,0.1286f ,0.1825f ,0.1473f ,0.1858f ,0.1369f ,0.1864f ,0.1452f ,0.1953f ,0.1244f ,0.2059f ,0.1148f ,0.21f ,0.1541f ,0.2053f ,0.1595f ,0.2104f ,0.1443f ,0.2032f ,0.149f ,0.2132f ,0.1285f ,0.2163f ,0.1174f ,0.2047f ,0.1286f ,0.2132f ,0.1285f ,0.2163f ,0.1174f ,0.2132f ,0.1171f ,0.2059f ,0.1148f ,0.1953f ,0.1244f ,0.1858f ,0.1369f ,0.1864f ,0.1452f ,0.1825f ,0.1473f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.2059f ,0.1148f ,0.2059f ,0.1148f });
  }
}
private class MFFloat217 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat218 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,14,11,-1,5,0,2,-1,2,7,5,-1,1,2,9,-1,9,10,1,-1,15,23,20,-1,20,8,15,-1,3,21,19,-1,19,4,3,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,1,12,-1,6,7,2,-1,2,1,6,-1,5,17,14,-1,14,0,5,-1,10,9,3,-1,3,4,10,-1,9,2,0,-1,0,11,9,-1,10,18,12,-1,12,1,10,-1,8,3,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,3,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,29,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1});
  }
}
private class MFInt32220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,11,-1,5,1,2,-1,2,7,5,-1,3,2,9,-1,9,10,3,-1,15,23,20,-1,20,8,15,-1,0,21,19,-1,19,4,0,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,3,12,-1,6,7,2,-1,2,3,6,-1,5,17,14,-1,14,1,5,-1,10,9,0,-1,0,4,10,-1,9,2,1,-1,1,11,9,-1,10,18,12,-1,12,3,10,-1,8,0,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,0,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,14,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1});
  }
}
private class MFVec3f221 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.051615f ,0.0019080002f ,0.075330004f ,-0.0502695f ,0.0285075f ,0.082012504f ,-0.04716675f ,0.01116f ,0.0808425f ,-0.053257503f ,0.01532025f ,0.048228752f ,-0.0550125f ,0.03542625f ,0.0511965f ,-0.05249025f ,0.0037192504f ,0.093127504f ,-0.05225625f ,0.0250965f ,0.09387f ,-0.050249252f ,0.01116f ,0.09549f ,-0.05775975f ,0.0072247502f ,0.0498645f ,-0.04823775f ,0.012955501f ,0.0679275f ,-0.05141925f ,0.031326752f ,0.0700875f ,-0.05229225f ,0.0022815005f ,0.066456005f ,-0.07281225f ,0.03153375f ,0.08082f ,-0.0718965f ,0.04095225f ,0.054279003f ,-0.072904505f ,0.0019080002f ,0.0785475f ,-0.071113504f ,0.0038182493f ,0.051799502f ,-0.07455825f ,0.02698425f ,0.0935325f ,-0.0745965f ,0.0037125007f ,0.092700005f ,-0.07203825f ,0.03625425f ,0.068175f ,-0.05652f ,0.036126003f ,0.0426105f ,-0.06021225f ,0.0072022504f ,0.0433125f ,-0.05533425f ,0.015183f ,0.04174875f ,-0.07247925f ,0.044577003f ,0.04509225f ,-0.07253775f ,0.0039082495f ,0.045405f ,-0.078066f ,0.03208275f ,0.066483006f ,-0.078025505f ,0.036792f ,0.05255775f ,-0.07793775f ,0.03806325f ,0.04930875f ,-0.0781425f ,0.008253001f ,0.0495585f ,-0.0772515f ,0.008226f ,0.05178825f ,-0.0789615f ,0.006338251f ,0.078232504f ,-0.080118f ,0.0076162494f ,0.088245004f ,-0.08011575f ,0.023895001f ,0.08883f ,-0.0788085f ,0.0273735f ,0.079110004f ,-0.056277003f ,0.0062347497f ,0.09819f ,-0.05441175f ,0.011859749f ,0.10012501f ,-0.05608125f ,0.022396501f ,0.09879751f ,-0.07461675f ,0.023823f ,0.098505005f ,-0.079236f ,0.0214875f ,0.0946125f ,-0.07923825f ,0.00918225f ,0.09411751f ,-0.0746505f ,0.00623025f ,0.097807504f ,-0.0638505f ,0.01652625f ,0.036648f ,-0.06673725f ,0.011729251f ,0.0378405f ,-0.07526025f ,0.009486f ,0.03848625f ,-0.07717275f ,0.0111195f ,0.04030425f ,-0.0769995f ,0.035739f ,0.040104f ,-0.075361505f ,0.038295f ,0.037775252f ,-0.06474375f ,0.03280275f ,0.037471503f });
  }
}
private class MFVec2f222 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.177f ,0.1457f ,0.1567f ,0.1378f ,0.1506f ,0.1431f ,0.1539f ,0.1386f ,0.1751f ,0.1447f ,0.1523f ,0.1336f ,0.1493f ,0.1348f ,0.1463f ,0.1377f ,0.1689f ,0.1382f ,0.1638f ,0.1444f ,0.1645f ,0.1416f ,0.1607f ,0.138f ,0.1731f ,0.1071f ,0.1859f ,0.1202f ,0.175f ,0.1048f ,0.1985f ,0.1126f ,0.1682f ,0.1025f ,0.1699f ,0.1017f ,0.1795f ,0.1136f ,0.1825f ,0.1473f ,0.1858f ,0.1369f ,0.1864f ,0.1452f ,0.1953f ,0.1244f ,0.2059f ,0.1148f ,0.1795f ,0.1136f ,0.1859f ,0.1202f ,0.1953f ,0.1244f ,0.2059f ,0.1148f ,0.1985f ,0.1126f ,0.175f ,0.1048f ,0.1699f ,0.1017f ,0.1682f ,0.1025f ,0.1731f ,0.1071f ,0.1523f ,0.1336f ,0.1463f ,0.1377f ,0.1493f ,0.1348f ,0.1682f ,0.1025f ,0.1682f ,0.1025f ,0.1699f ,0.1017f ,0.1699f ,0.1017f ,0.1864f ,0.1452f ,0.1858f ,0.1369f ,0.2059f ,0.1148f ,0.2059f ,0.1148f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.1825f ,0.1473f });
  }
}
private class MFFloat223 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat224 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,10,17,-1,17,16,9,-1,11,1,2,-1,2,8,11,-1,7,8,2,-1,2,3,7,-1,7,3,4,-1,4,13,7,-1,12,13,4,-1,4,5,12,-1,5,6,0,-1,0,12,5,-1,0,6,1,-1,1,11,0,-1,14,20,19,-1,19,15,14,-1,14,15,17,-1,17,10,14,-1,9,16,18,-1,18,21,9,-1,7,10,9,-1,9,8,7,-1,8,9,21,-1,21,11,8,-1,12,20,14,-1,14,13,12,-1,13,14,10,-1,10,7,13,-1,11,21,22,-1,0,24,23,-1,23,12,0,-1,11,22,24,-1,24,0,11,-1,23,20,12,-1,39,40,41,-1,41,42,37,-1,39,41,37,-1,38,39,37,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,28,29,25,-1,25,26,27,-1,28,25,27,-1,35,36,30,-1,30,31,35,-1,17,15,26,-1,26,25,17,-1,15,19,27,-1,27,26,15,-1,19,18,28,-1,28,27,19,-1,18,16,29,-1,29,28,18,-1,16,17,25,-1,25,29,16,-1,19,20,31,-1,31,30,19,-1,20,23,32,-1,32,31,20,-1,23,24,33,-1,33,32,23,-1,24,22,34,-1,34,33,24,-1,22,21,35,-1,35,34,22,-1,21,18,36,-1,36,35,21,-1,18,19,30,-1,30,36,18,-1,2,1,38,-1,38,37,2,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,4,41,-1,41,40,5,-1,4,3,42,-1,42,41,4,-1,3,2,37,-1,37,42,3,-1});
  }
}
private class MFInt32226 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,29,-1,29,28,2,-1,11,5,4,-1,4,13,11,-1,10,13,4,-1,4,6,10,-1,10,6,7,-1,7,12,10,-1,14,12,7,-1,7,8,14,-1,8,9,3,-1,3,14,8,-1,3,9,5,-1,5,11,3,-1,0,33,31,-1,31,27,0,-1,0,27,29,-1,29,1,0,-1,2,28,30,-1,30,35,2,-1,15,18,17,-1,17,16,15,-1,16,17,34,-1,34,19,16,-1,20,32,22,-1,22,21,20,-1,21,22,24,-1,24,23,21,-1,19,34,36,-1,25,39,37,-1,37,20,25,-1,19,36,38,-1,38,26,19,-1,37,32,20,-1,54,55,56,-1,56,57,52,-1,54,56,52,-1,53,54,52,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,43,44,40,-1,40,41,42,-1,43,40,42,-1,50,51,45,-1,45,46,50,-1,29,27,41,-1,41,40,29,-1,27,31,42,-1,42,41,27,-1,31,30,43,-1,43,42,31,-1,30,28,44,-1,44,43,30,-1,28,29,40,-1,40,44,28,-1,31,33,46,-1,46,45,31,-1,32,37,47,-1,47,46,32,-1,37,39,48,-1,48,47,37,-1,38,36,49,-1,49,48,38,-1,36,34,50,-1,50,49,36,-1,35,30,51,-1,51,50,35,-1,30,31,45,-1,45,51,30,-1,4,5,53,-1,53,52,4,-1,5,9,54,-1,54,53,5,-1,9,8,55,-1,55,54,9,-1,8,7,56,-1,56,55,8,-1,7,6,57,-1,57,56,7,-1,6,4,52,-1,52,57,6,-1});
  }
}
private class MFVec3f227 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.07306425f ,0.01488825f ,0.10537875f ,-0.07316775f ,0.02205f ,0.115497f ,-0.04997475f ,0.022403251f ,0.11580075f ,-0.048660748f ,0.011675251f ,0.116028f ,-0.05045625f ,0.0018719996f ,0.115119f ,-0.073431f ,0.0018719996f ,0.1151775f ,-0.0748485f ,0.011412f ,0.11577825f ,-0.05042475f ,0.012258001f ,0.10549125f ,-0.05164875f ,0.02474775f ,0.103212f ,-0.05304375f ,0.024219f ,0.09903375f ,-0.051227998f ,0.01115325f ,0.10004625f ,-0.07174575f ,0.02435175f ,0.103914f ,-0.071658f ,0.0040387497f ,0.104242496f ,-0.0520155f ,0.004059f ,0.1038825f ,-0.05355225f ,0.004491f ,0.098487f ,-0.05249025f ,0.0037125f ,0.093141f ,-0.05225625f ,0.025092f ,0.09387225f ,-0.050247f ,0.01115325f ,0.09548775f ,-0.07455825f ,0.026977502f ,0.093541496f ,-0.0745965f ,0.0037079998f ,0.0927f ,-0.0744255f ,0.00449775f ,0.0993735f ,-0.074454755f ,0.0245385f ,0.099339746f ,-0.07452225f ,0.0222525f ,0.1037655f ,-0.07486425f ,0.008284501f ,0.104076f ,-0.07456725f ,0.015561f ,0.105093f ,-0.05280975f ,0.01156725f ,0.089975245f ,-0.054233998f ,0.00672525f ,0.087770246f ,-0.07144425f ,0.006714f ,0.0876285f ,-0.071415f ,0.02408625f ,0.08826525f ,-0.05438025f ,0.022653f ,0.08829f ,-0.0787815f ,0.0084645f ,0.092882246f ,-0.0786825f ,0.0089235f ,0.09675f ,-0.07893675f ,0.011117251f ,0.09947475f ,-0.0787635f ,0.015336f ,0.10006425f ,-0.07873875f ,0.01921275f ,0.09929475f ,-0.07869825f ,0.02053575f ,0.09672975f ,-0.078759f ,0.021951001f ,0.0933705f ,-0.052641f ,0.01926225f ,0.120915f ,-0.070659f ,0.01898775f ,0.120645f ,-0.07188075f ,0.01127025f ,0.121005f ,-0.07090425f ,0.00471825f ,0.120464996f ,-0.05297625f ,0.0047204997f ,0.120375f ,-0.0517095f ,0.011637f ,0.1212075f });
  }
}
private class MFVec2f228 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.148f ,0.1294f ,0.142f ,0.1322f ,0.1446f ,0.131f ,0.1613f ,0.0957f ,0.1341f ,0.1263f ,0.1554f ,0.0919f ,0.1317f ,0.1272f ,0.1363f ,0.1268f ,0.1571f ,0.0927f ,0.1559f ,0.0889f ,0.1392f ,0.1292f ,0.16f ,0.0958f ,0.1443f ,0.128f ,0.1415f ,0.1284f ,0.1616f ,0.0962f ,0.1346f ,0.0953f ,0.1273f ,0.0961f ,0.126f ,0.0891f ,0.1339f ,0.0889f ,0.1175f ,0.0992f ,0.228f ,0.0809f ,0.2186f ,0.0857f ,0.2172f ,0.0848f ,0.2097f ,0.0859f ,0.2098f ,0.0901f ,0.2285f ,0.0738f ,0.1152f ,0.1058f ,0.1523f ,0.1336f ,0.1493f ,0.1348f ,0.1463f ,0.1377f ,0.1682f ,0.1025f ,0.1699f ,0.1017f ,0.2293f ,0.0837f ,0.1648f ,0.0986f ,0.112f ,0.093f ,0.1632f ,0.098f ,0.113f ,0.0993f ,0.2302f ,0.0796f ,0.1153f ,0.1053f ,0.2293f ,0.0736f ,0.1463f ,0.1377f ,0.1523f ,0.1336f ,0.1699f ,0.1017f ,0.1682f ,0.1025f ,0.1493f ,0.1348f ,0.1699f ,0.1017f ,0.1648f ,0.0986f ,0.2302f ,0.0796f ,0.2293f ,0.0736f ,0.113f ,0.0993f ,0.112f ,0.093f ,0.1682f ,0.1025f ,0.1341f ,0.1263f ,0.1554f ,0.0919f ,0.1559f ,0.0889f ,0.1571f ,0.0927f ,0.1363f ,0.1268f ,0.1317f ,0.1272f });
  }
}
private class MFFloat229 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat230 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,5,-1,5,4,3,-1,1,0,5,-1,5,2,1,-1,1,7,6,-1,6,0,1,-1,8,7,1,-1,1,2,8,-1,3,9,8,-1,8,2,3,-1,10,9,3,-1,3,4,10,-1,11,10,4,-1,4,5,11,-1,0,6,11,-1,11,5,0,-1,7,13,12,-1,12,6,7,-1,14,13,7,-1,7,8,14,-1,9,15,14,-1,14,8,9,-1,16,15,9,-1,9,10,16,-1,17,16,10,-1,10,11,17,-1,6,12,17,-1,17,11,6,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,12,13,19,-1,19,18,12,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,16,22,-1,22,21,15,-1,16,17,23,-1,23,22,16,-1,17,12,18,-1,18,23,17,-1});
  }
}
private class MFInt32232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,13,12,15,-1,15,14,13,-1,8,6,5,-1,5,3,8,-1,0,9,8,-1,8,3,0,-1,10,9,0,-1,0,1,10,-1,11,10,1,-1,1,2,11,-1,4,7,11,-1,11,2,4,-1,12,18,16,-1,16,15,12,-1,20,19,6,-1,6,8,20,-1,9,21,20,-1,20,8,9,-1,22,21,9,-1,9,10,22,-1,23,22,10,-1,10,11,23,-1,7,17,23,-1,23,11,7,-1,26,27,28,-1,28,29,24,-1,26,28,24,-1,25,26,24,-1,16,18,25,-1,25,24,16,-1,19,20,26,-1,26,25,19,-1,20,21,27,-1,27,26,20,-1,21,22,28,-1,28,27,21,-1,22,23,29,-1,29,28,22,-1,23,17,24,-1,24,29,23,-1});
  }
}
private class MFVec3f233 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.06948f ,0.018261f ,0.13208626f ,-0.05376375f ,0.018553501f ,0.132561f ,-0.053910002f ,0.01017225f ,0.13577175f ,-0.054051753f ,0.0033029998f ,0.13153726f ,-0.069255f ,0.0033029998f ,0.13094775f ,-0.0696735f ,0.01017225f ,0.1353735f ,-0.07241175f ,0.020025f ,0.12442725f ,-0.050211f ,0.020385f ,0.124416f ,-0.0489825f ,0.0111105f ,0.12528001f ,-0.05042925f ,0.0021914996f ,0.124276504f ,-0.07233075f ,0.0022252498f ,0.124544255f ,-0.074268006f ,0.0083294995f ,0.12531151f ,-0.073154256f ,0.02205f ,0.11549701f ,-0.049959f ,0.02240325f ,0.115803f ,-0.048645f ,0.011673f ,0.11603025f ,-0.05044275f ,0.0018697499f ,0.11512125f ,-0.07341525f ,0.0018697499f ,0.115179755f ,-0.074835f ,0.011412f ,0.1157805f ,-0.0705195f ,0.019165501f ,0.109989f ,-0.05260275f ,0.01943775f ,0.11025225f ,-0.051680252f ,0.0118755f ,0.11055151f ,-0.052935753f ,0.00501525f ,0.109719f ,-0.0707625f ,0.0050129998f ,0.109818004f ,-0.07173f ,0.0115065f ,0.11034901f });
  }
}
private class MFVec2f234 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1287f ,0.113f ,0.1423f ,0.0921f ,0.1396f ,0.0889f ,0.1257f ,0.1107f ,0.1415f ,0.0903f ,0.1274f ,0.1123f ,0.1297f ,0.1214f ,0.15f ,0.0896f ,0.1273f ,0.1223f ,0.1313f ,0.1227f ,0.1521f ,0.0901f ,0.1498f ,0.0859f ,0.0527f ,0.151f ,0.0282f ,0.1325f ,0.0446f ,0.0894f ,0.0746f ,0.0899f ,0.1016f ,0.0977f ,0.1554f ,0.0919f ,0.0779f ,0.162f ,0.1341f ,0.1263f ,0.1317f ,0.1272f ,0.1363f ,0.1268f ,0.1571f ,0.0927f ,0.1559f ,0.0889f ,0.1554f ,0.0919f ,0.0779f ,0.162f ,0.1317f ,0.1272f ,0.1363f ,0.1268f ,0.1571f ,0.0927f ,0.1559f ,0.0889f });
  }
}
private class MFFloat235 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat236 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,4,9,-1,9,8,1,-1,5,7,2,-1,2,0,5,-1,4,1,3,-1,3,6,4,-1,10,11,5,-1,5,0,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,1,19,-1,19,18,3,-1,1,8,20,-1,20,19,1,-1,32,37,38,-1,38,39,32,-1,10,0,22,-1,22,21,10,-1,0,2,23,-1,23,22,0,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1});
  }
}
private class MFInt32238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,4,9,-1,9,8,0,-1,5,7,2,-1,2,1,5,-1,4,0,3,-1,3,6,4,-1,10,11,5,-1,5,1,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,0,19,-1,19,18,3,-1,0,8,20,-1,20,19,0,-1,32,37,38,-1,38,39,32,-1,10,1,22,-1,22,21,10,-1,1,2,23,-1,23,22,1,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1});
  }
}
private class MFVec3f239 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.086485505f ,0.0038924997f ,0.028325252f ,-0.086940005f ,0.057577502f ,0.027517501f ,-0.08644275f ,0.003555f ,0.03870225f ,-0.0875475f ,0.05031225f ,0.039017253f ,-0.073773004f ,0.052668f ,0.029191501f ,-0.0737055f ,0.0040500015f ,0.02895075f ,-0.072470255f ,0.044572502f ,0.04509675f ,-0.07252875f ,0.0039150007f ,0.04541175f ,-0.08687025f ,0.063540004f ,0.019359002f ,-0.07526475f ,0.06057f ,0.021015001f ,-0.0866385f ,0.0035100006f ,0.019336501f ,-0.07482825f ,0.0036225005f ,0.021168001f ,-0.06993675f ,0.048035253f ,0.02321325f ,-0.068919756f ,0.04499775f ,0.02706075f ,-0.0677385f ,0.038907003f ,0.04185f ,-0.067808256f ,0.009585001f ,0.042129003f ,-0.068697006f ,0.009675002f ,0.028350001f ,-0.06952275f ,0.00945f ,0.02333475f ,-0.09422775f ,0.046273503f ,0.036591753f ,-0.093629256f ,0.0520065f ,0.0261135f ,-0.093586504f ,0.05488425f ,0.021570751f ,-0.09343126f ,0.008932499f ,0.02154825f ,-0.09324225f ,0.00918f ,0.028210502f ,-0.093165755f ,0.008955f ,0.0363015f ,-0.07531425f ,0.040221002f ,0.05211675f ,-0.08948025f ,0.045708753f ,0.04577175f ,-0.091624506f ,0.04308075f ,0.045029253f ,-0.090731256f ,0.011718f ,0.044781752f ,-0.08748675f ,0.007942501f ,0.045929253f ,-0.0750555f ,0.0082575f ,0.052926753f ,-0.07308f ,0.0118080005f ,0.051576752f ,-0.07302375f ,0.03619575f ,0.051351752f ,-0.08598825f ,0.060390003f ,0.013124251f ,-0.0763695f ,0.057937503f ,0.014622751f ,-0.072254255f ,0.0471105f ,0.016220251f ,-0.071865f ,0.0109125f ,0.016332751f ,-0.07509375f ,0.0065475004f ,0.015023251f ,-0.085810505f ,0.0064575016f ,0.01330875f ,-0.090243004f ,0.0107774995f ,0.0147555005f ,-0.09038475f ,0.053509504f ,0.014775751f });
  }
}
private class MFVec2f240 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2179f ,0.1044f ,0.2186f ,0.1086f ,0.2128f ,0.1035f ,0.2098f ,0.0996f ,0.2047f ,0.1286f ,0.2132f ,0.1171f ,0.1953f ,0.1244f ,0.2059f ,0.1148f ,0.2224f ,0.1067f ,0.2132f ,0.1285f ,0.2197f ,0.1123f ,0.2163f ,0.1174f ,0.2132f ,0.1285f ,0.2047f ,0.1286f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.2132f ,0.1171f ,0.2163f ,0.1174f ,0.2098f ,0.0996f ,0.2179f ,0.1044f ,0.2224f ,0.1067f ,0.2224f ,0.1067f ,0.2186f ,0.1086f ,0.2128f ,0.1035f ,0.1953f ,0.1244f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2128f ,0.1035f ,0.2098f ,0.0996f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.2224f ,0.1067f ,0.2132f ,0.1285f ,0.2132f ,0.1285f ,0.2163f ,0.1174f ,0.2132f ,0.1285f ,0.2224f ,0.1067f ,0.2224f ,0.1067f ,0.2224f ,0.1067f });
  }
}
private class MFFloat241 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat242 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,4,7,-1,7,15,12,-1,0,2,9,-1,9,8,0,-1,1,3,11,-1,11,10,1,-1,5,6,2,-1,2,0,5,-1,8,9,3,-1,3,1,8,-1,14,4,12,-1,12,13,14,-1,18,14,13,-1,13,17,18,-1,42,43,38,-1,38,39,42,-1,46,47,50,-1,50,51,46,-1,29,30,34,-1,34,35,29,-1,19,20,25,-1,25,26,19,-1,28,19,26,-1,26,27,28,-1,21,22,23,-1,23,24,21,-1,37,29,35,-1,35,36,37,-1,30,31,34,-1,20,21,24,-1,24,25,20,-1,31,32,33,-1,33,34,31,-1,3,9,20,-1,20,19,3,-1,9,2,21,-1,21,20,9,-1,2,6,22,-1,22,21,2,-1,42,39,40,-1,40,41,42,-1,7,4,24,-1,24,23,7,-1,4,16,25,-1,25,24,4,-1,16,14,26,-1,26,25,16,-1,14,18,27,-1,27,26,14,-1,50,47,48,-1,48,49,50,-1,11,3,19,-1,19,28,11,-1,0,8,30,-1,30,29,0,-1,8,1,31,-1,31,30,8,-1,1,10,32,-1,32,31,1,-1,46,51,52,-1,52,53,46,-1,17,13,34,-1,34,33,17,-1,13,12,35,-1,35,34,13,-1,12,15,36,-1,36,35,12,-1,38,43,44,-1,44,45,38,-1,5,0,29,-1,29,37,5,-1,15,7,39,-1,39,38,15,-1,7,23,40,-1,40,39,7,-1,23,22,41,-1,41,40,23,-1,22,6,42,-1,42,41,22,-1,6,5,43,-1,43,42,6,-1,5,37,44,-1,44,43,5,-1,37,36,45,-1,45,44,37,-1,36,15,38,-1,38,45,36,-1,10,11,47,-1,47,46,10,-1,11,28,48,-1,48,47,11,-1,28,27,49,-1,49,48,28,-1,27,18,50,-1,50,49,27,-1,18,17,51,-1,51,50,18,-1,17,33,52,-1,52,51,17,-1,33,32,53,-1,53,52,33,-1,32,10,46,-1,46,53,32,-1});
  }
}
private class MFInt32244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,10,-1,10,7,1,-1,2,3,12,-1,12,11,2,-1,5,6,16,-1,16,15,5,-1,8,9,3,-1,3,2,8,-1,11,12,6,-1,6,5,11,-1,4,0,1,-1,1,13,4,-1,17,4,13,-1,13,14,17,-1,45,46,41,-1,41,42,45,-1,49,50,53,-1,53,54,49,-1,32,33,37,-1,37,38,32,-1,22,23,28,-1,28,29,22,-1,31,22,29,-1,29,30,31,-1,24,25,26,-1,26,27,24,-1,40,32,38,-1,38,39,40,-1,33,34,21,-1,23,24,27,-1,27,28,23,-1,34,35,36,-1,36,37,34,-1,6,12,23,-1,23,22,6,-1,12,3,24,-1,24,23,12,-1,3,9,25,-1,25,24,3,-1,45,42,43,-1,43,44,45,-1,10,0,27,-1,27,26,10,-1,20,18,28,-1,28,27,20,-1,18,19,29,-1,29,28,18,-1,4,17,30,-1,30,29,4,-1,53,50,51,-1,51,52,53,-1,16,6,22,-1,22,31,16,-1,2,11,33,-1,33,32,2,-1,11,5,34,-1,34,33,11,-1,5,15,35,-1,35,34,5,-1,49,54,55,-1,55,56,49,-1,14,13,37,-1,37,36,14,-1,13,1,38,-1,38,37,13,-1,1,7,39,-1,39,38,1,-1,41,46,47,-1,47,48,41,-1,8,2,32,-1,32,40,8,-1,7,10,42,-1,42,41,7,-1,10,26,43,-1,43,42,10,-1,26,25,44,-1,44,43,26,-1,25,9,45,-1,45,44,25,-1,9,8,46,-1,46,45,9,-1,8,40,47,-1,47,46,8,-1,40,39,48,-1,48,47,40,-1,39,7,41,-1,41,48,39,-1,15,16,50,-1,50,49,15,-1,16,31,51,-1,51,50,16,-1,31,30,52,-1,52,51,31,-1,30,17,53,-1,53,52,30,-1,17,14,54,-1,54,53,17,-1,14,36,55,-1,55,54,14,-1,36,35,56,-1,56,55,36,-1,35,15,49,-1,49,56,35,-1});
  }
}
private class MFVec3f245 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.088290006f ,0.03174975f ,0.079515f ,-0.087383255f ,0.043557752f ,0.053208005f ,-0.07281225f ,0.03152025f ,0.08082f ,-0.07189651f ,0.04093875f ,0.054279003f ,-0.072904505f ,0.0018899998f ,0.07854751f ,-0.08854651f ,0.0272745f ,0.09189001f ,-0.07455826f ,0.02697075f ,0.0935325f ,-0.0745965f ,0.0036989998f ,0.092700005f ,-0.087594755f ,0.037667252f ,0.066262506f ,-0.072038256f ,0.036240753f ,0.068175f ,-0.0875565f ,0.05031f ,0.039010502f ,-0.072479255f ,0.044563502f ,0.045092255f ,-0.08724151f ,0.0018899998f ,0.077265f ,-0.08629876f ,0.0033300002f ,0.051590253f ,-0.071113504f ,0.0038047498f ,0.051799502f ,-0.088494755f ,0.0037259988f ,0.09108f ,-0.071113504f ,0.0038047498f ,0.051799502f ,-0.086451754f ,0.003555f ,0.038695503f ,-0.07253776f ,0.0038969992f ,0.045405004f ,-0.066449255f ,0.03717f ,0.053104505f ,-0.066489756f ,0.032463f ,0.0670275f ,-0.06724575f ,0.0277515f ,0.0796725f ,-0.06860025f ,0.0241785f ,0.08966251f ,-0.06860475f ,0.0072629997f ,0.0890325f ,-0.067383006f ,0.00593775f ,0.0786375f ,-0.06564151f ,0.007818749f ,0.052290004f ,-0.06568875f ,0.0078277495f ,0.052069504f ,-0.0666225f ,0.00785925f ,0.049572002f ,-0.066431254f ,0.03865725f ,0.049315505f ,-0.093384005f ,0.029007f ,0.07832251f ,-0.092691004f ,0.03496725f ,0.06495751f ,-0.092508756f ,0.04087125f ,0.051867004f ,-0.09263025f ,0.0457245f ,0.041652f ,-0.09171001f ,0.0062009995f ,0.041384254f ,-0.091575004f ,0.006020999f ,0.051536255f ,-0.092495255f ,0.0046102493f ,0.07699501f ,-0.093579754f ,0.0060907495f ,0.08817751f ,-0.09354375f ,0.0251955f ,0.08885251f ,-0.088276505f ,0.0066284994f ,0.0954225f ,-0.075483f ,0.0065969992f ,0.097132504f ,-0.07152075f ,0.0089505f ,0.096727505f ,-0.07151625f ,0.02182275f ,0.097177505f ,-0.075388506f ,0.023634f ,0.097695f ,-0.08835976f ,0.023922f ,0.0960075f ,-0.091131754f ,0.0227655f ,0.09486f ,-0.091161005f ,0.0079695f ,0.09434251f ,-0.084861f ,0.046793252f ,0.030728253f ,-0.07168276f ,0.04165875f ,0.036839254f ,-0.06694426f ,0.0370845f ,0.040027503f ,-0.067117505f ,0.009798749f ,0.040259253f ,-0.07107525f ,0.0071505f ,0.037485003f ,-0.08369101f ,0.0068332497f ,0.030935252f ,-0.086672254f ,0.008340749f ,0.032478753f ,-0.087507f ,0.04418325f ,0.032719504f });
  }
}
private class MFVec2f246 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.175f ,0.1048f ,0.1833f ,0.0898f ,0.1856f ,0.0872f ,0.1731f ,0.1071f ,0.1985f ,0.1126f ,0.2017f ,0.0948f ,0.1859f ,0.1202f ,0.1801f ,0.0847f ,0.1811f ,0.0824f ,0.1682f ,0.1025f ,0.1699f ,0.1017f ,0.1937f ,0.091f ,0.1795f ,0.1136f ,0.2068f ,0.0986f ,0.2128f ,0.1035f ,0.2098f ,0.0996f ,0.1953f ,0.1244f ,0.2059f ,0.1148f ,0.1795f ,0.1136f ,0.1859f ,0.1202f ,0.1731f ,0.1071f ,0.2017f ,0.0948f ,0.1859f ,0.1202f ,0.1795f ,0.1136f ,0.1731f ,0.1071f ,0.1682f ,0.1025f ,0.1682f ,0.1025f ,0.1731f ,0.1071f ,0.1795f ,0.1136f ,0.1859f ,0.1202f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.1856f ,0.0872f ,0.1937f ,0.091f ,0.2017f ,0.0948f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2017f ,0.0948f ,0.1856f ,0.0872f ,0.1811f ,0.0824f ,0.1811f ,0.0824f ,0.1811f ,0.0824f ,0.1682f ,0.1025f ,0.1682f ,0.1025f ,0.1682f ,0.1025f ,0.1682f ,0.1025f ,0.1811f ,0.0824f ,0.1811f ,0.0824f ,0.1811f ,0.0824f ,0.2098f ,0.0996f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.1953f ,0.1244f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2098f ,0.0996f });
  }
}
private class MFFloat247 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat248 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,18,20,-1,20,6,8,-1,14,21,19,-1,19,11,14,-1,6,20,1,-1,19,15,11,-1,0,14,3,-1,3,2,0,-1,12,17,16,-1,16,8,12,-1,15,17,12,-1,12,11,15,-1,6,1,2,-1,2,3,6,-1,0,21,14,-1,16,18,8,-1,3,4,5,-1,5,6,3,-1,6,5,7,-1,7,8,6,-1,10,11,12,-1,12,9,10,-1,14,11,10,-1,10,13,14,-1,13,4,3,-1,3,14,13,-1,8,7,9,-1,9,12,8,-1,19,21,24,-1,24,23,19,-1,22,25,20,-1,20,18,22,-1,36,30,31,-1,35,36,31,-1,34,35,31,-1,13,10,9,-1,9,7,5,-1,13,9,5,-1,4,13,5,-1,29,26,27,-1,27,28,29,-1,37,41,42,-1,42,43,37,-1,31,32,33,-1,33,34,31,-1,39,40,41,-1,38,39,41,-1,37,38,41,-1,25,22,27,-1,27,26,25,-1,22,23,28,-1,28,27,22,-1,23,24,29,-1,29,28,23,-1,24,25,26,-1,26,29,24,-1,15,19,31,-1,31,30,15,-1,19,23,32,-1,32,31,19,-1,23,22,33,-1,33,32,23,-1,22,18,34,-1,34,33,22,-1,18,16,35,-1,35,34,18,-1,16,17,36,-1,36,35,16,-1,17,15,30,-1,30,36,17,-1,21,0,38,-1,38,37,21,-1,0,2,39,-1,39,38,0,-1,2,1,40,-1,40,39,2,-1,1,20,41,-1,41,40,1,-1,20,25,42,-1,42,41,20,-1,25,24,43,-1,43,42,25,-1,24,21,37,-1,37,43,24,-1});
  }
}
private class MFInt32250 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,24,30,-1,30,0,1,-1,3,31,25,-1,25,2,3,-1,0,30,4,-1,25,26,2,-1,9,3,5,-1,5,10,9,-1,7,28,27,-1,27,1,7,-1,26,29,8,-1,8,2,26,-1,0,4,11,-1,11,6,0,-1,9,31,3,-1,27,24,1,-1,12,13,14,-1,14,15,12,-1,15,14,16,-1,16,17,15,-1,19,20,21,-1,21,18,19,-1,23,20,19,-1,19,22,23,-1,22,13,12,-1,12,23,22,-1,17,16,18,-1,18,21,17,-1,35,34,38,-1,38,37,35,-1,36,39,33,-1,33,32,36,-1,50,44,45,-1,49,50,45,-1,48,49,45,-1,22,19,18,-1,18,16,14,-1,22,18,14,-1,13,22,14,-1,43,40,41,-1,41,42,43,-1,51,55,56,-1,56,57,51,-1,45,46,47,-1,47,48,45,-1,53,54,55,-1,52,53,55,-1,51,52,55,-1,39,36,41,-1,41,40,39,-1,36,37,42,-1,42,41,36,-1,37,38,43,-1,43,42,37,-1,38,39,40,-1,40,43,38,-1,26,25,45,-1,45,44,26,-1,35,37,46,-1,46,45,35,-1,37,36,47,-1,47,46,37,-1,36,32,48,-1,48,47,36,-1,24,27,49,-1,49,48,24,-1,27,28,50,-1,50,49,27,-1,29,26,44,-1,44,50,29,-1,31,9,52,-1,52,51,31,-1,9,10,53,-1,53,52,9,-1,11,4,54,-1,54,53,11,-1,4,30,55,-1,55,54,4,-1,33,39,56,-1,56,55,33,-1,39,38,57,-1,57,56,39,-1,38,34,51,-1,51,57,38,-1});
  }
}
private class MFVec3f251 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.07451326f ,0.0222525f ,0.10377f ,-0.07485525f ,0.008284501f ,0.104080506f ,-0.07455825f ,0.015561f ,0.1050975f ,-0.075897f ,0.014091751f ,0.10509075f ,-0.076693505f ,0.0108585f ,0.11510775f ,-0.0777105f ,0.0026707507f ,0.114732005f ,-0.076727256f ,0.004995f ,0.10394551f ,-0.088249505f ,0.0027944997f ,0.113346f ,-0.087351754f ,0.00484425f ,0.10267425f ,-0.089561254f ,0.012060001f ,0.11371051f ,-0.08832376f ,0.022911752f ,0.113402255f ,-0.087410256f ,0.0243855f ,0.102539256f ,-0.088904254f ,0.013288501f ,0.10352475f ,-0.077557504f ,0.02320425f ,0.114714004f ,-0.0770805f ,0.02425275f ,0.10367776f ,-0.0897345f ,0.022295251f ,0.101772f ,-0.089766f ,0.007938f ,0.10190701f ,-0.08987851f ,0.015016501f ,0.103137754f ,-0.08877151f ,0.0044505005f ,0.097357504f ,-0.08897626f ,0.024396751f ,0.096925505f ,-0.0744165f ,0.0045f ,0.099380255f ,-0.074445754f ,0.024538502f ,0.09934425f ,-0.088485755f ,0.0037350003f ,0.09109125f ,-0.08853526f ,0.02728125f ,0.09189451f ,-0.07454925f ,0.026977502f ,0.093546f ,-0.0745875f ,0.0037079998f ,0.092704505f ,-0.07658325f ,0.0065857503f ,0.08687475f ,-0.085173756f ,0.0066037504f ,0.08588476f ,-0.08521201f ,0.024745502f ,0.086501256f ,-0.076554f ,0.0245565f ,0.0875295f ,-0.09393975f ,0.02058075f ,0.09753075f ,-0.09342676f ,0.022234501f ,0.09370126f ,-0.09324451f ,0.023231251f ,0.0919665f ,-0.09324451f ,0.00638325f ,0.091388255f ,-0.09322426f ,0.0067140004f ,0.094286256f ,-0.09398025f ,0.0092475f ,0.097584754f ,-0.094041005f ,0.01497375f ,0.09858601f ,-0.0696825f ,0.022225501f ,0.09686475f ,-0.06967575f ,0.02054475f ,0.10012051f ,-0.0696915f ,0.015468751f ,0.1011285f ,-0.069981754f ,0.0096075f ,0.100307256f ,-0.06961276f ,0.0069075003f ,0.096954755f ,-0.069770254f ,0.0065475004f ,0.09393076f ,-0.06973425f ,0.02320875f ,0.09453376f });
  }
}
private class MFVec2f252 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2327f ,0.0796f ,0.2439f ,0.0803f ,0.2062f ,0.05f ,0.2147f ,0.0491f ,0.2302f ,0.0796f ,0.2205f ,0.0532f ,0.2301f ,0.0734f ,0.2486f ,0.0743f ,0.2013f ,0.0552f ,0.2187f ,0.0481f ,0.221f ,0.0541f ,0.2293f ,0.0736f ,0.1746f ,0.075f ,0.1709f ,0.0678f ,0.1706f ,0.0686f ,0.1745f ,0.076f ,0.1824f ,0.0523f ,0.1886f ,0.0572f ,0.183f ,0.0511f ,0.1834f ,0.0508f ,0.1882f ,0.0556f ,0.1885f ,0.0566f ,0.1716f ,0.0676f ,0.1748f ,0.0736f ,0.2444f ,0.0847f ,0.2027f ,0.042f ,0.2022f ,0.0485f ,0.2464f ,0.0799f ,0.2486f ,0.0741f ,0.2011f ,0.0554f ,0.2293f ,0.0837f ,0.2177f ,0.0418f ,0.1769f ,0.0796f ,0.1648f ,0.0986f ,0.1632f ,0.098f ,0.1766f ,0.0777f ,0.1801f ,0.0847f ,0.1811f ,0.0824f ,0.1682f ,0.1025f ,0.1699f ,0.1017f ,0.1699f ,0.1017f ,0.1801f ,0.0847f ,0.1811f ,0.0824f ,0.1682f ,0.1025f ,0.2022f ,0.0485f ,0.2027f ,0.042f ,0.1811f ,0.0824f ,0.1801f ,0.0847f ,0.1769f ,0.0796f ,0.2464f ,0.0799f ,0.2486f ,0.0741f ,0.1632f ,0.098f ,0.2187f ,0.0481f ,0.221f ,0.0541f ,0.2302f ,0.0796f ,0.2293f ,0.0837f ,0.1699f ,0.1017f ,0.1682f ,0.1025f });
  }
}
private class MFFloat253 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat254 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,7,6,-1,6,1,0,-1,2,8,7,-1,7,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,1,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1});
  }
}
private class MFInt32256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,6,-1,6,5,14,-1,8,15,7,-1,7,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,7,24,-1,24,23,1,-1,5,6,25,-1,25,24,5,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1});
  }
}
private class MFVec3f257 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.07676325f ,0.0020925f ,0.124110006f ,-0.07612425f ,0.010449001f ,0.12440025f ,-0.090738006f ,0.0020925f ,0.122562006f ,-0.09172575f ,0.010449001f ,0.122539505f ,-0.0905805f ,0.017046f ,0.12259125f ,-0.077337004f ,0.017561251f ,0.124182f ,-0.076693505f ,0.01085625f ,0.11511f ,-0.07770825f ,0.0026684997f ,0.114734255f ,-0.088247254f ,0.0027944997f ,0.11334825f ,-0.089561254f ,0.0120577505f ,0.11371275f ,-0.08832376f ,0.022911752f ,0.113404505f ,-0.077555254f ,0.023202f ,0.114716254f ,-0.077787004f ,0.01090575f ,0.109899f ,-0.0785925f ,0.00437175f ,0.109548f ,-0.08619975f ,0.004464f ,0.108504005f ,-0.087291f ,0.01208475f ,0.1088955f ,-0.086235754f ,0.0212715f ,0.10856475f ,-0.07852051f ,0.02148075f ,0.10951875f ,-0.080244005f ,0.0054404996f ,0.12710701f ,-0.07988175f ,0.0102780005f ,0.12734775f ,-0.08052301f ,0.014067001f ,0.127179f ,-0.08813925f ,0.01377f ,0.12625201f ,-0.088740006f ,0.010341001f ,0.126279f ,-0.0881595f ,0.0054404996f ,0.12627225f });
  }
}
private class MFVec2f258 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f ,0.0654f ,0.1636f ,0.063f ,0.1795f ,0.0453f ,0.1792f ,0.0409f ,0.1786f ,0.0451f ,0.1293f ,0.0261f ,0.0949f ,0.0775f ,0.1651f ,0.0639f ,0.1709f ,0.0678f ,0.1706f ,0.0686f ,0.1824f ,0.0523f ,0.183f ,0.0511f ,0.1291f ,0.0918f ,0.1834f ,0.0508f ,0.1554f ,0.0532f ,0.1716f ,0.0676f ,0.1709f ,0.0678f ,0.1706f ,0.0686f ,0.1824f ,0.0523f ,0.183f ,0.0511f ,0.1834f ,0.0508f ,0.1554f ,0.0532f ,0.1653f ,0.0654f ,0.1636f ,0.063f ,0.1651f ,0.0639f ,0.0949f ,0.0775f ,0.1792f ,0.0409f ,0.1795f ,0.0453f });
  }
}
private class MFFloat259 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat260 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,6,7,-1,7,1,0,-1,3,8,6,-1,6,0,3,-1,9,8,3,-1,3,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1});
  }
}
private class MFInt32262 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,8,9,-1,9,1,0,-1,3,10,8,-1,8,0,3,-1,11,10,3,-1,3,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,6,-1,6,7,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1});
  }
}
private class MFVec3f263 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.079137005f ,0.00385875f ,0.13077226f ,-0.07924275f ,0.00919575f ,0.132831f ,-0.090479255f ,0.00919575f ,0.13146976f ,-0.089037f ,0.00385875f ,0.12943351f ,-0.089795254f ,0.014742f ,0.13012426f ,-0.07945875f ,0.01503f ,0.13163851f ,-0.07676325f ,0.0020902497f ,0.124098755f ,-0.07612425f ,0.010449f ,0.12439126f ,-0.090738006f ,0.0020902497f ,0.122553006f ,-0.09172575f ,0.010449f ,0.122530505f ,-0.0905805f ,0.017046f ,0.12258226f ,-0.077337004f ,0.017561251f ,0.12417076f ,-0.0781605f ,0.0103545f ,0.11991376f ,-0.07859025f ,0.0046372497f ,0.119661756f ,-0.088020004f ,0.0046372497f ,0.11864926f ,-0.088701755f ,0.01040175f ,0.11864926f ,-0.087966f ,0.014622751f ,0.11864026f ,-0.078943506f ,0.01497375f ,0.11973376f });
  }
}
private class MFVec2f264 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f ,0.0579f ,0.1638f ,0.0538f ,0.174f ,0.0396f ,0.1747f ,0.0423f ,0.1756f ,0.0403f ,0.1632f ,0.0573f ,0.066f ,0.0493f ,0.0915f ,0.0082f ,0.1653f ,0.0654f ,0.1636f ,0.063f ,0.1795f ,0.0453f ,0.1792f ,0.0409f ,0.1786f ,0.0451f ,0.0949f ,0.0775f ,0.1293f ,0.0261f ,0.1651f ,0.0639f ,0.1636f ,0.063f ,0.1653f ,0.0654f ,0.1795f ,0.0453f ,0.1792f ,0.0409f ,0.1786f ,0.0451f ,0.1293f ,0.0261f });
  }
}
private class MFFloat265 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat266 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,9,-1,9,7,4,-1,20,21,24,-1,24,25,20,-1,12,13,10,-1,10,11,12,-1,18,19,14,-1,14,17,18,-1,15,16,17,-1,17,14,15,-1,0,4,11,-1,11,10,0,-1,4,7,12,-1,12,11,4,-1,7,1,13,-1,13,12,7,-1,24,21,22,-1,22,23,24,-1,3,6,15,-1,15,14,3,-1,20,25,26,-1,26,27,20,-1,5,2,17,-1,17,16,5,-1,2,9,18,-1,18,17,2,-1,9,8,19,-1,19,18,9,-1,8,3,14,-1,14,19,8,-1,6,0,21,-1,21,20,6,-1,0,10,22,-1,22,21,0,-1,10,13,23,-1,23,22,10,-1,13,1,24,-1,24,23,13,-1,1,5,25,-1,25,24,1,-1,5,16,26,-1,26,25,5,-1,16,15,27,-1,27,26,16,-1,15,6,20,-1,20,27,15,-1});
  }
}
private class MFInt32268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,10,-1,10,11,4,-1,22,23,26,-1,26,27,22,-1,14,15,12,-1,12,13,14,-1,20,21,16,-1,16,19,20,-1,17,18,19,-1,19,16,17,-1,0,4,13,-1,13,12,0,-1,4,11,14,-1,14,13,4,-1,7,1,15,-1,15,14,7,-1,26,23,24,-1,24,25,26,-1,3,6,17,-1,17,16,3,-1,22,27,28,-1,28,29,22,-1,5,2,19,-1,19,18,5,-1,2,9,20,-1,20,19,2,-1,10,8,21,-1,21,20,10,-1,8,3,16,-1,16,21,8,-1,6,0,23,-1,23,22,6,-1,0,12,24,-1,24,23,0,-1,12,15,25,-1,25,24,12,-1,15,1,26,-1,26,25,15,-1,1,5,27,-1,27,26,1,-1,5,18,28,-1,28,27,5,-1,18,17,29,-1,29,28,18,-1,17,6,22,-1,22,29,17,-1});
  }
}
private class MFVec3f269 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.09967726f ,0.047187f ,0.03966075f ,-0.098028004f ,0.0032399986f ,0.0394875f ,-0.086492255f ,0.0038699985f ,0.0283275f ,-0.086946756f ,0.057577502f ,0.027519751f ,-0.09812926f ,0.054999f ,0.020137502f ,-0.08644951f ,0.003555f ,0.03870225f ,-0.08755425f ,0.05030325f ,0.039019503f ,-0.09743401f ,0.003824999f ,0.020232001f ,-0.08687701f ,0.063540004f ,0.01936125f ,-0.08664526f ,0.0034874994f ,0.019336501f ,-0.10509976f ,0.042345002f ,0.03648825f ,-0.103839755f ,0.04751775f ,0.022628251f ,-0.10331326f ,0.0062999995f ,0.02270475f ,-0.10357201f ,0.0059175007f ,0.036339752f ,-0.08185051f ,0.05565375f ,0.0262575f ,-0.08240176f ,0.04905225f ,0.0367065f ,-0.081357755f ,0.0060524987f ,0.0364185f ,-0.08146126f ,0.0062999995f ,0.0283905f ,-0.081596255f ,0.0060300003f ,0.021795752f ,-0.081785254f ,0.058905f ,0.021816f ,-0.08745076f ,0.04387275f ,0.046998f ,-0.09900901f ,0.04125825f ,0.047695503f ,-0.102935255f ,0.03753675f ,0.045558f ,-0.10153351f ,0.0081899995f ,0.045423f ,-0.097605005f ,0.006727501f ,0.0476505f ,-0.086908504f ,0.006974999f ,0.046795502f ,-0.08352901f ,0.0084375f ,0.045288f ,-0.084489755f ,0.043231502f ,0.045558f });
  }
}
private class MFVec2f270 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2226f ,0.0828f ,0.2197f ,0.0903f ,0.2186f ,0.1086f ,0.2179f ,0.1044f ,0.2314f ,0.0879f ,0.2128f ,0.1035f ,0.2098f ,0.0996f ,0.2271f ,0.0958f ,0.2224f ,0.1067f ,0.2197f ,0.1123f ,0.2224f ,0.1067f ,0.2314f ,0.0879f ,0.2226f ,0.0828f ,0.2314f ,0.0879f ,0.2314f ,0.0879f ,0.2197f ,0.0903f ,0.2179f ,0.1044f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2186f ,0.1086f ,0.2197f ,0.1123f ,0.2224f ,0.1067f ,0.2098f ,0.0996f ,0.2226f ,0.0828f ,0.2226f ,0.0828f ,0.2197f ,0.0903f ,0.2226f ,0.0828f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2098f ,0.0996f });
  }
}
private class MFFloat271 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat272 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,12,13,-1,13,3,15,-1,10,7,0,-1,0,2,10,-1,9,1,14,-1,14,6,9,-1,3,13,7,-1,7,10,3,-1,12,15,5,-1,5,16,12,-1,6,8,17,-1,17,9,6,-1,17,8,11,-1,11,4,17,-1,27,28,31,-1,34,35,32,-1,32,33,34,-1,28,29,30,-1,30,31,28,-1,35,27,31,-1,31,32,35,-1,23,24,20,-1,22,23,20,-1,20,21,22,-1,25,26,18,-1,18,19,25,-1,24,25,19,-1,19,20,24,-1,1,9,19,-1,19,18,1,-1,9,17,20,-1,20,19,9,-1,17,4,21,-1,21,20,17,-1,48,45,46,-1,46,47,48,-1,5,15,23,-1,23,22,5,-1,15,3,24,-1,24,23,15,-1,3,10,25,-1,25,24,3,-1,10,2,26,-1,26,25,10,-1,40,37,38,-1,38,39,40,-1,13,12,28,-1,28,27,13,-1,12,16,29,-1,29,28,12,-1,44,49,50,-1,50,51,44,-1,11,8,31,-1,31,30,11,-1,8,6,32,-1,32,31,8,-1,6,14,33,-1,33,32,6,-1,36,41,42,-1,42,43,36,-1,0,7,35,-1,35,34,0,-1,7,13,27,-1,27,35,7,-1,37,40,41,-1,41,36,37,-1,48,49,44,-1,44,45,48,-1,14,1,37,-1,37,36,14,-1,1,18,38,-1,38,37,1,-1,18,26,39,-1,39,38,18,-1,26,2,40,-1,40,39,26,-1,2,0,41,-1,41,40,2,-1,0,34,42,-1,42,41,0,-1,34,33,43,-1,43,42,34,-1,33,14,36,-1,36,43,33,-1,16,5,45,-1,45,44,16,-1,5,22,46,-1,46,45,5,-1,22,21,47,-1,47,46,22,-1,21,4,48,-1,48,47,21,-1,4,11,49,-1,49,48,4,-1,11,30,50,-1,50,49,11,-1,30,29,51,-1,51,50,30,-1,29,16,44,-1,44,51,29,-1});
  }
}
private class MFInt32274 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {25,7,16,-1,16,3,25,-1,12,9,0,-1,0,2,12,-1,22,1,20,-1,20,18,22,-1,13,17,19,-1,19,23,13,-1,15,24,5,-1,5,26,15,-1,8,21,28,-1,28,11,8,-1,14,10,6,-1,6,4,14,-1,43,45,27,-1,54,55,51,-1,51,53,54,-1,46,47,48,-1,48,50,46,-1,56,44,49,-1,49,52,56,-1,36,38,28,-1,35,37,33,-1,33,34,35,-1,40,42,29,-1,29,30,40,-1,39,41,31,-1,31,32,39,-1,1,22,30,-1,30,29,1,-1,11,28,32,-1,32,31,11,-1,14,4,34,-1,34,33,14,-1,70,67,68,-1,68,69,70,-1,5,24,37,-1,37,35,5,-1,25,3,38,-1,38,36,25,-1,13,23,41,-1,41,39,13,-1,12,2,42,-1,42,40,12,-1,62,58,60,-1,60,61,62,-1,16,7,45,-1,45,43,16,-1,15,26,47,-1,47,46,15,-1,66,71,73,-1,73,74,66,-1,6,10,50,-1,50,48,6,-1,21,8,52,-1,52,49,21,-1,18,20,53,-1,53,51,18,-1,57,63,64,-1,64,65,57,-1,0,9,55,-1,55,54,0,-1,19,17,44,-1,44,56,19,-1,59,62,63,-1,63,57,59,-1,70,72,66,-1,66,67,70,-1,20,1,59,-1,59,57,20,-1,1,29,60,-1,60,58,1,-1,29,42,61,-1,61,60,29,-1,42,2,62,-1,62,61,42,-1,2,0,63,-1,63,62,2,-1,0,54,64,-1,64,63,0,-1,54,53,65,-1,65,64,54,-1,53,20,57,-1,57,65,53,-1,26,5,67,-1,67,66,26,-1,5,35,68,-1,68,67,5,-1,35,34,69,-1,69,68,35,-1,34,4,70,-1,70,69,34,-1,4,6,72,-1,72,70,4,-1,6,48,73,-1,73,71,6,-1,48,47,74,-1,74,73,48,-1,47,26,66,-1,66,74,47,-1});
  }
}
private class MFVec3f275 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10213651f ,0.026298f ,0.08865f ,-0.088490255f ,0.0037259988f ,0.09108f ,-0.08854201f ,0.0272745f ,0.09189f ,-0.087590255f ,0.037667252f ,0.066262506f ,-0.08644726f ,0.003555f ,0.038695503f ,-0.08755201f ,0.05031f ,0.039012752f ,-0.09954001f ,0.0018899998f ,0.075330004f ,-0.10094401f ,0.0309285f ,0.077332504f ,-0.09913951f ,0.0028800005f ,0.049655255f ,-0.08723701f ,0.0018899998f ,0.077265f ,-0.088285506f ,0.03174975f ,0.079515f ,-0.09802801f ,0.0032399986f ,0.039480753f ,-0.10000576f ,0.0418545f ,0.051192004f ,-0.10022401f ,0.0363915f ,0.064260006f ,-0.10222876f ,0.003710249f ,0.08770501f ,-0.087378755f ,0.043557752f ,0.053210255f ,-0.09967726f ,0.04718925f ,0.039654f ,-0.086294256f ,0.0033300002f ,0.051590253f ,-0.08398126f ,0.0057734996f ,0.0890775f ,-0.08286076f ,0.0042164996f ,0.07731f ,-0.08193826f ,0.0056294994f ,0.051801752f ,-0.08207551f ,0.0058207493f ,0.041051254f ,-0.08303626f ,0.046926f ,0.04133025f ,-0.082903504f ,0.04165875f ,0.052413754f ,-0.08309251f ,0.035757f ,0.0654975f ,-0.08378551f ,0.02980575f ,0.07884f ,-0.08396551f ,0.025848f ,0.0897525f ,-0.104739755f ,0.033651f ,0.061398003f ,-0.10449901f ,0.0391365f ,0.048278254f ,-0.10437301f ,0.0426375f ,0.040691253f ,-0.10293301f ,0.005867999f ,0.04055175f ,-0.103844255f ,0.005602499f ,0.047979f ,-0.10419076f ,0.004623749f ,0.07339501f ,-0.10643626f ,0.0060659996f ,0.0832275f ,-0.10624726f ,0.02430225f ,0.0839925f ,-0.105394505f ,0.028183501f ,0.074497506f ,-0.10332001f ,0.00646425f ,0.091755f ,-0.09037351f ,0.0064754994f ,0.0950175f ,-0.08786026f ,0.0073845f ,0.09504001f ,-0.087846756f ,0.02356875f ,0.095580004f ,-0.09019351f ,0.024048f ,0.095602505f ,-0.10311301f ,0.02314575f ,0.09254251f ,-0.10581751f ,0.0220815f ,0.0915525f ,-0.10597051f ,0.0077129994f ,0.090945005f ,-0.09838126f ,0.045121502f ,0.034092f ,-0.08771626f ,0.04786875f ,0.033252753f ,-0.08489701f ,0.045699753f ,0.03487725f ,-0.08399926f ,0.0073215f ,0.0346185f ,-0.08677351f ,0.0058792494f ,0.033122253f ,-0.09734401f ,0.0056002503f ,0.033999752f ,-0.10056826f ,0.0073259994f ,0.034701753f ,-0.10191601f ,0.041706f ,0.034830004f });
  }
}
private class MFVec2f276 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.195f ,0.0629f ,0.1801f ,0.0847f ,0.1811f ,0.0824f ,0.1937f ,0.091f ,0.2128f ,0.1035f ,0.2098f ,0.0996f ,0.2197f ,0.0903f ,0.2138f ,0.0778f ,0.1989f ,0.0701f ,0.1984f ,0.068f ,0.2129f ,0.0844f ,0.1833f ,0.0898f ,0.1856f ,0.0872f ,0.1937f ,0.091f ,0.2068f ,0.0986f ,0.2138f ,0.0778f ,0.2061f ,0.0729f ,0.2061f ,0.0729f ,0.1989f ,0.0701f ,0.1984f ,0.068f ,0.1952f ,0.0651f ,0.2129f ,0.0844f ,0.1833f ,0.0898f ,0.1856f ,0.0872f ,0.2017f ,0.0948f ,0.2017f ,0.0948f ,0.2226f ,0.0828f ,0.2138f ,0.0778f ,0.1937f ,0.091f ,0.1811f ,0.0824f ,0.1856f ,0.0872f ,0.1856f ,0.0872f ,0.1937f ,0.091f ,0.2017f ,0.0948f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2017f ,0.0948f ,0.2017f ,0.0948f ,0.1937f ,0.091f ,0.1937f ,0.091f ,0.1856f ,0.0872f ,0.1856f ,0.0872f ,0.1811f ,0.0824f ,0.2061f ,0.0729f ,0.2061f ,0.0729f ,0.2138f ,0.0778f ,0.2138f ,0.0778f ,0.2226f ,0.0828f ,0.2226f ,0.0828f ,0.2138f ,0.0778f ,0.2138f ,0.0778f ,0.1984f ,0.068f ,0.1984f ,0.068f ,0.195f ,0.0629f ,0.195f ,0.0629f ,0.1984f ,0.068f ,0.1984f ,0.068f ,0.195f ,0.0629f ,0.1811f ,0.0824f ,0.1801f ,0.0847f ,0.1811f ,0.0824f ,0.1811f ,0.0824f ,0.1811f ,0.0824f ,0.195f ,0.0629f ,0.195f ,0.0629f ,0.195f ,0.0629f ,0.2226f ,0.0828f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2098f ,0.0996f ,0.2226f ,0.0828f ,0.2197f ,0.0903f ,0.2226f ,0.0828f ,0.2226f ,0.0828f });
  }
}
private class MFFloat277 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat278 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,0,1,-1,1,7,13,-1,7,1,2,-1,2,9,7,-1,4,6,14,-1,14,3,4,-1,8,6,4,-1,4,5,8,-1,5,0,13,-1,13,8,5,-1,23,17,15,-1,15,19,23,-1,16,18,24,-1,24,20,16,-1,9,23,19,-1,19,7,9,-1,8,20,24,-1,24,6,8,-1,7,19,11,-1,24,21,6,-1,10,8,13,-1,13,12,10,-1,14,22,25,-1,25,9,14,-1,21,22,14,-1,14,6,21,-1,7,11,12,-1,12,13,7,-1,10,20,8,-1,25,23,9,-1,9,2,3,-1,3,14,9,-1,5,4,3,-1,3,2,1,-1,5,3,1,-1,0,5,1,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,41,42,43,-1,43,37,41,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,15,17,27,-1,27,26,15,-1,17,18,28,-1,28,27,17,-1,18,16,29,-1,29,28,18,-1,16,15,26,-1,26,29,16,-1,17,23,31,-1,31,30,17,-1,23,25,32,-1,32,31,23,-1,25,22,33,-1,33,32,25,-1,22,21,34,-1,34,33,22,-1,21,24,35,-1,35,34,21,-1,24,18,36,-1,36,35,24,-1,18,17,30,-1,30,36,18,-1,20,10,38,-1,38,37,20,-1,10,12,39,-1,39,38,10,-1,12,11,40,-1,40,39,12,-1,11,19,41,-1,41,40,11,-1,19,15,42,-1,42,41,19,-1,15,16,43,-1,43,42,15,-1,16,20,37,-1,37,43,16,-1});
  }
}
private class MFInt32280 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {22,1,0,-1,0,7,22,-1,7,0,2,-1,2,9,7,-1,4,6,23,-1,23,3,4,-1,8,6,4,-1,4,5,8,-1,5,1,22,-1,22,8,5,-1,36,26,24,-1,24,29,36,-1,25,27,38,-1,38,31,25,-1,11,35,28,-1,28,10,11,-1,13,30,37,-1,37,12,13,-1,10,28,15,-1,37,32,12,-1,14,13,16,-1,16,20,14,-1,18,33,39,-1,39,11,18,-1,32,34,19,-1,19,12,32,-1,10,15,21,-1,21,17,10,-1,14,30,13,-1,39,35,11,-1,9,2,3,-1,3,23,9,-1,5,4,3,-1,3,2,0,-1,5,3,0,-1,1,5,0,-1,47,48,49,-1,46,47,49,-1,45,46,49,-1,55,56,57,-1,57,51,55,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,24,26,41,-1,41,40,24,-1,26,27,42,-1,42,41,26,-1,27,25,43,-1,43,42,27,-1,25,24,40,-1,40,43,25,-1,26,36,45,-1,45,44,26,-1,35,39,46,-1,46,45,35,-1,39,33,47,-1,47,46,39,-1,34,32,48,-1,48,47,34,-1,32,37,49,-1,49,48,32,-1,38,27,50,-1,50,49,38,-1,27,26,44,-1,44,50,27,-1,30,14,52,-1,52,51,30,-1,14,20,53,-1,53,52,14,-1,21,15,54,-1,54,53,21,-1,15,28,55,-1,55,54,15,-1,29,24,56,-1,56,55,29,-1,24,25,57,-1,57,56,24,-1,25,31,51,-1,51,57,25,-1});
  }
}
private class MFVec3f281 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.092511f ,0.012060001f ,0.11196676f ,-0.09366075f ,0.0028327508f ,0.11128501f ,-0.102730505f ,0.0029745002f ,0.10928701f ,-0.10421325f ,0.012060001f ,0.10909126f ,-0.10325025f ,0.021462752f ,0.10913851f ,-0.093546f ,0.021753f ,0.111411005f ,-0.10128825f ,0.023676751f ,0.099153005f ,-0.09230175f ,0.0044662505f ,0.101616755f ,-0.09231075f ,0.02398275f ,0.101407506f ,-0.100914754f ,0.0043200003f ,0.099193506f ,-0.0897345f ,0.022295251f ,0.10177876f ,-0.089766f ,0.007938f ,0.10191601f ,-0.0898785f ,0.015016501f ,0.10314451f ,-0.091161005f ,0.013569751f ,0.10320976f ,-0.10280925f ,0.012820501f ,0.10048051f ,-0.088485755f ,0.0037350003f ,0.09109801f ,-0.08853525f ,0.02728125f ,0.09190351f ,-0.10222425f ,0.0037192504f ,0.08772526f ,-0.102132f ,0.026304752f ,0.08866576f ,-0.0887715f ,0.0044505005f ,0.097366504f ,-0.08897625f ,0.024396751f ,0.096932255f ,-0.103554f ,0.0225f ,0.09857926f ,-0.1037205f ,0.0148365f ,0.100059755f ,-0.1027935f ,0.0044797505f ,0.09374401f ,-0.1025505f ,0.023910752f ,0.09320401f ,-0.1034505f ,0.0052965f ,0.09861976f ,-0.089991f ,0.0067522503f ,0.085338004f ,-0.09821025f ,0.00674325f ,0.08329276f ,-0.098145f ,0.023863502f ,0.084021755f ,-0.090024754f ,0.024448501f ,0.08592751f ,-0.106719755f ,0.009085501f ,0.08902576f ,-0.10700325f ,0.00946575f ,0.092025004f ,-0.10733175f ,0.009873001f ,0.09445726f ,-0.1074645f ,0.014627251f ,0.095175005f ,-0.107381254f ,0.018447751f ,0.09443701f ,-0.10688175f ,0.019152f ,0.09175726f ,-0.1066725f ,0.020344501f ,0.08949601f ,-0.084890254f ,0.022407752f ,0.095400006f ,-0.08544825f ,0.020736001f ,0.09926326f ,-0.085556254f ,0.015012001f ,0.10033876f ,-0.085482f ,0.00929925f ,0.09934201f ,-0.084705755f ,0.00663975f ,0.09587701f ,-0.08461125f ,0.0061965007f ,0.09200476f ,-0.08462925f ,0.024005251f ,0.09261451f });
  }
}
private class MFVec2f282 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1706f ,0.0686f ,0.1709f ,0.0678f ,0.1824f ,0.0523f ,0.183f ,0.0511f ,0.1834f ,0.0508f ,0.1716f ,0.0676f ,0.1882f ,0.0556f ,0.1745f ,0.076f ,0.1748f ,0.0736f ,0.1886f ,0.0572f ,0.2327f ,0.0796f ,0.2439f ,0.0803f ,0.2076f ,0.0485f ,0.2162f ,0.0476f ,0.2201f ,0.0466f ,0.2302f ,0.0796f ,0.2219f ,0.0517f ,0.2301f ,0.0734f ,0.2486f ,0.0743f ,0.2027f ,0.0537f ,0.2224f ,0.0526f ,0.2293f ,0.0736f ,0.1746f ,0.075f ,0.1885f ,0.0566f ,0.1801f ,0.0847f ,0.1811f ,0.0824f ,0.1952f ,0.0651f ,0.195f ,0.0629f ,0.2293f ,0.0837f ,0.1769f ,0.0796f ,0.2191f ,0.0403f ,0.1766f ,0.0777f ,0.2037f ,0.047f ,0.2486f ,0.0741f ,0.2026f ,0.0539f ,0.2444f ,0.0847f ,0.1915f ,0.0602f ,0.2041f ,0.0405f ,0.1915f ,0.0578f ,0.2464f ,0.0799f ,0.1801f ,0.0847f ,0.1952f ,0.0651f ,0.195f ,0.0629f ,0.1811f ,0.0824f ,0.1952f ,0.0651f ,0.1915f ,0.0602f ,0.2464f ,0.0799f ,0.2486f ,0.0741f ,0.2037f ,0.047f ,0.2041f ,0.0405f ,0.195f ,0.0629f ,0.1766f ,0.0777f ,0.2201f ,0.0466f ,0.2224f ,0.0526f ,0.2302f ,0.0796f ,0.2293f ,0.0837f ,0.1801f ,0.0847f ,0.1811f ,0.0824f });
  }
}
private class MFFloat283 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat284 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1});
  }
}
private class MFInt32286 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,7,-1,7,6,14,-1,8,15,5,-1,5,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1});
  }
}
private class MFVec3f287 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.09256725f ,0.010451251f ,0.12121875f ,-0.0933435f ,0.0020925007f ,0.12068325f ,-0.10653525f ,0.0020925007f ,0.1179315f ,-0.10752975f ,0.010451251f ,0.11788875f ,-0.106515f ,0.01704825f ,0.11801025f ,-0.0936045f ,0.017561251f ,0.120496504f ,-0.09252f ,0.012060001f ,0.11194875f ,-0.09366975f ,0.00283275f ,0.111267f ,-0.1027395f ,0.0029745002f ,0.109269f ,-0.1042245f ,0.012060001f ,0.109071f ,-0.10325925f ,0.021462752f ,0.1091205f ,-0.093554996f ,0.021753f ,0.111390755f ,-0.09346275f ,0.0120870005f ,0.107775f ,-0.094329f ,0.0049702507f ,0.107163f ,-0.09987525f ,0.0050557503f ,0.106002f ,-0.1010385f ,0.012129751f ,0.10587825f ,-0.10028025f ,0.0194175f ,0.105876f ,-0.094248f ,0.01959975f ,0.10727325f ,-0.097011f ,0.005463001f ,0.12333825f ,-0.096588f ,0.01035675f ,0.123804f ,-0.09708525f ,0.01408725f ,0.12320325f ,-0.1043775f ,0.013797001f ,0.121914f ,-0.104908496f ,0.010395001f ,0.12188925f ,-0.10430775f ,0.005463001f ,0.121842004f });
  }
}
private class MFVec2f288 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1653f ,0.0654f ,0.1636f ,0.063f ,0.1795f ,0.0453f ,0.1792f ,0.0409f ,0.1786f ,0.0451f ,0.1651f ,0.0639f ,0.1293f ,0.0261f ,0.0949f ,0.0775f ,0.1709f ,0.0678f ,0.1706f ,0.0686f ,0.1824f ,0.0523f ,0.183f ,0.0511f ,0.1291f ,0.0918f ,0.1834f ,0.0508f ,0.1554f ,0.0532f ,0.1716f ,0.0676f ,0.1709f ,0.0678f ,0.1706f ,0.0686f ,0.1824f ,0.0523f ,0.183f ,0.0511f ,0.1834f ,0.0508f ,0.1554f ,0.0532f ,0.1653f ,0.0654f ,0.1636f ,0.063f ,0.1651f ,0.0639f ,0.0949f ,0.0775f ,0.1792f ,0.0409f ,0.1795f ,0.0453f });
  }
}
private class MFFloat289 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat290 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1});
  }
}
private class MFInt32292 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,9,8,-1,8,3,0,-1,1,10,9,-1,9,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,8,15,5,-1,5,3,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,8,16,-1,16,21,15,-1});
  }
}
private class MFVec3f293 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.09654301f ,0.00919575f ,0.1282905f ,-0.096300006f ,0.00385875f ,0.12638927f ,-0.10481851f ,0.00385875f ,0.12447676f ,-0.10622025f ,0.00919575f ,0.12626776f ,-0.10552726f ,0.014742f ,0.12506627f ,-0.09664425f ,0.01503f ,0.12717001f ,-0.09255376f ,0.010449f ,0.12123676f ,-0.09333f ,0.0020902497f ,0.12070126f ,-0.106521755f ,0.0020902497f ,0.11794951f ,-0.10751626f ,0.010449f ,0.11790676f ,-0.106501505f ,0.017046f ,0.11802826f ,-0.093591005f ,0.017561251f ,0.12051451f ,-0.09416701f ,0.010368f ,0.11659051f ,-0.094677754f ,0.00461025f ,0.116106756f ,-0.10344826f ,0.00461025f ,0.114297755f ,-0.10414801f ,0.01039725f ,0.114322506f ,-0.10349551f ,0.014598f ,0.11436976f ,-0.09479926f ,0.0149445f ,0.11595826f });
  }
}
private class MFVec2f294 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1643f ,0.0579f ,0.1747f ,0.0423f ,0.174f ,0.0396f ,0.1638f ,0.0538f ,0.1756f ,0.0403f ,0.1632f ,0.0573f ,0.0915f ,0.0082f ,0.066f ,0.0493f ,0.1636f ,0.063f ,0.1653f ,0.0654f ,0.1795f ,0.0453f ,0.1792f ,0.0409f ,0.1786f ,0.0451f ,0.0949f ,0.0775f ,0.1293f ,0.0261f ,0.1651f ,0.0639f ,0.1636f ,0.063f ,0.1653f ,0.0654f ,0.1795f ,0.0453f ,0.1792f ,0.0409f ,0.1786f ,0.0451f ,0.1293f ,0.0261f });
  }
}
private class MFFloat295 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat296 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1});
  }
}
private class MFInt32298 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1});
  }
}
private class MFVec3f299 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.111183755f ,0.0018899972f ,-0.045627754f ,-0.096466504f ,0.0018899972f ,-0.056227505f ,-0.09633376f ,0.011317501f ,-0.0605475f ,-0.113625005f ,0.011317501f ,-0.048892505f ,-0.069588006f ,0.0018899972f ,-0.046424255f ,-0.061380003f ,0.0019124956f ,-0.018126002f ,-0.059827503f ,0.011317501f ,-0.018623251f ,-0.06685875f ,0.011317501f ,-0.049747504f ,-0.116752505f ,0.0019124956f ,-0.018123752f ,-0.11857501f ,0.011317501f ,-0.018623251f ,-0.09633151f ,0.03168f ,-0.06327f ,-0.1151325f ,0.03249f ,-0.051457502f ,-0.056812506f ,0.0356805f ,-0.018369002f ,-0.06516001f ,0.031409997f ,-0.052312505f ,-0.12057751f ,0.0332325f ,-0.018369002f ,-0.095350504f ,0.0475335f ,-0.058725003f ,-0.113422506f ,0.04728375f ,-0.046788752f ,-0.065340005f ,0.046962f ,-0.047810253f ,-0.08391151f ,0.0018899972f ,-0.056385003f ,-0.08367301f ,0.011317501f ,-0.0606825f ,-0.08350875f ,0.031409997f ,-0.06340501f ,-0.08265825f ,0.047443498f ,-0.058860004f ,-0.09549901f ,0.0019124956f ,-0.018123752f ,-0.079173006f ,0.0019124956f ,-0.018123752f ,-0.11792251f ,0.0034649957f ,-0.0006975004f ,-0.12062251f ,0.0114750005f ,-0.0011475f ,-0.12015001f ,0.0324675f ,-0.001417502f ,-0.06383251f ,0.0036899955f ,0.0017999983f ,-0.09796051f ,0.002902499f ,0.0015299992f ,-0.081360005f ,0.0029249974f ,0.0029474983f ,-0.060637504f ,0.01296f ,0.0012149978f ,-0.057757504f ,0.03660075f ,0.0011475f ,-0.06538501f ,0.0660105f ,0.0019124983f ,-0.10859401f ,0.064323f ,0.0025199999f ,-0.09434476f ,0.062127f ,-0.0529875f ,-0.11171251f ,0.06504975f ,-0.04129425f ,-0.06552f ,0.06504975f ,-0.042275254f ,-0.11490751f ,0.0582795f ,-0.025368752f ,-0.114502504f ,0.05811075f ,-0.013686751f ,-0.08185276f ,0.062181f ,-0.0531f ,-0.058500003f ,0.05973975f ,-0.019140752f ,-0.09319951f ,0.07452675f ,-0.045807753f ,-0.107649006f ,0.07749f ,-0.036108002f ,-0.110274754f ,0.07066125f ,-0.022761002f ,-0.10991926f ,0.07044525f ,-0.0125325015f ,-0.10553626f ,0.07647975f ,-0.00042750122f ,-0.069536254f ,0.07791525f ,-0.00094500126f ,-0.064215004f ,0.07174125f ,-0.017030252f ,-0.070265256f ,0.077184f ,-0.036929253f ,-0.083787754f ,0.07447275f ,-0.045882f ,-0.11724751f ,0.013027498f ,0.0062774983f ,-0.11551501f ,0.008347496f ,0.0061874995f ,-0.098070756f ,0.007942499f ,0.0083025f ,-0.08164801f ,0.007964997f ,0.009719999f ,-0.0666225f ,0.0085275f ,0.0084825f ,-0.06435001f ,0.014602499f ,0.008347499f ,-0.061605003f ,0.0352575f ,0.00837f ,-0.0683415f ,0.05896125f ,0.008955f ,-0.106265254f ,0.05759775f ,0.009652498f ,-0.11679751f ,0.031094998f ,0.0059849983f });
  }
}
private class MFVec2f300 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2845f ,0.0964f ,0.2768f ,0.1211f ,0.2792f ,0.1228f ,0.2886f ,0.0939f ,0.2493f ,0.1586f ,0.2252f ,0.161f ,0.2241f ,0.1634f ,0.2489f ,0.1638f ,0.2727f ,0.0786f ,0.2746f ,0.076f ,0.2809f ,0.1238f ,0.2914f ,0.0926f ,0.2206f ,0.1691f ,0.249f ,0.1672f ,0.2762f ,0.0729f ,0.2769f ,0.1234f ,0.2869f ,0.0933f ,0.2461f ,0.1652f ,0.2661f ,0.1399f ,0.2685f ,0.1417f ,0.27f ,0.1429f ,0.2661f ,0.1424f ,0.24f ,0.098f ,0.2266f ,0.1229f ,0.2628f ,0.0703f ,0.2665f ,0.0671f ,0.2664f ,0.0668f ,0.2178f ,0.1526f ,0.2363f ,0.0929f ,0.2213f ,0.1179f ,0.2171f ,0.1588f ,0.2129f ,0.1643f ,0.2165f ,0.148f ,0.2533f ,0.0835f ,0.273f ,0.1232f ,0.2824f ,0.0941f ,0.2433f ,0.1632f ,0.2759f ,0.0832f ,0.2685f ,0.0797f ,0.2623f ,0.1418f ,0.2231f ,0.166f ,0.273f ,0.1232f ,0.2824f ,0.0941f ,0.2759f ,0.0832f ,0.2685f ,0.0797f ,0.2533f ,0.0835f ,0.2165f ,0.148f ,0.2231f ,0.166f ,0.2433f ,0.1632f ,0.2623f ,0.1418f ,0.2665f ,0.0671f ,0.2628f ,0.0703f ,0.2363f ,0.0929f ,0.2213f ,0.1179f ,0.2178f ,0.1526f ,0.2171f ,0.1588f ,0.2129f ,0.1643f ,0.2165f ,0.148f ,0.2533f ,0.0835f ,0.2664f ,0.0668f });
  }
}
private class MFFloat301 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat302 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32303 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,17,16,-1,16,0,1,-1,3,8,5,-1,5,0,3,-1,6,7,2,-1,2,1,6,-1,2,4,10,-1,18,2,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,2,-1,2,7,9,-1,8,3,14,-1,14,15,8,-1,3,0,16,-1,16,19,3,-1,14,3,19,-1,1,2,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1});
  }
}
private class MFInt32304 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,17,16,-1,16,0,1,-1,2,8,5,-1,5,0,2,-1,6,7,3,-1,3,1,6,-1,3,4,10,-1,18,3,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,3,-1,3,7,9,-1,8,2,14,-1,14,15,8,-1,2,0,16,-1,16,19,2,-1,14,2,19,-1,1,3,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1});
  }
}
private class MFVec3f305 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.11910825f ,0.0050174985f ,0.016718626f ,-0.12267675f ,0.0116099985f ,0.012596626f ,-0.11973376f ,0.0317025f ,0.015528375f ,-0.1055025f ,0.0039824983f ,0.020075625f ,-0.10980675f ,0.04695975f ,0.018743625f ,-0.1242225f ,0.004027498f ,0.032689128f ,-0.127854f ,0.01134f ,0.030889126f ,-0.12442501f ,0.029556f ,0.03282413f ,-0.11146726f ,0.002925f ,0.036221627f ,-0.1121985f ,0.039987f ,0.036581628f ,-0.10860526f ,0.0643275f ,0.0025278751f ,-0.097605005f ,0.0676575f ,0.008958375f ,-0.09813376f ,0.055008f ,0.020136375f ,-0.09968176f ,0.047196f ,0.039664127f ,-0.09743851f ,0.003824999f ,0.020230876f ,-0.098032504f ,0.0032624998f ,0.039484125f ,-0.11793376f ,0.0034649984f ,-0.000700875f ,-0.12063601f ,0.0114750005f ,-0.001137375f ,-0.12016576f ,0.03246525f ,-0.001416375f ,-0.09797175f ,0.002902499f ,0.0015423751f ,-0.08790526f ,0.05742675f ,0.012522375f ,-0.08835075f ,0.05142375f ,0.017830126f ,-0.08966925f ,0.044343002f ,0.035546627f ,-0.08820675f ,0.007942499f ,0.035411626f ,-0.087831005f ,0.008392498f ,0.020489626f ,-0.08831701f ,0.007717499f ,0.0068276254f ,-0.101808004f ,0.061807502f ,-0.007918875f ,-0.094635f ,0.063990004f ,-0.0030678753f ,-0.08766001f ,0.05665275f ,-0.000520875f ,-0.088042505f ,0.011159999f ,-0.0057318755f ,-0.094920754f ,0.007717499f ,-0.009644625f ,-0.1113435f ,0.008145f ,-0.010839375f ,-0.112934254f ,0.012879f ,-0.011129625f ,-0.1124685f ,0.032472f ,-0.011482876f ,-0.122760005f ,0.004904999f ,0.042476624f ,-0.11240775f ,0.004027498f ,0.045356628f ,-0.09996075f ,0.004319998f ,0.048889127f ,-0.09325576f ,0.0105525f ,0.04607663f ,-0.094477504f ,0.04098825f ,0.04618913f ,-0.10014751f ,0.039015f ,0.049271625f ,-0.110943004f ,0.032859f ,0.046211626f ,-0.12178575f ,0.023769f ,0.042859126f ,-0.12462526f ,0.008797498f ,0.041126627f });
  }
}
private class MFVec2f306 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2528f ,0.0622f ,0.2585f ,0.0581f ,0.2383f ,0.0796f ,0.2566f ,0.0607f ,0.243f ,0.0749f ,0.2469f ,0.052f ,0.2512f ,0.047f ,0.2484f ,0.051f ,0.2292f ,0.0691f ,0.2342f ,0.0682f ,0.2533f ,0.0835f ,0.2407f ,0.0951f ,0.2314f ,0.0879f ,0.2226f ,0.0828f ,0.2271f ,0.0958f ,0.2197f ,0.0903f ,0.2628f ,0.0703f ,0.2665f ,0.0671f ,0.2664f ,0.0668f ,0.2363f ,0.0929f ,0.2407f ,0.0951f ,0.2314f ,0.0879f ,0.2226f ,0.0828f ,0.2197f ,0.0903f ,0.2271f ,0.0958f ,0.2363f ,0.0929f ,0.2533f ,0.0835f ,0.2407f ,0.0951f ,0.2407f ,0.0951f ,0.2363f ,0.0929f ,0.2363f ,0.0929f ,0.2628f ,0.0703f ,0.2665f ,0.0671f ,0.2664f ,0.0668f ,0.2469f ,0.052f ,0.2292f ,0.0691f ,0.2197f ,0.0903f ,0.2197f ,0.0903f ,0.2226f ,0.0828f ,0.2226f ,0.0828f ,0.2342f ,0.0682f ,0.2484f ,0.051f ,0.2512f ,0.047f });
  }
}
private class MFFloat307 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat308 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32309 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,13,17,-1,17,16,11,-1,10,11,16,-1,16,14,10,-1,5,1,3,-1,3,7,5,-1,0,2,6,-1,6,4,0,-1,14,15,12,-1,12,10,14,-1,7,3,0,-1,0,4,7,-1,8,1,5,-1,5,9,8,-1,40,41,36,-1,36,37,40,-1,48,49,44,-1,44,45,48,-1,27,28,31,-1,28,29,30,-1,30,31,28,-1,34,35,32,-1,32,33,34,-1,35,27,31,-1,31,32,35,-1,18,19,24,-1,26,18,24,-1,24,25,26,-1,20,21,22,-1,22,23,20,-1,19,20,23,-1,23,24,19,-1,5,7,19,-1,19,18,5,-1,7,4,20,-1,20,19,7,-1,4,6,21,-1,21,20,4,-1,40,37,38,-1,38,39,40,-1,15,14,23,-1,23,22,15,-1,14,16,24,-1,24,23,14,-1,16,17,25,-1,25,24,16,-1,44,49,50,-1,50,51,44,-1,9,5,18,-1,18,26,9,-1,3,1,28,-1,28,27,3,-1,1,8,29,-1,29,28,1,-1,48,45,46,-1,46,47,48,-1,13,11,31,-1,31,30,13,-1,11,10,32,-1,32,31,11,-1,10,12,33,-1,33,32,10,-1,36,41,42,-1,42,43,36,-1,2,0,35,-1,35,34,2,-1,0,3,27,-1,27,35,0,-1,12,15,37,-1,37,36,12,-1,15,22,38,-1,38,37,15,-1,22,21,39,-1,39,38,22,-1,21,6,40,-1,40,39,21,-1,6,2,41,-1,41,40,6,-1,2,34,42,-1,42,41,2,-1,34,33,43,-1,43,42,34,-1,33,12,36,-1,36,43,33,-1,17,13,45,-1,45,44,17,-1,13,30,46,-1,46,45,13,-1,30,29,47,-1,47,46,30,-1,29,8,48,-1,48,47,29,-1,8,9,49,-1,49,48,8,-1,9,26,50,-1,50,49,9,-1,26,25,51,-1,51,50,26,-1,25,17,44,-1,44,51,25,-1});
  }
}
private class MFInt32310 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,13,17,-1,17,16,5,-1,2,5,16,-1,16,7,2,-1,9,1,6,-1,6,12,9,-1,0,4,11,-1,11,8,0,-1,7,10,3,-1,3,2,7,-1,12,6,0,-1,0,8,12,-1,14,1,9,-1,9,15,14,-1,42,43,38,-1,38,39,42,-1,50,51,46,-1,46,47,50,-1,29,30,18,-1,30,31,32,-1,32,33,30,-1,36,37,34,-1,34,35,36,-1,37,29,33,-1,33,34,37,-1,20,21,19,-1,28,20,26,-1,26,27,28,-1,22,23,24,-1,24,25,22,-1,21,22,25,-1,25,26,21,-1,9,12,21,-1,21,20,9,-1,12,8,22,-1,22,21,12,-1,8,11,23,-1,23,22,8,-1,42,39,40,-1,40,41,42,-1,10,7,25,-1,25,24,10,-1,7,16,26,-1,26,25,7,-1,16,17,27,-1,27,26,16,-1,46,51,52,-1,52,53,46,-1,15,9,20,-1,20,28,15,-1,6,1,30,-1,30,29,6,-1,1,14,31,-1,31,30,1,-1,50,47,48,-1,48,49,50,-1,13,5,33,-1,33,32,13,-1,5,2,34,-1,34,33,5,-1,2,3,35,-1,35,34,2,-1,38,43,44,-1,44,45,38,-1,4,0,37,-1,37,36,4,-1,0,6,29,-1,29,37,0,-1,3,10,39,-1,39,38,3,-1,10,24,40,-1,40,39,10,-1,24,23,41,-1,41,40,24,-1,23,11,42,-1,42,41,23,-1,11,4,43,-1,43,42,11,-1,4,36,44,-1,44,43,4,-1,36,35,45,-1,45,44,36,-1,35,3,38,-1,38,45,35,-1,17,13,47,-1,47,46,17,-1,13,32,48,-1,48,47,13,-1,32,31,49,-1,49,48,32,-1,31,14,50,-1,50,49,31,-1,14,15,51,-1,51,50,14,-1,15,28,52,-1,52,51,15,-1,28,27,53,-1,53,52,28,-1,27,17,46,-1,46,53,27,-1});
  }
}
private class MFVec3f311 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1158075f ,0.0291195f ,0.07461f ,-0.11380725f ,0.03528225f ,0.04788675f ,-0.115380004f ,0.02486025f ,0.0852075f ,-0.115184255f ,0.03212325f ,0.061290003f ,-0.100946255f ,0.030933f ,0.077332504f ,-0.10000575f ,0.04186125f ,0.05118975f ,-0.10213876f ,0.0263025f ,0.08865f ,-0.10022625f ,0.03639825f ,0.06426f ,-0.112194f ,0.03998475f ,0.03656475f ,-0.09967726f ,0.047205f ,0.03965175f ,-0.11371051f ,0.0018899998f ,0.070155f ,-0.11281951f ,0.0023984998f ,0.046269f ,-0.116106756f ,0.0046372497f ,0.084240004f ,-0.11146276f ,0.0029137495f ,0.03620925f ,-0.09954225f ,0.0018899998f ,0.075330004f ,-0.102231f ,0.0037169987f ,0.087705f ,-0.099139504f ,0.0028912497f ,0.04965075f ,-0.098028004f ,0.0032512492f ,0.0394785f ,-0.0943785f ,0.03834225f ,0.0499905f ,-0.09462825f ,0.03285f ,0.063135006f ,-0.09525375f ,0.027378f ,0.07623f ,-0.09596925f ,0.0238095f ,0.085005f ,-0.0961965f ,0.007373249f ,0.084285006f ,-0.0941355f ,0.006086249f ,0.07551f ,-0.093811505f ,0.0070605f ,0.0502065f ,-0.09298351f ,0.00728775f ,0.04391775f ,-0.09433576f ,0.041085f ,0.04404375f ,-0.12019726f ,0.02797425f ,0.05809725f ,-0.11881801f ,0.030912751f ,0.04482f ,-0.11768851f ,0.033849f ,0.0373095f ,-0.117108f ,0.0062099993f ,0.03702375f ,-0.11812951f ,0.00586575f ,0.044163f ,-0.118989006f ,0.0054179993f ,0.067095004f ,-0.12111525f ,0.007483499f ,0.0784125f ,-0.120291755f ,0.02213775f ,0.079155f ,-0.12082051f ,0.02526975f ,0.0708525f ,-0.116334006f ,0.0076972493f ,0.0885375f ,-0.103536f ,0.00685125f ,0.0921375f ,-0.099623255f ,0.0090247495f ,0.091845006f ,-0.09944551f ,0.02135925f ,0.092385f ,-0.103205256f ,0.02268225f ,0.092745006f ,-0.11550826f ,0.0213795f ,0.089347504f ,-0.118539006f ,0.01984725f ,0.086467505f ,-0.11914875f ,0.009229499f ,0.0859275f ,-0.09698176f ,0.0066307494f ,0.0314145f ,-0.10910475f ,0.0063269986f ,0.0284535f ,-0.112322256f ,0.00835425f ,0.02848725f ,-0.11282851f ,0.032472f ,0.028737f ,-0.10865925f ,0.03727575f ,0.02882925f ,-0.09789751f ,0.043454252f ,0.031311f ,-0.094954506f ,0.0396945f ,0.03438675f ,-0.09373275f ,0.009229499f ,0.03426975f });
  }
}
private class MFVec2f312 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2117f ,0.0481f ,0.2254f ,0.0615f ,0.2142f ,0.0508f ,0.2102f ,0.0461f ,0.2083f ,0.0443f ,0.2202f ,0.0585f ,0.2186f ,0.0548f ,0.1989f ,0.0701f ,0.1984f ,0.068f ,0.2138f ,0.0778f ,0.1952f ,0.0651f ,0.195f ,0.0629f ,0.2061f ,0.0729f ,0.2292f ,0.0691f ,0.2342f ,0.0682f ,0.2226f ,0.0828f ,0.2129f ,0.0844f ,0.2197f ,0.0903f ,0.2254f ,0.0615f ,0.2061f ,0.0729f ,0.2138f ,0.0778f ,0.2061f ,0.0729f ,0.1984f ,0.068f ,0.195f ,0.0629f ,0.195f ,0.0629f ,0.1984f ,0.068f ,0.2061f ,0.0729f ,0.2226f ,0.0828f ,0.2226f ,0.0828f ,0.2186f ,0.0548f ,0.2254f ,0.0615f ,0.2342f ,0.0682f ,0.2342f ,0.0682f ,0.2254f ,0.0615f ,0.2117f ,0.0481f ,0.2083f ,0.0443f ,0.2083f ,0.0443f ,0.2117f ,0.0481f ,0.2083f ,0.0443f ,0.195f ,0.0629f ,0.195f ,0.0629f ,0.195f ,0.0629f ,0.195f ,0.0629f ,0.2083f ,0.0443f ,0.2083f ,0.0443f ,0.2083f ,0.0443f ,0.2226f ,0.0828f ,0.2342f ,0.0682f ,0.2342f ,0.0682f ,0.2342f ,0.0682f ,0.2342f ,0.0682f ,0.2226f ,0.0828f ,0.2226f ,0.0828f ,0.2226f ,0.0828f });
  }
}
private class MFFloat313 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat314 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32315 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,2,1,-1,1,10,13,-1,10,1,3,-1,3,8,10,-1,3,4,0,-1,0,8,3,-1,0,4,5,-1,5,9,0,-1,7,9,5,-1,5,6,7,-1,6,2,13,-1,13,7,6,-1,22,17,18,-1,18,14,22,-1,20,19,21,-1,21,15,20,-1,9,7,15,-1,15,21,9,-1,10,14,16,-1,8,22,14,-1,14,10,8,-1,21,23,9,-1,11,7,13,-1,13,12,11,-1,0,25,24,-1,24,8,0,-1,16,12,13,-1,13,10,16,-1,23,25,0,-1,0,9,23,-1,11,15,7,-1,24,22,8,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,37,38,39,-1,39,40,37,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,40,41,42,-1,42,43,37,-1,40,42,37,-1,18,17,27,-1,27,26,18,-1,17,19,28,-1,28,27,17,-1,19,20,29,-1,29,28,19,-1,20,18,26,-1,26,29,20,-1,17,22,31,-1,31,30,17,-1,22,24,32,-1,32,31,22,-1,24,25,33,-1,33,32,24,-1,25,23,34,-1,34,33,25,-1,23,21,35,-1,35,34,23,-1,21,19,36,-1,36,35,21,-1,19,17,30,-1,30,36,19,-1,14,18,38,-1,38,37,14,-1,18,20,39,-1,39,38,18,-1,20,15,40,-1,40,39,20,-1,15,11,41,-1,41,40,15,-1,11,12,42,-1,42,41,11,-1,12,16,43,-1,43,42,12,-1,16,14,37,-1,37,43,16,-1});
  }
}
private class MFInt32316 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {27,2,1,-1,1,10,27,-1,10,1,3,-1,3,11,10,-1,3,4,0,-1,0,11,3,-1,0,4,5,-1,5,12,0,-1,9,12,5,-1,5,6,9,-1,6,2,27,-1,27,9,6,-1,35,28,29,-1,29,7,35,-1,31,30,33,-1,33,8,31,-1,15,14,16,-1,16,32,15,-1,17,13,18,-1,19,34,13,-1,13,17,19,-1,32,36,15,-1,20,14,22,-1,22,21,20,-1,23,38,37,-1,37,19,23,-1,18,24,25,-1,25,17,18,-1,36,39,26,-1,26,15,36,-1,20,16,14,-1,37,34,19,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,51,52,53,-1,53,54,51,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,54,55,56,-1,56,57,51,-1,54,56,51,-1,29,28,41,-1,41,40,29,-1,28,30,42,-1,42,41,28,-1,30,31,43,-1,43,42,30,-1,31,29,40,-1,40,43,31,-1,28,35,45,-1,45,44,28,-1,34,37,46,-1,46,45,34,-1,37,38,47,-1,47,46,37,-1,39,36,48,-1,48,47,39,-1,36,32,49,-1,49,48,36,-1,33,30,50,-1,50,49,33,-1,30,28,44,-1,44,50,30,-1,7,29,52,-1,52,51,7,-1,29,31,53,-1,53,52,29,-1,31,8,54,-1,54,53,31,-1,16,20,55,-1,55,54,16,-1,20,21,56,-1,56,55,20,-1,24,18,57,-1,57,56,24,-1,18,13,51,-1,51,57,18,-1});
  }
}
private class MFVec3f317 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.11688301f ,0.013070251f ,0.095406756f ,-0.10832626f ,0.0029699993f ,0.10730025f ,-0.10703926f ,0.012060001f ,0.10753425f ,-0.117636755f ,0.00240075f ,0.10500976f ,-0.11868301f ,0.012060001f ,0.104661f ,-0.117857255f ,0.02149425f ,0.105135754f ,-0.10788751f ,0.022482f ,0.10744426f ,-0.10575001f ,0.023166f ,0.098246254f ,-0.11545651f ,0.0047632502f ,0.09456976f ,-0.115602754f ,0.022394251f ,0.09459001f ,-0.10577026f ,0.0048780004f ,0.09790201f ,-0.10356525f ,0.0225f ,0.09857251f ,-0.10373176f ,0.0148365f ,0.100053005f ,-0.10503676f ,0.012894751f ,0.09988426f ,-0.10280476f ,0.00447975f ,0.09373725f ,-0.10256176f ,0.023910752f ,0.09319726f ,-0.10346176f ,0.0052965f ,0.098613f ,-0.116111256f ,0.0046395003f ,0.084251255f ,-0.1022355f ,0.0037192497f ,0.0877185f ,-0.115382254f ,0.0248625f ,0.08521201f ,-0.10214326f ,0.026304752f ,0.088659f ,-0.11644201f ,0.022428f ,0.08837775f ,-0.11644201f ,0.0057960004f ,0.08840475f ,-0.117414005f ,0.021591f ,0.093564f ,-0.117443256f ,0.00503775f ,0.09368326f ,-0.11774701f ,0.012453751f ,0.09465525f ,-0.103425756f ,0.0067860004f ,0.08169975f ,-0.112032f ,0.0073575f ,0.079560004f ,-0.11148076f ,0.0226575f ,0.080280006f ,-0.103358254f ,0.023544f ,0.082404f ,-0.12101626f ,0.00787275f ,0.084177f ,-0.12090376f ,0.0082755005f ,0.08568451f ,-0.12225825f ,0.0077625f ,0.08923276f ,-0.12244051f ,0.012519f ,0.08986501f ,-0.12212776f ,0.019557001f ,0.08898976f ,-0.12081826f ,0.020214f ,0.084894754f ,-0.12041551f ,0.020331f ,0.08479801f ,-0.098021254f ,0.00695925f ,0.09254701f ,-0.09772876f ,0.0065790005f ,0.08952975f ,-0.09767251f ,0.022185002f ,0.09018f ,-0.09774226f ,0.021514501f ,0.09145801f ,-0.098498255f ,0.02042775f ,0.095593505f ,-0.09860176f ,0.014764501f ,0.096691504f ,-0.09838576f ,0.0074677505f ,0.095589004f });
  }
}
private class MFVec2f318 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2033f ,0.0375f ,0.1866f ,0.0487f ,0.186f ,0.0472f ,0.1969f ,0.0343f ,0.1963f ,0.0328f ,0.1973f ,0.0341f ,0.1873f ,0.048f ,0.1915f ,0.0602f ,0.1915f ,0.0578f ,0.1897f ,0.0535f ,0.1888f ,0.0569f ,0.2031f ,0.037f ,0.2012f ,0.0381f ,0.2444f ,0.0847f ,0.2208f ,0.06f ,0.2111f ,0.0557f ,0.2254f ,0.054f ,0.2483f ,0.0809f ,0.2464f ,0.0799f ,0.2587f ,0.0865f ,0.225f ,0.0604f ,0.2239f ,0.0673f ,0.2238f ,0.0671f ,0.267f ,0.0845f ,0.2486f ,0.0741f ,0.2486f ,0.074f ,0.2049f ,0.059f ,0.1896f ,0.055f ,0.2102f ,0.0461f ,0.1952f ,0.0651f ,0.2083f ,0.0443f ,0.195f ,0.0629f ,0.2109f ,0.0476f ,0.2048f ,0.0404f ,0.2576f ,0.0911f ,0.2063f ,0.0414f ,0.2083f ,0.0537f ,0.2612f ,0.0869f ,0.2671f ,0.0842f ,0.2047f ,0.0593f ,0.1952f ,0.0651f ,0.2102f ,0.0461f ,0.2083f ,0.0443f ,0.195f ,0.0629f ,0.2102f ,0.0461f ,0.2063f ,0.0414f ,0.2612f ,0.0869f ,0.2671f ,0.0842f ,0.2083f ,0.0537f ,0.2109f ,0.0476f ,0.2083f ,0.0443f ,0.2444f ,0.0847f ,0.1952f ,0.0651f ,0.195f ,0.0629f ,0.1915f ,0.0578f ,0.225f ,0.0604f ,0.2239f ,0.0673f ,0.2464f ,0.0799f });
  }
}
private class MFFloat319 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat320 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,6,7,-1,7,1,0,-1,2,8,6,-1,6,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1});
  }
}
private class MFInt32322 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,8,9,-1,9,1,0,-1,2,10,8,-1,8,0,2,-1,11,10,2,-1,2,3,11,-1,4,12,11,-1,11,3,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1});
  }
}
private class MFVec3f323 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.10878976f ,0.002007f ,0.115029f ,-0.10769851f ,0.010451251f ,0.11555775f ,-0.12018826f ,0.002007f ,0.112497754f ,-0.12140551f ,0.010451251f ,0.11259675f ,-0.12056626f ,0.01614375f ,0.112122f ,-0.108724505f ,0.016731001f ,0.115152754f ,-0.108315006f ,0.00297f ,0.107298f ,-0.10702576f ,0.012060001f ,0.10752975f ,-0.117623255f ,0.00240075f ,0.10500525f ,-0.11866951f ,0.012060001f ,0.10465875f ,-0.117843755f ,0.02149425f ,0.10513125f ,-0.107874006f ,0.022482002f ,0.10743975f ,-0.10819576f ,0.012159f ,0.102483004f ,-0.109190255f ,0.00519525f ,0.1023345f ,-0.114540756f ,0.0048667504f ,0.10100475f ,-0.11531701f ,0.012105f ,0.100707754f ,-0.11468926f ,0.019399501f ,0.10112175f ,-0.10883701f ,0.01998f ,0.102429f ,-0.11238301f ,0.0053955005f ,0.117645755f ,-0.11176426f ,0.0104175005f ,0.118089005f ,-0.11221201f ,0.013248f ,0.117839254f ,-0.11846251f ,0.0129375f ,0.116775006f ,-0.11883601f ,0.01049625f ,0.11662875f ,-0.11806426f ,0.0053955005f ,0.116406f });
  }
}
private class MFVec2f324 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1822f ,0.0458f ,0.1809f ,0.0434f ,0.1953f ,0.0282f ,0.1948f ,0.024f ,0.1933f ,0.0293f ,0.1816f ,0.0411f ,0.1287f ,0.0243f ,0.0943f ,0.0785f ,0.1866f ,0.0487f ,0.186f ,0.0472f ,0.1969f ,0.0343f ,0.1963f ,0.0328f ,0.1973f ,0.0341f ,0.1322f ,0.09f ,0.157f ,0.0552f ,0.1873f ,0.048f ,0.186f ,0.0472f ,0.1866f ,0.0487f ,0.1969f ,0.0343f ,0.1963f ,0.0328f ,0.1973f ,0.0341f ,0.157f ,0.0552f ,0.1822f ,0.0458f ,0.1809f ,0.0434f ,0.1816f ,0.0411f ,0.0943f ,0.0785f ,0.1948f ,0.024f ,0.1953f ,0.0282f });
  }
}
private class MFFloat325 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat326 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,6,7,-1,7,3,0,-1,1,8,6,-1,6,0,1,-1,9,8,1,-1,1,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,3,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1});
  }
}
private class MFInt32328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,8,9,-1,9,3,0,-1,1,10,8,-1,8,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,3,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1});
  }
}
private class MFVec3f329 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.111879006f ,0.0039284998f ,0.11950425f ,-0.118908f ,0.0039284998f ,0.117828004f ,-0.119619004f ,0.009729f ,0.1197315f ,-0.11150775f ,0.009729f ,0.12130425f ,-0.118937254f ,0.0136395f ,0.11825775f ,-0.112056755f ,0.013979251f ,0.119880006f ,-0.10879876f ,0.002007f ,0.11502676f ,-0.10770751f ,0.01045125f ,0.1155555f ,-0.12019725f ,0.002007f ,0.112495504f ,-0.121414505f ,0.01045125f ,0.1125945f ,-0.12057526f ,0.0161415f ,0.11211976f ,-0.108733505f ,0.016731f ,0.115150504f ,-0.1092735f ,0.0103815f ,0.11088675f ,-0.11000925f ,0.0045045f ,0.11042325f ,-0.11711925f ,0.0045045f ,0.1088595f ,-0.1180035f ,0.01044f ,0.10905075f ,-0.11746576f ,0.01369575f ,0.108524255f ,-0.109865256f ,0.01407375f ,0.11059875f });
  }
}
private class MFVec2f330 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1831f ,0.0355f ,0.1904f ,0.0263f ,0.1901f ,0.0243f ,0.1819f ,0.0351f ,0.1913f ,0.0249f ,0.182f ,0.0368f ,0.088f ,0.0133f ,0.0677f ,0.0461f ,0.1822f ,0.0458f ,0.1809f ,0.0434f ,0.1953f ,0.0282f ,0.1948f ,0.024f ,0.1933f ,0.0293f ,0.0943f ,0.0785f ,0.1287f ,0.0243f ,0.1816f ,0.0411f ,0.1809f ,0.0434f ,0.1822f ,0.0458f ,0.1953f ,0.0282f ,0.1948f ,0.024f ,0.1933f ,0.0293f ,0.1287f ,0.0243f });
  }
}
private class MFFloat331 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat332 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32333 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,23,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1});
  }
}
private class MFInt32334 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,11,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1});
  }
}
private class MFVec3f335 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.127881f ,0.0019034995f ,0.060480006f ,-0.13378051f ,0.0111555f ,0.0672075f ,-0.13063501f ,0.02536425f ,0.06975f ,-0.12757051f ,0.0033592496f ,0.043177504f ,-0.13146976f ,0.0111555f ,0.043735504f ,-0.12761776f ,0.028089f ,0.044631f ,-0.12857176f ,0.003951f ,0.0798975f ,-0.132228f ,0.0111555f ,0.078975f ,-0.1301265f ,0.0223695f ,0.0799425f ,-0.12939526f ,0.0267255f ,0.05832f ,-0.13262627f ,0.0111555f ,0.055467002f ,-0.11369926f ,0.0019034995f ,0.0701775f ,-0.11579851f ,0.029121751f ,0.0746325f ,-0.11379601f ,0.0352845f ,0.04789125f ,-0.116097756f ,0.0046395003f ,0.084240004f ,-0.11536876f ,0.0248625f ,0.08520751f ,-0.11280826f ,0.00240075f ,0.046271253f ,-0.115173005f ,0.032123253f ,0.061290003f ,-0.12420676f ,0.0040207496f ,0.032674503f ,-0.12783825f ,0.01134675f ,0.030892503f ,-0.12440926f ,0.02955825f ,0.032807253f ,-0.11145151f ,0.0029159999f ,0.0362115f ,-0.11218276f ,0.039987f ,0.036567003f ,-0.10836451f ,0.0063179997f ,0.07029001f ,-0.10752076f ,0.006804f ,0.046894502f ,-0.10669276f ,0.00711225f ,0.040896002f ,-0.107201256f ,0.03394125f ,0.041157003f ,-0.108072005f ,0.03146625f ,0.0471105f ,-0.109437756f ,0.028230751f ,0.060862504f ,-0.110083506f ,0.025299f ,0.07384501f ,-0.10951876f ,0.022286251f ,0.081360005f ,-0.11039176f ,0.0083385f ,0.080685005f ,-0.10880776f ,0.0056047495f ,0.029313002f ,-0.119628005f ,0.0065272497f ,0.026716502f ,-0.12220426f ,0.01184175f ,0.025238251f ,-0.11912851f ,0.02826675f ,0.027020251f ,-0.10880776f ,0.0369135f ,0.02950875f ,-0.10590976f ,0.032908503f ,0.03295125f ,-0.10545076f ,0.008603999f ,0.032715f ,-0.12906902f ,0.01053225f ,0.083160006f ,-0.12663001f ,0.00623025f ,0.083745f ,-0.11627326f ,0.00673875f ,0.0879525f ,-0.11214901f ,0.00911025f ,0.08547751f ,-0.11147851f ,0.01848375f ,0.086017504f ,-0.11516176f ,0.01997325f ,0.088672504f ,-0.12748276f ,0.01809225f ,0.08385751f });
  }
}
private class MFVec2f336 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2299f ,0.0317f ,0.2316f ,0.0247f ,0.2265f ,0.0269f ,0.241f ,0.0419f ,0.244f ,0.0359f ,0.2401f ,0.0413f ,0.2245f ,0.0286f ,0.226f ,0.0221f ,0.2232f ,0.0245f ,0.2333f ,0.0341f ,0.2378f ,0.0303f ,0.2142f ,0.0508f ,0.2117f ,0.0481f ,0.2254f ,0.0615f ,0.2102f ,0.0461f ,0.2083f ,0.0443f ,0.2202f ,0.0585f ,0.2186f ,0.0548f ,0.2469f ,0.052f ,0.2512f ,0.047f ,0.2484f ,0.051f ,0.2292f ,0.0691f ,0.2342f ,0.0682f ,0.2142f ,0.0508f ,0.2202f ,0.0585f ,0.2292f ,0.0691f ,0.2342f ,0.0682f ,0.2254f ,0.0615f ,0.2186f ,0.0548f ,0.2117f ,0.0481f ,0.2083f ,0.0443f ,0.2102f ,0.0461f ,0.2292f ,0.0691f ,0.2469f ,0.052f ,0.2512f ,0.047f ,0.2484f ,0.051f ,0.2342f ,0.0682f ,0.2342f ,0.0682f ,0.2292f ,0.0691f ,0.226f ,0.0221f ,0.2245f ,0.0286f ,0.2102f ,0.0461f ,0.2102f ,0.0461f ,0.2083f ,0.0443f ,0.2083f ,0.0443f ,0.2232f ,0.0245f });
  }
}
private class MFFloat337 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat338 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32339 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,11,-1,11,10,2,-1,0,5,14,-1,14,12,0,-1,2,10,13,-1,13,6,2,-1,0,12,11,-1,11,3,0,-1,15,5,0,-1,0,16,15,-1,17,3,2,-1,2,1,17,-1,16,0,3,-1,3,17,16,-1,2,6,4,-1,4,1,2,-1,6,8,4,-1,7,15,18,-1,18,9,7,-1,8,9,18,-1,18,4,8,-1,7,5,15,-1,1,19,20,-1,20,17,1,-1,17,20,21,-1,21,16,17,-1,16,21,22,-1,22,15,16,-1,22,23,18,-1,18,15,22,-1,23,24,4,-1,4,18,23,-1,24,19,1,-1,1,4,24,-1,25,26,27,-1,25,27,28,-1,29,25,28,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,19,24,20,-1,30,31,32,-1,32,33,30,-1,33,34,35,-1,35,36,30,-1,33,35,30,-1,10,11,26,-1,26,25,10,-1,11,12,27,-1,27,26,11,-1,12,14,28,-1,28,27,12,-1,14,13,29,-1,29,28,14,-1,13,10,25,-1,25,29,13,-1,6,13,31,-1,31,30,6,-1,13,14,32,-1,32,31,13,-1,14,5,33,-1,33,32,14,-1,5,7,34,-1,34,33,5,-1,7,9,35,-1,35,34,7,-1,9,8,36,-1,36,35,9,-1,8,6,30,-1,30,36,8,-1});
  }
}
private class MFInt32340 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,24,-1,24,23,0,-1,3,2,27,-1,27,25,3,-1,0,23,26,-1,26,4,0,-1,3,25,24,-1,24,1,3,-1,5,8,7,-1,7,6,5,-1,9,12,11,-1,11,10,9,-1,6,7,14,-1,14,13,6,-1,11,15,17,-1,17,10,11,-1,15,18,17,-1,16,5,20,-1,20,19,16,-1,18,21,22,-1,22,17,18,-1,16,8,5,-1,31,34,35,-1,35,30,31,-1,30,35,36,-1,36,29,30,-1,29,36,37,-1,37,28,29,-1,37,38,33,-1,33,28,37,-1,38,39,32,-1,32,33,38,-1,39,34,31,-1,31,32,39,-1,40,41,42,-1,40,42,43,-1,44,40,43,-1,39,38,37,-1,37,36,35,-1,39,37,35,-1,34,39,35,-1,45,46,47,-1,47,48,45,-1,48,49,50,-1,50,51,45,-1,48,50,45,-1,23,24,41,-1,41,40,23,-1,24,25,42,-1,42,41,24,-1,25,27,43,-1,43,42,25,-1,27,26,44,-1,44,43,27,-1,26,23,40,-1,40,44,26,-1,4,26,46,-1,46,45,4,-1,26,27,47,-1,47,46,26,-1,27,2,48,-1,48,47,27,-1,8,16,49,-1,49,48,8,-1,16,19,50,-1,50,49,16,-1,21,18,51,-1,51,50,21,-1,18,15,45,-1,45,51,18,-1});
  }
}
private class MFVec3f341 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.12984976f ,0.01971675f ,0.08492625f ,-0.12866177f ,0.0027854997f ,0.0904005f ,-0.12870225f ,0.004560749f ,0.084375f ,-0.13128302f ,0.0111555f ,0.08475075f ,-0.11957851f ,0.0051187496f ,0.09297675f ,-0.11643526f ,0.022428f ,0.08836425f ,-0.11643526f ,0.005796f ,0.0883935f ,-0.11740726f ,0.021591f ,0.09355275f ,-0.11743651f ,0.005037749f ,0.093672f ,-0.11773801f ,0.01245375f ,0.094644f ,-0.12857851f ,0.003950999f ,0.079893f ,-0.13223477f ,0.0111555f ,0.078966f ,-0.13013326f ,0.0223695f ,0.07994025f ,-0.116104506f ,0.0046395f ,0.084240004f ,-0.11537551f ,0.0248625f ,0.08520075f ,-0.11949301f ,0.0218115f ,0.09299475f ,-0.12936376f ,0.020173501f ,0.090387f ,-0.13070926f ,0.01167975f ,0.09101475f ,-0.11876851f ,0.012645f ,0.09455625f ,-0.12944026f ,0.0024795f ,0.09323325f ,-0.13130552f ,0.01068975f ,0.09340875f ,-0.1301355f ,0.01865025f ,0.0932085f ,-0.11980351f ,0.0200115f ,0.09551475f ,-0.11916001f ,0.011421f ,0.096588f ,-0.12037051f ,0.0042232494f ,0.095445f ,-0.12534301f ,0.0070357495f ,0.07542225f ,-0.12773477f ,0.01173825f ,0.07483275f ,-0.12616651f ,0.020061001f ,0.07553475f ,-0.11683126f ,0.021676501f ,0.0787635f ,-0.11733751f ,0.00749025f ,0.07807725f ,-0.11246401f ,0.00808875f ,0.08762175f ,-0.11255626f ,0.00744975f ,0.0851355f ,-0.11199601f ,0.021055501f ,0.085788004f ,-0.11243926f ,0.02005425f ,0.08721f ,-0.11313001f ,0.0194265f ,0.091368005f ,-0.11348776f ,0.01260225f ,0.0921915f ,-0.11326051f ,0.00756225f ,0.09153675f });
  }
}
private class MFVec2f342 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2192f ,0.0256f ,0.2205f ,0.0195f ,0.2048f ,0.0404f ,0.2199f ,0.022f ,0.2063f ,0.0414f ,0.2047f ,0.0523f ,0.1956f ,0.0462f ,0.1979f ,0.0386f ,0.2109f ,0.0476f ,0.277f ,0.1031f ,0.2673f ,0.0987f ,0.263f ,0.1f ,0.2744f ,0.109f ,0.1892f ,0.0439f ,0.1911f ,0.0375f ,0.2576f ,0.0911f ,0.2083f ,0.0537f ,0.263f ,0.0893f ,0.2612f ,0.0869f ,0.2047f ,0.0593f ,0.2048f ,0.0593f ,0.2671f ,0.0842f ,0.2673f ,0.0839f ,0.2245f ,0.0286f ,0.226f ,0.0221f ,0.2232f ,0.0245f ,0.2102f ,0.0461f ,0.2083f ,0.0443f ,0.2039f ,0.0358f ,0.2152f ,0.0224f ,0.2154f ,0.0203f ,0.2126f ,0.0258f ,0.2034f ,0.0366f ,0.2033f ,0.0375f ,0.2114f ,0.0219f ,0.2132f ,0.0168f ,0.2123f ,0.0196f ,0.1999f ,0.0356f ,0.201f ,0.0349f ,0.2011f ,0.0354f ,0.2245f ,0.0286f ,0.226f ,0.0221f ,0.2232f ,0.0245f ,0.2083f ,0.0443f ,0.2102f ,0.0461f ,0.2576f ,0.0911f ,0.2102f ,0.0461f ,0.2083f ,0.0443f ,0.2048f ,0.0404f ,0.2083f ,0.0537f ,0.2047f ,0.0593f ,0.2612f ,0.0869f });
  }
}
private class MFFloat343 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat344 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32345 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,0,1,-1,1,7,6,-1,7,1,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,0,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1});
  }
}
private class MFInt32346 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,1,0,-1,0,7,6,-1,7,0,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,1,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1});
  }
}
private class MFVec3f347 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.131418f ,0.001701f ,0.10044675f ,-0.132984f ,0.007893f ,0.1001745f ,-0.132093f ,0.014760001f ,0.10041075f ,-0.12078676f ,0.015426001f ,0.10263825f ,-0.11997225f ,0.0078097503f ,0.103133254f ,-0.12173625f ,0.0018089998f ,0.10235926f ,-0.12943125f ,0.0024795f ,0.09323326f ,-0.1312965f ,0.01068975f ,0.093408756f ,-0.13012426f ,0.01865025f ,0.09320851f ,-0.1197945f ,0.0200115f ,0.09551475f ,-0.11914875f ,0.0114187505f ,0.096588f ,-0.1203615f ,0.0042232494f ,0.09544501f ,-0.1268865f ,0.0051682503f ,0.090396f ,-0.12820725f ,0.0107797505f ,0.090704255f ,-0.127323f ,0.01658025f ,0.09043425f ,-0.120982505f ,0.01741275f ,0.0917505f ,-0.120609f ,0.011531251f ,0.09275851f ,-0.121455f ,0.0062100003f ,0.0917055f ,-0.1303425f ,0.00807525f ,0.104184f ,-0.12957975f ,0.0050759995f ,0.104303256f ,-0.12486825f ,0.00513f ,0.105151504f ,-0.124029f ,0.00811125f ,0.10570726f ,-0.12439125f ,0.0118642505f ,0.10528875f ,-0.1298925f ,0.01154025f ,0.104305506f });
  }
}
private class MFVec2f348 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2109f ,0.0133f ,0.2102f ,0.0181f ,0.2093f ,0.0169f ,0.1959f ,0.0354f ,0.1986f ,0.0324f ,0.1989f ,0.0342f ,0.2114f ,0.0219f ,0.2132f ,0.0168f ,0.2123f ,0.0196f ,0.1999f ,0.0356f ,0.201f ,0.0349f ,0.2011f ,0.0354f ,0.2114f ,0.0219f ,0.2132f ,0.0168f ,0.2123f ,0.0196f ,0.1999f ,0.0356f ,0.201f ,0.0349f ,0.2011f ,0.0354f ,0.2109f ,0.0133f ,0.2102f ,0.0181f ,0.1989f ,0.0342f ,0.1986f ,0.0324f ,0.1959f ,0.0354f ,0.2093f ,0.0169f });
  }
}
private class MFFloat349 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat350 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32351 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,4,-1,4,3,2,-1,0,5,4,-1,4,1,0,-1,7,6,0,-1,0,1,7,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,10,9,3,-1,3,4,10,-1,5,11,10,-1,10,4,5,-1,0,6,11,-1,11,5,0,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1});
  }
}
private class MFInt32352 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,9,8,5,-1,5,0,9,-1,1,10,9,-1,9,0,1,-1,12,11,7,-1,7,6,12,-1,14,13,2,-1,2,3,14,-1,4,15,14,-1,14,3,4,-1,5,8,15,-1,15,4,5,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,11,12,19,-1,19,18,11,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,8,16,-1,16,21,15,-1});
  }
}
private class MFVec3f353 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.12972376f ,0.001818f ,0.10640925f ,-0.1318095f ,0.0076590003f ,0.1083915f ,-0.1307025f ,0.01277325f ,0.107160755f ,-0.124227f ,0.01313775f ,0.10856475f ,-0.12432825f ,0.00782325f ,0.109813504f ,-0.12410325f ,0.001818f ,0.10743525f ,-0.131436f ,0.001701f ,0.10045125f ,-0.133002f ,0.007893001f ,0.100179f ,-0.13211325f ,0.014760001f ,0.10041525f ,-0.12080475f ,0.015426001f ,0.10264275f ,-0.11999025f ,0.0078097503f ,0.103137754f ,-0.12175425f ,0.0018090005f ,0.10236375f ,-0.12864825f ,0.0042705005f ,0.09676125f ,-0.12961125f ,0.0080685f ,0.0966015f ,-0.129051f ,0.012384f ,0.09675225f ,-0.1220985f ,0.012793501f ,0.09804825f ,-0.12162375f ,0.00807525f ,0.098487005f ,-0.12269475f ,0.004338f ,0.097875f });
  }
}
private class MFVec2f354 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2048f ,0.0135f ,0.2053f ,0.0142f ,0.1964f ,0.026f ,0.1976f ,0.0232f ,0.1977f ,0.0271f ,0.2052f ,0.017f ,0.0639f ,0.0523f ,0.0903f ,0.0107f ,0.2102f ,0.0181f ,0.2109f ,0.0133f ,0.2093f ,0.0169f ,0.1317f ,0.0215f ,0.0951f ,0.0836f ,0.1959f ,0.0354f ,0.1986f ,0.0324f ,0.1989f ,0.0342f ,0.2102f ,0.0181f ,0.2109f ,0.0133f ,0.2093f ,0.0169f ,0.0951f ,0.0836f ,0.1986f ,0.0324f ,0.1989f ,0.0342f });
  }
}
private class MFFloat355 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat356 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32357 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,10,11,-1,11,5,0,-1,1,0,5,-1,5,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,2,7,26,-1,26,27,2,-1,8,5,11,-1,11,7,8,-1,9,6,5,-1,5,8,9,-1,11,10,13,-1,13,12,11,-1,7,11,12,-1,12,26,7,-1,16,15,14,-1,14,17,16,-1,19,18,15,-1,15,16,19,-1,22,21,20,-1,20,23,22,-1,23,20,24,-1,24,25,23,-1,25,24,18,-1,18,19,25,-1,22,27,26,-1,26,21,22,-1,20,21,14,-1,14,15,20,-1,24,20,15,-1,15,18,24,-1,14,12,13,-1,13,17,14,-1,21,26,12,-1,12,14,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,10,0,29,-1,29,28,10,-1,0,1,30,-1,30,29,0,-1,1,4,31,-1,31,30,1,-1,4,3,32,-1,32,31,4,-1,3,2,33,-1,33,32,3,-1,2,27,34,-1,34,33,2,-1,27,22,35,-1,35,34,27,-1,22,23,36,-1,36,35,22,-1,23,25,37,-1,37,36,23,-1,25,19,38,-1,38,37,25,-1,19,16,39,-1,39,38,19,-1,16,17,40,-1,40,39,16,-1,17,13,41,-1,41,40,17,-1,13,10,28,-1,28,41,13,-1});
  }
}
private class MFInt32358 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,4,3,9,-1,9,10,4,-1,3,5,11,-1,11,9,3,-1,5,2,8,-1,8,11,5,-1,12,13,15,-1,15,14,12,-1,9,7,6,-1,6,10,9,-1,11,8,7,-1,7,9,11,-1,6,0,17,-1,17,18,6,-1,10,6,18,-1,18,16,10,-1,21,20,19,-1,19,22,21,-1,24,23,20,-1,20,21,24,-1,27,26,25,-1,25,28,27,-1,28,25,29,-1,29,30,28,-1,30,29,23,-1,23,24,30,-1,31,34,33,-1,33,32,31,-1,25,26,19,-1,19,20,25,-1,29,25,20,-1,20,23,29,-1,19,35,36,-1,36,22,19,-1,26,37,35,-1,35,19,26,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,43,46,50,-1,39,43,50,-1,39,50,51,-1,39,51,38,-1,0,1,39,-1,39,38,0,-1,1,2,40,-1,40,39,1,-1,2,5,41,-1,41,40,2,-1,5,3,42,-1,42,41,5,-1,3,4,43,-1,43,42,3,-1,12,14,44,-1,44,43,12,-1,34,31,45,-1,45,44,34,-1,27,28,46,-1,46,45,27,-1,28,30,47,-1,47,46,28,-1,30,24,48,-1,48,47,30,-1,24,21,49,-1,49,48,24,-1,21,22,50,-1,50,49,21,-1,22,36,51,-1,51,50,22,-1,17,0,38,-1,38,51,17,-1});
  }
}
private class MFVec3f359 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.094005f ,0.95049006f ,0.06973425f ,0.1296f ,0.9513001f ,0.02570175f ,0.0342f ,0.9469688f ,-0.10191825f ,0.088875f ,0.94718707f ,-0.076223254f ,0.11945251f ,0.9495451f ,-0.035806503f ,0.0852525f ,0.9263161f ,0.053039253f ,0.116235f ,0.9270293f ,0.018749252f ,0.035842504f ,0.9236296f ,-0.07937325f ,0.081f ,0.9241358f ,-0.06072075f ,0.108922504f ,0.9251933f ,-0.0291555f ,0.036787502f ,0.94979256f ,0.08348175f ,0.035887502f ,0.9254453f ,0.06284925f ,0f ,0.9254453f ,0.06284925f ,0f ,0.94979256f ,0.08348175f ,-0.035887502f ,0.9254453f ,0.06284925f ,-0.0852525f ,0.9263161f ,0.053039253f ,-0.094005f ,0.95049006f ,0.06973425f ,-0.036787502f ,0.94979256f ,0.08348175f ,-0.116235f ,0.9270293f ,0.018749252f ,-0.1296f ,0.9513001f ,0.02570175f ,-0.081f ,0.9241358f ,-0.06072075f ,-0.035842504f ,0.9236296f ,-0.07937325f ,-0.0342f ,0.9469688f ,-0.10191825f ,-0.088875f ,0.94718707f ,-0.076223254f ,-0.108922504f ,0.9251933f ,-0.0291555f ,-0.11945251f ,0.9495451f ,-0.035806503f ,0f ,0.9236296f ,-0.07937325f ,0f ,0.9469688f ,-0.10191825f ,0.0362025f ,0.95856756f ,0.078464255f ,0.091192506f ,0.95856756f ,0.06525675f ,0.12429001f ,0.95856756f ,0.024306752f ,0.114705004f ,0.95856756f ,-0.033772502f ,0.08563501f ,0.95856756f ,-0.07064325f ,0.033075f ,0.95856756f ,-0.095348254f ,0f ,0.95856756f ,-0.095348254f ,-0.033075f ,0.95856756f ,-0.095348254f ,-0.08563501f ,0.95856756f ,-0.07064325f ,-0.114705004f ,0.95856756f ,-0.033772502f ,-0.12429001f ,0.95856756f ,0.024306752f ,-0.091192506f ,0.95856756f ,0.06525675f ,-0.0362025f ,0.95856756f ,0.078464255f ,0f ,0.95856756f ,0.078464255f });
  }
}
private class MFVec2f360 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.019f ,0.2349f ,0.1011f ,0.241f ,0.1445f ,0.2419f ,0.2369f ,0.2375f ,0.3561f ,0.2404f ,0.1927f ,0.24f ,0.0206f ,0.2122f ,0.1067f ,0.2154f ,0.1463f ,0.2162f ,0.227f ,0.2131f ,0.3536f ,0.2151f ,0.1879f ,0.2143f ,0.3553f ,0.2398f ,0.3555f ,0.2151f ,0.3557f ,0.2401f ,0.3545f ,0.2151f ,0.3536f ,0.2151f ,0.019f ,0.2349f ,0.0206f ,0.2122f ,0.0206f ,0.2122f ,0.1067f ,0.2154f ,0.1011f ,0.241f ,0.019f ,0.2349f ,0.1463f ,0.2162f ,0.1445f ,0.2419f ,0.227f ,0.2131f ,0.3536f ,0.2151f ,0.3561f ,0.2404f ,0.2369f ,0.2375f ,0.1879f ,0.2143f ,0.1927f ,0.24f ,0.3553f ,0.2398f ,0.3555f ,0.2151f ,0.3545f ,0.2151f ,0.3557f ,0.2401f ,0.0206f ,0.2122f ,0.019f ,0.2349f ,0.3536f ,0.2151f ,0.019f ,0.2349f ,0.1011f ,0.241f ,0.1445f ,0.2419f ,0.1927f ,0.24f ,0.2369f ,0.2375f ,0.3561f ,0.2404f ,0.3557f ,0.2401f ,0.3553f ,0.2398f ,0.2369f ,0.2375f ,0.1927f ,0.24f ,0.1445f ,0.2419f ,0.1011f ,0.241f ,0.019f ,0.2349f ,0.019f ,0.2349f });
  }
}
private class MFFloat361 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat362 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32363 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,6,0,-1,0,3,11,-1,7,1,0,-1,0,6,7,-1,9,8,2,-1,2,4,9,-1,10,9,4,-1,4,5,10,-1,10,5,1,-1,1,7,10,-1,25,11,3,-1,3,26,25,-1,2,8,12,-1,12,27,2,-1,13,16,15,-1,15,14,13,-1,17,14,15,-1,15,18,17,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,23,17,18,-1,18,24,23,-1,25,26,16,-1,16,13,25,-1,21,27,12,-1,12,20,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,2,33,-1,33,32,4,-1,2,27,34,-1,34,33,2,-1,27,21,35,-1,35,34,27,-1,21,22,36,-1,36,35,21,-1,22,24,37,-1,37,36,22,-1,24,18,38,-1,38,37,24,-1,18,15,39,-1,39,38,18,-1,15,16,40,-1,40,39,15,-1,16,26,41,-1,41,40,16,-1,26,3,28,-1,28,41,26,-1,6,11,43,-1,43,42,6,-1,11,25,44,-1,44,43,11,-1,25,13,45,-1,45,44,25,-1,13,14,46,-1,46,45,13,-1,14,17,47,-1,47,46,14,-1,17,23,48,-1,48,47,17,-1,23,19,49,-1,49,48,23,-1,19,20,50,-1,50,49,19,-1,20,12,51,-1,51,50,20,-1,12,8,52,-1,52,51,12,-1,8,9,53,-1,53,52,8,-1,9,10,54,-1,54,53,9,-1,10,7,55,-1,55,54,10,-1,7,6,42,-1,42,55,7,-1});
  }
}
private class MFInt32364 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,9,0,-1,0,4,15,-1,10,1,0,-1,0,9,10,-1,13,12,2,-1,2,5,13,-1,14,13,5,-1,5,6,14,-1,14,6,1,-1,1,10,14,-1,17,15,4,-1,4,7,17,-1,3,11,16,-1,16,8,3,-1,18,21,20,-1,20,19,18,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,29,27,-1,27,24,28,-1,28,22,23,-1,23,29,28,-1,30,31,21,-1,21,18,30,-1,32,35,34,-1,34,33,32,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,2,41,-1,41,40,5,-1,3,8,42,-1,42,41,3,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,7,4,36,-1,36,49,7,-1,9,15,51,-1,51,50,9,-1,15,17,52,-1,52,51,15,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,16,11,60,-1,60,59,16,-1,12,13,61,-1,61,60,12,-1,13,14,62,-1,62,61,13,-1,14,10,63,-1,63,62,14,-1,10,9,50,-1,50,63,10,-1});
  }
}
private class MFVec3f365 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.090585f ,0.96652126f ,0.061949253f ,0.12501001f ,0.966924f ,0.022574252f ,0.0324675f ,0.9647618f ,-0.09190576f ,0.0341775f ,0.96617705f ,0.07441425f ,0.086175f ,0.9648698f ,-0.06807826f ,0.11583f ,0.96605325f ,-0.0327195f ,0.094005f ,0.950463f ,0.06973425f ,0.1296f ,0.95127076f ,0.02570175f ,0.0342f ,0.946944f ,-0.10191825f ,0.088875f ,0.94716454f ,-0.076223254f ,0.11945251f ,0.9495293f ,-0.035806503f ,0.036787502f ,0.94977677f ,0.08348175f ,0f ,0.946944f ,-0.10191825f ,-0.036787502f ,0.94977677f ,0.08348175f ,-0.094005f ,0.950463f ,0.06973425f ,-0.090585f ,0.96652126f ,0.061949253f ,-0.0341775f ,0.96617705f ,0.07441425f ,-0.1296f ,0.95127076f ,0.02570175f ,-0.12501001f ,0.966924f ,0.022574252f ,-0.088875f ,0.94716454f ,-0.076223254f ,-0.0342f ,0.946944f ,-0.10191825f ,-0.0324675f ,0.9647618f ,-0.09190576f ,-0.086175f ,0.9648698f ,-0.06807826f ,-0.11945251f ,0.9495293f ,-0.035806503f ,-0.11583f ,0.96605325f ,-0.0327195f ,0f ,0.94977677f ,0.08348175f ,0f ,0.96617705f ,0.07441425f ,0f ,0.9647618f ,-0.09190576f ,0.033592504f ,0.9735975f ,0.06894676f ,0.08763751f ,0.9735975f ,0.05699925f ,0.119182505f ,0.9735975f ,0.020909252f ,0.11065501f ,0.9735975f ,-0.0303435f ,0.08280001f ,0.9735975f ,-0.063578255f ,0.031320002f ,0.9735975f ,-0.08643825f ,0f ,0.9735975f ,-0.08643825f ,-0.031320002f ,0.9735975f ,-0.08643825f ,-0.08280001f ,0.9735975f ,-0.063578255f ,-0.11065501f ,0.9735975f ,-0.0303435f ,-0.119182505f ,0.9735975f ,0.020909252f ,-0.08763751f ,0.9735975f ,0.05699925f ,-0.033592504f ,0.9735975f ,0.06894676f ,0f ,0.9735975f ,0.06894676f ,0.08678251f ,0.9393525f ,0.061589252f ,0.0344925f ,0.9393525f ,0.07414425f ,0f ,0.9393525f ,0.07414425f ,-0.0344925f ,0.9393525f ,0.07414425f ,-0.08678251f ,0.9393525f ,0.061589252f ,-0.1181475f ,0.9393525f ,0.022776749f ,-0.10905751f ,0.9393525f ,-0.032334752f ,-0.0814275f ,0.9393525f ,-0.06884325f ,-0.031455003f ,0.9393525f ,-0.09233326f ,0f ,0.9393525f ,-0.09233326f ,0.031455003f ,0.9393525f ,-0.09233326f ,0.0814275f ,0.9393525f ,-0.06884325f ,0.10905751f ,0.9393525f ,-0.032334752f ,0.1181475f ,0.9393525f ,0.022776749f });
  }
}
private class MFVec2f366 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1026f ,0.2616f ,0.1481f ,0.2604f ,0.3503f ,0.2575f ,0.3578f ,0.2568f ,0.0179f ,0.2574f ,0.2289f ,0.2559f ,0.1884f ,0.2584f ,0.0186f ,0.2582f ,0.3542f ,0.2515f ,0.1011f ,0.241f ,0.1445f ,0.2419f ,0.3553f ,0.2398f ,0.3561f ,0.2404f ,0.2369f ,0.2375f ,0.1927f ,0.24f ,0.019f ,0.2349f ,0.3557f ,0.2401f ,0.019f ,0.2349f ,0.019f ,0.2349f ,0.1011f ,0.241f ,0.1026f ,0.2616f ,0.0179f ,0.2574f ,0.1445f ,0.2419f ,0.1481f ,0.2604f ,0.2369f ,0.2375f ,0.3561f ,0.2404f ,0.3503f ,0.2575f ,0.2289f ,0.2559f ,0.1927f ,0.24f ,0.1884f ,0.2584f ,0.019f ,0.2349f ,0.0186f ,0.2582f ,0.3578f ,0.2568f ,0.3553f ,0.2398f ,0.3557f ,0.2401f ,0.3542f ,0.2515f ,0.0179f ,0.2574f ,0.1026f ,0.2616f ,0.1481f ,0.2604f ,0.1884f ,0.2584f ,0.2289f ,0.2559f ,0.3503f ,0.2575f ,0.3542f ,0.2515f ,0.3578f ,0.2568f ,0.2289f ,0.2559f ,0.1884f ,0.2584f ,0.1481f ,0.2604f ,0.1026f ,0.2616f ,0.0179f ,0.2574f ,0.0186f ,0.2582f ,0.1011f ,0.241f ,0.019f ,0.2349f ,0.019f ,0.2349f ,0.019f ,0.2349f ,0.1011f ,0.241f ,0.1445f ,0.2419f ,0.1927f ,0.24f ,0.2369f ,0.2375f ,0.3561f ,0.2404f ,0.3557f ,0.2401f ,0.3553f ,0.2398f ,0.2369f ,0.2375f ,0.1927f ,0.24f ,0.1445f ,0.2419f });
  }
}
private class MFFloat367 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat368 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32369 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,8,15,-1,15,16,1,-1,0,4,9,-1,9,6,0,-1,7,5,0,-1,0,6,7,-1,1,2,10,-1,10,8,1,-1,2,3,11,-1,11,10,2,-1,11,3,5,-1,5,7,11,-1,4,27,12,-1,12,9,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,17,18,-1,18,22,21,-1,13,14,24,-1,24,23,13,-1,23,24,26,-1,26,25,23,-1,26,21,22,-1,22,25,26,-1,19,20,12,-1,12,27,19,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,4,0,29,-1,29,28,4,-1,0,5,30,-1,30,29,0,-1,5,3,31,-1,31,30,5,-1,3,2,32,-1,32,31,3,-1,2,1,33,-1,33,32,2,-1,1,16,34,-1,34,33,1,-1,16,13,35,-1,35,34,16,-1,13,23,36,-1,36,35,13,-1,23,25,37,-1,37,36,23,-1,25,22,38,-1,38,37,25,-1,22,18,39,-1,39,38,22,-1,18,19,40,-1,40,39,18,-1,19,27,41,-1,41,40,19,-1,27,4,28,-1,28,41,27,-1,6,9,43,-1,43,42,6,-1,9,12,44,-1,44,43,9,-1,12,20,45,-1,45,44,12,-1,20,17,46,-1,46,45,20,-1,17,21,47,-1,47,46,17,-1,21,26,48,-1,48,47,21,-1,26,24,49,-1,49,48,26,-1,24,14,50,-1,50,49,24,-1,14,15,51,-1,51,50,14,-1,15,8,52,-1,52,51,15,-1,8,10,53,-1,53,52,8,-1,10,11,54,-1,54,53,10,-1,11,7,55,-1,55,54,11,-1,7,6,42,-1,42,55,7,-1});
  }
}
private class MFInt32370 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,11,17,-1,17,7,4,-1,0,1,13,-1,13,9,0,-1,10,2,0,-1,0,9,10,-1,3,5,14,-1,14,12,3,-1,5,6,15,-1,15,14,5,-1,15,6,2,-1,2,10,15,-1,1,8,16,-1,16,13,1,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,1,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,16,52,-1,52,51,13,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,17,11,60,-1,60,59,17,-1,12,14,61,-1,61,60,12,-1,14,15,62,-1,62,61,14,-1,15,10,63,-1,63,62,15,-1,10,9,50,-1,50,63,10,-1});
  }
}
private class MFVec3f371 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.087165006f ,0.98242205f ,0.05418675f ,0.030757502f ,0.98242205f ,-0.08189326f ,0.083475f ,0.98242205f ,-0.059910756f ,0.1122075f ,0.98242205f ,-0.029634751f ,0.031590004f ,0.98242205f ,0.06536925f ,0.12044251f ,0.98242205f ,0.019424252f ,0.090585f ,0.96636605f ,0.061949253f ,0.12501001f ,0.9667688f ,0.022574252f ,0.0324675f ,0.9646065f ,-0.09190576f ,0.0341775f ,0.9660218f ,0.07441425f ,0.086175f ,0.9647145f ,-0.06807826f ,0.11583f ,0.96589804f ,-0.0327195f ,0f ,0.9660218f ,0.07441425f ,-0.030757502f ,0.98242205f ,-0.08189326f ,-0.0324675f ,0.9646065f ,-0.09190576f ,0f ,0.9646065f ,-0.09190576f ,0f ,0.98242205f ,-0.08189326f ,-0.090585f ,0.96636605f ,0.061949253f ,-0.087165006f ,0.98242205f ,0.05418675f ,-0.031590004f ,0.98242205f ,0.06536925f ,-0.0341775f ,0.9660218f ,0.07441425f ,-0.12501001f ,0.9667688f ,0.022574252f ,-0.12044251f ,0.98242205f ,0.019424252f ,-0.083475f ,0.98242205f ,-0.059910756f ,-0.086175f ,0.9647145f ,-0.06807826f ,-0.1122075f ,0.98242205f ,-0.029634751f ,-0.11583f ,0.96589804f ,-0.0327195f ,0f ,0.98242205f ,0.06536925f ,0.030735003f ,0.99094504f ,0.060171753f ,0.083835006f ,0.99094504f ,0.049484253f ,0.114255f ,0.99094504f ,0.01769175f ,0.106695004f ,0.99094504f ,-0.027328502f ,0.079875f ,0.99094504f ,-0.055613253f ,0.0294975f ,0.99094504f ,-0.07662825f ,0f ,0.99094504f ,-0.07662825f ,-0.0294975f ,0.99094504f ,-0.07662825f ,-0.079875f ,0.99094504f ,-0.055613253f ,-0.106695004f ,0.99094504f ,-0.027328502f ,-0.114255f ,0.99094504f ,0.01769175f ,-0.083835006f ,0.99094504f ,0.049484253f ,-0.030735003f ,0.99094504f ,0.060171753f ,0f ,0.99094504f ,0.060171753f ,0.087075f ,0.9582503f ,0.057179254f ,0.033255003f ,0.9582503f ,0.06908175f ,0f ,0.9582503f ,0.06908175f ,-0.033255003f ,0.9582503f ,0.06908175f ,-0.087075f ,0.9582503f ,0.057179254f ,-0.11880001f ,0.9582503f ,0.02088675f ,-0.11025f ,0.9582503f ,-0.030516751f ,-0.0823725f ,0.9582503f ,-0.06373575f ,-0.03114f ,0.9582503f ,-0.086505756f ,0f ,0.9582503f ,-0.086505756f ,0.03114f ,0.9582503f ,-0.086505756f ,0.0823725f ,0.9582503f ,-0.06373575f ,0.11025f ,0.9582503f ,-0.030516751f ,0.11880001f ,0.9582503f ,0.02088675f });
  }
}
private class MFVec2f372 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1041f ,0.2822f ,0.0168f ,0.2798f ,0.1518f ,0.2789f ,0.3444f ,0.2746f ,0.3604f ,0.2737f ,0.221f ,0.2742f ,0.1842f ,0.2768f ,0.3527f ,0.263f ,0.0181f ,0.2816f ,0.1026f ,0.2616f ,0.1481f ,0.2604f ,0.3578f ,0.2568f ,0.3503f ,0.2575f ,0.0179f ,0.2574f ,0.2289f ,0.2559f ,0.1884f ,0.2584f ,0.0186f ,0.2582f ,0.3542f ,0.2515f ,0.3604f ,0.2737f ,0.3578f ,0.2568f ,0.3542f ,0.2515f ,0.3527f ,0.263f ,0.1026f ,0.2616f ,0.1041f ,0.2822f ,0.0168f ,0.2798f ,0.0179f ,0.2574f ,0.1481f ,0.2604f ,0.1518f ,0.2789f ,0.3503f ,0.2575f ,0.3444f ,0.2746f ,0.221f ,0.2742f ,0.2289f ,0.2559f ,0.1842f ,0.2768f ,0.1884f ,0.2584f ,0.0181f ,0.2816f ,0.0186f ,0.2582f ,0.0168f ,0.2798f ,0.1041f ,0.2822f ,0.1518f ,0.2789f ,0.1842f ,0.2768f ,0.221f ,0.2742f ,0.3444f ,0.2746f ,0.3527f ,0.263f ,0.3604f ,0.2737f ,0.221f ,0.2742f ,0.1842f ,0.2768f ,0.1518f ,0.2789f ,0.1041f ,0.2822f ,0.0168f ,0.2798f ,0.0181f ,0.2816f ,0.1026f ,0.2616f ,0.0179f ,0.2574f ,0.0186f ,0.2582f ,0.0179f ,0.2574f ,0.1026f ,0.2616f ,0.1481f ,0.2604f ,0.1884f ,0.2584f ,0.2289f ,0.2559f ,0.3503f ,0.2575f ,0.3542f ,0.2515f ,0.3578f ,0.2568f ,0.2289f ,0.2559f ,0.1884f ,0.2584f ,0.1481f ,0.2604f });
  }
}
private class MFFloat373 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat374 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32375 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,7,14,-1,14,15,3,-1,0,5,10,-1,10,6,0,-1,11,2,0,-1,0,6,11,-1,3,4,8,-1,8,7,3,-1,4,1,9,-1,9,8,4,-1,9,1,2,-1,2,11,9,-1,5,26,27,-1,27,10,5,-1,12,15,14,-1,14,13,12,-1,17,16,19,-1,19,18,17,-1,20,16,17,-1,17,21,20,-1,12,13,23,-1,23,22,12,-1,22,23,25,-1,25,24,22,-1,25,20,21,-1,21,24,25,-1,18,19,27,-1,27,26,18,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,5,0,29,-1,29,28,5,-1,0,2,30,-1,30,29,0,-1,2,1,31,-1,31,30,2,-1,1,4,32,-1,32,31,1,-1,4,3,33,-1,33,32,4,-1,3,15,34,-1,34,33,3,-1,15,12,35,-1,35,34,15,-1,12,22,36,-1,36,35,12,-1,22,24,37,-1,37,36,22,-1,24,21,38,-1,38,37,24,-1,21,17,39,-1,39,38,21,-1,17,18,40,-1,40,39,17,-1,18,26,41,-1,41,40,18,-1,26,5,28,-1,28,41,26,-1,6,10,43,-1,43,42,6,-1,10,27,44,-1,44,43,10,-1,27,19,45,-1,45,44,27,-1,19,16,46,-1,46,45,19,-1,16,20,47,-1,47,46,16,-1,20,25,48,-1,48,47,20,-1,25,23,49,-1,49,48,25,-1,23,13,50,-1,50,49,23,-1,13,14,51,-1,51,50,13,-1,14,7,52,-1,52,51,14,-1,7,8,53,-1,53,52,7,-1,8,9,54,-1,54,53,8,-1,9,11,55,-1,55,54,9,-1,11,6,42,-1,42,55,11,-1});
  }
}
private class MFInt32376 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,10,16,-1,16,7,6,-1,1,0,14,-1,14,9,1,-1,15,2,1,-1,1,9,15,-1,4,3,12,-1,12,11,4,-1,3,5,13,-1,13,12,3,-1,13,5,2,-1,2,15,13,-1,0,8,17,-1,17,14,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,0,1,37,-1,37,36,0,-1,1,2,38,-1,38,37,1,-1,2,5,39,-1,39,38,2,-1,5,3,40,-1,40,39,5,-1,3,4,41,-1,41,40,3,-1,6,7,42,-1,42,41,6,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,0,36,-1,36,49,8,-1,9,14,51,-1,51,50,9,-1,14,17,52,-1,52,51,14,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,16,10,60,-1,60,59,16,-1,11,12,61,-1,61,60,11,-1,12,13,62,-1,62,61,12,-1,13,15,63,-1,63,62,13,-1,15,9,50,-1,50,63,15,-1});
  }
}
private class MFVec3f377 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.083475f ,0.9998325f ,0.045816753f ,0.108405f ,0.9998325f ,-0.026397001f ,0.11538f ,0.9998325f ,0.01595925f ,0.0290925f ,0.9998325f ,-0.07215075f ,0.0808425f ,0.9998325f ,-0.051923253f ,0.028822502f ,0.9998325f ,0.055806752f ,0.087165006f ,0.9824918f ,0.05418675f ,0.030757502f ,0.9824918f ,-0.08189326f ,0.083475f ,0.9824918f ,-0.059910756f ,0.1122075f ,0.9824918f ,-0.029634751f ,0.031590004f ,0.9824918f ,0.06536925f ,0.12044251f ,0.9824918f ,0.019424252f ,-0.0290925f ,0.9998325f ,-0.07215075f ,-0.030757502f ,0.9824918f ,-0.08189326f ,0f ,0.9824918f ,-0.08189326f ,0f ,0.9998325f ,-0.07215075f ,-0.087165006f ,0.9824918f ,0.05418675f ,-0.083475f ,0.9998325f ,0.045816753f ,-0.028822502f ,0.9998325f ,0.055806752f ,-0.031590004f ,0.9824918f ,0.06536925f ,-0.12044251f ,0.9824918f ,0.019424252f ,-0.11538f ,0.9998325f ,0.01595925f ,-0.0808425f ,0.9998325f ,-0.051923253f ,-0.083475f ,0.9824918f ,-0.059910756f ,-0.108405f ,0.9998325f ,-0.026397001f ,-0.1122075f ,0.9824918f ,-0.029634751f ,0f ,0.9998325f ,0.055806752f ,0f ,0.9824918f ,0.06536925f ,0.028372502f ,1.0100476f ,0.05085675f ,0.081135005f ,1.0100476f ,0.04118175f ,0.1100475f ,1.0100476f ,0.014159252f ,0.10377f ,1.0100476f ,-0.023910752f ,0.0781425f ,1.0100476f ,-0.04764825f ,0.028147502f ,1.0100476f ,-0.06720075f ,0f ,1.0100476f ,-0.06720075f ,-0.028147502f ,1.0100476f ,-0.06720075f ,-0.0781425f ,1.0100476f ,-0.04764825f ,-0.10377f ,1.0100476f ,-0.023910752f ,-0.1100475f ,1.0100476f ,0.014159252f ,-0.081135005f ,1.0100476f ,0.04118175f ,-0.028372502f ,1.0100476f ,0.05085675f ,0f ,1.0100476f ,0.05085675f ,0.086692505f ,0.9739463f ,0.050969254f ,0.0318375f ,0.9739463f ,0.061994255f ,0f ,0.9739463f ,0.061994255f ,-0.0318375f ,0.9739463f ,0.061994255f ,-0.086692505f ,0.9739463f ,0.050969254f ,-0.1179f ,0.9739463f ,0.01836675f ,-0.11013751f ,0.9739463f ,-0.02783475f ,-0.08253f ,0.9739463f ,-0.056940753f ,-0.030465001f ,0.9739463f ,-0.07865325f ,0f ,0.9739463f ,-0.07865325f ,0.030465001f ,0.9739463f ,-0.07865325f ,0.08253f ,0.9739463f ,-0.056940753f ,0.11013751f ,0.9739463f ,-0.02783475f ,0.1179f ,0.9739463f ,0.01836675f });
  }
}
private class MFVec2f378 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0177f ,0.3051f ,0.0982f ,0.302f ,0.1487f ,0.2975f ,0.2175f ,0.2944f ,0.3621f ,0.2922f ,0.1849f ,0.2961f ,0.3633f ,0.2922f ,0.3627f ,0.2922f ,0.0177f ,0.3051f ,0.1055f ,0.2814f ,0.3697f ,0.2711f ,0.3605f ,0.2757f ,0.2204f ,0.275f ,0.1853f ,0.2768f ,0.024f ,0.2813f ,0.1448f ,0.2785f ,0.3603f ,0.2745f ,0.0155f ,0.2778f ,0.3633f ,0.2922f ,0.3697f ,0.2711f ,0.3603f ,0.2745f ,0.3627f ,0.2922f ,0.1055f ,0.2814f ,0.0982f ,0.302f ,0.0177f ,0.3051f ,0.024f ,0.2813f ,0.1448f ,0.2785f ,0.1487f ,0.2975f ,0.3605f ,0.2757f ,0.3621f ,0.2922f ,0.2175f ,0.2944f ,0.2204f ,0.275f ,0.1849f ,0.2961f ,0.1853f ,0.2768f ,0.0177f ,0.3051f ,0.0155f ,0.2778f ,0.0177f ,0.3051f ,0.0982f ,0.302f ,0.1487f ,0.2975f ,0.1849f ,0.2961f ,0.2175f ,0.2944f ,0.3621f ,0.2922f ,0.3627f ,0.2922f ,0.3633f ,0.2922f ,0.2175f ,0.2944f ,0.1849f ,0.2961f ,0.1487f ,0.2975f ,0.0982f ,0.302f ,0.0177f ,0.3051f ,0.0177f ,0.3051f ,0.1055f ,0.2814f ,0.024f ,0.2813f ,0.0155f ,0.2778f ,0.024f ,0.2813f ,0.1055f ,0.2814f ,0.1448f ,0.2785f ,0.1853f ,0.2768f ,0.2204f ,0.275f ,0.3605f ,0.2757f ,0.3603f ,0.2745f ,0.3697f ,0.2711f ,0.2204f ,0.275f ,0.1853f ,0.2768f ,0.1448f ,0.2785f });
  }
}
private class MFFloat379 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat380 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32381 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,0,1,-1,1,14,7,-1,11,2,0,-1,0,7,11,-1,13,12,3,-1,3,4,13,-1,8,5,2,-1,2,11,8,-1,14,1,6,-1,6,9,14,-1,8,13,4,-1,4,5,8,-1,12,10,27,-1,27,3,12,-1,16,15,18,-1,18,17,16,-1,19,16,17,-1,17,20,19,-1,21,24,23,-1,23,22,21,-1,25,19,20,-1,20,26,25,-1,15,9,6,-1,6,18,15,-1,25,26,24,-1,24,21,25,-1,22,23,27,-1,27,10,22,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,1,0,29,-1,29,28,1,-1,0,2,30,-1,30,29,0,-1,2,5,31,-1,31,30,2,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,27,34,-1,34,33,3,-1,27,23,35,-1,35,34,27,-1,23,24,36,-1,36,35,23,-1,24,26,37,-1,37,36,24,-1,26,20,38,-1,38,37,26,-1,20,17,39,-1,39,38,20,-1,17,18,40,-1,40,39,17,-1,18,6,41,-1,41,40,18,-1,6,1,28,-1,28,41,6,-1,7,14,43,-1,43,42,7,-1,14,9,44,-1,44,43,14,-1,9,15,45,-1,45,44,9,-1,15,16,46,-1,46,45,15,-1,16,19,47,-1,47,46,16,-1,19,25,48,-1,48,47,19,-1,25,21,49,-1,49,48,25,-1,21,22,50,-1,50,49,21,-1,22,10,51,-1,51,50,22,-1,10,12,52,-1,52,51,10,-1,12,13,53,-1,53,52,12,-1,13,8,54,-1,54,53,13,-1,8,11,55,-1,55,54,8,-1,11,7,42,-1,42,55,11,-1});
  }
}
private class MFInt32382 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,17,9,-1,13,2,0,-1,0,9,13,-1,16,15,3,-1,3,5,16,-1,10,6,2,-1,2,13,10,-1,17,1,8,-1,8,11,17,-1,10,16,5,-1,5,6,10,-1,14,12,7,-1,7,4,14,-1,19,18,21,-1,21,20,19,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,22,23,-1,23,29,28,-1,18,30,31,-1,31,21,18,-1,28,29,27,-1,27,24,28,-1,33,32,35,-1,35,34,33,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,8,1,36,-1,36,49,8,-1,9,17,51,-1,51,50,9,-1,17,11,52,-1,52,51,17,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,12,14,60,-1,60,59,12,-1,15,16,61,-1,61,60,15,-1,16,10,62,-1,62,61,16,-1,10,13,63,-1,63,62,10,-1,13,9,50,-1,50,63,13,-1});
  }
}
private class MFVec3f383 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.083295f ,1.023435f ,0.044466753f ,0.028935002f ,1.023435f ,0.05463675f ,0.11484001f ,1.023435f ,0.015351751f ,0.030667502f ,1.023435f ,-0.070665754f ,0.080730006f ,1.023435f ,-0.051698253f ,0.1081125f ,1.023435f ,-0.025589252f ,0f ,1.023435f ,0.05463675f ,0.083475f ,0.99996305f ,0.045816753f ,0.108405f ,0.99996305f ,-0.026397001f ,0f ,0.99996305f ,0.055806752f ,0f ,0.99996305f ,-0.07215075f ,0.11538f ,0.99996305f ,0.01595925f ,0.0290925f ,0.99996305f ,-0.07215075f ,0.0808425f ,0.99996305f ,-0.051923253f ,0.028822502f ,0.99996305f ,0.055806752f ,-0.028822502f ,0.99996305f ,0.055806752f ,-0.083475f ,0.99996305f ,0.045816753f ,-0.083295f ,1.023435f ,0.044466753f ,-0.028935002f ,1.023435f ,0.05463675f ,-0.11538f ,0.99996305f ,0.01595925f ,-0.11484001f ,1.023435f ,0.015351751f ,-0.0808425f ,0.99996305f ,-0.051923253f ,-0.0290925f ,0.99996305f ,-0.07215075f ,-0.030667502f ,1.023435f ,-0.070665754f ,-0.080730006f ,1.023435f ,-0.051698253f ,-0.108405f ,0.99996305f ,-0.026397001f ,-0.1081125f ,1.023435f ,-0.025589252f ,0f ,1.023435f ,-0.070665754f ,0.028485002f ,1.0334251f ,0.049686752f ,0.0809775f ,1.0334251f ,0.03985425f ,0.10950751f ,1.0334251f ,0.013506751f ,0.1035f ,1.0334251f ,-0.023143502f ,0.078052506f ,1.0334251f ,-0.047423255f ,0.0297675f ,1.0334251f ,-0.06569325f ,0f ,1.0334251f ,-0.06571575f ,-0.0297675f ,1.0334251f ,-0.06569325f ,-0.078052506f ,1.0334251f ,-0.047423255f ,-0.1035f ,1.0334251f ,-0.023143502f ,-0.10950751f ,1.0334251f ,0.013506751f ,-0.0809775f ,1.0334251f ,0.03985425f ,-0.028485002f ,1.0334251f ,0.049686752f ,0f ,1.0334251f ,0.049686752f ,0.081135005f ,0.9914355f ,0.04118175f ,0.028372502f ,0.9914355f ,0.05085675f ,0f ,0.9914355f ,0.05085675f ,-0.028372502f ,0.9914355f ,0.05085675f ,-0.081135005f ,0.9914355f ,0.04118175f ,-0.1100475f ,0.9914355f ,0.014159252f ,-0.10377f ,0.9914355f ,-0.023910752f ,-0.0781425f ,0.9914355f ,-0.04764825f ,-0.028147502f ,0.9914355f ,-0.06720075f ,0f ,0.9914355f ,-0.06720075f ,0.028147502f ,0.9914355f ,-0.06720075f ,0.0781425f ,0.9914355f ,-0.04764825f ,0.10377f ,0.9914355f ,-0.023910752f ,0.1100475f ,0.9914355f ,0.014159252f });
  }
}
private class MFVec2f384 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0943f ,0.3233f ,0.0192f ,0.3251f ,0.1489f ,0.3212f ,0.3615f ,0.3195f ,0.3631f ,0.318f ,0.2175f ,0.3185f ,0.1844f ,0.32f ,0.3623f ,0.3188f ,0.0192f ,0.3251f ,0.0982f ,0.302f ,0.1849f ,0.2961f ,0.0177f ,0.3051f ,0.3627f ,0.2922f ,0.1487f ,0.2975f ,0.3633f ,0.2922f ,0.3621f ,0.2922f ,0.2175f ,0.2944f ,0.0177f ,0.3051f ,0.0177f ,0.3051f ,0.0982f ,0.302f ,0.0943f ,0.3233f ,0.0192f ,0.3251f ,0.1487f ,0.2975f ,0.1489f ,0.3212f ,0.2175f ,0.2944f ,0.3621f ,0.2922f ,0.3615f ,0.3195f ,0.2175f ,0.3185f ,0.1849f ,0.2961f ,0.1844f ,0.32f ,0.0177f ,0.3051f ,0.0192f ,0.3251f ,0.3631f ,0.318f ,0.3633f ,0.2922f ,0.3627f ,0.2922f ,0.3623f ,0.3188f ,0.0192f ,0.3251f ,0.0943f ,0.3233f ,0.1489f ,0.3212f ,0.1844f ,0.32f ,0.2175f ,0.3185f ,0.3615f ,0.3195f ,0.3623f ,0.3188f ,0.3631f ,0.318f ,0.2175f ,0.3185f ,0.1844f ,0.32f ,0.1489f ,0.3212f ,0.0943f ,0.3233f ,0.0192f ,0.3251f ,0.0192f ,0.3251f ,0.0982f ,0.302f ,0.0177f ,0.3051f ,0.0177f ,0.3051f ,0.0177f ,0.3051f ,0.0982f ,0.302f ,0.1487f ,0.2975f ,0.1849f ,0.2961f ,0.2175f ,0.2944f ,0.3621f ,0.2922f ,0.3627f ,0.2922f ,0.3633f ,0.2922f ,0.2175f ,0.2944f ,0.1849f ,0.2961f ,0.1487f ,0.2975f });
  }
}
private class MFFloat385 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat386 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32387 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,11,-1,11,10,4,-1,17,3,9,-1,9,20,17,-1,6,0,2,-1,2,7,6,-1,8,1,0,-1,0,6,8,-1,3,4,10,-1,10,9,3,-1,5,1,8,-1,8,11,5,-1,2,27,12,-1,12,7,2,-1,13,16,15,-1,15,14,13,-1,17,20,19,-1,19,18,17,-1,21,24,23,-1,23,22,21,-1,25,21,22,-1,22,26,25,-1,18,19,16,-1,16,13,18,-1,14,15,25,-1,25,26,14,-1,23,24,12,-1,12,27,23,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,2,0,29,-1,29,28,2,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,17,34,-1,34,33,3,-1,17,18,35,-1,35,34,17,-1,18,13,36,-1,36,35,18,-1,13,14,37,-1,37,36,13,-1,14,26,38,-1,38,37,14,-1,26,22,39,-1,39,38,26,-1,22,23,40,-1,40,39,22,-1,23,27,41,-1,41,40,23,-1,27,2,28,-1,28,41,27,-1,6,7,43,-1,43,42,6,-1,7,12,44,-1,44,43,7,-1,12,24,45,-1,45,44,12,-1,24,21,46,-1,46,45,24,-1,21,25,47,-1,47,46,21,-1,25,15,48,-1,48,47,25,-1,15,16,49,-1,49,48,15,-1,16,19,50,-1,50,49,16,-1,19,20,51,-1,51,50,19,-1,20,9,52,-1,52,51,20,-1,9,10,53,-1,53,52,9,-1,10,11,54,-1,54,53,10,-1,11,8,55,-1,55,54,11,-1,8,6,42,-1,42,55,8,-1});
  }
}
private class MFInt32388 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,15,-1,15,14,5,-1,7,4,12,-1,12,16,7,-1,9,0,2,-1,2,10,9,-1,11,1,0,-1,0,9,11,-1,3,5,14,-1,14,13,3,-1,6,1,11,-1,11,15,6,-1,2,8,17,-1,17,10,2,-1,18,21,20,-1,20,19,18,-1,22,25,24,-1,24,23,22,-1,26,29,28,-1,28,27,26,-1,30,26,27,-1,27,31,30,-1,33,32,21,-1,21,18,33,-1,19,20,30,-1,30,31,19,-1,28,29,35,-1,35,34,28,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,2,0,37,-1,37,36,2,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,22,23,43,-1,43,42,22,-1,33,18,44,-1,44,43,33,-1,18,19,45,-1,45,44,18,-1,19,31,46,-1,46,45,19,-1,31,27,47,-1,47,46,31,-1,27,28,48,-1,48,47,27,-1,28,34,49,-1,49,48,28,-1,8,2,36,-1,36,49,8,-1,9,10,51,-1,51,50,9,-1,10,17,52,-1,52,51,10,-1,35,29,53,-1,53,52,35,-1,29,26,54,-1,54,53,29,-1,26,30,55,-1,55,54,26,-1,30,20,56,-1,56,55,30,-1,20,21,57,-1,57,56,20,-1,21,32,58,-1,58,57,21,-1,24,25,59,-1,59,58,24,-1,16,12,60,-1,60,59,16,-1,13,14,61,-1,61,60,13,-1,14,15,62,-1,62,61,14,-1,15,11,63,-1,63,62,15,-1,11,9,50,-1,50,63,11,-1});
  }
}
private class MFVec3f389 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.083137505f ,1.0467901f ,0.043139253f ,0.1143225f ,1.0467901f ,0.014721751f ,0.029070003f ,1.0467901f ,0.05346675f ,0.032265f ,1.0467901f ,-0.06918076f ,0.08064f ,1.0467901f ,-0.051495753f ,0.10784251f ,1.0467901f ,-0.0247815f ,0.083295f ,1.0233091f ,0.044466753f ,0.028935002f ,1.0233091f ,0.05463675f ,0.11484001f ,1.0233091f ,0.015351751f ,0.030667502f ,1.0233091f ,-0.070665754f ,0.080730006f ,1.0233091f ,-0.051698253f ,0.1081125f ,1.0233091f ,-0.025589252f ,0f ,1.0233091f ,0.05463675f ,-0.08064f ,1.0467901f ,-0.051495753f ,-0.10784251f ,1.0467901f ,-0.0247815f ,-0.1081125f ,1.0233091f ,-0.025589252f ,-0.080730006f ,1.0233091f ,-0.051698253f ,0f ,1.0467901f ,-0.06920325f ,-0.032265f ,1.0467901f ,-0.06918076f ,-0.030667502f ,1.0233091f ,-0.070665754f ,0f ,1.0233091f ,-0.070665754f ,-0.083295f ,1.0233091f ,0.044466753f ,-0.083137505f ,1.0467901f ,0.043139253f ,-0.029070003f ,1.0467901f ,0.05346675f ,-0.028935002f ,1.0233091f ,0.05463675f ,-0.11484001f ,1.0233091f ,0.015351751f ,-0.1143225f ,1.0467901f ,0.014721751f ,0f ,1.0467901f ,0.05346675f ,0.028710002f ,1.0557451f ,0.04975425f ,0.08140501f ,1.0557451f ,0.039674252f ,0.11034f ,1.0557451f ,0.01332675f ,0.1043775f ,1.0557451f ,-0.02297925f ,0.078615f ,1.0557451f ,-0.048278254f ,0.0316125f ,1.0557451f ,-0.06546825f ,0f ,1.0557451f ,-0.06546825f ,-0.0316125f ,1.0557451f ,-0.06546825f ,-0.078615f ,1.0557451f ,-0.048278254f ,-0.1043775f ,1.0557451f ,-0.02297925f ,-0.11034f ,1.0557451f ,0.01332675f ,-0.08140501f ,1.0557451f ,0.039674252f ,-0.028710002f ,1.0557451f ,0.04975425f ,0f ,1.0557451f ,0.04975425f ,0.081562504f ,1.0125315f ,0.04102425f ,0.028597502f ,1.0125315f ,0.050924253f ,0f ,1.0125315f ,0.050924253f ,-0.028597502f ,1.0125315f ,0.050924253f ,-0.081562504f ,1.0125315f ,0.04102425f ,-0.11085751f ,1.0125315f ,0.0139792515f ,-0.1046475f ,1.0125315f ,-0.023757752f ,-0.078727506f ,1.0125315f ,-0.048503254f ,-0.0299925f ,1.0125315f ,-0.06695326f ,0f ,1.0125315f ,-0.06695326f ,0.0299925f ,1.0125315f ,-0.06695326f ,0.078727506f ,1.0125315f ,-0.048503254f ,0.1046475f ,1.0125315f ,-0.023757752f ,0.11085751f ,1.0125315f ,0.0139792515f });
  }
}
private class MFVec2f390 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0903f ,0.3446f ,0.1491f ,0.3449f ,0.0206f ,0.3452f ,0.3608f ,0.3469f ,0.3629f ,0.3439f ,0.2175f ,0.3427f ,0.1838f ,0.3438f ,0.3619f ,0.3454f ,0.0206f ,0.3452f ,0.0943f ,0.3233f ,0.0192f ,0.3251f ,0.1489f ,0.3212f ,0.3631f ,0.318f ,0.3615f ,0.3195f ,0.2175f ,0.3185f ,0.1844f ,0.32f ,0.3623f ,0.3188f ,0.0192f ,0.3251f ,0.2175f ,0.3427f ,0.1838f ,0.3438f ,0.1844f ,0.32f ,0.2175f ,0.3185f ,0.3619f ,0.3454f ,0.3629f ,0.3439f ,0.3631f ,0.318f ,0.3623f ,0.3188f ,0.0943f ,0.3233f ,0.0903f ,0.3446f ,0.0206f ,0.3452f ,0.0192f ,0.3251f ,0.1489f ,0.3212f ,0.1491f ,0.3449f ,0.3615f ,0.3195f ,0.3608f ,0.3469f ,0.0206f ,0.3452f ,0.0192f ,0.3251f ,0.0206f ,0.3452f ,0.0903f ,0.3446f ,0.1491f ,0.3449f ,0.1838f ,0.3438f ,0.2175f ,0.3427f ,0.3608f ,0.3469f ,0.3619f ,0.3454f ,0.3629f ,0.3439f ,0.2175f ,0.3427f ,0.1838f ,0.3438f ,0.1491f ,0.3449f ,0.0903f ,0.3446f ,0.0206f ,0.3452f ,0.0206f ,0.3452f ,0.0943f ,0.3233f ,0.0192f ,0.3251f ,0.0192f ,0.3251f ,0.0192f ,0.3251f ,0.0943f ,0.3233f ,0.1489f ,0.3212f ,0.1844f ,0.32f ,0.2175f ,0.3185f ,0.3615f ,0.3195f ,0.3623f ,0.3188f ,0.3631f ,0.318f ,0.2175f ,0.3185f ,0.1844f ,0.32f ,0.1489f ,0.3212f });
  }
}
private class MFFloat391 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat392 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32393 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,10,-1,10,12,4,-1,5,4,12,-1,12,13,5,-1,5,13,9,-1,9,1,5,-1,6,11,14,-1,14,7,6,-1,7,2,0,-1,0,6,7,-1,11,6,0,-1,0,8,11,-1,3,28,29,-1,29,10,3,-1,8,0,1,-1,1,9,8,-1,15,18,17,-1,17,16,15,-1,19,20,18,-1,18,15,19,-1,19,21,22,-1,22,20,19,-1,23,7,14,-1,14,24,23,-1,7,23,25,-1,25,26,7,-1,24,27,25,-1,25,23,24,-1,16,17,29,-1,29,28,16,-1,27,22,21,-1,21,25,27,-1,32,33,34,-1,31,32,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,34,38,42,-1,31,34,42,-1,31,42,43,-1,31,43,30,-1,45,46,47,-1,47,48,49,-1,49,50,51,-1,47,49,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,47,51,55,-1,55,56,57,-1,47,55,57,-1,45,47,57,-1,45,57,44,-1,0,2,31,-1,31,30,0,-1,2,7,32,-1,32,31,2,-1,7,26,33,-1,33,32,7,-1,26,25,34,-1,34,33,26,-1,25,21,35,-1,35,34,25,-1,21,19,36,-1,36,35,21,-1,19,15,37,-1,37,36,19,-1,15,16,38,-1,38,37,15,-1,16,28,39,-1,39,38,16,-1,28,3,40,-1,40,39,28,-1,3,4,41,-1,41,40,3,-1,4,5,42,-1,42,41,4,-1,5,1,43,-1,43,42,5,-1,1,0,30,-1,30,43,1,-1,12,10,45,-1,45,44,12,-1,10,29,46,-1,46,45,10,-1,29,17,47,-1,47,46,29,-1,17,18,48,-1,48,47,17,-1,18,20,49,-1,49,48,18,-1,20,22,50,-1,50,49,20,-1,22,27,51,-1,51,50,22,-1,27,24,52,-1,52,51,27,-1,24,14,53,-1,53,52,24,-1,14,11,54,-1,54,53,14,-1,11,8,55,-1,55,54,11,-1,8,9,56,-1,56,55,8,-1,9,13,57,-1,57,56,9,-1,13,12,44,-1,44,57,13,-1});
  }
}
private class MFInt32394 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,5,14,-1,14,16,6,-1,7,6,16,-1,16,17,7,-1,7,17,12,-1,12,3,7,-1,8,15,18,-1,18,10,8,-1,10,0,1,-1,1,8,10,-1,15,8,2,-1,2,11,15,-1,4,9,19,-1,19,13,4,-1,11,2,3,-1,3,12,11,-1,20,23,22,-1,22,21,20,-1,24,25,23,-1,23,20,24,-1,24,26,27,-1,27,25,24,-1,29,28,31,-1,31,30,29,-1,28,29,32,-1,32,33,28,-1,30,35,34,-1,34,29,30,-1,37,36,39,-1,39,38,37,-1,35,27,26,-1,26,34,35,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,44,48,52,-1,41,44,52,-1,41,52,53,-1,41,53,40,-1,55,56,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,61,62,63,-1,63,64,65,-1,61,63,65,-1,57,61,65,-1,65,66,67,-1,57,65,67,-1,55,57,67,-1,55,67,54,-1,1,0,41,-1,41,40,1,-1,0,10,42,-1,42,41,0,-1,28,33,43,-1,43,42,28,-1,33,32,44,-1,44,43,33,-1,34,26,45,-1,45,44,34,-1,26,24,46,-1,46,45,26,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,37,38,49,-1,49,48,37,-1,9,4,50,-1,50,49,9,-1,5,6,51,-1,51,50,5,-1,6,7,52,-1,52,51,6,-1,7,3,53,-1,53,52,7,-1,3,2,40,-1,40,53,3,-1,16,14,55,-1,55,54,16,-1,13,19,56,-1,56,55,13,-1,39,36,57,-1,57,56,39,-1,22,23,58,-1,58,57,22,-1,23,25,59,-1,59,58,23,-1,25,27,60,-1,60,59,25,-1,27,35,61,-1,61,60,27,-1,35,30,62,-1,62,61,35,-1,30,31,63,-1,63,62,30,-1,18,15,64,-1,64,63,18,-1,15,11,65,-1,65,64,15,-1,11,12,66,-1,66,65,11,-1,12,17,67,-1,67,66,12,-1,17,16,54,-1,54,67,17,-1});
  }
}
private class MFVec3f395 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.083137505f ,1.0469205f ,0.043139253f ,0.1143225f ,1.0469205f ,0.014721751f ,0.029070003f ,1.0469205f ,0.05346675f ,0.032265f ,1.0469205f ,-0.06918076f ,0.08064f ,1.0469205f ,-0.051495753f ,0.10784251f ,1.0469205f ,-0.0247815f ,0.029070003f ,1.0469205f ,0.05346675f ,0f ,1.0469205f ,0.05346675f ,0.08685f ,1.0641601f ,0.052296754f ,0.12062251f ,1.0641601f ,0.014946751f ,0.035730004f ,1.0641601f ,-0.06996825f ,0.030600002f ,1.0641601f ,0.05805675f ,0.08442f ,1.0641601f ,-0.053723253f ,0.111825f ,1.0641601f ,-0.027346501f ,0f ,1.0641601f ,0.05805675f ,-0.08064f ,1.0469205f ,-0.051495753f ,-0.032265f ,1.0469205f ,-0.06918076f ,-0.035730004f ,1.0641601f ,-0.06996825f ,-0.08442f ,1.0641601f ,-0.053723253f ,-0.10784251f ,1.0469205f ,-0.0247815f ,-0.111825f ,1.0641601f ,-0.027346501f ,-0.1143225f ,1.0469205f ,0.014721751f ,-0.12062251f ,1.0641601f ,0.014946751f ,-0.029070003f ,1.0469205f ,0.05346675f ,-0.030600002f ,1.0641601f ,0.05805675f ,-0.083137505f ,1.0469205f ,0.043139253f ,-0.029070003f ,1.0469205f ,0.05346675f ,-0.08685f ,1.0641601f ,0.052296754f ,0f ,1.0469205f ,-0.06920325f ,0f ,1.0641601f ,-0.07014825f ,0.0809775f ,1.0359653f ,0.038841754f ,0.02862f ,1.0359653f ,0.04885425f ,0f ,1.0359653f ,0.04885425f ,-0.02862f ,1.0359653f ,0.04885425f ,-0.0809775f ,1.0359653f ,0.038841754f ,-0.109372504f ,1.0359653f ,0.012989251f ,-0.10354501f ,1.0359653f ,-0.02254725f ,-0.07812f ,1.0359653f ,-0.04749075f ,-0.031455003f ,1.0359653f ,-0.06456825f ,0f ,1.0359653f ,-0.06459075f ,0.031455003f ,1.0359653f ,-0.06456825f ,0.07812f ,1.0359653f ,-0.04749075f ,0.10354501f ,1.0359653f ,-0.02254725f ,0.109372504f ,1.0359653f ,0.012989251f ,0.0819675f ,1.0714276f ,-0.04967325f ,0.0349875f ,1.0714276f ,-0.06537825f ,0f ,1.0714276f ,-0.065558255f ,-0.0349875f ,1.0714276f ,-0.06537825f ,-0.0819675f ,1.0714276f ,-0.04967325f ,-0.107595004f ,1.0714276f ,-0.025011001f ,-0.11565f ,1.0714276f ,0.01359675f ,-0.0846f ,1.0714276f ,0.04788675f ,-0.030375002f ,1.0714276f ,0.05344425f ,0f ,1.0714276f ,0.05344425f ,0.030375002f ,1.0714276f ,0.05344425f ,0.0846f ,1.0714276f ,0.04788675f ,0.11565f ,1.0714276f ,0.01359675f ,0.107595004f ,1.0714276f ,-0.025011001f });
  }
}
private class MFVec2f396 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0206f ,0.3452f ,0.0903f ,0.3446f ,0.0903f ,0.3446f ,0.1491f ,0.3449f ,0.3629f ,0.3439f ,0.3608f ,0.3469f ,0.2175f ,0.3427f ,0.1838f ,0.3438f ,0.0206f ,0.3452f ,0.3619f ,0.3454f ,0.0206f ,0.3452f ,0.089f ,0.3604f ,0.1508f ,0.3559f ,0.3623f ,0.3532f ,0.3588f ,0.3561f ,0.0232f ,0.3561f ,0.2188f ,0.3538f ,0.1874f ,0.3541f ,0.0232f ,0.3546f ,0.3608f ,0.3537f ,0.2175f ,0.3427f ,0.3608f ,0.3469f ,0.3588f ,0.3561f ,0.2188f ,0.3538f ,0.1838f ,0.3438f ,0.1874f ,0.3541f ,0.1491f ,0.3449f ,0.1508f ,0.3559f ,0.0206f ,0.3452f ,0.0206f ,0.3452f ,0.0232f ,0.3561f ,0.0232f ,0.3546f ,0.0903f ,0.3446f ,0.0206f ,0.3452f ,0.0903f ,0.3446f ,0.089f ,0.3604f ,0.3623f ,0.3532f ,0.3629f ,0.3439f ,0.3619f ,0.3454f ,0.3608f ,0.3537f ,0.0903f ,0.3446f ,0.0206f ,0.3452f ,0.0206f ,0.3452f ,0.0206f ,0.3452f ,0.0903f ,0.3446f ,0.1491f ,0.3449f ,0.1838f ,0.3438f ,0.2175f ,0.3427f ,0.3608f ,0.3469f ,0.3619f ,0.3454f ,0.3629f ,0.3439f ,0.2175f ,0.3427f ,0.1838f ,0.3438f ,0.1491f ,0.3449f ,0.2188f ,0.3538f ,0.3588f ,0.3561f ,0.3608f ,0.3537f ,0.3623f ,0.3532f ,0.2188f ,0.3538f ,0.1874f ,0.3541f ,0.1508f ,0.3559f ,0.089f ,0.3604f ,0.0232f ,0.3561f ,0.0232f ,0.3546f ,0.0232f ,0.3561f ,0.089f ,0.3604f ,0.1508f ,0.3559f ,0.1874f ,0.3541f });
  }
}
private class MFFloat397 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat398 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32399 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,7,4,-1,4,2,11,-1,7,8,5,-1,5,4,7,-1,8,10,1,-1,1,5,8,-1,3,6,12,-1,12,23,3,-1,6,3,0,-1,0,9,6,-1,2,26,27,-1,27,11,2,-1,0,1,10,-1,10,9,0,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,17,18,20,-1,20,19,17,-1,21,23,12,-1,12,22,21,-1,22,25,24,-1,24,21,22,-1,13,14,27,-1,27,26,13,-1,24,25,19,-1,19,20,24,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,2,4,29,-1,29,28,2,-1,4,5,30,-1,30,29,4,-1,5,1,31,-1,31,30,5,-1,1,0,32,-1,32,31,1,-1,0,3,33,-1,33,32,0,-1,3,23,34,-1,34,33,3,-1,23,21,35,-1,35,34,23,-1,21,24,36,-1,36,35,21,-1,24,20,37,-1,37,36,24,-1,20,18,38,-1,38,37,20,-1,18,16,39,-1,39,38,18,-1,16,13,40,-1,40,39,16,-1,13,26,41,-1,41,40,13,-1,26,2,28,-1,28,41,26,-1,6,9,43,-1,43,42,6,-1,9,10,44,-1,44,43,9,-1,10,8,45,-1,45,44,10,-1,8,7,46,-1,46,45,8,-1,7,11,47,-1,47,46,7,-1,11,27,48,-1,48,47,11,-1,27,14,49,-1,49,48,27,-1,14,15,50,-1,50,49,14,-1,15,17,51,-1,51,50,15,-1,17,19,52,-1,52,51,17,-1,19,25,53,-1,53,52,19,-1,25,22,54,-1,54,53,25,-1,22,12,55,-1,55,54,22,-1,12,6,42,-1,42,55,12,-1});
  }
}
private class MFInt32400 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,10,5,-1,5,2,15,-1,10,11,6,-1,6,5,10,-1,11,14,1,-1,1,6,11,-1,4,9,17,-1,17,7,4,-1,9,4,0,-1,0,13,9,-1,3,8,12,-1,12,16,3,-1,0,1,14,-1,14,13,0,-1,19,18,21,-1,21,20,19,-1,20,21,23,-1,23,22,20,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,27,31,30,-1,30,26,27,-1,33,32,35,-1,35,34,33,-1,30,31,24,-1,24,25,30,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,2,5,37,-1,37,36,2,-1,5,6,38,-1,38,37,5,-1,6,1,39,-1,39,38,6,-1,1,0,40,-1,40,39,1,-1,0,4,41,-1,41,40,0,-1,4,7,42,-1,42,41,4,-1,29,26,43,-1,43,42,29,-1,26,30,44,-1,44,43,26,-1,30,25,45,-1,45,44,30,-1,25,23,46,-1,46,45,25,-1,23,21,47,-1,47,46,23,-1,21,18,48,-1,48,47,21,-1,33,34,49,-1,49,48,33,-1,8,3,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,14,52,-1,52,51,13,-1,14,11,53,-1,53,52,14,-1,11,10,54,-1,54,53,11,-1,10,15,55,-1,55,54,10,-1,16,12,56,-1,56,55,16,-1,35,32,57,-1,57,56,35,-1,19,20,58,-1,58,57,19,-1,20,22,59,-1,59,58,20,-1,22,24,60,-1,60,59,22,-1,24,31,61,-1,61,60,24,-1,31,27,62,-1,62,61,31,-1,27,28,63,-1,63,62,27,-1,17,9,50,-1,50,63,17,-1});
  }
}
private class MFVec3f401 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.08685f ,1.0640655f ,0.052274253f ,0.12062251f ,1.0640655f ,0.0149242515f ,0.035730004f ,1.0640655f ,-0.06999075f ,0.030600002f ,1.0640655f ,0.058034252f ,0.08442f ,1.0640655f ,-0.053745754f ,0.111825f ,1.0640655f ,-0.027369f ,0.031905f ,1.0786117f ,0.061859254f ,0.087570004f ,1.0786117f ,-0.055635754f ,0.1152225f ,1.0786117f ,-0.029517751f ,0.0897075f ,1.0786117f ,0.059541754f ,0.1260225f ,1.0786117f ,0.01512675f ,0.0386325f ,1.0786117f ,-0.070665754f ,0f ,1.0786117f ,0.06188175f ,-0.035730004f ,1.0640655f ,-0.06999075f ,-0.0386325f ,1.0786117f ,-0.070665754f ,-0.087570004f ,1.0786117f ,-0.055635754f ,-0.08442f ,1.0640655f ,-0.053745754f ,-0.1152225f ,1.0786117f ,-0.029517751f ,-0.111825f ,1.0640655f ,-0.027369f ,-0.1260225f ,1.0786117f ,0.01512675f ,-0.12062251f ,1.0640655f ,0.0149242515f ,-0.030600002f ,1.0640655f ,0.058034252f ,-0.031905f ,1.0786117f ,0.061859254f ,0f ,1.0640655f ,0.058034252f ,-0.08685f ,1.0640655f ,0.052274253f ,-0.0897075f ,1.0786117f ,0.059541754f ,0f ,1.0640655f ,-0.07017075f ,0f ,1.0786117f ,-0.07100325f ,0.035055f ,1.057059f ,-0.06589575f ,0.082237504f ,1.057059f ,-0.050145753f ,0.108067505f ,1.057059f ,-0.02529225f ,0.11619001f ,1.057059f ,0.013731752f ,0.0848475f ,1.057059f ,0.048359253f ,0.0303975f ,1.057059f ,0.053939253f ,0f ,1.057059f ,0.053939253f ,-0.0303975f ,1.057059f ,0.053939253f ,-0.0848475f ,1.057059f ,0.048359253f ,-0.11619001f ,1.057059f ,0.013731752f ,-0.108067505f ,1.057059f ,-0.02529225f ,-0.082237504f ,1.057059f ,-0.050145753f ,-0.035055f ,1.057059f ,-0.06589575f ,0f ,1.057059f ,-0.06607575f ,0.0318375f ,1.084878f ,0.057764255f ,0.087705f ,1.084878f ,0.05551425f ,0.121545f ,1.084878f ,0.014114251f ,0.11151f ,1.084878f ,-0.02737125f ,0.08545501f ,1.084878f ,-0.05199075f ,0.038002502f ,1.084878f ,-0.06657075f ,0f ,1.084878f ,-0.066908255f ,-0.038002502f ,1.084878f ,-0.06657075f ,-0.08545501f ,1.084878f ,-0.05199075f ,-0.11151f ,1.084878f ,-0.02737125f ,-0.121545f ,1.084878f ,0.014114251f ,-0.087705f ,1.084878f ,0.05551425f ,-0.0318375f ,1.084878f ,0.057764255f ,0f ,1.084878f ,0.057764255f });
  }
}
private class MFVec2f402 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.089f ,0.3604f ,0.1508f ,0.3559f ,0.3588f ,0.3561f ,0.3623f ,0.3532f ,0.0232f ,0.3561f ,0.2188f ,0.3538f ,0.1874f ,0.3541f ,0.0232f ,0.3546f ,0.3608f ,0.3537f ,0.0245f ,0.3617f ,0.2207f ,0.3633f ,0.1922f ,0.3628f ,0.3616f ,0.3609f ,0.0859f ,0.3657f ,0.1489f ,0.3665f ,0.3589f ,0.3648f ,0.3617f ,0.3609f ,0.0254f ,0.3626f ,0.3588f ,0.3561f ,0.3589f ,0.3648f ,0.2207f ,0.3633f ,0.2188f ,0.3538f ,0.1922f ,0.3628f ,0.1874f ,0.3541f ,0.1489f ,0.3665f ,0.1508f ,0.3559f ,0.0232f ,0.3561f ,0.0245f ,0.3617f ,0.0254f ,0.3626f ,0.0232f ,0.3546f ,0.089f ,0.3604f ,0.0859f ,0.3657f ,0.3617f ,0.3609f ,0.3623f ,0.3532f ,0.3608f ,0.3537f ,0.3616f ,0.3609f ,0.3623f ,0.3532f ,0.2188f ,0.3538f ,0.1874f ,0.3541f ,0.1508f ,0.3559f ,0.089f ,0.3604f ,0.0232f ,0.3561f ,0.0232f ,0.3546f ,0.0232f ,0.3561f ,0.089f ,0.3604f ,0.1508f ,0.3559f ,0.1874f ,0.3541f ,0.2188f ,0.3538f ,0.3588f ,0.3561f ,0.3608f ,0.3537f ,0.0245f ,0.3617f ,0.0859f ,0.3657f ,0.1489f ,0.3665f ,0.1922f ,0.3628f ,0.2207f ,0.3633f ,0.3589f ,0.3648f ,0.3616f ,0.3609f ,0.3617f ,0.3609f ,0.2207f ,0.3633f ,0.1922f ,0.3628f ,0.1489f ,0.3665f ,0.0859f ,0.3657f ,0.0245f ,0.3617f ,0.0254f ,0.3626f });
  }
}
private class MFFloat403 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat404 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32405 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,0,3,-1,3,10,7,-1,5,20,21,-1,21,12,5,-1,3,4,11,-1,11,10,3,-1,12,8,1,-1,1,5,12,-1,8,9,2,-1,2,1,8,-1,9,11,4,-1,4,2,9,-1,0,7,13,-1,13,6,0,-1,14,17,16,-1,16,15,14,-1,19,18,21,-1,21,20,19,-1,16,17,23,-1,23,22,16,-1,18,19,25,-1,25,24,18,-1,24,25,27,-1,27,26,24,-1,26,27,22,-1,22,23,26,-1,15,6,13,-1,13,14,15,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,47,48,49,-1,47,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,47,50,54,-1,43,47,54,-1,43,54,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,6,30,-1,30,29,0,-1,6,15,31,-1,31,30,6,-1,15,16,32,-1,32,31,15,-1,16,22,33,-1,33,32,16,-1,22,27,34,-1,34,33,22,-1,27,25,35,-1,35,34,27,-1,25,19,36,-1,36,35,25,-1,19,20,37,-1,37,36,19,-1,20,5,38,-1,38,37,20,-1,5,1,39,-1,39,38,5,-1,1,2,40,-1,40,39,1,-1,2,4,41,-1,41,40,2,-1,4,3,28,-1,28,41,4,-1,8,12,43,-1,43,42,8,-1,12,21,44,-1,44,43,12,-1,21,18,45,-1,45,44,21,-1,18,24,46,-1,46,45,18,-1,24,26,47,-1,47,46,24,-1,26,23,48,-1,48,47,26,-1,23,17,49,-1,49,48,23,-1,17,14,50,-1,50,49,17,-1,14,13,51,-1,51,50,14,-1,13,7,52,-1,52,51,13,-1,7,10,53,-1,53,52,7,-1,10,11,54,-1,54,53,10,-1,11,9,55,-1,55,54,11,-1,9,8,42,-1,42,55,9,-1});
  }
}
private class MFInt32406 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,4,-1,4,12,9,-1,7,3,17,-1,17,15,7,-1,4,5,13,-1,13,12,4,-1,14,10,1,-1,1,6,14,-1,10,11,2,-1,2,1,10,-1,11,13,5,-1,5,2,11,-1,0,9,16,-1,16,8,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,55,56,57,-1,55,57,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,55,58,62,-1,51,55,62,-1,51,62,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,8,38,-1,38,37,0,-1,35,19,39,-1,39,38,35,-1,19,20,40,-1,40,39,19,-1,20,26,41,-1,41,40,20,-1,26,33,42,-1,42,41,26,-1,33,31,43,-1,43,42,33,-1,31,28,44,-1,44,43,31,-1,23,24,45,-1,45,44,23,-1,3,7,46,-1,46,45,3,-1,6,1,47,-1,47,46,6,-1,1,2,48,-1,48,47,1,-1,2,5,49,-1,49,48,2,-1,5,4,36,-1,36,49,5,-1,10,14,51,-1,51,50,10,-1,15,17,52,-1,52,51,15,-1,25,22,53,-1,53,52,25,-1,29,30,54,-1,54,53,29,-1,30,32,55,-1,55,54,30,-1,32,27,56,-1,56,55,32,-1,27,21,57,-1,57,56,27,-1,21,18,58,-1,58,57,21,-1,18,34,59,-1,59,58,18,-1,16,9,60,-1,60,59,16,-1,9,12,61,-1,61,60,9,-1,12,13,62,-1,62,61,12,-1,13,11,63,-1,63,62,13,-1,11,10,50,-1,50,63,11,-1});
  }
}
private class MFVec3f407 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.031905f ,1.0785578f ,0.06188175f ,0.087570004f ,1.0785578f ,-0.055613253f ,0.1152225f ,1.0785578f ,-0.02949525f ,0.0897075f ,1.0785578f ,0.059564255f ,0.1260225f ,1.0785578f ,0.01514925f ,0.0386325f ,1.0785578f ,-0.07064325f ,0f ,1.0785578f ,0.06190425f ,0.033210002f ,1.093104f ,0.06572925f ,0.090742506f ,1.093104f ,-0.057480752f ,0.1185975f ,1.093104f ,-0.031644f ,0.0925875f ,1.093104f ,0.06683175f ,0.1314f ,1.093104f ,0.01537425f ,0.0415125f ,1.093104f ,-0.071318254f ,0f ,1.093104f ,0.06572925f ,-0.033210002f ,1.093104f ,0.06572925f ,-0.031905f ,1.0785578f ,0.06188175f ,-0.0897075f ,1.0785578f ,0.059564255f ,-0.0925875f ,1.093104f ,0.06683175f ,-0.0415125f ,1.093104f ,-0.071318254f ,-0.0386325f ,1.0785578f ,-0.07064325f ,0f ,1.0785578f ,-0.07098075f ,0f ,1.093104f ,-0.07181325f ,-0.1260225f ,1.0785578f ,0.01514925f ,-0.1314f ,1.093104f ,0.01537425f ,-0.090742506f ,1.093104f ,-0.057480752f ,-0.087570004f ,1.0785578f ,-0.055613253f ,-0.1185975f ,1.093104f ,-0.031644f ,-0.1152225f ,1.0785578f ,-0.02949525f ,0.08763751f ,1.0720396f ,0.05540175f ,0.0318375f ,1.0720396f ,0.057629254f ,0f ,1.0720396f ,0.057629254f ,-0.0318375f ,1.0720396f ,0.057629254f ,-0.08763751f ,1.0720396f ,0.05540175f ,-0.121387504f ,1.0720396f ,0.0141142495f ,-0.111375f ,1.0720396f ,-0.02726775f ,-0.085365005f ,1.0720396f ,-0.051833253f ,-0.03798f ,1.0720396f ,-0.06639075f ,0f ,1.0720396f ,-0.06672826f ,0.03798f ,1.0720396f ,-0.06639075f ,0.085365005f ,1.0720396f ,-0.051833253f ,0.111375f ,1.0720396f ,-0.02726775f ,0.121387504f ,1.0720396f ,0.0141142495f ,0.0885825f ,1.1003491f ,-0.05367825f ,0.040905003f ,1.1003491f ,-0.06706575f ,0f ,1.1003491f ,-0.067560755f ,-0.040905003f ,1.1003491f ,-0.06706575f ,-0.0885825f ,1.1003491f ,-0.05367825f ,-0.11481751f ,1.1003491f ,-0.029351251f ,-0.1267425f ,1.1003491f ,0.01447425f ,-0.090495f ,1.1003491f ,0.06253425f ,-0.033255003f ,1.1003491f ,0.061476756f ,0f ,1.1003491f ,0.061476756f ,0.033255003f ,1.1003491f ,0.061476756f ,0.090495f ,1.1003491f ,0.06253425f ,0.1267425f ,1.1003491f ,0.01447425f ,0.11481751f ,1.1003491f ,-0.029351251f });
  }
}
private class MFVec2f408 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0245f ,0.3617f ,0.2207f ,0.3633f ,0.1922f ,0.3628f ,0.3616f ,0.3609f ,0.0859f ,0.3657f ,0.1489f ,0.3665f ,0.3589f ,0.3648f ,0.3617f ,0.3609f ,0.0254f ,0.3626f ,0.0258f ,0.3672f ,0.2227f ,0.3728f ,0.1969f ,0.3716f ,0.0826f ,0.3711f ,0.1469f ,0.377f ,0.3589f ,0.3735f ,0.3612f ,0.3687f ,0.0276f ,0.3706f ,0.3625f ,0.3682f ,0.0258f ,0.3672f ,0.0245f ,0.3617f ,0.0859f ,0.3657f ,0.0826f ,0.3711f ,0.3612f ,0.3687f ,0.3617f ,0.3609f ,0.3616f ,0.3609f ,0.3625f ,0.3682f ,0.1489f ,0.3665f ,0.1469f ,0.377f ,0.3589f ,0.3648f ,0.3589f ,0.3735f ,0.2227f ,0.3728f ,0.2207f ,0.3633f ,0.1969f ,0.3716f ,0.1922f ,0.3628f ,0.0276f ,0.3706f ,0.0254f ,0.3626f ,0.0859f ,0.3657f ,0.0245f ,0.3617f ,0.0254f ,0.3626f ,0.0245f ,0.3617f ,0.0859f ,0.3657f ,0.1489f ,0.3665f ,0.1922f ,0.3628f ,0.2207f ,0.3633f ,0.3589f ,0.3648f ,0.3616f ,0.3609f ,0.3617f ,0.3609f ,0.2207f ,0.3633f ,0.1922f ,0.3628f ,0.1489f ,0.3665f ,0.2227f ,0.3728f ,0.3589f ,0.3735f ,0.3625f ,0.3682f ,0.3612f ,0.3687f ,0.2227f ,0.3728f ,0.1969f ,0.3716f ,0.1469f ,0.377f ,0.0826f ,0.3711f ,0.0258f ,0.3672f ,0.0276f ,0.3706f ,0.0258f ,0.3672f ,0.0826f ,0.3711f ,0.1469f ,0.377f ,0.1969f ,0.3716f });
  }
}
private class MFFloat409 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat410 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32411 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,0,9,-1,9,3,4,-1,11,19,20,-1,20,6,11,-1,9,10,5,-1,5,3,9,-1,6,7,1,-1,1,11,6,-1,7,8,2,-1,2,1,7,-1,8,5,10,-1,10,2,8,-1,0,4,12,-1,12,27,0,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,15,16,22,-1,22,21,15,-1,17,18,24,-1,24,23,17,-1,23,24,26,-1,26,25,23,-1,25,26,21,-1,21,22,25,-1,14,27,12,-1,12,13,14,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,43,44,45,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,49,50,51,-1,51,52,53,-1,49,51,53,-1,45,49,53,-1,53,54,55,-1,45,53,55,-1,43,45,55,-1,43,55,42,-1,11,1,29,-1,29,28,11,-1,1,2,30,-1,30,29,1,-1,2,10,31,-1,31,30,2,-1,10,9,32,-1,32,31,10,-1,9,0,33,-1,33,32,9,-1,0,27,34,-1,34,33,0,-1,27,14,35,-1,35,34,27,-1,14,15,36,-1,36,35,14,-1,15,21,37,-1,37,36,15,-1,21,26,38,-1,38,37,21,-1,26,24,39,-1,39,38,26,-1,24,18,40,-1,40,39,24,-1,18,19,41,-1,41,40,18,-1,19,11,28,-1,28,41,19,-1,12,4,43,-1,43,42,12,-1,4,3,44,-1,44,43,4,-1,3,5,45,-1,45,44,3,-1,5,8,46,-1,46,45,5,-1,8,7,47,-1,47,46,8,-1,7,6,48,-1,48,47,7,-1,6,20,49,-1,49,48,6,-1,20,17,50,-1,50,49,20,-1,17,23,51,-1,51,50,17,-1,23,25,52,-1,52,51,23,-1,25,22,53,-1,53,52,25,-1,22,16,54,-1,54,53,22,-1,16,13,55,-1,55,54,16,-1,13,12,42,-1,42,55,13,-1});
  }
}
private class MFInt32412 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,9,-1,9,0,1,-1,11,13,8,-1,8,5,11,-1,9,10,3,-1,3,0,9,-1,4,6,16,-1,16,12,4,-1,6,7,17,-1,17,16,6,-1,7,3,10,-1,10,17,7,-1,14,1,2,-1,2,15,14,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,51,52,53,-1,53,54,55,-1,55,56,57,-1,53,55,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,53,57,61,-1,61,62,63,-1,53,61,63,-1,51,53,63,-1,51,63,50,-1,12,16,37,-1,37,36,12,-1,16,17,38,-1,38,37,16,-1,17,10,39,-1,39,38,17,-1,10,9,40,-1,40,39,10,-1,9,14,41,-1,41,40,9,-1,14,15,42,-1,42,41,14,-1,35,19,43,-1,43,42,35,-1,19,20,44,-1,44,43,19,-1,20,26,45,-1,45,44,20,-1,26,33,46,-1,46,45,26,-1,33,31,47,-1,47,46,33,-1,31,28,48,-1,48,47,31,-1,23,24,49,-1,49,48,23,-1,13,11,36,-1,36,49,13,-1,2,1,51,-1,51,50,2,-1,1,0,52,-1,52,51,1,-1,0,3,53,-1,53,52,0,-1,3,7,54,-1,54,53,3,-1,7,6,55,-1,55,54,7,-1,6,4,56,-1,56,55,6,-1,5,8,57,-1,57,56,5,-1,25,22,58,-1,58,57,25,-1,29,30,59,-1,59,58,29,-1,30,32,60,-1,60,59,30,-1,32,27,61,-1,61,60,32,-1,27,21,62,-1,62,61,27,-1,21,18,63,-1,63,62,21,-1,18,34,50,-1,50,63,18,-1});
  }
}
private class MFVec3f413 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.033210002f ,1.0930524f ,0.06572925f ,0.090742506f ,1.0930524f ,-0.057480752f ,0.1185975f ,1.0930524f ,-0.031644f ,0.09526501f ,1.108656f ,0.07394175f ,0.034605f ,1.108656f ,0.069779254f ,0.137565f ,1.1093513f ,0.015621751f ,0.044707503f ,1.1093513f ,-0.07208325f ,0.09423001f ,1.1093513f ,-0.059595753f ,0.122445f ,1.1093513f ,-0.034026753f ,0.0925875f ,1.0930524f ,0.06683175f ,0.1314f ,1.0930524f ,0.01537425f ,0.0415125f ,1.0930524f ,-0.071318254f ,0f ,1.108656f ,0.069779254f ,-0.034605f ,1.108656f ,0.069779254f ,-0.033210002f ,1.0930524f ,0.06572925f ,-0.0925875f ,1.0930524f ,0.06683175f ,-0.09526501f ,1.108656f ,0.07394175f ,-0.044707503f ,1.1093513f ,-0.07208325f ,-0.0415125f ,1.0930524f ,-0.071318254f ,0f ,1.0930524f ,-0.07181325f ,0f ,1.1093513f ,-0.07275825f ,-0.1314f ,1.0930524f ,0.01537425f ,-0.137565f ,1.1093513f ,0.015621751f ,-0.09423001f ,1.1093513f ,-0.059595753f ,-0.090742506f ,1.0930524f ,-0.057480752f ,-0.122445f ,1.1093513f ,-0.034026753f ,-0.1185975f ,1.0930524f ,-0.031644f ,0f ,1.0930524f ,0.06572925f ,0.040950004f ,1.0863159f ,-0.067313254f ,0.088717505f ,1.0863159f ,-0.053903252f ,0.1150425f ,1.0863159f ,-0.029484002f ,0.127035f ,1.0863159f ,0.01451925f ,0.0906075f ,1.0863159f ,0.06280425f ,0.033255003f ,1.0863159f ,0.061724253f ,0f ,1.0863159f ,0.061724253f ,-0.033255003f ,1.0863159f ,0.061724253f ,-0.0906075f ,1.0863159f ,0.06280425f ,-0.127035f ,1.0863159f ,0.01451925f ,-0.1150425f ,1.0863159f ,-0.029484002f ,-0.088717505f ,1.0863159f ,-0.053903252f ,-0.040950004f ,1.0863159f ,-0.067313254f ,0f ,1.0863159f ,-0.06780825f ,0f ,1.1163601f ,0.065774255f ,0.03474f ,1.1163601f ,0.065751754f ,0.093329996f ,1.1163601f ,0.069779254f ,0.1331325f ,1.1163601f ,0.014879251f ,0.118935f ,1.1163601f ,-0.0318015f ,0.092295006f ,1.1163601f ,-0.055950753f ,0.044167504f ,1.1163601f ,-0.06807826f ,0f ,1.1163601f ,-0.06875325f ,-0.044167504f ,1.1163601f ,-0.06807826f ,-0.092295006f ,1.1163601f ,-0.055950753f ,-0.118935f ,1.1163601f ,-0.0318015f ,-0.1331325f ,1.1163601f ,0.014879251f ,-0.093329996f ,1.1163601f ,0.069779254f ,-0.03474f ,1.1163601f ,0.065751754f });
  }
}
private class MFVec2f414 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0908f ,0.3999f ,0.0325f ,0.3879f ,0.0306f ,0.3835f ,0.1568f ,0.3845f ,0.3535f ,0.3812f ,0.3589f ,0.3783f ,0.2214f ,0.3832f ,0.1952f ,0.3809f ,0.3561f ,0.3769f ,0.0802f ,0.3883f ,0.1575f ,0.3746f ,0.3637f ,0.3704f ,0.356f ,0.3713f ,0.3581f ,0.3683f ,0.0256f ,0.3731f ,0.0261f ,0.363f ,0.2218f ,0.3729f ,0.1941f ,0.3712f ,0.0325f ,0.3879f ,0.0256f ,0.3731f ,0.0802f ,0.3883f ,0.0908f ,0.3999f ,0.3589f ,0.3783f ,0.3637f ,0.3704f ,0.3581f ,0.3683f ,0.3561f ,0.3769f ,0.1575f ,0.3746f ,0.1568f ,0.3845f ,0.356f ,0.3713f ,0.3535f ,0.3812f ,0.2214f ,0.3832f ,0.2218f ,0.3729f ,0.1952f ,0.3809f ,0.1941f ,0.3712f ,0.0306f ,0.3835f ,0.0261f ,0.363f ,0.3637f ,0.3704f ,0.2218f ,0.3729f ,0.1941f ,0.3712f ,0.1575f ,0.3746f ,0.0802f ,0.3883f ,0.0256f ,0.3731f ,0.0261f ,0.363f ,0.0256f ,0.3731f ,0.0802f ,0.3883f ,0.1575f ,0.3746f ,0.1941f ,0.3712f ,0.2218f ,0.3729f ,0.356f ,0.3713f ,0.3581f ,0.3683f ,0.0306f ,0.3835f ,0.0325f ,0.3879f ,0.0908f ,0.3999f ,0.1568f ,0.3845f ,0.1952f ,0.3809f ,0.2214f ,0.3832f ,0.3535f ,0.3812f ,0.3561f ,0.3769f ,0.3589f ,0.3783f ,0.2214f ,0.3832f ,0.1952f ,0.3809f ,0.1568f ,0.3845f ,0.0908f ,0.3999f ,0.0325f ,0.3879f });
  }
}
private class MFFloat415 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat416 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32417 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,6,-1,6,8,0,-1,9,18,19,-1,19,1,9,-1,7,5,22,-1,22,23,7,-1,1,3,10,-1,10,9,1,-1,3,4,11,-1,11,10,3,-1,4,0,8,-1,8,11,4,-1,5,7,6,-1,6,2,5,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,20,23,22,-1,22,21,20,-1,16,17,25,-1,25,24,16,-1,24,25,27,-1,27,26,24,-1,26,27,12,-1,12,13,26,-1,21,14,15,-1,15,20,21,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,54,55,42,-1,46,54,42,-1,44,46,42,-1,43,44,42,-1,1,19,29,-1,29,28,1,-1,19,16,30,-1,30,29,19,-1,16,24,31,-1,31,30,16,-1,24,26,32,-1,32,31,24,-1,26,13,33,-1,33,32,26,-1,13,14,34,-1,34,33,13,-1,14,21,35,-1,35,34,14,-1,21,22,36,-1,36,35,21,-1,22,5,37,-1,37,36,22,-1,5,2,38,-1,38,37,5,-1,2,0,39,-1,39,38,2,-1,0,4,40,-1,40,39,0,-1,4,3,41,-1,41,40,4,-1,3,1,28,-1,28,41,3,-1,7,23,43,-1,43,42,7,-1,23,20,44,-1,44,43,23,-1,20,15,45,-1,45,44,20,-1,15,12,46,-1,46,45,15,-1,12,27,47,-1,47,46,12,-1,27,25,48,-1,48,47,27,-1,25,17,49,-1,49,48,25,-1,17,18,50,-1,50,49,17,-1,18,9,51,-1,51,50,18,-1,9,10,52,-1,52,51,9,-1,10,11,53,-1,53,52,10,-1,11,8,54,-1,54,53,11,-1,8,6,55,-1,55,54,8,-1,6,7,42,-1,42,55,6,-1});
  }
}
private class MFInt32418 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,8,9,-1,9,11,3,-1,13,16,6,-1,6,5,13,-1,10,0,7,-1,7,17,10,-1,2,1,14,-1,14,12,2,-1,1,4,15,-1,15,14,1,-1,4,3,11,-1,11,15,4,-1,0,10,9,-1,9,8,0,-1,19,18,21,-1,21,20,19,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,31,30,33,-1,33,32,31,-1,32,33,35,-1,35,34,32,-1,34,35,18,-1,18,19,34,-1,27,20,21,-1,21,26,27,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,62,63,50,-1,54,62,50,-1,52,54,50,-1,51,52,50,-1,5,6,37,-1,37,36,5,-1,25,22,38,-1,38,37,25,-1,31,32,39,-1,39,38,31,-1,32,34,40,-1,40,39,32,-1,34,19,41,-1,41,40,34,-1,19,20,42,-1,42,41,19,-1,20,27,43,-1,43,42,20,-1,27,28,44,-1,44,43,27,-1,7,0,45,-1,45,44,7,-1,0,8,46,-1,46,45,0,-1,8,3,47,-1,47,46,8,-1,3,4,48,-1,48,47,3,-1,4,1,49,-1,49,48,4,-1,1,2,36,-1,36,49,1,-1,10,17,51,-1,51,50,10,-1,29,26,52,-1,52,51,29,-1,26,21,53,-1,53,52,26,-1,21,18,54,-1,54,53,21,-1,18,35,55,-1,55,54,18,-1,35,33,56,-1,56,55,35,-1,33,30,57,-1,57,56,33,-1,23,24,58,-1,58,57,23,-1,16,13,59,-1,59,58,16,-1,12,14,60,-1,60,59,12,-1,14,15,61,-1,61,60,14,-1,15,11,62,-1,62,61,15,-1,11,9,63,-1,63,62,11,-1,9,10,50,-1,50,63,9,-1});
  }
}
private class MFVec3f419 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1414125f ,1.1218928f ,0.01591425f ,0.046395004f ,1.1218928f ,-0.072668254f ,0.0922725f ,1.1218928f ,0.07013925f ,0.096525006f ,1.1218928f ,-0.06112575f ,0.12537001f ,1.1218928f ,-0.03517425f ,0.035662502f ,1.1218928f ,0.072231755f ,0.09526501f ,1.1088135f ,0.07394175f ,0.034605f ,1.1088135f ,0.069779254f ,0.137565f ,1.1095088f ,0.015621751f ,0.044707503f ,1.1095088f ,-0.07208325f ,0.09423001f ,1.1095088f ,-0.059595753f ,0.122445f ,1.1095088f ,-0.034026753f ,-0.137565f ,1.1095088f ,0.015621751f ,-0.1414125f ,1.1218928f ,0.01591425f ,-0.0922725f ,1.1218928f ,0.07013925f ,-0.09526501f ,1.1088135f ,0.07394175f ,-0.046395004f ,1.1218928f ,-0.072668254f ,-0.044707503f ,1.1095088f ,-0.07208325f ,0f ,1.1095088f ,-0.07275825f ,0f ,1.1218928f ,-0.07372575f ,-0.034605f ,1.1088135f ,0.069779254f ,-0.035662502f ,1.1218928f ,0.072231755f ,0f ,1.1218928f ,0.07232175f ,0f ,1.1088135f ,0.069779254f ,-0.096525006f ,1.1218928f ,-0.06112575f ,-0.09423001f ,1.1095088f ,-0.059595753f ,-0.12537001f ,1.1218928f ,-0.03517425f ,-0.122445f ,1.1095088f ,-0.034026753f ,0.045787502f ,1.1296327f ,-0.06789825f ,0f ,1.1296327f ,-0.06895576f ,-0.045787502f ,1.1296327f ,-0.06789825f ,-0.094252504f ,1.1296327f ,-0.05676075f ,-0.121207505f ,1.1296327f ,-0.03249675f ,-0.13603501f ,1.1296327f ,0.01474425f ,-0.09009001f ,1.1296327f ,0.06543675f ,-0.0355725f ,1.1296327f ,0.06743925f ,0f ,1.1296327f ,0.067551754f ,0.0355725f ,1.1296327f ,0.06743925f ,0.09009001f ,1.1296327f ,0.06543675f ,0.13603501f ,1.1296327f ,0.01474425f ,0.121207505f ,1.1296327f ,-0.03249675f ,0.094252504f ,1.1296327f ,-0.05676075f ,0.03429f ,1.1004975f ,0.06323175f ,0f ,1.1004975f ,0.06323175f ,-0.03429f ,1.1004975f ,0.06323175f ,-0.091665f ,1.1004975f ,0.067101754f ,-0.130455f ,1.1004975f ,0.014316752f ,-0.11661751f ,1.1004975f ,-0.03055725f ,-0.090652496f ,1.1004975f ,-0.05379075f ,-0.043447502f ,1.1004975f ,-0.065535754f ,0f ,1.1004975f ,-0.06618825f ,0.043447502f ,1.1004975f ,-0.065535754f ,0.090652496f ,1.1004975f ,-0.05379075f ,0.11661751f ,1.1004975f ,-0.03055725f ,0.130455f ,1.1004975f ,0.014316752f ,0.091665f ,1.1004975f ,0.067101754f });
  }
}
private class MFVec2f420 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0437f ,0.4075f ,0.2185f ,0.3912f ,0.3484f ,0.3944f ,0.1518f ,0.3905f ,0.1902f ,0.3894f ,0.3503f ,0.3879f ,0.3505f ,0.3886f ,0.0427f ,0.408f ,0.0961f ,0.4138f ,0.0908f ,0.3999f ,0.0325f ,0.3879f ,0.1568f ,0.3845f ,0.3535f ,0.3812f ,0.3589f ,0.3783f ,0.2214f ,0.3832f ,0.1952f ,0.3809f ,0.3561f ,0.3769f ,0.0306f ,0.3835f ,0.1568f ,0.3845f ,0.1518f ,0.3905f ,0.0961f ,0.4138f ,0.0908f ,0.3999f ,0.3503f ,0.3879f ,0.3589f ,0.3783f ,0.3561f ,0.3769f ,0.3505f ,0.3886f ,0.0325f ,0.3879f ,0.0437f ,0.4075f ,0.0427f ,0.408f ,0.0306f ,0.3835f ,0.3535f ,0.3812f ,0.3484f ,0.3944f ,0.2185f ,0.3912f ,0.2214f ,0.3832f ,0.1902f ,0.3894f ,0.1952f ,0.3809f ,0.3484f ,0.3944f ,0.3505f ,0.3886f ,0.3503f ,0.3879f ,0.2185f ,0.3912f ,0.1902f ,0.3894f ,0.1518f ,0.3905f ,0.0961f ,0.4138f ,0.0437f ,0.4075f ,0.0427f ,0.408f ,0.0437f ,0.4075f ,0.0961f ,0.4138f ,0.1518f ,0.3905f ,0.1902f ,0.3894f ,0.2185f ,0.3912f ,0.0325f ,0.3879f ,0.0306f ,0.3835f ,0.0325f ,0.3879f ,0.0908f ,0.3999f ,0.1568f ,0.3845f ,0.1952f ,0.3809f ,0.2214f ,0.3832f ,0.3535f ,0.3812f ,0.3561f ,0.3769f ,0.3589f ,0.3783f ,0.2214f ,0.3832f ,0.1952f ,0.3809f ,0.1568f ,0.3845f ,0.0908f ,0.3999f });
  }
}
private class MFFloat421 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat422 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32423 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,9,5,-1,5,3,12,-1,2,1,6,-1,6,11,2,-1,0,7,23,-1,23,24,0,-1,25,8,12,-1,12,3,25,-1,9,6,1,-1,1,5,9,-1,11,10,4,-1,4,2,11,-1,4,10,7,-1,7,0,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,24,23,-1,23,22,21,-1,25,16,13,-1,13,8,25,-1,14,15,19,-1,19,20,14,-1,17,18,27,-1,27,26,17,-1,27,21,22,-1,22,26,27,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,5,29,-1,29,28,3,-1,5,1,30,-1,30,29,5,-1,1,2,31,-1,31,30,1,-1,2,4,32,-1,32,31,2,-1,4,0,33,-1,33,32,4,-1,0,24,34,-1,34,33,0,-1,24,21,35,-1,35,34,24,-1,21,27,36,-1,36,35,21,-1,27,18,37,-1,37,36,27,-1,18,19,38,-1,38,37,18,-1,19,15,39,-1,39,38,19,-1,15,16,40,-1,40,39,15,-1,16,25,41,-1,41,40,16,-1,25,3,28,-1,28,41,25,-1,23,7,43,-1,43,42,23,-1,7,10,44,-1,44,43,7,-1,10,11,45,-1,45,44,10,-1,11,6,46,-1,46,45,11,-1,6,9,47,-1,47,46,6,-1,9,12,48,-1,48,47,9,-1,12,8,49,-1,49,48,12,-1,8,13,50,-1,50,49,8,-1,13,14,51,-1,51,50,13,-1,14,20,52,-1,52,51,14,-1,20,17,53,-1,53,52,20,-1,17,26,54,-1,54,53,17,-1,26,22,55,-1,55,54,26,-1,22,23,42,-1,42,55,22,-1});
  }
}
private class MFInt32424 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,13,8,-1,8,4,17,-1,3,2,9,-1,9,16,3,-1,1,10,14,-1,14,5,1,-1,6,12,17,-1,17,4,6,-1,13,9,2,-1,2,8,13,-1,16,15,7,-1,7,3,16,-1,7,15,11,-1,11,0,7,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,30,21,18,-1,18,31,30,-1,19,20,24,-1,24,25,19,-1,22,23,33,-1,33,32,22,-1,33,35,34,-1,34,32,33,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,4,8,37,-1,37,36,4,-1,8,2,38,-1,38,37,8,-1,2,3,39,-1,39,38,2,-1,3,7,40,-1,40,39,3,-1,7,0,41,-1,41,40,7,-1,1,5,42,-1,42,41,1,-1,29,26,43,-1,43,42,29,-1,35,33,44,-1,44,43,35,-1,33,23,45,-1,45,44,33,-1,23,24,46,-1,46,45,23,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,21,30,49,-1,49,48,21,-1,6,4,36,-1,36,49,6,-1,14,10,51,-1,51,50,14,-1,11,15,52,-1,52,51,11,-1,15,16,53,-1,53,52,15,-1,16,9,54,-1,54,53,16,-1,9,13,55,-1,55,54,9,-1,13,17,56,-1,56,55,13,-1,17,12,57,-1,57,56,17,-1,31,18,58,-1,58,57,31,-1,18,19,59,-1,59,58,18,-1,19,25,60,-1,60,59,19,-1,25,22,61,-1,61,60,25,-1,22,32,62,-1,62,61,22,-1,32,34,63,-1,63,62,32,-1,27,28,50,-1,50,63,27,-1});
  }
}
private class MFVec3f425 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.043582503f ,1.137141f ,-0.07325325f ,0.13932f ,1.1371433f ,0.017151749f ,0.129105f ,1.1371433f ,-0.03089475f ,0.036337502f ,1.1371433f ,0.07013925f ,0.0961425f ,1.1371433f ,-0.06256575f ,0.0887625f ,1.1371433f ,0.06566175f ,0.1414125f ,1.1217172f ,0.01591425f ,0.046395004f ,1.1217172f ,-0.072668254f ,0f ,1.1217172f ,0.07232175f ,0.0922725f ,1.1217172f ,0.07013925f ,0.096525006f ,1.1217172f ,-0.06112575f ,0.12537001f ,1.1217172f ,-0.03517425f ,0.035662502f ,1.1217172f ,0.072231755f ,-0.035662502f ,1.1217172f ,0.072231755f ,-0.0922725f ,1.1217172f ,0.07013925f ,-0.0887625f ,1.1371433f ,0.06566175f ,-0.036337502f ,1.1371433f ,0.07013925f ,-0.12537001f ,1.1217172f ,-0.03517425f ,-0.129105f ,1.1371433f ,-0.03089475f ,-0.13932f ,1.1371433f ,0.017151749f ,-0.1414125f ,1.1217172f ,0.01591425f ,-0.043582503f ,1.137141f ,-0.07325325f ,-0.046395004f ,1.1217172f ,-0.072668254f ,0f ,1.1217172f ,-0.07372575f ,0f ,1.137141f ,-0.07530075f ,0f ,1.1371433f ,0.07074676f ,-0.096525006f ,1.1217172f ,-0.06112575f ,-0.0961425f ,1.1371433f ,-0.06256575f ,0.0360675f ,1.1448675f ,0.06473926f ,0.0864f ,1.1448675f ,0.060441755f ,0.1334025f ,1.1448675f ,0.01532925f ,0.12415501f ,1.1448675f ,-0.0281475f ,0.0935325f ,1.1448675f ,-0.05757075f ,0.0429075f ,1.1448675f ,-0.06787575f ,0f ,1.1448675f ,-0.06987825f ,-0.0429075f ,1.1448675f ,-0.06787575f ,-0.0935325f ,1.1448675f ,-0.05757075f ,-0.12415501f ,1.1448675f ,-0.0281475f ,-0.1334025f ,1.1448675f ,0.01532925f ,-0.0864f ,1.1448675f ,0.060441755f ,-0.0360675f ,1.1448675f ,0.06473926f ,0f ,1.1448675f ,0.065346755f ,0f ,1.1164207f ,-0.06832575f ,0.045720004f ,1.1164207f ,-0.06726825f ,0.09396001f ,1.1164207f ,-0.056175753f ,0.120645f ,1.1164207f ,-0.03214125f ,0.1353375f ,1.1164207f ,0.01458675f ,0.089797504f ,1.1164207f ,0.06480675f ,0.0355725f ,1.1164207f ,0.06680925f ,0f ,1.1164207f ,0.06692175f ,-0.0355725f ,1.1164207f ,0.06680925f ,-0.089797504f ,1.1164207f ,0.06480675f ,-0.1353375f ,1.1164207f ,0.01458675f ,-0.120645f ,1.1164207f ,-0.03214125f ,-0.09396001f ,1.1164207f ,-0.056175753f ,-0.045720004f ,1.1164207f ,-0.06726825f });
  }
}
private class MFVec2f426 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3061f ,0.4256f ,0.3364f ,0.4029f ,0.1528f ,0.4078f ,0.1843f ,0.4071f ,0.055f ,0.4216f ,0.3325f ,0.4068f ,0.0482f ,0.4185f ,0.221f ,0.4256f ,0.1008f ,0.4259f ,0.1518f ,0.3905f ,0.3506f ,0.3865f ,0.3484f ,0.3944f ,0.0427f ,0.408f ,0.0961f ,0.4138f ,0.3437f ,0.3934f ,0.2185f ,0.3912f ,0.1902f ,0.3894f ,0.0437f ,0.4075f ,0.0437f ,0.4075f ,0.0961f ,0.4138f ,0.1008f ,0.4259f ,0.055f ,0.4216f ,0.1902f ,0.3894f ,0.1843f ,0.4071f ,0.1528f ,0.4078f ,0.1518f ,0.3905f ,0.3364f ,0.4029f ,0.3506f ,0.3865f ,0.3437f ,0.3934f ,0.3325f ,0.4068f ,0.0482f ,0.4185f ,0.0427f ,0.408f ,0.2185f ,0.3912f ,0.221f ,0.4256f ,0.3484f ,0.3944f ,0.3061f ,0.4256f ,0.055f ,0.4216f ,0.1008f ,0.4259f ,0.1528f ,0.4078f ,0.1843f ,0.4071f ,0.221f ,0.4256f ,0.3061f ,0.4256f ,0.3325f ,0.4068f ,0.3364f ,0.4029f ,0.221f ,0.4256f ,0.1843f ,0.4071f ,0.1528f ,0.4078f ,0.1008f ,0.4259f ,0.055f ,0.4216f ,0.0482f ,0.4185f ,0.3437f ,0.3934f ,0.3506f ,0.3865f ,0.2185f ,0.3912f ,0.1902f ,0.3894f ,0.1518f ,0.3905f ,0.0961f ,0.4138f ,0.0437f ,0.4075f ,0.0427f ,0.408f ,0.0437f ,0.4075f ,0.0961f ,0.4138f ,0.1518f ,0.3905f ,0.1902f ,0.3894f ,0.2185f ,0.3912f ,0.3484f ,0.3944f });
  }
}
private class MFFloat427 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat428 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32429 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,6,16,-1,16,13,0,-1,17,10,9,-1,9,3,17,-1,12,7,5,-1,5,2,12,-1,8,11,4,-1,4,1,8,-1,4,11,6,-1,6,0,4,-1,2,3,9,-1,9,12,2,-1,1,5,7,-1,7,8,1,-1,14,13,16,-1,16,15,14,-1,17,19,18,-1,18,10,17,-1,21,20,23,-1,23,22,21,-1,25,24,27,-1,27,26,25,-1,27,14,15,-1,15,26,27,-1,20,21,18,-1,18,19,20,-1,24,25,22,-1,22,23,24,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,2,29,-1,29,28,3,-1,2,5,30,-1,30,29,2,-1,5,1,31,-1,31,30,5,-1,1,4,32,-1,32,31,1,-1,4,0,33,-1,33,32,4,-1,0,13,34,-1,34,33,0,-1,13,14,35,-1,35,34,13,-1,14,27,36,-1,36,35,14,-1,27,24,37,-1,37,36,27,-1,24,23,38,-1,38,37,24,-1,23,20,39,-1,39,38,23,-1,20,19,40,-1,40,39,20,-1,19,17,41,-1,41,40,19,-1,17,3,28,-1,28,41,17,-1,12,9,43,-1,43,42,12,-1,9,10,44,-1,44,43,9,-1,10,18,45,-1,45,44,10,-1,18,21,46,-1,46,45,18,-1,21,22,47,-1,47,46,21,-1,22,25,48,-1,48,47,22,-1,25,26,49,-1,49,48,25,-1,26,15,50,-1,50,49,26,-1,15,16,51,-1,51,50,15,-1,16,6,52,-1,52,51,16,-1,6,11,53,-1,53,52,6,-1,11,8,54,-1,54,53,11,-1,8,7,55,-1,55,54,8,-1,7,12,42,-1,42,55,7,-1});
  }
}
private class MFInt32430 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,10,14,-1,14,2,5,-1,8,15,13,-1,13,7,8,-1,17,11,3,-1,3,6,17,-1,12,16,0,-1,0,4,12,-1,0,16,9,-1,9,1,0,-1,6,7,13,-1,13,17,6,-1,4,3,11,-1,11,12,4,-1,19,18,21,-1,21,20,19,-1,22,25,24,-1,24,23,22,-1,27,26,29,-1,29,28,27,-1,31,30,33,-1,33,32,31,-1,33,35,34,-1,34,32,33,-1,26,27,24,-1,24,25,26,-1,30,31,28,-1,28,29,30,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,7,6,37,-1,37,36,7,-1,6,3,38,-1,38,37,6,-1,3,4,39,-1,39,38,3,-1,4,0,40,-1,40,39,4,-1,0,1,41,-1,41,40,0,-1,5,2,42,-1,42,41,5,-1,18,19,43,-1,43,42,18,-1,35,33,44,-1,44,43,35,-1,33,30,45,-1,45,44,33,-1,30,29,46,-1,46,45,30,-1,29,26,47,-1,47,46,29,-1,26,25,48,-1,48,47,26,-1,25,22,49,-1,49,48,25,-1,8,7,36,-1,36,49,8,-1,17,13,51,-1,51,50,17,-1,13,15,52,-1,52,51,13,-1,23,24,53,-1,53,52,23,-1,24,27,54,-1,54,53,24,-1,27,28,55,-1,55,54,27,-1,28,31,56,-1,56,55,28,-1,31,32,57,-1,57,56,31,-1,32,34,58,-1,58,57,32,-1,20,21,59,-1,59,58,20,-1,14,10,60,-1,60,59,14,-1,9,16,61,-1,61,60,9,-1,16,12,62,-1,62,61,16,-1,12,11,63,-1,63,62,12,-1,11,17,50,-1,50,63,11,-1});
  }
}
private class MFVec3f431 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0407475f ,1.1525738f ,-0.07383826f ,0.1328175f ,1.1525761f ,-0.0266175f ,0.08523001f ,1.1525761f ,0.061184254f ,0.037035003f ,1.1525761f ,0.06806926f ,0.09576f ,1.1525761f ,-0.064005755f ,0.137205f ,1.1525761f ,0.018389251f ,0.043582503f ,1.13715f ,-0.07325325f ,0.13932f ,1.1371523f ,0.017151749f ,0.129105f ,1.1371523f ,-0.03089475f ,0.036337502f ,1.1371523f ,0.07013925f ,0f ,1.1371523f ,0.07074676f ,0.0961425f ,1.1371523f ,-0.06256575f ,0.0887625f ,1.1371523f ,0.06566175f ,0f ,1.1525738f ,-0.07685325f ,-0.0407475f ,1.1525738f ,-0.07383826f ,-0.043582503f ,1.13715f ,-0.07325325f ,0f ,1.13715f ,-0.07530075f ,0f ,1.1525761f ,0.06919426f ,-0.036337502f ,1.1371523f ,0.07013925f ,-0.037035003f ,1.1525761f ,0.06806926f ,-0.08523001f ,1.1525761f ,0.061184254f ,-0.0887625f ,1.1371523f ,0.06566175f ,-0.13932f ,1.1371523f ,0.017151749f ,-0.137205f ,1.1525761f ,0.018389251f ,-0.1328175f ,1.1525761f ,-0.0266175f ,-0.129105f ,1.1371523f ,-0.03089475f ,-0.0961425f ,1.1371523f ,-0.06256575f ,-0.09576f ,1.1525761f ,-0.064005755f ,0.036472503f ,1.1608201f ,0.061724253f ,0.08257501f ,1.1608201f ,0.055131752f ,0.130545f ,1.1608201f ,0.015621751f ,0.12669751f ,1.1608201f ,-0.0237465f ,0.092655f ,1.1608201f ,-0.058088254f ,0.03996f ,1.1608201f ,-0.06751575f ,0f ,1.1608201f ,-0.070463255f ,-0.03996f ,1.1608201f ,-0.06751575f ,-0.092655f ,1.1608201f ,-0.058088254f ,-0.12669751f ,1.1608201f ,-0.0237465f ,-0.130545f ,1.1608201f ,0.015621751f ,-0.08257501f ,1.1608201f ,0.055131752f ,-0.036472503f ,1.1608201f ,0.061724253f ,0f ,1.1608201f ,0.06282675f ,0.0859725f ,1.1296216f ,0.059496753f ,0.0360225f ,1.1296216f ,0.063794255f ,0f ,1.1296216f ,0.06440175f ,-0.0360225f ,1.1296216f ,0.063794255f ,-0.0859725f ,1.1296216f ,0.059496753f ,-0.132345f ,1.1296216f ,0.015014252f ,-0.12327751f ,1.1296216f ,-0.0276615f ,-0.09306001f ,1.1296216f ,-0.056693252f ,-0.042795f ,1.1296194f ,-0.06693075f ,0f ,1.1296194f ,-0.068910755f ,0.042795f ,1.1296194f ,-0.06693075f ,0.09306001f ,1.1296216f ,-0.056693252f ,0.12327751f ,1.1296216f ,-0.0276615f ,0.132345f ,1.1296216f ,0.015014252f });
  }
}
private class MFVec2f432 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2236f ,0.46f ,0.2638f ,0.4568f ,0.3214f ,0.4203f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.3223f ,0.4192f ,0.1055f ,0.438f ,0.0663f ,0.4356f ,0.0537f ,0.4289f ,0.3061f ,0.4256f ,0.3364f ,0.4029f ,0.1528f ,0.4078f ,0.1843f ,0.4071f ,0.055f ,0.4216f ,0.3325f ,0.4068f ,0.0482f ,0.4185f ,0.221f ,0.4256f ,0.1008f ,0.4259f ,0.3214f ,0.4203f ,0.3223f ,0.4192f ,0.3364f ,0.4029f ,0.3325f ,0.4068f ,0.0537f ,0.4289f ,0.0482f ,0.4185f ,0.055f ,0.4216f ,0.0663f ,0.4356f ,0.1055f ,0.438f ,0.1008f ,0.4259f ,0.1528f ,0.4078f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.1843f ,0.4071f ,0.221f ,0.4256f ,0.2236f ,0.46f ,0.3061f ,0.4256f ,0.2638f ,0.4568f ,0.0663f ,0.4356f ,0.1055f ,0.438f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.2236f ,0.46f ,0.2638f ,0.4568f ,0.3214f ,0.4203f ,0.3223f ,0.4192f ,0.2236f ,0.46f ,0.1784f ,0.4249f ,0.1538f ,0.4251f ,0.1055f ,0.438f ,0.0663f ,0.4356f ,0.0537f ,0.4289f ,0.1008f ,0.4259f ,0.055f ,0.4216f ,0.0482f ,0.4185f ,0.055f ,0.4216f ,0.1008f ,0.4259f ,0.1528f ,0.4078f ,0.1843f ,0.4071f ,0.221f ,0.4256f ,0.3061f ,0.4256f ,0.3325f ,0.4068f ,0.3364f ,0.4029f ,0.221f ,0.4256f ,0.1843f ,0.4071f ,0.1528f ,0.4078f });
  }
}
private class MFFloat433 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat434 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32435 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,9,-1,9,12,2,-1,3,0,10,-1,10,9,3,-1,7,20,21,-1,21,4,7,-1,11,7,4,-1,4,5,11,-1,25,26,10,-1,10,0,25,-1,6,11,5,-1,11,6,1,-1,1,8,11,-1,2,12,8,-1,8,1,2,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,25,17,18,-1,18,26,25,-1,27,24,23,-1,23,29,28,-1,28,27,23,-1,14,28,29,-1,29,13,14,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,31,34,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,31,38,42,-1,42,43,44,-1,31,42,44,-1,31,44,45,-1,31,45,30,-1,48,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,46,-1,54,58,46,-1,50,54,46,-1,48,50,46,-1,47,48,46,-1,3,2,31,-1,31,30,3,-1,2,1,32,-1,32,31,2,-1,1,6,33,-1,33,32,1,-1,6,5,34,-1,34,33,6,-1,5,4,35,-1,35,34,5,-1,4,21,36,-1,36,35,4,-1,21,22,37,-1,37,36,21,-1,22,24,38,-1,38,37,22,-1,24,27,39,-1,39,38,24,-1,27,28,40,-1,40,39,27,-1,28,14,41,-1,41,40,28,-1,14,15,42,-1,42,41,14,-1,15,17,43,-1,43,42,15,-1,17,25,44,-1,44,43,17,-1,25,0,45,-1,45,44,25,-1,0,3,30,-1,30,45,0,-1,9,10,47,-1,47,46,9,-1,10,26,48,-1,48,47,10,-1,26,18,49,-1,49,48,26,-1,18,16,50,-1,50,49,18,-1,16,13,51,-1,51,50,16,-1,13,29,52,-1,52,51,13,-1,29,23,53,-1,53,52,29,-1,23,19,54,-1,54,53,23,-1,19,20,55,-1,55,54,19,-1,20,7,56,-1,56,55,20,-1,7,11,57,-1,57,56,7,-1,11,8,58,-1,58,57,11,-1,8,12,59,-1,59,58,8,-1,12,9,46,-1,46,59,12,-1});
  }
}
private class MFInt32436 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,14,-1,14,18,3,-1,4,1,15,-1,15,14,4,-1,10,17,7,-1,7,6,10,-1,16,11,5,-1,5,8,16,-1,0,19,15,-1,15,1,0,-1,9,16,8,-1,16,9,2,-1,2,12,16,-1,3,18,13,-1,13,2,3,-1,21,20,23,-1,23,22,21,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,30,33,32,-1,32,31,30,-1,34,24,25,-1,25,35,34,-1,36,33,30,-1,30,38,37,-1,37,36,30,-1,21,37,39,-1,39,20,21,-1,41,42,43,-1,41,43,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,41,48,52,-1,52,53,54,-1,41,52,54,-1,41,54,55,-1,41,55,40,-1,58,59,60,-1,60,61,62,-1,62,63,64,-1,60,62,64,-1,64,65,66,-1,66,67,68,-1,64,66,68,-1,68,69,56,-1,64,68,56,-1,60,64,56,-1,58,60,56,-1,57,58,56,-1,4,3,41,-1,41,40,4,-1,3,2,42,-1,42,41,3,-1,2,9,43,-1,43,42,2,-1,9,8,44,-1,44,43,9,-1,8,5,45,-1,45,44,8,-1,6,7,46,-1,46,45,6,-1,28,29,47,-1,47,46,28,-1,32,33,48,-1,48,47,32,-1,33,36,49,-1,49,48,33,-1,36,37,50,-1,50,49,36,-1,37,21,51,-1,51,50,37,-1,21,22,52,-1,52,51,21,-1,22,24,53,-1,53,52,22,-1,24,34,54,-1,54,53,24,-1,0,1,55,-1,55,54,0,-1,1,4,40,-1,40,55,1,-1,14,15,57,-1,57,56,14,-1,15,19,58,-1,58,57,15,-1,35,25,59,-1,59,58,35,-1,25,23,60,-1,60,59,25,-1,23,20,61,-1,61,60,23,-1,20,39,62,-1,62,61,20,-1,38,30,63,-1,63,62,38,-1,30,31,64,-1,64,63,30,-1,26,27,65,-1,65,64,26,-1,17,10,66,-1,66,65,17,-1,11,16,67,-1,67,66,11,-1,16,12,68,-1,68,67,16,-1,13,18,69,-1,69,68,13,-1,18,14,56,-1,56,69,18,-1});
  }
}
private class MFVec3f437 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0378225f ,1.170945f ,0.06561676f ,0.12993751f ,1.1715525f ,-0.034110002f ,0.13106251f ,1.1702116f ,0.020459251f ,0.080662504f ,1.1727495f ,0.055379253f ,0.0407475f ,1.1715525f ,-0.07012576f ,0.09639f ,1.1715525f ,-0.061193254f ,0.10388251f ,1.1715525f ,-0.060383253f ,0.0407475f ,1.1527381f ,-0.07383826f ,0.1328175f ,1.1527404f ,-0.0266175f ,0.08523001f ,1.1527404f ,0.061184254f ,0.037035003f ,1.1527404f ,0.06806926f ,0.09576f ,1.1527404f ,-0.064005755f ,0.137205f ,1.1527404f ,0.018389251f ,-0.137205f ,1.1527404f ,0.018389251f ,-0.13106251f ,1.1702116f ,0.020459251f ,-0.080662504f ,1.1727495f ,0.055379253f ,-0.08523001f ,1.1527404f ,0.061184254f ,-0.0378225f ,1.170945f ,0.06561676f ,-0.037035003f ,1.1527404f ,0.06806926f ,-0.0407475f ,1.1527381f ,-0.07383826f ,0f ,1.1527381f ,-0.07685325f ,0f ,1.1715525f ,-0.07314075f ,-0.0407475f ,1.1715525f ,-0.07012576f ,-0.09576f ,1.1527404f ,-0.064005755f ,-0.09639f ,1.1715525f ,-0.061193254f ,0f ,1.170945f ,0.06759675f ,0f ,1.1527404f ,0.06919426f ,-0.10388251f ,1.1715525f ,-0.060383253f ,-0.12993751f ,1.1715525f ,-0.034110002f ,-0.1328175f ,1.1527404f ,-0.0266175f ,0.0778725f ,1.1833875f ,0.049124252f ,0.124267496f ,1.1833875f ,0.016994251f ,0.12327751f ,1.1833875f ,-0.03128625f ,0.10080001f ,1.1833875f ,-0.05397075f ,0.09549f ,1.1833875f ,-0.054533254f ,0.03996f ,1.1833875f ,-0.06346575f ,0f ,1.1833875f ,-0.06641325f ,-0.03996f ,1.1833875f ,-0.06346575f ,-0.09549f ,1.1833875f ,-0.054533254f ,-0.10080001f ,1.1833875f ,-0.05397075f ,-0.12327751f ,1.1833875f ,-0.03128625f ,-0.124267496f ,1.1833875f ,0.016994251f ,-0.0778725f ,1.1833875f ,0.049124252f ,-0.036855f ,1.1833875f ,0.058934253f ,0f ,1.1833875f ,0.06086925f ,0.036855f ,1.1833875f ,0.058934253f ,0.0824175f ,1.1452006f ,0.054794252f ,0.036450002f ,1.1452006f ,0.061364252f ,0f ,1.1452006f ,0.06246675f ,-0.036450002f ,1.1452006f ,0.061364252f ,-0.0824175f ,1.1452006f ,0.054794252f ,-0.130185f ,1.1452006f ,0.015464251f ,-0.12636001f ,1.1452006f ,-0.02358675f ,-0.092497505f ,1.1452006f ,-0.057750754f ,-0.039915003f ,1.1452006f ,-0.06715575f ,0f ,1.1452006f ,-0.07012576f ,0.039915003f ,1.1452006f ,-0.06715575f ,0.092497505f ,1.1452006f ,-0.057750754f ,0.12636001f ,1.1452006f ,-0.02358675f ,0.130185f ,1.1452006f ,0.015464251f });
  }
}
private class MFVec2f438 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0639f ,0.4488f ,0.0777f ,0.4495f ,0.1846f ,0.4438f ,0.1504f ,0.4433f ,0.1107f ,0.4532f ,0.2633f ,0.457f ,0.3222f ,0.4193f ,0.3214f ,0.4203f ,0.2198f ,0.4731f ,0.2144f ,0.4674f ,0.3223f ,0.4192f ,0.2638f ,0.4568f ,0.1784f ,0.4249f ,0.1784f ,0.4249f ,0.1055f ,0.438f ,0.0663f ,0.4356f ,0.2236f ,0.46f ,0.3214f ,0.4203f ,0.1538f ,0.4251f ,0.0537f ,0.4289f ,0.1538f ,0.4251f ,0.1504f ,0.4433f ,0.1107f ,0.4532f ,0.1055f ,0.438f ,0.0777f ,0.4495f ,0.0663f ,0.4356f ,0.3223f ,0.4192f ,0.3214f ,0.4203f ,0.3214f ,0.4203f ,0.3222f ,0.4193f ,0.2236f ,0.46f ,0.2638f ,0.4568f ,0.2633f ,0.457f ,0.2198f ,0.4731f ,0.0639f ,0.4488f ,0.0537f ,0.4289f ,0.2144f ,0.4674f ,0.1846f ,0.4438f ,0.1784f ,0.4249f ,0.1784f ,0.4249f ,0.1107f ,0.4532f ,0.1504f ,0.4433f ,0.1846f ,0.4438f ,0.2144f ,0.4674f ,0.2198f ,0.4731f ,0.2633f ,0.457f ,0.3214f ,0.4203f ,0.3222f ,0.4193f ,0.2198f ,0.4731f ,0.2144f ,0.4674f ,0.1846f ,0.4438f ,0.1504f ,0.4433f ,0.1107f ,0.4532f ,0.0777f ,0.4495f ,0.0639f ,0.4488f ,0.0777f ,0.4495f ,0.1055f ,0.438f ,0.0663f ,0.4356f ,0.0537f ,0.4289f ,0.0663f ,0.4356f ,0.1055f ,0.438f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.2236f ,0.46f ,0.2638f ,0.4568f ,0.3214f ,0.4203f ,0.3223f ,0.4192f ,0.2236f ,0.46f ,0.1784f ,0.4249f ,0.1538f ,0.4251f });
  }
}
private class MFFloat439 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat440 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32441 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,15,0,-1,0,7,16,-1,0,15,8,-1,1,5,11,-1,11,10,1,-1,18,6,12,-1,12,17,18,-1,14,13,2,-1,2,3,14,-1,9,14,3,-1,3,4,9,-1,11,5,0,-1,0,8,11,-1,13,12,6,-1,6,2,13,-1,49,16,7,-1,7,0,5,-1,1,10,9,-1,9,4,1,-1,3,2,20,-1,20,19,3,-1,2,6,21,-1,21,20,2,-1,6,18,53,-1,53,21,6,-1,7,5,23,-1,23,22,7,-1,5,1,24,-1,24,23,5,-1,1,4,25,-1,25,24,1,-1,4,3,19,-1,19,25,4,-1,10,11,27,-1,27,26,10,-1,11,8,28,-1,28,27,11,-1,8,15,29,-1,29,28,8,-1,17,12,30,-1,30,62,17,-1,12,13,31,-1,31,30,12,-1,13,14,32,-1,32,31,13,-1,14,9,33,-1,33,32,14,-1,9,10,26,-1,26,33,9,-1,16,35,34,-1,34,15,16,-1,34,36,15,-1,38,37,40,-1,40,39,38,-1,18,17,42,-1,42,41,18,-1,44,43,46,-1,46,45,44,-1,48,47,43,-1,43,44,48,-1,40,36,34,-1,34,39,40,-1,45,46,41,-1,41,42,45,-1,49,35,16,-1,35,39,34,-1,38,47,48,-1,48,37,38,-1,43,51,50,-1,50,46,43,-1,46,50,52,-1,52,41,46,-1,41,52,53,-1,53,18,41,-1,35,55,54,-1,54,39,35,-1,39,54,56,-1,56,38,39,-1,38,56,57,-1,57,47,38,-1,47,57,51,-1,51,43,47,-1,37,59,58,-1,58,40,37,-1,40,58,60,-1,60,36,40,-1,36,60,29,-1,29,15,36,-1,17,62,61,-1,61,42,17,-1,42,61,63,-1,63,45,42,-1,45,63,64,-1,64,44,45,-1,44,64,65,-1,65,48,44,-1,48,65,59,-1,59,37,48,-1,27,28,29,-1,29,60,58,-1,58,59,65,-1,29,58,65,-1,65,64,63,-1,63,61,62,-1,65,63,62,-1,62,30,31,-1,31,32,33,-1,62,31,33,-1,65,62,33,-1,29,65,33,-1,27,29,33,-1,27,33,26,-1});
  }
}
private class MFInt32442 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,12,1,-1,1,0,2,-1,1,12,13,-1,4,8,16,-1,16,15,4,-1,11,10,17,-1,17,19,11,-1,21,20,5,-1,5,6,21,-1,14,21,6,-1,6,7,14,-1,16,8,1,-1,1,13,16,-1,20,18,9,-1,9,5,20,-1,3,2,0,-1,0,1,8,-1,4,15,14,-1,14,7,4,-1,6,5,23,-1,23,22,6,-1,5,9,24,-1,24,23,5,-1,10,11,25,-1,25,24,10,-1,0,8,27,-1,27,26,0,-1,8,4,28,-1,28,27,8,-1,4,7,29,-1,29,28,4,-1,7,6,22,-1,22,29,7,-1,15,16,31,-1,31,30,15,-1,16,13,32,-1,32,31,16,-1,13,12,33,-1,33,32,13,-1,19,17,35,-1,35,34,19,-1,18,20,36,-1,36,35,18,-1,20,21,37,-1,37,36,20,-1,21,14,38,-1,38,37,21,-1,14,15,30,-1,30,38,14,-1,42,41,40,-1,40,39,42,-1,40,43,39,-1,45,44,47,-1,47,46,45,-1,49,48,51,-1,51,50,49,-1,53,52,55,-1,55,54,53,-1,57,56,52,-1,52,53,57,-1,47,43,40,-1,40,46,47,-1,54,55,59,-1,59,58,54,-1,60,41,42,-1,41,46,40,-1,45,56,57,-1,57,44,45,-1,52,62,61,-1,61,55,52,-1,55,61,63,-1,63,59,55,-1,50,63,64,-1,64,49,50,-1,41,66,65,-1,65,46,41,-1,46,65,67,-1,67,45,46,-1,45,67,68,-1,68,56,45,-1,56,68,62,-1,62,52,56,-1,44,70,69,-1,69,47,44,-1,47,69,71,-1,71,43,47,-1,43,71,72,-1,72,39,43,-1,48,74,73,-1,73,51,48,-1,58,73,75,-1,75,54,58,-1,54,75,76,-1,76,53,54,-1,53,76,77,-1,77,57,53,-1,57,77,70,-1,70,44,57,-1,31,32,33,-1,33,71,69,-1,69,70,77,-1,33,69,77,-1,77,76,75,-1,75,73,74,-1,77,75,74,-1,74,35,36,-1,36,37,38,-1,74,36,38,-1,77,74,38,-1,33,77,38,-1,31,33,38,-1,31,38,30,-1});
  }
}
private class MFVec3f443 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0385425f ,1.1876289f ,0.06336675f ,0.121005f ,1.198845f ,0.023856752f ,0.09729f ,1.198845f ,-0.05712075f ,0.1156725f ,1.198845f ,-0.055140752f ,0.12575251f ,1.198845f ,-0.04497075f ,0.0747f ,1.198845f ,0.047796752f ,0.0407475f ,1.198845f ,-0.06474825f ,0.035842504f ,1.1948401f ,0.078441754f ,0.0378225f ,1.170945f ,0.06561676f ,0.12993751f ,1.1715525f ,-0.034110002f ,0.13106251f ,1.1702116f ,0.020459251f ,0.080662504f ,1.1727495f ,0.055379253f ,0.0407475f ,1.1715525f ,-0.07012576f ,0.09639f ,1.1715525f ,-0.061193254f ,0.10388251f ,1.1715525f ,-0.060383253f ,0f ,1.170945f ,0.06759675f ,0f ,1.1796166f ,0.07895925f ,0f ,1.1715525f ,-0.07314075f ,0f ,1.198845f ,-0.067763254f ,0.11290501f ,1.20843f ,-0.04938075f ,0.09657f ,1.20843f ,-0.051135752f ,0.040117502f ,1.20843f ,-0.05876325f ,0.034222502f ,1.20843f ,0.07205175f ,0.0714375f ,1.20843f ,0.04271175f ,0.1152225f ,1.20843f ,0.02007675f ,0.11956501f ,1.20843f ,-0.042675752f ,0.12755251f ,1.161f ,0.01791675f ,0.0797625f ,1.161f ,0.051014252f ,0.03771f ,1.161f ,0.061071754f ,0f ,1.161f ,0.06302925f ,0.0408825f ,1.161f ,-0.06526575f ,0.0975375f ,1.161f ,-0.056153253f ,0.103185005f ,1.161f ,-0.05554575f ,0.1265175f ,1.161f ,-0.032019753f ,-0.0385425f ,1.1876289f ,0.06336675f ,-0.035842504f ,1.1948401f ,0.078441754f ,-0.0378225f ,1.170945f ,0.06561676f ,-0.13106251f ,1.1702116f ,0.020459251f ,-0.121005f ,1.198845f ,0.023856752f ,-0.0747f ,1.198845f ,0.047796752f ,-0.080662504f ,1.1727495f ,0.055379253f ,-0.0407475f ,1.198845f ,-0.06474825f ,-0.0407475f ,1.1715525f ,-0.07012576f ,-0.1156725f ,1.198845f ,-0.055140752f ,-0.10388251f ,1.1715525f ,-0.060383253f ,-0.09639f ,1.1715525f ,-0.061193254f ,-0.09729f ,1.198845f ,-0.05712075f ,-0.12575251f ,1.198845f ,-0.04497075f ,-0.12993751f ,1.1715525f ,-0.034110002f ,0f ,1.1967751f ,0.07218675f ,-0.09657f ,1.20843f ,-0.051135752f ,-0.11290501f ,1.20843f ,-0.04938075f ,-0.040117502f ,1.20843f ,-0.05876325f ,0f ,1.20843f ,-0.061733253f ,-0.0714375f ,1.20843f ,0.04271175f ,-0.034222502f ,1.20843f ,0.07205175f ,-0.1152225f ,1.20843f ,0.02007675f ,-0.11956501f ,1.20843f ,-0.042675752f ,-0.0797625f ,1.161f ,0.051014252f ,-0.12755251f ,1.161f ,0.01791675f ,-0.03771f ,1.161f ,0.061071754f ,-0.0408825f ,1.161f ,-0.06526575f ,0f ,1.161f ,-0.06828076f ,-0.0975375f ,1.161f ,-0.056153253f ,-0.103185005f ,1.161f ,-0.05554575f ,-0.1265175f ,1.161f ,-0.032019753f });
  }
}
private class MFVec2f444 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0763f ,0.4945f ,0.0877f ,0.4617f ,0.0525f ,0.4715f ,0.0399f ,0.5407f ,0.1491f ,0.4682f ,0.2169f ,0.492f ,0.2035f ,0.4795f ,0.1915f ,0.4696f ,0.1178f ,0.4708f ,0.2635f ,0.4569f ,0.3223f ,0.4193f ,0.3214f ,0.4203f ,0.0639f ,0.4488f ,0.0777f ,0.4495f ,0.1846f ,0.4438f ,0.1504f ,0.4433f ,0.1107f ,0.4532f ,0.3222f ,0.4193f ,0.2633f ,0.457f ,0.3214f ,0.4203f ,0.2198f ,0.4731f ,0.2144f ,0.4674f ,0.2035f ,0.4795f ,0.2169f ,0.492f ,0.2635f ,0.4569f ,0.3214f ,0.4203f ,0.0763f ,0.4945f ,0.1178f ,0.4708f ,0.1491f ,0.4682f ,0.1915f ,0.4696f ,0.1504f ,0.4433f ,0.1107f ,0.4532f ,0.0777f ,0.4495f ,0.0639f ,0.4488f ,0.3214f ,0.4203f ,0.3222f ,0.4193f ,0.2198f ,0.4731f ,0.2144f ,0.4674f ,0.1846f ,0.4438f ,0.0639f ,0.4488f ,0.0877f ,0.4617f ,0.0763f ,0.4945f ,0.0525f ,0.4715f ,0.0777f ,0.4495f ,0.1504f ,0.4433f ,0.1491f ,0.4682f ,0.1178f ,0.4708f ,0.1107f ,0.4532f ,0.3214f ,0.4203f ,0.3214f ,0.4203f ,0.3223f ,0.4193f ,0.3222f ,0.4193f ,0.2035f ,0.4795f ,0.2144f ,0.4674f ,0.2198f ,0.4731f ,0.2169f ,0.492f ,0.1915f ,0.4696f ,0.1846f ,0.4438f ,0.2633f ,0.457f ,0.2635f ,0.4569f ,0.0399f ,0.5407f ,0.2169f ,0.492f ,0.2035f ,0.4795f ,0.2635f ,0.4569f ,0.3214f ,0.4203f ,0.1178f ,0.4708f ,0.0763f ,0.4945f ,0.1491f ,0.4682f ,0.1915f ,0.4696f ,0.1107f ,0.4532f ,0.1504f ,0.4433f ,0.0777f ,0.4495f ,0.0639f ,0.4488f ,0.3222f ,0.4193f ,0.3214f ,0.4203f ,0.2198f ,0.4731f ,0.2144f ,0.4674f ,0.1846f ,0.4438f });
  }
}
private class MFFloat445 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat446 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32447 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,5,12,-1,7,2,19,-1,19,0,7,-1,0,11,7,-1,2,7,5,-1,5,1,2,-1,17,0,19,-1,0,17,6,-1,6,11,0,-1,20,2,1,-1,1,4,20,-1,2,20,19,-1,10,9,15,-1,15,14,10,-1,9,16,15,-1,8,10,14,-1,14,18,8,-1,13,6,17,-1,3,8,18,-1,18,21,3,-1,51,4,1,-1,1,12,51,-1,6,13,16,-1,16,9,6,-1,6,9,23,-1,23,22,6,-1,9,10,24,-1,24,23,9,-1,10,8,25,-1,25,24,10,-1,8,3,56,-1,56,25,8,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,13,29,-1,29,28,16,-1,13,17,30,-1,30,29,13,-1,17,19,31,-1,31,30,17,-1,19,20,63,-1,63,31,19,-1,21,18,32,-1,32,65,21,-1,18,14,26,-1,26,32,18,-1,33,35,34,-1,38,37,36,-1,36,39,38,-1,37,38,40,-1,39,33,34,-1,34,38,39,-1,41,36,37,-1,37,40,42,-1,42,41,37,-1,20,4,33,-1,33,39,20,-1,39,36,20,-1,43,46,45,-1,45,44,43,-1,44,45,47,-1,49,48,46,-1,46,43,49,-1,50,41,42,-1,3,21,48,-1,48,49,3,-1,51,35,33,-1,33,4,51,-1,42,44,47,-1,47,50,42,-1,42,53,52,-1,52,44,42,-1,44,52,54,-1,54,43,44,-1,43,54,55,-1,55,49,43,-1,49,55,56,-1,56,3,49,-1,46,58,57,-1,57,45,46,-1,45,57,59,-1,59,47,45,-1,47,59,60,-1,60,50,47,-1,50,60,61,-1,61,41,50,-1,41,61,62,-1,62,36,41,-1,36,62,63,-1,63,20,36,-1,21,65,64,-1,64,48,21,-1,48,64,58,-1,58,46,48,-1,28,29,30,-1,31,63,62,-1,30,31,62,-1,62,61,60,-1,60,59,57,-1,62,60,57,-1,62,57,58,-1,58,64,65,-1,65,32,26,-1,58,65,26,-1,62,58,26,-1,30,62,26,-1,28,30,26,-1,27,28,26,-1});
  }
}
private class MFInt32448 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,16,-1,4,5,26,-1,26,3,4,-1,3,15,4,-1,5,4,6,-1,6,7,5,-1,22,3,26,-1,3,22,8,-1,8,15,3,-1,27,5,7,-1,7,10,27,-1,5,27,26,-1,14,9,20,-1,20,19,14,-1,9,21,20,-1,13,14,19,-1,19,23,13,-1,18,8,22,-1,11,12,24,-1,24,25,11,-1,17,2,0,-1,0,16,17,-1,8,18,21,-1,21,9,8,-1,8,9,29,-1,29,28,8,-1,9,14,30,-1,30,29,9,-1,14,13,31,-1,31,30,14,-1,12,11,32,-1,32,31,12,-1,19,20,34,-1,34,33,19,-1,20,21,35,-1,35,34,20,-1,21,18,36,-1,36,35,21,-1,18,22,37,-1,37,36,18,-1,22,26,38,-1,38,37,22,-1,26,27,39,-1,39,38,26,-1,25,24,41,-1,41,40,25,-1,23,19,33,-1,33,41,23,-1,42,44,43,-1,47,46,45,-1,45,48,47,-1,46,47,49,-1,48,51,50,-1,50,47,48,-1,52,45,46,-1,46,49,53,-1,53,52,46,-1,55,54,51,-1,51,48,55,-1,48,45,55,-1,56,59,58,-1,58,57,56,-1,57,58,60,-1,62,61,59,-1,59,56,62,-1,63,52,53,-1,65,64,67,-1,67,66,65,-1,68,44,42,-1,42,69,68,-1,53,57,60,-1,60,63,53,-1,53,71,70,-1,70,57,53,-1,57,70,72,-1,72,56,57,-1,56,72,73,-1,73,62,56,-1,66,73,74,-1,74,65,66,-1,59,76,75,-1,75,58,59,-1,58,75,77,-1,77,60,58,-1,60,77,78,-1,78,63,60,-1,63,78,79,-1,79,52,63,-1,52,79,80,-1,80,45,52,-1,45,80,81,-1,81,55,45,-1,64,83,82,-1,82,67,64,-1,61,82,76,-1,76,59,61,-1,35,36,37,-1,38,39,80,-1,37,38,80,-1,80,79,78,-1,78,77,75,-1,80,78,75,-1,80,75,76,-1,76,82,83,-1,83,41,33,-1,76,83,33,-1,80,76,33,-1,37,80,33,-1,35,37,33,-1,34,35,33,-1});
  }
}
private class MFVec3f449 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.070447505f ,1.2065018f ,0.06856426f ,0.030892503f ,1.2076515f ,0.063344255f ,0.03105f ,1.2076515f ,0.07389676f ,0f ,1.2159721f ,-0.06441075f ,0f ,1.1954902f ,0.06858675f ,0.0459675f ,1.2196575f ,0.055716753f ,0.114435f ,1.2175156f ,0.026061753f ,0.0505125f ,1.2231675f ,0.06678676f ,0.0407475f ,1.2159721f ,-0.06139575f ,0.12312001f ,1.2160598f ,-0.051855754f ,0.097852506f ,1.216035f ,-0.054578252f ,0.085612506f ,1.2217726f ,0.047481753f ,0.026595002f ,1.2196575f ,0.048426755f ,0.121005f ,1.1988562f ,0.023834253f ,0.09729f ,1.1988562f ,-0.057143252f ,0.1156725f ,1.1988562f ,-0.055163253f ,0.12575251f ,1.1988562f ,-0.04499325f ,0.0747f ,1.1988562f ,0.047774255f ,0.0407475f ,1.1988562f ,-0.06477075f ,0.035842504f ,1.1948401f ,0.07841925f ,0f ,1.1967931f ,0.07216425f ,0f ,1.1988562f ,-0.067785755f ,0.10989f ,1.2254175f ,0.014699251f ,0.11184751f ,1.2242476f ,-0.04528575f ,0.0973125f ,1.2242476f ,-0.050708253f ,0.0402975f ,1.22418f ,-0.056805752f ,0.096705f ,1.1854777f ,-0.052373253f ,0.11346751f ,1.1854777f ,-0.050573252f ,0.12080251f ,1.1854777f ,-0.04317075f ,0.1163925f ,1.1854777f ,0.02081925f ,0.07209f ,1.1854777f ,0.043701753f ,0.0345375f ,1.1854777f ,0.052724253f ,0.040252503f ,1.1854777f ,-0.06000075f ,-0.030892503f ,1.2076515f ,0.063344255f ,-0.0459675f ,1.2196575f ,0.055716753f ,-0.026595002f ,1.2196575f ,0.048426755f ,-0.035842504f ,1.1948401f ,0.07841925f ,-0.070447505f ,1.2065018f ,0.06856426f ,-0.0505125f ,1.2231675f ,0.06678676f ,-0.03105f ,1.2076515f ,0.07389676f ,-0.085612506f ,1.2217726f ,0.047481753f ,-0.0747f ,1.1988562f ,0.047774255f ,-0.114435f ,1.2175156f ,0.026061753f ,-0.097852506f ,1.216035f ,-0.054578252f ,-0.12312001f ,1.2160598f ,-0.051855754f ,-0.1156725f ,1.1988562f ,-0.055163253f ,-0.09729f ,1.1988562f ,-0.057143252f ,-0.12575251f ,1.1988562f ,-0.04499325f ,-0.0407475f ,1.1988562f ,-0.06477075f ,-0.0407475f ,1.2159721f ,-0.06139575f ,-0.121005f ,1.1988562f ,0.023834253f ,0f ,1.2196575f ,0.04462425f ,-0.11184751f ,1.2242476f ,-0.04528575f ,-0.10989f ,1.2254175f ,0.014699251f ,-0.0973125f ,1.2242476f ,-0.050708253f ,-0.0402975f ,1.22418f ,-0.056805752f ,0f ,1.22418f ,-0.05946075f ,-0.11346751f ,1.1854777f ,-0.050573252f ,-0.096705f ,1.1854777f ,-0.052373253f ,-0.12080251f ,1.1854777f ,-0.04317075f ,-0.1163925f ,1.1854777f ,0.02081925f ,-0.07209f ,1.1854777f ,0.043701753f ,-0.0345375f ,1.1854777f ,0.052724253f ,0f ,1.1854777f ,0.06728175f ,-0.040252503f ,1.1854777f ,-0.06000075f ,0f ,1.1854777f ,-0.06297076f });
  }
}
private class MFVec2f450 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4473f ,0.6921f ,0.4449f ,0.6914f ,0.4513f ,0.6918f ,0.1025f ,0.5076f ,0.0865f ,0.5614f ,0.0652f ,0.5465f ,0.0786f ,0.5849f ,0.0516f ,0.5759f ,0.1474f ,0.4856f ,0.1963f ,0.4863f ,0.0346f ,0.5664f ,0.3214f ,0.4203f ,0.3223f ,0.4192f ,0.2638f ,0.4568f ,0.2146f ,0.5039f ,0.1227f ,0.5144f ,0.4468f ,0.6898f ,0.4495f ,0.6881f ,0.1491f ,0.4682f ,0.2169f ,0.492f ,0.2035f ,0.4795f ,0.1915f ,0.4696f ,0.1178f ,0.4708f ,0.2635f ,0.4569f ,0.3223f ,0.4193f ,0.3214f ,0.4203f ,0.0763f ,0.4945f ,0.0399f ,0.5407f ,0.1474f ,0.4856f ,0.1963f ,0.4863f ,0.2146f ,0.5039f ,0.2638f ,0.4568f ,0.3214f ,0.4203f ,0.2169f ,0.492f ,0.2035f ,0.4795f ,0.1915f ,0.4696f ,0.1491f ,0.4682f ,0.1178f ,0.4708f ,0.0763f ,0.4945f ,0.0399f ,0.5407f ,0.3214f ,0.4203f ,0.3223f ,0.4193f ,0.4473f ,0.6921f ,0.4449f ,0.6914f ,0.4468f ,0.6898f ,0.0763f ,0.4945f ,0.1025f ,0.5076f ,0.0865f ,0.5614f ,0.0652f ,0.5465f ,0.1227f ,0.5144f ,0.0786f ,0.5849f ,0.0516f ,0.5759f ,0.1178f ,0.4708f ,0.1474f ,0.4856f ,0.0346f ,0.5664f ,0.0399f ,0.5407f ,0.2146f ,0.5039f ,0.1963f ,0.4863f ,0.2035f ,0.4795f ,0.2169f ,0.492f ,0.1915f ,0.4696f ,0.2635f ,0.4569f ,0.2638f ,0.4568f ,0.1491f ,0.4682f ,0.3214f ,0.4203f ,0.3214f ,0.4203f ,0.3223f ,0.4192f ,0.3223f ,0.4193f ,0.4495f ,0.6881f ,0.4513f ,0.6918f ,0.1963f ,0.4863f ,0.1474f ,0.4856f ,0.2146f ,0.5039f ,0.2638f ,0.4568f ,0.3214f ,0.4203f ,0.2035f ,0.4795f ,0.2169f ,0.492f ,0.1915f ,0.4696f ,0.1491f ,0.4682f ,0.1178f ,0.4708f ,0.0763f ,0.4945f ,0.0399f ,0.5407f ,0.3223f ,0.4193f ,0.3214f ,0.4203f });
  }
}
private class MFFloat451 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat452 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32453 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,5,3,-1,3,2,1,-1,5,6,3,-1,7,27,3,-1,3,6,7,-1,0,1,2,-1,43,11,10,-1,10,4,43,-1,5,1,12,-1,1,0,12,-1,35,26,12,-1,43,4,12,-1,4,5,12,-1,72,28,9,-1,9,28,27,-1,27,7,9,-1,5,4,10,-1,10,6,5,-1,29,72,8,-1,26,35,14,-1,14,49,26,-1,35,0,15,-1,15,14,35,-1,17,16,18,-1,18,19,17,-1,16,27,28,-1,28,18,16,-1,13,2,16,-1,27,16,2,-1,2,3,27,-1,19,18,29,-1,29,8,19,-1,18,28,72,-1,72,29,18,-1,0,13,15,-1,21,20,23,-1,23,61,21,-1,20,22,24,-1,24,23,20,-1,22,17,19,-1,19,24,22,-1,20,21,49,-1,49,14,20,-1,22,20,14,-1,14,15,22,-1,15,17,22,-1,61,23,30,-1,30,25,61,-1,23,24,33,-1,33,30,23,-1,24,19,8,-1,8,33,24,-1,0,2,13,-1,15,13,17,-1,16,17,13,-1,68,69,32,-1,32,31,68,-1,30,33,32,-1,33,8,34,-1,33,34,31,-1,31,32,33,-1,32,69,25,-1,25,30,32,-1,12,0,35,-1,37,36,58,-1,58,38,37,-1,38,58,39,-1,40,39,58,-1,58,41,40,-1,51,36,37,-1,43,42,44,-1,44,11,43,-1,38,12,37,-1,37,12,51,-1,45,12,26,-1,43,12,42,-1,42,12,38,-1,73,47,56,-1,47,40,41,-1,41,56,47,-1,38,39,44,-1,44,42,38,-1,46,59,73,-1,26,49,48,-1,48,45,26,-1,45,48,50,-1,50,51,45,-1,54,53,52,-1,52,55,54,-1,55,52,56,-1,56,41,55,-1,57,55,36,-1,41,58,36,-1,36,55,41,-1,53,59,46,-1,46,52,53,-1,52,46,73,-1,73,56,52,-1,51,50,57,-1,21,61,60,-1,60,62,21,-1,62,60,63,-1,63,64,62,-1,64,63,53,-1,53,54,64,-1,62,48,49,-1,49,21,62,-1,64,50,48,-1,48,62,64,-1,50,64,54,-1,61,25,65,-1,65,60,61,-1,60,65,66,-1,66,63,60,-1,63,66,59,-1,59,53,63,-1,51,57,36,-1,50,54,57,-1,55,57,54,-1,68,67,70,-1,70,69,68,-1,65,70,66,-1,66,71,59,-1,66,70,67,-1,67,71,66,-1,70,65,25,-1,25,69,70,-1,12,45,51,-1,81,82,83,-1,81,83,84,-1,81,84,85,-1,85,86,87,-1,81,85,87,-1,88,89,90,-1,88,90,91,-1,87,88,91,-1,91,74,75,-1,91,75,76,-1,87,91,76,-1,87,76,77,-1,81,87,77,-1,81,77,78,-1,81,78,79,-1,81,79,80,-1,7,6,75,-1,75,74,7,-1,6,10,76,-1,76,75,6,-1,10,11,77,-1,77,76,10,-1,11,44,78,-1,78,77,11,-1,44,39,79,-1,79,78,44,-1,39,40,80,-1,80,79,39,-1,40,47,81,-1,81,80,40,-1,47,73,82,-1,82,81,47,-1,73,59,83,-1,83,82,73,-1,59,71,84,-1,84,83,59,-1,71,67,85,-1,85,84,71,-1,67,68,86,-1,86,85,67,-1,68,31,87,-1,87,86,68,-1,31,34,88,-1,88,87,31,-1,34,8,89,-1,89,88,34,-1,8,72,90,-1,90,89,8,-1,72,9,91,-1,91,90,72,-1,9,7,74,-1,74,91,9,-1});
  }
}
private class MFInt32454 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,0,-1,0,16,14,-1,15,19,0,-1,21,10,11,-1,11,18,21,-1,5,2,1,-1,6,25,24,-1,24,4,6,-1,3,2,13,-1,2,5,13,-1,66,7,13,-1,6,4,17,-1,4,15,17,-1,20,9,23,-1,23,9,10,-1,10,21,23,-1,15,4,24,-1,24,19,15,-1,12,20,22,-1,48,47,26,-1,26,27,48,-1,47,49,28,-1,28,26,47,-1,31,32,29,-1,29,30,31,-1,32,53,54,-1,54,29,32,-1,33,50,32,-1,53,32,50,-1,50,51,53,-1,30,29,55,-1,55,56,30,-1,29,54,52,-1,52,55,29,-1,49,33,28,-1,36,41,40,-1,40,35,36,-1,37,39,38,-1,38,34,37,-1,39,31,30,-1,30,38,39,-1,42,36,43,-1,43,45,42,-1,39,37,26,-1,26,28,39,-1,28,31,39,-1,35,44,57,-1,57,46,35,-1,34,38,65,-1,65,58,34,-1,38,30,56,-1,56,65,38,-1,49,50,33,-1,28,33,31,-1,32,31,33,-1,62,63,64,-1,64,61,62,-1,57,65,64,-1,65,56,60,-1,65,60,61,-1,61,64,65,-1,64,63,59,-1,59,57,64,-1,13,8,66,-1,69,68,67,-1,67,70,69,-1,70,67,71,-1,74,73,72,-1,72,75,74,-1,76,78,77,-1,80,79,82,-1,82,81,80,-1,83,84,77,-1,77,84,76,-1,85,84,86,-1,80,87,79,-1,79,87,70,-1,132,90,89,-1,90,74,75,-1,75,89,90,-1,70,71,82,-1,82,79,70,-1,88,91,132,-1,94,93,92,-1,92,95,94,-1,95,92,96,-1,96,97,95,-1,100,99,98,-1,98,101,100,-1,101,98,102,-1,102,103,101,-1,104,101,105,-1,103,106,105,-1,105,101,103,-1,99,108,107,-1,107,98,99,-1,98,107,109,-1,109,102,98,-1,97,96,104,-1,112,111,110,-1,110,113,112,-1,116,115,114,-1,114,117,116,-1,117,114,99,-1,99,100,117,-1,120,119,118,-1,118,112,120,-1,117,96,92,-1,92,116,117,-1,96,117,100,-1,111,122,121,-1,121,123,111,-1,115,125,124,-1,124,114,115,-1,114,124,108,-1,108,99,114,-1,97,104,105,-1,96,100,104,-1,101,104,100,-1,127,126,129,-1,129,128,127,-1,121,129,124,-1,124,130,108,-1,124,129,126,-1,126,130,124,-1,129,121,131,-1,131,128,129,-1,84,85,133,-1,141,142,143,-1,141,143,144,-1,141,144,145,-1,145,146,147,-1,141,145,147,-1,148,149,150,-1,148,150,151,-1,147,148,151,-1,151,134,135,-1,151,135,136,-1,147,151,136,-1,147,136,137,-1,141,147,137,-1,141,137,138,-1,141,138,139,-1,141,139,140,-1,21,18,135,-1,135,134,21,-1,19,24,136,-1,136,135,19,-1,24,25,137,-1,137,136,24,-1,81,82,138,-1,138,137,81,-1,82,71,139,-1,139,138,82,-1,73,74,140,-1,140,139,73,-1,74,90,141,-1,141,140,74,-1,90,132,142,-1,142,141,90,-1,132,91,143,-1,143,142,132,-1,108,130,144,-1,144,143,108,-1,130,126,145,-1,145,144,130,-1,126,127,146,-1,146,145,126,-1,62,61,147,-1,147,146,62,-1,61,60,148,-1,148,147,61,-1,60,56,149,-1,149,148,60,-1,22,20,150,-1,150,149,22,-1,20,23,151,-1,151,150,20,-1,23,21,134,-1,134,151,23,-1});
  }
}
private class MFVec3f455 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.033075f ,1.2579751f ,-0.03963825f ,0.045360003f ,1.25748f ,-0.01283175f ,0.065565005f ,1.2474451f ,-0.0116685005f ,0.0717075f ,1.2279465f ,0.01555425f ,0.017563501f ,1.2448801f ,0.017016752f ,0.0353925f ,1.2507526f ,0.0058162496f ,0.0459675f ,1.2196013f ,0.055739254f ,0.0505125f ,1.223109f ,0.06680925f ,0.12312001f ,1.2160058f ,-0.051833253f ,0.085612506f ,1.221714f ,0.047504254f ,0.026595002f ,1.2196013f ,0.048449256f ,0f ,1.2196013f ,0.04464675f ,0f ,1.2494925f ,-0.014949f ,0.058477502f ,1.2676951f ,-0.050798252f ,0.02166525f ,1.2682351f ,-0.09008326f ,0.045787502f ,1.2688426f ,-0.082500756f ,0.0773775f ,1.2662326f ,-0.01090125f ,0.088942505f ,1.2468376f ,-0.06927075f ,0.1141425f ,1.2543751f ,-0.01090125f ,0.104737505f ,1.2256628f ,-0.05921325f ,0.023219999f ,1.2041034f ,-0.11877075f ,0f ,1.2043036f ,-0.12180825f ,0.053775005f ,1.2127929f ,-0.10722825f ,0.037732504f ,1.12887f ,-0.08997075f ,0.092700005f ,1.1629801f ,-0.087383255f ,0f ,1.14003f ,-0.07685325f ,0f ,1.2536776f ,-0.04998825f ,0.067095004f ,1.2424501f ,0.029909251f ,0.09945001f ,1.235664f ,0.028199252f ,0.126045f ,1.2309728f ,-0.0149715f ,0.0407475f ,1.1433825f ,-0.07383826f ,0.0407475f ,1.2159181f ,-0.061373252f ,0.0412425f ,1.16496f ,-0.065130755f ,0.09542251f ,1.16496f ,-0.065130755f ,0.0950625f ,1.2160058f ,-0.051833253f ,0.015588f ,1.2531825f ,-0.047580753f ,-0.065565005f ,1.2474451f ,-0.0116685005f ,-0.045360003f ,1.25748f ,-0.01283175f ,-0.0353925f ,1.2507526f ,0.0058162496f ,-0.0459675f ,1.2196013f ,0.055739254f ,-0.0505125f ,1.223109f ,0.06680925f ,-0.067095004f ,1.2424501f ,0.029909251f ,-0.017563501f ,1.2448801f ,0.017016752f ,0f ,1.2446775f ,0.01976175f ,-0.026595002f ,1.2196013f ,0.048449256f ,-0.015588f ,1.2531825f ,-0.047580753f ,-0.126045f ,1.2309728f ,-0.0149715f ,-0.085612506f ,1.221714f ,0.047504254f ,-0.02166525f ,1.2682351f ,-0.09008326f ,0f ,1.2677176f ,-0.093795754f ,-0.045787502f ,1.2688426f ,-0.082500756f ,-0.033075f ,1.2579751f ,-0.03963825f ,-0.1141425f ,1.2543751f ,-0.01090125f ,-0.104737505f ,1.2256628f ,-0.05921325f ,-0.088942505f ,1.2468376f ,-0.06927075f ,-0.0773775f ,1.2662326f ,-0.01090125f ,-0.09945001f ,1.235664f ,0.028199252f ,-0.058477502f ,1.2676951f ,-0.050798252f ,-0.0717075f ,1.2279465f ,0.01555425f ,-0.12312001f ,1.2160058f ,-0.051833253f ,-0.037732504f ,1.12887f ,-0.08997075f ,0f ,1.1216251f ,-0.09264825f ,-0.023219999f ,1.2041034f ,-0.11877075f ,-0.092700005f ,1.1629801f ,-0.087383255f ,-0.053775005f ,1.2127929f ,-0.10722825f ,-0.0407475f ,1.1433825f ,-0.07383826f ,-0.09542251f ,1.16496f ,-0.065130755f ,-0.0407475f ,1.2159181f ,-0.061373252f ,0f ,1.2159181f ,-0.06438825f ,0f ,1.16496f ,-0.065130755f ,-0.0412425f ,1.16496f ,-0.065130755f ,-0.0950625f ,1.2160058f ,-0.051833253f ,0.114435f ,1.2174616f ,0.026084252f ,-0.114435f ,1.2174616f ,0.026084252f ,0.0525825f ,1.2095506f ,0.06381675f ,0.049095f ,1.2095506f ,0.05783175f ,0.027630001f ,1.2095506f ,0.047796752f ,0f ,1.2095506f ,0.04383675f ,-0.027630001f ,1.2095506f ,0.047796752f ,-0.049095f ,1.2095506f ,0.05783175f ,-0.0525825f ,1.2095506f ,0.06381675f ,-0.083385006f ,1.2095506f ,0.045929253f ,-0.110542506f ,1.2095506f ,0.02525175f ,-0.118530005f ,1.2095506f ,-0.04773825f ,-0.094702505f ,1.2095506f ,-0.04773825f ,-0.040252503f ,1.2095506f ,-0.05730075f ,0f ,1.2095506f ,-0.060293254f ,0.040252503f ,1.2095506f ,-0.05730075f ,0.094702505f ,1.2095506f ,-0.04773825f ,0.118530005f ,1.2095506f ,-0.04773825f ,0.110542506f ,1.2095506f ,0.02525175f ,0.083385006f ,1.2095506f ,0.045929253f });
  }
}
private class MFVec2f456 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4416f ,0.6747f ,0.4535f ,0.6485f ,0.4483f ,0.6438f ,0.4499f ,0.6371f ,0.4594f ,0.6763f ,0.4399f ,0.6472f ,0.4645f ,0.6783f ,0.4385f ,0.6236f ,0.4279f ,0.6258f ,0.1412f ,0.5207f ,0.1108f ,0.5655f ,0.1073f ,0.5839f ,0.1708f ,0.4854f ,0.4376f ,0.6345f ,0.4528f ,0.6648f ,0.4548f ,0.6714f ,0.4459f ,0.6652f ,0.4669f ,0.6678f ,0.0786f ,0.5849f ,0.4476f ,0.6884f ,0.1474f ,0.4856f ,0.0865f ,0.5614f ,0.1963f ,0.4863f ,0.1227f ,0.5144f ,0.4539f ,0.6879f ,0.4621f ,0.6889f ,0.2661f ,0.5914f ,0.3505f ,0.5919f ,0.241f ,0.592f ,0.1724f ,0.5255f ,0.2089f ,0.5196f ,0.2133f ,0.556f ,0.1645f ,0.5709f ,0.2067f ,0.5908f ,0.2708f ,0.4736f ,0.347f ,0.4317f ,0.3616f ,0.5328f ,0.2733f ,0.5359f ,0.238f ,0.493f ,0.249f ,0.5451f ,0.3477f ,0.431f ,0.3623f ,0.5333f ,0.3623f ,0.5333f ,0.3505f ,0.5919f ,0.3477f ,0.431f ,0.3511f ,0.5932f ,0.3206f ,0.4193f ,0.2505f ,0.5754f ,0.3554f ,0.5911f ,0.2112f ,0.5805f ,0.1632f ,0.5887f ,0.1073f ,0.5839f ,0.1474f ,0.4856f ,0.1108f ,0.5655f ,0.1412f ,0.5207f ,0.1708f ,0.4854f ,0.1963f ,0.4863f ,0.3223f ,0.4192f ,0.2638f ,0.4568f ,0.3206f ,0.4193f ,0.1963f ,0.4863f ,0.1963f ,0.4863f ,0.1963f ,0.4863f ,0.2252f ,0.4828f ,0.2252f ,0.4828f ,0.2252f ,0.4828f ,0.4337f ,0.6239f ,0.4689f ,0.6806f ,0.4689f ,0.6702f ,0.4627f ,0.667f ,0.4583f ,0.6722f ,0.4578f ,0.6906f ,0.1073f ,0.5839f ,0.0786f ,0.5849f ,0.0865f ,0.5614f ,0.1108f ,0.5655f ,0.4514f ,0.6379f ,0.4463f ,0.6454f ,0.4498f ,0.6514f ,0.4521f ,0.6748f ,0.4466f ,0.6744f ,0.4444f ,0.685f ,0.4523f ,0.6875f ,0.4395f ,0.6457f ,0.4393f ,0.633f ,0.4295f ,0.6275f ,0.4284f ,0.6322f ,0.4488f ,0.6639f ,0.1708f ,0.4854f ,0.1412f ,0.5207f ,0.1227f ,0.5144f ,0.1963f ,0.4863f ,0.2661f ,0.5914f ,0.3505f ,0.5919f ,0.3554f ,0.5911f ,0.2505f ,0.5754f ,0.241f ,0.592f ,0.2112f ,0.5805f ,0.1724f ,0.5255f ,0.2089f ,0.5196f ,0.2133f ,0.556f ,0.1645f ,0.5709f ,0.1412f ,0.5207f ,0.1108f ,0.5655f ,0.2067f ,0.5908f ,0.1632f ,0.5887f ,0.1073f ,0.5839f ,0.1708f ,0.4854f ,0.1963f ,0.4863f ,0.1474f ,0.4856f ,0.3477f ,0.431f ,0.347f ,0.4317f ,0.3616f ,0.5328f ,0.3623f ,0.5333f ,0.238f ,0.493f ,0.2708f ,0.4736f ,0.2733f ,0.5359f ,0.249f ,0.5451f ,0.3505f ,0.5919f ,0.3511f ,0.5932f ,0.3623f ,0.5333f ,0.3223f ,0.4192f ,0.3206f ,0.4193f ,0.3477f ,0.431f ,0.2252f ,0.4828f ,0.2638f ,0.4568f ,0.1963f ,0.4863f ,0.1963f ,0.4863f ,0.2252f ,0.4828f ,0.2252f ,0.4828f ,0.1963f ,0.4863f ,0.3206f ,0.4193f ,0.1474f ,0.4856f ,0.4323f ,0.622f ,0.0865f ,0.5614f ,0.0786f ,0.5849f ,0.4539f ,0.6879f ,0.4621f ,0.6889f ,0.4523f ,0.6875f ,0.4578f ,0.6906f ,0.0865f ,0.5614f ,0.1227f ,0.5144f ,0.1474f ,0.4856f ,0.1474f ,0.4856f ,0.1227f ,0.5144f ,0.1963f ,0.4863f ,0.1963f ,0.4863f ,0.1963f ,0.4863f ,0.1963f ,0.4863f ,0.1999f ,0.4849f ,0.1421f ,0.507f ,0.1227f ,0.5144f });
  }
}
private class MFFloat457 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat458 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32459 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1});
  }
}
private class MFInt32460 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1});
  }
}
private class MFVec3f461 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01208025f ,1.2477847f ,-0.04035375f ,0f ,1.2491865f ,-0.041951254f ,0.025627503f ,1.249326f ,-0.03419775f ,0.035145003f ,1.2486916f ,-0.013423501f ,0.0274275f ,1.2448148f ,0.0010282503f ,0f ,1.2373695f ,0.011823752f ,0.013612501f ,1.2376125f ,0.009708749f ,-0.01208025f ,1.2477847f ,-0.04035375f ,-0.025627503f ,1.2493237f ,-0.03419775f ,-0.035145003f ,1.2486916f ,-0.013423501f ,-0.0274275f ,1.2448148f ,0.0010305007f ,-0.013612501f ,1.2376125f ,0.009708749f ,0f ,1.2293775f ,-0.03819375f ,0.011121751f ,1.2291683f ,-0.036774002f ,0.022477502f ,1.2283965f ,-0.031556252f ,0.030195002f ,1.225917f ,-0.014760001f ,0.02421f ,1.224288f ,-0.0037282505f ,0.011988001f ,1.223199f ,0.0036562507f ,0f ,1.2229267f ,0.0054990007f ,-0.011988001f ,1.223199f ,0.0036562507f ,-0.02421f ,1.224288f ,-0.0037282505f ,-0.030195002f ,1.225917f ,-0.014757751f ,-0.022477502f ,1.2283965f ,-0.031556252f ,-0.011121751f ,1.2291683f ,-0.036774002f ,0.01208025f ,1.2574283f ,-0.04035375f ,0.025627503f ,1.2574283f ,-0.03419775f ,0.035145003f ,1.2574283f ,-0.013423501f ,0.0274275f ,1.2574283f ,0.0010305007f ,0f ,1.2574283f ,0.011823752f ,-0.013612501f ,1.2574283f ,0.009708749f ,-0.025627503f ,1.2574283f ,-0.03419775f ,-0.035145003f ,1.2574283f ,-0.013423501f ,0f ,1.2574283f ,-0.041951254f ,0.013612501f ,1.2574283f ,0.009708749f ,-0.01208025f ,1.2574283f ,-0.04035375f ,-0.0274275f ,1.2574283f ,0.0010305007f ,0.011130751f ,1.2618787f ,-0.03609675f ,0f ,1.2618787f ,-0.037563752f ,-0.011130751f ,1.2618787f ,-0.03609675f ,-0.022680001f ,1.2618787f ,-0.030849751f ,-0.030622499f ,1.2618787f ,-0.013511251f ,-0.0245475f ,1.2618787f ,-0.0021600004f ,-0.0122895f ,1.2618787f ,0.00555075f ,0f ,1.2618787f ,0.0074587516f ,0.0122895f ,1.2618787f ,0.00555075f ,0.0245475f ,1.2618787f ,-0.0021600004f ,0.030622499f ,1.2618787f ,-0.013513501f ,0.022680001f ,1.2618787f ,-0.030849751f });
  }
}
private class MFVec2f462 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f ,0.6285f ,0.3906f ,0.6293f ,0.4094f ,0.632f ,0.4164f ,0.6316f ,0.4107f ,0.6267f ,0.3906f ,0.6224f ,0.4006f ,0.6225f ,0.3818f ,0.6285f ,0.3719f ,0.632f ,0.3649f ,0.6316f ,0.3706f ,0.6267f ,0.3807f ,0.6225f ,0.3906f ,0.6293f ,0.3995f ,0.6285f ,0.4094f ,0.632f ,0.4164f ,0.6316f ,0.4107f ,0.6267f ,0.4006f ,0.6225f ,0.3906f ,0.6224f ,0.3807f ,0.6225f ,0.3706f ,0.6267f ,0.3649f ,0.6316f ,0.3719f ,0.632f ,0.3818f ,0.6285f ,0.3995f ,0.6534f ,0.4094f ,0.6549f ,0.4164f ,0.6547f ,0.4107f ,0.6527f ,0.3906f ,0.6475f ,0.3807f ,0.6518f ,0.3719f ,0.6549f ,0.3649f ,0.6547f ,0.3906f ,0.6538f ,0.4006f ,0.6518f ,0.3818f ,0.6534f ,0.3706f ,0.6527f ,0.3995f ,0.6534f ,0.3906f ,0.6538f ,0.3818f ,0.6534f ,0.3719f ,0.6549f ,0.3649f ,0.6547f ,0.3706f ,0.6527f ,0.3807f ,0.6518f ,0.3906f ,0.6475f ,0.4006f ,0.6518f ,0.4107f ,0.6527f ,0.4164f ,0.6547f ,0.4094f ,0.6549f });
  }
}
private class MFFloat463 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat464 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32465 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFInt32466 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFVec3f467 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01208025f ,1.2700822f ,-0.04035375f ,0.025627503f ,1.2700822f ,-0.03419775f ,0.035145003f ,1.2700822f ,-0.013423501f ,0.0274275f ,1.2700822f ,0.0010305007f ,0f ,1.2700822f ,0.011823752f ,-0.013612501f ,1.2700822f ,0.009708749f ,-0.025627503f ,1.2700822f ,-0.03419775f ,-0.035145003f ,1.2700822f ,-0.013423501f ,0f ,1.2700822f ,-0.041951254f ,0.013612501f ,1.2700822f ,0.009708749f ,-0.01208025f ,1.2700822f ,-0.04035375f ,-0.0274275f ,1.2700822f ,0.0010305007f ,0.01208025f ,1.2576106f ,-0.04035375f ,0.025627503f ,1.2576106f ,-0.03419775f ,0.035145003f ,1.2576106f ,-0.013423501f ,0.0274275f ,1.2576106f ,0.0010305007f ,0f ,1.2576106f ,0.011823752f ,-0.013612501f ,1.2576106f ,0.009708749f ,-0.025627503f ,1.2576106f ,-0.03419775f ,-0.035145003f ,1.2576106f ,-0.013423501f ,0f ,1.2576106f ,-0.041951254f ,0.013612501f ,1.2576106f ,0.009708749f ,-0.01208025f ,1.2576106f ,-0.04035375f ,-0.0274275f ,1.2576106f ,0.0010305007f ,0.011130751f ,1.2745351f ,-0.03609675f ,0f ,1.2745351f ,-0.037563752f ,-0.011130751f ,1.2745351f ,-0.03609675f ,-0.022680001f ,1.2745351f ,-0.030849751f ,-0.030622499f ,1.2745351f ,-0.013511251f ,-0.0245475f ,1.2745351f ,-0.0021600004f ,-0.0122895f ,1.2745351f ,0.00555075f ,0f ,1.2745351f ,0.0074587516f ,0.0122895f ,1.2745351f ,0.00555075f ,0.0245475f ,1.2745351f ,-0.0021600004f ,0.030622499f ,1.2745351f ,-0.013511251f ,0.022680001f ,1.2745351f ,-0.030849751f ,0f ,1.2522262f ,-0.037563752f ,0.011130751f ,1.2522262f ,-0.03609675f ,0.022680001f ,1.2522262f ,-0.030849751f ,0.030622499f ,1.2522262f ,-0.013513501f ,0.0245475f ,1.2522262f ,-0.0021600004f ,0.0122895f ,1.2522262f ,0.00555075f ,0f ,1.2522262f ,0.0074587516f ,-0.0122895f ,1.2522262f ,0.00555075f ,-0.0245475f ,1.2522262f ,-0.0021600004f ,-0.030622499f ,1.2522262f ,-0.013511251f ,-0.022680001f ,1.2522262f ,-0.030849751f ,-0.011130751f ,1.2522262f ,-0.03609675f });
  }
}
private class MFVec2f468 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f ,0.6565f ,0.4094f ,0.6578f ,0.4164f ,0.6576f ,0.4107f ,0.6559f ,0.3906f ,0.6507f ,0.3807f ,0.6555f ,0.3719f ,0.6578f ,0.3649f ,0.6576f ,0.3906f ,0.6568f ,0.4006f ,0.6555f ,0.3818f ,0.6565f ,0.3706f ,0.6559f ,0.3995f ,0.6534f ,0.4094f ,0.6549f ,0.4164f ,0.6547f ,0.4107f ,0.6527f ,0.3906f ,0.6475f ,0.3807f ,0.6518f ,0.3719f ,0.6549f ,0.3649f ,0.6547f ,0.3906f ,0.6538f ,0.4006f ,0.6518f ,0.3818f ,0.6534f ,0.3706f ,0.6527f ,0.3995f ,0.6565f ,0.3906f ,0.6568f ,0.3818f ,0.6565f ,0.3719f ,0.6578f ,0.3649f ,0.6576f ,0.3706f ,0.6559f ,0.3807f ,0.6555f ,0.3906f ,0.6507f ,0.4006f ,0.6555f ,0.4107f ,0.6559f ,0.4164f ,0.6576f ,0.4094f ,0.6578f ,0.3906f ,0.6538f ,0.3995f ,0.6534f ,0.4094f ,0.6549f ,0.4164f ,0.6547f ,0.4107f ,0.6527f ,0.4006f ,0.6518f ,0.3906f ,0.6475f ,0.3807f ,0.6518f ,0.3706f ,0.6527f ,0.3649f ,0.6547f ,0.3719f ,0.6549f ,0.3818f ,0.6534f });
  }
}
private class MFFloat469 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat470 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32471 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFInt32472 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFVec3f473 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01208025f ,1.282176f ,-0.04035375f ,0.025627503f ,1.282176f ,-0.03419775f ,0.035145003f ,1.282176f ,-0.013423501f ,0.0274275f ,1.282176f ,0.0010305007f ,0f ,1.282176f ,0.011823752f ,-0.013612501f ,1.282176f ,0.009708749f ,-0.025627503f ,1.282176f ,-0.03419775f ,-0.035145003f ,1.282176f ,-0.013423501f ,0f ,1.282176f ,-0.041951254f ,0.013612501f ,1.282176f ,0.009708749f ,-0.01208025f ,1.282176f ,-0.04035375f ,-0.0274275f ,1.282176f ,0.0010305007f ,0.01208025f ,1.269927f ,-0.04035375f ,0.025627503f ,1.269927f ,-0.03419775f ,0.035145003f ,1.269927f ,-0.013423501f ,0.0274275f ,1.269927f ,0.0010305007f ,0f ,1.269927f ,0.011823752f ,-0.013612501f ,1.269927f ,0.009708749f ,-0.025627503f ,1.269927f ,-0.03419775f ,-0.035145003f ,1.269927f ,-0.013423501f ,0f ,1.269927f ,-0.041951254f ,0.013612501f ,1.269927f ,0.009708749f ,-0.01208025f ,1.269927f ,-0.04035375f ,-0.0274275f ,1.269927f ,0.0010305007f ,0.011130751f ,1.2866266f ,-0.03609675f ,0f ,1.2866266f ,-0.037563752f ,-0.011130751f ,1.2866266f ,-0.03609675f ,-0.022680001f ,1.2866266f ,-0.030849751f ,-0.030622499f ,1.2866266f ,-0.013511251f ,-0.0245475f ,1.2866266f ,-0.0021600004f ,-0.0122895f ,1.2866266f ,0.00555075f ,0f ,1.2866266f ,0.0074587516f ,0.0122895f ,1.2866266f ,0.00555075f ,0.0245475f ,1.2866266f ,-0.0021600004f ,0.030622499f ,1.2866266f ,-0.013511251f ,0.022680001f ,1.2866266f ,-0.030849751f ,0f ,1.2647655f ,-0.037563752f ,0.011130751f ,1.2647655f ,-0.03609675f ,0.022680001f ,1.2647655f ,-0.030849751f ,0.030622499f ,1.2647655f ,-0.013511251f ,0.0245475f ,1.2647655f ,-0.0021600004f ,0.0122895f ,1.2647655f ,0.00555075f ,0f ,1.2647655f ,0.0074587516f ,-0.0122895f ,1.2647655f ,0.00555075f ,-0.0245475f ,1.2647655f ,-0.0021600004f ,-0.030622499f ,1.2647655f ,-0.013511251f ,-0.022680001f ,1.2647655f ,-0.030849751f ,-0.011130751f ,1.2647655f ,-0.03609675f });
  }
}
private class MFVec2f474 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f ,0.6596f ,0.4094f ,0.6606f ,0.4164f ,0.6605f ,0.4107f ,0.6591f ,0.3906f ,0.6538f ,0.3807f ,0.6592f ,0.3719f ,0.6606f ,0.3649f ,0.6605f ,0.3906f ,0.6599f ,0.4006f ,0.6592f ,0.3818f ,0.6596f ,0.3706f ,0.6591f ,0.3995f ,0.6565f ,0.4094f ,0.6578f ,0.4164f ,0.6576f ,0.4107f ,0.6559f ,0.3906f ,0.6507f ,0.3807f ,0.6555f ,0.3719f ,0.6578f ,0.3649f ,0.6576f ,0.3906f ,0.6568f ,0.4006f ,0.6555f ,0.3818f ,0.6565f ,0.3706f ,0.6559f ,0.3995f ,0.6596f ,0.3906f ,0.6599f ,0.3818f ,0.6596f ,0.3719f ,0.6606f ,0.3649f ,0.6605f ,0.3706f ,0.6591f ,0.3807f ,0.6592f ,0.3906f ,0.6538f ,0.4006f ,0.6592f ,0.4107f ,0.6591f ,0.4164f ,0.6605f ,0.4094f ,0.6606f ,0.3906f ,0.6568f ,0.3995f ,0.6565f ,0.4094f ,0.6578f ,0.4164f ,0.6576f ,0.4107f ,0.6559f ,0.4006f ,0.6555f ,0.3906f ,0.6507f ,0.3807f ,0.6555f ,0.3706f ,0.6559f ,0.3649f ,0.6576f ,0.3719f ,0.6578f ,0.3818f ,0.6565f });
  }
}
private class MFFloat475 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat476 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32477 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFInt32478 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFVec3f479 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01208025f ,1.295271f ,-0.04035375f ,0.025627503f ,1.295271f ,-0.03419775f ,0.035145003f ,1.295271f ,-0.013423501f ,0.0274275f ,1.295271f ,0.0010305007f ,0f ,1.295271f ,0.011823752f ,-0.013612501f ,1.295271f ,0.009708749f ,-0.025627503f ,1.295271f ,-0.03419775f ,-0.035145003f ,1.295271f ,-0.013423501f ,0f ,1.295271f ,-0.041951254f ,0.013612501f ,1.295271f ,0.009708749f ,-0.01208025f ,1.295271f ,-0.04035375f ,-0.0274275f ,1.295271f ,0.0010305007f ,0.01208025f ,1.2823133f ,-0.04035375f ,0.025627503f ,1.2823133f ,-0.03419775f ,0.035145003f ,1.2823133f ,-0.013423501f ,0.0274275f ,1.2823133f ,0.0010305007f ,0f ,1.2823133f ,0.011823752f ,-0.013612501f ,1.2823133f ,0.009708749f ,-0.025627503f ,1.2823133f ,-0.03419775f ,-0.035145003f ,1.2823133f ,-0.013423501f ,0f ,1.2823133f ,-0.041951254f ,0.013612501f ,1.2823133f ,0.009708749f ,-0.01208025f ,1.2823133f ,-0.04035375f ,-0.0274275f ,1.2823133f ,0.0010305007f ,0.011130751f ,1.2997216f ,-0.03609675f ,0f ,1.2997216f ,-0.037563752f ,-0.011130751f ,1.2997216f ,-0.03609675f ,-0.022680001f ,1.2997216f ,-0.030849751f ,-0.030622499f ,1.2997216f ,-0.013511251f ,-0.0245475f ,1.2997216f ,-0.0021600004f ,-0.0122895f ,1.2997216f ,0.00555075f ,0f ,1.2997216f ,0.0074587516f ,0.0122895f ,1.2997216f ,0.00555075f ,0.0245475f ,1.2997216f ,-0.0021600004f ,0.030622499f ,1.2997216f ,-0.013511251f ,0.022680001f ,1.2997216f ,-0.030849751f ,0f ,1.2769021f ,-0.037563752f ,0.011130751f ,1.2769021f ,-0.03609675f ,0.022680001f ,1.2769021f ,-0.030849751f ,0.030622499f ,1.2769021f ,-0.013511251f ,0.0245475f ,1.2769021f ,-0.0021600004f ,0.0122895f ,1.2769021f ,0.00555075f ,0f ,1.2769021f ,0.0074587516f ,-0.0122895f ,1.2769021f ,0.00555075f ,-0.0245475f ,1.2769021f ,-0.0021600004f ,-0.030622499f ,1.2769021f ,-0.013511251f ,-0.022680001f ,1.2769021f ,-0.030849751f ,-0.011130751f ,1.2769021f ,-0.03609675f });
  }
}
private class MFVec2f480 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f ,0.6628f ,0.4094f ,0.6635f ,0.4164f ,0.6634f ,0.4107f ,0.6624f ,0.3906f ,0.657f ,0.3807f ,0.6628f ,0.3719f ,0.6635f ,0.3649f ,0.6634f ,0.3906f ,0.6629f ,0.4006f ,0.6628f ,0.3818f ,0.6628f ,0.3706f ,0.6624f ,0.3995f ,0.6596f ,0.4094f ,0.6606f ,0.4164f ,0.6605f ,0.4107f ,0.6591f ,0.3906f ,0.6538f ,0.3807f ,0.6592f ,0.3719f ,0.6606f ,0.3649f ,0.6605f ,0.3906f ,0.6599f ,0.4006f ,0.6592f ,0.3818f ,0.6596f ,0.3706f ,0.6591f ,0.3995f ,0.6628f ,0.3906f ,0.6629f ,0.3818f ,0.6628f ,0.3719f ,0.6635f ,0.3649f ,0.6634f ,0.3706f ,0.6624f ,0.3807f ,0.6628f ,0.3906f ,0.657f ,0.4006f ,0.6628f ,0.4107f ,0.6624f ,0.4164f ,0.6634f ,0.4094f ,0.6635f ,0.3906f ,0.6599f ,0.3995f ,0.6596f ,0.4094f ,0.6606f ,0.4164f ,0.6605f ,0.4107f ,0.6591f ,0.4006f ,0.6592f ,0.3906f ,0.6538f ,0.3807f ,0.6592f ,0.3706f ,0.6591f ,0.3649f ,0.6605f ,0.3719f ,0.6606f ,0.3818f ,0.6596f });
  }
}
private class MFFloat481 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat482 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32483 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFInt32484 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFVec3f485 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01208025f ,1.3066921f ,-0.04035375f ,0.025627503f ,1.3066921f ,-0.03419775f ,0.035145003f ,1.3066921f ,-0.013423501f ,0.0274275f ,1.3066921f ,0.0010305007f ,0f ,1.3066921f ,0.011823752f ,-0.013612501f ,1.3066921f ,0.009708749f ,-0.025627503f ,1.3066921f ,-0.03419775f ,-0.035145003f ,1.3066921f ,-0.013423501f ,0f ,1.3066921f ,-0.041951254f ,0.013612501f ,1.3066921f ,0.009708749f ,-0.01208025f ,1.3066921f ,-0.04035375f ,-0.0274275f ,1.3066921f ,0.0010305007f ,0.01208025f ,1.2951338f ,-0.04035375f ,0.025627503f ,1.2951338f ,-0.03419775f ,0.035145003f ,1.2951338f ,-0.013423501f ,0.0274275f ,1.2951338f ,0.0010305007f ,0f ,1.2951338f ,0.011823752f ,-0.013612501f ,1.2951338f ,0.009708749f ,-0.025627503f ,1.2951338f ,-0.03419775f ,-0.035145003f ,1.2951338f ,-0.013423501f ,0f ,1.2951338f ,-0.041951254f ,0.013612501f ,1.2951338f ,0.009708749f ,-0.01208025f ,1.2951338f ,-0.04035375f ,-0.0274275f ,1.2951338f ,0.0010305007f ,0.011130751f ,1.3111606f ,-0.03609675f ,0f ,1.3111606f ,-0.037563752f ,-0.011130751f ,1.3111606f ,-0.03609675f ,-0.022680001f ,1.3111606f ,-0.030849751f ,-0.030622499f ,1.3111606f ,-0.013511251f ,-0.0245475f ,1.3111606f ,-0.0021600004f ,-0.0122895f ,1.3111606f ,0.00555075f ,0f ,1.3111606f ,0.0074587516f ,0.0122895f ,1.3111606f ,0.00555075f ,0.0245475f ,1.3111606f ,-0.0021600004f ,0.030622499f ,1.3111606f ,-0.013511251f ,0.022680001f ,1.3111606f ,-0.030849751f ,0f ,1.2897046f ,-0.037563752f ,0.011130751f ,1.2897046f ,-0.03609675f ,0.022680001f ,1.2897046f ,-0.030849751f ,0.030622499f ,1.2897046f ,-0.013511251f ,0.0245475f ,1.2897046f ,-0.0021600004f ,0.0122895f ,1.2897046f ,0.00555075f ,0f ,1.2897046f ,0.0074587516f ,-0.0122895f ,1.2897046f ,0.00555075f ,-0.0245475f ,1.2897046f ,-0.0021600004f ,-0.030622499f ,1.2897046f ,-0.013511251f ,-0.022680001f ,1.2897046f ,-0.030849751f ,-0.011130751f ,1.2897046f ,-0.03609675f });
  }
}
private class MFVec2f486 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f ,0.6659f ,0.4094f ,0.6664f ,0.4164f ,0.6663f ,0.4107f ,0.6656f ,0.3906f ,0.6601f ,0.3807f ,0.6665f ,0.3719f ,0.6664f ,0.3649f ,0.6663f ,0.3906f ,0.666f ,0.4006f ,0.6665f ,0.3818f ,0.6659f ,0.3706f ,0.6656f ,0.3995f ,0.6628f ,0.4094f ,0.6635f ,0.4164f ,0.6634f ,0.4107f ,0.6624f ,0.3906f ,0.657f ,0.3807f ,0.6628f ,0.3719f ,0.6635f ,0.3649f ,0.6634f ,0.3906f ,0.6629f ,0.4006f ,0.6628f ,0.3818f ,0.6628f ,0.3706f ,0.6624f ,0.3995f ,0.6659f ,0.3906f ,0.666f ,0.3818f ,0.6659f ,0.3719f ,0.6664f ,0.3649f ,0.6663f ,0.3706f ,0.6656f ,0.3807f ,0.6665f ,0.3906f ,0.6601f ,0.4006f ,0.6665f ,0.4107f ,0.6656f ,0.4164f ,0.6663f ,0.4094f ,0.6664f ,0.3906f ,0.6629f ,0.3995f ,0.6628f ,0.4094f ,0.6635f ,0.4164f ,0.6634f ,0.4107f ,0.6624f ,0.4006f ,0.6628f ,0.3906f ,0.657f ,0.3807f ,0.6628f ,0.3706f ,0.6624f ,0.3649f ,0.6634f ,0.3719f ,0.6635f ,0.3818f ,0.6628f });
  }
}
private class MFFloat487 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat488 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32489 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1});
  }
}
private class MFInt32490 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1});
  }
}
private class MFVec3f491 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01208025f ,1.318536f ,-0.04035375f ,0f ,1.318536f ,-0.041951254f ,0.025627503f ,1.318536f ,-0.03419775f ,0.035145003f ,1.318536f ,-0.0134212505f ,0.0274275f ,1.318536f ,0.0010305007f ,0.013612501f ,1.318536f ,0.009708749f ,0f ,1.318536f ,0.011823752f ,-0.01208025f ,1.318536f ,-0.04035375f ,-0.025627503f ,1.318536f ,-0.03419775f ,-0.035145003f ,1.318536f ,-0.013423501f ,-0.0274275f ,1.318536f ,0.0010305007f ,-0.013612501f ,1.318536f ,0.009708749f ,0.0107955f ,1.3238798f ,-0.0358695f ,0f ,1.3238798f ,-0.0373005f ,-0.0107955f ,1.3238798f ,-0.0358695f ,-0.022149f ,1.3238798f ,-0.030708f ,-0.0299925f ,1.3238798f ,-0.01357875f ,-0.02394f ,1.3238798f ,-0.0022252505f ,-0.011963251f ,1.3238798f ,0.0053032506f ,0f ,1.3238798f ,0.0071595f ,0.011963251f ,1.3238798f ,0.0053032506f ,0.02394f ,1.3238798f ,-0.0022252505f ,0.0299925f ,1.3238798f ,-0.01357875f ,0.022149f ,1.3238798f ,-0.030708f ,0.01208025f ,1.3068405f ,-0.04035375f ,0.025627503f ,1.3068405f ,-0.03419775f ,0.035145003f ,1.3068405f ,-0.0134212505f ,0.0274275f ,1.3068405f ,0.0010305007f ,0f ,1.3068405f ,0.011823752f ,-0.013612501f ,1.3068405f ,0.009708749f ,-0.025627503f ,1.3068405f ,-0.03419775f ,-0.035145003f ,1.3068405f ,-0.013423501f ,0f ,1.3068405f ,-0.041951254f ,0.013612501f ,1.3068405f ,0.009708749f ,-0.01208025f ,1.3068405f ,-0.04035375f ,-0.0274275f ,1.3068405f ,0.0010305007f ,0f ,1.3019716f ,-0.037563752f ,0.011130751f ,1.3019716f ,-0.03609675f ,0.022680001f ,1.3019716f ,-0.030849751f ,0.030622499f ,1.3019716f ,-0.013511251f ,0.0245475f ,1.3019716f ,-0.0021600004f ,0.0122895f ,1.3019716f ,0.00555075f ,0f ,1.3019716f ,0.0074587516f ,-0.0122895f ,1.3019716f ,0.00555075f ,-0.0245475f ,1.3019716f ,-0.0021600004f ,-0.030622499f ,1.3019716f ,-0.013511251f ,-0.022680001f ,1.3019716f ,-0.030849751f ,-0.011130751f ,1.3019716f ,-0.03609675f });
  }
}
private class MFVec2f492 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f ,0.6721f ,0.3906f ,0.6721f ,0.4094f ,0.6721f ,0.4164f ,0.6721f ,0.4107f ,0.6721f ,0.4006f ,0.6738f ,0.3906f ,0.6664f ,0.3818f ,0.6721f ,0.3719f ,0.6721f ,0.3649f ,0.6721f ,0.3706f ,0.6721f ,0.3807f ,0.6738f ,0.3995f ,0.6721f ,0.3906f ,0.6721f ,0.3818f ,0.6721f ,0.3719f ,0.6721f ,0.3649f ,0.6721f ,0.3706f ,0.6721f ,0.3807f ,0.6738f ,0.3906f ,0.6664f ,0.4006f ,0.6738f ,0.4107f ,0.6721f ,0.4164f ,0.6721f ,0.4094f ,0.6721f ,0.3995f ,0.669f ,0.4094f ,0.6692f ,0.4164f ,0.6692f ,0.4107f ,0.6689f ,0.3906f ,0.6632f ,0.3807f ,0.6702f ,0.3719f ,0.6692f ,0.3649f ,0.6692f ,0.3906f ,0.669f ,0.4006f ,0.6702f ,0.3818f ,0.669f ,0.3706f ,0.6689f ,0.3906f ,0.669f ,0.3995f ,0.669f ,0.4094f ,0.6692f ,0.4164f ,0.6692f ,0.4107f ,0.6689f ,0.4006f ,0.6702f ,0.3906f ,0.6632f ,0.3807f ,0.6702f ,0.3706f ,0.6689f ,0.3649f ,0.6692f ,0.3719f ,0.6692f ,0.3818f ,0.669f });
  }
}
private class MFFloat493 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat494 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32495 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFInt32496 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFVec3f497 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.01208025f ,1.331379f ,-0.04035375f ,0.025627503f ,1.331379f ,-0.03419775f ,0.035145003f ,1.331379f ,-0.0134212505f ,0.0274275f ,1.331379f ,0.0010305007f ,0f ,1.331379f ,0.011823752f ,-0.013612501f ,1.331379f ,0.009708749f ,-0.025627503f ,1.331379f ,-0.03419775f ,-0.035145003f ,1.331379f ,-0.013423501f ,0f ,1.331379f ,-0.041951254f ,0.013612501f ,1.331379f ,0.009708749f ,-0.01208025f ,1.331379f ,-0.04035375f ,-0.0274275f ,1.331379f ,0.0010305007f ,0.01208025f ,1.3185495f ,-0.04035375f ,0.025627503f ,1.3185495f ,-0.03419775f ,0.035145003f ,1.3185495f ,-0.013423501f ,0.0274275f ,1.3185495f ,0.0010305007f ,0f ,1.3185495f ,0.011823752f ,-0.013612501f ,1.3185495f ,0.009708749f ,-0.025627503f ,1.3185495f ,-0.03419775f ,-0.035145003f ,1.3185495f ,-0.013423501f ,0f ,1.3185495f ,-0.041951254f ,0.013612501f ,1.3185495f ,0.009708749f ,-0.01208025f ,1.3185495f ,-0.04035375f ,-0.0274275f ,1.3185495f ,0.0010305007f ,0.011130751f ,1.3358318f ,-0.03609675f ,0f ,1.3358318f ,-0.037563752f ,-0.011130751f ,1.3358318f ,-0.03609675f ,-0.022680001f ,1.3358318f ,-0.030849751f ,-0.030622499f ,1.3358318f ,-0.013511251f ,-0.0245475f ,1.3358318f ,-0.0021600004f ,-0.0122895f ,1.3358318f ,0.00555075f ,0f ,1.3358318f ,0.0074587516f ,0.0122895f ,1.3358318f ,0.00555075f ,0.0245475f ,1.3358318f ,-0.0021600004f ,0.030622499f ,1.3358318f ,-0.013511251f ,0.022680001f ,1.3358318f ,-0.030849751f ,0f ,1.3138245f ,-0.037563752f ,0.011130751f ,1.3138245f ,-0.03609675f ,0.022680001f ,1.3138245f ,-0.030849751f ,0.030622499f ,1.3138245f ,-0.013511251f ,0.0245475f ,1.3138245f ,-0.0021600004f ,0.0122895f ,1.3138245f ,0.00555075f ,0f ,1.3138245f ,0.0074587516f ,-0.0122895f ,1.3138245f ,0.00555075f ,-0.0245475f ,1.3138245f ,-0.0021600004f ,-0.030622499f ,1.3138245f ,-0.013511251f ,-0.022680001f ,1.3138245f ,-0.030849751f ,-0.011130751f ,1.3138245f ,-0.03609675f });
  }
}
private class MFVec2f498 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f ,0.669f ,0.4094f ,0.6692f ,0.4164f ,0.6692f ,0.4107f ,0.6689f ,0.3906f ,0.6632f ,0.3807f ,0.6702f ,0.3719f ,0.6692f ,0.3649f ,0.6692f ,0.3906f ,0.669f ,0.4006f ,0.6702f ,0.3818f ,0.669f ,0.3706f ,0.6689f ,0.3995f ,0.6659f ,0.4094f ,0.6664f ,0.4164f ,0.6663f ,0.4107f ,0.6656f ,0.3906f ,0.6601f ,0.3807f ,0.6665f ,0.3719f ,0.6664f ,0.3649f ,0.6663f ,0.3906f ,0.666f ,0.4006f ,0.6665f ,0.3818f ,0.6659f ,0.3706f ,0.6656f ,0.3995f ,0.669f ,0.3906f ,0.669f ,0.3818f ,0.669f ,0.3719f ,0.6692f ,0.3649f ,0.6692f ,0.3706f ,0.6689f ,0.3807f ,0.6702f ,0.3906f ,0.6632f ,0.4006f ,0.6702f ,0.4107f ,0.6689f ,0.4164f ,0.6692f ,0.4094f ,0.6692f ,0.3906f ,0.666f ,0.3995f ,0.6659f ,0.4094f ,0.6664f ,0.4164f ,0.6663f ,0.4107f ,0.6656f ,0.4006f ,0.6665f ,0.3906f ,0.6601f ,0.3807f ,0.6665f ,0.3706f ,0.6656f ,0.3649f ,0.6663f ,0.3719f ,0.6664f ,0.3818f ,0.6659f });
  }
}
private class MFFloat499 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat500 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32501 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {51,38,41,-1,41,43,51,-1,43,52,171,-1,171,151,43,-1,49,42,41,-1,41,38,49,-1,44,186,171,-1,171,52,44,-1,78,76,51,-1,51,43,78,-1,189,78,43,-1,43,151,189,-1,9,172,13,-1,13,10,9,-1,73,193,9,-1,9,10,73,-1,11,50,27,-1,16,13,172,-1,13,67,14,-1,68,15,14,-1,7,6,67,-1,13,16,67,-1,7,67,16,-1,16,172,173,-1,7,16,136,-1,7,136,130,-1,131,132,173,-1,68,19,18,-1,18,15,68,-1,20,32,18,-1,17,8,32,-1,15,66,13,-1,13,14,15,-1,32,23,24,-1,24,17,32,-1,21,24,23,-1,21,22,24,-1,24,22,17,-1,27,25,11,-1,25,31,11,-1,22,28,17,-1,27,30,29,-1,12,26,29,-1,26,27,29,-1,27,28,30,-1,30,28,22,-1,6,14,67,-1,1,34,31,-1,34,36,35,-1,34,35,31,-1,34,1,36,-1,49,37,1,-1,1,40,49,-1,39,37,49,-1,49,38,39,-1,37,39,1,-1,42,49,40,-1,40,0,42,-1,44,52,0,-1,186,44,0,-1,0,149,186,-1,51,76,45,-1,45,76,77,-1,53,45,77,-1,1,39,45,-1,45,53,1,-1,45,39,38,-1,38,51,45,-1,53,77,46,-1,77,74,33,-1,33,46,77,-1,1,53,46,-1,46,36,1,-1,46,33,35,-1,35,36,46,-1,74,50,33,-1,8,17,47,-1,11,31,50,-1,35,33,50,-1,31,35,50,-1,50,74,75,-1,47,75,8,-1,27,50,28,-1,28,50,47,-1,28,47,17,-1,75,73,48,-1,48,73,10,-1,66,48,10,-1,10,13,66,-1,75,66,8,-1,66,75,48,-1,8,66,18,-1,18,32,8,-1,15,18,66,-1,47,50,75,-1,41,52,43,-1,42,0,41,-1,0,52,41,-1,0,54,149,-1,244,245,54,-1,0,56,54,-1,0,40,55,-1,55,57,0,-1,3,57,55,-1,0,57,56,-1,3,62,5,-1,5,62,58,-1,3,64,62,-1,2,61,62,-1,62,64,2,-1,3,60,64,-1,55,40,59,-1,64,60,59,-1,64,59,135,-1,149,54,245,-1,5,57,3,-1,54,5,244,-1,152,63,61,-1,153,63,152,-1,63,5,58,-1,153,244,63,-1,244,5,63,-1,58,61,63,-1,58,62,61,-1,56,5,54,-1,56,57,5,-1,60,3,55,-1,60,55,59,-1,1,133,135,-1,59,40,1,-1,59,1,135,-1,65,135,133,-1,2,65,133,-1,2,64,65,-1,64,135,65,-1,73,75,69,-1,263,193,73,-1,73,69,263,-1,69,75,74,-1,74,71,69,-1,71,74,77,-1,77,72,71,-1,69,71,266,-1,266,263,69,-1,72,70,266,-1,266,71,72,-1,78,72,77,-1,77,76,78,-1,189,70,72,-1,72,78,189,-1,138,123,113,-1,79,122,123,-1,122,79,80,-1,137,124,81,-1,137,81,82,-1,137,82,83,-1,83,79,137,-1,79,83,80,-1,84,116,122,-1,124,84,122,-1,84,119,116,-1,123,122,113,-1,113,122,109,-1,115,138,113,-1,113,114,115,-1,117,286,158,-1,158,112,117,-1,122,116,109,-1,79,123,133,-1,133,123,138,-1,133,137,79,-1,129,138,115,-1,110,117,112,-1,111,117,110,-1,2,133,138,-1,109,85,113,-1,86,113,85,-1,107,294,160,-1,160,126,107,-1,107,126,125,-1,125,108,107,-1,125,127,87,-1,87,108,125,-1,108,87,103,-1,103,104,108,-1,114,301,154,-1,154,115,114,-1,302,114,86,-1,86,159,302,-1,114,113,86,-1,116,105,109,-1,109,105,87,-1,85,88,86,-1,109,87,85,-1,104,174,305,-1,305,108,104,-1,305,175,108,-1,105,103,87,-1,307,91,170,-1,170,150,307,-1,174,104,95,-1,95,162,174,-1,311,150,170,-1,170,177,311,-1,116,90,105,-1,89,90,116,-1,94,168,167,-1,167,93,94,-1,105,90,96,-1,97,95,104,-1});
  }
}
private class MFInt32502 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {104,103,97,-1,120,121,95,-1,95,97,120,-1,105,96,97,-1,97,103,105,-1,120,97,96,-1,96,98,120,-1,121,100,95,-1,163,91,162,-1,93,170,99,-1,98,96,90,-1,90,101,98,-1,99,163,100,-1,110,112,92,-1,101,90,89,-1,89,106,101,-1,92,112,165,-1,165,177,170,-1,175,294,107,-1,107,108,175,-1,119,89,116,-1,118,111,119,-1,118,117,111,-1,152,138,129,-1,2,138,61,-1,61,138,152,-1,87,127,88,-1,88,85,87,-1,124,119,84,-1,119,111,164,-1,111,166,164,-1,111,110,166,-1,92,166,110,-1,133,4,137,-1,133,134,4,-1,160,176,128,-1,128,126,160,-1,126,128,127,-1,127,125,126,-1,80,81,124,-1,124,122,80,-1,82,81,80,-1,80,83,82,-1,129,115,154,-1,154,152,129,-1,94,140,139,-1,139,102,94,-1,93,141,140,-1,140,94,93,-1,99,142,141,-1,141,93,99,-1,100,143,142,-1,142,99,100,-1,121,144,143,-1,143,100,121,-1,120,145,144,-1,144,121,120,-1,98,146,145,-1,145,120,98,-1,101,147,146,-1,146,98,101,-1,106,148,147,-1,147,101,106,-1,106,102,139,-1,139,148,106,-1,114,302,301,-1,88,127,155,-1,155,157,88,-1,127,161,156,-1,156,155,127,-1,352,353,156,-1,156,161,352,-1,156,353,354,-1,155,156,354,-1,155,354,157,-1,127,128,161,-1,161,128,176,-1,176,352,161,-1,168,94,102,-1,102,169,168,-1,170,93,167,-1,169,102,106,-1,106,164,169,-1,170,91,99,-1,99,91,163,-1,100,163,162,-1,162,95,100,-1,91,307,174,-1,174,162,91,-1,164,106,89,-1,164,89,119,-1,165,170,167,-1,92,165,167,-1,167,168,92,-1,166,92,168,-1,168,169,166,-1,164,166,169,-1,165,112,177,-1,177,112,158,-1,158,311,177,-1,180,179,178,-1,178,181,180,-1,179,151,171,-1,171,182,179,-1,183,181,178,-1,178,184,183,-1,185,182,171,-1,171,186,185,-1,187,179,180,-1,180,188,187,-1,189,151,179,-1,179,187,189,-1,9,191,190,-1,190,172,9,-1,192,191,9,-1,9,193,192,-1,194,196,195,-1,197,172,190,-1,190,199,198,-1,200,199,201,-1,202,198,203,-1,190,198,197,-1,202,197,198,-1,197,173,172,-1,202,204,197,-1,202,205,204,-1,206,173,207,-1,200,201,208,-1,208,209,200,-1,210,208,211,-1,212,211,213,-1,201,199,190,-1,190,214,201,-1,211,212,215,-1,215,216,211,-1,217,216,215,-1,217,215,218,-1,215,212,218,-1,196,194,219,-1,219,194,220,-1,218,212,221,-1,196,223,222,-1,224,223,225,-1,225,223,196,-1,196,222,221,-1,222,218,221,-1,203,198,199,-1,226,220,227,-1,227,229,228,-1,227,220,229,-1,227,228,226,-1,183,230,226,-1,226,231,183,-1,232,181,183,-1,183,231,232,-1,231,226,232,-1,184,233,230,-1,230,183,184,-1,185,233,182,-1,186,149,233,-1,233,185,186,-1,180,234,188,-1,234,235,188,-1,236,235,234,-1,226,236,234,-1,234,232,226,-1,234,180,181,-1,181,232,234,-1,236,237,235,-1,235,237,238,-1,238,239,235,-1,226,228,237,-1,237,236,226,-1,237,228,229,-1,229,238,237,-1,239,238,195,-1,213,240,212,-1,194,195,220,-1,229,195,238,-1,220,195,229,-1,195,241,239,-1,240,213,241,-1,196,221,195,-1,221,240,195,-1,221,212,240,-1,241,242,192,-1,242,191,192,-1,214,190,191,-1,191,242,214,-1,241,213,214,-1,214,242,241,-1,213,211,208,-1,208,214,213,-1,201,214,208,-1,240,241,195,-1,178,179,182,-1,184,178,233,-1,233,178,182,-1,233,149,243,-1,244,243,245,-1,233,243,246,-1,233,248,247,-1,247,230,233,-1,249,247,248,-1,233,246,248,-1,249,251,250,-1,251,252,250,-1,249,250,253,-1,254,253,250,-1,250,255,254,-1});
  }
}
private class MFInt32503 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {249,253,256,-1,247,257,230,-1,253,257,256,-1,253,258,257,-1,149,245,243,-1,251,249,248,-1,243,244,251,-1,152,255,259,-1,153,152,259,-1,259,252,251,-1,153,259,244,-1,244,259,251,-1,252,259,255,-1,252,255,250,-1,246,243,251,-1,246,251,248,-1,256,247,249,-1,256,257,247,-1,226,258,260,-1,257,226,230,-1,257,258,226,-1,261,260,258,-1,254,260,261,-1,254,261,253,-1,253,261,258,-1,192,262,241,-1,263,262,192,-1,192,193,263,-1,262,264,239,-1,239,241,262,-1,264,265,235,-1,235,239,264,-1,262,263,266,-1,266,264,262,-1,265,264,266,-1,266,70,265,-1,187,188,235,-1,235,265,187,-1,189,187,265,-1,265,70,189,-1,267,269,268,-1,270,268,271,-1,271,272,270,-1,273,275,274,-1,273,276,275,-1,273,270,277,-1,277,276,273,-1,270,272,277,-1,278,271,279,-1,274,271,278,-1,278,279,280,-1,268,269,271,-1,269,281,271,-1,283,282,269,-1,269,267,283,-1,285,284,158,-1,158,286,285,-1,271,281,279,-1,270,260,268,-1,260,267,268,-1,260,270,273,-1,287,283,267,-1,288,284,285,-1,289,288,285,-1,254,267,260,-1,281,269,290,-1,291,290,269,-1,293,292,160,-1,160,294,293,-1,293,296,295,-1,295,292,293,-1,295,296,297,-1,297,298,295,-1,296,300,299,-1,299,297,296,-1,282,283,154,-1,154,301,282,-1,302,159,291,-1,291,282,302,-1,282,291,269,-1,279,281,303,-1,281,297,303,-1,290,291,304,-1,281,290,297,-1,300,296,305,-1,305,174,300,-1,305,296,175,-1,303,297,299,-1,307,150,306,-1,306,308,307,-1,174,310,309,-1,309,300,174,-1,311,312,306,-1,306,150,311,-1,279,303,313,-1,314,279,313,-1,315,318,317,-1,317,316,315,-1,303,319,313,-1,320,299,300,-1,300,309,320,-1,321,320,309,-1,309,322,321,-1,303,299,320,-1,320,319,303,-1,321,323,319,-1,319,320,321,-1,322,309,324,-1,325,310,308,-1,318,326,306,-1,323,327,313,-1,313,319,323,-1,326,324,325,-1,288,328,284,-1,327,329,314,-1,314,313,327,-1,328,330,284,-1,330,306,312,-1,175,293,294,-1,293,175,296,-1,280,279,314,-1,331,280,289,-1,331,289,285,-1,152,287,267,-1,254,255,267,-1,255,152,267,-1,297,290,304,-1,304,298,297,-1,274,278,280,-1,280,332,289,-1,289,332,333,-1,289,333,288,-1,328,288,333,-1,260,273,334,-1,260,334,335,-1,160,292,336,-1,336,176,160,-1,292,295,298,-1,298,336,292,-1,272,271,274,-1,274,275,272,-1,276,277,272,-1,272,275,276,-1,287,152,154,-1,154,283,287,-1,315,337,339,-1,339,338,315,-1,318,315,338,-1,338,340,318,-1,326,318,340,-1,340,341,326,-1,324,326,341,-1,341,342,324,-1,322,324,342,-1,342,343,322,-1,321,322,343,-1,343,344,321,-1,323,321,344,-1,344,345,323,-1,327,323,345,-1,345,346,327,-1,329,327,346,-1,346,347,329,-1,329,347,339,-1,339,337,329,-1,282,301,302,-1,304,349,348,-1,348,298,304,-1,298,348,351,-1,351,350,298,-1,352,350,351,-1,351,353,352,-1,348,349,354,-1,354,353,351,-1,348,354,351,-1,298,350,336,-1,350,352,176,-1,176,336,350,-1,316,355,337,-1,337,315,316,-1,306,317,318,-1,355,332,329,-1,329,337,355,-1,306,326,308,-1,326,325,308,-1,324,309,310,-1,310,325,324,-1,308,310,174,-1,174,307,308,-1,332,314,329,-1,332,280,314,-1,330,317,306,-1,328,316,317,-1,317,330,328,-1,333,355,316,-1,316,328,333,-1,332,355,333,-1,330,312,284,-1,312,311,158,-1,158,284,312,-1});
  }
}
private class MFInt32504 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,18,69,117,-1,118,19,18,-1,18,117,118,-1,117,69,67,-1,67,119,117,-1,119,67,63,-1,63,120,119,-1,117,119,121,-1,121,118,117,-1,120,122,121,-1,121,119,120,-1,11,120,63,-1,63,12,11,-1,13,122,120,-1,120,11,13,-1,125,124,123,-1,127,126,124,-1,126,127,128,-1,131,130,129,-1,131,129,132,-1,131,132,133,-1,133,127,131,-1,127,133,128,-1,135,134,126,-1,130,135,126,-1,135,136,134,-1,124,126,123,-1,123,126,137,-1,138,125,123,-1,123,139,138,-1,140,143,142,-1,142,141,140,-1,126,134,137,-1,127,124,144,-1,144,124,125,-1,144,131,127,-1,145,125,138,-1,146,140,141,-1,147,140,146,-1,148,144,125,-1,137,149,123,-1,150,123,149,-1,153,156,155,-1,155,154,153,-1,153,154,158,-1,158,157,153,-1,158,160,159,-1,159,157,158,-1,157,159,162,-1,162,161,157,-1,139,215,164,-1,164,138,139,-1,163,139,150,-1,150,165,163,-1,139,123,150,-1,168,167,166,-1,166,167,159,-1,169,151,152,-1,166,159,169,-1,161,172,170,-1,170,157,161,-1,170,171,157,-1,167,162,159,-1,173,176,236,-1,236,174,173,-1,172,161,177,-1,177,233,172,-1,241,174,236,-1,236,240,241,-1,168,180,167,-1,181,180,168,-1,183,238,237,-1,237,231,183,-1,167,180,186,-1,187,177,161,-1});
  }
}
private class MFInt32505 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {161,162,187,-1,188,189,177,-1,177,187,188,-1,167,186,187,-1,187,162,167,-1,188,187,186,-1,186,190,188,-1,189,192,177,-1,234,176,233,-1,231,175,191,-1,190,186,180,-1,180,193,190,-1,191,234,192,-1,146,141,195,-1,193,180,181,-1,181,194,193,-1,195,141,196,-1,196,240,236,-1,171,156,153,-1,153,157,171,-1,197,181,168,-1,198,147,242,-1,198,140,147,-1,199,125,145,-1,148,125,200,-1,200,125,199,-1,159,160,151,-1,151,169,159,-1,130,136,135,-1,242,147,184,-1,147,201,184,-1,147,146,201,-1,195,201,146,-1,144,202,131,-1,144,148,202,-1,155,204,203,-1,203,154,155,-1,154,203,160,-1,160,158,154,-1,205,208,207,-1,207,206,205,-1,209,208,205,-1,205,210,209,-1,213,214,211,-1,211,212,213,-1,191,191,192,-1,192,192,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,192,192,191,-1,191,191,192,-1,189,189,192,-1,192,192,189,-1,188,188,189,-1,189,189,188,-1,190,190,188,-1,188,188,190,-1,193,193,190,-1,190,190,193,-1,194,194,193,-1,193,193,194,-1,194,232,232,-1,232,194,194,-1,139,163,215,-1,222,223,217,-1,217,216,222,-1,223,229,218,-1,218,217,223,-1,228,219,218,-1,218,229,228,-1,218,219,221,-1,217,218,221,-1,217,221,220,-1,224,225,226,-1,226,225,227,-1,227,230,226,-1,238,183,232,-1,232,239,238,-1,175,231,237,-1,239,232,194,-1,194,178,239,-1,175,176,191,-1,191,176,234,-1,192,234,233,-1,233,177,192,-1,176,173,172,-1,172,233,176,-1,178,194,181,-1,184,235,242,-1,196,236,179,-1,195,196,179,-1,179,182,195,-1,201,195,182,-1,182,185,201,-1,184,201,185,-1,196,141,240,-1,240,141,142,-1,142,241,240,-1,245,244,243,-1,243,246,245,-1,244,248,247,-1,247,249,244,-1,250,246,243,-1,243,251,250,-1,252,249,247,-1,247,253,252,-1,254,244,245,-1,245,255,254,-1,256,248,244,-1,244,254,256,-1,259,258,257,-1,257,260,259,-1,261,258,259,-1,259,262,261,-1,263,265,264,-1,266,260,257,-1,257,268,267,-1,269,268,270,-1,271,267,272,-1,257,267,266,-1,271,266,267,-1,273,274,260,-1,271,275,266,-1,276,273,275,-1,276,274,273,-1,269,270,277,-1,277,278,269,-1,279,277,280,-1,281,280,282,-1,270,268,257,-1,257,283,270,-1,280,281,284,-1,284,285,280,-1,286,285,284,-1,286,284,287,-1,284,281,287,-1,265,263,288,-1,288,263,289,-1,287,281,290,-1,265,292,291,-1,293,292,294,-1,294,292,265,-1,265,291,290,-1,291,287,290,-1,272,267,268,-1,295,289,296,-1,296,298,297,-1,296,289,298,-1,296,297,295,-1,250,299,295,-1,295,300,250,-1,302,301,250,-1,250,300,302,-1,300,295,302,-1,251,303,299,-1,299,250,251,-1,252,303,249,-1,253,304,303,-1,303,252,253,-1,245,305,255,-1,305,306,255,-1,307,306,305,-1,295,307,305,-1,305,302,295,-1,305,245,301,-1,301,302,305,-1,307,308,306,-1,306,308,309,-1,309,310,306,-1,295,297,308,-1,308,307,295,-1,308,297,298,-1,298,309,308,-1,310,309,264,-1,282,311,281,-1,263,264,289,-1,298,264,309,-1,289,264,298,-1,264,312,310,-1,311,282,312,-1,265,290,264,-1,290,311,264,-1,290,281,311,-1,312,313,261,-1,313,258,261,-1,283,257,258,-1,258,313,283,-1,312,282,314,-1,314,313,312,-1,282,280,277,-1,277,314,282,-1,270,314,277,-1,311,312,264,-1,243,244,249,-1,251,243,303,-1,303,243,249,-1,315,317,316,-1,318,320,319,-1,315,316,321,-1,315,323,322,-1,322,324,315,-1,325,322,323,-1,315,321,323,-1,325,327,326,-1,327,328,326,-1,325,326,329,-1,332,331,330,-1,330,333,332,-1});
  }
}
private class MFInt32506 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {334,331,335,-1,322,336,324,-1,331,337,335,-1,329,338,336,-1,317,339,316,-1,327,325,323,-1,316,340,327,-1,341,343,342,-1,344,346,345,-1,342,328,327,-1,347,342,340,-1,340,342,327,-1,348,345,333,-1,348,333,330,-1,349,320,350,-1,349,350,351,-1,352,322,325,-1,352,336,322,-1,353,355,354,-1,336,356,324,-1,336,338,356,-1,357,354,355,-1,358,354,357,-1,332,359,329,-1,329,359,338,-1,261,360,312,-1,361,360,261,-1,261,262,361,-1,360,362,310,-1,310,312,360,-1,362,363,306,-1,306,310,362,-1,360,361,364,-1,364,362,360,-1,363,362,364,-1,364,365,363,-1,254,255,306,-1,306,363,254,-1,256,254,363,-1,363,365,256,-1,366,368,367,-1,369,367,370,-1,370,371,369,-1,372,374,373,-1,372,375,374,-1,372,369,376,-1,376,375,372,-1,369,371,376,-1,377,370,378,-1,373,370,377,-1,377,378,379,-1,367,368,370,-1,368,380,370,-1,382,381,368,-1,368,366,382,-1,385,384,383,-1,383,386,385,-1,370,380,378,-1,369,387,367,-1,387,366,367,-1,387,369,372,-1,388,382,366,-1,389,384,385,-1,390,389,385,-1,391,366,387,-1,380,368,392,-1,393,392,368,-1,396,395,394,-1,394,397,396,-1,396,399,398,-1,398,395,396,-1,398,399,400,-1,400,401,398,-1,399,403,402,-1,402,400,399,-1,381,382,405,-1,405,404,381,-1,406,407,393,-1,393,381,406,-1,381,393,368,-1,408,410,409,-1,410,400,409,-1,411,413,412,-1,410,411,400,-1,403,399,414,-1,414,415,403,-1,414,399,416,-1,409,400,402,-1,419,418,417,-1,417,420,419,-1,415,422,421,-1,421,403,415,-1,423,424,417,-1,417,418,423,-1,408,409,425,-1,426,408,425,-1,427,430,429,-1,429,428,427,-1,409,431,425,-1,432,402,403,-1,403,421,432,-1,433,432,421,-1,421,434,433,-1,409,402,432,-1,432,431,409,-1,433,435,431,-1,431,432,433,-1,434,421,436,-1,437,422,420,-1,430,439,438,-1,435,440,425,-1,425,431,435,-1,439,436,437,-1,389,441,384,-1,440,442,426,-1,426,425,440,-1,441,443,384,-1,443,417,424,-1,416,396,397,-1,396,416,399,-1,444,408,426,-1,445,446,390,-1,445,390,385,-1,447,388,366,-1,391,448,366,-1,448,447,366,-1,400,411,412,-1,412,401,400,-1,373,377,379,-1,446,449,390,-1,390,449,450,-1,390,450,389,-1,441,389,450,-1,387,372,451,-1,387,451,391,-1,394,395,452,-1,452,453,394,-1,395,398,401,-1,401,452,395,-1,456,455,454,-1,454,457,456,-1,459,458,456,-1,456,457,459,-1,462,461,460,-1,460,463,462,-1,439,436,436,-1,436,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,436,439,439,-1,439,436,436,-1,434,436,436,-1,436,434,434,-1,433,434,434,-1,434,433,433,-1,435,433,433,-1,433,435,435,-1,440,435,435,-1,435,440,440,-1,442,440,440,-1,440,442,442,-1,442,442,464,-1,464,464,442,-1,381,404,406,-1,465,468,467,-1,467,466,465,-1,466,467,470,-1,470,469,466,-1,471,469,470,-1,470,472,471,-1,467,474,473,-1,473,472,470,-1,467,473,470,-1,475,477,476,-1,477,479,478,-1,478,476,477,-1,428,480,464,-1,464,427,428,-1,438,429,430,-1,480,481,442,-1,442,464,480,-1,438,439,420,-1,439,437,420,-1,436,421,422,-1,422,437,436,-1,420,422,415,-1,415,419,420,-1,481,426,442,-1,449,446,482,-1,443,483,417,-1,441,484,483,-1,483,443,441,-1,450,485,484,-1,484,441,450,-1,449,485,450,-1,443,424,384,-1,424,423,383,-1,383,384,424,-1});
  }
}
private class MFVec3f507 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.05841f ,1.3813876f ,-0.17548425f ,0.13095f ,1.4007375f ,-0.065819256f ,0.08352f ,1.3402126f ,-0.06696675f ,0.0733725f ,1.3453425f ,-0.11111175f ,0.127305f ,1.3711276f ,-0.060059253f ,0.040950004f ,1.3416525f ,-0.13163176f ,0.0538875f ,1.424025f ,0.12734327f ,0.01746225f ,1.4231701f ,0.13942575f ,0.099180005f ,1.5197176f ,0.06720076f ,0f ,1.565775f ,0.11168326f ,0.0500625f ,1.5576751f ,0.10389825f ,0.134145f ,1.411965f ,0.01077075f ,0.090922505f ,1.3315119f ,0.06382576f ,0.044370003f ,1.5286726f ,0.12759075f ,0.0570825f ,1.4701725f ,0.12770325f ,0.083115004f ,1.4622526f ,0.10351576f ,0.01006875f ,1.4778225f ,0.15020326f ,0.108967505f ,1.4518801f ,0.061755754f ,0.087435f ,1.4609926f ,0.09595576f ,0.0828225f ,1.429515f ,0.09708075f ,0.086085f ,1.4251726f ,0.08949825f ,0.07389f ,1.36827f ,0.08558325f ,0.10221751f ,1.4054401f ,0.06328575f ,0.0868275f ,1.3995225f ,0.08274825f ,0.1029375f ,1.3979701f ,0.074693255f ,0.11396251f ,1.3392676f ,0.012615751f ,0.109417506f ,1.351575f ,0.03788325f ,0.11826f ,1.3732876f ,0.03009825f ,0.1248525f ,1.4371201f ,0.04562325f ,0.1161225f ,1.3584375f ,0.04580325f ,0.122445f ,1.3999051f ,0.049515754f ,0.1374975f ,1.4114026f ,-0.00951525f ,0.091395f ,1.4446801f ,0.07953076f ,0.13515751f ,1.48941f ,-0.028125001f ,0.1579725f ,1.3500226f ,-0.036045f ,0.14778f ,1.4218875f ,-0.03188475f ,0.14233501f ,1.4181975f ,-0.05031675f ,0.140175f ,1.3313318f ,-0.09286425f ,0.11198251f ,1.4333401f ,-0.14308426f ,0.14233501f ,1.41741f ,-0.081816755f ,0.09486f ,1.3897575f ,-0.13088925f ,0.07924501f ,1.4435551f ,-0.17667675f ,0.07704f ,1.3545f ,-0.17919676f ,0.055777505f ,1.4909626f ,-0.16747425f ,0.043357503f ,1.3572226f ,-0.21546677f ,0.12564f ,1.4856975f ,-0.077991754f ,0.13169251f ,1.4855176f ,-0.05531175f ,0.11657251f ,1.50336f ,0.031898253f ,0.068355f ,1.555425f ,0.08454825f ,0.11526751f ,1.3808701f ,-0.13478175f ,0.12744f ,1.4940226f ,0.004254751f ,0.10622251f ,1.4909626f ,-0.13374676f ,0.055777505f ,1.4436f ,-0.18380925f ,0.1258875f ,1.484325f ,-0.06361425f ,0.0263925f ,1.35387f ,-0.15300675f ,0.089505f ,1.36494f ,-0.119841754f ,0.06563251f ,1.2917588f ,-0.17991675f ,0.0747675f ,1.3594501f ,-0.13628925f ,0.044280004f ,1.2775276f ,-0.12823425f ,0.1060425f ,1.36764f ,-0.09367425f ,0.09945001f ,1.306071f ,-0.11617426f ,0.0317475f ,1.3251173f ,-0.093831755f ,0.051187504f ,1.3324658f ,-0.10010926f ,0.02116575f ,1.3286318f ,-0.11752426f ,0.08590501f ,1.3515526f ,-0.08606925f ,0.104940005f ,1.354635f ,-0.04775175f ,0.082282506f ,1.5193801f ,0.09615826f ,0.0350775f ,1.476135f ,0.14223826f ,0.0627975f ,1.4260726f ,0.11994076f ,0.055777505f ,1.59615f ,0.03385575f ,0f ,1.5999751f ,-0.08458425f ,0.055777505f ,1.605375f ,-0.028728f ,0.055777505f ,1.5932251f ,-0.08458425f ,0.055777505f ,1.57815f ,0.06702075f ,0.106605f ,1.5630751f ,-0.028728f ,0.1030725f ,1.550925f ,0.027150752f ,0.10746001f ,1.522845f ,-0.11115676f ,0.1046475f ,1.5588001f ,-0.07610176f ,0.055777505f ,1.5507001f ,-0.14758426f ,0.113355f ,1.3596076f ,-0.00951525f ,0.1203975f ,1.3637025f ,-0.00966375f ,0.1254375f ,1.4249926f ,-0.0044685f ,0.1295775f ,1.4096925f ,-0.030492f ,0.12762f ,1.3828275f ,-0.03093075f ,0.10388251f ,1.4008275f ,0.029130751f ,0.0564075f ,1.3174245f ,0.06256575f ,0.02817f ,1.2968168f ,0.06900075f ,0.0490725f ,1.341675f ,0.09037576f ,0.0243675f ,1.3080038f ,0.086505756f ,0.09013501f ,1.4077351f ,0.062183253f ,0.086467505f ,1.391085f ,0.06272325f ,0.00588375f ,1.4015026f ,0.11557575f ,0.0459675f ,1.427265f ,0.11512575f ,0.0359775f ,1.4077126f ,0.106710754f ,0.0489375f ,1.412145f ,0.10362825f ,0.0238725f ,1.3765726f ,0.102458246f ,0.0752625f ,1.3757851f ,0.074265756f ,0.059557505f ,1.3745251f ,0.085380755f ,0.069345005f ,1.3932226f ,0.07919325f ,0.023490002f ,1.4000626f ,0.10727326f ,0.03051f ,1.394595f ,0.10248076f ,0.0726075f ,1.3960576f ,0.07705575f ,0.06813001f ,1.4154075f ,0.08992576f ,0.05562f ,1.3581675f ,0.09080326f ,0.0206865f ,1.365615f ,0.105653256f ,0.0790875f ,1.3621275f ,0.066255756f ,0.082912505f ,1.4077126f ,0.07210575f ,0.0032805f ,1.3383225f ,0.11881576f ,0.010332f ,1.345095f ,0.10941075f ,0.0774675f ,1.3401f ,0.056580752f ,0.044370003f ,1.463085f ,0.11436076f ,0.07989751f ,1.4581801f ,0.08940825f ,0.025312502f ,1.4620726f ,0.12459826f ,0.0629775f ,1.3193123f ,0.029130751f ,0.032355f ,1.2951024f ,0.050258253f ,0.047205005f ,1.3112506f ,-0.0066802497f ,0.097695f ,1.380015f ,0.040448252f ,0.044370003f ,1.5417001f ,0.10376325f ,0.0861525f ,1.4944726f ,0.07631326f ,0.106965005f ,1.4368275f ,0.051383253f ,0.062887505f ,1.39293f ,0.08574076f ,0.041287504f ,1.3933575f ,0.09730576f ,0.091665f ,1.3534425f ,0.018060751f ,0.0916425f ,1.3472326f ,-0.02108925f ,0.107955f ,1.411965f ,0.01077075f ,0.009177751f ,1.3299998f ,0.11355075f ,0.005049f ,1.3306253f ,0.11602575f ,0.026640002f ,1.3239248f ,0.094695754f ,0.005049f ,1.3259408f ,0.10932076f ,0.047047503f ,1.3105283f ,-0.05209425f ,0.01006875f ,1.4778225f ,0.15020326f ,0.01746225f ,1.4231701f ,0.13942575f ,0.01006875f ,1.4778225f ,0.15020326f ,0.106515005f ,1.3642876f ,-0.02619675f ,0.08352f ,1.3402126f ,-0.06696675f ,0.127305f ,1.3711276f ,-0.060059253f ,0.011542501f ,1.4633551f ,0.14473575f ,0.113715f ,1.4114026f ,-0.00951525f ,0.08012251f ,1.3369726f ,-0.05040675f ,0.047025f ,1.4123701f ,0.06778575f ,0.036472503f ,1.41066f ,0.077325754f ,0.029970001f ,1.4071951f ,0.07944075f ,0.024075001f ,1.401075f ,0.080048256f ,0.028215f ,1.3967326f ,0.07746076f ,0.034065004f ,1.3956751f ,0.07428825f ,0.045787502f ,1.394955f ,0.06686325f ,0.049545f ,1.3947076f ,0.06229575f ,0.05121f ,1.3967326f ,0.060563255f ,0.056227505f ,1.405305f ,0.056130752f ,0f ,1.3742551f ,-0.18533926f ,0f ,1.40697f ,0.123158254f ,0f ,1.4909626f ,-0.18074925f ,0f ,1.3157438f ,-0.096261755f ,0f ,1.2914213f ,-0.16259176f ,0f ,1.2983648f ,0.01902825f ,0.013063501f ,1.322028f ,0.07035075f ,0.0028980002f ,1.3222058f ,0.07482825f ,0.0125235f ,1.3076798f ,0.064433254f ,0f ,1.4606326f ,0.13146076f ,0f ,1.2834226f ,0.080925755f ,0f ,1.3306253f ,0.11602575f ,0.0047970004f ,1.3255043f ,0.10527075f ,0.0133335f ,1.391175f ,0.11015325f ,0.02079225f ,1.3973175f ,0.107655756f ,0.086467505f ,1.42767f ,0.07665075f ,0.025020001f ,1.420335f ,0.12158326f ,0.0733725f ,1.431045f ,0.092918254f ,0.029857501f ,1.4143951f ,0.11638576f ,0.0470025f ,1.419705f ,0.110535756f ,0.071347505f ,1.424025f ,0.09219825f ,0.0145350015f ,1.408545f ,0.122078255f ,0f ,1.4368275f ,-0.19465426f ,0f ,1.5318f ,0.13888577f ,0f ,1.48248f ,0.15117076f ,0f ,1.380105f ,0.11667826f ,0f ,1.3520925f ,0.13780576f ,0f ,1.3259408f ,0.10932076f ,0.0167085f ,1.4193676f ,0.12259576f ,-0.07924501f ,1.4435551f ,-0.17667675f ,-0.055777505f ,1.4909626f ,-0.16747425f ,-0.10622251f ,1.4909626f ,-0.13374676f ,-0.11198251f ,1.4333401f ,-0.14308426f ,-0.055777505f ,1.4436f ,-0.18380925f ,-0.11526751f ,1.3808701f ,-0.13478175f ,-0.07704f ,1.3545f ,-0.17919676f ,-0.043357503f ,1.3572226f ,-0.21546677f ,0f ,1.3970926f ,-0.20565677f ,-0.055777505f ,1.5507001f ,-0.14758426f ,-0.10746001f ,1.522845f ,-0.11115676f ,0f ,1.558125f ,-0.15188175f ,-0.044370003f ,1.5286726f ,0.12759075f ,-0.0500625f ,1.5576751f ,0.10389825f ,-0.055777505f ,1.57815f ,0.06702075f ,0f ,1.586925f ,0.07611075f ,-0.134145f ,1.411965f ,0.01077075f ,-0.12744f ,1.4940226f ,0.004254751f ,-0.11826f ,1.3732876f ,0.03009825f ,-0.01006875f ,1.4778225f ,0.15020326f ,-0.0350775f ,1.476135f ,0.14223826f ,-0.0570825f ,1.4701725f ,0.12770325f ,-0.0627975f ,1.4260726f ,0.11994076f ,-0.083115004f ,1.4622526f ,0.10351576f ,-0.01746225f ,1.4231701f ,0.13942575f ,-0.0538875f ,1.424025f ,0.12734327f ,-0.011542501f ,1.4633551f ,0.14473575f ,-0.01006875f ,1.4778225f ,0.15020326f ,-0.01746225f ,1.4231701f ,0.13942575f ,-0.01006875f ,1.4778225f ,0.15020326f ,-0.087435f ,1.4609926f ,0.09595576f ,-0.0828225f ,1.429515f ,0.09708075f ,-0.086085f ,1.4251726f ,0.08949825f ,-0.091395f ,1.4446801f ,0.07953076f ,-0.108967505f ,1.4518801f ,0.061755754f ,-0.099180005f ,1.5197176f ,0.06720076f ,-0.082282506f ,1.5193801f ,0.09615826f ,-0.1029375f ,1.3979701f ,0.074693255f ,-0.0868275f ,1.3995225f ,0.08274825f ,-0.07389f ,1.36827f ,0.08558325f ,-0.10221751f ,1.4054401f ,0.06328575f ,-0.11396251f ,1.3392676f ,0.012615751f ,-0.1374975f ,1.4114026f ,-0.00951525f ,-0.1248525f ,1.4371201f ,0.04562325f ,-0.122445f ,1.3999051f ,0.049515754f ,-0.1161225f ,1.3584375f ,0.04580325f ,-0.090922505f ,1.3315119f ,0.06382576f ,-0.109417506f ,1.351575f ,0.03788325f ,-0.13095f ,1.4007375f ,-0.065819256f ,-0.1579725f ,1.3500226f ,-0.036045f ,-0.14233501f ,1.4181975f ,-0.05031675f ,-0.14778f ,1.4218875f ,-0.03188475f ,-0.09486f ,1.3897575f ,-0.13088925f ,-0.140175f ,1.3313318f ,-0.09286425f ,-0.14233501f ,1.41741f ,-0.081816755f ,-0.05841f ,1.3813876f ,-0.17548425f ,-0.12564f ,1.4856975f ,-0.077991754f ,-0.1046475f ,1.5588001f ,-0.07610176f ,-0.1258875f ,1.484325f ,-0.06361425f ,-0.13169251f ,1.4855176f ,-0.05531175f ,-0.13515751f ,1.48941f ,-0.028125001f ,-0.106605f ,1.5630751f ,-0.028728f ,-0.11657251f ,1.50336f ,0.031898253f ,-0.1030725f ,1.550925f ,0.027150752f ,-0.068355f ,1.555425f ,0.08454825f ,-0.0263925f ,1.35387f ,-0.15300675f ,0f ,1.3359375f ,-0.15113926f ,0f ,1.3154109f ,-0.20176426f ,-0.06563251f ,1.2917588f ,-0.17991675f ,-0.089505f ,1.36494f ,-0.119841754f ,-0.0747675f ,1.3594501f ,-0.13628925f ,-0.0733725f ,1.3453425f ,-0.11111175f ,-0.051187504f ,1.3324658f ,-0.10010926f ,-0.040950004f ,1.3416525f ,-0.13163176f ,-0.044280004f ,1.2775276f ,-0.12823425f ,-0.08590501f ,1.3515526f ,-0.08606925f ,-0.08352f ,1.3402126f ,-0.06696675f ,-0.0317475f ,1.3251173f ,-0.093831755f ,-0.09945001f ,1.306071f ,-0.11617426f ,-0.1060425f ,1.36764f ,-0.09367425f ,-0.127305f ,1.3711276f ,-0.060059253f ,-0.02116575f ,1.3286318f ,-0.11752426f ,-0.106515005f ,1.3642876f ,-0.02619675f ,-0.104940005f ,1.354635f ,-0.04775175f ,-0.055777505f ,1.59615f ,0.03385575f ,0f ,1.6026751f ,0.03385575f ,-0.055777505f ,1.605375f ,-0.028728f ,-0.055777505f ,1.5932251f ,-0.08458425f ,0f ,1.6119001f ,-0.028728f ,-0.08012251f ,1.3369726f ,-0.05040675f ,-0.0916425f ,1.3472326f ,-0.02108925f ,-0.0629775f ,1.3193123f ,0.029130751f ,-0.113355f ,1.3596076f ,-0.00951525f ,-0.091665f ,1.3534425f ,0.018060751f ,-0.1203975f ,1.3637025f ,-0.00966375f ,-0.113715f ,1.4114026f ,-0.00951525f ,-0.107955f ,1.411965f ,0.01077075f ,-0.1254375f ,1.4249926f ,-0.0044685f ,-0.1295775f ,1.4096925f ,-0.030492f ,-0.12762f ,1.3828275f ,-0.03093075f ,-0.10388251f ,1.4008275f ,0.029130751f ,-0.097695f ,1.380015f ,0.040448252f });
  }
}
private class MFVec3f508 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.106965005f ,1.4368275f ,0.051383253f ,-0.0774675f ,1.3401f ,0.056580752f ,-0.032355f ,1.2951024f ,0.050258253f ,-0.047205005f ,1.3112506f ,-0.0066802497f ,-0.025312502f ,1.4620726f ,0.12459826f ,-0.044370003f ,1.5417001f ,0.10376325f ,0f ,1.5339825f ,0.11505826f ,-0.047047503f ,1.3105283f ,-0.05209425f ,-0.044370003f ,1.463085f ,0.11436076f ,-0.07989751f ,1.4581801f ,0.08940825f ,-0.0564075f ,1.3174245f ,0.06256575f ,-0.02817f ,1.2968168f ,0.06900075f ,-0.005049f ,1.3306253f ,0.11602575f ,-0.0032805f ,1.3383225f ,0.11881576f ,0f ,1.3383225f ,0.11883825f ,-0.009177751f ,1.3299998f ,0.11355075f ,-0.010332f ,1.345095f ,0.10941075f ,-0.0490725f ,1.341675f ,0.09037576f ,-0.026640002f ,1.3239248f ,0.094695754f ,-0.05562f ,1.3581675f ,0.09080326f ,-0.0206865f ,1.365615f ,0.105653256f ,0f ,1.2886876f ,0.052260753f ,0f ,1.284975f ,0.06499575f ,-0.0790875f ,1.3621275f ,0.066255756f ,-0.0243675f ,1.3080038f ,0.086505756f ,0f ,1.362285f ,0.12959325f ,-0.0145350015f ,1.408545f ,0.122078255f ,0f ,1.4015026f ,0.11557575f ,-0.00588375f ,1.4015026f ,0.11557575f ,-0.0238725f ,1.3765726f ,0.102458246f ,-0.0133335f ,1.391175f ,0.11015325f ,0f ,1.419075f ,0.12502575f ,-0.0167085f ,1.4193676f ,0.12259576f ,-0.086467505f ,1.391085f ,0.06272325f ,-0.09013501f ,1.4077351f ,0.062183253f ,-0.0489375f ,1.412145f ,0.10362825f ,-0.0470025f ,1.419705f ,0.110535756f ,-0.029857501f ,1.4143951f ,0.11638576f ,-0.0359775f ,1.4077126f ,0.106710754f ,-0.0752625f ,1.3757851f ,0.074265756f ,-0.059557505f ,1.3745251f ,0.085380755f ,-0.062887505f ,1.39293f ,0.08574076f ,-0.041287504f ,1.3933575f ,0.09730576f ,-0.069345005f ,1.3932226f ,0.07919325f ,-0.03051f ,1.394595f ,0.10248076f ,-0.02079225f ,1.3973175f ,0.107655756f ,-0.023490002f ,1.4000626f ,0.10727326f ,-0.0726075f ,1.3960576f ,0.07705575f ,-0.0459675f ,1.427265f ,0.11512575f ,-0.082912505f ,1.4077126f ,0.07210575f ,-0.025020001f ,1.420335f ,0.12158326f ,-0.0861525f ,1.4944726f ,0.07631326f ,-0.086467505f ,1.42767f ,0.07665075f ,-0.0733725f ,1.431045f ,0.092918254f ,-0.127305f ,1.3711276f ,-0.060059253f ,-0.08352f ,1.3402126f ,-0.06696675f ,-0.005049f ,1.3259408f ,0.10932076f ,-0.06813001f ,1.4154075f ,0.08992576f ,-0.036472503f ,1.41066f ,0.077325754f ,-0.047025f ,1.4123701f ,0.06778575f ,-0.029970001f ,1.4071951f ,0.07944075f ,-0.024075001f ,1.401075f ,0.080048256f ,-0.028215f ,1.3967326f ,0.07746076f ,-0.034065004f ,1.3956751f ,0.07428825f ,-0.045787502f ,1.394955f ,0.06686325f ,-0.049545f ,1.3947076f ,0.06229575f ,-0.05121f ,1.3967326f ,0.060563255f ,-0.056227505f ,1.405305f ,0.056130752f ,-0.013063501f ,1.322028f ,0.07035075f ,-0.0125235f ,1.3076798f ,0.064433254f ,-0.0047970004f ,1.3255043f ,0.10527075f ,-0.0028980002f ,1.3222058f ,0.07482825f ,0f ,1.3255268f ,0.10533825f ,0f ,1.3223386f ,0.074693255f ,0f ,1.3067731f ,0.058493253f ,-0.071347505f ,1.424025f ,0.09219825f });
  }
}
private class MFVec2f509 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9175f ,0.8974f ,0.9509f ,0.8981f ,0.9421f ,0.8701f ,0.924f ,0.8702f ,0.9824f ,0.8971f ,0.9824f ,0.8682f ,0.9541f ,0.8718f ,0.9147f ,0.8129f ,0.9437f ,0.8153f ,0.9638f ,0.8095f ,0.9824f ,0.809f ,0.9461f ,0.923f ,0.9071f ,0.9135f ,0.9824f ,0.9287f ,0.7343f ,0.9169f ,0.7616f ,0.9147f ,0.7553f ,0.8982f ,0.7343f ,0.8968f ,0.7739f ,0.9327f ,0.7343f ,0.9365f ,0.8187f ,0.8433f ,0.8348f ,0.9045f ,0.8324f ,0.8647f ,0.74f ,0.8745f ,0.761f ,0.8768f ,0.7497f ,0.8755f ,0.777f ,0.8787f ,0.7647f ,0.8593f ,0.7596f ,0.8565f ,0.7438f ,0.8546f ,0.7343f ,0.8756f ,0.7372f ,0.8736f ,0.7394f ,0.8706f ,0.7405f ,0.8536f ,0.7808f ,0.8802f ,0.7786f ,0.8666f ,0.7875f ,0.8787f ,0.7821f ,0.8667f ,0.7952f ,0.9076f ,0.8011f ,0.8823f ,0.7745f ,0.9003f ,0.7939f ,0.8518f ,0.7845f ,0.8549f ,0.7731f ,0.8049f ,0.7979f ,0.8609f ,0.8185f ,0.8054f ,0.8439f ,0.8655f ,0.8131f ,0.8741f ,0.786f ,0.7876f ,0.8107f ,0.8538f ,0.8058f ,0.8252f ,0.8096f ,0.8166f ,0.8589f ,0.7975f ,0.8767f ,0.8622f ,0.8568f ,0.8668f ,0.8669f ,0.8674f ,0.9208f ,0.8549f ,0.8792f ,0.7991f ,0.8835f ,0.8633f ,0.9139f ,0.8636f ,0.9513f ,0.84f ,0.9824f ,0.8358f ,0.8845f ,0.9021f ,0.888f ,0.931f ,0.8761f ,0.9036f ,0.8705f ,0.9018f ,0.8544f ,0.902f ,0.8538f ,0.9345f ,0.8173f ,0.9068f ,0.8156f ,0.9257f ,0.7753f ,0.9186f ,0.7832f ,0.9041f ,0.7338f ,0.8385f ,0.7279f ,0.8339f ,0.7208f ,0.8401f ,0.7397f ,0.7767f ,0.7338f ,0.7681f ,0.7338f ,0.7727f ,0.7192f ,0.8201f ,0.7171f ,0.8352f ,0.7139f ,0.8364f ,0.7127f ,0.8419f ,0.7175f ,0.832f ,0.7247f ,0.8312f ,0.7224f ,0.8292f ,0.7239f ,0.8169f ,0.7146f ,0.8334f ,0.7152f ,0.8309f ,0.753f ,0.7762f ,0.7452f ,0.772f ,0.7409f ,0.7703f ,0.756f ,0.7661f ,0.7502f ,0.7748f ,0.7102f ,0.837f ,0.7574f ,0.7798f ,0.7054f ,0.8378f ,0.7338f ,0.8253f ,0.7338f ,0.8299f ,0.7267f ,0.8275f ,0.7291f ,0.8283f ,0.7338f ,0.8254f ,0.7338f ,0.7682f ,0.7385f ,0.7711f ,0.7338f ,0.7628f ,0.7338f ,0.82f ,0.7437f ,0.7597f ,0.7429f ,0.774f ,0.7484f ,0.7629f ,0.7505f ,0.778f ,0.7116f ,0.8233f ,0.7622f ,0.7806f ,0.7576f ,0.779f ,0.763f ,0.7872f ,0.7046f ,0.8444f ,0.7572f ,0.7769f ,0.7524f ,0.7737f ,0.7104f ,0.8341f ,0.7881f ,0.9479f ,0.7343f ,0.9577f ,0.8497f ,0.9637f ,0.9158f ,0.9539f ,0.7343f ,0.9872f ,0.9824f ,0.9663f ,0.4263f ,0.6263f ,0.4421f ,0.6351f ,0.4514f ,0.6319f ,0.4298f ,0.637f ,0.4385f ,0.639f ,0.4385f ,0.6403f ,0.4369f ,0.6596f ,0.4321f ,0.6555f ,0.4385f ,0.6553f ,0.4451f ,0.6548f ,0.4452f ,0.6463f ,0.4227f ,0.6454f ,0.4263f ,0.652f ,0.4193f ,0.6633f ,0.4176f ,0.6328f ,0.4376f ,0.6237f ,0.4196f ,0.6187f ,0.3384f ,0.9887f ,0.2934f ,0.905f ,0.2441f ,0.9417f ,0.2441f ,0.9723f ,0.4437f ,0.6405f ,0.4519f ,0.6235f ,0.3367f ,0.9059f ,0.4034f ,0.9073f ,0.4566f ,0.6329f ,0.4157f ,0.6257f ,0.4137f ,0.6192f ,0.2959f ,0.626f ,0.3051f ,0.6166f ,0.2511f ,0.6816f ,0.2548f ,0.6653f ,0.2441f ,0.6653f ,0.2441f ,0.6816f ,0.2661f ,0.696f ,0.2636f ,0.664f ,0.3484f ,0.6888f ,0.3007f ,0.651f ,0.2881f ,0.7397f ,0.3623f ,0.7239f ,0.4151f ,0.6155f ,0.4295f ,0.6197f ,0.4116f ,0.6201f ,0.4088f ,0.6855f ,0.4123f ,0.7323f ,0.4518f ,0.7703f ,0.364f ,0.6372f ,0.2441f ,0.7326f ,0.2441f ,0.7109f ,0.2441f ,0.7705f ,0.2441f ,0.816f ,0.2466f ,0.8272f ,0.2826f ,0.8198f ,0.263f ,0.8101f ,0.3011f ,0.7644f ,0.4294f ,0.848f ,0.295f ,0.8569f ,0.4229f ,0.7906f ,0.445f ,0.8342f ,0.3273f ,0.8725f ,0.3401f ,0.8443f ,0.4194f ,0.891f ,0.3844f ,0.8819f ,0.3962f ,0.7639f ,0.3654f ,0.758f ,0.3664f ,0.7923f ,0.3312f ,0.7931f ,0.3858f ,0.7947f ,0.2864f ,0.8094f ,0.3065f ,0.7969f ,0.4051f ,0.8004f ,0.4267f ,0.8291f ,0.3243f ,0.8795f ,0.293f ,0.8645f ,0.4715f ,0.8911f ,0.431f ,0.9594f ,0.4658f ,0.6252f ,0.465f ,0.6281f ,0.3862f ,0.8876f ,0.4544f ,0.6426f ,0.2548f ,0.6553f ,0.2441f ,0.6553f ,0.4156f ,0.6279f ,0.3783f ,0.625f ,0.3984f ,0.649f ,0.4325f ,0.6718f ,0.4443f ,0.6446f ,0.428f ,0.6022f ,0.4445f ,0.6357f ,0.4021f ,0.656f ,0.4052f ,0.6271f ,0.4253f ,0.6199f ,0.4215f ,0.6174f ,0.6418f ,0.6585f ,0.6441f ,0.671f ,0.6214f ,0.6731f ,0.616f ,0.6731f ,0.6418f ,0.6585f ,0.623f ,0.6494f ,0.6418f ,0.6585f ,0.6441f ,0.671f ,0.3003f ,0.6509f ,0.2548f ,0.6558f ,0.2549f ,0.6531f ,0.2441f ,0.6558f ,0.616f ,0.6731f ,0.6214f ,0.6731f ,0.2441f ,0.6529f ,0.314f ,0.8296f ,0.3898f ,0.85f ,0.2746f ,0.7881f ,0.2889f ,0.7981f ,0.4442f ,0.8857f ,0.2745f ,0.8415f ,0.3079f ,0.8417f ,0.3393f ,0.8544f ,0.3891f ,0.8542f ,0.2699f ,0.8521f ,0.246f ,0.853f ,0.4715f ,0.8911f ,0.9421f ,0.8701f ,0.9509f ,0.8981f ,0.9175f ,0.8974f ,0.924f ,0.8702f ,0.9824f ,0.8682f ,0.9824f ,0.8971f ,0.9541f ,0.8718f ,0.9147f ,0.8129f ,0.9437f ,0.8153f ,0.9638f ,0.8095f ,0.9824f ,0.809f ,0.9461f ,0.923f ,0.9071f ,0.9135f ,0.9824f ,0.9287f ,0.7553f ,0.8982f ,0.7616f ,0.9147f ,0.7343f ,0.9169f ,0.7343f ,0.8968f ,0.7739f ,0.9327f ,0.7343f ,0.9365f ,0.8324f ,0.8647f ,0.8348f ,0.9045f ,0.8187f ,0.8433f ,0.74f ,0.8745f ,0.7497f ,0.8755f ,0.761f ,0.8768f ,0.7647f ,0.8593f ,0.777f ,0.8787f ,0.7438f ,0.8546f ,0.7596f ,0.8565f ,0.7372f ,0.8736f ,0.7343f ,0.8756f ,0.7394f ,0.8706f ,0.7405f ,0.8536f ,0.7808f ,0.8802f ,0.7786f ,0.8666f ,0.7821f ,0.8667f ,0.7875f ,0.8787f ,0.8011f ,0.8823f ,0.7952f ,0.9076f ,0.7745f ,0.9003f ,0.7939f ,0.8518f ,0.7845f ,0.8549f ,0.7731f ,0.8049f ,0.7979f ,0.8609f ,0.8185f ,0.8054f ,0.8439f ,0.8655f ,0.8131f ,0.8741f ,0.8107f ,0.8538f ,0.8058f ,0.8252f ,0.786f ,0.7876f ,0.8096f ,0.8166f ,0.8767f ,0.8622f ,0.8589f ,0.7975f ,0.8669f ,0.8674f ,0.8568f ,0.8668f ,0.9208f ,0.8549f ,0.8792f ,0.7991f ,0.9139f ,0.8636f ,0.8835f ,0.8633f ,0.9513f ,0.84f ,0.9824f ,0.8358f ,0.8845f ,0.9021f ,0.888f ,0.931f ,0.8761f ,0.9036f ,0.8705f ,0.9018f ,0.8544f ,0.902f ,0.8538f ,0.9345f ,0.8173f ,0.9068f ,0.8156f ,0.9257f ,0.7753f ,0.9186f ,0.7832f ,0.9041f ,0.7208f ,0.8401f ,0.7279f ,0.8339f ,0.7338f ,0.8385f ,0.7338f ,0.7727f ,0.7338f ,0.7681f ,0.7397f ,0.7767f ,0.7192f ,0.8201f ,0.7139f ,0.8364f ,0.7171f ,0.8352f ,0.7127f ,0.8419f ,0.7175f ,0.832f ,0.7224f ,0.8292f ,0.7247f ,0.8312f ,0.7239f ,0.8169f ,0.7146f ,0.8334f ,0.7452f ,0.772f ,0.753f ,0.7762f ,0.7152f ,0.8309f ,0.7409f ,0.7703f ,0.7502f ,0.7748f ,0.756f ,0.7661f ,0.7102f ,0.837f ,0.7574f ,0.7798f ,0.7054f ,0.8378f ,0.7338f ,0.8253f ,0.7338f ,0.8299f ,0.7338f ,0.8254f ,0.7291f ,0.8283f ,0.7267f ,0.8275f ,0.7338f ,0.7628f ,0.7385f ,0.7711f ,0.7338f ,0.7682f ,0.7338f ,0.82f ,0.7437f ,0.7597f ,0.7484f ,0.7629f ,0.7429f ,0.774f ,0.7505f ,0.778f ,0.7116f ,0.8233f ,0.763f ,0.7872f ,0.7576f ,0.779f ,0.7622f ,0.7806f ,0.7046f ,0.8444f ,0.7572f ,0.7769f ,0.7524f ,0.7737f ,0.7104f ,0.8341f ,0.7881f ,0.9479f ,0.7343f ,0.9577f ,0.8497f ,0.9637f ,0.9158f ,0.9539f ,0.7343f ,0.9872f ,0.9824f ,0.9663f ,0.4514f ,0.6319f ,0.4421f ,0.6351f ,0.4263f ,0.6263f ,0.4385f ,0.639f ,0.4298f ,0.637f ,0.4385f ,0.6403f ,0.4385f ,0.6553f ,0.4321f ,0.6555f ,0.4369f ,0.6596f ,0.4451f ,0.6548f ,0.4452f ,0.6463f ,0.4263f ,0.652f ,0.4227f ,0.6454f ,0.4193f ,0.6633f ,0.4176f ,0.6328f ,0.4196f ,0.6187f ,0.4376f ,0.6237f ,0.2441f ,0.9417f ,0.2934f ,0.905f ,0.3384f ,0.9887f ,0.2441f ,0.9723f ,0.4437f ,0.6405f ,0.4519f ,0.6235f ,0.3367f ,0.9059f ,0.4034f ,0.9073f ,0.4566f ,0.6329f ,0.4157f ,0.6257f ,0.4137f ,0.6192f ,0.2441f ,0.6653f ,0.2548f ,0.6653f ,0.2511f ,0.6816f ,0.2441f ,0.6816f ,0.2636f ,0.664f ,0.2661f ,0.696f ,0.3484f ,0.6888f ,0.3007f ,0.651f ,0.3623f ,0.7239f ,0.2881f ,0.7397f ,0.4215f ,0.6174f ,0.4295f ,0.6197f ,0.4151f ,0.6155f ,0.4116f ,0.6201f ,0.4518f ,0.7703f ,0.4123f ,0.7323f ,0.4088f ,0.6855f ,0.364f ,0.6372f ,0.2959f ,0.626f ,0.3051f ,0.6166f ,0.2441f ,0.7326f ,0.2441f ,0.7705f ,0.2441f ,0.7109f ,0.2745f ,0.8415f ,0.2466f ,0.8272f ,0.2441f ,0.816f });
  }
}
private class MFVec2f510 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.263f ,0.8101f ,0.3011f ,0.7644f ,0.2746f ,0.7881f ,0.246f ,0.853f ,0.2699f ,0.8521f ,0.4229f ,0.7906f ,0.445f ,0.8342f ,0.3401f ,0.8443f ,0.3393f ,0.8544f ,0.3079f ,0.8417f ,0.314f ,0.8296f ,0.3962f ,0.7639f ,0.3654f ,0.758f ,0.3664f ,0.7923f ,0.3312f ,0.7931f ,0.3858f ,0.7947f ,0.3065f ,0.7969f ,0.2889f ,0.7981f ,0.2826f ,0.8198f ,0.2864f ,0.8094f ,0.4051f ,0.8004f ,0.3243f ,0.8795f ,0.4267f ,0.8291f ,0.293f ,0.8645f ,0.4715f ,0.8911f ,0.431f ,0.9594f ,0.4715f ,0.8911f ,0.4658f ,0.6252f ,0.465f ,0.6281f ,0.4194f ,0.891f ,0.3862f ,0.8876f ,0.4544f ,0.6426f ,0.2548f ,0.6553f ,0.2441f ,0.6553f ,0.3984f ,0.649f ,0.3783f ,0.625f ,0.4156f ,0.6279f ,0.4325f ,0.6718f ,0.428f ,0.6022f ,0.4443f ,0.6446f ,0.4445f ,0.6357f ,0.4021f ,0.656f ,0.4052f ,0.6271f ,0.4253f ,0.6199f ,0.3898f ,0.85f ,0.6418f ,0.6585f ,0.6441f ,0.671f ,0.6441f ,0.671f ,0.6418f ,0.6585f ,0.6214f ,0.6731f ,0.6214f ,0.6731f ,0.616f ,0.6731f ,0.616f ,0.6731f ,0.623f ,0.6494f ,0.6418f ,0.6585f ,0.3003f ,0.6509f ,0.2548f ,0.6558f ,0.2549f ,0.6531f ,0.2441f ,0.6558f ,0.2441f ,0.6529f ,0.3891f ,0.8542f ,0.4294f ,0.848f ,0.4442f ,0.8857f ,0.295f ,0.8569f ,0.3273f ,0.8725f ,0.3844f ,0.8819f });
  }
}
private class MFFloat511 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat512 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32513 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,25,-1,25,24,0,-1,2,26,25,-1,25,1,2,-1,2,3,8,-1,8,26,2,-1,10,27,9,-1,9,4,10,-1,10,0,24,-1,24,27,10,-1,1,0,12,-1,12,13,1,-1,2,1,13,-1,13,14,2,-1,3,2,14,-1,14,15,3,-1,10,4,16,-1,16,22,10,-1,5,6,18,-1,18,17,5,-1,6,7,19,-1,19,18,6,-1,7,8,20,-1,20,19,7,-1,9,11,23,-1,23,21,9,-1,8,3,15,-1,15,20,8,-1,4,9,21,-1,21,16,4,-1,0,10,22,-1,22,12,0,-1,11,5,17,-1,17,23,11,-1,6,5,24,-1,24,25,6,-1,7,6,25,-1,25,26,7,-1,5,11,27,-1,27,24,5,-1,27,11,9,-1,8,7,26,-1});
  }
}
private class MFInt32514 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,4,6,7,-1,7,5,4,-1,9,10,11,-1,11,8,9,-1,9,0,3,-1,3,10,9,-1,1,0,12,-1,12,13,1,-1,4,1,13,-1,13,14,4,-1,6,4,14,-1,14,15,6,-1,9,8,16,-1,16,17,9,-1,18,19,20,-1,20,21,18,-1,19,22,23,-1,23,20,19,-1,22,7,24,-1,24,23,22,-1,11,25,26,-1,26,27,11,-1,7,6,15,-1,15,24,7,-1,8,11,27,-1,27,16,8,-1,0,9,17,-1,17,12,0,-1,25,18,21,-1,21,26,25,-1,19,18,3,-1,3,2,19,-1,22,19,2,-1,2,5,22,-1,18,25,10,-1,10,3,18,-1,10,25,11,-1,7,22,5,-1});
  }
}
private class MFVec3f515 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0680895f ,1.4455328f ,0.08745751f ,0.0484515f ,1.4517225f ,0.10122751f ,0.03489975f ,1.4487976f ,0.10656001f ,0.023489999f ,1.440351f ,0.109485f ,0.082912505f ,1.4294047f ,0.0752175f ,0.06322725f ,1.4205376f ,0.0957375f ,0.0498015f ,1.424592f ,0.1037025f ,0.0380115f ,1.4295623f ,0.10766251f ,0.029985748f ,1.4340128f ,0.10881f ,0.0783675f ,1.4253458f ,0.07974f ,0.075825f ,1.437795f ,0.081337504f ,0.0696285f ,1.4202473f ,0.0888075f ,0.06530175f ,1.4432063f ,0.083745f ,0.046669498f ,1.4462978f ,0.095625006f ,0.03466575f ,1.4440815f ,0.1006425f ,0.023197498f ,1.4388705f ,0.106920004f ,0.0816075f ,1.4289368f ,0.0744075f ,0.06244875f ,1.4194462f ,0.09432f ,0.04914f ,1.4230418f ,0.100912504f ,0.03722175f ,1.4282686f ,0.10548f ,0.029506499f ,1.4327235f ,0.10658251f ,0.0780975f ,1.4244908f ,0.0779625f ,0.07326f ,1.4361098f ,0.079132505f ,0.068616f ,1.419651f ,0.0879525f ,0.06635475f ,1.4316503f ,0.09141751f ,0.04920075f ,1.4383237f ,0.10368001f ,0.03714075f ,1.4376713f ,0.10743751f ,0.07280775f ,1.4284688f ,0.0854775f });
  }
}
private class MFVec2f516 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3562f ,0.7836f ,0.3424f ,0.7815f ,0.3432f ,0.7614f ,0.3553f ,0.7628f ,0.3328f ,0.7723f ,0.3344f ,0.7557f ,0.3248f ,0.7567f ,0.3294f ,0.7475f ,0.3666f ,0.7703f ,0.3614f ,0.7771f ,0.3598f ,0.7618f ,0.364f ,0.76f ,0.3542f ,0.784f ,0.3411f ,0.7782f ,0.3327f ,0.7703f ,0.3246f ,0.7567f ,0.3657f ,0.7703f ,0.3598f ,0.7771f ,0.3534f ,0.7431f ,0.3436f ,0.742f ,0.3428f ,0.7423f ,0.3522f ,0.7429f ,0.335f ,0.743f ,0.3345f ,0.743f ,0.3291f ,0.7475f ,0.3576f ,0.7438f ,0.3566f ,0.7438f ,0.3632f ,0.7603f });
  }
}
private class MFFloat517 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat518 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32519 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,24,25,-1,25,1,0,-1,2,1,25,-1,25,26,2,-1,2,26,8,-1,8,3,2,-1,10,4,9,-1,9,27,10,-1,10,27,24,-1,24,0,10,-1,1,13,12,-1,12,0,1,-1,2,14,13,-1,13,1,2,-1,3,15,14,-1,14,2,3,-1,10,22,16,-1,16,4,10,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,9,21,23,-1,23,11,9,-1,8,20,15,-1,15,3,8,-1,4,16,21,-1,21,9,4,-1,0,12,22,-1,22,10,0,-1,11,23,17,-1,17,5,11,-1,6,25,24,-1,24,5,6,-1,7,26,25,-1,25,6,7,-1,5,24,27,-1,27,11,5,-1,27,9,11,-1,8,26,7,-1});
  }
}
private class MFInt32520 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,4,5,7,-1,7,6,4,-1,9,8,11,-1,11,10,9,-1,9,10,3,-1,3,0,9,-1,1,13,12,-1,12,0,1,-1,4,14,13,-1,13,1,4,-1,6,15,14,-1,14,4,6,-1,9,17,16,-1,16,8,9,-1,18,21,20,-1,20,19,18,-1,19,20,23,-1,23,22,19,-1,22,23,24,-1,24,7,22,-1,11,27,26,-1,26,25,11,-1,7,24,15,-1,15,6,7,-1,8,16,27,-1,27,11,8,-1,0,12,17,-1,17,9,0,-1,25,26,21,-1,21,18,25,-1,19,2,3,-1,3,18,19,-1,22,5,2,-1,2,19,22,-1,18,3,10,-1,10,25,18,-1,10,11,25,-1,7,5,22,-1});
  }
}
private class MFVec3f521 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0680895f ,1.4455328f ,0.08745751f ,-0.0484515f ,1.4517225f ,0.10122751f ,-0.03489975f ,1.4487976f ,0.10656001f ,-0.023489999f ,1.440351f ,0.109485f ,-0.082912505f ,1.4294047f ,0.0752175f ,-0.06322725f ,1.4205376f ,0.0957375f ,-0.0498015f ,1.424592f ,0.1037025f ,-0.0380115f ,1.4295623f ,0.10766251f ,-0.029985748f ,1.4340128f ,0.10881f ,-0.0783675f ,1.4253458f ,0.07974f ,-0.075825f ,1.437795f ,0.081337504f ,-0.0696285f ,1.4202473f ,0.0888075f ,-0.06530175f ,1.4432063f ,0.083745f ,-0.046669498f ,1.4462978f ,0.095625006f ,-0.03466575f ,1.4440815f ,0.1006425f ,-0.023197498f ,1.4388705f ,0.106920004f ,-0.0816075f ,1.4289368f ,0.0744075f ,-0.06244875f ,1.4194462f ,0.09432f ,-0.04914f ,1.4230418f ,0.100912504f ,-0.03722175f ,1.4282686f ,0.10548f ,-0.029506499f ,1.4327235f ,0.10658251f ,-0.0780975f ,1.4244908f ,0.0779625f ,-0.07326f ,1.4361098f ,0.079132505f ,-0.068616f ,1.419651f ,0.0879525f ,-0.06635475f ,1.4316503f ,0.09141751f ,-0.04920075f ,1.4383237f ,0.10368001f ,-0.03714075f ,1.4376713f ,0.10743751f ,-0.07280775f ,1.4284688f ,0.0854775f });
  }
}
private class MFVec2f522 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3562f ,0.7836f ,0.3424f ,0.7815f ,0.3432f ,0.7614f ,0.3553f ,0.7628f ,0.3328f ,0.7723f ,0.3344f ,0.7557f ,0.3248f ,0.7567f ,0.3294f ,0.7475f ,0.3666f ,0.7703f ,0.3614f ,0.7771f ,0.3598f ,0.7618f ,0.364f ,0.76f ,0.3542f ,0.784f ,0.3411f ,0.7782f ,0.3327f ,0.7703f ,0.3246f ,0.7567f ,0.3657f ,0.7703f ,0.3598f ,0.7771f ,0.3534f ,0.7431f ,0.3436f ,0.742f ,0.3428f ,0.7423f ,0.3522f ,0.7429f ,0.335f ,0.743f ,0.3345f ,0.743f ,0.3291f ,0.7475f ,0.3576f ,0.7438f ,0.3566f ,0.7438f ,0.3632f ,0.7603f });
  }
}
private class MFFloat523 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat524 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32525 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,6,16,-1,16,11,1,-1,0,1,11,-1,11,10,0,-1,8,9,19,-1,19,18,8,-1,2,8,18,-1,18,12,2,-1,3,0,10,-1,10,13,3,-1,9,4,14,-1,14,19,9,-1,5,2,12,-1,12,15,5,-1,4,3,13,-1,13,14,4,-1,6,7,17,-1,17,16,6,-1,7,5,15,-1,15,17,7,-1,11,16,21,-1,21,20,11,-1,16,17,22,-1,22,21,16,-1,17,15,23,-1,23,22,17,-1,15,12,24,-1,24,23,15,-1,12,18,25,-1,25,24,12,-1,18,19,26,-1,26,25,18,-1,19,14,27,-1,27,26,19,-1,14,13,28,-1,28,27,14,-1,13,10,29,-1,29,28,13,-1,10,11,20,-1,20,29,10,-1,6,1,30,-1,1,0,30,-1,0,3,30,-1,3,4,30,-1,4,9,30,-1,9,8,30,-1,8,2,30,-1,2,5,30,-1,5,7,30,-1,7,6,30,-1});
  }
}
private class MFInt32526 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,9,13,-1,13,14,4,-1,3,4,14,-1,14,15,3,-1,11,12,16,-1,16,17,11,-1,5,11,17,-1,17,18,5,-1,6,3,15,-1,15,6,6,-1,12,7,19,-1,19,16,12,-1,8,5,18,-1,18,20,8,-1,7,6,21,-1,21,19,7,-1,9,10,22,-1,22,13,9,-1,10,8,20,-1,20,22,10,-1,14,13,24,-1,24,23,14,-1,13,22,25,-1,25,24,13,-1,22,20,26,-1,26,25,22,-1,20,18,27,-1,27,26,20,-1,18,17,28,-1,28,27,18,-1,17,16,29,-1,29,28,17,-1,16,19,30,-1,30,29,16,-1,19,21,31,-1,31,30,19,-1,6,15,32,-1,32,31,6,-1,15,14,23,-1,23,32,15,-1,36,1,40,-1,1,0,40,-1,0,33,40,-1,33,34,40,-1,34,39,40,-1,39,38,40,-1,38,2,40,-1,2,35,40,-1,35,37,40,-1,37,36,40,-1});
  }
}
private class MFVec3f527 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.035271f ,1.407843f ,0.106042504f ,0.04827375f ,1.4122688f ,0.10307925f ,0.068949f ,1.393335f ,0.078867f ,0.02277f ,1.4001908f ,0.1064475f ,0.02985075f ,1.3947142f ,0.10174725f ,0.072225004f ,1.3961812f ,0.076779f ,0.0676035f ,1.4155313f ,0.089601755f ,0.082575f ,1.4078475f ,0.07194375f ,0.06240825f ,1.3930538f ,0.085353754f ,0.04069125f ,1.3934723f ,0.096680254f ,0.0277155f ,1.4117355f ,0.09791326f ,0.041780252f ,1.418481f ,0.09326925f ,0.06625125f ,1.3883828f ,0.069507f ,0.013522499f ,1.40049f ,0.0988605f ,0.021599999f ,1.3898183f ,0.09364501f ,0.0701415f ,1.3931887f ,0.067113005f ,0.065421f ,1.4220135f ,0.080228254f ,0.080505f ,1.4098231f ,0.062649004f ,0.0588735f ,1.3877865f ,0.07619625f ,0.0340335f ,1.3880363f ,0.088218f ,0.0387135f ,1.4152567f ,0.08419275f ,0.06027975f ,1.4180603f ,0.0730845f ,0.072225004f ,1.4094428f ,0.0596025f ,0.065889f ,1.3987283f ,0.06316425f ,0.061913252f ,1.395549f ,0.0653895f ,0.05586975f ,1.3950877f ,0.07102125f ,0.03096f ,1.3957515f ,0.0821655f ,0.0202275f ,1.3975043f ,0.0861435f ,0.016312499f ,1.4013765f ,0.08707275f ,0.02621925f ,1.4096116f ,0.0877455f ,0.0546795f ,1.4028931f ,0.095818505f });
  }
}
private class MFVec2f528 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3217f ,0.8278f ,0.3482f ,0.8386f ,0.3916f ,0.7984f ,0.3206f ,0.8292f ,0.3482f ,0.8386f ,0.3916f ,0.7984f ,0.2977f ,0.8092f ,0.309f ,0.8013f ,0.3985f ,0.8044f ,0.3868f ,0.8428f ,0.4182f ,0.8265f ,0.3778f ,0.7978f ,0.3319f ,0.7987f ,0.3868f ,0.8428f ,0.3482f ,0.8386f ,0.3206f ,0.8292f ,0.3319f ,0.7987f ,0.3778f ,0.7978f ,0.3916f ,0.7984f ,0.309f ,0.8013f ,0.3985f ,0.8029f ,0.2977f ,0.8092f ,0.4182f ,0.8263f ,0.3482f ,0.8386f ,0.3868f ,0.8428f ,0.4182f ,0.8265f ,0.3985f ,0.8044f ,0.3916f ,0.7984f ,0.3778f ,0.7978f ,0.3319f ,0.7987f ,0.309f ,0.8013f ,0.2977f ,0.8092f ,0.3206f ,0.8292f ,0.2978f ,0.8092f ,0.309f ,0.8013f ,0.3985f ,0.8044f ,0.3868f ,0.8428f ,0.4182f ,0.8265f ,0.3778f ,0.7978f ,0.3319f ,0.7986f ,0.3567f ,0.819f });
  }
}
private class MFFloat529 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat530 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32531 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,11,16,-1,16,6,1,-1,0,10,11,-1,11,1,0,-1,8,18,19,-1,19,9,8,-1,2,12,18,-1,18,8,2,-1,3,13,10,-1,10,0,3,-1,9,19,14,-1,14,4,9,-1,5,15,12,-1,12,2,5,-1,4,14,13,-1,13,3,4,-1,6,16,17,-1,17,7,6,-1,7,17,15,-1,15,5,7,-1,11,20,21,-1,21,16,11,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,15,17,-1,15,23,24,-1,24,12,15,-1,12,24,25,-1,25,18,12,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,14,19,-1,14,27,28,-1,28,13,14,-1,13,28,29,-1,29,10,13,-1,10,29,20,-1,20,11,10,-1,6,30,1,-1,1,30,0,-1,0,30,3,-1,3,30,4,-1,4,30,9,-1,9,30,8,-1,8,30,2,-1,2,30,5,-1,5,30,7,-1,7,30,6,-1});
  }
}
private class MFInt32532 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,14,13,-1,13,9,4,-1,3,15,14,-1,14,4,3,-1,11,17,16,-1,16,12,11,-1,5,18,17,-1,17,11,5,-1,6,6,15,-1,15,3,6,-1,12,16,19,-1,19,7,12,-1,8,20,18,-1,18,5,8,-1,7,19,21,-1,21,6,7,-1,9,13,22,-1,22,10,9,-1,10,22,20,-1,20,8,10,-1,14,23,24,-1,24,13,14,-1,13,24,25,-1,25,22,13,-1,22,25,26,-1,26,20,22,-1,20,26,27,-1,27,18,20,-1,18,27,28,-1,28,17,18,-1,17,28,29,-1,29,16,17,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,21,19,-1,6,31,32,-1,32,15,6,-1,15,32,23,-1,23,14,15,-1,36,40,1,-1,1,40,0,-1,0,40,33,-1,33,40,34,-1,34,40,39,-1,39,40,38,-1,38,40,2,-1,2,40,35,-1,35,40,37,-1,37,40,36,-1});
  }
}
private class MFVec3f533 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.035271f ,1.407843f ,0.106042504f ,-0.04827375f ,1.4122688f ,0.10307925f ,-0.068949f ,1.393335f ,0.078867f ,-0.02277f ,1.4001908f ,0.1064475f ,-0.02985075f ,1.3947142f ,0.10174725f ,-0.072225004f ,1.3961812f ,0.076779f ,-0.0676035f ,1.4155313f ,0.089601755f ,-0.082575f ,1.4078475f ,0.07194375f ,-0.06240825f ,1.3930538f ,0.085353754f ,-0.04069125f ,1.3934723f ,0.096680254f ,-0.0277155f ,1.4117355f ,0.09791326f ,-0.041780252f ,1.418481f ,0.09326925f ,-0.06625125f ,1.3883828f ,0.069507f ,-0.013522499f ,1.40049f ,0.0988605f ,-0.021599999f ,1.3898183f ,0.09364501f ,-0.0701415f ,1.3931887f ,0.067113005f ,-0.065421f ,1.4220135f ,0.080226004f ,-0.080505f ,1.4098231f ,0.062649004f ,-0.0588735f ,1.3877865f ,0.07619625f ,-0.0340335f ,1.3880363f ,0.088218f ,-0.0387135f ,1.4152567f ,0.08419275f ,-0.06027975f ,1.4180603f ,0.0730845f ,-0.072225004f ,1.4094428f ,0.0596025f ,-0.065889f ,1.3987283f ,0.06316425f ,-0.061913252f ,1.395549f ,0.0653895f ,-0.05586975f ,1.3950877f ,0.07102125f ,-0.03096f ,1.3957515f ,0.0821655f ,-0.0202275f ,1.3975043f ,0.0861435f ,-0.016312499f ,1.4013765f ,0.08707275f ,-0.02621925f ,1.4096116f ,0.0877455f ,-0.0546795f ,1.4028931f ,0.095818505f });
  }
}
private class MFVec2f534 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3217f ,0.8278f ,0.3482f ,0.8386f ,0.3916f ,0.7984f ,0.3206f ,0.8292f ,0.3482f ,0.8386f ,0.3916f ,0.7984f ,0.2977f ,0.8092f ,0.309f ,0.8013f ,0.3985f ,0.8044f ,0.3868f ,0.8428f ,0.4182f ,0.8265f ,0.3778f ,0.7978f ,0.3319f ,0.7987f ,0.3868f ,0.8428f ,0.3482f ,0.8386f ,0.3206f ,0.8292f ,0.3319f ,0.7987f ,0.3778f ,0.7978f ,0.3916f ,0.7984f ,0.309f ,0.8013f ,0.3985f ,0.8029f ,0.2977f ,0.8092f ,0.4182f ,0.8263f ,0.3482f ,0.8386f ,0.3868f ,0.8428f ,0.4182f ,0.8265f ,0.3985f ,0.8044f ,0.3916f ,0.7984f ,0.3778f ,0.7978f ,0.3319f ,0.7987f ,0.309f ,0.8013f ,0.2977f ,0.8092f ,0.3206f ,0.8292f ,0.2978f ,0.8092f ,0.309f ,0.8013f ,0.3985f ,0.8044f ,0.3868f ,0.8428f ,0.4182f ,0.8265f ,0.3778f ,0.7978f ,0.3319f ,0.7986f ,0.3567f ,0.819f });
  }
}
private class MFFloat535 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat536 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32537 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,20,21,-1,21,7,2,-1,4,3,8,-1,8,10,4,-1,3,2,7,-1,7,8,3,-1,2,1,5,-1,5,20,2,-1,4,6,3,-1,3,6,1,-1,1,2,3,-1,5,1,12,-1,12,14,5,-1,0,5,14,-1,14,11,0,-1,6,4,13,-1,13,15,6,-1,1,6,15,-1,15,12,1,-1,8,7,16,-1,16,17,8,-1,21,22,16,-1,16,7,21,-1,9,0,11,-1,11,18,9,-1,4,10,19,-1,19,13,4,-1,10,8,17,-1,17,19,10,-1,20,0,9,-1,9,21,20,-1,5,0,20,-1,21,9,18,-1,18,22,21,-1});
  }
}
private class MFInt32538 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,20,21,-1,21,7,0,-1,3,1,8,-1,8,10,3,-1,1,0,7,-1,7,8,1,-1,0,4,5,-1,5,20,0,-1,3,6,1,-1,1,6,4,-1,4,0,1,-1,5,4,11,-1,11,12,5,-1,2,5,12,-1,12,14,2,-1,6,3,15,-1,15,16,6,-1,4,6,16,-1,16,11,4,-1,8,7,13,-1,13,17,8,-1,21,22,13,-1,13,7,21,-1,9,2,14,-1,14,18,9,-1,3,10,19,-1,19,15,3,-1,10,8,17,-1,17,19,10,-1,20,2,9,-1,9,21,20,-1,5,2,20,-1,21,9,18,-1,18,22,21,-1});
  }
}
private class MFVec3f539 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.014508001f ,1.4087296f ,0.12278925f ,0.046116002f ,1.4273416f ,0.1154835f ,0.0464085f ,1.4234064f ,0.114228f ,0.07300351f ,1.4280931f ,0.09362475f ,0.086751f ,1.4287546f ,0.0771975f ,0.02509875f ,1.420407f ,0.12194325f ,0.073521f ,1.4311485f ,0.093296245f ,0.046881f ,1.4196465f ,0.1114965f ,0.0714285f ,1.4240319f ,0.09249975f ,0.01602675f ,1.4072468f ,0.120141f ,0.0863685f ,1.426707f ,0.076725f ,0.0155070005f ,1.4090401f ,0.1170135f ,0.046026003f ,1.4268713f ,0.1108215f ,0.084906004f ,1.428678f ,0.075757496f ,0.02571075f ,1.4199684f ,0.1166895f ,0.072801f ,1.4305388f ,0.09049725f ,0.046746f ,1.4193541f ,0.107163f ,0.0705735f ,1.423665f ,0.089759246f ,0.017172001f ,1.4074875f ,0.11459025f ,0.08429851f ,1.4261446f ,0.075307496f ,0.027978752f ,1.4166541f ,0.11952225f ,0.030271502f ,1.4138843f ,0.116379f ,0.029373752f ,1.4129685f ,0.11156175f });
  }
}
private class MFVec2f540 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.344f ,0.8611f ,0.3991f ,0.8726f ,0.2757f ,0.8301f ,0.4299f ,0.8749f ,0.3424f ,0.8703f ,0.297f ,0.8558f ,0.4f ,0.8788f ,0.3445f ,0.8554f ,0.397f ,0.8649f ,0.2794f ,0.8281f ,0.4294f ,0.8703f ,0.3456f ,0.8724f ,0.3008f ,0.857f ,0.3469f ,0.8565f ,0.2795f ,0.829f ,0.4293f ,0.8745f ,0.3996f ,0.8793f ,0.3963f ,0.8659f ,0.2847f ,0.831f ,0.4284f ,0.8697f ,0.3046f ,0.8466f ,0.3082f ,0.8407f ,0.3105f ,0.8417f });
  }
}
private class MFFloat541 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat542 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32543 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,7,21,-1,21,20,2,-1,4,10,8,-1,8,3,4,-1,3,8,7,-1,7,2,3,-1,2,20,5,-1,5,1,2,-1,4,3,6,-1,3,2,1,-1,1,6,3,-1,5,14,12,-1,12,1,5,-1,0,11,14,-1,14,5,0,-1,6,15,13,-1,13,4,6,-1,1,12,15,-1,15,6,1,-1,8,17,16,-1,16,7,8,-1,21,7,16,-1,16,22,21,-1,9,18,11,-1,11,0,9,-1,4,13,19,-1,19,10,4,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,0,20,-1,5,20,0,-1,21,22,18,-1,18,9,21,-1});
  }
}
private class MFInt32544 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,7,21,-1,21,20,0,-1,3,10,8,-1,8,1,3,-1,1,8,7,-1,7,0,1,-1,0,20,5,-1,5,4,0,-1,3,1,6,-1,1,0,4,-1,4,6,1,-1,5,12,11,-1,11,4,5,-1,2,14,12,-1,12,5,2,-1,6,16,15,-1,15,3,6,-1,4,11,16,-1,16,6,4,-1,8,17,13,-1,13,7,8,-1,21,7,13,-1,13,22,21,-1,9,18,14,-1,14,2,9,-1,3,15,19,-1,19,10,3,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,2,20,-1,5,20,2,-1,21,22,18,-1,18,9,21,-1});
  }
}
private class MFVec3f545 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.014508001f ,1.4087296f ,0.12278925f ,-0.046116002f ,1.4273416f ,0.1154835f ,-0.0464085f ,1.4234064f ,0.114228f ,-0.07300351f ,1.4280931f ,0.09362475f ,-0.086751f ,1.4287546f ,0.0771975f ,-0.02509875f ,1.420407f ,0.12194325f ,-0.073521f ,1.4311485f ,0.093296245f ,-0.046881f ,1.4196465f ,0.1114965f ,-0.0714285f ,1.4240319f ,0.09249975f ,-0.01602675f ,1.4072468f ,0.120141f ,-0.0863685f ,1.426707f ,0.076725f ,-0.0155070005f ,1.4090401f ,0.1170135f ,-0.046026003f ,1.4268713f ,0.1108215f ,-0.084906004f ,1.428678f ,0.075757496f ,-0.02571075f ,1.4199684f ,0.1166895f ,-0.072801f ,1.4305388f ,0.09049725f ,-0.046746f ,1.4193541f ,0.107163f ,-0.0705735f ,1.423665f ,0.089759246f ,-0.017172001f ,1.4074875f ,0.11459025f ,-0.08429851f ,1.4261446f ,0.075307496f ,-0.027978752f ,1.4166541f ,0.11952225f ,-0.030271502f ,1.4138843f ,0.116379f ,-0.029373752f ,1.4129685f ,0.11156175f });
  }
}
private class MFVec2f546 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.344f ,0.8611f ,0.3991f ,0.8726f ,0.2757f ,0.8301f ,0.4299f ,0.8749f ,0.3424f ,0.8703f ,0.297f ,0.8558f ,0.4f ,0.8788f ,0.3445f ,0.8554f ,0.397f ,0.8649f ,0.2794f ,0.8281f ,0.4294f ,0.8703f ,0.3456f ,0.8724f ,0.3008f ,0.857f ,0.3469f ,0.8565f ,0.2795f ,0.829f ,0.4293f ,0.8745f ,0.3996f ,0.8793f ,0.3963f ,0.8659f ,0.2847f ,0.831f ,0.4284f ,0.8697f ,0.3046f ,0.8466f ,0.3082f ,0.8407f ,0.3105f ,0.8417f });
  }
}
private class MFFloat547 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat548 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32549 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,12,-1,13,3,15,-1,3,13,4,-1,4,13,12,-1,4,12,2,-1,1,0,18,-1,18,9,1,-1,4,2,10,-1,10,6,8,-1,4,10,8,-1,3,7,24,-1,24,15,3,-1,4,8,7,-1,7,3,4,-1,5,26,24,-1,24,7,5,-1,8,6,5,-1,5,7,8,-1,0,1,2,-1,2,1,9,-1,9,10,2,-1,0,12,11,-1,13,15,14,-1,14,16,13,-1,16,12,13,-1,16,11,12,-1,17,19,18,-1,18,0,17,-1,22,21,20,-1,16,22,20,-1,16,20,11,-1,14,15,24,-1,24,23,14,-1,16,14,23,-1,23,22,16,-1,25,23,24,-1,24,26,25,-1,22,23,25,-1,25,21,22,-1,0,11,17,-1,11,20,19,-1,19,17,11,-1});
  }
}
private class MFInt32550 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,4,5,6,-1,5,4,7,-1,7,4,3,-1,7,3,2,-1,1,0,0,-1,0,8,1,-1,7,2,2,-1,2,9,16,-1,7,2,16,-1,5,13,14,-1,14,6,5,-1,7,15,13,-1,13,5,7,-1,11,12,17,-1,17,10,11,-1,18,19,11,-1,11,10,18,-1,0,20,2,-1,2,20,21,-1,21,2,2,-1,0,22,2,-1,23,25,24,-1,24,26,23,-1,26,22,23,-1,26,2,22,-1,27,28,0,-1,0,0,27,-1,30,29,2,-1,26,30,2,-1,26,2,2,-1,24,25,32,-1,32,31,24,-1,26,24,31,-1,31,33,26,-1,35,34,37,-1,37,36,35,-1,38,34,35,-1,35,39,38,-1,0,2,40,-1,2,2,41,-1,41,40,2,-1});
  }
}
private class MFVec3f551 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.2832425f ,0.080943756f ,0.02817f ,1.2966278f ,0.06899625f ,0.0243675f ,1.3078147f ,0.08656875f ,0.005049f ,1.325727f ,0.10553625f ,0.026640002f ,1.3237088f ,0.09484875f ,0.005049f ,1.33623f ,0.04658625f ,0.0241425f ,1.338525f ,0.045483753f ,0.005049f ,1.327131f ,0.09374625f ,0.024525002f ,1.3274056f ,0.08611876f ,0.043425f ,1.3159688f ,0.031284f ,0.044797502f ,1.329039f ,0.037404f ,-0.0243675f ,1.3078147f ,0.08656875f ,0f ,1.3077112f ,0.096041255f ,0f ,1.3161578f ,0.105648756f ,-0.005049f ,1.325727f ,0.10553625f ,0f ,1.325727f ,0.10553625f ,-0.026640002f ,1.3237088f ,0.09484875f ,-0.02817f ,1.2966278f ,0.06899625f ,0f ,1.3063005f ,0.0358605f ,-0.043425f ,1.3159688f ,0.031284f ,-0.044797502f ,1.329039f ,0.037404f ,-0.0241425f ,1.338525f ,0.045483753f ,-0.024525002f ,1.3274056f ,0.08611876f ,-0.005049f ,1.327131f ,0.09374625f ,0f ,1.327131f ,0.09374625f ,-0.005049f ,1.33623f ,0.04658625f ,0f ,1.3339328f ,0.04741875f });
  }
}
private class MFVec2f552 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2448f ,0.6067f ,0.3051f ,0.6166f ,0.2959f ,0.6259f ,0.2442f ,0.6234f ,0.2438f ,0.6465f ,0.2546f ,0.6556f ,0.2439f ,0.6556f ,0.3007f ,0.651f ,0.3051f ,0.6166f ,0.3007f ,0.651f ,0.6104f ,0.6278f ,0.6104f ,0.661f ,0.6021f ,0.661f ,0.2546f ,0.6556f ,0.2439f ,0.6556f ,0.3007f ,0.651f ,0.3007f ,0.651f ,0.6021f ,0.6278f ,0.6425f ,0.6334f ,0.6294f ,0.6619f ,0.3051f ,0.6166f ,0.3051f ,0.6166f ,0.2442f ,0.6234f ,0.2438f ,0.6465f ,0.2546f ,0.6556f ,0.2439f ,0.6556f ,0.3007f ,0.651f ,0.3051f ,0.6166f ,0.3051f ,0.6166f ,0.3007f ,0.651f ,0.3007f ,0.651f ,0.2546f ,0.6556f ,0.2439f ,0.6556f ,0.3007f ,0.651f ,0.6104f ,0.6278f ,0.6104f ,0.661f ,0.6021f ,0.661f ,0.6021f ,0.6278f ,0.6425f ,0.6334f ,0.6294f ,0.6619f ,0.3051f ,0.6166f ,0.3051f ,0.6166f });
  }
}
private class MFFloat553 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat554 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32555 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1});
  }
}
private class MFInt32556 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1});
  }
}
private class MFVec3f557 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.15075f ,1.21104f ,-0.033234753f ,0.1526175f ,1.2199343f ,-0.012728251f ,0.14436f ,1.2125138f ,0.0131692495f ,0.14267251f ,1.1677725f ,0.01105425f ,0.14166f ,1.1716201f ,-0.01659375f ,0.114435f ,1.217439f ,0.026061753f ,0.1260225f ,1.2309526f ,-0.014994f ,0.1328175f ,1.152675f ,-0.026640002f ,0.137205f ,1.152675f ,0.018366752f ,0.1230975f ,1.2159855f ,-0.051855754f ,0.035691753f ,1.222902f ,-0.0180225f ,0.035691753f ,1.2154658f ,-0.034994252f ,0.035691753f ,1.1767951f ,-0.019584f ,0.035691753f ,1.1773801f ,0.0003082502f ,0.035691753f ,1.2145185f ,0.0046170005f });
  }
}
private class MFVec2f558 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1911f ,0.4797f ,0.171f ,0.4832f ,0.1497f ,0.4806f ,0.1519f ,0.4334f ,0.1831f ,0.4416f ,0.1474f ,0.4856f ,0.1708f ,0.4854f ,0.1784f ,0.4249f ,0.1538f ,0.4251f ,0.1963f ,0.4863f ,0.19f ,0.5091f ,0.1847f ,0.499f ,0.172f ,0.4382f ,0.1568f ,0.4457f ,0.1409f ,0.4926f });
  }
}
private class MFFloat559 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat560 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32561 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,9,6,-1,6,2,3,-1,7,5,1,-1,1,8,7,-1,6,8,0,-1,0,2,6,-1,0,8,1,-1,9,7,8,-1,8,6,9,-1,4,5,11,-1,11,10,4,-1,5,7,12,-1,12,11,5,-1,7,9,13,-1,13,12,7,-1,9,3,14,-1,14,13,9,-1,3,4,10,-1,10,14,3,-1,10,11,15,-1,11,12,15,-1,12,13,15,-1,13,14,15,-1,14,10,15,-1});
  }
}
private class MFInt32562 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,8,6,-1,6,2,3,-1,9,5,1,-1,1,7,9,-1,6,7,0,-1,0,2,6,-1,0,7,1,-1,12,13,11,-1,11,10,12,-1,4,5,15,-1,15,14,4,-1,5,9,16,-1,16,15,5,-1,13,12,17,-1,17,16,13,-1,8,3,18,-1,18,17,8,-1,3,4,14,-1,14,18,3,-1,14,15,19,-1,15,16,19,-1,16,17,19,-1,17,18,19,-1,18,14,19,-1});
  }
}
private class MFVec3f563 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.16647752f ,1.2248101f ,-0.014994f ,0.15702751f ,1.2064321f ,-0.051867f ,0.15745501f ,1.2078114f ,0.0235305f ,0.11443051f ,1.2174525f ,0.026073001f ,0.1260315f ,1.230975f ,-0.014994f ,0.12311101f ,1.2159901f ,-0.0518445f ,0.14170726f ,1.156455f ,0.018378f ,0.13281976f ,1.152675f ,-0.02664225f ,0.14155877f ,1.156275f ,-0.0266175f ,0.1372095f ,1.152675f ,0.018355502f ,0.09510751f ,1.2234826f ,-0.014499f ,0.08813251f ,1.2109839f ,-0.038592f ,0.10600876f ,1.1557575f ,-0.023571001f ,0.10604026f ,1.1559376f ,0.013203f ,0.088965006f ,1.21509f ,0.016263f ,0.087165006f ,1.1914089f ,-0.00985725f });
  }
}
private class MFVec2f564 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1715f ,0.4655f ,0.1797f ,0.4646f ,0.1569f ,0.4642f ,0.1474f ,0.4856f ,0.1708f ,0.4854f ,0.1963f ,0.4863f ,0.1544f ,0.4288f ,0.1782f ,0.4286f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.1544f ,0.4288f ,0.1782f ,0.4286f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.1703f ,0.4865f ,0.1895f ,0.487f ,0.1761f ,0.4271f ,0.1552f ,0.4287f ,0.1491f ,0.4835f ,0.1671f ,0.4618f });
  }
}
private class MFFloat565 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat566 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32567 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,40,-1,40,41,26,-1,27,26,41,-1,41,42,27,-1,28,27,42,-1,42,43,28,-1,29,28,43,-1,43,44,29,-1,25,29,44,-1,44,40,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1});
  }
}
private class MFInt32568 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,0,1,-1,3,2,1,-1,55,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,49,35,36,-1,48,49,36,-1,37,48,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,38,39,56,-1,56,57,38,-1,40,50,58,-1,58,59,40,-1,41,40,59,-1,59,60,41,-1,42,41,60,-1,60,61,42,-1,39,42,61,-1,61,56,39,-1,43,44,39,-1,39,38,43,-1,45,52,51,-1,51,40,45,-1,46,45,40,-1,40,41,46,-1,47,46,41,-1,41,42,47,-1,44,47,42,-1,42,39,44,-1,34,33,44,-1,44,43,34,-1,35,54,53,-1,53,45,35,-1,36,35,45,-1,45,46,36,-1,37,36,46,-1,46,47,37,-1,33,37,47,-1,47,44,33,-1});
  }
}
private class MFVec3f569 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19125001f ,1.2183076f ,-0.041067f ,0.21726f ,1.21806f ,-0.0025087502f ,0.18861751f ,1.21833f ,0.0341505f ,0.14492251f ,1.2187126f ,0.018234001f ,0.14654475f ,1.21869f ,-0.028242001f ,0.19615501f ,1.1897933f ,-0.055242002f ,0.232065f ,1.1894739f ,-0.0019845f ,0.19253251f ,1.1898248f ,0.0486405f ,0.132165f ,1.1903626f ,0.026658002f ,0.134415f ,1.1903423f ,-0.0375345f ,0.19566001f ,1.1332351f ,-0.055242002f ,0.23157f ,1.13292f ,-0.0019845f ,0.192015f ,1.13328f ,0.0486405f ,0.13167f ,1.13382f ,0.026658002f ,0.13392f ,1.1337975f ,-0.0375345f ,0.19651501f ,1.1090475f ,-0.058212f ,0.2345175f ,1.10871f ,-0.00187425f ,0.19269001f ,1.1090926f ,0.051678002f ,0.12883501f ,1.109655f ,0.028435502f ,0.1311975f ,1.1096326f ,-0.039492004f ,0.18496126f ,1.1506951f ,-0.046894502f ,0.2124225f ,1.15047f ,-0.01348875f ,0.1982025f ,1.1505826f ,0.0333855f ,0.16196625f ,1.1508976f ,0.028953003f ,0.15378526f ,1.1509876f ,-0.020668501f ,0.18537076f ,1.0200375f ,-0.038569503f ,0.21388501f ,1.01979f ,-0.011772f ,0.199125f ,1.0199026f ,0.0258255f ,0.161487f ,1.0202401f ,0.0222705f ,0.15298876f ,1.0203301f ,-0.017532f ,0.18545851f ,0.92880005f ,-0.037264504f ,0.2129175f ,0.92857504f ,-0.011481751f ,0.1986975f ,0.92880005f ,0.024700502f ,0.1624635f ,0.92902505f ,0.0212805f ,0.15428026f ,0.92925006f ,-0.017025752f ,0.18423f ,0.91642505f ,-0.023483252f ,0.2003175f ,0.91642505f ,-0.00836775f ,0.1919925f ,0.91642505f ,0.012843001f ,0.17075476f ,0.91665006f ,0.010836001f ,0.16595775f ,0.91665006f ,-0.011616751f ,0.18496126f ,1.1506951f ,-0.046894502f ,0.2124225f ,1.15047f ,-0.01348875f ,0.1982025f ,1.1505826f ,0.0333855f ,0.16196625f ,1.1508976f ,0.028953003f ,0.15378526f ,1.1509876f ,-0.020668501f });
  }
}
private class MFVec2f570 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2986f ,0.2114f ,0.2726f ,0.2114f ,0.3201f ,0.2114f ,0.3415f ,0.2114f ,0.2466f ,0.2114f ,0.2979f ,0.2417f ,0.2726f ,0.2417f ,0.3197f ,0.2417f ,0.3418f ,0.2417f ,0.2473f ,0.2417f ,0.2979f ,0.3018f ,0.2726f ,0.3018f ,0.3197f ,0.3018f ,0.3418f ,0.3018f ,0.2473f ,0.3018f ,0.2978f ,0.3276f ,0.2726f ,0.3276f ,0.3197f ,0.3276f ,0.3419f ,0.3276f ,0.2474f ,0.3276f ,0.2932f ,0.2834f ,0.2689f ,0.2834f ,0.316f ,0.2834f ,0.3322f ,0.2834f ,0.245f ,0.2834f ,0.2251f ,0.2114f ,0.2255f ,0.2417f ,0.2255f ,0.2417f ,0.2255f ,0.3018f ,0.2255f ,0.3018f ,0.2255f ,0.3276f ,0.2255f ,0.3276f ,0.2159f ,0.2834f ,0.9467f ,0.4943f ,0.9572f ,0.4943f ,0.9099f ,0.4943f ,0.9193f ,0.4943f ,0.9332f ,0.4943f ,0.9567f ,0.4691f ,0.9455f ,0.4691f ,0.9105f ,0.4691f ,0.9205f ,0.4691f ,0.9332f ,0.4691f ,0.9567f ,0.4913f ,0.9458f ,0.4913f ,0.9102f ,0.4913f ,0.9203f ,0.4913f ,0.9334f ,0.4913f ,0.8898f ,0.4943f ,0.9003f ,0.4943f ,0.8997f ,0.4691f ,0.8997f ,0.4691f ,0.8998f ,0.4913f ,0.8998f ,0.4913f ,0.9003f ,0.4943f ,0.3481f ,0.2114f ,0.9448f ,0.4374f ,0.9561f ,0.4374f ,0.8991f ,0.4374f ,0.9117f ,0.4374f ,0.9198f ,0.4374f ,0.9341f ,0.4374f });
  }
}
private class MFFloat571 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat572 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32573 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
  }
}
private class MFInt32574 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,4,-1,1,2,4,-1,0,1,4,-1,4,3,5,-1,5,6,4,-1,3,2,7,-1,7,5,3,-1,2,1,8,-1,8,7,2,-1,1,0,9,-1,9,8,1,-1,0,4,6,-1,6,9,0,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,11,16,-1,16,19,14,-1,22,23,24,-1,21,22,24,-1,20,21,24,-1,22,21,16,-1,16,15,22,-1,23,22,15,-1,15,17,23,-1,24,23,17,-1,17,18,24,-1,20,24,18,-1,18,19,20,-1,21,20,19,-1,19,16,21,-1});
  }
}
private class MFVec3f575 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18693002f ,0.9356558f ,-0.0315495f ,0.20808002f ,0.9354735f ,-0.011452501f ,0.19604027f ,0.93557924f ,0.017770499f ,0.16745627f ,0.9358245f ,0.015725251f ,0.16182451f ,0.9358718f ,-0.014751001f ,0.18533702f ,0.909792f ,-0.042192f ,0.21521252f ,0.90953773f ,-0.015239251f ,0.19821152f ,0.909684f ,0.030933002f ,0.15781501f ,0.9100305f ,0.0277155f ,0.14985001f ,0.910098f ,-0.020452501f ,0.18508051f ,0.85005003f ,-0.041787002f ,0.21699002f ,0.8497575f ,-0.015135751f ,0.19966502f ,0.8629875f ,0.030595502f ,0.15653251f ,0.86334753f ,0.027400503f ,0.14719501f ,0.850365f ,-0.020297252f ,0.18342452f ,0.7327575f ,-0.037962f ,0.20668502f ,0.732555f ,-0.008507251f ,0.19344826f ,0.73269004f ,0.028345501f ,0.16199552f ,0.73296f ,0.025353f ,0.15579002f ,0.733005f ,-0.013342501f ,0.18229951f ,0.71874f ,-0.02555325f ,0.19818902f ,0.718605f ,-0.0054405f ,0.18914627f ,0.7186725f ,0.017838f ,0.16766551f ,0.7188525f ,0.015788252f ,0.16343552f ,0.71889746f ,-0.00874125f });
  }
}
private class MFVec2f576 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8857f ,0.572f ,0.9344f ,0.572f ,0.9377f ,0.5719f ,0.8909f ,0.5718f ,0.8588f ,0.5719f ,0.8849f ,0.5578f ,0.8418f ,0.558f ,0.9588f ,0.5579f ,0.9536f ,0.5581f ,0.8765f ,0.5581f ,0.885f ,0.5257f ,0.8424f ,0.5258f ,0.9582f ,0.5328f ,0.9531f ,0.533f ,0.8768f ,0.526f ,0.8957f ,0.4625f ,0.8485f ,0.4627f ,0.9546f ,0.4626f ,0.9498f ,0.4628f ,0.8879f ,0.4628f ,0.8953f ,0.4552f ,0.8684f ,0.4551f ,0.9006f ,0.455f ,0.9378f ,0.4551f ,0.9345f ,0.4552f });
  }
}
private class MFFloat577 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat578 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32579 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,12,-1,12,11,0,-1,1,2,13,-1,13,12,1,-1,2,17,10,-1,10,13,2,-1,3,4,8,-1,8,16,3,-1,5,19,21,-1,21,20,5,-1,6,14,15,-1,15,18,6,-1,6,7,9,-1,9,14,6,-1,7,0,11,-1,11,9,7,-1,15,19,5,-1,5,18,15,-1,10,17,3,-1,3,16,10,-1,4,20,21,-1,21,8,4,-1,0,22,1,-1,1,22,2,-1,2,22,17,-1,17,22,3,-1,3,22,4,-1,4,22,20,-1,20,22,5,-1,5,22,18,-1,18,22,6,-1,6,22,7,-1,7,22,0,-1,16,23,24,-1,24,10,16,-1,10,24,25,-1,25,13,10,-1,13,25,26,-1,26,12,13,-1,12,26,27,-1,27,11,12,-1,11,27,28,-1,28,9,11,-1,9,28,29,-1,29,14,9,-1,14,29,30,-1,30,15,14,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,21,19,-1,21,32,33,-1,33,8,21,-1,8,33,23,-1,23,16,8,-1,23,34,24,-1,24,34,25,-1,25,34,26,-1,26,34,27,-1,27,34,28,-1,28,34,29,-1,29,34,30,-1,30,34,31,-1,31,34,32,-1,32,34,33,-1,33,34,23,-1});
  }
}
private class MFInt32580 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,0,3,2,-1,1,5,4,-1,4,0,1,-1,5,6,7,-1,7,4,5,-1,10,9,8,-1,8,11,10,-1,12,15,38,-1,38,37,12,-1,17,16,19,-1,19,18,17,-1,17,21,20,-1,20,16,17,-1,21,35,36,-1,36,20,21,-1,19,15,12,-1,12,18,19,-1,7,6,10,-1,10,11,7,-1,9,13,14,-1,14,8,9,-1,2,22,1,-1,1,22,5,-1,5,22,6,-1,6,22,10,-1,10,22,9,-1,9,22,13,-1,37,39,12,-1,12,39,18,-1,18,39,17,-1,17,39,21,-1,21,39,35,-1,11,24,23,-1,23,7,11,-1,7,23,25,-1,25,4,7,-1,4,25,26,-1,26,0,4,-1,0,26,27,-1,27,3,0,-1,36,40,28,-1,28,20,36,-1,20,28,29,-1,29,16,20,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,15,19,-1,15,31,41,-1,41,38,15,-1,14,32,33,-1,33,8,14,-1,8,33,24,-1,24,11,8,-1,24,34,23,-1,23,34,25,-1,25,34,26,-1,26,34,27,-1,40,42,28,-1,28,42,29,-1,29,42,30,-1,30,42,31,-1,31,42,41,-1,32,34,33,-1,33,34,24,-1});
  }
}
private class MFVec3f581 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18355052f ,0.7267612f ,-0.027749252f ,0.19342802f ,0.7264463f ,-0.022799252f ,0.19725302f ,0.7266353f ,-0.00979425f ,0.19425377f ,0.7269952f ,0.011126251f ,0.18863551f ,0.7269345f ,0.01977075f ,0.16852726f ,0.7266622f ,0.011490751f ,0.16682851f ,0.7263405f ,-0.0099f ,0.17203727f ,0.726246f ,-0.02258325f ,0.19037026f ,0.70650226f ,0.02496825f ,0.17141177f ,0.705168f ,-0.02733075f ,0.19662076f ,0.70853627f ,0.0023062502f ,0.18300602f ,0.705555f ,-0.03395925f ,0.19495802f ,0.70517474f ,-0.0273195f ,0.19731377f ,0.708966f ,-0.012408751f ,0.16780727f ,0.70896375f ,-0.01237725f ,0.16764526f ,0.7085385f ,0.002511f ,0.19405127f ,0.706059f ,0.0142965f ,0.19705726f ,0.7265835f ,0.0001642501f ,0.16682401f ,0.7265003f ,0.00033975005f ,0.16909876f ,0.7060568f ,0.014323501f ,0.17518501f ,0.72682875f ,0.01929825f ,0.17471027f ,0.7064887f ,0.024203252f ,0.18327151f ,0.73154926f ,-0.00521775f ,0.19104977f ,0.699525f ,0.013702501f ,0.19352701f ,0.702018f ,0.00222075f ,0.19420202f ,0.7024545f ,-0.013608f ,0.19206677f ,0.6986925f ,-0.02813175f ,0.18283276f ,0.6986025f ,-0.03175425f ,0.17416127f ,0.6986925f ,-0.02826675f ,0.17089652f ,0.70245224f ,-0.0134415f ,0.17073676f ,0.7020225f ,0.00264825f ,0.17089202f ,0.699525f ,0.0137835005f ,0.17656426f ,0.69993f ,0.021908252f ,0.18603677f ,0.69993f ,0.022493253f ,0.18105526f ,0.6957225f ,-0.006678f });
  }
}
private class MFVec2f582 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7729f ,0.0334f ,0.7695f ,0.0151f ,0.7598f ,0.0161f ,0.7624f ,0.0345f ,0.791f ,0.0281f ,0.7896f ,0.0131f ,0.8111f ,0.0113f ,0.813f ,0.0266f ,0.8476f ,0.0256f ,0.8461f ,0.0079f ,0.8312f ,0.0091f ,0.8327f ,0.0273f ,0.9162f ,0.2899f ,0.8453f ,0.0081f ,0.8466f ,0.0257f ,0.9122f ,0.2724f ,0.9531f ,0.2644f ,0.9573f ,0.2786f ,0.936f ,0.2844f ,0.9315f ,0.2698f ,0.9706f ,0.2558f ,0.9766f ,0.2733f ,0.8032f ,0.0047f ,0.8134f ,0.033f ,0.8325f ,0.0338f ,0.792f ,0.0345f ,0.7756f ,0.0396f ,0.7675f ,0.0404f ,0.9666f ,0.2503f ,0.9509f ,0.2584f ,0.9297f ,0.2636f ,0.9113f ,0.266f ,0.8439f ,0.0324f ,0.8447f ,0.0323f ,0.8081f ,0.0397f ,0.986f ,0.2708f ,0.9803f ,0.2531f ,0.9032f ,0.2936f ,0.8989f ,0.2764f ,0.9452f ,0.2896f ,0.9743f ,0.2482f ,0.9004f ,0.2693f ,0.9343f ,0.2559f });
  }
}
private class MFFloat583 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat584 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32585 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,5,3,-1,3,0,6,-1,5,8,2,-1,2,3,5,-1,1,4,7,-1,2,8,7,-1,7,4,2,-1,14,17,16,-1,16,15,14,-1,9,13,10,-1,10,13,12,-1,12,11,10,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,2,4,-1,2,11,12,-1,12,3,2,-1,3,12,13,-1,13,0,3,-1,6,14,15,-1,15,5,6,-1,5,15,16,-1,16,8,5,-1,8,16,17,-1,17,7,8,-1,20,21,22,-1,22,23,24,-1,24,25,18,-1,22,24,18,-1,20,22,18,-1,19,20,18,-1,6,0,19,-1,19,18,6,-1,0,13,20,-1,20,19,0,-1,13,9,21,-1,21,20,13,-1,9,1,22,-1,22,21,9,-1,1,7,23,-1,23,22,1,-1,7,17,24,-1,24,23,7,-1,17,14,25,-1,25,24,17,-1,14,6,18,-1,18,25,14,-1});
  }
}
private class MFInt32586 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,7,8,6,-1,18,19,6,-1,6,8,18,-1,21,12,23,-1,23,22,21,-1,9,10,15,-1,15,10,17,-1,17,16,15,-1,7,20,24,-1,24,8,7,-1,8,24,25,-1,25,18,8,-1,4,16,17,-1,17,2,4,-1,2,17,10,-1,10,1,2,-1,0,11,13,-1,13,3,0,-1,3,13,14,-1,14,5,3,-1,19,23,12,-1,12,6,19,-1,28,29,30,-1,30,31,32,-1,32,33,26,-1,30,32,26,-1,28,30,26,-1,27,28,26,-1,0,1,27,-1,27,26,0,-1,1,10,28,-1,28,27,1,-1,10,9,29,-1,29,28,10,-1,20,7,30,-1,30,29,20,-1,7,6,31,-1,31,30,7,-1,6,12,32,-1,32,31,6,-1,12,21,33,-1,33,32,12,-1,11,0,26,-1,26,33,11,-1});
  }
}
private class MFVec3f587 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19715177f ,0.6884955f ,0.017084252f ,0.16690727f ,0.6884955f ,0.017084252f ,0.17230727f ,0.6948585f ,0.033036754f ,0.19136927f ,0.6948383f ,0.034593754f ,0.16983001f ,0.69243526f ,0.027677251f ,0.19037926f ,0.7063628f ,0.024972752f ,0.19406252f ,0.7059195f ,0.014298751f ,0.16910776f ,0.70591724f ,0.014323501f ,0.17471926f ,0.70634925f ,0.024201002f ,0.17034976f ,0.68456703f ,0.018283501f ,0.16966125f ,0.6850215f ,0.024734251f ,0.17344576f ,0.689436f ,0.032796003f ,0.18940501f ,0.69117075f ,0.03430575f ,0.19404002f ,0.684279f ,0.017797502f ,0.19088101f ,0.71277976f ,0.013095001f ,0.18594001f ,0.7130925f ,0.021753002f ,0.17669927f ,0.7130858f ,0.021181501f ,0.17110576f ,0.71273476f ,0.0131737515f ,0.19276427f ,0.705258f ,0.012624751f ,0.19572526f ,0.688554f ,0.0152865015f ,0.193356f ,0.68534327f ,0.01582425f ,0.17097527f ,0.68562f ,0.016308f ,0.16831125f ,0.6886395f ,0.015264001f ,0.17042626f ,0.705384f ,0.012622501f ,0.17211376f ,0.71114624f ,0.011655001f ,0.19001476f ,0.71118677f ,0.011580751f });
  }
}
private class MFVec2f588 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8327f ,0.0273f ,0.8381f ,0.0441f ,0.8625f ,0.0344f ,0.8476f ,0.0256f ,0.8625f ,0.0359f ,0.8466f ,0.0257f ,0.9122f ,0.2724f ,0.904f ,0.2568f ,0.8948f ,0.2599f ,0.8401f ,0.0478f ,0.8395f ,0.0482f ,0.8319f ,0.0206f ,0.9141f ,0.2788f ,0.844f ,0.0192f ,0.8432f ,0.0193f ,0.8491f ,0.0466f ,0.8611f ,0.0409f ,0.8611f ,0.0397f ,0.8814f ,0.2691f ,0.8989f ,0.2764f ,0.9014f ,0.2535f ,0.9142f ,0.2789f ,0.9026f ,0.2823f ,0.9033f ,0.2821f ,0.8928f ,0.2563f ,0.8819f ,0.264f ,0.8327f ,0.0273f ,0.8381f ,0.0441f ,0.8395f ,0.0482f ,0.8401f ,0.0478f ,0.904f ,0.2568f ,0.9122f ,0.2724f ,0.9141f ,0.2788f ,0.9142f ,0.2789f });
  }
}
private class MFFloat589 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat590 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32591 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,9,-1,9,8,1,-1,8,10,0,-1,0,1,8,-1,2,3,6,-1,6,9,2,-1,0,10,7,-1,7,4,0,-1,5,6,3,-1,22,21,25,-1,22,25,24,-1,23,22,24,-1,19,18,17,-1,17,20,19,-1,13,12,11,-1,11,14,13,-1,14,11,16,-1,16,15,14,-1,3,11,12,-1,12,5,3,-1,5,12,13,-1,13,4,5,-1,4,13,14,-1,14,0,4,-1,0,14,15,-1,15,1,0,-1,1,15,16,-1,16,2,1,-1,2,16,11,-1,11,3,2,-1,7,17,18,-1,18,4,7,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,6,5,-1,6,20,17,-1,17,7,6,-1,10,21,22,-1,22,7,10,-1,7,22,23,-1,23,6,7,-1,6,23,24,-1,24,9,6,-1,9,24,25,-1,25,8,9,-1,8,25,21,-1,21,10,8,-1});
  }
}
private class MFInt32592 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,27,4,28,-1,28,26,27,-1,3,6,7,-1,7,2,3,-1,28,4,30,-1,30,29,28,-1,10,7,6,-1,15,14,13,-1,15,13,12,-1,11,15,12,-1,16,19,18,-1,18,17,16,-1,20,23,22,-1,22,21,20,-1,21,22,25,-1,25,24,21,-1,6,22,23,-1,23,10,6,-1,10,23,20,-1,20,8,10,-1,8,20,21,-1,21,5,8,-1,5,21,24,-1,24,0,5,-1,0,24,25,-1,25,3,0,-1,3,25,22,-1,22,6,3,-1,30,34,35,-1,35,29,30,-1,8,19,16,-1,16,10,8,-1,10,16,17,-1,17,7,10,-1,7,17,18,-1,18,9,7,-1,4,32,33,-1,33,30,4,-1,9,15,11,-1,11,7,9,-1,7,11,12,-1,12,2,7,-1,2,12,13,-1,13,1,2,-1,27,31,32,-1,32,4,27,-1});
  }
}
private class MFVec3f593 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.16755526f ,0.6742823f ,0.03437775f ,0.17370002f ,0.6787328f ,0.04048425f ,0.18907651f ,0.6812753f ,0.042723f ,0.19660501f ,0.6722078f ,0.02954475f ,0.17226002f ,0.66453755f ,0.02409975f ,0.19891351f ,0.670122f ,0.025339501f ,0.19714051f ,0.68851805f ,0.01707975f ,0.16689827f ,0.68851805f ,0.01707975f ,0.17229602f ,0.694881f ,0.0330345f ,0.19136027f ,0.6948608f ,0.03458925f ,0.16982101f ,0.6924578f ,0.02767275f ,0.18889202f ,0.66602254f ,0.032742f ,0.18843977f ,0.66456f ,0.03101175f ,0.17499377f ,0.662985f ,0.0287775f ,0.17032501f ,0.66602254f ,0.034326002f ,0.17576101f ,0.6710625f ,0.040788002f ,0.18514352f ,0.67381877f ,0.04385475f ,0.17099102f ,0.6868958f ,0.013740749f ,0.17505677f ,0.6639525f ,0.01973025f ,0.19423802f ,0.66888005f ,0.020241f ,0.19362602f ,0.6868913f ,0.013734f ,0.17167051f ,0.6944108f ,0.02554875f ,0.16913252f ,0.6921765f ,0.0197415f ,0.19210726f ,0.6916703f ,0.019944001f ,0.18894826f ,0.6964133f ,0.031797f ,0.1764405f ,0.6964178f ,0.030825f });
  }
}
private class MFVec2f594 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8819f ,0.0483f ,0.8625f ,0.0359f ,0.8625f ,0.0344f ,0.8786f ,0.0507f ,0.8948f ,0.2599f ,0.867f ,0.0598f ,0.857f ,0.0621f ,0.8381f ,0.0441f ,0.8533f ,0.0697f ,0.8381f ,0.0441f ,0.8503f ,0.0646f ,0.8419f ,0.0407f ,0.8588f ,0.0334f ,0.8588f ,0.0347f ,0.8467f ,0.0405f ,0.8415f ,0.0402f ,0.8445f ,0.0658f ,0.8331f ,0.0451f ,0.8331f ,0.0451f ,0.8468f ,0.0705f ,0.8593f ,0.0711f ,0.8712f ,0.0644f ,0.8626f ,0.068f ,0.8607f ,0.0696f ,0.877f ,0.0609f ,0.8798f ,0.0581f ,0.8632f ,0.2548f ,0.8814f ,0.2691f ,0.8729f ,0.2464f ,0.8847f ,0.2342f ,0.904f ,0.2568f ,0.8853f ,0.2697f ,0.8962f ,0.2618f ,0.9014f ,0.2613f ,0.9088f ,0.2549f ,0.8909f ,0.2323f });
  }
}
private class MFFloat595 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat596 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32597 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,0,6,-1,7,13,14,-1,14,3,7,-1,5,10,17,-1,17,0,5,-1,4,9,10,-1,10,5,4,-1,3,14,9,-1,9,4,3,-1,0,17,19,-1,19,1,0,-1,1,19,13,-1,13,7,1,-1,1,2,0,-1,0,2,8,-1,8,6,0,-1,9,12,11,-1,11,10,9,-1,13,16,15,-1,15,14,13,-1,10,11,18,-1,18,17,10,-1,19,20,16,-1,16,13,19,-1,17,18,20,-1,20,19,17,-1,14,15,12,-1,12,9,14,-1,15,16,20,-1,20,12,15,-1,11,12,20,-1,20,18,11,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,8,21,22,-1,22,6,8,-1,6,22,23,-1,23,5,6,-1,5,23,24,-1,24,4,5,-1,4,24,25,-1,25,3,4,-1,3,25,26,-1,26,7,3,-1,27,32,31,-1,31,30,27,-1,7,27,28,-1,28,1,7,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,8,2,-1,8,30,31,-1,31,21,8,-1,21,31,32,-1,32,26,21,-1,26,32,27,-1,27,7,26,-1});
  }
}
private class MFInt32598 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,36,35,34,-1,34,33,36,-1,0,8,7,-1,7,2,0,-1,10,9,8,-1,8,0,10,-1,33,34,37,-1,37,38,33,-1,2,7,12,-1,12,11,2,-1,39,40,35,-1,35,36,39,-1,11,13,2,-1,2,13,14,-1,14,1,2,-1,9,16,15,-1,15,8,9,-1,5,18,17,-1,17,4,5,-1,8,15,19,-1,19,7,8,-1,12,20,18,-1,18,5,12,-1,7,19,20,-1,20,12,7,-1,4,17,16,-1,16,9,4,-1,17,18,20,-1,20,16,17,-1,15,16,20,-1,20,19,15,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,14,21,22,-1,22,1,14,-1,1,22,23,-1,23,0,1,-1,0,23,24,-1,24,10,0,-1,10,24,25,-1,25,3,10,-1,33,41,42,-1,42,36,33,-1,27,32,31,-1,31,30,27,-1,6,27,28,-1,28,11,6,-1,11,28,29,-1,29,13,11,-1,13,29,30,-1,30,14,13,-1,14,30,31,-1,31,21,14,-1,21,31,32,-1,32,26,21,-1,42,44,43,-1,43,36,42,-1});
  }
}
private class MFVec3f599 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.195615f ,0.669213f ,0.031689003f ,0.18601875f ,0.662184f ,0.027389253f ,0.19744425f ,0.6648435f ,0.027294751f ,0.16755974f ,0.6742665f ,0.034380004f ,0.17370449f ,0.678717f ,0.040486503f ,0.18907875f ,0.6812595f ,0.042725254f ,0.19660725f ,0.67219204f ,0.029547002f ,0.1722645f ,0.6645195f ,0.024102f ,0.198918f ,0.6701063f ,0.025341751f ,0.1762335f ,0.65888774f ,0.053905502f ,0.18801224f ,0.663687f ,0.052389003f ,0.1854315f ,0.65385675f ,0.056967754f ,0.178551f ,0.65117025f ,0.055858504f ,0.17542575f ,0.6468525f ,0.040709253f ,0.16953525f ,0.65403f ,0.049907252f ,0.1727415f ,0.6506775f ,0.051819753f ,0.1767645f ,0.6451425f ,0.044392504f ,0.19318275f ,0.654795f ,0.042043503f ,0.19013175f ,0.6473925f ,0.04822425f ,0.1840635f ,0.64764f ,0.040054504f ,0.18336375f ,0.644535f ,0.046896752f ,0.1908675f ,0.67512155f ,0.022905001f ,0.19100025f ,0.676467f ,0.024473252f ,0.18467775f ,0.6835208f ,0.0354285f ,0.176166f ,0.681705f ,0.03420225f ,0.17278649f ,0.678204f ,0.028642502f ,0.175626f ,0.6742215f ,0.022423502f ,0.17446725f ,0.66390526f ,0.018724501f ,0.18484199f ,0.66138977f ,0.020907002f ,0.19433025f ,0.6638355f ,0.021001501f ,0.19541025f ,0.66710025f ,0.019818f ,0.19028474f ,0.670851f ,0.017736752f ,0.17713575f ,0.6698655f ,0.016641002f });
  }
}
private class MFVec2f600 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8786f ,0.0507f ,0.857f ,0.0621f ,0.8601f ,0.0649f ,0.867f ,0.0598f ,0.8887f ,0.0786f ,0.8747f ,0.0865f ,0.8533f ,0.0697f ,0.876f ,0.0783f ,0.893f ,0.0688f ,0.8992f ,0.0702f ,0.8819f ,0.0483f ,0.8561f ,0.0728f ,0.8736f ,0.0851f ,0.8532f ,0.0697f ,0.8503f ,0.0646f ,0.8986f ,0.0785f ,0.897f ,0.0809f ,0.8914f ,0.0813f ,0.8802f ,0.0861f ,0.8841f ,0.0856f ,0.8821f ,0.0883f ,0.8487f ,0.0595f ,0.8509f ,0.0581f ,0.8683f ,0.0489f ,0.868f ,0.0507f ,0.8608f ,0.0544f ,0.8505f ,0.0603f ,0.8455f ,0.0706f ,0.8468f ,0.073f ,0.8455f ,0.0707f ,0.8437f ,0.0676f ,0.8416f ,0.0639f ,0.8422f ,0.0648f ,0.8729f ,0.2464f ,0.8482f ,0.2317f ,0.8612f ,0.2211f ,0.8847f ,0.2342f ,0.8433f ,0.2381f ,0.8632f ,0.2548f ,0.8814f ,0.2316f ,0.8625f ,0.2222f ,0.8799f ,0.2506f ,0.8891f ,0.243f ,0.8922f ,0.232f ,0.8964f ,0.2371f });
  }
}
private class MFFloat601 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat602 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32603 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,11,28,-1,28,29,0,-1,32,1,17,-1,17,2,32,-1,4,17,1,-1,1,3,4,-1,11,5,31,-1,31,28,11,-1,29,32,2,-1,2,0,29,-1,4,3,31,-1,31,5,4,-1,23,1,32,-1,24,31,3,-1,24,3,1,-1,1,23,24,-1,4,8,7,-1,7,6,4,-1,5,11,10,-1,10,9,5,-1,4,5,9,-1,9,8,4,-1,10,12,14,-1,14,13,10,-1,2,17,16,-1,16,15,2,-1,0,2,15,-1,15,12,0,-1,8,9,18,-1,18,7,8,-1,18,9,10,-1,10,13,18,-1,6,19,21,-1,21,20,6,-1,22,14,21,-1,21,19,22,-1,17,6,20,-1,20,16,17,-1,6,17,4,-1,11,0,12,-1,12,10,11,-1,13,14,22,-1,6,7,18,-1,18,19,6,-1,18,13,22,-1,22,19,18,-1,16,20,21,-1,21,15,16,-1,21,14,12,-1,12,15,21,-1,24,23,26,-1,26,25,24,-1,28,27,30,-1,30,29,28,-1,27,25,26,-1,26,30,27,-1,24,25,27,-1,27,31,24,-1,32,30,26,-1,26,23,32,-1,30,32,29,-1,28,31,27,-1});
  }
}
private class MFInt32604 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,34,-1,34,33,3,-1,4,7,6,-1,6,5,4,-1,9,6,7,-1,7,8,9,-1,2,38,37,-1,37,34,2,-1,33,35,36,-1,36,3,33,-1,9,8,10,-1,10,11,9,-1,12,7,4,-1,13,10,8,-1,13,8,7,-1,7,12,13,-1,9,16,15,-1,15,14,9,-1,38,2,18,-1,18,39,38,-1,9,11,17,-1,17,16,9,-1,18,19,21,-1,21,20,18,-1,5,6,23,-1,23,22,5,-1,3,36,40,-1,40,19,3,-1,16,17,24,-1,24,15,16,-1,41,39,18,-1,18,20,41,-1,14,25,27,-1,27,26,14,-1,28,21,43,-1,43,42,28,-1,6,14,26,-1,26,23,6,-1,14,6,9,-1,2,3,19,-1,19,18,2,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,41,20,28,-1,28,42,41,-1,23,26,27,-1,27,22,23,-1,43,21,19,-1,19,40,43,-1,13,12,30,-1,30,29,13,-1,1,31,32,-1,32,0,1,-1,31,29,30,-1,30,32,31,-1,13,29,31,-1,31,10,13,-1,4,32,30,-1,30,12,4,-1,32,4,0,-1,1,10,31,-1});
  }
}
private class MFVec3f605 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.17514676f ,0.636309f ,0.049167003f ,0.19165726f ,0.647874f ,0.04755375f ,0.18281251f ,0.6361335f ,0.049475253f ,0.18670051f ,0.6559223f ,0.057316504f ,0.18474525f ,0.6448703f ,0.062694006f ,0.17592075f ,0.64515376f ,0.06246675f ,0.18524925f ,0.6336248f ,0.06324525f ,0.18416701f ,0.63522226f ,0.064910255f ,0.18243001f ,0.6380933f ,0.06596775f ,0.17607601f ,0.63757575f ,0.0663525f ,0.17157601f ,0.6364125f ,0.062068503f ,0.17068276f ,0.6422378f ,0.057854254f ,0.17518951f ,0.6307875f ,0.054024752f ,0.17312175f ,0.6330195f ,0.061935753f ,0.17514001f ,0.63036f ,0.057872254f ,0.18178426f ,0.63020253f ,0.054929253f ,0.18632926f ,0.6327315f ,0.058374003f ,0.189162f ,0.6389325f ,0.05411925f ,0.17798401f ,0.63274276f ,0.0652185f ,0.179496f ,0.630495f ,0.062901005f ,0.18606375f ,0.63285977f ,0.061195504f ,0.18060526f ,0.6293025f ,0.059937753f ,0.17425801f ,0.6313725f ,0.060072754f ,0.193185f ,0.6549255f ,0.042048004f ,0.1880145f ,0.6638175f ,0.052393503f ,0.182178f ,0.664281f ,0.049077f ,0.18772651f ,0.655542f ,0.039264753f ,0.1728315f ,0.66210526f ,0.046098f ,0.16953751f ,0.6541605f ,0.049911752f ,0.175428f ,0.646974f ,0.040713754f ,0.17838001f ,0.65336627f ,0.036288f ,0.176238f ,0.6590183f ,0.053910002f ,0.18406576f ,0.6477615f ,0.040059f });
  }
}
private class MFVec2f606 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8747f ,0.0865f ,0.8887f ,0.0786f ,0.8299f ,0.2203f ,0.8424f ,0.2111f ,0.8736f ,0.0851f ,0.8939f ,0.0989f ,0.8978f ,0.0975f ,0.8834f ,0.0852f ,0.8992f ,0.0766f ,0.9092f ,0.0888f ,0.8992f ,0.0702f ,0.9115f ,0.0859f ,0.876f ,0.0783f ,0.893f ,0.0688f ,0.9109f ,0.102f ,0.9135f ,0.0996f ,0.9144f ,0.0973f ,0.9172f ,0.0962f ,0.8241f ,0.2146f ,0.8338f ,0.2074f ,0.8247f ,0.2116f ,0.8291f ,0.2083f ,0.9028f ,0.1054f ,0.9046f ,0.1032f ,0.9153f ,0.1012f ,0.9125f ,0.1038f ,0.9081f ,0.1033f ,0.9082f ,0.1057f ,0.8266f ,0.2097f ,0.8885f ,0.0681f ,0.8723f ,0.0776f ,0.8843f ,0.0701f ,0.8696f ,0.0781f ,0.8612f ,0.2211f ,0.8482f ,0.2317f ,0.8625f ,0.2222f ,0.8417f ,0.2109f ,0.8433f ,0.2381f ,0.8245f ,0.2237f ,0.8192f ,0.2167f ,0.8322f ,0.2071f ,0.8195f ,0.2131f ,0.8224f ,0.2103f ,0.8256f ,0.2083f });
  }
}
private class MFFloat607 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat608 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32609 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,12,1,-1,1,2,14,-1,0,13,15,-1,15,3,0,-1,11,10,9,-1,9,8,11,-1,4,5,17,-1,17,16,4,-1,18,6,7,-1,7,19,18,-1,0,4,16,-1,16,13,0,-1,12,17,5,-1,5,1,12,-1,1,5,4,-1,4,0,1,-1,2,6,18,-1,18,14,2,-1,15,19,7,-1,7,3,15,-1,3,7,6,-1,6,2,3,-1,3,8,9,-1,9,0,3,-1,0,9,10,-1,10,1,0,-1,1,10,11,-1,11,2,1,-1,2,11,8,-1,8,3,2,-1,22,23,24,-1,24,25,26,-1,26,27,20,-1,24,26,20,-1,22,24,20,-1,21,22,20,-1,12,14,21,-1,21,20,12,-1,14,18,22,-1,22,21,14,-1,18,19,23,-1,23,22,18,-1,19,15,24,-1,24,23,19,-1,15,13,25,-1,25,24,15,-1,13,16,26,-1,26,25,13,-1,16,17,27,-1,27,26,16,-1,17,12,20,-1,20,27,17,-1});
  }
}
private class MFInt32610 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {21,19,1,-1,1,0,21,-1,12,20,22,-1,22,13,12,-1,5,4,7,-1,7,6,5,-1,8,9,25,-1,25,23,8,-1,26,17,18,-1,18,28,26,-1,12,16,24,-1,24,20,12,-1,19,25,9,-1,9,1,19,-1,1,9,8,-1,8,2,1,-1,0,10,27,-1,27,21,0,-1,22,28,18,-1,18,13,22,-1,3,11,10,-1,10,0,3,-1,13,14,15,-1,15,12,13,-1,2,7,4,-1,4,1,2,-1,1,4,5,-1,5,0,1,-1,0,5,6,-1,6,3,0,-1,31,32,33,-1,33,34,35,-1,35,36,29,-1,33,35,29,-1,31,33,29,-1,30,31,29,-1,19,21,30,-1,30,29,19,-1,21,27,31,-1,31,30,21,-1,26,28,32,-1,32,31,26,-1,28,22,33,-1,33,32,28,-1,22,20,34,-1,34,33,22,-1,20,24,35,-1,35,34,20,-1,23,25,36,-1,36,35,23,-1,25,19,29,-1,29,36,25,-1});
  }
}
private class MFVec3f611 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.166977f ,0.6858473f ,0.0032265f ,0.19887976f ,0.6858473f ,0.0032265f ,0.19663201f ,0.70836526f ,0.00230625f ,0.16765426f ,0.70836526f ,0.00251325f ,0.16957352f ,0.68211f ,0.003339f ,0.19546652f ,0.68211f ,0.003339f ,0.19281827f ,0.71530426f ,0.0018315002f ,0.170982f ,0.71531105f ,0.0019709999f ,0.16942726f ,0.706842f ,0.00071774976f ,0.16802101f ,0.687564f ,0.0015682501f ,0.19680077f ,0.687564f ,0.0015817503f ,0.19487476f ,0.706842f ,0.00052200013f ,0.19715177f ,0.68846405f ,0.01708425f ,0.16690727f ,0.68846405f ,0.01708425f ,0.19406252f ,0.70588803f ,0.014298751f ,0.16910776f ,0.70588577f ,0.0143235f ,0.17034976f ,0.6845355f ,0.018283501f ,0.19404002f ,0.68424755f ,0.017797502f ,0.19088101f ,0.7127483f ,0.013095001f ,0.17110576f ,0.7127033f ,0.013176001f ,0.195084f ,0.68997604f ,0.01834425f ,0.19240876f ,0.70506227f ,0.01593225f ,0.18965477f ,0.71100456f ,0.0148905f ,0.17252776f ,0.7109663f ,0.014958001f ,0.17079976f ,0.70506227f ,0.015954752f ,0.16889401f ,0.68997604f ,0.01834425f ,0.17187302f ,0.68657404f ,0.0193815f ,0.19239075f ,0.6863243f ,0.018963f });
  }
}
private class MFVec2f612 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.813f ,0.0266f ,0.8136f ,0.0488f ,0.8136f ,0.0488f ,0.8133f ,0.0266f ,0.8111f ,0.0474f ,0.8105f ,0.0283f ,0.8108f ,0.0283f ,0.8111f ,0.0474f ,0.8141f ,0.0525f ,0.8141f ,0.0525f ,0.8123f ,0.0198f ,0.8125f ,0.0198f ,0.9273f ,0.2479f ,0.9315f ,0.2698f ,0.9337f ,0.2676f ,0.9301f ,0.2489f ,0.9262f ,0.2444f ,0.9337f ,0.2762f ,0.9335f ,0.2763f ,0.8381f ,0.0441f ,0.904f ,0.2568f ,0.8327f ,0.0273f ,0.9122f ,0.2724f ,0.8401f ,0.0478f ,0.9014f ,0.2535f ,0.8395f ,0.0482f ,0.9142f ,0.2789f ,0.8319f ,0.0206f ,0.9141f ,0.2788f ,0.8381f ,0.0441f ,0.8327f ,0.0273f ,0.8319f ,0.0206f ,0.9141f ,0.2788f ,0.9122f ,0.2724f ,0.904f ,0.2568f ,0.9014f ,0.2535f ,0.8395f ,0.0482f });
  }
}
private class MFFloat613 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat614 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32615 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,8,-1,8,1,0,-1,5,7,3,-1,3,0,5,-1,10,2,4,-1,4,6,10,-1,2,1,8,-1,8,4,2,-1,14,11,6,-1,6,4,14,-1,8,3,17,-1,17,16,8,-1,9,7,12,-1,12,13,9,-1,15,4,8,-1,8,16,15,-1,15,14,4,-1,9,18,17,-1,17,3,9,-1,9,13,18,-1,25,31,30,-1,25,30,27,-1,26,25,27,-1,22,21,20,-1,20,19,22,-1,41,40,39,-1,39,38,41,-1,32,37,36,-1,33,32,36,-1,34,33,36,-1,35,34,36,-1,23,22,19,-1,19,24,23,-1,6,19,20,-1,20,10,6,-1,30,29,28,-1,28,27,30,-1,5,21,22,-1,22,7,5,-1,7,22,23,-1,23,12,7,-1,12,23,24,-1,24,11,12,-1,11,24,19,-1,19,6,11,-1,1,25,26,-1,26,0,1,-1,0,26,27,-1,27,5,0,-1,5,27,28,-1,28,21,5,-1,21,28,29,-1,29,20,21,-1,20,29,30,-1,30,10,20,-1,10,30,31,-1,31,2,10,-1,2,31,25,-1,25,1,2,-1,16,32,33,-1,33,15,16,-1,15,33,34,-1,34,14,15,-1,14,34,35,-1,35,13,14,-1,13,35,36,-1,36,18,13,-1,18,36,37,-1,37,17,18,-1,17,37,32,-1,32,16,17,-1,14,38,39,-1,39,11,14,-1,11,39,40,-1,40,12,11,-1,12,40,41,-1,41,13,12,-1,13,41,38,-1,38,14,13,-1,9,3,7,-1});
  }
}
private class MFInt32616 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,2,1,-1,1,0,3,-1,5,4,2,-1,2,3,5,-1,44,46,8,-1,8,45,44,-1,46,42,43,-1,43,8,46,-1,47,48,45,-1,45,8,47,-1,1,2,13,-1,13,12,1,-1,16,4,15,-1,15,14,16,-1,50,8,43,-1,43,49,50,-1,50,47,8,-1,16,18,13,-1,13,2,16,-1,16,14,18,-1,23,22,21,-1,23,21,20,-1,19,23,20,-1,25,24,27,-1,27,26,25,-1,29,28,31,-1,31,30,29,-1,35,34,33,-1,36,35,33,-1,37,36,33,-1,32,37,33,-1,38,25,26,-1,26,39,38,-1,7,26,27,-1,27,6,7,-1,21,41,40,-1,40,20,21,-1,5,24,25,-1,25,4,5,-1,4,25,38,-1,38,15,4,-1,15,38,39,-1,39,11,15,-1,48,56,51,-1,51,45,48,-1,0,23,19,-1,19,3,0,-1,3,19,20,-1,20,5,3,-1,5,20,40,-1,40,24,5,-1,24,40,41,-1,41,27,24,-1,27,41,21,-1,21,6,27,-1,6,21,22,-1,22,9,6,-1,9,22,23,-1,23,0,9,-1,12,35,36,-1,36,17,12,-1,50,54,55,-1,55,47,50,-1,10,37,32,-1,32,14,10,-1,14,32,33,-1,33,18,14,-1,18,33,34,-1,34,13,18,-1,13,34,35,-1,35,12,13,-1,47,52,53,-1,53,48,47,-1,11,31,28,-1,28,15,11,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,10,14,-1,16,2,4,-1});
  }
}
private class MFVec3f617 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19339876f ,0.638955f ,0.021003751f ,0.18276526f ,0.63909f ,0.024131251f ,0.17321175f ,0.638955f ,0.02103975f ,0.1950795f ,0.6577425f ,0.0217215f ,0.170613f ,0.65776503f ,0.021951001f ,0.19483426f ,0.6379425f ,0.00549675f ,0.1692585f ,0.6584625f ,0.004752f ,0.19741051f ,0.6584625f ,0.004752f ,0.18328726f ,0.65544754f ,0.02580975f ,0.20073377f ,0.6688958f ,0.020949751f ,0.17247601f ,0.6379425f ,0.00549675f ,0.166977f ,0.68586975f ,0.0032264998f ,0.19887976f ,0.68586975f ,0.0032264998f ,0.19715177f ,0.68848425f ,0.01708425f ,0.16690727f ,0.68848425f ,0.01708425f ,0.17227127f ,0.6644925f ,0.02410425f ,0.18602552f ,0.662175f ,0.0273915f ,0.19745101f ,0.66483f ,0.027297001f ,0.19892476f ,0.6700883f ,0.025344001f ,0.17181677f ,0.6584175f ,0.0020565f ,0.17471701f ,0.63841504f ,0.0038025002f ,0.19268551f ,0.63841504f ,0.0038025002f ,0.19483201f ,0.65826f ,0.0020677499f ,0.19619551f ,0.68573475f ,0.0006682496f ,0.16898176f ,0.68573475f ,0.0006682496f ,0.18279676f ,0.6350625f ,0.022761002f ,0.19018576f ,0.634995f ,0.020340001f ,0.19159876f ,0.63441f ,0.006093f ,0.19167301f ,0.6365025f ,0.004437f ,0.17574526f ,0.6365025f ,0.004437f ,0.1742085f ,0.63441f ,0.00610425f ,0.17480476f ,0.634995f ,0.020421f ,0.1848285f ,0.6664275f ,0.0300015f ,0.17479351f ,0.66832876f ,0.02739375f ,0.17073001f ,0.68893427f ,0.021192752f ,0.19451927f ,0.68893874f ,0.021183752f ,0.19371825f ,0.6720975f ,0.028064251f ,0.19345501f ,0.6682433f ,0.02956275f ,0.16989751f ,0.690525f ,0.0143145f ,0.16927876f ,0.6887498f ,0.005364f ,0.1955385f ,0.6887498f ,0.005364f ,0.19436401f ,0.690525f ,0.0143145f });
  }
}
private class MFVec2f618 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8514f ,0.0953f ,0.8526f ,0.0788f ,0.846f ,0.0768f ,0.8466f ,0.0958f ,0.8195f ,0.0808f ,0.8225f ,0.0994f ,0.8225f ,0.0994f ,0.8195f ,0.0808f ,0.8903f ,0.2261f ,0.8467f ,0.0958f ,0.8381f ,0.0441f ,0.8136f ,0.0488f ,0.8561f ,0.0728f ,0.8532f ,0.0697f ,0.8381f ,0.0441f ,0.8136f ,0.0488f ,0.8436f ,0.0662f ,0.8533f ,0.0697f ,0.8503f ,0.0646f ,0.8461f ,0.0998f ,0.8248f ,0.1027f ,0.8248f ,0.1027f ,0.8462f ,0.0997f ,0.8498f ,0.0994f ,0.8184f ,0.0977f ,0.8157f ,0.0811f ,0.8157f ,0.0809f ,0.8184f ,0.0977f ,0.8165f ,0.0457f ,0.8341f ,0.0424f ,0.8341f ,0.0424f ,0.8165f ,0.0457f ,0.844f ,0.0417f ,0.8554f ,0.0622f ,0.8575f ,0.0659f ,0.8594f ,0.0677f ,0.8574f ,0.0658f ,0.844f ,0.0417f ,0.8099f ,0.0493f ,0.8099f ,0.0493f ,0.82f ,0.101f ,0.82f ,0.101f ,0.8821f ,0.2087f ,0.8838f ,0.2252f ,0.9098f ,0.1997f ,0.916f ,0.2175f ,0.8866f ,0.2074f ,0.904f ,0.2568f ,0.9273f ,0.2479f ,0.8814f ,0.2316f ,0.8847f ,0.2342f ,0.9197f ,0.2166f ,0.9083f ,0.2577f ,0.925f ,0.2515f ,0.8813f ,0.2388f ,0.8986f ,0.2602f ,0.931f ,0.2468f });
  }
}
private class MFFloat619 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat620 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32621 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,18,-1,18,19,4,-1,5,6,21,-1,21,18,5,-1,7,8,20,-1,20,25,7,-1,8,4,19,-1,19,20,8,-1,6,22,21,-1,1,10,8,-1,8,7,1,-1,6,5,11,-1,11,2,6,-1,5,4,0,-1,0,11,5,-1,4,8,10,-1,10,0,4,-1,1,7,9,-1,9,3,1,-1,9,6,2,-1,2,3,9,-1,9,7,23,-1,23,24,9,-1,6,9,24,-1,24,22,6,-1,23,7,25,-1,0,17,15,-1,15,11,0,-1,1,12,14,-1,14,10,1,-1,11,15,13,-1,13,2,11,-1,3,16,12,-1,12,1,3,-1,2,13,16,-1,16,3,2,-1,10,14,17,-1,17,0,10,-1,14,12,16,-1,16,17,14,-1,15,17,16,-1,16,13,15,-1,28,27,26,-1,29,28,26,-1,30,29,26,-1,18,26,27,-1,27,19,18,-1,19,27,28,-1,28,20,19,-1,20,28,29,-1,29,25,20,-1,36,35,34,-1,36,34,33,-1,33,32,31,-1,33,31,37,-1,36,33,37,-1,21,30,26,-1,26,18,21,-1,24,31,32,-1,32,22,24,-1,22,32,33,-1,33,21,22,-1,21,33,34,-1,34,30,21,-1,30,34,35,-1,35,29,30,-1,29,35,36,-1,36,25,29,-1,25,36,37,-1,37,23,25,-1,23,37,31,-1,31,24,23,-1});
  }
}
private class MFInt32622 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,6,9,41,-1,41,40,6,-1,9,38,39,-1,39,41,9,-1,5,10,4,-1,11,12,9,-1,9,6,11,-1,5,3,14,-1,14,13,5,-1,3,0,15,-1,15,14,3,-1,38,9,12,-1,12,42,38,-1,11,6,44,-1,44,43,11,-1,17,5,13,-1,13,16,17,-1,44,6,46,-1,46,45,44,-1,5,17,18,-1,18,10,5,-1,46,6,40,-1,15,21,20,-1,20,14,15,-1,11,23,22,-1,22,12,11,-1,14,20,24,-1,24,13,14,-1,43,48,23,-1,23,11,43,-1,13,24,25,-1,25,16,13,-1,12,22,47,-1,47,42,12,-1,22,23,48,-1,48,47,22,-1,20,21,25,-1,25,24,20,-1,29,28,27,-1,30,29,27,-1,26,30,27,-1,2,27,28,-1,28,1,2,-1,1,28,29,-1,29,8,1,-1,8,29,30,-1,30,7,8,-1,31,37,36,-1,31,36,35,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,4,26,27,-1,27,2,4,-1,18,33,34,-1,34,10,18,-1,10,34,35,-1,35,4,10,-1,4,35,36,-1,36,26,4,-1,26,36,37,-1,37,30,26,-1,30,37,31,-1,31,7,30,-1,7,31,32,-1,32,19,7,-1,19,32,33,-1,33,18,19,-1});
  }
}
private class MFVec3f623 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18112727f ,0.60633004f ,0.022119751f ,0.17212276f ,0.60702753f ,0.007938f ,0.19115777f ,0.60939f ,0.007960501f ,0.18112727f ,0.60651004f ,0.005535001f ,0.18241201f ,0.633825f ,0.023591252f ,0.19239302f ,0.63367426f ,0.020673001f ,0.19349551f ,0.63295877f ,0.0078300005f ,0.17321852f ,0.63295877f ,0.007841251f ,0.17321852f ,0.63367426f ,0.020673001f ,0.18241201f ,0.6297705f ,0.005940001f ,0.17212276f ,0.606915f ,0.019422002f ,0.19115777f ,0.609255f ,0.019446751f ,0.17380126f ,0.6032475f ,0.0086625f ,0.18755777f ,0.60138f ,0.007983001f ,0.17380126f ,0.603135f ,0.018634502f ,0.18755777f ,0.6012675f ,0.019305f ,0.18110251f ,0.6006825f ,0.007956001f ,0.18110251f ,0.60057f ,0.019503001f ,0.19338977f ,0.639072f ,0.021003751f ,0.18275851f ,0.639198f ,0.024131251f ,0.17320277f ,0.639072f ,0.02103975f ,0.19482751f ,0.6380505f ,0.0054967506f ,0.19293302f ,0.6328845f ,0.0055282507f ,0.17321852f ,0.6328845f ,0.0055282507f ,0.18241201f ,0.62973905f ,0.005661001f ,0.17246926f ,0.6380505f ,0.0054967506f ,0.19006877f ,0.6449715f ,0.018945001f ,0.18243676f ,0.6452955f ,0.022254752f ,0.17512201f ,0.6449805f ,0.018999001f ,0.17481601f ,0.64455754f ,0.0060277507f ,0.19139627f ,0.64455974f ,0.0060547506f ,0.18243451f ,0.6307133f ,0.005006251f ,0.19218826f ,0.63380474f ,0.0048420005f ,0.19397926f ,0.63842404f ,0.0048420005f ,0.19079551f ,0.64438653f ,0.0044437507f ,0.17552252f ,0.64438426f ,0.0044190004f ,0.17343451f ,0.63839704f ,0.0048442506f ,0.17408927f ,0.6337418f ,0.0048442506f });
  }
}
private class MFVec2f624 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8511f ,0.1006f ,0.8514f ,0.0953f ,0.8466f ,0.0958f ,0.8466f ,0.1011f ,0.8225f ,0.0994f ,0.8283f ,0.1035f ,0.9023f ,0.1969f ,0.8225f ,0.0994f ,0.8467f ,0.0958f ,0.8857f ,0.2021f ,0.8231f ,0.1042f ,0.8931f ,0.1724f ,0.8782f ,0.1769f ,0.8338f ,0.1268f ,0.8493f ,0.125f ,0.8543f ,0.1273f ,0.8302f ,0.1302f ,0.8258f ,0.1072f ,0.8236f ,0.1075f ,0.8231f ,0.1042f ,0.8504f ,0.1328f ,0.8508f ,0.1334f ,0.8781f ,0.1731f ,0.8909f ,0.1692f ,0.8352f ,0.1346f ,0.8353f ,0.1353f ,0.8228f ,0.0929f ,0.844f ,0.0896f ,0.8482f ,0.0889f ,0.8441f ,0.0896f ,0.8228f ,0.0929f ,0.8203f ,0.0995f ,0.8207f ,0.1038f ,0.8212f ,0.1068f ,0.8207f ,0.1037f ,0.8203f ,0.0995f ,0.8206f ,0.0933f ,0.8205f ,0.0933f ,0.8815f ,0.2034f ,0.8821f ,0.2087f ,0.9098f ,0.1997f ,0.8866f ,0.2074f ,0.8737f ,0.1777f ,0.8969f ,0.1707f ,0.9052f ,0.1925f ,0.9074f ,0.1918f ,0.9084f ,0.195f ,0.876f ,0.171f ,0.891f ,0.1665f });
  }
}
private class MFFloat625 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat626 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32627 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
private class MFInt32628 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
private class MFVec3f629 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.17981552f ,0.5814675f ,0.0060615004f ,0.17215426f ,0.581715f ,0.0187065f ,0.18831602f ,0.584235f ,0.018918f ,0.19035676f ,0.6023385f ,0.01937475f ,0.19035676f ,0.60245776f ,0.007888501f ,0.17213401f ,0.607077f ,0.00793575f ,0.19116676f ,0.609426f ,0.0079605f ,0.17213401f ,0.60695773f ,0.019422f ,0.19116676f ,0.609309f ,0.019444501f ,0.17627852f ,0.61142623f ,0.00798075f ,0.17627852f ,0.611307f ,0.01946475f ,0.18567227f ,0.61107075f ,0.0194625f ,0.18567227f ,0.61119f ,0.007978501f ,0.18113627f ,0.6065505f ,0.0055327504f ,0.18113627f ,0.60636604f ,0.022119751f ,0.17982227f ,0.5812875f ,0.021402001f ,0.18550576f ,0.5763825f ,0.018405002f ,0.18002251f ,0.57555f ,0.0185895f ,0.17214976f ,0.5818275f ,0.0084645f ,0.17369325f ,0.57798f ,0.017784001f ,0.173691f ,0.57807f ,0.00932175f ,0.18831152f ,0.584352f ,0.0082755005f ,0.18550126f ,0.576495f ,0.0086917505f ,0.18001801f ,0.57564f ,0.008667001f });
  }
}
private class MFVec2f630 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8782f ,0.1769f ,0.8543f ,0.1273f ,0.8574f ,0.1518f ,0.8703f ,0.1535f ,0.8493f ,0.125f ,0.8504f ,0.1318f ,0.8846f ,0.1491f ,0.8931f ,0.1724f ,0.8349f ,0.1336f ,0.8379f ,0.1515f ,0.8533f ,0.1496f ,0.8338f ,0.1268f ,0.8302f ,0.1302f ,0.8351f ,0.1545f ,0.849f ,0.1233f ,0.8336f ,0.1251f ,0.849f ,0.123f ,0.8335f ,0.1249f ,0.8539f ,0.1573f ,0.8543f ,0.1579f ,0.8703f ,0.1496f ,0.8822f ,0.146f ,0.8398f ,0.159f ,0.8399f ,0.1597f ,0.8737f ,0.1777f ,0.8664f ,0.1541f ,0.8969f ,0.1707f ,0.8878f ,0.1476f ,0.8796f ,0.181f ,0.8945f ,0.1764f ,0.8684f ,0.1475f ,0.8822f ,0.1433f });
  }
}
private class MFFloat631 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat632 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32633 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
private class MFInt32634 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
private class MFVec3f635 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.187767f ,0.5783625f ,0.018859502f ,0.1877625f ,0.5784795f ,0.00821475f ,0.1861245f ,0.5702513f ,0.018299252f ,0.18612f ,0.5703593f ,0.00852075f ,0.17269425f ,0.5709578f ,0.018740252f ,0.17883675f ,0.570501f ,0.02058975f ,0.17268975f ,0.57107705f ,0.008118001f ,0.17883f ,0.57066077f ,0.0062032505f ,0.183672f ,0.5640998f ,0.0177615f ,0.18366975f ,0.5641965f ,0.008901f ,0.17263125f ,0.5645138f ,0.01766025f ,0.177984f ,0.56382304f ,0.019593f ,0.17262675f ,0.5646083f ,0.009177751f ,0.17797725f ,0.5639625f ,0.0071145007f ,0.18440326f ,0.56220526f ,0.013288501f ,0.173448f ,0.56221426f ,0.013293001f ,0.17796375f ,0.56082153f ,0.01327725f ,0.18430875f ,0.56259f ,0.015741f ,0.17335574f ,0.5627228f ,0.01124325f ,0.17825401f ,0.56148076f ,0.016533f ,0.18430875f ,0.56261253f ,0.010982251f ,0.17335574f ,0.5626958f ,0.015468751f ,0.17825626f ,0.56143355f ,0.010255501f ,0.17214525f ,0.5816925f ,0.0187065f ,0.1883025f ,0.5843273f ,0.0082755005f ,0.188307f ,0.584208f ,0.018918002f ,0.183627f ,0.58608f ,0.018553501f ,0.1836225f ,0.5861903f ,0.008694001f ,0.17556076f ,0.5861318f ,0.018558001f ,0.17214075f ,0.58180505f ,0.008462251f ,0.1755585f ,0.58623976f ,0.008696251f ,0.17985825f ,0.58127177f ,0.021397501f ,0.1798515f ,0.5814428f ,0.0060592503f });
  }
}
private class MFVec2f636 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8542f ,0.1553f ,0.8574f ,0.1518f ,0.8533f ,0.1496f ,0.8379f ,0.1515f ,0.8351f ,0.1545f ,0.8388f ,0.1572f ,0.8414f ,0.1663f ,0.8547f ,0.1647f ,0.8578f ,0.1639f ,0.8665f ,0.142f ,0.8703f ,0.1535f ,0.8804f ,0.1378f ,0.8846f ,0.1491f ,0.8382f ,0.1663f ,0.8495f ,0.1759f ,0.8523f ,0.1752f ,0.8544f ,0.1737f ,0.8566f ,0.1736f ,0.8658f ,0.1324f ,0.8753f ,0.1296f ,0.8677f ,0.1303f ,0.8725f ,0.1289f ,0.842f ,0.1753f ,0.8441f ,0.175f ,0.8533f ,0.1759f ,0.8496f ,0.1769f ,0.8467f ,0.1759f ,0.846f ,0.1768f ,0.87f ,0.1292f ,0.8525f ,0.1477f ,0.8382f ,0.1495f ,0.8525f ,0.1475f ,0.8381f ,0.1492f ,0.8664f ,0.1541f ,0.8878f ,0.1476f ,0.8639f ,0.1422f ,0.8827f ,0.1365f ,0.8634f ,0.1325f ,0.8774f ,0.1283f ,0.8662f ,0.1297f ,0.8697f ,0.1281f ,0.8732f ,0.1275f ,0.872f ,0.1575f ,0.8858f ,0.1533f });
  }
}
private class MFFloat637 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat638 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32639 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,4,-1,4,1,5,-1,7,0,3,-1,3,2,7,-1,8,11,10,-1,10,9,8,-1,12,15,14,-1,14,13,12,-1,1,8,9,-1,9,5,1,-1,5,9,10,-1,10,7,5,-1,7,10,11,-1,11,0,7,-1,0,11,8,-1,8,1,0,-1,6,12,13,-1,13,4,6,-1,4,13,14,-1,14,3,4,-1,3,14,15,-1,15,2,3,-1,2,15,12,-1,12,6,2,-1,22,21,20,-1,20,23,22,-1,18,17,16,-1,16,19,18,-1,5,16,17,-1,17,6,5,-1,6,17,18,-1,18,2,6,-1,2,18,19,-1,19,7,2,-1,7,19,16,-1,16,5,7,-1,0,20,21,-1,21,3,0,-1,3,21,22,-1,22,4,3,-1,4,22,23,-1,23,1,4,-1,1,23,20,-1,20,0,1,-1});
  }
}
private class MFInt32640 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {24,0,26,-1,26,25,24,-1,4,7,6,-1,6,5,4,-1,8,11,10,-1,10,9,8,-1,12,32,31,-1,31,30,12,-1,25,28,29,-1,29,24,25,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,7,4,-1,7,11,8,-1,8,2,7,-1,0,12,30,-1,30,26,0,-1,3,13,14,-1,14,6,3,-1,6,14,15,-1,15,5,6,-1,27,32,12,-1,12,0,27,-1,17,16,19,-1,19,18,17,-1,35,20,37,-1,37,36,35,-1,24,37,20,-1,20,0,24,-1,0,20,35,-1,35,27,0,-1,5,21,22,-1,22,4,5,-1,4,22,23,-1,23,1,4,-1,7,19,16,-1,16,6,7,-1,6,16,17,-1,17,3,6,-1,26,33,34,-1,34,25,26,-1,2,18,19,-1,19,7,2,-1});
  }
}
private class MFVec3f641 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19895177f ,0.68589f ,-0.012235501f ,0.16650002f ,0.685935f ,-0.012237751f ,0.19661626f ,0.7085138f ,0.00230625f ,0.19730927f ,0.70894355f ,-0.012406501f ,0.16780052f ,0.7089413f ,-0.01237725f ,0.16696352f ,0.6860025f ,0.0032242502f ,0.16764076f ,0.708516f ,0.00251325f ,0.19886626f ,0.6860025f ,0.0032242502f ,0.16885127f ,0.68238f ,-0.012422251f ,0.16914827f ,0.682155f ,0.0034470002f ,0.19554977f ,0.682155f ,0.0034470002f ,0.19560602f ,0.682335f ,-0.0124200005f ,0.17095727f ,0.71546626f ,0.00198675f ,0.17106527f ,0.7156508f ,-0.01096875f ,0.19389826f ,0.715653f ,-0.010989001f ,0.19344376f ,0.715464f ,0.0018449998f ,0.16791302f ,0.6874043f ,0.00576225f ,0.16933276f ,0.70686454f ,0.0049185003f ,0.19497602f ,0.7068623f ,0.00472275f ,0.19692002f ,0.6874043f ,0.0057735f ,0.19692676f ,0.6875753f ,-0.014348251f ,0.19551602f ,0.7073843f ,-0.0148950005f ,0.16954426f ,0.707382f ,-0.01486575f ,0.16759576f ,0.68762255f ,-0.01435275f });
  }
}
private class MFVec2f642 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9315f ,0.2698f ,0.8136f ,0.0488f ,0.7924f ,0.0507f ,0.7911f ,0.0281f ,0.8136f ,0.0488f ,0.813f ,0.0266f ,0.791f ,0.0281f ,0.7924f ,0.0508f ,0.7924f ,0.0543f ,0.8143f ,0.0526f ,0.8143f ,0.0526f ,0.7924f ,0.0543f ,0.9335f ,0.2763f ,0.7903f ,0.0215f ,0.7903f ,0.0215f ,0.8123f ,0.0198f ,0.7875f ,0.03f ,0.7875f ,0.03f ,0.7887f ,0.0494f ,0.7887f ,0.0495f ,0.9277f ,0.2691f ,0.8167f ,0.0279f ,0.8173f ,0.0471f ,0.8173f ,0.0471f ,0.9273f ,0.2479f ,0.9479f ,0.2423f ,0.9531f ,0.2644f ,0.9318f ,0.2697f ,0.9473f ,0.2389f ,0.926f ,0.2443f ,0.955f ,0.2707f ,0.9551f ,0.2707f ,0.9337f ,0.2763f ,0.9563f ,0.262f ,0.9518f ,0.243f ,0.928f ,0.269f ,0.924f ,0.2502f ,0.9241f ,0.2502f });
  }
}
private class MFFloat643 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat644 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32645 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,8,6,-1,6,3,0,-1,10,5,1,-1,1,7,10,-1,2,9,7,-1,7,1,2,-1,8,0,4,-1,4,11,8,-1,14,13,12,-1,12,15,14,-1,34,33,32,-1,32,35,34,-1,25,24,29,-1,29,28,25,-1,17,20,19,-1,19,18,17,-1,25,28,27,-1,27,26,25,-1,20,17,16,-1,16,21,20,-1,6,12,13,-1,13,3,6,-1,24,31,30,-1,30,29,24,-1,2,14,15,-1,15,9,2,-1,16,23,22,-1,22,21,16,-1,9,16,17,-1,17,7,9,-1,7,17,18,-1,18,10,7,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,8,11,-1,8,20,21,-1,21,6,8,-1,6,21,22,-1,22,12,6,-1,12,22,23,-1,23,15,12,-1,15,23,16,-1,16,9,15,-1,3,24,25,-1,25,0,3,-1,0,25,26,-1,26,4,0,-1,4,26,27,-1,27,5,4,-1,5,27,28,-1,28,1,5,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,14,2,-1,14,30,31,-1,31,13,14,-1,13,31,24,-1,24,3,13,-1,10,32,33,-1,33,5,10,-1,5,33,34,-1,34,4,5,-1,4,34,35,-1,35,11,4,-1,11,35,32,-1,32,10,11,-1});
  }
}
private class MFInt32646 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,0,3,2,-1,39,38,37,-1,37,36,39,-1,40,41,36,-1,36,37,40,-1,1,2,11,-1,11,10,1,-1,12,15,14,-1,14,13,12,-1,43,46,45,-1,45,44,43,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,14,15,-1,15,3,0,-1,23,33,32,-1,32,22,23,-1,8,12,13,-1,13,9,8,-1,31,35,34,-1,34,30,31,-1,9,31,24,-1,24,4,9,-1,36,48,49,-1,49,39,36,-1,7,25,26,-1,26,10,7,-1,10,26,27,-1,27,1,10,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,14,0,-1,14,34,35,-1,35,13,14,-1,13,35,31,-1,31,9,13,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,11,2,-1,42,52,53,-1,53,38,42,-1,38,53,47,-1,47,37,38,-1,5,21,22,-1,22,8,5,-1,8,22,32,-1,32,12,8,-1,12,32,33,-1,33,15,12,-1,15,33,23,-1,23,3,15,-1,39,45,46,-1,46,38,39,-1,6,19,16,-1,16,11,6,-1,11,16,17,-1,17,10,11,-1,10,17,18,-1,18,7,10,-1});
  }
}
private class MFVec3f647 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19760627f ,0.6594075f ,-0.0120825f ,0.16938001f ,0.6594075f ,-0.0120825f ,0.17236577f ,0.6382125f ,-0.0126315f ,0.19481401f ,0.6382125f ,-0.0126315f ,0.19895177f ,0.685728f ,-0.012235501f ,0.16650002f ,0.685782f ,-0.012237751f ,0.19481851f ,0.6378975f ,0.0054944996f ,0.16924277f ,0.6584175f ,0.00474975f ,0.19739701f ,0.6584175f ,0.00474975f ,0.17246026f ,0.6378975f ,0.0054944996f ,0.16696352f ,0.6858383f ,0.0032264998f ,0.19886626f ,0.6858383f ,0.0032264998f ,0.19304326f ,0.63441f ,0.00480825f ,0.19304101f ,0.6342975f ,-0.011493f ,0.17432326f ,0.6342975f ,-0.011493f ,0.17440426f ,0.63441f ,0.00480825f ,0.17473051f ,0.6385275f ,0.0070222495f ,0.17154676f ,0.65864253f ,0.00820575f ,0.16866902f ,0.68629724f ,0.0066375f ,0.19644752f ,0.68629724f ,0.0066375f ,0.19507277f ,0.6585075f ,0.0082125f ,0.19271027f ,0.63850504f ,0.0070222495f ,0.19150652f ,0.6363f ,0.006617251f ,0.17594552f ,0.6363f ,0.006617251f ,0.19257301f ,0.639f ,-0.014694751f ,0.19507502f ,0.659295f ,-0.0149715f ,0.19630127f ,0.6859755f ,-0.014953501f ,0.16859026f ,0.6860205f ,-0.014955751f ,0.17187527f ,0.65943f ,-0.014976f ,0.17475076f ,0.6390225f ,-0.014697f ,0.17597927f ,0.6363675f ,-0.013995001f ,0.19135576f ,0.6363675f ,-0.013995001f ,0.16898626f ,0.68825024f ,0.00019800001f ,0.16870502f ,0.6882278f ,-0.0099990005f ,0.19595252f ,0.68817824f ,-0.00999675f ,0.19589852f ,0.68825704f ,0.00019800001f });
  }
}
private class MFVec2f648 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8225f ,0.0994f ,0.8195f ,0.0808f ,0.7938f ,0.0824f ,0.7939f ,0.1016f ,0.8195f ,0.0808f ,0.7938f ,0.0824f ,0.7924f ,0.0507f ,0.8136f ,0.0488f ,0.7939f ,0.1016f ,0.8225f ,0.0994f ,0.8136f ,0.0488f ,0.7924f ,0.0508f ,0.7964f ,0.1053f ,0.8205f ,0.103f ,0.8205f ,0.103f ,0.7964f ,0.1053f ,0.796f ,0.0481f ,0.809f ,0.0468f ,0.809f ,0.0469f ,0.796f ,0.048f ,0.7888f ,0.0827f ,0.7888f ,0.0826f ,0.7886f ,0.1011f ,0.7887f ,0.1011f ,0.8243f ,0.0799f ,0.8186f ,0.0479f ,0.8186f ,0.0479f ,0.8243f ,0.0801f ,0.7878f ,0.051f ,0.7878f ,0.0509f ,0.8275f ,0.0984f ,0.8275f ,0.0983f ,0.7902f ,0.1036f ,0.7902f ,0.1036f ,0.8264f ,0.1006f ,0.8264f ,0.1006f ,0.916f ,0.2175f ,0.941f ,0.2114f ,0.9479f ,0.2423f ,0.9273f ,0.2479f ,0.9376f ,0.1925f ,0.9098f ,0.1997f ,0.9479f ,0.2423f ,0.9448f ,0.2456f ,0.9323f ,0.249f ,0.9323f ,0.249f ,0.9448f ,0.2456f ,0.9459f ,0.2103f ,0.9115f ,0.2191f ,0.9226f ,0.2496f ,0.9226f ,0.2496f ,0.9114f ,0.219f ,0.9524f ,0.2413f ,0.9524f ,0.2414f });
  }
}
private class MFFloat649 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat650 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32651 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,26,-1,26,21,3,-1,5,6,27,-1,27,25,5,-1,4,23,26,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,24,-1,24,22,7,-1,4,7,22,-1,22,23,4,-1,24,5,25,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,21,18,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,20,19,-1,19,6,16,-1,3,18,20,-1,20,16,3,-1,19,27,6,-1,31,30,29,-1,29,28,31,-1,26,28,29,-1,29,21,26,-1,38,37,36,-1,38,36,35,-1,35,34,33,-1,35,33,32,-1,38,35,32,-1,27,30,31,-1,31,25,27,-1,44,43,42,-1,44,42,41,-1,41,40,39,-1,44,41,39,-1,44,39,45,-1,18,32,33,-1,33,20,18,-1,20,33,34,-1,34,19,20,-1,19,34,35,-1,35,27,19,-1,27,35,36,-1,36,30,27,-1,30,36,37,-1,37,29,30,-1,29,37,38,-1,38,21,29,-1,21,38,32,-1,32,18,21,-1,22,39,40,-1,40,23,22,-1,23,40,41,-1,41,26,23,-1,26,41,42,-1,42,28,26,-1,28,42,43,-1,43,31,28,-1,31,43,44,-1,44,25,31,-1,25,44,45,-1,45,24,25,-1,24,45,39,-1,39,22,24,-1});
  }
}
private class MFInt32652 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1});
  }
}
private class MFVec3f653 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.17212725f ,0.6032025f ,-0.0089145005f ,0.19116f ,0.605835f ,-0.008982f ,0.1811295f ,0.60255f ,-0.0117247505f ,0.19293524f ,0.632781f ,0.00312975f ,0.19293524f ,0.63291377f ,-0.0098775f ,0.17322075f ,0.63291377f ,-0.0098775f ,0.17322075f ,0.632781f ,0.00312975f ,0.18241425f ,0.629595f ,-0.012150001f ,0.1738035f ,0.5989725f ,-0.00803925f ,0.18755999f ,0.59688f ,-0.00864675f ,0.1738035f ,0.5991075f ,0.0010980002f ,0.18755999f ,0.597015f ,0.0018450001f ,0.181107f ,0.5960925f ,-0.0086445f ,0.181107f ,0.5962275f ,0.00207f ,0.17212725f ,0.60336f ,0.0017370003f ,0.1811295f ,0.60277504f ,0.0048690005f ,0.18241425f ,0.62957925f ,0.0053662504f ,0.19116f ,0.6059925f ,0.0016695001f ,0.19293524f ,0.6327585f ,0.0055282507f ,0.17322075f ,0.6327585f ,0.0055282507f ,0.18241425f ,0.629613f ,0.00565875f ,0.19482975f ,0.6379245f ,0.0054945005f ,0.18241425f ,0.6296468f ,-0.0124425f ,0.19293524f ,0.63273823f ,-0.012372751f ,0.17322075f ,0.63273823f ,-0.012372751f ,0.17237474f ,0.6382395f ,-0.01263375f ,0.19482525f ,0.6382395f ,-0.01263375f ,0.1724715f ,0.6379245f ,0.0054945005f ,0.19118474f ,0.64429873f ,-0.012044251f ,0.19118924f ,0.6443325f ,0.004446f ,0.1746945f ,0.6443325f ,0.004446f ,0.17461124f ,0.64429873f ,-0.012044251f ,0.19244024f ,0.63381153f ,0.0062302505f ,0.1824345f ,0.630639f ,0.00632925f ,0.17378774f ,0.63378f ,0.0062302505f ,0.17309475f ,0.6383678f ,0.0062100003f ,0.175158f ,0.64441574f ,0.006192f ,0.1907955f ,0.64441574f ,0.006192f ,0.19433475f ,0.63837224f ,0.0062100003f ,0.182439f ,0.63078976f ,-0.01309275f ,0.19203974f ,0.63358873f ,-0.0133245f ,0.19378799f ,0.63826203f ,-0.01347525f ,0.190512f ,0.64422f ,-0.01348875f ,0.1754325f ,0.64422f ,-0.01348875f ,0.17351775f ,0.63827103f ,-0.01347525f ,0.17424674f ,0.6335258f ,-0.0133245f });
  }
}
private class MFVec2f654 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8168f ,0.105f ,0.8225f ,0.0994f ,0.7939f ,0.1016f ,0.7996f ,0.1065f ,0.9311f ,0.1887f ,0.7939f ,0.1016f ,0.8225f ,0.0994f ,0.9145f ,0.1932f ,0.794f ,0.107f ,0.9232f ,0.1611f ,0.908f ,0.1649f ,0.8025f ,0.1324f ,0.818f ,0.1313f ,0.7986f ,0.1359f ,0.7957f ,0.11f ,0.7939f ,0.1101f ,0.794f ,0.107f ,0.8228f ,0.1342f ,0.8186f ,0.1401f ,0.819f ,0.1409f ,0.9081f ,0.1606f ,0.921f ,0.1574f ,0.8033f ,0.1412f ,0.8033f ,0.142f ,0.8231f ,0.1042f ,0.8212f ,0.1078f ,0.8231f ,0.1042f ,0.8236f ,0.1075f ,0.7948f ,0.0956f ,0.8206f ,0.0932f ,0.8206f ,0.0932f ,0.7948f ,0.0956f ,0.8249f ,0.0987f ,0.8253f ,0.1032f ,0.8258f ,0.1063f ,0.8253f ,0.1032f ,0.8249f ,0.0987f ,0.823f ,0.0929f ,0.823f ,0.0929f ,0.7917f ,0.1017f ,0.7916f ,0.1064f ,0.7918f ,0.1091f ,0.7916f ,0.1063f ,0.7917f ,0.1017f ,0.7927f ,0.0957f ,0.7927f ,0.0957f ,0.9376f ,0.1925f ,0.9098f ,0.1997f ,0.927f ,0.1595f ,0.9344f ,0.1846f ,0.9361f ,0.1842f ,0.9366f ,0.1872f ,0.9035f ,0.1654f ,0.9061f ,0.1582f ,0.9213f ,0.1544f ,0.9096f ,0.1911f ,0.9084f ,0.195f ,0.9074f ,0.1918f });
  }
}
private class MFFloat655 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat656 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32657 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
private class MFInt32658 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
private class MFVec3f659 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18004051f ,0.575235f ,-0.01091025f ,0.17236575f ,0.57586503f ,0.0017190003f ,0.18851851f ,0.578655f ,0.0018450001f ,0.19035676f ,0.59820527f ,0.0018742502f ,0.19035676f ,0.5980635f ,-0.00877725f ,0.17213401f ,0.603243f ,-0.00891225f ,0.19116676f ,0.60587776f ,-0.008982f ,0.17213401f ,0.60338473f ,0.0017392504f ,0.19116676f ,0.60602176f ,0.0016695001f ,0.17627852f ,0.6081188f ,-0.0090405f ,0.17627852f ,0.6082628f ,0.0016110002f ,0.18567227f ,0.60799724f ,0.0016177503f ,0.18567227f ,0.60785323f ,-0.00903375f ,0.18113627f ,0.60257924f ,-0.0117247505f ,0.18113627f ,0.60280204f ,0.00487125f ,0.18003376f ,0.5754375f ,0.0044370005f ,0.18574426f ,0.569835f ,0.0016402503f ,0.18024077f ,0.5695425f ,0.0018000003f ,0.17237025f ,0.57573f ,-0.008529751f ,0.17392276f ,0.57165754f ,0.00094500027f ,0.17392726f ,0.571545f ,-0.0075195003f ,0.18852301f ,0.57852f ,-0.008802f ,0.18574876f ,0.5697f ,-0.0080775f ,0.18026777f ,0.5687775f ,-0.00807525f });
  }
}
private class MFVec2f660 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.908f ,0.1649f ,0.8228f ,0.1342f ,0.8238f ,0.1612f ,0.9018f ,0.1387f ,0.818f ,0.1313f ,0.8186f ,0.139f ,0.9163f ,0.135f ,0.9232f ,0.1611f ,0.8031f ,0.1401f ,0.8044f ,0.1596f ,0.8199f ,0.1584f ,0.8025f ,0.1324f ,0.7986f ,0.1359f ,0.8014f ,0.1628f ,0.8179f ,0.1294f ,0.8023f ,0.1305f ,0.8179f ,0.1291f ,0.8023f ,0.1302f ,0.8199f ,0.1671f ,0.8202f ,0.1672f ,0.902f ,0.1343f ,0.914f ,0.1313f ,0.8058f ,0.1681f ,0.8058f ,0.1689f ,0.9035f ,0.1654f ,0.8978f ,0.139f ,0.927f ,0.1595f ,0.9196f ,0.1336f ,0.9092f ,0.1696f ,0.9243f ,0.1658f ,0.9003f ,0.1324f ,0.9142f ,0.1283f });
  }
}
private class MFFloat661 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat662 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32663 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
private class MFInt32664 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
private class MFVec3f665 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18762301f ,0.572184f ,0.00201825f ,0.1876275f ,0.57204f ,-0.00863325f ,0.18634725f ,0.5641898f ,0.001917f ,0.18635625f ,0.5639558f ,-0.0081f ,0.172926f ,0.56471854f ,0.0023422502f ,0.1790595f ,0.564426f ,0.00405225f ,0.172935f ,0.56446654f ,-0.00853875f ,0.179073f ,0.564093f ,-0.0104625f ,0.18352576f ,0.5565938f ,0.00140625f ,0.18353476f ,0.55637324f ,-0.00758475f ,0.17291474f ,0.5568255f ,0.0012892501f ,0.17824051f ,0.5568548f ,0.00300375f ,0.1729215f ,0.55661404f ,-0.00731925f ,0.17825176f ,0.55656224f ,-0.00915975f ,0.1842435f ,0.555075f ,-0.003087f ,0.17371576f ,0.5550165f ,-0.0030915001f ,0.17821576f ,0.5540333f ,-0.0030735f ,0.184149f ,0.555435f ,-0.0006097499f ,0.173628f ,0.555318f ,-0.0051795f ,0.17850825f ,0.5546205f ,0.00021374994f ,0.1841535f ,0.5552955f ,-0.00543825f ,0.1736235f ,0.55543727f ,-0.00089325005f ,0.17851725f ,0.55437976f ,-0.0061515f ,0.17235675f ,0.57595503f ,0.001719f ,0.188514f ,0.57859427f ,-0.008802f ,0.1885095f ,0.578736f ,0.0018472502f ,0.1838205f ,0.5808375f ,0.001404f ,0.183825f ,0.580707f ,-0.00846f ,0.17575425f ,0.5809185f ,0.0013972502f ,0.17236125f ,0.57582f ,-0.008529751f ,0.17575875f ,0.58078575f ,-0.008469f ,0.18006974f ,0.5755343f ,0.00443475f ,0.1800765f ,0.5753273f ,-0.0109125f });
  }
}
private class MFVec2f666 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8204f ,0.1649f ,0.8238f ,0.1612f ,0.8199f ,0.1584f ,0.8044f ,0.1596f ,0.8014f ,0.1628f ,0.8049f ,0.166f ,0.807f ,0.1802f ,0.8204f ,0.1792f ,0.8232f ,0.1783f ,0.8982f ,0.1238f ,0.9018f ,0.1387f ,0.9123f ,0.1202f ,0.9163f ,0.135f ,0.8038f ,0.18f ,0.8141f ,0.1881f ,0.8169f ,0.1876f ,0.8192f ,0.1861f ,0.8213f ,0.1861f ,0.8983f ,0.1142f ,0.9079f ,0.1117f ,0.9004f ,0.112f ,0.9052f ,0.1108f ,0.8067f ,0.1872f ,0.8088f ,0.1869f ,0.8179f ,0.1883f ,0.8142f ,0.1891f ,0.8114f ,0.188f ,0.8106f ,0.1889f ,0.9027f ,0.111f ,0.8192f ,0.1563f ,0.8048f ,0.1573f ,0.8192f ,0.156f ,0.8048f ,0.1571f ,0.8978f ,0.139f ,0.9196f ,0.1336f ,0.8956f ,0.1239f ,0.9147f ,0.119f ,0.8959f ,0.1141f ,0.9101f ,0.1105f ,0.8989f ,0.1113f ,0.9025f ,0.1098f ,0.906f ,0.1094f ,0.9033f ,0.1433f ,0.9173f ,0.1398f });
  }
}
private class MFFloat667 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat668 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32669 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,7,4,-1,4,3,6,-1,7,8,9,-1,9,0,7,-1,11,5,1,-1,1,2,11,-1,5,6,3,-1,3,1,5,-1,2,10,11,-1,4,7,0,-1,17,16,15,-1,17,15,14,-1,13,17,14,-1,20,22,21,-1,27,26,25,-1,25,24,27,-1,17,13,12,-1,12,18,17,-1,23,22,20,-1,20,19,23,-1,9,12,13,-1,13,0,9,-1,0,13,14,-1,14,4,0,-1,4,14,15,-1,15,3,4,-1,3,15,16,-1,16,1,3,-1,1,16,17,-1,17,2,1,-1,2,17,18,-1,18,10,2,-1,10,18,12,-1,12,9,10,-1,11,19,20,-1,20,5,11,-1,5,20,21,-1,21,6,5,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,8,7,-1,8,23,19,-1,19,11,8,-1,8,24,25,-1,25,9,8,-1,9,25,26,-1,26,10,9,-1,10,26,27,-1,27,11,10,-1,11,27,24,-1,24,8,11,-1});
  }
}
private class MFInt32670 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,3,6,5,-1,5,4,3,-1,7,10,9,-1,9,8,7,-1,10,28,29,-1,29,9,10,-1,8,11,7,-1,2,3,4,-1,16,15,14,-1,16,14,13,-1,12,16,13,-1,35,37,36,-1,23,22,39,-1,39,38,23,-1,16,12,25,-1,25,24,16,-1,26,19,17,-1,17,27,26,-1,5,25,12,-1,12,4,5,-1,4,12,13,-1,13,2,4,-1,2,13,14,-1,14,1,2,-1,29,32,33,-1,33,9,29,-1,9,33,34,-1,34,8,9,-1,8,34,40,-1,40,11,8,-1,11,40,41,-1,41,30,11,-1,7,43,35,-1,35,10,7,-1,10,35,36,-1,36,28,10,-1,0,18,19,-1,19,3,0,-1,3,19,26,-1,26,6,3,-1,31,42,43,-1,43,7,31,-1,6,20,21,-1,21,5,6,-1,30,39,22,-1,22,11,30,-1,11,22,23,-1,23,7,11,-1,7,23,38,-1,38,31,7,-1});
  }
}
private class MFVec3f671 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19811927f ,0.68704206f ,-0.027623253f ,0.17081101f ,0.68900406f ,-0.037813503f ,0.16744727f ,0.6870555f ,-0.027627753f ,0.18288451f ,0.68998057f ,-0.040864505f ,0.19411652f ,0.68892753f ,-0.037788752f ,0.17140727f ,0.70506907f ,-0.027328502f ,0.18300152f ,0.705456f ,-0.03395025f ,0.19495127f ,0.7050758f ,-0.027317252f ,0.19730927f ,0.7088671f ,-0.012406502f ,0.19895177f ,0.6858113f ,-0.012235502f ,0.16650002f ,0.6858653f ,-0.012237752f ,0.16780052f ,0.7088648f ,-0.012377251f ,0.19544627f ,0.6822001f ,-0.012318752f ,0.19480726f ,0.68294257f ,-0.027729003f ,0.19135801f ,0.6845333f ,-0.03642075f ,0.18270901f ,0.68544227f ,-0.038772f ,0.17352676f ,0.68458056f ,-0.036346503f ,0.17064677f ,0.68294257f ,-0.027713252f ,0.16916852f ,0.6822451f ,-0.012321001f ,0.17186402f ,0.7155518f ,-0.010971001f ,0.17436151f ,0.7118955f ,-0.026010003f ,0.18283276f ,0.7122308f ,-0.030795753f ,0.19188452f ,0.7118775f ,-0.025888503f ,0.19353376f ,0.7155653f ,-0.010993502f ,0.19522126f ,0.7069298f ,-0.010633501f ,0.19659376f ,0.6876608f ,-0.010638002f ,0.16794452f ,0.687708f ,-0.010640251f ,0.16983676f ,0.70692754f ,-0.010606502f });
  }
}
private class MFVec2f672 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7624f ,0.0345f ,0.7525f ,0.0502f ,0.7571f ,0.0508f ,0.7729f ,0.0334f ,0.7734f ,0.0512f ,0.7924f ,0.0508f ,0.791f ,0.0281f ,0.9531f ,0.2644f ,0.9665f ,0.2386f ,0.9827f ,0.2362f ,0.9706f ,0.2558f ,0.9479f ,0.2423f ,0.7736f ,0.0553f ,0.7595f ,0.0549f ,0.7559f ,0.0544f ,0.7596f ,0.0549f ,0.7736f ,0.0553f ,0.7721f ,0.0268f ,0.7644f ,0.0276f ,0.7723f ,0.0268f ,0.7938f ,0.0298f ,0.795f ,0.0487f ,0.9457f ,0.2448f ,0.9501f ,0.2632f ,0.7926f ,0.0543f ,0.7926f ,0.0544f ,0.7903f ,0.0215f ,0.7903f ,0.0215f ,0.9803f ,0.2531f ,0.9874f ,0.236f ,0.9479f ,0.2423f ,0.9532f ,0.2644f ,0.9832f ,0.2324f ,0.9795f ,0.2325f ,0.9656f ,0.2346f ,0.9721f ,0.2624f ,0.9795f ,0.2602f ,0.9719f ,0.2625f ,0.9502f ,0.2632f ,0.9457f ,0.2447f ,0.9471f ,0.2389f ,0.9471f ,0.2388f ,0.9551f ,0.2707f ,0.955f ,0.2707f });
  }
}
private class MFFloat673 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat674 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32675 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,2,0,-1,0,6,9,-1,6,0,4,-1,4,10,6,-1,7,1,3,-1,3,8,7,-1,7,11,5,-1,5,1,7,-1,12,15,14,-1,14,13,12,-1,34,33,32,-1,32,35,34,-1,17,16,21,-1,21,20,17,-1,29,24,31,-1,31,30,29,-1,17,20,19,-1,19,18,17,-1,24,29,28,-1,28,25,24,-1,9,12,13,-1,13,2,9,-1,16,23,22,-1,22,21,16,-1,3,14,15,-1,15,8,3,-1,28,27,26,-1,26,25,28,-1,2,16,17,-1,17,0,2,-1,0,17,18,-1,18,4,0,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,1,5,-1,1,20,21,-1,21,3,1,-1,3,21,22,-1,22,14,3,-1,14,22,23,-1,23,13,14,-1,13,23,16,-1,16,2,13,-1,6,24,25,-1,25,9,6,-1,9,25,26,-1,26,12,9,-1,12,26,27,-1,27,15,12,-1,15,27,28,-1,28,8,15,-1,8,28,29,-1,29,7,8,-1,7,29,30,-1,30,11,7,-1,11,30,31,-1,31,10,11,-1,10,31,24,-1,24,6,10,-1,4,32,33,-1,33,10,4,-1,10,33,34,-1,34,11,10,-1,11,34,35,-1,35,5,11,-1,5,35,32,-1,32,4,5,-1});
  }
}
private class MFInt32676 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,1,2,5,-1,5,4,1,-1,38,9,40,-1,40,39,38,-1,38,42,41,-1,41,9,38,-1,12,15,14,-1,14,13,12,-1,16,45,44,-1,44,43,16,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,12,13,-1,13,3,0,-1,23,33,32,-1,32,22,23,-1,8,14,15,-1,15,7,8,-1,31,35,34,-1,34,30,31,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,5,2,-1,37,52,53,-1,53,41,37,-1,41,53,46,-1,46,9,41,-1,9,46,47,-1,47,40,9,-1,8,22,32,-1,32,14,8,-1,14,32,33,-1,33,13,14,-1,13,33,23,-1,23,3,13,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,12,0,-1,12,34,35,-1,35,15,12,-1,15,35,31,-1,31,7,15,-1,7,31,24,-1,24,6,7,-1,38,48,49,-1,49,42,38,-1,11,25,26,-1,26,4,11,-1,4,26,27,-1,27,1,4,-1,5,18,19,-1,19,4,5,-1,36,45,16,-1,16,42,36,-1,42,16,43,-1,43,41,42,-1,10,17,18,-1,18,5,10,-1});
  }
}
private class MFVec3f677 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19615726f ,0.6612975f ,-0.02849175f ,0.16982551f ,0.6612975f ,-0.02849175f ,0.19425151f ,0.6400575f ,-0.028514251f ,0.17241302f ,0.6400125f ,-0.028512001f ,0.19811927f ,0.6870938f ,-0.027623251f ,0.16744727f ,0.687105f ,-0.027630001f ,0.19760627f ,0.6595425f ,-0.012082499f ,0.16938001f ,0.6595425f ,-0.012082499f ,0.17236577f ,0.6383475f ,-0.0126315f ,0.19481401f ,0.6383475f ,-0.0126315f ,0.19895177f ,0.68586075f ,-0.0122355f ,0.16650002f ,0.68591475f ,-0.01223775f ,0.19287677f ,0.63432f ,-0.01361925f ,0.19226252f ,0.6353775f ,-0.0273915f ,0.17446727f ,0.6353325f ,-0.02738475f ,0.17442676f ,0.63432f ,-0.01361925f ,0.19209151f ,0.6405525f ,-0.030501f ,0.19397026f ,0.6616575f ,-0.03125025f ,0.19581077f ,0.68763155f ,-0.02994075f ,0.16992901f ,0.68764275f ,-0.02994525f ,0.17199901f ,0.6617475f ,-0.031245751f ,0.17455952f ,0.6405525f ,-0.03049875f ,0.17596127f ,0.6371775f ,-0.03020625f ,0.19074826f ,0.6372f ,-0.030213f ,0.19526626f ,0.659295f ,-0.0090225f ,0.19281827f ,0.63929254f ,-0.01055925f ,0.19127926f ,0.636345f ,-0.011259f ,0.17598152f ,0.636345f ,-0.011259f ,0.17448077f ,0.63929254f ,-0.01055925f ,0.17167276f ,0.659385f ,-0.0090247495f ,0.16844401f ,0.68578875f ,-0.00947925f ,0.19647902f ,0.68574375f ,-0.009477f ,0.19529101f ,0.689274f ,-0.02598975f ,0.19575451f ,0.6885788f ,-0.01413675f ,0.16912127f ,0.68862826f ,-0.01413675f ,0.17019227f ,0.68928075f ,-0.02599425f });
  }
}
private class MFVec2f678 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7939f ,0.1016f ,0.7938f ,0.0824f ,0.7694f ,0.0827f ,0.766f ,0.1014f ,0.7924f ,0.0508f ,0.7734f ,0.0512f ,0.7938f ,0.0824f ,0.7939f ,0.1016f ,0.766f ,0.1015f ,0.965f ,0.2069f ,0.7734f ,0.0512f ,0.7924f ,0.0507f ,0.7909f ,0.1057f ,0.7677f ,0.1056f ,0.7677f ,0.1057f ,0.7909f ,0.1057f ,0.9517f ,0.2441f ,0.7765f ,0.0488f ,0.7765f ,0.0488f ,0.789f ,0.0484f ,0.7643f ,0.0825f ,0.7643f ,0.0824f ,0.7614f ,0.1009f ,0.7614f ,0.1009f ,0.7991f ,0.0823f ,0.7971f ,0.0505f ,0.7971f ,0.0505f ,0.7991f ,0.0824f ,0.7688f ,0.0511f ,0.7688f ,0.0511f ,0.7994f ,0.1003f ,0.7994f ,0.1003f ,0.7625f ,0.1038f ,0.7625f ,0.1038f ,0.7972f ,0.1034f ,0.7972f ,0.1034f ,0.9479f ,0.2423f ,0.9665f ,0.2385f ,0.941f ,0.2114f ,0.9376f ,0.1925f ,0.9651f ,0.1878f ,0.9665f ,0.2386f ,0.9479f ,0.2423f ,0.9639f ,0.2415f ,0.9639f ,0.2415f ,0.9517f ,0.244f ,0.9701f ,0.2063f ,0.9698f ,0.1875f ,0.9358f ,0.2124f ,0.9433f ,0.2434f ,0.9433f ,0.2434f ,0.9358f ,0.2123f ,0.9711f ,0.2379f ,0.9711f ,0.2379f });
  }
}
private class MFFloat679 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat680 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32681 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,22,-1,22,23,3,-1,5,6,31,-1,31,32,5,-1,4,44,22,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,45,-1,45,43,7,-1,4,7,43,-1,43,44,4,-1,45,5,32,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,23,40,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,41,42,-1,42,6,16,-1,3,40,41,-1,41,16,3,-1,42,31,6,-1,21,20,19,-1,19,18,21,-1,22,18,19,-1,19,23,22,-1,24,30,29,-1,24,29,28,-1,28,27,26,-1,28,26,25,-1,24,28,25,-1,31,20,21,-1,21,32,31,-1,33,39,38,-1,33,38,37,-1,37,36,35,-1,33,37,35,-1,33,35,34,-1,40,25,26,-1,26,41,40,-1,41,26,27,-1,27,42,41,-1,42,27,28,-1,28,31,42,-1,31,28,29,-1,29,20,31,-1,20,29,30,-1,30,19,20,-1,19,30,24,-1,24,23,19,-1,23,24,25,-1,25,40,23,-1,43,35,36,-1,36,44,43,-1,44,36,37,-1,37,22,44,-1,22,37,38,-1,38,18,22,-1,18,38,39,-1,39,21,18,-1,21,39,33,-1,33,32,21,-1,32,33,34,-1,34,45,32,-1,45,34,35,-1,35,43,45,-1});
  }
}
private class MFInt32682 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1});
  }
}
private class MFVec3f683 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1721295f ,0.60705f ,-0.0258795f ,0.19116224f ,0.609435f ,-0.025958251f ,0.18113175f ,0.60642004f ,-0.02859075f ,0.1929375f ,0.6331613f ,-0.014764501f ,0.19293974f ,0.63415354f ,-0.0260055f ,0.173223f ,0.63415354f ,-0.0260055f ,0.173223f ,0.6331613f ,-0.014764501f ,0.1824165f ,0.63180006f ,-0.02882925f ,0.17380574f ,0.6032025f ,-0.0251595f ,0.18756449f ,0.6012675f ,-0.0257535f ,0.17380574f ,0.6034275f ,-0.0161595f ,0.18756449f ,0.60156006f ,-0.01541925f ,0.18110925f ,0.60054755f ,-0.025749f ,0.18110925f ,0.60084003f ,-0.0151965f ,0.1721295f ,0.60729754f ,-0.0155902505f ,0.18113175f ,0.6068025f ,-0.012564001f ,0.1824165f ,0.6298245f ,-0.0128092505f ,0.19116224f ,0.60968256f ,-0.015669f ,0.191187f ,0.6457995f ,-0.02811375f ,0.1911915f ,0.64443606f ,-0.013034251f ,0.17469674f ,0.64443606f ,-0.013034251f ,0.17461349f ,0.6457995f ,-0.02811375f ,0.194265f ,0.64009804f ,-0.028516501f ,0.1948275f ,0.6383993f ,-0.0126315f ,0.194337f ,0.63868505f ,-0.011583f ,0.19244249f ,0.6341423f ,-0.01149525f ,0.18243675f ,0.63094276f ,-0.0117855f ,0.17379f ,0.63410854f ,-0.011493f ,0.173097f ,0.6386805f ,-0.01158075f ,0.17516024f ,0.64445406f ,-0.011286001f ,0.19079775f ,0.64445406f ,-0.011286001f ,0.17237699f ,0.6383993f ,-0.0126315f ,0.17242424f ,0.64006203f ,-0.028512001f ,0.17352f ,0.6407708f ,-0.029679751f ,0.174249f ,0.6354585f ,-0.029855251f ,0.1824435f ,0.63284177f ,-0.02927925f ,0.192042f ,0.6355238f ,-0.029862002f ,0.19379024f ,0.6407618f ,-0.029679751f ,0.1905165f ,0.64594126f ,-0.02914875f ,0.175437f ,0.64594126f ,-0.02914875f ,0.1929375f ,0.63289577f ,-0.012372751f ,0.1824165f ,0.6298065f ,-0.0124425f ,0.173223f ,0.63289577f ,-0.012372751f ,0.182349f ,0.63183606f ,-0.029081251f ,0.19267425f ,0.634338f ,-0.028856251f ,0.173223f ,0.634338f ,-0.028856251f });
  }
}
private class MFVec2f684 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7878f ,0.1071f ,0.7939f ,0.1016f ,0.766f ,0.1014f ,0.7709f ,0.1068f ,0.9594f ,0.1833f ,0.766f ,0.1015f ,0.7939f ,0.1016f ,0.9426f ,0.186f ,0.7648f ,0.1066f ,0.9545f ,0.1568f ,0.9398f ,0.1599f ,0.771f ,0.1315f ,0.7861f ,0.131f ,0.767f ,0.1345f ,0.7667f ,0.1094f ,0.7644f ,0.1092f ,0.7648f ,0.1066f ,0.7904f ,0.1338f ,0.786f ,0.139f ,0.7863f ,0.1397f ,0.9402f ,0.1559f ,0.9531f ,0.1532f ,0.7709f ,0.1396f ,0.7709f ,0.1403f ,0.794f ,0.107f ,0.7917f ,0.1102f ,0.794f ,0.107f ,0.7939f ,0.1101f ,0.7675f ,0.0958f ,0.7934f ,0.0956f ,0.7934f ,0.0956f ,0.7675f ,0.0958f ,0.7967f ,0.1011f ,0.7964f ,0.1056f ,0.7964f ,0.1088f ,0.7964f ,0.1057f ,0.7967f ,0.1011f ,0.7958f ,0.0955f ,0.7958f ,0.0955f ,0.7633f ,0.1008f ,0.7625f ,0.1056f ,0.7622f ,0.1084f ,0.7625f ,0.1055f ,0.7633f ,0.1008f ,0.765f ,0.0957f ,0.765f ,0.0957f ,0.9651f ,0.1878f ,0.9376f ,0.1925f ,0.9583f ,0.1554f ,0.963f ,0.1801f ,0.9654f ,0.1799f ,0.9654f ,0.1826f ,0.9354f ,0.1602f ,0.9385f ,0.1536f ,0.9536f ,0.1504f ,0.9383f ,0.1837f ,0.9366f ,0.1872f ,0.9361f ,0.1842f });
  }
}
private class MFFloat685 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat686 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32687 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
private class MFInt32688 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
private class MFVec3f689 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.17985827f ,0.5802075f ,-0.027360002f ,0.17218351f ,0.5808375f ,-0.0154035f ,0.18834527f ,0.5834025f ,-0.0152955f ,0.19035676f ,0.6025095f ,-0.0154800005f ,0.19035676f ,0.6022912f ,-0.025564501f ,0.17213401f ,0.606978f ,-0.0258795f ,0.19116676f ,0.6093742f ,-0.025956001f ,0.17213401f ,0.60722774f ,-0.01559025f ,0.19116676f ,0.609624f ,-0.015669f ,0.17627852f ,0.611433f ,-0.025884f ,0.17627852f ,0.61165124f ,-0.0157995f ,0.18567227f ,0.6114105f ,-0.0157905f ,0.18567227f ,0.6111922f ,-0.025875f ,0.18113627f ,0.6063435f ,-0.02859075f ,0.18113627f ,0.6067327f ,-0.012561751f ,0.17984927f ,0.5804775f ,-0.01282725f ,0.18553951f ,0.57537f ,-0.01544625f ,0.18003601f ,0.5751f ,-0.0152955f ,0.17219026f ,0.5806575f ,-0.02510775f ,0.173727f ,0.57699f ,-0.01611675f ,0.1737315f ,0.576855f ,-0.02413125f ,0.18835202f ,0.5832f ,-0.02537775f ,0.18554626f ,0.5752125f ,-0.02464875f ,0.18006301f ,0.5743575f ,-0.024642f });
  }
}
private class MFVec2f690 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9398f ,0.1599f ,0.7904f ,0.1338f ,0.7888f ,0.1598f ,0.9363f ,0.1341f ,0.7861f ,0.131f ,0.7859f ,0.138f ,0.9502f ,0.1313f ,0.9545f ,0.1568f ,0.7712f ,0.1385f ,0.7707f ,0.1575f ,0.7854f ,0.1571f ,0.771f ,0.1315f ,0.767f ,0.1345f ,0.7676f ,0.1604f ,0.786f ,0.1292f ,0.7713f ,0.1297f ,0.786f ,0.129f ,0.7713f ,0.1294f ,0.7847f ,0.165f ,0.7849f ,0.1652f ,0.9369f ,0.1301f ,0.9483f ,0.1278f ,0.7712f ,0.1654f ,0.7712f ,0.1661f ,0.9354f ,0.1602f ,0.9325f ,0.1343f ,0.9583f ,0.1554f ,0.9533f ,0.1301f ,0.9406f ,0.1642f ,0.9551f ,0.1612f ,0.9355f ,0.1283f ,0.9488f ,0.1251f });
  }
}
private class MFFloat691 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat692 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32693 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
private class MFInt32694 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
private class MFVec3f695 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1877985f ,0.57750076f ,-0.015099751f ,0.18780525f ,0.5773073f ,-0.025184251f ,0.1861695f ,0.5690408f ,-0.015403501f ,0.186174f ,0.56886977f ,-0.02466225f ,0.17273925f ,0.56978774f ,-0.015030001f ,0.17887725f ,0.569367f ,-0.0132525f ,0.172746f ,0.569601f ,-0.025087502f ,0.17888625f ,0.569115f ,-0.02687625f ,0.18373725f ,0.5623695f ,-0.015948001f ,0.18374175f ,0.56222326f ,-0.0238815f ,0.1726965f ,0.562761f ,-0.016065001f ,0.17804475f ,0.562149f ,-0.014301001f ,0.172701f ,0.56262153f ,-0.02366325f ,0.17805375f ,0.561942f ,-0.025476752f ,0.18447076f ,0.5604075f ,-0.019872f ,0.1735155f ,0.5604098f ,-0.01987875f ,0.178029f ,0.559062f ,-0.019831501f ,0.184374f ,0.56084853f ,-0.01769175f ,0.1734255f ,0.56084853f ,-0.021732751f ,0.178317f ,0.55978876f ,-0.016944751f ,0.1843785f ,0.56074053f ,-0.021953251f ,0.173421f ,0.56093854f ,-0.017950501f ,0.178326f ,0.55957276f ,-0.022560751f ,0.1721745f ,0.580896f ,-0.015403501f ,0.188343f ,0.5832675f ,-0.0253755f ,0.18833625f ,0.5834588f ,-0.015293251f ,0.183654f ,0.5853578f ,-0.015723001f ,0.18366075f ,0.58518f ,-0.025062751f ,0.17558776f ,0.585414f ,-0.015729751f ,0.17218125f ,0.5807115f ,-0.0251055f ,0.1755945f ,0.58523625f ,-0.025071751f ,0.17988525f ,0.58054274f ,-0.0128295f ,0.17989425f ,0.580266f ,-0.027357752f });
  }
}
private class MFVec2f696 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7853f ,0.163f ,0.7888f ,0.1598f ,0.7854f ,0.1571f ,0.7707f ,0.1575f ,0.7676f ,0.1604f ,0.7706f ,0.1634f ,0.7714f ,0.1739f ,0.7841f ,0.1736f ,0.787f ,0.1731f ,0.9344f ,0.121f ,0.9363f ,0.1341f ,0.9479f ,0.1182f ,0.9502f ,0.1313f ,0.7684f ,0.1736f ,0.7774f ,0.1846f ,0.7801f ,0.1842f ,0.7824f ,0.1828f ,0.7844f ,0.1829f ,0.9351f ,0.111f ,0.9443f ,0.1091f ,0.9372f ,0.109f ,0.9418f ,0.1081f ,0.7705f ,0.1833f ,0.7725f ,0.1831f ,0.781f ,0.1849f ,0.7774f ,0.1856f ,0.7748f ,0.1843f ,0.774f ,0.1852f ,0.9395f ,0.1081f ,0.7849f ,0.1552f ,0.7712f ,0.1555f ,0.7849f ,0.1549f ,0.7712f ,0.1553f ,0.9325f ,0.1343f ,0.9533f ,0.1301f ,0.9319f ,0.1209f ,0.9502f ,0.1172f ,0.9329f ,0.1108f ,0.9464f ,0.108f ,0.9358f ,0.1082f ,0.9393f ,0.1069f ,0.9427f ,0.1067f ,0.9372f ,0.1384f ,0.9506f ,0.1357f });
  }
}
private class MFFloat697 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat698 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32699 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,3,0,-1,0,9,11,-1,5,4,1,-1,1,2,5,-1,3,5,2,-1,2,0,3,-1,9,0,8,-1,8,13,9,-1,2,1,6,-1,6,7,2,-1,6,1,10,-1,10,14,6,-1,1,4,12,-1,12,10,1,-1,0,2,7,-1,7,8,0,-1,25,20,27,-1,27,26,25,-1,18,17,16,-1,19,18,16,-1,15,19,16,-1,32,31,30,-1,32,30,29,-1,28,32,29,-1,11,15,16,-1,16,3,11,-1,3,16,17,-1,17,5,3,-1,5,17,18,-1,18,4,5,-1,4,18,19,-1,19,12,4,-1,24,23,22,-1,22,21,24,-1,20,25,24,-1,24,21,20,-1,9,20,21,-1,21,11,9,-1,11,21,22,-1,22,15,11,-1,15,22,23,-1,23,19,15,-1,19,23,24,-1,24,12,19,-1,12,24,25,-1,25,10,12,-1,10,25,26,-1,26,14,10,-1,14,26,27,-1,27,13,14,-1,13,27,20,-1,20,9,13,-1,14,28,29,-1,29,6,14,-1,6,29,30,-1,30,7,6,-1,7,30,31,-1,31,8,7,-1,8,31,32,-1,32,13,8,-1,13,32,28,-1,28,14,13,-1});
  }
}
private class MFInt32700 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,33,35,6,-1,6,34,33,-1,3,4,5,-1,5,2,3,-1,1,2,9,-1,9,8,1,-1,34,6,11,-1,11,37,34,-1,11,6,38,-1,38,12,11,-1,6,35,39,-1,39,38,6,-1,2,5,10,-1,10,9,2,-1,40,42,41,-1,41,16,40,-1,22,21,20,-1,23,22,20,-1,19,23,20,-1,45,44,43,-1,45,43,25,-1,24,45,25,-1,0,19,20,-1,20,3,0,-1,3,20,21,-1,21,4,3,-1,4,21,22,-1,22,7,4,-1,7,22,23,-1,23,14,7,-1,29,32,31,-1,31,30,29,-1,18,15,29,-1,29,30,18,-1,1,18,30,-1,30,0,1,-1,0,30,31,-1,31,19,0,-1,19,31,32,-1,32,23,19,-1,23,32,29,-1,29,14,23,-1,14,29,15,-1,15,13,14,-1,38,40,16,-1,16,12,38,-1,12,16,41,-1,41,36,12,-1,8,17,18,-1,18,1,8,-1,12,24,25,-1,25,11,12,-1,11,25,43,-1,43,37,11,-1,10,26,27,-1,27,9,10,-1,9,27,28,-1,28,8,9,-1,36,45,24,-1,24,12,36,-1});
  }
}
private class MFVec3f701 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.19387576f ,0.6631875f ,-0.041503504f ,0.171351f ,0.6631875f ,-0.04150125f ,0.18252225f ,0.66453755f ,-0.04487625f ,0.19289926f ,0.6424875f ,-0.042288754f ,0.1726965f ,0.6424875f ,-0.042288754f ,0.182079f ,0.64305f ,-0.045207f ,0.17082901f ,0.68892527f ,-0.037809003f ,0.18290025f ,0.68990403f ,-0.04086f ,0.19413225f ,0.68885106f ,-0.037786502f ,0.19617301f ,0.661185f ,-0.028487252f ,0.16984126f ,0.661185f ,-0.028487252f ,0.19426726f ,0.63992256f ,-0.028509751f ,0.17242876f ,0.6399f ,-0.0285075f ,0.198135f ,0.6869655f ,-0.02761875f ,0.167463f ,0.68697906f ,-0.027625501f ,0.19075051f ,0.63564754f ,-0.030093752f ,0.18910351f ,0.6382125f ,-0.039924003f ,0.1821105f ,0.6386625f ,-0.0419895f ,0.17576775f ,0.63823503f ,-0.040023003f ,0.17557651f ,0.635625f ,-0.030087002f ,0.19398601f ,0.660825f ,-0.025400251f ,0.19212301f ,0.63994503f ,-0.026401501f ,0.18953776f ,0.6367725f ,-0.02700675f ,0.17685676f ,0.63675004f ,-0.027f ,0.174564f ,0.6399f ,-0.026415002f ,0.17201476f ,0.660915f ,-0.025395751f ,0.16994475f ,0.6866483f ,-0.025272002f ,0.1958265f ,0.68663704f ,-0.025267502f ,0.17178525f ,0.6900098f ,-0.029655002f ,0.1735875f ,0.6909728f ,-0.035464503f ,0.18290925f ,0.6918683f ,-0.037914753f ,0.191574f ,0.6909278f ,-0.035563502f ,0.1937565f ,0.69001204f ,-0.029650502f });
  }
}
private class MFVec2f702 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.766f ,0.1014f ,0.7694f ,0.0827f ,0.748f ,0.0813f ,0.7455f ,0.0995f ,0.7415f ,0.0989f ,0.7435f ,0.0798f ,0.9864f ,0.2045f ,0.7455f ,0.0995f ,0.7734f ,0.0512f ,0.7571f ,0.0508f ,0.7525f ,0.0502f ,0.9827f ,0.2362f ,0.9665f ,0.2386f ,0.7694f ,0.0827f ,0.766f ,0.1015f ,0.774f ,0.0829f ,0.9619f ,0.2395f ,0.7782f ,0.0512f ,0.774f ,0.083f ,0.7619f ,0.1052f ,0.7474f ,0.1039f ,0.7446f ,0.1034f ,0.7473f ,0.1038f ,0.7619f ,0.1052f ,0.9712f ,0.2404f ,0.9799f ,0.239f ,0.7566f ,0.0479f ,0.7602f ,0.0485f ,0.7691f ,0.0486f ,0.771f ,0.1015f ,0.771f ,0.1014f ,0.768f ,0.1042f ,0.768f ,0.1042f ,0.9897f ,0.1861f ,0.991f ,0.2053f ,0.9856f ,0.1862f ,0.9665f ,0.2385f ,0.9874f ,0.236f ,0.965f ,0.2069f ,0.9651f ,0.1878f ,0.9604f ,0.2075f ,0.9619f ,0.2395f ,0.9604f ,0.2074f ,0.9836f ,0.239f ,0.98f ,0.239f ,0.9712f ,0.2404f });
  }
}
private class MFFloat703 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat704 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32705 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10,8,6,-1,6,11,10,-1,0,3,5,-1,5,9,0,-1,11,6,4,-1,4,1,11,-1,2,7,3,-1,3,0,2,-1,1,4,7,-1,7,2,1,-1,9,5,8,-1,8,10,9,-1,5,3,7,-1,7,8,5,-1,6,8,7,-1,7,4,6,-1,17,13,1,-1,1,2,17,-1,14,15,26,-1,26,25,14,-1,0,9,15,-1,15,14,0,-1,13,12,11,-1,11,1,13,-1,2,0,14,-1,14,17,2,-1,12,34,36,-1,9,10,16,-1,16,15,9,-1,16,10,11,-1,11,12,16,-1,16,35,37,-1,37,15,16,-1,12,36,35,-1,35,16,12,-1,37,26,15,-1,12,13,23,-1,23,34,12,-1,13,17,24,-1,24,23,13,-1,17,14,25,-1,25,24,17,-1,19,20,21,-1,19,21,22,-1,18,19,22,-1,23,24,20,-1,20,19,23,-1,24,25,21,-1,21,20,24,-1,25,26,22,-1,22,21,25,-1,29,30,31,-1,28,29,31,-1,27,28,31,-1,27,31,32,-1,27,32,33,-1,34,23,19,-1,19,18,34,-1,35,36,30,-1,30,29,35,-1,36,34,31,-1,31,30,36,-1,34,18,32,-1,32,31,34,-1,18,22,33,-1,33,32,18,-1,22,26,27,-1,27,33,22,-1,26,37,28,-1,28,27,26,-1,37,35,29,-1,29,28,37,-1});
  }
}
private class MFInt32706 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,7,6,-1,6,5,4,-1,1,2,9,-1,9,8,1,-1,40,41,7,-1,7,4,40,-1,8,9,11,-1,11,10,8,-1,5,6,39,-1,39,38,5,-1,6,7,41,-1,41,39,6,-1,2,3,11,-1,11,9,2,-1,12,13,8,-1,8,10,12,-1,14,17,44,-1,44,43,14,-1,4,5,17,-1,17,14,4,-1,13,18,1,-1,1,8,13,-1,40,4,14,-1,14,42,40,-1,18,20,19,-1,5,38,45,-1,45,17,5,-1,21,0,1,-1,1,18,21,-1,45,47,46,-1,46,17,45,-1,18,19,23,-1,23,21,18,-1,46,44,17,-1,18,13,24,-1,24,20,18,-1,13,12,25,-1,25,24,13,-1,42,14,43,-1,43,48,42,-1,30,29,28,-1,30,28,27,-1,26,30,27,-1,24,25,29,-1,29,30,24,-1,25,15,28,-1,28,29,25,-1,15,16,27,-1,27,28,15,-1,36,35,34,-1,37,36,34,-1,31,37,34,-1,31,34,33,-1,31,33,32,-1,20,24,30,-1,30,26,20,-1,23,19,35,-1,35,36,23,-1,19,20,34,-1,34,35,19,-1,20,26,33,-1,33,34,20,-1,26,27,32,-1,32,33,26,-1,27,16,31,-1,31,32,27,-1,16,22,37,-1,37,31,16,-1,22,23,36,-1,36,37,22,-1});
  }
}
private class MFVec3f707 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1728855f ,0.62123626f ,-0.0415125f ,0.190647f ,0.62321854f ,-0.04187025f ,0.18057375f ,0.62088305f ,-0.0441315f ,0.17473724f ,0.61820555f ,-0.040914f ,0.18721125f ,0.61671156f ,-0.0415755f ,0.17474625f ,0.618057f ,-0.0332325f ,0.187227f ,0.6165203f ,-0.0326475f ,0.180603f ,0.616176f ,-0.0416115f ,0.180603f ,0.61605227f ,-0.0331785f ,0.17289451f ,0.6210383f ,-0.032436f ,0.18111375f ,0.62049603f ,-0.029583f ,0.19065826f ,0.62309927f ,-0.0323685f ,0.19207351f ,0.6346643f ,-0.0312795f ,0.191889f ,0.6373418f ,-0.0420705f ,0.17333776f ,0.6373418f ,-0.0420705f ,0.17327926f ,0.6346643f ,-0.0312795f ,0.18226801f ,0.6316875f ,-0.029313f ,0.182061f ,0.63799876f ,-0.04486725f ,0.190638f ,0.64592105f ,-0.02863125f ,0.1891215f ,0.6483488f ,-0.0403965f ,0.18162225f ,0.6487673f ,-0.04287825f ,0.17452125f ,0.6483398f ,-0.04026825f ,0.1744425f ,0.64589405f ,-0.028503f ,0.19288126f ,0.64246505f ,-0.04229325f ,0.182061f ,0.643023f ,-0.0452115f ,0.1726785f ,0.64246505f ,-0.04229325f ,0.17241076f ,0.6398663f ,-0.028512001f ,0.1731285f ,0.6403658f ,-0.0273825f ,0.17376976f ,0.6349703f ,-0.02787075f ,0.1825155f ,0.6325763f ,-0.028676251f ,0.19145025f ,0.6350333f ,-0.02783925f ,0.19319625f ,0.6404198f ,-0.027522f ,0.1900755f ,0.6457703f ,-0.02775825f ,0.17515576f ,0.6457455f ,-0.027639f ,0.19424926f ,0.6399f ,-0.028516501f ,0.1823355f ,0.6316403f ,-0.02908125f ,0.1926585f ,0.6341423f ,-0.0288585f ,0.1732095f ,0.6341423f ,-0.0288585f });
  }
}
private class MFVec2f708 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7578f ,0.1276f ,0.7543f ,0.1247f ,0.753f ,0.131f ,0.7531f ,0.1316f ,0.9854f ,0.1598f ,0.9725f ,0.1615f ,0.9734f ,0.1584f ,0.9844f ,0.1569f ,0.7413f ,0.123f ,0.7403f ,0.1293f ,0.7378f ,0.1249f ,0.7401f ,0.1299f ,0.7405f ,0.104f ,0.7443f ,0.1047f ,0.9859f ,0.1809f ,0.7455f ,0.0995f ,0.766f ,0.1015f ,0.9713f ,0.1822f ,0.7589f ,0.1059f ,0.7648f ,0.1066f ,0.766f ,0.1014f ,0.7622f ,0.1091f ,0.7648f ,0.1066f ,0.7644f ,0.1092f ,0.7455f ,0.0995f ,0.7415f ,0.0989f ,0.7664f ,0.0954f ,0.7667f ,0.0954f ,0.7485f ,0.0932f ,0.7449f ,0.0928f ,0.7484f ,0.0932f ,0.7683f ,0.1016f ,0.7686f ,0.0957f ,0.7683f ,0.0956f ,0.7679f ,0.1015f ,0.7671f ,0.1055f ,0.7666f ,0.1084f ,0.7674f ,0.1056f ,0.9687f ,0.1615f ,0.9723f ,0.1564f ,0.9888f ,0.1589f ,0.9852f ,0.1547f ,0.9898f ,0.1809f ,0.9856f ,0.1862f ,0.9651f ,0.1878f ,0.9675f ,0.1796f ,0.9654f ,0.1826f ,0.9654f ,0.1799f ,0.9897f ,0.1861f });
  }
}
private class MFFloat709 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat710 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32711 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1});
  }
}
private class MFInt32712 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1});
  }
}
private class MFVec3f713 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.17999777f ,0.60232055f ,-0.043692753f ,0.17251876f ,0.6031395f ,-0.032409f ,0.18808201f ,0.6048765f ,-0.03229875f ,0.19001701f ,0.61760026f ,-0.032555252f ,0.18999901f ,0.617796f ,-0.04163175f ,0.17289002f ,0.6213128f ,-0.041503504f ,0.19065377f ,0.623295f ,-0.04186575f ,0.17289901f ,0.6211148f ,-0.032427f ,0.19066277f ,0.6231758f ,-0.032361753f ,0.17668127f ,0.6246968f ,-0.041807253f ,0.17669027f ,0.6245775f ,-0.0323055f ,0.18506926f ,0.62424004f ,-0.03231225f ,0.18506026f ,0.62435704f ,-0.041814003f ,0.18058051f ,0.6209595f ,-0.044122502f ,0.18111826f ,0.6205703f ,-0.029571751f ,0.17999777f ,0.6027593f ,-0.029904751f ,0.18599176f ,0.598572f ,-0.032463003f ,0.18277651f ,0.59814006f ,-0.0323145f ,0.17251876f ,0.60284704f ,-0.041501254f ,0.17371577f ,0.600102f ,-0.033108752f ,0.17418377f ,0.59990406f ,-0.040461753f ,0.18811126f ,0.6045728f ,-0.04175775f ,0.18601651f ,0.59832f ,-0.04097025f ,0.18284176f ,0.5979825f ,-0.0409635f });
  }
}
private class MFVec2f714 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9725f ,0.1615f ,0.7578f ,0.1276f ,0.7541f ,0.1444f ,0.9727f ,0.1441f ,0.7543f ,0.1247f ,0.7533f ,0.1302f ,0.9851f ,0.1424f ,0.9854f ,0.1598f ,0.7404f ,0.1285f ,0.7384f ,0.1404f ,0.7513f ,0.1418f ,0.7413f ,0.123f ,0.7378f ,0.1249f ,0.7355f ,0.1424f ,0.7545f ,0.1231f ,0.7416f ,0.1216f ,0.7546f ,0.1229f ,0.7417f ,0.1214f ,0.7496f ,0.1479f ,0.7498f ,0.1481f ,0.9738f ,0.1409f ,0.9839f ,0.1396f ,0.738f ,0.1467f ,0.7381f ,0.1469f ,0.9687f ,0.1616f ,0.9694f ,0.1441f ,0.9888f ,0.1589f ,0.988f ,0.1416f ,0.9725f ,0.165f ,0.9854f ,0.1633f ,0.9728f ,0.1395f ,0.9846f ,0.1375f });
  }
}
private class MFFloat715 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat716 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32717 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1});
  }
}
private class MFInt32718 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1});
  }
}
private class MFVec3f719 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.18792452f ,0.600165f ,-0.032132253f ,0.18794927f ,0.59988606f ,-0.041499f ,0.18726526f ,0.59157676f ,-0.032332502f ,0.18731926f ,0.5913113f ,-0.041112002f ,0.17280002f ,0.5912168f ,-0.031977f ,0.17983352f ,0.5913518f ,-0.030294001f ,0.1728585f ,0.5909288f ,-0.04151475f ,0.17991227f ,0.59095806f ,-0.04321125f ,0.18610427f ,0.5849618f ,-0.03273975f ,0.18616277f ,0.58472776f ,-0.04043025f ,0.17261551f ,0.58423054f ,-0.03285f ,0.17923501f ,0.58430254f ,-0.031142252f ,0.17267402f ,0.5840078f ,-0.04021425f ,0.17932051f ,0.58397627f ,-0.041976f ,0.18661952f ,0.5834565f ,-0.03654675f ,0.17405327f ,0.5824328f ,-0.036553502f ,0.17969401f ,0.5818298f ,-0.03651075f ,0.18641926f ,0.58382106f ,-0.034434002f ,0.17387551f ,0.5827343f ,-0.038349003f ,0.17995276f ,0.5824643f ,-0.0337095f ,0.18645751f ,0.5836725f ,-0.038562752f ,0.17384401f ,0.5828603f ,-0.034683753f ,0.18001576f ,0.58221227f ,-0.039154503f ,0.17257501f ,0.6030968f ,-0.03242025f ,0.18816526f ,0.6045345f ,-0.04177125f ,0.18813601f ,0.60483605f ,-0.03231f ,0.18346277f ,0.6063705f ,-0.032724f ,0.18346277f ,0.6060893f ,-0.041463003f ,0.17563276f ,0.6065595f ,-0.03273075f ,0.17257501f ,0.6028043f ,-0.0415125f ,0.17563276f ,0.6062783f ,-0.041469753f ,0.18009001f ,0.60272104f ,-0.029918252f ,0.18009001f ,0.6022823f ,-0.043704003f });
  }
}
private class MFVec2f720 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7505f ,0.1465f ,0.7541f ,0.1444f ,0.7513f ,0.1418f ,0.7384f ,0.1404f ,0.7355f ,0.1424f ,0.7377f ,0.1451f ,0.7372f ,0.1554f ,0.7483f ,0.1563f ,0.7507f ,0.1564f ,0.9726f ,0.1318f ,0.9727f ,0.1441f ,0.9847f ,0.1302f ,0.9851f ,0.1424f ,0.7347f ,0.1548f ,0.7409f ,0.1641f ,0.7434f ,0.1641f ,0.7455f ,0.1632f ,0.7469f ,0.164f ,0.9746f ,0.124f ,0.9828f ,0.1229f ,0.9766f ,0.1225f ,0.9807f ,0.1219f ,0.7351f ,0.1625f ,0.7369f ,0.1626f ,0.7443f ,0.165f ,0.7408f ,0.1649f ,0.7387f ,0.1637f ,0.7379f ,0.1643f ,0.9788f ,0.1219f ,0.7512f ,0.1402f ,0.7392f ,0.1389f ,0.7512f ,0.14f ,0.7393f ,0.1388f ,0.9694f ,0.1441f ,0.988f ,0.1416f ,0.9705f ,0.1317f ,0.9868f ,0.1295f ,0.9727f ,0.1237f ,0.9848f ,0.1221f ,0.9756f ,0.1218f ,0.9787f ,0.1209f ,0.9817f ,0.1209f ,0.973f ,0.1475f ,0.9849f ,0.146f });
  }
}
private class MFFloat721 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat722 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32723 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1});
  }
}
private class MFInt32724 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1});
  }
}
private class MFVec3f725 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15075f ,1.21104f ,-0.033234753f ,-0.1526175f ,1.2199343f ,-0.012728251f ,-0.14436f ,1.2125138f ,0.0131692495f ,-0.14267251f ,1.1677725f ,0.01105425f ,-0.14166f ,1.1716201f ,-0.01659375f ,-0.114435f ,1.217439f ,0.026061753f ,-0.1260225f ,1.2309526f ,-0.014994f ,-0.1328175f ,1.152675f ,-0.026640002f ,-0.137205f ,1.152675f ,0.018366752f ,-0.1230975f ,1.2159855f ,-0.051855754f ,-0.035691753f ,1.222902f ,-0.0180225f ,-0.035691753f ,1.2154658f ,-0.034994252f ,-0.035691753f ,1.1767951f ,-0.019584f ,-0.035691753f ,1.1773801f ,0.0003082502f ,-0.035691753f ,1.2145185f ,0.0046170005f });
  }
}
private class MFVec2f726 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1911f ,0.4797f ,0.171f ,0.4832f ,0.1497f ,0.4806f ,0.1519f ,0.4334f ,0.1831f ,0.4416f ,0.1474f ,0.4856f ,0.1708f ,0.4854f ,0.1784f ,0.4249f ,0.1538f ,0.4251f ,0.1963f ,0.4863f ,0.19f ,0.5091f ,0.1847f ,0.499f ,0.172f ,0.4382f ,0.1568f ,0.4457f ,0.1409f ,0.4926f });
  }
}
private class MFFloat727 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat728 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32729 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,9,3,-1,7,8,1,-1,1,5,7,-1,6,2,0,-1,0,8,6,-1,0,1,8,-1,9,6,8,-1,8,7,9,-1,4,10,11,-1,11,5,4,-1,5,11,12,-1,12,7,5,-1,7,12,13,-1,13,9,7,-1,9,13,14,-1,14,3,9,-1,3,14,10,-1,10,4,3,-1,10,15,11,-1,11,15,12,-1,12,15,13,-1,13,15,14,-1,14,15,10,-1});
  }
}
private class MFInt32730 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,8,3,-1,9,7,1,-1,1,5,9,-1,6,2,0,-1,0,7,6,-1,0,1,7,-1,12,10,11,-1,11,13,12,-1,4,14,15,-1,15,5,4,-1,5,15,16,-1,16,9,5,-1,13,16,17,-1,17,12,13,-1,8,17,18,-1,18,3,8,-1,3,18,14,-1,14,4,3,-1,14,19,15,-1,15,19,16,-1,16,19,17,-1,17,19,18,-1,18,19,14,-1});
  }
}
private class MFVec3f731 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.16647752f ,1.2248101f ,-0.014994f ,-0.15702751f ,1.2064321f ,-0.051867f ,-0.15745501f ,1.2078114f ,0.0235305f ,-0.11443051f ,1.2174525f ,0.026073001f ,-0.1260315f ,1.230975f ,-0.014994f ,-0.12311101f ,1.2159901f ,-0.0518445f ,-0.14170726f ,1.156455f ,0.018378f ,-0.13281976f ,1.152675f ,-0.02664225f ,-0.14155877f ,1.156275f ,-0.0266175f ,-0.1372095f ,1.152675f ,0.018355502f ,-0.09510751f ,1.2234826f ,-0.014499f ,-0.08813251f ,1.2109839f ,-0.038592f ,-0.10600876f ,1.1557575f ,-0.023571001f ,-0.10604026f ,1.1559376f ,0.013203f ,-0.088965006f ,1.21509f ,0.016263f ,-0.087165006f ,1.1914089f ,-0.00985725f });
  }
}
private class MFVec2f732 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1715f ,0.4655f ,0.1797f ,0.4646f ,0.1569f ,0.4642f ,0.1474f ,0.4856f ,0.1708f ,0.4854f ,0.1963f ,0.4863f ,0.1544f ,0.4288f ,0.1782f ,0.4286f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.1544f ,0.4288f ,0.1782f ,0.4286f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.1703f ,0.4865f ,0.1895f ,0.487f ,0.1761f ,0.4271f ,0.1552f ,0.4287f ,0.1491f ,0.4835f ,0.1671f ,0.4618f });
  }
}
private class MFFloat733 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat734 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32735 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,41,40,-1,40,25,26,-1,27,42,41,-1,41,26,27,-1,28,43,42,-1,42,27,28,-1,29,44,43,-1,43,28,29,-1,25,40,44,-1,44,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1});
  }
}
private class MFInt32736 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,55,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,49,-1,36,49,48,-1,37,36,48,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,38,57,56,-1,56,39,38,-1,40,59,58,-1,58,50,40,-1,41,60,59,-1,59,40,41,-1,42,61,60,-1,60,41,42,-1,39,56,61,-1,61,42,39,-1,43,38,39,-1,39,44,43,-1,45,40,51,-1,51,52,45,-1,46,41,40,-1,40,45,46,-1,47,42,41,-1,41,46,47,-1,44,39,42,-1,42,47,44,-1,34,43,44,-1,44,33,34,-1,35,45,53,-1,53,54,35,-1,36,46,45,-1,45,35,36,-1,37,47,46,-1,46,36,37,-1,33,44,47,-1,47,37,33,-1});
  }
}
private class MFVec3f737 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19089001f ,1.2183076f ,-0.041067f ,-0.2169f ,1.21806f ,-0.0025087502f ,-0.18825752f ,1.21833f ,0.0341505f ,-0.14456251f ,1.2187126f ,0.018234001f ,-0.14618476f ,1.21869f ,-0.028242001f ,-0.19579501f ,1.1897933f ,-0.055242002f ,-0.23170501f ,1.1894739f ,-0.0019845f ,-0.19217251f ,1.1898248f ,0.0486405f ,-0.131805f ,1.1903626f ,0.026658002f ,-0.134055f ,1.1903423f ,-0.0375345f ,-0.19530001f ,1.1332351f ,-0.055242002f ,-0.23121001f ,1.13292f ,-0.0019845f ,-0.19165501f ,1.13328f ,0.0486405f ,-0.13131002f ,1.13382f ,0.026658002f ,-0.13356002f ,1.1337975f ,-0.0375345f ,-0.19615501f ,1.1090475f ,-0.058212f ,-0.23415752f ,1.10871f ,-0.00187425f ,-0.19233002f ,1.1090926f ,0.051678002f ,-0.12847501f ,1.109655f ,0.028435502f ,-0.13083751f ,1.1096326f ,-0.039492004f ,-0.18460126f ,1.1506951f ,-0.046894502f ,-0.21206251f ,1.15047f ,-0.01348875f ,-0.19784251f ,1.1505826f ,0.0333855f ,-0.16160627f ,1.1508976f ,0.028953003f ,-0.15342526f ,1.1509876f ,-0.020668501f ,-0.18501076f ,1.0200375f ,-0.038569503f ,-0.21352501f ,1.01979f ,-0.011772f ,-0.19876501f ,1.0199026f ,0.0258255f ,-0.16112702f ,1.0202401f ,0.0222705f ,-0.15262876f ,1.0203301f ,-0.017532f ,-0.18509851f ,0.92880005f ,-0.037264504f ,-0.21255751f ,0.92857504f ,-0.011481751f ,-0.19833751f ,0.92880005f ,0.024700502f ,-0.1621035f ,0.92902505f ,0.0212805f ,-0.15392026f ,0.92925006f ,-0.017025752f ,-0.18387002f ,0.91642505f ,-0.023483252f ,-0.19995752f ,0.91642505f ,-0.00836775f ,-0.19163251f ,0.91642505f ,0.012843001f ,-0.17039476f ,0.91665006f ,0.010836001f ,-0.16559777f ,0.91665006f ,-0.011616751f ,-0.18460126f ,1.1506951f ,-0.046894502f ,-0.21206251f ,1.15047f ,-0.01348875f ,-0.19784251f ,1.1505826f ,0.0333855f ,-0.16160627f ,1.1508976f ,0.028953003f ,-0.15342526f ,1.1509876f ,-0.020668501f });
  }
}
private class MFVec2f738 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2986f ,0.2114f ,0.2726f ,0.2114f ,0.3201f ,0.2114f ,0.3415f ,0.2114f ,0.2466f ,0.2114f ,0.2979f ,0.2417f ,0.2726f ,0.2417f ,0.3197f ,0.2417f ,0.3418f ,0.2417f ,0.2473f ,0.2417f ,0.2979f ,0.3018f ,0.2726f ,0.3018f ,0.3197f ,0.3018f ,0.3418f ,0.3018f ,0.2473f ,0.3018f ,0.2978f ,0.3276f ,0.2726f ,0.3276f ,0.3197f ,0.3276f ,0.3419f ,0.3276f ,0.2474f ,0.3276f ,0.2932f ,0.2834f ,0.2689f ,0.2834f ,0.316f ,0.2834f ,0.3322f ,0.2834f ,0.245f ,0.2834f ,0.2251f ,0.2114f ,0.2255f ,0.2417f ,0.2255f ,0.2417f ,0.2255f ,0.3018f ,0.2255f ,0.3018f ,0.2255f ,0.3276f ,0.2255f ,0.3276f ,0.2159f ,0.2834f ,0.9467f ,0.4943f ,0.9572f ,0.4943f ,0.9099f ,0.4943f ,0.9193f ,0.4943f ,0.9332f ,0.4943f ,0.9567f ,0.4691f ,0.9455f ,0.4691f ,0.9105f ,0.4691f ,0.9205f ,0.4691f ,0.9332f ,0.4691f ,0.9567f ,0.4913f ,0.9458f ,0.4913f ,0.9102f ,0.4913f ,0.9203f ,0.4913f ,0.9334f ,0.4913f ,0.8898f ,0.4943f ,0.9003f ,0.4943f ,0.8997f ,0.4691f ,0.8997f ,0.4691f ,0.8998f ,0.4913f ,0.8998f ,0.4913f ,0.9003f ,0.4943f ,0.3481f ,0.2114f ,0.9448f ,0.4374f ,0.9561f ,0.4374f ,0.8991f ,0.4374f ,0.9117f ,0.4374f ,0.9198f ,0.4374f ,0.9341f ,0.4374f });
  }
}
private class MFFloat739 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat740 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32741 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
  }
}
private class MFInt32742 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,4,2,1,-1,0,4,1,-1,4,6,5,-1,5,3,4,-1,3,5,7,-1,7,2,3,-1,2,7,8,-1,8,1,2,-1,1,8,9,-1,9,0,1,-1,0,9,6,-1,6,4,0,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,16,-1,16,11,14,-1,24,23,22,-1,24,22,21,-1,20,24,21,-1,22,15,16,-1,16,21,22,-1,23,17,15,-1,15,22,23,-1,24,18,17,-1,17,23,24,-1,20,19,18,-1,18,24,20,-1,21,16,19,-1,19,20,21,-1});
  }
}
private class MFVec3f743 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18657f ,0.9356558f ,-0.0315495f ,-0.20772f ,0.9354735f ,-0.011452501f ,-0.19568025f ,0.93557924f ,0.017770499f ,-0.16709624f ,0.9358245f ,0.015725251f ,-0.1614645f ,0.9358718f ,-0.014751001f ,-0.184977f ,0.909792f ,-0.042192f ,-0.2148525f ,0.90953773f ,-0.015239251f ,-0.1978515f ,0.909684f ,0.030933002f ,-0.157455f ,0.9100305f ,0.0277155f ,-0.14949f ,0.910098f ,-0.020452501f ,-0.1847205f ,0.85005003f ,-0.041787002f ,-0.21663f ,0.8497575f ,-0.015135751f ,-0.199305f ,0.8629875f ,0.030595502f ,-0.1561725f ,0.86334753f ,0.027400503f ,-0.146835f ,0.850365f ,-0.020297252f ,-0.1830645f ,0.7327575f ,-0.037962f ,-0.206325f ,0.732555f ,-0.008507251f ,-0.19308825f ,0.73269004f ,0.028345501f ,-0.1616355f ,0.73296f ,0.025353f ,-0.15543f ,0.733005f ,-0.013342501f ,-0.1819395f ,0.71874f ,-0.02555325f ,-0.197829f ,0.718605f ,-0.0054405f ,-0.18878625f ,0.7186725f ,0.017838f ,-0.1673055f ,0.7188525f ,0.015788252f ,-0.16307549f ,0.71889746f ,-0.00874125f });
  }
}
private class MFVec2f744 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8857f ,0.572f ,0.9344f ,0.572f ,0.9377f ,0.5719f ,0.8909f ,0.5718f ,0.8588f ,0.5719f ,0.8849f ,0.5578f ,0.8418f ,0.558f ,0.9588f ,0.5579f ,0.9536f ,0.5581f ,0.8765f ,0.5581f ,0.885f ,0.5257f ,0.8424f ,0.5258f ,0.9582f ,0.5328f ,0.9531f ,0.533f ,0.8768f ,0.526f ,0.8957f ,0.4625f ,0.8485f ,0.4627f ,0.9546f ,0.4626f ,0.9498f ,0.4628f ,0.8879f ,0.4628f ,0.8953f ,0.4552f ,0.8684f ,0.4551f ,0.9006f ,0.455f ,0.9378f ,0.4551f ,0.9345f ,0.4552f });
  }
}
private class MFFloat745 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat746 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32747 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,11,12,-1,12,1,0,-1,1,12,13,-1,13,2,1,-1,2,13,10,-1,10,17,2,-1,3,16,8,-1,8,4,3,-1,5,20,21,-1,21,19,5,-1,6,18,15,-1,15,14,6,-1,6,14,9,-1,9,7,6,-1,7,9,11,-1,11,0,7,-1,15,18,5,-1,5,19,15,-1,10,16,3,-1,3,17,10,-1,4,8,21,-1,21,20,4,-1,0,1,22,-1,1,2,22,-1,2,17,22,-1,17,3,22,-1,3,4,22,-1,4,20,22,-1,20,5,22,-1,5,18,22,-1,18,6,22,-1,6,7,22,-1,7,0,22,-1,16,10,24,-1,24,23,16,-1,10,13,25,-1,25,24,10,-1,13,12,26,-1,26,25,13,-1,12,11,27,-1,27,26,12,-1,11,9,28,-1,28,27,11,-1,9,14,29,-1,29,28,9,-1,14,15,30,-1,30,29,14,-1,15,19,31,-1,31,30,15,-1,19,21,32,-1,32,31,19,-1,21,8,33,-1,33,32,21,-1,8,16,23,-1,23,33,8,-1,23,24,34,-1,24,25,34,-1,25,26,34,-1,26,27,34,-1,27,28,34,-1,28,29,34,-1,29,30,34,-1,30,31,34,-1,31,32,34,-1,32,33,34,-1,33,23,34,-1});
  }
}
private class MFInt32748 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,0,-1,0,1,2,-1,1,0,4,-1,4,5,1,-1,5,4,7,-1,7,6,5,-1,10,11,8,-1,8,9,10,-1,12,37,38,-1,38,15,12,-1,17,18,19,-1,19,16,17,-1,17,16,20,-1,20,21,17,-1,21,20,36,-1,36,35,21,-1,19,18,12,-1,12,15,19,-1,7,11,10,-1,10,6,7,-1,9,8,14,-1,14,13,9,-1,2,1,22,-1,1,5,22,-1,5,6,22,-1,6,10,22,-1,10,9,22,-1,9,13,22,-1,37,12,39,-1,12,18,39,-1,18,17,39,-1,17,21,39,-1,21,35,39,-1,11,7,23,-1,23,24,11,-1,7,4,25,-1,25,23,7,-1,4,0,26,-1,26,25,4,-1,0,3,27,-1,27,26,0,-1,36,20,28,-1,28,40,36,-1,20,16,29,-1,29,28,20,-1,16,19,30,-1,30,29,16,-1,19,15,31,-1,31,30,19,-1,15,38,41,-1,41,31,15,-1,14,8,33,-1,33,32,14,-1,8,11,24,-1,24,33,8,-1,24,23,34,-1,23,25,34,-1,25,26,34,-1,26,27,34,-1,40,28,42,-1,28,29,42,-1,29,30,42,-1,30,31,42,-1,31,41,42,-1,32,33,34,-1,33,24,34,-1});
  }
}
private class MFVec3f749 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1831905f ,0.7267612f ,-0.027747001f ,-0.193068f ,0.7264463f ,-0.022797002f ,-0.196893f ,0.7266353f ,-0.009792f ,-0.19389375f ,0.7269952f ,0.011128501f ,-0.1882755f ,0.7269345f ,0.019773f ,-0.16816725f ,0.7266622f ,0.011493001f ,-0.1664685f ,0.7263405f ,-0.00989775f ,-0.17167725f ,0.726246f ,-0.022581f ,-0.19001025f ,0.70650226f ,0.0249705f ,-0.17105176f ,0.705168f ,-0.0273285f ,-0.19626075f ,0.70853627f ,0.0023085002f ,-0.182646f ,0.705555f ,-0.033957f ,-0.194598f ,0.70517474f ,-0.02731725f ,-0.19695374f ,0.708966f ,-0.012406501f ,-0.16744725f ,0.70896375f ,-0.012375f ,-0.16728525f ,0.7085385f ,0.00251325f ,-0.19369125f ,0.706059f ,0.01429875f ,-0.19669725f ,0.7265835f ,0.00016650015f ,-0.166464f ,0.7265003f ,0.0003420001f ,-0.16873875f ,0.7060568f ,0.014325751f ,-0.174825f ,0.72682875f ,0.0193005f ,-0.17435025f ,0.7064887f ,0.024205502f ,-0.1829115f ,0.73154926f ,-0.0052155f ,-0.19068976f ,0.699525f ,0.013704751f ,-0.193167f ,0.702018f ,0.0022230002f ,-0.193842f ,0.7024545f ,-0.01360575f ,-0.19170675f ,0.6986925f ,-0.0281295f ,-0.18247275f ,0.6986025f ,-0.031752f ,-0.17380124f ,0.6986925f ,-0.0282645f ,-0.1705365f ,0.70245224f ,-0.01343925f ,-0.17037675f ,0.7020225f ,0.0026505f ,-0.170532f ,0.699525f ,0.013785751f ,-0.17620425f ,0.69993f ,0.021910502f ,-0.18567675f ,0.69993f ,0.022495503f ,-0.18069525f ,0.6957225f ,-0.00667575f });
  }
}
private class MFVec2f750 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7729f ,0.0334f ,0.7695f ,0.0151f ,0.7598f ,0.0161f ,0.7624f ,0.0345f ,0.791f ,0.0281f ,0.7896f ,0.0131f ,0.8111f ,0.0113f ,0.813f ,0.0266f ,0.8476f ,0.0256f ,0.8461f ,0.0079f ,0.8312f ,0.0091f ,0.8327f ,0.0273f ,0.9162f ,0.2899f ,0.8453f ,0.0081f ,0.8466f ,0.0257f ,0.9122f ,0.2724f ,0.9531f ,0.2644f ,0.9573f ,0.2786f ,0.936f ,0.2844f ,0.9315f ,0.2698f ,0.9706f ,0.2558f ,0.9766f ,0.2733f ,0.8032f ,0.0047f ,0.8134f ,0.033f ,0.8325f ,0.0338f ,0.792f ,0.0345f ,0.7756f ,0.0396f ,0.7675f ,0.0404f ,0.9666f ,0.2503f ,0.9509f ,0.2584f ,0.9297f ,0.2636f ,0.9113f ,0.266f ,0.8439f ,0.0324f ,0.8447f ,0.0323f ,0.8081f ,0.0397f ,0.986f ,0.2708f ,0.9803f ,0.2531f ,0.9032f ,0.2936f ,0.8989f ,0.2764f ,0.9452f ,0.2896f ,0.9743f ,0.2482f ,0.9004f ,0.2693f ,0.9343f ,0.2559f });
  }
}
private class MFFloat751 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat752 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32753 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,0,3,-1,3,5,6,-1,5,3,2,-1,2,8,5,-1,1,7,4,-1,2,7,8,-1,7,2,4,-1,14,15,16,-1,16,17,14,-1,9,10,13,-1,10,11,12,-1,12,13,10,-1,1,4,10,-1,10,9,1,-1,4,2,11,-1,11,10,4,-1,2,3,12,-1,12,11,2,-1,3,0,13,-1,13,12,3,-1,6,5,15,-1,15,14,6,-1,5,8,16,-1,16,15,5,-1,8,7,17,-1,17,16,8,-1,18,25,24,-1,24,23,22,-1,18,24,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,6,18,19,-1,19,0,6,-1,0,19,20,-1,20,13,0,-1,13,20,21,-1,21,9,13,-1,9,21,22,-1,22,1,9,-1,1,22,23,-1,23,7,1,-1,7,23,24,-1,24,17,7,-1,17,24,25,-1,25,14,17,-1,14,25,18,-1,18,6,14,-1});
  }
}
private class MFInt32754 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,7,6,8,-1,18,6,19,-1,6,18,8,-1,21,22,23,-1,23,12,21,-1,9,15,10,-1,15,16,17,-1,17,10,15,-1,7,8,24,-1,24,20,7,-1,8,18,25,-1,25,24,8,-1,4,2,17,-1,17,16,4,-1,2,1,10,-1,10,17,2,-1,0,3,13,-1,13,11,0,-1,3,5,14,-1,14,13,3,-1,19,6,12,-1,12,23,19,-1,26,33,32,-1,32,31,30,-1,26,32,30,-1,30,29,28,-1,26,30,28,-1,27,26,28,-1,0,26,27,-1,27,1,0,-1,1,27,28,-1,28,10,1,-1,10,28,29,-1,29,9,10,-1,20,29,30,-1,30,7,20,-1,7,30,31,-1,31,6,7,-1,6,31,32,-1,32,12,6,-1,12,32,33,-1,33,21,12,-1,11,33,26,-1,26,0,11,-1});
  }
}
private class MFVec3f755 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19683677f ,0.6884955f ,0.017084252f ,-0.16659226f ,0.6884955f ,0.017084252f ,-0.17199226f ,0.6948585f ,0.033036754f ,-0.19105427f ,0.6948383f ,0.034593754f ,-0.16951501f ,0.69243526f ,0.027677251f ,-0.19006427f ,0.7063628f ,0.024972752f ,-0.19374752f ,0.7059195f ,0.014298751f ,-0.16879275f ,0.70591724f ,0.014323501f ,-0.17440426f ,0.70634925f ,0.024201002f ,-0.17003477f ,0.68456703f ,0.018283501f ,-0.16934626f ,0.6850215f ,0.024734251f ,-0.17313077f ,0.689436f ,0.032796003f ,-0.18909001f ,0.69117075f ,0.03430575f ,-0.193725f ,0.684279f ,0.017797502f ,-0.19056602f ,0.71277976f ,0.013095001f ,-0.18562502f ,0.7130925f ,0.021753002f ,-0.17638426f ,0.7130858f ,0.021181501f ,-0.17079076f ,0.71273476f ,0.0131737515f ,-0.19244926f ,0.705258f ,0.012624751f ,-0.19541027f ,0.688554f ,0.0152865015f ,-0.19304101f ,0.68534327f ,0.01582425f ,-0.17066026f ,0.68562f ,0.016308f ,-0.16799626f ,0.6886395f ,0.015264001f ,-0.17011127f ,0.705384f ,0.012622501f ,-0.17179877f ,0.71114624f ,0.011655001f ,-0.18969977f ,0.71118677f ,0.011580751f });
  }
}
private class MFVec2f756 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8327f ,0.0273f ,0.8381f ,0.0441f ,0.8625f ,0.0344f ,0.8476f ,0.0256f ,0.8625f ,0.0359f ,0.8466f ,0.0257f ,0.9122f ,0.2724f ,0.904f ,0.2568f ,0.8948f ,0.2599f ,0.8401f ,0.0478f ,0.8395f ,0.0482f ,0.8319f ,0.0206f ,0.9141f ,0.2788f ,0.844f ,0.0192f ,0.8432f ,0.0193f ,0.8491f ,0.0466f ,0.8611f ,0.0409f ,0.8611f ,0.0397f ,0.8814f ,0.2691f ,0.8989f ,0.2764f ,0.9014f ,0.2535f ,0.9142f ,0.2789f ,0.9026f ,0.2823f ,0.9033f ,0.2821f ,0.8928f ,0.2563f ,0.8819f ,0.264f ,0.8327f ,0.0273f ,0.8381f ,0.0441f ,0.8395f ,0.0482f ,0.8401f ,0.0478f ,0.904f ,0.2568f ,0.9122f ,0.2724f ,0.9141f ,0.2788f ,0.9142f ,0.2789f });
  }
}
private class MFFloat757 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat758 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32759 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,8,9,-1,9,2,1,-1,8,1,0,-1,0,10,8,-1,2,9,6,-1,6,3,2,-1,0,4,7,-1,7,10,0,-1,5,3,6,-1,25,21,22,-1,24,25,22,-1,23,24,22,-1,19,20,17,-1,17,18,19,-1,13,14,11,-1,11,12,13,-1,14,15,16,-1,16,11,14,-1,3,5,12,-1,12,11,3,-1,5,4,13,-1,13,12,5,-1,4,0,14,-1,14,13,4,-1,0,1,15,-1,15,14,0,-1,1,2,16,-1,16,15,1,-1,2,3,11,-1,11,16,2,-1,7,4,18,-1,18,17,7,-1,4,5,19,-1,19,18,4,-1,5,6,20,-1,20,19,5,-1,6,7,17,-1,17,20,6,-1,10,7,22,-1,22,21,10,-1,7,6,23,-1,23,22,7,-1,6,9,24,-1,24,23,6,-1,9,8,25,-1,25,24,9,-1,8,10,21,-1,21,25,8,-1});
  }
}
private class MFInt32760 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,27,26,28,-1,28,4,27,-1,3,2,7,-1,7,6,3,-1,28,29,30,-1,30,4,28,-1,10,6,7,-1,13,14,15,-1,12,13,15,-1,11,12,15,-1,16,17,18,-1,18,19,16,-1,20,21,22,-1,22,23,20,-1,21,24,25,-1,25,22,21,-1,6,10,23,-1,23,22,6,-1,10,8,20,-1,20,23,10,-1,8,5,21,-1,21,20,8,-1,5,0,24,-1,24,21,5,-1,0,3,25,-1,25,24,0,-1,3,6,22,-1,22,25,3,-1,30,29,35,-1,35,34,30,-1,8,10,16,-1,16,19,8,-1,10,7,17,-1,17,16,10,-1,7,9,18,-1,18,17,7,-1,4,30,33,-1,33,32,4,-1,9,7,11,-1,11,15,9,-1,7,2,12,-1,12,11,7,-1,2,1,13,-1,13,12,2,-1,27,4,32,-1,32,31,27,-1});
  }
}
private class MFVec3f761 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.16719525f ,0.6742823f ,0.03437775f ,-0.17334f ,0.6787328f ,0.04048425f ,-0.1887165f ,0.6812753f ,0.042723f ,-0.196245f ,0.6722078f ,0.02954475f ,-0.1719f ,0.66453755f ,0.02409975f ,-0.1985535f ,0.670122f ,0.025339501f ,-0.1967805f ,0.68851805f ,0.01707975f ,-0.16653825f ,0.68851805f ,0.01707975f ,-0.17193599f ,0.694881f ,0.0330345f ,-0.19100025f ,0.6948608f ,0.03458925f ,-0.169461f ,0.6924578f ,0.02767275f ,-0.188532f ,0.66602254f ,0.032742f ,-0.18807974f ,0.66456f ,0.03101175f ,-0.17463374f ,0.662985f ,0.0287775f ,-0.169965f ,0.66602254f ,0.034326002f ,-0.175401f ,0.6710625f ,0.040788002f ,-0.1847835f ,0.67381877f ,0.04385475f ,-0.17063099f ,0.6868958f ,0.013740749f ,-0.17469674f ,0.6639525f ,0.01973025f ,-0.193878f ,0.66888005f ,0.020241f ,-0.193266f ,0.6868913f ,0.013734f ,-0.1713105f ,0.6944108f ,0.02554875f ,-0.1687725f ,0.6921765f ,0.0197415f ,-0.19174725f ,0.6916703f ,0.019944001f ,-0.18858825f ,0.6964133f ,0.031797f ,-0.1760805f ,0.6964178f ,0.030825f });
  }
}
private class MFVec2f762 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8819f ,0.0483f ,0.8625f ,0.0359f ,0.8625f ,0.0344f ,0.8786f ,0.0507f ,0.8948f ,0.2599f ,0.867f ,0.0598f ,0.857f ,0.0621f ,0.8381f ,0.0441f ,0.8533f ,0.0697f ,0.8381f ,0.0441f ,0.8503f ,0.0646f ,0.8419f ,0.0407f ,0.8588f ,0.0334f ,0.8588f ,0.0347f ,0.8467f ,0.0405f ,0.8415f ,0.0402f ,0.8445f ,0.0658f ,0.8331f ,0.0451f ,0.8331f ,0.0451f ,0.8468f ,0.0705f ,0.8593f ,0.0711f ,0.8712f ,0.0644f ,0.8626f ,0.068f ,0.8607f ,0.0696f ,0.877f ,0.0609f ,0.8798f ,0.0581f ,0.8632f ,0.2548f ,0.8814f ,0.2691f ,0.8729f ,0.2464f ,0.8847f ,0.2342f ,0.904f ,0.2568f ,0.8853f ,0.2697f ,0.8962f ,0.2618f ,0.9014f ,0.2613f ,0.9088f ,0.2549f ,0.8909f ,0.2323f });
  }
}
private class MFFloat763 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat764 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32765 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,0,-1,7,3,14,-1,14,13,7,-1,5,0,17,-1,17,10,5,-1,4,5,10,-1,10,9,4,-1,3,4,9,-1,9,14,3,-1,0,1,19,-1,19,17,0,-1,1,7,13,-1,13,19,1,-1,1,0,2,-1,0,6,8,-1,8,2,0,-1,9,10,11,-1,11,12,9,-1,13,14,15,-1,15,16,13,-1,10,17,18,-1,18,11,10,-1,19,13,16,-1,16,20,19,-1,17,19,20,-1,20,18,17,-1,14,9,12,-1,12,15,14,-1,15,12,20,-1,20,16,15,-1,11,18,20,-1,20,12,11,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,8,6,22,-1,22,21,8,-1,6,5,23,-1,23,22,6,-1,5,4,24,-1,24,23,5,-1,4,3,25,-1,25,24,4,-1,3,7,26,-1,26,25,3,-1,27,30,31,-1,31,32,27,-1,7,1,28,-1,28,27,7,-1,1,2,29,-1,29,28,1,-1,2,8,30,-1,30,29,2,-1,8,21,31,-1,31,30,8,-1,21,26,32,-1,32,31,21,-1,26,7,27,-1,27,32,26,-1});
  }
}
private class MFInt32766 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,36,33,34,-1,34,35,36,-1,0,2,7,-1,7,8,0,-1,10,0,8,-1,8,9,10,-1,33,38,37,-1,37,34,33,-1,2,11,12,-1,12,7,2,-1,39,36,35,-1,35,40,39,-1,11,2,13,-1,2,1,14,-1,14,13,2,-1,9,8,15,-1,15,16,9,-1,5,4,17,-1,17,18,5,-1,8,7,19,-1,19,15,8,-1,12,5,18,-1,18,20,12,-1,7,12,20,-1,20,19,7,-1,4,9,16,-1,16,17,4,-1,17,16,20,-1,20,18,17,-1,15,19,20,-1,20,16,15,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,14,1,22,-1,22,21,14,-1,1,0,23,-1,23,22,1,-1,0,10,24,-1,24,23,0,-1,10,3,25,-1,25,24,10,-1,33,36,42,-1,42,41,33,-1,27,30,31,-1,31,32,27,-1,6,11,28,-1,28,27,6,-1,11,13,29,-1,29,28,11,-1,13,14,30,-1,30,29,13,-1,14,21,31,-1,31,30,14,-1,21,26,32,-1,32,31,21,-1,42,36,43,-1,43,44,42,-1});
  }
}
private class MFVec3f767 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19523251f ,0.669213f ,0.031689003f ,-0.18563627f ,0.662184f ,0.027389253f ,-0.19706176f ,0.6648435f ,0.027294751f ,-0.16717726f ,0.6742665f ,0.034380004f ,-0.173322f ,0.678717f ,0.040486503f ,-0.18869627f ,0.6812595f ,0.042725254f ,-0.19622476f ,0.67219204f ,0.029547002f ,-0.17188202f ,0.6645195f ,0.024102f ,-0.19853552f ,0.6701063f ,0.025341751f ,-0.17585102f ,0.65888774f ,0.053905502f ,-0.18762976f ,0.663687f ,0.052389003f ,-0.18504901f ,0.65385675f ,0.056967754f ,-0.17816852f ,0.65117025f ,0.055858504f ,-0.17504327f ,0.6468525f ,0.040709253f ,-0.16915277f ,0.65403f ,0.049907252f ,-0.17235902f ,0.6506775f ,0.051819753f ,-0.17638202f ,0.6451425f ,0.044392504f ,-0.19280027f ,0.654795f ,0.042043503f ,-0.18974927f ,0.6473925f ,0.04822425f ,-0.18368101f ,0.64764f ,0.040054504f ,-0.18298127f ,0.644535f ,0.046896752f ,-0.19048502f ,0.67512155f ,0.022905001f ,-0.19061777f ,0.676467f ,0.024473252f ,-0.18429527f ,0.6835208f ,0.0354285f ,-0.17578351f ,0.681705f ,0.03420225f ,-0.172404f ,0.678204f ,0.028642502f ,-0.17524351f ,0.6742215f ,0.022423502f ,-0.17408477f ,0.66390526f ,0.018724501f ,-0.18445951f ,0.66138977f ,0.020907002f ,-0.19394776f ,0.6638355f ,0.021001501f ,-0.19502777f ,0.66710025f ,0.019818f ,-0.18990226f ,0.670851f ,0.017736752f ,-0.17675327f ,0.6698655f ,0.016641002f });
  }
}
private class MFVec2f768 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8786f ,0.0507f ,0.857f ,0.0621f ,0.8601f ,0.0649f ,0.867f ,0.0598f ,0.8887f ,0.0786f ,0.8747f ,0.0865f ,0.8533f ,0.0697f ,0.876f ,0.0783f ,0.893f ,0.0688f ,0.8992f ,0.0702f ,0.8819f ,0.0483f ,0.8561f ,0.0728f ,0.8736f ,0.0851f ,0.8532f ,0.0697f ,0.8503f ,0.0646f ,0.8986f ,0.0785f ,0.897f ,0.0809f ,0.8914f ,0.0813f ,0.8802f ,0.0861f ,0.8841f ,0.0856f ,0.8821f ,0.0883f ,0.8487f ,0.0595f ,0.8509f ,0.0581f ,0.8683f ,0.0489f ,0.868f ,0.0507f ,0.8608f ,0.0544f ,0.8505f ,0.0603f ,0.8455f ,0.0706f ,0.8468f ,0.073f ,0.8455f ,0.0707f ,0.8437f ,0.0676f ,0.8416f ,0.0639f ,0.8422f ,0.0648f ,0.8729f ,0.2464f ,0.8482f ,0.2317f ,0.8612f ,0.2211f ,0.8847f ,0.2342f ,0.8433f ,0.2381f ,0.8632f ,0.2548f ,0.8814f ,0.2316f ,0.8625f ,0.2222f ,0.8799f ,0.2506f ,0.8891f ,0.243f ,0.8922f ,0.232f ,0.8922f ,0.232f });
  }
}
private class MFFloat769 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat770 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32771 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,29,28,-1,28,11,0,-1,32,2,17,-1,17,1,32,-1,4,3,1,-1,1,17,4,-1,11,28,31,-1,31,5,11,-1,29,0,2,-1,2,32,29,-1,4,5,31,-1,31,3,4,-1,23,32,1,-1,24,3,31,-1,24,23,1,-1,1,3,24,-1,4,6,7,-1,7,8,4,-1,5,9,10,-1,10,11,5,-1,4,8,9,-1,9,5,4,-1,10,13,14,-1,14,12,10,-1,2,15,16,-1,16,17,2,-1,0,12,15,-1,15,2,0,-1,8,7,18,-1,18,9,8,-1,18,13,10,-1,10,9,18,-1,6,20,21,-1,21,19,6,-1,22,19,21,-1,21,14,22,-1,17,16,20,-1,20,6,17,-1,6,4,17,-1,11,10,12,-1,12,0,11,-1,13,22,14,-1,6,19,18,-1,18,7,6,-1,18,19,22,-1,22,13,18,-1,16,15,21,-1,21,20,16,-1,21,15,12,-1,12,14,21,-1,24,25,26,-1,26,23,24,-1,28,29,30,-1,30,27,28,-1,27,30,26,-1,26,25,27,-1,24,31,27,-1,27,25,24,-1,32,23,26,-1,26,30,32,-1,30,29,32,-1,28,27,31,-1});
  }
}
private class MFInt32772 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,33,34,-1,34,2,3,-1,4,5,6,-1,6,7,4,-1,9,8,7,-1,7,6,9,-1,2,34,37,-1,37,38,2,-1,33,3,36,-1,36,35,33,-1,9,11,10,-1,10,8,9,-1,12,4,7,-1,13,8,10,-1,13,12,7,-1,7,8,13,-1,9,14,15,-1,15,16,9,-1,38,39,18,-1,18,2,38,-1,9,16,17,-1,17,11,9,-1,18,20,21,-1,21,19,18,-1,5,22,23,-1,23,6,5,-1,3,19,40,-1,40,36,3,-1,16,15,24,-1,24,17,16,-1,41,20,18,-1,18,39,41,-1,14,26,27,-1,27,25,14,-1,28,42,43,-1,43,21,28,-1,6,23,26,-1,26,14,6,-1,14,9,6,-1,2,18,19,-1,19,3,2,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,41,42,28,-1,28,20,41,-1,23,22,27,-1,27,26,23,-1,43,40,19,-1,19,21,43,-1,13,29,30,-1,30,12,13,-1,1,0,32,-1,32,31,1,-1,31,32,30,-1,30,29,31,-1,13,10,31,-1,31,29,13,-1,4,12,30,-1,30,32,4,-1,32,0,4,-1,1,31,10,-1});
  }
}
private class MFVec3f773 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.17476425f ,0.636309f ,0.049167003f ,-0.19127475f ,0.647874f ,0.04755375f ,-0.18243f ,0.6361335f ,0.049475253f ,-0.18631801f ,0.6559223f ,0.057316504f ,-0.18436275f ,0.6448703f ,0.062694006f ,-0.17553826f ,0.64515376f ,0.06246675f ,-0.18486676f ,0.6336248f ,0.06324525f ,-0.1837845f ,0.63522226f ,0.064910255f ,-0.1820475f ,0.6380933f ,0.06596775f ,-0.1756935f ,0.63757575f ,0.0663525f ,-0.17119351f ,0.6364125f ,0.062068503f ,-0.17030025f ,0.6422378f ,0.057854254f ,-0.174807f ,0.6307875f ,0.054024752f ,-0.17273925f ,0.6330195f ,0.061935753f ,-0.17475751f ,0.63036f ,0.057872254f ,-0.18140176f ,0.63020253f ,0.054929253f ,-0.18594675f ,0.6327315f ,0.058374003f ,-0.1887795f ,0.6389325f ,0.05411925f ,-0.1776015f ,0.63274276f ,0.0652185f ,-0.1791135f ,0.630495f ,0.062901005f ,-0.18568125f ,0.63285977f ,0.061195504f ,-0.18022275f ,0.6293025f ,0.059937753f ,-0.1738755f ,0.6313725f ,0.060072754f ,-0.1928025f ,0.6549255f ,0.042048004f ,-0.18763201f ,0.6638175f ,0.052393503f ,-0.18179551f ,0.664281f ,0.049077f ,-0.187344f ,0.655542f ,0.039264753f ,-0.17244901f ,0.66210526f ,0.046098f ,-0.169155f ,0.6541605f ,0.049911752f ,-0.1750455f ,0.646974f ,0.040713754f ,-0.1779975f ,0.65336627f ,0.036288f ,-0.1758555f ,0.6590183f ,0.053910002f ,-0.18368325f ,0.6477615f ,0.040059f });
  }
}
private class MFVec2f774 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8747f ,0.0865f ,0.8887f ,0.0786f ,0.8299f ,0.2203f ,0.8424f ,0.2111f ,0.8736f ,0.0851f ,0.8939f ,0.0989f ,0.8978f ,0.0975f ,0.8834f ,0.0852f ,0.8992f ,0.0766f ,0.9092f ,0.0888f ,0.8992f ,0.0702f ,0.9115f ,0.0859f ,0.876f ,0.0783f ,0.893f ,0.0688f ,0.9109f ,0.102f ,0.9135f ,0.0996f ,0.9144f ,0.0973f ,0.9172f ,0.0962f ,0.8241f ,0.2146f ,0.8338f ,0.2074f ,0.8247f ,0.2116f ,0.8291f ,0.2083f ,0.9028f ,0.1054f ,0.9046f ,0.1032f ,0.9153f ,0.1012f ,0.9125f ,0.1038f ,0.9081f ,0.1033f ,0.9082f ,0.1057f ,0.8266f ,0.2097f ,0.8885f ,0.0681f ,0.8723f ,0.0776f ,0.8843f ,0.0701f ,0.8696f ,0.0781f ,0.8612f ,0.2211f ,0.8482f ,0.2317f ,0.8625f ,0.2222f ,0.8417f ,0.2109f ,0.8433f ,0.2381f ,0.8245f ,0.2237f ,0.8192f ,0.2167f ,0.8322f ,0.2071f ,0.8195f ,0.2131f ,0.8224f ,0.2103f ,0.8256f ,0.2083f });
  }
}
private class MFFloat775 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat776 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32777 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,2,1,-1,1,12,14,-1,0,3,15,-1,15,13,0,-1,11,8,9,-1,9,10,11,-1,4,16,17,-1,17,5,4,-1,18,19,7,-1,7,6,18,-1,0,13,16,-1,16,4,0,-1,12,1,5,-1,5,17,12,-1,1,0,4,-1,4,5,1,-1,2,14,18,-1,18,6,2,-1,15,3,7,-1,7,19,15,-1,3,2,6,-1,6,7,3,-1,3,0,9,-1,9,8,3,-1,0,1,10,-1,10,9,0,-1,1,2,11,-1,11,10,1,-1,2,3,8,-1,8,11,2,-1,20,27,26,-1,26,25,24,-1,20,26,24,-1,24,23,22,-1,20,24,22,-1,21,20,22,-1,12,20,21,-1,21,14,12,-1,14,21,22,-1,22,18,14,-1,18,22,23,-1,23,19,18,-1,19,23,24,-1,24,15,19,-1,15,24,25,-1,25,13,15,-1,13,25,26,-1,26,16,13,-1,16,26,27,-1,27,17,16,-1,17,27,20,-1,20,12,17,-1});
  }
}
private class MFInt32778 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {21,0,1,-1,1,19,21,-1,12,13,22,-1,22,20,12,-1,5,6,7,-1,7,4,5,-1,8,23,25,-1,25,9,8,-1,26,28,18,-1,18,17,26,-1,12,20,24,-1,24,16,12,-1,19,1,9,-1,9,25,19,-1,1,2,8,-1,8,9,1,-1,0,21,27,-1,27,10,0,-1,22,13,18,-1,18,28,22,-1,3,0,10,-1,10,11,3,-1,13,12,15,-1,15,14,13,-1,2,1,4,-1,4,7,2,-1,1,0,5,-1,5,4,1,-1,0,3,6,-1,6,5,0,-1,29,36,35,-1,35,34,33,-1,29,35,33,-1,33,32,31,-1,29,33,31,-1,30,29,31,-1,19,29,30,-1,30,21,19,-1,21,30,31,-1,31,27,21,-1,26,31,32,-1,32,28,26,-1,28,32,33,-1,33,22,28,-1,22,33,34,-1,34,20,22,-1,20,34,35,-1,35,24,20,-1,23,35,36,-1,36,25,23,-1,25,36,29,-1,29,19,25,-1});
  }
}
private class MFVec3f779 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.16666201f ,0.6858473f ,0.0032265f ,-0.19856477f ,0.6858473f ,0.0032265f ,-0.19631702f ,0.70836526f ,0.00230625f ,-0.16733927f ,0.70836526f ,0.00251325f ,-0.1692585f ,0.68211f ,0.003339f ,-0.19515151f ,0.68211f ,0.003339f ,-0.19250326f ,0.71530426f ,0.0018315002f ,-0.17066701f ,0.71531105f ,0.0019709999f ,-0.16911227f ,0.706842f ,0.00071774976f ,-0.16770601f ,0.687564f ,0.0015682501f ,-0.19648576f ,0.687564f ,0.0015817503f ,-0.19455977f ,0.706842f ,0.00052200013f ,-0.19683677f ,0.68846405f ,0.01708425f ,-0.16659226f ,0.68846405f ,0.01708425f ,-0.19374752f ,0.70588803f ,0.014298751f ,-0.16879275f ,0.70588577f ,0.0143235f ,-0.17003477f ,0.6845355f ,0.018283501f ,-0.193725f ,0.68424755f ,0.017797502f ,-0.19056602f ,0.7127483f ,0.013095001f ,-0.17079076f ,0.7127033f ,0.013176001f ,-0.19476901f ,0.68997604f ,0.01834425f ,-0.19209376f ,0.70506227f ,0.01593225f ,-0.18933976f ,0.71100456f ,0.0148905f ,-0.17221276f ,0.7109663f ,0.014958001f ,-0.17048477f ,0.70506227f ,0.015954752f ,-0.16857901f ,0.68997604f ,0.01834425f ,-0.17155801f ,0.68657404f ,0.0193815f ,-0.19207576f ,0.6863243f ,0.018963f });
  }
}
private class MFVec2f780 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.813f ,0.0266f ,0.8136f ,0.0488f ,0.8136f ,0.0488f ,0.8133f ,0.0266f ,0.8111f ,0.0474f ,0.8105f ,0.0283f ,0.8108f ,0.0283f ,0.8111f ,0.0474f ,0.8141f ,0.0525f ,0.8141f ,0.0525f ,0.8123f ,0.0198f ,0.8125f ,0.0198f ,0.9273f ,0.2479f ,0.9315f ,0.2698f ,0.9337f ,0.2676f ,0.9301f ,0.2489f ,0.9262f ,0.2444f ,0.9337f ,0.2762f ,0.9335f ,0.2763f ,0.8381f ,0.0441f ,0.904f ,0.2568f ,0.8327f ,0.0273f ,0.9122f ,0.2724f ,0.8401f ,0.0478f ,0.9014f ,0.2535f ,0.8395f ,0.0482f ,0.9142f ,0.2789f ,0.8319f ,0.0206f ,0.9141f ,0.2788f ,0.8381f ,0.0441f ,0.8327f ,0.0273f ,0.8319f ,0.0206f ,0.9141f ,0.2788f ,0.9122f ,0.2724f ,0.904f ,0.2568f ,0.9014f ,0.2535f ,0.8395f ,0.0482f });
  }
}
private class MFFloat781 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat782 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32783 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,8,-1,8,3,0,-1,5,0,3,-1,3,7,5,-1,10,6,4,-1,4,2,10,-1,2,4,8,-1,8,1,2,-1,14,4,6,-1,6,11,14,-1,8,16,17,-1,17,3,8,-1,9,13,12,-1,12,7,9,-1,15,16,8,-1,8,4,15,-1,15,4,14,-1,9,3,17,-1,17,18,9,-1,9,18,13,-1,30,31,25,-1,27,30,25,-1,26,27,25,-1,22,19,20,-1,20,21,22,-1,41,38,39,-1,39,40,41,-1,36,37,32,-1,36,32,33,-1,36,33,34,-1,35,36,34,-1,23,24,19,-1,19,22,23,-1,6,10,20,-1,20,19,6,-1,30,27,28,-1,28,29,30,-1,5,7,22,-1,22,21,5,-1,7,12,23,-1,23,22,7,-1,12,11,24,-1,24,23,12,-1,11,6,19,-1,19,24,11,-1,1,0,26,-1,26,25,1,-1,0,5,27,-1,27,26,0,-1,5,21,28,-1,28,27,5,-1,21,20,29,-1,29,28,21,-1,20,10,30,-1,30,29,20,-1,10,2,31,-1,31,30,10,-1,2,1,25,-1,25,31,2,-1,16,15,33,-1,33,32,16,-1,15,14,34,-1,34,33,15,-1,14,13,35,-1,35,34,14,-1,13,18,36,-1,36,35,13,-1,18,17,37,-1,37,36,18,-1,17,16,32,-1,32,37,17,-1,14,11,39,-1,39,38,14,-1,11,12,40,-1,40,39,11,-1,12,13,41,-1,41,40,12,-1,13,14,38,-1,38,41,13,-1,9,7,3,-1});
  }
}
private class MFInt32784 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,1,-1,1,2,3,-1,5,3,2,-1,2,4,5,-1,44,45,8,-1,8,46,44,-1,46,8,43,-1,43,42,46,-1,47,8,45,-1,45,48,47,-1,1,12,13,-1,13,2,1,-1,16,14,15,-1,15,4,16,-1,50,49,43,-1,43,8,50,-1,50,8,47,-1,16,2,13,-1,13,18,16,-1,16,18,14,-1,21,22,23,-1,20,21,23,-1,19,20,23,-1,25,26,27,-1,27,24,25,-1,29,30,31,-1,31,28,29,-1,33,34,35,-1,33,35,36,-1,33,36,37,-1,32,33,37,-1,38,39,26,-1,26,25,38,-1,7,6,27,-1,27,26,7,-1,21,20,40,-1,40,41,21,-1,5,4,25,-1,25,24,5,-1,4,15,38,-1,38,25,4,-1,15,11,39,-1,39,38,15,-1,48,45,51,-1,51,56,48,-1,0,3,19,-1,19,23,0,-1,3,5,20,-1,20,19,3,-1,5,24,40,-1,40,20,5,-1,24,27,41,-1,41,40,24,-1,27,6,21,-1,21,41,27,-1,6,9,22,-1,22,21,6,-1,9,0,23,-1,23,22,9,-1,12,17,36,-1,36,35,12,-1,50,47,55,-1,55,54,50,-1,10,14,32,-1,32,37,10,-1,14,18,33,-1,33,32,14,-1,18,13,34,-1,34,33,18,-1,13,12,35,-1,35,34,13,-1,47,48,53,-1,53,52,47,-1,11,15,28,-1,28,31,11,-1,15,14,29,-1,29,28,15,-1,14,10,30,-1,30,29,14,-1,16,4,2,-1});
  }
}
private class MFVec3f785 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19301626f ,0.638955f ,0.021003751f ,-0.18238276f ,0.63909f ,0.024131251f ,-0.17282926f ,0.638955f ,0.02103975f ,-0.19469701f ,0.6577425f ,0.0217215f ,-0.17023051f ,0.65776503f ,0.021951001f ,-0.19445175f ,0.6379425f ,0.00549675f ,-0.168876f ,0.6584625f ,0.004752f ,-0.19702801f ,0.6584625f ,0.004752f ,-0.18290475f ,0.65544754f ,0.02580975f ,-0.20035125f ,0.6688958f ,0.020949751f ,-0.17209351f ,0.6379425f ,0.00549675f ,-0.1665945f ,0.68586975f ,0.0032264998f ,-0.19849725f ,0.68586975f ,0.0032264998f ,-0.19676925f ,0.68848425f ,0.01708425f ,-0.16652475f ,0.68848425f ,0.01708425f ,-0.17188875f ,0.6644925f ,0.02410425f ,-0.185643f ,0.662175f ,0.0273915f ,-0.19706851f ,0.66483f ,0.027297001f ,-0.19854225f ,0.6700883f ,0.025344001f ,-0.17143425f ,0.6584175f ,0.0020565f ,-0.17433451f ,0.63841504f ,0.0038025002f ,-0.192303f ,0.63841504f ,0.0038025002f ,-0.1944495f ,0.65826f ,0.0020677499f ,-0.195813f ,0.68573475f ,0.0006682496f ,-0.16859926f ,0.68573475f ,0.0006682496f ,-0.18241426f ,0.6350625f ,0.022761002f ,-0.18980326f ,0.634995f ,0.020340001f ,-0.19121626f ,0.63441f ,0.006093f ,-0.19129051f ,0.6365025f ,0.004437f ,-0.17536275f ,0.6365025f ,0.004437f ,-0.17382601f ,0.63441f ,0.00610425f ,-0.17442225f ,0.634995f ,0.020421f ,-0.184446f ,0.6664275f ,0.0300015f ,-0.174411f ,0.66832876f ,0.02739375f ,-0.17034751f ,0.68893427f ,0.021192752f ,-0.19413675f ,0.68893874f ,0.021183752f ,-0.19333576f ,0.6720975f ,0.028064251f ,-0.19307251f ,0.6682433f ,0.02956275f ,-0.16951501f ,0.690525f ,0.0143145f ,-0.16889626f ,0.6887498f ,0.005364f ,-0.19515601f ,0.6887498f ,0.005364f ,-0.19398151f ,0.690525f ,0.0143145f });
  }
}
private class MFVec2f786 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8514f ,0.0953f ,0.8526f ,0.0788f ,0.846f ,0.0768f ,0.8466f ,0.0958f ,0.8195f ,0.0808f ,0.8225f ,0.0994f ,0.8225f ,0.0994f ,0.8195f ,0.0808f ,0.8903f ,0.2261f ,0.8467f ,0.0958f ,0.8381f ,0.0441f ,0.8136f ,0.0488f ,0.8561f ,0.0728f ,0.8532f ,0.0697f ,0.8381f ,0.0441f ,0.8136f ,0.0488f ,0.8436f ,0.0662f ,0.8533f ,0.0697f ,0.8503f ,0.0646f ,0.8461f ,0.0998f ,0.8248f ,0.1027f ,0.8248f ,0.1027f ,0.8462f ,0.0997f ,0.8498f ,0.0994f ,0.8184f ,0.0977f ,0.8157f ,0.0811f ,0.8157f ,0.0809f ,0.8184f ,0.0977f ,0.8165f ,0.0457f ,0.8341f ,0.0424f ,0.8341f ,0.0424f ,0.8165f ,0.0457f ,0.844f ,0.0417f ,0.8554f ,0.0622f ,0.8575f ,0.0659f ,0.8594f ,0.0677f ,0.8574f ,0.0658f ,0.844f ,0.0417f ,0.8099f ,0.0493f ,0.8099f ,0.0493f ,0.82f ,0.101f ,0.82f ,0.101f ,0.8821f ,0.2087f ,0.8838f ,0.2252f ,0.9098f ,0.1997f ,0.916f ,0.2175f ,0.8866f ,0.2074f ,0.904f ,0.2568f ,0.9273f ,0.2479f ,0.8814f ,0.2316f ,0.8847f ,0.2342f ,0.9197f ,0.2166f ,0.9083f ,0.2577f ,0.925f ,0.2515f ,0.8813f ,0.2388f ,0.8986f ,0.2602f ,0.931f ,0.2468f });
  }
}
private class MFFloat787 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat788 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32789 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,19,18,-1,18,5,4,-1,5,18,21,-1,21,6,5,-1,7,25,20,-1,20,8,7,-1,8,20,19,-1,19,4,8,-1,6,21,22,-1,1,7,8,-1,8,10,1,-1,6,2,11,-1,11,5,6,-1,5,11,0,-1,0,4,5,-1,4,0,10,-1,10,8,4,-1,1,3,9,-1,9,7,1,-1,9,3,2,-1,2,6,9,-1,9,24,23,-1,23,7,9,-1,6,22,24,-1,24,9,6,-1,23,25,7,-1,0,11,15,-1,15,17,0,-1,1,10,14,-1,14,12,1,-1,11,2,13,-1,13,15,11,-1,3,1,12,-1,12,16,3,-1,2,3,16,-1,16,13,2,-1,10,0,17,-1,17,14,10,-1,14,17,16,-1,16,12,14,-1,15,13,16,-1,16,17,15,-1,26,27,28,-1,26,28,29,-1,30,26,29,-1,18,19,27,-1,27,26,18,-1,19,20,28,-1,28,27,19,-1,20,25,29,-1,29,28,20,-1,31,32,33,-1,37,31,33,-1,36,37,33,-1,36,33,34,-1,36,34,35,-1,21,18,26,-1,26,30,21,-1,24,22,32,-1,32,31,24,-1,22,21,33,-1,33,32,22,-1,21,30,34,-1,34,33,21,-1,30,29,35,-1,35,34,30,-1,29,25,36,-1,36,35,29,-1,25,23,37,-1,37,36,25,-1,23,24,31,-1,31,37,23,-1});
  }
}
private class MFInt32790 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,6,40,41,-1,41,9,6,-1,9,41,39,-1,39,38,9,-1,5,4,10,-1,11,6,9,-1,9,12,11,-1,5,13,14,-1,14,3,5,-1,3,14,15,-1,15,0,3,-1,38,42,12,-1,12,9,38,-1,11,43,44,-1,44,6,11,-1,17,16,13,-1,13,5,17,-1,44,45,46,-1,46,6,44,-1,5,10,18,-1,18,17,5,-1,46,40,6,-1,15,14,20,-1,20,21,15,-1,11,12,22,-1,22,23,11,-1,14,13,24,-1,24,20,14,-1,43,11,23,-1,23,48,43,-1,13,16,25,-1,25,24,13,-1,12,42,47,-1,47,22,12,-1,22,47,48,-1,48,23,22,-1,20,24,25,-1,25,21,20,-1,27,28,29,-1,27,29,30,-1,26,27,30,-1,2,1,28,-1,28,27,2,-1,1,8,29,-1,29,28,1,-1,8,7,30,-1,30,29,8,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,31,35,36,-1,31,36,37,-1,4,2,27,-1,27,26,4,-1,18,10,34,-1,34,33,18,-1,10,4,35,-1,35,34,10,-1,4,26,36,-1,36,35,4,-1,26,30,37,-1,37,36,26,-1,30,7,31,-1,31,37,30,-1,7,19,32,-1,32,31,7,-1,19,18,33,-1,33,32,19,-1});
  }
}
private class MFVec3f791 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18074477f ,0.60633004f ,0.022119751f ,-0.17174026f ,0.60702753f ,0.007938f ,-0.19077526f ,0.60939f ,0.007960501f ,-0.18074477f ,0.60651004f ,0.005535001f ,-0.18202952f ,0.633825f ,0.023591252f ,-0.1920105f ,0.63367426f ,0.020673001f ,-0.19311301f ,0.63295877f ,0.0078300005f ,-0.172836f ,0.63295877f ,0.007841251f ,-0.172836f ,0.63367426f ,0.020673001f ,-0.18202952f ,0.6297705f ,0.005940001f ,-0.17174026f ,0.606915f ,0.019422002f ,-0.19077526f ,0.609255f ,0.019446751f ,-0.17341876f ,0.6032475f ,0.0086625f ,-0.18717526f ,0.60138f ,0.007983001f ,-0.17341876f ,0.603135f ,0.018634502f ,-0.18717526f ,0.6012675f ,0.019305f ,-0.18072002f ,0.6006825f ,0.007956001f ,-0.18072002f ,0.60057f ,0.019503001f ,-0.19300726f ,0.639072f ,0.021003751f ,-0.18237601f ,0.639198f ,0.024131251f ,-0.17282026f ,0.639072f ,0.02103975f ,-0.19444501f ,0.6380505f ,0.0054967506f ,-0.19255051f ,0.6328845f ,0.0055282507f ,-0.172836f ,0.6328845f ,0.0055282507f ,-0.18202952f ,0.62973905f ,0.005661001f ,-0.17208676f ,0.6380505f ,0.0054967506f ,-0.18968627f ,0.6449715f ,0.018945001f ,-0.18205427f ,0.6452955f ,0.022254752f ,-0.17473951f ,0.6449805f ,0.018999001f ,-0.17443351f ,0.64455754f ,0.0060277507f ,-0.19101377f ,0.64455974f ,0.0060547506f ,-0.18205202f ,0.6307133f ,0.005006251f ,-0.19180577f ,0.63380474f ,0.0048420005f ,-0.19359677f ,0.63842404f ,0.0048420005f ,-0.19041301f ,0.64438653f ,0.0044437507f ,-0.17514001f ,0.64438426f ,0.0044190004f ,-0.17305201f ,0.63839704f ,0.0048442506f ,-0.17370676f ,0.6337418f ,0.0048442506f });
  }
}
private class MFVec2f792 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8511f ,0.1006f ,0.8514f ,0.0953f ,0.8466f ,0.0958f ,0.8466f ,0.1011f ,0.8225f ,0.0994f ,0.8283f ,0.1035f ,0.9023f ,0.1969f ,0.8225f ,0.0994f ,0.8467f ,0.0958f ,0.8857f ,0.2021f ,0.8231f ,0.1042f ,0.8931f ,0.1724f ,0.8782f ,0.1769f ,0.8338f ,0.1268f ,0.8493f ,0.125f ,0.8543f ,0.1273f ,0.8302f ,0.1302f ,0.8258f ,0.1072f ,0.8236f ,0.1075f ,0.8231f ,0.1042f ,0.8504f ,0.1328f ,0.8508f ,0.1334f ,0.8781f ,0.1731f ,0.8909f ,0.1692f ,0.8352f ,0.1346f ,0.8353f ,0.1353f ,0.8228f ,0.0929f ,0.844f ,0.0896f ,0.8482f ,0.0889f ,0.8441f ,0.0896f ,0.8228f ,0.0929f ,0.8203f ,0.0995f ,0.8207f ,0.1038f ,0.8212f ,0.1068f ,0.8207f ,0.1037f ,0.8203f ,0.0995f ,0.8206f ,0.0933f ,0.8205f ,0.0933f ,0.8815f ,0.2034f ,0.8821f ,0.2087f ,0.9098f ,0.1997f ,0.8866f ,0.2074f ,0.8737f ,0.1777f ,0.8969f ,0.1707f ,0.9052f ,0.1925f ,0.9074f ,0.1918f ,0.9084f ,0.195f ,0.876f ,0.171f ,0.891f ,0.1665f });
  }
}
private class MFFloat793 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat794 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32795 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
private class MFInt32796 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
private class MFVec3f797 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.179433f ,0.5814675f ,0.0060592503f ,-0.17177176f ,0.581715f ,0.0187065f ,-0.1879335f ,0.584235f ,0.018918f ,-0.18997426f ,0.6023385f ,0.01937475f ,-0.18997426f ,0.60245776f ,0.007888501f ,-0.17175151f ,0.607077f ,0.00793575f ,-0.19078426f ,0.609426f ,0.0079605f ,-0.17175151f ,0.60695773f ,0.019422f ,-0.19078426f ,0.609309f ,0.019444501f ,-0.175896f ,0.61142623f ,0.00798075f ,-0.175896f ,0.611307f ,0.01946475f ,-0.18528976f ,0.61107075f ,0.0194625f ,-0.18528976f ,0.61119f ,0.007978501f ,-0.18075375f ,0.6065505f ,0.0055327504f ,-0.18075375f ,0.60636604f ,0.022119751f ,-0.17943975f ,0.5812875f ,0.021402001f ,-0.18512326f ,0.5763825f ,0.018405002f ,-0.17964001f ,0.57555f ,0.0185895f ,-0.17176726f ,0.5818275f ,0.0084645f ,-0.17331076f ,0.57798f ,0.017784001f ,-0.1733085f ,0.57807f ,0.00932175f ,-0.187929f ,0.584352f ,0.0082755005f ,-0.18511876f ,0.576495f ,0.0086917505f ,-0.17963551f ,0.57564f ,0.008667001f });
  }
}
private class MFVec2f798 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8782f ,0.1769f ,0.8543f ,0.1273f ,0.8574f ,0.1518f ,0.8703f ,0.1535f ,0.8493f ,0.125f ,0.8504f ,0.1318f ,0.8846f ,0.1491f ,0.8931f ,0.1724f ,0.8349f ,0.1336f ,0.8379f ,0.1515f ,0.8533f ,0.1496f ,0.8338f ,0.1268f ,0.8302f ,0.1302f ,0.8351f ,0.1545f ,0.849f ,0.1233f ,0.8336f ,0.1251f ,0.849f ,0.123f ,0.8335f ,0.1249f ,0.8539f ,0.1573f ,0.8543f ,0.1579f ,0.8703f ,0.1496f ,0.8822f ,0.146f ,0.8398f ,0.159f ,0.8399f ,0.1597f ,0.8737f ,0.1777f ,0.8664f ,0.1541f ,0.8969f ,0.1707f ,0.8878f ,0.1476f ,0.8796f ,0.181f ,0.8945f ,0.1764f ,0.8684f ,0.1475f ,0.8822f ,0.1433f });
  }
}
private class MFFloat799 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat800 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32801 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
private class MFInt32802 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
private class MFVec3f803 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1873845f ,0.5783625f ,0.018859502f ,-0.18738f ,0.5784795f ,0.00821475f ,-0.18574199f ,0.5702513f ,0.018299252f ,-0.18573749f ,0.5703593f ,0.00852075f ,-0.17231175f ,0.5709578f ,0.018740252f ,-0.17845425f ,0.570501f ,0.02058975f ,-0.17230725f ,0.57107705f ,0.008118001f ,-0.1784475f ,0.57066077f ,0.0062032505f ,-0.1832895f ,0.5640998f ,0.0177615f ,-0.18328725f ,0.5641965f ,0.008901f ,-0.17224875f ,0.5645138f ,0.01766025f ,-0.1776015f ,0.56382304f ,0.019593f ,-0.17224425f ,0.5646083f ,0.009177751f ,-0.17759475f ,0.5639625f ,0.0071145007f ,-0.18402074f ,0.56220526f ,0.013288501f ,-0.1730655f ,0.56221426f ,0.013293001f ,-0.17758125f ,0.56082153f ,0.01327725f ,-0.18392624f ,0.56259f ,0.015741f ,-0.17297325f ,0.5627228f ,0.01124325f ,-0.1778715f ,0.56148076f ,0.016533f ,-0.18392624f ,0.56261253f ,0.010982251f ,-0.17297325f ,0.5626958f ,0.015468751f ,-0.17787375f ,0.56143355f ,0.010255501f ,-0.17176275f ,0.5816925f ,0.0187065f ,-0.18792f ,0.5843273f ,0.0082755005f ,-0.18792449f ,0.584208f ,0.018918002f ,-0.1832445f ,0.58608f ,0.018553501f ,-0.18324f ,0.5861903f ,0.008694001f ,-0.17517824f ,0.5861318f ,0.018558001f ,-0.17175825f ,0.58180505f ,0.008462251f ,-0.175176f ,0.58623976f ,0.008696251f ,-0.17947574f ,0.58127177f ,0.021397501f ,-0.17946899f ,0.5814428f ,0.0060592503f });
  }
}
private class MFVec2f804 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8542f ,0.1553f ,0.8574f ,0.1518f ,0.8533f ,0.1496f ,0.8379f ,0.1515f ,0.8351f ,0.1545f ,0.8388f ,0.1572f ,0.8414f ,0.1663f ,0.8547f ,0.1647f ,0.8578f ,0.1639f ,0.8665f ,0.142f ,0.8703f ,0.1535f ,0.8804f ,0.1378f ,0.8846f ,0.1491f ,0.8382f ,0.1663f ,0.8495f ,0.1759f ,0.8523f ,0.1752f ,0.8544f ,0.1737f ,0.8566f ,0.1736f ,0.8658f ,0.1324f ,0.8753f ,0.1296f ,0.8677f ,0.1303f ,0.8725f ,0.1289f ,0.842f ,0.1753f ,0.8441f ,0.175f ,0.8533f ,0.1759f ,0.8496f ,0.1769f ,0.8467f ,0.1759f ,0.846f ,0.1768f ,0.87f ,0.1292f ,0.8525f ,0.1477f ,0.8382f ,0.1495f ,0.8525f ,0.1475f ,0.8381f ,0.1492f ,0.8664f ,0.1541f ,0.8878f ,0.1476f ,0.8639f ,0.1422f ,0.8827f ,0.1365f ,0.8634f ,0.1325f ,0.8774f ,0.1283f ,0.8662f ,0.1297f ,0.8697f ,0.1281f ,0.8732f ,0.1275f ,0.872f ,0.1575f ,0.8858f ,0.1533f });
  }
}
private class MFFloat805 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat806 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32807 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,4,-1,4,6,5,-1,7,2,3,-1,3,0,7,-1,8,9,10,-1,10,11,8,-1,12,13,14,-1,14,15,12,-1,1,5,9,-1,9,8,1,-1,5,7,10,-1,10,9,5,-1,7,0,11,-1,11,10,7,-1,0,1,8,-1,8,11,0,-1,6,4,13,-1,13,12,6,-1,4,3,14,-1,14,13,4,-1,3,2,15,-1,15,14,3,-1,2,6,12,-1,12,15,2,-1,22,23,20,-1,20,21,22,-1,18,19,16,-1,16,17,18,-1,5,6,17,-1,17,16,5,-1,6,2,18,-1,18,17,6,-1,2,7,19,-1,19,18,2,-1,7,5,16,-1,16,19,7,-1,0,3,21,-1,21,20,0,-1,3,4,22,-1,22,21,3,-1,4,1,23,-1,23,22,4,-1,1,0,20,-1,20,23,1,-1});
  }
}
private class MFInt32808 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {24,25,26,-1,26,0,24,-1,4,5,6,-1,6,7,4,-1,8,9,10,-1,10,11,8,-1,12,30,31,-1,31,32,12,-1,25,24,29,-1,29,28,25,-1,1,4,10,-1,10,9,1,-1,4,7,11,-1,11,10,4,-1,7,2,8,-1,8,11,7,-1,0,26,30,-1,30,12,0,-1,3,6,14,-1,14,13,3,-1,6,5,15,-1,15,14,6,-1,27,0,12,-1,12,32,27,-1,17,18,19,-1,19,16,17,-1,35,36,37,-1,37,20,35,-1,24,0,20,-1,20,37,24,-1,0,27,35,-1,35,20,0,-1,5,4,22,-1,22,21,5,-1,4,1,23,-1,23,22,4,-1,7,6,16,-1,16,19,7,-1,6,3,17,-1,17,16,6,-1,26,25,34,-1,34,33,26,-1,2,7,19,-1,19,18,2,-1});
  }
}
private class MFVec3f809 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19859175f ,0.68589f ,-0.012235501f ,-0.16613999f ,0.685935f ,-0.012237751f ,-0.19625625f ,0.7085138f ,0.00230625f ,-0.19694924f ,0.70894355f ,-0.012406501f ,-0.1674405f ,0.7089413f ,-0.01237725f ,-0.16660349f ,0.6860025f ,0.0032242502f ,-0.16728075f ,0.708516f ,0.00251325f ,-0.19850625f ,0.6860025f ,0.0032242502f ,-0.16849124f ,0.68238f ,-0.012422251f ,-0.16878825f ,0.682155f ,0.0034470002f ,-0.19518974f ,0.682155f ,0.0034470002f ,-0.195246f ,0.682335f ,-0.0124200005f ,-0.17059724f ,0.71546626f ,0.00198675f ,-0.17070524f ,0.7156508f ,-0.01096875f ,-0.19353825f ,0.715653f ,-0.010989001f ,-0.19308375f ,0.715464f ,0.0018449998f ,-0.167553f ,0.6874043f ,0.00576225f ,-0.16897275f ,0.7068623f ,0.0049185003f ,-0.194616f ,0.7068623f ,0.00472275f ,-0.19656f ,0.6874043f ,0.0057735f ,-0.19656675f ,0.6875753f ,-0.014348251f ,-0.195156f ,0.7073843f ,-0.0148950005f ,-0.16918425f ,0.707382f ,-0.01486575f ,-0.16723575f ,0.68762255f ,-0.01435275f });
  }
}
private class MFVec2f810 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9315f ,0.2698f ,0.8136f ,0.0488f ,0.7924f ,0.0507f ,0.7911f ,0.0281f ,0.8136f ,0.0488f ,0.813f ,0.0266f ,0.791f ,0.0281f ,0.7924f ,0.0508f ,0.7924f ,0.0543f ,0.8143f ,0.0526f ,0.8143f ,0.0526f ,0.7924f ,0.0543f ,0.9335f ,0.2763f ,0.7903f ,0.0215f ,0.7903f ,0.0215f ,0.8123f ,0.0198f ,0.7875f ,0.03f ,0.7875f ,0.03f ,0.7887f ,0.0494f ,0.7887f ,0.0495f ,0.9277f ,0.2691f ,0.8167f ,0.0279f ,0.8173f ,0.0471f ,0.8173f ,0.0471f ,0.9273f ,0.2479f ,0.9479f ,0.2423f ,0.9531f ,0.2644f ,0.9318f ,0.2697f ,0.9473f ,0.2389f ,0.926f ,0.2443f ,0.955f ,0.2707f ,0.9551f ,0.2707f ,0.9337f ,0.2763f ,0.9563f ,0.262f ,0.9518f ,0.243f ,0.928f ,0.269f ,0.924f ,0.2502f ,0.9241f ,0.2502f });
  }
}
private class MFFloat811 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat812 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32813 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,6,-1,6,8,0,-1,10,7,1,-1,1,5,10,-1,2,1,7,-1,7,9,2,-1,8,11,4,-1,4,0,8,-1,14,15,12,-1,12,13,14,-1,34,35,32,-1,32,33,34,-1,25,28,29,-1,29,24,25,-1,17,18,19,-1,19,20,17,-1,25,26,27,-1,27,28,25,-1,20,21,16,-1,16,17,20,-1,6,3,13,-1,13,12,6,-1,24,29,30,-1,30,31,24,-1,2,9,15,-1,15,14,2,-1,16,21,22,-1,22,23,16,-1,9,7,17,-1,17,16,9,-1,7,10,18,-1,18,17,7,-1,10,11,19,-1,19,18,10,-1,11,8,20,-1,20,19,11,-1,8,6,21,-1,21,20,8,-1,6,12,22,-1,22,21,6,-1,12,15,23,-1,23,22,12,-1,15,9,16,-1,16,23,15,-1,3,0,25,-1,25,24,3,-1,0,4,26,-1,26,25,0,-1,4,5,27,-1,27,26,4,-1,5,1,28,-1,28,27,5,-1,1,2,29,-1,29,28,1,-1,2,14,30,-1,30,29,2,-1,14,13,31,-1,31,30,14,-1,13,3,24,-1,24,31,13,-1,10,5,33,-1,33,32,10,-1,5,4,34,-1,34,33,5,-1,4,11,35,-1,35,34,4,-1,11,10,32,-1,32,35,11,-1});
  }
}
private class MFInt32814 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,0,-1,0,1,2,-1,39,36,37,-1,37,38,39,-1,40,37,36,-1,36,41,40,-1,1,10,11,-1,11,2,1,-1,12,13,14,-1,14,15,12,-1,43,44,45,-1,45,46,43,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,15,-1,15,14,0,-1,23,22,32,-1,32,33,23,-1,8,9,13,-1,13,12,8,-1,31,30,34,-1,34,35,31,-1,9,4,24,-1,24,31,9,-1,36,39,49,-1,49,48,36,-1,7,10,26,-1,26,25,7,-1,10,1,27,-1,27,26,10,-1,1,0,30,-1,30,27,1,-1,0,14,34,-1,34,30,0,-1,14,13,35,-1,35,34,14,-1,13,9,31,-1,31,35,13,-1,3,2,20,-1,20,23,3,-1,2,11,28,-1,28,20,2,-1,42,38,53,-1,53,52,42,-1,38,37,47,-1,47,53,38,-1,5,8,22,-1,22,21,5,-1,8,12,32,-1,32,22,8,-1,12,15,33,-1,33,32,12,-1,15,3,23,-1,23,33,15,-1,39,38,46,-1,46,45,39,-1,6,11,16,-1,16,19,6,-1,11,10,17,-1,17,16,11,-1,10,7,18,-1,18,17,10,-1});
  }
}
private class MFVec3f815 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19724625f ,0.6594075f ,-0.0120825f ,-0.16902f ,0.6594075f ,-0.0120825f ,-0.17200574f ,0.6382125f ,-0.0126315f ,-0.194454f ,0.6382125f ,-0.0126315f ,-0.19859175f ,0.685728f ,-0.012235501f ,-0.16613999f ,0.685782f ,-0.012237751f ,-0.1944585f ,0.6378975f ,0.0054944996f ,-0.16888274f ,0.6584175f ,0.00474975f ,-0.197037f ,0.6584175f ,0.00474975f ,-0.17210025f ,0.6378975f ,0.0054944996f ,-0.16660349f ,0.6858383f ,0.0032264998f ,-0.19850625f ,0.6858383f ,0.0032264998f ,-0.19268325f ,0.63441f ,0.00480825f ,-0.192681f ,0.6342975f ,-0.011493f ,-0.17396325f ,0.6342975f ,-0.011493f ,-0.17404425f ,0.63441f ,0.00480825f ,-0.1743705f ,0.6385275f ,0.0070222495f ,-0.17118675f ,0.65864253f ,0.00820575f ,-0.168309f ,0.68629724f ,0.0066375f ,-0.1960875f ,0.68629724f ,0.0066375f ,-0.19471274f ,0.6585075f ,0.0082125f ,-0.19235025f ,0.63850504f ,0.0070222495f ,-0.1911465f ,0.6363f ,0.006617251f ,-0.1755855f ,0.6363f ,0.006617251f ,-0.192213f ,0.639f ,-0.014694751f ,-0.194715f ,0.659295f ,-0.0149715f ,-0.19594125f ,0.6859755f ,-0.014953501f ,-0.16823025f ,0.6860205f ,-0.014955751f ,-0.17151524f ,0.65943f ,-0.014976f ,-0.17439075f ,0.6390225f ,-0.014697f ,-0.17561924f ,0.6363675f ,-0.013995001f ,-0.19099575f ,0.6363675f ,-0.013995001f ,-0.16862625f ,0.68825024f ,0.00019800001f ,-0.168345f ,0.6882278f ,-0.0099990005f ,-0.1955925f ,0.68817824f ,-0.00999675f ,-0.19553849f ,0.68825704f ,0.00019800001f });
  }
}
private class MFVec2f816 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8225f ,0.0994f ,0.8195f ,0.0808f ,0.7938f ,0.0824f ,0.7939f ,0.1016f ,0.8195f ,0.0808f ,0.7938f ,0.0824f ,0.7924f ,0.0507f ,0.8136f ,0.0488f ,0.7939f ,0.1016f ,0.8225f ,0.0994f ,0.8136f ,0.0488f ,0.7924f ,0.0508f ,0.7964f ,0.1053f ,0.8205f ,0.103f ,0.8205f ,0.103f ,0.7964f ,0.1053f ,0.796f ,0.0481f ,0.809f ,0.0468f ,0.809f ,0.0469f ,0.796f ,0.048f ,0.7888f ,0.0827f ,0.7888f ,0.0826f ,0.7886f ,0.1011f ,0.7887f ,0.1011f ,0.8243f ,0.0799f ,0.8186f ,0.0479f ,0.8186f ,0.0479f ,0.8243f ,0.0801f ,0.7878f ,0.051f ,0.7878f ,0.0509f ,0.8275f ,0.0984f ,0.8275f ,0.0983f ,0.7902f ,0.1036f ,0.7902f ,0.1036f ,0.8264f ,0.1006f ,0.8264f ,0.1006f ,0.916f ,0.2175f ,0.941f ,0.2114f ,0.9479f ,0.2423f ,0.9273f ,0.2479f ,0.9376f ,0.1925f ,0.9098f ,0.1997f ,0.9479f ,0.2423f ,0.9448f ,0.2456f ,0.9323f ,0.249f ,0.9323f ,0.249f ,0.9448f ,0.2456f ,0.9459f ,0.2103f ,0.9115f ,0.2191f ,0.9226f ,0.2496f ,0.9226f ,0.2496f ,0.9114f ,0.219f ,0.9524f ,0.2413f ,0.9524f ,0.2414f });
  }
}
private class MFFloat817 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat818 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32819 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,21,26,-1,26,4,3,-1,5,25,27,-1,27,6,5,-1,4,26,23,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,22,24,-1,24,5,7,-1,4,23,22,-1,22,7,4,-1,24,25,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,18,21,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,19,-1,19,20,16,-1,3,16,20,-1,20,18,3,-1,19,6,27,-1,31,28,29,-1,29,30,31,-1,26,21,29,-1,29,28,26,-1,33,34,35,-1,32,33,35,-1,38,32,35,-1,38,35,36,-1,38,36,37,-1,27,25,31,-1,31,30,27,-1,44,45,39,-1,39,40,41,-1,44,39,41,-1,44,41,42,-1,44,42,43,-1,18,20,33,-1,33,32,18,-1,20,19,34,-1,34,33,20,-1,19,27,35,-1,35,34,19,-1,27,30,36,-1,36,35,27,-1,30,29,37,-1,37,36,30,-1,29,21,38,-1,38,37,29,-1,21,18,32,-1,32,38,21,-1,22,23,40,-1,40,39,22,-1,23,26,41,-1,41,40,23,-1,26,28,42,-1,42,41,26,-1,28,31,43,-1,43,42,28,-1,31,25,44,-1,44,43,31,-1,25,24,45,-1,45,44,25,-1,24,22,39,-1,39,45,24,-1});
  }
}
private class MFInt32820 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1});
  }
}
private class MFVec3f821 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.17174476f ,0.6032025f ,-0.0089145005f ,-0.19077751f ,0.605835f ,-0.008982f ,-0.18074702f ,0.60255f ,-0.0117247505f ,-0.19255276f ,0.632781f ,0.00312975f ,-0.19255276f ,0.63291377f ,-0.0098775f ,-0.17283827f ,0.63291377f ,-0.0098775f ,-0.17283827f ,0.632781f ,0.00312975f ,-0.18203177f ,0.629595f ,-0.012150001f ,-0.17342101f ,0.5989725f ,-0.00803925f ,-0.18717751f ,0.59688f ,-0.00864675f ,-0.17342101f ,0.5991075f ,0.0010980002f ,-0.18717751f ,0.597015f ,0.0018450001f ,-0.18072452f ,0.5960925f ,-0.0086445f ,-0.18072452f ,0.5962275f ,0.00207f ,-0.17174476f ,0.60336f ,0.0017370003f ,-0.18074702f ,0.60277504f ,0.0048690005f ,-0.18203177f ,0.62957925f ,0.0053662504f ,-0.19077751f ,0.6059925f ,0.0016695001f ,-0.19255276f ,0.6327585f ,0.0055282507f ,-0.17283827f ,0.6327585f ,0.0055282507f ,-0.18203177f ,0.629613f ,0.00565875f ,-0.19444726f ,0.6379245f ,0.0054945005f ,-0.18203177f ,0.6296468f ,-0.0124425f ,-0.19255276f ,0.63273823f ,-0.012372751f ,-0.17283827f ,0.63273823f ,-0.012372751f ,-0.17199226f ,0.6382395f ,-0.01263375f ,-0.19444276f ,0.6382395f ,-0.01263375f ,-0.17208901f ,0.6379245f ,0.0054945005f ,-0.19080226f ,0.64429873f ,-0.012044251f ,-0.19080676f ,0.6443325f ,0.004446f ,-0.17431201f ,0.6443325f ,0.004446f ,-0.17422876f ,0.64429873f ,-0.012044251f ,-0.19205776f ,0.63381153f ,0.0062302505f ,-0.18205202f ,0.630639f ,0.00632925f ,-0.17340526f ,0.63378f ,0.0062302505f ,-0.17271227f ,0.6383678f ,0.0062100003f ,-0.17477551f ,0.64441574f ,0.006192f ,-0.19041301f ,0.64441574f ,0.006192f ,-0.19395226f ,0.63837224f ,0.0062100003f ,-0.18205652f ,0.63078976f ,-0.01309275f ,-0.19165726f ,0.63358873f ,-0.0133245f ,-0.19340551f ,0.63826203f ,-0.01347525f ,-0.19012952f ,0.64422f ,-0.01348875f ,-0.17505002f ,0.64422f ,-0.01348875f ,-0.17313527f ,0.63827103f ,-0.01347525f ,-0.17386426f ,0.6335258f ,-0.0133245f });
  }
}
private class MFVec2f822 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8168f ,0.105f ,0.8225f ,0.0994f ,0.7939f ,0.1016f ,0.7996f ,0.1065f ,0.9311f ,0.1887f ,0.7939f ,0.1016f ,0.8225f ,0.0994f ,0.9145f ,0.1932f ,0.794f ,0.107f ,0.9232f ,0.1611f ,0.908f ,0.1649f ,0.8025f ,0.1324f ,0.818f ,0.1313f ,0.7986f ,0.1359f ,0.7957f ,0.11f ,0.7939f ,0.1101f ,0.794f ,0.107f ,0.8228f ,0.1342f ,0.8186f ,0.1401f ,0.819f ,0.1409f ,0.9081f ,0.1606f ,0.921f ,0.1574f ,0.8033f ,0.1412f ,0.8033f ,0.142f ,0.8231f ,0.1042f ,0.8212f ,0.1078f ,0.8231f ,0.1042f ,0.8236f ,0.1075f ,0.7948f ,0.0956f ,0.8206f ,0.0932f ,0.8206f ,0.0932f ,0.7948f ,0.0956f ,0.8249f ,0.0987f ,0.8253f ,0.1032f ,0.8258f ,0.1063f ,0.8253f ,0.1032f ,0.8249f ,0.0987f ,0.823f ,0.0929f ,0.823f ,0.0929f ,0.7917f ,0.1017f ,0.7916f ,0.1064f ,0.7918f ,0.1091f ,0.7916f ,0.1063f ,0.7917f ,0.1017f ,0.7927f ,0.0957f ,0.7927f ,0.0957f ,0.9376f ,0.1925f ,0.9098f ,0.1997f ,0.927f ,0.1595f ,0.9344f ,0.1846f ,0.9361f ,0.1842f ,0.9366f ,0.1872f ,0.9035f ,0.1654f ,0.9061f ,0.1582f ,0.9213f ,0.1544f ,0.9096f ,0.1911f ,0.9084f ,0.195f ,0.9074f ,0.1918f });
  }
}
private class MFFloat823 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat824 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32825 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
private class MFInt32826 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
private class MFVec3f827 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.17965801f ,0.575235f ,-0.01091025f ,-0.17198326f ,0.57586503f ,0.0017190003f ,-0.18813601f ,0.578655f ,0.0018450001f ,-0.18997426f ,0.59820527f ,0.0018742502f ,-0.18997426f ,0.5980635f ,-0.00877725f ,-0.17175151f ,0.603243f ,-0.00891225f ,-0.19078426f ,0.60587776f ,-0.008982f ,-0.17175151f ,0.60338473f ,0.0017392504f ,-0.19078426f ,0.60602176f ,0.0016695001f ,-0.175896f ,0.6081188f ,-0.0090405f ,-0.175896f ,0.6082628f ,0.0016110002f ,-0.18528976f ,0.60799724f ,0.0016177503f ,-0.18528976f ,0.60785323f ,-0.00903375f ,-0.18075375f ,0.60257924f ,-0.0117247505f ,-0.18075375f ,0.60280204f ,0.00487125f ,-0.17965126f ,0.5754375f ,0.0044370005f ,-0.18536176f ,0.569835f ,0.0016402503f ,-0.17985825f ,0.5695425f ,0.0018000003f ,-0.17198776f ,0.57573f ,-0.008529751f ,-0.17354026f ,0.57165754f ,0.00094500027f ,-0.17354476f ,0.571545f ,-0.0075195003f ,-0.18814051f ,0.57852f ,-0.008802f ,-0.18536626f ,0.5697f ,-0.0080775f ,-0.17988525f ,0.5687775f ,-0.00807525f });
  }
}
private class MFVec2f828 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.908f ,0.1649f ,0.8228f ,0.1342f ,0.8238f ,0.1612f ,0.9018f ,0.1387f ,0.818f ,0.1313f ,0.8186f ,0.139f ,0.9163f ,0.135f ,0.9232f ,0.1611f ,0.8031f ,0.1401f ,0.8044f ,0.1596f ,0.8199f ,0.1584f ,0.8025f ,0.1324f ,0.7986f ,0.1359f ,0.8014f ,0.1628f ,0.8179f ,0.1294f ,0.8023f ,0.1305f ,0.8179f ,0.1291f ,0.8023f ,0.1302f ,0.8199f ,0.1671f ,0.8202f ,0.1672f ,0.902f ,0.1343f ,0.914f ,0.1313f ,0.8058f ,0.1681f ,0.8058f ,0.1689f ,0.9035f ,0.1654f ,0.8978f ,0.139f ,0.927f ,0.1595f ,0.9196f ,0.1336f ,0.9092f ,0.1696f ,0.9243f ,0.1658f ,0.9003f ,0.1324f ,0.9142f ,0.1283f });
  }
}
private class MFFloat829 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat830 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32831 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
private class MFInt32832 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
private class MFVec3f833 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1872405f ,0.572184f ,0.00201825f ,-0.187245f ,0.57204f ,-0.00863325f ,-0.18596475f ,0.5641898f ,0.001917f ,-0.18597375f ,0.5639558f ,-0.0081f ,-0.1725435f ,0.56471854f ,0.0023422502f ,-0.178677f ,0.564426f ,0.00405225f ,-0.1725525f ,0.56446654f ,-0.00853875f ,-0.1786905f ,0.564093f ,-0.0104625f ,-0.18314324f ,0.5565938f ,0.00140625f ,-0.18315224f ,0.55637324f ,-0.00758475f ,-0.17253225f ,0.5568255f ,0.0012892501f ,-0.177858f ,0.5568548f ,0.00300375f ,-0.172539f ,0.55661404f ,-0.00731925f ,-0.17786925f ,0.55656224f ,-0.00915975f ,-0.183861f ,0.555075f ,-0.003087f ,-0.17333324f ,0.5550165f ,-0.0030915001f ,-0.17783324f ,0.5540333f ,-0.0030735f ,-0.1837665f ,0.555435f ,-0.0006097499f ,-0.17324549f ,0.555318f ,-0.0051795f ,-0.17812575f ,0.5546205f ,0.00021374994f ,-0.183771f ,0.5552955f ,-0.00543825f ,-0.17324099f ,0.55543727f ,-0.00089325005f ,-0.17813474f ,0.55437976f ,-0.0061515f ,-0.17197424f ,0.57595503f ,0.001719f ,-0.1881315f ,0.57859427f ,-0.008802f ,-0.188127f ,0.578736f ,0.0018472502f ,-0.183438f ,0.5808375f ,0.001404f ,-0.1834425f ,0.580707f ,-0.00846f ,-0.17537175f ,0.5809185f ,0.0013972502f ,-0.17197874f ,0.57582f ,-0.008529751f ,-0.17537625f ,0.58078575f ,-0.008469f ,-0.17968725f ,0.5755343f ,0.00443475f ,-0.179694f ,0.5753273f ,-0.0109125f });
  }
}
private class MFVec2f834 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8204f ,0.1649f ,0.8238f ,0.1612f ,0.8199f ,0.1584f ,0.8044f ,0.1596f ,0.8014f ,0.1628f ,0.8049f ,0.166f ,0.807f ,0.1802f ,0.8204f ,0.1792f ,0.8232f ,0.1783f ,0.8982f ,0.1238f ,0.9018f ,0.1387f ,0.9123f ,0.1202f ,0.9163f ,0.135f ,0.8038f ,0.18f ,0.8141f ,0.1881f ,0.8169f ,0.1876f ,0.8192f ,0.1861f ,0.8213f ,0.1861f ,0.8983f ,0.1142f ,0.9079f ,0.1117f ,0.9004f ,0.112f ,0.9052f ,0.1108f ,0.8067f ,0.1872f ,0.8088f ,0.1869f ,0.8179f ,0.1883f ,0.8142f ,0.1891f ,0.8114f ,0.188f ,0.8106f ,0.1889f ,0.9027f ,0.111f ,0.8192f ,0.1563f ,0.8048f ,0.1573f ,0.8192f ,0.156f ,0.8048f ,0.1571f ,0.8978f ,0.139f ,0.9196f ,0.1336f ,0.8956f ,0.1239f ,0.9147f ,0.119f ,0.8959f ,0.1141f ,0.9101f ,0.1105f ,0.8989f ,0.1113f ,0.9025f ,0.1098f ,0.906f ,0.1094f ,0.9033f ,0.1433f ,0.9173f ,0.1398f });
  }
}
private class MFFloat835 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat836 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32837 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,3,4,-1,4,7,6,-1,7,0,9,-1,9,8,7,-1,11,2,1,-1,1,5,11,-1,5,1,3,-1,3,6,5,-1,2,11,10,-1,4,0,7,-1,15,16,17,-1,14,15,17,-1,13,14,17,-1,20,21,22,-1,27,24,25,-1,25,26,27,-1,17,18,12,-1,12,13,17,-1,23,19,20,-1,20,22,23,-1,9,0,13,-1,13,12,9,-1,0,4,14,-1,14,13,0,-1,4,3,15,-1,15,14,4,-1,3,1,16,-1,16,15,3,-1,1,2,17,-1,17,16,1,-1,2,10,18,-1,18,17,2,-1,10,9,12,-1,12,18,10,-1,11,5,20,-1,20,19,11,-1,5,6,21,-1,21,20,5,-1,6,7,22,-1,22,21,6,-1,7,8,23,-1,23,22,7,-1,8,11,19,-1,19,23,8,-1,8,9,25,-1,25,24,8,-1,9,10,26,-1,26,25,9,-1,10,11,27,-1,27,26,10,-1,11,8,24,-1,24,27,11,-1});
  }
}
private class MFInt32838 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,3,4,5,-1,5,6,3,-1,7,8,9,-1,9,10,7,-1,10,9,29,-1,29,28,10,-1,8,7,11,-1,2,4,3,-1,14,15,16,-1,13,14,16,-1,12,13,16,-1,35,36,37,-1,23,38,39,-1,39,22,23,-1,16,24,25,-1,25,12,16,-1,26,27,17,-1,17,19,26,-1,5,4,12,-1,12,25,5,-1,4,2,13,-1,13,12,4,-1,2,1,14,-1,14,13,2,-1,29,9,33,-1,33,32,29,-1,9,8,34,-1,34,33,9,-1,8,11,40,-1,40,34,8,-1,11,30,41,-1,41,40,11,-1,7,10,35,-1,35,43,7,-1,10,28,36,-1,36,35,10,-1,0,3,19,-1,19,18,0,-1,3,6,26,-1,26,19,3,-1,31,7,43,-1,43,42,31,-1,6,5,21,-1,21,20,6,-1,30,11,22,-1,22,39,30,-1,11,7,23,-1,23,22,11,-1,7,31,38,-1,38,23,7,-1});
  }
}
private class MFVec3f839 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19775926f ,0.68704206f ,-0.027623253f ,-0.170451f ,0.68900406f ,-0.037813503f ,-0.16708724f ,0.6870555f ,-0.027627753f ,-0.1825245f ,0.68998057f ,-0.040864505f ,-0.1937565f ,0.68892753f ,-0.037788752f ,-0.17104724f ,0.70506907f ,-0.027328502f ,-0.18264149f ,0.705456f ,-0.03395025f ,-0.19459125f ,0.7050758f ,-0.027317252f ,-0.19694924f ,0.7088671f ,-0.012406502f ,-0.19859175f ,0.6858113f ,-0.012235502f ,-0.16613999f ,0.6858653f ,-0.012237752f ,-0.1674405f ,0.7088648f ,-0.012377251f ,-0.19508624f ,0.6822001f ,-0.012318752f ,-0.19444725f ,0.68294257f ,-0.027729003f ,-0.190998f ,0.6845333f ,-0.03642075f ,-0.182349f ,0.68544227f ,-0.038772f ,-0.17316675f ,0.68458056f ,-0.036346503f ,-0.17028674f ,0.68294257f ,-0.027713252f ,-0.1688085f ,0.6822451f ,-0.012321001f ,-0.17150399f ,0.7155518f ,-0.010971001f ,-0.1740015f ,0.7118955f ,-0.026010003f ,-0.18247275f ,0.7122308f ,-0.030795753f ,-0.1915245f ,0.7118775f ,-0.025888503f ,-0.19317375f ,0.7155653f ,-0.010993502f ,-0.19486125f ,0.7069298f ,-0.010633501f ,-0.19623375f ,0.6876608f ,-0.010638002f ,-0.1675845f ,0.687708f ,-0.010640251f ,-0.16947675f ,0.70692754f ,-0.010606502f });
  }
}
private class MFVec2f840 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7624f ,0.0345f ,0.7525f ,0.0502f ,0.7571f ,0.0508f ,0.7729f ,0.0334f ,0.7734f ,0.0512f ,0.7924f ,0.0508f ,0.791f ,0.0281f ,0.9531f ,0.2644f ,0.9665f ,0.2386f ,0.9827f ,0.2362f ,0.9706f ,0.2558f ,0.9479f ,0.2423f ,0.7736f ,0.0553f ,0.7595f ,0.0549f ,0.7559f ,0.0544f ,0.7596f ,0.0549f ,0.7736f ,0.0553f ,0.7721f ,0.0268f ,0.7644f ,0.0276f ,0.7723f ,0.0268f ,0.7938f ,0.0298f ,0.795f ,0.0487f ,0.9457f ,0.2448f ,0.9501f ,0.2632f ,0.7926f ,0.0543f ,0.7926f ,0.0544f ,0.7903f ,0.0215f ,0.7903f ,0.0215f ,0.9803f ,0.2531f ,0.9874f ,0.236f ,0.9479f ,0.2423f ,0.9532f ,0.2644f ,0.9832f ,0.2324f ,0.9795f ,0.2325f ,0.9656f ,0.2346f ,0.9721f ,0.2624f ,0.9795f ,0.2602f ,0.9719f ,0.2625f ,0.9502f ,0.2632f ,0.9457f ,0.2447f ,0.9471f ,0.2389f ,0.9471f ,0.2388f ,0.9551f ,0.2707f ,0.955f ,0.2707f });
  }
}
private class MFFloat841 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat842 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32843 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,0,-1,0,2,9,-1,6,10,4,-1,4,0,6,-1,7,8,3,-1,3,1,7,-1,7,1,5,-1,5,11,7,-1,12,13,14,-1,14,15,12,-1,34,35,32,-1,32,33,34,-1,17,20,21,-1,21,16,17,-1,29,30,31,-1,31,24,29,-1,17,18,19,-1,19,20,17,-1,24,25,28,-1,28,29,24,-1,9,2,13,-1,13,12,9,-1,16,21,22,-1,22,23,16,-1,3,8,15,-1,15,14,3,-1,28,25,26,-1,26,27,28,-1,2,0,17,-1,17,16,2,-1,0,4,18,-1,18,17,0,-1,4,5,19,-1,19,18,4,-1,5,1,20,-1,20,19,5,-1,1,3,21,-1,21,20,1,-1,3,14,22,-1,22,21,3,-1,14,13,23,-1,23,22,14,-1,13,2,16,-1,16,23,13,-1,6,9,25,-1,25,24,6,-1,9,12,26,-1,26,25,9,-1,12,15,27,-1,27,26,12,-1,15,8,28,-1,28,27,15,-1,8,7,29,-1,29,28,8,-1,7,11,30,-1,30,29,7,-1,11,10,31,-1,31,30,11,-1,10,6,24,-1,24,31,10,-1,4,10,33,-1,33,32,4,-1,10,11,34,-1,34,33,10,-1,11,5,35,-1,35,34,11,-1,5,4,32,-1,32,35,5,-1});
  }
}
private class MFInt32844 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,1,4,5,-1,5,2,1,-1,38,39,40,-1,40,9,38,-1,38,9,41,-1,41,42,38,-1,12,13,14,-1,14,15,12,-1,16,43,44,-1,44,45,16,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,13,-1,13,12,0,-1,23,22,32,-1,32,33,23,-1,8,7,15,-1,15,14,8,-1,31,30,34,-1,34,35,31,-1,3,2,20,-1,20,23,3,-1,2,5,28,-1,28,20,2,-1,37,41,53,-1,53,52,37,-1,41,9,46,-1,46,53,41,-1,9,40,47,-1,47,46,9,-1,8,14,32,-1,32,22,8,-1,14,13,33,-1,33,32,14,-1,13,3,23,-1,23,33,13,-1,1,0,30,-1,30,27,1,-1,0,12,34,-1,34,30,0,-1,12,15,35,-1,35,34,12,-1,15,7,31,-1,31,35,15,-1,7,6,24,-1,24,31,7,-1,38,42,49,-1,49,48,38,-1,11,4,26,-1,26,25,11,-1,4,1,27,-1,27,26,4,-1,5,4,19,-1,19,18,5,-1,36,42,16,-1,16,45,36,-1,42,41,43,-1,43,16,42,-1,10,5,18,-1,18,17,10,-1});
  }
}
private class MFVec3f845 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19579725f ,0.6612975f ,-0.02849175f ,-0.1694655f ,0.6612975f ,-0.02849175f ,-0.1938915f ,0.6400575f ,-0.028514251f ,-0.172053f ,0.6400125f ,-0.028512001f ,-0.19775926f ,0.6870938f ,-0.027623251f ,-0.16708724f ,0.687105f ,-0.027630001f ,-0.19724625f ,0.6595425f ,-0.012082499f ,-0.16902f ,0.6595425f ,-0.012082499f ,-0.17200574f ,0.6383475f ,-0.0126315f ,-0.194454f ,0.6383475f ,-0.0126315f ,-0.19859175f ,0.68586075f ,-0.0122355f ,-0.16613999f ,0.68591475f ,-0.01223775f ,-0.19251674f ,0.63432f ,-0.01361925f ,-0.1919025f ,0.6353775f ,-0.0273915f ,-0.17410725f ,0.6353325f ,-0.02738475f ,-0.17406675f ,0.63432f ,-0.01361925f ,-0.1917315f ,0.6405525f ,-0.030501f ,-0.19361025f ,0.6616575f ,-0.03125025f ,-0.19545075f ,0.68763155f ,-0.02994075f ,-0.169569f ,0.68764275f ,-0.02994525f ,-0.171639f ,0.6617475f ,-0.031245751f ,-0.17419949f ,0.6405525f ,-0.03049875f ,-0.17560124f ,0.6371775f ,-0.03020625f ,-0.19038825f ,0.6372f ,-0.030213f ,-0.19490625f ,0.659295f ,-0.0090225f ,-0.19245824f ,0.63929254f ,-0.01055925f ,-0.19091925f ,0.636345f ,-0.011259f ,-0.1756215f ,0.636345f ,-0.011259f ,-0.17412075f ,0.63929254f ,-0.01055925f ,-0.17131275f ,0.659385f ,-0.0090247495f ,-0.168084f ,0.68578875f ,-0.00947925f ,-0.196119f ,0.68574375f ,-0.009477f ,-0.194931f ,0.689274f ,-0.02598975f ,-0.1953945f ,0.6885788f ,-0.01413675f ,-0.16876125f ,0.68862826f ,-0.01413675f ,-0.16983224f ,0.68928075f ,-0.02599425f });
  }
}
private class MFVec2f846 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7939f ,0.1016f ,0.7938f ,0.0824f ,0.7694f ,0.0827f ,0.766f ,0.1014f ,0.7924f ,0.0508f ,0.7734f ,0.0512f ,0.7938f ,0.0824f ,0.7939f ,0.1016f ,0.766f ,0.1015f ,0.965f ,0.2069f ,0.7734f ,0.0512f ,0.7924f ,0.0507f ,0.7909f ,0.1057f ,0.7677f ,0.1056f ,0.7677f ,0.1057f ,0.7909f ,0.1057f ,0.9517f ,0.2441f ,0.7765f ,0.0488f ,0.7765f ,0.0488f ,0.789f ,0.0484f ,0.7643f ,0.0825f ,0.7643f ,0.0824f ,0.7614f ,0.1009f ,0.7614f ,0.1009f ,0.7991f ,0.0823f ,0.7971f ,0.0505f ,0.7971f ,0.0505f ,0.7991f ,0.0824f ,0.7688f ,0.0511f ,0.7688f ,0.0511f ,0.7994f ,0.1003f ,0.7994f ,0.1003f ,0.7625f ,0.1038f ,0.7625f ,0.1038f ,0.7972f ,0.1034f ,0.7972f ,0.1034f ,0.9479f ,0.2423f ,0.9665f ,0.2385f ,0.941f ,0.2114f ,0.9376f ,0.1925f ,0.9651f ,0.1878f ,0.9665f ,0.2386f ,0.9479f ,0.2423f ,0.9639f ,0.2415f ,0.9639f ,0.2415f ,0.9517f ,0.244f ,0.9701f ,0.2063f ,0.9698f ,0.1875f ,0.9358f ,0.2124f ,0.9433f ,0.2434f ,0.9433f ,0.2434f ,0.9358f ,0.2123f ,0.9711f ,0.2379f ,0.9711f ,0.2379f });
  }
}
private class MFFloat847 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat848 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32849 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,23,22,-1,22,4,3,-1,5,32,31,-1,31,6,5,-1,4,22,44,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,43,45,-1,45,5,7,-1,4,44,43,-1,43,7,4,-1,45,32,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,40,23,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,42,-1,42,41,16,-1,3,16,41,-1,41,40,3,-1,42,6,31,-1,21,18,19,-1,19,20,21,-1,22,23,19,-1,19,18,22,-1,26,27,28,-1,25,26,28,-1,24,25,28,-1,24,28,29,-1,24,29,30,-1,31,32,21,-1,21,20,31,-1,33,34,35,-1,35,36,37,-1,33,35,37,-1,33,37,38,-1,33,38,39,-1,40,41,26,-1,26,25,40,-1,41,42,27,-1,27,26,41,-1,42,31,28,-1,28,27,42,-1,31,20,29,-1,29,28,31,-1,20,19,30,-1,30,29,20,-1,19,23,24,-1,24,30,19,-1,23,40,25,-1,25,24,23,-1,43,44,36,-1,36,35,43,-1,44,22,37,-1,37,36,44,-1,22,18,38,-1,38,37,22,-1,18,21,39,-1,39,38,18,-1,21,32,33,-1,33,39,21,-1,32,45,34,-1,34,33,32,-1,45,43,35,-1,35,34,45,-1});
  }
}
private class MFInt32850 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1});
  }
}
private class MFVec3f851 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.17174701f ,0.60705f ,-0.0258795f ,-0.19077976f ,0.609435f ,-0.025958251f ,-0.18074927f ,0.60642004f ,-0.02859075f ,-0.19255501f ,0.6331613f ,-0.014764501f ,-0.19255726f ,0.63415354f ,-0.0260055f ,-0.17284052f ,0.63415354f ,-0.0260055f ,-0.17284052f ,0.6331613f ,-0.014764501f ,-0.18203402f ,0.63180006f ,-0.02882925f ,-0.17342326f ,0.6032025f ,-0.0251595f ,-0.18718201f ,0.6012675f ,-0.0257535f ,-0.17342326f ,0.6034275f ,-0.0161595f ,-0.18718201f ,0.60156006f ,-0.01541925f ,-0.18072677f ,0.60054755f ,-0.025749f ,-0.18072677f ,0.60084003f ,-0.0151965f ,-0.17174701f ,0.60729754f ,-0.0155902505f ,-0.18074927f ,0.6068025f ,-0.012564001f ,-0.18203402f ,0.6298245f ,-0.0128092505f ,-0.19077976f ,0.60968256f ,-0.015669f ,-0.19080451f ,0.6457995f ,-0.02811375f ,-0.19080901f ,0.64443606f ,-0.013034251f ,-0.17431426f ,0.64443606f ,-0.013034251f ,-0.17423101f ,0.6457995f ,-0.02811375f ,-0.19388251f ,0.64009804f ,-0.028516501f ,-0.19444501f ,0.6383993f ,-0.0126315f ,-0.19395451f ,0.63868505f ,-0.011583f ,-0.19206001f ,0.6341423f ,-0.01149525f ,-0.18205427f ,0.63094276f ,-0.0117855f ,-0.17340751f ,0.63410854f ,-0.011493f ,-0.17271452f ,0.6386805f ,-0.01158075f ,-0.17477776f ,0.64445406f ,-0.011286001f ,-0.19041526f ,0.64445406f ,-0.011286001f ,-0.1719945f ,0.6383993f ,-0.0126315f ,-0.17204176f ,0.64006203f ,-0.028512001f ,-0.17313752f ,0.6407708f ,-0.029679751f ,-0.17386651f ,0.6354585f ,-0.029855251f ,-0.18206102f ,0.63284177f ,-0.02927925f ,-0.19165951f ,0.6355238f ,-0.029862002f ,-0.19340776f ,0.6407618f ,-0.029679751f ,-0.19013402f ,0.64594126f ,-0.02914875f ,-0.17505452f ,0.64594126f ,-0.02914875f ,-0.19255501f ,0.63289577f ,-0.012372751f ,-0.18203402f ,0.6298065f ,-0.0124425f ,-0.17284052f ,0.63289577f ,-0.012372751f ,-0.18196651f ,0.63183606f ,-0.029081251f ,-0.19229177f ,0.634338f ,-0.028856251f ,-0.17284052f ,0.634338f ,-0.028856251f });
  }
}
private class MFVec2f852 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7878f ,0.1071f ,0.7939f ,0.1016f ,0.766f ,0.1014f ,0.7709f ,0.1068f ,0.9594f ,0.1833f ,0.766f ,0.1015f ,0.7939f ,0.1016f ,0.9426f ,0.186f ,0.7648f ,0.1066f ,0.9545f ,0.1568f ,0.9398f ,0.1599f ,0.771f ,0.1315f ,0.7861f ,0.131f ,0.767f ,0.1345f ,0.7667f ,0.1094f ,0.7644f ,0.1092f ,0.7648f ,0.1066f ,0.7904f ,0.1338f ,0.786f ,0.139f ,0.7863f ,0.1397f ,0.9402f ,0.1559f ,0.9531f ,0.1532f ,0.7709f ,0.1396f ,0.7709f ,0.1403f ,0.794f ,0.107f ,0.7917f ,0.1102f ,0.794f ,0.107f ,0.7939f ,0.1101f ,0.7675f ,0.0958f ,0.7934f ,0.0956f ,0.7934f ,0.0956f ,0.7675f ,0.0958f ,0.7967f ,0.1011f ,0.7964f ,0.1056f ,0.7964f ,0.1088f ,0.7964f ,0.1057f ,0.7967f ,0.1011f ,0.7958f ,0.0955f ,0.7958f ,0.0955f ,0.7633f ,0.1008f ,0.7625f ,0.1056f ,0.7622f ,0.1084f ,0.7625f ,0.1055f ,0.7633f ,0.1008f ,0.765f ,0.0957f ,0.765f ,0.0957f ,0.9651f ,0.1878f ,0.9376f ,0.1925f ,0.9583f ,0.1554f ,0.963f ,0.1801f ,0.9654f ,0.1799f ,0.9654f ,0.1826f ,0.9354f ,0.1602f ,0.9385f ,0.1536f ,0.9536f ,0.1504f ,0.9383f ,0.1837f ,0.9366f ,0.1872f ,0.9361f ,0.1842f });
  }
}
private class MFFloat853 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat854 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32855 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
private class MFInt32856 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
private class MFVec3f857 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.17947575f ,0.5802075f ,-0.027360002f ,-0.171801f ,0.5808375f ,-0.0154035f ,-0.18796276f ,0.5834025f ,-0.0152955f ,-0.18997426f ,0.6025095f ,-0.0154800005f ,-0.18997426f ,0.6022912f ,-0.025564501f ,-0.17175151f ,0.606978f ,-0.0258795f ,-0.19078426f ,0.6093742f ,-0.025956001f ,-0.17175151f ,0.60722774f ,-0.01559025f ,-0.19078426f ,0.609624f ,-0.015669f ,-0.175896f ,0.611433f ,-0.025884f ,-0.175896f ,0.61165124f ,-0.0157995f ,-0.18528976f ,0.6114105f ,-0.0157905f ,-0.18528976f ,0.6111922f ,-0.025875f ,-0.18075375f ,0.6063435f ,-0.02859075f ,-0.18075375f ,0.6067327f ,-0.012561751f ,-0.17946675f ,0.5804775f ,-0.01282725f ,-0.185157f ,0.57537f ,-0.01544625f ,-0.17965351f ,0.5751f ,-0.0152955f ,-0.17180775f ,0.5806575f ,-0.02510775f ,-0.17334451f ,0.57699f ,-0.01611675f ,-0.17334901f ,0.576855f ,-0.02413125f ,-0.1879695f ,0.5832f ,-0.02537775f ,-0.18516375f ,0.5752125f ,-0.02464875f ,-0.17968051f ,0.5743575f ,-0.024642f });
  }
}
private class MFVec2f858 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9398f ,0.1599f ,0.7904f ,0.1338f ,0.7888f ,0.1598f ,0.9363f ,0.1341f ,0.7861f ,0.131f ,0.7859f ,0.138f ,0.9502f ,0.1313f ,0.9545f ,0.1568f ,0.7712f ,0.1385f ,0.7707f ,0.1575f ,0.7854f ,0.1571f ,0.771f ,0.1315f ,0.767f ,0.1345f ,0.7676f ,0.1604f ,0.786f ,0.1292f ,0.7713f ,0.1297f ,0.786f ,0.129f ,0.7713f ,0.1294f ,0.7847f ,0.165f ,0.7849f ,0.1652f ,0.9369f ,0.1301f ,0.9483f ,0.1278f ,0.7712f ,0.1654f ,0.7712f ,0.1661f ,0.9354f ,0.1602f ,0.9325f ,0.1343f ,0.9583f ,0.1554f ,0.9533f ,0.1301f ,0.9406f ,0.1642f ,0.9551f ,0.1612f ,0.9355f ,0.1283f ,0.9488f ,0.1251f });
  }
}
private class MFFloat859 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat860 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32861 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
private class MFInt32862 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
private class MFVec3f863 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.187416f ,0.57750076f ,-0.015099751f ,-0.18742275f ,0.5773073f ,-0.025184251f ,-0.18578699f ,0.5690408f ,-0.015403501f ,-0.18579149f ,0.56886977f ,-0.02466225f ,-0.17235674f ,0.56978774f ,-0.015030001f ,-0.17849475f ,0.569367f ,-0.0132525f ,-0.17236349f ,0.569601f ,-0.025087502f ,-0.17850375f ,0.569115f ,-0.02687625f ,-0.18335475f ,0.5623695f ,-0.015948001f ,-0.18335925f ,0.56222326f ,-0.0238815f ,-0.172314f ,0.562761f ,-0.016065001f ,-0.17766225f ,0.562149f ,-0.014301001f ,-0.1723185f ,0.56262153f ,-0.02366325f ,-0.17767125f ,0.561942f ,-0.025476752f ,-0.18408825f ,0.5604075f ,-0.019872f ,-0.173133f ,0.5604098f ,-0.01987875f ,-0.1776465f ,0.559062f ,-0.019831501f ,-0.18399149f ,0.56084853f ,-0.01769175f ,-0.173043f ,0.56084853f ,-0.021732751f ,-0.1779345f ,0.55978876f ,-0.016944751f ,-0.18399599f ,0.56074053f ,-0.021953251f ,-0.1730385f ,0.56093854f ,-0.017950501f ,-0.1779435f ,0.55957276f ,-0.022560751f ,-0.171792f ,0.580896f ,-0.015403501f ,-0.18796049f ,0.5832675f ,-0.0253755f ,-0.18795374f ,0.5834588f ,-0.015293251f ,-0.1832715f ,0.5853578f ,-0.015723001f ,-0.18327825f ,0.58518f ,-0.025062751f ,-0.17520525f ,0.585414f ,-0.015729751f ,-0.17179875f ,0.5807115f ,-0.0251055f ,-0.175212f ,0.58523625f ,-0.025071751f ,-0.17950274f ,0.58054274f ,-0.0128295f ,-0.17951174f ,0.580266f ,-0.027357752f });
  }
}
private class MFVec2f864 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7853f ,0.163f ,0.7888f ,0.1598f ,0.7854f ,0.1571f ,0.7707f ,0.1575f ,0.7676f ,0.1604f ,0.7706f ,0.1634f ,0.7714f ,0.1739f ,0.7841f ,0.1736f ,0.787f ,0.1731f ,0.9344f ,0.121f ,0.9363f ,0.1341f ,0.9479f ,0.1182f ,0.9502f ,0.1313f ,0.7684f ,0.1736f ,0.7774f ,0.1846f ,0.7801f ,0.1842f ,0.7824f ,0.1828f ,0.7844f ,0.1829f ,0.9351f ,0.111f ,0.9443f ,0.1091f ,0.9372f ,0.109f ,0.9418f ,0.1081f ,0.7705f ,0.1833f ,0.7725f ,0.1831f ,0.781f ,0.1849f ,0.7774f ,0.1856f ,0.7748f ,0.1843f ,0.774f ,0.1852f ,0.9395f ,0.1081f ,0.7849f ,0.1552f ,0.7712f ,0.1555f ,0.7849f ,0.1549f ,0.7712f ,0.1553f ,0.9325f ,0.1343f ,0.9533f ,0.1301f ,0.9319f ,0.1209f ,0.9502f ,0.1172f ,0.9329f ,0.1108f ,0.9464f ,0.108f ,0.9358f ,0.1082f ,0.9393f ,0.1069f ,0.9427f ,0.1067f ,0.9372f ,0.1384f ,0.9506f ,0.1357f });
  }
}
private class MFFloat865 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat866 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32867 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,9,0,-1,0,3,11,-1,5,2,1,-1,1,4,5,-1,3,0,2,-1,2,5,3,-1,9,13,8,-1,8,0,9,-1,2,7,6,-1,6,1,2,-1,6,14,10,-1,10,1,6,-1,1,10,12,-1,12,4,1,-1,0,8,7,-1,7,2,0,-1,25,26,27,-1,27,20,25,-1,16,17,18,-1,16,18,19,-1,15,16,19,-1,30,31,32,-1,29,30,32,-1,28,29,32,-1,11,3,16,-1,16,15,11,-1,3,5,17,-1,17,16,3,-1,5,4,18,-1,18,17,5,-1,4,12,19,-1,19,18,4,-1,24,21,22,-1,22,23,24,-1,20,21,24,-1,24,25,20,-1,9,11,21,-1,21,20,9,-1,11,15,22,-1,22,21,11,-1,15,19,23,-1,23,22,15,-1,19,12,24,-1,24,23,19,-1,12,10,25,-1,25,24,12,-1,10,14,26,-1,26,25,10,-1,14,13,27,-1,27,26,14,-1,13,9,20,-1,20,27,13,-1,14,6,29,-1,29,28,14,-1,6,7,30,-1,30,29,6,-1,7,8,31,-1,31,30,7,-1,8,13,32,-1,32,31,8,-1,13,14,28,-1,28,32,13,-1});
  }
}
private class MFInt32868 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,33,34,6,-1,6,35,33,-1,3,2,5,-1,5,4,3,-1,1,8,9,-1,9,2,1,-1,34,37,11,-1,11,6,34,-1,11,12,38,-1,38,6,11,-1,6,38,39,-1,39,35,6,-1,2,9,10,-1,10,5,2,-1,40,16,41,-1,41,42,40,-1,20,21,22,-1,20,22,23,-1,19,20,23,-1,43,44,45,-1,25,43,45,-1,24,25,45,-1,0,3,20,-1,20,19,0,-1,3,4,21,-1,21,20,3,-1,4,7,22,-1,22,21,4,-1,7,14,23,-1,23,22,7,-1,29,30,31,-1,31,32,29,-1,18,30,29,-1,29,15,18,-1,1,0,30,-1,30,18,1,-1,0,19,31,-1,31,30,0,-1,19,23,32,-1,32,31,19,-1,23,14,29,-1,29,32,23,-1,14,13,15,-1,15,29,14,-1,38,12,16,-1,16,40,38,-1,12,36,41,-1,41,16,12,-1,8,1,18,-1,18,17,8,-1,12,11,25,-1,25,24,12,-1,11,37,43,-1,43,25,11,-1,10,9,27,-1,27,26,10,-1,9,8,28,-1,28,27,9,-1,36,12,24,-1,24,45,36,-1});
  }
}
private class MFVec3f869 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19349325f ,0.6631875f ,-0.041503504f ,-0.1709685f ,0.6631875f ,-0.04150125f ,-0.18213975f ,0.66453755f ,-0.04487625f ,-0.19251676f ,0.6424875f ,-0.042288754f ,-0.172314f ,0.6424875f ,-0.042288754f ,-0.1816965f ,0.64305f ,-0.045207f ,-0.1704465f ,0.68892527f ,-0.037809003f ,-0.18251775f ,0.68990403f ,-0.04086f ,-0.19374976f ,0.68885106f ,-0.037786502f ,-0.1957905f ,0.661185f ,-0.028487252f ,-0.16945875f ,0.661185f ,-0.028487252f ,-0.19388475f ,0.63992256f ,-0.028509751f ,-0.17204624f ,0.6399f ,-0.0285075f ,-0.1977525f ,0.6869655f ,-0.02761875f ,-0.1670805f ,0.68697906f ,-0.027625501f ,-0.190368f ,0.63564754f ,-0.030093752f ,-0.188721f ,0.6382125f ,-0.039924003f ,-0.181728f ,0.6386625f ,-0.0419895f ,-0.17538525f ,0.63823503f ,-0.040023003f ,-0.175194f ,0.635625f ,-0.030087002f ,-0.1936035f ,0.660825f ,-0.025400251f ,-0.1917405f ,0.63994503f ,-0.026401501f ,-0.18915525f ,0.6367725f ,-0.02700675f ,-0.17647426f ,0.63675004f ,-0.027f ,-0.1741815f ,0.6399f ,-0.026415002f ,-0.17163225f ,0.660915f ,-0.025395751f ,-0.16956225f ,0.6866483f ,-0.025272002f ,-0.195444f ,0.68663704f ,-0.025267502f ,-0.17140275f ,0.6900098f ,-0.029655002f ,-0.173205f ,0.6909728f ,-0.035464503f ,-0.18252675f ,0.6918683f ,-0.037914753f ,-0.1911915f ,0.6909278f ,-0.035563502f ,-0.19337401f ,0.69001204f ,-0.029650502f });
  }
}
private class MFVec2f870 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.766f ,0.1014f ,0.7694f ,0.0827f ,0.748f ,0.0813f ,0.7455f ,0.0995f ,0.7415f ,0.0989f ,0.7435f ,0.0798f ,0.9864f ,0.2045f ,0.7455f ,0.0995f ,0.7734f ,0.0512f ,0.7571f ,0.0508f ,0.7525f ,0.0502f ,0.9827f ,0.2362f ,0.9665f ,0.2386f ,0.7694f ,0.0827f ,0.766f ,0.1015f ,0.774f ,0.0829f ,0.9619f ,0.2395f ,0.7782f ,0.0512f ,0.774f ,0.083f ,0.7619f ,0.1052f ,0.7474f ,0.1039f ,0.7446f ,0.1034f ,0.7473f ,0.1038f ,0.7619f ,0.1052f ,0.9712f ,0.2404f ,0.9799f ,0.239f ,0.7566f ,0.0479f ,0.7602f ,0.0485f ,0.7691f ,0.0486f ,0.771f ,0.1015f ,0.771f ,0.1014f ,0.768f ,0.1042f ,0.768f ,0.1042f ,0.9897f ,0.1861f ,0.991f ,0.2053f ,0.9856f ,0.1862f ,0.9665f ,0.2385f ,0.9874f ,0.236f ,0.965f ,0.2069f ,0.9651f ,0.1878f ,0.9604f ,0.2075f ,0.9619f ,0.2395f ,0.9604f ,0.2074f ,0.9836f ,0.239f ,0.98f ,0.239f ,0.9712f ,0.2404f });
  }
}
private class MFFloat871 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat872 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32873 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10,11,6,-1,6,8,10,-1,0,9,5,-1,5,3,0,-1,11,1,4,-1,4,6,11,-1,2,0,3,-1,3,7,2,-1,1,2,7,-1,7,4,1,-1,9,10,8,-1,8,5,9,-1,5,8,7,-1,7,3,5,-1,6,4,7,-1,7,8,6,-1,17,2,1,-1,1,13,17,-1,14,25,26,-1,26,15,14,-1,0,14,15,-1,15,9,0,-1,13,1,11,-1,11,12,13,-1,2,17,14,-1,14,0,2,-1,12,36,34,-1,9,15,16,-1,16,10,9,-1,16,12,11,-1,11,10,16,-1,16,15,37,-1,37,35,16,-1,12,16,35,-1,35,36,12,-1,37,15,26,-1,12,34,23,-1,23,13,12,-1,13,23,24,-1,24,17,13,-1,17,24,25,-1,25,14,17,-1,21,20,19,-1,22,21,19,-1,18,22,19,-1,23,19,20,-1,20,24,23,-1,24,20,21,-1,21,25,24,-1,25,21,22,-1,22,26,25,-1,27,33,32,-1,27,32,31,-1,31,30,29,-1,31,29,28,-1,27,31,28,-1,34,18,19,-1,19,23,34,-1,35,29,30,-1,30,36,35,-1,36,30,31,-1,31,34,36,-1,34,31,32,-1,32,18,34,-1,18,32,33,-1,33,22,18,-1,22,33,27,-1,27,26,22,-1,26,27,28,-1,28,37,26,-1,37,28,29,-1,29,35,37,-1});
  }
}
private class MFInt32874 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,5,6,-1,6,7,4,-1,1,8,9,-1,9,2,1,-1,40,4,7,-1,7,41,40,-1,8,10,11,-1,11,9,8,-1,5,38,39,-1,39,6,5,-1,6,39,41,-1,41,7,6,-1,2,9,11,-1,11,3,2,-1,12,10,8,-1,8,13,12,-1,14,43,44,-1,44,17,14,-1,4,14,17,-1,17,5,4,-1,13,8,1,-1,1,18,13,-1,40,42,14,-1,14,4,40,-1,18,19,20,-1,5,17,45,-1,45,38,5,-1,21,18,1,-1,1,0,21,-1,45,17,46,-1,46,47,45,-1,18,21,23,-1,23,19,18,-1,46,17,44,-1,18,20,24,-1,24,13,18,-1,13,24,25,-1,25,12,13,-1,42,48,43,-1,43,14,42,-1,28,29,30,-1,27,28,30,-1,26,27,30,-1,24,30,29,-1,29,25,24,-1,25,29,28,-1,28,15,25,-1,15,28,27,-1,27,16,15,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,34,36,37,-1,31,34,37,-1,20,26,30,-1,30,24,20,-1,23,36,35,-1,35,19,23,-1,19,35,34,-1,34,20,19,-1,20,34,33,-1,33,26,20,-1,26,33,32,-1,32,27,26,-1,27,32,31,-1,31,16,27,-1,16,31,37,-1,37,22,16,-1,22,37,36,-1,36,23,22,-1});
  }
}
private class MFVec3f875 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.17252551f ,0.62123626f ,-0.0415125f ,-0.19028701f ,0.62321854f ,-0.04187025f ,-0.18021375f ,0.62088305f ,-0.0441315f ,-0.17437726f ,0.61820555f ,-0.040914f ,-0.18685126f ,0.61671156f ,-0.0415755f ,-0.17438626f ,0.618057f ,-0.0332325f ,-0.18686701f ,0.6165203f ,-0.0326475f ,-0.180243f ,0.616176f ,-0.0416115f ,-0.180243f ,0.61605227f ,-0.0331785f ,-0.17253451f ,0.6210383f ,-0.032436f ,-0.18075375f ,0.62049603f ,-0.029583f ,-0.19029826f ,0.62309927f ,-0.0323685f ,-0.19171351f ,0.6346643f ,-0.0312795f ,-0.191529f ,0.6373418f ,-0.0420705f ,-0.17297776f ,0.6373418f ,-0.0420705f ,-0.17291926f ,0.6346643f ,-0.0312795f ,-0.18190801f ,0.6316875f ,-0.029313f ,-0.181701f ,0.63799876f ,-0.04486725f ,-0.19027801f ,0.64592105f ,-0.02863125f ,-0.1887615f ,0.6483488f ,-0.0403965f ,-0.18126225f ,0.6487673f ,-0.04287825f ,-0.17416126f ,0.6483398f ,-0.04026825f ,-0.1740825f ,0.64589405f ,-0.028503f ,-0.19252126f ,0.64246505f ,-0.04229325f ,-0.181701f ,0.643023f ,-0.0452115f ,-0.1723185f ,0.64246505f ,-0.04229325f ,-0.17205076f ,0.6398663f ,-0.028512001f ,-0.1727685f ,0.6403658f ,-0.0273825f ,-0.17340976f ,0.6349703f ,-0.02787075f ,-0.1821555f ,0.6325763f ,-0.028676251f ,-0.19109026f ,0.6350333f ,-0.02783925f ,-0.19283625f ,0.6404198f ,-0.027522f ,-0.1897155f ,0.6457703f ,-0.02775825f ,-0.17479576f ,0.6457455f ,-0.027639f ,-0.19388926f ,0.6399f ,-0.028516501f ,-0.18197551f ,0.6316403f ,-0.02908125f ,-0.1922985f ,0.6341423f ,-0.0288585f ,-0.1728495f ,0.6341423f ,-0.0288585f });
  }
}
private class MFVec2f876 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7578f ,0.1276f ,0.7543f ,0.1247f ,0.753f ,0.131f ,0.7531f ,0.1316f ,0.9854f ,0.1598f ,0.9725f ,0.1615f ,0.9734f ,0.1584f ,0.9844f ,0.1569f ,0.7413f ,0.123f ,0.7403f ,0.1293f ,0.7378f ,0.1249f ,0.7401f ,0.1299f ,0.7405f ,0.104f ,0.7443f ,0.1047f ,0.9859f ,0.1809f ,0.7455f ,0.0995f ,0.766f ,0.1015f ,0.9713f ,0.1822f ,0.7589f ,0.1059f ,0.7648f ,0.1066f ,0.766f ,0.1014f ,0.7622f ,0.1091f ,0.7648f ,0.1066f ,0.7644f ,0.1092f ,0.7455f ,0.0995f ,0.7415f ,0.0989f ,0.7664f ,0.0954f ,0.7667f ,0.0954f ,0.7485f ,0.0932f ,0.7449f ,0.0928f ,0.7484f ,0.0932f ,0.7683f ,0.1016f ,0.7686f ,0.0957f ,0.7683f ,0.0956f ,0.7679f ,0.1015f ,0.7671f ,0.1055f ,0.7666f ,0.1084f ,0.7674f ,0.1056f ,0.9687f ,0.1615f ,0.9723f ,0.1564f ,0.9888f ,0.1589f ,0.9852f ,0.1547f ,0.9898f ,0.1809f ,0.9856f ,0.1862f ,0.9651f ,0.1878f ,0.9675f ,0.1796f ,0.9654f ,0.1826f ,0.9654f ,0.1799f ,0.9897f ,0.1861f });
  }
}
private class MFFloat877 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat878 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32879 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1});
  }
}
private class MFInt32880 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1});
  }
}
private class MFVec3f881 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.17963775f ,0.60232055f ,-0.043692753f ,-0.17215875f ,0.6031395f ,-0.032409f ,-0.187722f ,0.6048765f ,-0.03229875f ,-0.189657f ,0.61760026f ,-0.032555252f ,-0.189639f ,0.617796f ,-0.04163175f ,-0.17253f ,0.6213128f ,-0.041503504f ,-0.19029374f ,0.623295f ,-0.04186575f ,-0.172539f ,0.6211148f ,-0.032427f ,-0.19030274f ,0.6231758f ,-0.032361753f ,-0.17632125f ,0.6246968f ,-0.041807253f ,-0.17633025f ,0.6245775f ,-0.0323055f ,-0.18470925f ,0.62424004f ,-0.03231225f ,-0.18470025f ,0.62435704f ,-0.041814003f ,-0.1802205f ,0.6209595f ,-0.044122502f ,-0.18075825f ,0.6205703f ,-0.029571751f ,-0.17963775f ,0.6027593f ,-0.029904751f ,-0.18563175f ,0.598572f ,-0.032463003f ,-0.1824165f ,0.59814006f ,-0.0323145f ,-0.17215875f ,0.60284704f ,-0.041501254f ,-0.17335574f ,0.600102f ,-0.033108752f ,-0.17382374f ,0.59990406f ,-0.040461753f ,-0.18775125f ,0.6045728f ,-0.04175775f ,-0.1856565f ,0.59832f ,-0.04097025f ,-0.18248175f ,0.5979825f ,-0.0409635f });
  }
}
private class MFVec2f882 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9725f ,0.1615f ,0.7578f ,0.1276f ,0.7541f ,0.1444f ,0.9727f ,0.1441f ,0.7543f ,0.1247f ,0.7533f ,0.1302f ,0.9851f ,0.1424f ,0.9854f ,0.1598f ,0.7404f ,0.1285f ,0.7384f ,0.1404f ,0.7513f ,0.1418f ,0.7413f ,0.123f ,0.7378f ,0.1249f ,0.7355f ,0.1424f ,0.7545f ,0.1231f ,0.7416f ,0.1216f ,0.7546f ,0.1229f ,0.7417f ,0.1214f ,0.7496f ,0.1479f ,0.7498f ,0.1481f ,0.9738f ,0.1409f ,0.9839f ,0.1396f ,0.738f ,0.1467f ,0.7381f ,0.1469f ,0.9687f ,0.1616f ,0.9694f ,0.1441f ,0.9888f ,0.1589f ,0.988f ,0.1416f ,0.9725f ,0.165f ,0.9854f ,0.1633f ,0.9728f ,0.1395f ,0.9846f ,0.1375f });
  }
}
private class MFFloat883 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat884 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32885 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1});
  }
}
private class MFInt32886 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1});
  }
}
private class MFVec3f887 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.18756452f ,0.600165f ,-0.032132253f ,-0.18758927f ,0.59988606f ,-0.041499f ,-0.18690526f ,0.59157676f ,-0.032332502f ,-0.18695927f ,0.5913113f ,-0.041112002f ,-0.17244002f ,0.5912168f ,-0.031977f ,-0.17947352f ,0.5913518f ,-0.030294001f ,-0.17249852f ,0.5909288f ,-0.04151475f ,-0.17955227f ,0.59095806f ,-0.04321125f ,-0.18574427f ,0.5849618f ,-0.03273975f ,-0.18580277f ,0.58472776f ,-0.04043025f ,-0.17225552f ,0.58423054f ,-0.03285f ,-0.17887501f ,0.58430254f ,-0.031142252f ,-0.17231402f ,0.5840078f ,-0.04021425f ,-0.17896052f ,0.58397627f ,-0.041976f ,-0.18625952f ,0.5834565f ,-0.03654675f ,-0.17369327f ,0.5824328f ,-0.036553502f ,-0.17933401f ,0.5818298f ,-0.03651075f ,-0.18605927f ,0.58382106f ,-0.034434002f ,-0.17351551f ,0.5827343f ,-0.038349003f ,-0.17959277f ,0.5824643f ,-0.0337095f ,-0.18609752f ,0.5836725f ,-0.038562752f ,-0.17348401f ,0.5828603f ,-0.034683753f ,-0.17965576f ,0.58221227f ,-0.039154503f ,-0.17221501f ,0.6030968f ,-0.03242025f ,-0.18780527f ,0.6045345f ,-0.04177125f ,-0.18777601f ,0.60483605f ,-0.03231f ,-0.18310277f ,0.6063705f ,-0.032724f ,-0.18310277f ,0.6060893f ,-0.041463003f ,-0.17527276f ,0.6065595f ,-0.03273075f ,-0.17221501f ,0.6028043f ,-0.0415125f ,-0.17527276f ,0.6062783f ,-0.041469753f ,-0.17973001f ,0.60272104f ,-0.029918252f ,-0.17973001f ,0.6022823f ,-0.043704003f });
  }
}
private class MFVec2f888 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.7505f ,0.1465f ,0.7541f ,0.1444f ,0.7513f ,0.1418f ,0.7384f ,0.1404f ,0.7355f ,0.1424f ,0.7377f ,0.1451f ,0.7372f ,0.1554f ,0.7483f ,0.1563f ,0.7507f ,0.1564f ,0.9726f ,0.1318f ,0.9727f ,0.1441f ,0.9847f ,0.1302f ,0.9851f ,0.1424f ,0.7347f ,0.1548f ,0.7409f ,0.1641f ,0.7434f ,0.1641f ,0.7455f ,0.1632f ,0.7469f ,0.164f ,0.9746f ,0.124f ,0.9828f ,0.1229f ,0.9766f ,0.1225f ,0.9807f ,0.1219f ,0.7351f ,0.1625f ,0.7369f ,0.1626f ,0.7443f ,0.165f ,0.7408f ,0.1649f ,0.7387f ,0.1637f ,0.7379f ,0.1643f ,0.9788f ,0.1219f ,0.7512f ,0.1402f ,0.7392f ,0.1389f ,0.7512f ,0.14f ,0.7393f ,0.1388f ,0.9694f ,0.1441f ,0.988f ,0.1416f ,0.9705f ,0.1317f ,0.9868f ,0.1295f ,0.9727f ,0.1237f ,0.9848f ,0.1221f ,0.9756f ,0.1218f ,0.9787f ,0.1209f ,0.9817f ,0.1209f ,0.973f ,0.1475f ,0.9849f ,0.146f });
  }
}
}
