package net.coderextreme..;
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
public class JinLOA1 implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new JinLOA1().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D(".././JinLOA1.new.java.x3d");
    model.toFileJSON(".././JinLOA1.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("JinLOA1.x3d"))
        .addMeta(new meta().setName("creator").setContent("Jin Hoon Lee and Min Joo Lee"))
        .addMeta(new meta().setName("translator").setContent("Chul Hee Jung and Myeong Won Lee"))
        .addMeta(new meta().setName("created").setContent("31 March 2011"))
        .addMeta(new meta().setName("translated").setContent("1 November 2014"))
        .addMeta(new meta().setName("modified").setContent("23 December 2021"))
        .addMeta(new meta().setName("TODO").setContent("rescale smaller than 30m! convert inches to meters? what about motion scaling?"))
        .addMeta(new meta().setName("description").setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacter00ReadMe.txt"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharactersIllustrated.pdf"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA1.x3d"))
        .addMeta(new meta().setName("generator").setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"))
        .addMeta(new meta().setName("generator").setContent("Suwon HAnim Converter"))
        .addMeta(new meta().setName("generator").setContent("Gnu Image Manipulation Program, http://www.gimp.org"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("JinLOA1.x3d"))
        .addChild(new NavigationInfo().setSpeed(1.5f))
        .addChild(new Viewpoint().setCenterOfRotation(new double[] {0f,1f,0f}).setDescription("JinLOA1").setPosition(new double[] {0f,1f,3f}))
        .addChild(new HAnimHumanoid().setName("JinLOA1").setDEF("hanim_JinLOA1").setLoa(1).setScale(new double[] {0.0225f,0.0225f,0.0225f}).setVersion("2.0")
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .addValue(new MetadataString().setName("authorName").setValue(new MFString0().getArray()))
            .addValue(new MetadataString().setName("authorEmail").setValue(new MFString1().getArray()))
            .addValue(new MetadataString().setName("creationDate").setValue(new MFString2().getArray()))
            .addValue(new MetadataString().setName("gender").setValue(new MFString3().getArray()))
            .addValue(new MetadataFloat().setName("height").setValue(new MFFloat4().getArray()))
            .addValue(new MetadataFloat().setName("weight").setValue(new MFFloat5().getArray()))
            .addValue(new MetadataString().setName("humanoidVersion").setValue(new MFString6().getArray())))
          .addSkeleton(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new double[] {0f,30.530001f,-0.7076f}).setUlimit(new MFFloat7().getArray()).setLlimit(new MFFloat8().getArray()).setContainerFieldOverride("skeleton"))
            .addChild(new HAnimSegment("hanim_humanoid_root").setName("sacrum").setDEF("hanim_sacrum")
              .addChild(new Transform().setTranslation(new double[] {0f,30.530001f,-0.7076f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                    .setTexture(new ImageTexture().setDEF("JinLOA1TextureAtlas").setUrl(new MFString9().getArray())))
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3210().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3211().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f12().getArray()))
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f13().getArray()))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new double[] {0f,35.799999f,-0.7076f}).setUlimit(new MFFloat14().getArray()).setLlimit(new MFFloat15().getArray())
              .addChild(new HAnimSegment("hanim_sacroiliac").setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new Transform().setTranslation(new double[] {0f,35.799999f,-0.7076f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                      .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3216().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3217().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f18().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f19().getArray()))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("l_hip").setDEF("hanim_l_hip").setCenter(new double[] {4.207f,32.02f,-0.8155f}).setUlimit(new MFFloat20().getArray()).setLlimit(new MFFloat21().getArray())
                .addChild(new HAnimSegment("hanim_l_hip").setName("l_thigh").setDEF("hanim_l_thigh")
                  .addChild(new Transform().setTranslation(new double[] {4.207f,32.02f,-0.8155f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3222().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3223().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f24().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f25().getArray()))))))
                .addChild(new HAnimJoint("hanim_l_hip").setName("l_knee").setDEF("hanim_l_knee").setCenter(new double[] {4.116f,17.26f,-0.8639f}).setUlimit(new MFFloat26().getArray()).setLlimit(new MFFloat27().getArray())
                  .addChild(new HAnimSegment("hanim_l_knee").setName("l_calf").setDEF("hanim_l_calf")
                    .addChild(new Transform().setTranslation(new double[] {4.116f,17.26f,-0.8639f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3228().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3229().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f31().getArray()))))))
                  .addChild(new HAnimJoint("hanim_l_knee").setName("l_talocrural").setDEF("hanim_l_talocrural").setCenter(new double[] {3.854f,3.939f,-0.7038f}).setUlimit(new MFFloat32().getArray()).setLlimit(new MFFloat33().getArray())
                    .addChild(new HAnimSegment("hanim_l_talocrural").setName("l_talus").setDEF("hanim_l_talus")
                      .addChild(new Transform().setTranslation(new double[] {3.854f,3.939f,-0.7038f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3234().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3235().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f36().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f37().getArray()))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_metatarsophalangeal_2").setDEF("hanim_l_metatarsophalangeal_2").setCenter(new double[] {3.854f,3.64f,0.7402f}).setUlimit(new MFFloat38().getArray()).setLlimit(new MFFloat39().getArray())
                      .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setName("l_tarsal_proximal_phalanx_2").setDEF("hanim_l_tarsal_proximal_phalanx_2")
                        .addComments("TODO append _2")
                        .addChild(new Transform().setTranslation(new double[] {3.854f,3.64f,0.7402f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3240().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3241().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f43().getArray()))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setName("r_hip").setDEF("hanim_r_hip").setCenter(new double[] {-4.207f,32.02f,-0.8155f}).setUlimit(new MFFloat44().getArray()).setLlimit(new MFFloat45().getArray())
                .addChild(new HAnimSegment("hanim_r_hip").setName("r_thigh").setDEF("hanim_r_thigh")
                  .addChild(new Transform().setTranslation(new double[] {-4.207f,32.02f,-0.8155f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3246().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3247().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f48().getArray()))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f49().getArray()))))))
                .addChild(new HAnimJoint("hanim_r_hip").setName("r_knee").setDEF("hanim_r_knee").setCenter(new double[] {-4.116f,17.26f,-0.8639f}).setUlimit(new MFFloat50().getArray()).setLlimit(new MFFloat51().getArray())
                  .addChild(new HAnimSegment("hanim_r_knee").setName("r_calf").setDEF("hanim_r_calf")
                    .addChild(new Transform().setTranslation(new double[] {-4.116f,17.26f,-0.8639f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3252().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3253().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f55().getArray()))))))
                  .addChild(new HAnimJoint("hanim_r_knee").setName("r_talocrural").setDEF("hanim_r_talocrural").setCenter(new double[] {-3.854f,3.939f,-0.7038f}).setUlimit(new MFFloat56().getArray()).setLlimit(new MFFloat57().getArray())
                    .addChild(new HAnimSegment("hanim_r_talocrural").setName("r_talus").setDEF("hanim_r_talus")
                      .addChild(new Transform().setTranslation(new double[] {-3.854f,3.939f,-0.7038f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3258().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3259().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f60().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f61().getArray()))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new double[] {-3.854f,3.64f,0.7402f}).setUlimit(new MFFloat62().getArray()).setLlimit(new MFFloat63().getArray())
                      .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2")
                        .addComments("TODO append _2")
                        .addChild(new Transform().setTranslation(new double[] {-3.854f,3.64f,0.7402f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3264().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3265().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f66().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f67().getArray())))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("vl5").setDEF("hanim_vl5").setCenter(new double[] {0f,40.07f,-0.8527f}).setUlimit(new MFFloat68().getArray()).setLlimit(new MFFloat69().getArray())
              .addChild(new HAnimSegment("hanim_vl5").setName("l5").setDEF("hanim_l5")
                .addChild(new Transform().setTranslation(new double[] {0f,40.07f,-0.8527f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                      .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3270().getArray().append(new MFInt3271().getArray())).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3272().getArray().append(new MFInt3273().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f74().getArray()))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f75().getArray()))))))
              .addChild(new HAnimJoint("hanim_vl5").setName("skullbase").setDEF("hanim_skullbase").setCenter(new double[] {0f,57.43f,-0.6863f}).setUlimit(new MFFloat76().getArray()).setLlimit(new MFFloat77().getArray())
                .addChild(new HAnimSegment("hanim_skullbase").setName("skull").setDEF("hanim_skull")
                  .addChild(new Transform().setTranslation(new double[] {0f,57.43f,-0.6863f})
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                        .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3278().getArray().append(new MFInt3279().getArray()).append(new MFInt3280().getArray())).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3281().getArray().append(new MFInt3282().getArray()).append(new MFInt3283().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f84().getArray().append(new MFVec3f85().getArray())))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f86().getArray()))))))
                .addChild(new HAnimJoint("hanim_skullbase").setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new double[] {5.975f,52f,-0.1452f}).setUlimit(new MFFloat87().getArray()).setLlimit(new MFFloat88().getArray())
                  .addChild(new HAnimSegment("hanim_l_shoulder").setName("l_upperarm").setDEF("hanim_l_upperarm")
                    .addChild(new Transform().setTranslation(new double[] {5.975f,52f,-0.1452f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3289().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3290().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f91().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f92().getArray()))))))
                  .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new double[] {8.093f,40.380001f,-0.2502f}).setUlimit(new MFFloat93().getArray()).setLlimit(new MFFloat94().getArray())
                    .addChild(new HAnimSegment("hanim_l_elbow").setName("l_forearm").setDEF("hanim_l_forearm")
                      .addChild(new Transform().setTranslation(new double[] {8.093f,40.380001f,-0.2502f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3295().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt3296().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f97().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f98().getArray()))))))
                    .addChild(new HAnimJoint("hanim_l_elbow").setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setCenter(new double[] {7.808f,31.459999f,-0.05849f}).setUlimit(new MFFloat99().getArray()).setLlimit(new MFFloat100().getArray())
                      .addChild(new HAnimSegment("hanim_l_radiocarpal").setName("l_carpal").setDEF("hanim_l_carpal")
                        .addChild(new Transform().setTranslation(new double[] {7.808f,31.459999f,-0.05849f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32101().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32102().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f103().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f104().getArray())))))))))
                .addChild(new HAnimJoint("hanim_skullbase").setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new double[] {-5.975f,52f,-0.1452f}).setUlimit(new MFFloat105().getArray()).setLlimit(new MFFloat106().getArray())
                  .addChild(new HAnimSegment("hanim_r_shoulder").setName("r_upperarm").setDEF("hanim_r_upperarm")
                    .addChild(new Transform().setTranslation(new double[] {-5.975f,52f,-0.1452f})
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                          .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32107().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32108().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f109().getArray()))
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f110().getArray()))))))
                  .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new double[] {-8.093f,40.380001f,-0.2502f}).setUlimit(new MFFloat111().getArray()).setLlimit(new MFFloat112().getArray())
                    .addChild(new HAnimSegment("hanim_r_elbow").setName("r_forearm").setDEF("hanim_r_forearm")
                      .addChild(new Transform().setTranslation(new double[] {-8.093f,40.380001f,-0.2502f})
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                            .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32113().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32114().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f115().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f116().getArray()))))))
                    .addChild(new HAnimJoint("hanim_r_elbow").setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setCenter(new double[] {-7.808f,31.459999f,-0.05849f}).setUlimit(new MFFloat117().getArray()).setLlimit(new MFFloat118().getArray())
                      .addChild(new HAnimSegment("hanim_r_radiocarpal").setName("r_carpal").setDEF("hanim_r_carpal")
                        .addChild(new Transform().setTranslation(new double[] {-7.808f,31.459999f,-0.05849f})
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new double[] {0.588f,0.588f,0.588f}))
                              .setTexture(new ImageTexture().setUSE("JinLOA1TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32119().getArray()).setCreaseAngle(3.14159f).setTexCoordIndex(new MFInt32120().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f121().getArray()))
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f122().getArray()))))))))))))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_humanoid_root"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_sacroiliac"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_vl5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_skullbase"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_l_elbow"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_r_elbow"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_l_hip"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_r_hip"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_l_knee"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_r_knee"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_l_radiocarpal"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_r_radiocarpal"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_l_shoulder"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_r_shoulder"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_l_talocrural"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_JinLOA1").setContainerFieldOverride("joints")).setUSE("hanim_r_talocrural"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_sacrum"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_pelvis"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_l5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_skull"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_l_calf"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_r_calf"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_r_carpal"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_l_forearm"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_r_forearm"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_l_talus"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_r_talus"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_l_thigh"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_r_thigh"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_l_upperarm"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_JinLOA1").setContainerFieldOverride("segments")).setUSE("hanim_r_upperarm"))))      ;
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
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1.5f});
  }
}
private class MFFloat5 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {50f});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"validation testing"});
  }
}
private class MFFloat7 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat8 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/Jin.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png"});
  }
}
private class MFInt3210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFInt3211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFVec3f12 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0f,10.79f,0.1424f,0f,10.06f,-2.825f,-2.283f,10.06f,-2.428f,-3.954f,10.06f,-1.948f,-4.566f,10.06f,0.1424f,-3.954f,10.06f,2.233f,-2.283f,10.06f,2.712f,0f,10.06f,3.11f,2.283f,10.06f,2.712f,3.954f,10.06f,2.233f,4.566f,10.06f,0.1424f,3.954f,10.06f,-1.948f,2.283f,10.06f,-2.428f,0f,8.045f,-4.614f,-2.953f,8.045f,-3.977f,-5.114f,8.045f,-2.236f,-5.905f,8.045f,0.1424f,-5.114f,8.045f,2.521f,-2.953f,8.045f,3.645f,0f,8.045f,4.282f,2.953f,8.045f,3.645f,5.114f,8.045f,2.521f,5.905f,8.045f,0.1424f,5.114f,8.045f,-2.236f,2.953f,8.045f,-3.977f,0f,5.297f,-5.018f,-3.409f,5.297f,-4.282f,-5.905f,5.297f,-2.272f,-6.819f,5.297f,0.1424f,-5.905f,5.297f,2.889f,-3.409f,5.297f,4.282f,0f,5.297f,5.018f,3.409f,5.297f,4.282f,5.905f,5.297f,2.889f,6.819f,5.297f,0.1424f,5.905f,5.297f,-2.272f,3.409f,5.297f,-4.282f,0f,2.548f,-4.282f,-2.953f,2.548f,-3.645f,-5.114f,2.548f,-1.904f,-5.905f,2.548f,0.1424f,-5.114f,2.548f,2.521f,-2.953f,2.548f,3.645f,0f,2.548f,4.282f,2.953f,2.548f,3.645f,5.114f,2.548f,2.521f,5.905f,2.548f,0.1424f,5.114f,2.548f,-1.904f,2.953f,2.548f,-3.645f,0f,0.5362f,-2.272f,-1.705f,0.5362f,-1.904f,-2.953f,0.5362f,-1.231f,-3.409f,0.5362f,0.1424f,-2.953f,0.5362f,1.516f,-1.705f,0.5362f,2.521f,0f,0.5362f,2.889f,1.705f,0.5362f,2.521f,2.953f,0.5362f,1.516f,3.409f,0.5362f,0.1424f,2.953f,0.5362f,-1.231f,1.705f,0.5362f,-1.904f,0f,-0.2003f,0.1424f});
  }
}
private class MFVec2f13 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.6211f,0.5754f,0.7851f,0.572f,0.7614f,0.572f,0.6907f,0.5698f,0.62f,0.5698f,0.6158f,0.5702f,0.5451f,0.5702f,0.4167f,0.5698f,0.5451f,0.5702f,0.6158f,0.5702f,0.62f,0.5698f,0.6907f,0.5698f,0.7614f,0.572f,0.8036f,0.5346f,0.7761f,0.5346f,0.6989f,0.4838f,0.6219f,0.4428f,0.6154f,0.4438f,0.5492f,0.4639f,0.4166f,0.5346f,0.5492f,0.4639f,0.6154f,0.4438f,0.6219f,0.4428f,0.6989f,0.4838f,0.7761f,0.5346f,0.7912f,0.4044f,0.7635f,0.4044f,0.7042f,0.3925f,0.6194f,0.3907f,0.6148f,0.3907f,0.545f,0.3974f,0.4163f,0.4938f,0.545f,0.3974f,0.6148f,0.3907f,0.6194f,0.3907f,0.7042f,0.3925f,0.7635f,0.4044f,0.795f,0.3772f,0.7662f,0.3772f,0.6945f,0.3645f,0.6236f,0.3695f,0.616f,0.3695f,0.5438f,0.378f,0.416f,0.453f,0.5438f,0.378f,0.616f,0.3695f,0.6236f,0.3695f,0.6945f,0.3645f,0.7662f,0.3772f,0.7887f,0.3451f,0.7635f,0.3451f,0.698f,0.3508f,0.6262f,0.3508f,0.6297f,0.3503f,0.5389f,0.3503f,0.4181f,0.3884f,0.5389f,0.3503f,0.6297f,0.3503f,0.6262f,0.3508f,0.698f,0.3508f,0.7635f,0.3451f,0.6237f,0.3398f});
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat15 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFInt3217 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFVec3f18 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0f,1.053f,0.0273f,0f,0.9123f,-0.5414f,-0.4375f,0.9123f,-0.4652f,-0.7578f,0.9123f,-0.3733f,-0.875f,0.9123f,0.0273f,-0.7578f,0.9123f,0.4279f,-0.4375f,0.9123f,0.5198f,0f,0.9123f,0.596f,0.4375f,0.9123f,0.5198f,0.7578f,0.9123f,0.4279f,0.875f,0.9123f,0.0273f,0.7578f,0.9123f,-0.3733f,0.4375f,0.9123f,-0.4652f,0f,0.5267f,-0.8842f,-0.5658f,0.5267f,-0.7621f,-0.98f,0.5267f,-0.4285f,-1.132f,0.5267f,0.0273f,-0.98f,0.5267f,0.483f,-0.5658f,0.5267f,0.6985f,0f,0.5267f,0.8206f,0.5658f,0.5267f,0.6985f,0.98f,0.5267f,0.483f,1.132f,0.5267f,0.0273f,0.98f,0.5267f,-0.4285f,0.5658f,0.5267f,-0.7621f,0f,0f,-0.9616f,-0.6534f,0f,-0.8206f,-1.132f,0f,-0.4353f,-1.307f,0f,0.0273f,-1.132f,0f,0.5536f,-0.6534f,0f,0.8206f,0f,0f,0.9616f,0.6534f,0f,0.8206f,1.132f,0f,0.5536f,1.307f,0f,0.0273f,1.132f,0f,-0.4353f,0.6534f,0f,-0.8206f,0f,-0.5267f,-0.8206f,-0.5658f,-0.5267f,-0.6985f,-0.98f,-0.5267f,-0.3648f,-1.132f,-0.5267f,0.0273f,-0.98f,-0.5267f,0.483f,-0.5658f,-0.5267f,0.6985f,0f,-0.5267f,0.8206f,0.5658f,-0.5267f,0.6985f,0.98f,-0.5267f,0.483f,1.132f,-0.5267f,0.0273f,0.98f,-0.5267f,-0.3648f,0.5658f,-0.5267f,-0.6985f,0f,-0.9123f,-0.4353f,-0.3267f,-0.9123f,-0.3648f,-0.5658f,-0.9123f,-0.2358f,-0.6534f,-0.9123f,0.0273f,-0.5658f,-0.9123f,0.2904f,-0.3267f,-0.9123f,0.483f,0f,-0.9123f,0.5536f,0.3267f,-0.9123f,0.483f,0.5658f,-0.9123f,0.2904f,0.6534f,-0.9123f,0.0273f,0.5658f,-0.9123f,-0.2358f,0.3267f,-0.9123f,-0.3648f,0f,-1.053f,0.0273f});
  }
}
private class MFVec2f19 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.6211f,0.5754f,0.7851f,0.572f,0.7614f,0.572f,0.6907f,0.5698f,0.62f,0.5698f,0.6158f,0.5702f,0.5451f,0.5702f,0.4167f,0.5698f,0.5451f,0.5702f,0.6158f,0.5702f,0.62f,0.5698f,0.6907f,0.5698f,0.7614f,0.572f,0.8036f,0.5346f,0.7761f,0.5346f,0.6989f,0.4838f,0.6219f,0.4428f,0.6154f,0.4438f,0.5492f,0.4639f,0.4166f,0.5346f,0.5492f,0.4639f,0.6154f,0.4438f,0.6219f,0.4428f,0.6989f,0.4838f,0.7761f,0.5346f,0.7912f,0.4044f,0.7635f,0.4044f,0.7042f,0.3925f,0.6194f,0.3907f,0.6148f,0.3907f,0.545f,0.3974f,0.4163f,0.4938f,0.545f,0.3974f,0.6148f,0.3907f,0.6194f,0.3907f,0.7042f,0.3925f,0.7635f,0.4044f,0.795f,0.3772f,0.7662f,0.3772f,0.6945f,0.3645f,0.6236f,0.3695f,0.616f,0.3695f,0.5438f,0.378f,0.416f,0.453f,0.5438f,0.378f,0.616f,0.3695f,0.6236f,0.3695f,0.6945f,0.3645f,0.7662f,0.3772f,0.7887f,0.3451f,0.7635f,0.3451f,0.698f,0.3508f,0.6262f,0.3508f,0.6297f,0.3503f,0.5389f,0.3503f,0.4181f,0.3884f,0.5389f,0.3503f,0.6297f,0.3503f,0.6262f,0.3508f,0.698f,0.3508f,0.7635f,0.3451f,0.6237f,0.3398f});
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat21 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1});
  }
}
private class MFInt3223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1});
  }
}
private class MFVec3f24 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {2.96f,3.738f,0f,1.643f,3.738f,3.209f,-1.316f,3.738f,4.002f,-3.367f,3.738f,1.781f,-3.367f,3.738f,-1.781f,-1.316f,3.738f,-4.002f,1.643f,3.738f,-3.209f,2.96f,-0.0114f,0f,1.643f,-0.0114f,3.209f,-1.316f,-0.0114f,4.002f,-3.367f,-0.0114f,1.781f,-3.367f,-0.0114f,-1.781f,-1.316f,-0.0114f,-4.002f,1.643f,-0.0114f,-3.209f,2.96f,-6.507f,0f,1.643f,-6.507f,3.209f,-1.316f,-6.507f,4.002f,-3.367f,-6.507f,1.781f,-3.367f,-6.507f,-1.781f,-1.316f,-6.507f,-4.002f,1.643f,-6.507f,-3.209f,3.367f,-13.13f,0f,1.897f,-13.13f,3.582f,-1.407f,-13.13f,4.467f,-3.355f,-13.13f,1.988f,-3.355f,-13.13f,-1.988f,-1.407f,-13.13f,-4.467f,1.897f,-13.13f,-3.582f,2.146f,-4.985f,0f,1.136f,-4.985f,2.462f,-1.135f,-4.985f,3.07f,-2.633f,-4.985f,1.366f,-2.633f,-4.985f,-1.366f,-1.135f,-4.985f,-3.07f,1.136f,-4.985f,-2.462f,2.156f,-11.45f,0f,1.225f,-11.45f,1.956f,-0.8662f,-11.45f,2.439f,-2.543f,-11.45f,1.085f,-2.543f,-11.45f,-1.085f,-0.8662f,-11.45f,-2.439f,1.225f,-11.45f,-1.956f,2.051f,5.729f,0f,1.076f,5.729f,2.375f,-1.114f,5.729f,2.961f,-2.87f,5.729f,1.318f,-2.87f,5.729f,-1.318f,-1.114f,5.729f,-2.961f,1.076f,5.729f,-2.375f,1.842f,-15.12f,0f,1.03f,-15.12f,1.873f,-0.7965f,-15.12f,2.295f,-2.261f,-15.12f,1.113f,-2.261f,-15.12f,-0.9478f,-0.7965f,-15.12f,-2.13f,1.03f,-15.12f,-1.708f,0.6277f,-16.1f,0f,0.2723f,-16.1f,0.912f,-0.5262f,-16.1f,1.096f,-1.167f,-16.1f,0.5796f,-1.167f,-16.1f,-0.4145f,-0.5262f,-16.1f,-0.9313f,0.2723f,-16.1f,-0.7469f});
  }
}
private class MFVec2f25 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.719f,0.5576f,0.6284f,0.5576f,0.7414f,0.5576f,0.6787f,0.5576f,0.5781f,0.5576f,0.5154f,0.5576f,0.5378f,0.5576f,0.6284f,0.5029f,0.7509f,0.3997f,0.6284f,0.3997f,0.7509f,0.5029f,0.7811f,0.3997f,0.7811f,0.5029f,0.6964f,0.3997f,0.6964f,0.5029f,0.5604f,0.3997f,0.5604f,0.5029f,0.4756f,0.3997f,0.4756f,0.5029f,0.5059f,0.3997f,0.5059f,0.5029f,0.7509f,0.3197f,0.6284f,0.3197f,0.7811f,0.3197f,0.6964f,0.3197f,0.5604f,0.3197f,0.4756f,0.3197f,0.5059f,0.3197f,0.7651f,0.2166f,0.6284f,0.2166f,0.7989f,0.2166f,0.7043f,0.2166f,0.5525f,0.2166f,0.4579f,0.2166f,0.4917f,0.2166f,0.7224f,0.263f,0.6284f,0.263f,0.7456f,0.263f,0.6805f,0.263f,0.5762f,0.263f,0.5112f,0.263f,0.5344f,0.263f,0.8705f,0.5452f,0.8705f,0.5383f,0.8705f,0.5369f,0.8705f,0.5408f,0.8705f,0.5483f,0.8705f,0.5522f,0.8705f,0.5509f,0.917f,0.5452f,0.917f,0.5266f,0.89f,0.5304f,0.89f,0.5452f,0.917f,0.522f,0.89f,0.5268f,0.917f,0.5349f,0.89f,0.537f,0.917f,0.5555f,0.89f,0.5534f,0.917f,0.5684f,0.89f,0.5636f,0.917f,0.5638f,0.89f,0.56f,0.8746f,0.531f,0.8746f,0.5452f,0.8746f,0.5279f,0.8746f,0.5368f,0.8746f,0.5524f,0.8746f,0.5613f,0.8746f,0.5581f});
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat27 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
private class MFInt3229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.7186f,0.9688f,0.0234f,0.3632f,0.9688f,0.9354f,-0.4353f,0.9688f,1.12f,-1.076f,0.9688f,0.603f,-1.076f,0.9688f,-0.3911f,-0.4353f,0.9688f,-0.9079f,0.3632f,0.9688f,-0.7235f,2.337f,-4.613f,0.0234f,1.46f,-3.622f,2.019f,1.236f,-1.628f,2.42f,2.118f,-1.912f,0.0234f,-0.8111f,-3.622f,2.567f,-0.7468f,-1.628f,2.903f,-2.254f,-4.613f,1.255f,-2.337f,-1.912f,0.9793f,-2.254f,-5.383f,-1.368f,-2.337f,-1.912f,-0.9325f,-0.8111f,-5.383f,-2.903f,-0.7468f,-1.912f,-2.368f,1.46f,-5.383f,-2.355f,1.236f,-1.912f,-1.885f,1.121f,-0.0032f,1.896f,1.933f,-0.0032f,0.0234f,-0.7056f,-0.0032f,2.318f,-2.17f,-0.0032f,1.136f,-2.17f,-0.0032f,-0.9244f,-0.7056f,-0.0032f,-2.061f,1.121f,-0.0032f,-1.64f,1.607f,-12.92f,0.0032f,0.9216f,-12.91f,1.565f,-0.619f,-12.91f,1.951f,-1.854f,-12.92f,0.8701f,-1.854f,-12.94f,-0.9762f,-0.619f,-12.94f,-1.742f,0.9216f,-12.94f,-1.356f,0.7072f,-14.53f,0.0239f,0.3604f,-14.53f,0.814f,-0.4188f,-14.53f,1.009f,-1.044f,-14.53f,0.4624f,-1.044f,-14.54f,-0.4714f,-0.4188f,-14.54f,-0.8587f,0.3604f,-14.54f,-0.6635f});
  }
}
private class MFVec2f31 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.9309f,0.5848f,0.919f,0.5848f,0.8921f,0.5848f,0.8706f,0.5848f,0.8706f,0.5848f,0.8921f,0.5848f,0.919f,0.5848f,0.9845f,0.5321f,0.955f,0.5475f,0.9491f,0.5599f,0.9788f,0.5571f,0.8787f,0.5475f,0.8825f,0.5599f,0.8302f,0.5321f,0.8291f,0.5571f,0.8302f,0.52f,0.8291f,0.5571f,0.8787f,0.52f,0.8825f,0.5571f,0.955f,0.52f,0.9491f,0.5571f,0.9444f,0.5755f,0.9717f,0.5755f,0.8831f,0.5755f,0.8339f,0.5755f,0.8339f,0.5755f,0.8831f,0.5755f,0.9444f,0.5755f,0.9679f,0.2444f,0.9449f,0.2445f,0.8931f,0.2445f,0.8516f,0.2444f,0.8516f,0.2442f,0.8931f,0.2442f,0.9449f,0.2442f,0.9372f,0.2243f,0.9255f,0.2244f,0.8993f,0.2244f,0.8783f,0.2243f,0.8783f,0.2243f,0.8993f,0.2243f,0.9255f,0.2243f});
  }
}
private class MFFloat32 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat33 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,11,14,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,15,2,0,-1,0,12,15,-1,0,1,13,-1,13,12,0,-1,13,1,14,-1,7,18,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,15,16,10,-1,10,2,15,-1,10,16,17,-1,17,7,10,-1,17,18,7,-1,21,22,23,-1,23,24,25,-1,25,26,19,-1,23,25,19,-1,21,23,19,-1,20,21,19,-1,15,12,20,-1,20,19,15,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,11,23,-1,23,22,14,-1,11,18,24,-1,24,23,11,-1,18,17,25,-1,25,24,18,-1,17,16,26,-1,26,25,17,-1,16,15,19,-1,19,26,16,-1,33,31,30,-1,30,27,33,-1,36,27,30,-1,30,38,36,-1,29,33,27,-1,27,28,29,-1,37,28,27,-1,27,36,37,-1,28,37,42,-1,42,29,28,-1,33,32,34,-1,34,31,33,-1,39,40,34,-1,34,32,39,-1,29,35,32,-1,32,33,29,-1,41,39,32,-1,32,35,41,-1,35,29,42,-1,42,41,35,-1,44,45,46,-1,44,46,47,-1,44,47,43,-1,51,52,53,-1,54,48,49,-1,53,54,49,-1,51,53,49,-1,51,49,50,-1,30,31,44,-1,44,43,30,-1,31,34,45,-1,45,44,31,-1,34,40,46,-1,46,45,34,-1,40,38,47,-1,47,46,40,-1,38,30,43,-1,43,47,38,-1,37,36,49,-1,49,48,37,-1,36,38,50,-1,50,49,36,-1,38,40,51,-1,51,50,38,-1,40,39,52,-1,52,51,40,-1,39,41,53,-1,53,52,39,-1,41,42,54,-1,54,53,41,-1,42,37,48,-1,48,54,42,-1});
  }
}
private class MFInt3235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,26,27,28,-1,28,29,30,-1,30,31,24,-1,28,30,24,-1,26,28,24,-1,25,26,24,-1,19,16,25,-1,25,24,19,-1,16,17,26,-1,26,25,16,-1,17,18,27,-1,27,26,17,-1,18,14,28,-1,28,27,18,-1,15,23,29,-1,29,28,15,-1,23,22,30,-1,30,29,23,-1,22,21,31,-1,31,30,22,-1,21,20,24,-1,24,31,21,-1,34,38,37,-1,37,32,34,-1,46,32,37,-1,37,48,46,-1,35,34,32,-1,32,33,35,-1,47,33,32,-1,32,46,47,-1,33,47,53,-1,53,36,33,-1,40,39,42,-1,42,41,40,-1,49,50,42,-1,42,39,49,-1,44,43,39,-1,39,40,44,-1,51,49,39,-1,39,43,51,-1,43,45,52,-1,52,51,43,-1,55,56,57,-1,55,57,58,-1,55,58,54,-1,62,63,64,-1,65,59,60,-1,64,65,60,-1,62,64,60,-1,62,60,61,-1,37,38,55,-1,55,54,37,-1,41,42,56,-1,56,55,41,-1,42,50,57,-1,57,56,42,-1,50,48,58,-1,58,57,50,-1,48,37,54,-1,54,58,48,-1,47,46,60,-1,60,59,47,-1,46,48,61,-1,61,60,46,-1,48,50,62,-1,62,61,48,-1,50,49,63,-1,63,62,50,-1,49,51,64,-1,64,63,49,-1,51,52,65,-1,65,64,51,-1,53,47,59,-1,59,65,53,-1});
  }
}
private class MFVec3f36 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.9768f,-0.0192f,-1.681f,1.657f,-0.0192f,0.4309f,0f,-0.0192f,-1.681f,1.403f,0.7316f,0.354f,0.8174f,0.7316f,-1.463f,0f,0.7316f,-1.463f,0f,0.7316f,1.471f,-1.657f,-0.0192f,0.4309f,-1.403f,0.7316f,0.354f,-0.8174f,0.7316f,-1.463f,-0.9768f,-0.0192f,-1.681f,0f,-0.0192f,1.75f,1.109f,-0.6007f,-2.046f,2.045f,-0.6007f,0.4309f,1.695f,-0.296f,1.429f,0f,-0.6007f,-2.046f,-1.109f,-0.6007f,-2.046f,-2.045f,-0.6007f,0.4309f,-1.695f,-0.296f,1.429f,0f,-1.207f,-1.841f,1.023f,-1.207f,-1.841f,1.913f,-1.223f,0.5161f,1.601f,-0.9325f,1.406f,0f,-0.6582f,1.708f,-1.601f,-0.9325f,1.406f,-1.913f,-1.223f,0.5161f,-1.023f,-1.207f,-1.841f,1.409f,-1.925f,-2.878f,1.409f,-3.947f,-1.681f,0f,-3.947f,-1.681f,1.109f,-0.6007f,-2.046f,0f,-0.6007f,-2.046f,-1.409f,-1.925f,-2.878f,0f,-1.925f,-2.878f,-1.109f,-0.6007f,-2.046f,-1.409f,-3.947f,-1.681f,2.927f,-1.925f,0.4309f,2.089f,-3.947f,0.4309f,2.045f,-0.6007f,0.4309f,-2.927f,-1.925f,0.4309f,-2.045f,-0.6007f,0.4309f,-2.089f,-3.947f,0.4309f,0f,-3.947f,0.4309f,0.9442f,-0.3153f,-1.692f,0f,-0.3153f,-1.692f,-0.9442f,-0.3153f,-1.692f,-1.7f,-0.3153f,0.3093f,1.7f,-0.3153f,0.3093f,1.86f,-3.793f,1.364f,2.541f,-1.963f,1.364f,1.861f,-0.9431f,1.364f,-1.861f,-0.9431f,1.364f,-2.541f,-1.963f,1.364f,-1.86f,-3.793f,1.364f,0f,-3.793f,1.364f});
  }
}
private class MFVec2f37 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.3819f,0.171f,0.4216f,0.1651f,0.3819f,0.171f,0.4216f,0.1651f,0.3819f,0.171f,0.3819f,0.171f,0.4637f,0.1714f,0.4216f,0.1651f,0.4637f,0.1714f,0.4216f,0.1651f,0.3819f,0.171f,0.3819f,0.171f,0.3819f,0.171f,0.3819f,0.171f,0.4637f,0.1714f,0.4637f,0.1714f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.3836f,0.1404f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.4637f,0.1714f,0.4394f,0.1472f,0.4244f,0.1312f,0.3861f,0.1398f,0.3873f,0.0706f,0.3871f,0.0221f,0.3873f,0.0706f,0.3871f,0.0221f,0.3871f,0.0221f,0.3861f,0.1398f,0.3836f,0.1404f,0.3873f,0.0706f,0.3873f,0.0706f,0.3836f,0.1404f,0.3861f,0.1398f,0.3871f,0.0221f,0.3871f,0.0221f,0.3871f,0.0221f,0.433f,0.0595f,0.4411f,0.0186f,0.4244f,0.1312f,0.433f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.3861f,0.1398f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4244f,0.1312f,0.4411f,0.0186f,0.433f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.433f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f});
  }
}
private class MFFloat38 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat39 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,10,-1,3,10,11,-1,0,3,11,-1,1,0,11,-1,11,12,1,-1,1,12,16,-1,16,9,1,-1,2,17,10,-1,10,4,2,-1,13,8,6,-1,14,13,6,-1,5,14,6,-1,7,15,14,-1,14,5,7,-1,7,9,16,-1,16,15,7,-1,2,8,13,-1,13,17,2,-1,20,21,22,-1,20,22,23,-1,20,23,24,-1,19,20,24,-1,19,24,18,-1,0,1,19,-1,19,18,0,-1,1,9,20,-1,20,19,1,-1,9,7,21,-1,21,20,9,-1,7,5,22,-1,22,21,7,-1,5,6,23,-1,23,22,5,-1,6,3,24,-1,24,23,6,-1,3,0,18,-1,18,24,3,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1,28,26,25,-1,25,29,28,-1,35,27,26,-1,26,28,35,-1,27,35,40,-1,25,26,31,-1,31,30,25,-1,31,26,27,-1,27,32,31,-1,32,27,40,-1,40,41,32,-1,42,29,25,-1,25,30,42,-1,28,29,34,-1,34,33,28,-1,35,28,33,-1,33,36,35,-1,36,40,35,-1,34,37,38,-1,38,33,34,-1,38,39,36,-1,36,33,38,-1,39,41,40,-1,40,36,39,-1,42,37,34,-1,34,29,42,-1});
  }
}
private class MFInt3241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,19,-1,19,3,1,-1,2,21,12,-1,12,5,2,-1,15,10,7,-1,16,15,7,-1,6,16,7,-1,8,17,16,-1,16,6,8,-1,8,11,18,-1,18,17,8,-1,9,10,15,-1,15,20,9,-1,24,25,26,-1,24,26,27,-1,24,27,28,-1,23,24,28,-1,23,28,22,-1,0,1,23,-1,23,22,0,-1,1,3,24,-1,24,23,1,-1,11,8,25,-1,25,24,11,-1,8,6,26,-1,26,25,8,-1,6,7,27,-1,27,26,6,-1,7,4,28,-1,28,27,7,-1,4,0,22,-1,22,28,4,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1,30,32,31,-1,31,29,30,-1,33,34,32,-1,32,30,33,-1,34,33,35,-1,31,32,37,-1,37,36,31,-1,37,32,34,-1,34,38,37,-1,38,34,35,-1,35,39,38,-1,40,29,31,-1,31,36,40,-1,41,44,43,-1,43,42,41,-1,45,41,42,-1,42,46,45,-1,46,50,45,-1,43,47,48,-1,48,42,43,-1,48,49,46,-1,46,42,48,-1,49,51,50,-1,50,46,49,-1,52,47,43,-1,43,44,52,-1});
  }
}
private class MFVec3f42 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {2.927f,-1.627f,-1.013f,2.089f,-3.648f,-1.013f,0f,0.2797f,0.3064f,2.045f,-0.3017f,-1.013f,1.695f,0.0029f,-0.0151f,-2.927f,-1.627f,-1.013f,-2.045f,-0.3017f,-1.013f,-2.089f,-3.648f,-1.013f,-1.695f,0.0029f,-0.0151f,0f,-3.648f,-1.013f,1.74f,-0.3226f,1.158f,2.661f,-1.866f,0.9192f,2.14f,-3.648f,0.9192f,-1.74f,-0.3226f,1.158f,-2.661f,-1.866f,0.9192f,-2.14f,-3.648f,0.9192f,0f,-3.648f,0.9192f,0f,-0.0274f,1.661f,2.405f,-1.656f,-1.915f,1.75f,-2.942f,-1.915f,0f,-2.942f,-1.915f,-1.75f,-2.942f,-1.915f,-2.405f,-1.656f,-1.915f,-1.742f,-0.5681f,-1.915f,1.742f,-0.5681f,-1.915f,1.784f,-0.648f,2.332f,2.216f,-2.267f,4.144f,2.216f,-3.648f,3.776f,0f,-2.267f,5.463f,0f,-0.5463f,3.95f,1.74f,-0.3226f,1.158f,2.661f,-1.866f,0.9192f,2.14f,-3.648f,0.9192f,-2.216f,-2.267f,4.144f,-1.784f,-0.648f,2.332f,0f,-3.648f,5.096f,-2.216f,-3.648f,3.776f,-1.74f,-0.3226f,1.158f,-2.661f,-1.866f,0.9192f,-2.14f,-3.648f,0.9192f,0f,-3.648f,3.776f,0f,-3.648f,0.9192f,0f,-0.0274f,1.661f});
  }
}
private class MFVec2f43 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.433f,0.0595f,0.4411f,0.0186f,0.4637f,0.1714f,0.4411f,0.0186f,0.4244f,0.1312f,0.4394f,0.1472f,0.433f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4637f,0.1714f,0.4394f,0.1472f,0.4411f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f,0.4868f,0.1432f,0.433f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.433f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.532f,0.098f,0.5645f,0.0707f,0.4885f,0.102f,0.5026f,0.044f,0.5945f,0.0186f,0.5487f,0.0186f,0.5487f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4868f,0.1432f,0.5645f,0.0707f,0.5026f,0.044f,0.4885f,0.102f,0.532f,0.098f,0.5945f,0.0186f,0.5487f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.5487f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f});
  }
}
private class MFFloat44 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat45 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1});
  }
}
private class MFInt3247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1});
  }
}
private class MFVec3f48 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-2.96f,3.738f,0f,-1.643f,3.738f,3.209f,1.316f,3.738f,4.002f,3.367f,3.738f,1.781f,3.367f,3.738f,-1.781f,1.316f,3.738f,-4.002f,-1.643f,3.738f,-3.209f,-2.96f,-0.0114f,0f,-1.643f,-0.0114f,3.209f,1.316f,-0.0114f,4.002f,3.367f,-0.0114f,1.781f,3.367f,-0.0114f,-1.781f,1.316f,-0.0114f,-4.002f,-1.643f,-0.0114f,-3.209f,-2.96f,-6.507f,0f,-1.643f,-6.507f,3.209f,1.316f,-6.507f,4.002f,3.367f,-6.507f,1.781f,3.367f,-6.507f,-1.781f,1.316f,-6.507f,-4.002f,-1.643f,-6.507f,-3.209f,-3.367f,-13.13f,0f,-1.897f,-13.13f,3.582f,1.407f,-13.13f,4.467f,3.355f,-13.13f,1.988f,3.355f,-13.13f,-1.988f,1.407f,-13.13f,-4.467f,-1.897f,-13.13f,-3.582f,-2.146f,-4.985f,0f,-1.136f,-4.985f,2.462f,1.135f,-4.985f,3.07f,2.633f,-4.985f,1.366f,2.633f,-4.985f,-1.366f,1.135f,-4.985f,-3.07f,-1.136f,-4.985f,-2.462f,-2.156f,-11.45f,0f,-1.225f,-11.45f,1.956f,0.8662f,-11.45f,2.439f,2.543f,-11.45f,1.085f,2.543f,-11.45f,-1.085f,0.8662f,-11.45f,-2.439f,-1.225f,-11.45f,-1.956f,-2.051f,5.729f,0f,-1.076f,5.729f,2.375f,1.114f,5.729f,2.961f,2.87f,5.729f,1.318f,2.87f,5.729f,-1.318f,1.114f,5.729f,-2.961f,-1.076f,5.729f,-2.375f,-1.842f,-15.12f,0f,-1.03f,-15.12f,1.873f,0.7965f,-15.12f,2.295f,2.261f,-15.12f,1.113f,2.261f,-15.12f,-0.9478f,0.7965f,-15.12f,-2.13f,-1.03f,-15.12f,-1.708f,-0.6277f,-16.1f,0f,-0.2723f,-16.1f,0.912f,0.5262f,-16.1f,1.096f,1.167f,-16.1f,0.5796f,1.167f,-16.1f,-0.4145f,0.5262f,-16.1f,-0.9313f,-0.2723f,-16.1f,-0.7469f});
  }
}
private class MFVec2f49 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.719f,0.5576f,0.6284f,0.5576f,0.7414f,0.5576f,0.6787f,0.5576f,0.5781f,0.5576f,0.5154f,0.5576f,0.5378f,0.5576f,0.6284f,0.5029f,0.7509f,0.3997f,0.6284f,0.3997f,0.7509f,0.5029f,0.7811f,0.3997f,0.7811f,0.5029f,0.6964f,0.3997f,0.6964f,0.5029f,0.5604f,0.3997f,0.5604f,0.5029f,0.4756f,0.3997f,0.4756f,0.5029f,0.5059f,0.3997f,0.5059f,0.5029f,0.7509f,0.3197f,0.6284f,0.3197f,0.7811f,0.3197f,0.6964f,0.3197f,0.5604f,0.3197f,0.4756f,0.3197f,0.5059f,0.3197f,0.7651f,0.2166f,0.6284f,0.2166f,0.7989f,0.2166f,0.7043f,0.2166f,0.5525f,0.2166f,0.4579f,0.2166f,0.4917f,0.2166f,0.7224f,0.263f,0.6284f,0.263f,0.7456f,0.263f,0.6805f,0.263f,0.5762f,0.263f,0.5112f,0.263f,0.5344f,0.263f,0.8705f,0.5452f,0.8705f,0.5383f,0.8705f,0.5369f,0.8705f,0.5408f,0.8705f,0.5483f,0.8705f,0.5522f,0.8705f,0.5509f,0.917f,0.5452f,0.917f,0.5266f,0.89f,0.5304f,0.89f,0.5452f,0.917f,0.522f,0.89f,0.5268f,0.917f,0.5349f,0.89f,0.537f,0.917f,0.5555f,0.89f,0.5534f,0.917f,0.5684f,0.89f,0.5636f,0.917f,0.5638f,0.89f,0.56f,0.8746f,0.531f,0.8746f,0.5452f,0.8746f,0.5279f,0.8746f,0.5368f,0.8746f,0.5524f,0.8746f,0.5613f,0.8746f,0.5581f});
  }
}
private class MFFloat50 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat51 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
private class MFInt3253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
private class MFVec3f54 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.7186f,0.9688f,0.0234f,-0.3632f,0.9688f,0.9354f,0.4353f,0.9688f,1.12f,1.076f,0.9688f,0.603f,1.076f,0.9688f,-0.3911f,0.4353f,0.9688f,-0.9079f,-0.3632f,0.9688f,-0.7235f,-2.337f,-4.613f,0.0234f,-1.46f,-3.622f,2.019f,-1.236f,-1.628f,2.42f,-2.118f,-1.912f,0.0234f,0.8111f,-3.622f,2.567f,0.7468f,-1.628f,2.903f,2.254f,-4.613f,1.255f,2.337f,-1.912f,0.9793f,2.254f,-5.383f,-1.368f,2.337f,-1.912f,-0.9325f,0.8111f,-5.383f,-2.903f,0.7468f,-1.912f,-2.368f,-1.46f,-5.383f,-2.355f,-1.236f,-1.912f,-1.885f,-1.121f,-0.0032f,1.896f,-1.933f,-0.0032f,0.0234f,0.7056f,-0.0032f,2.318f,2.17f,-0.0032f,1.136f,2.17f,-0.0032f,-0.9244f,0.7056f,-0.0032f,-2.061f,-1.121f,-0.0032f,-1.64f,-1.607f,-12.92f,0.0032f,-0.9216f,-12.91f,1.565f,0.619f,-12.91f,1.951f,1.854f,-12.92f,0.8701f,1.854f,-12.94f,-0.9762f,0.619f,-12.94f,-1.742f,-0.9216f,-12.94f,-1.356f,-0.7072f,-14.53f,0.0239f,-0.3604f,-14.53f,0.814f,0.4188f,-14.53f,1.009f,1.044f,-14.53f,0.4624f,1.044f,-14.54f,-0.4714f,0.4188f,-14.54f,-0.8587f,-0.3604f,-14.54f,-0.6635f});
  }
}
private class MFVec2f55 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.9309f,0.5848f,0.919f,0.5848f,0.8921f,0.5848f,0.8706f,0.5848f,0.8706f,0.5848f,0.8921f,0.5848f,0.919f,0.5848f,0.9845f,0.5321f,0.955f,0.5475f,0.9491f,0.5599f,0.9788f,0.5571f,0.8787f,0.5475f,0.8825f,0.5599f,0.8302f,0.5321f,0.8291f,0.5571f,0.8302f,0.52f,0.8291f,0.5571f,0.8787f,0.52f,0.8825f,0.5571f,0.955f,0.52f,0.9491f,0.5571f,0.9444f,0.5755f,0.9717f,0.5755f,0.8831f,0.5755f,0.8339f,0.5755f,0.8339f,0.5755f,0.8831f,0.5755f,0.9444f,0.5755f,0.9679f,0.2444f,0.9449f,0.2445f,0.8931f,0.2445f,0.8516f,0.2444f,0.8516f,0.2442f,0.8931f,0.2442f,0.9449f,0.2442f,0.9372f,0.2243f,0.9255f,0.2244f,0.8993f,0.2244f,0.8783f,0.2243f,0.8783f,0.2243f,0.8993f,0.2243f,0.9255f,0.2243f});
  }
}
private class MFFloat56 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat57 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,15,12,0,-1,0,2,15,-1,0,12,13,-1,13,1,0,-1,13,14,1,-1,7,11,18,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,15,2,10,-1,10,16,15,-1,10,7,17,-1,17,16,10,-1,17,7,18,-1,19,26,25,-1,25,24,23,-1,19,25,23,-1,23,22,21,-1,19,23,21,-1,20,19,21,-1,15,19,20,-1,20,12,15,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,11,14,-1,11,23,24,-1,24,18,11,-1,18,24,25,-1,25,17,18,-1,17,25,26,-1,26,16,17,-1,16,26,19,-1,19,15,16,-1,33,27,30,-1,30,31,33,-1,36,38,30,-1,30,27,36,-1,29,28,27,-1,27,33,29,-1,37,36,27,-1,27,28,37,-1,28,29,42,-1,42,37,28,-1,33,31,34,-1,34,32,33,-1,39,32,34,-1,34,40,39,-1,29,33,32,-1,32,35,29,-1,41,35,32,-1,32,39,41,-1,35,41,42,-1,42,29,35,-1,44,43,47,-1,44,47,46,-1,44,46,45,-1,51,50,49,-1,49,48,54,-1,49,54,53,-1,51,49,53,-1,51,53,52,-1,30,43,44,-1,44,31,30,-1,31,44,45,-1,45,34,31,-1,34,45,46,-1,46,40,34,-1,40,46,47,-1,47,38,40,-1,38,47,43,-1,43,30,38,-1,37,48,49,-1,49,36,37,-1,36,49,50,-1,50,38,36,-1,38,50,51,-1,51,40,38,-1,40,51,52,-1,52,39,40,-1,39,52,53,-1,53,41,39,-1,41,53,54,-1,54,42,41,-1,42,54,48,-1,48,37,42,-1});
  }
}
private class MFInt3259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,24,31,30,-1,30,29,28,-1,24,30,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,19,24,25,-1,25,16,19,-1,16,25,26,-1,26,17,16,-1,17,26,27,-1,27,18,17,-1,18,27,28,-1,28,14,18,-1,15,28,29,-1,29,23,15,-1,23,29,30,-1,30,22,23,-1,22,30,31,-1,31,21,22,-1,21,31,24,-1,24,20,21,-1,34,32,37,-1,37,38,34,-1,46,48,37,-1,37,32,46,-1,35,33,32,-1,32,34,35,-1,47,46,32,-1,32,33,47,-1,33,36,53,-1,53,47,33,-1,40,41,42,-1,42,39,40,-1,49,39,42,-1,42,50,49,-1,44,40,39,-1,39,43,44,-1,51,43,39,-1,39,49,51,-1,43,51,52,-1,52,45,43,-1,55,54,58,-1,55,58,57,-1,55,57,56,-1,62,61,60,-1,60,59,65,-1,60,65,64,-1,62,60,64,-1,62,64,63,-1,37,54,55,-1,55,38,37,-1,41,55,56,-1,56,42,41,-1,42,56,57,-1,57,50,42,-1,50,57,58,-1,58,48,50,-1,48,58,54,-1,54,37,48,-1,47,59,60,-1,60,46,47,-1,46,60,61,-1,61,48,46,-1,48,61,62,-1,62,50,48,-1,50,62,63,-1,63,49,50,-1,49,63,64,-1,64,51,49,-1,51,64,65,-1,65,52,51,-1,53,65,59,-1,59,47,53,-1});
  }
}
private class MFVec3f60 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.9768f,-0.0192f,-1.681f,-1.657f,-0.0192f,0.4309f,0f,-0.0192f,-1.681f,-1.403f,0.7316f,0.354f,-0.8174f,0.7316f,-1.463f,0f,0.7316f,-1.463f,0f,0.7316f,1.471f,1.657f,-0.0192f,0.4309f,1.403f,0.7316f,0.354f,0.8174f,0.7316f,-1.463f,0.9768f,-0.0192f,-1.681f,0f,-0.0192f,1.75f,-1.109f,-0.6007f,-2.046f,-2.045f,-0.6007f,0.4309f,-1.695f,-0.296f,1.429f,0f,-0.6007f,-2.046f,1.109f,-0.6007f,-2.046f,2.045f,-0.6007f,0.4309f,1.695f,-0.296f,1.429f,0f,-1.207f,-1.841f,-1.023f,-1.207f,-1.841f,-1.913f,-1.223f,0.5161f,-1.601f,-0.9325f,1.406f,0f,-0.6582f,1.708f,1.601f,-0.9325f,1.406f,1.913f,-1.223f,0.5161f,1.023f,-1.207f,-1.841f,-1.409f,-1.925f,-2.878f,-1.409f,-3.947f,-1.681f,0f,-3.947f,-1.681f,-1.109f,-0.6007f,-2.046f,0f,-0.6007f,-2.046f,1.409f,-1.925f,-2.878f,0f,-1.925f,-2.878f,1.109f,-0.6007f,-2.046f,1.409f,-3.947f,-1.681f,-2.927f,-1.925f,0.4309f,-2.089f,-3.947f,0.4309f,-2.045f,-0.6007f,0.4309f,2.927f,-1.925f,0.4309f,2.045f,-0.6007f,0.4309f,2.089f,-3.947f,0.4309f,0f,-3.947f,0.4309f,-0.9442f,-0.3153f,-1.692f,0f,-0.3153f,-1.692f,0.9442f,-0.3153f,-1.692f,1.7f,-0.3153f,0.3093f,-1.7f,-0.3153f,0.3093f,-1.86f,-3.793f,1.364f,-2.541f,-1.963f,1.364f,-1.861f,-0.9431f,1.364f,1.861f,-0.9431f,1.364f,2.541f,-1.963f,1.364f,1.86f,-3.793f,1.364f,0f,-3.793f,1.364f});
  }
}
private class MFVec2f61 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.3819f,0.171f,0.4216f,0.1651f,0.3819f,0.171f,0.4216f,0.1651f,0.3819f,0.171f,0.3819f,0.171f,0.4637f,0.1714f,0.4216f,0.1651f,0.4637f,0.1714f,0.4216f,0.1651f,0.3819f,0.171f,0.3819f,0.171f,0.3819f,0.171f,0.3819f,0.171f,0.4637f,0.1714f,0.4637f,0.1714f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.3836f,0.1404f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4394f,0.1472f,0.4637f,0.1714f,0.4394f,0.1472f,0.4244f,0.1312f,0.3861f,0.1398f,0.3873f,0.0706f,0.3871f,0.0221f,0.3873f,0.0706f,0.3871f,0.0221f,0.3871f,0.0221f,0.3861f,0.1398f,0.3836f,0.1404f,0.3873f,0.0706f,0.3873f,0.0706f,0.3836f,0.1404f,0.3861f,0.1398f,0.3871f,0.0221f,0.3871f,0.0221f,0.3871f,0.0221f,0.433f,0.0595f,0.4411f,0.0186f,0.4244f,0.1312f,0.433f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.3861f,0.1398f,0.3836f,0.1404f,0.3861f,0.1398f,0.4244f,0.1312f,0.4244f,0.1312f,0.4411f,0.0186f,0.433f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.433f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f});
  }
}
private class MFFloat62 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat63 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10,4,3,-1,11,10,3,-1,0,11,3,-1,1,12,11,-1,11,0,1,-1,1,9,16,-1,16,12,1,-1,2,4,10,-1,10,17,2,-1,6,8,13,-1,6,13,14,-1,5,6,14,-1,7,5,14,-1,14,15,7,-1,7,15,16,-1,16,9,7,-1,2,17,13,-1,13,8,2,-1,19,18,24,-1,22,21,20,-1,23,22,20,-1,24,23,20,-1,19,24,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,9,1,-1,9,20,21,-1,21,7,9,-1,7,21,22,-1,22,5,7,-1,5,22,23,-1,23,6,5,-1,6,23,24,-1,24,3,6,-1,3,24,18,-1,18,0,3,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1,28,29,25,-1,25,26,28,-1,35,28,26,-1,26,27,35,-1,27,40,35,-1,25,30,31,-1,31,26,25,-1,31,32,27,-1,27,26,31,-1,32,41,40,-1,40,27,32,-1,42,30,25,-1,25,29,42,-1,28,33,34,-1,34,29,28,-1,35,36,33,-1,33,28,35,-1,36,35,40,-1,34,33,38,-1,38,37,34,-1,38,33,36,-1,36,39,38,-1,39,36,40,-1,40,41,39,-1,42,29,34,-1,34,37,42,-1});
  }
}
private class MFInt3265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,19,-1,19,14,1,-1,2,5,12,-1,12,21,2,-1,7,10,15,-1,7,15,16,-1,6,7,16,-1,8,6,16,-1,16,17,8,-1,8,17,18,-1,18,11,8,-1,9,20,15,-1,15,10,9,-1,23,22,28,-1,26,25,24,-1,27,26,24,-1,28,27,24,-1,23,28,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,3,1,-1,11,24,25,-1,25,8,11,-1,8,25,26,-1,26,6,8,-1,6,26,27,-1,27,7,6,-1,7,27,28,-1,28,4,7,-1,4,28,22,-1,22,0,4,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1,30,29,31,-1,31,32,30,-1,33,30,32,-1,32,34,33,-1,34,35,33,-1,31,36,37,-1,37,32,31,-1,37,38,34,-1,34,32,37,-1,38,39,35,-1,35,34,38,-1,40,36,31,-1,31,29,40,-1,41,42,43,-1,43,44,41,-1,45,46,42,-1,42,41,45,-1,46,45,50,-1,43,42,48,-1,48,47,43,-1,48,42,46,-1,46,49,48,-1,49,46,50,-1,50,51,49,-1,52,44,43,-1,43,47,52,-1});
  }
}
private class MFVec3f66 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-2.927f,-1.627f,-1.013f,-2.089f,-3.648f,-1.013f,0f,0.2797f,0.3064f,-2.045f,-0.3017f,-1.013f,-1.695f,0.0029f,-0.0151f,2.927f,-1.627f,-1.013f,2.045f,-0.3017f,-1.013f,2.089f,-3.648f,-1.013f,1.695f,0.0029f,-0.0151f,0f,-3.648f,-1.013f,-1.74f,-0.3226f,1.158f,-2.661f,-1.866f,0.9192f,-2.14f,-3.648f,0.9192f,1.74f,-0.3226f,1.158f,2.661f,-1.866f,0.9192f,2.14f,-3.648f,0.9192f,0f,-3.648f,0.9192f,0f,-0.0274f,1.661f,-2.405f,-1.656f,-1.915f,-1.75f,-2.942f,-1.915f,0f,-2.942f,-1.915f,1.75f,-2.942f,-1.915f,2.405f,-1.656f,-1.915f,1.742f,-0.5681f,-1.915f,-1.742f,-0.5681f,-1.915f,-1.784f,-0.648f,2.332f,-2.216f,-2.267f,4.144f,-2.216f,-3.648f,3.776f,0f,-2.267f,5.463f,0f,-0.5463f,3.95f,-1.74f,-0.3226f,1.158f,-2.661f,-1.866f,0.9192f,-2.14f,-3.648f,0.9192f,2.216f,-2.267f,4.144f,1.784f,-0.648f,2.332f,0f,-3.648f,5.096f,2.216f,-3.648f,3.776f,1.74f,-0.3226f,1.158f,2.661f,-1.866f,0.9192f,2.14f,-3.648f,0.9192f,0f,-3.648f,3.776f,0f,-3.648f,0.9192f,0f,-0.0274f,1.661f});
  }
}
private class MFVec2f67 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.433f,0.0595f,0.4411f,0.0186f,0.4637f,0.1714f,0.4411f,0.0186f,0.4244f,0.1312f,0.4394f,0.1472f,0.433f,0.0595f,0.4244f,0.1312f,0.4411f,0.0186f,0.4637f,0.1714f,0.4394f,0.1472f,0.4411f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f,0.4868f,0.1432f,0.433f,0.0595f,0.4411f,0.0186f,0.4411f,0.0186f,0.4411f,0.0186f,0.433f,0.0595f,0.4244f,0.1312f,0.4244f,0.1312f,0.532f,0.098f,0.5645f,0.0707f,0.4885f,0.102f,0.5026f,0.044f,0.5945f,0.0186f,0.5487f,0.0186f,0.5487f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.4949f,0.0186f,0.4868f,0.1432f,0.5645f,0.0707f,0.5026f,0.044f,0.4885f,0.102f,0.532f,0.098f,0.5945f,0.0186f,0.5487f,0.0186f,0.464f,0.1246f,0.4607f,0.0558f,0.4904f,0.0166f,0.5487f,0.0186f,0.4949f,0.0186f,0.4868f,0.1432f});
  }
}
private class MFFloat68 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat69 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,7,-1,7,5,3,-1,4,66,68,-1,68,8,4,-1,4,8,7,-1,1,0,9,-1,9,10,1,-1,0,2,11,-1,11,9,0,-1,15,71,73,-1,73,16,15,-1,14,15,16,-1,16,17,14,-1,71,15,8,-1,8,68,71,-1,15,14,7,-1,7,8,15,-1,73,72,69,-1,69,70,73,-1,16,73,70,-1,70,12,16,-1,16,12,13,-1,13,17,16,-1,21,20,22,-1,22,23,21,-1,20,14,17,-1,17,22,20,-1,20,21,6,-1,6,5,20,-1,14,20,5,-1,5,7,14,-1,23,22,18,-1,18,19,23,-1,22,17,13,-1,13,18,22,-1,2,6,11,-1,28,27,30,-1,30,31,28,-1,27,29,32,-1,32,30,27,-1,29,21,23,-1,23,32,29,-1,27,28,10,-1,10,9,27,-1,29,27,9,-1,9,11,29,-1,21,29,11,-1,11,6,21,-1,31,30,24,-1,24,25,31,-1,30,32,26,-1,26,24,30,-1,32,23,19,-1,19,26,32,-1,12,70,74,-1,74,33,12,-1,24,26,36,-1,36,35,24,-1,33,74,75,-1,75,37,33,-1,34,33,37,-1,37,38,34,-1,39,12,33,-1,33,34,39,-1,19,40,26,-1,26,40,41,-1,41,36,26,-1,39,34,41,-1,41,40,39,-1,35,36,43,-1,43,42,35,-1,36,41,44,-1,44,43,36,-1,41,34,38,-1,38,44,41,-1,37,75,76,-1,76,45,37,-1,38,37,45,-1,45,46,38,-1,42,43,48,-1,48,47,42,-1,44,38,46,-1,46,49,44,-1,45,76,77,-1,77,50,45,-1,46,45,50,-1,50,51,46,-1,47,48,53,-1,53,52,47,-1,48,49,54,-1,54,53,48,-1,49,46,51,-1,51,54,49,-1,50,77,78,-1,78,55,50,-1,51,50,55,-1,55,56,51,-1,52,53,58,-1,58,57,52,-1,53,54,59,-1,59,58,53,-1,54,51,56,-1,56,59,54,-1,19,18,60,-1,60,61,19,-1,18,13,62,-1,62,60,18,-1,13,39,63,-1,63,62,13,-1,40,19,61,-1,61,64,40,-1,39,40,64,-1,64,63,39,-1,2,3,5,-1,2,5,6,-1,13,12,39,-1,25,24,35,-1,70,69,74,-1,67,68,66,-1,66,65,67,-1,79,71,68,-1,68,67,79,-1,72,73,71,-1,71,79,72,-1,49,48,43,-1,43,44,49,-1,63,64,60,-1,60,62,63,-1,60,64,61,-1,86,83,82,-1,82,84,86,-1,141,140,83,-1,83,87,141,-1,83,86,87,-1,88,80,1,-1,1,10,88,-1,89,81,80,-1,80,88,89,-1,144,143,93,-1,93,94,144,-1,94,93,92,-1,92,95,94,-1,87,93,143,-1,143,141,87,-1,86,92,93,-1,93,87,86,-1,69,72,144,-1,144,142,69,-1,142,144,94,-1,94,90,142,-1,91,90,94,-1,94,95,91,-1,100,98,99,-1,99,101,100,-1,95,92,98,-1,98,100,95,-1,85,99,98,-1,98,84,85,-1,84,98,92,-1,92,86,84,-1,96,100,101,-1,101,97,96,-1,91,95,100,-1,100,96,91,-1,81,89,85,-1,106,104,28,-1,28,31,106,-1,107,105,104,-1,104,106,107,-1,101,99,105,-1,105,107,101,-1,10,28,104,-1,104,88,10,-1,88,104,105,-1,105,89,88,-1,89,105,99,-1,99,85,89,-1,102,106,31,-1,31,25,102,-1,103,107,106,-1,106,102,103,-1,97,101,107,-1,107,103,97,-1,145,142,90,-1,90,108,145,-1,111,103,102,-1,102,110,111,-1,146,145,108,-1,108,112,146,-1,112,108,109,-1,109,113,112,-1,108,90,114,-1,114,109,108,-1,97,103,115,-1,116,115,103,-1,103,111,116,-1,116,109,114,-1,114,115,116,-1,118,111,110,-1,110,117,118,-1,119,116,111,-1,111,118,119,-1,113,109,116,-1,116,119,113,-1,147,146,112,-1,112,120,147,-1,120,112,113,-1,113,121,120,-1,123,118,117,-1,117,122,123,-1});
  }
}
private class MFInt3271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {121,113,119,-1,119,124,121,-1,148,147,120,-1,120,125,148,-1,125,120,121,-1,121,126,125,-1,128,123,122,-1,122,127,128,-1,129,124,123,-1,123,128,129,-1,126,121,124,-1,124,129,126,-1,149,148,125,-1,125,130,149,-1,130,125,126,-1,126,131,130,-1,133,128,127,-1,127,132,133,-1,134,129,128,-1,128,133,134,-1,131,126,129,-1,129,134,131,-1,135,96,97,-1,97,136,135,-1,137,91,96,-1,96,135,137,-1,138,114,91,-1,91,137,138,-1,136,97,115,-1,115,139,136,-1,139,115,114,-1,114,138,139,-1,81,84,82,-1,81,85,84,-1,91,114,90,-1,25,110,102,-1,142,145,69,-1,140,141,67,-1,67,65,140,-1,141,143,79,-1,79,67,141,-1,143,144,72,-1,72,79,143,-1,118,123,124,-1,124,119,118,-1,135,139,138,-1,138,137,135,-1,135,136,139,-1,25,35,110,-1,117,110,35,-1,35,42,117,-1,47,122,117,-1,117,42,47,-1,127,122,47,-1,47,52,127,-1,132,127,52,-1,52,57,132,-1,69,145,74,-1,75,74,145,-1,145,146,75,-1,76,75,146,-1,146,147,76,-1,77,76,147,-1,147,148,77,-1,78,77,148,-1,148,149,78,-1,57,78,149,-1,149,132,57,-1,58,55,78,-1,78,57,58,-1,59,56,55,-1,55,58,59,-1,132,149,130,-1,130,133,132,-1,133,130,131,-1,131,134,133,-1,151,150,155,-1,155,156,151,-1,150,152,157,-1,157,155,150,-1,152,153,158,-1,158,157,152,-1,153,154,159,-1,159,158,153,-1,160,161,162,-1,162,163,160,-1,154,160,163,-1,163,159,154,-1,168,164,151,-1,151,156,168,-1,169,165,164,-1,164,168,169,-1,170,166,165,-1,165,169,170,-1,171,167,166,-1,166,170,171,-1,162,161,172,-1,172,173,162,-1,173,172,167,-1,167,171,173,-1,4,3,158,-1,158,159,4,-1,66,4,159,-1,159,163,66,-1,0,1,156,-1,156,155,0,-1,2,0,155,-1,155,157,2,-1,3,2,157,-1,157,158,3,-1,65,66,163,-1,163,162,65,-1,82,83,171,-1,171,170,82,-1,83,140,173,-1,173,171,83,-1,1,80,168,-1,168,156,1,-1,80,81,169,-1,169,168,80,-1,81,82,170,-1,170,169,81,-1,140,65,162,-1,162,173,140,-1});
  }
}
private class MFInt3272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,0,-1,0,1,2,-1,3,6,4,-1,4,5,3,-1,3,5,0,-1,20,21,18,-1,18,19,20,-1,21,23,22,-1,22,18,21,-1,26,27,24,-1,24,25,26,-1,29,26,25,-1,25,28,29,-1,27,26,30,-1,30,31,27,-1,26,29,32,-1,32,30,26,-1,24,35,33,-1,33,34,24,-1,25,24,34,-1,34,36,25,-1,25,36,37,-1,37,28,25,-1,40,41,38,-1,38,39,40,-1,41,29,28,-1,28,38,41,-1,41,40,42,-1,42,43,41,-1,29,41,43,-1,43,32,29,-1,39,38,44,-1,44,45,39,-1,38,28,37,-1,37,44,38,-1,23,42,22,-1,48,162,161,-1,161,47,48,-1,49,51,50,-1,50,46,49,-1,51,40,39,-1,39,50,51,-1,163,48,164,-1,164,181,163,-1,51,49,18,-1,18,22,51,-1,40,51,22,-1,22,42,40,-1,47,166,165,-1,165,53,47,-1,46,50,54,-1,54,52,46,-1,50,39,45,-1,45,54,50,-1,36,34,55,-1,55,56,36,-1,52,54,57,-1,57,58,52,-1,56,55,59,-1,59,60,56,-1,62,56,60,-1,60,61,62,-1,63,36,56,-1,56,62,63,-1,45,64,54,-1,54,64,65,-1,65,57,54,-1,63,62,65,-1,65,64,63,-1,58,57,66,-1,66,67,58,-1,57,65,68,-1,68,66,57,-1,65,62,61,-1,61,68,65,-1,60,59,69,-1,69,70,60,-1,61,60,70,-1,70,71,61,-1,67,66,72,-1,72,73,67,-1,68,61,71,-1,71,74,68,-1,70,69,75,-1,75,76,70,-1,71,70,76,-1,76,77,71,-1,73,72,78,-1,78,79,73,-1,72,74,80,-1,80,78,72,-1,74,71,77,-1,77,80,74,-1,76,75,81,-1,81,82,76,-1,77,76,82,-1,82,83,77,-1,79,78,84,-1,84,85,79,-1,78,80,86,-1,86,84,78,-1,80,77,83,-1,83,86,80,-1,45,44,87,-1,87,88,45,-1,44,37,89,-1,89,87,44,-1,37,63,90,-1,90,89,37,-1,64,45,88,-1,88,91,64,-1,63,64,91,-1,91,90,63,-1,7,2,1,-1,23,43,42,-1,37,36,63,-1,53,167,168,-1,34,33,55,-1,9,4,6,-1,6,8,9,-1,93,27,31,-1,31,92,93,-1,35,24,27,-1,27,93,35,-1,74,72,66,-1,66,68,74,-1,90,91,87,-1,87,89,90,-1,87,91,88,-1,10,11,12,-1,12,13,10,-1,14,15,11,-1,11,16,14,-1,11,10,16,-1,94,95,169,-1,169,170,94,-1,96,97,95,-1,95,94,96,-1,98,101,99,-1,99,100,98,-1,100,99,102,-1,102,103,100,-1,104,99,101,-1,101,105,104,-1,106,102,99,-1,99,104,106,-1,33,35,98,-1,98,107,33,-1,107,98,100,-1,100,108,107,-1,109,108,100,-1,100,103,109,-1,110,113,111,-1,111,112,110,-1,103,102,113,-1,113,110,103,-1,114,111,113,-1,113,115,114,-1,115,113,102,-1,102,106,115,-1,116,110,112,-1,112,117,116,-1,109,103,110,-1,110,116,109,-1,97,96,114,-1,118,119,48,-1,48,47,118,-1,120,121,119,-1,119,118,120,-1,112,111,121,-1,121,120,112,-1,171,48,119,-1,119,94,171,-1,94,119,121,-1,121,96,94,-1,96,121,111,-1,111,114,96,-1,122,118,47,-1,47,53,122,-1,123,120,118,-1,118,122,123,-1,117,112,120,-1,120,123,117,-1,124,107,108,-1,108,125,124,-1,126,123,122,-1,122,127,126,-1,128,124,125,-1,125,129,128,-1,129,125,130,-1,130,131,129,-1,125,108,132,-1,132,130,125,-1,117,123,133,-1,134,133,123,-1,123,126,134,-1,134,130,132,-1,132,133,134,-1,135,126,127,-1,127,136,135,-1,137,134,126,-1,126,135,137,-1,131,130,134,-1,134,137,131,-1,138,128,129,-1,129,139,138,-1,139,129,131,-1,131,140,139,-1,141,135,136,-1,136,142,141,-1});
  }
}
private class MFInt3273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,131,137,-1,137,143,140,-1,144,138,139,-1,139,145,144,-1,145,139,140,-1,140,146,145,-1,147,141,142,-1,142,148,147,-1,149,143,141,-1,141,147,149,-1,146,140,143,-1,143,149,146,-1,150,144,145,-1,145,151,150,-1,151,145,146,-1,146,152,151,-1,153,147,148,-1,148,154,153,-1,155,149,147,-1,147,153,155,-1,152,146,149,-1,149,155,152,-1,156,116,117,-1,117,157,156,-1,158,109,116,-1,116,156,158,-1,159,132,109,-1,109,158,159,-1,157,117,133,-1,133,160,157,-1,160,133,132,-1,132,159,160,-1,17,13,12,-1,97,114,115,-1,109,132,108,-1,53,127,122,-1,107,124,33,-1,15,14,9,-1,9,8,15,-1,105,101,93,-1,93,92,105,-1,101,98,35,-1,35,93,101,-1,135,141,143,-1,143,137,135,-1,156,160,159,-1,159,158,156,-1,156,157,160,-1,53,172,127,-1,136,127,173,-1,173,174,136,-1,176,142,136,-1,136,175,176,-1,148,142,177,-1,177,178,148,-1,154,148,179,-1,179,180,154,-1,33,124,55,-1,59,55,124,-1,124,128,59,-1,69,59,128,-1,128,138,69,-1,75,69,138,-1,138,144,75,-1,81,75,144,-1,144,150,81,-1,85,81,150,-1,150,182,85,-1,84,82,81,-1,81,85,84,-1,86,83,82,-1,82,84,86,-1,154,150,151,-1,151,153,154,-1,153,151,152,-1,152,155,153,-1,185,186,183,-1,183,184,185,-1,186,188,187,-1,187,183,186,-1,188,190,189,-1,189,187,188,-1,190,192,191,-1,191,189,190,-1,195,196,193,-1,193,194,195,-1,192,195,194,-1,194,191,192,-1,197,198,185,-1,185,184,197,-1,199,200,198,-1,198,197,199,-1,201,202,200,-1,200,199,201,-1,203,204,202,-1,202,201,203,-1,193,196,205,-1,205,206,193,-1,206,205,204,-1,204,203,206,-1,3,2,189,-1,189,191,3,-1,6,3,191,-1,191,194,6,-1,207,208,184,-1,184,183,207,-1,7,207,183,-1,183,187,7,-1,2,7,187,-1,187,189,2,-1,8,6,194,-1,194,193,8,-1,12,11,203,-1,203,201,12,-1,11,15,206,-1,206,203,11,-1,208,209,197,-1,197,184,208,-1,209,17,199,-1,199,197,209,-1,17,12,201,-1,201,199,17,-1,15,8,193,-1,193,206,15,-1});
  }
}
private class MFVec3f74 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.6928f,14.72f,-1.263f,0f,14.77f,-1.355f,1.47f,14.93f,-0.9099f,2.016f,14.91f,0.2814f,1.573f,14.61f,1.11f,2.914f,14.46f,0.3331f,2.599f,15.36f,-1.406f,3.187f,13.6f,1.543f,2.239f,13.38f,3.23f,0.9629f,15.39f,-3.152f,0f,15.36f,-3.317f,2.035f,15.41f,-2.815f,3.316f,12.32f,2.97f,5.086f,13.13f,2.011f,2.982f,14.24f,2.181f,2.245f,13.38f,3.821f,3.131f,12.64f,3.9f,4.42f,13.94f,2.105f,5.602f,13.73f,0.1863f,5.472f,13.06f,-1.452f,3.439f,15.3f,0.3672f,3.953f,14.44f,-2.227f,5.073f,14.77f,0.3672f,4.655f,13.49f,-1.78f,1.811f,9.837f,-2.43f,0f,9.533f,-2.564f,4.241f,10.8f,-2.043f,1.032f,12.54f,-4.427f,0f,12.54f,-4.562f,2.39f,12.92f,-3.914f,1.677f,9.192f,-3.147f,0f,8.87f,-3.266f,4.12f,10.71f,-3.032f,4.272f,8.132f,4.186f,6.354f,8.764f,1.543f,2.14f,8.582f,-2.362f,4.3f,8.685f,-1.848f,3.695f,5.585f,2.768f,5.081f,5.622f,1.505f,6.096f,10.26f,1.67f,5.904f,10.25f,-0.3303f,5.533f,8.718f,-0.7796f,1.419f,5.473f,-2.22f,3.58f,5.528f,-1.434f,4.793f,5.578f,-0.2489f,3.682f,3.592f,2.824f,5.077f,3.631f,1.527f,1.282f,3.303f,-2.365f,3.586f,3.501f,-1.437f,4.792f,3.575f,-0.2999f,4.178f,1.262f,3.951f,5.76f,1.298f,1.994f,1.52f,1.105f,-3.678f,3.95f,1.115f,-2.536f,5.309f,1.22f,-0.7397f,3.789f,0.1874f,3.209f,5.166f,0.2191f,1.685f,1.593f,0.068f,-2.676f,3.6f,0.0905f,-1.847f,4.841f,0.1375f,-0.4441f,7.399f,13.46f,0.1863f,6.979f,12.64f,-1.452f,6.998f,12.7f,1.899f,6.298f,10.42f,1.67f,6.292f,10.41f,-0.3303f,0f,14.34f,1.73f,0.7806f,14.35f,1.608f,0f,12.15f,3.901f,1.373f,12.69f,3.668f,0f,11.05f,3.845f,1.713f,11.8f,3.668f,1.38f,12.69f,4.137f,0f,11.45f,4.361f,1.593f,12.12f,4.338f,1.579f,8.737f,4.081f,1.292f,5.554f,3.228f,1.281f,3.386f,3.336f,1.635f,1.231f,4.562f,1.595f,0.1486f,3.645f,0f,12.21f,4.06f,-0.6928f,14.72f,-1.263f,-1.47f,14.93f,-0.9099f,-2.016f,14.91f,0.2814f,-1.573f,14.61f,1.11f,-2.914f,14.46f,0.3331f,-2.599f,15.36f,-1.406f,-3.187f,13.6f,1.543f,-2.239f,13.38f,3.23f,-0.9629f,15.39f,-3.152f,-2.035f,15.41f,-2.815f,-3.316f,12.32f,2.97f,-5.086f,13.13f,2.011f,-2.982f,14.24f,2.181f,-2.245f,13.38f,3.821f,-3.131f,12.64f,3.9f,-4.42f,13.94f,2.105f,-5.602f,13.73f,0.1863f,-5.472f,13.06f,-1.452f,-3.439f,15.3f,0.3672f,-3.953f,14.44f,-2.227f,-5.073f,14.77f,0.3672f,-4.655f,13.49f,-1.78f,-1.811f,9.837f,-2.43f,-4.241f,10.8f,-2.043f,-1.032f,12.54f,-4.427f,-2.39f,12.92f,-3.914f,-1.677f,9.192f,-3.147f,-4.12f,10.71f,-3.032f,-4.272f,8.132f,4.186f,-6.354f,8.764f,1.543f,-2.14f,8.582f,-2.362f,-4.3f,8.685f,-1.848f,-3.695f,5.585f,2.768f,-5.081f,5.622f,1.505f,-6.096f,10.26f,1.67f,-5.904f,10.25f,-0.3303f,-5.533f,8.718f,-0.7796f,-1.419f,5.473f,-2.22f,-3.58f,5.528f,-1.434f,-4.793f,5.578f,-0.2489f,-3.682f,3.592f,2.824f,-5.077f,3.631f,1.527f,-1.282f,3.303f,-2.365f,-3.586f,3.501f,-1.437f,-4.792f,3.575f,-0.2999f,-4.178f,1.262f,3.951f,-5.76f,1.298f,1.994f,-1.52f,1.105f,-3.678f,-3.95f,1.115f,-2.536f,-5.309f,1.22f,-0.7397f,-3.789f,0.1874f,3.209f,-5.166f,0.2191f,1.685f,-1.593f,0.068f,-2.676f,-3.6f,0.0905f,-1.847f,-4.841f,0.1375f,-0.4441f,-7.399f,13.46f,0.1863f,-6.979f,12.64f,-1.452f,-6.998f,12.7f,1.899f,-6.298f,10.42f,1.67f,-6.292f,10.41f,-0.3303f,-0.7806f,14.35f,1.608f,-1.373f,12.69f,3.668f,-1.713f,11.8f,3.668f,-1.38f,12.69f,4.137f,-1.593f,12.12f,4.338f,-1.579f,8.737f,4.081f,-1.292f,5.554f,3.228f,-1.281f,3.386f,3.336f,-1.635f,1.231f,4.562f,-1.595f,0.1486f,3.645f,0.5369f,17.77f,-0.941f,0f,17.77f,-1.012f,1.139f,17.77f,-0.6672f,1.562f,17.77f,0.2561f,1.219f,17.77f,0.8985f,0.5424f,14.72f,-0.9523f,0f,14.77f,-1.024f,1.151f,14.93f,-0.6757f,1.578f,14.91f,0.257f,1.232f,14.61f,0.9059f,0.605f,17.9f,1.285f,0f,17.34f,1.379f,0f,14.34f,1.391f,0.6111f,14.35f,1.296f,-0.5369f,17.77f,-0.941f,-1.139f,17.77f,-0.6672f,-1.562f,17.77f,0.2561f,-1.219f,17.77f,0.8985f,-0.5424f,14.72f,-0.9523f,-1.151f,14.93f,-0.6757f,-1.578f,14.91f,0.257f,-1.232f,14.61f,0.9059f,-0.605f,17.9f,1.285f,-0.6111f,14.35f,1.296f});
  }
}
private class MFVec2f75 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.4756f,0.618f,0.4724f,0.6293f,0.4618f,0.6351f,0.4566f,0.6312f,0.4542f,0.6062f,0.4644f,0.6152f,0.4472f,0.6278f,0.4554f,0.6354f,0.4381f,0.6277f,0.4381f,0.5991f,0.4005f,0.618f,0.4195f,0.6312f,0.4143f,0.6351f,0.4037f,0.6293f,0.4219f,0.6062f,0.4289f,0.6278f,0.4117f,0.6152f,0.4207f,0.6354f,0.2661f,0.5914f,0.3505f,0.5919f,0.3554f,0.5911f,0.2505f,0.5754f,0.241f,0.592f,0.2112f,0.5805f,0.0763f,0.4945f,0.1025f,0.5076f,0.0865f,0.5614f,0.0652f,0.5465f,0.1412f,0.5207f,0.1108f,0.5655f,0.0786f,0.5849f,0.0516f,0.5759f,0.1073f,0.5839f,0.0639f,0.4488f,0.0877f,0.4617f,0.0525f,0.4715f,0.1185f,0.4741f,0.1474f,0.4856f,0.1724f,0.5255f,0.2089f,0.5196f,0.2133f,0.556f,0.1645f,0.5709f,0.2067f,0.5908f,0.1632f,0.5887f,0.1708f,0.4854f,0.1963f,0.4863f,0.2708f,0.4736f,0.347f,0.4316f,0.3616f,0.5328f,0.2733f,0.5359f,0.238f,0.493f,0.249f,0.5451f,0.2638f,0.4568f,0.3214f,0.4203f,0.2252f,0.4828f,0.042f,0.406f,0.0909f,0.398f,0.2183f,0.385f,0.3504f,0.3844f,0.0206f,0.3452f,0.0903f,0.3446f,0.1491f,0.3449f,0.1525f,0.3869f,0.1538f,0.4251f,0.1784f,0.4249f,0.1911f,0.3858f,0.2175f,0.3427f,0.3608f,0.3469f,0.1838f,0.3438f,0.0177f,0.3051f,0.0982f,0.302f,0.1487f,0.2975f,0.2175f,0.2944f,0.3621f,0.2922f,0.1849f,0.2961f,0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.2369f,0.2375f,0.3561f,0.2404f,0.1927f,0.24f,0.0206f,0.2122f,0.1067f,0.2154f,0.1463f,0.2162f,0.227f,0.2131f,0.3536f,0.2151f,0.1879f,0.2143f,0.1715f,0.4655f,0.1797f,0.4646f,0.1569f,0.4642f,0.1544f,0.4288f,0.1782f,0.4286f,0.0346f,0.5664f,0.0399f,0.5407f,0.2661f,0.5914f,0.2505f,0.5754f,0.241f,0.592f,0.2112f,0.5805f,0.0763f,0.4945f,0.0865f,0.5614f,0.1025f,0.5076f,0.0652f,0.5465f,0.1108f,0.5655f,0.1412f,0.5207f,0.0786f,0.5849f,0.0516f,0.5759f,0.1073f,0.5839f,0.0877f,0.4617f,0.1185f,0.4741f,0.1474f,0.4857f,0.1724f,0.5255f,0.2133f,0.556f,0.2089f,0.5196f,0.1645f,0.5709f,0.2067f,0.5908f,0.1632f,0.5887f,0.1708f,0.4854f,0.1963f,0.4863f,0.2708f,0.4736f,0.2733f,0.5359f,0.238f,0.493f,0.249f,0.5451f,0.2638f,0.4568f,0.2252f,0.4828f,0.042f,0.406f,0.0909f,0.398f,0.2183f,0.385f,0.3504f,0.3844f,0.0206f,0.3452f,0.0903f,0.3446f,0.1525f,0.3869f,0.1491f,0.3449f,0.1538f,0.4251f,0.1784f,0.4249f,0.1911f,0.3858f,0.2175f,0.3427f,0.3608f,0.3469f,0.1838f,0.3438f,0.0177f,0.3051f,0.0982f,0.302f,0.1487f,0.2975f,0.2175f,0.2944f,0.3621f,0.2922f,0.1849f,0.2961f,0.019f,0.2349f,0.1011f,0.241f,0.1445f,0.2419f,0.2369f,0.2375f,0.3561f,0.2404f,0.1927f,0.24f,0.0206f,0.2122f,0.1067f,0.2154f,0.1463f,0.2162f,0.227f,0.2131f,0.3536f,0.2151f,0.1879f,0.2143f,0.1715f,0.4655f,0.1797f,0.4646f,0.1569f,0.4642f,0.1544f,0.4288f,0.1782f,0.4286f,0.3477f,0.431f,0.3623f,0.5333f,0.3623f,0.5333f,0.3505f,0.5919f,0.3223f,0.4192f,0.3477f,0.431f,0.3223f,0.4192f,0.3518f,0.3851f,0.3554f,0.5911f,0.3505f,0.5919f,0.3505f,0.5919f,0.3518f,0.3851f,0.3518f,0.3851f,0.3629f,0.3439f,0.3629f,0.3439f,0.3633f,0.2922f,0.3633f,0.2922f,0.3553f,0.2398f,0.3553f,0.2398f,0.3555f,0.2151f,0.3511f,0.5932f,0.3536f,0.2151f,0.4444f,0.6326f,0.4381f,0.6333f,0.4381f,0.6725f,0.4444f,0.6725f,0.4516f,0.6354f,0.4515f,0.6725f,0.4566f,0.6351f,0.4565f,0.6725f,0.4526f,0.6312f,0.4524f,0.6725f,0.4381f,0.6277f,0.4453f,0.6278f,0.4452f,0.6742f,0.4381f,0.6669f,0.4317f,0.6326f,0.4317f,0.6725f,0.4245f,0.6354f,0.4246f,0.6725f,0.4195f,0.6351f,0.4197f,0.6725f,0.4235f,0.6312f,0.4237f,0.6725f,0.4309f,0.6742f,0.4309f,0.6278f,0.4462f,0.6326f,0.4381f,0.6333f,0.4299f,0.6326f});
  }
}
private class MFFloat76 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat77 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {58,44,47,-1,47,49,58,-1,49,60,59,-1,59,1,49,-1,56,48,47,-1,47,44,56,-1,50,51,59,-1,59,60,50,-1,173,168,58,-1,58,49,173,-1,171,173,49,-1,49,1,171,-1,14,12,18,-1,18,15,14,-1,162,160,14,-1,14,15,162,-1,16,57,33,-1,21,18,12,-1,18,79,19,-1,80,20,19,-1,11,10,79,-1,18,21,79,-1,11,79,21,-1,21,12,78,-1,11,21,22,-1,321,345,320,-1,322,323,346,-1,80,25,24,-1,24,20,80,-1,26,38,24,-1,23,13,38,-1,20,77,18,-1,18,19,20,-1,38,29,30,-1,30,23,38,-1,27,30,29,-1,27,28,30,-1,30,28,23,-1,33,31,16,-1,31,37,16,-1,28,34,23,-1,17,35,36,-1,36,28,17,-1,33,36,35,-1,17,32,35,-1,32,33,35,-1,33,34,36,-1,36,34,28,-1,10,19,79,-1,4,40,37,-1,40,42,41,-1,40,41,37,-1,40,4,42,-1,56,43,4,-1,4,46,56,-1,45,43,56,-1,56,44,45,-1,43,45,4,-1,48,56,46,-1,46,3,48,-1,50,60,3,-1,51,50,3,-1,3,2,51,-1,58,168,52,-1,52,168,170,-1,61,52,170,-1,4,45,52,-1,52,61,4,-1,52,45,44,-1,44,58,52,-1,61,170,53,-1,170,165,39,-1,39,53,170,-1,4,61,53,-1,53,42,4,-1,53,39,41,-1,41,42,53,-1,165,57,39,-1,13,23,54,-1,16,37,57,-1,41,39,57,-1,37,41,57,-1,57,165,166,-1,54,166,13,-1,33,57,34,-1,34,57,54,-1,34,54,23,-1,166,162,55,-1,55,162,15,-1,77,55,15,-1,15,18,77,-1,166,77,13,-1,77,166,55,-1,13,77,24,-1,24,38,13,-1,20,24,77,-1,54,57,166,-1,47,60,49,-1,48,3,47,-1,3,60,47,-1,3,63,2,-1,72,62,63,-1,3,65,63,-1,3,46,64,-1,64,66,3,-1,6,66,64,-1,3,66,65,-1,6,73,8,-1,8,73,67,-1,6,75,73,-1,5,71,73,-1,73,75,5,-1,6,70,75,-1,64,46,69,-1,75,70,69,-1,75,69,344,-1,2,63,62,-1,8,66,6,-1,63,8,72,-1,9,74,71,-1,68,74,9,-1,74,8,67,-1,68,72,74,-1,72,8,74,-1,67,71,74,-1,67,73,71,-1,65,8,63,-1,65,66,8,-1,70,6,64,-1,70,64,69,-1,4,0,344,-1,69,46,4,-1,69,4,344,-1,76,344,0,-1,5,76,0,-1,5,75,76,-1,75,344,76,-1,133,125,123,-1,123,120,133,-1,125,1,59,-1,59,134,125,-1,131,120,123,-1,123,124,131,-1,126,134,59,-1,59,51,126,-1,172,125,133,-1,133,167,172,-1,171,1,125,-1,125,172,171,-1,14,91,94,-1,94,12,14,-1,161,91,14,-1,14,160,161,-1,109,132,92,-1,12,94,97,-1,95,149,94,-1,95,96,150,-1,149,88,89,-1,149,97,94,-1,97,149,89,-1,78,12,97,-1,98,97,89,-1,325,348,324,-1,354,326,327,-1,150,96,100,-1,100,101,150,-1,100,114,102,-1,114,90,99,-1,96,95,94,-1,94,148,96,-1,114,99,106,-1,106,105,114,-1,105,106,103,-1,106,104,103,-1,99,104,106,-1,92,107,109,-1,92,113,107,-1,99,110,104,-1,93,104,112,-1,112,111,93,-1,111,112,109,-1,111,108,93,-1,111,109,108,-1,112,110,109,-1,104,110,112,-1,149,95,88,-1,113,116,83,-1,117,118,116,-1,113,117,116,-1,118,83,116,-1,131,122,83,-1,83,119,131,-1,121,120,131,-1,131,119,121,-1,83,121,119,-1,124,82,122,-1,122,131,124,-1,82,134,126,-1,51,2,82,-1,82,126,51,-1,127,167,133,-1,169,167,127,-1,169,127,135,-1,83,135,127,-1,127,121,83,-1,127,133,120,-1,120,121,127,-1,128,169,135,-1,169,128,115,-1,115,163,169,-1});
  }
}
private class MFInt3279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {83,118,128,-1,128,135,83,-1,128,118,117,-1,117,115,128,-1,115,132,163,-1,129,99,90,-1,132,113,92,-1,132,115,117,-1,132,117,113,-1,164,163,132,-1,90,164,129,-1,110,132,109,-1,129,132,110,-1,99,129,110,-1,130,161,164,-1,91,161,130,-1,148,94,91,-1,91,130,148,-1,90,148,164,-1,130,164,148,-1,90,114,100,-1,100,148,90,-1,148,100,96,-1,164,132,129,-1,125,134,123,-1,123,82,124,-1,123,134,82,-1,2,136,82,-1,136,62,72,-1,136,138,82,-1,82,139,137,-1,137,122,82,-1,137,139,85,-1,138,139,82,-1,87,144,85,-1,140,144,87,-1,144,146,85,-1,84,146,144,-1,144,143,84,-1,146,142,85,-1,141,122,137,-1,141,142,146,-1,347,141,146,-1,62,136,2,-1,85,139,87,-1,72,87,136,-1,143,145,9,-1,9,145,68,-1,145,140,87,-1,68,145,72,-1,72,145,87,-1,145,143,140,-1,143,144,140,-1,136,87,138,-1,87,139,138,-1,137,85,142,-1,141,137,142,-1,347,81,83,-1,83,122,141,-1,347,83,141,-1,81,347,147,-1,81,147,84,-1,147,146,84,-1,147,347,146,-1,162,166,152,-1,151,160,162,-1,162,152,151,-1,152,166,165,-1,165,154,152,-1,154,165,170,-1,170,156,154,-1,152,154,155,-1,155,151,152,-1,156,153,155,-1,155,154,156,-1,173,156,170,-1,170,168,173,-1,171,153,156,-1,156,173,171,-1,157,164,161,-1,151,157,161,-1,161,160,151,-1,157,158,163,-1,163,164,157,-1,158,159,169,-1,169,163,158,-1,157,151,155,-1,155,158,157,-1,159,158,155,-1,155,153,159,-1,172,167,169,-1,169,159,172,-1,171,172,159,-1,159,153,171,-1,355,237,223,-1,174,236,237,-1,236,174,175,-1,179,238,176,-1,179,176,177,-1,179,177,178,-1,178,174,179,-1,174,178,175,-1,180,226,236,-1,238,180,236,-1,180,230,226,-1,237,236,223,-1,223,236,218,-1,225,355,223,-1,223,224,225,-1,328,329,239,-1,330,331,350,-1,228,227,219,-1,219,222,228,-1,236,226,218,-1,174,237,0,-1,0,237,355,-1,0,179,174,-1,318,355,225,-1,220,228,222,-1,221,228,220,-1,5,0,355,-1,218,182,223,-1,183,223,182,-1,181,183,185,-1,181,185,242,-1,213,212,244,-1,244,246,213,-1,213,246,245,-1,245,214,213,-1,245,247,184,-1,184,214,245,-1,214,184,206,-1,206,207,214,-1,217,319,225,-1,225,224,217,-1,183,181,217,-1,217,224,183,-1,224,223,183,-1,226,209,218,-1,218,209,184,-1,182,185,183,-1,218,184,182,-1,207,208,232,-1,232,214,207,-1,232,215,214,-1,209,206,184,-1,186,192,190,-1,190,188,186,-1,197,192,208,-1,208,207,197,-1,190,222,219,-1,219,188,190,-1,194,195,190,-1,226,189,209,-1,187,189,226,-1,192,186,208,-1,191,216,205,-1,196,205,216,-1,195,196,216,-1,196,195,194,-1,209,189,198,-1,199,197,207,-1,207,206,199,-1,233,234,197,-1,197,199,233,-1,209,198,199,-1,199,206,209,-1,233,199,198,-1,198,200,233,-1,248,194,202,-1,201,205,250,-1,248,249,196,-1,196,194,248,-1,196,249,250,-1,250,205,196,-1,234,203,197,-1,203,192,197,-1,194,190,202,-1,200,198,189,-1,189,204,200,-1,202,190,192,-1,202,192,203,-1,205,210,191,-1,210,205,201,-1,220,222,193,-1,204,189,187,-1,187,210,204,-1,210,201,204,-1,210,187,191,-1,195,211,190,-1,195,193,211,-1,193,222,211,-1,211,222,190,-1,215,212,213,-1,213,214,215,-1,230,187,226,-1,230,191,187,-1,229,221,230,-1,229,228,221,-1,9,355,318,-1,5,355,71,-1,71,355,9,-1,231,247,185,-1,182,231,185,-1,184,231,182,-1,184,247,231,-1,238,230,180,-1,230,221,191,-1,221,235,191,-1,191,235,216,-1});
  }
}
private class MFInt3280 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {221,220,235,-1,193,235,220,-1,216,235,193,-1,193,195,216,-1,250,249,233,-1,203,234,248,-1,234,233,249,-1,250,233,200,-1,249,248,234,-1,243,241,240,-1,241,243,247,-1,204,201,250,-1,200,204,250,-1,203,248,202,-1,247,243,242,-1,247,242,185,-1,332,333,349,-1,334,335,7,-1,292,304,353,-1,304,303,251,-1,252,251,303,-1,253,305,256,-1,254,253,256,-1,256,251,255,-1,255,254,256,-1,252,255,251,-1,303,295,257,-1,303,257,305,-1,295,298,257,-1,292,303,304,-1,288,303,292,-1,294,352,292,-1,292,353,294,-1,336,337,293,-1,306,338,339,-1,296,291,219,-1,219,227,296,-1,288,295,303,-1,81,304,251,-1,353,304,81,-1,251,256,81,-1,294,353,317,-1,291,296,289,-1,289,296,290,-1,353,81,84,-1,292,258,288,-1,258,292,259,-1,261,259,181,-1,242,261,181,-1,285,309,244,-1,244,212,285,-1,285,286,308,-1,308,309,285,-1,308,286,260,-1,260,310,308,-1,286,281,280,-1,280,260,286,-1,217,352,294,-1,294,319,217,-1,259,352,217,-1,217,181,259,-1,259,292,352,-1,288,282,295,-1,260,282,288,-1,259,261,258,-1,258,260,288,-1,281,286,232,-1,232,208,281,-1,286,215,232,-1,260,280,282,-1,186,188,264,-1,264,266,186,-1,271,281,208,-1,208,266,271,-1,264,188,219,-1,219,291,264,-1,264,269,268,-1,282,263,295,-1,295,263,262,-1,208,186,266,-1,279,287,265,-1,287,279,270,-1,287,270,269,-1,268,269,270,-1,272,263,282,-1,273,280,281,-1,281,271,273,-1,300,273,271,-1,271,301,300,-1,282,280,273,-1,273,272,282,-1,300,274,272,-1,272,273,300,-1,276,268,311,-1,313,279,275,-1,311,268,270,-1,270,312,311,-1,270,279,313,-1,313,312,270,-1,271,277,301,-1,271,266,277,-1,276,264,268,-1,274,278,263,-1,263,272,274,-1,266,264,276,-1,277,266,276,-1,265,283,279,-1,275,279,283,-1,267,291,289,-1,278,283,262,-1,262,263,278,-1,278,275,283,-1,265,262,283,-1,264,284,269,-1,284,267,269,-1,284,291,267,-1,264,291,284,-1,285,212,215,-1,215,286,285,-1,295,262,298,-1,262,265,298,-1,298,290,297,-1,290,296,297,-1,317,353,9,-1,143,353,84,-1,9,353,143,-1,261,310,299,-1,261,299,258,-1,258,299,260,-1,299,310,260,-1,257,298,305,-1,265,290,298,-1,265,302,290,-1,287,302,265,-1,302,289,290,-1,289,302,267,-1,287,269,267,-1,267,302,287,-1,300,312,313,-1,311,301,277,-1,312,300,301,-1,274,300,313,-1,301,311,312,-1,240,307,243,-1,310,243,307,-1,313,275,278,-1,313,278,274,-1,276,311,277,-1,242,243,310,-1,261,242,310,-1,351,340,341,-1,86,342,343,-1,244,314,315,-1,315,246,244,-1,246,315,247,-1,247,245,246,-1,244,309,316,-1,316,314,244,-1,309,308,310,-1,310,316,309,-1,175,176,238,-1,238,236,175,-1,177,176,175,-1,175,178,177,-1,252,303,305,-1,305,253,252,-1,254,255,252,-1,252,253,254,-1,318,225,319,-1,319,9,318,-1,317,9,319,-1,319,294,317,-1});
  }
}
private class MFInt3281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,48,50,49,-1,49,44,48,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,117,120,119,-1,119,118,117,-1,120,123,122,-1,122,121,120,-1,124,118,119,-1,119,125,124,-1,126,121,122,-1,122,127,126,-1,128,120,117,-1,117,129,128,-1,130,123,120,-1,120,128,130,-1,14,132,131,-1,131,17,14,-1,133,132,14,-1,14,19,133,-1,136,135,134,-1,17,131,137,-1,139,138,131,-1,139,141,140,-1,138,143,142,-1,138,137,131,-1,137,138,142,-1,30,17,144,-1,145,137,142,-1,144,145,146,-1,30,144,146,-1,140,141,148,-1,148,147,140,-1,148,150,149,-1,150,152,151,-1,141,139,131,-1,131,153,141,-1,150,151,155,-1,155,154,150,-1,154,155,156,-1,155,157,156,-1,151,157,155,-1,134,158,136,-1,134,159,158,-1,151,160,157,-1,161,157,163,-1,163,162,161,-1,162,163,136,-1,162,164,161,-1,162,136,164,-1,163,160,136,-1,157,160,163,-1,138,139,143,-1,159,166,165,-1,168,167,166,-1,159,168,166,-1,167,165,166,-1,124,170,165,-1,165,169,124,-1,171,172,124,-1,124,169,171,-1,165,171,169,-1,125,173,170,-1,170,124,125,-1,173,121,126,-1,127,174,173,-1,173,126,127,-1,175,129,117,-1,176,129,175,-1,176,175,177,-1,165,177,175,-1,175,171,165,-1,175,117,172,-1,172,171,175,-1,178,176,177,-1,176,178,180,-1,180,179,176,-1});
  }
}
private class MFInt3282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {165,167,178,-1,178,177,165,-1,178,167,168,-1,168,180,178,-1,180,135,179,-1,181,151,152,-1,135,159,134,-1,135,180,168,-1,135,168,159,-1,182,179,135,-1,152,182,181,-1,160,135,136,-1,181,135,160,-1,151,181,160,-1,183,133,182,-1,132,133,183,-1,153,131,132,-1,132,183,153,-1,152,184,182,-1,183,182,184,-1,152,150,148,-1,148,184,152,-1,184,148,141,-1,182,135,181,-1,120,121,119,-1,119,173,125,-1,119,121,173,-1,72,186,185,-1,187,76,77,-1,186,188,185,-1,185,191,190,-1,190,189,185,-1,190,191,192,-1,188,191,185,-1,194,193,192,-1,195,193,194,-1,193,196,192,-1,197,200,199,-1,199,198,197,-1,200,202,201,-1,203,189,190,-1,204,202,200,-1,205,203,196,-1,96,186,72,-1,192,191,194,-1,97,194,186,-1,207,206,100,-1,101,208,103,-1,206,195,194,-1,104,206,97,-1,97,206,194,-1,208,198,209,-1,198,199,209,-1,187,211,210,-1,211,212,210,-1,190,192,213,-1,203,190,213,-1,216,215,214,-1,217,189,203,-1,205,217,203,-1,215,216,218,-1,215,218,219,-1,220,196,197,-1,220,205,196,-1,18,69,221,-1,222,19,18,-1,18,221,222,-1,221,69,67,-1,67,223,221,-1,223,67,63,-1,63,224,223,-1,221,223,225,-1,225,222,221,-1,224,226,225,-1,225,223,224,-1,11,224,63,-1,63,12,11,-1,13,226,224,-1,224,11,13,-1,227,182,133,-1,222,227,133,-1,133,19,222,-1,227,228,179,-1,179,182,227,-1,228,229,176,-1,176,179,228,-1,227,222,225,-1,225,228,227,-1,229,228,225,-1,225,230,229,-1,128,129,176,-1,176,229,128,-1,130,128,229,-1,229,230,130,-1,233,232,231,-1,235,234,232,-1,234,235,236,-1,239,238,237,-1,239,237,240,-1,239,240,241,-1,241,235,239,-1,235,241,236,-1,243,242,234,-1,238,243,234,-1,243,244,242,-1,232,234,231,-1,231,234,245,-1,246,233,231,-1,231,247,246,-1,247,246,233,-1,231,247,233,-1,248,251,250,-1,250,249,248,-1,234,242,245,-1,235,232,252,-1,252,232,233,-1,252,239,235,-1,253,233,246,-1,254,248,249,-1,255,248,254,-1,256,252,233,-1,245,257,231,-1,258,231,257,-1,261,260,259,-1,261,259,262,-1,263,266,265,-1,265,264,263,-1,263,264,268,-1,268,267,263,-1,268,270,269,-1,269,267,268,-1,267,269,272,-1,272,271,267,-1,273,274,246,-1,246,247,273,-1,258,275,273,-1,273,247,258,-1,247,231,258,-1,278,277,276,-1,276,277,269,-1,279,259,260,-1,276,269,279,-1,271,281,280,-1,280,267,271,-1,280,282,267,-1,277,272,269,-1,284,287,286,-1,286,285,284,-1,288,287,281,-1,281,271,288,-1,286,249,250,-1,250,285,286,-1,290,289,286,-1,278,291,277,-1,292,291,278,-1,287,284,283,-1,295,294,293,-1,296,293,294,-1,289,296,294,-1,296,289,290,-1,277,291,297,-1,298,288,271,-1,271,272,298,-1,299,300,288,-1,288,298,299,-1,277,297,298,-1,298,272,277,-1,299,298,297,-1,297,301,299,-1,303,290,302,-1,305,293,304,-1,303,306,296,-1,296,290,303,-1,296,306,304,-1,304,293,296,-1,300,307,288,-1,307,287,288,-1,290,286,302,-1,301,297,291,-1,291,308,301,-1,302,286,287,-1,309,287,307,-1,293,310,295,-1,310,293,305,-1,254,249,311,-1,308,291,292,-1,292,310,308,-1,310,305,308,-1,310,292,295,-1,289,312,286,-1,289,311,312,-1,311,249,312,-1,312,249,286,-1,282,266,263,-1,263,267,282,-1,313,292,278,-1,313,295,292,-1,314,255,313,-1,314,248,255,-1,315,233,253,-1,256,233,316,-1,316,233,315,-1,317,270,259,-1,279,317,259,-1,269,317,279,-1,269,270,317,-1,238,244,243,-1,313,255,295,-1,255,318,295,-1,295,318,294,-1});
  }
}
private class MFInt3283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {255,254,318,-1,311,318,254,-1,294,318,311,-1,311,289,294,-1,304,306,299,-1,307,300,303,-1,300,299,306,-1,304,299,301,-1,306,303,300,-1,321,320,319,-1,320,321,270,-1,308,305,304,-1,301,308,304,-1,307,303,309,-1,270,321,262,-1,270,262,259,-1,252,322,239,-1,252,256,322,-1,231,232,233,-1,232,234,235,-1,236,235,234,-1,237,238,239,-1,240,237,239,-1,239,235,241,-1,241,240,239,-1,236,241,235,-1,234,242,243,-1,234,243,238,-1,242,244,243,-1,231,234,232,-1,245,234,231,-1,246,247,231,-1,231,233,246,-1,233,246,247,-1,233,247,231,-1,323,324,250,-1,250,251,323,-1,245,242,234,-1,252,232,235,-1,233,232,252,-1,235,239,252,-1,246,233,253,-1,324,323,325,-1,325,323,326,-1,233,252,256,-1,231,257,245,-1,257,231,258,-1,329,328,327,-1,330,329,327,-1,331,332,265,-1,265,266,331,-1,331,334,333,-1,333,332,331,-1,333,334,336,-1,336,335,333,-1,334,338,337,-1,337,336,334,-1,273,247,246,-1,246,274,273,-1,258,247,273,-1,273,275,258,-1,258,231,247,-1,341,340,339,-1,336,340,341,-1,328,329,342,-1,342,336,341,-1,338,334,280,-1,280,343,338,-1,334,282,280,-1,336,337,340,-1,284,285,345,-1,345,344,284,-1,346,338,343,-1,343,344,346,-1,345,285,250,-1,250,324,345,-1,345,348,347,-1,340,349,339,-1,339,349,350,-1,283,284,344,-1,353,352,351,-1,352,353,354,-1,352,354,348,-1,347,348,354,-1,355,349,340,-1,356,337,338,-1,338,346,356,-1,357,356,346,-1,346,358,357,-1,340,337,356,-1,356,355,340,-1,357,359,355,-1,355,356,357,-1,361,347,360,-1,363,353,362,-1,360,347,354,-1,354,364,360,-1,354,353,363,-1,363,364,354,-1,346,365,358,-1,346,344,365,-1,361,345,347,-1,359,366,349,-1,349,355,359,-1,344,345,361,-1,365,344,367,-1,351,368,353,-1,362,353,368,-1,369,324,325,-1,366,368,350,-1,350,349,366,-1,366,362,368,-1,351,350,368,-1,345,370,348,-1,370,369,348,-1,370,324,369,-1,345,324,370,-1,331,266,282,-1,282,334,331,-1,339,350,371,-1,350,351,371,-1,371,326,372,-1,326,323,372,-1,253,233,315,-1,316,233,256,-1,315,233,316,-1,329,335,373,-1,329,373,342,-1,342,373,336,-1,373,335,336,-1,243,244,238,-1,351,326,371,-1,351,374,326,-1,352,374,351,-1,374,325,326,-1,325,374,369,-1,352,348,369,-1,369,374,352,-1,357,364,363,-1,360,358,365,-1,364,357,358,-1,359,357,363,-1,358,360,364,-1,319,376,375,-1,335,375,376,-1,363,362,366,-1,363,366,359,-1,367,360,365,-1,330,375,335,-1,329,330,335,-1,239,322,252,-1,322,256,252,-1,265,378,377,-1,377,264,265,-1,264,377,270,-1,270,268,264,-1,265,332,379,-1,379,378,265,-1,332,333,335,-1,335,379,332,-1,380,383,382,-1,382,381,380,-1,384,383,380,-1,380,385,384,-1,380,381,382,-1,382,383,380,-1,384,385,380,-1,380,383,384,-1,253,246,274,-1,274,100,253,-1,253,100,274,-1,274,246,253,-1});
  }
}
private class MFVec3f84 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {4.734f,2.295f,-0.478f,0f,7.925f,-7.347f,0f,2.738f,-7.551f,2.596f,3.055f,-7.113f,5.82f,3.915f,-2.239f,3.712f,1.225f,-2.29f,3.261f,1.453f,-4.252f,5.658f,2.599f,-1.983f,1.82f,1.289f,-5.164f,0f,0.1375f,-3.592f,2.395f,4.95f,6.346f,0.7761f,4.912f,6.883f,0f,9.74f,6.859f,4.408f,9.203f,3.673f,0f,11.25f,5.65f,2.225f,10.89f,5.304f,5.962f,4.414f,1.165f,4.041f,0.8383f,3.523f,1.972f,9.601f,6.357f,2.537f,7.001f,6.362f,3.694f,6.649f,5.287f,0.4475f,7.341f,7.362f,0.513f,6.698f,7.119f,4.843f,6.188f,3.431f,3.886f,6.593f,4.951f,3.681f,5.194f,5.001f,3.826f,5.001f,4.664f,3.284f,2.472f,4.49f,4.543f,4.124f,3.499f,3.859f,3.861f,4.364f,4.575f,3.792f,4.006f,5.065f,1.183f,1.247f,4.863f,1.73f,2.37f,5.256f,2.695f,2.024f,5.549f,5.532f,2.714f,5.161f,2.035f,2.722f,5.442f,3.878f,2.887f,6.111f,4.389f,0.2634f,4.062f,5.868f,4.221f,6.007f,7.856f,-0.5637f,7.021f,1.661f,-0.9157f,6.568f,4.855f,-0.7308f,6.326f,4.691f,-1.55f,6.23f,0.8303f,-3.441f,4.977f,5.364f,-5.673f,6.326f,4.656f,-2.95f,4.216f,3.427f,-5.131f,3.522f,5.818f,-7.166f,3.424f,1.86f,-7.278f,2.479f,7.925f,-6.757f,1.927f,1.981f,-8.89f,0f,3.753f,-8.454f,5.584f,7.691f,-2.78f,5.853f,7.683f,-1.772f,5.181f,8.476f,2.104f,3.038f,10.79f,4.444f,5.123f,3.032f,-5.304f,5.664f,8.061f,0.8754f,4.721f,7.925f,-5.258f,0f,5.519f,-7.965f,2.479f,5.82f,-7.483f,5.595f,7.63f,-2.141f,0f,0.1227f,-8.281f,1.173f,1.832f,-6.114f,3.978f,2.324f,-4.64f,2.917f,-0.9285f,-7.31f,3.323f,2.08f,-5.371f,1.968f,-1.561f,-5.013f,0f,-0.9435f,-6.54f,4.713f,2.444f,-3.477f,4.42f,-0.2924f,-4.477f,1.411f,0.5541f,-3.484f,0f,1.035f,-6.031f,2.275f,0.8807f,-3.763f,0.9407f,0.7103f,-4.537f,3.818f,1.729f,-3.139f,4.664f,1.866f,-1.436f,3.657f,9.188f,4.96f,0f,7.548f,7.405f,1.559f,7.266f,7.008f,2.791f,5.041f,6.017f,-4.734f,2.295f,-0.478f,-2.596f,3.055f,-7.113f,-5.82f,3.915f,-2.239f,-3.712f,1.225f,-2.29f,-3.261f,1.453f,-4.252f,-5.658f,2.599f,-1.983f,-1.82f,1.289f,-5.164f,-2.395f,4.95f,6.346f,-0.7761f,4.912f,6.883f,-4.408f,9.203f,3.673f,-2.225f,10.89f,5.304f,-5.962f,4.414f,1.165f,-4.041f,0.8383f,3.523f,-1.972f,9.601f,6.357f,-2.537f,7.001f,6.362f,-3.694f,6.649f,5.287f,-0.4475f,7.341f,7.362f,-0.513f,6.698f,7.119f,-4.843f,6.188f,3.431f,-3.886f,6.593f,4.951f,-3.681f,5.194f,5.001f,-3.826f,5.001f,4.664f,-3.284f,2.472f,4.49f,-4.543f,4.124f,3.499f,-3.859f,3.861f,4.364f,-4.575f,3.792f,4.006f,-5.065f,1.183f,1.247f,-4.863f,1.73f,2.37f,-5.256f,2.695f,2.024f,-5.549f,5.532f,2.714f,-5.161f,2.035f,2.722f,-5.442f,3.878f,2.887f,-6.111f,4.389f,0.2634f,-4.062f,5.868f,4.221f,-6.007f,7.856f,-0.5637f,-7.021f,1.661f,-0.9157f,-6.568f,4.855f,-0.7308f,-6.326f,4.691f,-1.55f,-6.23f,0.8303f,-3.441f,-4.977f,5.364f,-5.673f,-6.326f,4.656f,-2.95f,-4.216f,3.427f,-5.131f,-3.522f,5.818f,-7.166f,-3.424f,1.86f,-7.278f,-2.479f,7.925f,-6.757f,-1.927f,1.981f,-8.89f,-5.584f,7.691f,-2.78f,-5.853f,7.683f,-1.772f,-5.181f,8.476f,2.104f,-3.038f,10.79f,4.444f,-5.123f,3.032f,-5.304f,-5.664f,8.061f,0.8754f,-4.721f,7.925f,-5.258f,-2.479f,5.82f,-7.483f,-5.595f,7.63f,-2.141f,-1.173f,1.832f,-6.114f,-3.978f,2.324f,-4.64f,-2.917f,-0.9285f,-7.31f,-3.323f,2.08f,-5.371f,-1.968f,-1.561f,-5.013f,-4.713f,2.444f,-3.477f,-4.42f,-0.2924f,-4.477f,-1.411f,0.5541f,-3.484f,-2.275f,0.8807f,-3.763f,-0.9407f,0.7103f,-4.537f,-3.818f,1.729f,-3.139f,-4.664f,1.866f,-1.436f,-3.657f,9.188f,4.96f,-1.559f,7.266f,7.008f,-2.791f,5.041f,6.017f,0f,12.89f,2.191f,2.479f,12.6f,2.191f,0f,12.77f,-3.073f,2.479f,13.01f,-0.5905f,0f,13.3f,-0.5905f,2.479f,12.47f,-3.073f,-2.479f,12.6f,2.191f,-2.479f,13.01f,-0.5905f,-2.479f,12.47f,-3.073f,0f,12.19f,4.069f,-2.479f,11.8f,3.665f,2.479f,11.8f,3.665f,-4.738f,11.13f,-0.5905f,-4.581f,10.59f,1.893f,4.738f,11.13f,-0.5905f,4.581f,10.59f,1.893f,-4.776f,9.342f,-4.254f,4.776f,9.342f,-4.254f,-4.651f,10.94f,-2.696f,4.651f,10.94f,-2.696f,0f,10.91f,-6.064f,-2.479f,10.58f,-5.873f,2.479f,10.58f,-5.873f,5.038f,2.087f,0.2634f,5.351f,2.269f,0.2568f,5.575f,4.993f,0.4877f,5.759f,4.313f,-0.6689f,5.672f,3.119f,-0.6884f,5.054f,4.389f,0.2634f,4.617f,3.919f,1.981f,0f,-1.299f,4.283f,2.507f,0.2122f,3.467f,1.252f,-0.7037f,3.753f,2.181f,1.29f,4.703f,1.083f,-0.2065f,4.531f,0f,3.949f,5.823f,4.122f,4.752f,3.434f,0f,4.457f,6.529f,3.843f,3.486f,3.474f,0.6247f,4.287f,6.217f,3.884f,5.34f,4.144f,0.2615f,3.949f,5.823f,2.103f,4.881f,5.78f,1.599f,4.225f,5.429f,2.103f,4.763f,5.713f,2.175f,4.422f,5.292f,1.061f,2.841f,5.24f,3.345f,2.806f,3.987f,2.536f,2.741f,4.559f,3.082f,3.581f,4.206f,3.368f,4.077f,4.055f,1.044f,3.885f,5.454f,1.356f,3.642f,5.241f,3.227f,3.707f,4.111f,3.028f,4.567f,4.683f,2.472f,2.023f,4.722f,0.9194f,2.354f,5.382f,0f,2.998f,5.872f,3.515f,2.199f,3.631f,3.685f,4.225f,3.891f,1.11f,4.559f,6.074f,0f,1.141f,5.968f,0.1458f,1.141f,5.967f,0.4592f,1.442f,5.549f,0f,1.753f,6.811f,3.24f,5.132f,4.832f,0f,-1.23f,3.575f,3.443f,1.22f,3.201f,0f,6.577f,6.529f,1.972f,6.686f,5.769f,3.551f,6.468f,4.66f,1.125f,6.641f,6.224f,2.799f,0.2961f,1.981f,1.438f,-0.7799f,2.92f,2.098f,-0.0622f,0.3894f,4.342f,2.994f,2.484f,0f,9.837f,5.8f,1.972f,10.18f,5.298f,3.829f,8.081f,4.078f,4.754f,5.519f,2.97f,1.641f,0.4521f,4.705f,0f,2.206f,6.446f,2.795f,3.568f,4.497f,1.835f,3.587f,5.011f,3.243f,5.188f,4.826f,4.074f,1.813f,1.489f,4.073f,1.537f,-0.251f,4.798f,4.414f,1.165f,3.561f,1.081f,-1.554f,0f,0.5923f,5.37f,0.2244f,0.5923f,5.37f,0f,-0.2097f,4.949f,0f,0.1669f,5.375f,0f,0.7989f,5.843f,0.4079f,0.7711f,5.733f,0.2244f,0.7989f,5.843f,1.184f,0.5011f,4.895f,1.695f,4.1f,5.387f,2.183f,4.262f,5.159f,2.937f,4.372f,4.659f,-5.038f,2.087f,0.2634f,-5.351f,2.269f,0.2568f,-5.575f,4.993f,0.4877f,-5.759f,4.313f,-0.6689f,-5.672f,3.119f,-0.6884f,-5.054f,4.389f,0.2634f,-4.617f,3.919f,1.981f,-2.507f,0.2122f,3.467f,-1.252f,-0.7037f,3.753f,-2.181f,1.29f,4.703f,-1.083f,-0.2065f,4.531f,-4.122f,4.752f,3.434f,-3.843f,3.486f,3.474f,-0.6247f,4.287f,6.217f,-3.884f,5.34f,4.144f,-0.2615f,3.949f,5.823f,-2.103f,4.881f,5.78f,-1.599f,4.225f,5.429f,-2.103f,4.763f,5.713f,-2.175f,4.422f,5.292f,-1.061f,2.841f,5.24f,-3.345f,2.806f,3.987f,-2.536f,2.741f,4.559f,-3.082f,3.581f,4.206f,-3.368f,4.077f,4.055f,-1.044f,3.885f,5.454f,-1.356f,3.642f,5.241f,-3.227f,3.707f,4.111f,-3.028f,4.567f,4.683f});
  }
}
private class MFVec3f85 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-2.472f,2.023f,4.722f,-0.9194f,2.354f,5.382f,-3.515f,2.199f,3.631f,-3.685f,4.225f,3.891f,-1.11f,4.559f,6.074f,-0.1458f,1.141f,5.967f,-0.4592f,1.442f,5.549f,-3.24f,5.132f,4.832f,-3.443f,1.22f,3.201f,-1.972f,6.686f,5.769f,-3.551f,6.468f,4.66f,-1.125f,6.641f,6.224f,-2.799f,0.2961f,1.981f,-1.438f,-0.7799f,2.92f,-2.098f,-0.0622f,0.3894f,-4.342f,2.994f,2.484f,-1.972f,10.18f,5.298f,-3.829f,8.081f,4.078f,-4.754f,5.519f,2.97f,-1.641f,0.4521f,4.705f,-2.795f,3.568f,4.497f,-1.835f,3.587f,5.011f,-3.243f,5.188f,4.826f,-4.074f,1.813f,1.489f,-4.073f,1.537f,-0.251f,-4.798f,4.414f,1.165f,-3.561f,1.081f,-1.554f,-0.2244f,0.5923f,5.37f,-0.4079f,0.7711f,5.733f,-0.2244f,0.7989f,5.843f,-1.184f,0.5011f,4.895f,-1.695f,4.1f,5.387f,-2.183f,4.262f,5.159f,-2.937f,4.372f,4.659f,0f,0.5907f,5.545f,0.2244f,0.5907f,5.545f,-0.2244f,0.5907f,5.545f,-2.091f,-0.0943f,-1.629f,2.091f,-0.0943f,-1.629f,0f,-0.6349f,1.532f,0.4475f,7.341f,7.362f,0.7761f,4.912f,6.883f,0.7761f,4.912f,6.883f,0.4475f,7.341f,7.362f,-0.7761f,4.912f,6.883f,-0.4475f,7.341f,7.362f,-0.4475f,7.341f,7.362f,-0.7761f,4.912f,6.883f,1.438f,-0.7799f,2.92f,2.098f,-0.0622f,0.3894f,2.799f,0.2961f,1.981f,1.438f,-0.7799f,2.92f,4.734f,2.295f,-0.478f,5.658f,2.599f,-1.983f,4.734f,2.295f,-0.478f,3.712f,1.225f,-2.29f,-3.561f,1.081f,-1.554f,-2.098f,-0.0622f,0.3894f,-1.438f,-0.7799f,2.92f,-2.799f,0.2961f,1.981f,-5.658f,2.599f,-1.983f,-4.734f,2.295f,-0.478f,-3.712f,1.225f,-2.29f,-4.734f,2.295f,-0.478f,5.658f,2.599f,-1.983f,0.513f,6.698f,7.119f,0f,7.548f,7.405f,-5.658f,2.599f,-1.983f,-0.513f,6.698f,7.119f,5.054f,4.389f,0.2634f,3.561f,1.081f,-1.554f,-5.054f,4.389f,0.2634f,-1.438f,-0.7799f,2.92f,-3.561f,1.081f,-1.554f,0f,7.548f,7.405f,3.561f,1.081f,-1.554f});
  }
}
private class MFVec2f86 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.9175f,0.8974f,0.9509f,0.8981f,0.9421f,0.8701f,0.924f,0.8702f,0.9824f,0.8971f,0.9824f,0.8682f,0.9541f,0.8718f,0.9147f,0.8129f,0.9437f,0.8153f,0.9638f,0.8095f,0.9824f,0.809f,0.9461f,0.923f,0.9071f,0.9135f,0.9824f,0.9287f,0.7343f,0.9169f,0.7616f,0.9147f,0.7553f,0.8982f,0.7343f,0.8968f,0.7739f,0.9327f,0.7343f,0.9365f,0.8187f,0.8433f,0.8348f,0.9045f,0.8324f,0.8647f,0.74f,0.8745f,0.761f,0.8768f,0.7497f,0.8755f,0.777f,0.8787f,0.7647f,0.8593f,0.7596f,0.8565f,0.7438f,0.8546f,0.7343f,0.8756f,0.7372f,0.8736f,0.7394f,0.8706f,0.7405f,0.8536f,0.7808f,0.8802f,0.7786f,0.8666f,0.7875f,0.8787f,0.7821f,0.8667f,0.7952f,0.9076f,0.8011f,0.8823f,0.7745f,0.9003f,0.7939f,0.8518f,0.7845f,0.8549f,0.7731f,0.8049f,0.7979f,0.8609f,0.8185f,0.8054f,0.8439f,0.8655f,0.8131f,0.8741f,0.786f,0.7876f,0.8107f,0.8538f,0.8058f,0.8252f,0.8096f,0.8166f,0.8589f,0.7975f,0.8767f,0.8622f,0.8568f,0.8668f,0.8669f,0.8674f,0.9208f,0.8549f,0.8792f,0.7991f,0.8835f,0.8633f,0.9139f,0.8636f,0.9513f,0.84f,0.9824f,0.8358f,0.8845f,0.9021f,0.888f,0.931f,0.8761f,0.9036f,0.8705f,0.9018f,0.8544f,0.902f,0.8538f,0.9345f,0.8173f,0.9068f,0.8156f,0.9257f,0.7753f,0.9186f,0.7832f,0.9041f,0.7338f,0.8385f,0.7279f,0.8339f,0.7208f,0.8401f,0.7397f,0.7767f,0.7338f,0.7681f,0.7338f,0.7727f,0.7192f,0.8201f,0.7171f,0.8352f,0.7139f,0.8364f,0.7127f,0.8419f,0.7175f,0.832f,0.7247f,0.8312f,0.7224f,0.8292f,0.7239f,0.8169f,0.7146f,0.8334f,0.7152f,0.8309f,0.753f,0.7762f,0.7452f,0.772f,0.7409f,0.7703f,0.756f,0.7661f,0.7502f,0.7748f,0.7102f,0.837f,0.7574f,0.7798f,0.7054f,0.8378f,0.7338f,0.8253f,0.7338f,0.8299f,0.7267f,0.8275f,0.7291f,0.8283f,0.7338f,0.8254f,0.7338f,0.7682f,0.7385f,0.7711f,0.7338f,0.7628f,0.7338f,0.82f,0.7437f,0.7597f,0.7429f,0.774f,0.7484f,0.7629f,0.7505f,0.778f,0.7116f,0.8233f,0.7622f,0.7806f,0.7576f,0.779f,0.763f,0.7872f,0.7046f,0.8444f,0.7572f,0.7769f,0.7524f,0.7737f,0.7104f,0.8341f,0.5511f,0.8974f,0.5442f,0.8881f,0.5261f,0.888f,0.5173f,0.916f,0.5142f,0.8897f,0.4859f,0.8861f,0.4859f,0.915f,0.5538f,0.8129f,0.5221f,0.9505f,0.5019f,0.9448f,0.4833f,0.9442f,0.5221f,0.9409f,0.5615f,0.9135f,0.4859f,0.9465f,0.7132f,0.8982f,0.707f,0.9147f,0.6947f,0.9327f,0.6362f,0.8647f,0.6338f,0.9045f,0.6499f,0.8433f,0.7286f,0.8745f,0.7189f,0.8755f,0.7076f,0.8768f,0.7039f,0.8593f,0.6916f,0.8787f,0.7247f,0.8546f,0.709f,0.8565f,0.7314f,0.8736f,0.7292f,0.8706f,0.728f,0.8536f,0.69f,0.8666f,0.6878f,0.8802f,0.6865f,0.8667f,0.6811f,0.8787f,0.6675f,0.8823f,0.6734f,0.9076f,0.6941f,0.9003f,0.6841f,0.8549f,0.6747f,0.8518f,0.6955f,0.8049f,0.6707f,0.8609f,0.65f,0.8054f,0.6247f,0.8655f,0.6555f,0.8741f,0.6826f,0.7876f,0.6628f,0.8252f,0.6579f,0.8538f,0.659f,0.8166f,0.5919f,0.8622f,0.6097f,0.7975f,0.6017f,0.8674f,0.6119f,0.8668f,0.5894f,0.7991f,0.5477f,0.8549f,0.5851f,0.8633f,0.5547f,0.8636f,0.5069f,0.9121f,0.4833f,0.9711f,0.5841f,0.9021f,0.5806f,0.931f,0.5925f,0.9036f,0.5981f,0.9018f,0.6148f,0.9345f,0.6142f,0.902f,0.6513f,0.9068f,0.653f,0.9257f,0.6932f,0.9186f,0.6854f,0.9041f,0.7468f,0.8401f,0.7397f,0.8339f,0.7279f,0.7767f,0.7484f,0.8201f,0.7549f,0.8419f,0.7538f,0.8364f,0.7505f,0.8352f,0.7502f,0.832f,0.7452f,0.8292f,0.7429f,0.8312f,0.7437f,0.8169f,0.753f,0.8334f,0.7524f,0.8309f,0.7267f,0.7703f,0.7224f,0.772f,0.7146f,0.7762f,0.7175f,0.7748f,0.7116f,0.7661f,0.7574f,0.837f,0.7102f,0.7798f,0.7622f,0.8378f,0.7385f,0.8283f,0.7409f,0.8275f,0.7291f,0.7711f,0.7239f,0.7597f,0.7192f,0.7629f,0.7247f,0.774f,0.7171f,0.778f,0.756f,0.8233f,0.7046f,0.7872f,0.71f,0.779f,0.7054f,0.7806f,0.763f,0.8444f,0.7104f,0.7769f,0.7152f,0.7737f,0.7572f,0.8341f,0.7881f,0.9479f,0.7343f,0.9577f,0.8497f,0.9637f,0.9158f,0.9539f,0.7343f,0.9872f,0.9824f,0.9663f,0.6805f,0.9479f,0.6189f,0.9637f,0.5528f,0.9539f,0.4859f,0.9842f,0.4263f,0.6263f,0.4421f,0.6351f,0.4514f,0.6319f,0.4298f,0.637f,0.4385f,0.639f,0.4385f,0.6403f,0.4369f,0.6596f,0.4321f,0.6555f,0.4385f,0.6553f,0.4451f,0.6548f,0.4452f,0.6463f,0.4227f,0.6454f,0.4263f,0.652f,0.4193f,0.6633f,0.4176f,0.6328f,0.4376f,0.6237f,0.4196f,0.6187f,0.3384f,0.9887f,0.2979f,0.9448f,0.2441f,0.9417f,0.2441f,0.9723f,0.4437f,0.6405f,0.4519f,0.6235f,0.3384f,0.9469f,0.414f,0.9365f,0.4566f,0.6329f,0.4157f,0.6257f,0.4137f,0.6192f,0.2959f,0.626f,0.3051f,0.6166f,0.258f,0.6076f,0.2606f,0.6259f,0.2511f,0.6816f,0.2548f,0.6653f,0.2441f,0.6653f,0.2441f,0.6816f,0.2661f,0.696f,0.2636f,0.664f,0.3484f,0.6888f,0.3007f,0.651f,0.2881f,0.7397f,0.3623f,0.7239f,0.4151f,0.6155f,0.4295f,0.6197f,0.4116f,0.6201f,0.4088f,0.6855f,0.4123f,0.7323f,0.4518f,0.7703f,0.364f,0.6372f,0.2441f,0.7326f,0.2496f,0.7705f,0.2441f,0.7109f,0.2441f,0.7705f,0.2441f,0.816f,0.2441f,0.8403f,0.274f,0.8322f,0.2566f,0.816f,0.2949f,0.763f,0.3447f,0.8549f,0.3206f,0.8292f,0.4279f,0.7939f,0.4413f,0.8544f,0.3889f,0.8456f,0.3991f,0.8726f,0.4299f,0.8825f,0.3482f,0.8386f,0.4041f,0.7613f,0.3654f,0.7582f,0.3778f,0.7978f,0.3319f,0.7987f,0.3916f,0.7984f,0.2943f,0.815f,0.3252f,0.8232f,0.3846f,0.8362f,0.4052f,0.8221f,0.3485f,0.831f,0.309f,0.8013f,0.3985f,0.8044f,0.2937f,0.8109f,0.4204f,0.8292f,0.3447f,0.8606f,0.2972f,0.8452f,0.4715f,0.8911f,0.431f,0.9594f,0.4658f,0.6252f,0.465f,0.6281f,0.3226f,0.6487f,0.3993f,0.8753f,0.2441f,0.6554f,0.2548f,0.6554f,0.2557f,0.6351f,0.4544f,0.6426f,0.1498f,0.9887f,0.1903f,0.9448f,0.1498f,0.9469f,0.0742f,0.9365f,0.2323f,0.6076f,0.1853f,0.6166f,0.1923f,0.626f,0.2275f,0.6259f,0.2371f,0.6816f,0.2334f,0.6653f,0.2246f,0.664f,0.2221f,0.696f,0.1875f,0.651f,0.1398f,0.6888f,0.1258f,0.7239f,0.2001f,0.7397f,0.0364f,0.7703f,0.0759f,0.7323f,0.0794f,0.6855f,0.1242f,0.6372f,0.2386f,0.7705f,0.2316f,0.816f,0.2142f,0.8322f,0.1933f,0.763f,0.1676f,0.8292f,0.1435f,0.8549f,0.0602f,0.7939f,0.0469f,0.8544f,0.0583f,0.8825f,0.0891f,0.8726f,0.0992f,0.8456f,0.14f,0.8386f,0.084f,0.7613f,0.1228f,0.7582f,0.1104f,0.7978f,0.1563f,0.7987f,0.0966f,0.7984f,0.163f,0.8232f,0.1939f,0.815f,0.083f,0.8221f,0.1036f,0.8362f,0.1397f,0.831f,0.1792f,0.8013f,0.0897f,0.8044f,0.1944f,0.8109f,0.0678f,0.8292f,0.1435f,0.8606f,0.191f,0.8452f,0.0166f,0.8911f,0.0646f,0.9594f,0.1656f,0.6487f,0.0889f,0.8753f,0.2325f,0.6351f,0.2334f,0.6554f,0.2548f,0.6553f,0.2441f,0.6553f,0.2334f,0.6553f,0.4156f,0.6279f,0.3783f,0.625f,0.3984f,0.649f,0.4325f,0.6718f,0.4443f,0.6446f,0.428f,0.6022f});
  }
}
private class MFFloat87 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat88 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1});
  }
}
private class MFInt3290 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,0,1,-1,3,2,1,-1,61,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,54,35,36,-1,53,54,36,-1,37,53,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,56,55,-1,55,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,58,57,-1,57,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,60,59,-1,59,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1});
  }
}
private class MFVec3f91 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {2.525f,1.246f,-1.68f,3.681f,1.236f,0.0337f,2.408f,1.247f,1.663f,0.4657f,1.264f,0.9556f,0.5379f,1.264f,-1.11f,2.743f,-0.0209f,-2.31f,4.339f,-0.0351f,0.057f,2.581f,-0.0195f,2.307f,-0.1009f,0.0044f,1.33f,-0.0013f,0.0036f,-1.523f,2.72f,-2.534f,-2.31f,4.317f,-2.548f,0.057f,2.559f,-2.533f,2.307f,-0.1233f,-2.509f,1.33f,-0.0237f,-2.51f,-1.523f,2.759f,-3.609f,-2.442f,4.448f,-3.624f,0.0619f,2.588f,-3.608f,2.442f,-0.2497f,-3.583f,1.409f,-0.1443f,-3.583f,-1.61f,2.245f,-1.758f,-1.939f,3.465f,-1.769f,-0.4543f,2.834f,-1.763f,1.629f,1.223f,-1.749f,1.432f,0.8596f,-1.746f,-0.7734f,2.263f,-7.566f,-1.569f,3.531f,-7.577f,-0.378f,2.875f,-7.571f,1.293f,1.202f,-7.556f,1.135f,0.8242f,-7.553f,-0.634f,2.267f,-11.62f,-1.511f,3.487f,-11.63f,-0.3651f,2.856f,-11.62f,1.243f,1.245f,-11.61f,1.091f,0.8817f,-11.6f,-0.6115f,2.213f,-12.17f,-0.8985f,2.928f,-12.17f,-0.2267f,2.558f,-12.17f,0.716f,1.614f,-12.16f,0.6268f,1.401f,-12.16f,-0.3711f});
  }
}
private class MFVec2f92 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.2986f,0.2114f,0.2726f,0.2114f,0.3201f,0.2114f,0.3415f,0.2114f,0.2466f,0.2114f,0.2979f,0.2417f,0.2726f,0.2417f,0.3197f,0.2417f,0.3418f,0.2417f,0.2473f,0.2417f,0.2979f,0.3018f,0.2726f,0.3018f,0.3197f,0.3018f,0.3418f,0.3018f,0.2473f,0.3018f,0.2978f,0.3276f,0.2726f,0.3276f,0.3197f,0.3276f,0.3419f,0.3276f,0.2474f,0.3276f,0.2932f,0.2834f,0.2689f,0.2834f,0.316f,0.2834f,0.3322f,0.2834f,0.245f,0.2834f,0.2251f,0.2114f,0.2255f,0.2417f,0.2255f,0.2417f,0.2255f,0.3018f,0.2255f,0.3018f,0.2255f,0.3276f,0.2255f,0.3276f,0.2159f,0.2834f,0.4315f,0.6736f,0.442f,0.6736f,0.3947f,0.6736f,0.4041f,0.6736f,0.418f,0.6736f,0.4296f,0.6167f,0.4409f,0.6167f,0.4415f,0.6485f,0.4303f,0.6485f,0.3965f,0.6167f,0.3953f,0.6485f,0.4047f,0.6167f,0.4053f,0.6485f,0.4189f,0.6167f,0.418f,0.6485f,0.4415f,0.6706f,0.4306f,0.6706f,0.395f,0.6706f,0.4051f,0.6706f,0.4182f,0.6706f,0.3746f,0.6736f,0.3851f,0.6736f,0.384f,0.6167f,0.3845f,0.6485f,0.3845f,0.6485f,0.3846f,0.6706f,0.3846f,0.6706f,0.3851f,0.6736f,0.3481f,0.2114f});
  }
}
private class MFFloat93 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat94 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt3295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
  }
}
private class MFInt3296 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,25,26,-1,3,2,26,-1,4,3,26,-1,0,1,6,-1,6,5,0,-1,27,2,7,-1,7,28,27,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,29,7,12,-1,12,30,29,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,31,12,17,-1,17,32,31,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,34,22,23,-1,33,34,23,-1,24,33,23,-1,21,20,15,-1,15,16,21,-1,22,36,35,-1,35,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
  }
}
private class MFVec3f97 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.215f,0.3047f,-1.152f,1.155f,0.2966f,-0.2588f,0.6199f,0.3013f,1.04f,-0.6505f,0.3122f,0.9491f,-0.9008f,0.3143f,-0.4054f,0.1442f,-0.8448f,-1.625f,1.472f,-0.8561f,-0.4271f,0.7164f,-0.8496f,1.625f,-1.079f,-0.8342f,1.482f,-1.433f,-0.8312f,-0.6588f,0.1328f,-3.5f,-1.607f,1.551f,-3.513f,-0.4225f,0.781f,-2.925f,1.61f,-1.136f,-2.909f,1.468f,-1.551f,-3.486f,-0.6519f,0.0592f,-8.713f,-1.437f,1.093f,-8.722f,-0.1279f,0.5047f,-8.716f,1.51f,-0.8932f,-8.704f,1.377f,-1.169f,-8.702f,-0.3428f,0.0092f,-9.336f,-0.8855f,0.7154f,-9.342f,0.0084f,0.3135f,-9.339f,1.043f,-0.6412f,-9.331f,0.9519f,-0.8292f,-9.329f,-0.1383f});
  }
}
private class MFVec2f98 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.4222f,0.6201f,0.4327f,0.6201f,0.3884f,0.6201f,0.3987f,0.6201f,0.4103f,0.6201f,0.4213f,0.6265f,0.4321f,0.6265f,0.3894f,0.6265f,0.399f,0.6265f,0.4105f,0.6265f,0.4214f,0.6413f,0.4323f,0.6413f,0.389f,0.6381f,0.3992f,0.6381f,0.4103f,0.6413f,0.4213f,0.6705f,0.4336f,0.6705f,0.3899f,0.6705f,0.3981f,0.6705f,0.4094f,0.6705f,0.4215f,0.674f,0.4346f,0.674f,0.3899f,0.674f,0.398f,0.674f,0.4083f,0.674f,0.3787f,0.6201f,0.3682f,0.6201f,0.3787f,0.6201f,0.3782f,0.6265f,0.3782f,0.6265f,0.3783f,0.6413f,0.3783f,0.6413f,0.3796f,0.6705f,0.3676f,0.674f,0.3806f,0.674f,0.3796f,0.6705f,0.3806f,0.674f});
  }
}
private class MFFloat99 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat100 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32101 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,0,-1,0,2,4,-1,6,7,3,-1,3,1,6,-1,1,0,5,-1,5,6,1,-1,8,9,5,-1,5,4,8,-1,10,11,7,-1,7,6,10,-1,9,10,6,-1,6,5,9,-1,12,13,9,-1,9,8,12,-1,14,15,11,-1,11,10,14,-1,13,14,10,-1,10,9,13,-1,4,2,16,-1,2,3,7,-1,7,16,2,-1,17,19,18,-1,18,20,17,-1,21,16,7,-1,7,11,21,-1,8,21,12,-1,12,21,11,-1,11,15,12,-1,13,12,15,-1,15,14,13,-1,8,4,19,-1,19,17,8,-1,4,16,18,-1,18,19,4,-1,16,21,20,-1,20,18,16,-1,21,8,17,-1,17,20,21,-1,22,27,23,-1,26,25,24,-1});
  }
}
private class MFInt32102 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,6,5,-1,5,7,4,-1,2,3,1,-1,1,0,2,-1,14,16,15,-1,15,17,14,-1,8,9,6,-1,6,4,8,-1,38,40,39,-1,39,41,38,-1,18,19,36,-1,36,37,18,-1,10,11,9,-1,9,8,10,-1,42,43,40,-1,40,38,42,-1,20,21,19,-1,19,18,20,-1,22,24,23,-1,24,26,25,-1,25,23,24,-1,27,29,28,-1,28,30,27,-1,31,23,25,-1,25,32,31,-1,33,31,34,-1,34,31,32,-1,32,35,34,-1,20,34,35,-1,35,21,20,-1,8,4,12,-1,12,13,8,-1,22,23,28,-1,28,29,22,-1,23,31,30,-1,30,28,23,-1,31,33,27,-1,27,30,31,-1,14,24,26,-1,14,16,24,-1});
  }
}
private class MFVec3f103 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {1.247f,0.07f,0.7975f,1.209f,0.0872f,-1.349f,-0.7098f,-0.0015f,0.8912f,-0.7183f,0.0002f,-1.283f,-0.9295f,-0.613f,1.478f,1.647f,-0.4252f,1.388f,1.589f,-0.3921f,-1.989f,-1.044f,-0.5947f,-1.984f,-0.8227f,-2.521f,2.408f,1.951f,-2.334f,2.08f,1.892f,-2.301f,-2.409f,-1.192f,-2.614f,-2.248f,-0.5703f,-3.958f,1.694f,0.8836f,-4.2f,1.75f,0.8251f,-4.167f,-2.071f,-0.7842f,-3.968f,-1.934f,-1.037f,-0.5968f,-0.1872f,-1.642f,-2.561f,1.941f,-1.951f,-0.9492f,0.058f,-1.914f,-1.016f,1.885f,-1.649f,-2.56f,0.1377f,-1.066f,-2.61f,-0.2014f,1.209f,0.0872f,-1.349f,-0.7183f,0.0002f,-1.283f,-0.7098f,-0.0015f,0.8912f,1.247f,0.07f,0.7975f,1.209f,0.0872f,-1.349f,-0.7098f,-0.0015f,0.8912f});
  }
}
private class MFVec2f104 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.8107f,0.9924f,0.8122f,0.9033f,0.7694f,0.9912f,0.7683f,0.9026f,0.1329f,0.0347f,0.0307f,0.0051f,0.0134f,0.0353f,0.1366f,0.0058f,0.1249f,0.1081f,0.0147f,0.117f,0.1349f,0.1856f,0.0462f,0.1842f,0.1559f,0.0454f,0.148f,0.1033f,0.3244f,0.0096f,0.1758f,0.0039f,0.1759f,0.011f,0.3241f,0.0033f,0.173f,0.1764f,0.3074f,0.1757f,0.1732f,0.1519f,0.3074f,0.1513f,0.1756f,0.032f,0.2159f,0.0368f,0.1791f,0.0165f,0.3169f,0.0458f,0.3158f,0.0193f,0.172f,0.0594f,0.2087f,0.0476f,0.1736f,0.0504f,0.2073f,0.064f,0.2362f,0.0821f,0.3267f,0.0796f,0.1717f,0.0822f,0.1726f,0.1297f,0.3077f,0.1289f,0.3074f,0.1865f,0.1742f,0.184f,0.0061f,0.1086f,0.1366f,0.0368f,0.1241f,0.1189f,0.0168f,0.0309f,0.0211f,0.1882f,0.14f,0.1857f});
  }
}
private class MFFloat105 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat106 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32107 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1});
  }
}
private class MFInt32108 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,61,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,54,-1,36,54,53,-1,37,36,53,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,55,-1,55,56,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,57,-1,57,58,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,59,-1,59,60,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1});
  }
}
private class MFVec3f109 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-2.525f,1.246f,-1.68f,-3.681f,1.236f,0.0337f,-2.408f,1.247f,1.663f,-0.4657f,1.264f,0.9556f,-0.5379f,1.264f,-1.11f,-2.743f,-0.0209f,-2.31f,-4.339f,-0.0351f,0.057f,-2.581f,-0.0195f,2.307f,0.1009f,0.0044f,1.33f,0.0013f,0.0036f,-1.523f,-2.72f,-2.534f,-2.31f,-4.317f,-2.548f,0.057f,-2.559f,-2.533f,2.307f,0.1233f,-2.509f,1.33f,0.0237f,-2.51f,-1.523f,-2.759f,-3.609f,-2.442f,-4.448f,-3.624f,0.0619f,-2.588f,-3.608f,2.442f,0.2497f,-3.583f,1.409f,0.1443f,-3.583f,-1.61f,-2.245f,-1.758f,-1.939f,-3.465f,-1.769f,-0.4543f,-2.834f,-1.763f,1.629f,-1.223f,-1.749f,1.432f,-0.8596f,-1.746f,-0.7734f,-2.263f,-7.566f,-1.569f,-3.531f,-7.577f,-0.378f,-2.875f,-7.571f,1.293f,-1.202f,-7.556f,1.135f,-0.8242f,-7.553f,-0.634f,-2.267f,-11.62f,-1.511f,-3.487f,-11.63f,-0.3651f,-2.856f,-11.62f,1.243f,-1.245f,-11.61f,1.091f,-0.8817f,-11.6f,-0.6115f,-2.213f,-12.17f,-0.8985f,-2.928f,-12.17f,-0.2267f,-2.558f,-12.17f,0.716f,-1.614f,-12.16f,0.6268f,-1.401f,-12.16f,-0.3711f});
  }
}
private class MFVec2f110 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.2986f,0.2114f,0.2726f,0.2114f,0.3201f,0.2114f,0.3415f,0.2114f,0.2466f,0.2114f,0.2979f,0.2417f,0.2726f,0.2417f,0.3197f,0.2417f,0.3418f,0.2417f,0.2473f,0.2417f,0.2979f,0.3018f,0.2726f,0.3018f,0.3197f,0.3018f,0.3418f,0.3018f,0.2473f,0.3018f,0.2978f,0.3276f,0.2726f,0.3276f,0.3197f,0.3276f,0.3419f,0.3276f,0.2474f,0.3276f,0.2932f,0.2834f,0.2689f,0.2834f,0.316f,0.2834f,0.3322f,0.2834f,0.245f,0.2834f,0.2251f,0.2114f,0.2255f,0.2417f,0.2255f,0.2417f,0.2255f,0.3018f,0.2255f,0.3018f,0.2255f,0.3276f,0.2255f,0.3276f,0.2159f,0.2834f,0.4315f,0.6736f,0.442f,0.6736f,0.3947f,0.6736f,0.4041f,0.6736f,0.418f,0.6736f,0.4296f,0.6167f,0.4409f,0.6167f,0.4415f,0.6485f,0.4303f,0.6485f,0.3965f,0.6167f,0.3953f,0.6485f,0.4047f,0.6167f,0.4053f,0.6485f,0.4189f,0.6167f,0.418f,0.6485f,0.4415f,0.6706f,0.4306f,0.6706f,0.395f,0.6706f,0.4051f,0.6706f,0.4182f,0.6706f,0.3746f,0.6736f,0.3851f,0.6736f,0.384f,0.6167f,0.3845f,0.6485f,0.3845f,0.6485f,0.3846f,0.6706f,0.3846f,0.6706f,0.3851f,0.6736f,0.3481f,0.2114f});
  }
}
private class MFFloat111 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat112 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32113 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
  }
}
private class MFInt32114 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {26,25,2,-1,26,2,3,-1,4,26,3,-1,0,5,6,-1,6,1,0,-1,27,28,7,-1,7,2,27,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,29,30,12,-1,12,7,29,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,31,32,17,-1,17,12,31,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,34,-1,23,34,33,-1,24,23,33,-1,21,16,15,-1,15,20,21,-1,22,17,35,-1,35,36,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
  }
}
private class MFVec3f115 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.215f,0.3047f,-1.152f,-1.155f,0.2966f,-0.2588f,-0.6199f,0.3013f,1.04f,0.6505f,0.3122f,0.9491f,0.9008f,0.3143f,-0.4054f,-0.1442f,-0.8448f,-1.625f,-1.472f,-0.8561f,-0.4271f,-0.7164f,-0.8496f,1.625f,1.079f,-0.8342f,1.482f,1.433f,-0.8312f,-0.6588f,-0.1328f,-3.5f,-1.607f,-1.551f,-3.513f,-0.4225f,-0.781f,-2.925f,1.61f,1.136f,-2.909f,1.468f,1.551f,-3.486f,-0.6519f,-0.0592f,-8.713f,-1.437f,-1.093f,-8.722f,-0.1279f,-0.5047f,-8.716f,1.51f,0.8932f,-8.704f,1.377f,1.169f,-8.702f,-0.3428f,-0.0092f,-9.336f,-0.8855f,-0.7154f,-9.342f,0.0084f,-0.3135f,-9.339f,1.043f,0.6412f,-9.331f,0.9519f,0.8292f,-9.329f,-0.1383f});
  }
}
private class MFVec2f116 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.4222f,0.6201f,0.4327f,0.6201f,0.3884f,0.6201f,0.3987f,0.6201f,0.4103f,0.6201f,0.4213f,0.6265f,0.4321f,0.6265f,0.3894f,0.6265f,0.399f,0.6265f,0.4105f,0.6265f,0.4214f,0.6413f,0.4323f,0.6413f,0.389f,0.6381f,0.3992f,0.6381f,0.4103f,0.6413f,0.4213f,0.6705f,0.4336f,0.6705f,0.3899f,0.6705f,0.3981f,0.6705f,0.4094f,0.6705f,0.4215f,0.674f,0.4346f,0.674f,0.3899f,0.674f,0.398f,0.674f,0.4083f,0.674f,0.3787f,0.6201f,0.3682f,0.6201f,0.3787f,0.6201f,0.3782f,0.6265f,0.3782f,0.6265f,0.3783f,0.6413f,0.3783f,0.6413f,0.3796f,0.6705f,0.3676f,0.674f,0.3806f,0.674f,0.3796f,0.6705f,0.3806f,0.674f});
  }
}
private class MFFloat117 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFFloat118 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f,0f});
  }
}
private class MFInt32119 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,2,0,-1,0,5,4,-1,6,1,3,-1,3,7,6,-1,1,6,5,-1,5,0,1,-1,8,4,5,-1,5,9,8,-1,10,6,7,-1,7,11,10,-1,9,5,6,-1,6,10,9,-1,12,8,9,-1,9,13,12,-1,14,10,11,-1,11,15,14,-1,13,9,10,-1,10,14,13,-1,4,16,2,-1,2,16,7,-1,7,3,2,-1,17,20,18,-1,18,19,17,-1,21,11,7,-1,7,16,21,-1,8,12,21,-1,12,15,11,-1,11,21,12,-1,13,14,15,-1,15,12,13,-1,8,17,19,-1,19,4,8,-1,4,19,18,-1,18,16,4,-1,16,18,20,-1,20,21,16,-1,21,20,17,-1,17,8,21,-1,22,23,27,-1,26,24,25,-1});
  }
}
private class MFInt32120 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,7,5,-1,5,6,4,-1,2,0,1,-1,1,3,2,-1,14,17,15,-1,15,16,14,-1,8,4,6,-1,6,9,8,-1,38,41,39,-1,39,40,38,-1,18,37,36,-1,36,19,18,-1,10,8,9,-1,9,11,10,-1,42,38,40,-1,40,43,42,-1,20,18,19,-1,19,21,20,-1,22,23,24,-1,24,23,25,-1,25,26,24,-1,27,30,28,-1,28,29,27,-1,31,32,25,-1,25,23,31,-1,33,34,31,-1,34,35,32,-1,32,31,34,-1,20,21,35,-1,35,34,20,-1,8,13,12,-1,12,4,8,-1,22,29,28,-1,28,23,22,-1,23,28,30,-1,30,31,23,-1,31,30,27,-1,27,33,31,-1,14,26,24,-1,14,24,16,-1});
  }
}
private class MFVec3f121 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-1.247f,0.07f,0.7975f,-1.209f,0.0872f,-1.349f,0.7098f,-0.0015f,0.8912f,0.7183f,0.0002f,-1.283f,0.9295f,-0.613f,1.478f,-1.647f,-0.4252f,1.388f,-1.589f,-0.3921f,-1.989f,1.044f,-0.5947f,-1.984f,0.8227f,-2.521f,2.408f,-1.951f,-2.334f,2.08f,-1.892f,-2.301f,-2.409f,1.192f,-2.614f,-2.248f,0.5703f,-3.958f,1.694f,-0.8836f,-4.2f,1.75f,-0.8251f,-4.167f,-2.071f,0.7842f,-3.968f,-1.934f,1.037f,-0.5968f,-0.1872f,1.642f,-2.561f,1.941f,1.951f,-0.9492f,0.058f,1.914f,-1.016f,1.885f,1.649f,-2.56f,0.1377f,1.066f,-2.61f,-0.2014f,-1.209f,0.0872f,-1.349f,0.7183f,0.0002f,-1.283f,0.7098f,-0.0015f,0.8912f,-1.247f,0.07f,0.7975f,-1.209f,0.0872f,-1.349f,0.7098f,-0.0015f,0.8912f});
  }
}
private class MFVec2f122 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.8107f,0.9924f,0.8122f,0.9033f,0.7694f,0.9912f,0.7683f,0.9026f,0.1329f,0.0347f,0.0307f,0.0051f,0.0134f,0.0353f,0.1366f,0.0058f,0.1249f,0.1081f,0.0147f,0.117f,0.1349f,0.1856f,0.0462f,0.1842f,0.1559f,0.0454f,0.148f,0.1033f,0.3244f,0.0096f,0.1758f,0.0039f,0.1759f,0.011f,0.3241f,0.0033f,0.173f,0.1764f,0.3074f,0.1757f,0.1732f,0.1519f,0.3074f,0.1513f,0.1756f,0.032f,0.2159f,0.0368f,0.1791f,0.0165f,0.3169f,0.0458f,0.3158f,0.0193f,0.172f,0.0594f,0.2087f,0.0476f,0.1736f,0.0504f,0.2073f,0.064f,0.2362f,0.0821f,0.3267f,0.0796f,0.1717f,0.0822f,0.1726f,0.1297f,0.3077f,0.1289f,0.3074f,0.1865f,0.1742f,0.184f,0.0061f,0.1086f,0.1366f,0.0368f,0.1241f,0.1189f,0.0168f,0.0309f,0.0211f,0.1882f,0.14f,0.1857f});
  }
}
}
